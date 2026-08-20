# SendEventJarOutputItemStatistics

`_ZN5CUser32SendEventJarOutputItemStatisticsERKSt6vectorI10Inven_ItemSaIS1_EE`

`CUser::SendEventJarOutputItemStatistics(std::vector<Inven_Item, std::allocator<Inven_Item> > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a782` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a782  _ZN5CUser32SendEventJarOutputItemStatisticsERKSt6vectorI10Inven_ItemSaIS1_EE
#           CUser::SendEventJarOutputItemStatistics(std::vector<Inven_Item, std::allocator<Inven_Item> > const&)
# range [0x0868a782, 0x0868a879]
0868a782 +0x00:  push   %ebp
0868a783 +0x01:  mov    %esp,%ebp
0868a785 +0x03:  push   %ebx
0868a786 +0x04:  sub    $0x34,%esp
0868a789 +0x07:  lea    -0x1c(%ebp),%eax
0868a78c +0x0a:  mov    %eax,(%esp)
0868a78f +0x0d:  call   08694528 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xd7d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xd7d
0868a794 +0x12:  mov    0xc(%ebp),%eax
0868a797 +0x15:  mov    %eax,(%esp)
0868a79a +0x18:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
0868a79f +0x1d:  cmp    $0x2,%eax
0868a7a2 +0x20:  setne  %al
0868a7a5 +0x23:  test   %al,%al
0868a7a7 +0x25:  jne    0868a870 <+0xee>
0868a7ad +0x2b:  movw   $0x0,-0xa(%ebp)
0868a7b3 +0x31:  movl   $0x0,0x4(%esp)
0868a7bb +0x39:  mov    0xc(%ebp),%eax
0868a7be +0x3c:  mov    %eax,(%esp)
0868a7c1 +0x3f:  call   0869c9ae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9203>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9203
0868a7c6 +0x44:  mov    0x2(%eax),%eax
0868a7c9 +0x47:  cmp    $0x28be7b,%eax
0868a7ce +0x4c:  sete   %al
0868a7d1 +0x4f:  test   %al,%al
0868a7d3 +0x51:  je     0868a7dd <+0x5b>
0868a7d5 +0x53:  movw   $0x0,-0xa(%ebp)
0868a7db +0x59:  jmp    0868a805 <+0x83>
0868a7dd +0x5b:  movl   $0x1,0x4(%esp)
0868a7e5 +0x63:  mov    0xc(%ebp),%eax
0868a7e8 +0x66:  mov    %eax,(%esp)
0868a7eb +0x69:  call   0869c9ae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9203>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9203
0868a7f0 +0x6e:  mov    0x2(%eax),%eax
0868a7f3 +0x71:  cmp    $0x28be7b,%eax
0868a7f8 +0x76:  sete   %al
0868a7fb +0x79:  test   %al,%al
0868a7fd +0x7b:  je     0868a873 <+0xf1>
0868a7ff +0x7d:  movw   $0x1,-0xa(%ebp)
0868a805 +0x83:  movzwl -0xa(%ebp),%eax
0868a809 +0x87:  mov    %eax,0x4(%esp)
0868a80d +0x8b:  mov    0xc(%ebp),%eax
0868a810 +0x8e:  mov    %eax,(%esp)
0868a813 +0x91:  call   0869c9ae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9203>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9203
0868a818 +0x96:  mov    0x7(%eax),%eax
0868a81b +0x99:  mov    %eax,-0xe(%ebp)
0868a81e +0x9c:  movzwl -0xa(%ebp),%eax
0868a822 +0xa0:  mov    $0x1,%edx
0868a827 +0xa5:  mov    %edx,%ecx
0868a829 +0xa7:  sub    %eax,%ecx
0868a82b +0xa9:  mov    %ecx,%eax
0868a82d +0xab:  mov    %eax,0x4(%esp)
0868a831 +0xaf:  mov    0xc(%ebp),%eax
0868a834 +0xb2:  mov    %eax,(%esp)
0868a837 +0xb5:  call   0869c9ae <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x9203>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x9203
0868a83c +0xba:  mov    0x2(%eax),%eax
0868a83f +0xbd:  mov    %eax,-0x12(%ebp)
0868a842 +0xc0:  lea    -0x1c(%ebp),%ebx
0868a845 +0xc3:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0868a84a +0xc8:  movl   $0x0,0x4(%esp)
0868a852 +0xd0:  mov    %eax,(%esp)
0868a855 +0xd3:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0868a85a +0xd8:  movl   $0x12,0x8(%esp)
0868a862 +0xe0:  mov    %ebx,0x4(%esp)
0868a866 +0xe4:  mov    %eax,(%esp)
0868a869 +0xe7:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0868a86e +0xec:  jmp    0868a874 <+0xf2>
0868a870 +0xee:  nop
0868a871 +0xef:  jmp    0868a874 <+0xf2>
0868a873 +0xf1:  nop
0868a874 +0xf2:  add    $0x34,%esp
0868a877 +0xf5:  pop    %ebx
0868a878 +0xf6:  pop    %ebp
0868a879 +0xf7:  ret
```

## 反编译 C

```c
// CUser::SendEventJarOutputItemStatistics @ 0x868a782

/* CUser::SendEventJarOutputItemStatistics(std::vector<Inven_Item, std::allocator<Inven_Item> >
   const&) */

void __thiscall CUser::SendEventJarOutputItemStatistics(CUser *this,vector *param_1)

{
  int iVar1;
  CStatisticServerProxy *this_00;
  Packet_Event_UpgradeJar_Output_Statistic_GTS local_20 [10];
  undefined4 local_16;
  undefined4 local_12;
  ushort local_e;
  
  Packet_Event_UpgradeJar_Output_Statistic_GTS::Packet_Event_UpgradeJar_Output_Statistic_GTS
            (local_20);
  iVar1 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_1);
  if (iVar1 == 2) {
    local_e = 0;
    iVar1 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_1,0);
    if (*(int *)(iVar1 + 2) == 0x28be7b) {
      local_e = 0;
    }
    else {
      iVar1 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                        ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_1,1);
      if (*(int *)(iVar1 + 2) != 0x28be7b) {
        return;
      }
      local_e = 1;
    }
    iVar1 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_1,(uint)local_e);
    local_12 = *(undefined4 *)(iVar1 + 7);
    iVar1 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_1,1 - local_e);
    local_16 = *(undefined4 *)(iVar1 + 2);
    this_00 = (CStatisticServerProxy *)
              CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                        (GlobalData::s_statistic_proxy_mgr,0);
    CStatisticServerProxy::SendPacket(this_00,(char *)local_20,0x12);
  }
  return;
}
```
