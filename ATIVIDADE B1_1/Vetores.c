#include <stdio.h>
void
main ()
{
  float acumulador, nota, soma = 0;
  float notaFinalRL, notaFinalG, notaFinalIng, notaFinalAgil, notaFinalJs;
  float notaRacLog[4] = { 10, 5, 7, 3 };
  float notaGerenc[5] = { 5, 3, 8, 9, 7 };
  float notaIng[4] = { 7, 5, 5, 8 };
  float notaAgil[6] = { 3, 4, 7, 9, 8, 10 };
  float notaJs[5] = { 8, 4, 5, 10, 7 };

  int x;

  acumulador = 0;
  int notaMin = 10;
  int notaMax = 0;

  for (x = 0; x < 4; x++)
  {
    if (notaRacLog[x] < notaMin)
    {
      notaMin = notaRacLog[x];
    }

    if (notaRacLog[x] > notaMax)
    {
      notaMax = notaRacLog[x];
    }
    acumulador = acumulador + notaRacLog[x];

  }
  notaFinalRL = acumulador - notaMin - notaMax;
  printf ("Nota Raciocínio Lógico do candidato = %.1f\n", notaFinalRL);

  acumulador = 0;
  notaMin = 10;
  notaMax = 0;

  for (x = 0; x < 5; x++)
  {
    if (notaGerenc[x] < notaMin)
    {
      notaMin = notaGerenc[x];
    }

    if (notaGerenc[x] > notaMax)
    {
      notaMax = notaGerenc[x];
    }
    acumulador = acumulador + notaGerenc[x];

  }
  notaFinalG = acumulador - notaMin - notaMax;
  printf ("Nota Gerenciamento do candidato = %.1f\n", notaFinalG);

  acumulador = 0;
  notaMin = 10;
  notaMax = 0;

  for (x = 0; x < 4; x++)
  {
    if (notaIng[x] < notaMin)
    {
      notaMin = notaIng[x];
    }

    if (notaIng[x] > notaMax)
    {
      notaMax = notaIng[x];
    }
    acumulador = acumulador + notaIng[x];

  }
  notaFinalIng = acumulador - notaMin - notaMax;
  printf ("Nota Inglês do candidato = %.1f\n", notaFinalIng);

  acumulador = 0;
  notaMin = 10;
  notaMax = 0;

  for (x = 0; x < 6; x++)
  {
    if (notaAgil[x] < notaMin)
    {
      notaMin = notaAgil[x];
    }

    if (notaAgil[x] > notaMax)
    {
      notaMax = notaAgil[x];
    }
    acumulador = acumulador + notaAgil[x];

  }
  notaFinalAgil = acumulador - notaMin - notaMax;
  printf ("Nota Metodologia Agil do candidato = %.1f\n", notaFinalAgil);

  acumulador = 0;
  notaMin = 10;
  notaMax = 0;

  for (x = 0; x < 5; x++)
  {
    if (notaJs[x] < notaMin)
    {
      notaMin = notaJs[x];
    }

    if (notaJs[x] > notaMax)
    {
      notaMax = notaJs[x];
    }
    acumulador = acumulador + notaJs[x];

  }
  notaFinalJs = acumulador - notaMin - notaMax;
  printf ("Nota JavaScript do candidato = %.1f\n\n", notaFinalJs);

  soma +=
  notaFinalRL + notaFinalG + notaFinalIng + notaFinalAgil + notaFinalJs;
  printf ("A nota final do candidato = %.1f", soma);
}