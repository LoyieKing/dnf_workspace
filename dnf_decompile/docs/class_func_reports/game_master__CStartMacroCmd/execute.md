# execute

`_ZN11game_master14CStartMacroCmd7executeEv`

`game_master::CStartMacroCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CStartMacroCmd` | `0x084a9bfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9bfa  _ZN11game_master14CStartMacroCmd7executeEv
#           game_master::CStartMacroCmd::execute()
# range [0x084a9bfa, 0x084a9bff]
084a9bfa +0x00:  push   %ebp
084a9bfb +0x01:  mov    %esp,%ebp
084a9bfd +0x03:  pop    %ebp
084a9bfe +0x04:  ret
084a9bff +0x05:  nop
```

## 反编译 C

```c
// game_master::CStartMacroCmd::execute @ 0x84a9bfa

/* game_master::CStartMacroCmd::execute() */

void game_master::CStartMacroCmd::execute(void)

{
  return;
}
```
