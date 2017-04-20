``Design Patterns``
-------------------

This repository contains our projects for the Design Patterns lesson.

Project n°2
***********
here called TP2 is the following.

We have to implement 3 patterns.

    - Composite
    - Decorator
    - State

Partie 3 : State

Nous avons :
  une classe qui s'appelle Commande et qui contient une méthode traiter()
  une classe abstraite EtatCommande avec comme méthode virtuelle pure traiter()
  trois classe qui definissent les états (en attente, payee, envoyee) qui implemente la methode traiter

  Nous créons une commande qui sera initialisé en attente puis nous la passons à l'état payée
  ce qui nous affichera le texte DONE puis nous la passons dans l'état envoyé ce qui affichera le texte SENT
