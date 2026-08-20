# delete_mark

`_ZN15CRewardUserList11delete_markEj`

`CRewardUserList::delete_mark(unsigned int)`

| 类 | 地址 |
|---|---|
| `CRewardUserList` | `0x081bb7bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb7bc  _ZN15CRewardUserList11delete_markEj
#           CRewardUserList::delete_mark(unsigned int)
# range [0x081bb7bc, 0x081bb825]
081bb7bc +0x00:  push   %ebp
081bb7bd +0x01:  mov    %esp,%ebp
081bb7bf +0x03:  sub    $0x28,%esp
081bb7c2 +0x06:  mov    0x8(%ebp),%edx
081bb7c5 +0x09:  lea    -0x10(%ebp),%eax
081bb7c8 +0x0c:  lea    0xc(%ebp),%ecx
081bb7cb +0x0f:  mov    %ecx,0x8(%esp)
081bb7cf +0x13:  mov    %edx,0x4(%esp)
081bb7d3 +0x17:  mov    %eax,(%esp)
081bb7d6 +0x1a:  call   081bc3d0 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x46a>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x46a
081bb7db +0x1f:  sub    $0x4,%esp
081bb7de +0x22:  mov    0x8(%ebp),%edx
081bb7e1 +0x25:  lea    -0xc(%ebp),%eax
081bb7e4 +0x28:  mov    %edx,0x4(%esp)
081bb7e8 +0x2c:  mov    %eax,(%esp)
081bb7eb +0x2f:  call   081bc40c <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x4a6>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x4a6
081bb7f0 +0x34:  sub    $0x4,%esp
081bb7f3 +0x37:  lea    -0xc(%ebp),%eax
081bb7f6 +0x3a:  mov    %eax,0x4(%esp)
081bb7fa +0x3e:  lea    -0x10(%ebp),%eax
081bb7fd +0x41:  mov    %eax,(%esp)
081bb800 +0x44:  call   081bc446 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x4e0>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x4e0
081bb805 +0x49:  test   %al,%al
081bb807 +0x4b:  je     081bb81f <+0x63>
081bb809 +0x4d:  lea    -0x10(%ebp),%eax
081bb80c +0x50:  mov    %eax,(%esp)
081bb80f +0x53:  call   081bc45a <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x4f4>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x4f4
081bb814 +0x58:  movb   $0x1,0xc(%eax)
081bb818 +0x5c:  mov    $0x1,%eax
081bb81d +0x61:  jmp    081bb824 <+0x68>
081bb81f +0x63:  mov    $0x0,%eax
081bb824 +0x68:  leave
081bb825 +0x69:  ret
```

## 反编译 C

```c
// CRewardUserList::delete_mark @ 0x81bb7bc

/* CRewardUserList::delete_mark(unsigned int) */

bool CRewardUserList::delete_mark(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,RewardUserData>> local_14 [4];
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  local_10 [12];
  
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator->
                      (local_14);
    *(undefined1 *)(iVar2 + 0xc) = 1;
  }
  return cVar1 != '\0';
}
```
