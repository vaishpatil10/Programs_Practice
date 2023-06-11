#include<iostream>
using namespace std;
int main()
{
    int n,m,search;
    bool flag=false;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }
    cout<<"Enter element you have to be search:";
    cin>>search;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==search)
            {
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
        cout<<endl;  
    }
    if(flag==true){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    cout<<"Enter second matrix....."<<endl;
    int sum,a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=arr[i][j]+a[i][j];
            cout<<endl;
            cout<<sum<<endl;
        }
    }
    cout<<"Addition is:"<<sum;
    


}