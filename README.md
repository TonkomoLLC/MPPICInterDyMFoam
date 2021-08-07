# MPPICInterDyMFoam
MPPICInterFoam extended to include AMI (OpenFOAM-v2106)

Solver for 2 incompressible, isothermal immiscible fluids using a VOF
(volume of fluid) phase-fraction based interface capturing approach,
with optional mesh motion and mesh topology changes including adaptive
re-meshing.  The momentum and other fluid properties are of the "mixture" 
and a single momentum equation is solved.

It includes MRF and an MPPIC cloud.

This sovler compiles with OpenFOAM-v2106.

Note that AMI patches must be on the same processor when running in parallel.
This can be accomplished with topoSet and decomposePar.

# Acknowledgements

Thank you to @skyopener for submitting fixes to issue #1.
