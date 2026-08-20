# dispatch_sig

`_ZN35Timer_DungeonStatisticEntrance_Hour12dispatch_sigEiij`

`Timer_DungeonStatisticEntrance_Hour::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_DungeonStatisticEntrance_Hour` | `0x0863b9da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b9da  _ZN35Timer_DungeonStatisticEntrance_Hour12dispatch_sigEiij
#           Timer_DungeonStatisticEntrance_Hour::dispatch_sig(int, int, unsigned int)
# range [0x0863b9da, 0x0863b9f9]
0863b9da +0x00:  push   %ebp
0863b9db +0x01:  mov    %esp,%ebp
0863b9dd +0x03:  sub    $0x18,%esp
0863b9e0 +0x06:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
0863b9e5 +0x0b:  mov    %eax,(%esp)
0863b9e8 +0x0e:  call   0860e38e <_ZN19CDungeonEntranceLog26InsertDungeonEntrance_HourEv>  ; CDungeonEntranceLog::InsertDungeonEntrance_Hour()
0863b9ed +0x13:  call   0863b9fa <_ZN35Timer_DungeonStatisticEntrance_Hour15RegistNextTimerEv>  ; Timer_DungeonStatisticEntrance_Hour::RegistNextTimer()
0863b9f2 +0x18:  mov    $0x1,%eax
0863b9f7 +0x1d:  leave
0863b9f8 +0x1e:  ret
0863b9f9 +0x1f:  nop
```

## 反编译 C

```c
// Timer_DungeonStatisticEntrance_Hour::dispatch_sig @ 0x863b9da

/* Timer_DungeonStatisticEntrance_Hour::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DungeonStatisticEntrance_Hour::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CDungeonEntranceLog *this;
  
  this = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
  CDungeonEntranceLog::InsertDungeonEntrance_Hour(this);
  RegistNextTimer();
  return 1;
}
```
