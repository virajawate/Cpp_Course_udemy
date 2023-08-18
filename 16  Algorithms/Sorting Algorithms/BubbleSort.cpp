#include <iostream>
#include <vector>

std::vector<int> bubble_sort(std::vector<int> org);

int main()
{
    std::vector<int> vec = {32, 3, 12, 89, 642, 38, 120, 32, 312};
    std::cout << std::endl;


    std::cout << "Original Vector :\t";
    for (int i : vec)
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    std::vector<int> sorted_vec = bubble_sort(vec);

    std::cout << "Sorted Vector   :\t";
    for (int i : sorted_vec)
        std::cout << i << "\t";

    std::cout << std::endl;

    return 0;
}

std::vector<int> bubble_sort(std::vector<int> org)
{
    int n = org.size();
    for (int i = 0; i < n; i++)
    {
        bool swaped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (org[j] > org[j + 1])
            {
                std::swap(org[j], org[j + 1]);
                swaped = true;
            }
            for (int i : org)
            {
                std::cout << i << "\t";
            }
            std::cout << std::endl;
        }

        if (!swaped)
        {
            break;
        }
    }

    return org;
}