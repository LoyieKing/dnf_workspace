# ~CExtraction

`_ZN17expert_extraction11CExtractionD1Ev`

`expert_extraction::CExtraction::~CExtraction()`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtraction` | `0x084a29a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a29a2  _ZN17expert_extraction11CExtractionD1Ev
#           expert_extraction::CExtraction::~CExtraction()
# range [0x084a29a2, 0x084a29d5]
084a29a2 +0x00:  push   %ebp
084a29a3 +0x01:  mov    %esp,%ebp
084a29a5 +0x03:  sub    $0x18,%esp
084a29a8 +0x06:  mov    0x8(%ebp),%eax
084a29ab +0x09:  movl   $&_ZTVN17expert_extraction11CExtractionE+0x8,(%eax)
084a29b1 +0x0f:  mov    0x8(%ebp),%eax
084a29b4 +0x12:  mov    0x4(%eax),%eax
084a29b7 +0x15:  mov    %eax,(%esp)
084a29ba +0x18:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a29bf +0x1d:  mov    $0x0,%eax
084a29c4 +0x22:  test   %al,%al
084a29c6 +0x24:  je     084a29d3 <+0x31>
084a29c8 +0x26:  mov    0x8(%ebp),%eax
084a29cb +0x29:  mov    %eax,(%esp)
084a29ce +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a29d3 +0x31:  leave
084a29d4 +0x32:  ret
084a29d5 +0x33:  nop
```

## 反编译 C

```c
// expert_extraction::CExtraction::~CExtraction @ 0x84a29a2

/* WARNING: Removing unreachable block (ram,0x084a29c8) */
/* expert_extraction::CExtraction::~CExtraction() */

void __thiscall expert_extraction::CExtraction::~CExtraction(CExtraction *this)

{
  *(undefined ***)this = &PTR__CExtraction_08c7ddc8;
  operator_delete(*(void **)(this + 4));
  return;
}
```
