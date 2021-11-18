Info<< "Reading thermodynamicProperties\n" << endl;

IOdictionary thermodynamicProperties
(
    IOobject
    (
        "thermodynamicProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);

dimensionedScalar psil
(
    "psil",
    dimCompressibility,
    thermodynamicProperties
);

dimensionedScalar rholSat
(
    "rholSat",
    dimDensity,
    thermodynamicProperties
);

dimensionedScalar psiv
(
    "psiv",
    dimCompressibility,
    thermodynamicProperties
);

dimensionedScalar psig
(
    "psig",
    dimCompressibility,
    thermodynamicProperties
);

dimensionedScalar pSat
(
    "pSat",
    dimPressure,
    thermodynamicProperties
);

dimensionedScalar pSol
(
    "pSol",
    dimPressure,
    thermodynamicProperties
);

dimensionedScalar K
(
    "K",
    dimless/dimPressure,
    thermodynamicProperties
);

dimensionedScalar He
(
    "He",
    dimCompressibility,
    thermodynamicProperties
);

dimensionedScalar tDiff
(
    "tDiff",
    dimTime,
    thermodynamicProperties
);

dimensionedScalar rhovSat("rhovSat", psiv*pSat);

dimensionedScalar rhogSol("rhogSol", psig*pSol);

dimensionedScalar Kgas("Kgas", He/tDiff);

dimensionedScalar rhol0("rhol0", rholSat - pSat*psil);

dimensionedScalar rhoMin
(
    "rhoMin",
    dimDensity,
    thermodynamicProperties
);
