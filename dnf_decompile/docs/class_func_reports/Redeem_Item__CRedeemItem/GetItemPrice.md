# GetItemPrice

`_ZN11Redeem_Item11CRedeemItem12GetItemPriceEi`

`Redeem_Item::CRedeemItem::GetItemPrice(int)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f7386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7386  _ZN11Redeem_Item11CRedeemItem12GetItemPriceEi
#           Redeem_Item::CRedeemItem::GetItemPrice(int)
# range [0x085f7386, 0x085f73ed]
085f7386 +0x00:  push   %ebp
085f7387 +0x01:  mov    %esp,%ebp
085f7389 +0x03:  sub    $0x28,%esp
085f738c +0x06:  lea    -0x10(%ebp),%eax
085f738f +0x09:  mov    0xc(%ebp),%edx
085f7392 +0x0c:  mov    %edx,0x8(%esp)
085f7396 +0x10:  mov    0x8(%ebp),%edx
085f7399 +0x13:  mov    %edx,0x4(%esp)
085f739d +0x17:  mov    %eax,(%esp)
085f73a0 +0x1a:  call   085f710e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi>  ; Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const
085f73a5 +0x1f:  sub    $0x4,%esp
085f73a8 +0x22:  mov    0x8(%ebp),%eax
085f73ab +0x25:  lea    0x8(%eax),%edx
085f73ae +0x28:  lea    -0xc(%ebp),%eax
085f73b1 +0x2b:  mov    %edx,0x4(%esp)
085f73b5 +0x2f:  mov    %eax,(%esp)
085f73b8 +0x32:  call   085f7e86 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2c2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2c2
085f73bd +0x37:  sub    $0x4,%esp
085f73c0 +0x3a:  lea    -0x10(%ebp),%eax
085f73c3 +0x3d:  mov    %eax,0x4(%esp)
085f73c7 +0x41:  lea    -0xc(%ebp),%eax
085f73ca +0x44:  mov    %eax,(%esp)
085f73cd +0x47:  call   085f7f03 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x33f>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x33f
085f73d2 +0x4c:  test   %al,%al
085f73d4 +0x4e:  je     085f73dd <+0x57>
085f73d6 +0x50:  mov    $0xffffffff,%eax
085f73db +0x55:  jmp    085f73eb <+0x65>
085f73dd +0x57:  lea    -0x10(%ebp),%eax
085f73e0 +0x5a:  mov    %eax,(%esp)
085f73e3 +0x5d:  call   085f7f18 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x354>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x354
085f73e8 +0x62:  mov    0x40(%eax),%eax
085f73eb +0x65:  leave
085f73ec +0x66:  ret
085f73ed +0x67:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::GetItemPrice @ 0x85f7386

/* Redeem_Item::CRedeemItem::GetItemPrice(int) */

undefined4 Redeem_Item::CRedeemItem::GetItemPrice(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  _List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_14 [4];
  _List_iterator local_10 [12];
  
  _CheckVaildIndex_N_GetIter((int)local_14);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::end();
  bVar1 = std::operator==(local_10,local_14);
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->
                      (local_14);
    uVar2 = *(undefined4 *)(iVar3 + 0x40);
  }
  return uVar2;
}
```
