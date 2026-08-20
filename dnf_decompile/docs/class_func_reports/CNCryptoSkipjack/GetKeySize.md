# GetKeySize

`_ZNK16CNCryptoSkipjack10GetKeySizeEv`

`CNCryptoSkipjack::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809ce46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ce46  _ZNK16CNCryptoSkipjack10GetKeySizeEv
#           CNCryptoSkipjack::GetKeySize() const
# range [0x0809ce46, 0x0809ce4f]
0809ce46 +0x00:  push   %ebp
0809ce47 +0x01:  mov    %esp,%ebp
0809ce49 +0x03:  mov    $0xa,%eax
0809ce4e +0x08:  pop    %ebp
0809ce4f +0x09:  ret
```

## 反编译 C

```c
// CNCryptoSkipjack::GetKeySize @ 0x809ce46

/* CNCryptoSkipjack::GetKeySize() const */

undefined4 CNCryptoSkipjack::GetKeySize(void)

{
  return 10;
}
```
