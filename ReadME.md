# STM32 ile Araç Sensör Panosu (Sensor Dashboard) 🚀

Bu proje, TUFAN Elektromobil Takımı Gömülü Yazılım görevi kapsamında, STM32F103C8T6 mikrodenetleyicisi kullanılarak geliştirilmiştir. Sistem; bir buton tetiklemesiyle potansiyometreden gelen analog verileri okur, işler ve UART üzerinden bilgisayara iletir.

## 🛠️ Toolchain ve Geliştirme Ortamı ##

 Mikrodenetleyici: STM32F103C8T6 (Blue Pill)

Yapılandırma: 
STM32CubeMX (Makefile Toolchain)

IDE/Editor: 
VS Code + STM32 for VS Code Extension

Derleyici:
 ARM GCC

Hız: 
72 MHz (HSE + PLL)



## 🏗️ Derleme ve Yükleme ##

VS Code içerisinde alt bardaki Build butonuna basın.

ST-Link bağlantısını yaptıktan sonra Flash butonuna basarak kodu karta yükleyin.

Seri port izleme için 115200 baud hızında bir terminal kullanın.

## 📋 İş Mantığı ve Akış ##

Boot Testi: 
Başlangıçta LED 3 kez 500ms aralıklarla yanıp söner.

Buton Kontrolü:
 PA0 pinindeki buton 50ms debounce süresiyle kontrol edilir.

ADC Okuma: 
Butona basıldığında ADC1 kanalı üzerinden 12-bit veri okunur.

Dönüşüm: 
Ham veri, gerilim (V) ve yüzde (%) değerlerine çevrilir.

UART Log: 
Veriler formatlı bir şekilde bilgisayara gönderilir.

## 🖥️ Örnek Serial Monitor Çıktısı

```
[SISTEM] TUFAN Sensor Dashboard baslatiliyor...
[SISTEM] LED yanip sonuyor (3x boot testi)...
[SISTEM] Hazir. Olcum icin butona basiniz.


======== TUFAN SENSOR OKUMASI #1 ========
Ham ADC Degeri: 2731
Gerilim: 2.20 V
Batarya Sim. 66.7%
LED Durumu ACIK (olcum)
```



### 👥 Pair Programming Bilgileri ###

Şebnem(Çiçek) (Geliştirici): Repo kurulumu, sensor.h/.c iskeleti, ADC altyapısı.

Bilgehan (Reviewer): uart_log.h/.c, main.c entegrasyonu, kod inceleme.


