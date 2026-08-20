# ChangeSecurity

`_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj`

`XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b95a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b95a8  _ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj
#           XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int)
# range [0x084b95a8, 0x084b95bb]
084b95a8 +0x00:  push   %ebp
084b95a9 +0x01:  mov    %esp,%ebp
084b95ab +0x03:  sub    $0x18,%esp
084b95ae +0x06:  mov    0x8(%ebp),%eax
084b95b1 +0x09:  mov    %eax,(%esp)
084b95b4 +0x0c:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b95b9 +0x11:  leave
084b95ba +0x12:  ret
084b95bb +0x13:  nop
```

## 反编译 C

```c
// XNuclear::CHades::ChangeSecurity @ 0x84b95a8

/* XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int) */

void XNuclear::CHades::ChangeSecurity(CHades *param_1)

{
  needLogin(param_1);
  return;
}
```
