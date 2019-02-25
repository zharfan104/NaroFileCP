a = int(input("Masukkan N: "))
if (a < 1000):
    b =3
elif(a >= 1000 and a<10000 ):
    b=4
else:
    b=5

if(b==3):
    c = a%10
    d = ( a%100 -c)/10
    e = (a - a%100)/100
    print("Hasil perkalian digit :", int(c*d*e))
    
elif(b==4):
    c = a%10
    d = ( a%100 -c)/10
    e = (a%1000 -c - d*10)/100
    f = (a -a%1000)/1000
    print("Hasil perkalian digit :", int(c*d*e*f))
else:
    c = a%10
    d = ( a%100 -c)/10
    e = (a%1000 -c - d*10)/100
    f = (a%10000 -c -d*10 -e*100)/1000
    g = (a -a%10000)/10000
    print("Hasil perkalian digit :", int(c*d*e*f*g))