# ~facet

`_ZNSt6locale5facetD1Ev`

`std::locale::facet::~facet()`

| 类 | 地址 |
|---|---|
| `std::locale::facet` | `0x086dada0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dada0  _ZNSt6locale5facetD1Ev
#           std::locale::facet::~facet()
# range [0x086dada0, 0x086dadaf]
086dada0 +0x00:  push   %ebp
086dada1 +0x01:  mov    %esp,%ebp
086dada3 +0x03:  mov    0x8(%ebp),%eax
086dada6 +0x06:  movl   $&_ZTVNSt6locale5facetE+0x8,(%eax)
086dadac +0x0c:  pop    %ebp
086dadad +0x0d:  ret
086dadae +0x0e:  nop
086dadaf +0x0f:  nop
```

## 反编译 C

```c
// std::locale::facet::~facet @ 0x86dada0

/* std::locale::facet::~facet() */

void __thiscall std::locale::facet::~facet(facet *this)

{
  *(undefined ***)this = &PTR__facet_08cfe028;
  return;
}
```
