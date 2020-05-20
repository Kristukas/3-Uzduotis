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

Perėjus prie klasės programų veikimo laikas išliko labai panašus.

Perėjus prie klasių programa tampa saugesnė, mažiau pažeidžiama.

# ***Flagų testavimas (su vektorium)***

|    Flag 01    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.53379    |    55.7815    |
|  Rušiavimas   |   0.217807    |    2.04077    |


|    Flag 02    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.28997    |    52.7215    |
|  Rušiavimas   |    0.201321   |    2.08147    |


|    Flag 03    |    1000000    |    10000000   |
| ------------- | ------------- | ------------- |
|   Skaitymas   |    5.3074     |    52.5678    |
|  Rušiavimas   |    0.196273   |    2.08625    |

***Rezultatai***

Naudojant 01 flagą, lyginant su 1.1 versija skaitymo laikas pailgėjo.
Naudojant 02 flagą, laikai išliko labai panašūs.
Naudojant 03 flagą, laikai taip pat išliko labai panašūs į 02 flagą ir į 1.1 versiją. 

# v1.1
