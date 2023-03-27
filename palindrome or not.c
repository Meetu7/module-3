/*WAP to reverse a string and check that the string is palindrome or not
 Write a program of structure employee that provides the following
information -print and display empno, empname, address and
age
*/
#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void reverse_string(char s[]) {
    int i, j;
    char temp;
    int n = strlen(s);
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int is_palindrome(char s[]) {
    int i, j;
    int n = strlen(s);
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char s[50] = "racecar";
    printf("Original string: %s\n", s);
    reverse_string(s);
    printf("Reversed string: %s\n", s);
    if (is_palindrome(s)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    struct Employee e = {1, "John Doe", "123 Main St.", 35};
    printf("Emp No: %d\n", e.empno);
    printf("Emp Name: %s\n", e.empname);
    printf("Address: %s\n", e.address);
    printf("Age: %d\n", e.age);
    
    return 0;
}
