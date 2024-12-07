//////////////////////Task 1
#include<iostream>
#include<cmath>
using namespace std;
////////////
////////////double ans = 1;
////////////
//////////////int exponent(int a, int b)
//////////////{
//////////////	if (b==0)
//////////////	{
//////////////		return ans;
//////////////	}
//////////////	else if(b>0) {
//////////////		ans = a * ans;
//////////////		b--;
//////////////		return exponent( a, b);
//////////////	}
//////////////	else {
//////////////		
//////////////		ans = ans/a;
//////////////		b++;
//////////////		return exponent(a, b);
//////////////	}
//////////////}
//////////////int main()
//////////////{
//////////////	int a,b;
//////////////	cout << "Enter your base:";
//////////////	cin >> a;
//////////////	cout << "Enter your exponent:";
//////////////	cin >> b;
//////////////	cout<<exponent(a, b);
//////////////}
////////////
//////////////////////Task 2
//////////////int smallnum(int a, int b)
//////////////{
//////////////	if (a < b) {
//////////////		return a;
//////////////	}
//////////////	else {
//////////////		return b;
//////////////	}
//////////////}
//////////////int smallnum(int a, int b, int c)
//////////////{
//////////////
//////////////	if (a<b && a<c) {
//////////////		return a;
//////////////	}
//////////////	else if (b<a&&b<c)
//////////////	{
//////////////		return b;
//////////////	}
//////////////	else {
//////////////		return c;
//////////////	}
//////////////}
//////////////int smallnum(int a, int b, int c, int d)
//////////////{
//////////////
//////////////	if (a < b && a < c &&a<d) {
//////////////		return c;
//////////////	}
//////////////	else if (b < a && b < c && b<d)
//////////////	{
//////////////		return b;
//////////////	}
//////////////	else if(c < a && c < b && c < d)
//////////////	{
//////////////		return c;
//////////////	}
//////////////	else {
//////////////		return d;
//////////////	}
//////////////}
//////////////int largenum(int a, int b)
//////////////{
//////////////	if (a > b) {
//////////////		return a;
//////////////	}
//////////////	else {
//////////////		return b;
//////////////	}
//////////////}
//////////////int largenum(int a, int b,int c)
//////////////{
//////////////	if (a < b && a < c) {
//////////////		return c;
//////////////	}
//////////////	else if (b < a && b < c)
//////////////	{
//////////////		return b;
//////////////	}
//////////////	else {
//////////////		return c;
//////////////	}
//////////////}
//////////////int largenum(int a, int b,int c,int d)
//////////////{
//////////////	if (a < b && a < c && a < d) {
//////////////		return a;
//////////////	}
//////////////	else if (b < a && b < c && b < d)
//////////////	{
//////////////		return b;
//////////////	}
//////////////	else if (c < a && c < b && c < d)
//////////////	{
//////////////		return c;
//////////////	}
//////////////	else {
//////////////		return d;
//////////////	}
//////////////}
//////////////int main()
//////////////{
//////////////	int a, b, c, d;
//////////////	cout << "Enter 4 positive numbers:"<<endl;
//////////////	cin >> a;
//////////////	cout << " ";
//////////////	cin >> b;
//////////////	cout << " ";
//////////////	cin >> c;
//////////////	cout << " ";
//////////////	cin >> d;
//////////////	cout << "The smallest number among first two numbers: "<<endl;
//////////////	cout<<smallnum(a,b);
//////////////	cout << endl;
//////////////	cout << "The largest number among first two numbers: " << endl;
//////////////	cout<<largenum(a, b);
//////////////	cout << endl;
//////////////	cout << "The smallest number among first three numbers: " << endl;
//////////////	cout<<smallnum(a,b,c);
//////////////	cout << endl;
//////////////	cout << "The largest number among first three numbers: " << endl;
//////////////	cout<<largenum(a, b, c);
//////////////	cout << endl;
//////////////	cout << "The smallest number among first four numbers: " << endl;
//////////////	cout<<smallnum(a, b,c,d);
//////////////	cout << endl;
//////////////	cout << "The largest number among first four numbers: " << endl;
//////////////	cout<<largenum(a, b,c,d);
//////////////	cout << endl;
//////////////}
//////////////////Task 5
////static float MAX(float a, float b, float c)
////{
////	if (a > b && a > c)
////	{
////		return a;
////	}
////	else if (b > a && b > c)
////	{
////		return b;
////	}
////	else
////	{
////		return c;
////	}
////}
////static float MAX(int a,int b)
////{
////	if (a > b )
////	{
////		return a;
////	}
////	else if (b>a)
////	{
////		return b;
////	}
////	
////}
////int main()
////{
////	cout << "Enter three float numbers:"<<" \n";
////    float a, b, c;
////	cin >> a >> b >> c;
////	cout << "Maximum of " << a<<"," << b << " and " << c << "is:" << MAX(a, b, c)<<" \n";
////	int d, e;
////	cout << "Enter three two integers :"<<" \n";
////	cin >> d >> e ;
////	cout << "Maximum of " << d << "," << e <<" " << "is:" << MAX(d, e)<<"\n";
////}
//////////////////////Task 6
////const double pi = 3.14159;
////float area(float r)
////{
////	float A;
////	A = pi * r * r;
////	return A;
////}
////float area(float l, float w)
////{
////	float A;
////	A = l * w;
////	return A;
////}
////float area(float b, float h,bool Istriangle)
////{
////	float A;
////	A = 0.5*b*h;
////
////	return A;
////}
////int main()
////{
////	cout << "Geometry calculator!" <<endl;
////	cout << "1. Circle\n";
////	cout << "2. Rectangle\n";
////	cout << "3. Triangle\n";
////	cout << "Enter choice: \n";
////	int choices;
////	cin >> choices;
////	switch (choices)
////	{
////	case 1:
////		cout << "Enter radius for area of circle: " << endl;
////		float r;
////		cin >> r;
////		cout << "Area of circle: " << area(r) << endl;
////		break;
////	case 2:
////		cout << "Enter length for area of rectangle: " << endl;
////		float l;
////		cin >> l;
////		cout << "Enter width for area of rectangle: " << endl;
////		float w;
////		cin >> w;
////		cout << "Area of rectangle: " << area(l, w) << endl;
////		break;
////	case 3:
////		cout << "Enter base for area of triangle: " << endl;
////		float b;
////		cin >> b;
////		cout << "Enter height for area of triangle: " << endl;
////		float h;
////		cin >> h;
////
////		cout << "Area of triangle: " << area(b, h, true) << endl;
////		break;
////	default:
////		cout << "Invalid shape!";
////	}
////		
////}
////Task 3
////int fabonacci(int n)
////{
////	if (n <= 1)
////	{
////		return n;
////	}
////	else {
////		return fabonacci(n - 1) + fabonacci(n - 2);
////	}
////}
////int main()
////{
////	int n;
////	cout << "Enter a number :";
////	cin >> n;
////	cout<<"Fabonacci number for"<<n<<" is "<<fabonacci(n);
////}
////////////// Task 7
// double fuel_efficiency(int eng_dis, double fuel_consumption_rate, double vehicle_weight)
//{
//	 double result;
//	 result = eng_dis / (fuel_consumption_rate * vehicle_weight);
//	 return result;
//
//}
// double fuel_efficiency(int cargo_weight, float engine_power, double aerodynamic_drag_coefficient)
// {
//	 double result;
//	 result = engine_power / (cargo_weight * aerodynamic_drag_coefficient);
//	 return result;
// }
// double vehicle_efficiency(double N, double cruising_altitude, float airspeed)
// {
//	 double result;
//	 result = (cruising_altitude * airspeed)/(N);
//	 return result;
// }
//
//int main()
//{
//	cout << "Enter the vehicle for fuel efficiency\n";
//	cout << "Car :\n";
//	cout << "Truck:\n";
//	cout << "Airplane:\n";
//	cout << "Enter your choice:\n";
//	int choice;
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//		int eng_dis;
//		cout << "Car efficiency:\n";
//		double fuel_consumption_rate, vehicle_weight;
//		cout << "Enter engine displacement:\n";
//		cin >> eng_dis;
//		cout << "Enter fuel consumption rate:\n";
//		cin >> fuel_consumption_rate;
//		cout << "Enter vehicle weight:\n";
//		cin >> vehicle_weight;
//		cout << fuel_efficiency(eng_dis, fuel_consumption_rate, vehicle_weight) << " miles per gallon\n";
//		break;
//	case 2:
//		cout << "Truck efficiency:\n";
//		int cargo_weight;
//		float engine_power;
//		double aerodynamic_drag_coefficient;
//		cout << "Enter cargo weight:\n";
//		cin >> cargo_weight;
//		cout << "Enter engine power:\n";
//		cin >> engine_power;
//		cout << "Enter aerodynamic drag coefficient:\n";
//		cin >> aerodynamic_drag_coefficient;
//		cout << fuel_efficiency(cargo_weight, engine_power, aerodynamic_drag_coefficient) << " gallons per mile\n";
//		break;
//	case 3:
//		cout << "Airplane efficiency:\n";
//		string aircraft_type;
//		float airspeed;
//		double cruising_altitude;
//		cout << "Enter aircraft type:\n";
//		cin >> aircraft_type;
//		double N;
//		if (aircraft_type == "Jet")
//		{
//			N = 1.2;
//		}
//		else if (aircraft_type == "Propeller")
//		{
//			N = 1.8;
//		}
//		else
//		{
//			N = 2.5;
//		}
//		cout << "Enter airspeed:\n";
//		cin >> airspeed;
//		cout << "Enter cruising altitude:\n";
//		cin >> cruising_altitude;
//		cout << vehicle_efficiency(N, airspeed, cruising_altitude);
//		cout << " hours per gallon\n";
//		break;
//	
//	
//	}
//}
////////////Task 4
int one_pair = 1;
int fib(int actual_months, int pairs)
{
	if (actual_months == 0|| actual_months ==1)
	{
		return actual_months;
	}
	else {
		return fib(actual_months - 1,pairs) + fib(actual_months - 2, pairs);
	}
}
int main()
{
	int initial_months,pairs;
	cout << "Enter the number of months for simulation:\n";
	cin >> initial_months;
	if (initial_months <= 0)
	{
		while (initial_months <= 0) {
			cout << "Invalid pair!Try again\n";
			cin >> initial_months;
		}
	}
	cout << "Enter the initial number of rabbit pairs:\n";
	cin >> pairs;
	if (pairs <= 0)
	{
		while (pairs <= 0) {
			cout << "Invalid pair!Try again\n";
			cin >> pairs;
		}
	}
	int actual_months= initial_months+2;
    int one_pair=fib(actual_months, pairs);
	cout << one_pair * pairs;
}
