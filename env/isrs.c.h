#ifdef CEU_ISR__ADC_vect_num
ISR(ADC_vect)
{
    if (isrs[ADC_vect_num].fun != NULL) {
        isrs[ADC_vect_num].fun(isrs[ADC_vect_num].mem);
    }
}
#endif

#ifdef CEU_ISR__SPI_STC_vect_num
ISR(SPI_STC_vect)
{
    if (isrs[SPI_STC_vect_num].fun != NULL) {
        isrs[SPI_STC_vect_num].fun(isrs[SPI_STC_vect_num].mem);
    }
}
#endif

#ifdef CEU_ISR__TIMER1_COMPA_vect_num
ISR(TIMER1_COMPA_vect)
{
    if (isrs[TIMER1_COMPA_vect_num].fun != NULL) {
        isrs[TIMER1_COMPA_vect_num].fun(isrs[TIMER1_OVF_vect_num].mem);
    }
}
#endif

#ifdef CEU_ISR__TIMER1_OVF_vect_num
ISR(TIMER1_OVF_vect)
{
    if (isrs[TIMER1_OVF_vect_num].fun != NULL) {
        isrs[TIMER1_OVF_vect_num].fun(isrs[TIMER1_OVF_vect_num].mem);
    }
}
#endif

#ifdef CEU_ISR__USART_RX_vect_num
ISR(USART_RX_vect)
{
    if (isrs[USART_RX_vect_num].fun != NULL) {
        isrs[USART_RX_vect_num].fun(isrs[USART_RX_vect_num].mem);
    }
}
#endif

#ifdef CEU_ISR__USART_TX_vect_num
ISR(USART_TX_vect)
{
    if (isrs[USART_TX_vect_num].fun != NULL) {
        isrs[USART_TX_vect_num].fun(isrs[USART_TX_vect_num].mem);
    }
}
#endif

#ifdef CEU_ISR__TC3_IRQn
void TC3_Handler()
{
    if (isrs[TC3_IRQn].fun != NULL) {
        isrs[TC3_IRQn].fun(isrs[TC3_IRQn].mem);
    }
}
#endif

#ifdef CEU_ISR__TC4_IRQn
void TC4_Handler()
{
    if (isrs[TC4_IRQn].fun != NULL) {
        isrs[TC4_IRQn].fun(isrs[TC4_IRQn].mem);
    }
}
#endif
