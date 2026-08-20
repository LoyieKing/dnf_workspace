# _deleteSpecificRedeemItem

`_ZN5CUser25_deleteSpecificRedeemItemERKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::_deleteSpecificRedeemItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867d69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867d69c  _ZN5CUser25_deleteSpecificRedeemItemERKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::_deleteSpecificRedeemItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0867d69c, 0x0867d86d]
0867d69c +0x000:  push   %ebp
0867d69d +0x001:  mov    %esp,%ebp
0867d69f +0x003:  sub    $0x88,%esp
0867d6a5 +0x009:  movl   $0x6,0x4(%esp)
0867d6ad +0x011:  mov    0x8(%ebp),%eax
0867d6b0 +0x014:  mov    %eax,(%esp)
0867d6b3 +0x017:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0867d6b8 +0x01c:  mov    %eax,-0x14(%ebp)
0867d6bb +0x01f:  cmpl   $0x0,-0x14(%ebp)
0867d6bf +0x023:  je     0867d86b <+0x1cf>
0867d6c5 +0x029:  mov    -0x14(%ebp),%eax
0867d6c8 +0x02c:  lea    0x8(%eax),%edx
0867d6cb +0x02f:  lea    -0x1c(%ebp),%eax
0867d6ce +0x032:  mov    %edx,0x4(%esp)
0867d6d2 +0x036:  mov    %eax,(%esp)
0867d6d5 +0x039:  call   085f7ddc <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x218>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x218
0867d6da +0x03e:  sub    $0x4,%esp
0867d6dd +0x041:  mov    -0x14(%ebp),%eax
0867d6e0 +0x044:  lea    0x8(%eax),%edx
0867d6e3 +0x047:  lea    -0x20(%ebp),%eax
0867d6e6 +0x04a:  mov    %edx,0x4(%esp)
0867d6ea +0x04e:  mov    %eax,(%esp)
0867d6ed +0x051:  call   085f7e86 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2c2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2c2
0867d6f2 +0x056:  sub    $0x4,%esp
0867d6f5 +0x059:  lea    -0x24(%ebp),%eax
0867d6f8 +0x05c:  mov    %eax,(%esp)
0867d6fb +0x05f:  call   0869bf2e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8783>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8783
0867d700 +0x064:  lea    -0x61(%ebp),%eax
0867d703 +0x067:  mov    %eax,(%esp)
0867d706 +0x06a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0867d70b +0x06f:  movb   $0x0,-0xd(%ebp)
0867d70f +0x073:  movl   $0x0,-0xc(%ebp)
0867d716 +0x07a:  jmp    0867d837 <+0x19b>
0867d71b +0x07f:  lea    -0x1c(%ebp),%eax
0867d71e +0x082:  mov    %eax,(%esp)
0867d721 +0x085:  call   085f7f3a <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x376>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x376
0867d726 +0x08a:  mov    (%eax),%edx
0867d728 +0x08c:  mov    %edx,-0x61(%ebp)
0867d72b +0x08f:  mov    0x4(%eax),%edx
0867d72e +0x092:  mov    %edx,-0x5d(%ebp)
0867d731 +0x095:  mov    0x8(%eax),%edx
0867d734 +0x098:  mov    %edx,-0x59(%ebp)
0867d737 +0x09b:  mov    0xc(%eax),%edx
0867d73a +0x09e:  mov    %edx,-0x55(%ebp)
0867d73d +0x0a1:  mov    0x10(%eax),%edx
0867d740 +0x0a4:  mov    %edx,-0x51(%ebp)
0867d743 +0x0a7:  mov    0x14(%eax),%edx
0867d746 +0x0aa:  mov    %edx,-0x4d(%ebp)
0867d749 +0x0ad:  mov    0x18(%eax),%edx
0867d74c +0x0b0:  mov    %edx,-0x49(%ebp)
0867d74f +0x0b3:  mov    0x1c(%eax),%edx
0867d752 +0x0b6:  mov    %edx,-0x45(%ebp)
0867d755 +0x0b9:  mov    0x20(%eax),%edx
0867d758 +0x0bc:  mov    %edx,-0x41(%ebp)
0867d75b +0x0bf:  mov    0x24(%eax),%edx
0867d75e +0x0c2:  mov    %edx,-0x3d(%ebp)
0867d761 +0x0c5:  mov    0x28(%eax),%edx
0867d764 +0x0c8:  mov    %edx,-0x39(%ebp)
0867d767 +0x0cb:  mov    0x2c(%eax),%edx
0867d76a +0x0ce:  mov    %edx,-0x35(%ebp)
0867d76d +0x0d1:  mov    0x30(%eax),%edx
0867d770 +0x0d4:  mov    %edx,-0x31(%ebp)
0867d773 +0x0d7:  mov    0x34(%eax),%edx
0867d776 +0x0da:  mov    %edx,-0x2d(%ebp)
0867d779 +0x0dd:  mov    0x38(%eax),%edx
0867d77c +0x0e0:  mov    %edx,-0x29(%ebp)
0867d77f +0x0e3:  movzbl 0x3c(%eax),%eax
0867d783 +0x0e7:  mov    %al,-0x25(%ebp)
0867d786 +0x0ea:  lea    -0x61(%ebp),%eax
0867d789 +0x0ed:  mov    %eax,(%esp)
0867d78c +0x0f0:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0867d791 +0x0f5:  test   %al,%al
0867d793 +0x0f7:  jne    0867d832 <+0x196>
0867d799 +0x0fd:  lea    -0x61(%ebp),%eax
0867d79c +0x100:  mov    %eax,(%esp)
0867d79f +0x103:  call   0867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>  ; _checkTimeoutItem(Inven_Item const&)
0867d7a4 +0x108:  test   %al,%al
0867d7a6 +0x10a:  jne    0867d7c6 <+0x12a>
0867d7a8 +0x10c:  mov    -0x5f(%ebp),%eax
0867d7ab +0x10f:  mov    0xc(%ebp),%edx
0867d7ae +0x112:  mov    %edx,0x8(%esp)
0867d7b2 +0x116:  mov    %eax,0x4(%esp)
0867d7b6 +0x11a:  mov    0x8(%ebp),%eax
0867d7b9 +0x11d:  mov    %eax,(%esp)
0867d7bc +0x120:  call   0867cf0c <_ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867d7c1 +0x125:  cmp    $0xffffffff,%eax
0867d7c4 +0x128:  je     0867d7cd <+0x131>
0867d7c6 +0x12a:  mov    $0x1,%eax
0867d7cb +0x12f:  jmp    0867d7d2 <+0x136>
0867d7cd +0x131:  mov    $0x0,%eax
0867d7d2 +0x136:  test   %al,%al
0867d7d4 +0x138:  je     0867d825 <+0x189>
0867d7d6 +0x13a:  lea    -0x6c(%ebp),%eax
0867d7d9 +0x13d:  movl   $0x0,0x8(%esp)
0867d7e1 +0x145:  lea    -0x1c(%ebp),%edx
0867d7e4 +0x148:  mov    %edx,0x4(%esp)
0867d7e8 +0x14c:  mov    %eax,(%esp)
0867d7eb +0x14f:  call   0869bf3c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8791>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8791
0867d7f0 +0x154:  sub    $0x4,%esp
0867d7f3 +0x157:  mov    -0x6c(%ebp),%eax
0867d7f6 +0x15a:  mov    %eax,-0x24(%ebp)
0867d7f9 +0x15d:  mov    -0x14(%ebp),%eax
0867d7fc +0x160:  lea    0x8(%eax),%ecx
0867d7ff +0x163:  lea    -0x18(%ebp),%eax
0867d802 +0x166:  mov    -0x24(%ebp),%edx
0867d805 +0x169:  mov    %edx,0x8(%esp)
0867d809 +0x16d:  mov    %ecx,0x4(%esp)
0867d80d +0x171:  mov    %eax,(%esp)
0867d810 +0x174:  call   085f7ecc <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x308>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x308
0867d815 +0x179:  sub    $0x4,%esp
0867d818 +0x17c:  mov    -0x14(%ebp),%eax
0867d81b +0x17f:  mov    %eax,(%esp)
0867d81e +0x182:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0867d823 +0x187:  jmp    0867d833 <+0x197>
0867d825 +0x189:  lea    -0x1c(%ebp),%eax
0867d828 +0x18c:  mov    %eax,(%esp)
0867d82b +0x18f:  call   085f7f26 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x362>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x362
0867d830 +0x194:  jmp    0867d833 <+0x197>
0867d832 +0x196:  nop
0867d833 +0x197:  addl   $0x1,-0xc(%ebp)
0867d837 +0x19b:  lea    -0x20(%ebp),%eax
0867d83a +0x19e:  mov    %eax,0x4(%esp)
0867d83e +0x1a2:  lea    -0x1c(%ebp),%eax
0867d841 +0x1a5:  mov    %eax,(%esp)
0867d844 +0x1a8:  call   085f7eaa <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x2e6>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x2e6
0867d849 +0x1ad:  test   %al,%al
0867d84b +0x1af:  je     0867d85c <+0x1c0>
0867d84d +0x1b1:  mov    -0xc(%ebp),%eax
0867d850 +0x1b4:  cmp    $0x14,%eax
0867d853 +0x1b7:  ja     0867d85c <+0x1c0>
0867d855 +0x1b9:  mov    $0x1,%eax
0867d85a +0x1be:  jmp    0867d861 <+0x1c5>
0867d85c +0x1c0:  mov    $0x0,%eax
0867d861 +0x1c5:  test   %al,%al
0867d863 +0x1c7:  jne    0867d71b <+0x7f>
0867d869 +0x1cd:  jmp    0867d86c <+0x1d0>
0867d86b +0x1cf:  nop
0867d86c +0x1d0:  leave
0867d86d +0x1d1:  ret
```

## 反编译 C

```c
// CUser::_deleteSpecificRedeemItem @ 0x867d69c

/* CUser::_deleteSpecificRedeemItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

void CUser::_deleteSpecificRedeemItem(vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_70 [2];
  undefined2 local_65;
  undefined2 uStack_63;
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined1 local_29;
  undefined4 local_28;
  _List_iterator local_24 [4];
  _List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_20 [4];
  undefined1 local_1c [4];
  CData *local_18;
  undefined1 local_11;
  uint local_10;
  
  local_18 = (CData *)GetCharacExpandData((CUser *)param_1,6);
  if (local_18 != (CData *)0x0) {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::begin();
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::end();
    std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::_List_iterator
              ((_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)&local_28);
    Inven_Item::Inven_Item((Inven_Item *)&local_65);
    local_11 = 0;
    local_10 = 0;
    while( true ) {
      cVar2 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_20,local_24);
      if ((cVar2 == '\0') || (0x14 < local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      puVar3 = (undefined4 *)
               std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->(local_20);
      local_65 = (undefined2)*puVar3;
      uStack_63 = (undefined2)((uint)*puVar3 >> 0x10);
      local_61 = (undefined2)puVar3[1];
      uStack_5f = (undefined2)((uint)puVar3[1] >> 0x10);
      local_5d = puVar3[2];
      local_59 = puVar3[3];
      local_55 = puVar3[4];
      local_51 = puVar3[5];
      local_4d = puVar3[6];
      local_49 = puVar3[7];
      local_45 = puVar3[8];
      local_41 = puVar3[9];
      local_3d = puVar3[10];
      local_39 = puVar3[0xb];
      local_35 = puVar3[0xc];
      local_31 = puVar3[0xd];
      local_2d = puVar3[0xe];
      local_29 = *(undefined1 *)(puVar3 + 0xf);
      cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_65);
      if (cVar2 == '\0') {
        cVar2 = _checkTimeoutItem((Inven_Item *)&local_65);
        if ((cVar2 == '\0') &&
           (iVar4 = _isMatchedItem((int)param_1,(vector *)CONCAT22(local_61,uStack_63)), iVar4 == -1
           )) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++
                    ((_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)local_70,
                     (int)local_20);
          local_28 = local_70[0];
          std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::erase(local_1c,local_18 + 8,local_70[0]);
          charac_expand::CData::alter(local_18);
        }
        else {
          std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_20);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}
```
