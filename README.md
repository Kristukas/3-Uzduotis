# ***Trečioji užduotis*** 
# v1.1
 Versijoje iš struktūros pereita į klasę.
 
 ***Spartos testavimas***
# Su ***struct*** konteineriais

 # Vector
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.39673    |    53.4879    |
|  Rušiavimas   |    0.211963   |    2.06737    |

# Deque

|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.31345    |    53.2788    |
|  Rušiavimas   |    0.656486   |    6.41814    |

# List

|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- | 
|   Skaitymas   |    5.32932    |    52.4372    |
|  Rušiavimas   |    0.655486   |    9.45772    |


# ***Vector***
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.53755    |    57.9118    |
|  Rušiavimas   |   0.212938    |    2.19096    |
| Programos veikimo laikas (Bendras) |               |    157.27     |

# ***Deque***
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.37638    |    52.7507    |
|  Rušiavimas   |   0.627082    |    6.4899     |
| Programos veikimo laikas (Bendras) |               |    166.216     |

# ***List***
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.09996    |    51.1525    |
|  Rušiavimas   |   0.645537    |    9.1854     |
| Programos veikimo laikas (Bendras) |               |    154.377     |

***Išvada***

Perėjus prie klasės Vectoriaus veikimas paletėjo, Deque išliko labai panašus, tačiau List skaitymo laikas ženkliai sumažėjo.
Perėjus prie klasių programa tampa saugesnė, mažiau pažeidžiama.

# ***Flagų testavimas (su vektorium)***

|    Flag 01    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.65236    |    57.5583    |
|  Rušiavimas   |   0.196824    |    2.17048    |


|    Flag 02    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.44921    |    52.8409    |
|  Rušiavimas   |    0.23778    |    2.12434    |


|    Flag 03    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.3074     |    52.5678    |
|  Rušiavimas   |    0.196273   |    2.2294     |

***Rezultatai***

Naudojant 01 flagą, gauti laikai yra labai panašūs
Naudojant 02 flagą, nuskaitymo laikas ženkliai sumažėjo.
Naudojant 03 flagą, nuskaitymo laikas taip pat gerokai sumažėjas bei gauti rezultatai labai panašūs į 02 flago. 

