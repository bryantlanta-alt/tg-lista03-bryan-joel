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
Este repositório contém a resolução prática e teórica da **Lista 03 da disciplina de Teoria dos Grafos**, com foco no estudo e aplicação de algoritmos de caminhos mínimos em grafos (como **Dijkstra** e **Floyd-Warshall**). O projeto contempla códigos-fonte implementados em C e Python, resoluções teóricas/manuscritas, registros comprobatórios de execução e o diário de bordo de uso de IA.

---

## O Que Foi Feito

- **Questão 1:**
  - Implementação do algoritmo de Dijkstra em C (`codigo/Dijkstra.c`).
  - Resolução teórica do item B (`respostas/Q1/Q1B.jpeg`).
  - Registro/print comprobatório da execução do algoritmo (`prints/exeQ1C.png`).

- **Questão 2:**
  - Resolução e arquivos correspondentes à Questão 2 (`respostas/Q2/`).

- **Questão 3:**
  - Resoluções teóricas dos itens A e B (`respostas/Q3/Q3A.jpg`, `respostas/Q3/Q3B.jpg`).
  - Implementação do algoritmo de Floyd-Warshall em Python (`codigo/Floyd-Warshall` e `respostas/Q3/Q3C`).
  - Registro/print comprobatório da execução do algoritmo (`prints/exeQ3C.png`).

- **Questão 4:**
  - Resoluções teóricas dos itens A, B e C (`respostas/Q4/Q4A.jpg`, `respostas/Q4/Q4B.jpg`, `respostas/Q4/Q4C.jpg`).

- **Diário de Bordo:**
  - Registro detalhado e reflexão sobre a utilização de ferramentas de Inteligência Artificial durante a elaboração das atividades (`Diário de Bordo — Uso de IA`).

---

## Estrutura

```
.
├── codigo/
│   ├── Dijkstra.c               # Implementação do Algoritmo de Dijkstra em C
│   └── Floyd-Warshall           # Implementação do Algoritmo de Floyd-Warshall em Python
├── prints/
│   ├── exeQ1C.png               # Evidência de execução da Questão 1
│   └── exeQ3C.png               # Evidência de execução da Questão 3
├── respostas/
│   ├── Q1/                      # Resoluções da Questão 1 (imagens)
│   ├── Q2/                      # Resoluções da Questão 2
│   ├── Q3/                      # Resoluções teóricas (A, B) e script (C) da Questão 3
│   └── Q4/                      # Resoluções teóricas (A, B, C) da Questão 4
├── Diário de Bordo — Uso de IA   # Registro e reflexão sobre a assistência de IA
└── README.md                    # Documentação principal do projeto
```

---

## Como Executar

### 1. Algoritmo de Dijkstra (C)
Requisitos: Compilador C (`gcc` ou `clang`).

```bash
# Compilar o arquivo C
gcc -o dijkstra codigo/Dijkstra.c

# Executar no Linux/macOS:
./dijkstra

# Executar no Windows (PowerShell / CMD):
.\dijkstra.exe
```

### 2. Algoritmo de Floyd-Warshall (Python)
Requisitos: `Python 3.x`.

```bash
# Executar o script em Python
python codigo/Floyd-Warshall
```

---

## Privacidade
Mantenha **Private** durante a avaliação (com o professor como colaborador).  
Após a nota, torne **Public** e adicione ao seu portfólio.
