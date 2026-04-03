#include  <iostream>
#include <string>
#include <array>

int main()
{
    int arr[3] = {1,2,5};
    std::array<int,3>arr2{1,6,7};

    for (int i = 0; i < arr2.size(); i++)
    {
    std::cout<< arr2[i]<<std::endl;
    }
    for (auto & element: arr)
    {
        std::cout<< element <<std::endl;
       
    }
    
    
    



    
}