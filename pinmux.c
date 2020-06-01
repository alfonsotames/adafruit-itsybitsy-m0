/*
 * Copyright (c) 2018 Google LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <init.h>
#include <drivers/pinmux.h>

static int board_pinmux_init(struct device *dev)
{
	struct device *muxa = device_get_binding(DT_ATMEL_SAM0_PINMUX_PINMUX_A_LABEL);

	ARG_UNUSED(dev);

#if DT_ATMEL_SAM0_UART_SERCOM_0_BASE_ADDRESS
#error Pin mapping is not configured
#endif

#if DT_ATMEL_SAM0_UART_SERCOM_2_BASE_ADDRESS
#error Pin mapping is not configured
#endif

#if DT_ATMEL_SAM0_UART_SERCOM_1_BASE_ADDRESS
#error Pin mapping is not configured
#endif
#if DT_ATMEL_SAM0_UART_SERCOM_3_BASE_ADDRESS
/* USB DP on PA25, USB DM on PA24 */
pinmux_pin_set(muxa, 25, PINMUX_FUNC_G);
pinmux_pin_set(muxa, 24, PINMUX_FUNC_G);
#endif
#if DT_ATMEL_SAM0_UART_SERCOM_4_BASE_ADDRESS
#error Pin mapping is not configured
#endif
#if DT_ATMEL_SAM0_UART_SERCOM_5_BASE_ADDRESS
#error Pin mapping is not configured
#endif

#if DT_ATMEL_SAM0_SPI_SERCOM_3_BASE_ADDRESS
#error Pin mapping is not configured
#endif

#if DT_ATMEL_SAM0_SPI_SERCOM_1_BASE_ADDRESS
#error Pin mapping is not configured
#endif

#if DT_ATMEL_SAM0_SPI_SERCOM_2_BASE_ADDRESS
#error Pin mapping is not configured
#endif
#if DT_ATMEL_SAM0_SPI_SERCOM_0_BASE_ADDRESS
#error Pin mapping is not configured
#endif
#if DT_ATMEL_SAM0_SPI_SERCOM_4_BASE_ADDRESS
#error Pin mapping is not configured
#endif
#if DT_ATMEL_SAM0_SPI_SERCOM_5_BASE_ADDRESS
#error Pin mapping is not configured
#endif

#ifdef CONFIG_USB_DC_SAM0
	/* USB DP on PA25, USB DM on PA24 */
	pinmux_pin_set(muxa, 25, PINMUX_FUNC_G);
	pinmux_pin_set(muxa, 24, PINMUX_FUNC_G);
#endif

	return 0;
}

SYS_INIT(board_pinmux_init, PRE_KERNEL_1, CONFIG_PINMUX_INIT_PRIORITY);
