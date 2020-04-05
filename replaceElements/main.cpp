#include <iostream>

int main()
{

    int arr[]{17, 18, 5, 4, 6, 1};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = (n - 1);
    int temp{};

   for (int k = 0; k < n; k++)
{
    std::cout<< " " << arr[k];

}


    for (int i = 0; i < n;)
    {
       
            for (int j = i+1; j < n-1;) {

                    if (arr[j] > arr[i]) {

                        arr[i] = arr[j];

                    }
            j++;

            }
        
    }


    for (int k = 0; k < n; k++)
{

    std::cout<< " " << arr[k];


}
    return 0;
}
