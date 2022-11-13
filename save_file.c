void save_file(SLL *ptr) 
{
int count=0;
	if(ptr==0)
	{
		printf("no record availble\n");//checking headptr pointing to any node /not
		return;
	}
	FILE *fp;
	fp=fopen("student_record.txt","w");
	while(ptr)//rotating loop till get last record
	{
	fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->s,ptr->marks);
		ptr=ptr->next; //updating to next node
	}
	fclose(fp);
}
