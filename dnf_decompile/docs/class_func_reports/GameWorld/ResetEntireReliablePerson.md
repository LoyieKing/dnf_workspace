# ResetEntireReliablePerson

`_ZN9GameWorld25ResetEntireReliablePersonEv`

`GameWorld::ResetEntireReliablePerson()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ceb08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ceb08  _ZN9GameWorld25ResetEntireReliablePersonEv
#           GameWorld::ResetEntireReliablePerson()
# range [0x086ceb08, 0x086cebdf]
086ceb08 +0x00:  push   %ebp
086ceb09 +0x01:  mov    %esp,%ebp
086ceb0b +0x03:  sub    $0x28,%esp
086ceb0e +0x06:  mov    0x8(%ebp),%eax
086ceb11 +0x09:  lea    0x134(%eax),%edx
086ceb17 +0x0f:  lea    -0x18(%ebp),%eax
086ceb1a +0x12:  mov    %edx,0x4(%esp)
086ceb1e +0x16:  mov    %eax,(%esp)
086ceb21 +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086ceb26 +0x1e:  sub    $0x4,%esp
086ceb29 +0x21:  jmp    086ceba8 <+0xa0>
086ceb2b +0x23:  lea    -0x18(%ebp),%eax
086ceb2e +0x26:  mov    %eax,(%esp)
086ceb31 +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086ceb36 +0x2e:  mov    0x4(%eax),%eax
086ceb39 +0x31:  mov    %eax,-0xc(%ebp)
086ceb3c +0x34:  mov    -0xc(%ebp),%eax
086ceb3f +0x37:  mov    %eax,(%esp)
086ceb42 +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086ceb47 +0x3f:  cmp    $0x2,%eax
086ceb4a +0x42:  setg   %al
086ceb4d +0x45:  test   %al,%al
086ceb4f +0x47:  je     086ceb8b <+0x83>
086ceb51 +0x49:  mov    -0xc(%ebp),%eax
086ceb54 +0x4c:  mov    %eax,(%esp)
086ceb57 +0x4f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086ceb5c +0x54:  test   %eax,%eax
086ceb5e +0x56:  setne  %al
086ceb61 +0x59:  test   %al,%al
086ceb63 +0x5b:  je     086ceb8b <+0x83>
086ceb65 +0x5d:  mov    -0xc(%ebp),%eax
086ceb68 +0x60:  movl   $0x0,0x4(%esp)
086ceb70 +0x68:  mov    %eax,(%esp)
086ceb73 +0x6b:  call   084ec002 <_GLOBAL__I__Z7getUserj+0x2fb4>  ; global constructors keyed to getUser(unsigned int)+0x2fb4
086ceb78 +0x70:  mov    -0xc(%ebp),%eax
086ceb7b +0x73:  movl   $0x0,0x4(%esp)
086ceb83 +0x7b:  mov    %eax,(%esp)
086ceb86 +0x7e:  call   084ec04a <_GLOBAL__I__Z7getUserj+0x2ffc>  ; global constructors keyed to getUser(unsigned int)+0x2ffc
086ceb8b +0x83:  lea    -0x10(%ebp),%eax
086ceb8e +0x86:  movl   $0x0,0x8(%esp)
086ceb96 +0x8e:  lea    -0x18(%ebp),%edx
086ceb99 +0x91:  mov    %edx,0x4(%esp)
086ceb9d +0x95:  mov    %eax,(%esp)
086ceba0 +0x98:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086ceba5 +0x9d:  sub    $0x4,%esp
086ceba8 +0xa0:  mov    0x8(%ebp),%eax
086cebab +0xa3:  lea    0x134(%eax),%edx
086cebb1 +0xa9:  lea    -0x14(%ebp),%eax
086cebb4 +0xac:  mov    %edx,0x4(%esp)
086cebb8 +0xb0:  mov    %eax,(%esp)
086cebbb +0xb3:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cebc0 +0xb8:  sub    $0x4,%esp
086cebc3 +0xbb:  lea    -0x14(%ebp),%eax
086cebc6 +0xbe:  mov    %eax,0x4(%esp)
086cebca +0xc2:  lea    -0x18(%ebp),%eax
086cebcd +0xc5:  mov    %eax,(%esp)
086cebd0 +0xc8:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cebd5 +0xcd:  test   %al,%al
086cebd7 +0xcf:  jne    086ceb2b <+0x23>
086cebdd +0xd5:  leave
086cebde +0xd6:  ret
086cebdf +0xd7:  nop
```

## 反编译 C

```c
// GameWorld::ResetEntireReliablePerson @ 0x86ceb08

/* GameWorld::ResetEntireReliablePerson() */

void GameWorld::ResetEntireReliablePerson(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUserCharacInfo *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUserCharacInfo **)(iVar2 + 4);
    iVar2 = CUser::get_state((CUser *)local_10);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR(local_10);
      if (iVar2 != 0) {
        CUserCharacInfo::setCurCharacTradeGoldDaily(local_10,0);
        CUserCharacInfo::SetOverTradeGoldCount(local_10,0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
