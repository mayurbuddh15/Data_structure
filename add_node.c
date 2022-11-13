void add_begin(SLL **ptr)
{
	SLL *new;	//this is simple pointer which pointing to newly created node.
	new=malloc(sizeof(SLL));//node created dynamically
	printf("Enter the roll_no,name,marks\n");//scaning data
	scanf("%d%s%f",&new->rollno,new->s,&new->marks);
	new->next=*ptr;//updatin newly created node next 
	*ptr=new;//changing headptr
}
