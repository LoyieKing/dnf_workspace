# isLocked4DataLoad

`_ZN5CUser17isLocked4DataLoadEv`

`CUser::isLocked4DataLoad()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aa0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aa0a  _ZN5CUser17isLocked4DataLoadEv
#           CUser::isLocked4DataLoad()
# range [0x0864aa0a, 0x0864aa19]
0864aa0a +0x00:  push   %ebp
0864aa0b +0x01:  mov    %esp,%ebp
0864aa0d +0x03:  mov    0x8(%ebp),%eax
0864aa10 +0x06:  movzbl 0x8d0f0(%eax),%eax
0864aa17 +0x0d:  pop    %ebp
0864aa18 +0x0e:  ret
0864aa19 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isLocked4DataLoad @ 0x864aa0a

/* CUser::isLocked4DataLoad() */

CUser __thiscall CUser::isLocked4DataLoad(CUser *this)

{
  return this[0x8d0f0];
}
```
