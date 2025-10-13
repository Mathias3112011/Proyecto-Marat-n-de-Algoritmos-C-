#include 
using namespace std;

int main() {
int n;
cin >> n;
for (int i = 1; i <= n; i++)
if (i % 2 != 0 && i % 3 != 0)
cout << i << " ";
return 0;
}
📝 Excluye múltiplos de 2 y 3.
219. Imprimir los números del 1 al n que sean múltiplos de 7 o 9
#include 
using namespace std;

int main() {
int n;
cin >> n;
for (int i = 1; i <= n; i++)
if (i % 7 == 0 || i % 9 == 0)
cout << i << " ";
return 0;
}
