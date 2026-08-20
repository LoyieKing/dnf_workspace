# check_error

`_ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_RepairEquip::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RepairEquip` | `0x081c619c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c619c  _ZN22DisPatcher_RepairEquip11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_RepairEquip::check_error(CUser*, MSG_BASE&)
# range [0x081c619c, 0x081c61e9]
081c619c +0x00:  push   %ebp
081c619d +0x01:  mov    %esp,%ebp
081c619f +0x03:  push   %ebx
081c61a0 +0x04:  sub    $0x14,%esp
081c61a3 +0x07:  cmpl   $0x0,0xc(%ebp)
081c61a7 +0x0b:  jne    081c61b0 <+0x14>
081c61a9 +0x0d:  mov    $0xffffffff,%eax
081c61ae +0x12:  jmp    081c61e3 <+0x47>
081c61b0 +0x14:  mov    0xc(%ebp),%eax
081c61b3 +0x17:  mov    %eax,(%esp)
081c61b6 +0x1a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c61bb +0x1f:  cmp    $0xc,%eax
081c61be +0x22:  ja     081c61d6 <+0x3a>
081c61c0 +0x24:  mov    $0x1,%edx
081c61c5 +0x29:  mov    %edx,%ebx
081c61c7 +0x2b:  mov    %eax,%ecx
081c61c9 +0x2d:  shl    %cl,%ebx
081c61cb +0x2f:  mov    %ebx,%eax
081c61cd +0x31:  and    $0x15e8,%eax
081c61d2 +0x36:  test   %eax,%eax
081c61d4 +0x38:  jne    081c61dd <+0x41>
081c61d6 +0x3a:  mov    $0x13,%eax
081c61db +0x3f:  jmp    081c61e3 <+0x47>
081c61dd +0x41:  nop
081c61de +0x42:  mov    $0x0,%eax
081c61e3 +0x47:  add    $0x14,%esp
081c61e6 +0x4a:  pop    %ebx
081c61e7 +0x4b:  pop    %ebp
081c61e8 +0x4c:  ret
081c61e9 +0x4d:  nop
```

## 反编译 C

```c
// DisPatcher_RepairEquip::check_error @ 0x81c619c

/* DisPatcher_RepairEquip::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_RepairEquip::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = CUser::get_state((CUser *)param_2);
    if ((uVar2 < 0xd) && ((1 << ((byte)uVar2 & 0x1f) & 0x15e8U) != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x13;
    }
  }
  return uVar1;
}
```
