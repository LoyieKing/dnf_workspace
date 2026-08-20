# DisableInclusion

`_ZN14CompiledDNFLex16DisableInclusionEv`

`CompiledDNFLex::DisableInclusion()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0080  _ZN14CompiledDNFLex16DisableInclusionEv
#           CompiledDNFLex::DisableInclusion()
# range [0x08ad0080, 0x08ad008f]
08ad0080 +0x00:  push   %ebp
08ad0081 +0x01:  mov    %esp,%ebp
08ad0083 +0x03:  mov    0x8(%ebp),%eax
08ad0086 +0x06:  movb   $0x0,0x2040(%eax)
08ad008d +0x0d:  pop    %ebp
08ad008e +0x0e:  ret
08ad008f +0x0f:  nop
```

## 反编译 C

```c
// CompiledDNFLex::DisableInclusion @ 0x8ad0080

/* DWARF original prototype: void DisableInclusion(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::DisableInclusion(CompiledDNFLex *this)

{
  this->allow_inclusion_ = false;
  return;
}
```
