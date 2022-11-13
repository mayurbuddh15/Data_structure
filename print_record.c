void print_record(SLL *ptr)
{
	if(ptr==0)
	{
		printf("no record availble\n");//checking headptr pointing to any node /not
		return;
	}
	while(ptr)//rotating loop till get last record
	{
		printf("%d %s %f\n",ptr->rollno,ptr->s,ptr->marks);
		ptr=ptr->next; //updating to next node
	}
}
