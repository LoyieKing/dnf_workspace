# GetBlockSize

`_ZNK14CNCryptoMulti212GetBlockSizeEv`

`CNCryptoMulti2::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b588` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b588  _ZNK14CNCryptoMulti212GetBlockSizeEv
#           CNCryptoMulti2::GetBlockSize() const
# range [0x0809b588, 0x0809b591]
0809b588 +0x00:  push   %ebp
0809b589 +0x01:  mov    %esp,%ebp
0809b58b +0x03:  mov    $0x8,%eax
0809b590 +0x08:  pop    %ebp
0809b591 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoMulti2::GetBlockSize @ 0x809b588

/* CNCryptoMulti2::GetBlockSize() const */

undefined4 CNCryptoMulti2::GetBlockSize(void)

{
  return 8;
}
```
