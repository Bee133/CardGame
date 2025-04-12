#include "Igrock.h"
#include <string>
#include <locale>

using namespace std;

Igrock::Igrock(int k1)
{
	schetIgroka = k1;
}

int Igrock::Put_schetIgroka()
{
	return schetIgroka;
}

string Igrock::Get_schetIgroka() {
	setlocale(0, "rus");
	string s = "—чЄт игрока равен = " + to_string(Put_schetIgroka());
	return s;
}

void Igrock::Dobavl() {
	schetIgroka = Put_schetIgroka() + 100;
}