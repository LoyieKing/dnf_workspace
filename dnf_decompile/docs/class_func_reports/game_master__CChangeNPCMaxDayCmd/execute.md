# execute

`_ZN11game_master19CChangeNPCMaxDayCmd7executeEv`

`game_master::CChangeNPCMaxDayCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeNPCMaxDayCmd` | `0x084aadd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aadd2  _ZN11game_master19CChangeNPCMaxDayCmd7executeEv
#           game_master::CChangeNPCMaxDayCmd::execute()
# range [0x084aadd2, 0x084aadd7]
084aadd2 +0x00:  push   %ebp
084aadd3 +0x01:  mov    %esp,%ebp
084aadd5 +0x03:  pop    %ebp
084aadd6 +0x04:  ret
084aadd7 +0x05:  nop
```

## 反编译 C

```c
// game_master::CChangeNPCMaxDayCmd::execute @ 0x84aadd2

/* game_master::CChangeNPCMaxDayCmd::execute() */

void game_master::CChangeNPCMaxDayCmd::execute(void)

{
  return;
}
```
