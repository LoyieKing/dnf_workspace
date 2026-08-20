# GetBlockSize

`_ZNK13CNCryptoCast512GetBlockSizeEv`

`CNCryptoCast5::GetBlockSize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a49c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a49c  _ZNK13CNCryptoCast512GetBlockSizeEv
#           CNCryptoCast5::GetBlockSize() const
# range [0x0809a49c, 0x0809a4a5]
0809a49c +0x00:  push   %ebp
0809a49d +0x01:  mov    %esp,%ebp
0809a49f +0x03:  mov    $0x8,%eax
0809a4a4 +0x08:  pop    %ebp
0809a4a5 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoCast5::GetBlockSize @ 0x809a49c

/* CNCryptoCast5::GetBlockSize() const */

undefined4 CNCryptoCast5::GetBlockSize(void)

{
  return 8;
}
```
