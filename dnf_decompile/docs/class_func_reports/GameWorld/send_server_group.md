# send_server_group

`_ZN9GameWorld17send_server_groupER11PacketGuardc`

`GameWorld::send_server_group(PacketGuard&, char)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c90ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c90ae  _ZN9GameWorld17send_server_groupER11PacketGuardc
#           GameWorld::send_server_group(PacketGuard&, char)
# range [0x086c90ae, 0x086c9183]
086c90ae +0x00:  push   %ebp
086c90af +0x01:  mov    %esp,%ebp
086c90b1 +0x03:  sub    $0x38,%esp
086c90b4 +0x06:  mov    0x10(%ebp),%eax
086c90b7 +0x09:  mov    %al,-0x1c(%ebp)
086c90ba +0x0c:  mov    0x8(%ebp),%eax
086c90bd +0x0f:  lea    0x134(%eax),%edx
086c90c3 +0x15:  lea    -0x18(%ebp),%eax
086c90c6 +0x18:  mov    %edx,0x4(%esp)
086c90ca +0x1c:  mov    %eax,(%esp)
086c90cd +0x1f:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c90d2 +0x24:  sub    $0x4,%esp
086c90d5 +0x27:  jmp    086c914c <+0x9e>
086c90d7 +0x29:  lea    -0x18(%ebp),%eax
086c90da +0x2c:  mov    %eax,(%esp)
086c90dd +0x2f:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c90e2 +0x34:  mov    0x4(%eax),%eax
086c90e5 +0x37:  mov    %eax,-0xc(%ebp)
086c90e8 +0x3a:  mov    -0xc(%ebp),%eax
086c90eb +0x3d:  mov    %eax,(%esp)
086c90ee +0x40:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c90f3 +0x45:  cmp    $0x2,%eax
086c90f6 +0x48:  jle    086c9114 <+0x66>
086c90f8 +0x4a:  mov    -0xc(%ebp),%eax
086c90fb +0x4d:  mov    %eax,(%esp)
086c90fe +0x50:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086c9103 +0x55:  mov    %eax,%edx
086c9105 +0x57:  movsbl -0x1c(%ebp),%eax
086c9109 +0x5b:  cmp    %eax,%edx
086c910b +0x5d:  jne    086c9114 <+0x66>
086c910d +0x5f:  mov    $0x1,%eax
086c9112 +0x64:  jmp    086c9119 <+0x6b>
086c9114 +0x66:  mov    $0x0,%eax
086c9119 +0x6b:  test   %al,%al
086c911b +0x6d:  je     086c912f <+0x81>
086c911d +0x6f:  mov    0xc(%ebp),%eax
086c9120 +0x72:  mov    %eax,0x4(%esp)
086c9124 +0x76:  mov    -0xc(%ebp),%eax
086c9127 +0x79:  mov    %eax,(%esp)
086c912a +0x7c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c912f +0x81:  lea    -0x10(%ebp),%eax
086c9132 +0x84:  movl   $0x0,0x8(%esp)
086c913a +0x8c:  lea    -0x18(%ebp),%edx
086c913d +0x8f:  mov    %edx,0x4(%esp)
086c9141 +0x93:  mov    %eax,(%esp)
086c9144 +0x96:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c9149 +0x9b:  sub    $0x4,%esp
086c914c +0x9e:  mov    0x8(%ebp),%eax
086c914f +0xa1:  lea    0x134(%eax),%edx
086c9155 +0xa7:  lea    -0x14(%ebp),%eax
086c9158 +0xaa:  mov    %edx,0x4(%esp)
086c915c +0xae:  mov    %eax,(%esp)
086c915f +0xb1:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c9164 +0xb6:  sub    $0x4,%esp
086c9167 +0xb9:  lea    -0x14(%ebp),%eax
086c916a +0xbc:  mov    %eax,0x4(%esp)
086c916e +0xc0:  lea    -0x18(%ebp),%eax
086c9171 +0xc3:  mov    %eax,(%esp)
086c9174 +0xc6:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c9179 +0xcb:  test   %al,%al
086c917b +0xcd:  jne    086c90d7 <+0x29>
086c9181 +0xd3:  leave
086c9182 +0xd4:  ret
086c9183 +0xd5:  nop
```

## 反编译 C

```c
// GameWorld::send_server_group @ 0x86c90ae

/* GameWorld::send_server_group(PacketGuard&, char) */

void __thiscall GameWorld::send_server_group(GameWorld *this,PacketGuard *param_1,char param_2)

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
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar3 + 4);
    iVar3 = CUser::get_state(local_10);
    if (iVar3 < 3) {
LAB_086c9114:
      bVar1 = false;
    }
    else {
      iVar3 = CUser::GetServerGroup(local_10);
      if (iVar3 != param_2) goto LAB_086c9114;
      bVar1 = true;
    }
    if (bVar1) {
      CUser::Send(local_10,param_1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  } while( true );
}
```
