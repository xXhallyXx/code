#include<iostream>
using namespace std;
int main()
{
    int a[2][3];
    cout<<"enter the numbers of array"<<endl;
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<"a["<<row<<"] ["<<col<<"]=";
            cin>>a[row][col];
        }
    }
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<a[row][col]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
