# setBeforeAreaTime

`_ZN5CUser17setBeforeAreaTimeEl`

`CUser::setBeforeAreaTime(long)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ba46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ba46  _ZN5CUser17setBeforeAreaTimeEl
#           CUser::setBeforeAreaTime(long)
# range [0x0868ba46, 0x0868ba57]
0868ba46 +0x00:  push   %ebp
0868ba47 +0x01:  mov    %esp,%ebp
0868ba49 +0x03:  mov    0x8(%ebp),%eax
0868ba4c +0x06:  mov    0xc(%ebp),%edx
0868ba4f +0x09:  mov    %edx,0x79670(%eax)
0868ba55 +0x0f:  pop    %ebp
0868ba56 +0x10:  ret
0868ba57 +0x11:  nop
```

## 反编译 C

```c
// CUser::setBeforeAreaTime @ 0x868ba46

/* CUser::setBeforeAreaTime(long) */

void __thiscall CUser::setBeforeAreaTime(CUser *this,long param_1)

{
  *(long *)(this + 0x79670) = param_1;
  return;
}
```
