# SPCA

## Equipe
* Melissa Aghnher   ( Líder )
* Jefferson Gabriel ( Protótipo )
* Matheus Damico    ( Projeto Eletrônico)
* Gabriel Lacerda   ( Firmware )
* Thais Mantovani   ( Documentação )

## Introdução 
O consumo de energia no país vem aumentando consideravelmente, com isso, o preço aumenta cada vez mais. A economia começa por esse motivo, pela redução de gastos e consumo reduzido de energia. Com isso em mente, iluminação é um dos fatores que se pode facilmente controlar esses gastos. 

O racionamento de energia pode ser feito através da mudança na atitude dos usuários, buscando não deixar lâmpadas ligadas desnecessariamente, também através da utilização de sistemas e sensores de presença. Nosso projeto pretende reduzir o consumo de energia gasto em, nesse caso, um estacionamento, pois, ele fica o dia todo com as luminárias ligadas, tendo um consumo muito alto. 

Utilizando o sensor de presença automático no sistema de iluminação do estacionamento, ajuda bastante na economia de energia, evitando gastos inúteis, ligando e desligando as lâmpadas de um ambiente automaticamente.  

## Sensor
### Funcionamento
O componente que será utilizado para este trabalho será o HC-SR501, um módulo de controle que usa um sensor PIR (piroelétrico), ele detecta a variação de luz infravermelha emitida pela radiação do corpo humano. É possível modificar o tempo de detecção, o padrão e a sensibilidade. 

Sensores infravermelhos utilizam a radiação térmica (calor) dos objetos para detectar movimentos. Para isso, eles disparam feixes de luz que estão fora do alcance da visão humana (infravermelhos), medindo os fótons para verificar a temperatura do alvo. Os sensores infravermelhos, quando utilizados para detecção de pessoas, são programados para responder à faixa entre 35 a 40 graus celsius, de modo a evitar falsos alarmes. 

Esse tipo de sensor é utilizado normalmente em ambientes onde há o trânsito de animais, ou ainda em pontos externos pela variação de temperatura e de umidade. Contudo, são contraindicados em locais próximos de sistemas de aquecimento ou de janelas que ficam expostas ao sol, justamente porque pode haver falsa detecção. 

|Figura 1: Sensor de Movimento - Topo |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Sensor.png)|
| Fonte: BLOG Eletrogate |

|Figura 2: Sensor de Movimento - Traseira |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Sensor traseira.png)|
| Fonte: BLOG Eletrogate |

### Componentes
* Sensor de movimento PIR HC-SR501 (3,2 x 2,3); 
* Fonte retificadora (10x5); 
* CPU (10,3 x4,8); 
* Resistores 100 Ω (2x)  
* Resistores 330 Ω (2x) 
* Optoacopladores (2x) 
* LED (2x) 
* MOSFET (2x) 

|Figura 3: Nomeclatura das partes do componente |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Classificação.PNG)|
| Fonte: Próprio autor |

### Especificações

|Figura 4: Especificações |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Especificações.PNG)|
| Fonte: CAP SISTEMA |

|Figura 5: Ilustração do Projeto |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Ilustra%C3%A7%C3%A3o%20projeto.png)|
| Fonte: Próprio autor |

# Objetivo 
Para melhor economia de energia em um estacionamento, esse projeto foi desenvolvido. O propósito desse planejamento é deixar as luzes apagadas a maior parte do dia, acionando-as apenas quando necessário, por exemplo quando estiver circulando pela área tanto de carro como a pé. 

Visando uma melhor acessibilidade para o usuário, as lâmpadas próximas também serão ligadas e depois de um determinado tempo, o suficiente pra pessoa fazer o que for necessário, as lâmpadas serão desligadas. 

|Figura 6: Exemplo de estacionamento |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/exemplo_estac.png)|
| Fonte: Buscador de Arquitetura |

# Projeto

## Projeto Eletrônico 
## Programação 
## Protótipo 
## Esquema Elétrico 

# Testes 

# Conclusão

# Referências

|Figura 7: Drive |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Drive.png)|
| Fonte: Próprio autor |