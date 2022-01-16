
class Solution {
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int[2];

        for (int i = 0; i < n; i++)
            if (arr[abs(arr[i]) - 1] < 0)
                res[0] = abs(arr[i]);
            else
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];

        for (int i = 0; i < n; i++)
            if (arr[i] > 0)
            {
                res[1] = i + 1;
                break;
            }
        return res;

    }
};