# C — segunda lista

Três exercícios sobre repetição, contagem e acumuladores.
Os códigos estão salvos originalmente como `.cpp`.

| Exercício | Objetivo |
|---|---|
| [01-contagem-multiplos-de-3](exercicios/01-contagem-multiplos-de-3.cpp) | Conta múltiplos de 3 entre dez números |
| [02-media-de-idades](exercicios/02-media-de-idades.cpp) | Calcula a média de três idades |
| [03-fatorial](exercicios/03-fatorial.cpp) | Calcula o fatorial com for |

## Como executar

Com G++ instalado, abra o terminal nesta pasta e compile um arquivo por vez:

```bash
g++ -std=c++11 exercicios/01-contagem-multiplos-de-3.cpp -o programa
./programa
```

No Windows, use `-o programa.exe` e execute `./programa.exe`.

## Onde adicionar

Coloque atividades desta mesma lista em `exercicios/`, como `04-nome-do-exercicio.cpp`.
Os executáveis antigos foram preservados em `arquivos-originais/`; para estudar, use os códigos em `exercicios/`.
Para uma próxima lista de C, use uma pasta `lista-03/` no repositório de [repetição em C](https://github.com/Rafael-Cornelius/Exerc-cios-de-Repeti-o).

## Pontos para revisar

- A média divide sempre por três, mesmo quando alguma idade é inválida.
- O fatorial usa `int` e não valida números negativos nem valores grandes.

---

[Todos os estudos](https://github.com/Rafael-Cornelius/Rafael-Cornelius/blob/main/FACULDADE.md) · [Como adicionar trabalhos](https://github.com/Rafael-Cornelius/Rafael-Cornelius/blob/main/COMO-ADICIONAR.md)
