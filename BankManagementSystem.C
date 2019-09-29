#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
#include<dirent.h>
#include<time.h>
#include<stdlib.h>
#include<dir.h>

#define size 100

struct bank
{
	FILE *fp;
	char password[size];
	char f_pass[size];
	char name[size];
	char l_name[size];
	char f_name[size];
	char option[size];
	char details[size];
	char a_name[size];
	char a_address[size];
	char a_dob[size];
	char a_contact[size];
	char a_email[size];
	char a_number[size];
	char a_gender[size];
	char a_people[size];
	char a_chqbk[size];
	char dirname_bank[size];
	char dirname_card[size];
	char dirname_srch[size];
	char dirname_psbk[size];
	char dirname_chqbk[size];
	char dirname_with[size];
	char dirname_dep[size];
	char dirname_trans[size];
	char f_check[size];
	char option_final[size];
	char a_no[size];
	char f_address[size];
	char f_chqbk[size];
	char file[size];
	char card_1[size];
	char f_card[size];
	char file_c[size];
	char file_d[size];
	char doi[size];
	char doe[size];
	char f_cvv[size];
	char cvv[size];
	char money[size];
	char particular[size];
	char cheque[size];
	char f_cheque[size];
	char cheque_no[size];
	char part_money[size];
	char check_no[size];
	long long int money_trans;
	int debit;
	int credit;
	int account;
	int joint;
	int trial;
	int n;
	int no;
	int i;
	int check;
}d;

void deleted_file()
{
	int i;
	int no_line=0;
	char ch='1';
	char a_no[size];
	chdir(d.dirname_bank);
	d.fp=fopen("DELETE.txt","r");
		while(ch!=EOF)
		{
			ch=fgetc(d.fp);
			if(ch=='\n')
			{
				no_line++;
			}
		}
	fclose(d.fp);
	d.fp=fopen("DELETE.txt","r");
		for(i=0;i<no_line;i++)
		{
			fscanf(d.fp,"%s",a_no);
			if((strcmp(a_no,d.a_no))==0)
			{
				printf("\n \t File not found");
				break;
			}
		}
	fclose(d.fp);
}

long long int toString_money()
{
	int c;
	long long int n;
	n = 0;
	for (c = 0; d.a_people[c] != '\0'; c++)
	{
		if(d.a_people[c]>=48 && d.a_people[c]<=57)
		{
			n = n * 10 + d.a_people[c]-'0';
		}
		else
		{
			n=0;
			break;
		}
	}
	return n;

}

void chk_delete()
{
	char ch;
	int no_line=0;
	int i;
	chdir(d.dirname_bank);
	d.fp=fopen("DELETE.txt","r");
		while(ch!=EOF)
		{
			ch=fgetc(d.fp);
			if(ch=='\n')
			{
				no_line++;
			}
		}
	fclose(d.fp);
	d.fp=fopen("DELETE.txt","r");
		for(i=0;i<no_line;i++)
		{
			fgets(d.a_no,size,d.fp);
			if((strcmp(d.check_no,d.a_no))==0)
			{
				strcpy(d.check_no,"PRESENT");
				break;
			}
		}
	fclose(d.fp);

}

int toString()
{
	int c;
	int n;
	n = 0;
	for (c = 0; d.a_people[c] != '\0'; c++)
	{
		if(d.a_people[c]>=48 && d.a_people[c]<=57)
		{
			n = n * 10 + d.a_people[c]-'0';
		}
		else
		{
			n=0;
			break;
		}
	}
	return n;

}

void load()
{
	int i=0;
	int j=0;

	sleep(1);
	do
	{
		clrscr();
		printf("\n \n \n \n \n \n \t \t \t \t Please wait... ");
		printf("\n \t \t \t Installing required files...");
		printf("\n \n \t \t \t \t \t %d %c\n \n \t \t \t ",j*10,37);
		for(j=1;j<i+1;j++)
		{
			printf("%c%c%c",176,176,176);
		}

		delay(d.n);
		i++;

	}while(i<=10);
}

void add_chqbk()
{
	int i=0;
	int len;
	len=strlen(d.f_chqbk);
	i=len-1;
	if(d.f_chqbk[i]==57)
	{
		d.f_chqbk[i]=48;
		i--;
		if(d.f_chqbk[i]==57)
		{
			d.f_chqbk[i]=48;
			i--;
			if(d.f_chqbk[i]==57)
			{
				d.f_chqbk[i]=48;
				i--;
				if(d.f_chqbk[i]==57)
				{
					d.f_chqbk[i]=48;
					i--;
					if(d.f_chqbk[i]==57)
					{
						d.f_chqbk[i]=48;
						i--;
						d.f_chqbk[i]=d.f_chqbk[i]+1;
					}
					else
					{
						d.f_chqbk[i]=d.f_chqbk[i]+1;
					}

				}
				else
				{
					d.f_chqbk[i]=d.f_chqbk[i]+1;
				}
			}
			else
			{
				d.f_chqbk[i]=d.f_chqbk[i]+1;
			}
		}
		else
		{
			d.f_chqbk[i]=d.f_chqbk[i]+1;
		}

	}
	else
	{
		d.f_chqbk[i]=d.f_chqbk[i]+1;
	}
}

void add()
{
	int i=0;
	int len;
	len=strlen(d.a_no);
	i=len-1;
	if(d.a_no[i]==57)
	{
		d.a_no[i]=48;
		i--;
		if(d.a_no[i]==57)
		{
			d.a_no[i]=48;
			i--;
			if(d.a_no[i]==57)
			{
				d.a_no[i]=48;
				i--;
				if(d.a_no[i]==57)
				{
					d.a_no[i]=48;
					i--;
					if(d.a_no[i]==57)
					{
						d.a_no[i]=48;
						i--;
						if(d.a_no[i]==57)
						{
							d.a_no[i]=48;
							i--;
							if(d.a_no[i]==57)
							{
								d.a_no[i]=48;
								i--;
								if(d.a_no[i]==57)
								{
									d.a_no[i]=48;
									i--;
									if(d.a_no[i]==57)
									{
										d.a_no[i]=48;
										i--;
										if(d.a_no[i]==57)
										{
											d.a_no[i]=48;
											i--;
											if(d.a_no[i]==57)
											{
												d.a_no[i]=48;
												i--;
												d.a_no[i]=d.a_no[i]+1;
											}
											else
											{
												d.a_no[i]=d.a_no[i]+1;
											}
										}
										else
										{
											d.a_no[i]=d.a_no[i]+1;
										}
									}
									else
									{
										d.a_no[i]=d.a_no[i]+1;
									}
								}
								else
								{
									d.a_no[i]=d.a_no[i]+1;
								}
							}
							else
							{
								d.a_no[i]=d.a_no[i]+1;
							}
						}
						else
						{
							d.a_no[i]=d.a_no[i]+1;
						}
					}
					else
					{
						d.a_no[i]=d.a_no[i]+1;
					}
				}
				else
				{
					d.a_no[i]=d.a_no[i]+1;
				}
			}
			else
			{
				d.a_no[i]=d.a_no[i]+1;
			}
		}
		else
		{
			d.a_no[i]=d.a_no[i]+1;
		}

	}
	else
	{
		d.a_no[i]=d.a_no[i]+1;
	}
}

void generate_account()
{
	char ch='1';
	int no_line=0;
	int i;
	chdir("C:/BANK");
	d.fp=fopen("Account.txt","r");
		if(d.fp==NULL)
		{
			strcpy(d.a_no,"100000000001");
		}
		else
		{
			while(ch!=EOF)
			{
				ch=fgetc(d.fp);
				if(ch=='\n')
				{
					no_line++;
				}
			}
		fclose(d.fp);
		d.fp=fopen("Account.txt","r");
			for( i = 0 ; i < no_line ; i++ )
			{
				fgets(d.a_no,size,d.fp);
				d.a_no[12]='\0';
				if(i==no_line-1)
				{
					add();
					break;
				}
			}
		}
	fclose(d.fp);
}

void card_generate()
{
	int i;
	int a,b,c,e,f;
	int no_line=0;
	char ch='1';
	a=0;
	b=0;
	c=0;
	e=0;
	f=0;

	randomize();
	do
	{
		do
		{
			a=random(999);
			b=random(99);
			c=a*b;
			if(c<1000)
			{
				c=0;
			}
			else if((c%10)==0)
			{
				c=0;
			}
			else if(c>10000)
			{
				c=0;
			}

		}while(c==0);
		for(i=(f*5);i<((f*5)+4);i++)
		{
			e=c%10;
			c=c/10;
			d.card_1[i]=e+48;
		}
		d.card_1[i]='\0';
		strcat(d.card_1," ");
		f++;
	}while(f<4);
	d.card_1[i]='\0';
	chdir(d.dirname_bank);
	d.fp=fopen("CARD.txt","r");
		if(d.fp!=NULL)
		{
			while(ch!=EOF)
			{
				ch=fgetc(d.fp);
				if(ch=='\n')
				{
					no_line++;
				}
			}
			fclose(d.fp);
			d.fp=fopen("CARD.txt","r");
				for(i=0;i<=no_line;i++)
				{
					fgets(d.f_card,size,d.fp);
					if(i==no_line)
					{
						break;
					}
				}

				if((strcmp(d.f_card,d.card_1))==0)
				{
					card_generate();
				}
		}
	fclose(d.fp);
}

void cvv()
{
	int a,b;
	int e;
	int no_line=0;
	int i;
	int cvv_g;
	char ch='1';
	randomize();
	do
	{
		a=random(99);
		b=random(9);
		cvv_g=a*b;
		if(cvv_g<100)
		{
			cvv_g=0;
		}
	}while(cvv_g==0);

	for(i=0;i<3;i++)
	{
		e=cvv_g%10;
		cvv_g=cvv_g/10;
		d.cvv[i]=e+48;
	}
	d.cvv[i]='\0';
	strrev(d.cvv);
	chdir(d.dirname_bank);
	d.fp=fopen("CVV.txt","r");
		if(d.fp!=NULL)
		{
			while(ch!=EOF)
			{
				ch=fgetc(d.fp);
				if(ch=='\n')
				{
					no_line++;
				}
			}
			fclose(d.fp);
			d.fp=fopen("CVV.txt","r");
				for(i=0;i<=no_line;i++)
				{
					fscanf(d.fp,"%s",d.f_cvv);
					if(i==no_line)
					{
						break;
					}
				}

				if((strcmp(d.f_cvv,d.cvv))==0)
				{
					cvv();
				}
		}
	fclose(d.fp);
}

void save_c()
{
	int i;
	int len;

	chdir(d.dirname_card);
	d.fp=fopen(d.file_c,"w");

		fprintf(d.fp,"%s%c \n",d.card_1,'\0');
		fprintf(d.fp,"%s%c \n",d.a_name,'\0');
		fprintf(d.fp,"%s%c \n",d.doi,'\0');
		fprintf(d.fp,"%s%c \n",d.doe,'\0');
		fprintf(d.fp,"%s%c \n",d.cvv,'\0');

	fclose(d.fp);
}

void save_d()
{
	int i;

	chdir(d.dirname_card);
	d.fp=fopen(d.file_d,"w");

		fprintf(d.fp,"%s%c \n",d.card_1,'\0');
		fprintf(d.fp,"%s%c \n",d.a_name,'\0');
		fprintf(d.fp,"%s%c \n",d.doi,'\0');
		fprintf(d.fp,"%s%c \n",d.doe,'\0');
		fprintf(d.fp,"%s%c \n",d.cvv,'\0');

	fclose(d.fp);
}

void preview_fcard_c()
{
	int i;

	chdir(d.dirname_card);
	d.fp=fopen(d.file_c,"r");
		if(d.fp!=NULL)
		{
			fgets(d.card_1,size,d.fp);
			fgets(d.a_name,size,d.fp);
			fgets(d.doi,size,d.fp);
			fgets(d.doe,size,d.fp);
			fgets(d.cvv,size,d.fp);
		}
	fclose(d.fp);
}

void preview_fcard_d()
{
	int i;

	chdir(d.dirname_card);
	d.fp=fopen(d.file_d,"r");
		if(d.fp!=NULL)
		{
			fgets(d.card_1,size,d.fp);
			fgets(d.a_name,size,d.fp);
			fgets(d.doi,size,d.fp);
			fgets(d.doe,size,d.fp);
			fgets(d.cvv,size,d.fp);
		}
	fclose(d.fp);
}


void doe()
{
	int i;
	int e=0;
	int month=0;
	int year=0;
	char doi_month[size];
	char doi_year[size];
	struct date da;
	getdate(&da);
	month=da.da_mon;
	month=month-1;
	year=da.da_year;
	year=year-2000;
	year = year +10;
	for(i=0;i<2;i++)
	{
		e=month%10;
		month=month/10;
		doi_month[i]=e+48;
	}
	doi_month[i]='\0';
	strrev(doi_month);
	for(i=0;i<2;i++)
	{
		e=year%10;
		year=year/10;
		doi_year[i]=e+48;
	}
	doi_year [i]='\0';
	strrev(doi_year);
	strcpy(d.doe,doi_month);
	strcat(d.doe," / ");
	strcat(d.doe,doi_year);
}

void doi()
{
	int i;
	int e=0;
	int month=0;
	int year=0;
	char doi_month[size];
	char doi_year[size];
	struct date da;
	getdate(&da);
	month=da.da_mon;
	year=da.da_year;
	year=year-2000;
	for(i=0;i<2;i++)
	{
		e=month%10;
		month=month/10;
		doi_month[i]=e+48;
	}
	doi_month[i]='\0';
	strrev(doi_month);
	for(i=0;i<2;i++)
	{
		e=year%10;
		year=year/10;
		doi_year[i]=e+48;
	}
	doi_year [i]='\0';
	strrev(doi_year);
	strcpy(d.doi,doi_month);
	strcat(d.doi," / ");
	strcat(d.doi,doi_year);
}

void save_cvv()
{
	chdir(d.dirname_bank);
	d.fp=fopen("CVV.txt","r");
		if(d.fp==NULL)
		{
			fclose(d.fp);
			d.fp=fopen("CVV.txt","w");
				fprintf(d.fp,"%\s%c\n",d.cvv,'\0');
		}
		else
		{
			fclose(d.fp);
			d.fp=fopen("CVV.txt","a");
				fprintf(d.fp,"%s%c\n",d.cvv,'\0');
		}
	fclose(d.fp);
}

void save_cardno()
{
	chdir(d.dirname_bank);
	d.fp=fopen("CARD.txt","r");
		if(d.fp==NULL)
		{
			fclose(d.fp);
			d.fp=fopen("CARD.txt","w");
				fprintf(d.fp,"%s%c\n",d.card_1,'\0');
		}
		else
		{
			fclose(d.fp);
			d.fp=fopen("CARD.txt","a");
				fprintf(d.fp,"%s%c\n",d.card_1,'\0');
		}
	fclose(d.fp);
}

void print_card()
{
	int i;
	int len;
//	preview_fcard();
	printf("\n %c",218);
	for(i=0;i<34;i++)
	{
		printf("%c",196);
	}
	printf("%c",191);
	printf("\n %c",179);
	gotoxy(15,6);
	printf("DENA BANK");
	gotoxy(37,6);
	printf("%c",179);
	printf("\n %c",179);
	gotoxy(37,7);
	printf("%c",179);
	printf("\n %c CARD NO :%s",179,d.card_1);
	gotoxy(37,8);
	printf("%c",179);
	printf("\n %c",179);
	gotoxy(37,9);
	printf("%c",179);
	printf("\n %c Name : %s ",179,d.a_name);
	gotoxy(37,10);
	printf("%c",179);
	printf("\n %c DOI : %s       DOE : %s",179,d.doi,d.doe);
	gotoxy(37,11);
	printf("%c",179);
	printf("\n %c",179);
	gotoxy(37,12);
	printf("%c",179);
	printf("\n %c",179);
	gotoxy(31,13);
	printf("VISA  %c",179);
	printf("\n %c",192);
	for(i=0;i<34;i++)
	{
		printf("%c",196);
	}
	printf("%c",217);
	printf("\n \n CVV : %s ",d.cvv);
	getch();
}


void save_n()
{
	int i;
	int j;
	j=0;
	for(i=11;i>5;i--)
	{
		d.file[j]=d.a_no[i];
		j++;
	}
	d.file[j]='\0';
	strrev(d.file);
	strcat(d.file,".txt");

	chdir(d.dirname_srch);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\n \n ==============================================================================");
		fprintf(d.fp,"\n \t \t \t Nominee details :");
		fprintf(d.fp,"\n \t Name : %s",d.a_name);
		fprintf(d.fp,"\n \t Gender : %s",d.a_gender);
		fprintf(d.fp,"\n \t Date Of Birth (dd-mm-yyyy): %s",d.a_dob);
		fprintf(d.fp,"\n \t Contact No. : %s",d.a_contact);
		fprintf(d.fp,"\n \t Address: %s",d.a_address);
		fprintf(d.fp,"\n \t Email Id: %s",d.a_email);
		fprintf(d.fp,"\n \t Aadhaar Card No.: %s",d.a_number);
		fprintf(d.fp,"\n \n ==============================================================================");
		fprintf(d.fp,"\n \t ");
		if(d.debit==1101)
		{
			fprintf(d.fp,"Debit Card");
			if(d.credit==103)
			{
				fprintf(d.fp,"Credit Card");
			}
		}
		else if(d.credit==103)
		{
			fprintf(d.fp,"Credit Card");
		}
		else
		{
			fprintf(d.fp,"No Card");
		}
		fprintf(d.fp," issued");

		fprintf(d.fp,"\n \t Cheque book series : %s",d.a_chqbk);
		fprintf(d.fp,"\n \n ==============================================================================");
	fclose(d.fp);
}

void save()
{
	struct date da;
	getdate(&da);
	chdir(d.dirname_srch);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\n \n ==============================================================================");
		fprintf(d.fp,"\n \t Name : %s",d.a_name);
		fprintf(d.fp,"\n \t Gender : %s",d.a_gender);
		fprintf(d.fp,"\n \t Date Of Birth (dd-mm-yyyy): %s",d.a_dob);
		fprintf(d.fp,"\n \t Contact No. : %s",d.a_contact);
		fprintf(d.fp,"\n \t Address: %s",d.a_address);
		fprintf(d.fp,"\n \t Email Id: %s",d.a_email);
		fprintf(d.fp,"\n \t Aadhaar Card No.: %s",d.a_number);
		fprintf(d.fp,"\n \t Date Of Joining : %d / %d / %d",da.da_day,da.da_mon,da.da_year);
		fprintf(d.fp,"\n \n ==============================================================================");
	fclose(d.fp);
	chdir(d.dirname_psbk);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\n \n ==============================================================================");
		fprintf(d.fp,"\n Name : %s",d.a_name);
		fprintf(d.fp,"\n Address: %s",d.a_address);
		fprintf(d.fp,"\n Date Of Birth (dd-mm-yyyy): %s",d.a_dob);
		fprintf(d.fp,"\n Date Of Joining : %d / %d / %d",da.da_day,da.da_mon,da.da_year);
		fprintf(d.fp,"\n \n ==============================================================================");
	fclose(d.fp);
}

void save_h()
{

	chdir(d.dirname_srch);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\t \t \t \t DENA BANK \n");
		if(d.joint==1101)
		{
			fprintf(d.fp,"Single Account");
		}
		else if(d.joint==103)
		{
			fprintf(d.fp,"Joint Account");
		}
		fprintf(d.fp,"\n Account number : %s",d.a_no);
	fclose(d.fp);
	chdir(d.dirname_psbk);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\t \t \t \t DENA BANK \n");
		if(d.joint==1101)
		{
			fprintf(d.fp,"Single Account");
		}
		else if(d.joint==103)
		{
			fprintf(d.fp,"Joint Account");
		}
		fprintf(d.fp,"\n Account number : %s",d.a_no);
	fclose(d.fp);
}

void chq_bk()
{
	chdir(d.dirname_chqbk);
	d.fp=fopen(d.file,"r");
		if(d.fp==NULL)
		{
			d.f_chqbk[0]='1';
			d.f_chqbk[1]=d.a_no[11];
			d.f_chqbk[2]=d.a_no[10];
			d.f_chqbk[3]=d.a_no[9];
			strcat(d.f_chqbk,"00");
		}
		else
		{
			fgets(d.f_chqbk,size,d.fp);
			add_chqbk();
		}
	fclose(d.fp);
}
void new_chqbk()
{
	int i=0;
	chq_bk();
	printf("\n \t Chequebook Series is : %s - ",d.f_chqbk);
	strcpy(d.a_chqbk,d.f_chqbk);
	for(i=0;i<10;i++)
	{
		add_chqbk();
	}
	strcat(d.a_chqbk," - ");
	printf("%s",d.f_chqbk);
	strcat(d.a_chqbk,d.f_chqbk);
	chdir(d.dirname_chqbk);
	d.fp=fopen(d.file,"w");
		fprintf(d.fp,"%s",d.f_chqbk);
	fclose(d.fp);
}

void new_chqbk_1()
{
	int i=0;
	struct date(da);
	struct  time t;

	gettime(&t);
	getdate(&da);

	chq_bk();
	printf("\n \t New Chequebook Series is : %s - ",d.f_chqbk);
	strcpy(d.a_chqbk,d.f_chqbk);
	for(i=0;i<9;i++)
	{
		add_chqbk();
	}
	strcat(d.a_chqbk," - ");
	printf("%s",d.f_chqbk);
	strcat(d.a_chqbk,d.f_chqbk);
	chdir(d.dirname_chqbk);
	d.fp=fopen(d.file,"w");
		fprintf(d.fp,"%s",d.f_chqbk);
	fclose(d.fp);
	chdir(d.dirname_srch);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\n \t Updated Cheque book on %d-%d-%d  %2d:%02d:%02d",da.da_day,da.da_mon,da.da_year,t.ti_hour, t.ti_min, t.ti_sec);
		fprintf(d.fp,"\n \t New Chequebook Series is : %s - ",d.a_chqbk);
		fprintf(d.fp,"\n -------------------------------------------------------------------------------");
	fclose(d.fp);
}


void save_trans()
{
	struct date(da);
	struct  time t;

	gettime(&t);
	getdate(&da);

	chdir(d.dirname_psbk);
	d.fp=fopen(d.file,"a");
		fprintf(d.fp,"\n\n %d-%d-%d  %2d:%02d:%02d \t %s \t \t %s \t ",da.da_day,da.da_mon,da.da_year,t.ti_hour, t.ti_min, t.ti_sec,d.particular,d.cheque);
		if((strcmp(d.cheque,"CHEQUE"))!=0)
		{
			fprintf(d.fp," \t %llu",d.money_trans);
		}
		else if((strcmp(d.cheque,"CHEQUE"))==0)
		{
			fprintf(d.fp," %llu",d.money_trans);
		}

		fprintf(d.fp,"\n \t \t \t %s ",d.part_money);
		if((strcmp(d.cheque,"CHEQUE"))==0)
		{
			fprintf(d.fp,"\t\t%s",d.cheque_no);
		}
}

void preview()
{
	struct date da;
	getdate(&da);
	clrscr();
	printf("\n \t \t Name : %s",d.a_name);
	printf("\n \t \t Geender : %s",d.a_gender);
	printf("\n \t \t Date Of Birth (dd-mm-yyyy): %s",d.a_dob);
	printf("\n \t \t Contact No. : %s",d.a_contact);
	printf("\n \t \t Address: %s",d.a_address);
	printf("\n \t \t Email Id: %s",d.a_email);
	printf("\n \t \t Aadhaar Card No.: %s",d.a_number);
	printf("\n \t \t Date Of Joining : %d / %d / %d",da.da_day,da.da_mon,da.da_year);
}

void confirm()
{
	char confirm[size];
	do
	{
		printf("\n \n \n \t \t ARE U SURE U WANT TO PROCEED : " );
		printf("\n \t \t YES \t \t NO ");
		printf("\n \n \t \t Enter ur choice here : ");
		scanf("%s",&confirm);
		strupr(confirm);
		if((strcmp(confirm,"YES"))==0)
		{
			strcpy(d.option,"");
			break;
		}
		else if((strcmp(confirm,"NO"))==0)
		{
			strcpy(d.option,"invalid");
			break;
		}
		else
		{
			strcpy(confirm,"invalid");
		}
	}while((strcmp(confirm,"invalid"))==0);
}

void f_chq()
{
	char a_no[size];
	char ch='1';
	int no_line=0;
	int i,j;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);
		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{

		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
				printf("\n \n \t \t Press any key to proceed : ");
				getch();
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				strcpy(d.a_no,a_no);
				deleted_file();
				d.fp=fopen("Account.txt","r");
					for(i=0;i<no_line;i++)
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcat(d.file,".txt");
							new_chqbk_1();
						}
						else if (i==no_line-1)
						{
							printf("\n \t \t \t No result found");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);

						}
					}
			}
		fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);

}

void card()
{
	int len;
	char option[size];
	char option_1[size];
	char option_2[size];
	clrscr();
	do
	{
		printf("\n \t \t Do you want card : ");
		printf("\n \t \t 1. YES \t 2. NO");
		printf("\n \t Enter choice here : ");
		scanf("%s",&option_1);

		if((strcmp(option_1,"1"))==0)
		{
			d.debit=0;
			d.credit=0;
			do
			{
				printf("\n \t 1.DEBIT CARD \n \t 2. CREDIT CARD");
				printf("\n \t Enter choice here : ");
				scanf("%s",&option_2);

				if((strcmp(option_2,"1"))==0)
				{
					d.debit=1101;
					doi();
					doe();
					card_generate();
					cvv();
					clrscr();
					printf("\n \t \t \t DEBIT CARD \n \n ");
					print_card();
					save_d();
					save_cardno();
					save_cvv();
					do
					{
						printf("\n \t \t Do u want CREDIT card also : ");
						printf("\n \t \t 1. YES \t 2. NO");
						printf("\n \t Enter choice here : ");
						scanf("%s",&option);
						if((strcmp(option,"1"))==0)
						{
							doi();
							doe();
							card_generate();
							cvv();
							clrscr();
							printf("\n \t \t \t CREIT CARD \n \n ");
							print_card();
							save_c();
							save_cardno();
							save_cvv();
							d.credit=103;
						}
						else if((strcmp(option,"2"))==0)
						{
							d.credit=0;
							break;
						}
						else
						{
							strcpy(option,"invalid");
						}
					}while((strcmp(option,"invalid"))==0);

				}
				else if((strcmp(option_2,"2"))==0)
				{
					d.credit=103;
					doi();
					doe();
					card_generate();
					cvv();
					clrscr();
					printf("\n \t \t \t CREIT CARD \n \n ");
					print_card();
					save_c();
					save_cardno();
					save_cvv();
					do
					{
						printf("\n \t \t Do u want DEBIT card also : ");
						printf("\n \t \t 1. YES \t 2. NO");
						printf("\n \t Enter choice here : ");
						scanf("%s",&option);
						if((strcmp(option,"1"))==0)
						{
							d.debit=103;
							doi();
							doe();
							card_generate();
							cvv();
							clrscr();
							printf("\n \t \t \t DEBIT CARD \n \n ");
							print_card();
							save_d();
							save_cardno();
							save_cvv();
						}
						else if((strcmp(option,"2"))==0)
						{
							d.debit=0;
							break;
						}
						else
						{
							strcpy(option,"invalid");
						}
					}while((strcmp(option,"invalid"))==0);
				}
				else
				{
					printf("\n \t \t Please enter valid option : ");
					strcpy(option_2,"invalid");
				}
			}while((strcmp(option_2,"invalid"))==0);
		}
		else if((strcmp(option_1,"2"))==0)
		{
			d.debit=0;
			d.credit=0;
			break;
		}
		else
		{
			strcpy(option_1,"invalid");
		}
	}while((strcmp(option_1,"invalid"))==0);
}

void deposit()
{
	int i,j,len;
	char ch='1';
	char a_no[size];
	int no_line=0;
	long long int money=0;
	long long int money_convert;
	long long int money_f=0;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);

		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{
		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
				printf("\n \n \t \t Press any key to proceed : ");
				getch();
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				strcpy(d.a_no,a_no);
				deleted_file();
				d.fp=fopen("Account.txt","r");
					for(i=0;i<no_line;i++)
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcat(d.file,".txt");
							fclose(d.fp);
							chdir(d.dirname_dep);
							d.fp=fopen(d.file,"r");
								fscanf(d.fp,"%s",d.a_people);
								money=toString_money();
							do
							{
								printf("\n \n \t Enter amount to be deposited to ur account : Rs. ");
								scanf("%s",&d.money);
								strcpy(d.a_people,d.money);
								money_convert = toString_money();
								confirm();
								strcpy(d.a_people,d.option);
							}while((strcmp(d.a_people,"invallid"))==0);
							money_f=money+money_convert;
							fclose(d.fp);
							d.fp=fopen(d.file,"w");
								fprintf(d.fp,"%llu",money_f);
							fclose(d.fp);
							chdir(d.dirname_with);
							d.fp=fopen(d.file,"w");
								fprintf(d.fp,"%llu",money_f);
							fclose(d.fp);
							strcpy(d.particular,"DEPOSITED");
							strcpy(d.part_money,"Rs.");
							strcat(d.part_money,d.money);
							strcpy(d.cheque,"CASH");
							d.money_trans = money_f;
							save_trans();
							printf("\n \n \t Current Balance in ur account i.e Account no %s is Rs.%llu",a_no,money_f);
						}
						else if (i==no_line-1)
						{
							printf("\n \t \t \t No result found");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);

						}
					}
			}
		fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);
}

void withdrawals()
{
	int i,j,len;
	char ch='1';
	char a_no[size];
	int no_line=0;
	long long int money=0;
	long long int money_convert=0;
	long long int money_f=0;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);
		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{

		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
				printf("\n \n \t \t Press any key to proceed : ");
				getch();
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				strcpy(d.a_no,a_no);
				deleted_file();
				d.fp=fopen("Account.txt","r");
					for(i=0;i<no_line;i++)
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcat(d.file,".txt");
							fclose(d.fp);
							chdir(d.dirname_with);
							d.fp=fopen(d.file,"r");
								if(d.fp==NULL)
								{
									printf("\n \n \t Sorry u dont have any balance remaining in ur account : ");
									fclose(d.fp);
									money_f=0;
									d.fp=fopen(d.file,"w");
										fprintf(d.fp,"%d",money_f);
								}
								else
								{
									fscanf(d.fp,"%s",d.a_people);
									money=toString_money();
									if(money<=10)
									{
										printf("\n \n \t Sorry u already have only minimum balance in ur account i.e below Rs.10");
									}
									else
									{
										do
										{
											printf("\n \n \t Enter amount to withdraw from ur account : Rs. ");
											scanf("%s",&d.money);
											strcpy(d.a_people,d.money);
											money_convert=toString_money();
											if(money_convert > money )
											{
												printf("\n \n \t Money entered is more than the money present in account ");
												printf("\n \n \t Please select smaller amount : ");
												strcpy(d.a_people,"invalid");
											}
											else
											{
												confirm();
												strcpy(d.a_people,d.option);
											}
										}while((strcmp(d.a_people,"invalid"))==0);
										money_f=money-money_convert;
										fclose(d.fp);
										d.fp=fopen(d.file,"w");
											fprintf(d.fp,"%llu",money_f);
										fclose(d.fp);
										chdir(d.dirname_dep);
										d.fp=fopen(d.file,"w");
											fprintf(d.fp,"%llu",money_f);
										fclose(d.fp);
										strcpy(d.particular,"WITHDRAWN");
										strcpy(d.part_money,"Rs.");
										strcat(d.part_money,d.money);
										strcpy(d.cheque,"CASH");
										d.money_trans = money_f;
										save_trans();
										printf("\n \n \t Current Balance in ur account i.e Account no %s is Rs.%llu",a_no,money_f);
									}
								}
						}
						else if(i==no_line-1)
						{
							printf("\n \t \t \t No result found");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);
						}
					}
			}
	fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);
}

void details()
{
	char contact[size];
	char option[size];
	char name[size];
	char ch='1';
	int count=0;
	int i;
	int j;
	int len=0;
	do
	{
		printf("\n \n \t \t Enter Name : ");
		ch=getchar();
		gets(name);
		d.a_name[0]=ch;
		d.a_name[1]='\0';
		strcat(d.a_name,name);
		len=strlen(d.a_name);
		if(d.a_name[0]=='\n')
		{
			for(j=0;j<len-1;j++)
			{
				d.a_name[j]=d.a_name[j+1];
			}
			d.a_name[j]='\0';
		}
		for(i=0;i<len;i++)
		{
			ch=d.a_name[i];
			if(isdigit(ch))
			{
				printf("\n \t Please do not use numbers : ");
				break;
			}
		}
	}while(isdigit(ch));
	strupr(d.a_name);
	printf("\n \t \t Enter permanent address : ");
	gets(d.a_address);
	strupr(d.a_address);
	printf("\n \t \t Enter DOB(dd-mm-yyyy) : ");
	gets(d.a_dob);
	do
	{
		printf("\n \t \t Enter contact number : +91 ");
		gets(contact);
		len=strlen(contact);
		if(len==10)
		{
			for(i=0;i<10;i++)
			{
				ch=contact[i];
				if(!isdigit(ch))
				{
					printf("\n \t \t Please enter only numbers : ");
					break;
				}
			}
		}
		else
		{
			printf("\n \t \t Please enter a valid number of length 10 ");
			ch='t';
		}
	}while(!isdigit(ch));
	strcpy(d.a_contact,"+91 ");
	strcat(d.a_contact,contact);
	do
	{
		count=0;
		printf("\n \t \t Enter email address : ");
		gets(d.a_email);
		len=strlen(d.a_email);
		for(i=0;i<len;i++)
		{
			ch=d.a_email[i];
			if(ch==64)
			{
				if(i>3)
				{
					count++;
					j=i;
				}
			}
			if(count==1)
			{
				if((i-j)>3)
				{
					if(ch==46)
					{
						if(i<len-2)
						{
							count=103;
						}
					}
				}
			}
		}
		if(count!=103)
		{
			printf("\n \t \t Please enter valid email address : ");
		}
	 }while(count!=103);
	 do
	 {
		printf("\n \t \t Enter Aadhaar Card number : ");
		i=0;
		do
		{
			ch=getch();
			if(!isdigit(ch))
			{
				printf("\n \t Please enter numbers only ");
				i=103;
				break;
			}
			else
			{
				d.a_number[i]=ch;
				printf("%c",d.a_number[i]);
				if(i==3 || i==8 || i==13)
				{
					printf(" ");
					strcat(d.a_number," ");
					i++;
				}
				i++;
			}
		}while(i<19);
		getch();
	 }while(i==103);
	 do
	 {
		printf("\n \n \t \t Select gender : ");
		printf("\n \t \t 1. FEMALE \t \t 2. MALE");
		printf("\n \n \t \t Enter ur choice here : ");
		scanf("%s",&option);
		if((strcmp(option,"1"))==0)
		{
			strcpy(d.a_gender,"FEMALE");
		}
		else if((strcmp(option,"2"))==0)
		{
			strcpy(d.a_gender,"MALE");
		}
		else
		{
			printf("\n \t Please select valid option : ");
			strcpy(option,"invalid");
		}
	}while((strcmp(option,"invalid"))==0);
}

void new_customer()
{
	char option[size];
	int len;
	int no;
	int i;
	int j;
	d.joint=0;
	clrscr();
	do
	{
		printf("\n \n \t \t Account type : ");
		printf("\n \t \t 1. Single \t 2. Joint");
		printf("\n \t \t Enter ur choice here : ");
		scanf("%s",&option);
		if((strcmp(option,"1"))==0)
		{
			do
			{
				d.joint=1101;
				clrscr();
				details();
				printf("\n \t \t Press any key to proceed : ");
				getch();
				preview();
				generate_account();
				confirm();
				strcpy(option,d.option);
			}while((strcmp(d.option,"invalid"))==0);


			j=0;
			for(i=11;i>5;i--)
			{
				d.file[j]=d.a_no[i];
				j++;
			}
			d.file[j]='\0';
			strrev(d.file);
			strcpy(d.file_c,d.file);
			strcat(d.file,".txt");
			len=strlen(d.file_c);
			strrev(d.file_c);
			d.file_c[len-1]='\0';
			strrev(d.file_c);
			strcpy(d.file_d,d.file_c);
			strcat(d.file_c,"_c.txt");
			strcat(d.file_d,"_d.txt");

			save_h();
			save();
			chdir(d.dirname_psbk);
			d.fp=fopen(d.file,"a");
				fprintf(d.fp,"\n \n ");
				fprintf(d.fp,"\n   DATE      TIME \t PARTICULARS \t\t  MODE    \t   BALANCE");
				fprintf(d.fp,"\n -------------------------------------------------------------------------------");
			fclose(d.fp);
			strcpy(d.f_address,d.a_address);
		}
		else if((strcmp(option,"2"))==0)
		{
			printf("\n \t Enter total number of people to be included \n \t in joint account (max - 2) : ");
			scanf("%s",&d.a_people);
			no=toString();
			if(no>0 && no<3)
			{
				clrscr();
				d.joint=103;
				generate_account();
				j=0;
				for(i=11;i>5;i--)
				{
					d.file[j]=d.a_no[i];
					j++;
				}
				d.file[j]='\0';
				strrev(d.file);
				strcpy(d.file_c,d.file);
				strcat(d.file,".txt");
				len=strlen(d.file_c);
				strrev(d.file_c);
				d.file_c[len-1]='\0';
				strrev(d.file_c);
				strcpy(d.file_d,d.file_c);
				strcat(d.file_c,"_c.txt");
				strcat(d.file_d,"_d.txt");
				save_h();

				for(i=0;i<no;i++)
				{
					do
					{
						clrscr();
						printf("\n \t \t \t User %d ",i+1);
						details();
						printf("\n \t \t Press any key to proceed : ");
						getch();
						preview();
						confirm();
						if(i==0)
						{
							strcpy(d.f_address,d.a_address);
						}
					}while((strcmp(d.option,"invalid"))==0);
					save();
				}
				chdir(d.dirname_psbk);
				d.fp=fopen(d.file,"a");
					fprintf(d.fp,"\n \n ");
					fprintf(d.fp,"\n   DATE      TIME \t PARTICULARS \t MODE \t BALANCE");
					fprintf(d.fp,"\n -------------------------------------------------------------------------------");
				fclose(d.fp);

			}
			else
			{
				printf("\n \t Enter number of people within the given limit : ");
				strcpy(option,"invalid");
			}
		}
		else
		{
			strcpy(option,"invalid");
			printf("\n \t press any key");
			getch();
		}
	}while((strcmp(option,"invalid"))==0);
}

void show_pass()
{
	char a_no[size];
	char ch='1';
	int no_line=0;
	int i,j;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);
		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{

		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
				printf("\n \n \t \t Press any key to proceed : ");
				getch();
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				d.fp=fopen("Account.txt","r");
					for(i = 0 ; i < no_line ; i++ )
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcat(d.file,".txt");
							fclose(d.fp);
							clrscr();
							chdir(d.dirname_psbk);
							d.fp=fopen(d.file,"r");
								do
								{
									ch=fgetc(d.fp);
									printf("%c",ch);
								}while(ch!=EOF);
							break;
						}
						else if(i==no_line-1)
						{
							printf("\n \n \t No results found : ");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);
						}
					}
			}
		fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);
}

void trans()
{
	int i,j,len;
	char ch='1';
	char a_no[size];
	int no_line=0;
	long long int money=0;
	long long int money_convert;
	long long int money_f=0;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);
		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{

		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
				printf("\n \n \t \t Press any key to proceed : ");
				getch();
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				d.fp=fopen("Account.txt","r");
					for(i=0;i<no_line;i++)
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcat(d.file,".txt");
							fclose(d.fp);
							chdir(d.dirname_dep);
							d.fp=fopen(d.file,"r");
								fscanf(d.fp,"%s",d.a_people);
								money=toString_money();

							do
							{
								printf("\n \t Enter Cheque No. : ");
								scanf("%s",&d.money);
								strcpy(d.a_people,d.money);
								strcpy(d.f_cheque,d.money);
								money_convert = toString_money();
								if(money_convert < 100000 || money_convert > 999999)
								{
									strcpy(d.a_people,"invalid");
									printf("\n \t ENTER VALID CHEQUE NO :");
								}
								else
								{
									break;
								}
							}while((strcmp(d.a_people,"invalid"))==0);
							money_convert=0;
							do
							{
								printf("\n \n \t Enter amount to be deposited to ur account : Rs. ");
								scanf("%s",&d.money);
								strcpy(d.a_people,d.money);
								money_convert = toString_money();
								confirm();
								strcpy(d.a_people,d.option);
							}while((strcmp(d.a_people,"invallid"))==0);
							money_f=money+money_convert;
							fclose(d.fp);
							d.fp=fopen(d.file,"w");
								fprintf(d.fp,"%llu",money_f);
							fclose(d.fp);
							chdir(d.dirname_with);
							d.fp=fopen(d.file,"w");
								fprintf(d.fp,"%llu",money_f);
							fclose(d.fp);
							strcpy(d.particular,"DEPOSITED");
							strcpy(d.part_money,"Rs.");
							strcat(d.part_money,d.money);
							strcpy(d.cheque,"CHEQUE");
							strcpy(d.cheque_no,"No.(");
							strcat(d.cheque_no,d.f_cheque);
							strcat(d.cheque_no," )");
							d.money_trans = money_f;
							save_trans();
							printf("\n \n \t Current Balance in ur account i.e Account no %s is Rs.%llu",a_no,money_f);
						}
						else if (i==no_line-1)
						{
							printf("\n \t \t \t No result found");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);

						}
					}
			}
		fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);
}

void search()
{
	int i,j,len;
	char ch='1';
	char option[size];
	char a_no[size];
	int no_line=0;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);
		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{

		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				strcpy(d.a_no,a_no);
				deleted_file();
				d.fp=fopen("Account.txt","r");
					for(i=0;i<no_line;i++)
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcat(d.file,".txt");
							fclose(d.fp);
							chdir(d.dirname_srch);
							fclose(d.fp);
							d.fp=fopen(d.file,"r");
								do
								{
									ch=fgetc(d.fp);
									printf("%c",ch);
								}while(ch!=EOF);
							fclose(d.fp);
							printf("\n \n \t Press any key to proceed :");
							getch();
							do
							{
								clrscr();
								printf("\n \n \t Do you want to see passbook of the same account :");
								printf("\n \n \t \t 1.YES \t 2.NO");
								scanf("%s",&option);
								if((strcmp(option,"1"))==0)
								{
									chdir(d.dirname_psbk);
									d.fp=fopen(d.file,"r");
										do
										{
											ch=fgetc(d.fp);
											printf("%c",ch);
										}while(ch!=EOF);
								}
								else if((strcmp(option,"2"))==0)
								{
									break;
								}
								else
								{
									strcpy(option,"invalid");
								}

							}while((strcmp(option,"invalid"))==0);

						}
						else if (i==no_line-1)
						{
							printf("\n \t \t \t No result found");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);

						}
					}
			}
		fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);
}

void delete_ac()
{
	int i,j,len;
	char ch='1';
	char option[size];
	char a_no[size];
	int no_line=0;
	do
	{
		printf("\n \n \t Enter ur account no : ");
		scanf("%s",a_no);
		strcpy(d.check_no,a_no);
		chk_delete();
	if((strcmp(d.check_no,"PRESENT"))==0)
	{
		printf("\n \t \t \t No result found");
		do
		{
			printf("\n \n Do u want to try any other account number : ");
			printf("\n \n \t 1.YES \t 2. NO");
			printf("\n \n \t Enter ur choice here : ");
			scanf("%s",&d.a_no);
			if((strcmp(d.a_no,"1"))==0)
			{
				strcpy(d.a_no,"invalid");
			}
			else if((strcmp(d.a_no,"2"))==0)
			{
				strcpy(d.a_no,"103");
			}
			else
			{
			      strcpy(d.a_no,"1101");
			}
		}while((strcmp(d.a_no,"1101"))==0);
	}
	else
	{
		chdir("C:/BANK");
		d.fp=fopen("Account.txt","r");
			if(d.fp==NULL)
			{
				printf("\n \n \t No accounts present in the bank :");
				printf("\n \n \t \t Press any key to proceed : ");
				getch();
			}
			else
			{
				while(ch!=EOF)
				{
					ch=fgetc(d.fp);
					if(ch=='\n')
					{
						no_line++;
					}
				}
				fclose(d.fp);
				d.fp=fopen("Account.txt","r");
					for(i=0;i<no_line;i++)
					{
						fgets(d.a_no,size,d.fp);
						d.a_no[12]='\0';
						if((strcmp(d.a_no,a_no))==0)
						{
							j=0;
							for(i=11;i>5;i--)
							{
								d.file[j]=d.a_no[i];
								j++;
							}
							d.file[j]='\0';
							strrev(d.file);
							strcpy(d.file_c,d.file);
							strcat(d.file,".txt");
							len=strlen(d.file_c);
							strrev(d.file_c);
							d.file_c[len-1]='\0';
							strrev(d.file_c);
							strcpy(d.file_d,d.file_c);
							strcat(d.file_c,"_C.txt");
							strcat(d.file_d,"_D.txt");
							fclose(d.fp);
							confirm();
							if((strcmp(d.option,""))==0)
							{
								chdir(d.dirname_srch);
									remove(d.file);
								chdir(d.dirname_psbk);
									remove(d.file);
								chdir(d.dirname_card);
									remove(d.file_c);
									remove(d.file_d);
								chdir(d.dirname_dep);
									remove(d.file);
								chdir(d.dirname_with);
									remove(d.file);
								chdir(d.dirname_trans);
									remove(d.file);
								chdir(d.dirname_chqbk);
									remove(d.file);
								chdir(d.dirname_bank);
								fclose(d.fp);
								d.fp=fopen("DELETE.txt","a");
									fprintf(d.fp,"%s%c\n",d.a_no,'\0');
							}

						}
						else if (i==no_line-1)
						{
							printf("\n \t \t \t No result found");
							do
							{
								printf("\n \n Do u want to try any other account number : ");
								printf("\n \n \t 1.YES \t 2. NO");
								printf("\n \n \t Enter ur choice here : ");
								scanf("%s",&d.a_no);
								if((strcmp(d.a_no,"1"))==0)
								{
									strcpy(d.a_no,"invalid");
								}
								else if((strcmp(d.a_no,"2"))==0)
								{
									strcpy(d.a_no,"103");
								}
								else
								{
								      strcpy(d.a_no,"1101");
								}
							}while((strcmp(d.a_no,"1101"))==0);

						}
					}
			}
		fclose(d.fp);
	}

	}while((strcmp(d.a_no,"invalid"))==0);
}

void welcome()
{
	do
	{
		clrscr();
		gotoxy(35,2);
		printf("DENA BANK");
		printf("\n \n \n ");
		printf("\n \t 1. NEW CUSTOMER");
		printf("\n \t 2. SEARCH CUSTOMER");
		printf("\n \t 3. WITHDRAWALS");
		printf("\n \t 4. DEPOSITS");
		printf("\n \t 5. TRANSACTIONS");
		printf("\n \t 6. ISSUE NEW CHEQUE BOOK");
		printf("\n \t 7. SHOW PASSBOOK");
		printf("\n \t 8. DELETE CUSTOMER");
		printf("\n \t 9. EXIT");
		printf("\n \n \t \t Enter ur choice here : ");
		scanf("%s",&d.option);
		if((strcmp(d.option,"1"))==0)
		{
			new_customer();
			do
			{
				clrscr();
				printf("\n \t \t \t Nominee details :");
				details();
				printf("\n \t \t Press any key to proceed : ");
				getch();
				preview();
				confirm();
			}while((strcmp(d.option,"invalid"))==0);
			new_chqbk();
			card();
			save_n();
			printf("\n \n \t Your account number is : %s",d.a_no);
			printf("\n \t ");
			if(d.debit==1101)
			{
				printf("DEBIT Card,");
				if(d.credit==103)
				{
					printf("CREDIT Card,");
				}
			}
			else if(d.credit==103)
			{
				printf("CREDIT Card,");
			}
			printf(" Passbook and Cheque book will be delivered to the following address : \n \t \t %s",d.f_address);
			chdir(d.dirname_bank);
			d.fp=fopen("Account.txt","a");
				fprintf(d.fp,"%s\n",d.a_no);
			fclose(d.fp);
			getch();

		}
		else if((strcmp(d.option,"2"))==0)
		{
			clrscr();
			search();
			printf("\n \t \t Press any key to proceed : ");
			getch();
		}
		else if((strcmp(d.option,"3"))==0)
		{
			clrscr();
			withdrawals();
			printf("\n \t \t Press any key to proceed : ");
			getch();
		}
		else if((strcmp(d.option,"4"))==0)
		{
			clrscr();
			deposit();
			printf("\n \t \t Press any key to proceed : ");
			getch();
		}
		else if((strcmp(d.option,"5"))==0)
		{
			clrscr();
			trans();
			printf("\n \t \t Press any key to proceed : ");
			getch();
		}
		else if((strcmp(d.option,"6"))==0)
		{
			clrscr();
			f_chq();
			printf("\n \t \t Press any key to proceed : ");
			getch();
		}
		else if((strcmp(d.option,"7"))==0)
		{
			clrscr();
			show_pass();
			printf("\n \n \t \t Press any key to proceed : ");
			getch();

		}
		else if((strcmp(d.option,"8"))==0)
		{
			clrscr();
			delete_ac();
			d.fp=fopen("DELETE.txt","a");
				fprintf(d.fp,"%s\n",d.a_no);
			fclose(d.fp);
			printf("\n \t \t Press any key to proceed : ");
			getch();
		}
		else if((strcmp(d.option,"9"))==0)
		{
			break;
		}
	}while((strcmp(d.option,"9"))!=0);

}


void password()
{
	char c;
	int i;
	int j;
	int len=0;
	i=0;
	do
	{
		c=getch();
		d.password[i]=c;
		if(d.password[i]==13)
		{
			break;
		}
		else if(d.password[i]==8)
		{
			d.password[i-1]='\0';
			clrscr();
			if(d.check==1)
			{
				printf("\n \n \t Create New Account ");
			}
			printf("\n \t Enter Name : %s ",d.l_name);
			printf("\n \n \n \t ENTER YOUR PASSWORD HERE : ");
			len=strlen(d.password);
			if(i<1)
			{
				len=0;
			}
			for(j=0;j<len;j++)
			{
				printf("*");
			}
			i--;
			if(i<0)
			{
				i=0;
			}
		}
		else
		{
			c='*';
			printf("%c",c);
			i++;
		}
	}while(d.password[i]!=13);
	d.password[i]='\0';
}


void cover_page()
{
	char option[size];
	char ch;
	int len=0;
	int j;
	int attempt=0;
	d.check=0;
	do
	{
		clrscr();
		if((strcmp(option,"invalid"))==0)
		{
			if(d.check==1)
			{
				remove("LOGIN.txt");
			}
		}
		printf("\n \t 1.  LOGIN ");
		printf("\n \t 2.  EXIT ");
		printf("\n \n \t ENTER YOUR SELECTED OPTION : ");
		scanf("%s",&option);
		chdir(d.dirname_bank);
		d.fp=fopen("LOGIN.txt","r");
		if((strcmp(option,"1"))==0)
		{
			if(d.fp==NULL)
			{

				do
				{
					clrscr();
					d.check=1;
					printf("\n \n \t Create New Account ");
					printf("\n \t Enter Name : ");
					ch=getchar();
					gets(d.name);
					d.l_name[0]=ch;
					d.l_name[1]='\0';
					strcat(d.l_name,d.name);
					len=strlen(d.l_name);
					if(d.l_name[0]=='\n')
					{
						for(j=0;j<len-1;j++)
						{
							d.l_name[j]=d.l_name[j+1];
						}
						d.l_name[j]='\0';
					}
					printf("\n \n \t ENTER YOUR PASSWORD HERE : ");
					password();
					confirm();
					strcpy(option,d.option);
				}while((strcmp(d.option,"invalid"))==0);
				fclose(d.fp);
				d.fp=fopen("LOGIN.txt","w");
					fprintf(d.fp,"%s",d.l_name);
					fprintf(d.fp,"\n%s",d.password);

			}
			else
			{
				ch='\0';
				fgets(d.f_name,size,d.fp);
				len=strlen(d.f_name);
				d.f_name[len-1]=ch;
				fgets(d.f_pass,size,d.fp);
				ch='1';
				do
				{
					clrscr();
					d.check=0;
					printf("\n \t Enter Name : ");
					ch=getchar();
					gets(d.name);
					d.l_name[0]=ch;
					d.l_name[1]='\0';
					strcat(d.l_name,d.name);
					len=strlen(d.l_name);
					if(d.l_name[0]=='\n')
					{
						for(j=0;j<len-1;j++)
						{
							d.l_name[j]=d.l_name[j+1];
						}
						d.l_name[j]='\0';
					}
					printf("\n \n \t ENTER YOUR PASSWORD HERE : ");
					password();
					if((strcmp(d.l_name,d.f_name))==0)
					{
						if((strcmp(d.password,d.f_pass))==0)
						{
							confirm();
							strcpy(d.password,d.option);
						}
						else
						{
							printf("\n \n \n \t \t ERROR!!! Invalid DETAILS ");
							strcpy(d.password,"invalid");
							attempt++;
							printf("\n \n \n \t \tPLEASE ENTER ANY KEY TO PROCEED");
							getch();
						}
					}
					else
					{
						printf("\n \n \n \t \t ERROR!!! Invalid DETAILS ");
						strcpy(d.password,"invalid");
						attempt++;
						printf("\n \n \n \t \tPLEASE ENTER ANY KEY TO PROCEED");
						getch();
					}
					if(attempt>=3)
					{
						printf("\n \n \t You cannot try more : ");
						printf("\n \n \n \t \tPLEASE ENTER ANY KEY TO PROCEED");
						getch();
						strcpy(d.option,"9");
						break;
					}
				}while((strcmp(d.password,"invalid"))==0);
			}
		}
		else if((strcmp(option,"2"))==0)
		{
			break;
		}
		else
		{
			printf("\n \n \n \t \t ERROR!!! Invalid option ");
			printf("\n \n \n \t \tPLEASE ENTER ANY KEY TO PROCEED");
			strcpy(option,"invalid");
		}
			fclose(d.fp);
	}while((strcmp(option,"invalid"))==0);
}



void create()
{
	DIR *dir;

	dir=opendir(d.dirname_bank);
	if(dir)
	{
		dir=opendir(d.dirname_card);
		if(dir)
		{
			dir=opendir(d.dirname_srch);
			if(dir)
			{
				dir=opendir(d.dirname_psbk);
				if(dir)
				{
					dir=opendir(d.dirname_chqbk);
					if(dir)
					{
						dir=opendir(d.dirname_with);
						if(dir)
						{
							dir=opendir(d.dirname_dep);
							if(dir)
							{
								dir=opendir(d.dirname_trans);
								if(dir)
								{
									cover_page();
									if((strcmp(d.option,"9"))!=0)
									{
										printf("\n \n \n \n \t \t \t Press any key to proceed : ");
										getch();
										clrscr();
										welcome();
									}
								}
								else
								{
									mkdir(d.dirname_trans);
									d.n=100;
									d.trial++;
									if(d.trial < 3)
									{
										create();
									}
									else
									{
										printf("\n \n \n \n \n \n \t \t \t \t Please reinstall : ");
										printf("\n \n \n \n \n \n \t \t \t \t Press any key to proceed : ");
										getch();
									}
									load();
									create();
								}
							}
							else
							{
								mkdir(d.dirname_dep);
								d.n=100;
								load();
								create();
							}
						}
						else
						{
							mkdir(d.dirname_with);
							d.n=100;
							load();
							create();
						}
					}
					else
					{
						mkdir(d.dirname_chqbk);
						d.n=100;
						load();
						create();
					}
				}
				else
				{
					mkdir(d.dirname_psbk);
					d.n=100;
					load();
					create();
				}
			}
			else
			{
				mkdir(d.dirname_srch);
				d.n=100;
				load();
				create();
			}
		}
		else
		{
			mkdir(d.dirname_card);
			d.n=100;
			load();
			create();
		}
	}
	else
	{
		mkdir(d.dirname_bank);
		load();
		create();
	}

}


void main()
{
	clrscr();
	d.trial=0;
	strcpy(d.dirname_bank,"C:/Bank");
	strcpy(d.dirname_card,"C:/Bank/Card");
	strcpy(d.dirname_srch,"C:/Bank/Search");
	strcpy(d.dirname_psbk,"C:/Bank/Pass_bk");
	strcpy(d.dirname_chqbk,"C:/Bank/Chque_bk");
	strcpy(d.dirname_with,"C:/Bank/Wthdrwl");
	strcpy(d.dirname_dep,"C:/Bank/Deposit");
	strcpy(d.dirname_trans,"C:/Bank/Trnsctn");
	d.n=1000;
	if((strcmp(d.option,"9"))!=0)
	{
		create();
	}

}

