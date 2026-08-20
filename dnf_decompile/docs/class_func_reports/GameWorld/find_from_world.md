# find_from_world

`_ZN9GameWorld15find_from_worldEt`

`GameWorld::find_from_world(unsigned short)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4b9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4b9c  _ZN9GameWorld15find_from_worldEt
#           GameWorld::find_from_world(unsigned short)
# range [0x086c4b9c, 0x086c4c23]
086c4b9c +0x00:  push   %ebp
086c4b9d +0x01:  mov    %esp,%ebp
086c4b9f +0x03:  sub    $0x38,%esp
086c4ba2 +0x06:  mov    0xc(%ebp),%eax
086c4ba5 +0x09:  mov    %ax,-0x1c(%ebp)
086c4ba9 +0x0d:  lea    -0x10(%ebp),%eax
086c4bac +0x10:  mov    %eax,(%esp)
086c4baf +0x13:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c4bb4 +0x18:  mov    0x8(%ebp),%eax
086c4bb7 +0x1b:  lea    0x134(%eax),%ecx
086c4bbd +0x21:  lea    -0x20(%ebp),%eax
086c4bc0 +0x24:  lea    -0x1c(%ebp),%edx
086c4bc3 +0x27:  mov    %edx,0x8(%esp)
086c4bc7 +0x2b:  mov    %ecx,0x4(%esp)
086c4bcb +0x2f:  mov    %eax,(%esp)
086c4bce +0x32:  call   086d3834 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2065>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2065
086c4bd3 +0x37:  sub    $0x4,%esp
086c4bd6 +0x3a:  mov    -0x20(%ebp),%eax
086c4bd9 +0x3d:  mov    %eax,-0x10(%ebp)
086c4bdc +0x40:  mov    0x8(%ebp),%eax
086c4bdf +0x43:  lea    0x134(%eax),%edx
086c4be5 +0x49:  lea    -0xc(%ebp),%eax
086c4be8 +0x4c:  mov    %edx,0x4(%esp)
086c4bec +0x50:  mov    %eax,(%esp)
086c4bef +0x53:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c4bf4 +0x58:  sub    $0x4,%esp
086c4bf7 +0x5b:  lea    -0xc(%ebp),%eax
086c4bfa +0x5e:  mov    %eax,0x4(%esp)
086c4bfe +0x62:  lea    -0x10(%ebp),%eax
086c4c01 +0x65:  mov    %eax,(%esp)
086c4c04 +0x68:  call   086d3f20 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2751>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2751
086c4c09 +0x6d:  test   %al,%al
086c4c0b +0x6f:  je     086c4c14 <+0x78>
086c4c0d +0x71:  mov    $0x0,%eax
086c4c12 +0x76:  jmp    086c4c22 <+0x86>
086c4c14 +0x78:  lea    -0x10(%ebp),%eax
086c4c17 +0x7b:  mov    %eax,(%esp)
086c4c1a +0x7e:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c4c1f +0x83:  mov    0x4(%eax),%eax
086c4c22 +0x86:  leave
086c4c23 +0x87:  ret
```

## 反编译 C

```c
// GameWorld::find_from_world @ 0x86c4b9c

/* GameWorld::find_from_world(unsigned short) */

undefined4 __thiscall GameWorld::find_from_world(GameWorld *this,ushort param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24;
  ushort local_20;
  undefined4 local_14;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_10 [12];
  
  local_20 = param_1;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_14);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::find((ushort *)&local_24);
  local_14 = local_24;
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
