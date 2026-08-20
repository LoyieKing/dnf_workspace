# CEventCeraShopRewardPoint

`_ZN25CEventCeraShopRewardPointC1Ev`

`CEventCeraShopRewardPoint::CEventCeraShopRewardPoint()`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x0816459a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816459a  _ZN25CEventCeraShopRewardPointC1Ev
#           CEventCeraShopRewardPoint::CEventCeraShopRewardPoint()
# range [0x0816459a, 0x081645c9]
0816459a +0x00:  push   %ebp
0816459b +0x01:  mov    %esp,%ebp
0816459d +0x03:  sub    $0x18,%esp
081645a0 +0x06:  mov    0x8(%ebp),%eax
081645a3 +0x09:  mov    %eax,(%esp)
081645a6 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081645ab +0x11:  mov    0x8(%ebp),%eax
081645ae +0x14:  movl   $&_ZTV25CEventCeraShopRewardPoint+0x8,(%eax)
081645b4 +0x1a:  mov    0x8(%ebp),%eax
081645b7 +0x1d:  movl   $0x0,0x10(%eax)
081645be +0x24:  mov    0x8(%ebp),%eax
081645c1 +0x27:  movl   $0x0,0xc(%eax)
081645c8 +0x2e:  leave
081645c9 +0x2f:  ret
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::CEventCeraShopRewardPoint @ 0x816459a

/* CEventCeraShopRewardPoint::CEventCeraShopRewardPoint() */

void __thiscall
CEventCeraShopRewardPoint::CEventCeraShopRewardPoint(CEventCeraShopRewardPoint *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CEventCeraShopRewardPoint_08b7cb68;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
