# ~CExtraction

`_ZN17expert_extraction11CExtractionD0Ev`

`expert_extraction::CExtraction::~CExtraction()`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtraction` | `0x084a29d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a29d6  _ZN17expert_extraction11CExtractionD0Ev
#           expert_extraction::CExtraction::~CExtraction()
# range [0x084a29d6, 0x084a29f3]
084a29d6 +0x00:  push   %ebp
084a29d7 +0x01:  mov    %esp,%ebp
084a29d9 +0x03:  sub    $0x18,%esp
084a29dc +0x06:  mov    0x8(%ebp),%eax
084a29df +0x09:  mov    %eax,(%esp)
084a29e2 +0x0c:  call   084a29a2 <_ZN17expert_extraction11CExtractionD1Ev>  ; expert_extraction::CExtraction::~CExtraction()
084a29e7 +0x11:  mov    0x8(%ebp),%eax
084a29ea +0x14:  mov    %eax,(%esp)
084a29ed +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a29f2 +0x1c:  leave
084a29f3 +0x1d:  ret
```

## 反编译 C

```c
// expert_extraction::CExtraction::~CExtraction @ 0x84a29d6

/* expert_extraction::CExtraction::~CExtraction() */

void __thiscall expert_extraction::CExtraction::~CExtraction(CExtraction *this)

{
  ~CExtraction(this);
  operator_delete(this);
  return;
}
```
