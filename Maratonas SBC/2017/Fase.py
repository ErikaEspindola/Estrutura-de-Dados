a = int(input())
quant = int(input())

i = 0
lista = []

while(i < a):
	aux = int(input())
	lista.append(aux)
	i = i+1
	
lista.sort(reverse=True)
ultimo = lista[quant-1]
i = 0

while(i < quant):
	lista.pop(0)
	i = i+1

print(quant+lista.count(ultimo))
