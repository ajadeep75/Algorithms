Boyer moore majority vote algorithm is used for finding the number which has occurred more than ((size of the array)/2) times in the array.
This algorithm can be used for the array with only one majority element.
Majority means Element occurring more than half the size of the array.so,there can be only one majority element.

include<bits/stdc++.h>
                using namespace std;
                int Majority_element(int *arr,int n)
               {
                       int candidate=arr[0];
                       int votes=1;
                       for(int i=1;i<n;i++)
                       {
                             if(candidate==arr[i])
                             {
                                     ++votes;
                              }
                              else if(votes>1)
                              {
                                     --votes;
                              }
                              else
                              {
                                        candidate=arr[i];
                               }
                        }
                       //////////////verifying majority element.
                       int count=0;
                       for(int i=0;i<n;i++)
                       {
                             if(arr[i]==candidate)
                             {
                                    ++count;
                             }
                       }
                      if(count>(n/2))
                      {
                             cout<<"Majority element is :"<<candidate;
                      }
                      else
                      {
                             cout<<"No Majority element in the array";
                      }
               }
               int main()
              {
                     int size;
                     cout<<"Enter the size of array :";
                     cin>>size;
                     int arr[size];
                     cout<<"Enter the array elements :";
                     for(int i=0;i<size;i++)
                     {
                          cin>>arr[i];
                     }
                     Majority_element(arr,size);
              }
