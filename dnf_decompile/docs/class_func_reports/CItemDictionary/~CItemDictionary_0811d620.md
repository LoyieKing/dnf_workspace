# ~CItemDictionary

`_ZN15CItemDictionaryD0Ev`

`CItemDictionary::~CItemDictionary()`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d620  _ZN15CItemDictionaryD0Ev
#           CItemDictionary::~CItemDictionary()
# range [0x0811d620, 0x0811d63d]
0811d620 +0x00:  push   %ebp
0811d621 +0x01:  mov    %esp,%ebp
0811d623 +0x03:  sub    $0x18,%esp
0811d626 +0x06:  mov    0x8(%ebp),%eax
0811d629 +0x09:  mov    %eax,(%esp)
0811d62c +0x0c:  call   0811d5f0 <_ZN15CItemDictionaryD1Ev>  ; CItemDictionary::~CItemDictionary()
0811d631 +0x11:  mov    0x8(%ebp),%eax
0811d634 +0x14:  mov    %eax,(%esp)
0811d637 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811d63c +0x1c:  leave
0811d63d +0x1d:  ret
```

## 反编译 C

```c
// CItemDictionary::~CItemDictionary @ 0x811d620

/* CItemDictionary::~CItemDictionary() */

void __thiscall CItemDictionary::~CItemDictionary(CItemDictionary *this)

{
  ~CItemDictionary(this);
  operator_delete(this);
  return;
}
```
