#include<iostream>
using namespace std;

//sort the elements in increasing order
void insertion_sort(int a[], int n){
for(int i = 1; i <= n-1; i++){
    int current = a[i];
    int prev = i-1;
    //loop to find the right index where the element  current should be inserted
    while(prev>=0 and a[prev] > current){
        a[prev+1] = a[prev];

        prev = prev - 1;

    }
    a[prev+1] = current;//when prev is -1 so it will take 0th place
}
}

int main(){

    cout<<"SEJAL KOTHARI(209303070)"<<endl;
     cout<<"INSERTION SORT"<<endl;

   int i, arr[8];
   //= {-2,3,4,-1,5,-12,6,1};

    int n = sizeof(arr)/sizeof(int);
  //  cout<<"Print number of Elements: "<<endl;
   // cin>>n;
    cout<<"Unsorted array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"Sorted array: "<<endl;
    insertion_sort(arr,n);

    for(auto x : arr){
        cout<<x<<",";
    }
    return 0;
}