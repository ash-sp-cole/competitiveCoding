#include<iostream>



using namespace std;



int main () {

int x{ 1};
int y {4};


int n =  x ^ y;
cout << " \n " << n << "\n";

int set = 0;

while (n > 0 ){

set += n & 1;
n >>=1;


}
cout << set;


    return 0;
}