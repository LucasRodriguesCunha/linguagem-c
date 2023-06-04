// As duas instruções "x = i++" e "x = ++i" diferem
// no momento em que o incremento é aplicado à variável
// "i". Vamos ver cada uma delas separadamente:

// 1. "x = i++": Nessa instrução, o operador pós-incremento
// "++" é aplicado após a atribuição de "i" a "x". Isso sig-
// nifica que o valor de "i" é primeiro atribuído a "x", e
// somente depois ocorre o incremento de "i". Portanto "x"
// receberá o valor original de "i", e "i" será incrementado
// em 1 após a atribuição.

// Exemplo:

// int i = 5
// int x = i++
// printf("x: %d\n", x);   // Saída x: 5
// printf("i: %d\n", i);   // Saida i: 6

// Nesse exemplo, "x" recebe o valor original de "i" (5), e
// "i" é incrementado para 6.

// 2. "x = ++i": Nessa instrução, o operador pré-incremento
// "++" é aplicado antes da atribuição de "i" a "x". Isso
// significa que o valor de "i" é incrementado em 1 primeiro e,
// em seguida,o valor atualizado de "i" é atribuido a "x". 
// Portanto, "x" receberá o valor incrementado de "i".

// Exemplo:

// int i = 5;
// int x = ++i;
// printf("x: %d\n", x); // Saída x: 6
// printf("i: %d\n", i); // Saída i: 6

// Nesse exemplo, "i" é incrementado para 6 antes da atribuição,
// então tanto "x" quanto "i" recebem o valor 6.

// Em resumo, a diferença entre as duas instruções é o momento
// em que o incremento ocorre. Com "i++", o incremento ocorre 
// após a atribuição, enquanto com "++i" o incremento ocorre
// antes da atribuição.