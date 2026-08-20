# send_all

`_ZN9GameWorld8send_allER11PacketGuard`

`GameWorld::send_all(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8c14  _ZN9GameWorld8send_allER11PacketGuard
#           GameWorld::send_all(PacketGuard&)
# range [0x086c8c14, 0x086c8cc3]
086c8c14 +0x00:  push   %ebp
086c8c15 +0x01:  mov    %esp,%ebp
086c8c17 +0x03:  sub    $0x28,%esp
086c8c1a +0x06:  mov    0x8(%ebp),%eax
086c8c1d +0x09:  lea    0x134(%eax),%edx
086c8c23 +0x0f:  lea    -0x18(%ebp),%eax
086c8c26 +0x12:  mov    %edx,0x4(%esp)
086c8c2a +0x16:  mov    %eax,(%esp)
086c8c2d +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c8c32 +0x1e:  sub    $0x4,%esp
086c8c35 +0x21:  jmp    086c8c8c <+0x78>
086c8c37 +0x23:  lea    -0x18(%ebp),%eax
086c8c3a +0x26:  mov    %eax,(%esp)
086c8c3d +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c8c42 +0x2e:  mov    0x4(%eax),%eax
086c8c45 +0x31:  mov    %eax,-0xc(%ebp)
086c8c48 +0x34:  mov    -0xc(%ebp),%eax
086c8c4b +0x37:  mov    %eax,(%esp)
086c8c4e +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c8c53 +0x3f:  cmp    $0x2,%eax
086c8c56 +0x42:  setg   %al
086c8c59 +0x45:  test   %al,%al
086c8c5b +0x47:  je     086c8c6f <+0x5b>
086c8c5d +0x49:  mov    0xc(%ebp),%eax
086c8c60 +0x4c:  mov    %eax,0x4(%esp)
086c8c64 +0x50:  mov    -0xc(%ebp),%eax
086c8c67 +0x53:  mov    %eax,(%esp)
086c8c6a +0x56:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c8c6f +0x5b:  lea    -0x10(%ebp),%eax
086c8c72 +0x5e:  movl   $0x0,0x8(%esp)
086c8c7a +0x66:  lea    -0x18(%ebp),%edx
086c8c7d +0x69:  mov    %edx,0x4(%esp)
086c8c81 +0x6d:  mov    %eax,(%esp)
086c8c84 +0x70:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c8c89 +0x75:  sub    $0x4,%esp
086c8c8c +0x78:  mov    0x8(%ebp),%eax
086c8c8f +0x7b:  lea    0x134(%eax),%edx
086c8c95 +0x81:  lea    -0x14(%ebp),%eax
086c8c98 +0x84:  mov    %edx,0x4(%esp)
086c8c9c +0x88:  mov    %eax,(%esp)
086c8c9f +0x8b:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c8ca4 +0x90:  sub    $0x4,%esp
086c8ca7 +0x93:  lea    -0x14(%ebp),%eax
086c8caa +0x96:  mov    %eax,0x4(%esp)
086c8cae +0x9a:  lea    -0x18(%ebp),%eax
086c8cb1 +0x9d:  mov    %eax,(%esp)
086c8cb4 +0xa0:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c8cb9 +0xa5:  test   %al,%al
086c8cbb +0xa7:  jne    086c8c37 <+0x23>
086c8cc1 +0xad:  leave
086c8cc2 +0xae:  ret
086c8cc3 +0xaf:  nop
```

## 反编译 C

```c
// GameWorld::send_all @ 0x86c8c14

/* GameWorld::send_all(PacketGuard&) */

void __thiscall GameWorld::send_all(GameWorld *this,PacketGuard *param_1)

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
      CUser::Send(local_10,param_1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
