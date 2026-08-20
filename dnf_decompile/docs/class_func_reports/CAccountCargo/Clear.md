# Clear

`_ZN13CAccountCargo5ClearEv`

`CAccountCargo::Clear()`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828986c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828986c  _ZN13CAccountCargo5ClearEv
#           CAccountCargo::Clear()
# range [0x0828986c, 0x082898bf]
0828986c +0x00:  push   %ebp
0828986d +0x01:  mov    %esp,%ebp
0828986f +0x03:  sub    $0x18,%esp
08289872 +0x06:  mov    0x8(%ebp),%eax
08289875 +0x09:  movl   $0x0,(%eax)
0828987b +0x0f:  mov    0x8(%ebp),%eax
0828987e +0x12:  movl   $0x0,0xd60(%eax)
08289888 +0x1c:  mov    0x8(%ebp),%eax
0828988b +0x1f:  movl   $0x0,0xd5c(%eax)
08289895 +0x29:  mov    0x8(%ebp),%eax
08289898 +0x2c:  movb   $0x0,0xd64(%eax)
0828989f +0x33:  mov    0x8(%ebp),%eax
082898a2 +0x36:  add    $0x4,%eax
082898a5 +0x39:  movl   $0xd58,0x8(%esp)
082898ad +0x41:  movl   $0x0,0x4(%esp)
082898b5 +0x49:  mov    %eax,(%esp)
082898b8 +0x4c:  call   0807dcc0 <_init+0x5b8>
082898bd +0x51:  leave
082898be +0x52:  ret
082898bf +0x53:  nop
```

## 反编译 C

```c
// CAccountCargo::Clear @ 0x828986c

/* CAccountCargo::Clear() */

void __thiscall CAccountCargo::Clear(CAccountCargo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  *(undefined4 *)(this + 0xd5c) = 0;
  this[0xd64] = (CAccountCargo)0x0;
  memset(this + 4,0,0xd58);
  return;
}
```
