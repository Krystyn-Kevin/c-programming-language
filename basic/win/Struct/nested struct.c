#include <stdio.h>
#include <string.h>

struct school {
    char schname[50];
};

struct student {
    char name[50];
    int grade;

    struct school sch;

};


int i,n;
void sip (struct student s[], int n);
void sop (struct student s[], int n);
void rem_nl(char a[]);

void rem_nl(char a[]){
    a[strcspn(a,"\n")]='\0';
}


void sip(struct student s[], int n){
    getchar();
    for(i=0;i<n;i++){
        printf("Stu Name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        rem_nl(s[i].name);
        printf("Stu Grade: ");
        scanf("%d",&s[i].grade);
        getchar();
        printf("Sch Name: ");
        fgets(s[i].sch.schname,sizeof(s[i].sch.schname),stdin);
        rem_nl(s[i].sch.schname);
    }
}

void sop(struct student s[], int n){
    printf("Student Name\tGrade\tSchool Name\n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%s\n",s[i].name,s[i].grade,s[i].sch.schname);        
    } 
}

int main(){
    printf("No. of rec: ");
    scanf("%d",&n);
    struct student s[n];
    sip(s,n);
    sop(s,n);
    return 0;
}