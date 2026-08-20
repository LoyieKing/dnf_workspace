# CRedeemItem

`_ZN11Redeem_Item11CRedeemItemC1Ev`

`Redeem_Item::CRedeemItem::CRedeemItem()`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f7040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7040  _ZN11Redeem_Item11CRedeemItemC1Ev
#           Redeem_Item::CRedeemItem::CRedeemItem()
# range [0x085f7040, 0x085f708d]
085f7040 +0x00:  push   %ebp
085f7041 +0x01:  mov    %esp,%ebp
085f7043 +0x03:  push   %esi
085f7044 +0x04:  push   %ebx
085f7045 +0x05:  sub    $0x10,%esp
085f7048 +0x08:  mov    0x8(%ebp),%eax
085f704b +0x0b:  mov    %eax,(%esp)
085f704e +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
085f7053 +0x13:  mov    0x8(%ebp),%eax
085f7056 +0x16:  movl   $&_ZTVN11Redeem_Item11CRedeemItemE+0x8,(%eax)
085f705c +0x1c:  mov    0x8(%ebp),%eax
085f705f +0x1f:  add    $0x8,%eax
085f7062 +0x22:  mov    %eax,(%esp)
085f7065 +0x25:  call   085f7c30 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x6c>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x6c
085f706a +0x2a:  jmp    085f7087 <+0x47>
085f706c +0x2c:  mov    %edx,%ebx
085f706e +0x2e:  mov    %eax,%esi
085f7070 +0x30:  mov    0x8(%ebp),%eax
085f7073 +0x33:  mov    %eax,(%esp)
085f7076 +0x36:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085f707b +0x3b:  mov    %esi,%eax
085f707d +0x3d:  mov    %ebx,%edx
085f707f +0x3f:  mov    %eax,(%esp)
085f7082 +0x42:  call   08ae3750 <_Unwind_Resume>
085f7087 +0x47:  add    $0x10,%esp
085f708a +0x4a:  pop    %ebx
085f708b +0x4b:  pop    %esi
085f708c +0x4c:  pop    %ebp
085f708d +0x4d:  ret
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::CRedeemItem @ 0x85f7040

/* Redeem_Item::CRedeemItem::CRedeemItem() */

void __thiscall Redeem_Item::CRedeemItem::CRedeemItem(CRedeemItem *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cd2368;
                    /* try { // try from 085f7065 to 085f7069 has its CatchHandler @ 085f706c */
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::list((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          *)(this + 8));
  return;
}
```
