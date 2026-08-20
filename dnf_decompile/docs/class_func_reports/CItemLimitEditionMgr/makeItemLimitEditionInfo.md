# makeItemLimitEditionInfo

`_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard`

`CItemLimitEditionMgr::makeItemLimitEditionInfo(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CItemLimitEditionMgr` | `0x085132ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085132ca  _ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard
#           CItemLimitEditionMgr::makeItemLimitEditionInfo(PacketGuard&) const
# range [0x085132ca, 0x08513381]
085132ca +0x00:  push   %ebp
085132cb +0x01:  mov    %esp,%ebp
085132cd +0x03:  sub    $0x38,%esp
085132d0 +0x06:  mov    0xc(%ebp),%eax
085132d3 +0x09:  mov    %eax,(%esp)
085132d6 +0x0c:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085132db +0x11:  mov    %eax,-0x10(%ebp)
085132de +0x14:  mov    0xc(%ebp),%eax
085132e1 +0x17:  movl   $0x0,0x4(%esp)
085132e9 +0x1f:  mov    %eax,(%esp)
085132ec +0x22:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085132f1 +0x27:  movl   $0x0,-0xc(%ebp)
085132f8 +0x2e:  mov    0x8(%ebp),%edx
085132fb +0x31:  lea    -0x18(%ebp),%eax
085132fe +0x34:  mov    %edx,0x4(%esp)
08513302 +0x38:  mov    %eax,(%esp)
08513305 +0x3b:  call   08519176 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x57ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x57ab
0851330a +0x40:  sub    $0x4,%esp
0851330d +0x43:  mov    0x8(%ebp),%edx
08513310 +0x46:  lea    -0x20(%ebp),%eax
08513313 +0x49:  mov    %edx,0x4(%esp)
08513317 +0x4d:  mov    %eax,(%esp)
0851331a +0x50:  call   0817a39e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x41c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x41c
0851331f +0x55:  sub    $0x4,%esp
08513322 +0x58:  jmp    08513350 <+0x86>
08513324 +0x5a:  lea    -0x18(%ebp),%eax
08513327 +0x5d:  mov    %eax,(%esp)
0851332a +0x60:  call   0817a35e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3dc
0851332f +0x65:  mov    0x4(%eax),%eax
08513332 +0x68:  mov    0xc(%ebp),%edx
08513335 +0x6b:  mov    %edx,0x4(%esp)
08513339 +0x6f:  mov    %eax,(%esp)
0851333c +0x72:  call   085130e8 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard>  ; CItemLimitEdition::makeInfoPacket(PacketGuard&) const
08513341 +0x77:  addl   $0x1,-0xc(%ebp)
08513345 +0x7b:  lea    -0x18(%ebp),%eax
08513348 +0x7e:  mov    %eax,(%esp)
0851334b +0x81:  call   08387a42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x174e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x174e2
08513350 +0x86:  lea    -0x20(%ebp),%eax
08513353 +0x89:  mov    %eax,0x4(%esp)
08513357 +0x8d:  lea    -0x18(%ebp),%eax
0851335a +0x90:  mov    %eax,(%esp)
0851335d +0x93:  call   08387a2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x174ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x174ce
08513362 +0x98:  test   %al,%al
08513364 +0x9a:  jne    08513324 <+0x5a>
08513366 +0x9c:  mov    -0xc(%ebp),%edx
08513369 +0x9f:  mov    0xc(%ebp),%eax
0851336c +0xa2:  mov    %edx,0x8(%esp)
08513370 +0xa6:  lea    -0x10(%ebp),%edx
08513373 +0xa9:  mov    %edx,0x4(%esp)
08513377 +0xad:  mov    %eax,(%esp)
0851337a +0xb0:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0851337f +0xb5:  leave
08513380 +0xb6:  ret
08513381 +0xb7:  nop
```

## 反编译 C

```c
// CItemLimitEditionMgr::makeItemLimitEditionInfo @ 0x85132ca

/* CItemLimitEditionMgr::makeItemLimitEditionInfo(PacketGuard&) const */

void __thiscall
CItemLimitEditionMgr::makeItemLimitEditionInfo(CItemLimitEditionMgr *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  local_24 [8];
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  local_1c [8];
  int local_14;
  int local_10;
  
  local_14 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  local_10 = 0;
  __gnu_cxx::
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  ::begin(local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  ::end(local_24);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
            ::operator!=((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                          *)local_1c,(_Hashtable_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
            ::operator->((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                          *)local_1c);
    CItemLimitEdition::makeInfoPacket(*(CItemLimitEdition **)(iVar2 + 4),param_1);
    local_10 = local_10 + 1;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
    ::operator++((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                  *)local_1c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_14,local_10);
  return;
}
```
