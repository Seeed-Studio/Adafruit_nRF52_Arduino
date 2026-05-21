#ifndef _SEEED_XIAO_NRF52840_PLUS_H_
#define _SEEED_XIAO_NRF52840_PLUS_H_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
//#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define PINS_COUNT              (39)
#define NUM_DIGITAL_PINS        (39)
#define NUM_ANALOG_INPUTS       (8)
#define NUM_ANALOG_OUTPUTS      (0)

// LEDs
#define PIN_LED                 (LED_RED)
#define LED_PWR                 (PINS_COUNT)
#define PIN_NEOPIXEL            (PINS_COUNT)
#define NEOPIXEL_NUM            (0)

#define LED_BUILTIN             (PIN_LED)

#define LED_RED                 (11)
#define LED_GREEN               (13)
#define LED_BLUE                (12)

#define LED_STATE_ON            (1)     // State when LED is litted

// Buttons
#define PIN_BUTTON1             (PINS_COUNT)

// Digital PINs
static const uint8_t D0  = 0 ;
static const uint8_t D1  = 1 ;
static const uint8_t D2  = 2 ;
static const uint8_t D3  = 3 ;
static const uint8_t D4  = 4 ;
static const uint8_t D5  = 5 ;
static const uint8_t D6  = 6 ;
static const uint8_t D7  = 7 ;
static const uint8_t D8  = 8 ;
static const uint8_t D9  = 9 ;
static const uint8_t D10 = 10;

static const uint8_t D11 = 30;
static const uint8_t D12 = 31;
static const uint8_t D13 = 32;
static const uint8_t D14 = 33;
static const uint8_t D15 = 34;
static const uint8_t D16 = 35;
static const uint8_t D17 = 38;
static const uint8_t D18 = 37;
static const uint8_t D19 = 36;

#define VBAT_ENABLE             (14)    // Output LOW to enable reading of the BAT voltage.
                                        // https://wiki.seeedstudio.com/XIAO_BLE#q3-what-are-the-considerations-when-using-xiao-nrf52840-sense-for-battery-charging

#define PIN_CHARGING_CURRENT    (22)    // Battery Charging current
                                        // https://wiki.seeedstudio.com/XIAO_BLE#battery-charging-current

// Analog pins
#define PIN_A0                  (0)
#define PIN_A1                  (1)
#define PIN_A2                  (2)
#define PIN_A3                  (3)
#define PIN_A4                  (4)
#define PIN_A5                  (5)
#define PIN_VBAT                (35)    // Read the BAT voltage.
                                        // https://wiki.seeedstudio.com/XIAO_BLE#q3-what-are-the-considerations-when-using-xiao-nrf52840-sense-for-battery-charging

static const uint8_t A0  = PIN_A0;
static const uint8_t A1  = PIN_A1;
static const uint8_t A2  = PIN_A2;
static const uint8_t A3  = PIN_A3;
static const uint8_t A4  = PIN_A4;
static const uint8_t A5  = PIN_A5;
static const uint8_t ADC_BAT  = PIN_VBAT;

#define ADC_RESOLUTION          (12)

// Other pins
#define PIN_NFC1                (33)
#define PIN_NFC2                (34)

// Serial interfaces
#define PIN_SERIAL1_RX          (7)
#define PIN_SERIAL1_TX          (6)

static const uint8_t RX  = PIN_SERIAL1_RX;
static const uint8_t TX  = PIN_SERIAL1_TX;

#define PIN_SERIAL2_RX        (33)
#define PIN_SERIAL2_TX        (34)

static const uint8_t RX1  = PIN_SERIAL2_RX;
static const uint8_t TX1  = PIN_SERIAL2_TX;

// SPI Interfaces
#define SPI_INTERFACES_COUNT    (2)

#define PIN_SPI_MISO            (9)
#define PIN_SPI_MOSI            (10)
#define PIN_SPI_SCK             (8)

static const uint8_t SS   = 7;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK ;

#define PIN_SPI1_MISO           (37)
#define PIN_SPI1_MOSI           (36)
#define PIN_SPI1_SCK            (38)

static const uint8_t MOSI1 = PIN_SPI1_MOSI;
static const uint8_t MISO1 = PIN_SPI1_MISO;
static const uint8_t SCK1  = PIN_SPI1_SCK ;

// Wire Interfaces
#define WIRE_INTERFACES_COUNT   (2)

#define PIN_WIRE_SDA            (4)
#define PIN_WIRE_SCL            (5)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#define PIN_WIRE1_SDA           (17)
#define PIN_WIRE1_SCL           (16)
#define PIN_LSM6DS3TR_C_POWER   (15)
#define PIN_LSM6DS3TR_C_INT1    (18)

// i2s Interfaces
#define PIN_I2S_SCK             (31)
#define PIN_I2S_SD              (30)
#define PIN_I2S_WS              (32)

static const uint8_t I2S_SCK = PIN_I2S_SCK;
static const uint8_t I2S_SD  = PIN_I2S_SD ;
static const uint8_t I2S_WS  = PIN_I2S_WS ;

// PDM Interfaces
#define PIN_PDM_PWR	            (19)
#define PIN_PDM_CLK	            (20)
#define PIN_PDM_DIN	            (21)

// QSPI Pins
#define PIN_QSPI_SCK            (24)
#define PIN_QSPI_CS             (25)
#define PIN_QSPI_IO0            (26)
#define PIN_QSPI_IO1            (27)
#define PIN_QSPI_IO2            (28)
#define PIN_QSPI_IO3            (29)

// On-board QSPI Flash
#define EXTERNAL_FLASH_DEVICES  (P25Q16H)
#define EXTERNAL_FLASH_USE_QSPI

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
