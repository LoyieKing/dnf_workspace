# ResetAllCoins

`_ZN9GameWorld13ResetAllCoinsEv`

`GameWorld::ResetAllCoins()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ccb22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ccb22  _ZN9GameWorld13ResetAllCoinsEv
#           GameWorld::ResetAllCoins()
# range [0x086ccb22, 0x086ccbf3]
086ccb22 +0x00:  push   %ebp
086ccb23 +0x01:  mov    %esp,%ebp
086ccb25 +0x03:  sub    $0x28,%esp
086ccb28 +0x06:  mov    0x8(%ebp),%eax
086ccb2b +0x09:  lea    0x134(%eax),%edx
086ccb31 +0x0f:  lea    -0x18(%ebp),%eax
086ccb34 +0x12:  mov    %edx,0x4(%esp)
086ccb38 +0x16:  mov    %eax,(%esp)
086ccb3b +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086ccb40 +0x1e:  sub    $0x4,%esp
086ccb43 +0x21:  jmp    086ccbbd <+0x9b>
086ccb45 +0x23:  lea    -0x18(%ebp),%eax
086ccb48 +0x26:  mov    %eax,(%esp)
086ccb4b +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086ccb50 +0x2e:  mov    0x4(%eax),%eax
086ccb53 +0x31:  mov    %eax,-0xc(%ebp)
086ccb56 +0x34:  mov    -0xc(%ebp),%eax
086ccb59 +0x37:  mov    %eax,(%esp)
086ccb5c +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086ccb61 +0x3f:  cmp    $0x2,%eax
086ccb64 +0x42:  setle  %al
086ccb67 +0x45:  test   %al,%al
086ccb69 +0x47:  jne    086ccb9f <+0x7d>
086ccb6b +0x49:  movl   $0x1,0x4(%esp)
086ccb73 +0x51:  mov    -0xc(%ebp),%eax
086ccb76 +0x54:  mov    %eax,(%esp)
086ccb79 +0x57:  call   08657f10 <_ZN5CUser11RecoverCoinEj>  ; CUser::RecoverCoin(unsigned int)
086ccb7e +0x5c:  mov    -0xc(%ebp),%eax
086ccb81 +0x5f:  mov    %eax,(%esp)
086ccb84 +0x62:  call   0822f816 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ec0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ec0
086ccb89 +0x67:  test   %al,%al
086ccb8b +0x69:  sete   %al
086ccb8e +0x6c:  test   %al,%al
086ccb90 +0x6e:  je     086ccba0 <+0x7e>
086ccb92 +0x70:  mov    -0xc(%ebp),%eax
086ccb95 +0x73:  mov    %eax,(%esp)
086ccb98 +0x76:  call   086568fc <_ZN5CUser12SendOpenflagEv>  ; CUser::SendOpenflag()
086ccb9d +0x7b:  jmp    086ccba0 <+0x7e>
086ccb9f +0x7d:  nop
086ccba0 +0x7e:  lea    -0x10(%ebp),%eax
086ccba3 +0x81:  movl   $0x0,0x8(%esp)
086ccbab +0x89:  lea    -0x18(%ebp),%edx
086ccbae +0x8c:  mov    %edx,0x4(%esp)
086ccbb2 +0x90:  mov    %eax,(%esp)
086ccbb5 +0x93:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086ccbba +0x98:  sub    $0x4,%esp
086ccbbd +0x9b:  mov    0x8(%ebp),%eax
086ccbc0 +0x9e:  lea    0x134(%eax),%edx
086ccbc6 +0xa4:  lea    -0x14(%ebp),%eax
086ccbc9 +0xa7:  mov    %edx,0x4(%esp)
086ccbcd +0xab:  mov    %eax,(%esp)
086ccbd0 +0xae:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086ccbd5 +0xb3:  sub    $0x4,%esp
086ccbd8 +0xb6:  lea    -0x14(%ebp),%eax
086ccbdb +0xb9:  mov    %eax,0x4(%esp)
086ccbdf +0xbd:  lea    -0x18(%ebp),%eax
086ccbe2 +0xc0:  mov    %eax,(%esp)
086ccbe5 +0xc3:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086ccbea +0xc8:  test   %al,%al
086ccbec +0xca:  jne    086ccb45 <+0x23>
086ccbf2 +0xd0:  leave
086ccbf3 +0xd1:  ret
```

## 反编译 C

```c
// GameWorld::ResetAllCoins @ 0x86ccb22

/* GameWorld::ResetAllCoins() */

void GameWorld::ResetAllCoins(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
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
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      CUser::RecoverCoin(local_10,1);
      cVar1 = CUserCharacInfo::GetOpencoin((CUserCharacInfo *)local_10);
      if (cVar1 == '\0') {
        CUser::SendOpenflag(local_10);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
