# ~TiXmlElement

`_ZN12TiXmlElementD0Ev`

`TiXmlElement::~TiXmlElement()`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e3550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e3550  _ZN12TiXmlElementD0Ev
#           TiXmlElement::~TiXmlElement()
# range [0x087e3550, 0x087e356f]
087e3550 +0x00:  push   %ebp
087e3551 +0x01:  mov    %esp,%ebp
087e3553 +0x03:  push   %ebx
087e3554 +0x04:  sub    $0x14,%esp
087e3557 +0x07:  mov    0x8(%ebp),%ebx
087e355a +0x0a:  mov    %ebx,(%esp)
087e355d +0x0d:  call   087e3490 <_ZN12TiXmlElementD1Ev>  ; TiXmlElement::~TiXmlElement()
087e3562 +0x12:  mov    %ebx,0x8(%ebp)
087e3565 +0x15:  add    $0x14,%esp
087e3568 +0x18:  pop    %ebx
087e3569 +0x19:  pop    %ebp
087e356a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e356f +0x1f:  nop
```

## 反编译 C

```c
// TiXmlElement::~TiXmlElement @ 0x87e3550

/* TiXmlElement::~TiXmlElement() */

void __thiscall TiXmlElement::~TiXmlElement(TiXmlElement *this)

{
  ~TiXmlElement(this);
  operator_delete(this);
  return;
}
```
