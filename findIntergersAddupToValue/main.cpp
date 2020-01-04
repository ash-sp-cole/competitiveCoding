#include<iostream>
#include <vector>

using namespace std;


int main () {


int n ={4};

int target = {0};

vector <int> arr {4,2,3,0,3,1,2};


cout << " \n \n array is :: - "<< endl;

for (int j = 0; j < arr.size(); j ++) {
    cout << arr[j] << " ";
}

cout << "\n \n \n";
for (int i = n; i < arr.size() ; i ++) {
        cout << arr[i];


        if ( arr[i] == target) {
            cout << " target met at index :  " << i;
        }
        







}



return 0;


}