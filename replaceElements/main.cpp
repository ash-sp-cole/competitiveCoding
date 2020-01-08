#include <iostream>

int main()
{

    int arr[]{17, 18, 5, 4, 6, 1};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = (n - 1);
    int temp{};
    for (int i = 0; i < n;)
    {

        std::cout << " " << arr[i];
        i++;
    }

    return 0;
}
