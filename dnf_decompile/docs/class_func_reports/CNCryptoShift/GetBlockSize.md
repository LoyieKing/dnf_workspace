# GetBlockSize

`_ZNK13CNCryptoShift12GetBlockSizeEv`

`CNCryptoShift::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c8a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c8a2  _ZNK13CNCryptoShift12GetBlockSizeEv
#           CNCryptoShift::GetBlockSize() const
# range [0x0809c8a2, 0x0809c8ab]
0809c8a2 +0x00:  push   %ebp
0809c8a3 +0x01:  mov    %esp,%ebp
0809c8a5 +0x03:  mov    $0x4,%eax
0809c8aa +0x08:  pop    %ebp
0809c8ab +0x09:  ret
```

## 反编译 C

```c
// CNCryptoShift::GetBlockSize @ 0x809c8a2

/* CNCryptoShift::GetBlockSize() const */

undefined4 CNCryptoShift::GetBlockSize(void)

{
  return 4;
}
```
