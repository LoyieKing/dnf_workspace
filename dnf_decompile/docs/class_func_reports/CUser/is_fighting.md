# is_fighting

`_ZN5CUser11is_fightingEv`

`CUser::is_fighting()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ed68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ed68  _ZN5CUser11is_fightingEv
#           CUser::is_fighting()
# range [0x0867ed68, 0x0867edb1]
0867ed68 +0x00:  push   %ebp
0867ed69 +0x01:  mov    %esp,%ebp
0867ed6b +0x03:  push   %ebx
0867ed6c +0x04:  mov    0x8(%ebp),%eax
0867ed6f +0x07:  mov    0x8cfc4(%eax),%eax
0867ed75 +0x0d:  cmp    $0xa,%eax
0867ed78 +0x10:  ja     0867edaa <+0x42>
0867ed7a +0x12:  mov    $0x1,%edx
0867ed7f +0x17:  mov    %edx,%ebx
0867ed81 +0x19:  mov    %eax,%ecx
0867ed83 +0x1b:  shl    %cl,%ebx
0867ed85 +0x1d:  mov    %ebx,%eax
0867ed87 +0x1f:  mov    %eax,%edx
0867ed89 +0x21:  and    $0x720,%edx
0867ed8f +0x27:  test   %edx,%edx
0867ed91 +0x29:  jne    0867eda3 <+0x3b>
0867ed93 +0x2b:  and    $0xdf,%eax
0867ed98 +0x30:  test   %eax,%eax
0867ed9a +0x32:  je     0867edaa <+0x42>
0867ed9c +0x34:  mov    $0x0,%eax
0867eda1 +0x39:  jmp    0867edaf <+0x47>
0867eda3 +0x3b:  mov    $0x1,%eax
0867eda8 +0x40:  jmp    0867edaf <+0x47>
0867edaa +0x42:  mov    $0x0,%eax
0867edaf +0x47:  pop    %ebx
0867edb0 +0x48:  pop    %ebp
0867edb1 +0x49:  ret
```

## 反编译 C

```c
// CUser::is_fighting @ 0x867ed68

/* CUser::is_fighting() */

undefined4 __thiscall CUser::is_fighting(CUser *this)

{
  uint uVar1;
  
  if (*(uint *)(this + 0x8cfc4) < 0xb) {
    uVar1 = 1 << ((byte)*(uint *)(this + 0x8cfc4) & 0x1f);
    if ((uVar1 & 0x720) != 0) {
      return 1;
    }
    if ((uVar1 & 0xdf) != 0) {
      return 0;
    }
  }
  return 0;
}
```
