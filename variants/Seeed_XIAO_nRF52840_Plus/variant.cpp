#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
    // D0 .. D10
     2, // D0  is P0.02 (A0)
     3, // D1  is P0.03 (A1)
    28, // D2  is P0.28 (A2)
    29, // D3  is P0.29 (A3)
     4, // D4  is P0.04 (A4,SDA)
     5, // D5  is P0.05 (A5,SCL)
    43, // D6  is P1.11 (TX)
    44, // D7  is P1.12 (RX)
    45, // D8  is P1.13 (SCK)
    46, // D9  is P1.14 (MISO)
    47, // D10 is P1.15 (MOSI)

    // LEDs
    26, // D20 is P0.26 (LED RED)
     6, // D21 is P0.06 (LED BLUE)
    30, // D22 is P0.30 (LED GREEN)
    14, // D23 is P0.14 (READ_BAT)

    // LSM6DS3TR
    40, // D24 is P1.08 (6D_PWR)
    27, // D25 is P0.27 (6D_I2C_SCL)
     7, // D26 is P0.07 (6D_I2C_SDA)
    11, // D27 is P0.11 (6D_INT1)

    // MIC
    42, // D28 is P1.10 (MIC_PWR)
    32, // D29 is P1.00 (PDM_CLK)
    16, // D30 is P0.16 (PDM_DATA)

    // BQ25100
    13, // D31 is P0.13 (HICHG)
    17, // D32 is P0.17 (~CHG)

    //
    21, // D33 is P0.21 (QSPI_SCK)
    25, // D34 is P0.25 (QSPI_CSN)
    20, // D35 is P0.20 (QSPI_SIO_0 DI)
    24, // D36 is P0.24 (QSPI_SIO_1 DO)
    22, // D37 is P0.22 (QSPI_SIO_2 WP)
    23, // D38 is P0.23 (QSPI_SIO_3 HOLD)

    // D11 ~ D19
    15, // D11 is P0.15 (i2s_sd)
    19, // D12 is P0.19 (i2s_sck)
    33, // D13 is P1.1  (i2s_ws)
     9, // D14 is P0.09 (nfc1)
    10, // D15 is P0.10 (nfc2)
    31, // D16 is P0.31 (VBAT)
    39, // D17 is P1.07 (MOSI1)
    37, // D18 is P1.05 (MISO1)
    35, // D19 is P1.03 (SCK1)
};

void initVariant()
{
    // Disable reading of the BAT voltage.
    // https://wiki.seeedstudio.com/XIAO_BLE#q3-what-are-the-considerations-when-using-xiao-nrf52840-sense-for-battery-charging
    pinMode(VBAT_ENABLE, OUTPUT);
    digitalWrite(VBAT_ENABLE, HIGH);

    // Low charging current.
    // https://wiki.seeedstudio.com/XIAO_BLE#battery-charging-current
    pinMode(PIN_CHARGING_CURRENT, INPUT);

    pinMode(PIN_QSPI_CS, OUTPUT);
    digitalWrite(PIN_QSPI_CS, HIGH);

    pinMode(LED_RED, OUTPUT);
    digitalWrite(LED_RED, HIGH);
    pinMode(LED_GREEN, OUTPUT);
    digitalWrite(LED_GREEN, HIGH);
    pinMode(LED_BLUE, OUTPUT);
    digitalWrite(LED_BLUE, HIGH);
}
