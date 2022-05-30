# SPCA

## Equipe
* Melissa Aghnher   ( Líder )
* Jefferson Gabriel ( Protótipo )
* Matheus Damico    ( Projeto Eletrônico)
* Gabriel Lacerda   ( Firmware )
* Thais Mantovani   ( Documentação )

## Introdução 
O consumo de energia no país vem aumentando consideravelmente, com isso, o preço aumenta cada vez mais. A economia começa por esse motivo, pela redução de gastos e consumo reduzido de energia. Com isso em mente, iluminação é um dos fatores que se pode facilmente controlar esses gastos. O consumo de energia no país vem aumentando consideravelmente, com isso, o preço aumenta cada vez mais. A economia começa por esse motivo, pela redução de gastos e consumo reduzido de energia. Com isso em mente, iluminação é um dos fatores que se pode facilmente controlar esses gastos.

O racionamento de energia pode ser feito através da mudança na atitude dos usuários, buscando não deixar lâmpadas ligadas desnecessariamente, também através da utilização de sistemas e sensores de presença. Nosso projeto pretende reduzir o consumo de energia gasto em, nesse caso, um estacionamento, pois, ele fica o dia todo com as luminárias ligadas, tendo um consumo muito alto.

Utilizando o sensor de presença automático no sistema de iluminação do estacionamento, ajuda bastante na economia de energia, evitando gastos inúteis, ligando e desligando as lâmpadas de um ambiente automaticamente.  

## Sensor
### Funcionamento
O componente utilizado nesse projeto é o HC-SR501, módulo de controle que usa o sensor PIR (piroelétrico), que detecta a variabilidade da luz infraveremlha emtida pea radiação do corpo humano. O sensor possibilita o ajuste do tempo de detecção, padrão e sensi.

Sensores infravermelhos usam radiação térmica (calor) de objetos para detectar movimento. Para esse fim, disparam feixes de luz que a visão humana não alcança (infravermelho), medindo fótons para verificar a temperatura do alvo. Os sensores infravermelhos, usados para detectar pessoas, são programados para responder a uma faixa de 35 a 40 graus Celsius, pois é uma faixa média da temperatura do corpo humano, a fim de evitar alarmes falsos. 

O HC-SR501 é um sensor indicado para uso em lugares úmidos ou com pouca influência do sol, pois com decorrência de variações do ambiente, pode atrapalhar na detecção de temperatura. Contudo, na busca para o funcionamento do projeto, tais características mencionadas atendem para finalidade desejada. 

|Figura 1: Sensor de Movimento - Topo |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Sensor.PNG)|
| Fonte: BLOG Eletrogate |

|Figura 2: Sensor de Movimento - Traseira |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Sensor%20traseira.PNG)|
| Fonte: BLOG Eletrogate |

|Figura 3: Nomeclatura das partes do componente |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Classificação.PNG)|
| Fonte: Próprio autor |

### Especificações

|Figura 4: Especificações |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Especificações.PNG)|
| Fonte: CAP SISTEMA |

# Objetivo 
Para melhor economia de energia em um estacionamento, esse projeto foi desenvolvido com o propósito de deixar as luzes apagadas a maior parte do dia, acionando-as apenas quando necessário, por exemplo quando estiver circulando pela área tanto de carro como a pé. 

Visando uma melhor acessibilidade para o usuário, as lâmpadas próximas também serão ligadas e depois de um determinado tempo, o suficiente para a pessoa fazer o que for necessário, as lâmpadas serão desligadas. 

|Figura 5: Exemplo de estacionamento |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/exemplo_estac.png)|
| Fonte: Buscador de Arquitetura |

# Projeto

## Projeto Eletrônico

|Figura 6: Esquema Eletrônico |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/esquem%C3%A1tico.PNG) |
| Fonte:  Autor próprio | 

|Figura 7: Esquema Eletrônico - layout |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/esquema_PCB.PNG) |
| Fonte: Autor próprio |

## Programação 

|Figura 8: Programação |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Capturar.PNG) |
| Fonte: Autor próprio |

### Componentes (Protoboard)
*  Sensor de movimento PIR HC-SR501 (3,2 x 2,3);
*  Fonte retificadora (10x5); 
*  CPU (10,3 x4,8); 
*  Resistore 100 Ω (2x)
*  Resistore 330 Ω (2x)
*  Optoaclopadores (2x)
*  LED (2x)
*  MOSFET (2x)

## Protótipo 

Para melhor atuação decidimos colocar o sensor acompanhado de uma caixa, ou seja, ele estará colado em uma caixa que será instalada ao lado da luminária. Essa caixa possui o esquema eletrônico, que consiste em: entrada pra a luminária, drive que basicamente terá um tiristor e optoacoplador, CPU e sensor.

|Figura 9: Ilustração do Projeto |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/prototipo.png) |
| Fonte: Próprio autor |

## Esquema Elétrico 

|Figura 10: Esquema elétrico |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Esquema_SPCA.png) |
| Fonte: Próprio autor |

### Componentes (Instalção)

* Lâmpada
* Cabos (neutro / fase / retorno)
* Caixa do sensor 

# Testes 

|Figura 11: Testes|
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Capturar%20(2).PNG) |
| Fonte: Próprio autor |

# Conclusão

Este projeto atingiu o objetivo requisitado, diminuir o custo e o consumo de energia. Com a realização de testes na montagem do protótipo e na programação, foi atingido o objetivo do projeto, para assim ajudar na economia do custo e consumo de energia. Os responsáveis pela operação são: PIC16F887 e o sensor HC-SR501, que estão programados para controlar o uso de contínuo de energia em um estacionamento, ligando apenas quando necessário. 

# Referências

BLOG ELETROGATE, **Automação residencial: Sensor de presença com Arduíno**. Disponível em: https://blog.eletrogate.com/automacao-residencial-sensor-de-presenca-com-arduino/  Acesso em: 21 mar 2022. 

BUSCADOR DE ARQUITETURA, **Plantas de Estacionamentos**. Disponível em: https://capsistema.com.br/index.php/2020/12/10/como-usar-o-sensor-de-movimento-pir-hc-sr501-com-arduino/ Acesso em: 21 mar 2022. 

CAP SISTEMA, **Como usar o sensor de movimento PIR HC-SR501 com Arduino**. Disponível em: https://capsistema.com.br/index.php/2020/12/10/como-usar-o-sensor-de-movimento-pir-hc-sr501-com-arduino/ . Acesso em: 21 de mar de 2022.

HACK EDUCA, Hc-sr501 – **Sensor De Movimento – Como Ligar?** Disponível em: https://www.hackeduca.com.br/hc-sr201_sensor_de_movimento-como-ligar/ Acesso em: 21 mar 2022.

POSITIVO CASA INTELIGENTE, **Como funcionam os sensores de presença e por que eles são ideais para proteger a sua residência**. Disponível em: https://blog.positivocasainteligente.com.br/como-funcionam-os-sensores-de-presenca-e-por-que-eles-sao-ideais-para-proteger-a-sua-residencia/#:~:text=Um%20sensor%20de%20presen%C3%A7a%20%C3%A9,e%20outros%20tipos%20de%20ondas. Acesso em: 21 mar 2022. 

