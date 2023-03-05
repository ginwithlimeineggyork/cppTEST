#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

int add(int x,int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x*y;
}

int divide(int x, int y) {
	return x/y;
}

int power(int x, int n) {
	int i = 1;
	int ans = 1;
	while (i <= n) {
		ans = multiply(ans,x);
		i++;
	}
	return ans;
}

struct mission_points {
	int arr[100];
};

struct mission_points co_mi_po(int n) {
	struct mission_points mi_po;
	for (int i = 0; i<n;i++) {
		mi_po.arr[i] = i;
	}
	return mi_po;
}

template<typename T> T unrealpi = 3.14;
 
template<typename A = const int> A j = 3; 

template <typename T> T ascSort(T x, T y)
{
    return (x > y) ? x : y;
}

template <int N>                                                                 
struct Factorial{
    static int const value = N * Factorial<N-1>::value;
};

template <>                                                                      
struct Factorial<1>{
    static int const value = 1;
};

template<typename T> struct Direction
{
	T North = 8;
	T East = 6;
	T South = 2;
	T West = 4;
};

template<typename T, typename U> struct Quaternion
{
	T A = "Real";
	U I = "Quaternion";
	T B = "Real";
	U J = "Quaternion";
	T C = "Real";
	U K = "Quaternion";
	T D = "Real";
};

template<typename T, typename O, int K> struct Cannon
{
	T Reckless = K;
	O Calm = 1;
	T Stubborn = K;
	O Determined = 1;
};

template<typename ... Types> struct Mates
{
	int Age = 19;
	float Salary = 100.12;
	int Lifetoexp = 181;
	float Credit = 6.7;
};

template<typename T, typename J> void statement (T no, J cha, const char *str)
{
	std::cout << no << " " << cha << " " << str << std::endl; 
};

template<typename Y, typename G> void degrade (Y help, G score, const std::string str)
{
	std::cout << "we need " << help << " and hope to acheive " << score << ". " << str << "." << std::endl;
};

template<typename Y> void degrade (Y help, const std::string str)
{
	std::cout << "we need " << help << ". " << str << "." << std::endl;
};

class GeoRange
{
	public:
		int num;
		static char ch;
		void closure (char cha, const char *str)
		{
			std::cout << num << " " << cha << " " << str << std::endl;
		}
		static void close (char ch) 
		{
			if (ch == 'o')
			{
				std::cout << "abcdefghijklmnpqrstuvwxyz" << std::endl;
			}
		}
};

void pristrarr(std::vector<std::string> sa)
{

	for (int d = 0; d < sa.size(); d++) {
		std::cout << sa[d] << std::endl;
	}
};

std::vector<std::string> addtostrarr(std::vector<std::string> strarr, std::vector<std::string> addarr)
{	
	for (int i = 0; i < addarr.size(); i++)
	{
		strarr.push_back(addarr[i]);
	}
	return strarr;
};

int main () {
	// c++ crash course
	std::vector<std::string> as{"Joke","Tease"};
	pristrarr(as);
	std::string stringvariable = "string variable";
	std::string* stringvariablememoryaddress = &stringvariable;
	std::cout << stringvariable << std::endl;
	std::cout << stringvariablememoryaddress << std::endl;
	std::vector<std::string> abc{"A","B","C"};
	std::vector<std::string> newarr{"D"};
	abc = addtostrarr(abc,newarr);
	pristrarr(abc);
	degrade("to add integrity", "20","All right");
	degrade("to eat enough","Okay");
	statement(12,"people","dance");
	GeoRange rg;
	rg.num = 18;
	rg.closure('2',"8");
	std::vector <std::string> colors;
	colors.push_back("black");
	colors.push_back("blue");
	colors.push_back("green");
	std::cout << colors[0] << std::endl;
	std::cout << "string" << std::endl;
	Mates<int> mateA;
	std::cout << mateA.Age << " " << mateA.Lifetoexp << std::endl;
	Mates<float> mateB;
	std::cout << mateB.Salary << " " << mateB.Credit << std::endl;
	Mates<int,float> mateC;
	std::cout << mateC.Age << " " << mateC.Credit << std::endl;
	Mates<> mateD;
	std::cout << mateD.Lifetoexp << " " << mateD.Salary << std::endl;
	Mates<float> mateE;
	std::cout << mateE.Lifetoexp << mateE.Age << std::endl;
	Cannon<int, int, 1> group;
	std::cout << group.Reckless << " " << group.Calm << " " << group.Stubborn << " " << group.Determined << std::endl;
	Quaternion<std::string, std::string> imaginary_p;
	std::cout << imaginary_p.A << "+" << imaginary_p.B << imaginary_p.I << "+" << imaginary_p.C << imaginary_p.J << "+" << imaginary_p.D << imaginary_p.K <<std::endl;
	Direction<int> orientation;
	std::cout << orientation.North << std::endl;
	std::cout << unrealpi<double> << std::endl;
	std::cout << j<> << std::endl;
	std::cout << ascSort<int>(3, 7) << std::endl;
	std::cout << ascSort<double>(3.0, 7.0) << std::endl;
    std::cout << ascSort<char>('g', 'e') << std::endl;

	std::cout << "Factorial<5>::value: " << Factorial<5>::value << std::endl;    // (1)
    std::cout << "Factorial<10>::value: " << Factorial<10>::value << std::endl;
	std::cout << Factorial<1>::value <<std::endl;

	std::cout << "hi" << std::endl;
	std::cout << "this is ";
	std::cout << "adrian" << std::endl;
	std::cout << "this is a crush course for cpp\n";
	std::cout << "lets go" << std::endl;

	int num_1a = {3};
	int num_2a = {8};

	int num_3a = 12;

	std::cout << "num_1a = " << num_1a << std::endl;
	std::cout << "num_2a = " << num_2a << std::endl;
	std::cout << "num_3a = " << num_3a << std::endl;

	std::cout << typeid(num_3a).name() << " is the data type of variable num_3a; i == int" << std::endl;

	bool boo_1a = typeid(num_2a).name() == typeid(num_3a).name();
	bool boo_2a = typeid(num_2a).name() != typeid(num_3a).name();

	std::cout << "type of num_2a == type of num_3a is " << ((boo_1a == 1) ? "true" : "false") << std::endl;
	std::cout << "type of num_2a != type of num_3a is " << ((boo_2a == 1) ? "true" : "false") << std::endl;

	std::cout << "3 + 6 = " << add(3,6) << std::endl;
	std::cout << "7 - 27 = " << minus(7,27) << std::endl;
	std::cout << "7 * 3 = " << multiply(7,3) << std::endl;
	std::cout << "6 / 2 = " << divide(6,2) << std::endl;
	std::cout << "5 ^ 3 = " << multiply(multiply(5,5),5) << std::endl;
	std::cout << "(4^5-25)/9*5+10 = " << add(multiply(divide((minus(power(4,5),25)),9),5),10) << std::endl;
	std::cout << "sqrt(3) = " << sqrt(3) << std::endl;

	char str[10];
	std::cout << "enter a string of len 10" << std::endl;
	std::cin >> str;
	std::cout << "string of len 10 is " << str << std::endl;
	std::cout << "enter another string" << std::endl;
	std::cin >> str;
	std::cout << "str: now => " << str << std::endl;

	std::string plans[6] = {
		"RetreatDefenseAttack",
		"DefenseRetreakAttack",
		"AttackRetreatDefense",
		"RetreatAttackDefense",
		"DefenseAttackRetreat",
		"AttackDefenseRetreat"
	};

	int sizePlans = sizeof(plans)/sizeof(std::string);

	for (int a = 0; a < sizePlans;a++){
		std::cout << plans[a] << std::endl;
	}

	int obj_index;
	std::string name;

	std::cout << "please designate a new object index" << std::endl;
	std::cout << "new object index <= ";
	std::cin >> obj_index;

	std::cout << "please provide a username for this course" << std::endl;
	std::cout << "your username <= ";
	std::cin >> name;

	std::cout << "your first component is started from " << obj_index << ", " << name << std::endl;

	std::string first_comp;
	std::cout << "tell us the name of the first component you want to make => ";
	std::getline(std::cin >> std::ws,first_comp);
	
	int first_comp_func_num;
	std::cout << "how many function will be made to the " << first_comp << ": ";
	std::cin >> first_comp_func_num;
	std::cout << first_comp_func_num << std::endl;

	std::string first_comp_arr[first_comp_func_num];
	std::cout << first_comp_arr << std::endl;
	

	return 0;
}
