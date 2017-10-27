#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int n, int key){
int mid,l=0,h=n-1;
while(l<=h){
    mid=l+(h-l)/2;
    if(v[mid]==key)
        return mid;
    else if(v[mid]>key){
        h=mid-1;
    }
    else
        l=mid+1;

}
return -1;
}

int main(){

vector<int> v;
int n,i,x,key,pos=-1;

cout<<"Enter no of elements:\n";
cin>>n;
cout<<"Enter elements in sorted increasing order:\n";
for(i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
cout<<"Enter the element to search for:\n";
cin>>key;

pos=binarySearch(v,n,key);

if(pos==-1){
    cout<<"Element not found";
}
else {
    cout<<"Element found at index "<<pos;
}


}
