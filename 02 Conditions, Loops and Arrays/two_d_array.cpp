#include <iostream>
using namespace std;

int main()
{
    int arr[3][3],i,j,sum=0, max=0, temp=0;

    // Enter the Elements of 2D array
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"Enter the "<<i<<"th and "<<j<<"th element :";
            cin>>arr[i][j];
            cout<<endl;
        }
    }

    // Maximum element in the 2D array 
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout<<"The max number in the array is :"<<max<<endl;

    // Output 2D array
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" ";
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    // Adding all the element of 2D array
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"Sum of all elements :"<<sum<<endl;

    // Arranging the array
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==2&&j==2)
            {
                break;
            }
            else if (arr[i][j]<arr[i][j+1])
            {
                temp = arr[i][j];
                arr[i][j] = arr[i][j+1];
                arr[i][j+1] = temp;
            }
        }
    }

    // Output 2D array
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<" ";
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}