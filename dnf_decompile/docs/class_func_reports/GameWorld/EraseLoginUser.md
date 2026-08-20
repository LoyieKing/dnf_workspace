# EraseLoginUser

`_ZN9GameWorld14EraseLoginUserEP5CUser`

`GameWorld::EraseLoginUser(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf602` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf602  _ZN9GameWorld14EraseLoginUserEP5CUser
#           GameWorld::EraseLoginUser(CUser*)
# range [0x086cf602, 0x086cf683]
086cf602 +0x00:  push   %ebp
086cf603 +0x01:  mov    %esp,%ebp
086cf605 +0x03:  sub    $0x28,%esp
086cf608 +0x06:  mov    0xc(%ebp),%eax
086cf60b +0x09:  mov    %eax,(%esp)
086cf60e +0x0c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086cf613 +0x11:  mov    %eax,-0x10(%ebp)
086cf616 +0x14:  mov    0x8(%ebp),%eax
086cf619 +0x17:  lea    0x198(%eax),%ecx
086cf61f +0x1d:  lea    -0x14(%ebp),%eax
086cf622 +0x20:  lea    -0x10(%ebp),%edx
086cf625 +0x23:  mov    %edx,0x8(%esp)
086cf629 +0x27:  mov    %ecx,0x4(%esp)
086cf62d +0x2b:  mov    %eax,(%esp)
086cf630 +0x2e:  call   082b076c <_GLOBAL__I__ZN4CLog5this_E+0xcb93>  ; global constructors keyed to CLog::this_+0xcb93
086cf635 +0x33:  sub    $0x4,%esp
086cf638 +0x36:  mov    0x8(%ebp),%eax
086cf63b +0x39:  lea    0x198(%eax),%edx
086cf641 +0x3f:  lea    -0xc(%ebp),%eax
086cf644 +0x42:  mov    %edx,0x4(%esp)
086cf648 +0x46:  mov    %eax,(%esp)
086cf64b +0x49:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
086cf650 +0x4e:  sub    $0x4,%esp
086cf653 +0x51:  lea    -0xc(%ebp),%eax
086cf656 +0x54:  mov    %eax,0x4(%esp)
086cf65a +0x58:  lea    -0x14(%ebp),%eax
086cf65d +0x5b:  mov    %eax,(%esp)
086cf660 +0x5e:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
086cf665 +0x63:  test   %al,%al
086cf667 +0x65:  je     086cf681 <+0x7f>
086cf669 +0x67:  mov    0x8(%ebp),%eax
086cf66c +0x6a:  lea    0x198(%eax),%edx
086cf672 +0x70:  mov    -0x14(%ebp),%eax
086cf675 +0x73:  mov    %eax,0x4(%esp)
086cf679 +0x77:  mov    %edx,(%esp)
086cf67c +0x7a:  call   082b0810 <_GLOBAL__I__ZN4CLog5this_E+0xcc37>  ; global constructors keyed to CLog::this_+0xcc37
086cf681 +0x7f:  leave
086cf682 +0x80:  ret
086cf683 +0x81:  nop
```

## 反编译 C

```c
// GameWorld::EraseLoginUser @ 0x86cf602

/* GameWorld::EraseLoginUser(CUser*) */

void __thiscall GameWorld::EraseLoginUser(GameWorld *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint local_18;
  undefined4 local_14;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_10 [12];
  
  local_14 = CUser::get_acc_id(param_1);
  puVar2 = &local_14;
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::find(&local_18);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_18,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::erase((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
             *)(this + 0x198),local_18,puVar2);
  }
  return;
}
```
