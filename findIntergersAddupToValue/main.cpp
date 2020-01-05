#include <iostream>
#include <vector>

using namespace std;



int main () {


vector <int> nums{12,3453,2333,6,7896};
int temp{};
int digit{};
int count {};
int evenCount{};
for (int i=0; i<nums.size();i++){

temp = nums.at(i);
                while (temp !=0) {
                    
                    digit = temp  %10;
                    temp = temp /10;
                    count++;
                    cout << "   number is : " <<digit << endl;

                }
cout << count << " <- count" << endl;

if ( count % 2 == 0) evenCount++;

count = 0;
}


cout << " even count is :" << evenCount;



    return 0;
}