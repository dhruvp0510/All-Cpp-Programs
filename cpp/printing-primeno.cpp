#include <iostream>
using namespace std;
int main(){
    int no,i;
    cout<<"Enter the number";
    cin>>no;
    for(int j=2;j<no;j++){
        for(i=2;i<j;i++){
        if(j%i==0){
            break;
        }
    }
    if(i!=j){
      
    }
    else{
        cout<<j<<" ";
    }
    }
    
    return 0;
}