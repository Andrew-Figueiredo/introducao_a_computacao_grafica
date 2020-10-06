# Introdução a Computação Gráfica


**Aluno:** Andrew Galvão de Figueiredo Oliveira
----------------------------
Este repositório tem o objetivo de apresentar todos os trabalhos da disciplina de Introdução à Computação Gráfica. Ele será apresentado em detalhes a baixo, dividindo em tópicos de acordo com a atividade, e será atualizando juntamente com o avançar da disciplina. Os códigos fontes se encontra na pasta **[Trabalhos](https://github.com/Andrew-Figueiredo/introducao_a_computacao_grafica/tree/master/Trabalhos)** separados de acordo com cada atividade. Segue a seguir o sumário com as atividades feitas.

----------------------------
### Sumário:
1. [Trabalho 01: Instalando, Compilando e Executando um programa OpenGL Moderno (Triangulo)](#trabalho_1)
<!-- 2. [Trabalho 02: ](#trabalho_2)
3. [Trabalho 03: ](#trabalho_3)
4. [Trabalho 04: ](#trabalho_4) -->

<br></br>
## Trabalho 01 - Instalando, Compilando e Executando um programa OpenGL Moderno (Triangulo) <a name="trabalho_1" ></a>
----------------------------
Inicialmente houve tentativas de instalar o OpenGL no windows e sem muito sucesso. Então utilizando o linux, depois de algumas pesquisas, encontrei no site [WikiHow](https://pt.wikihow.com/Instalar-Mesa-(OpenGL)-no-Linux-Mint) o passo a passo de como preparar meu sistema para começar a desenvolver em OpenGL.

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

Em seguida para confirma se o OpenGL e suas dependecias já estavam instaladas utilizei o comando ` glxinfo | grep OpenGL ` que mostrou o seguinte resultado:
![Figura 1: Verificação da instalação do OpenGL.](/home/andrew/Dropbox/UFPB/2020.1/ICG/Atividade_Git/Trabalhos/Trabalho_1/Prints/Instalando_o_OpenGL.png)




<!-- ## Trabalho 02 -  <a name="trabalho_2" ></a>



## Trabalho 03 -  <a name="trabalho_3" ></a>



## Trabalho 04 -  <a name="trabalho_4" ></a> -->