#ifndef _APP_UART_H_
#define _APP_UART_H_

#define CCD_SZ                  ((uint16_t)3650)
#define CCD_SZx2                 ((uint16_t) (CCD_SZ * 2))

void start_dma_spi(void);

void uart1_handler(void);

void app_bufer_init(void);

void spi_handler(void);

void data_processing(void);

#endif /* _APP_UART_H_ */