# dispatch_sig

`_ZN19Timer_DailySchedule12dispatch_sigEiij`

`Timer_DailySchedule::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_DailySchedule` | `0x0812c920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812c920  _ZN19Timer_DailySchedule12dispatch_sigEiij
#           Timer_DailySchedule::dispatch_sig(int, int, unsigned int)
# range [0x0812c920, 0x0812c93f]
0812c920 +0x00:  push   %ebp
0812c921 +0x01:  mov    %esp,%ebp
0812c923 +0x03:  sub    $0x18,%esp
0812c926 +0x06:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0812c92b +0x0b:  mov    %eax,(%esp)
0812c92e +0x0e:  call   08125c94 <_ZN21CDailyScheduleManager29CheckAndSendToAllUserScheduleEv>  ; CDailyScheduleManager::CheckAndSendToAllUserSchedule()
0812c933 +0x13:  call   0812c940 <_ZN19Timer_DailySchedule15RegistNextTimerEv>  ; Timer_DailySchedule::RegistNextTimer()
0812c938 +0x18:  mov    $0x1,%eax
0812c93d +0x1d:  leave
0812c93e +0x1e:  ret
0812c93f +0x1f:  nop
```

## 反编译 C

```c
// Timer_DailySchedule::dispatch_sig @ 0x812c920

/* Timer_DailySchedule::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DailySchedule::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CDailyScheduleManager::CheckAndSendToAllUserSchedule(GlobalData::s_DailyScheduleManager);
  RegistNextTimer();
  return 1;
}
```
