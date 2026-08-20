# loadGMAccounts

`_ZN8WongWork11CGMAccounts14loadGMAccountsEPKc`

`WongWork::CGMAccounts::loadGMAccounts(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CGMAccounts` | `0x0810933c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810933c  _ZN8WongWork11CGMAccounts14loadGMAccountsEPKc
#           WongWork::CGMAccounts::loadGMAccounts(char const*)
# range [0x0810933c, 0x08109345]
0810933c +0x00:  push   %ebp
0810933d +0x01:  mov    %esp,%ebp
0810933f +0x03:  mov    $0x1,%eax
08109344 +0x08:  pop    %ebp
08109345 +0x09:  ret
```

## 反编译 C

```c
// WongWork::CGMAccounts::loadGMAccounts @ 0x810933c

/* WongWork::CGMAccounts::loadGMAccounts(char const*) */

undefined4 WongWork::CGMAccounts::loadGMAccounts(char *param_1)

{
  return 1;
}
```
