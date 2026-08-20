# GetKeySize

`_ZNK15CNCryptoTwoFish10GetKeySizeEv`

`CNCryptoTwoFish::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d8b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d8b8  _ZNK15CNCryptoTwoFish10GetKeySizeEv
#           CNCryptoTwoFish::GetKeySize() const
# range [0x0809d8b8, 0x0809d8c1]
0809d8b8 +0x00:  push   %ebp
0809d8b9 +0x01:  mov    %esp,%ebp
0809d8bb +0x03:  mov    $0x20,%eax
0809d8c0 +0x08:  pop    %ebp
0809d8c1 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoTwoFish::GetKeySize @ 0x809d8b8

/* CNCryptoTwoFish::GetKeySize() const */

undefined4 CNCryptoTwoFish::GetKeySize(void)

{
  return 0x20;
}
```
