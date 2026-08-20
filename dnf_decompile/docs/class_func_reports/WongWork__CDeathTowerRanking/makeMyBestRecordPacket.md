# makeMyBestRecordPacket

`_ZN8WongWork18CDeathTowerRanking22makeMyBestRecordPacketEjjR11PacketGuard`

`WongWork::CDeathTowerRanking::makeMyBestRecordPacket(unsigned int, unsigned int, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x08468b8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08468b8e  _ZN8WongWork18CDeathTowerRanking22makeMyBestRecordPacketEjjR11PacketGuard
#           WongWork::CDeathTowerRanking::makeMyBestRecordPacket(unsigned int, unsigned int, PacketGuard&)
# range [0x08468b8e, 0x08468c67]
08468b8e +0x00:  push   %ebp
08468b8f +0x01:  mov    %esp,%ebp
08468b91 +0x03:  sub    $0x48,%esp
08468b94 +0x06:  mov    0xc(%ebp),%eax
08468b97 +0x09:  mov    %eax,0x4(%esp)
08468b9b +0x0d:  mov    0x8(%ebp),%eax
08468b9e +0x10:  mov    %eax,(%esp)
08468ba1 +0x13:  call   08469dae <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x491>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x491
08468ba6 +0x18:  mov    %eax,-0x10(%ebp)
08468ba9 +0x1b:  lea    -0x28(%ebp),%eax
08468bac +0x1e:  lea    0x10(%ebp),%edx
08468baf +0x21:  mov    %edx,0x8(%esp)
08468bb3 +0x25:  mov    -0x10(%ebp),%edx
08468bb6 +0x28:  mov    %edx,0x4(%esp)
08468bba +0x2c:  mov    %eax,(%esp)
08468bbd +0x2f:  call   08469f2e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x611>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x611
08468bc2 +0x34:  sub    $0x4,%esp
08468bc5 +0x37:  lea    -0x28(%ebp),%eax
08468bc8 +0x3a:  mov    %eax,0x4(%esp)
08468bcc +0x3e:  lea    -0x30(%ebp),%eax
08468bcf +0x41:  mov    %eax,(%esp)
08468bd2 +0x44:  call   08469f5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x63d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x63d
08468bd7 +0x49:  lea    -0x18(%ebp),%eax
08468bda +0x4c:  mov    -0x10(%ebp),%edx
08468bdd +0x4f:  mov    %edx,0x4(%esp)
08468be1 +0x53:  mov    %eax,(%esp)
08468be4 +0x56:  call   08469f76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x659>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x659
08468be9 +0x5b:  sub    $0x4,%esp
08468bec +0x5e:  lea    -0x18(%ebp),%eax
08468bef +0x61:  mov    %eax,0x4(%esp)
08468bf3 +0x65:  lea    -0x20(%ebp),%eax
08468bf6 +0x68:  mov    %eax,(%esp)
08468bf9 +0x6b:  call   08469f5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x63d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x63d
08468bfe +0x70:  lea    -0x20(%ebp),%eax
08468c01 +0x73:  mov    %eax,0x4(%esp)
08468c05 +0x77:  lea    -0x30(%ebp),%eax
08468c08 +0x7a:  mov    %eax,(%esp)
08468c0b +0x7d:  call   08469f9c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x67f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x67f
08468c10 +0x82:  test   %al,%al
08468c12 +0x84:  je     08468c29 <+0x9b>
08468c14 +0x86:  mov    0x14(%ebp),%eax
08468c17 +0x89:  movl   $0x0,0x4(%esp)
08468c1f +0x91:  mov    %eax,(%esp)
08468c22 +0x94:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08468c27 +0x99:  jmp    08468c66 <+0xd8>
08468c29 +0x9b:  mov    0x14(%ebp),%eax
08468c2c +0x9e:  movl   $0x1,0x4(%esp)
08468c34 +0xa6:  mov    %eax,(%esp)
08468c37 +0xa9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08468c3c +0xae:  lea    -0x30(%ebp),%eax
08468c3f +0xb1:  mov    %eax,(%esp)
08468c42 +0xb4:  call   08469fb0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x693>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x693
08468c47 +0xb9:  add    $0x4,%eax
08468c4a +0xbc:  mov    %eax,-0xc(%ebp)
08468c4d +0xbf:  mov    0x14(%ebp),%eax
08468c50 +0xc2:  mov    %eax,0x8(%esp)
08468c54 +0xc6:  mov    -0xc(%ebp),%eax
08468c57 +0xc9:  mov    %eax,0x4(%esp)
08468c5b +0xcd:  mov    0x8(%ebp),%eax
08468c5e +0xd0:  mov    %eax,(%esp)
08468c61 +0xd3:  call   08468cb6 <_ZN8WongWork18CDeathTowerRanking17_makeRecordPacketERKNS0_14stBestRecord_tER11PacketGuard>  ; WongWork::CDeathTowerRanking::_makeRecordPacket(WongWork::CDeathTowerRanking::stBestRecord_t const&, PacketGuard&)
08468c66 +0xd8:  leave
08468c67 +0xd9:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::makeMyBestRecordPacket @ 0x8468b8e

/* WongWork::CDeathTowerRanking::makeMyBestRecordPacket(unsigned int, unsigned int, PacketGuard&) */

void __thiscall
WongWork::CDeathTowerRanking::makeMyBestRecordPacket
          (CDeathTowerRanking *this,uint param_1,uint param_2,PacketGuard *param_3)

{
  char cVar1;
  int iVar2;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_34 [8];
  _Hashtable_iterator local_2c [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_24 [8];
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_1c [8];
  undefined4 local_14;
  stBestRecord_t *local_10;
  
  local_14 = _getBestRecordTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::find((uint *)local_2c);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_34,local_2c);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::end(local_1c);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_24,(_Hashtable_iterator *)local_1c);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
          ::operator==(local_34,(_Hashtable_const_iterator *)local_24);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            ::operator->(local_34);
    local_10 = (stBestRecord_t *)(iVar2 + 4);
    _makeRecordPacket(this,local_10,param_3);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
  }
  return;
}
```
