# clearGmList

`_ZN8WongWork11CGMAccounts11clearGmListEv`

`WongWork::CGMAccounts::clearGmList()`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x08109510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109510  _ZN8WongWork11CGMAccounts11clearGmListEv
#           WongWork::CGMAccounts::clearGmList()
# range [0x08109510, 0x08109523]
08109510 +0x00:  push   %ebp
08109511 +0x01:  mov    %esp,%ebp
08109513 +0x03:  sub    $0x18,%esp
08109516 +0x06:  mov    0x8(%ebp),%eax
08109519 +0x09:  mov    %eax,(%esp)
0810951c +0x0c:  call   081097cc <_GLOBAL__I__ZN8WongWork11CGMAccounts14loadGMAccountsEPKc+0x1d9>  ; global constructors keyed to WongWork::CGMAccounts::loadGMAccounts(char const*)+0x1d9
08109521 +0x11:  leave
08109522 +0x12:  ret
08109523 +0x13:  nop
```

## 反编译 C

```c
// WongWork::CGMAccounts::clearGmList @ 0x8109510

/* WongWork::CGMAccounts::clearGmList() */

void __thiscall WongWork::CGMAccounts::clearGmList(CGMAccounts *this)

{
  std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
  clear((list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>> *
        )this);
  return;
}
```
