#include <iostream>
using namespace std;
int main() {
    int row, col;
    cout<<"no of rows"<<endl;
    cin>>row;
    cout<<"no of col"<<endl;
    cin>>col;
        int *ARR = new int[row*col];
        for (int i = 0 ; i < row; i++)
            for(int j = 0; j<col;j++)
                *(ARR + i * col + j)= rand() % 100;
         for (int i = 0 ; i < row; i++)
            for(int j = 0; j<col;j++)
                cout<<*(ARR + i * col + j) << " ";
        
        cout << endl;

        delete[]ARR;
        return 0;
    











return 0;
}