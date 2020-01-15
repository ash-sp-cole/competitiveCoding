#include <iostream>




int main () {

int arr[] { 1,2,3,4,5,6,7,8,9,10};

size_t n = sizeof(arr) / sizeof(arr[0]);

int low {0};
int high = (n -1);
int target {3};



while (low <= high) {

int mid = (low + high) / 2;

    if (arr[mid] == target) {
std::cout << " your search target is found at index " << mid << "  value is : " << arr[mid] << std::endl;

    }




}








    return 0;

}