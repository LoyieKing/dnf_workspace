# getMoveSpace

`_ZNK5CUser12getMoveSpaceEv`

`CUser::getMoveSpace() const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690eca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690eca  _ZNK5CUser12getMoveSpaceEv
#           CUser::getMoveSpace() const
# range [0x08690eca, 0x08690ed7]
08690eca +0x00:  push   %ebp
08690ecb +0x01:  mov    %esp,%ebp
08690ecd +0x03:  mov    0x8(%ebp),%eax
08690ed0 +0x06:  mov    0x8cfcc(%eax),%eax
08690ed6 +0x0c:  pop    %ebp
08690ed7 +0x0d:  ret
```

## 反编译 C

```c
// CUser::getMoveSpace @ 0x8690eca

/* CUser::getMoveSpace() const */

undefined4 __thiscall CUser::getMoveSpace(CUser *this)

{
  return *(undefined4 *)(this + 0x8cfcc);
}
```
