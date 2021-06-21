estado(paraiba).
estado(pernambuco).
estado(rio_grande_do_norte).
estado(ceara).

estado(minas_gerais).
estado(sao_paulo).
estado(rio_de_janeiro).

estado(santa_catarina).
estado(parana).
estado(rio_grande_do_sul).

fronteira(paraiba,pernambuco).
fronteira(paraiba,rio_grande_do_norte).
fronteira(paraiba,ceara).
fronteira(rio_grande_do_norte,ceara).

fronteira(minas_gerasi,rio_de_janeiro).
fronteira(minas_gerasi,sao_paulo).
fronteira(sao_paulo,rio_de_janeiro).

fronteira(santa_catarina,parana).
fronteira(santa_catarina,rio_grande_do_sul).








%fronteira_volta(X, Y) :-
 %  fronteira(X, Y) ; fronteira(Y, X).













populacao_do_estado(paraiba,4018127).
populacao_do_estado(pernambuco,9557071).
populacao_do_estado(rio_grande_do_norte,3506853).
populacao_do_estado(ceara,9132078).
populacao_do_estado(minas_gerais,21168791).
populacao_do_estado(sao_paulo,45919049).
populacao_do_estado(rio_de_janeiro,17264943).
populacao_do_estado(santa_catarina,7164788).
populacao_do_estado(parana,11433957).
populacao_do_estado(rio_grande_do_sul,11377239).

estado_pequeno(X):-
    populacao_do_estado(X,Y), Y =< 15000000.
estado_grande(X):-
    populacao_do_estado(X,Y), Y > 15000000.










