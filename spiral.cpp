#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int input[row][col];
    for(int i=0; i<row; i++)
        for(int j=0; j<col ;j++)
            cin>>input[i][j];
    int i=0, j=0, x=0, flag=0, flag1=0;
    while(i<col-x && j<row-x)
    {
        cout<<input[j][i]<<" ";
        while(i+1<col-x)
        {
            i++;
            cout<<input[j][i]<<" ";
        }
        while(j+1<row-x)
        {
            j++;
            cout<<input[j][i]<<" ";
            flag=1;
        }
        if(flag==1)
        {
            while(i-1>=x)
            {
                i--;
                cout<<input[j][i]<<" ";
                flag1=1;
            }
            flag=0;
        }
        x++;
        if(flag1==1)
        {
            while(j-1>=x)
            {
                j--;
                cout<<input[j][i]<<" ";
                flag=0;
            }
            flag1=0;
        }

        i++;
    }
    return 0;
}
