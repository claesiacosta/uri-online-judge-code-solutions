# -*- coding: utf-8 -*-

instancia = 0

def insertionSort(vet, vetN):
        x = None
        vetAux = [x] + vet
        vetAuxN = [x] + vetN

        for i in range(2,len(vetAux)):
                
                x = vetAux[i]
                y = vetAuxN[i]
                j = i - 1
                
                vetAux[0] = x
                vetAuxN[0] = y

                while x < vetAux[j]:
                        vetAux[j+1] = vetAux[j]
                        vetAuxN[j+1] = vetAuxN[j]
                        j -= 1
                vetAux[j+1] = x
                vetAuxN[j+1] = y
        vetAuxMin = []
        vet = vetAux[1:]
        j = 0
        for i in vet:
                if i == vetAux[1]:
                        j = j + 1
                        vetAuxMin.append(vetAuxN[j])
                              
        vetMin = sorted(vetAuxMin, reverse = True)
        return vetMin[0]

while True:
        try:
                qtdCT = int(input())
                vetNomes = []
                vetQuest = []

                for i in range(qtdCT):
                        ent = input()
                        e = ent.split(' ')

                        vetNomes.append(e[0])
                        vetQuest.append(int(e[1]))
                
                vet = insertionSort(vetQuest, vetNomes)         
                
                instancia += 1
                print ("Instancia", instancia)
                print (vet)
                print('')


        except EOFError:
                break