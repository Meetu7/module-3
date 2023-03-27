/*WAP to show difference between Structure and Union*/
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

union Data {
    int intValue;
    float floatValue;
    char stringValue[50];
};

int main() {
    struct Person person1;
    strcpy(person1.name, "Kathiriya Meet");
    person1.age = 25;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    union Data data1;
    data1.intValue = 10;
    printf("intValue: %d\n", data1.intValue);

    data1.floatValue = 3.14;
    printf("floatValue: %f\n", data1.floatValue);

    strcpy(data1.stringValue, "Hello");
    printf("stringValue: %s\n", data1.stringValue);

    printf("Size of Person: %ld bytes\n", sizeof(struct Person));
    printf("Size of Data: %ld bytes\n", sizeof(union Data));

    return 0;
}
