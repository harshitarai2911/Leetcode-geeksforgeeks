class Solution {
  public:
    bool armstrongNumber(int n) {
        int newN = n;
        int temp = n;
        int size = 0;
        int sum = 0;

        // Count digits
        while(temp > 0) {
            size++;
            temp = temp / 10;
        }

        // Calculate sum
        while(n > 0) {
            int digit = n % 10;

            int power = 1;
            for(int i = 0; i < size; i++) {
                power = power * digit;
            }

            sum = sum + power;
            n = n / 10;
        }

        return sum == newN;
    }
};