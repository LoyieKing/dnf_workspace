# getBeforeAreaTime

`_ZNK5CUser17getBeforeAreaTimeEv`

`CUser::getBeforeAreaTime() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ba38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ba38  _ZNK5CUser17getBeforeAreaTimeEv
#           CUser::getBeforeAreaTime() const
# range [0x0868ba38, 0x0868ba45]
0868ba38 +0x00:  push   %ebp
0868ba39 +0x01:  mov    %esp,%ebp
0868ba3b +0x03:  mov    0x8(%ebp),%eax
0868ba3e +0x06:  mov    0x79670(%eax),%eax
0868ba44 +0x0c:  pop    %ebp
0868ba45 +0x0d:  ret
```

## 反编译 C

```c
// CUser::getBeforeAreaTime @ 0x868ba38

/* CUser::getBeforeAreaTime() const */

undefined4 __thiscall CUser::getBeforeAreaTime(CUser *this)

{
  return *(undefined4 *)(this + 0x79670);
}
```
