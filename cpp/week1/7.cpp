#include<iostream>
#include<vector>
#include<array>


int sum(int arr[],int n)
{
 int sum =0;
 for(int i =0 ;i<n;i++){
    sum+=arr[i];
 }
 return sum ;

 }

int main()
{
    int n;
     std::cout<<"enter array size :";
    std::cin>>n;
    int arr[n];
    std::cout<<"enter the array : ";
    for(int i =0 ;i < n;i++)
    {
        std::cin >> arr[i];
    }
   

     std::cout<<sum(arr,n)<<std::endl;
 
    return 0;

}