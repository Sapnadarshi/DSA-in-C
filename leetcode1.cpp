#include<iostream>

using namespace std;

int i;
int j;
int count=0;

int main() {
		int nums[]={2,2,3,1,1,4,3,2,2,2};
       int n=10;
       for(i=0;i<n;i++){
        
        for(j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
       }
       if(count > n/2){
        cout<<nums[i]<<endl;
    }
}
