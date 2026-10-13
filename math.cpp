
// 三角形
double Triangle(double bottom, double height) {
	return bottom * height / 2;
}

// 円周率
static double const pi = 3.14;

// 円
double Circle(double radius) {
	return radius * radius * pi;
}

// 台形
double Trapezoid(double topbase, double bottombase, double height) {
	return (topbase + bottombase) * height / 2;
}

// 変更