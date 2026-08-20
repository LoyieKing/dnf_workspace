# isUseCraneStart

`_ZNK5CUser15isUseCraneStartEv`

`CUser::isUseCraneStart() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dd34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dd34  _ZNK5CUser15isUseCraneStartEv
#           CUser::isUseCraneStart() const
# range [0x0868dd34, 0x0868dd43]
0868dd34 +0x00:  push   %ebp
0868dd35 +0x01:  mov    %esp,%ebp
0868dd37 +0x03:  mov    0x8(%ebp),%eax
0868dd3a +0x06:  movzbl 0x8eb98(%eax),%eax
0868dd41 +0x0d:  pop    %ebp
0868dd42 +0x0e:  ret
0868dd43 +0x0f:  nop
```

## 反编译 C

```c
// CUser::isUseCraneStart @ 0x868dd34

/* CUser::isUseCraneStart() const */

CUser __thiscall CUser::isUseCraneStart(CUser *this)

{
  return this[0x8eb98];
}
```
