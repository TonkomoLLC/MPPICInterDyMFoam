MRF.correctBoundaryVelocity(U);

fvVectorMatrix UEqn
(
    fvm::ddt(alphacRho, U)
  + MRF.DDt(alphacRho, U)
  - fvm::Sp(fvc::ddt(rho) + fvc::div(rhoPhi), U)
  + fvm::div(rhoPhi, U)
  + turbulence->divDevRhoReff(U)
  ==
    fvOptions(rho, U)
  + cloudSU
);

UEqn.relax();
fvOptions.constrain(UEqn);

volScalarField rAUc(1.0/UEqn.A());
surfaceScalarField rAUcf(fvc::interpolate(rAUc));

CorrectPhi
(
    U,
    phi,
    p_rgh,
    rAUcf,
    geometricZeroField(),
    pimple
);

#include "continuityErrs.H"
