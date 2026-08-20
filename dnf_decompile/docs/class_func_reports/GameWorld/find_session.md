# find_session

`_ZN9GameWorld12find_sessionEj`

`GameWorld::find_session(unsigned int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4c24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4c24  _ZN9GameWorld12find_sessionEj
#           GameWorld::find_session(unsigned int)
# range [0x086c4c24, 0x086c4ca9]
086c4c24 +0x00:  push   %ebp
086c4c25 +0x01:  mov    %esp,%ebp
086c4c27 +0x03:  sub    $0x38,%esp
086c4c2a +0x06:  lea    -0x10(%ebp),%eax
086c4c2d +0x09:  mov    %eax,(%esp)
086c4c30 +0x0c:  call   086d3f34 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2765>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2765
086c4c35 +0x11:  mov    0x8(%ebp),%eax
086c4c38 +0x14:  lea    0x14c(%eax),%ecx
086c4c3e +0x1a:  lea    -0x1c(%ebp),%eax
086c4c41 +0x1d:  lea    0xc(%ebp),%edx
086c4c44 +0x20:  mov    %edx,0x8(%esp)
086c4c48 +0x24:  mov    %ecx,0x4(%esp)
086c4c4c +0x28:  mov    %eax,(%esp)
086c4c4f +0x2b:  call   086d3f42 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2773>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2773
086c4c54 +0x30:  sub    $0x4,%esp
086c4c57 +0x33:  mov    -0x1c(%ebp),%eax
086c4c5a +0x36:  mov    %eax,-0x10(%ebp)
086c4c5d +0x39:  mov    0x8(%ebp),%eax
086c4c60 +0x3c:  lea    0x14c(%eax),%edx
086c4c66 +0x42:  lea    -0xc(%ebp),%eax
086c4c69 +0x45:  mov    %edx,0x4(%esp)
086c4c6d +0x49:  mov    %eax,(%esp)
086c4c70 +0x4c:  call   086d3f6e <_GLOBAL__I_MAX_VILLAGE_NUM+0x279f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x279f
086c4c75 +0x51:  sub    $0x4,%esp
086c4c78 +0x54:  lea    -0xc(%ebp),%eax
086c4c7b +0x57:  mov    %eax,0x4(%esp)
086c4c7f +0x5b:  lea    -0x10(%ebp),%eax
086c4c82 +0x5e:  mov    %eax,(%esp)
086c4c85 +0x61:  call   086d3f94 <_GLOBAL__I_MAX_VILLAGE_NUM+0x27c5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x27c5
086c4c8a +0x66:  test   %al,%al
086c4c8c +0x68:  je     086c4c95 <+0x71>
086c4c8e +0x6a:  mov    $0x0,%eax
086c4c93 +0x6f:  jmp    086c4ca7 <+0x83>
086c4c95 +0x71:  lea    -0x10(%ebp),%eax
086c4c98 +0x74:  mov    %eax,(%esp)
086c4c9b +0x77:  call   086d3fa8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x27d9>  ; global constructors keyed to MAX_VILLAGE_NUM+0x27d9
086c4ca0 +0x7c:  movzwl 0x4(%eax),%eax
086c4ca4 +0x80:  movzwl %ax,%eax
086c4ca7 +0x83:  leave
086c4ca8 +0x84:  ret
086c4ca9 +0x85:  nop
```

## 反编译 C

```c
// GameWorld::find_session @ 0x86c4c24

/* GameWorld::find_session(unsigned int) */

undefined2 GameWorld::find_session(uint param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint local_20 [3];
  uint local_14;
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)&local_14);
  std::
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  ::find(local_20);
  local_14 = local_20[0];
  std::
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_short>> *)&local_14)
    ;
    uVar2 = *(undefined2 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
