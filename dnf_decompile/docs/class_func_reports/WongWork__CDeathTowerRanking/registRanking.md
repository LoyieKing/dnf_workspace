# registRanking

`_ZN8WongWork18CDeathTowerRanking13registRankingEjjj`

`WongWork::CDeathTowerRanking::registRanking(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x084683da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084683da  _ZN8WongWork18CDeathTowerRanking13registRankingEjjj
#           WongWork::CDeathTowerRanking::registRanking(unsigned int, unsigned int, unsigned int)
# range [0x084683da, 0x084684cd]
084683da +0x00:  push   %ebp
084683db +0x01:  mov    %esp,%ebp
084683dd +0x03:  sub    $0x58,%esp
084683e0 +0x06:  mov    0xc(%ebp),%eax
084683e3 +0x09:  mov    %eax,0x4(%esp)
084683e7 +0x0d:  mov    0x8(%ebp),%eax
084683ea +0x10:  mov    %eax,(%esp)
084683ed +0x13:  call   08469d90 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x473>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x473
084683f2 +0x18:  mov    %eax,-0x10(%ebp)
084683f5 +0x1b:  lea    -0x20(%ebp),%eax
084683f8 +0x1e:  lea    0x14(%ebp),%edx
084683fb +0x21:  mov    %edx,0x8(%esp)
084683ff +0x25:  lea    0x10(%ebp),%edx
08468402 +0x28:  mov    %edx,0x4(%esp)
08468406 +0x2c:  mov    %eax,(%esp)
08468409 +0x2f:  call   08395a64 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25504>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25504
0846840e +0x34:  sub    $0x4,%esp
08468411 +0x37:  lea    -0x20(%ebp),%eax
08468414 +0x3a:  mov    %eax,0x4(%esp)
08468418 +0x3e:  lea    -0x28(%ebp),%eax
0846841b +0x41:  mov    %eax,(%esp)
0846841e +0x44:  call   08395aa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25542>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25542
08468423 +0x49:  lea    -0x34(%ebp),%eax
08468426 +0x4c:  lea    -0x28(%ebp),%edx
08468429 +0x4f:  mov    %edx,0x8(%esp)
0846842d +0x53:  mov    -0x10(%ebp),%edx
08468430 +0x56:  mov    %edx,0x4(%esp)
08468434 +0x5a:  mov    %eax,(%esp)
08468437 +0x5d:  call   08469fc4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x6a7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x6a7
0846843c +0x62:  sub    $0x4,%esp
0846843f +0x65:  movzbl -0x2c(%ebp),%eax
08468443 +0x69:  xor    $0x1,%eax
08468446 +0x6c:  test   %al,%al
08468448 +0x6e:  je     0846845b <+0x81>
0846844a +0x70:  lea    -0x34(%ebp),%eax
0846844d +0x73:  mov    %eax,(%esp)
08468450 +0x76:  call   08469ff0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x6d3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x6d3
08468455 +0x7b:  mov    0x14(%ebp),%edx
08468458 +0x7e:  mov    %edx,0x4(%eax)
0846845b +0x81:  mov    0xc(%ebp),%eax
0846845e +0x84:  mov    %eax,0x4(%esp)
08468462 +0x88:  mov    0x8(%ebp),%eax
08468465 +0x8b:  mov    %eax,(%esp)
08468468 +0x8e:  call   08469dae <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x491>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x491
0846846d +0x93:  mov    %eax,-0xc(%ebp)
08468470 +0x96:  lea    -0x3c(%ebp),%eax
08468473 +0x99:  lea    0x10(%ebp),%edx
08468476 +0x9c:  mov    %edx,0x8(%esp)
0846847a +0xa0:  mov    -0xc(%ebp),%edx
0846847d +0xa3:  mov    %edx,0x4(%esp)
08468481 +0xa7:  mov    %eax,(%esp)
08468484 +0xaa:  call   08469f2e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x611>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x611
08468489 +0xaf:  sub    $0x4,%esp
0846848c +0xb2:  lea    -0x18(%ebp),%eax
0846848f +0xb5:  mov    -0xc(%ebp),%edx
08468492 +0xb8:  mov    %edx,0x4(%esp)
08468496 +0xbc:  mov    %eax,(%esp)
08468499 +0xbf:  call   08469f76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x659>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x659
0846849e +0xc4:  sub    $0x4,%esp
084684a1 +0xc7:  lea    -0x18(%ebp),%eax
084684a4 +0xca:  mov    %eax,0x4(%esp)
084684a8 +0xce:  lea    -0x3c(%ebp),%eax
084684ab +0xd1:  mov    %eax,(%esp)
084684ae +0xd4:  call   0846a004 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x6e7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x6e7
084684b3 +0xd9:  test   %al,%al
084684b5 +0xdb:  je     084684cb <+0xf1>
084684b7 +0xdd:  lea    -0x3c(%ebp),%eax
084684ba +0xe0:  mov    %eax,(%esp)
084684bd +0xe3:  call   0846a018 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x6fb>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x6fb
084684c2 +0xe8:  mov    0x14(%ebp),%edx
084684c5 +0xeb:  mov    %edx,0x98(%eax)
084684cb +0xf1:  leave
084684cc +0xf2:  ret
084684cd +0xf3:  nop
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::registRanking @ 0x84683da

/* WongWork::CDeathTowerRanking::registRanking(unsigned int, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::registRanking
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  _Hashtable_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_40 [8];
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_38 [8];
  char local_30;
  pair<unsigned_int_const,unsigned_int> local_2c [8];
  uint local_24 [2];
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_1c [8];
  pair *local_14;
  undefined4 local_10;
  
  local_14 = (pair *)_getRankingTable(this,param_1);
  std::make_pair<unsigned_int&,unsigned_int&>(local_24,&param_2);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_2c,(pair *)local_24);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::insert(local_38,local_14);
  if (local_30 != '\x01') {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            ::operator->((_Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
                          *)local_38);
    *(uint *)(iVar2 + 4) = param_3;
  }
  local_10 = _getBestRecordTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::find((uint *)local_40);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::end(local_1c);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
          ::operator!=(local_40,(_Hashtable_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            ::operator->(local_40);
    *(uint *)(iVar2 + 0x98) = param_3;
  }
  return;
}
```
