# processNPCGiftOnLevelUp

`_ZN5CUser23processNPCGiftOnLevelUpEv`

`CUser::processNPCGiftOnLevelUp()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866407a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866407a  _ZN5CUser23processNPCGiftOnLevelUpEv
#           CUser::processNPCGiftOnLevelUp()
# range [0x0866407a, 0x0866407f]
0866407a +0x00:  push   %ebp
0866407b +0x01:  mov    %esp,%ebp
0866407d +0x03:  pop    %ebp
0866407e +0x04:  ret
0866407f +0x05:  nop
```

## 反编译 C

```c
// CUser::processNPCGiftOnLevelUp @ 0x866407a

/* CUser::processNPCGiftOnLevelUp() */

void CUser::processNPCGiftOnLevelUp(void)

{
  return;
}
```
