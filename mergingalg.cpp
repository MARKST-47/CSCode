#include <iostream>
using namespace std;

int A[6]={12,15,17,20,22,23};
int B[8]={10,13,18,24,26,27,30,32};
int C[14];

int* merging(int r,int s)
{
 int na=1,nb=1,nc=1;
    while(na<=r && nb<=s){
        if(A[na]<=B[nb]){
            C[nc]=A[na];
            na=na+1;
        }
        else{
            C[nc]=B[nb];
            nb=nb+1;
        }
        nc=nc+1;
    }
    if(na>=r){
        while(nb<s){
            C[nc]=B[nb];
            nb=nb+1;
            nc=nc+1;
        }
    }
    else{
        while(na<r){
            C[nc]=A[na];
            nc=nc+1;
            na=na+1;
        }
    }
return C;
}
int main()
{
int *p=merging(sizeof(A)/sizeof(A[0]),sizeof(B)/sizeof(B[0]));
int n= sizeof(A)/sizeof(A[0])+sizeof(B)/sizeof(B[0]);
for(int i=0;i<n;i++)
cout<<p[i]<<" ";
}
/*
#include<iostream>
using namespace std;



int A[]={2,3,5,6,8};

int B[]={4,7,9,10,11,12};

const int R= sizeof(A)/sizeof(A[0]); // sizeof gives number of bytes in the data structure
const int S= sizeof(B)/sizeof(B[0]);

//int C[(sizeof(A)/sizeof(A[0]))+(sizeof(B)/sizeof(B[0]))];
int C[R+S];
void merging()
{
int na,nb,nc;
na=0; nb=0; nc=0;
while(na<R && nb<S)
{
if(A[na]<= B[nb])
{
C[nc++]= A[na++];
}
else
{
C[nc++]= B[nb++];
}

}
if(na>=R)
{
while(nb<S)
{
C[nc++]= B[nb++];
}
}
else
{
while(na<R)
{
C[nc++]= A[na++];
}
}

}
int main()
{

merging();

for(int i=0; i<R+S;i++)
cout<<C[i]<<" ";

}*/