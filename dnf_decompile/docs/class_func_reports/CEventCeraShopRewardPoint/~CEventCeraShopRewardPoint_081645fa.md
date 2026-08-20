# ~CEventCeraShopRewardPoint

`_ZN25CEventCeraShopRewardPointD0Ev`

`CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint()`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x081645fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081645fa  _ZN25CEventCeraShopRewardPointD0Ev
#           CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint()
# range [0x081645fa, 0x08164617]
081645fa +0x00:  push   %ebp
081645fb +0x01:  mov    %esp,%ebp
081645fd +0x03:  sub    $0x18,%esp
08164600 +0x06:  mov    0x8(%ebp),%eax
08164603 +0x09:  mov    %eax,(%esp)
08164606 +0x0c:  call   081645ca <_ZN25CEventCeraShopRewardPointD1Ev>  ; CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint()
0816460b +0x11:  mov    0x8(%ebp),%eax
0816460e +0x14:  mov    %eax,(%esp)
08164611 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08164616 +0x1c:  leave
08164617 +0x1d:  ret
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint @ 0x81645fa

/* CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint() */

void __thiscall
CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint(CEventCeraShopRewardPoint *this)

{
  ~CEventCeraShopRewardPoint(this);
  operator_delete(this);
  return;
}
```
