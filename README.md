# SUPER TRUNFO
Criando cartas para um jogo de cartas super trunfo

# Desafio: nível novato

Criando as Cartas do Super Trunfo


Neste primeiro nível, seu objetivo é construir a base do nosso jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. Você vai praticar a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.


O que você vai fazer


Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

 

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:

 

Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30    


Requisitos funcionais


O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
 
O programa deve armazenar os dados lidos em variáveis apropriadas.
 
O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

Requisitos não funcionais


Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
 
Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
 
Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

Simplificações para o desafio


Você só precisa implementar o cadastro e a exibição de duas cartas.
 
Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você não precisa implementar nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
 
Não utilize estruturas de repetição (como for ou while) ou estruturas de decisão (como if ou else). Seu código deve ser uma sequência simples de instruções.


# Desafio: nível aventureiro

Calculando Densidade Populacional e PIB per Capita


No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.


O que você vai fazer


Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:

 

Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
 

Exemplo de Saída:


Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

Densidade Populacional: 5622.24 hab/km²

PIB per Capita: 44532.91 reais


Requisitos funcionais


Manter as funcionalidades do nível básico (leitura e exibição dos dados das cartas).
 
Calcular e exibir corretamente a densidade populacional e o PIB per capita para cada cidade.

Requisitos não funcionais


•    Manter os requisitos não funcionais do nível básico (usabilidade, legibilidade, corretude).

•    Eficiência: O programa deve realizar os cálculos de forma eficiente.


Simplificações para o nível intermediário


Você ainda só precisa lidar com duas cartas.
 
Continue sem usar estruturas de repetição (for, while) ou estruturas de decisão (if, else)

# Desafio: nível mestre
Batalha de Cartas no Super Trunfo


Prepare-se para o desafio final! Agora que você já sabe cadastrar cartas e calcular atributos importantes, é hora de colocar suas cartas para lutar! Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". Prepare-se para usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!


O que você vai fazer


Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores. As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:

 

Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.
 
Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
 
Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
 

Exemplo de Saída (após a entrada dos dados):

 

Comparação de Cartas:

População: Carta 1 venceu (1)

Área: Carta 1 venceu (1)

PIB: Carta 1 venceu (1)

Pontos Turísticos: Carta 1 venceu (1)

Densidade Populacional: Carta 2 venceu (0)

PIB per Capita: Carta 1 venceu (1)

Super Poder: Carta 1 venceu (1)


Requisitos funcionais


Manter as funcionalidades dos níveis básico e intermediário (leitura, cálculo e exibição dos dados das cartas, incluindo densidade populacional e PIB per capita).
 
Calcular corretamente o Super Poder para cada carta.
 
Comparar corretamente as cartas atributo por atributo, considerando a regra específica para densidade populacional.
 
Exibir os resultados das comparações de forma clara e organizada.

Requisitos não funcionais


Manter os requisitos não funcionais dos níveis anteriores (usabilidade, legibilidade, corretude, eficiência).
