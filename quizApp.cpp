#include<iostream>
#include<windows.h>
using namespace std;
void showMenu()
{
	cout<<"\t\t\t\t\t*******************************************"<<endl;
	cout<<"\t\t\t\t\t***************QUIZ APP*******************"<<endl;
	cout<<"\t\t\t\t\t*******************************************"<<endl;
	cout<<"\n\n\n\n\n";
	cout<<"1)NEW GAME"<<endl;
	cout<<"2)HIGHEST SCORE"<<endl;
	cout<<"3)QUIT\n\n";
}
int main()
{
	system("COLOR 70");
	string questions[10] = {
	"1.Which cricketer has been named the Captain of the ICCs Mens T20I and ODI teams of the decade?",
	"2.Bayern Munich, which won the final of the FIFA Club World Cup in Qatar, is the football club of which country?",
	"3.Which Indian footballer has surpassed Lionel Messi in international goals?",
	"4.Which country won gold medal in men’s football in Tokyo Olympics, 2021?",
	"5.Which country is to play host to the Asian Football Confederation (AFC) Women’s Asian Cup 2022?",
	};
	
	string options[5] = {
	 "1)Mahendra Singh Dhoni 	2)Virat Kohli 	3)AB de Villiers 	4)Chris Gayle",
	 "1)United Kingdom 	2)France 	3)Germany 	4)Italy",
	 "1)Gurpreet Singh Sandhu 	2)Sunil Chhetri 	3)Mohammad Yasir 	4)Amrinder Singh",
	 "1)Germany 	2)Mexico 	3)Spain 	4)Brazil",
	 "1)UK 	2)India 	3)Sri Lanka 	4)Bangladesh",
	 };
	 
	 int ans[5] = {1, 3, 2, 4, 2};
	 string playerName= "BOT";
	 int highestScore=0;
	 char ch='y';
	 
	 while(ch=='y')
	 {
	 	system("CLS");
	 	
	 	int currentResult=0;
	 	string currentPlayer;
	 	showMenu();
	 	int menu;
	 	cin>>menu;
	 	
	 	switch(menu)
	 	{
	 		case 1:
	 			system("CLS");
				cout<<"\t\t\t\t\t============================="<<endl;
				cout<<"\t\t\t\t\t=======PLAYING NEW GAME======"<<endl;
				cout<<"\t\t\t\t\t============================="<<endl;
				cout<<"ENTER YOUR NAME: "<<"\n\n";
				cin>>currentPlayer;
				
				for(int i=0; i<5; i++)
				{
					int op;
					cout<<questions[i]<<endl;
					cout<<options[i]<<endl<<"\n\n";
					cout<<"ENTER CORRECT OPTION: ";
					cin>>op;
					if(op==ans[i])
					{
						currentResult++;
						if(currentResult>highestScore)
						{
							highestScore=currentResult;
							playerName=	currentPlayer;	
						}
						
					}
					
				}
			break;
			
			case 2:
				system("CLS");
				cout<<"\t\t\t\t\t=========================="<<endl;
				cout<<"\t\t\t\t\t=======HIGHEST SCORE======"<<endl;
				cout<<"\t\t\t\t\t=========================="<<endl;
				cout<<"\n\n\nHIGHEST SCORE IS "<<highestScore<<" by "<<playerName<<endl;
			break;
			
			case 3:
				system("CLS");
				cout<<"\n\n\nTHANK YOU FOR PLAYING THE GAME!!!....";
				exit(0);
			break;
			
			default:
				cout<<"ERROR";
		}
		
		cout<<"\n\n DO YOU WANT TO CONTINUE y/n ?";
	 	cin>>ch;
	 	 	
	 }
	return 0; 
	 
}
