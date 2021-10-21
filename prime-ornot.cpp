#include <iostream>
using namespace std;
int main(){
    int no,i;
    cout<<"Enter the number";
    cin>>no;
    for(i=2;i<no;i++){
        if(no%i==0){
            break;
    }
    }
    if(i!=no){
        cout<<"Not Prime";
      
    }
    else{
        cout<<"Prime";
    }

    return 0;
}