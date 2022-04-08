#include<iostream>
using namespace std;
 
int partition(int a[], int low, int high) 
{ 
    int pivot = a[high];   
    int tail = (low - 1); 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        if (a[j] <= pivot) 
        { 
            tail++;
            int t=a[tail];
            a[tail]=a[j];
            a[j]=t;
        } 
    } 
    int m=a[tail+1];
    a[tail+1]=a[high];
    a[high]=m;
    return (tail + 1); 
} 
  

void quickSort(int a[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(a, low, high); 
        quickSort(a, low, pi - 1); 
        quickSort(a, pi + 1, high); 
    } 
} 
  
void printArray(int a[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<a[i]<<" "; 
    cout<<endl; 
} 
  
int main() 
{ 
    int a[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(a)/sizeof(a[0]); 
    quickSort(a, 0, n-1); 
    cout<<"Sorted array: "; 
    printArray(a, n); 
    return 0; 
} 