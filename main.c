{
	int op,c;
	SLL  *headptr=0;//haedpointer pointing to first record
	while(1)
	{
		printf("Enter choice\n");
		printf("1)add_begin 2)add_end 3)print_data 4)count_nodes 5)save_file 6)delete all 7)delete_node 11)exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: add_begin(&headptr);
				break;
			case 2: add_end(&headptr);
				break;
			case 3: print_record(headptr);
				break;
			case 4:	c=count_nodes(headptr);
				printf("count: %d\n",c);
				break;
			case 5:save_file(headptr);
				break;
			case 6:delete_all(&headptr);
				break;
			case 7:delete_node(&headptr);
				break;
			case 11:exit(0);
			default:printf("Wrong option\n");
		}
	}
}
