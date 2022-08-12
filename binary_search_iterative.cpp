#include <iostream>
using namespace std;
int b_search(int arr[],int x,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;

        }
    }
}

int main(){
    int n;
cout<<"enter the size of the elements"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a;
cout<<"enter the element to be searched"<<endl;
cin>>a;
int ans=b_search(arr,a,n);
cout<<"index is: "<<ans;


return 0;
}