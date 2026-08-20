# RedeemItem

`_ZN11Redeem_Item11CRedeemItem10RedeemItemEi`

`Redeem_Item::CRedeemItem::RedeemItem(int)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f728a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f728a  _ZN11Redeem_Item11CRedeemItem10RedeemItemEi
#           Redeem_Item::CRedeemItem::RedeemItem(int)
# range [0x085f728a, 0x085f7383]
085f728a +0x00:  push   %ebp
085f728b +0x01:  mov    %esp,%ebp
085f728d +0x03:  push   %ebx
085f728e +0x04:  sub    $0x34,%esp
085f7291 +0x07:  mov    0x8(%ebp),%ebx
085f7294 +0x0a:  mov    %ebx,(%esp)
085f7297 +0x0d:  call   0848f876 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x554>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x554
085f729c +0x12:  mov    0xc(%ebp),%eax
085f729f +0x15:  mov    %eax,(%esp)
085f72a2 +0x18:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085f72a7 +0x1d:  lea    -0x18(%ebp),%eax
085f72aa +0x20:  mov    0x10(%ebp),%edx
085f72ad +0x23:  mov    %edx,0x8(%esp)
085f72b1 +0x27:  mov    0xc(%ebp),%edx
085f72b4 +0x2a:  mov    %edx,0x4(%esp)
085f72b8 +0x2e:  mov    %eax,(%esp)
085f72bb +0x31:  call   085f710e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi>  ; Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const
085f72c0 +0x36:  sub    $0x4,%esp
085f72c3 +0x39:  mov    0xc(%ebp),%eax
085f72c6 +0x3c:  lea    0x8(%eax),%edx
085f72c9 +0x3f:  lea    -0x1c(%ebp),%eax
085f72cc +0x42:  mov    %edx,0x4(%esp)
085f72d0 +0x46:  mov    %eax,(%esp)
085f72d3 +0x49:  call   085f7ddc <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x218>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x218
085f72d8 +0x4e:  sub    $0x4,%esp
085f72db +0x51:  lea    -0x1c(%ebp),%eax
085f72de +0x54:  mov    %eax,0x4(%esp)
085f72e2 +0x58:  lea    -0x14(%ebp),%eax
085f72e5 +0x5b:  mov    %eax,(%esp)
085f72e8 +0x5e:  call   085f7e02 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x23e>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x23e
085f72ed +0x63:  mov    -0x18(%ebp),%eax
085f72f0 +0x66:  mov    %eax,0x4(%esp)
085f72f4 +0x6a:  mov    -0x14(%ebp),%eax
085f72f7 +0x6d:  mov    %eax,(%esp)
085f72fa +0x70:  call   085f7e11 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x24d>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x24d
085f72ff +0x75:  mov    %eax,0x4(%esp)
085f7303 +0x79:  lea    -0x1c(%ebp),%eax
085f7306 +0x7c:  mov    %eax,(%esp)
085f7309 +0x7f:  call   085f7e48 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x284>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x284
085f730e +0x84:  mov    0xc(%ebp),%eax
085f7311 +0x87:  lea    0x8(%eax),%edx
085f7314 +0x8a:  lea    -0x10(%ebp),%eax
085f7317 +0x8d:  mov    %edx,0x4(%esp)
085f731b +0x91:  mov    %eax,(%esp)
085f731e +0x94:  call   085f7e86 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2c2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2c2
085f7323 +0x99:  sub    $0x4,%esp
085f7326 +0x9c:  lea    -0x10(%ebp),%eax
085f7329 +0x9f:  mov    %eax,0x4(%esp)
085f732d +0xa3:  lea    -0x1c(%ebp),%eax
085f7330 +0xa6:  mov    %eax,(%esp)
085f7333 +0xa9:  call   085f7eaa <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2e6>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2e6
085f7338 +0xae:  test   %al,%al
085f733a +0xb0:  je     085f737c <+0xf2>
085f733c +0xb2:  lea    -0x1c(%ebp),%eax
085f733f +0xb5:  mov    %eax,(%esp)
085f7342 +0xb8:  call   085f7ebe <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2fa>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2fa
085f7347 +0xbd:  movl   $0x44,0x8(%esp)
085f734f +0xc5:  mov    %eax,0x4(%esp)
085f7353 +0xc9:  mov    %ebx,(%esp)
085f7356 +0xcc:  call   0807d880 <_init+0x178>
085f735b +0xd1:  mov    0xc(%ebp),%eax
085f735e +0xd4:  lea    0x8(%eax),%ecx
085f7361 +0xd7:  lea    -0xc(%ebp),%eax
085f7364 +0xda:  mov    -0x1c(%ebp),%edx
085f7367 +0xdd:  mov    %edx,0x8(%esp)
085f736b +0xe1:  mov    %ecx,0x4(%esp)
085f736f +0xe5:  mov    %eax,(%esp)
085f7372 +0xe8:  call   085f7ecc <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x308>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x308
085f7377 +0xed:  sub    $0x4,%esp
085f737a +0xf0:  jmp    085f737d <+0xf3>
085f737c +0xf2:  nop
085f737d +0xf3:  mov    %ebx,%eax
085f737f +0xf5:  mov    -0x4(%ebp),%ebx
085f7382 +0xf8:  leave
085f7383 +0xf9:  ret    $0x4
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::RedeemItem @ 0x85f728a

/* Redeem_Item::CRedeemItem::RedeemItem(int) */

int Redeem_Item::CRedeemItem::RedeemItem(int param_1)

{
  char cVar1;
  int iVar2;
  void *__src;
  CData *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  _List_iterator local_14 [4];
  undefined1 local_10 [8];
  
  Inven_Item_Expand_RedeemInfo::Inven_Item_Expand_RedeemInfo
            ((Inven_Item_Expand_RedeemInfo *)param_1);
  charac_expand::CData::alter(in_stack_00000008);
  _CheckVaildIndex_N_GetIter((int)&local_1c);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::begin();
  std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::_List_const_iterator
            ((_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)&local_18,
             (_List_iterator *)&local_20);
  iVar2 = std::distance<std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                    (local_18,local_1c,in_stack_0000000c);
  std::advance<std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>,int>
            ((_List_iterator *)&local_20,iVar2);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::end();
  cVar1 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                    ((_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)&local_20,local_14
                    );
  if (cVar1 != '\0') {
    __src = (void *)std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*
                              ((_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)
                               &local_20);
    memmove((void *)param_1,__src,0x44);
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::erase(local_10,in_stack_00000008 + 8,local_20);
  }
  return param_1;
}
```
