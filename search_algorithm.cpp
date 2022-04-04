#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the searching element :";
    cin>>s;
    if(binary_search(a,a+n,s))
        cout<<"Element found in the list"<<endl;
    else 
        cout<<"Element not found"<<endl;

    return 0;
}