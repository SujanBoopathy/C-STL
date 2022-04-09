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
    return 0;
}