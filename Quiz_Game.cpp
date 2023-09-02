# Quiz-Game


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string questions[10] = {
	"What is the capital of India?",
	"Which river is known as the Ganges in India?",
	"Which of these is a famous Indian festival of lights?",
	" Who is known as the Father of the Nation in India?",
	"Which famous monument in India is also known as the Symbol of Love?",
	"What is the national currency of India?",
	"Which Indian state is known as the Land of Five Rivers?",
	"Which mountain range spans across northern India, separating it from the Tibetan Plateau?",
	"Which Indian city is famous for its film industry, often referred to as Bollywood?",
	"Who was the first woman Prime Minister of India?"
						};
	string options[10][4] = {
	{"Mumbai", "New Delhi","Bangalore","Kolkata"},
	{"Yamuna","Brahmaputra","Indus","Ganga"},
	{" Holi"," Diwali","Eid","Christmas"},
	{"Sardar Patel","Subhas Chandra Bose","Jawaharlal Nehru","Mahatma Gandhi"},
	{" India Gate","Red Fort","Qutub Minar","Taj Mahal"},
	{"ollar","Euro","Rupee","Yen"},
	{"Punjab","Kerala","Rajasthan","Gujarat"},
	{"Rocky Mountains","Andes Mountains","Himalayas","Alps"},
	{"Chennai","Mumbai","Hyderabad","Kolkata"},
	{"Indira Gandhi","Mother Teresa","Sushma Swaraj","Sonia Gandhi"},
					    };
	string correctOptions[10] = {
		"New Delhi","Ganga","Diwali","Mahatma Gandhi",
		"Taj Mahal","Rupee","Punjab",
		"Himalayas","Mumbai"," Indira Gandhi"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	int op;

	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//----- Printing Correct Options -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	
	getch();
	return 0;
}
