for x in range (2,10,2):
    for y in range (1,10,2):
        Resultado = ( x**4 + 3*x*y + y**3)/( 2*x*y + 3*x + 4*y + 2 )
        print()
        print("Para os valores de X =",x,"e Y =",y,", teremos o resultado da função F (X,Y), F (",x,",",y,") =",Resultado)