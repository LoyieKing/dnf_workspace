# CAccountCargo

`_ZN13CAccountCargoC1Ev`

`CAccountCargo::CAccountCargo()`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289794  _ZN13CAccountCargoC1Ev
#           CAccountCargo::CAccountCargo()
# range [0x08289794, 0x08289815]
08289794 +0x00:  push   %ebp
08289795 +0x01:  mov    %esp,%ebp
08289797 +0x03:  push   %esi
08289798 +0x04:  push   %ebx
08289799 +0x05:  sub    $0x10,%esp
0828979c +0x08:  mov    0x8(%ebp),%eax
0828979f +0x0b:  movl   $0x0,(%eax)
082897a5 +0x11:  mov    0x8(%ebp),%eax
082897a8 +0x14:  add    $0x4,%eax
082897ab +0x17:  mov    %eax,%ebx
082897ad +0x19:  mov    $0x37,%esi
082897b2 +0x1e:  jmp    082897c2 <+0x2e>
082897b4 +0x20:  mov    %ebx,(%esp)
082897b7 +0x23:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
082897bc +0x28:  add    $0x3d,%ebx
082897bf +0x2b:  sub    $0x1,%esi
082897c2 +0x2e:  cmp    $0xffffffff,%esi
082897c5 +0x31:  setne  %al
082897c8 +0x34:  test   %al,%al
082897ca +0x36:  jne    082897b4 <+0x20>
082897cc +0x38:  mov    0x8(%ebp),%eax
082897cf +0x3b:  movl   $0x0,0xd5c(%eax)
082897d9 +0x45:  mov    0x8(%ebp),%eax
082897dc +0x48:  movl   $0x0,0xd60(%eax)
082897e6 +0x52:  mov    0x8(%ebp),%eax
082897e9 +0x55:  movb   $0x0,0xd64(%eax)
082897f0 +0x5c:  mov    0x8(%ebp),%eax
082897f3 +0x5f:  add    $0x4,%eax
082897f6 +0x62:  movl   $0xd58,0x8(%esp)
082897fe +0x6a:  movl   $0x0,0x4(%esp)
08289806 +0x72:  mov    %eax,(%esp)
08289809 +0x75:  call   0807dcc0 <_init+0x5b8>
0828980e +0x7a:  add    $0x10,%esp
08289811 +0x7d:  pop    %ebx
08289812 +0x7e:  pop    %esi
08289813 +0x7f:  pop    %ebp
08289814 +0x80:  ret
08289815 +0x81:  nop
```

## 反编译 C

```c
// CAccountCargo::CAccountCargo @ 0x8289794

/* CAccountCargo::CAccountCargo() */

void __thiscall CAccountCargo::CAccountCargo(CAccountCargo *this)

{
  Inven_Item *this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  this_00 = (Inven_Item *)(this + 4);
  for (iVar1 = 0x37; iVar1 != -1; iVar1 = iVar1 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  *(undefined4 *)(this + 0xd5c) = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  this[0xd64] = (CAccountCargo)0x0;
  memset(this + 4,0,0xd58);
  return;
}
```
