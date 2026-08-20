# setMoveSpace

`_ZN5CUser12setMoveSpaceEN9UserSpace1TE`

`CUser::setMoveSpace(UserSpace::T)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690eb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690eb8  _ZN5CUser12setMoveSpaceEN9UserSpace1TE
#           CUser::setMoveSpace(UserSpace::T)
# range [0x08690eb8, 0x08690ec9]
08690eb8 +0x00:  push   %ebp
08690eb9 +0x01:  mov    %esp,%ebp
08690ebb +0x03:  mov    0x8(%ebp),%eax
08690ebe +0x06:  mov    0xc(%ebp),%edx
08690ec1 +0x09:  mov    %edx,0x8cfcc(%eax)
08690ec7 +0x0f:  pop    %ebp
08690ec8 +0x10:  ret
08690ec9 +0x11:  nop
```

## 反编译 C

```c
// CUser::setMoveSpace @ 0x8690eb8

/* CUser::setMoveSpace(UserSpace::T) */

void __thiscall CUser::setMoveSpace(CUser *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x8cfcc) = param_2;
  return;
}
```
