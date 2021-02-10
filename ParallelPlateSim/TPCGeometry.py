import gmsh
import sys

gmsh.initialize()

gmsh.model.add("ParallelPlates")

# Defining all the basic dimensions
# All distances in mm
drift_z = 150.0
plate_x = 700.0
plate_y = 400.0



