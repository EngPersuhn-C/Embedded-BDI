// Implementation "proative"

// Goals

!clean.

// Resposible plan to clean and add a new goal -> cool

+!clean : clean <- !move; !cool. 
+!clean : dirty <- suck; !cool. 
-!clean <- !cool.

// If this goal was created, so execute the plan

+!cool : temperature <- on_climatization; !!cool.
+!cool <- !!clean.

// Responsible plan to move

+!move : pos_1 <- right.
+!move : pos_2 <- down.
+!move : pos_3 <- up.
+!move : pos_4 <- left.

//*************Nota*************
//!! -> Retoma para o objetivo em questão
//! -> Adquire a crença
//+! -> Caso a crença exista
//-! -> Desacredita

