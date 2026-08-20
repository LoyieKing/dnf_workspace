# GetKeySize

`_ZNK14CNCryptoAnubis10GetKeySizeEv`

`CNCryptoAnubis::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x080997f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080997f8  _ZNK14CNCryptoAnubis10GetKeySizeEv
#           CNCryptoAnubis::GetKeySize() const
# range [0x080997f8, 0x08099801]
080997f8 +0x00:  push   %ebp
080997f9 +0x01:  mov    %esp,%ebp
080997fb +0x03:  mov    $0x10,%eax
08099800 +0x08:  pop    %ebp
08099801 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoAnubis::GetKeySize @ 0x80997f8

/* CNCryptoAnubis::GetKeySize() const */

undefined4 CNCryptoAnubis::GetKeySize(void)

{
  return 0x10;
}
```
