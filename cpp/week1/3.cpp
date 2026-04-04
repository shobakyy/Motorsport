#include<iostream>

int main()
{
    int n;
    int rev_num=0;
    std::cout<<"write a number you want to reverse : ";
    std::cin >>n;

    while (n != 0)
    {
    int reminder = n % 10;
    rev_num = rev_num*10 +reminder ;
    n= n/10;

    }
    std::cout<<rev_num<<"\n";
}