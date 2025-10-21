bool todosMultiplos(int arr[], int n, int m) {
for (int i = 0; i < n; i++)
if (arr[i] % m != 0)
return false;
return true;
}
