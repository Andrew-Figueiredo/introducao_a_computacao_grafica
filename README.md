# Introdução a Computação Gráfica


**Aluno:** Andrew Galvão de Figueiredo Oliveira
------------------------------------------
Este repositório tem o objetivo de apresentar todos os trabalhos da disciplina de Introdução à Computação Gráfica. Ele será apresentado em detalhes a baixo, dividindo em tópicos de acordo com a atividade, e será atualizando juntamente com o avançar da disciplina. Os códigos fontes se encontra na pasta **[Trabalhos](https://github.com/Andrew-Figueiredo/introducao_a_computacao_grafica/tree/master/Trabalhos)** separados de acordo com cada atividade. Segue a seguir o sumário com as atividades feitas.

------------------------------------------
### Sumário:
1. [Trabalho 01: Instalando, Compilando e Executando um programa OpenGL Moderno (Triangulo)](#trabalho_1)
<!-- 2. [Trabalho 02: ](#trabalho_2)
3. [Trabalho 03: ](#trabalho_3)
4. [Trabalho 04: ](#trabalho_4) -->
-------------------------------------------
<br></br>
<br></br>
<a name="trabalho_1" ></a>
## Trabalho 01 - Instalando, Compilando e Executando um programa OpenGL Moderno (Triangulo) 
------------------------------------------
Neste trabalho foi porposto a configuração do ambiente de desenvolvimento dos alunos para trabalhar com o OpenGL 3.3 e se familiarizar com a ferramenta.


Inicialmente houve tentativas de instalar o OpenGL no windows e sem muito sucesso, pois existem muitos procedimentos para conseguir configura-lo. Então utilizando o linux, depois de algumas pesquisas, encontrei no site [WikiHow](https://pt.wikihow.com/Instalar-Mesa-(OpenGL)-no-Linux-Mint) o passo a passo de como preparar meu sistema linux para começar a desenvolver com OpenGL.

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



![Figura 1 - Instalando_concluida com sucesso](https://user-images.githubusercontent.com/45156832/95157067-6a879700-076e-11eb-9b4f-0c0ec5e13eac.png)


**Figura 1 - Instalação concluida com sucesso**


Instalando então todas as ferramentas necessárias.


Após a configuração do computador, foi feito o download do programa que está no link [](https://github.com/capagot/icg/tree/master/01_hello_world_gl/modern_opengl) complando-o e executando-o apareceu os seguintes warnings já mencionados pelo professor,


![Figura 2 - Alguns_Warnings](https://user-images.githubusercontent.com/45156832/95157773-60ff2e80-0770-11eb-82ab-8a344848a37a.png)


**Figura 2 - Alguns_Warnings**


E por fim, ao executar o arquivo ` moderngl_hello_world ` temos o resultado seguinte,


![Figura 3 - Trabalho_Executando](https://user-images.githubusercontent.com/45156832/95157861-93109080-0770-11eb-9ca5-8f1845e2d051.png)


**Figura 3 - Trabalho_Executando**


Sem nenhum problema agravante, a atividade foi executada com sucesso.


### Referências
- https://pt.wikihow.com/Instalar-Mesa-(OpenGL)-no-Linux-Mint
- https://github.com/capagot/icg/tree/master/01_hello_world_gl/modern_opengl




<!-- 
<a name="trabalho_2" ></a>
## Trabalho 02 -  
<a name="trabalho_3" ></a>
## Trabalho 03 -  
<a name="trabalho_4" ></a> 
## Trabalho 04 -  -->
