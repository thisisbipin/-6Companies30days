
class Solution {
public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long res = N * (N + 1) * (2 * N + 1) / 6;

        return res;
    }
};