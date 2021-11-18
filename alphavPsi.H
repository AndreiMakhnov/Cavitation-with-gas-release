{
    alphav =
        max
        (
            min
            (
                (rho/(1.0 - alphaGasPhase) - rholSat)/(rhovSat - rholSat),
                scalar(1)
            ),
            scalar(0)
        );
    alphal = 1.0 - alphav;

    Info<< "max-min alpha(only vapor): " << max(alphav).value()
        << " " << min(alphav).value() << endl;

    psiModel->correct();

    //Info<< "min a: " << 1.0/sqrt(max(psi)).value() << endl;
}
