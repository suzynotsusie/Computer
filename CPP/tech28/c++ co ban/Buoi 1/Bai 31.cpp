/*
#include <algorithm>
#include <iostream>
  
int main()
{
    int arr[] = {3, 5, 1, 2, 4};
  
    // Sort the array in ascending order
    std::sort(std::begin(arr), std::end(arr));
  
    // Print the sorted array
    for (int i : arr)
    {
        std::cout << i << " ";
    }
  
     
  
    return 0;
}
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
	ifstream inp("Bai 31.inp");
	ofstream out;
	out.open("Bai 31.out");
	
	long long nums[5];
	for (int i = 0; i <= 5; i++) inp >> nums[i];
	int size = sizeof(nums) / sizeof(nums[0]);
	out << &nums << endl;
    std::sort(nums, nums + size);
	out << nums[1];
	
	return 0;
}

