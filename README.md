# Cable Tester RJ45 (Ethernet)

Vérifiez les connexions internes : câble RJ45, câble standard, câble croisé et câbles spéciaux.

# Objets utilisés dans ce projet

- arduino MKR1000
- 2 x Prise Keystone Cat6 punch down
- Cables


# Comment vérifier les liens internes ?

Exemple :

Sortie = Pin1 Pin 1 (pour tous les 8 broches) câble standard Résultat fonctionnement.

Sortie Pin1 = Pin 6 ...... Résultat câble défectueux ou différent sue le Monitor Serial.

# Schéma
<p align="left">
  <img src="https://raw.githubusercontent.com/aragrag/TesteurRJ45/master/RJ45_tester.png" width="500" alt="Schéma">
</p>
<br>
<br>
<p align="left">
  <img src="https://github.com/aragrag/TesteurRJ45/blob/master/Circuit_2.jpg" width="500" alt="Circuit avec cable croise">
  <br><b>Circuit avec cable Droit</b>  
</p>

<p align="left">
  <img src="https://github.com/aragrag/TesteurRJ45/blob/master/Circuit_1.jpg" width="500" alt="Circuit avec cable croise">
  <br><b>Circuit avec cable croise</b>
</p>