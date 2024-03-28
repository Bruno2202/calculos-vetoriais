#include <iostream>
#include <cmath>

using namespace std;

void somaVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
void subtracaoVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
void multiplicacaoVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3, double K);
void moduloVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
void produtoEscalar(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
void anguloVetores(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
void produtoVetorial(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);
void produtoMisto(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3);

int main() {
    double x1, x2, x3, y1, y2, y3, z1, z2, z3, K;

    cout << "Informe os valores do vetor 'U'" << endl;
    cout << "X1: ";
    cin >> x1;
    cout << "X2: ";
    cin >> x2;
    cout << "X3: ";
    cin >> x3;
    cout << endl;

    cout << "Informe os valores do vetor 'V'" << endl;
    cout << "Y1: ";
    cin >> y1;
    cout << "Y2: ";
    cin >> y2;
    cout << "Y3: ";
    cin >> y3;
    cout << endl;

    cout << "Informe os valores do vetor 'W'" << endl;
    cout << "Z1: ";
    cin >> z1;
    cout << "Z2: ";
    cin >> z2;
    cout << "Z3: ";
    cin >> z3;
    cout << endl;

    cout << "Informe uma constante 'K': ";
    cin >> K;
    cout << endl;

    somaVetor(x1, x2, x3, y1, y2, y3, z1, z2, z3);
    subtracaoVetor(x1, x2, x3, y1, y2, y3, z1, z2, z3);
    multiplicacaoVetor(x1, x2, x3, y1, y2, y3, z1, z2, z3, K);
    moduloVetor(x1, x2, x3, y1, y2, y3, z1, z2, z3);
    produtoEscalar(x1, x2, x3, y1, y2, y3, z1, z2, z3);
    anguloVetores(x1, x2, x3, y1, y2, y3, z1, z2, z3);
    produtoVetorial(x1, x2, x3, y1, y2, y3, z1, z2, z3);
    produtoMisto(x1, x2, x3, y1, y2, y3, z1, z2, z3);

    return 0;
}

void somaVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    cout << "----------------SOMA DE VETORES----------------" << endl;
    cout << "u + v = (" << x1 + y1 << ", " << x2 + y2 << ", " << x3 + y3 << ")" << endl;
    cout << "u + w = (" << x1 + z1 << ", " << x2 + z2 << ", " << x3 + z3 << ")" << endl;
    cout << "v + w = (" << y1 + z1 << ", " << y2 + z2 << ", " << y3 + z3 << ")" << endl << endl;
}

void subtracaoVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    cout << "--------------SUBTRACAO DE VETORES-------------" << endl;
    cout << "u - v = (" << x1 - y1 << ", " << x2 - y2 << ", " << x3 - y3 << ")" << endl;
    cout << "u - w = (" << x1 - z1 << ", " << x2 - z2 << ", " << x3 - z3 << ")" << endl;
    cout << "v - w = (" << y1 - z1 << ", " << y2 - z2 << ", " << y3 - z3 << ")" << endl << endl;
}

void multiplicacaoVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3, double K) {
    cout << "--------MULTIPLICACAO POR CONSTANTE 'K'--------" << endl;
    cout << "K * u = (" << K * x1 << ", " << K * x2 << ", " << K * x3 << ")" << endl;
    cout << "K * v = (" << K * y1 << ", " << K * y2 << ", " << K * y3 << ")" << endl;
    cout << "K * w = (" << K * z1 << ", " << K * z2 << ", " << K * z3 << ")" << endl << endl;
}

void moduloVetor(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    cout << "-------------MODULO DE UM VETOR------------" << endl;
    cout << "|u| = " << sqrt(x1 * x1 + y1 * y1 + z1 * z1) << endl;
    cout << "|v| = " << sqrt(x2 * x2 + y2 * y2 + z2 * z2) << endl;
    cout << "|w| = " << sqrt(x3 * x3 + y3 * y3 + z3 * z3) << endl << endl;
}

void produtoEscalar(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    cout << "----------------PRODUTO ESCALAR----------------" << endl;
    cout << "u * v = " << x1 * y1 + x2 * y2 + x3 * y3 << endl;
    cout << "u * w = " << x1 * z1 + x2 * z2 + x3 * z3 << endl;
    cout << "v * w = " << y1 * z1 + y2 * z2 + y3 * z3 << endl << endl;
}

void anguloVetores(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    double uMod = sqrt(x1 * x1 + x2 * x2 + x3 * x3);
    double vMod = sqrt(y1 * y1 + y2 * y2 + y3 * y3);
    double wMod = sqrt(z1 * z1 + z2 * z2 + z3 * z3);

    double uvDot = x1 * y1 + x2 * y2 + x3 * y3;
    double uwDot = x1 * z1 + x2 * z2 + x3 * z3;
    double vwDot = y1 * z1 + y2 * z2 + y3 * z3;

    if (uMod * vMod == 0 || uMod * wMod == 0 || vMod * wMod == 0) {
        cerr << "Não é possível calcular o ângulo. A magnitude de um dos vetores é zero." << endl;
        return;
    }

    double cos1 = uvDot / (uMod * vMod);
    double cos2 = uwDot / (uMod * wMod);
    double cos3 = vwDot / (vMod * wMod);

    if (cos1 < -1 || cos1 > 1 || cos2 < -1 || cos2 > 1 || cos3 < -1 || cos3 > 1) {
        cerr << "Não é possível calcular o ângulo. Valores de coseno fora do intervalo permitido." << endl;
        return;
    }

    double angulo1 = acos(cos1) * 180.0 / M_PI;
    double angulo2 = acos(cos2) * 180.0 / M_PI;
    double angulo3 = acos(cos3) * 180.0 / M_PI;

    cout << "-------------ANGULO ENTRE VETORES-------------" << endl;
    cout << "X1 = " << angulo1 << " graus" << endl;
    cout << "X2 = " << angulo2 << " graus" << endl;
    cout << "X3 = " << angulo3 << " graus" << endl << endl;
}

void produtoVetorial(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    // Produto vetorial entre U e V
    double resultXUV = x2 * y3 - x3 * y2;
    double resultYUV = x3 * y1 - x1 * y3;
    double resultZUV = x1 * y2 - x2 * y1;

    // Produto vetorial entre V e W
    double resultXVW = y2 * z3 - y3 * z2;
    double resultYVW = y3 * z1 - y1 * z3;
    double resultZVW = y1 * z2 - y2 * z1;

    // Produto vetorial entre U e W
    double resultXUW = x2 * z3 - x3 * z2;
    double resultYUW = x3 * z1 - x1 * z3;
    double resultZUW = x1 * z2 - x2 * z1;

    cout << "-------------PRODUTO VETORIAL-------------" << endl;
    cout << "U x V = (" << resultXUV << ", " << resultYUV << ", " << resultZUV << ")" << endl;
    cout << "V x W = (" << resultXVW << ", " << resultYVW << ", " << resultZVW << ")" << endl;
    cout << "U x W = (" << resultXUW << ", " << resultYUW << ", " << resultZUW << ")" << endl << endl;
}

void produtoMisto(double x1, double x2, double x3, double y1, double y2, double y3, double z1, double z2, double z3) {
    double produtoVetorialX = x2 * y3 - x3 * y2;
    double produtoVetorialY = x3 * y1 - x1 * y3;
    double produtoVetorialZ = x1 * y2 - x2 * y1;

    double misto = produtoVetorialX * z1 + produtoVetorialY * z2 + produtoVetorialZ * z3;

    cout << "-------------PRODUTO MISTO-------------" << endl;
    cout << "Produto misto de U, V e W: " << misto << endl;
}