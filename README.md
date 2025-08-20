# 4Servo Walking Motion Algorithm

## وصف المشروع 
هذا المشروع يوضح **حركة مشي بسيطة لروبوت باستخدام 4 سيرفو** على Arduino.   

المشروع يتضمن:  
- الكود البرمجي `.ino` لتنفيذ الحركة  
- الخوارزمية بالإنجليزي  
- السودو كود لتوضيح خطوات الحركة  
- فيديو يوضح حركة الروبوت (الدائرة) عمليًا، مرفق مع الملفات داخل المستودع  

---

## فيديو المشروع 
**فيديو الدائرة**: [Circuit Design 4Servo-Arduino - Tinkercad - .mp4](Circuit%20Design%204Servo-Arduino%20-%20Tinkercad%20-%20.mp4)  

- تم تضمين الفيديو داخل المستودع لتوضيح حركة الدائرة عمليًا.

---

## الكود البرمجي / Arduino Code
الملف المرفق: `4servo_arduino1.ino`  

- يحتوي على حركة Sweep لجميع السيرفو لإظهار حركة المشي البسيطة.


---

## Algorithm in English
1. **Initialization**  
   - Set all servos to 90° (middle position).  
   - Ensure the robot is standing upright and balanced.  
   - Wait briefly to stabilize.  

2. **Sweep Motion**  
   - Gradually move all servos from 0° to 180° and back to 0° within ~2 seconds.  
   - This creates a simple stepping or vibration effect.

3. **Hold Position**  
   - After the sweep, set all servos to 90° so the robot remains stable.  
   - Wait briefly before repeating.

4. **Loop (Optional)**  
   - Repeat the sweep motion for continuous walking.  
   - Use small delays between angles for smooth movement.

---

## Pseudocode

```text
START
  // Initialize all servos
  Set all servos to 90° (middle)
  Ensure the robot is upright
  Wait briefly

  LOOP forever
    // Sweep from 0° to 180°
    For angle from 0 to 180:
      Move all servos to current angle
      Wait short time

    // Sweep back from 180° to 0°
    For angle from 180 to 0:
      Move all servos to current angle
      Wait short time

    // Hold position
    Set all servos to 90° (middle)
    Wait briefly
END

(ملاحظات) 
- يمكن تعديل التأخير بين الزوايا لتسريع أو إبطاء الحركة.  
- جميع السيرفو تتحرك معًا بنفس الزاوية لإظهار حركة متناسقة.   
