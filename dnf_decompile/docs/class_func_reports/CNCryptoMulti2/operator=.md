# operator=

`_ZN14CNCryptoMulti2aSERKS_`

`CNCryptoMulti2::operator=(CNCryptoMulti2 const&)`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b12c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b12c  _ZN14CNCryptoMulti2aSERKS_
#           CNCryptoMulti2::operator=(CNCryptoMulti2 const&)
# range [0x0809b12c, 0x0809b133]
0809b12c +0x00:  push   %ebp
0809b12d +0x01:  mov    %esp,%ebp
0809b12f +0x03:  mov    0x8(%ebp),%eax
0809b132 +0x06:  pop    %ebp
0809b133 +0x07:  ret
```

## 反编译 C

```c
// CNCryptoMulti2::operator= @ 0x809b12c

/* CNCryptoMulti2::TEMPNAMEPLACEHOLDERVALUE(CNCryptoMulti2 const&) */

CNCryptoMulti2 * __thiscall CNCryptoMulti2::operator=(CNCryptoMulti2 *this,CNCryptoMulti2 *param_1)

{
  return this;
}
```
