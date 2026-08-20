# checkRenewMyRecord

`_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj`

`WongWork::CDeathTowerRanking::checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x084682fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084682fe  _ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj
#           WongWork::CDeathTowerRanking::checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned int)
# range [0x084682fe, 0x084683d9]
084682fe +0x00:  push   %ebp
084682ff +0x01:  mov    %esp,%ebp
08468301 +0x03:  sub    $0xd8,%esp
08468307 +0x09:  mov    0xc(%ebp),%eax
0846830a +0x0c:  mov    %eax,0x4(%esp)
0846830e +0x10:  mov    0x8(%ebp),%eax
08468311 +0x13:  mov    %eax,(%esp)
08468314 +0x16:  call   08469dae <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x491>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x491
08468319 +0x1b:  mov    %eax,-0xc(%ebp)
0846831c +0x1e:  lea    -0x24(%ebp),%eax
0846831f +0x21:  lea    0x10(%ebp),%edx
08468322 +0x24:  mov    %edx,0x8(%esp)
08468326 +0x28:  mov    -0xc(%ebp),%edx
08468329 +0x2b:  mov    %edx,0x4(%esp)
0846832d +0x2f:  mov    %eax,(%esp)
08468330 +0x32:  call   08469f2e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x611>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x611
08468335 +0x37:  sub    $0x4,%esp
08468338 +0x3a:  lea    -0x24(%ebp),%eax
0846833b +0x3d:  mov    %eax,0x4(%esp)
0846833f +0x41:  lea    -0x2c(%ebp),%eax
08468342 +0x44:  mov    %eax,(%esp)
08468345 +0x47:  call   08469f5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x63d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x63d
0846834a +0x4c:  lea    -0x14(%ebp),%eax
0846834d +0x4f:  mov    -0xc(%ebp),%edx
08468350 +0x52:  mov    %edx,0x4(%esp)
08468354 +0x56:  mov    %eax,(%esp)
08468357 +0x59:  call   08469f76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x659>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x659
0846835c +0x5e:  sub    $0x4,%esp
0846835f +0x61:  lea    -0x14(%ebp),%eax
08468362 +0x64:  mov    %eax,0x4(%esp)
08468366 +0x68:  lea    -0x1c(%ebp),%eax
08468369 +0x6b:  mov    %eax,(%esp)
0846836c +0x6e:  call   08469f5a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x63d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x63d
08468371 +0x73:  lea    -0x1c(%ebp),%eax
08468374 +0x76:  mov    %eax,0x4(%esp)
08468378 +0x7a:  lea    -0x2c(%ebp),%eax
0846837b +0x7d:  mov    %eax,(%esp)
0846837e +0x80:  call   08469f9c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x67f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x67f
08468383 +0x85:  test   %al,%al
08468385 +0x87:  je     0846838e <+0x90>
08468387 +0x89:  mov    $0xffffffff,%eax
0846838c +0x8e:  jmp    084683d8 <+0xda>
0846838e +0x90:  lea    -0xc4(%ebp),%eax
08468394 +0x96:  mov    %eax,(%esp)
08468397 +0x99:  call   082a76c0 <_GLOBAL__I__ZN4CLog5this_E+0x3ae7>  ; global constructors keyed to CLog::this_+0x3ae7
0846839c +0x9e:  mov    0x18(%ebp),%eax
0846839f +0xa1:  mov    %eax,-0x38(%ebp)
084683a2 +0xa4:  mov    0x14(%ebp),%eax
084683a5 +0xa7:  mov    %eax,-0x3c(%ebp)
084683a8 +0xaa:  lea    -0x2c(%ebp),%eax
084683ab +0xad:  mov    %eax,(%esp)
084683ae +0xb0:  call   08469fb0 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x693>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x693
084683b3 +0xb5:  add    $0x4,%eax
084683b6 +0xb8:  mov    %eax,0x4(%esp)
084683ba +0xbc:  lea    -0xc4(%ebp),%eax
084683c0 +0xc2:  mov    %eax,(%esp)
084683c3 +0xc5:  call   08469ce4 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x3c7>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x3c7
084683c8 +0xca:  test   %al,%al
084683ca +0xcc:  je     084683d3 <+0xd5>
084683cc +0xce:  mov    $0x1,%eax
084683d1 +0xd3:  jmp    084683d8 <+0xda>
084683d3 +0xd5:  mov    $0x0,%eax
084683d8 +0xda:  leave
084683d9 +0xdb:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::checkRenewMyRecord @ 0x84682fe

/* WongWork::CDeathTowerRanking::checkRenewMyRecord(unsigned int, unsigned int, unsigned int,
   unsigned int) */

undefined4 __thiscall
WongWork::CDeathTowerRanking::checkRenewMyRecord
          (CDeathTowerRanking *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  stBestRecord_t local_c8 [136];
  uint local_40;
  uint local_3c;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_30 [8];
  _Hashtable_iterator local_28 [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_20 [8];
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  local_18 [8];
  undefined4 local_10;
  
  local_10 = _getBestRecordTable(this,param_1);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::find((uint *)local_28);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_30,local_28);
  __gnu_cxx::
  hash_map<unsigned_int,WongWork::CDeathTowerRanking::stBestRecord_t,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::end(local_18);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
  ::_Hashtable_const_iterator(local_20,(_Hashtable_iterator *)local_18);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
          ::operator==(local_30,(_Hashtable_const_iterator *)local_20);
  if (cVar1 == '\0') {
    stBestRecord_t::stBestRecord_t(local_c8);
    local_3c = param_4;
    local_40 = param_3;
    iVar3 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,WongWork::CDeathTowerRanking::stBestRecord_t>>,std::equal_to<unsigned_int>,std::allocator<WongWork::CDeathTowerRanking::stBestRecord_t>>
            ::operator->(local_30);
    cVar1 = stBestRecord_t::operator>(local_c8,(stBestRecord_t *)(iVar3 + 4));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
