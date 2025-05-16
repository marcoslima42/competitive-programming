frase = input()

nova_frase = ""

for i in range(0, len(frase)-1):
    if frase[i] == "r" and frase[i+1] != " ":
        nova_frase += "l"
    else:
        nova_frase += frase[i]
nova_frase += frase[-1]
print(nova_frase)