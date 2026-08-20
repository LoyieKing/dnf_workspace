# getLayeredMapKeyValue

`_ZN13CBattle_Field21getLayeredMapKeyValueEi`

`CBattle_Field::getLayeredMapKeyValue(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830df56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830df56  _ZN13CBattle_Field21getLayeredMapKeyValueEi
#           CBattle_Field::getLayeredMapKeyValue(int)
# range [0x0830df56, 0x0830df65]
0830df56 +0x00:  push   %ebp
0830df57 +0x01:  mov    %esp,%ebp
0830df59 +0x03:  mov    0xc(%ebp),%eax
0830df5c +0x06:  imul   $0x64,%eax,%eax
0830df5f +0x09:  add    $0x2710,%eax
0830df64 +0x0e:  pop    %ebp
0830df65 +0x0f:  ret
```

## 反编译 C

```c
// CBattle_Field::getLayeredMapKeyValue @ 0x830df56

/* CBattle_Field::getLayeredMapKeyValue(int) */

int __thiscall CBattle_Field::getLayeredMapKeyValue(CBattle_Field *this,int param_1)

{
  return param_1 * 100 + 10000;
}
```
