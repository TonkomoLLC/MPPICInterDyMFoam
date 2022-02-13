# MPPICInterDyMFoam
MPPICInterFoam extended to include AMI (OpenFOAM-v2106).
This solver also compiles and runs with OpenFOAM-v2112, but it has not been thoroughly tested with releases after v2106.

Solver for 2 incompressible, isothermal immiscible fluids using a VOF
(volume of fluid) phase-fraction based interface capturing approach,
with optional mesh motion and mesh topology changes including adaptive
re-meshing.  The momentum and other fluid properties are of the "mixture" 
and a single momentum equation is solved.

It includes MRF and an MPPIC cloud.

This solver compiles with OpenFOAM-v2106.

Note that AMI patches must be on the same processor when running in parallel.
This can be accomplished with topoSet and decomposePar.

# Tutorial Cases

The tutorial cases show the basic functionality of the solver. Note that in the second tutorial, the particles tend to fall to the bottom of the tank. This may not be interesting, and so feel free to modify the case to your liking.

# Acknowledgments

Thank you to [@skyopener](https://github.com/skyopener) for submitting fixes to [issue #1](https://github.com/TonkomoLLC/MPPICInterDyMFoam/issues/1).
