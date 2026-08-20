# dispatch_sig

`_ZN25Timer_GenerateCaptchaData12dispatch_sigEiij`

`Timer_GenerateCaptchaData::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_GenerateCaptchaData` | `0x0863b29c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b29c  _ZN25Timer_GenerateCaptchaData12dispatch_sigEiij
#           Timer_GenerateCaptchaData::dispatch_sig(int, int, unsigned int)
# range [0x0863b29c, 0x0863b2b9]
0863b29c +0x00:  push   %ebp
0863b29d +0x01:  mov    %esp,%ebp
0863b29f +0x03:  sub    $0x18,%esp
0863b2a2 +0x06:  call   0829d4b0 <_ZN10GlobalData19GenerateCaptchaDataEv>  ; GlobalData::GenerateCaptchaData()
0863b2a7 +0x0b:  movl   $0x3,(%esp)
0863b2ae +0x12:  call   0863b2ba <_ZN25Timer_GenerateCaptchaData15RegistNextTimerEi>  ; Timer_GenerateCaptchaData::RegistNextTimer(int)
0863b2b3 +0x17:  mov    $0x1,%eax
0863b2b8 +0x1c:  leave
0863b2b9 +0x1d:  ret
```

## 反编译 C

```c
// Timer_GenerateCaptchaData::dispatch_sig @ 0x863b29c

/* Timer_GenerateCaptchaData::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_GenerateCaptchaData::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GlobalData::GenerateCaptchaData();
  RegistNextTimer(3);
  return 1;
}
```
