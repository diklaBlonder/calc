static const double E = 2.718281828;
static const double PI = 3.141519265358979323846;

int isSymbol(char* s) {
	
	return (strcmp(s, "e") == 0 || strcmp(s, "pi") == 0 || strcmp(s, "inf") == 0);
}

double getSymbol(char* s) {
	
	if(strcmp(s, "e") == 0)
		return E;
	
	if(strcmp(s, "pi") == 0)
		return PI;
	
	if(strcmp(s, "inf") == 0)
		return INFINITY;
}

double factorial(double d) {
	
	double result = 1;
	
	for(; d > 1; d--)
		result *= d;
	
	return result;
}

double toRadians(double d) {
	
	return d * (PI / 180.0);
}

double toDegrees(double d) {
	
	return d * (180.0 / PI);
}

int precedence(char c) {
	
	switch(c) {
		case '$':
		case '!':
			return 5;
		case '~':
		case '_':
			return 4;
		case '^':
			return 2;
		case '*':
		case '/':
		case '%':
			return 1;
		case '+':
		case '-':
			return 0;
	}
}

int isOperator(char c) {
	
	switch(c) {
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '^':
		case '!':
		case '~':
		case '_':
		case '$':
			return 1;
		default:
			return 0;
	}
}

int isFunction(char* s) {
	
	return (strcmp(s, "sin") == 0 || strcmp(s, "cos") == 0 || strcmp(s, "tan") == 0 || strcmp(s, "asin") == 0 || strcmp(s, "acos") == 0 || strcmp(s, "atan") == 0 || strcmp(s, "exp") == 0 || strcmp(s, "floor") == 0 || strcmp(s, "ceil") == 0 || strcmp(s, "round") == 0 || strcmp(s, "log") == 0 || strcmp(s, "ln") == 0 || strcmp(s, "sinh") == 0 || strcmp(s, "cosh") == 0 || strcmp(s, "tanh") == 0 || strcmp(s, "sqrt") == 0 || strcmp(s, "abs") == 0);
}

int isLeftAssociative(char c) {
	
	switch(c) {
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return 1;
		case '^':
		case '!':
		case '~':
		case '_':
		case '$':
			return 0;
	}
}

int isBinary(char c) {
	
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^');
}