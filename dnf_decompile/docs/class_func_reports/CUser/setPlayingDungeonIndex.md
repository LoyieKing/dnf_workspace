# setPlayingDungeonIndex

`_ZN5CUser22setPlayingDungeonIndexEi`

`CUser::setPlayingDungeonIndex(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cb70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cb70  _ZN5CUser22setPlayingDungeonIndexEi
#           CUser::setPlayingDungeonIndex(int)
# range [0x0867cb70, 0x0867cb81]
0867cb70 +0x00:  push   %ebp
0867cb71 +0x01:  mov    %esp,%ebp
0867cb73 +0x03:  mov    0x8(%ebp),%eax
0867cb76 +0x06:  mov    0xc(%ebp),%edx
0867cb79 +0x09:  mov    %edx,0x8cf04(%eax)
0867cb7f +0x0f:  pop    %ebp
0867cb80 +0x10:  ret
0867cb81 +0x11:  nop
```

## 反编译 C

```c
// CUser::setPlayingDungeonIndex @ 0x867cb70

/* CUser::setPlayingDungeonIndex(int) */

void __thiscall CUser::setPlayingDungeonIndex(CUser *this,int param_1)

{
  *(int *)(this + 0x8cf04) = param_1;
  return;
}
```
