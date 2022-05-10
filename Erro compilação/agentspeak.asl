//+pos_1 : temperature <- on_climatization; right.
//+pos_2 : temperature <- on_climatization; down.
//+pos_3 : temperature <- on_climatization; up.
//+pos_4 : temperature <- on_climatization; left.

// plans for dirty location
+pos_1 : dirty, temperature <- suck; right.
+pos_2 : dirty, temperature <- suck; down.
+pos_3 : dirty, temperature <- suck; up.
+pos_4 : dirty, temperature <- suck; left.

// plans for clean location
+pos_1 : clean, temperature <- right.
+pos_2 : clean, temperature <- down.
+pos_3 : clean, temperature <- up.
+pos_4 : clean, temperature <- left.
