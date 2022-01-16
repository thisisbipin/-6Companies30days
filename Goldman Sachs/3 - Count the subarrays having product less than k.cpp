// Given an array of positive numbers, the task is to find the number of possible contiguous
// subarrays having product less than a given number k.
 
class Solution {
public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        if (n == 1)
        {
            if (arr[0] < k)
                return 1;
            return 0;
        }

        int  res = 0, j = 0, i = 0;
        // 'i' will proceed and 'j' will follow from behind (i.e. a two pointer approach with sliding window technique)

        long long mul = 1;

        while (i < n)
        {
            mul *= arr[i];

            while (mul >= k and j <= i) { // if the multiplication became greater than k, increment the 'j'
                mul /= arr[j];
                j++;
            }

            // Count the length of subarray and add it
            res += (i - j + 1);
            i++;
        }

        return res;
    }
};
