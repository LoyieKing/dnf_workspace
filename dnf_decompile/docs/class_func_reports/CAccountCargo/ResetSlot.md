# ResetSlot

`_ZN13CAccountCargo9ResetSlotEi`

`CAccountCargo::ResetSlot(int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x082898c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082898c0  _ZN13CAccountCargo9ResetSlotEi
#           CAccountCargo::ResetSlot(int)
# range [0x082898c0, 0x082898f7]
082898c0 +0x00:  push   %ebp
082898c1 +0x01:  mov    %esp,%ebp
082898c3 +0x03:  sub    $0x18,%esp
082898c6 +0x06:  mov    0xc(%ebp),%eax
082898c9 +0x09:  mov    %eax,0x4(%esp)
082898cd +0x0d:  mov    0x8(%ebp),%eax
082898d0 +0x10:  mov    %eax,(%esp)
082898d3 +0x13:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
082898d8 +0x18:  xor    $0x1,%eax
082898db +0x1b:  test   %al,%al
082898dd +0x1d:  jne    082898f5 <+0x35>
082898df +0x1f:  mov    0xc(%ebp),%eax
082898e2 +0x22:  imul   $0x3d,%eax,%eax
082898e5 +0x25:  add    0x8(%ebp),%eax
082898e8 +0x28:  add    $0x4,%eax
082898eb +0x2b:  mov    %eax,(%esp)
082898ee +0x2e:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
082898f3 +0x33:  jmp    082898f6 <+0x36>
082898f5 +0x35:  nop
082898f6 +0x36:  leave
082898f7 +0x37:  ret
```

## 反编译 C

```c
// CAccountCargo::ResetSlot @ 0x82898c0

/* CAccountCargo::ResetSlot(int) */

void __thiscall CAccountCargo::ResetSlot(CAccountCargo *this,int param_1)

{
  char cVar1;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    Inven_Item::reset((Inven_Item *)(this + param_1 * 0x3d + 4));
  }
  return;
}
```
