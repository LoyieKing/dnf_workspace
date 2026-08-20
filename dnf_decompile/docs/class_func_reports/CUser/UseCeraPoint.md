# UseCeraPoint

`_ZN5CUser12UseCeraPointEj`

`CUser::UseCeraPoint(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692b16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692b16  _ZN5CUser12UseCeraPointEj
#           CUser::UseCeraPoint(unsigned int)
# range [0x08692b16, 0x08692b57]
08692b16 +0x00:  push   %ebp
08692b17 +0x01:  mov    %esp,%ebp
08692b19 +0x03:  mov    0x8(%ebp),%eax
08692b1c +0x06:  mov    0x8eadc(%eax),%eax
08692b22 +0x0c:  cmp    0xc(%ebp),%eax
08692b25 +0x0f:  jb     08692b40 <+0x2a>
08692b27 +0x11:  mov    0x8(%ebp),%eax
08692b2a +0x14:  mov    0x8eadc(%eax),%eax
08692b30 +0x1a:  mov    %eax,%edx
08692b32 +0x1c:  sub    0xc(%ebp),%edx
08692b35 +0x1f:  mov    0x8(%ebp),%eax
08692b38 +0x22:  mov    %edx,0x8eadc(%eax)
08692b3e +0x28:  jmp    08692b4d <+0x37>
08692b40 +0x2a:  mov    0x8(%ebp),%eax
08692b43 +0x2d:  movl   $0x0,0x8eadc(%eax)
08692b4d +0x37:  mov    0x8(%ebp),%eax
08692b50 +0x3a:  mov    0x8eadc(%eax),%eax
08692b56 +0x40:  pop    %ebp
08692b57 +0x41:  ret
```

## 反编译 C

```c
// CUser::UseCeraPoint @ 0x8692b16

/* CUser::UseCeraPoint(unsigned int) */

undefined4 __thiscall CUser::UseCeraPoint(CUser *this,uint param_1)

{
  if (*(uint *)(this + 0x8eadc) < param_1) {
    *(undefined4 *)(this + 0x8eadc) = 0;
  }
  else {
    *(uint *)(this + 0x8eadc) = *(int *)(this + 0x8eadc) - param_1;
  }
  return *(undefined4 *)(this + 0x8eadc);
}
```
