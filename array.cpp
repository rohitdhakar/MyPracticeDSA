 #include<iostream>
 using namespace std;
 int main ()
 {int i;
    int n;
     
    cout<<"the number of terms in array";
    cin>>n;
     cout<<"array terms is "<<n<<endl;
     int arr[n];
     cout<<"enter your arry elements"<<endl;
     for(int i =0;i<=n-1;i++){
        cin>>arr[i];
        
     }
      cout<<"exit  for loop "<<endl;
      cout<<"enter your index number"<<endl;
      cin>>i;
     cout<<arr[i];
      
    return 0; 
 }