#include<iostream>
#include<stdio.h>
using namespace std;
int fnLinSearch(int [], int, int);

int main(void)
{
int iaArr[20],iNum,iKey;
int i,iPos=0;
cout <<"\nEnter the size of the array\n" <<endl;
cin >>iNum;
cout <<"\nEnter the elements of the array:\n" <<endl;
for(i=0;i<iNum;i++)
cin >>iaArr[i];
cout << "\nenter the key element\n"<<endl;
cin >> iKey;
iPos=fnLinSearch(iaArr,iKey,iNum);
if(iPos==-1)
cout << "\nElement not found\n" << endl;
else
cout << "Element found at position "<< iPos<<endl;
return 0;
}

int fnLinSearch(int A[], int k, int iN)
{
if( iN ==0)
return -1;
else if( k == A[iN-1])
return iN;
else
return fnLinSearch(A,k,iN-1);
}
