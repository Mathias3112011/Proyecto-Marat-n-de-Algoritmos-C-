#include
using namespace std;
void imprimirDobleAnterior(int arr[], int n) {
for (int i = 1; i < n; i++)
if (arr[i] == 2 * arr[i - 1])
cout << arr[i] << " ";
}
