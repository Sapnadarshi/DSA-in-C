// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int main(){
    string msg,key,temp,rem;
    
    cout<<"Enter the value of Message: ";
    cin>>msg;
    
    cout<<"Enter the value of key: ";
    cin>>key;
    
    int msg_len=msg.length();
    int key_len=key.length();
    
    temp=msg;
    for(int i=0;i<key_len-1;i++){
        temp=temp+'0';
    }
    rem.resize(key_len,'0');
    
    for(int j=0;j<msg_len;j++){
        if(temp[j]!=0){
            for(int k=0;k<key_len;k++){
                temp[j+k]=(temp[j+k]==key[k])?'0':'1';
            }
        }
        cout<<"temp: "<<temp<<endl;
        rem=temp.substr(j+1,key_len);
        cout<<"reminder: "<<rem<<endl;
    }
    string final=msg+rem.substr(0,key_len-1);
    cout<<"final message: "<<final<<endl;
}
