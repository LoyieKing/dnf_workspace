# isGM

`_ZN8WongWork11CGMAccounts4isGMEj`

`WongWork::CGMAccounts::isGM(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x08109346` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109346  _ZN8WongWork11CGMAccounts4isGMEj
#           WongWork::CGMAccounts::isGM(unsigned int)
# range [0x08109346, 0x081093ed]
08109346 +0x00:  push   %ebp
08109347 +0x01:  mov    %esp,%ebp
08109349 +0x03:  sub    $0x38,%esp
0810934c +0x06:  movl   $0x0,-0x20(%ebp)
08109353 +0x0d:  movl   $0x0,-0x1c(%ebp)
0810935a +0x14:  movl   $0x3,-0x1c(%ebp)
08109361 +0x1b:  mov    0xc(%ebp),%eax
08109364 +0x1e:  mov    %eax,-0x20(%ebp)
08109367 +0x21:  mov    0x8(%ebp),%edx
0810936a +0x24:  lea    -0x18(%ebp),%eax
0810936d +0x27:  mov    %edx,0x4(%esp)
08109371 +0x2b:  mov    %eax,(%esp)
08109374 +0x2e:  call   0810964a <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x57>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x57
08109379 +0x33:  sub    $0x4,%esp
0810937c +0x36:  mov    0x8(%ebp),%edx
0810937f +0x39:  lea    -0x10(%ebp),%eax
08109382 +0x3c:  mov    %edx,0x4(%esp)
08109386 +0x40:  mov    %eax,(%esp)
08109389 +0x43:  call   0810964a <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x57>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x57
0810938e +0x48:  sub    $0x4,%esp
08109391 +0x4b:  mov    0x8(%ebp),%edx
08109394 +0x4e:  lea    -0xc(%ebp),%eax
08109397 +0x51:  mov    %edx,0x4(%esp)
0810939b +0x55:  mov    %eax,(%esp)
0810939e +0x58:  call   08109624 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x31>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x31
081093a3 +0x5d:  sub    $0x4,%esp
081093a6 +0x60:  lea    -0x14(%ebp),%eax
081093a9 +0x63:  lea    -0x20(%ebp),%edx
081093ac +0x66:  mov    %edx,0xc(%esp)
081093b0 +0x6a:  mov    -0x10(%ebp),%edx
081093b3 +0x6d:  mov    %edx,0x8(%esp)
081093b7 +0x71:  mov    -0xc(%ebp),%edx
081093ba +0x74:  mov    %edx,0x4(%esp)
081093be +0x78:  mov    %eax,(%esp)
081093c1 +0x7b:  call   0810966d <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x7a>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x7a
081093c6 +0x80:  sub    $0x4,%esp
081093c9 +0x83:  lea    -0x18(%ebp),%eax
081093cc +0x86:  mov    %eax,0x4(%esp)
081093d0 +0x8a:  lea    -0x14(%ebp),%eax
081093d3 +0x8d:  mov    %eax,(%esp)
081093d6 +0x90:  call   081096c2 <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0xcf>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0xcf
081093db +0x95:  test   %al,%al
081093dd +0x97:  je     081093e6 <+0xa0>
081093df +0x99:  mov    $0x1,%eax
081093e4 +0x9e:  jmp    081093eb <+0xa5>
081093e6 +0xa0:  mov    $0x0,%eax
081093eb +0xa5:  leave
081093ec +0xa6:  ret
081093ed +0xa7:  nop
```

## 反编译 C

```c
// WongWork::CGMAccounts::isGM @ 0x8109346

/* WongWork::CGMAccounts::isGM(unsigned int) */

bool __thiscall WongWork::CGMAccounts::isGM(CGMAccounts *this,uint param_1)

{
  char cVar1;
  uint local_24 [2];
  _List_iterator local_1c [4];
  _List_iterator<WongWork::CGMAccounts::stGMInfo_t> local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  local_24[1] = 3;
  local_24[0] = param_1;
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  end();
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  begin();
  std::
  find<std::_List_iterator<WongWork::CGMAccounts::stGMInfo_t>,WongWork::CGMAccounts::stGMInfo_t>
            (local_18,local_10,local_14,local_24);
  cVar1 = std::_List_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=(local_18,local_1c);
  return cVar1 != '\0';
}
```
