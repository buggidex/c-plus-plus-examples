#include <iostream>

int main()
{
    int size;

    std::cout << "Please enter the size of the array : ";
    std::cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Number : ";
        std::cin >> array[i];
    }

    std::cout << "\n\n\n";

    for(int i = size - 1;i >= 0;--i)
    {
        std::cout << "Array[" << i << "] : " << array[i] << std::endl;
    }
    

}