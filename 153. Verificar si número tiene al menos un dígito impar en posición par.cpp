#include 
using namespace std;

int main() {
int n, pos = 1;
bool cumple = false;
cin >> n;
while (n != 0) {
int d = n % 10;
if (pos % 2 == 0 && d % 2 != 0) {
cumple = true;
break;
}
pos++;
n /= 10;
}
cout << (cumple ? "Impar en posición par" : "No cumple");
return 0;
}

