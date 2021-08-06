CorrectPhi
(
    U,
    phi,
    p_rgh,
    surfaceScalarField("rAUcf", fvc::interpolate(rAUc())),
    geometricZeroField(),
    pimple
);

#include "continuityErrs.H"
