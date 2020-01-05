#include <iostream>
#include <vector>


using namespace std;


int main () {


int num {4421};

int sum {};

int product {1};

int digit{};



cout << "  \n \n sum is " << endl;

while (num != 0) {

digit = num % 10;

product = product *digit;
num = num /10;

sum +=digit;

cout << " digit is : " <<  digit << " number with out digit now is :  " << num << endl; 



}
   
cout << " \n \n sum of all digits is : " << sum << endl;

cout << " \n \n \n product of all digits is  : " << product << endl;

int answer = product - sum;

cout  << " answer is : " << answer << endl;
    return 0;
}