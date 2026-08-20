# ~CEventCeraShopRewardPoint

`_ZN25CEventCeraShopRewardPointD1Ev`

`CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint()`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x081645ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081645ca  _ZN25CEventCeraShopRewardPointD1Ev
#           CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint()
# range [0x081645ca, 0x081645f9]
081645ca +0x00:  push   %ebp
081645cb +0x01:  mov    %esp,%ebp
081645cd +0x03:  sub    $0x18,%esp
081645d0 +0x06:  mov    0x8(%ebp),%eax
081645d3 +0x09:  movl   $&_ZTV25CEventCeraShopRewardPoint+0x8,(%eax)
081645d9 +0x0f:  mov    0x8(%ebp),%eax
081645dc +0x12:  mov    %eax,(%esp)
081645df +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081645e4 +0x1a:  mov    $0x0,%eax
081645e9 +0x1f:  test   %al,%al
081645eb +0x21:  je     081645f8 <+0x2e>
081645ed +0x23:  mov    0x8(%ebp),%eax
081645f0 +0x26:  mov    %eax,(%esp)
081645f3 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081645f8 +0x2e:  leave
081645f9 +0x2f:  ret
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint @ 0x81645ca

/* WARNING: Removing unreachable block (ram,0x081645ed) */
/* CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint() */

void __thiscall
CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint(CEventCeraShopRewardPoint *this)

{
  *(undefined ***)this = &PTR__CEventCeraShopRewardPoint_08b7cb68;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
