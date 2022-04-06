#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={5,10,15,20,25,20,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    cout<<"Vector is:\t";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    v.erase(v.begin()+1);

    cout<<"\nVector after erasing :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    sort(v.begin(),v.end());
    cout<<"\nVector before removing duplicates occurrence :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<"\nVector after deleting the duplicates occurrence :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    next_permutation(v.begin(),v.end());
    cout<<"\nVector after performing the next permutation :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    prev_permutation(v.begin(),v.end());
    cout<<"\nVector after performing the prev permutation :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\nDistance between the first and maximum element : "<<endl;
    cout<<distance(v.begin(),max_element(v.begin(),v.end()));
    return 0;
}