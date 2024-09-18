#include <stdio.h> // Include -> Imports
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_CTYPE , "" );
    wprintf(L"Olá, mundo! Teste com o Github compartilhado!");
    return 0;
}