

<h1 align="center"><img src="https://raw.githubusercontent.com/abrahamcalf/programming-languages-logos/master/src/c/c_256x256.png" alt="drawing" width="200"/> <br> Exercício para Nota - Ponteiros (2°Semestre de 2021)
</h1>


Considere um número decimal não divisível por 5. Queremos fazer exatamente uma operação de troca entre os dígitos de duas posições distintas para obter um número que seja divisível por 5. Quer dizer, precisamos escolher duas posições distintas e trocar os dígitos dessas duas posições. Mas queremos que o número resultante após a troca seja o maior número divisível por 5 possível.
<p align="center">
   <img src="https://user-images.githubusercontent.com/90652800/184504167-a7c4ba28-ab16-4f5f-8c4e-682f2ec3348d.png"/>
</p>
Veja o exemplo da figura, 730105697542, que não é divisível por 5. Podemos fazer a primeira troca ilustrada e obter 730102697545, que é divisível por 5. Mas, se fizermos a segunda troca ilustrada na figura, vamos obter um número divisível por 5 ainda maior, 732105697540. Dados os dígitos decimais de um número na entrada, não divisível por 5, seu programa deve imprimir os dígitos decimais do maior número divisível por 5 que pode ser obtido com exatamente uma troca de dígitos entre duas posições distintas. Caso não seja possível obter um número divisível por 5, imprima apenas -1.
<p align="center">
   <br>
   <img src="http://img.shields.io/static/v1?label=STATUS&message=CONCLUIDO&color=GREEN&style=for-the-badge"/>
   <br>
</p>

## 🙋  Requisições
Para resolver esse problema você deve obrigatoriamente implementar e utilizar a função cujo protótipo é mostrado abaixo:
```c
void positions(int n, int d[], int * first_zero, int * first_five, int * last_five);
```
**A função positions() recebe como parâmetros:** 
 - n: número de dígitos decimais que o número tem, que corresponde ao
   tamanho do vetor d.
 - d: vetor que representa os dígitos decimais do número;  first_zero:
   parâmetro de saída que deve devolver a posição do primeiro zero em d,
   ou -1, caso d não contenha um zero.
 - first_five: parâmetro de saída que deve devolver a posição do
   primeiro cinco em d, ou -1, caso d não contenha um cinco.
 - last_five: parâmetro de saída que deve devolver a posição do último
   cinco em d, ou -1, caso d não contenha um cinco.

## 🚫 Restrições

 - 2 ≤ N ≤ 1000
 - Di é um inteiro entre 0 e 9, inclusive.

## 📥 Entrada
A primeira linha da entrada contém um inteiro N, indicando quantos dígitos decimais tem o número não divisível por 5. A segunda linha contém N inteiros Di , 1 ≤ i ≤ N, representando os dígitos decimais do número em questão, separados por um espaço em branco.


## 📤 Saída
Imprima uma linha contendo N inteiros separados por um espaço em branco representando os dígitos decimais do maior número divisível por 5 que pode ser obtido com exatamente uma troca de dígitos entre duas posições distintas. Caso não seja possível obter um número divisível por 5, imprima apenas -1.

**Exemplo**:
<table><thead><th>Entrada</th> <th>Saída</th></thead> <tbody><tr><td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 12<br>7 3 0 1 0 5 6 9 7 5 4 2 </div></td> <td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 7 3 2 1 0 5 6 9 7 5 4 0 </div></td></tr><tr><td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 5<br>7 4 1 2 9 </div></td> <td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> -1 </div></td></tr><tr><td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 8<br>0 0 7 8 4 5 3 1 </div></td> <td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 1 0 7 8 4 5 3 0 </div></td></tr><tr><td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 10<br>6 5 0 5 0 4 5 3 4 4 </div></td> <td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 6 5 4 5 0 4 5 3 4 0 </div></td></tr><tr><td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 7<br>9 7 4 5 3 5 2 </div></td> <td class="table-column"><button type="button" class="copy-icon v-btn v-btn--icon v-btn--round theme--light v-size--x-small"><span class="v-btn__content"><i aria-hidden="true" class="v-icon notranslate fa fa-copy theme--light"></i></span></button> <div> 9 7 4 5 3 2 5 </div></td></tr></tbody></table>

## 🌐 Avaliação e Autores

| Autores:            |
| :------------------ |
| Enzo G Mendes       |
| Charles M Junior    |
| João Victor H Palma |
| Daniel A França     |

    ㅤ

| Professor  | Ciro Cirne Trindade                   |
| :--------- | :------------------------------------ |
| Disciplina | Linguagem de Programação              |
| Curso      | Análise e Desenvolvimento de Sistemas |



