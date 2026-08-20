# GetEmptySlot

`_ZN13CAccountCargo12GetEmptySlotEv`

`CAccountCargo::GetEmptySlot()`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a580  _ZN13CAccountCargo12GetEmptySlotEv
#           CAccountCargo::GetEmptySlot()
# range [0x0828a580, 0x0828a5d3]
0828a580 +0x00:  push   %ebp
0828a581 +0x01:  mov    %esp,%ebp
0828a583 +0x03:  sub    $0x10,%esp
0828a586 +0x06:  mov    0x8(%ebp),%eax
0828a589 +0x09:  mov    0xd60(%eax),%eax
0828a58f +0x0f:  cmp    $0x38,%eax
0828a592 +0x12:  jbe    0828a599 <+0x19>
0828a594 +0x14:  mov    $0x38,%eax
0828a599 +0x19:  mov    %eax,-0x8(%ebp)
0828a59c +0x1c:  movl   $0x0,-0x4(%ebp)
0828a5a3 +0x23:  jmp    0828a5bf <+0x3f>
0828a5a5 +0x25:  mov    -0x4(%ebp),%edx
0828a5a8 +0x28:  mov    0x8(%ebp),%eax
0828a5ab +0x2b:  imul   $0x3d,%edx,%edx
0828a5ae +0x2e:  mov    0x6(%edx,%eax,1),%eax
0828a5b2 +0x32:  test   %eax,%eax
0828a5b4 +0x34:  jne    0828a5bb <+0x3b>
0828a5b6 +0x36:  mov    -0x4(%ebp),%eax
0828a5b9 +0x39:  jmp    0828a5d1 <+0x51>
0828a5bb +0x3b:  addl   $0x1,-0x4(%ebp)
0828a5bf +0x3f:  mov    -0x4(%ebp),%eax
0828a5c2 +0x42:  cmp    -0x8(%ebp),%eax
0828a5c5 +0x45:  setl   %al
0828a5c8 +0x48:  test   %al,%al
0828a5ca +0x4a:  jne    0828a5a5 <+0x25>
0828a5cc +0x4c:  mov    $0xffffffff,%eax
0828a5d1 +0x51:  leave
0828a5d2 +0x52:  ret
0828a5d3 +0x53:  nop
```

## 反编译 C

```c
// CAccountCargo::GetEmptySlot @ 0x828a580

/* CAccountCargo::GetEmptySlot() */

int __thiscall CAccountCargo::GetEmptySlot(CAccountCargo *this)

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
    if (*(int *)(this + local_8 * 0x3d + 6) == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
