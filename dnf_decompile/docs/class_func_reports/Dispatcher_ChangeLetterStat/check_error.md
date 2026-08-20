# check_error

`_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ChangeLetterStat::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeLetterStat` | `0x081ce2ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce2ba  _ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ChangeLetterStat::check_error(CUser*, MSG_BASE&)
# range [0x081ce2ba, 0x081ce303]
081ce2ba +0x00:  push   %ebp
081ce2bb +0x01:  mov    %esp,%ebp
081ce2bd +0x03:  sub    $0x28,%esp
081ce2c0 +0x06:  mov    0x10(%ebp),%eax
081ce2c3 +0x09:  mov    %eax,-0xc(%ebp)
081ce2c6 +0x0c:  mov    0xc(%ebp),%eax
081ce2c9 +0x0f:  mov    %eax,(%esp)
081ce2cc +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ce2d1 +0x17:  cmp    $0x2,%eax
081ce2d4 +0x1a:  jle    081ce2e5 <+0x2b>
081ce2d6 +0x1c:  mov    0xc(%ebp),%eax
081ce2d9 +0x1f:  mov    %eax,(%esp)
081ce2dc +0x22:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ce2e1 +0x27:  test   %eax,%eax
081ce2e3 +0x29:  jne    081ce2ec <+0x32>
081ce2e5 +0x2b:  mov    $0x1,%eax
081ce2ea +0x30:  jmp    081ce2f1 <+0x37>
081ce2ec +0x32:  mov    $0x0,%eax
081ce2f1 +0x37:  test   %al,%al
081ce2f3 +0x39:  je     081ce2fc <+0x42>
081ce2f5 +0x3b:  mov    $0xffffffff,%eax
081ce2fa +0x40:  jmp    081ce301 <+0x47>
081ce2fc +0x42:  mov    $0x0,%eax
081ce301 +0x47:  leave
081ce302 +0x48:  ret
081ce303 +0x49:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeLetterStat::check_error @ 0x81ce2ba

/* Dispatcher_ChangeLetterStat::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ChangeLetterStat::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081ce2f1;
    }
  }
  bVar1 = true;
LAB_081ce2f1:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
