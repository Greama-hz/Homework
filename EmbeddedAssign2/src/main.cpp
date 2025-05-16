#include <Arduino.h>
 
// 定义LED引脚 
#define LED1_PIN 13  // GPIO13 
#define LED2_PIN 12  // GPIO12 
 
// LED状态变量 
bool led1State = false;
bool led2State = false;
 
void setup() {
  // 初始化串口通信，波特率9600 
  Serial.begin(9600); 
  
  // 设置LED引脚为输出模式 
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  
  // 初始状态关闭LED 
  digitalWrite(LED1_PIN, led1State);
  digitalWrite(LED2_PIN, led2State);
  
  // 发送欢迎信息 
  Serial.println(" 可用指令:");
  Serial.println("1  - 切换LED1状态");
  Serial.println("2  - 切换LED2状态");
  Serial.println(" 输入其他指令无效");
  Serial.println("----------------------"); 
}
 
void loop() {
  // 检查串口是否有数据可读 
  if (Serial.available()  > 0) {
    // 读取串口数据（字符串形式）
    String command = Serial.readStringUntil('\n'); 
    command.trim();  // 去除可能的换行符和空格 
    
    // 处理指令 
    if (command == "1") {
      // 切换LED1状态 
      led1State = !led1State;
      digitalWrite(LED1_PIN, led1State);
      
      // 发送反馈 
      Serial.print(" 执行指令: ");
      Serial.println(command); 
      Serial.println(led1State  ? "LED1状态: 亮" : "LED1状态: 灭");
    } 
    else if (command == "2") {
      // 切换LED2状态 
      led2State = !led2State;
      digitalWrite(LED2_PIN, led2State);
      
      // 发送反馈 
      Serial.print(" 执行指令: ");
      Serial.println(command); 
      Serial.println(led2State  ? "LED2状态: 亮" : "LED2状态: 灭");
    }
    else {
      // 无效指令反馈 
      Serial.print(" 无效指令: ");
      Serial.println(command); 
      Serial.println(" 请输入 '1' 或 '2'");
    }
    
    Serial.println("----------------------"); 
  }
}