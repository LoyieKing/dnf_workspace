# ResetCraneItemNeedMaterial

`_ZN9GameWorld26ResetCraneItemNeedMaterialEi`

`GameWorld::ResetCraneItemNeedMaterial(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d13ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d13ba  _ZN9GameWorld26ResetCraneItemNeedMaterialEi
#           GameWorld::ResetCraneItemNeedMaterial(int)
# range [0x086d13ba, 0x086d147f]
086d13ba +0x00:  push   %ebp
086d13bb +0x01:  mov    %esp,%ebp
086d13bd +0x03:  sub    $0x28,%esp
086d13c0 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086d13c5 +0x0b:  mov    %eax,(%esp)
086d13c8 +0x0e:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
086d13cd +0x13:  mov    0xc(%ebp),%edx
086d13d0 +0x16:  mov    %edx,0x4(%esp)
086d13d4 +0x1a:  mov    %eax,(%esp)
086d13d7 +0x1d:  call   080ebebc <_ZN20CraneMinigameManager27updateCraneItemNeedMaterialEi>  ; CraneMinigameManager::updateCraneItemNeedMaterial(int)
086d13dc +0x22:  mov    0x8(%ebp),%eax
086d13df +0x25:  lea    0x134(%eax),%edx
086d13e5 +0x2b:  lea    -0x14(%ebp),%eax
086d13e8 +0x2e:  mov    %edx,0x4(%esp)
086d13ec +0x32:  mov    %eax,(%esp)
086d13ef +0x35:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086d13f4 +0x3a:  sub    $0x4,%esp
086d13f7 +0x3d:  jmp    086d1449 <+0x8f>
086d13f9 +0x3f:  lea    -0x14(%ebp),%eax
086d13fc +0x42:  mov    %eax,(%esp)
086d13ff +0x45:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086d1404 +0x4a:  mov    0x4(%eax),%eax
086d1407 +0x4d:  mov    %eax,-0xc(%ebp)
086d140a +0x50:  mov    -0xc(%ebp),%eax
086d140d +0x53:  mov    %eax,(%esp)
086d1410 +0x56:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086d1415 +0x5b:  cmp    $0x2,%eax
086d1418 +0x5e:  setle  %al
086d141b +0x61:  test   %al,%al
086d141d +0x63:  jne    086d143d <+0x83>
086d141f +0x65:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086d1424 +0x6a:  mov    %eax,(%esp)
086d1427 +0x6d:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
086d142c +0x72:  mov    -0xc(%ebp),%edx
086d142f +0x75:  mov    %edx,0x4(%esp)
086d1433 +0x79:  mov    %eax,(%esp)
086d1436 +0x7c:  call   080ebf2e <_ZN20CraneMinigameManager25SendCraneItemNeedMaterialEP5CUser>  ; CraneMinigameManager::SendCraneItemNeedMaterial(CUser*)
086d143b +0x81:  jmp    086d143e <+0x84>
086d143d +0x83:  nop
086d143e +0x84:  lea    -0x14(%ebp),%eax
086d1441 +0x87:  mov    %eax,(%esp)
086d1444 +0x8a:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086d1449 +0x8f:  mov    0x8(%ebp),%eax
086d144c +0x92:  lea    0x134(%eax),%edx
086d1452 +0x98:  lea    -0x10(%ebp),%eax
086d1455 +0x9b:  mov    %edx,0x4(%esp)
086d1459 +0x9f:  mov    %eax,(%esp)
086d145c +0xa2:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086d1461 +0xa7:  sub    $0x4,%esp
086d1464 +0xaa:  lea    -0x10(%ebp),%eax
086d1467 +0xad:  mov    %eax,0x4(%esp)
086d146b +0xb1:  lea    -0x14(%ebp),%eax
086d146e +0xb4:  mov    %eax,(%esp)
086d1471 +0xb7:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086d1476 +0xbc:  test   %al,%al
086d1478 +0xbe:  jne    086d13f9 <+0x3f>
086d147e +0xc4:  leave
086d147f +0xc5:  ret
```

## 反编译 C

```c
// GameWorld::ResetCraneItemNeedMaterial @ 0x86d13ba

/* GameWorld::ResetCraneItemNeedMaterial(int) */

void __thiscall GameWorld::ResetCraneItemNeedMaterial(GameWorld *this,int param_1)

{
  char cVar1;
  CGameManager *pCVar2;
  CraneMinigameManager *pCVar3;
  int iVar4;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  pCVar2 = (CGameManager *)G_CGameManager();
  pCVar3 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar2);
  CraneMinigameManager::updateCraneItemNeedMaterial(pCVar3,param_1);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18);
    local_10 = *(CUser **)(iVar4 + 4);
    iVar4 = CUser::get_state(local_10);
    if (2 < iVar4) {
      pCVar2 = (CGameManager *)G_CGameManager();
      pCVar3 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar2);
      CraneMinigameManager::SendCraneItemNeedMaterial(pCVar3,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18);
  }
  return;
}
```
