# ~CRedeemItem

`_ZN11Redeem_Item11CRedeemItemD0Ev`

`Redeem_Item::CRedeemItem::~CRedeemItem()`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f70f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f70f0  _ZN11Redeem_Item11CRedeemItemD0Ev
#           Redeem_Item::CRedeemItem::~CRedeemItem()
# range [0x085f70f0, 0x085f710d]
085f70f0 +0x00:  push   %ebp
085f70f1 +0x01:  mov    %esp,%ebp
085f70f3 +0x03:  sub    $0x18,%esp
085f70f6 +0x06:  mov    0x8(%ebp),%eax
085f70f9 +0x09:  mov    %eax,(%esp)
085f70fc +0x0c:  call   085f708e <_ZN11Redeem_Item11CRedeemItemD1Ev>  ; Redeem_Item::CRedeemItem::~CRedeemItem()
085f7101 +0x11:  mov    0x8(%ebp),%eax
085f7104 +0x14:  mov    %eax,(%esp)
085f7107 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f710c +0x1c:  leave
085f710d +0x1d:  ret
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::~CRedeemItem @ 0x85f70f0

/* Redeem_Item::CRedeemItem::~CRedeemItem() */

void __thiscall Redeem_Item::CRedeemItem::~CRedeemItem(CRedeemItem *this)

{
  ~CRedeemItem(this);
  operator_delete(this);
  return;
}
```
