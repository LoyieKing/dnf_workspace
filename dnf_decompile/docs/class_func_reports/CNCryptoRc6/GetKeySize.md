# GetKeySize

`_ZNK11CNCryptoRc610GetKeySizeEv`

`CNCryptoRc6::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bef2  _ZNK11CNCryptoRc610GetKeySizeEv
#           CNCryptoRc6::GetKeySize() const
# range [0x0809bef2, 0x0809befb]
0809bef2 +0x00:  push   %ebp
0809bef3 +0x01:  mov    %esp,%ebp
0809bef5 +0x03:  mov    $0x3c,%eax
0809befa +0x08:  pop    %ebp
0809befb +0x09:  ret
```

## 反编译 C

```c
// CNCryptoRc6::GetKeySize @ 0x809bef2

/* CNCryptoRc6::GetKeySize() const */

undefined4 CNCryptoRc6::GetKeySize(void)

{
  return 0x3c;
}
```
