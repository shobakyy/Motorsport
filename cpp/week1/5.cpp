#include<iostream>
#include<vector>


int last_occourrence(int array[],int size,int n)
{
    int loc = -1;
    
    for(int i = 0; i <= size ; i++)
    {
        if(array[i]==n)
        {
         loc = i ;
        }
}
 return loc ;
}

int main()
{
int array[] ={1,2,3,4,4,4};
int n;
int size=sizeof(array)/sizeof(array[0]);
    std::cout<<"enter number :";
   
    std::cin>>n;
    std::cout<<last_occourrence(array,size,n)<<std::endl;

    return 0;

}