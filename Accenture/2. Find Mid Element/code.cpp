#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void find_mid_element(vector<int> arr) {
    vector<int> filtered_arr;
    for (int num : arr) {
        if (num >= 0) {
            filtered_arr.push_back(num);
        }
    }
   sort(filtered_arr.begin, filtered_arr.end);
int n = filtered_arr.size;
if (n % 2 != 0){
        return arr[n / 2];}
    else{
return arr[(n - 1) / 2];
}
}
int main() {
    std::vector<int> arr = {7, -3, 8, 2, -5, 10, 12};
    find_mid_element(arr);
    return 0;
}
