#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
#include<dos.h>
#include<graphics.h>

class user
{
	char name[20];
	int age;
	long long int reward;
	int rate;
	public:
	// MEMBER FUNCTIONS
	void getdata();
	void show(int);
	void result(int);

	char *ret_name()
	{
		return name;
	}
	int ret_reward()
	{
		return reward;
	}
	void get_reward(long long int l)
	{
		reward=l;
	}
};

void user::getdata()
//FUNCTION TO TAKE USER's INFORMATION
{
	cout<<endl;
	textcolor(8);
	for(int z=0; z<80; z++)
		cprintf("=");
	textcolor(8	);
	for(z=0; z<80; z++)
		cprintf("*");
	textcolor(1);
	cout<<endl<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"  ";
	for(z=0; z<76; z++)
		cprintf("=");
	cout<<"\n\t\t\t  ";
	textcolor(10);
	cprintf(" COMPLETE YOUR INFORMATION ");
	textcolor(1);
	cout<<endl;
	for(z=0; z<80; z++)
		cprintf("*");
	textcolor(WHITE);
	cout<<"\n\n ENTER YOUR NAME \t\t :: ";
	gets(name);
	cout<<" ENTER YOUR AGE (IN YEARS)\t :: ";
	cin>>age;
	textcolor(1);
	cout<<endl<<endl;
	for( z=0; z<80; z++)
		cprintf("*");
	textcolor(1);
	cout<<endl;
	cout<<"  ";
	for(z=0; z<76; z++)
		cprintf("=");
	cout<<endl<<endl<<endl<<endl;
	textcolor(8	);
	for(z=0; z<80; z++)
		cprintf("*");
	textcolor(8);
	for(z=0; z<80; z++)
		cprintf("=");
	textcolor(WHITE);
	delay(1000);
}
void user::show(int x)
{
	gotoxy(4,x);
	cout<< "* "<<name;
	gotoxy(22,x);
	cout<<age;
	gotoxy(40,x);
	cout<<reward;
	gotoxy(55,x);
	cout<<rate;
}

void user:: result(int i)
//FUNCTION TO CALCULATE THE RESULT
{
	clrscr();
	cout<<endl;
	textcolor(1);
	cout<<endl;
	for(int z=0; z<80; z++)
		cprintf("=");
	textcolor(8);
	for(z=0; z<80; z++)
		cprintf("*");
	cout<<"\n\t\t\t";
	textcolor(CYAN);
	cprintf("SO HERE ARE YOUR RESULTS ...... ");
	cout<<"\n\t\t\t";
	cprintf("---------------------------------");
	cout<<endl;
	textcolor(15);
	cout<<"\n\t\t\t NAME              :: "<<name;
	cout<<"\n\t\t\t AGE               :: "<<age;
	cout<<"\n\t\t\t CORRECT           :: "<<i;
	cout<<endl;
	cout<<"\n\t\t\t AMOUNT WON        :: "<<reward;
	cout<<endl;
	long long int k=reward;
	textcolor(YELLOW);
	cout<<endl;
	textcolor(1);
	cout<<endl;
	for(z=0; z<80; z++)
		cprintf("=");
	textcolor(8);
	for(z=0; z<80; z++)
		cprintf("*");
	cout<<endl<<endl;
	textcolor(15);
	cout<<"\t\t\t";
	cprintf("REMARKS :: ");
	if(k>=256000)
		cprintf("EXCELLENT! AND WELL PLAYED....");

	else if(k>=32000 && k<256000)
		cprintf("GOOD! CONGRATS....");

	else if(k>=0 && k<32000)
		cprintf("COULD BE DONE BETTER! .....");
	cout<<endl;
	textcolor(8);
	for(z=0; z<80; z++)
		cprintf("*");
	sound(125);
	delay(2000);
	nosound();
	delay(2000);
	while(1)
	{
		textcolor(9);
		cout<<"\t\t\t\t";
		cprintf("PLEASE RATE US :: ");
		cin>>rate;
		textcolor(WHITE);
		if(rate>10||rate<0)
			cout<<"\n\t Invalid rating! \n\t";
		else
			break;
	}
	cout<<endl<<endl;
	cout<<endl;
	textcolor(8);
	for(z=0; z<80; z++)
		cprintf("*");
	cout<<"\t\t\t";
	textcolor(15+BLINK);
	cprintf("THANK YOU FOR YOUR FEEDBACK !!!");
	cout<<endl;
	textcolor(8);
	for(z=0; z<80; z++)
		cprintf("*");
}

void instructions()
{
	textcolor(14);
	for(int z=0; z<80; z++)
		cprintf("*");
	cout<<"\n\t      ";
	cprintf("*** THESE ARE SOME INSTRUCTIONS FOR RISK IT ALL ! *** ");
	cout<<endl;
	for(z=0; z<80; z++)
		cprintf("*");
	//RULES FOR THE QUIZ
	textcolor(WHITE);
	cout<<endl;
	cprintf("1. IN THIS QUIZ YOU'LL BE ASKED 5 QUESTIONS FROM RANDOM TOPICS IN EACH LEVEL.");
	cout<<endl;
	cprintf("2. THERE ARE THREE LEVELS IN TOTAL.");
	cout<<endl;
	cprintf("3. FOR EACH CORRECT RESPONSE, YOUR REWARD WILL BE DOUBLED WHILE FOR EACH");
	cout<<endl;
	cprintf("   INCORRECT RESPONSE YOU WILL LOSE IT ALL .");
	cout<<endl;
	cprintf("4. AFTER EACH QUESTION YOU HAVE A TOUGH CHOICE TO MAKE - WHETHER YOU WANNA KEEP ");
	cprintf("   YOUR PRIZE OR ");
	textcolor(12);
	cprintf(" RISK IT ALL .");
	textcolor(WHITE);
	cout<<endl;
	cprintf("5. YOU CAN QUIT IF YOU DO NOT KNOW THE ANSWER.");
	cout<<endl;
	cprintf("6. IF YOU WANT TO QUIT TYPE QUIT IN ANSWAE COLUMN.");
	cout<<endl;
	cprintf("7. YOUR FINAL REWARD WILL BE SHOWN IN ONE OF THESE THREE SITUATIONS ");
	cout<<endl<<"\t";
	cprintf(" -> AFTER ATTEMPTING ALL 15 QUESTIONS.");
	cout<<endl<<"\t";
	cprintf(" -> AFTER INSERTING INCORRECT ANSWER.");
	cout<<endl<<"\t";
	cprintf(" -> AFTER QUITTING THE GAME.");
	cout<<endl;
	cprintf("8. IF SOME TEXT IS TYPED INSTEAD OF ANSWER THEN YOU WILL GET 3 CHANCE TO CHOOSE ");
	cprintf("   ANY ONE OPTION");
	cout<<endl;
	textcolor(14);
	for(z=0; z<80; z++)
		cprintf("=");
	for(z=0; z<80; z++)
		cprintf("*");
	cout<<endl<<"\t\t\t   ";
	cprintf(" HOPE YOU ENJOY IT !!! :) ");
	getch();
	clrscr();
	textcolor(WHITE);
}

void comments()
{
	char com[5][15]={"BRAVO!","GREAT JOB!","WELL PLAYED!","AWESOME!","KUDOS!"};
	randomize();
	int w = random(5);
	textcolor(11);
	cprintf(com[w]);
	cout<<endl;
}

class riskit
{
	public:
	char ques[100];
	char o1[30];
	char o2[30];
	char o3[30];
	char o4[30];
	char key[5];
	char yans[5];
};

void game()
{
	clrscr();
	ifstream in,a,b,c,d,k;
	int co=0;
	in.open("riskall.txt",ios::in);
	a.open("ans1.txt",ios::in);
	b.open("ans2.txt",ios::in);
	c.open("ans3.txt",ios::in);
	d.open("ans4.txt",ios::in);
	k.open("anskey.txt",ios::in);
	user u;
	u.getdata();
	clrscr();
	instructions();
	cout<<endl<<endl;
	textcolor(1);
	for(int z=0; z<80; z++)
		cprintf("=");
	for(z=0; z<80; z++)
		cprintf("*");
	cout<<endl<<endl;
	textcolor(WHITE);
	cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	textcolor(10);
	cout<<"\n\t\t\t";
	cprintf("****^* ALL THE BEST *^**** ");
	cout<<endl;
	cout<<"\t\t\t     ------------------- ";
	cout<<"\n\t\t\t\t  * ";
	textcolor(CYAN);
	cprintf(strupr(u.ret_name()));
	cout<<" *";
	cout<<"\n\t\t\t     ------------------- ";
	cout<<endl<<"\t\t\t     ";
	textcolor(11);
	cprintf("LETS BEGIN THE QUIZ ! ");
	textcolor(WHITE);
	cout<<"\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
	textcolor(1);
	cout<<endl<<endl;
	for(z=0; z<80; z++)
		cprintf("=");
	for(z=0; z<80; z++)
		cprintf("*");
	textcolor(WHITE+BLINK);
	cout<<"\t\t\t\t";
	cprintf("\nPRESS ANY KEY");
	textcolor(WHITE);
	getch();
	clrscr();

	riskit q[100];
	long long int mprice=1000;
	in.seekg(0,ios::beg);
	a.seekg(0,ios::beg);
	b.seekg(0,ios::beg);
	c.seekg(0,ios::beg);
	d.seekg(0,ios::beg);
	k.seekg(0,ios::beg);

	int j=0;
	while(in)
	{
		if(in.eof())
			break;
		in.getline(q[j].ques,200,'\n');
		a.getline(q[j].o1,30,'\n');
		b.getline(q[j].o2,30,'\n');
		c.getline(q[j].o3,30,'\n');
		d.getline(q[j].o4,30,'\n');
		k.getline(q[j].key,5,'\n');
		j++;

	}
	int level=1;
	for(int w=1;w<=level;w++)
	{
		textcolor(1);
		cout<<endl;
		for(int z=0; z<80; z++)
			cprintf("=");
		for(z=0; z<80; z++)
			cprintf("*");
		cout<<"\n\n\n\n\n";
		textcolor(WHITE);
		cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cout<<"\t\t       ";
		textcolor(10);
		cprintf("  ****^* ALL THE BEST *^**** ");
		cout<<"\n\n\t\t        ";
		textcolor(11);
		cprintf("LETS BEGIN LEVEL ");
		cout<<level;
		cprintf(" OF THE QUIZ ! ");
		textcolor(WHITE);
		cout<<"\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\t\t\t\t";
		cout<<endl<<endl<<endl<<endl<<endl;
		textcolor(1);
		for(z=0; z<80; z++)
			cprintf("=");
		for(z=0; z<80; z++)
			cprintf("*");
		sound(140);
		delay(1500);
		nosound();
		delay(1000);
		textcolor(12);
		for(int v=1;v<=50;v++)
		{
			clrscr();
			cout<<"\n\n\n\n\n\n";
			cout<<endl<<"\t\t";
			for(int e=0; e<50; e++)
				cprintf("=");
			cout<<"\n\t\t\t        LOADING LEVEL "<<level<<'\n'<<'\t'<<'\t';
			for(int j=1;j<=v;j++)
				cout<<"²";
			cout<<"\n\n\t\t"<<2*v<<"%";
				if( v > 1 && v < 20)
					cout<<"\n\t\tCreating Temporary files";
				else if( v > 20 && v<40)
					cout<<"\n\t\tAccessing Main Memory";
				else if(v >40 && v<48)
					cout<<"\n\t\tAccessing Cache";
				else
					cout<<"\n\t\tComplete. Press Enter to Continue ";
				delay(150 - v*3);
			}
			cout<<endl<<"\t\t";
			for(int e=0; e<50; e++)
				cprintf("=");
			cout<<endl<<endl<<"\n\n\t\t\t\t   ";
			textcolor(1);
			cprintf("PRESS ANY KEY");
			getch();
			clrscr();
			randomize();
		int p=random(j-5);
		for(int i=p;i<p+(5);i++)
		{
			int incorrect=0;
			if(incorrect<3)
			{
				for(int x=0;x<=incorrect;x++)
				{
					clrscr();
					cout<<"\t\t\t\t  ";
					textcolor(YELLOW);
					cprintf("  LEVEL ");
					textcolor(WHITE);
					cout<<w<<endl;
					textcolor(YELLOW);
					cout<<"\t\t\t      ";
					cprintf("   RISK IT ALL");
					textcolor(1);
					cout<<endl;
					for(int z=0; z<80; z++)
						cprintf("=");
					for(z=0; z<80; z++)
						cprintf("*");
					cout<<endl;
					textcolor(WHITE);
					cprintf(q[i].ques);
					cout<<endl;
					cprintf(q[i].o1);
					cout<<endl;
					cprintf(q[i].o2);
					cout<<endl;
					cprintf(q[i].o3);
					cout<<endl;
					cprintf(q[i].o4);
					cout<<endl;
					textcolor(8);
					cout<<endl;
					for(z=0; z<80; z++)
						cprintf("=");
					for(z=0; z<80; z++)
						cprintf("*");
					cout<<"\t\t\t\t";
					textcolor(15);
					cprintf("  MAKE A CHOICE ");
					cout<<endl;
					cout<<"\t\t\t     ";
					textcolor(12);
					cprintf("   CLAIM IT/ RISK IT");
					cout<<endl;
					textcolor(15);
					cout<<"\t\t\t";
					cprintf("ENTER AN OPTION OR TYPE QUIT :: ");
					gets(q[i].yans);
					//COMPARING USER's ANSWER WITH CORRECT ANSWER
					if(strcmpi(q[i].key,q[i].yans)==0)
					{
						textcolor(14);
						cout<<"\t\t\t\t";
						cprintf("   CORRECT !!!");
						cout<<endl;
						delay(1000);
						co++;
						textcolor(1);
						for(int z=0; z<80; z++)
							cprintf("=");
						textcolor(WHITE);
						cout<<"\t\t\t      ";
						cprintf("  COMMENT :: ") ;
						comments();
							mprice=mprice*2;
						textcolor(15);
						cout<<"\t\t\t\t";
						cprintf(" YOU WON Rs.");
						cout<<mprice<<endl<<"\t\t\t\t";
						u.get_reward(mprice);
						delay(1000);
						cprintf("WANNA RISKIT ALL !!!");
						cout<<endl<<"\t\t\t";
						char want[5];
						cprintf("ENTER YOUR CHOICE (YES/NO) :: ");
						gets(want);
						if(strcmpi(want,"yes")==0)
						{
							if(co==15)
							{
								textcolor(12);
								for(int z=0; z<80; z++)
									cprintf("=");
								textcolor(1);
								for(z=0; z<80; z++)
									cprintf("=");
								cout<<"\n\nCONGRATULATIONS! YOU HAVE WON Rs."<<mprice<<endl;
								delay(1000);
								goto label;
							}
							else
							{
								cout<<"\t\t\t\tLET'S CONTINUE"<<endl;
								delay(1000);
								break;
							}
						}
						else if(strcmpi(want,"no")==0)
						{
							textcolor(12);
							for(int z=0; z<80; z++)
								cprintf("=");
							textcolor(1);
							for(z=0; z<80; z++)
								cprintf("=");
							cout<<"\n\nCONGRATULATIONS! YOU HAVE WON Rs."<<mprice<<endl;
							delay(1500);
							goto label;
						}
						else
						{
							cout<<"\t\t\t\tINVALID ENTRY"<<endl;
						}
						break;
					}//if loop ends here
					else if(strcmpi(q[i].yans,"quit")==0)
					{ // game ask for quit;
						if(co!=0)
						{
							cout<<"YOU HAVE QUITTED THE GAME"<<endl;
							u.get_reward(mprice);
						}
						else
						{
							cout<<"YOU HAVE QUITTED THE GAME"<<endl;
							u.get_reward(0);
						}
						goto label;
					}
					else if((strcmpi(q[i].yans,"a")==0)||(strcmpi(q[i].yans,"b")==0)||(strcmpi(q[i].yans,"c")==0)||(strcmpi(q[i].yans,"d")==0))
					{
						cout<<"incorrect"<<endl;
						u.get_reward(0);
						goto label;
					}
					else
					{
						cout<<"\n invalid entry";
						incorrect++;
						if(incorrect==3)
						{
							u.get_reward(mprice);
							goto label;
						}
					}
					cout<<"\n Press any key.";
					getch();
					clrscr();
				}//get loop ends
			}// if loop ends
		} //  random ends
		//if ends here !=1
		if(co==5||co==10)
		{
			level++;
			clrscr();
		}
		else
			break;
	} // level loop
	label:
	u.result(co);
	ofstream bout("reward.dat", ios::binary|ios::app);
	bout.write((char*)&u,sizeof(u));
	bout.close();

	in.close();
	a.close();
	b.close();
	c.close();
	d.close();
	k.close();
	getch();
	//for loop terminates
	//if loop breaks
}

void main()
{
	textcolor(10);
	for(int v=1;v<=50;v++)
	{
		clrscr();
		cout<<"\n\n\n\n\n\n\n";
		cout<<endl<<"\t\t";
		for(int e=0; e<50; e++)
			cprintf("=");
		cout<<"\n\t\t\t\t      Loading "<<'\n'<<'\t'<<'\t';
		for(int j=1;j<=v;j++)
			cout<<"²";
		cout<<"\n\n\t\t"<<2*v<<"%";
		if( v > 1 && v < 20)
			cout<<"\n\t\tCreating Temporary files";
		else if( v > 20 && v<40)
			cout<<"\n\t\tAccessing Main Memory";
		else if(v >40 && v<48)
			cout<<"\n\t\tAccessing Cache";
		else
			cout<<"\n\t\tComplete. Press Enter to Continue ";
		delay(150 - v*3);
	}
	cout<<endl<<"\t\t";
	for(int e=0; e<50; e++)
		cprintf("=");
	cout<<endl<<endl<<"\n\n\t\t\t\t   ";
	textcolor(LIGHTGREEN+BLINK);
	cprintf("PRESS ANY KEY");
	getch();
	clrscr();
	cout<<"\n\n\n\n\n\n\n\t\t";
	textcolor(9);
	for(e=0; e<50; e++)
		cprintf("_");
	cout<<"\n\t\t";
	for(e=0; e<50; e++)
		cprintf("-");
	cout<<"\n\n\t\t\t";
	textcolor(13);
	cprintf("     WELCOME  TO  THE  QUIZ ");
	cout<<"\n\n\n\t\t\t\t";
	textcolor(YELLOW);
	cprintf("  RISK  IT  ALL ");
	cout<<"\n\n\t\t";
	textcolor(9);
	for(e=0; e<50; e++)
		cprintf("_");
	cout<<"\n\t\t";
	for(e=0; e<50; e++)
		cprintf("-");
	delay(2000);
	textcolor(WHITE);
	int no;
	while(1)
	{
		main_menu:
		clrscr();
		textcolor(13);
		cout<<"\n\t\t";
		for(e=0; e<50; e++)
			cprintf("_");
		cout<<"\n\t\t";
		for(e=0; e<50; e++)
			cprintf("-");
		textcolor(11);
		cout<<"\n\n\n\t\t";
		cprintf("  WELCOME TO MAIN MENU. PLEASE ENTER YOUR CHOICE.");
		textcolor(WHITE);
		cout<<"\n\n\t\t\t\t 1.ADMIN (LOGIN) \n";
		cout<<"\t\t\t\t 2.PLAY QUIZ \n";
		cout<<"\t\t\t\t 3.Exit \n\n";
		textcolor(13);
		cout<<"\n\t\t";
		for(e=0; e<50; e++)
			cprintf("_");
		cout<<"\n\t\t";
		for(e=0; e<50; e++)
			cprintf("-");
		textcolor(12);
		cout<<"\n\n\n\n\t\t\t   ";
		cprintf("ENTER YOUR CHOICE :: ");
		cin>>no;
		textcolor(WHITE);
		if(no==1)
		{

			clrscr();
			for(int i=2;i>=0;i--)
			{
				int ch;
				char ps[20];
				again:
				cout<<endl;
				textcolor(14);

				for(int v=1;v<=50;v++)
				{
					clrscr();
					cout<<"\n\n\n\n\n\n";
					cout<<endl<<"\t\t";
					for(int e=0; e<50; e++)
						cprintf("=");
					cout<<"\n\t\t\t     ACCESSING ADMIN PORTAL "<<'\n'<<'\t'<<'\t';
					for(int j=1;j<=v;j++)
						cout<<"²";
					cout<<"\n\n\t\t"<<2*v<<"%";
					if( v > 1 && v < 20)
						cout<<"\n\t\tCreating Temporary files";
					else if( v > 20 && v<40)
						cout<<"\n\t\tAccessing Main Memory";
					else if(v >40 && v<48)
						cout<<"\n\t\tAccessing Cache";
					else
						cout<<"\n\t\tComplete. Press Enter to Continue ";
					delay(150 - v*3);
				}
				cout<<endl<<"\t\t";
				for(int e=0; e<50; e++)
					cprintf("=");
				cout<<endl<<endl<<"\n\n\t\t\t\t   ";
				textcolor(YELLOW);
				cprintf("PRESS ANY KEY");
				getch();
				clrscr();
				cout<<"\n\t\t\t  !YOU HAVE "<<i+1<<" ATTEMPTS LEFT! \n";
				cout<<endl<<endl<<endl<<endl<<"\t\t";
				cprintf("ENTER PASSWORD (ENTER SPACE AFTER PASSWORD) :: ");
				cout<<endl<<"\t\t\t\t   ";
				for(int j=0;j<20;j++)
				{
					ch=getch();
					if(ch==' ')
					{
						ps[j]='\0';
						break;
					}
					else
					{
						ps[j]=ch;
						cout<<"*";
					}
				}

				if((strcmpi(ps,"mehul")!=0)&&(i!=0))
					cout<<"	\n You have "<<i<<" attempts left! \n";

				else if((strcmp(ps,"mehul")!=0)&&(i==0))
				{
					cout<<"\n\n\t\t   SORRY COULD NOT OPEN ADMIN PORTAL";
					getch();
					break;
				}
				else
				{
					while(1)
					{
						clrscr();
						textcolor(14);
						cout<<endl<<"\t\t     ";
						cprintf("***** WELCOME TO ADMIN PORTAL *****");
						textcolor(WHITE);
						cout<<"\n\t\t_____________________________________________";
						textcolor(10);
						cout<<"\n\n\t\t\t";
						cprintf("PLEASE ENTER YOUR CHOICE.");
						textcolor(11);
						cout<<"\n\n\t\t\t";
						cprintf("1.ADD MORE QUESTIONS TO THE QUIZ");
						cout<<"\n\t\t\t";
						cprintf("2.VIEW SCOREBOARD");
						cout<<"\n\t\t\t";
						cprintf("3.PLAY QUIZ");
						cout<<"\n\t\t\t";
						cprintf("4.BACK TO MAIN MENU");
						cout<<"\n\t\t\t";
						cprintf("5.EXIT\n\n");
						cout<<"\n\t\t_____________________________________________";
						int n;
						cout<<"\n\n\t\t\t";
						textcolor(12);
						cprintf("ENTER YOUR CHOICE :: ");
						cin>>n;
						textcolor(WHITE);
						if(n==1)
						{
							ofstream out,e,f,g,h,i;
							clrscr();
							textcolor(CYAN);
							cout<<endl;
							out.open("riskall.txt",ios::app);
							e.open("ans1.txt",ios::app);
							f.open("ans2.txt",ios::app);
							g.open("ans3.txt",ios::app);
							h.open("ans4.txt",ios::app);
							i.open("anskey.txt",ios::app);
							char Q[200], A[30],B[30], C[30], D[30], akey[5];
							cout<<endl<<endl<<"Enter the question :: ";
							gets(Q);
							out<<endl<<Q;
							cout<<"\nEnter the Option 1 :: ";
							gets(A);
							e<<endl<<A;
							cout<<"\nEnter the Option 2 :: ";
							gets(B);
							f<<endl<<B;
							cout<<"\nEnter the Option 3 :: ";
							gets(C);
							g<<endl<<C;
							cout<<"\nEnter the Option 4 :: ";
							gets(D);
							h<<endl<<D;
							cout<<"\nEnter the answer key\t:: ";
							gets(akey);
							i<<endl<<akey;
							cout<<"\n\n\nQuestion added successfully!";
							getch();
							out.close();
							e.close();
							f.close();
							g.close();
							h.close();
							i.close();
							textcolor(WHITE);
						}
						else if(n==2)
						{
							clrscr();
							int m=5;
							ifstream in;
							in.open("reward.dat",ios::binary,ios::in);
							user u;
							cout<<"\n\t";
							textcolor(9);
							cprintf("|NAME ");
							cout<<" \t    ";
							cprintf("|AGE ");
							cout<<"\t     ";
							cprintf("|REWARD ");
							cout<<"\t     ";
							cprintf("|RATE ");
							cout<<"\t|\n";
							textcolor(WHITE);
							cout<<"______________________________________________________________________________\n\n";
							while(in)
							{
								in.read((char*)&u, sizeof(u));
								if(in.eof())
									break;
								u.show(m);
								cout<<endl;
								m++;
							}
							textcolor(WHITE);
							in.close();
							getch();
						}
						else if(n==3)
						{
							game();
							textcolor(WHITE);
						}
						else if(n==4)
						{
							goto main_menu;
						}
						else if(n==5)
							exit(0);
						else
						{
							cout<<"\nInvalid choice!";
							getch();
							clrscr();
						}
					}//while ends
				}//else ends
			}//for loop ends
		}//admin if ends
		//USER LOGIN
		else if(no==2)
		{
			game();
			textcolor(WHITE);
		}
		else if(no==3)
			exit(0);
		else
		{
			cout<<"\nInvalid choice!";
			getch();
		}
	}//while ends
}//main ends