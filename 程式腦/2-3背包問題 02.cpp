#include <iostream> 
using namespace std; 

int main() { 
    
    int iarr[4][2]={{2,3},{1,2},{3,4},{2,2}}; 

     

    for(int i = 0; i < 4; i++) { 
        for(int j = 0; j < 2; j++) 
            cout << iarr[i][j] << "\t"; 
        cout << endl; 
    } 

    return 0; 
}
