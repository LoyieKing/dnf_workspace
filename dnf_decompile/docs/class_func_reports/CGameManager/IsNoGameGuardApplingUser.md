# IsNoGameGuardApplingUser

`_ZN12CGameManager24IsNoGameGuardApplingUserERSsPc`

`CGameManager::IsNoGameGuardApplingUser(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a3544` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a3544  _ZN12CGameManager24IsNoGameGuardApplingUserERSsPc
#           CGameManager::IsNoGameGuardApplingUser(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, char*)
# range [0x082a3544, 0x082a35a5]
082a3544 +0x00:  push   %ebp
082a3545 +0x01:  mov    %esp,%ebp
082a3547 +0x03:  sub    $0x28,%esp
082a354a +0x06:  mov    0x8(%ebp),%eax
082a354d +0x09:  lea    0x1c(%eax),%edx
082a3550 +0x0c:  lea    -0x10(%ebp),%eax
082a3553 +0x0f:  mov    %edx,0x4(%esp)
082a3557 +0x13:  mov    %eax,(%esp)
082a355a +0x16:  call   082b4ff8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6ef3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6ef3
082a355f +0x1b:  sub    $0x4,%esp
082a3562 +0x1e:  mov    0x8(%ebp),%eax
082a3565 +0x21:  lea    0x1c(%eax),%ecx
082a3568 +0x24:  lea    -0xc(%ebp),%eax
082a356b +0x27:  mov    0xc(%ebp),%edx
082a356e +0x2a:  mov    %edx,0x8(%esp)
082a3572 +0x2e:  mov    %ecx,0x4(%esp)
082a3576 +0x32:  mov    %eax,(%esp)
082a3579 +0x35:  call   082b4fba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6eb5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6eb5
082a357e +0x3a:  sub    $0x4,%esp
082a3581 +0x3d:  lea    -0x10(%ebp),%eax
082a3584 +0x40:  mov    %eax,0x4(%esp)
082a3588 +0x44:  lea    -0xc(%ebp),%eax
082a358b +0x47:  mov    %eax,(%esp)
082a358e +0x4a:  call   082b501e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6f19>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6f19
082a3593 +0x4f:  test   %al,%al
082a3595 +0x51:  je     082a359e <+0x5a>
082a3597 +0x53:  mov    $0x0,%eax
082a359c +0x58:  jmp    082a35a3 <+0x5f>
082a359e +0x5a:  mov    $0x1,%eax
082a35a3 +0x5f:  leave
082a35a4 +0x60:  ret
082a35a5 +0x61:  nop
```

## 反编译 C

```c
// CGameManager::IsNoGameGuardApplingUser @ 0x82a3544

/* CGameManager::IsNoGameGuardApplingUser(std::string&, char*) */

bool CGameManager::IsNoGameGuardApplingUser(string *param_1,char *param_2)

{
  char cVar1;
  set<std::string,std::less<std::string>,std::allocator<std::string>> local_14 [4];
  string local_10 [3];
  
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::end(local_14);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::string>::operator==
                    ((_Rb_tree_const_iterator<std::string> *)local_10,
                     (_Rb_tree_const_iterator *)local_14);
  return cVar1 == '\0';
}
```
