void mystery1(char *s1, const char *s2) { 
 while (*s1) s1++; 
 for ( ; *s2; *s1++ = *s2++); 
} 
int main() { 
 char str1[16], str2[16]; 
 printf("Enter two strings: "); 
 scanf("%15s", str1); 
 scanf("%15s", str2); 
 mystery1(str1, str2); 
 printf("%s", str1); 
 return 0; 
}
