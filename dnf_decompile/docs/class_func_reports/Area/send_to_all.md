# send_to_all

`_ZN4Area11send_to_allER11PacketGuard`

`Area::send_to_all(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c2d2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c2d2a  _ZN4Area11send_to_allER11PacketGuard
#           Area::send_to_all(PacketGuard&)
# range [0x086c2d2a, 0x086c2e1d]
086c2d2a +0x00:  push   %ebp
086c2d2b +0x01:  mov    %esp,%ebp
086c2d2d +0x03:  sub    $0x48,%esp
086c2d30 +0x06:  movl   $0x0,-0xc(%ebp)
086c2d37 +0x0d:  lea    -0x1c(%ebp),%eax
086c2d3a +0x10:  mov    %eax,(%esp)
086c2d3d +0x13:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c2d42 +0x18:  mov    0x8(%ebp),%eax
086c2d45 +0x1b:  lea    0x44(%eax),%edx
086c2d48 +0x1e:  lea    -0x2c(%ebp),%eax
086c2d4b +0x21:  mov    %edx,0x4(%esp)
086c2d4f +0x25:  mov    %eax,(%esp)
086c2d52 +0x28:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c2d57 +0x2d:  sub    $0x4,%esp
086c2d5a +0x30:  mov    -0x2c(%ebp),%eax
086c2d5d +0x33:  mov    %eax,-0x1c(%ebp)
086c2d60 +0x36:  jmp    086c2dea <+0xc0>
086c2d65 +0x3b:  lea    -0x1c(%ebp),%eax
086c2d68 +0x3e:  mov    %eax,(%esp)
086c2d6b +0x41:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c2d70 +0x46:  mov    0x4(%eax),%eax
086c2d73 +0x49:  mov    %eax,-0xc(%ebp)
086c2d76 +0x4c:  cmpl   $0x0,-0xc(%ebp)
086c2d7a +0x50:  je     086c2d8c <+0x62>
086c2d7c +0x52:  mov    -0xc(%ebp),%eax
086c2d7f +0x55:  mov    %eax,(%esp)
086c2d82 +0x58:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c2d87 +0x5d:  cmp    $0x2,%eax
086c2d8a +0x60:  jg     086c2d93 <+0x69>
086c2d8c +0x62:  mov    $0x1,%eax
086c2d91 +0x67:  jmp    086c2d98 <+0x6e>
086c2d93 +0x69:  mov    $0x0,%eax
086c2d98 +0x6e:  test   %al,%al
086c2d9a +0x70:  je     086c2dbb <+0x91>
086c2d9c +0x72:  lea    -0x14(%ebp),%eax
086c2d9f +0x75:  movl   $0x0,0x8(%esp)
086c2da7 +0x7d:  lea    -0x1c(%ebp),%edx
086c2daa +0x80:  mov    %edx,0x4(%esp)
086c2dae +0x84:  mov    %eax,(%esp)
086c2db1 +0x87:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2db6 +0x8c:  sub    $0x4,%esp
086c2db9 +0x8f:  jmp    086c2dea <+0xc0>
086c2dbb +0x91:  mov    0xc(%ebp),%eax
086c2dbe +0x94:  mov    %eax,0x4(%esp)
086c2dc2 +0x98:  mov    -0xc(%ebp),%eax
086c2dc5 +0x9b:  mov    %eax,(%esp)
086c2dc8 +0x9e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c2dcd +0xa3:  lea    -0x10(%ebp),%eax
086c2dd0 +0xa6:  movl   $0x0,0x8(%esp)
086c2dd8 +0xae:  lea    -0x1c(%ebp),%edx
086c2ddb +0xb1:  mov    %edx,0x4(%esp)
086c2ddf +0xb5:  mov    %eax,(%esp)
086c2de2 +0xb8:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2de7 +0xbd:  sub    $0x4,%esp
086c2dea +0xc0:  mov    0x8(%ebp),%eax
086c2ded +0xc3:  lea    0x44(%eax),%edx
086c2df0 +0xc6:  lea    -0x18(%ebp),%eax
086c2df3 +0xc9:  mov    %edx,0x4(%esp)
086c2df7 +0xcd:  mov    %eax,(%esp)
086c2dfa +0xd0:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c2dff +0xd5:  sub    $0x4,%esp
086c2e02 +0xd8:  lea    -0x18(%ebp),%eax
086c2e05 +0xdb:  mov    %eax,0x4(%esp)
086c2e09 +0xdf:  lea    -0x1c(%ebp),%eax
086c2e0c +0xe2:  mov    %eax,(%esp)
086c2e0f +0xe5:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c2e14 +0xea:  test   %al,%al
086c2e16 +0xec:  jne    086c2d65 <+0x3b>
086c2e1c +0xf2:  leave
086c2e1d +0xf3:  ret
```

## 反编译 C

```c
// Area::send_to_all @ 0x86c2d2a

/* Area::send_to_all(PacketGuard&) */

void __thiscall Area::send_to_all(Area *this,PacketGuard *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [4];
  undefined4 local_20;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
    local_10 = *(CUser **)(iVar3 + 4);
    if (local_10 == (CUser *)0x0) {
LAB_086c2d8c:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_10);
      if (iVar3 < 3) goto LAB_086c2d8c;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_20);
    }
    else {
      CUser::Send(local_10,param_1);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_20);
    }
  } while( true );
}
```
