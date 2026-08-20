# StartAction

`_ZN16GrowthEquipEvent11StartActionEv`

`GrowthEquipEvent::StartAction()`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f7710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7710  _ZN16GrowthEquipEvent11StartActionEv
#           GrowthEquipEvent::StartAction()
# range [0x080f7710, 0x080f77c2]
080f7710 +0x00:  push   %ebp
080f7711 +0x01:  mov    %esp,%ebp
080f7713 +0x03:  sub    $0x28,%esp
080f7716 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080f771b +0x0b:  lea    0x134(%eax),%edx
080f7721 +0x11:  lea    -0x18(%ebp),%eax
080f7724 +0x14:  mov    %edx,0x4(%esp)
080f7728 +0x18:  mov    %eax,(%esp)
080f772b +0x1b:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
080f7730 +0x20:  sub    $0x4,%esp
080f7733 +0x23:  jmp    080f778a <+0x7a>
080f7735 +0x25:  lea    -0x18(%ebp),%eax
080f7738 +0x28:  mov    %eax,(%esp)
080f773b +0x2b:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
080f7740 +0x30:  mov    0x4(%eax),%eax
080f7743 +0x33:  mov    %eax,-0xc(%ebp)
080f7746 +0x36:  mov    -0xc(%ebp),%eax
080f7749 +0x39:  mov    %eax,(%esp)
080f774c +0x3c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080f7751 +0x41:  cmp    $0x2,%eax
080f7754 +0x44:  setg   %al
080f7757 +0x47:  test   %al,%al
080f7759 +0x49:  je     080f776d <+0x5d>
080f775b +0x4b:  mov    -0xc(%ebp),%eax
080f775e +0x4e:  mov    %eax,0x4(%esp)
080f7762 +0x52:  mov    0x8(%ebp),%eax
080f7765 +0x55:  mov    %eax,(%esp)
080f7768 +0x58:  call   080f7226 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser>  ; GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&)
080f776d +0x5d:  lea    -0x10(%ebp),%eax
080f7770 +0x60:  movl   $0x0,0x8(%esp)
080f7778 +0x68:  lea    -0x18(%ebp),%edx
080f777b +0x6b:  mov    %edx,0x4(%esp)
080f777f +0x6f:  mov    %eax,(%esp)
080f7782 +0x72:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
080f7787 +0x77:  sub    $0x4,%esp
080f778a +0x7a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080f778f +0x7f:  lea    0x134(%eax),%edx
080f7795 +0x85:  lea    -0x14(%ebp),%eax
080f7798 +0x88:  mov    %edx,0x4(%esp)
080f779c +0x8c:  mov    %eax,(%esp)
080f779f +0x8f:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
080f77a4 +0x94:  sub    $0x4,%esp
080f77a7 +0x97:  lea    -0x14(%ebp),%eax
080f77aa +0x9a:  mov    %eax,0x4(%esp)
080f77ae +0x9e:  lea    -0x18(%ebp),%eax
080f77b1 +0xa1:  mov    %eax,(%esp)
080f77b4 +0xa4:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
080f77b9 +0xa9:  test   %al,%al
080f77bb +0xab:  jne    080f7735 <+0x25>
080f77c1 +0xb1:  leave
080f77c2 +0xb2:  ret
```

## 反编译 C

```c
// GrowthEquipEvent::StartAction @ 0x80f7710

/* GrowthEquipEvent::StartAction() */

void __thiscall GrowthEquipEvent::StartAction(GrowthEquipEvent *this)

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
      SendGrowthWeaponEventInfo(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
