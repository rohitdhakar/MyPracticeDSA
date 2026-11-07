 #include<iostream>
 using namespace std;

 int main()
 { int n;
    cout<<"enter the number of elements in array = ";
 cin>>n;
     int arr[n-1];
     
    
     cout<<"enter the elements of array = ";

     for(int a =0;a<=n-1;a++)
     {
        cin>>arr[a];
         
     }

     cout<<"the complete array is ";
     for(int b=0;b<=n-1;b++)
     {
        cout<<arr[b];
        cout<<" ";
     }
     
         cout<<endl;
      for(int j=0;j<=n-1;j++)
       { if(arr[j+1]==arr[j])
        { 
            cout<<"";
        }
        else
        {
            cout<<arr[j];
        }
        cout<<" ";
         }

    
    

return 0; 
}