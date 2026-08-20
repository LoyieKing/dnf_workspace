# GetBlockSize

`_ZNK16CNCryptoSkipjack12GetBlockSizeEv`

`CNCryptoSkipjack::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809ce3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ce3c  _ZNK16CNCryptoSkipjack12GetBlockSizeEv
#           CNCryptoSkipjack::GetBlockSize() const
# range [0x0809ce3c, 0x0809ce45]
0809ce3c +0x00:  push   %ebp
0809ce3d +0x01:  mov    %esp,%ebp
0809ce3f +0x03:  mov    $0x8,%eax
0809ce44 +0x08:  pop    %ebp
0809ce45 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoSkipjack::GetBlockSize @ 0x809ce3c

/* CNCryptoSkipjack::GetBlockSize() const */

undefined4 CNCryptoSkipjack::GetBlockSize(void)

{
  return 8;
}
```
