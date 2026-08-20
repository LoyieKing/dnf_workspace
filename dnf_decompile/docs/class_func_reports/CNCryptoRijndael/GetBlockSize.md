# GetBlockSize

`_ZNK16CNCryptoRijndael12GetBlockSizeEv`

`CNCryptoRijndael::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c40e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c40e  _ZNK16CNCryptoRijndael12GetBlockSizeEv
#           CNCryptoRijndael::GetBlockSize() const
# range [0x0809c40e, 0x0809c417]
0809c40e +0x00:  push   %ebp
0809c40f +0x01:  mov    %esp,%ebp
0809c411 +0x03:  mov    $0x10,%eax
0809c416 +0x08:  pop    %ebp
0809c417 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::GetBlockSize @ 0x809c40e

/* CNCryptoRijndael::GetBlockSize() const */

undefined4 CNCryptoRijndael::GetBlockSize(void)

{
  return 0x10;
}
```
