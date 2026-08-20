# GetSlotRef

`_ZN13CAccountCargo10GetSlotRefEi`

`CAccountCargo::GetSlotRef(int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289a0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289a0c  _ZN13CAccountCargo10GetSlotRefEi
#           CAccountCargo::GetSlotRef(int)
# range [0x08289a0c, 0x08289a49]
08289a0c +0x00:  push   %ebp
08289a0d +0x01:  mov    %esp,%ebp
08289a0f +0x03:  sub    $0x18,%esp
08289a12 +0x06:  mov    0xc(%ebp),%eax
08289a15 +0x09:  mov    %eax,0x4(%esp)
08289a19 +0x0d:  mov    0x8(%ebp),%eax
08289a1c +0x10:  mov    %eax,(%esp)
08289a1f +0x13:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
08289a24 +0x18:  xor    $0x1,%eax
08289a27 +0x1b:  test   %al,%al
08289a29 +0x1d:  je     08289a32 <+0x26>
08289a2b +0x1f:  mov    $0x0,%eax
08289a30 +0x24:  jmp    08289a48 <+0x3c>
08289a32 +0x26:  mov    0x8(%ebp),%eax
08289a35 +0x29:  movb   $0x1,0xd64(%eax)
08289a3c +0x30:  mov    0xc(%ebp),%eax
08289a3f +0x33:  imul   $0x3d,%eax,%eax
08289a42 +0x36:  add    0x8(%ebp),%eax
08289a45 +0x39:  add    $0x4,%eax
08289a48 +0x3c:  leave
08289a49 +0x3d:  ret
```

## 反编译 C

```c
// CAccountCargo::GetSlotRef @ 0x8289a0c

/* CAccountCargo::GetSlotRef(int) */

CAccountCargo * __thiscall CAccountCargo::GetSlotRef(CAccountCargo *this,int param_1)

{
  char cVar1;
  CAccountCargo *pCVar2;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    this[0xd64] = (CAccountCargo)0x1;
    pCVar2 = this + param_1 * 0x3d + 4;
  }
  else {
    pCVar2 = (CAccountCargo *)0x0;
  }
  return pCVar2;
}
```
