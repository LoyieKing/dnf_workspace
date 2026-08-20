# check_passive_skill

`_ZN6CParty19check_passive_skillEv`

`CParty::check_passive_skill()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a932a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a932a  _ZN6CParty19check_passive_skillEv
#           CParty::check_passive_skill()
# range [0x085a932a, 0x085a932f]
085a932a +0x00:  push   %ebp
085a932b +0x01:  mov    %esp,%ebp
085a932d +0x03:  pop    %ebp
085a932e +0x04:  ret
085a932f +0x05:  nop
```

## 反编译 C

```c
// CParty::check_passive_skill @ 0x85a932a

/* CParty::check_passive_skill() */

void CParty::check_passive_skill(void)

{
  return;
}
```
