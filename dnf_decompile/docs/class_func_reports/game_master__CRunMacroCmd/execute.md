# execute

`_ZN11game_master12CRunMacroCmd7executeEv`

`game_master::CRunMacroCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CRunMacroCmd` | `0x084a9c06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9c06  _ZN11game_master12CRunMacroCmd7executeEv
#           game_master::CRunMacroCmd::execute()
# range [0x084a9c06, 0x084a9c0b]
084a9c06 +0x00:  push   %ebp
084a9c07 +0x01:  mov    %esp,%ebp
084a9c09 +0x03:  pop    %ebp
084a9c0a +0x04:  ret
084a9c0b +0x05:  nop
```

## 反编译 C

```c
// game_master::CRunMacroCmd::execute @ 0x84a9c06

/* game_master::CRunMacroCmd::execute() */

void game_master::CRunMacroCmd::execute(void)

{
  return;
}
```
