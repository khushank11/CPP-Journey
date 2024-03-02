#include<iostream>
using namespace std;
int main() {
//star square pattern
    int n;
    cout<<"enter size:";
    cin>>n;

    int i=1;
    for(;i<=n;i+=1){
        for(int j=1;j<=n;j++){
            cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}
