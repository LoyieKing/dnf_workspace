# CAssaulter

`_ZN11pvp_assault10CAssaulterC1Ev`

`pvp_assault::CAssaulter::CAssaulter()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e661e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e661e  _ZN11pvp_assault10CAssaulterC1Ev
#           pvp_assault::CAssaulter::CAssaulter()
# range [0x082e661e, 0x082e6635]
082e661e +0x00:  push   %ebp
082e661f +0x01:  mov    %esp,%ebp
082e6621 +0x03:  mov    0x8(%ebp),%eax
082e6624 +0x06:  movl   $0x0,(%eax)
082e662a +0x0c:  mov    0x8(%ebp),%eax
082e662d +0x0f:  movl   $0x0,0x4(%eax)
082e6634 +0x16:  pop    %ebp
082e6635 +0x17:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaulter::CAssaulter @ 0x82e661e

/* pvp_assault::CAssaulter::CAssaulter() */

void __thiscall pvp_assault::CAssaulter::CAssaulter(CAssaulter *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
