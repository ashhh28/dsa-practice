#include <stdio.h>
#include <stdbool.h>

/*
Problem: Palindrome Number
Platform: LeetCode
Approach: Reverse Half of Number
Time Complexity: O(log n)
Space Complexity: O(1)

Example:
Input: 121 -> Output: true
Input: -121 -> Output: false
Input: 10 -> Output: false
*/
bool isPalindrome(int x) {
    // Negative numbers are not palindrome
    // Numbers ending in 0 (except 0 itself) are not palindrome
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;

    int reversedHalf = 0;

    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    return (x == reversedHalf || x == reversedHalf / 10);
}

int main() {
    int num = 121;

    if (isPalindrome(num))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}