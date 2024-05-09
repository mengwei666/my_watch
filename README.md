# 开发环境

## 1.硬件

* 开发板：ESP32_PICO_KIT_V4.1 (主控芯片：esp32-pico-d4)
* 屏幕：中景园1.54寸TFT屏（12pin - st7789）
* 接线：
  * 屏幕 ------ 开发板
  * GND ------ GND
  * VCC ------ VCC(3.3V)
  * SCL ------ GPIO18
  * SDA ------ GPIO23
  * RES ------ GPIO4
  * DC ------ GPIO2
  * CS ------ GND
  * BLK ------ GPIO12

## 2.软件

* ubuntu(20.04.3.LTS)
* vscode(v1.63)
* platformio(v2.4.0)
* TFT_eSPI(v2.3.84) 地址:https://github.com/Bodmer/TFT_eSPI
* lgvl(v8.1) 地址：https://github.com/lvgl/lvgl/tree/release/v8.1

# 开发过程

## 添加lvgl到工程的lib及测试显示情况

> 将lvgl/lv_conf_template.h复制到lvgl目录旁边，并将其重命名为lv_conf.h。打开文件并将开头的更改为以启用其内容。#if 0#if 1
> 新建lv_port_disp.cpp和lv_port_disp.h文件 新建测试文件修改mian.cpp文件如下图所示
> ![2021-12-16 14-18-39 的屏幕截图](https://user-images.githubusercontent.com/58246560/146319063-976f5cc4-38f6-4c17-bf6d-a14bbfddd400.png)
> ![2021-12-16 14-24-22](https://user-images.githubusercontent.com/58246560/146319273-a54e9375-7531-421a-825f-e97ba5336670.jpg)

# 2021-12-15

* done
  * 测试成功lvgl显示图片内容。
* todo
  * 显示自定义图片

# 2021-12-16

* done
  * 测试成功lvgl显示图片内容。
  * 显示自定义图片
  * lvgl 在线转换图片网站： https://lvgl.io/tools/imageconverter
* todo
  * 显示动态图片

# 2021-12-17

* done

  * 测试成功lvgl显示图片内容。
  * 显示自定义图片
  * lvgl 在线转换图片网站： https://lvgl.io/tools/imageconverter
  * 在循环里加lvgl 心跳

  ```cpp
  void loop() 
  {
      lv_tick_inc(5); 
      lv_task_handler();
  }
  ```

  * 显示动态图片(例程)
  * 显示动态图片（太空人）
* todo# 2021-12-15
* done

  * 测试成功lvgl显示图片内容。
* todo

  * 显示自定义图片

# 2021-12-16

* done
  * 测试成功lvgl显示图片内容。
  * 显示自定义图片
  * lvgl 在线转换图片网站： https://lvgl.io/tools/imageconverter
* todo
  * 显示动态图片

# 2021-12-17

* done

  * 测试成功lvgl显示图片内容。
  * 显示自定义图片
  * lvgl 在线转换图片网站： https://lvgl.io/tools/imageconverter
  * 在循环里加lvgl 心跳

  ```cpp
  void loop() 
  {
      lv_tick_inc(5); 
      lv_task_handler();
  }
  ```

  * 显示动态图片(例程)
  * 显示动态图片（太空人）
* # todo

  2024-4-28

  更新LVGL版本到8.3.11 为了适配GUI_GUIDer 进行UI设计

  将GUI_GUIDer生成的拖到到custom 再main 中添加lv_uiguider_ui;  setup_ui(&guider_ui);
  不会的话对比git文件

# 2024-5-6

```
echo "# my_watch" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/mengwei666/my_watch.git
git push -u origin main
```

# 2024-5-8

调试编码器旋转切换按键，测试好久都没有反应。偶然间按键按下后旋转编码器可以切换按钮了，这个坑是没有好好弄明白lvgl是怎样工作的，长教训
修改：lv_port_indev.cpp 按键按下的状态

if(digitalRead(CONFIG_ENCODER_PUSH_PIN))  //按下动作和按下状态都算按下

encoder_state = LV_INDEV_STATE_REL;  //松开

else

encoder_state = LV_INDEV_STATE_PR;   //按下

# 2024-5-9

添加模拟时钟：在上位机上设计好后要 添加lv_analogclock.c lv_analogclock.h 才可以编译成功，
显示字体汉字：在上位机设计时 文本字体那行选择 sourceHans---
