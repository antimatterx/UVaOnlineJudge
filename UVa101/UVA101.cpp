#include <iostream>
using namespace std;
	
int main() {
	int n;
	string command;
	cin >> n >> command;
	int blocks [n][n] = {{0}};
	
	for(int i=0; i<n; i++) {
		blocks[i][0] = 1;
	}
	
	while(command != "quit") {
		int a;
		int b;
		string prep;
		cin >> a >> prep >> b;
		
		if(command == "move" && prep == "onto") {
			for(int i = 1; blocks[a][i] != 0; i++) {
				blocks[blocks[a][i]][0] = 1;
				blocks[a][i] = 0;
			}
			for(int i = 1; blocks[b][i] != 0; i++) {
				blocks[blocks[b][i]][0] = 1;
				blocks[b][i] = 0;
			}
			
			blocks[b][1] = a;
			blocks[a][0] = 0;
		} else if(command == "move" && prep == "over") {
			for(int i = 1; blocks[a][i] != 0; i++) {
				blocks[blocks[a][i]][0] = 1;
				blocks[a][i] = 0;
			}
			int i = 1;
			while(blocks[b][i] != 0) {
				i++;
			}
			
			blocks[b][i] = a;
			blocks[a][0] = 0;
		} else if(command == "pile" && prep == "onto") {
			
		} else {//if(command == "pile" && prep == "over") {
			
		}

		
		
		
		cin >> command;
	}
	
	// print
	for(int i = 0; i < n; i++) {
		cout << i << " : ";
		if(blocks[i][0] == 1) {
			cout << i;
		}
		for(int j = 1; blocks[i][j] != 0; j++) {
			cout << " " << blocks[i][j];
		}
		cout << endl;
	}
	
	return 0;
}

