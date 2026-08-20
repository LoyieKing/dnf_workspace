# find_user_from_world_byaccid_loop

`_ZN9GameWorld33find_user_from_world_byaccid_loopEj`

`GameWorld::find_user_from_world_byaccid_loop(unsigned int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4caa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4caa  _ZN9GameWorld33find_user_from_world_byaccid_loopEj
#           GameWorld::find_user_from_world_byaccid_loop(unsigned int)
# range [0x086c4caa, 0x086c4d3f]
086c4caa +0x00:  push   %ebp
086c4cab +0x01:  mov    %esp,%ebp
086c4cad +0x03:  sub    $0x28,%esp
086c4cb0 +0x06:  mov    0x8(%ebp),%eax
086c4cb3 +0x09:  lea    0x134(%eax),%edx
086c4cb9 +0x0f:  lea    -0x10(%ebp),%eax
086c4cbc +0x12:  mov    %edx,0x4(%esp)
086c4cc0 +0x16:  mov    %eax,(%esp)
086c4cc3 +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c4cc8 +0x1e:  sub    $0x4,%esp
086c4ccb +0x21:  jmp    086c4d08 <+0x5e>
086c4ccd +0x23:  lea    -0x10(%ebp),%eax
086c4cd0 +0x26:  mov    %eax,(%esp)
086c4cd3 +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c4cd8 +0x2e:  mov    0x4(%eax),%eax
086c4cdb +0x31:  mov    %eax,(%esp)
086c4cde +0x34:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086c4ce3 +0x39:  cmp    0xc(%ebp),%eax
086c4ce6 +0x3c:  sete   %al
086c4ce9 +0x3f:  test   %al,%al
086c4ceb +0x41:  je     086c4cfd <+0x53>
086c4ced +0x43:  lea    -0x10(%ebp),%eax
086c4cf0 +0x46:  mov    %eax,(%esp)
086c4cf3 +0x49:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c4cf8 +0x4e:  mov    0x4(%eax),%eax
086c4cfb +0x51:  jmp    086c4d3e <+0x94>
086c4cfd +0x53:  lea    -0x10(%ebp),%eax
086c4d00 +0x56:  mov    %eax,(%esp)
086c4d03 +0x59:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086c4d08 +0x5e:  mov    0x8(%ebp),%eax
086c4d0b +0x61:  lea    0x134(%eax),%edx
086c4d11 +0x67:  lea    -0xc(%ebp),%eax
086c4d14 +0x6a:  mov    %edx,0x4(%esp)
086c4d18 +0x6e:  mov    %eax,(%esp)
086c4d1b +0x71:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c4d20 +0x76:  sub    $0x4,%esp
086c4d23 +0x79:  lea    -0xc(%ebp),%eax
086c4d26 +0x7c:  mov    %eax,0x4(%esp)
086c4d2a +0x80:  lea    -0x10(%ebp),%eax
086c4d2d +0x83:  mov    %eax,(%esp)
086c4d30 +0x86:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c4d35 +0x8b:  test   %al,%al
086c4d37 +0x8d:  jne    086c4ccd <+0x23>
086c4d39 +0x8f:  mov    $0x0,%eax
086c4d3e +0x94:  leave
086c4d3f +0x95:  ret
```

## 反编译 C

```c
// GameWorld::find_user_from_world_byaccid_loop @ 0x86c4caa

/* GameWorld::find_user_from_world_byaccid_loop(unsigned int) */

undefined4 __thiscall GameWorld::find_user_from_world_byaccid_loop(GameWorld *this,uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_14 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_10 [12];
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_14);
    uVar3 = CUser::get_acc_id(*(CUser **)(iVar2 + 4));
    if (uVar3 == param_1) break;
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_14);
  }
  iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                    ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_14);
  return *(undefined4 *)(iVar2 + 4);
}
```
