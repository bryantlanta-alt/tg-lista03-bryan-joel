# Teoria dos Grafos — Lista 03: Caminhos Mínimos

**Disciplina:** Teoria dos Grafos  
**Aluno(s):** Joel Carlos Assunção Padilha e Bryan Marques Cruz  

---

## Índice
1. [Sobre](#sobre)
2. [O Que Foi Feito](#o-que-foi-feito)
3. [Estrutura do Repositório](#estrutura)
4. [Como Executar](#como-executar)
5. [Privacidade](#privacidade)

---

## Sobre
Este repositório contém a resolução prática e teórica da **Lista 03 da disciplina de Teoria dos Grafos**, com foco no estudo e aplicação de algoritmos clássicos de caminhos mínimos em grafos: **Dijkstra**, **Bellman-Ford** e **Floyd-Warshall**. O projeto contempla códigos-fonte implementados em C e Python, resoluções teóricas/manuscritas, registros comprobatórios de execução e o diário de bordo sobre o uso de IA.

---

## O Que Foi Feito

- **Questão 1:**
  - Implementação do algoritmo de Dijkstra em C (`codigo/Dijkstra.c`).
  - Resoluções teóricas dos itens A e B (`respostas/Q1/Q1A.jpeg`, `respostas/Q1/Q1B.jpeg`).
  - Registro/print comprobatório da execução do algoritmo (`prints/exeQ1C.png`).

- **Questão 2:**
  - Implementação do algoritmo de Bellman-Ford em C (`codigo/Bellman-Ford.c`).
  - Resoluções teóricas dos itens A e B (`respostas/Q2/Q2A.jpg`, `respostas/Q2/Q2B.jpeg`).
  - Registro/print comprobatório da execução do algoritmo (`prints/exeQ2C.png`).

- **Questão 3:**
  - Implementação do algoritmo de Floyd-Warshall em Python (`codigo/Floyd-Warshall.py`).
  - Resoluções teóricas dos itens A e B (`respostas/Q3/Q3A.jpg`, `respostas/Q3/Q3B.jpg`).
  - Registro/print comprobatório da execução do algoritmo (`prints/exeQ3C.png`).

- **Questão 4:**
  - Resoluções teóricas dos itens A, B e C (`respostas/Q4/Q4A.jpg`, `respostas/Q4/Q4B.jpg`, `respostas/Q4/Q4C.jpg`).

- **Diário de Bordo:**
  - Registro detalhado e reflexão sobre a utilização de ferramentas de Inteligência Artificial durante a elaboração das atividades (`Diário de Bordo — Uso de IA` e `DIARIO.md`).

---

## Estrutura

```
.
├── codigo/
│   ├── Bellman-Ford.c           # Implementação do Algoritmo de Bellman-Ford em C (Q2)
│   ├── Dijkstra.c               # Implementação do Algoritmo de Dijkstra em C (Q1)
│   └── Floyd-Warshall.py        # Implementação do Algoritmo de Floyd-Warshall em Python (Q3)
├── prints/
│   ├── exeQ1C.png               # Evidência de execução da Questão 1
│   ├── exeQ2C.png               # Evidência de execução da Questão 2
│   └── exeQ3C.png               # Evidência de execução da Questão 3
├── respostas/
│   ├── Q1/                      # Resoluções teóricas da Questão 1 (A e B)
│   │   ├── Q1A.jpeg
│   │   └── Q1B.jpeg
│   ├── Q2/                      # Resoluções teóricas da Questão 2 (A e B)
│   │   ├── Q2A.jpg
│   │   └── Q2B.jpeg
│   ├── Q3/                      # Resoluções teóricas da Questão 3 (A e B)
│   │   ├── Q3A.jpg
│   │   └── Q3B.jpg
│   └── Q4/                      # Resoluções teóricas da Questão 4 (A, B e C)
│       ├── Q4A.jpg
│       ├── Q4B.jpg
│       └── Q4C.jpg
├── DIARIO.md                    # Diário de bordo
├── Diário de Bordo — Uso de IA   # Registro e reflexão sobre a assistência de IA
└── README.md                    # Documentação principal do projeto
```

---

## Como Executar

### 1. Algoritmo de Dijkstra (C) — Questão 1
Requisitos: Compilador C (`gcc` ou `clang`).

```bash
# Compilar o arquivo C
gcc -o dijkstra codigo/Dijkstra.c

# Executar no Linux/macOS:
./dijkstra

# Executar no Windows (PowerShell / CMD):
.\dijkstra.exe
```

### 2. Algoritmo de Bellman-Ford (C) — Questão 2
Requisitos: Compilador C (`gcc` ou `clang`).

```bash
# Compilar o arquivo C
gcc -o bellman_ford codigo/Bellman-Ford.c

# Executar no Linux/macOS:
./bellman_ford

# Executar no Windows (PowerShell / CMD):
.\bellman_ford.exe
```

### 3. Algoritmo de Floyd-Warshall (Python) — Questão 3
Requisitos: `Python 3.x`.

```bash
# Executar o script em Python
python codigo/Floyd-Warshall.py
```

---

## Privacidade
Mantenha **Private** durante a avaliação (com o professor como colaborador).  
Após a nota, torne **Public** e adicione ao seu portfólio.
