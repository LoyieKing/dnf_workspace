# dispatch_sig

`_ZN18TimerNPCMoodChange12dispatch_sigEiij`

`TimerNPCMoodChange::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerNPCMoodChange` | `0x086381e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086381e2  _ZN18TimerNPCMoodChange12dispatch_sigEiij
#           TimerNPCMoodChange::dispatch_sig(int, int, unsigned int)
# range [0x086381e2, 0x086381eb]
086381e2 +0x00:  push   %ebp
086381e3 +0x01:  mov    %esp,%ebp
086381e5 +0x03:  mov    $0x1,%eax
086381ea +0x08:  pop    %ebp
086381eb +0x09:  ret
```

## 反编译 C

```c
// TimerNPCMoodChange::dispatch_sig @ 0x86381e2

/* TimerNPCMoodChange::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNPCMoodChange::dispatch_sig(int param_1,int param_2,uint param_3)

{
  return 1;
}
```
