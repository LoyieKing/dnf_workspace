# ~CRedeemItem

`_ZN11Redeem_Item11CRedeemItemD1Ev`

`Redeem_Item::CRedeemItem::~CRedeemItem()`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f708e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f708e  _ZN11Redeem_Item11CRedeemItemD1Ev
#           Redeem_Item::CRedeemItem::~CRedeemItem()
# range [0x085f708e, 0x085f70ef]
085f708e +0x00:  push   %ebp
085f708f +0x01:  mov    %esp,%ebp
085f7091 +0x03:  push   %esi
085f7092 +0x04:  push   %ebx
085f7093 +0x05:  sub    $0x10,%esp
085f7096 +0x08:  mov    0x8(%ebp),%eax
085f7099 +0x0b:  movl   $&_ZTVN11Redeem_Item11CRedeemItemE+0x8,(%eax)
085f709f +0x11:  mov    0x8(%ebp),%eax
085f70a2 +0x14:  add    $0x8,%eax
085f70a5 +0x17:  mov    %eax,(%esp)
085f70a8 +0x1a:  call   085f7bf0 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2c>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2c
085f70ad +0x1f:  jmp    085f70ca <+0x3c>
085f70af +0x21:  mov    %edx,%ebx
085f70b1 +0x23:  mov    %eax,%esi
085f70b3 +0x25:  mov    0x8(%ebp),%eax
085f70b6 +0x28:  mov    %eax,(%esp)
085f70b9 +0x2b:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085f70be +0x30:  mov    %esi,%eax
085f70c0 +0x32:  mov    %ebx,%edx
085f70c2 +0x34:  mov    %eax,(%esp)
085f70c5 +0x37:  call   08ae3750 <_Unwind_Resume>
085f70ca +0x3c:  mov    0x8(%ebp),%eax
085f70cd +0x3f:  mov    %eax,(%esp)
085f70d0 +0x42:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085f70d5 +0x47:  mov    $0x0,%eax
085f70da +0x4c:  test   %al,%al
085f70dc +0x4e:  je     085f70e9 <+0x5b>
085f70de +0x50:  mov    0x8(%ebp),%eax
085f70e1 +0x53:  mov    %eax,(%esp)
085f70e4 +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f70e9 +0x5b:  add    $0x10,%esp
085f70ec +0x5e:  pop    %ebx
085f70ed +0x5f:  pop    %esi
085f70ee +0x60:  pop    %ebp
085f70ef +0x61:  ret
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::~CRedeemItem @ 0x85f708e

/* WARNING: Removing unreachable block (ram,0x085f70de) */
/* Redeem_Item::CRedeemItem::~CRedeemItem() */

void __thiscall Redeem_Item::CRedeemItem::~CRedeemItem(CRedeemItem *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cd2368;
                    /* try { // try from 085f70a8 to 085f70ac has its CatchHandler @ 085f70af */
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::~list((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
           *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
