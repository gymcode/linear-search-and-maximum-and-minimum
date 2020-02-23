#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int BinSearch(int A[], int k, int iLow,int iHigh);

int main()
{
   int iaArr[20],iNum,iKey;
int i,iPos=0;
cout << "Enter the size of the array" << endl;
cin >> iNum;
cout << "Enter the element of the array in ascending order:" << endl;
    for(i=0;i<iNum;i++)
    cin >> iaArr[i];
    cout << "Input the key element"<< endl;
    cin >> iKey;
    iPos=BinSearch(iaArr,iKey,0,iNum-1);
        if(iPos==-1)
            cout << "Key Element not found" << endl;
        else
        cout << "Key Element found at position " << iPos+1 << endl;
return 0;
}

int BinSearch(int A[], int k, int iLow,int iHigh)
{
    int iMid;
    if(iLow<=iHigh)
    {
    iMid=(iLow+iHigh)/2;
    if(k==A[iMid])
        return iMid;
        if(k<A[iMid])
            return BinSearch(A,k,iLow,iMid-1);
                if(k>A[iMid])
                    return BinSearch(A,k,iMid+1,iHigh);
    }
    else
        return -1;
}
