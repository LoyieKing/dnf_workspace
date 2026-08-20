# dispatch_sig

`_ZN21Inter_HadesDisConnect12dispatch_sigEP5CUserPci`

`Inter_HadesDisConnect::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_HadesDisConnect` | `0x084e4342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4342  _ZN21Inter_HadesDisConnect12dispatch_sigEP5CUserPci
#           Inter_HadesDisConnect::dispatch_sig(CUser*, char*, int)
# range [0x084e4342, 0x084e4353]
084e4342 +0x00:  push   %ebp
084e4343 +0x01:  mov    %esp,%ebp
084e4345 +0x03:  sub    $0x8,%esp
084e4348 +0x06:  call   0863a7c2 <_ZN20Timer_HadesHeartBeat15registNextTimerEv>  ; Timer_HadesHeartBeat::registNextTimer()
084e434d +0x0b:  mov    $0x0,%eax
084e4352 +0x10:  leave
084e4353 +0x11:  ret
```

## 反编译 C

```c
// Inter_HadesDisConnect::dispatch_sig @ 0x84e4342

/* Inter_HadesDisConnect::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_HadesDisConnect::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  Timer_HadesHeartBeat::registNextTimer();
  return 0;
}
```
