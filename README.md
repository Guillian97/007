# 007
Jeu en C++ dans le cadre du projet de 4526

Principe du jeu: Vous êtes un agent double, et vous avez pour mission de désamorcer une bombe dans une base secrète, tout en évitant les
ennemis. Attention, le temps vous est compté.

Fait:
-Structure de platformer
-Map de test
-Health system: le joueur a 5 vie, et s'il tombe il meurt.
-Ennemis implémentés
-Animations Player/Ennemis
-GameStateManager: Menu Principal, Niveau 1, GameOverState et WinState
-Timer qui se déclenche au début du niveau 1
-Mort du joueur lorsqu'il tombe ou qu'il se fait toucher 5 fois
-Game Over lorsque le timer arrive à 0

TODO:
-Rajouter l'objet "bombe" que le joueur doit désamorcer 
-Rajouter la barre de vie pour qu'elle s'affiche à l'écran
-Remettre le timer à jour lorsque le niveau recommence

Bugs à gérer:
-GameStateManager: quand on arrive au GameOverState, compliqué de relancer le niveau
-Divers warnings sur les conversions de int en float

