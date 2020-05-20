# ***Trečioji užduotis*** 
# v1.1
 Versijoje iš struktūros pereita į klasę.
 
 ***Spartos testavimas***
# Naudojant ***struct*** 

 # Vector
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.40492    |    51.4867    |
|  Rušiavimas   |    0.198585   |    2.09961    |

# Deque

|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.31345    |    51.6928    |
|  Rušiavimas   |    0.656486   |    6.25973   |

# List

|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- | 
|   Skaitymas   |    5.32932    |    52.4372    |
|  Rušiavimas   |    0.655486   |    9.45772    |

# Naudojant ***class*** 
# ***Vector***
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.22494    |    52.7839    |
|  Rušiavimas   |   0.201953    |    2.09102    |

# ***Deque***
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.3347     |    52.0199    |
|  Rušiavimas   |   0.625667    |    6.28913    |

# ***List***
 
|               |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.09996    |    51.1525    |
|  Rušiavimas   |   0.645537    |    9.11326    |

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

