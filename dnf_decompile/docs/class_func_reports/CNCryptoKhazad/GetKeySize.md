# GetKeySize

`_ZNK14CNCryptoKhazad10GetKeySizeEv`

`CNCryptoKhazad::GetKeySize() const`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809afee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809afee  _ZNK14CNCryptoKhazad10GetKeySizeEv
#           CNCryptoKhazad::GetKeySize() const
# range [0x0809afee, 0x0809aff7]
0809afee +0x00:  push   %ebp
0809afef +0x01:  mov    %esp,%ebp
0809aff1 +0x03:  mov    $0x10,%eax
0809aff6 +0x08:  pop    %ebp
0809aff7 +0x09:  ret
```

## 反编译 C

```c
// CNCryptoKhazad::GetKeySize @ 0x809afee

/* CNCryptoKhazad::GetKeySize() const */

undefined4 CNCryptoKhazad::GetKeySize(void)

{
  return 0x10;
}
```
