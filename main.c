#include <stdio.h>


typedef struct {
    char *nm;
    unsigned char age;
    unsigned char course;
}student;

unsigned char student_counter = 0;

student addStudent(char *ch, unsigned int cr, unsigned int ag);

int main() {
    int i;
    student st[20];
    if (student_counter < 20) st[student_counter] = addStudent("Ахметов Иван Борисович", 1, 28);
    if (student_counter < 20) st[student_counter] = addStudent("Яшкин Иван Борисович", 3, 23);
    if (student_counter < 20) st[student_counter] = addStudent("Петров Иван Борисович", 4, 19);
    if (student_counter < 20) st[student_counter] = addStudent("Канарейкин Иван Борисович", 1, 21);
    if (student_counter < 20) st[student_counter] = addStudent("Сидоров Иван Борисович", 2, 22);
    if (student_counter < 20) st[student_counter] = addStudent("Николаев Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Забалуев Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Ничипоренко Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Яковлев Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Попелнуха Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Жихарев Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Дураков Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Месяцев Иван Борисович", 2, 18);
    if (student_counter < 20) st[student_counter] = addStudent("Козлов Иван Борисович", 2, 18);
    for (i = 0; i < student_counter; i++) {
        printf("\t%-50s \t   %d \t  курс \t %d лет\n", st[i].nm, st[i].course, st[i].age);
    }
    return 0;
}

student addStudent(char *ch, unsigned int cr, unsigned int ag){
    student res_st;
    res_st.nm = ch;
    res_st.course = cr;
    res_st.age = ag;
    student_counter++;
    return res_st;
}