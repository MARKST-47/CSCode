#include<iostream>
using namespace std;
void merge(int A[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[m + j + 1];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int A[],int l,int r){
    if(l>=r){
        return;
    }
    int m = (l+r)/2;
    mergeSort(A,l,m);
    mergeSort(A,m+1,r);
    merge(A,l,m,r);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << "Given array is: \n";
    printArray(a,n);
    mergeSort(a, 0, n - 1);
    cout << "\nSorted array is: \n";
    printArray(a, n);
    return 0;
}