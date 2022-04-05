#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    int arr[]={10,33,50,399,29,2,9,9,43,89,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v1(arr,arr+n);

    for(auto i=0;i<n;i++){
        cout<<v1[i]<<"\t";
    }

    sort(v1.begin(),v1.end());
    cout<<"\nAfter sorting..."<<endl;
    for(auto i=0;i<n;i++){
        cout<<v1[i]<<"\t";
    }

    reverse(v1.begin(),v1.end());
    cout<<"\nAfter reversing ..."<<endl;
    for(auto i=0;i<n;i++){
        cout<<v1[i]<<"\t";
    }

    cout<<"\nThe minimum element in the list: "<<endl;
    cout<<*min_element(v1.begin(),v1.end())<<endl;

    cout<<"\nThe maximum element in the list: "<<endl;
    cout<<*max_element(v1.begin(),v1.end())<<endl;


    cout<<"\nThe accumulation of the list :"<<endl;
    cout<<accumulate(v1.begin(),v1.end(),0)<<endl;

    cout<<"The number of occurrence of the given number: "<<endl;
    cout<<count(v1.begin(),v1.end(),9)<<endl;

    find(v1.begin(),v1.end(),99)!=v1.end()?cout<<"Element found\n" : cout<<"Not found\n";
    
    return 0;
}