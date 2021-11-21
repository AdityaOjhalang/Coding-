#include <iostream>
using namespace std;


int main() {
  
    int month, count=0, more[12];
    
    for (int i=0; i<12;i++){
        more[i]=0;
    }
    
    for(int i=0; i<12; i++){
        cin>>month;
        if(month<15000){
            cout<<"No Commission"<<endl;
        }
        
        else if (month<20000){
            cout<<"5% Commission"<<endl;
        }
        else if (month<30000){
            cout<<"10% Commission"<<endl;
            more[count]=1;
            count++;
        }
        else {
            cout<<"12% Commission"<<endl;
            more[count]=1;
            count++;
        }
    }
    count =0;
    for(int i=0; i<12; i++){
        if (more[i])
            count++;
    }
    cout<<endl<<count;
    return 0;
}
