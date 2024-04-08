#include<iostream>
using namespace std;
int main(){

	int rows;
	int columns ;
	int row;
	int column;
	for(rows=1 ; rows<6 ;rows++){
		for(columns=6 ;columns > rows ; columns--){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(row = 1;row<5 ; ++row){
		for(column=1 ; column<row+2;column++){
			cout<<"*";
		}
		cout<<"\n";
	}

}


