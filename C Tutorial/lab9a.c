#include <stdio.h>
#include <string.h>

int isPalindrome(char *word) {
    int length = strlen(word);
    int i;
	int j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    const char *word1 = "madam";
    const char *word2 = "tucan";

    printf("%s%s%s\n", word1, isPalindrome(word1) ? " is a " : " is not a ", "palindrome");
    printf("%s%s%s\n", word2, isPalindrome(word2) ? " is a " : " is not a ", "palindrome");

    return 0;
}
