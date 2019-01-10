# -- coding: utf-8 --

instancia = 0

while True:
	try:
		qtdCT = int(input())
		vetNomes = []
		vetQuest = []
		vetMins = []

		for i in range(qtdCT):
			ent = input()
			e = ent.split(' ')

			vetNomes.append(e[0])
			vetQuest.append(int(e[1]))


		for i in range(qtdCT):
			if vetQuest[i] == min(vetQuest): 
				vetMins.append(vetNomes[i])
				

		instancia += 1
		print ("Instancia",instancia)
		print (max(vetMins))
		print ('')


	except EOFError:
		break