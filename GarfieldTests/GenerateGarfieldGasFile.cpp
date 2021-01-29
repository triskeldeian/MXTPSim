#include "Garfield/MediumMagboltz.hh"
#include "Garfield/FundamentalConstants.hh"

int
main(int argc, char** argv)
{
    const double pressure = 3 * Garfield::AtmosphericPressure;
    const double temperature = 293.15;
    // Setup the gas.
    Garfield::MediumMagboltz gas;
    gas.SetComposition("Ar", 93., "CO2", 7.);
    gas.SetTemperature(temperature);
    gas.SetPressure(pressure);
    // Set the field range to be covered by the gas table.
    const int nFields = 20;
    const double emin = 100.;
    const double emax = 100000.;
    // Flag to request logarithmic spacing.
    constexpr bool useLog = true;
    gas.SetFieldGrid(emin, emax, nFields, useLog);

    const int ncoll = 10;
    // Run Magboltz to generate the gas table.
    gas.GenerateGasTable(ncoll);
    // Save the table.
    gas.WriteGasFile("ar_93_co2_7.gas");
}