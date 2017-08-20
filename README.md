Bon, bha j'vais vous carry hein ..
Btw : repartition des taches :
JackLeSegFaulteur  == faire la fonction de calcul une fois le tableau en polonais;
Clement == split la string en tableau en fr;
Cocobo == algo monde -> polonais;
Elliot == j'me balade et j'aide au besoin, meme si je srs pas souvet a grand chose :DDDDDDDD
les autres, branlette x)
regarder de la doc sur l'algo et commencer a reflechir sr la facon de le faire en c. ici l'algo en pseudo code 


//  while there are tokens to be read:
//  	read a token.
//  	if the token is a number, then push it to the output queue.
//  	if the token is an operator, then:
//  		while there is an operator at the top of the operator stack with
//  			greater than or equal to precedence and the operator is left associative:
//  				pop operators from the operator stack, onto the output queue.
//  		push the read operator onto the operator stack.
//  	if the token is a left bracket (i.e. "("), then:
//  		push it onto the operator stack.
//  	if the token is a right bracket (i.e. ")"), then:
//  		while the operator at the top of the operator stack is not a left bracket:
//  			pop operators from the operator stack onto the output queue.
//    		pop the left bracket from the stack.
/   		/* if the stack runs out without finding a left bracket, then there are
//  		mismatched parentheses. */
//   if there are no more tokens to read:
//  	while there are still operator tokens on the stack:
//  		/* if the operator token on the top of the stack is a bracket, then
//  		there are mismatched parentheses. */
//  		pop the operator onto the output queue.
//  exit.
