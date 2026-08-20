# dispatch_sig

`_ZN23Timer_Schedule_MidNight12dispatch_sigEiij`

`Timer_Schedule_MidNight::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_Schedule_MidNight` | `0x0863a982` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a982  _ZN23Timer_Schedule_MidNight12dispatch_sigEiij
#           Timer_Schedule_MidNight::dispatch_sig(int, int, unsigned int)
# range [0x0863a982, 0x0863a9a1]
0863a982 +0x00:  push   %ebp
0863a983 +0x01:  mov    %esp,%ebp
0863a985 +0x03:  sub    $0x8,%esp
0863a988 +0x06:  mov    &_ZN10GlobalData21g_GoldControlDateFlagE,%eax
0863a98d +0x0b:  add    $0x1,%eax
0863a990 +0x0e:  mov    %eax,&_ZN10GlobalData21g_GoldControlDateFlagE
0863a995 +0x13:  call   0863a9a2 <_ZN23Timer_Schedule_MidNight15RegistNextTimerEv>  ; Timer_Schedule_MidNight::RegistNextTimer()
0863a99a +0x18:  mov    $0x1,%eax
0863a99f +0x1d:  leave
0863a9a0 +0x1e:  ret
0863a9a1 +0x1f:  nop
```

## 反编译 C

```c
// Timer_Schedule_MidNight::dispatch_sig @ 0x863a982

/* Timer_Schedule_MidNight::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_Schedule_MidNight::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GlobalData::g_GoldControlDateFlag = GlobalData::g_GoldControlDateFlag + 1;
  RegistNextTimer();
  return 1;
}
```
