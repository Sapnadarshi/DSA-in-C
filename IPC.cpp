#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

// Define message structure
struct message {
    long msg_type;     // Message type (must be > 0)
    char msg_text[100]; // Message text
};

int main() {
    key_t key;
    int msgid;

    // Generate unique key
    key = ftok("progfile", 65); // Path + ID for unique key

    // Create a message queue
    msgid = msgget(key, 0666 | IPC_CREAT); // Permissions + Create flag

    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    struct message msg;

    // Sender process
    printf("Enter a message to send: ");
    fgets(msg.msg_text, sizeof(msg.msg_text), stdin);
    msg.msg_type = 1; // Set message type

    // Send the message
    if (msgsnd(msgid, &msg, sizeof(msg.msg_text), 0) == -1) {
        perror("msgsnd");
        exit(1);
    }
    printf("Message sent successfully.\n");

    // Receiver process
    if (msgrcv(msgid, &msg, sizeof(msg.msg_text), 1, 0) == -1) {
        perror("msgrcv");
        exit(1);
    }
    printf("Received message: %s\n", msg.msg_text);

    // Delete the message queue
    if (msgctl(msgid, IPC_RMID, NULL) == -1) {
        perror("msgctl");
        exit(1);
    }
    printf("Message queue deleted.\n");

    return 0;
}

