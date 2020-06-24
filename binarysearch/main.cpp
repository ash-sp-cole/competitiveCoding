#include <iostream>

bool binarySearch (int arr[], int n, int low, int high);

void swap(int *a, int *b);

int partition(int arr[],int low,int high);

void quickSort (int arr[],int low, int high, int n);

int main () {

int arr[] { 1,2,3,4,5,6,7,8,9,10};

size_t n = sizeof(arr) / sizeof(arr[0]);

int low {0};
int high = (n -1);
int target {6};

binarySearch(arr,n,low,high);

    return 0;

}

///////////////////////////////////// BINARY SEARCH /////////////////////////////////////////////////

bool binarySearch (int arr[], int n, int low, int high) {
int target{};

std:: cout << " please enter your target value " << std::endl;

std::cin >> target;

std::cout << "\n \n \n" << std::endl;


while (low <= high) {

int mid = (low + high) / 2;

    if (arr[mid] == target) {
std::cout << " your search target is found at index " << mid << "  value is : " << arr[mid] << std::endl;
    break;
    return true;
    }

    else if (arr[mid] < target) {

        low = (mid + 1);

    }

    else if (arr[mid] > target) {
        high = (mid -1);
    }

}

return false;

}

///////////////////////////////////// SORTING QUICK SORT ////////////////////////////////////////////////////////

void swap(int *a, int *b) {

int temp = *a;
*a = *b;
*b = temp;

}
