# execute

`_ZN11game_master18CChangeNPCFavorCmd7executeEv`

`game_master::CChangeNPCFavorCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeNPCFavorCmd` | `0x084aaef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aaef2  _ZN11game_master18CChangeNPCFavorCmd7executeEv
#           game_master::CChangeNPCFavorCmd::execute()
# range [0x084aaef2, 0x084aaef7]
084aaef2 +0x00:  push   %ebp
084aaef3 +0x01:  mov    %esp,%ebp
084aaef5 +0x03:  pop    %ebp
084aaef6 +0x04:  ret
084aaef7 +0x05:  nop
```

## 反编译 C

```c
// game_master::CChangeNPCFavorCmd::execute @ 0x84aaef2

/* game_master::CChangeNPCFavorCmd::execute() */

void game_master::CChangeNPCFavorCmd::execute(void)

{
  return;
}
```
