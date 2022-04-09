#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    for(int i=0;i<10;i++){
        v.push_back(i*10);
    }
    
    //print the vector using auto variable
    cout << "Output of begin and end: ";
    for(auto i=v.begin(); i != v.end() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout << "Output of cbegin and cend: ";
    for(auto i=v.cbegin(); i != v.cend() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout << "Output of rbegin and rend: ";
    for(auto i=v.rbegin(); i != v.rend() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout << "Output of crbegin and crend: ";
    for(auto i=v.crbegin(); i != v.crend() ; i++){
        cout<<*i<<" ";
    }

    //Capacity

    cout<<"The size of the vector is : "<<v.size()<<endl;

    cout<<"The maximum size of the vector is :"<<v.max_size()<<endl;

    cout<<"The capacity of the vector is : "<<v.max_size()<<endl;

    int n=20;
    v.resize(n);
    cout<<"After resizing, the size of the vector is :"<<v.size()<<endl;

    vector<int> v2;
    cout<<"The empty vector :"<<v2.empty()<<endl;

    v.shrink_to_fit();
    cout<<"Vector element are :";
    for(auto it=v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }  
    cout<<endl;
    //Element access
    cout<<"The element at 4th index is :"<<v.at(4)<<endl;
    cout<<"The element at the front is :"<<v.front()<<endl;
    cout<<"The element at the end is : "<<v.back()<<endl;
    

    return 0;
}