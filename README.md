# LeetCode

Repositório de estudos com resoluções de exercícios de algoritmos e estruturas de dados, usado para praticar para entrevistas técnicas e reforçar fundamentos de C++/Python entre outras linguagens.

## Estrutura

```
.
├── leetcode/
│   ├── easy/           # Resoluções de problemas fáceis do LeetCode
│   └── medium/         # Resoluções de problemas médios do LeetCode
├── codeforce/
│   ├── 800/            # Problemas do Codeforces (rating ~800)
│   └── 1000/           # Problemas do Codeforces (rating ~1000)
├── estrutura-dados/     # Implementações de estruturas de dados do zero
│                        # (ArrayList, LinkedList, Queue, etc.)
├── teste-tecnico-bigtech/ # Exercícios de testes técnicos para vagas de big tech
└── Makefile
```

## Como compilar e executar

A maioria das soluções está em C++. Para compilar e rodar um arquivo manualmente:

```bash
g++ arquivo.cpp -o programa && ./programa
```

O `Makefile` traz um alvo de exemplo:

```bash
make run
```

Para as soluções em Python:

```bash
python3 arquivo.py
```

## Convenções

- Cada arquivo corresponde a um problema, nomeado de acordo com o problema resolvido.
- Soluções do LeetCode ficam organizadas por dificuldade (`easy`, `medium`).
- Soluções do Codeforces ficam organizadas por faixa de rating.
