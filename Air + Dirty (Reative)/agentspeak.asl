// plans for dirty and hot location
+pos_1 : dirty & temperature <- suck; on_climatization; right.
+pos_2 : dirty & temperature <- suck; on_climatization; down.
+pos_3 : dirty & temperature <- suck; on_climatization; up.
+pos_4 : dirty & temperature <- suck; on_climatization; left.

// plans for clean and hot location
+pos_1 : clean & temperature <- on_climatization; right.
+pos_2 : clean & temperature <- on_climatization; down.
+pos_3 : clean & temperature <- on_climatization; up.
+pos_4 : clean & temperature <- on_climatization; left.

// plans for dirty location
+pos_1 : dirty <- suck; right.
+pos_2 : dirty <- suck; down.
+pos_3 : dirty <- suck; up.
+pos_4 : dirty <- suck; left.

// plans for clean location
+pos_1 : clean <- right.
+pos_2 : clean <- down.
+pos_3 : clean <- up.
+pos_4 : clean <- left.

