# DungeonPermission

`_ZN6CParty17DungeonPermissionEi`

`CParty::DungeonPermission(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b12f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b12f8  _ZN6CParty17DungeonPermissionEi
#           CParty::DungeonPermission(int)
# range [0x085b12f8, 0x085b15df]
085b12f8 +0x000:  push   %ebp
085b12f9 +0x001:  mov    %esp,%ebp
085b12fb +0x003:  push   %esi
085b12fc +0x004:  push   %ebx
085b12fd +0x005:  sub    $0x40,%esp
085b1300 +0x008:  mov    0x8(%ebp),%eax
085b1303 +0x00b:  mov    0xcb8(%eax),%ebx
085b1309 +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b130e +0x016:  mov    %ebx,0x4(%esp)
085b1312 +0x01a:  mov    %eax,(%esp)
085b1315 +0x01d:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
085b131a +0x022:  mov    %eax,-0x18(%ebp)
085b131d +0x025:  cmpl   $0x0,-0x18(%ebp)
085b1321 +0x029:  je     085b15d5 <+0x2dd>
085b1327 +0x02f:  mov    -0x18(%ebp),%eax
085b132a +0x032:  mov    %eax,(%esp)
085b132d +0x035:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085b1332 +0x03a:  mov    %eax,-0x14(%ebp)
085b1335 +0x03d:  movl   $0x0,-0xc(%ebp)
085b133c +0x044:  jmp    085b15c4 <+0x2cc>
085b1341 +0x049:  movb   $0x0,-0xd(%ebp)
085b1345 +0x04d:  mov    -0xc(%ebp),%eax
085b1348 +0x050:  mov    %eax,0x4(%esp)
085b134c +0x054:  mov    0x8(%ebp),%eax
085b134f +0x057:  mov    %eax,(%esp)
085b1352 +0x05a:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b1357 +0x05f:  xor    $0x1,%eax
085b135a +0x062:  test   %al,%al
085b135c +0x064:  jne    085b15bc <+0x2c4>
085b1362 +0x06a:  mov    -0xc(%ebp),%edx
085b1365 +0x06d:  mov    0x8(%ebp),%ecx
085b1368 +0x070:  mov    %edx,%eax
085b136a +0x072:  add    %eax,%eax
085b136c +0x074:  add    %edx,%eax
085b136e +0x076:  shl    $0x3,%eax
085b1371 +0x079:  lea    (%ecx,%eax,1),%eax
085b1374 +0x07c:  add    $0x78,%eax
085b1377 +0x07f:  mov    (%eax),%eax
085b1379 +0x081:  mov    %eax,(%esp)
085b137c +0x084:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085b1381 +0x089:  cmp    -0x14(%ebp),%eax
085b1384 +0x08c:  setl   %al
085b1387 +0x08f:  test   %al,%al
085b1389 +0x091:  jne    085b15bf <+0x2c7>
085b138f +0x097:  mov    0x8(%ebp),%eax
085b1392 +0x09a:  add    $0xb24,%eax
085b1397 +0x09f:  mov    %eax,(%esp)
085b139a +0x0a2:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b139f +0x0a7:  cmp    $0x1,%eax
085b13a2 +0x0aa:  je     085b13f1 <+0xf9>
085b13a4 +0x0ac:  cmp    $0x2,%eax
085b13a7 +0x0af:  je     085b144a <+0x152>
085b13ad +0x0b5:  test   %eax,%eax
085b13af +0x0b7:  jne    085b14dc <+0x1e4>
085b13b5 +0x0bd:  mov    0x8(%ebp),%eax
085b13b8 +0x0c0:  mov    0xcb8(%eax),%ecx
085b13be +0x0c6:  mov    -0xc(%ebp),%edx
085b13c1 +0x0c9:  mov    0x8(%ebp),%ebx
085b13c4 +0x0cc:  mov    %edx,%eax
085b13c6 +0x0ce:  add    %eax,%eax
085b13c8 +0x0d0:  add    %edx,%eax
085b13ca +0x0d2:  shl    $0x3,%eax
085b13cd +0x0d5:  lea    (%ebx,%eax,1),%eax
085b13d0 +0x0d8:  add    $0x78,%eax
085b13d3 +0x0db:  mov    (%eax),%eax
085b13d5 +0x0dd:  movl   $0x1,0x8(%esp)
085b13dd +0x0e5:  mov    %ecx,0x4(%esp)
085b13e1 +0x0e9:  mov    %eax,(%esp)
085b13e4 +0x0ec:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
085b13e9 +0x0f1:  mov    %al,-0xd(%ebp)
085b13ec +0x0f4:  jmp    085b14dc <+0x1e4>
085b13f1 +0x0f9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b13f6 +0x0fe:  movzwl 0x5130(%eax),%eax
085b13fd +0x105:  movzwl %ax,%eax
085b1400 +0x108:  cmp    0xc(%ebp),%eax
085b1403 +0x10b:  setle  %al
085b1406 +0x10e:  test   %al,%al
085b1408 +0x110:  je     085b14d8 <+0x1e0>
085b140e +0x116:  mov    0x8(%ebp),%eax
085b1411 +0x119:  mov    0xcb8(%eax),%ecx
085b1417 +0x11f:  mov    -0xc(%ebp),%edx
085b141a +0x122:  mov    0x8(%ebp),%ebx
085b141d +0x125:  mov    %edx,%eax
085b141f +0x127:  add    %eax,%eax
085b1421 +0x129:  add    %edx,%eax
085b1423 +0x12b:  shl    $0x3,%eax
085b1426 +0x12e:  lea    (%ebx,%eax,1),%eax
085b1429 +0x131:  add    $0x78,%eax
085b142c +0x134:  mov    (%eax),%eax
085b142e +0x136:  movl   $0x2,0x8(%esp)
085b1436 +0x13e:  mov    %ecx,0x4(%esp)
085b143a +0x142:  mov    %eax,(%esp)
085b143d +0x145:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
085b1442 +0x14a:  mov    %al,-0xd(%ebp)
085b1445 +0x14d:  jmp    085b14dc <+0x1e4>
085b144a +0x152:  mov    -0x18(%ebp),%eax
085b144d +0x155:  mov    %eax,(%esp)
085b1450 +0x158:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085b1455 +0x15d:  mov    %eax,-0x20(%ebp)
085b1458 +0x160:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b145d +0x165:  mov    %eax,(%esp)
085b1460 +0x168:  call   08365edc <_ZNK12CDataManager22getUltimateDungeonListEv>  ; CDataManager::getUltimateDungeonList() const
085b1465 +0x16d:  lea    -0x24(%ebp),%edx
085b1468 +0x170:  lea    -0x20(%ebp),%ecx
085b146b +0x173:  mov    %ecx,0x8(%esp)
085b146f +0x177:  mov    %eax,0x4(%esp)
085b1473 +0x17b:  mov    %edx,(%esp)
085b1476 +0x17e:  call   080da46a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x607>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x607
085b147b +0x183:  sub    $0x4,%esp
085b147e +0x186:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b1483 +0x18b:  mov    %eax,(%esp)
085b1486 +0x18e:  call   08365edc <_ZNK12CDataManager22getUltimateDungeonListEv>  ; CDataManager::getUltimateDungeonList() const
085b148b +0x193:  lea    -0x1c(%ebp),%edx
085b148e +0x196:  mov    %eax,0x4(%esp)
085b1492 +0x19a:  mov    %edx,(%esp)
085b1495 +0x19d:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
085b149a +0x1a2:  sub    $0x4,%esp
085b149d +0x1a5:  lea    -0x1c(%ebp),%eax
085b14a0 +0x1a8:  mov    %eax,0x4(%esp)
085b14a4 +0x1ac:  lea    -0x24(%ebp),%eax
085b14a7 +0x1af:  mov    %eax,(%esp)
085b14aa +0x1b2:  call   080da5b2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x74f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x74f
085b14af +0x1b7:  test   %al,%al
085b14b1 +0x1b9:  jne    085b14db <+0x1e3>
085b14b3 +0x1bb:  mov    -0xc(%ebp),%eax
085b14b6 +0x1be:  mov    %eax,0xc(%esp)
085b14ba +0x1c2:  mov    0xc(%ebp),%eax
085b14bd +0x1c5:  mov    %eax,0x8(%esp)
085b14c1 +0x1c9:  mov    -0x18(%ebp),%eax
085b14c4 +0x1cc:  mov    %eax,0x4(%esp)
085b14c8 +0x1d0:  mov    0x8(%ebp),%eax
085b14cb +0x1d3:  mov    %eax,(%esp)
085b14ce +0x1d6:  call   085bddfc <_ZN6CParty15addDungeonClearEPK8CDungeonii>  ; CParty::addDungeonClear(CDungeon const*, int, int)
085b14d3 +0x1db:  mov    %al,-0xd(%ebp)
085b14d6 +0x1de:  jmp    085b14dc <+0x1e4>
085b14d8 +0x1e0:  nop
085b14d9 +0x1e1:  jmp    085b14dc <+0x1e4>
085b14db +0x1e3:  nop
085b14dc +0x1e4:  cmpb   $0x0,-0xd(%ebp)
085b14e0 +0x1e8:  je     085b15c0 <+0x2c8>
085b14e6 +0x1ee:  lea    -0x30(%ebp),%eax
085b14e9 +0x1f1:  mov    %eax,(%esp)
085b14ec +0x1f4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b14f1 +0x1f9:  movl   $0x5,0x8(%esp)
085b14f9 +0x201:  movl   $0x0,0x4(%esp)
085b1501 +0x209:  lea    -0x30(%ebp),%eax
085b1504 +0x20c:  mov    %eax,(%esp)
085b1507 +0x20f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b150c +0x214:  movl   $0x1,0x4(%esp)
085b1514 +0x21c:  lea    -0x30(%ebp),%eax
085b1517 +0x21f:  mov    %eax,(%esp)
085b151a +0x222:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b151f +0x227:  mov    0x8(%ebp),%eax
085b1522 +0x22a:  mov    0xcb8(%eax),%eax
085b1528 +0x230:  mov    %eax,0x4(%esp)
085b152c +0x234:  lea    -0x30(%ebp),%eax
085b152f +0x237:  mov    %eax,(%esp)
085b1532 +0x23a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b1537 +0x23f:  mov    0x8(%ebp),%eax
085b153a +0x242:  add    $0xb24,%eax
085b153f +0x247:  mov    %eax,(%esp)
085b1542 +0x24a:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b1547 +0x24f:  add    $0x1,%eax
085b154a +0x252:  mov    %eax,0x4(%esp)
085b154e +0x256:  lea    -0x30(%ebp),%eax
085b1551 +0x259:  mov    %eax,(%esp)
085b1554 +0x25c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b1559 +0x261:  movl   $0x1,0x4(%esp)
085b1561 +0x269:  lea    -0x30(%ebp),%eax
085b1564 +0x26c:  mov    %eax,(%esp)
085b1567 +0x26f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b156c +0x274:  mov    -0xc(%ebp),%edx
085b156f +0x277:  mov    0x8(%ebp),%ecx
085b1572 +0x27a:  mov    %edx,%eax
085b1574 +0x27c:  add    %eax,%eax
085b1576 +0x27e:  add    %edx,%eax
085b1578 +0x280:  shl    $0x3,%eax
085b157b +0x283:  lea    (%ecx,%eax,1),%eax
085b157e +0x286:  add    $0x78,%eax
085b1581 +0x289:  mov    (%eax),%eax
085b1583 +0x28b:  lea    -0x30(%ebp),%edx
085b1586 +0x28e:  mov    %edx,0x4(%esp)
085b158a +0x292:  mov    %eax,(%esp)
085b158d +0x295:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b1592 +0x29a:  jmp    085b15af <+0x2b7>
085b1594 +0x29c:  mov    %edx,%ebx
085b1596 +0x29e:  mov    %eax,%esi
085b1598 +0x2a0:  lea    -0x30(%ebp),%eax
085b159b +0x2a3:  mov    %eax,(%esp)
085b159e +0x2a6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b15a3 +0x2ab:  mov    %esi,%eax
085b15a5 +0x2ad:  mov    %ebx,%edx
085b15a7 +0x2af:  mov    %eax,(%esp)
085b15aa +0x2b2:  call   08ae3750 <_Unwind_Resume>
085b15af +0x2b7:  lea    -0x30(%ebp),%eax
085b15b2 +0x2ba:  mov    %eax,(%esp)
085b15b5 +0x2bd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b15ba +0x2c2:  jmp    085b15c0 <+0x2c8>
085b15bc +0x2c4:  nop
085b15bd +0x2c5:  jmp    085b15c0 <+0x2c8>
085b15bf +0x2c7:  nop
085b15c0 +0x2c8:  addl   $0x1,-0xc(%ebp)
085b15c4 +0x2cc:  cmpl   $0x3,-0xc(%ebp)
085b15c8 +0x2d0:  setle  %al
085b15cb +0x2d3:  test   %al,%al
085b15cd +0x2d5:  jne    085b1341 <+0x49>
085b15d3 +0x2db:  jmp    085b15d6 <+0x2de>
085b15d5 +0x2dd:  nop
085b15d6 +0x2de:  lea    -0x8(%ebp),%esp
085b15d9 +0x2e1:  add    $0x0,%esp
085b15dc +0x2e4:  pop    %ebx
085b15dd +0x2e5:  pop    %esi
085b15de +0x2e6:  pop    %ebp
085b15df +0x2e7:  ret
```

## 反编译 C

```c
// CParty::DungeonPermission @ 0x85b12f8

/* CParty::DungeonPermission(int) */

void __thiscall CParty::DungeonPermission(CParty *this,int param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  PacketGuard local_34 [12];
  _Rb_tree_const_iterator<int> local_28 [4];
  undefined4 local_24;
  set<int,std::less<int>,std::allocator<int>> local_20 [4];
  CDungeon *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_1c = (CDungeon *)CDataManager::find_dungeon(iVar2);
  if (local_1c != (CDungeon *)0x0) {
    local_18 = CDungeon::get_min_level(local_1c);
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      local_11 = '\0';
      cVar1 = _checkValidUser(this,local_10);
      if ((cVar1 == '\x01') &&
         (iVar2 = CUserCharacInfo::get_charac_level
                            (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78)),
         local_18 <= iVar2)) {
        iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
        if (iVar2 == 1) {
          iVar2 = G_CDataManager();
          if ((int)(uint)*(ushort *)(iVar2 + 0x5130) <= param_1) {
            local_11 = CUser::AddDungeonClear
                                 (*(CUser **)(this + local_10 * 0x18 + 0x78),*(int *)(this + 0xcb8),
                                  2);
          }
        }
        else if (iVar2 == 2) {
          local_24 = CDungeon::get_index(local_1c);
          pCVar3 = (CDataManager *)G_CDataManager();
          CDataManager::getUltimateDungeonList(pCVar3);
          std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_28);
          pCVar3 = (CDataManager *)G_CDataManager();
          CDataManager::getUltimateDungeonList(pCVar3);
          std::set<int,std::less<int>,std::allocator<int>>::end(local_20);
          cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                            (local_28,(_Rb_tree_const_iterator *)local_20);
          if (cVar1 == '\0') {
            local_11 = addDungeonClear(this,local_1c,param_1,local_10);
          }
        }
        else if (iVar2 == 0) {
          local_11 = CUser::AddDungeonClear
                               (*(CUser **)(this + local_10 * 0x18 + 0x78),*(int *)(this + 0xcb8),1)
          ;
        }
        if (local_11 != '\0') {
          PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085b1507 to 085b1591 has its CatchHandler @ 085b1594 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,5);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,*(int *)(this + 0xcb8));
          iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,iVar2 + 1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
          CUser::Send(*(CUser **)(this + local_10 * 0x18 + 0x78),local_34);
          PacketGuard::~PacketGuard(local_34);
        }
      }
    }
  }
  return;
}
```
