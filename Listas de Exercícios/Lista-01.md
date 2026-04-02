1. Sobre o programa, em C++, a seguir:

```cpp
#include <iostream>

int soma(int a, int b){
    int r = a + b;
    return r;
}

int main(){
    int a,b;
    std::cin >> a >> b;
    int s = soma(a,b);
    std::cout << s << std::endl;
    return 0;
}
```

(a) Implemente e compile seu programa. [x]
(b) Execute o programa com os valores a seguir e escreva o resultado: [x]

|      a       |      b       |     Soma     |
|--------------|--------------|--------------|
| 10           | 20           | **30**           |
| -10          | 10           | **0**            |
| -2           | -3           | **-5**           |
| 1000000000   | 1000000000   | **2000000000**   |
| −1000000001  | 1000000005   | **4**            |
| 2000000000   | 1000000000   | **-1294967296**  |
| −1212121212  | −2987654321  | **-1294967296**  |

(c) Explique o motivo de cada um dos resultados obtidos. <br>
**Resposta:**
Os dois últimos exemplos da tabela estão matematicamente incorretos, pelo mesmo motivo. Os resultados seriam 30000000000 e -4199775533, respectivamente. O tipo "int" (inteiro, 32 bits) tem uma limitação, e essa limite foi ultrapassado (overflow).

(d) Pesquise e identifique correções para os resultados incorretos. <br>
**Resposta:**
A melhor correção seria usar "long long":

```cpp
#include <iostream>

long long soma(long long a, long long b){
    long long r = a + b;
    return r;
}

int main(){
    long long a,b;
    std::cin >> a >> b;
    long long s = soma(a,b);
    std::cout << s << std::endl;
    return 0;
}
```

2. Escreva um programa que leia dois lados l1 e l2 que forma um retângulo, como mostrado a seguir, e mostre o perímetro do retângulo. Considere a restriçao 1 ≤ li ≤ 109, ou seja, tanto l1 quanto l2 possuem valores entre 1 e 109 (1000000000 - Um bilhão).

**Resposta:**
```cpp
#include <iostream>

int main(){
    int l1, l2;
    std::cin >> l1 >> l2;
    int perimetro = 2*(l1+l2);
    std::cout << perimetro >> std::endl;
    return 0;
}
```

(a) Determine e explique qual o tipo de l1 e de l2. <br>
**Resposta:**
Inteiros. No conjunto dos inteiros, são 32 bits, suportando até o número 2bi (1000000000 - Um bilhão é o máximo que usaremos).


(b) Escreva uma função que receba Os 2 (dois) parâmetros e retorne o perímetro. Determine o tipo de dado de retorno da função. 
**Resposta:** 

```cpp

#include <iostream>

long long perimetro(int l1, int l2){
    retur 2LL*((long long) l1+l2);
}

int main(){
    int l1,l2;
    long long p = perimetro(l1,l2);
    if (l1 == l2)
     std::cout <<"isso não é um retângulo\n";
    else
    std::cout << p >> std::endl;
    return 0;
}
```

(c) Escreva um conjunto com, pelo menos, 5 casos de teste e monte uma tabela. <br>
**Resposta:**

|    Entrada   |    Entrada   |     Saída    |
|--------------|--------------|--------------|
| 10           | 20           | 60           |
| 30           | 50           | 160          |
| 1000000000   | 3000000000   | 6294967294   |
| 1000000000   | 2000000000   | 60000000000  |
| 3            | 60           | 126          |