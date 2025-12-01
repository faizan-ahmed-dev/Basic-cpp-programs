#include <iostream>
using namespace std;

	// Creating the map.
	void map( int dimension, int row, int column) {
	
	for( int i=0 ; i < dimension ; i++) {   // for rows
	 cout << i;
	 
		for( int j=0 ; j < dimension ; j++ ) { // for columns
		
		 if( i == row && j == column)
		 cout << " X " ;  // Treasure Location.
		 else
			cout << " - " ;  // Empty Space.
			}
			
	cout << endl;
	}
 }
 
int main() {
	int dimension, row, column, selection;  // for n x n map
	
	// Validate map size.
	do { 
	cout << "Enter a map size between 5 and 9 inclusive : ";
	cin >> dimension;
	
	if(dimension < 5 || dimension > 9){
		cout << "Invalid Input! Try Again:" << endl;
	}
   }
	while( dimension < 5 || dimension > 9) ; 
	
	// Validate treasure location.
	do {
        cout << "Initial location of X (row - column) : ";
		cin >> row >> column ;     

        if (row < 1 || row > dimension || column < 1 || column > dimension) {
            cout << "Invalid location! Row and column must be between 1 and "
                 << dimension << ". Please try again.\n";
        }
    } while (row < 1 || row > dimension || column < 1 || column > dimension);

    cout << endl;
	

	// Initial Map.
	map(dimension, row,column);
	
	// Menu Loop.
	while(true) {
        cout << "\n--- MENU ---\n";
        cout << "1) Update treasurer coordinates (row/column)\n";
        cout << "2) Shift X left or right\n";
        cout << "3) Shift X up or down\n";
        cout << "4) Exit Program\n";
        cout << "Select : ";
        cin >> selection ;
        
        switch (selection) {
        	
            case 1: { // Update coordinates
                do {
                    cout << "Enter new row and column : ";
                    cin >> row >> column;

                    if (row < 1 || row > dimension || column < 1 || column > dimension)
                        cout << "Invalid location! Try again.\n";
                } 
			    while (row < 1 || row > dimension || column < 1 || column > dimension);
				cout << "Updated coordinates!\n";
				
                map(dimension, row, column);
                break;
            }

            case 2: { // Shift left or right
                int offset;
                do {
                    cout << "Shift X left or right (-ve for right and +ve for left): ";
                    cin >> offset;

                    int newColumn = column - offset; 

                    if (newColumn < 1 || newColumn > dimension)
                        cout << " Invalid move! Out of map bounds. Try again.\n";
                    else {
                        column = newColumn;
                        break;
                    }
                } 
				while (true);

                map(dimension, row, column);
                break;
            }

            case 3: { // Shift up or down
                int offset;
                do {
                    cout << "Shift X up or down (-ve for up and +ve for down): ";
                    cin >> offset;

                    int newRow = row + offset;

                    if (newRow < 1 || newRow > dimension)
                        cout << " Invalid move! Out of map bounds. Try again.\n";
                    else {
                        row = newRow;
                        break;
                    }
                } 
				while (true);

                map(dimension, row, column);
                break;
            }

            case 4:
                cout << "Exiting Program.\n";
                return 0;

            default:
                cout << "Invalid selection! Try again.\n";
        }
    }
    return 0;
}

