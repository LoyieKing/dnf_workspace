# EnableInclusion

`_ZN6DNFLex15EnableInclusionEv`

`DNFLex::EnableInclusion()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd2d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd2d0  _ZN6DNFLex15EnableInclusionEv
#           DNFLex::EnableInclusion()
# range [0x08acd2d0, 0x08acd2df]
08acd2d0 +0x00:  push   %ebp
08acd2d1 +0x01:  mov    %esp,%ebp
08acd2d3 +0x03:  mov    0x8(%ebp),%eax
08acd2d6 +0x06:  movb   $0x1,0x4091(%eax)
08acd2dd +0x0d:  pop    %ebp
08acd2de +0x0e:  ret
08acd2df +0x0f:  nop
```

## 反编译 C

```c
// DNFLex::EnableInclusion @ 0x8acd2d0

/* DWARF original prototype: void EnableInclusion(DNFLex * this) */

void __thiscall DNFLex::EnableInclusion(DNFLex *this)

{
  this->allow_inclusion_ = true;
  return;
}
```
