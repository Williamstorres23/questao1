# Uso de `struct` em C

## Introdução

Em C, uma `struct` (ou estrutura) é uma maneira de agrupar variáveis sob um mesmo nome. Essas variáveis, conhecidas como membros da estrutura, podem ser de tipos diferentes. As estruturas são usadas para representar dados complexos e organizá-los de forma que possam ser facilmente manipulados.

## Definindo uma `struct`

Para definir uma estrutura, usamos a palavra-chave `struct` seguida pelo nome da estrutura e uma lista de membros entre chaves `{}`. Cada membro é definido por um tipo de dado seguido por um nome. Aqui está um exemplo básico:

```c
struct Ponto {
    int x;
    int y;
};
