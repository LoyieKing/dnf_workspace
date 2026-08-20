# execute

`_ZN11game_master7CPickup7executeEv`

`game_master::CPickup::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CPickup` | `0x084ac966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac966  _ZN11game_master7CPickup7executeEv
#           game_master::CPickup::execute()
# range [0x084ac966, 0x084ac96b]
084ac966 +0x00:  push   %ebp
084ac967 +0x01:  mov    %esp,%ebp
084ac969 +0x03:  pop    %ebp
084ac96a +0x04:  ret
084ac96b +0x05:  nop
```

## 反编译 C

```c
// game_master::CPickup::execute @ 0x84ac966

/* game_master::CPickup::execute() */

void game_master::CPickup::execute(void)

{
  return;
}
```
