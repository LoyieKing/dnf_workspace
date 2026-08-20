# dailyresetData

`_ZN21SeriaRoomAniDecoEvent14dailyresetDataEv`

`SeriaRoomAniDecoEvent::dailyresetData()`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b5f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b5f0  _ZN21SeriaRoomAniDecoEvent14dailyresetDataEv
#           SeriaRoomAniDecoEvent::dailyresetData()
# range [0x0827b5f0, 0x0827b6a5]
0827b5f0 +0x00:  push   %ebp
0827b5f1 +0x01:  mov    %esp,%ebp
0827b5f3 +0x03:  sub    $0x28,%esp
0827b5f6 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827b5fb +0x0b:  lea    0x134(%eax),%edx
0827b601 +0x11:  lea    -0x18(%ebp),%eax
0827b604 +0x14:  mov    %edx,0x4(%esp)
0827b608 +0x18:  mov    %eax,(%esp)
0827b60b +0x1b:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
0827b610 +0x20:  sub    $0x4,%esp
0827b613 +0x23:  jmp    0827b66d <+0x7d>
0827b615 +0x25:  lea    -0x18(%ebp),%eax
0827b618 +0x28:  mov    %eax,(%esp)
0827b61b +0x2b:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
0827b620 +0x30:  mov    0x4(%eax),%eax
0827b623 +0x33:  mov    %eax,-0xc(%ebp)
0827b626 +0x36:  mov    -0xc(%ebp),%eax
0827b629 +0x39:  mov    %eax,(%esp)
0827b62c +0x3c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0827b631 +0x41:  cmp    $0x2,%eax
0827b634 +0x44:  setle  %al
0827b637 +0x47:  test   %al,%al
0827b639 +0x49:  jne    0827b64f <+0x5f>
0827b63b +0x4b:  mov    -0xc(%ebp),%eax
0827b63e +0x4e:  mov    %eax,0x4(%esp)
0827b642 +0x52:  mov    0x8(%ebp),%eax
0827b645 +0x55:  mov    %eax,(%esp)
0827b648 +0x58:  call   0827b75a <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser>  ; SeriaRoomAniDecoEvent::SendAniDecoItem(CUser&)
0827b64d +0x5d:  jmp    0827b650 <+0x60>
0827b64f +0x5f:  nop
0827b650 +0x60:  lea    -0x10(%ebp),%eax
0827b653 +0x63:  movl   $0x0,0x8(%esp)
0827b65b +0x6b:  lea    -0x18(%ebp),%edx
0827b65e +0x6e:  mov    %edx,0x4(%esp)
0827b662 +0x72:  mov    %eax,(%esp)
0827b665 +0x75:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
0827b66a +0x7a:  sub    $0x4,%esp
0827b66d +0x7d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0827b672 +0x82:  lea    0x134(%eax),%edx
0827b678 +0x88:  lea    -0x14(%ebp),%eax
0827b67b +0x8b:  mov    %edx,0x4(%esp)
0827b67f +0x8f:  mov    %eax,(%esp)
0827b682 +0x92:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
0827b687 +0x97:  sub    $0x4,%esp
0827b68a +0x9a:  lea    -0x14(%ebp),%eax
0827b68d +0x9d:  mov    %eax,0x4(%esp)
0827b691 +0xa1:  lea    -0x18(%ebp),%eax
0827b694 +0xa4:  mov    %eax,(%esp)
0827b697 +0xa7:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
0827b69c +0xac:  test   %al,%al
0827b69e +0xae:  jne    0827b615 <+0x25>
0827b6a4 +0xb4:  leave
0827b6a5 +0xb5:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::dailyresetData @ 0x827b5f0

/* SeriaRoomAniDecoEvent::dailyresetData() */

void __thiscall SeriaRoomAniDecoEvent::dailyresetData(SeriaRoomAniDecoEvent *this)

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
      SendAniDecoItem(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
