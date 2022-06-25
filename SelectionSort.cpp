#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // define an array
    int num[]= {12,9,37,86,2,17,5};
    int i,j,t,snp;

    cout<<"Array before Selection Sort"<<endl;
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }

    // run an outer loop i from 0 to N-1 to repeat the process of selection sort
    for(i=0; i<6; i++)
    {
        // smallest number position
        snp=i;

        // run an inner loop j for selection sort from i+1 to N
        for(j=i+1; j<7; j++)
        {
            // now check if the value at num[j] is smaller than value at num[snp]
            if(num[j]<num[snp])
            {
                // if the value is smaller, then store the value of j to snp
                snp=j;
            }
        }

        // outside the body of inner loop j check if num[i]>num[snp]. If yes then swap the numbers
        if(num[i]>num[snp])
        {
            t=num[i];
            num[i]=num[snp];
            num[snp]=t;
        }
    }

    // print the sorted array
    cout<<"\n\nArray after Selection Sort\n";
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}
