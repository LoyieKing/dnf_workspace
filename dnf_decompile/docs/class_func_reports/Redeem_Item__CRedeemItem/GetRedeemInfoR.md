# GetRedeemInfoR

`_ZNK11Redeem_Item11CRedeemItem14GetRedeemInfoREi`

`Redeem_Item::CRedeemItem::GetRedeemInfoR(int) const`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f7668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f7668  _ZNK11Redeem_Item11CRedeemItem14GetRedeemInfoREi
#           Redeem_Item::CRedeemItem::GetRedeemInfoR(int) const
# range [0x085f7668, 0x085f76ef]
085f7668 +0x00:  push   %ebp
085f7669 +0x01:  mov    %esp,%ebp
085f766b +0x03:  push   %ebx
085f766c +0x04:  sub    $0x24,%esp
085f766f +0x07:  mov    0x8(%ebp),%ebx
085f7672 +0x0a:  mov    %ebx,(%esp)
085f7675 +0x0d:  call   0848f876 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x554>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x554
085f767a +0x12:  lea    -0x10(%ebp),%eax
085f767d +0x15:  mov    0x10(%ebp),%edx
085f7680 +0x18:  mov    %edx,0x8(%esp)
085f7684 +0x1c:  mov    0xc(%ebp),%edx
085f7687 +0x1f:  mov    %edx,0x4(%esp)
085f768b +0x23:  mov    %eax,(%esp)
085f768e +0x26:  call   085f710e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi>  ; Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const
085f7693 +0x2b:  sub    $0x4,%esp
085f7696 +0x2e:  mov    0xc(%ebp),%eax
085f7699 +0x31:  lea    0x8(%eax),%edx
085f769c +0x34:  lea    -0xc(%ebp),%eax
085f769f +0x37:  mov    %edx,0x4(%esp)
085f76a3 +0x3b:  mov    %eax,(%esp)
085f76a6 +0x3e:  call   085f7cf0 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x12c>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x12c
085f76ab +0x43:  sub    $0x4,%esp
085f76ae +0x46:  lea    -0xc(%ebp),%eax
085f76b1 +0x49:  mov    %eax,0x4(%esp)
085f76b5 +0x4d:  lea    -0x10(%ebp),%eax
085f76b8 +0x50:  mov    %eax,(%esp)
085f76bb +0x53:  call   085f7f48 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x384>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x384
085f76c0 +0x58:  test   %al,%al
085f76c2 +0x5a:  je     085f76e5 <+0x7d>
085f76c4 +0x5c:  lea    -0x10(%ebp),%eax
085f76c7 +0x5f:  mov    %eax,(%esp)
085f76ca +0x62:  call   085f7f5c <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x398>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x398
085f76cf +0x67:  movl   $0x44,0x8(%esp)
085f76d7 +0x6f:  mov    %eax,0x4(%esp)
085f76db +0x73:  mov    %ebx,(%esp)
085f76de +0x76:  call   0807d880 <_init+0x178>
085f76e3 +0x7b:  jmp    085f76e6 <+0x7e>
085f76e5 +0x7d:  nop
085f76e6 +0x7e:  mov    %ebx,%eax
085f76e8 +0x80:  mov    -0x4(%ebp),%ebx
085f76eb +0x83:  leave
085f76ec +0x84:  ret    $0x4
085f76ef +0x87:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::GetRedeemInfoR @ 0x85f7668

/* Redeem_Item::CRedeemItem::GetRedeemInfoR(int) const */

int Redeem_Item::CRedeemItem::GetRedeemInfoR(int param_1)

{
  char cVar1;
  void *__src;
  _List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_14 [4];
  _List_const_iterator local_10 [8];
  
  Inven_Item_Expand_RedeemInfo::Inven_Item_Expand_RedeemInfo
            ((Inven_Item_Expand_RedeemInfo *)param_1);
  _CheckVaildIndex_N_GetIter((int)local_14);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::end();
  cVar1 = std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                    (local_14,local_10);
  if (cVar1 != '\0') {
    __src = (void *)std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*
                              (local_14);
    memmove((void *)param_1,__src,0x44);
  }
  return param_1;
}
```
