# DeleteItem

`_ZN13CAccountCargo10DeleteItemEii`

`CAccountCargo::DeleteItem(int, int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289e3c  _ZN13CAccountCargo10DeleteItemEii
#           CAccountCargo::DeleteItem(int, int)
# range [0x08289e3c, 0x08289f25]
08289e3c +0x00:  push   %ebp
08289e3d +0x01:  mov    %esp,%ebp
08289e3f +0x03:  push   %ebx
08289e40 +0x04:  sub    $0x14,%esp
08289e43 +0x07:  mov    0xc(%ebp),%eax
08289e46 +0x0a:  mov    %eax,0x4(%esp)
08289e4a +0x0e:  mov    0x8(%ebp),%eax
08289e4d +0x11:  mov    %eax,(%esp)
08289e50 +0x14:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
08289e55 +0x19:  xor    $0x1,%eax
08289e58 +0x1c:  test   %al,%al
08289e5a +0x1e:  je     08289e66 <+0x2a>
08289e5c +0x20:  mov    $0x0,%eax
08289e61 +0x25:  jmp    08289f20 <+0xe4>
08289e66 +0x2a:  mov    0xc(%ebp),%edx
08289e69 +0x2d:  mov    0x8(%ebp),%eax
08289e6c +0x30:  imul   $0x3d,%edx,%edx
08289e6f +0x33:  mov    0x6(%edx,%eax,1),%eax
08289e73 +0x37:  test   %eax,%eax
08289e75 +0x39:  je     08289e7d <+0x41>
08289e77 +0x3b:  cmpl   $0x0,0x10(%ebp)
08289e7b +0x3f:  jg     08289e87 <+0x4b>
08289e7d +0x41:  mov    $0x0,%eax
08289e82 +0x46:  jmp    08289f20 <+0xe4>
08289e87 +0x4b:  mov    0xc(%ebp),%eax
08289e8a +0x4e:  imul   $0x3d,%eax,%eax
08289e8d +0x51:  add    0x8(%ebp),%eax
08289e90 +0x54:  add    $0x4,%eax
08289e93 +0x57:  mov    %eax,(%esp)
08289e96 +0x5a:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08289e9b +0x5f:  test   %al,%al
08289e9d +0x61:  je     08289eb3 <+0x77>
08289e9f +0x63:  mov    0xc(%ebp),%eax
08289ea2 +0x66:  mov    %eax,0x4(%esp)
08289ea6 +0x6a:  mov    0x8(%ebp),%eax
08289ea9 +0x6d:  mov    %eax,(%esp)
08289eac +0x70:  call   082898c0 <_ZN13CAccountCargo9ResetSlotEi>  ; CAccountCargo::ResetSlot(int)
08289eb1 +0x75:  jmp    08289f11 <+0xd5>
08289eb3 +0x77:  mov    0xc(%ebp),%edx
08289eb6 +0x7a:  mov    0x8(%ebp),%eax
08289eb9 +0x7d:  imul   $0x3d,%edx,%edx
08289ebc +0x80:  mov    0xb(%edx,%eax,1),%eax
08289ec0 +0x84:  cmp    0x10(%ebp),%eax
08289ec3 +0x87:  jge    08289ecc <+0x90>
08289ec5 +0x89:  mov    $0x0,%eax
08289eca +0x8e:  jmp    08289f20 <+0xe4>
08289ecc +0x90:  mov    0xc(%ebp),%edx
08289ecf +0x93:  mov    0x8(%ebp),%eax
08289ed2 +0x96:  imul   $0x3d,%edx,%edx
08289ed5 +0x99:  mov    0xb(%edx,%eax,1),%eax
08289ed9 +0x9d:  cmp    0x10(%ebp),%eax
08289edc +0xa0:  jle    08289eff <+0xc3>
08289ede +0xa2:  mov    0xc(%ebp),%ebx
08289ee1 +0xa5:  mov    0xc(%ebp),%edx
08289ee4 +0xa8:  mov    0x8(%ebp),%eax
08289ee7 +0xab:  imul   $0x3d,%edx,%edx
08289eea +0xae:  mov    0xb(%edx,%eax,1),%eax
08289eee +0xb2:  mov    %eax,%ecx
08289ef0 +0xb4:  sub    0x10(%ebp),%ecx
08289ef3 +0xb7:  mov    0x8(%ebp),%eax
08289ef6 +0xba:  imul   $0x3d,%ebx,%edx
08289ef9 +0xbd:  mov    %ecx,0xb(%edx,%eax,1)
08289efd +0xc1:  jmp    08289f11 <+0xd5>
08289eff +0xc3:  mov    0xc(%ebp),%eax
08289f02 +0xc6:  mov    %eax,0x4(%esp)
08289f06 +0xca:  mov    0x8(%ebp),%eax
08289f09 +0xcd:  mov    %eax,(%esp)
08289f0c +0xd0:  call   082898c0 <_ZN13CAccountCargo9ResetSlotEi>  ; CAccountCargo::ResetSlot(int)
08289f11 +0xd5:  mov    0x8(%ebp),%eax
08289f14 +0xd8:  movb   $0x1,0xd64(%eax)
08289f1b +0xdf:  mov    $0x1,%eax
08289f20 +0xe4:  add    $0x14,%esp
08289f23 +0xe7:  pop    %ebx
08289f24 +0xe8:  pop    %ebp
08289f25 +0xe9:  ret
```

## 反编译 C

```c
// CAccountCargo::DeleteItem @ 0x8289e3c

/* CAccountCargo::DeleteItem(int, int) */

undefined4 __thiscall CAccountCargo::DeleteItem(CAccountCargo *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CheckValidSlot(this,param_1);
  if (cVar1 == '\x01') {
    if ((*(int *)(this + param_1 * 0x3d + 6) == 0) || (param_2 < 1)) {
      uVar2 = 0;
    }
    else {
      cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)(this + param_1 * 0x3d + 4));
      if (cVar1 == '\0') {
        if (*(int *)(this + param_1 * 0x3d + 0xb) < param_2) {
          return 0;
        }
        if (param_2 < *(int *)(this + param_1 * 0x3d + 0xb)) {
          *(int *)(this + param_1 * 0x3d + 0xb) = *(int *)(this + param_1 * 0x3d + 0xb) - param_2;
        }
        else {
          ResetSlot(this,param_1);
        }
      }
      else {
        ResetSlot(this,param_1);
      }
      this[0xd64] = (CAccountCargo)0x1;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
