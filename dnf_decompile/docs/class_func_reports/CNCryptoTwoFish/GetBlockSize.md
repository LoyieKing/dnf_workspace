# GetBlockSize

`_ZNK15CNCryptoTwoFish12GetBlockSizeEv`

`CNCryptoTwoFish::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d8c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d8c2  _ZNK15CNCryptoTwoFish12GetBlockSizeEv
#           CNCryptoTwoFish::GetBlockSize() const
# range [0x0809d8c2, 0x0809d8cb]
0809d8c2 +0x00:  push   %ebp
0809d8c3 +0x01:  mov    %esp,%ebp
0809d8c5 +0x03:  mov    $0x10,%eax
0809d8ca +0x08:  pop    %ebp
0809d8cb +0x09:  ret
```

## 反编译 C

```c
// CNCryptoTwoFish::GetBlockSize @ 0x809d8c2

/* CNCryptoTwoFish::GetBlockSize() const */

undefined4 CNCryptoTwoFish::GetBlockSize(void)

{
  return 0x10;
}
```
