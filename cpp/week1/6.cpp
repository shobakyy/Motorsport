#include<iostream>
#include<vector>
#include<array>


void reverse(int arr[],int n)
{
 int start =0 , end = n-1,temp;
 while(end > start){   int arr2 [n];
    

    temp= arr[start];
    arr[start]=arr[end];
    arr[end]= temp;
    start++;
    end--;
 }
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
    reverse(arr,n); 
    std::cout<<"reversed array\n";
     for(int i =0 ;i < n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;

}