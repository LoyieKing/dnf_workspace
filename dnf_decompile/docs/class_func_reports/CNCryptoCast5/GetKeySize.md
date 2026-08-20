# GetKeySize

`_ZNK13CNCryptoCast510GetKeySizeEv`

`CNCryptoCast5::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a4a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a4a6  _ZNK13CNCryptoCast510GetKeySizeEv
#           CNCryptoCast5::GetKeySize() const
# range [0x0809a4a6, 0x0809a4af]
0809a4a6 +0x00:  push   %ebp
0809a4a7 +0x01:  mov    %esp,%ebp
0809a4a9 +0x03:  mov    $0x10,%eax
0809a4ae +0x08:  pop    %ebp
0809a4af +0x09:  ret
```

## 反编译 C

```c
// CNCryptoCast5::GetKeySize @ 0x809a4a6

/* CNCryptoCast5::GetKeySize() const */

undefined4 CNCryptoCast5::GetKeySize(void)

{
  return 0x10;
}
```
