void delete_all(SLL **ptr) 
{
if(*ptr==0)
{
	printf("NO records availble to delete\n");
	return;
}
SLL *del;
while(*ptr){
del=*ptr;
*ptr=(*ptr)->next;
free(del);
}
