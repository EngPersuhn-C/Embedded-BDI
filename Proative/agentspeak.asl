// Implementation with proative paralelism

// Goals

!clean.
!cool.

// Responsible plan to clean position

+!clean : clean <- !move; !!clean. 
+!clean : dirty <- suck; !!clean. 
-!clean <- !!clean. 

// Responsible plan to cool position

+!cool : temperature <- on_climatization; !!cool. 
+!cool <- !!cool.

// Responsible plan to move

+!move : pos_1 <- right.
+!move : pos_2 <- down.
+!move : pos_3 <- up.
+!move : pos_4 <- left.

//*************Nota*************
//!! -> Return to goal
//!  -> Add the goal
//+! -> If goal is true
//-! -> Discredits in goal

