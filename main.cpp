#include <iostream>
using namespace std;

// プロトタイプ宣言
double Triangle(double bottom, double height);
double Circle(double radius);
double Trapezoid(double topbase, double bottombase, double height);

int main() {

	// 変数の宣言
	double bottom = 7;
	double height = 3;
	double radius = 2;
	double topbase = 2;
	double bottombase = 3;

	// 答えを入れておくための変数
	double answer = 0;

	// 三角形
	answer = Triangle(bottom, height);
	cout << "三角形の面積 : " << answer << endl;

	// 円
	answer = Circle(radius);
	cout << "円の面積     : " << answer << endl;

	// 台形
	answer = Trapezoid(topbase, bottombase, height);
	cout << "台形の面積   : " << answer << endl;
}