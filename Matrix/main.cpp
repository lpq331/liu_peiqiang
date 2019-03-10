#include <iostream>

using namespace std;

class Matrix
{
	public:
		friend Matrix operator +(Matrix &,Matrix &);
		void input();
		void display();
	private:
		int mat[3][3];
};
Matrix operator +(Matrix &a,Matrix &b)
{
	Matrix c;
	for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
    }
	return c;
}
void Matrix::input()
{
	cout<<"input value of matrix:"<<endl;
	for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>mat[i][j];
    }
}
void Matrix::display()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	Matrix a,b,c;
	a.input();
	b.input();
	cout<<"Matrix a:"<<endl;
	a.display();
	cout<<"Matrix b:"<<endl;
	b.display();
	c=a+b;
	cout<<"Matrix 3*3 b:"<<endl;
	c.display();
}
