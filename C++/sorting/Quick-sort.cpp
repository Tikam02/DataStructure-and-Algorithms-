
#include<iostream>
 using namespace std;

 int main() {

      int i,j,temp,a[100];
      cout<<"\nEnter the number of Elements: ";
      cin>>n;
      cout<<"\nEnter the Elements\n";

      for(i=0;i<n;i++){
          cin>>a[i];
      }
      for(i=1;i<=n-1;i++){
          temp=a[i];
          j=i-1;

          while((temp<a[j])&&(j>=0)){
              a[j+1]=a[j];     //moves Elements forward
              j=j-1;
          }
          a[j+1]=temp;        //insert Elements in proper place
      }
      cout<<"\nSorted list is as follows\n";
      for(i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
     return 0;
 }
