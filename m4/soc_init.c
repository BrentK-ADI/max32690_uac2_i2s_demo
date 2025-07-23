/**
 * Configuration for MAX32690-TQFN.
 *
 * This file was generated using Analog Devices CodeFusion Studio.
 * https://github.com/analogdevicesinc/codefusion-studio
 *
 * Generated at: 2025-07-22T22:02:42.280Z 
 *
 * SPDX-License-Identifier: Apache-2.0
 * Copyright (c) 2025 Analog Devices, Inc.
 */

#include <i2c.h>
#include <mxc_device.h>
#include <mxc_sys.h>
#include <stddef.h>
#include <uart.h>

/* Prototypes for functions in this file.
*/
int PinInit(void);
int PeripheralInit(void);

int PinInit(void) {
  int result;

  /* Initialize all the used GPIO Ports.
  */
  result = MXC_GPIO_Init(MXC_GPIO_PORT_0 | MXC_GPIO_PORT_1 | MXC_GPIO_PORT_2 | MXC_GPIO_PORT_4);
  if (result != E_NO_ERROR) {
    return result;
  }

  MXC_GPIO_SetConfigLock(MXC_GPIO_CONFIG_UNLOCKED);

  /* P2.27 (3): assigned to I2S0_SDI.
  */
  const mxc_gpio_cfg_t cfg_p2_27 = {
    MXC_GPIO2,
    MXC_GPIO_PIN_27,
    MXC_GPIO_FUNC_ALT3,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_27);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.29 (4): assigned to I2S0_SCK.
  */
  const mxc_gpio_cfg_t cfg_p2_29 = {
    MXC_GPIO2,
    MXC_GPIO_PIN_29,
    MXC_GPIO_FUNC_ALT3,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_29);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.28 (5): assigned to I2S0_SDO.
  */
  const mxc_gpio_cfg_t cfg_p2_28 = {
    MXC_GPIO2,
    MXC_GPIO_PIN_28,
    MXC_GPIO_FUNC_ALT3,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_28);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.7 (7): assigned to GPIO0_P0.7.
  */
  const mxc_gpio_cfg_t cfg_p0_7 = {
    MXC_GPIO0,
    MXC_GPIO_PIN_7,
    MXC_GPIO_FUNC_OUT,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_7);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.8 (8): assigned to GPIO0_P0.8.
  */
  const mxc_gpio_cfg_t cfg_p0_8 = {
    MXC_GPIO0,
    MXC_GPIO_PIN_8,
    MXC_GPIO_FUNC_OUT,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_8);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.9 (9): assigned to GPIO0_P0.9.
  */
  const mxc_gpio_cfg_t cfg_p0_9 = {
    MXC_GPIO0,
    MXC_GPIO_PIN_9,
    MXC_GPIO_FUNC_OUT,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_9);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P0.14 (14): assigned to GPIO0_P0.14.
  */
  const mxc_gpio_cfg_t cfg_p0_14 = {
    MXC_GPIO0,
    MXC_GPIO_PIN_14,
    MXC_GPIO_FUNC_OUT,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p0_14);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.9 (15): assigned to UART2_RX.
  */
  const mxc_gpio_cfg_t cfg_p1_9 = {
    MXC_GPIO1,
    MXC_GPIO_PIN_9,
    MXC_GPIO_FUNC_ALT1,
    MXC_GPIO_PAD_WEAK_PULL_UP,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_9);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.10 (16): assigned to UART2_TX.
  */
  const mxc_gpio_cfg_t cfg_p1_10 = {
    MXC_GPIO1,
    MXC_GPIO_PIN_10,
    MXC_GPIO_FUNC_ALT1,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_10);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.7 (17): assigned to I2C2_SDA.
  */
  const mxc_gpio_cfg_t cfg_p1_7 = {
    MXC_GPIO1,
    MXC_GPIO_PIN_7,
    MXC_GPIO_FUNC_ALT3,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_7);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P1.8 (18): assigned to I2C2_SCL.
  */
  const mxc_gpio_cfg_t cfg_p1_8 = {
    MXC_GPIO1,
    MXC_GPIO_PIN_8,
    MXC_GPIO_FUNC_ALT3,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p1_8);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P4.0 (60): assigned to GPIO4_P4.0.
  */
  const mxc_gpio_cfg_t cfg_p4_0 = {
    MXC_GPIO4,
    MXC_GPIO_PIN_0,
    MXC_GPIO_FUNC_IN,
    MXC_GPIO_PAD_PULL_UP,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p4_0);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.12 (67): assigned to GPIO2_P2.12.
  */
  const mxc_gpio_cfg_t cfg_p2_12 = {
    MXC_GPIO2,
    MXC_GPIO_PIN_12,
    MXC_GPIO_FUNC_OUT,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_12);
  if (result != E_NO_ERROR) {
    return result;
  }

  /* P2.26 (68): assigned to I2S0_WS.
  */
  const mxc_gpio_cfg_t cfg_p2_26 = {
    MXC_GPIO2,
    MXC_GPIO_PIN_26,
    MXC_GPIO_FUNC_ALT3,
    MXC_GPIO_PAD_NONE,
    MXC_GPIO_VSSEL_VDDIO,
    MXC_GPIO_DRVSTR_0 
  };
  result = MXC_GPIO_Config(&cfg_p2_26);
  if (result != E_NO_ERROR) {
    return result;
  }

  MXC_GPIO_SetConfigLock(MXC_GPIO_CONFIG_LOCKED);

  return E_NO_ERROR;
}

int PeripheralInit(void) {
  int result = E_NO_ERROR;

  { /* Configure UART2.
     */

    /* Initialize the peripheral. */
    result = MXC_UART_Init(MXC_UART2,
                           115200U,
                           MXC_UART_IBRO_CLK);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Data Size. */
    result = MXC_UART_SetDataSize(MXC_UART2, 8);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Stop Bits. */
    result = MXC_UART_SetStopBits(MXC_UART2, MXC_UART_STOP_1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Flow Control. */
    result = MXC_UART_SetFlowCtrl(MXC_UART2, MXC_UART_FLOW_DIS, 1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set Parity. */
    result = MXC_UART_SetParity(MXC_UART2, MXC_UART_PARITY_DISABLE);
    if (result != E_NO_ERROR) {
      return result;
    }

  }

  { /* Configure I2C2.
     */

    /* Initialize the peripheral. */
    result = MXC_I2C_Init(MXC_I2C2,
                          1,
                          0U);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set the frequency. */
    result = MXC_I2C_SetFrequency(MXC_I2C2, 100000U);
    if (result < 0) {
      return result;
    }

    /* Enable or disable clock stretching. */
    result = MXC_I2C_SetClockStretching(MXC_I2C2, 1);
    if (result != E_NO_ERROR) {
      return result;
    }

    /* Set the timeout. */
    MXC_I2C_SetTimeout(MXC_I2C2, 0U);

  }


  return result;
}
