# GetBlockSize

`_ZNK11CNCryptoRc612GetBlockSizeEv`

`CNCryptoRc6::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809befc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809befc  _ZNK11CNCryptoRc612GetBlockSizeEv
#           CNCryptoRc6::GetBlockSize() const
# range [0x0809befc, 0x0809bf07]
0809befc +0x00:  push   %ebp
0809befd +0x01:  mov    %esp,%ebp
0809beff +0x03:  mov    $0x10,%eax
0809bf04 +0x08:  pop    %ebp
0809bf05 +0x09:  ret
0809bf06 +0x0a:  nop
0809bf07 +0x0b:  nop
```

## 反编译 C

```c
// CNCryptoRc6::GetBlockSize @ 0x809befc

/* CNCryptoRc6::GetBlockSize() const */

undefined4 CNCryptoRc6::GetBlockSize(void)

{
  return 0x10;
}
```
