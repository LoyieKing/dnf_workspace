# StartAction

`_ZN21GiveGrowCreatureEvent11StartActionEv`

`GiveGrowCreatureEvent::StartAction()`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6abc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6abc  _ZN21GiveGrowCreatureEvent11StartActionEv
#           GiveGrowCreatureEvent::StartAction()
# range [0x081b6abc, 0x081b6b6f]
081b6abc +0x00:  push   %ebp
081b6abd +0x01:  mov    %esp,%ebp
081b6abf +0x03:  sub    $0x28,%esp
081b6ac2 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081b6ac7 +0x0b:  lea    0x134(%eax),%edx
081b6acd +0x11:  lea    -0x18(%ebp),%eax
081b6ad0 +0x14:  mov    %edx,0x4(%esp)
081b6ad4 +0x18:  mov    %eax,(%esp)
081b6ad7 +0x1b:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
081b6adc +0x20:  sub    $0x4,%esp
081b6adf +0x23:  jmp    081b6b36 <+0x7a>
081b6ae1 +0x25:  lea    -0x18(%ebp),%eax
081b6ae4 +0x28:  mov    %eax,(%esp)
081b6ae7 +0x2b:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
081b6aec +0x30:  mov    0x4(%eax),%eax
081b6aef +0x33:  mov    %eax,-0xc(%ebp)
081b6af2 +0x36:  mov    -0xc(%ebp),%eax
081b6af5 +0x39:  mov    %eax,(%esp)
081b6af8 +0x3c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081b6afd +0x41:  cmp    $0x2,%eax
081b6b00 +0x44:  setg   %al
081b6b03 +0x47:  test   %al,%al
081b6b05 +0x49:  je     081b6b19 <+0x5d>
081b6b07 +0x4b:  mov    -0xc(%ebp),%eax
081b6b0a +0x4e:  mov    %eax,0x4(%esp)
081b6b0e +0x52:  mov    0x8(%ebp),%eax
081b6b11 +0x55:  mov    %eax,(%esp)
081b6b14 +0x58:  call   081b6b70 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser>  ; GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&)
081b6b19 +0x5d:  lea    -0x10(%ebp),%eax
081b6b1c +0x60:  movl   $0x0,0x8(%esp)
081b6b24 +0x68:  lea    -0x18(%ebp),%edx
081b6b27 +0x6b:  mov    %edx,0x4(%esp)
081b6b2b +0x6f:  mov    %eax,(%esp)
081b6b2e +0x72:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
081b6b33 +0x77:  sub    $0x4,%esp
081b6b36 +0x7a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081b6b3b +0x7f:  lea    0x134(%eax),%edx
081b6b41 +0x85:  lea    -0x14(%ebp),%eax
081b6b44 +0x88:  mov    %edx,0x4(%esp)
081b6b48 +0x8c:  mov    %eax,(%esp)
081b6b4b +0x8f:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
081b6b50 +0x94:  sub    $0x4,%esp
081b6b53 +0x97:  lea    -0x14(%ebp),%eax
081b6b56 +0x9a:  mov    %eax,0x4(%esp)
081b6b5a +0x9e:  lea    -0x18(%ebp),%eax
081b6b5d +0xa1:  mov    %eax,(%esp)
081b6b60 +0xa4:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
081b6b65 +0xa9:  test   %al,%al
081b6b67 +0xab:  jne    081b6ae1 <+0x25>
081b6b6d +0xb1:  leave
081b6b6e +0xb2:  ret
081b6b6f +0xb3:  nop
```

## 反编译 C

```c
// GiveGrowCreatureEvent::StartAction @ 0x81b6abc

/* GiveGrowCreatureEvent::StartAction() */

void __thiscall GiveGrowCreatureEvent::StartAction(GiveGrowCreatureEvent *this)

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
      SendGrowthCreatureEventInfo(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
