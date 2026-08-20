# send_all_with_state

`_ZN9GameWorld19send_all_with_stateER11PacketGuardi`

`GameWorld::send_all_with_state(PacketGuard&, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c9184` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c9184  _ZN9GameWorld19send_all_with_stateER11PacketGuardi
#           GameWorld::send_all_with_state(PacketGuard&, int)
# range [0x086c9184, 0x086c9233]
086c9184 +0x00:  push   %ebp
086c9185 +0x01:  mov    %esp,%ebp
086c9187 +0x03:  sub    $0x28,%esp
086c918a +0x06:  mov    0x8(%ebp),%eax
086c918d +0x09:  lea    0x134(%eax),%edx
086c9193 +0x0f:  lea    -0x18(%ebp),%eax
086c9196 +0x12:  mov    %edx,0x4(%esp)
086c919a +0x16:  mov    %eax,(%esp)
086c919d +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c91a2 +0x1e:  sub    $0x4,%esp
086c91a5 +0x21:  jmp    086c91fc <+0x78>
086c91a7 +0x23:  lea    -0x18(%ebp),%eax
086c91aa +0x26:  mov    %eax,(%esp)
086c91ad +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c91b2 +0x2e:  mov    0x4(%eax),%eax
086c91b5 +0x31:  mov    %eax,-0xc(%ebp)
086c91b8 +0x34:  mov    -0xc(%ebp),%eax
086c91bb +0x37:  mov    %eax,(%esp)
086c91be +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c91c3 +0x3f:  cmp    0x10(%ebp),%eax
086c91c6 +0x42:  setge  %al
086c91c9 +0x45:  test   %al,%al
086c91cb +0x47:  je     086c91df <+0x5b>
086c91cd +0x49:  mov    0xc(%ebp),%eax
086c91d0 +0x4c:  mov    %eax,0x4(%esp)
086c91d4 +0x50:  mov    -0xc(%ebp),%eax
086c91d7 +0x53:  mov    %eax,(%esp)
086c91da +0x56:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c91df +0x5b:  lea    -0x10(%ebp),%eax
086c91e2 +0x5e:  movl   $0x0,0x8(%esp)
086c91ea +0x66:  lea    -0x18(%ebp),%edx
086c91ed +0x69:  mov    %edx,0x4(%esp)
086c91f1 +0x6d:  mov    %eax,(%esp)
086c91f4 +0x70:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c91f9 +0x75:  sub    $0x4,%esp
086c91fc +0x78:  mov    0x8(%ebp),%eax
086c91ff +0x7b:  lea    0x134(%eax),%edx
086c9205 +0x81:  lea    -0x14(%ebp),%eax
086c9208 +0x84:  mov    %edx,0x4(%esp)
086c920c +0x88:  mov    %eax,(%esp)
086c920f +0x8b:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c9214 +0x90:  sub    $0x4,%esp
086c9217 +0x93:  lea    -0x14(%ebp),%eax
086c921a +0x96:  mov    %eax,0x4(%esp)
086c921e +0x9a:  lea    -0x18(%ebp),%eax
086c9221 +0x9d:  mov    %eax,(%esp)
086c9224 +0xa0:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c9229 +0xa5:  test   %al,%al
086c922b +0xa7:  jne    086c91a7 <+0x23>
086c9231 +0xad:  leave
086c9232 +0xae:  ret
086c9233 +0xaf:  nop
```

## 反编译 C

```c
// GameWorld::send_all_with_state @ 0x86c9184

/* GameWorld::send_all_with_state(PacketGuard&, int) */

void __thiscall GameWorld::send_all_with_state(GameWorld *this,PacketGuard *param_1,int param_2)

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
    if (param_2 <= iVar2) {
      CUser::Send(local_10,param_1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
