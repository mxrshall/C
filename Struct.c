#include<stdio.h>
#include<string.h>

struct Student{
    char meno[15];
    int vek;
    int znamka;

};

int main (){

struct Student student1;
struct Student student2;

strcpy(student1.meno, "Daniel");
student1.vek = 15;
student1.znamka = 2;

strcpy(student2.meno, "Matej");
student2.vek = 17;
student2.znamka = 3;

printf("Student1 sa vola %s", student1.meno);
printf("Student1 ma %d", student1.vek);
printf("Student2 sa vola %s", student2.meno);

    return 0;
}