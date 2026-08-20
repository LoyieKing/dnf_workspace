# DisableInclusion

`_ZN6DNFLex16DisableInclusionEv`

`DNFLex::DisableInclusion()`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acd2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acd2c0  _ZN6DNFLex16DisableInclusionEv
#           DNFLex::DisableInclusion()
# range [0x08acd2c0, 0x08acd2cf]
08acd2c0 +0x00:  push   %ebp
08acd2c1 +0x01:  mov    %esp,%ebp
08acd2c3 +0x03:  mov    0x8(%ebp),%eax
08acd2c6 +0x06:  movb   $0x0,0x4091(%eax)
08acd2cd +0x0d:  pop    %ebp
08acd2ce +0x0e:  ret
08acd2cf +0x0f:  nop
```

## 反编译 C

```c
// DNFLex::DisableInclusion @ 0x8acd2c0

/* DWARF original prototype: void DisableInclusion(DNFLex * this) */

void __thiscall DNFLex::DisableInclusion(DNFLex *this)

{
  this->allow_inclusion_ = false;
  return;
}
```
