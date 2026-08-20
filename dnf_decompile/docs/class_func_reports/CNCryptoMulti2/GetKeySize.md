# GetKeySize

`_ZNK14CNCryptoMulti210GetKeySizeEv`

`CNCryptoMulti2::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b592` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b592  _ZNK14CNCryptoMulti210GetKeySizeEv
#           CNCryptoMulti2::GetKeySize() const
# range [0x0809b592, 0x0809b59b]
0809b592 +0x00:  push   %ebp
0809b593 +0x01:  mov    %esp,%ebp
0809b595 +0x03:  mov    $0x28,%eax
0809b59a +0x08:  pop    %ebp
0809b59b +0x09:  ret
```

## 反编译 C

```c
// CNCryptoMulti2::GetKeySize @ 0x809b592

/* CNCryptoMulti2::GetKeySize() const */

undefined4 CNCryptoMulti2::GetKeySize(void)

{
  return 0x28;
}
```
