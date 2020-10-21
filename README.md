# Introdução a Computação Gráfica

## **Aluno:** Andrew Galvão de Figueiredo Oliveira

Este repositório tem o objetivo de apresentar todos os trabalhos da disciplina de Introdução à Computação Gráfica. Ele será apresentado em detalhes a baixo, dividindo em tópicos de acordo com a atividade, e será atualizando juntamente com o avançar da disciplina. Os códigos fontes se encontra na pasta **[Trabalhos](https://github.com/Andrew-Figueiredo/introducao_a_computacao_grafica/tree/master/Trabalhos)** separados de acordo com cada atividade. Segue a seguir o sumário com as atividades feitas.

---

### Sumário:

1. [Trabalho 01: Instalando, Compilando e Executando um programa OpenGL Moderno (Triangulo)](#trabalho_1)
2. [Trabalho 02: Rasterizando Linhas ](#trabalho_2)
<!--
3. [Trabalho 03: ](#trabalho_3)
4. [Trabalho 04: ](#trabalho_4) -->

---

<br></br>
<br></br>
<a name="trabalho_1" ></a>

## Trabalho 01 - Instalando, Compilando e Executando um programa OpenGL Moderno (Triangulo)

---

Neste trabalho foi porposto a configuração do ambiente de desenvolvimento dos alunos para trabalhar com o OpenGL 3.3 e se familiarizar com a ferramenta.

Inicialmente houve tentativas de instalar o OpenGL no windows e sem muito sucesso, pois existem muitos procedimentos para conseguir configura-lo. Então utilizando o linux, depois de algumas pesquisas, encontrei no site [WikiHow](<https://pt.wikihow.com/Instalar-Mesa-(OpenGL)-no-Linux-Mint>) o passo a passo de como preparar meu sistema linux para começar a desenvolver com OpenGL.

Então, após atualizar o linux com o comando ` sudo apt-get update` fiz as seguintes instalações:

```shell
sudo apt-get install freeglut3
sudo apt-get install freeglut3-dev
sudo apt-get install binutils-gold
sudo apt-get install g++ cmake
sudo apt-get install libglew-dev
sudo apt-get install g++
sudo apt-get install mesa-common-dev
sudo apt-get install mesa-common-dev
sudo apt-get install libglew1.5-dev libglm-dev

```

Em seguida para confirma se o OpenGL e suas dependecias já estavam instaladas utilizei o comando `glxinfo | grep OpenGL` que mostrou o seguinte resultado:

![Figura 1 - Instalando_concluida com sucesso](https://user-images.githubusercontent.com/45156832/95157067-6a879700-076e-11eb-9b4f-0c0ec5e13eac.png)

**Figura 1 - Instalação concluida com sucesso**

Instalando então todas as ferramentas necessárias.

Após a configuração do computador, foi feito o download do programa que está no link https://github.com/capagot/icg/tree/master/01_hello_world_gl/modern_opengl compilando-o e executando-o, gerou os seguintes warnings já mencionados pelo professor na cabeçalho da atividade,

![Figura 2 - Alguns_Warnings](https://user-images.githubusercontent.com/45156832/95157773-60ff2e80-0770-11eb-82ab-8a344848a37a.png)

**Figura 2 - Alguns_Warnings**

E por fim, ao executar o arquivo `moderngl_hello_world` temos o resultado seguinte,

![Figura 3 - Trabalho_Executando](https://user-images.githubusercontent.com/45156832/95157861-93109080-0770-11eb-9ca5-8f1845e2d051.png)

**Figura 3 - Trabalho_Executando**

Sem nenhum problema agravante, a atividade foi executada com sucesso. Caso seja necessário ver o trabalho, basta [Clicar Aqui](https://github.com/Andrew-Figueiredo/introducao_a_computacao_grafica/tree/master/Trabalhos/Trabalho_1).

### Referências

- https://pt.wikihow.com/Instalar-Mesa-(OpenGL)-no-Linux-Mint
- https://github.com/capagot/icg/tree/master/01_hello_world_gl/modern_opengl

<a name="trabalho_2" ></a>

## Trabalho 02 - Rasterizando Linhas

---

Neste Trabalho foi desenvolvido implementações simples de algoritmos para rasterização de pontos e linhas. Como os sistema operacionais atuais protegem a mémoria de vídeo, o professor Christian disponibilizou uma [Framework](https://github.com/capagot/icg/tree/master/02_mygl_framework) que simula o acesso à memória de vídeo.

Foi proposto o desenvolvimento de ao menos 3 funcionalidade:

- **PutPixel(...)** que fará a rasterização de um ponto na memória de vídeo com parâmetros (x,y) do pixel na tela e sua cor (R,G,B,A).
- **DrawLine(...)** que rasteriza uma linha na tela com (x0,y0,x1,y1) como parâmetro que representam as posições de dois vértices e (R1,G1,B1,A1,R2,G2,B2,A2) suas cores. As cores ao longo da linha, devem ser obtidas por interpolação linear das cores dos vértices, e o algoritmo de rasterização de linha a ser implementada deve ser o Algoritmo do ponto médio.
- **DrawTriangle(...)** que desenha as arestas de um triângulo na tela, recebendo como parâmetro três vértices (x0,y0), (x1,y1), (x2,y2) bem como suas respectivas cores sem ser necessário o preenchimento.

Desta maneira, foram implementada 3 funções inicialmente que se encontram no arquivo `mygl.c` em [Trabalho_2](https://github.com/Andrew-Figueiredo/introducao_a_computacao_grafica/tree/editor/Trabalhos/Trabalho_2) com os parâmetros proposto anteriormente.

A primeira função (**PutPixel(...)**) de ponto foi a mais simples, pois só foi preciso adicionar cor na posição (x,y) da tela,

![primeiro_ponto](https://user-images.githubusercontent.com/45156832/96670848-c4738980-1336-11eb-9cd5-052dcc9cba02.png)

**Figura 01: Primeiro ponto**

Após ter sucesso em fazer o ponto observando os exemplos do professor, então foi realizado um testa para uma reta,

![Primeira_reta](https://user-images.githubusercontent.com/45156832/96672241-21247380-133a-11eb-98c1-a793bf143001.png)

**Figura 02:Primeira Reta**

o mais difícil desse exercício foi descobrir como fazer a interpolação linear das cores, mas depois de uns teste resultou na imagem a cima. Para chegar no resultado a cima, foi utilizado a função **DrawLine(...)**.

Após realizar todos estes teste, foi criado a função **DrawTriangle(...)** com a criação de 3 linha utilizando a função **DrawLine(...)** juntando os vertices, então temos,

![triangulo](https://user-images.githubusercontent.com/45156832/96672246-21bd0a00-133a-11eb-92c3-769e5977870f.png)

**Figura 03:Triângulo**

Como os as 3 funções foram implementada e testadas com sucesso, então eu tentei usa-lás para criar algumas imagens como por exemplo,

![Linha pontilhada](https://user-images.githubusercontent.com/45156832/96670851-c50c2000-1336-11eb-986e-b528f3fe8910.png)

**Figura 04: Linha Pontilhada**

![icg](https://user-images.githubusercontent.com/45156832/96670850-c50c2000-1336-11eb-84d9-56e003f66dc7.png)

**Figura 05: Sigla da disciplina Introdução à Computação Gráfica.**

- **Assim concluindo a Atividade_02.**

#### Alguns Problemas

- Um dos problemas que poderia ser melhorado seria a criação de struct como parâmetro dos métodos;
- Quando xi = xj com i != j na função **DrawLine(...)** ou yi = yj, está dando erro pois, ocorre uma divisão por zero.


### Refêrencias

- Aulas disponibilizadas pelo professor Christian Azambuja Pagot;
- http://linguagemc.com.br/basico-para-iniciantes-1/
- http://www.inf.ufpr.br/cursos/ci067/Docs/NotasAula.pdf

<!--
<a name="trabalho_3" ></a>

## Trabalho 03 -

<a name="trabalho_4" ></a>

## Trabalho 04 - -->
