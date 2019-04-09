//Write a Program to read the element of the given two matrixes & to perform the matrix multiplication.


#include <iostream>
using namespace std;

class matMul
{
    int a[3][3],b[3][3];
    static int c[3][3];
    public:
        void read()
        {
            cout <<"\nReading A matrix"<<endl;
            for (int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    cin >> a[i][j];
  
            cout <<"\nReading B matrix"<<endl;
            for (int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    cin >> b[i][j]; 
        }

        void show()
        {   
            cout <<"\nDisplaying A matrix "<<endl;         
            for (int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    cout << a[i][j] <<" ";
                cout <<endl;   
            }
            
            cout<<"\nDisplaying B matrix"<<endl;
            for (int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    cout << b[i][j] <<" ";
                cout <<endl;   
            }

        }

        int multiply()
        {   
            cout <<"The Matrix multiplication is:"<<endl;
            for(int i=0;i<3;i++)
            {
                for (int j=0;j<3;j++)
                {
                    for(int k=0;k<3;k++)
                         c[i][j]+=a[i][k]*b[k][j];
                    cout << c[i][j] <<" ";
                }
                cout << endl;
            }
        }
};
int matMul :: c[3][3];
int main()
{
    matMul a;
    a.read();
    a.show();
    a.multiply();
    return 0;
}
