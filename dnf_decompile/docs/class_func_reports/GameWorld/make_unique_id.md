# make_unique_id

`_ZN9GameWorld14make_unique_idEv`

`GameWorld::make_unique_id()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4b0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4b0a  _ZN9GameWorld14make_unique_idEv
#           GameWorld::make_unique_id()
# range [0x086c4b0a, 0x086c4b9b]
086c4b0a +0x00:  push   %ebp
086c4b0b +0x01:  mov    %esp,%ebp
086c4b0d +0x03:  sub    $0x28,%esp
086c4b10 +0x06:  jmp    086c4b13 <+0x9>
086c4b12 +0x08:  nop
086c4b13 +0x09:  mov    0x8(%ebp),%eax
086c4b16 +0x0c:  movzwl 0x24(%eax),%eax
086c4b1a +0x10:  lea    0x1(%eax),%edx
086c4b1d +0x13:  mov    0x8(%ebp),%eax
086c4b20 +0x16:  mov    %dx,0x24(%eax)
086c4b24 +0x1a:  mov    0x8(%ebp),%eax
086c4b27 +0x1d:  movzwl 0x24(%eax),%eax
086c4b2b +0x21:  cmp    $0xffff,%ax
086c4b2f +0x25:  jne    086c4b3a <+0x30>
086c4b31 +0x27:  mov    0x8(%ebp),%eax
086c4b34 +0x2a:  movw   $0x0,0x24(%eax)
086c4b3a +0x30:  mov    0x8(%ebp),%eax
086c4b3d +0x33:  lea    0x24(%eax),%ecx
086c4b40 +0x36:  mov    0x8(%ebp),%eax
086c4b43 +0x39:  lea    0x134(%eax),%edx
086c4b49 +0x3f:  lea    -0x10(%ebp),%eax
086c4b4c +0x42:  mov    %ecx,0x8(%esp)
086c4b50 +0x46:  mov    %edx,0x4(%esp)
086c4b54 +0x4a:  mov    %eax,(%esp)
086c4b57 +0x4d:  call   086d3834 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2065>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2065
086c4b5c +0x52:  sub    $0x4,%esp
086c4b5f +0x55:  mov    0x8(%ebp),%eax
086c4b62 +0x58:  lea    0x134(%eax),%edx
086c4b68 +0x5e:  lea    -0xc(%ebp),%eax
086c4b6b +0x61:  mov    %edx,0x4(%esp)
086c4b6f +0x65:  mov    %eax,(%esp)
086c4b72 +0x68:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c4b77 +0x6d:  sub    $0x4,%esp
086c4b7a +0x70:  lea    -0xc(%ebp),%eax
086c4b7d +0x73:  mov    %eax,0x4(%esp)
086c4b81 +0x77:  lea    -0x10(%ebp),%eax
086c4b84 +0x7a:  mov    %eax,(%esp)
086c4b87 +0x7d:  call   086d3f20 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2751>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2751
086c4b8c +0x82:  test   %al,%al
086c4b8e +0x84:  je     086c4b12 <+0x8>
086c4b90 +0x86:  mov    0x8(%ebp),%eax
086c4b93 +0x89:  movzwl 0x24(%eax),%eax
086c4b97 +0x8d:  movzwl %ax,%eax
086c4b9a +0x90:  leave
086c4b9b +0x91:  ret
```

## 反编译 C

```c
// GameWorld::make_unique_id @ 0x86c4b0a

/* GameWorld::make_unique_id() */

undefined2 __thiscall GameWorld::make_unique_id(GameWorld *this)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_10 [12];
  
  do {
    *(short *)(this + 0x24) = *(short *)(this + 0x24) + 1;
    if (*(short *)(this + 0x24) == -1) {
      *(undefined2 *)(this + 0x24) = 0;
    }
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::find((ushort *)local_14);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator==
                      (local_14,(_Rb_tree_iterator *)local_10);
  } while (cVar1 == '\0');
  return *(undefined2 *)(this + 0x24);
}
```
