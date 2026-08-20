# getGMInfo

`_ZNK8WongWork11CGMAccounts9getGMInfoEj`

`WongWork::CGMAccounts::getGMInfo(unsigned int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x0810940a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810940a  _ZNK8WongWork11CGMAccounts9getGMInfoEj
#           WongWork::CGMAccounts::getGMInfo(unsigned int) const
# range [0x0810940a, 0x081094e7]
0810940a +0x00:  push   %ebp
0810940b +0x01:  mov    %esp,%ebp
0810940d +0x03:  push   %ebx
0810940e +0x04:  sub    $0x34,%esp
08109411 +0x07:  mov    0x8(%ebp),%ebx
08109414 +0x0a:  movl   $0x0,-0x1c(%ebp)
0810941b +0x11:  movl   $0x3,-0x18(%ebp)
08109422 +0x18:  movl   $0x0,-0x24(%ebp)
08109429 +0x1f:  movl   $0x0,-0x20(%ebp)
08109430 +0x26:  movl   $0x3,-0x20(%ebp)
08109437 +0x2d:  mov    0x10(%ebp),%eax
0810943a +0x30:  mov    %eax,-0x24(%ebp)
0810943d +0x33:  mov    0xc(%ebp),%edx
08109440 +0x36:  lea    -0x14(%ebp),%eax
08109443 +0x39:  mov    %edx,0x4(%esp)
08109447 +0x3d:  mov    %eax,(%esp)
0810944a +0x40:  call   08109732 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x13f>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x13f
0810944f +0x45:  sub    $0x4,%esp
08109452 +0x48:  mov    0xc(%ebp),%edx
08109455 +0x4b:  lea    -0x10(%ebp),%eax
08109458 +0x4e:  mov    %edx,0x4(%esp)
0810945c +0x52:  mov    %eax,(%esp)
0810945f +0x55:  call   0810970c <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x119>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x119
08109464 +0x5a:  sub    $0x4,%esp
08109467 +0x5d:  lea    -0x28(%ebp),%eax
0810946a +0x60:  lea    -0x24(%ebp),%edx
0810946d +0x63:  mov    %edx,0xc(%esp)
08109471 +0x67:  mov    -0x14(%ebp),%edx
08109474 +0x6a:  mov    %edx,0x8(%esp)
08109478 +0x6e:  mov    -0x10(%ebp),%edx
0810947b +0x71:  mov    %edx,0x4(%esp)
0810947f +0x75:  mov    %eax,(%esp)
08109482 +0x78:  call   08109755 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x162>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x162
08109487 +0x7d:  sub    $0x4,%esp
0810948a +0x80:  mov    0xc(%ebp),%edx
0810948d +0x83:  lea    -0xc(%ebp),%eax
08109490 +0x86:  mov    %edx,0x4(%esp)
08109494 +0x8a:  mov    %eax,(%esp)
08109497 +0x8d:  call   08109732 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x13f>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x13f
0810949c +0x92:  sub    $0x4,%esp
0810949f +0x95:  lea    -0xc(%ebp),%eax
081094a2 +0x98:  mov    %eax,0x4(%esp)
081094a6 +0x9c:  lea    -0x28(%ebp),%eax
081094a9 +0x9f:  mov    %eax,(%esp)
081094ac +0xa2:  call   081097aa <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x1b7>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x1b7
081094b1 +0xa7:  test   %al,%al
081094b3 +0xa9:  je     081094d6 <+0xcc>
081094b5 +0xab:  lea    -0x28(%ebp),%eax
081094b8 +0xae:  mov    %eax,(%esp)
081094bb +0xb1:  call   081097be <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x1cb>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x1cb
081094c0 +0xb6:  movl   $0x8,0x8(%esp)
081094c8 +0xbe:  mov    %eax,0x4(%esp)
081094cc +0xc2:  mov    %ebx,(%esp)
081094cf +0xc5:  call   0807d880 <_init+0x178>
081094d4 +0xca:  jmp    081094e1 <+0xd7>
081094d6 +0xcc:  mov    -0x1c(%ebp),%eax
081094d9 +0xcf:  mov    -0x18(%ebp),%edx
081094dc +0xd2:  mov    %eax,(%ebx)
081094de +0xd4:  mov    %edx,0x4(%ebx)
081094e1 +0xd7:  mov    %ebx,%eax
081094e3 +0xd9:  mov    -0x4(%ebp),%ebx
081094e6 +0xdc:  leave
081094e7 +0xdd:  ret    $0x4
```

## 反编译 C

```c
// WongWork::CGMAccounts::getGMInfo @ 0x810940a

/* WongWork::CGMAccounts::getGMInfo(unsigned int) const */

uint WongWork::CGMAccounts::getGMInfo(uint param_1)

{
  char cVar1;
  void *__src;
  _List_const_iterator<WongWork::CGMAccounts::stGMInfo_t> local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  _List_const_iterator local_10 [8];
  
  local_20 = 0;
  local_1c = 3;
  local_24 = 3;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  begin();
  std::
  find<std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>,WongWork::CGMAccounts::stGMInfo_t>
            (local_2c,local_14,local_18,local_28);
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  cVar1 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=
                    (local_2c,local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = local_20;
    *(undefined4 *)(param_1 + 4) = local_1c;
  }
  else {
    __src = (void *)std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator*
                              (local_2c);
    memmove((void *)param_1,__src,8);
  }
  return param_1;
}
```
