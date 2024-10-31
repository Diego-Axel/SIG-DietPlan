<p align="center">
SIG-DietPlan - Um Sistema De Planejamento De Dietas
</p>

<p align="center">
  <a href="#-motivacao">Motivação</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-compilacao">Compilação</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-tecnologia">Tecnologias</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-ferramenta">Ferramenta</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-desenvolvedores">Desenvolvedores</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-contato">Contato</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-sobre">Sobre</a>
</p>
<br>

## Motivação

SIG-DietPlan, é um software próprio para você que é um profissional na área da saúde, especialmente nutricionista, que quer ter um controle preciso e bastante eficiente em sua clínica. SIG-DietPlan permite você além de ter todo o controle de gestão sobre o seu negócio, faz com que você(profissional) possa cadastrar e acompanhar uma dieta completa dos seus clientes. SIG-DietPlan, a solução para os seus problemas.

## Compilação

 ### Windows e Linux:

 - Para utlizar o programa, é necessário ter Git e um compilador para linguagem C, ambos instalados em sua máquina.

 - Feito isso, abra alguma pasta qualquer pelo terminal e clone o repositório digitando o seguinte comando:

```shell
git clone https://github.com/Diego-Axel/SIG-DietPlan.git
 ```
- Para compilar e rodar o programa, abra o terminal, vá até a pasta do programa e digite os seguintes comandos em sequência:

### No Windows:

```shell
OBS: Para sistema operacional Windows, não possui Makefile, então a compilação será feita de forma "manual" ou, você pode buscar meios alternativos, como exemplo o WSL que simula um terminal do Linux no seu sistema operacional Windows. Para você baixar o WSL recomendo que pesquise na internet ou então peça ajuda do ChatGPT.
```

```shell
gcc -c -Wall main.c interfacePrincipal/interfaces.c clientes/clientes.c dietas/dietas.c agendamento/agendamento.c profissional/profissional.c relatorio/relatorio.c utilitarios/utis.c
```

```shell
gcc -c -Wall interfacePrincipal/interfaces.h clientes/clientes.h dietas/dietas.h agendamento/agendamento.h profissional/profissional.h relatorio/relatorio.h utilitarios/utis.h
```

```shell
gcc -o SIG-DietPlan.exe main.o
```
### Para Executar

```shell
SIG-DietPlan.exe
```

### No Linux:

```shell
No Linux poderá ser usado o Makefile. Vá no seu terminal e digite "Make" se você não tiver, o linux irá mostrar o comando para baixar via terminal. Caso queria saber se você já possui o make, digite em seu terminal o comando "make --version".
```

### Para Executar

```shell
Com o Make baixado, dentro do diretório do projeto, digite "make run", ele vai compilar todos os arquvos .c e .h, criando o executavel automaticamente e já rodando o programa.
```

```shell
Ao final, quando o programa for encerrado, digite o comando "make clean", isso limpara todos os arquivos criados pelo primeiro comando "make run".
```

##  Tecnologia

Esse projeto foi desenvolvido com a seguinte tecnologia:

- C

##  Ferramenta
Esse projeto foi desenvolvido com o seguinte editor de código:

- Visual Studio Code

##  Desenvolvedores 

- Diêgo Axel
- Luís Henrique
- Kaio Márcio

## Contate-nos

### Diêgo Axel ->
- GitHub: [Diego-Axel](https://github.com/Diego-Axel)
- Linkedin: [Diêgo Axel](https://www.linkedin.com/in/di%C3%AAgo-axel-1684452b5/)
- Instargam: https://www.instagram.com/diegoaxelbsr/
- Portifólio: https://diego-axel.github.io/
- E-mail: diegoaxelbsr@gmail.com
- Celular: (84) 99977-4459

### Luís Henrique ->
- Github: [Luis27h](https://github.com/Luis27h)
- Linkedin: [Luís Henrique](https://www.linkedin.com/in/luis-henrique-de-almeida-marciano-026b1632b/)
- Instargam: https://www.instagram.com/luis_h_27/
- Portifólio: 
- E-mail: luis27marciano@mail.com
- Celular: (84) 99627-4880

### Kaio Márcio ->
- Github: [Kaiom20](https://github.com/Kaiom20) 
- Linkedin: [Kaio Márcio Lira](https://www.linkedin.com/in/kaio-márcio-lira-24264b2b7/)
- Instargam: https://www.instagram.com/kaiom.20/
- Portifólio: 
- E-mail: kaiomacl.20@gmail.com
- Celular: (83) 98716-3046

##  Sobre

- Este é um Projeto do Curso de Sistemas de Informação da Universidade Federal do Rio Grande do Norte(UFRN).

- Projeto Avaliativo para o 2 Semestre de 2024 na matéria de programação.
