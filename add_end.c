void add_end(SLL **ptr){
	SLL *new,*last;
	new=malloc(sizeof(SLL));
	printf("Enter the rollno,name, marks\n");
	scanf("%d%s%f",&new->rollno,new->s,&new->marks);

	new->next=0;
	if(*ptr==0)
		*ptr=new;
	else
	{
		last=*ptr;
		while(last->next)
			last=last->next;
		last->next=new;
	}
}
