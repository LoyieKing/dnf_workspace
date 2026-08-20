# calcCargoItemCount

`_ZN6CCargo18calcCargoItemCountEv`

`CCargo::calcCargoItemCount()`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c79e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c79e  _ZN6CCargo18calcCargoItemCountEv
#           CCargo::calcCargoItemCount()
# range [0x0850c79e, 0x0850c7b1]
0850c79e +0x00:  push   %ebp
0850c79f +0x01:  mov    %esp,%ebp
0850c7a1 +0x03:  sub    $0x4,%esp
0850c7a4 +0x06:  mov    0x8(%ebp),%eax
0850c7a7 +0x09:  mov    %eax,(%esp)
0850c7aa +0x0c:  call   0850c462 <_ZN6CCargo13_GetItemCountEv>  ; CCargo::_GetItemCount()
0850c7af +0x11:  leave
0850c7b0 +0x12:  ret
0850c7b1 +0x13:  nop
```

## 反编译 C

```c
// CCargo::calcCargoItemCount @ 0x850c79e

/* CCargo::calcCargoItemCount() */

void __thiscall CCargo::calcCargoItemCount(CCargo *this)

{
  _GetItemCount(this);
  return;
}
```
