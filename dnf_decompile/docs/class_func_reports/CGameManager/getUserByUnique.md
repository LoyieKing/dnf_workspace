# getUserByUnique

`_ZN12CGameManager15getUserByUniqueEs`

`CGameManager::getUserByUnique(short)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082949fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082949fc  _ZN12CGameManager15getUserByUniqueEs
#           CGameManager::getUserByUnique(short)
# range [0x082949fc, 0x08294acf]
082949fc +0x00:  push   %ebp
082949fd +0x01:  mov    %esp,%ebp
082949ff +0x03:  sub    $0x48,%esp
08294a02 +0x06:  mov    0xc(%ebp),%eax
08294a05 +0x09:  mov    %ax,-0x2c(%ebp)
08294a09 +0x0d:  lea    -0x1c(%ebp),%eax
08294a0c +0x10:  mov    %eax,(%esp)
08294a0f +0x13:  call   082b075e <_GLOBAL__I__ZN4CLog5this_E+0xcb85>  ; global constructors keyed to CLog::this_+0xcb85
08294a14 +0x18:  movswl -0x2c(%ebp),%eax
08294a18 +0x1c:  mov    %eax,0x4(%esp)
08294a1c +0x20:  lea    -0x16(%ebp),%eax
08294a1f +0x23:  mov    %eax,(%esp)
08294a22 +0x26:  call   082a6f0c <_GLOBAL__I__ZN4CLog5this_E+0x3333>  ; global constructors keyed to CLog::this_+0x3333
08294a27 +0x2b:  mov    0x8(%ebp),%eax
08294a2a +0x2e:  lea    0x22c(%eax),%edx
08294a30 +0x34:  lea    -0x14(%ebp),%eax
08294a33 +0x37:  mov    %edx,0x4(%esp)
08294a37 +0x3b:  mov    %eax,(%esp)
08294a3a +0x3e:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08294a3f +0x43:  sub    $0x4,%esp
08294a42 +0x46:  mov    0x8(%ebp),%eax
08294a45 +0x49:  lea    0x22c(%eax),%edx
08294a4b +0x4f:  lea    -0x10(%ebp),%eax
08294a4e +0x52:  mov    %edx,0x4(%esp)
08294a52 +0x56:  mov    %eax,(%esp)
08294a55 +0x59:  call   080d3ab4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x8901>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8901
08294a5a +0x5e:  sub    $0x4,%esp
08294a5d +0x61:  lea    -0x30(%ebp),%eax
08294a60 +0x64:  movzwl -0x16(%ebp),%edx
08294a64 +0x68:  mov    %dx,0xc(%esp)
08294a69 +0x6d:  mov    -0x14(%ebp),%edx
08294a6c +0x70:  mov    %edx,0x8(%esp)
08294a70 +0x74:  mov    -0x10(%ebp),%edx
08294a73 +0x77:  mov    %edx,0x4(%esp)
08294a77 +0x7b:  mov    %eax,(%esp)
08294a7a +0x7e:  call   082b07a5 <_GLOBAL__I__ZN4CLog5this_E+0xcbcc>  ; global constructors keyed to CLog::this_+0xcbcc
08294a7f +0x83:  sub    $0x4,%esp
08294a82 +0x86:  mov    -0x30(%ebp),%eax
08294a85 +0x89:  mov    %eax,-0x1c(%ebp)
08294a88 +0x8c:  mov    0x8(%ebp),%eax
08294a8b +0x8f:  lea    0x22c(%eax),%edx
08294a91 +0x95:  lea    -0xc(%ebp),%eax
08294a94 +0x98:  mov    %edx,0x4(%esp)
08294a98 +0x9c:  mov    %eax,(%esp)
08294a9b +0x9f:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08294aa0 +0xa4:  sub    $0x4,%esp
08294aa3 +0xa7:  lea    -0xc(%ebp),%eax
08294aa6 +0xaa:  mov    %eax,0x4(%esp)
08294aaa +0xae:  lea    -0x1c(%ebp),%eax
08294aad +0xb1:  mov    %eax,(%esp)
08294ab0 +0xb4:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
08294ab5 +0xb9:  test   %al,%al
08294ab7 +0xbb:  je     08294ac9 <+0xcd>
08294ab9 +0xbd:  lea    -0x1c(%ebp),%eax
08294abc +0xc0:  mov    %eax,(%esp)
08294abf +0xc3:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
08294ac4 +0xc8:  mov    0x4(%eax),%eax
08294ac7 +0xcb:  jmp    08294ace <+0xd2>
08294ac9 +0xcd:  mov    $0x0,%eax
08294ace +0xd2:  leave
08294acf +0xd3:  ret
```

## 反编译 C

```c
// CGameManager::getUserByUnique @ 0x82949fc

/* CGameManager::getUserByUnique(short) */

undefined4 __thiscall CGameManager::getUserByUnique(CGameManager *this,short param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_34;
  short local_30;
  undefined4 local_20;
  undefined2 local_1a;
  undefined4 local_18;
  undefined4 local_14;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_10 [12];
  
  local_30 = param_1;
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
  FindUserByUnique::FindUserByUnique((FindUserByUnique *)&local_1a,local_30);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)&local_18);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
           *)&local_14);
  std::
  find_if<std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>,CGameManager::FindUserByUnique>
            (&local_34,local_14,local_18,local_1a);
  local_20 = local_34;
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_20);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
