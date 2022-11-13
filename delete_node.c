void delete_node(SLL**ptr){
SLL *del,*prev;
int num;
del=prev=*ptr;
if(*ptr==0)
{
	printf("no nodes availble to delte\n");
	return;
}
printf("Ente thr rollno to delete a reocord\n");
scanf("%d",&num);
while(del)
{
	if(del->rollno==num)
	{
		if(del==*ptr)
		*ptr=del->next;
		else
		prev->next=del->next;
		free(del);
		del=0;
		return;
	}
	prev=del;
	del=del->next;
}
