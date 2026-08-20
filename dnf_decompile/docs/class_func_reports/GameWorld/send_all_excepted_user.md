# send_all_excepted_user

`_ZN9GameWorld22send_all_excepted_userER11PacketGuardP5CUser`

`GameWorld::send_all_excepted_user(PacketGuard&, CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c93a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c93a2  _ZN9GameWorld22send_all_excepted_userER11PacketGuardP5CUser
#           GameWorld::send_all_excepted_user(PacketGuard&, CUser*)
# range [0x086c93a2, 0x086c9463]
086c93a2 +0x00:  push   %ebp
086c93a3 +0x01:  mov    %esp,%ebp
086c93a5 +0x03:  sub    $0x28,%esp
086c93a8 +0x06:  mov    0x8(%ebp),%eax
086c93ab +0x09:  lea    0x134(%eax),%edx
086c93b1 +0x0f:  lea    -0x18(%ebp),%eax
086c93b4 +0x12:  mov    %edx,0x4(%esp)
086c93b8 +0x16:  mov    %eax,(%esp)
086c93bb +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c93c0 +0x1e:  sub    $0x4,%esp
086c93c3 +0x21:  jmp    086c942d <+0x8b>
086c93c5 +0x23:  lea    -0x18(%ebp),%eax
086c93c8 +0x26:  mov    %eax,(%esp)
086c93cb +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c93d0 +0x2e:  mov    0x4(%eax),%eax
086c93d3 +0x31:  mov    %eax,-0xc(%ebp)
086c93d6 +0x34:  mov    -0xc(%ebp),%eax
086c93d9 +0x37:  mov    %eax,(%esp)
086c93dc +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c93e1 +0x3f:  cmp    $0x2,%eax
086c93e4 +0x42:  jle    086c93f5 <+0x53>
086c93e6 +0x44:  mov    -0xc(%ebp),%eax
086c93e9 +0x47:  cmp    0x10(%ebp),%eax
086c93ec +0x4a:  je     086c93f5 <+0x53>
086c93ee +0x4c:  mov    $0x1,%eax
086c93f3 +0x51:  jmp    086c93fa <+0x58>
086c93f5 +0x53:  mov    $0x0,%eax
086c93fa +0x58:  test   %al,%al
086c93fc +0x5a:  je     086c9410 <+0x6e>
086c93fe +0x5c:  mov    0xc(%ebp),%eax
086c9401 +0x5f:  mov    %eax,0x4(%esp)
086c9405 +0x63:  mov    -0xc(%ebp),%eax
086c9408 +0x66:  mov    %eax,(%esp)
086c940b +0x69:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c9410 +0x6e:  lea    -0x10(%ebp),%eax
086c9413 +0x71:  movl   $0x0,0x8(%esp)
086c941b +0x79:  lea    -0x18(%ebp),%edx
086c941e +0x7c:  mov    %edx,0x4(%esp)
086c9422 +0x80:  mov    %eax,(%esp)
086c9425 +0x83:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c942a +0x88:  sub    $0x4,%esp
086c942d +0x8b:  mov    0x8(%ebp),%eax
086c9430 +0x8e:  lea    0x134(%eax),%edx
086c9436 +0x94:  lea    -0x14(%ebp),%eax
086c9439 +0x97:  mov    %edx,0x4(%esp)
086c943d +0x9b:  mov    %eax,(%esp)
086c9440 +0x9e:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c9445 +0xa3:  sub    $0x4,%esp
086c9448 +0xa6:  lea    -0x14(%ebp),%eax
086c944b +0xa9:  mov    %eax,0x4(%esp)
086c944f +0xad:  lea    -0x18(%ebp),%eax
086c9452 +0xb0:  mov    %eax,(%esp)
086c9455 +0xb3:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c945a +0xb8:  test   %al,%al
086c945c +0xba:  jne    086c93c5 <+0x23>
086c9462 +0xc0:  leave
086c9463 +0xc1:  ret
```

## 反编译 C

```c
// GameWorld::send_all_excepted_user @ 0x86c93a2

/* GameWorld::send_all_excepted_user(PacketGuard&, CUser*) */

void __thiscall
GameWorld::send_all_excepted_user(GameWorld *this,PacketGuard *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
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
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar3 + 4);
    iVar3 = CUser::get_state(local_10);
    if ((iVar3 < 3) || (local_10 == param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::Send(local_10,param_1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
