#include<iostream>

int A[20], P, Q, R, n1,n2, LA[10],RA[10];

void merge_sort(int A[], int P, int R);
void merge(int A[], int P, int Q, int R);

int main(void) {

    int size;
    std::cout << "Enter the size of array: ";
    std::cin >> size;
    std::cout << "\nEnter the elements of array: ";
    for(int i = 0; i < size; i++)
       std::cin >> A[i];

       P = 0, R =size - 1;

       merge_sort(A, P, R);

       std::cout << "\nPrinting the sorted array: ";
       for(int i = 0; i < 10; i++)
          std::cout << A[i] << " ";

        return 0;
}

void merge_sort(int A[], int P, int R) {
    int Q;
    if(P < R) {   //if start < end 
    Q = (P + R)/2;   //mid =(start + end) / 2
    merge_sort(A, P, Q);
    merge_sort(A, Q + 1, R);
    merge(A, P, Q, R);

    }
}

void merge(int A[], int P, int Q, int R) {
    n1 = Q - P + 1;   //mid - start + 1
    n2 = R - Q;     //end - mid

    int i, j, k;

    for(i =1; i<= n1; i++)
       LA[i] = A[P + i - 1];
    for(j = 1; j <= n2; j++)
       RA[j] = A[Q + j];

    i = 1, j =1;
    LA[n1 + 1] = 32767;
    RA[n2 + 1] = 32767;

    for(k = P; k <= R; k++) {
        if(LA[i] <= RA[j] ) {
            A[k] = LA[i];
            i++;
        }
        else {
            A[k] = RA[j];
            j++;
        }
    }
} 
