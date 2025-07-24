#include<iostream>
using namespace std;
int main()
{
    
    int arr1[3];
    int arr2[3];
    int arr3[5];

    cout<<"Enter first array elements : ";
    for(int i = 0;i < 3; i++)
    {
        cin >> arr1[i]; 
    }
     cout<<"Enter second array elements : ";
    for(int i = 0;i < 3; i++)
    {
        cin >> arr2[i]; 
    }
    for(int i=0 ; i < 3; i++)
    {
        arr3[i]=arr1[i]*arr2[i]; 
        cout << "Multiplication at index  " << i << " is " << arr3[i] << endl;

    }
    return 0;
}