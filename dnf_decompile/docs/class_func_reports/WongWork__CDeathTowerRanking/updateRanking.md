# updateRanking

`_ZN8WongWork18CDeathTowerRanking13updateRankingEjjj`

`WongWork::CDeathTowerRanking::updateRanking(unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x084684ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084684ce  _ZN8WongWork18CDeathTowerRanking13updateRankingEjjj
#           WongWork::CDeathTowerRanking::updateRanking(unsigned int, unsigned int, unsigned int)
# range [0x084684ce, 0x08468551]
084684ce +0x00:  push   %ebp
084684cf +0x01:  mov    %esp,%ebp
084684d1 +0x03:  sub    $0x38,%esp
084684d4 +0x06:  mov    0xc(%ebp),%eax
084684d7 +0x09:  mov    %eax,0x4(%esp)
084684db +0x0d:  mov    0x8(%ebp),%eax
084684de +0x10:  mov    %eax,(%esp)
084684e1 +0x13:  call   08469d90 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x473>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x473
084684e6 +0x18:  mov    %eax,-0xc(%ebp)
084684e9 +0x1b:  lea    -0x14(%ebp),%eax
084684ec +0x1e:  lea    0x14(%ebp),%edx
084684ef +0x21:  mov    %edx,0x8(%esp)
084684f3 +0x25:  lea    0x10(%ebp),%edx
084684f6 +0x28:  mov    %edx,0x4(%esp)
084684fa +0x2c:  mov    %eax,(%esp)
084684fd +0x2f:  call   08395a64 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25504>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25504
08468502 +0x34:  sub    $0x4,%esp
08468505 +0x37:  lea    -0x14(%ebp),%eax
08468508 +0x3a:  mov    %eax,0x4(%esp)
0846850c +0x3e:  lea    -0x1c(%ebp),%eax
0846850f +0x41:  mov    %eax,(%esp)
08468512 +0x44:  call   08395aa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25542>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25542
08468517 +0x49:  lea    -0x28(%ebp),%eax
0846851a +0x4c:  lea    -0x1c(%ebp),%edx
0846851d +0x4f:  mov    %edx,0x8(%esp)
08468521 +0x53:  mov    -0xc(%ebp),%edx
08468524 +0x56:  mov    %edx,0x4(%esp)
08468528 +0x5a:  mov    %eax,(%esp)
0846852b +0x5d:  call   08469fc4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x6a7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x6a7
08468530 +0x62:  sub    $0x4,%esp
08468533 +0x65:  movzbl -0x20(%ebp),%eax
08468537 +0x69:  xor    $0x1,%eax
0846853a +0x6c:  test   %al,%al
0846853c +0x6e:  je     0846854f <+0x81>
0846853e +0x70:  lea    -0x28(%ebp),%eax
08468541 +0x73:  mov    %eax,(%esp)
08468544 +0x76:  call   08469ff0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x6d3>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x6d3
08468549 +0x7b:  mov    0x14(%ebp),%edx
0846854c +0x7e:  mov    %edx,0x4(%eax)
0846854f +0x81:  leave
08468550 +0x82:  ret
08468551 +0x83:  nop
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::updateRanking @ 0x84684ce

/* WongWork::CDeathTowerRanking::updateRanking(unsigned int, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTowerRanking::updateRanking
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  local_2c [8];
  char local_24;
  pair<unsigned_int_const,unsigned_int> local_20 [8];
  uint local_18 [2];
  pair *local_10;
  
  local_10 = (pair *)_getRankingTable(this,param_1);
  std::make_pair<unsigned_int&,unsigned_int&>(local_18,&param_2);
  std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
            (local_20,(pair *)local_18);
  __gnu_cxx::
  hash_map<unsigned_int,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
  ::insert(local_2c,local_10);
  if (local_24 != '\x01') {
    iVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
            ::operator->((_Hashtable_iterator<std::pair<unsigned_int_const,unsigned_int>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,unsigned_int>>,std::equal_to<unsigned_int>,std::allocator<unsigned_int>>
                          *)local_2c);
    *(uint *)(iVar1 + 4) = param_3;
  }
  return;
}
```
