#include<iostream>
//using std::cout;
//using std::endl;

using namespace std;
class car

{
	public:
		/*speed and fuel are the data members*/
		int speed;
		float fuel;
		/*carSpeed is the member function*/
		void carSpeed(){
			
			cout<<"Enter the carSpeed"<<endl;
			cin>>speed;
			cout<<"The given num is "<<speed<<"hi"<<endl;
			
		}
};
int main()
{
	car audi ;
	audi.carSpeed();
	car benz;
	benz.carSpeed();

return 0;
}
