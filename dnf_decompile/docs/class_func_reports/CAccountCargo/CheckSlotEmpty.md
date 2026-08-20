# CheckSlotEmpty

`_ZN13CAccountCargo14CheckSlotEmptyEi`

`CAccountCargo::CheckSlotEmpty(int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a5d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a5d4  _ZN13CAccountCargo14CheckSlotEmptyEi
#           CAccountCargo::CheckSlotEmpty(int)
# range [0x0828a5d4, 0x0828a619]
0828a5d4 +0x00:  push   %ebp
0828a5d5 +0x01:  mov    %esp,%ebp
0828a5d7 +0x03:  sub    $0x8,%esp
0828a5da +0x06:  mov    0xc(%ebp),%eax
0828a5dd +0x09:  mov    %eax,0x4(%esp)
0828a5e1 +0x0d:  mov    0x8(%ebp),%eax
0828a5e4 +0x10:  mov    %eax,(%esp)
0828a5e7 +0x13:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
0828a5ec +0x18:  xor    $0x1,%eax
0828a5ef +0x1b:  test   %al,%al
0828a5f1 +0x1d:  je     0828a5fa <+0x26>
0828a5f3 +0x1f:  mov    $0x0,%eax
0828a5f8 +0x24:  jmp    0828a617 <+0x43>
0828a5fa +0x26:  mov    0xc(%ebp),%edx
0828a5fd +0x29:  mov    0x8(%ebp),%eax
0828a600 +0x2c:  imul   $0x3d,%edx,%edx
0828a603 +0x2f:  mov    0x6(%edx,%eax,1),%eax
0828a607 +0x33:  test   %eax,%eax
0828a609 +0x35:  jne    0828a612 <+0x3e>
0828a60b +0x37:  mov    $0x1,%eax
0828a610 +0x3c:  jmp    0828a617 <+0x43>
0828a612 +0x3e:  mov    $0x0,%eax
0828a617 +0x43:  leave
0828a618 +0x44:  ret
0828a619 +0x45:  nop
```

## 反编译 C

```c
// CAccountCargo::CheckSlotEmpty @ 0x828a5d4

/* CAccountCargo::CheckSlotEmpty(int) */

undefined4 __thiscall CAccountCargo::CheckSlotEmpty(CAccountCargo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    if (*(int *)(this + param_1 * 0x3d + 6) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
