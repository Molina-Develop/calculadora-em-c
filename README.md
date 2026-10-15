# calculadora-em-c

Calculadora funcional com a opção de realizar novas operações ou encerrar. Foi desenvolvida como parte de uma atividade acadêmica avaliativa, para praticar estruturas de repetição e condicionais.

## Funcionalidades
- Realizar operações de adição, subtração, multiplicação e divisão.
- Realizar novas operações sem reiniciar o programa.
- Exibir uma mensagem ao tentar dividir por zero.

## Como executar

É necessário ter um compilador C instalado. No meu ambiente, utilizei o TDM-GCC 10.3.0 no Windows.

No terminal, acesse a pasta que contém `calculadora.c` e compile:

```
gcc calculadora.c -o calculadora.exe
```

Depois, execute:

```
.\calculadora.exe
```

## Limitações atuais

- Não trata entradas não numéricas.
- Utiliza `system("pause")`, comando específico do Windows.
