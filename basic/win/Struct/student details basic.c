#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    float percentage;
};

// function modifies string directly
void rem_nl(char a[]) {
    a[strcspn(a, "\n")] = '\0';
}

void sip() {
    struct student s1;

    fgets(s1.name, sizeof(s1.name), stdin);
    rem_nl(s1.name);

    scanf("%d", &s1.age);
    scanf("%f", &s1.percentage);

    printf("%s\t%d\t%.2f", s1.name, s1.age, s1.percentage);
}

int main() {
    sip();
    return 0;
}