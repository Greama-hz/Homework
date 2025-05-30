#include <Arduino.h>
#include <U8g2lib.h>
// 构造对象
U8G2_SSD1306_128X64_NONAME_F_HW_I2C OLED(U8G2_R0);

void setup() {
  // 初始化OLED
  OLED.begin();
  // 开启中文字符集支持
  OLED.enableUTF8Print();
  // 设置字体
  OLED.setFont(u8g2_font_wqy12_t_gb2312);
}

void loop() {
 
  // 清除缓存区内容
  OLED.clearBuffer();
  // 绘制内容
  OLED.setCursor(0, 10);
  OLED.print("Hello, world!");

  OLED.setCursor(0, 30);
  OLED.print("你好,世界!");

  // 发送缓存区内容到OLED
  OLED.sendBuffer();

  delay(1000);
}
