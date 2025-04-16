# 🃏 Super Trunfo de Cidades (em C)

Este projeto é um jogo simples estilo **Super Trunfo**, desenvolvido em linguagem **C**, onde o usuário cadastra cartas representando cidades brasileiras, com atributos como população, área, PIB e mais. Ao longo das fases, novas funcionalidades são adicionadas até a batalha final entre cartas!

---

## 🔰 Nível Básico — Cadastro de Cartas

O programa permite ao usuário cadastrar **duas cartas** com as seguintes informações:

- Estado (letra de A a H)
- Código da carta (ex: A01)
- Nome da cidade
- População (int)
- Área (float)
- PIB (float, em bilhões)
- Número de pontos turísticos (int)

Depois da entrada, o programa **exibe todos os dados organizadamente**.

---

## 🧮 Nível Intermediário — Cálculo de Atributos

Nesta fase, o programa foi aprimorado para **calcular e exibir automaticamente**:

- **Densidade populacional** = população / área
- **PIB per capita** = PIB / população

Esses valores são exibidos com **duas casas decimais**, e ajudam a analisar melhor as cidades.

---

## ⚔️ Nível Avançado — Batalha de Cartas

Nesta última fase, as cartas entram em **modo de batalha**:

### 💥 Atributos Comparados:
- População
- Área
- PIB
- Pontos Turísticos
- Densidade Populacional *(quem tiver menor vence!)*
- PIB per Capita
- **Super Poder**

### 🧠 Cálculo do Super Poder:
```c
SuperPoder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade populacional)
Todos os valores são convertidos corretamente para float para precisão.

🧪 Saída de Comparação:
Para cada atributo, o programa mostra quem venceu:

yaml
Copiar
Editar
População: Carta 1 venceu (1)
Área: Carta 1 venceu (0)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 1 venceu (1)
PIB per Capita: Carta 1 venceu (0)
Super Poder: Carta 1 venceu (1)
🛠️ Tecnologias Utilizadas
Linguagem C

Compilador GCC

Terminal / Prompt de comando

✅ Como Executar
Clone o repositório:

bash

git clone https://github.com/chrisktventura/estacio_Supertrunfo.git
cd super-trunfo-cidades
Compile o programa:

nginx
Copiar
Editar
gcc estacio_Supertrunfo.c -o estacio_Supertrunfo
Execute:

bash

./estacio_Supertrunfo
📚 Aprendizados
Manipulação de structs em C

Entrada e saída de dados via terminal

Conversões de tipos (float, unsigned long int)

Lógica de comparação

Operadores relacionais