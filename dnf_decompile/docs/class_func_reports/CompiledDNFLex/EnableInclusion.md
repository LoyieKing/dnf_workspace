# EnableInclusion

`_ZN14CompiledDNFLex15EnableInclusionEv`

`CompiledDNFLex::EnableInclusion()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0090  _ZN14CompiledDNFLex15EnableInclusionEv
#           CompiledDNFLex::EnableInclusion()
# range [0x08ad0090, 0x08ad009f]
08ad0090 +0x00:  push   %ebp
08ad0091 +0x01:  mov    %esp,%ebp
08ad0093 +0x03:  mov    0x8(%ebp),%eax
08ad0096 +0x06:  movb   $0x1,0x2040(%eax)
08ad009d +0x0d:  pop    %ebp
08ad009e +0x0e:  ret
08ad009f +0x0f:  nop
```

## 反编译 C

```c
// CompiledDNFLex::EnableInclusion @ 0x8ad0090

/* DWARF original prototype: void EnableInclusion(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::EnableInclusion(CompiledDNFLex *this)

{
  this->allow_inclusion_ = true;
  return;
}
```
