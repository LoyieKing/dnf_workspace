# execute

`_ZN11game_master7CRefund7executeEv`

`game_master::CRefund::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CRefund` | `0x084aca86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aca86  _ZN11game_master7CRefund7executeEv
#           game_master::CRefund::execute()
# range [0x084aca86, 0x084aca8b]
084aca86 +0x00:  push   %ebp
084aca87 +0x01:  mov    %esp,%ebp
084aca89 +0x03:  pop    %ebp
084aca8a +0x04:  ret
084aca8b +0x05:  nop
```

## 反编译 C

```c
// game_master::CRefund::execute @ 0x84aca86

/* game_master::CRefund::execute() */

void game_master::CRefund::execute(void)

{
  return;
}
```
