# StartAction

`_ZN21SeriaRoomAniDecoEvent11StartActionEv`

`SeriaRoomAniDecoEvent::StartAction()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b6a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b6a6  _ZN21SeriaRoomAniDecoEvent11StartActionEv
#           SeriaRoomAniDecoEvent::StartAction()
# range [0x0827b6a6, 0x0827b759]
0827b6a6 +0x00:  push   %ebp
0827b6a7 +0x01:  mov    %esp,%ebp
0827b6a9 +0x03:  sub    $0x28,%esp
0827b6ac +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827b6b1 +0x0b:  lea    0x134(%eax),%edx
0827b6b7 +0x11:  lea    -0x18(%ebp),%eax
0827b6ba +0x14:  mov    %edx,0x4(%esp)
0827b6be +0x18:  mov    %eax,(%esp)
0827b6c1 +0x1b:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
0827b6c6 +0x20:  sub    $0x4,%esp
0827b6c9 +0x23:  jmp    0827b720 <+0x7a>
0827b6cb +0x25:  lea    -0x18(%ebp),%eax
0827b6ce +0x28:  mov    %eax,(%esp)
0827b6d1 +0x2b:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
0827b6d6 +0x30:  mov    0x4(%eax),%eax
0827b6d9 +0x33:  mov    %eax,-0xc(%ebp)
0827b6dc +0x36:  mov    -0xc(%ebp),%eax
0827b6df +0x39:  mov    %eax,(%esp)
0827b6e2 +0x3c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0827b6e7 +0x41:  cmp    $0x2,%eax
0827b6ea +0x44:  setg   %al
0827b6ed +0x47:  test   %al,%al
0827b6ef +0x49:  je     0827b703 <+0x5d>
0827b6f1 +0x4b:  mov    -0xc(%ebp),%eax
0827b6f4 +0x4e:  mov    %eax,0x4(%esp)
0827b6f8 +0x52:  mov    0x8(%ebp),%eax
0827b6fb +0x55:  mov    %eax,(%esp)
0827b6fe +0x58:  call   0827b99a <_ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser>  ; SeriaRoomAniDecoEvent::SendEventInfo(CUser&)
0827b703 +0x5d:  lea    -0x10(%ebp),%eax
0827b706 +0x60:  movl   $0x0,0x8(%esp)
0827b70e +0x68:  lea    -0x18(%ebp),%edx
0827b711 +0x6b:  mov    %edx,0x4(%esp)
0827b715 +0x6f:  mov    %eax,(%esp)
0827b718 +0x72:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
0827b71d +0x77:  sub    $0x4,%esp
0827b720 +0x7a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827b725 +0x7f:  lea    0x134(%eax),%edx
0827b72b +0x85:  lea    -0x14(%ebp),%eax
0827b72e +0x88:  mov    %edx,0x4(%esp)
0827b732 +0x8c:  mov    %eax,(%esp)
0827b735 +0x8f:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
0827b73a +0x94:  sub    $0x4,%esp
0827b73d +0x97:  lea    -0x14(%ebp),%eax
0827b740 +0x9a:  mov    %eax,0x4(%esp)
0827b744 +0x9e:  lea    -0x18(%ebp),%eax
0827b747 +0xa1:  mov    %eax,(%esp)
0827b74a +0xa4:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
0827b74f +0xa9:  test   %al,%al
0827b751 +0xab:  jne    0827b6cb <+0x25>
0827b757 +0xb1:  leave
0827b758 +0xb2:  ret
0827b759 +0xb3:  nop
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::StartAction @ 0x827b6a6

/* SeriaRoomAniDecoEvent::StartAction() */

void __thiscall SeriaRoomAniDecoEvent::StartAction(SeriaRoomAniDecoEvent *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    G_GameWorld();
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
      SendEventInfo(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
