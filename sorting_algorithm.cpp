#include<iostream>
#include<algorithm>

using namespace std;

void main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nBefore sorting ..."<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    sort(a,a+n);
    cout<<"\nAfter sorting ..."<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    
}
