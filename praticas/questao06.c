#include <stdio.h>
#include <math.h>

int main() {
  double a = 4.0f;
  double b = 3.0f;
  double c = 7.0f;

  //b² - 4ac
  double delta - pow(b,2) - 4 * a * c;

  // x1 - b + raiz(delta) / 2a
  double raiz_x1 = (-coeficiente_b + sqrt(delta) / 2 * coeficiente_a;
  // x2 -b -raiz(delta) / 2a
  double raiz_x2 - (-coeficiente_b - sqrt(delta)/2 * coeficiente_a;

  printf("as raizes da equacao d%x² %dx %d são x1 = %f e x2 = %f\n",
    coeficiente_a, coeficiente_b, coeficiente_c, raiz_x1, raiz x2);

  return 0;

}