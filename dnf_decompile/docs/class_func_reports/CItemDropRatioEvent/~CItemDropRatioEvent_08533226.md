# ~CItemDropRatioEvent

`_ZN19CItemDropRatioEventD0Ev`

`CItemDropRatioEvent::~CItemDropRatioEvent()`

| 类 | 地址 |
|---|---|
| `CItemDropRatioEvent` | `0x08533226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533226  _ZN19CItemDropRatioEventD0Ev
#           CItemDropRatioEvent::~CItemDropRatioEvent()
# range [0x08533226, 0x08533243]
08533226 +0x00:  push   %ebp
08533227 +0x01:  mov    %esp,%ebp
08533229 +0x03:  sub    $0x18,%esp
0853322c +0x06:  mov    0x8(%ebp),%eax
0853322f +0x09:  mov    %eax,(%esp)
08533232 +0x0c:  call   085331f6 <_ZN19CItemDropRatioEventD1Ev>  ; CItemDropRatioEvent::~CItemDropRatioEvent()
08533237 +0x11:  mov    0x8(%ebp),%eax
0853323a +0x14:  mov    %eax,(%esp)
0853323d +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533242 +0x1c:  leave
08533243 +0x1d:  ret
```

## 反编译 C

```c
// CItemDropRatioEvent::~CItemDropRatioEvent @ 0x8533226

/* CItemDropRatioEvent::~CItemDropRatioEvent() */

void __thiscall CItemDropRatioEvent::~CItemDropRatioEvent(CItemDropRatioEvent *this)

{
  ~CItemDropRatioEvent(this);
  operator_delete(this);
  return;
}
```
