#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

// ===============================================================================
//
// TinyUF2 Configuration for NXP MIMXRT1020-EVK
//
// ===============================================================================

// Basic Data
// ==========
#define VENDOR_NAME      "NXP"
#define PRODUCT_NAME     "MIMXRT1020-EVK"
#define VOLUME_LABEL     "UF2BOOT"
#define INDEX_URL        ""
#define BOARD_ID         "MIMXRT1020-EVK"
#define BOARD_FLASH_SIZE 0x800000

// Set VID & PID for board in bootloader mode
#define USB_VID 0x239A
#define USB_PID 0x0077


// TinyUF2 Behaviour
// =================
// How long to wait for tap in mS
#define BOARD_TAP_WAIT       500

// Define this for a different blinking interval in mS
#define BOARD_BLINK_INTERVAL 100

// If you want multiple taps (i.e. more than two) define this to the correct value
#define BOARD_MULTITAP_COUNT 4

// If you want the LED on while in UF2 boot wait mode
#define BOARD_LED_ON_UF2_START


// Board Pinning Data
// ==================

// LED used for status indication
#define PIN_LED          IOMUXC_GPIO_AD_B0_05_GPIO1_IO05
#define PIN_LED_MUX      0U
#define PIN_LED_CFG      0x10B0U
#define LED_GPIO_PORT    GPIO1
#define LED_GPIO_PIN     05
#define LED_STATE_ON     0

// UART
#define UART_PORT        LPUART1
#define PIN_UART_RX      IOMUXC_GPIO_AD_B0_07_LPUART1_RX
#define PIN_UART_RX_MUX  0U
#define PIN_UART_RX_CFG  0x10B0u
#define PIN_UART_TX      IOMUXC_GPIO_AD_B0_06_LPUART1_TX
#define PIN_UART_TX_MUX  0U
#define PIN_UART_TX_CFG  0x10B0u

// Connection to QSPI
#define PIN_SS0          IOMUXC_GPIO_SD_B1_11_FLEXSPI_A_SS0_B
#define PIN_SS0_MUX      1U
#define PIN_SS0_CFG      0x10E1U
#define PIN_DATA1        IOMUXC_GPIO_SD_B1_10_FLEXSPI_A_DATA01
#define PIN_DATA1_MUX    1U
#define PIN_DATA1_CFG    0x10E1U
#define PIN_DATA2        IOMUXC_GPIO_SD_B1_09_FLEXSPI_A_DATA02
#define PIN_DATA2_MUX    1U
#define PIN_DATA2_CFG    0x10E1U
#define PIN_DATA0        IOMUXC_GPIO_SD_B1_08_FLEXSPI_A_DATA00
#define PIN_DATA0_MUX    1U
#define PIN_DATA0_CFG    0x10E1U
#define PIN_SCLK         IOMUXC_GPIO_SD_B1_07_FLEXSPI_A_SCLK
#define PIN_SCLK_MUX     1U
#define PIN_SCLK_CFG     0x10E1U
#define PIN_DATA3        IOMUXC_GPIO_SD_B1_06_FLEXSPI_A_DATA03
#define PIN_DATA3_MUX    1U
#define PIN_DATA3_CFG    0x10E1U
#define PIN_DQS          IOMUXC_GPIO_SD_B1_05_FLEXSPI_A_DQS
#define PIN_DQS_MUX      1U
#define PIN_DQS_CFG      0x10E1U


#endif