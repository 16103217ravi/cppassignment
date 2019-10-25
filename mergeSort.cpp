#include<bits/stdc++.h>
using namespace std;
void mergeSort(int input[], int sizee){

    cout<<"here";
    if(sizee==1 || !sizee)
        return;
    int mid = sizee/2;
    int half1[500]={0}, half2[500]={0};
    int k=0;
    for(int i=0 ; i< mid ; i++)
    {
        half1[k]=input[i];
        k++;
    }
    k=0;
    for(int i=mid ; i< sizee ; i++)
    {
        half2[k]=input[i];
        k++;
    }
    mergeSort(half1, mid);
    mergeSort(half2, sizee - mid);

    int i = 0, j = 0;
    k=0;
    while(i<mid && j< sizee-mid)
    {
        if(half1[i] > half2[j])
        {
            input[k++]=half2[j];
            j++;
        }
        else
        {
            input[k++]=half1[i];
            i++;
        }
    }
    while(i< mid)
    {
        input[k++]=half1[i];
        i++;
    }
    while(j<sizee-mid)
    {
        input[k++]=half2[j];
        j++;
    }
}

int main()
{
    int arr[] = {2,6,8,5,4,3};
    mergeSort(arr, 6);
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    return 0;
}
