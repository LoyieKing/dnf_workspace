# Send_ChangeSecurity

`_ZN8XNuclear6CHades19Send_ChangeSecurityENS_19ENUM_HADES_SECURITYE`

`XNuclear::CHades::Send_ChangeSecurity(XNuclear::ENUM_HADES_SECURITY)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b93f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b93f4  _ZN8XNuclear6CHades19Send_ChangeSecurityENS_19ENUM_HADES_SECURITYE
#           XNuclear::CHades::Send_ChangeSecurity(XNuclear::ENUM_HADES_SECURITY)
# range [0x084b93f4, 0x084b93f9]
084b93f4 +0x00:  push   %ebp
084b93f5 +0x01:  mov    %esp,%ebp
084b93f7 +0x03:  pop    %ebp
084b93f8 +0x04:  ret
084b93f9 +0x05:  nop
```

## 反编译 C

```c
// XNuclear::CHades::Send_ChangeSecurity @ 0x84b93f4

/* XNuclear::CHades::Send_ChangeSecurity(XNuclear::ENUM_HADES_SECURITY) */

void XNuclear::CHades::Send_ChangeSecurity(void)

{
  return;
}
```
