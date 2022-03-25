# SPCA

## Equipe
* Melissa Aghnher   ( Líder )
* Jefferson Gabriel ( Protótipo )
* Matheus Damico    ( Projeto Eletrônico)
* Gabriel Lacerda   ( Firmware )
* Thais Mantovani   ( Documentação )

## Introdução 
O componente utilizado nesse projeto é o HC-SR501, módulo de controle que usa o sensor PIR (piroelétrico), que detecta a variabilidade da luz infravermelha emitida pela radiação do corpo humano. O sensor possibilita o ajuste do tempo de detecção, padrão e sensibilidade. 

Sensores infravermelhos usam radiação térmica (calor) de objetos para detectar movimento. Para esse fim, disparam feixes de luz que a visão humana não alcança (infravermelho), medindo fótons para verificar a temperatura do alvo. Os sensores infravermelhos, usados para detectar pessoas, são programados para responder a uma faixa de 35 a 40 graus Celsius, pois é uma faixa média da temperatura do corpo humano, a fim de evitar alarmes falsos. 

O HC-SR501 é indicado para uso em lugares úmidos ou com pouca influência do sol, pois com decorrência de variações do ambiente, pode atrapalhar na detecção de temperatura. Contudo, na busca para o funcionamento do projeto, tais características mencionadas atendem para finalidade desejada. 

## Sensor
### Funcionamento
O componente que será utilizado para este trabalho será o HC-SR501, um módulo de controle que usa um sensor PIR (piroelétrico), ele detecta a variação de luz infravermelha emitida pela radiação do corpo humano. É possível modificar o tempo de detecção, o padrão e a sensibilidade. 

Sensores infravermelhos utilizam a radiação térmica (calor) dos objetos para detectar movimentos. Para isso, eles disparam feixes de luz que estão fora do alcance da visão humana (infravermelhos), medindo os fótons para verificar a temperatura do alvo. Os sensores infravermelhos, quando utilizados para detecção de pessoas, são programados para responder à faixa entre 35 a 40 graus celsius, de modo a evitar falsos alarmes. 

Esse tipo de sensor é utilizado normalmente em ambientes onde há o trânsito de animais, ou ainda em pontos externos pela variação de temperatura e de umidade. Contudo, são contraindicados em locais próximos de sistemas de aquecimento ou de janelas que ficam expostas ao sol, justamente porque pode haver falsa detecção. 

|Figura 1: Sensor de Movimento - Topo |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Sensor.PNG)|
| Fonte: BLOG Eletrogate |

|Figura 2: Sensor de Movimento - Traseira |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Sensor%20traseira.PNG)|
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

Para melhor atuação decidimos colocar o sensor acompanhado de uma caixa, ou seja, ele estará colado em uma caixa que será instalada ao lado da luminária. Essa caixa possui o esquema eletrônico, que consiste em: entrada pra a luminária, drive que basicamente terá um tiristor e optoacoplador, CPU e sensor. (sujeito a alterações) 

|Figura 5: Ilustração do Projeto |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Ilustra%C3%A7%C3%A3o%20projeto.png)|
| Fonte: Próprio autor |

## Esquema Elétrico 

# Testes 

# Conclusão

# Referências

BLOG ELETROGATE, **Automação residencial: Sensor de presença com Arduíno**. Disponível em: https://blog.eletrogate.com/automacao-residencial-sensor-de-presenca-com-arduino/  Acesso em: 21 mar 2022. 

BUSCADOR DE ARQUITETURA, **Plantas de Estacionamentos**. Disponível em: https://capsistema.com.br/index.php/2020/12/10/como-usar-o-sensor-de-movimento-pir-hc-sr501-com-arduino/ Acesso em: 21 mar 2022. 

CAP SISTEMA, **Como usar o sensor de movimento PIR HC-SR501 com Arduino**. Disponível em: https://capsistema.com.br/index.php/2020/12/10/como-usar-o-sensor-de-movimento-pir-hc-sr501-com-arduino/ . Acesso em: 21 de mar de 2022.

HACK EDUCA, Hc-sr501 – **Sensor De Movimento – Como Ligar?** Disponível em: https://www.hackeduca.com.br/hc-sr201_sensor_de_movimento-como-ligar/ Acesso em: 21 mar 2022.

POSITIVO CASA INTELIGENTE, **Como funcionam os sensores de presença e por que eles são ideais para proteger a sua residência**. Disponível em: https://blog.positivocasainteligente.com.br/como-funcionam-os-sensores-de-presenca-e-por-que-eles-sao-ideais-para-proteger-a-sua-residencia/#:~:text=Um%20sensor%20de%20presen%C3%A7a%20%C3%A9,e%20outros%20tipos%20de%20ondas. Acesso em: 21 mar 2022. 
 

|Figura 7: Drive |
|:---------------------------------:|
| ![Sensor](https://github.com/MelissaAGMMedeiros/SPCA/blob/main/Imagens/Drive.png)|
| Fonte: Próprio autor |