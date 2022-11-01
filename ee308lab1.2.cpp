string file_name;
int lv;
string temp;
cout << "Please enter the file address: ";//D: \Documents \Desktop \test.cpp
cin >> file_name;
cout <<"Please enter the level: ";
cin >> lv;
ifstream file(file_name.c_str(), ios : :in);
while(getline(file£¬temp))//Read line by line
	
	int Verify( string str, string keyword1)
{
	
	
	int location = str.find( keyword1£¬o);
	if(location != int(string ::npos )) // determine a word endness
		return 1;
	else
		return 0;
}
istringstream is(temp);
string s;
while(is >> s){// Determine if each word in each line is a keyword
	if(lv >= 1)
		Level_1(s);
	if(lv >= 2)
		Level_2(s);
}
}
if(lv >= 1)
	cout << endl << "total num = " << keyword_num << endl;
if(lv >= 2){
	cout << "switch num = " << switch_num << endl;
	cout << "case num = " ;
	for(int j = 1; j <= switch_num; j++)
		cout << case_num[j]<<''";
		cout<<endl;
}
istringstream is(temp);
string s;
if(lv >= 3)
	Level_34(temp);
if(lv >= 3){
	cout << "if-else num = " << ifelse_num << endl;
}
if( lv >= 4){
	cout << "if-elseif-else num = " << if_elseif_else_num;
}
void Level_1(string word)
{
	
	for(int j = 0; j < 32;j++)
	{
		if(Verify (word,keyword[j])){
			keyword_num++;
			break ;
		}
	}
	void Level_34(string word)
	{ 
		if(verify (word, "else if""))
			{
				choice++;
				store[ choice]=2;
			}
			else
			{
				if(Verify (word£¬"if")) 
				{
					choice++;
					store[choice]=1;
				}
				
				if(verify (word,"else"))
				{
					if(store[choice] -= 1){
						ifelse_num++;
						
						choice--;
					}
					
					else
					{
						
						
						if(store[choice]== 2){
							
							if_elseif_else_num++;
							
							choice--;
						}
						
					}
					
				}
				
			}
			
			void Level_34(string word)
			
			{
				
				{
					if(verify (word, "else if"")){
						
						choice++;
						
						store[ choice]=2;
						
				}
				
				else
					
				{
					
					if(Verify (word£¬"if")){
						
						choice++;
						store[choice]=1;
						
					}
					
					if(verify (word,"else"))
						
						
					{
						
						if(store[choice] -= 1){
							
							
							ifelse_num++;
							
							choice--;
							
							
							
						}
						
						else
							
						{
							
							if(store[choice]== 2){
								
								if_elseif_else_num++;
								
								choice--;
								
								
							}
							
						}
						
					}
					
				}
				if(lv >= 1)
					cout << endl <<"total num = " << keyword_num << endl;
				if(lv >=2){
					cout<<'switch num = " <<switch_num <<endl;cout<< "case num = " ;
					for( int j = 1;j <= switch_num;j++):
						cout<< case_num[j]<<"';
						cout<<endl;
				}
				if(lv >= 3){
					l cout << "if-else num - " << ifelse_num << endl;}
				if(lv >=4){
					cout << "if-elseif-else num = " << if_elseif_else_num;}
				

