
#include <iostream>
#include <vector>


int main()
{
    int t[] = { 5, 1, 3, 7, 9, 4 };

    for (int val : t)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    for (int& val : t)
    {
        val = 1;
    }


    for (int val : t)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "---------------------" << std::endl;

    std::vector<int> v;
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(i + 5);
    }

    for (int val : v)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    /*
    int *pt = new int[5];

    for (int val : pt)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    */
    std::cout << "Hello World!\n";



}
