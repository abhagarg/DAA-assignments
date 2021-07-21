#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cout<<"Enter the number of test cases\n";
    cin>>t;
    while(t--)
    {
        cout<<"Enter number of elements\n";
        cin>>n;
        int arr[n],ele,comp;
        bool found=false;
        cout<<"Enter array elements\n";
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Enter the element to search\n";
        cin>>ele;
        //linear search
        for(int i=0;i<n;i++)
        {
            if(arr[i]==ele)
            {
                found=true;
                comp++;
                break;

            }
            comp++;
        }
       
        if(found==true)
        cout<<"Element found!"<<endl;
        else cout<<"Element not found"<<endl;
        cout<<"Number of comparisons="<<comp<<endl;
      
    }
    return 0;
}
