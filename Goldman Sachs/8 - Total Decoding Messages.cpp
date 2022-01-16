
class Solution {
public:
	int CountWays(string str) {
		int n = str.length();
		int MOD = (1e9 + 7);
		int a = 1, b = 1, c;

		if (n == 1 && str[0] != '0')
			return 1;
		if (str[0] == '0')
			return 0;

		for (int i = 2; i <= n; i++)
		{
			c = 0;

			if (str[i - 1] > '0')
				c = b;
			if (str[i - 2] == '1' || str[i - 2] == '2' && str[i - 1] <= '6')
				c = (c + a) % MOD;
			a = b;
			b = c;
		}

		return c;
	}
}