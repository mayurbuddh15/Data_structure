int count_nodes(SLL *ptr) 
{
int count=0;
	if(ptr==0)
	{
		printf("no record availble\n");//checking headptr pointing to any node /not
		return 0;
	}
	while(ptr)//rotating loop till get last record
	{
		count++;
		ptr=ptr->next; //updating to next node
	}
	return count;
}
