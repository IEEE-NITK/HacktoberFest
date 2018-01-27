#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v;
int n,i,x,key,pos=-1;

cout<<"Enter no of elements:\n";
cin>>n;
cout<<"Enter elements:\n";
for(i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
cout<<"Enter the element to search for:\n";
cin>>key;

for(i=0;i<n;i++){
    if(v[i]==key){
        pos= i;
        break;
    }
}
if(pos==-1){
    cout<<"Element not found";
}
else {
    cout<<"Element found at index "<<pos;
}


}
