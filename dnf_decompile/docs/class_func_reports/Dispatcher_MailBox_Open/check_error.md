# check_error

`_ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MailBox_Open::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Open` | `0x081cc2a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc2a2  _ZN23Dispatcher_MailBox_Open11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MailBox_Open::check_error(CUser*, MSG_BASE&)
# range [0x081cc2a2, 0x081cc2e5]
081cc2a2 +0x00:  push   %ebp
081cc2a3 +0x01:  mov    %esp,%ebp
081cc2a5 +0x03:  sub    $0x18,%esp
081cc2a8 +0x06:  mov    0xc(%ebp),%eax
081cc2ab +0x09:  mov    %eax,(%esp)
081cc2ae +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cc2b3 +0x11:  cmp    $0x3,%eax
081cc2b6 +0x14:  jne    081cc2c7 <+0x25>
081cc2b8 +0x16:  mov    0xc(%ebp),%eax
081cc2bb +0x19:  mov    %eax,(%esp)
081cc2be +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cc2c3 +0x21:  test   %eax,%eax
081cc2c5 +0x23:  jne    081cc2ce <+0x2c>
081cc2c7 +0x25:  mov    $0x1,%eax
081cc2cc +0x2a:  jmp    081cc2d3 <+0x31>
081cc2ce +0x2c:  mov    $0x0,%eax
081cc2d3 +0x31:  test   %al,%al
081cc2d5 +0x33:  je     081cc2de <+0x3c>
081cc2d7 +0x35:  mov    $0xffffffff,%eax
081cc2dc +0x3a:  jmp    081cc2e3 <+0x41>
081cc2de +0x3c:  mov    $0x0,%eax
081cc2e3 +0x41:  leave
081cc2e4 +0x42:  ret
081cc2e5 +0x43:  nop
```

## 反编译 C

```c
// Dispatcher_MailBox_Open::check_error @ 0x81cc2a2

/* Dispatcher_MailBox_Open::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Open::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cc2d3;
    }
  }
  bVar1 = true;
LAB_081cc2d3:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
