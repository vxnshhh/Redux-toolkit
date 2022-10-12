#include <iostream>
using namespace std;
void sorting(int arr[], int size){
	int temp,min;
	for(int i=0;i<=size-1;i++){
		
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
			
			
		}
	}
}
int MissingNumber(int arr[],int size){
	sorting(arr,size);
	cout<<"After sorting"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
//	int totalsum=(size + 1) + size * (size + 1)/2;
//	int sum=0;
//	for(int i=0;i<size-1;i++){
//	sum=+arr[i];	
//	}
//	int missingNumber=totalsum-sum;
//	cout<<"\nMissing Number";
//	cout<<endl<<missingNumber;
	int i=0,k=1;
	
	while(i<size){
		if(arr[i]==k){
			i++;
			k++;
		}
		else{
			cout<<"\n"<<k<<" is missing";
			k++;
		}
	}
	
//	for(int i=0;i<size;i++){
//		int temp=arr[i]+1;
//		cout<<temp;
//		if(arr[i++]!=temp){
//			//cout<<temp<<" is not available";
//		}
//		
//	}
}
int main(){
	int size;
		cout<<"Enter the size of Array=";
	cin>>size;
	int arr[size];
	

	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<size;i++){
	cin>>arr[i];	
	}
	
	MissingNumber(arr,size);
}
