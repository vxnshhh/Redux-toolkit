 //
package dados31;
import java.util.Scanner;
public class Dados31 {
public static void main(String[] args) {
final int QUANT = 10;
int [] v = new int[QUANT];
Scanner entrada = new Scanner(System.in);
String s;
int n = -1;
char tecla;
do {
n++;
System.out.print("Valor: ");
v[n] = Integer.parseInt(s);
} while (v[n] != 0 && n < QUANT);
if (v[n] == 0) {
n--;
}
sortForcaBruta(v, n);
exibeLista(v, n);
System.exit(0);
}
// ------------------------------------------------------- sortForcaBruta
static void sortForcaBruta(int [] v, int n) {
for (int i = 0;i < n;i++) {
for (int j = i+1;j <= n;j++) {
if (v[i] > v[j]) {
int temp = v[i];
v[i] = v[j];
v[j] = temp;
}
}
}
}
// ------------------------------------------------------- exibe
static void exibeLista(int [] v, int n) {
System.out.print("Lista: ");
if (n == -1) {
System.out.println("Vazia");
}
else {
for (int i = 0;i <= n;i++) {
System.out.printf("%2d ", v[i]);
}
}
System.out.println();
}
}