#include<stdio.h>
#include<stdlib.h>
typedef struct student{
int rollno;
char s[20];
float marks;
struct student *next;
}SLL;
void add_begin(SLL**);
void print_record(SLL*);
int count_nodes(SLL*);
void save_file(SLL*);
void delete_all(SLL**);
void add_end(SLL**);
void delete_node(SLL**);
