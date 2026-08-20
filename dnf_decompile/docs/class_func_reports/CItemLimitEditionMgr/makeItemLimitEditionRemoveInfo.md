# makeItemLimitEditionRemoveInfo

`_ZNK20CItemLimitEditionMgr30makeItemLimitEditionRemoveInfoER11PacketGuard`

`CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CItemLimitEditionMgr` | `0x08513382` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513382  _ZNK20CItemLimitEditionMgr30makeItemLimitEditionRemoveInfoER11PacketGuard
#           CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(PacketGuard&) const
# range [0x08513382, 0x08513443]
08513382 +0x00:  push   %ebp
08513383 +0x01:  mov    %esp,%ebp
08513385 +0x03:  sub    $0x38,%esp
08513388 +0x06:  mov    0xc(%ebp),%eax
0851338b +0x09:  mov    %eax,(%esp)
0851338e +0x0c:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08513393 +0x11:  mov    %eax,-0x10(%ebp)
08513396 +0x14:  mov    0xc(%ebp),%eax
08513399 +0x17:  movl   $0x0,0x4(%esp)
085133a1 +0x1f:  mov    %eax,(%esp)
085133a4 +0x22:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085133a9 +0x27:  movl   $0x0,-0xc(%ebp)
085133b0 +0x2e:  mov    0x8(%ebp),%edx
085133b3 +0x31:  lea    -0x18(%ebp),%eax
085133b6 +0x34:  mov    %edx,0x4(%esp)
085133ba +0x38:  mov    %eax,(%esp)
085133bd +0x3b:  call   08519176 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x57ab>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x57ab
085133c2 +0x40:  sub    $0x4,%esp
085133c5 +0x43:  mov    0x8(%ebp),%edx
085133c8 +0x46:  lea    -0x20(%ebp),%eax
085133cb +0x49:  mov    %edx,0x4(%esp)
085133cf +0x4d:  mov    %eax,(%esp)
085133d2 +0x50:  call   0817a39e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x41c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x41c
085133d7 +0x55:  sub    $0x4,%esp
085133da +0x58:  jmp    08513412 <+0x90>
085133dc +0x5a:  lea    -0x18(%ebp),%eax
085133df +0x5d:  mov    %eax,(%esp)
085133e2 +0x60:  call   0817a35e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3dc
085133e7 +0x65:  mov    0x4(%eax),%eax
085133ea +0x68:  mov    %eax,(%esp)
085133ed +0x6b:  call   084e971c <_GLOBAL__I__Z7getUserj+0x6ce>  ; global constructors keyed to getUser(unsigned int)+0x6ce
085133f2 +0x70:  mov    %eax,%edx
085133f4 +0x72:  mov    0xc(%ebp),%eax
085133f7 +0x75:  mov    %edx,0x4(%esp)
085133fb +0x79:  mov    %eax,(%esp)
085133fe +0x7c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513403 +0x81:  addl   $0x1,-0xc(%ebp)
08513407 +0x85:  lea    -0x18(%ebp),%eax
0851340a +0x88:  mov    %eax,(%esp)
0851340d +0x8b:  call   08387a42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x174e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x174e2
08513412 +0x90:  lea    -0x20(%ebp),%eax
08513415 +0x93:  mov    %eax,0x4(%esp)
08513419 +0x97:  lea    -0x18(%ebp),%eax
0851341c +0x9a:  mov    %eax,(%esp)
0851341f +0x9d:  call   08387a2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x174ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x174ce
08513424 +0xa2:  test   %al,%al
08513426 +0xa4:  jne    085133dc <+0x5a>
08513428 +0xa6:  mov    -0xc(%ebp),%edx
0851342b +0xa9:  mov    0xc(%ebp),%eax
0851342e +0xac:  mov    %edx,0x8(%esp)
08513432 +0xb0:  lea    -0x10(%ebp),%edx
08513435 +0xb3:  mov    %edx,0x4(%esp)
08513439 +0xb7:  mov    %eax,(%esp)
0851343c +0xba:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08513441 +0xbf:  leave
08513442 +0xc0:  ret
08513443 +0xc1:  nop
```

## 反编译 C

```c
// CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo @ 0x8513382

/* CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(PacketGuard&) const */

void __thiscall
CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo
          (CItemLimitEditionMgr *this,PacketGuard *param_1)

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
    iVar2 = CItemLimitEdition::getIPGNO(*(CItemLimitEdition **)(iVar2 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
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
