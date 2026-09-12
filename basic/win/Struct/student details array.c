/*struct of array*/
#include <stdio.h>
#include <string.h>

struct student{
    char name[50];
    int age;
    float percentage;
};

void sip(struct student s[],int n);
void rem_nl(char a[]);
void sop(struct student s[],int n);
int i=0,n;



void rem_nl(char a[]) {
    a[strcspn(a, "\n")] = '\0';
}

void sip(struct student s[],int n){
    for(i=0;i<n;i++){
        getchar();
        printf("Enter name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        rem_nl(s[i].name);
        printf("Enter age: ");
        scanf("%d",&s[i].age);
        printf("Enter percentage: ");
        scanf("%f",&s[i].percentage);
    }
}

void sop(struct student s[],int n){
    printf("Name\tAge\tPercentage\n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%f\n",s[i].name,s[i].age,s[i].percentage);
    } 
}

int main(){
    printf("Enter how records need to be entered: ");
    scanf("%d",&n);
    struct student s[n];
    sip(s,n);
    sop(s,n);
    return 0;
}