#include<iostream>
using namespace std;

void print_subarray(int arr[], int n){
    // Pick starting point
for(int i = 0; i<n; i++){
    // Pick ending point
    for(int j = i; j<n; j++){
         // Print subarray between current starting
            // and ending points
        for(int k = i; k<=j; k++){
            cout<<arr[k]<<",";

            
        }
        cout<<endl;

}
}

}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
 print_subarray(arr,n);
 return 0;
}