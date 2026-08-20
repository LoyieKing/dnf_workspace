# ~CItemDictionary

`_ZN15CItemDictionaryD1Ev`

`CItemDictionary::~CItemDictionary()`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d5f0  _ZN15CItemDictionaryD1Ev
#           CItemDictionary::~CItemDictionary()
# range [0x0811d5f0, 0x0811d61f]
0811d5f0 +0x00:  push   %ebp
0811d5f1 +0x01:  mov    %esp,%ebp
0811d5f3 +0x03:  sub    $0x18,%esp
0811d5f6 +0x06:  mov    0x8(%ebp),%eax
0811d5f9 +0x09:  movl   $&_ZTV15CItemDictionary+0x8,(%eax)
0811d5ff +0x0f:  mov    0x8(%ebp),%eax
0811d602 +0x12:  mov    %eax,(%esp)
0811d605 +0x15:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0811d60a +0x1a:  mov    $0x0,%eax
0811d60f +0x1f:  test   %al,%al
0811d611 +0x21:  je     0811d61e <+0x2e>
0811d613 +0x23:  mov    0x8(%ebp),%eax
0811d616 +0x26:  mov    %eax,(%esp)
0811d619 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811d61e +0x2e:  leave
0811d61f +0x2f:  ret
```

## 反编译 C

```c
// CItemDictionary::~CItemDictionary @ 0x811d5f0

/* WARNING: Removing unreachable block (ram,0x0811d613) */
/* CItemDictionary::~CItemDictionary() */

void __thiscall CItemDictionary::~CItemDictionary(CItemDictionary *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b56908;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
