# GetSpecificItemSlot

`_ZN13CAccountCargo19GetSpecificItemSlotEi`

`CAccountCargo::GetSpecificItemSlot(int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a61a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a61a  _ZN13CAccountCargo19GetSpecificItemSlotEi
#           CAccountCargo::GetSpecificItemSlot(int)
# range [0x0828a61a, 0x0828a66f]
0828a61a +0x00:  push   %ebp
0828a61b +0x01:  mov    %esp,%ebp
0828a61d +0x03:  sub    $0x10,%esp
0828a620 +0x06:  mov    0x8(%ebp),%eax
0828a623 +0x09:  mov    0xd60(%eax),%eax
0828a629 +0x0f:  cmp    $0x38,%eax
0828a62c +0x12:  jbe    0828a633 <+0x19>
0828a62e +0x14:  mov    $0x38,%eax
0828a633 +0x19:  mov    %eax,-0x8(%ebp)
0828a636 +0x1c:  movl   $0x0,-0x4(%ebp)
0828a63d +0x23:  jmp    0828a65c <+0x42>
0828a63f +0x25:  mov    0xc(%ebp),%ecx
0828a642 +0x28:  mov    -0x4(%ebp),%edx
0828a645 +0x2b:  mov    0x8(%ebp),%eax
0828a648 +0x2e:  imul   $0x3d,%edx,%edx
0828a64b +0x31:  mov    0x6(%edx,%eax,1),%eax
0828a64f +0x35:  cmp    %eax,%ecx
0828a651 +0x37:  jne    0828a658 <+0x3e>
0828a653 +0x39:  mov    -0x4(%ebp),%eax
0828a656 +0x3c:  jmp    0828a66e <+0x54>
0828a658 +0x3e:  addl   $0x1,-0x4(%ebp)
0828a65c +0x42:  mov    -0x4(%ebp),%eax
0828a65f +0x45:  cmp    -0x8(%ebp),%eax
0828a662 +0x48:  setl   %al
0828a665 +0x4b:  test   %al,%al
0828a667 +0x4d:  jne    0828a63f <+0x25>
0828a669 +0x4f:  mov    $0xffffffff,%eax
0828a66e +0x54:  leave
0828a66f +0x55:  ret
```

## 反编译 C

```c
// CAccountCargo::GetSpecificItemSlot @ 0x828a61a

/* CAccountCargo::GetSpecificItemSlot(int) */

int __thiscall CAccountCargo::GetSpecificItemSlot(CAccountCargo *this,int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = *(uint *)(this + 0xd60);
  if (0x38 < uVar1) {
    uVar1 = 0x38;
  }
  local_8 = 0;
  while( true ) {
    if ((int)uVar1 <= local_8) {
      return -1;
    }
    if (param_1 == *(int *)(this + local_8 * 0x3d + 6)) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
