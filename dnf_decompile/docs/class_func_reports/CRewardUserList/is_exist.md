# is_exist

`_ZN15CRewardUserList8is_existEj`

`CRewardUserList::is_exist(unsigned int)`

| 类 | 地址 |
|---|---|
| `CRewardUserList` | `0x081bb73c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb73c  _ZN15CRewardUserList8is_existEj
#           CRewardUserList::is_exist(unsigned int)
# range [0x081bb73c, 0x081bb7bb]
081bb73c +0x00:  push   %ebp
081bb73d +0x01:  mov    %esp,%ebp
081bb73f +0x03:  sub    $0x28,%esp
081bb742 +0x06:  mov    0x8(%ebp),%edx
081bb745 +0x09:  lea    -0x14(%ebp),%eax
081bb748 +0x0c:  lea    0xc(%ebp),%ecx
081bb74b +0x0f:  mov    %ecx,0x8(%esp)
081bb74f +0x13:  mov    %edx,0x4(%esp)
081bb753 +0x17:  mov    %eax,(%esp)
081bb756 +0x1a:  call   081bc3d0 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x46a>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x46a
081bb75b +0x1f:  sub    $0x4,%esp
081bb75e +0x22:  lea    -0x14(%ebp),%eax
081bb761 +0x25:  mov    %eax,0x4(%esp)
081bb765 +0x29:  lea    -0x18(%ebp),%eax
081bb768 +0x2c:  mov    %eax,(%esp)
081bb76b +0x2f:  call   081bc3fc <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x496>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x496
081bb770 +0x34:  mov    0x8(%ebp),%edx
081bb773 +0x37:  lea    -0xc(%ebp),%eax
081bb776 +0x3a:  mov    %edx,0x4(%esp)
081bb77a +0x3e:  mov    %eax,(%esp)
081bb77d +0x41:  call   081bc40c <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x4a6>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x4a6
081bb782 +0x46:  sub    $0x4,%esp
081bb785 +0x49:  lea    -0xc(%ebp),%eax
081bb788 +0x4c:  mov    %eax,0x4(%esp)
081bb78c +0x50:  lea    -0x10(%ebp),%eax
081bb78f +0x53:  mov    %eax,(%esp)
081bb792 +0x56:  call   081bc3fc <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x496>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x496
081bb797 +0x5b:  lea    -0x10(%ebp),%eax
081bb79a +0x5e:  mov    %eax,0x4(%esp)
081bb79e +0x62:  lea    -0x18(%ebp),%eax
081bb7a1 +0x65:  mov    %eax,(%esp)
081bb7a4 +0x68:  call   081bc432 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x4cc>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x4cc
081bb7a9 +0x6d:  test   %al,%al
081bb7ab +0x6f:  je     081bb7b4 <+0x78>
081bb7ad +0x71:  mov    $0x0,%eax
081bb7b2 +0x76:  jmp    081bb7b9 <+0x7d>
081bb7b4 +0x78:  mov    $0x1,%eax
081bb7b9 +0x7d:  leave
081bb7ba +0x7e:  ret
081bb7bb +0x7f:  nop
```

## 反编译 C

```c
// CRewardUserList::is_exist @ 0x81bb73c

/* CRewardUserList::is_exist(unsigned int) */

bool CRewardUserList::is_exist(uint param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> local_14 [4];
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  local_10 [12];
  
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::find((uint *)local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
  _Rb_tree_const_iterator(local_1c,local_18);
  std::
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
  _Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_14);
  return cVar1 == '\0';
}
```
