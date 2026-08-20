# check_error

`_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MemberSecede::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MemberSecede` | `0x081cbbd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbbd0  _ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MemberSecede::check_error(CUser*, MSG_BASE&)
# range [0x081cbbd0, 0x081cbc2d]
081cbbd0 +0x00:  push   %ebp
081cbbd1 +0x01:  mov    %esp,%ebp
081cbbd3 +0x03:  sub    $0x18,%esp
081cbbd6 +0x06:  mov    0xc(%ebp),%eax
081cbbd9 +0x09:  mov    %eax,(%esp)
081cbbdc +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cbbe1 +0x11:  cmp    $0x2,%eax
081cbbe4 +0x14:  jle    081cbbf5 <+0x25>
081cbbe6 +0x16:  mov    0xc(%ebp),%eax
081cbbe9 +0x19:  mov    %eax,(%esp)
081cbbec +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cbbf1 +0x21:  test   %eax,%eax
081cbbf3 +0x23:  jne    081cbbfc <+0x2c>
081cbbf5 +0x25:  mov    $0x1,%eax
081cbbfa +0x2a:  jmp    081cbc01 <+0x31>
081cbbfc +0x2c:  mov    $0x0,%eax
081cbc01 +0x31:  test   %al,%al
081cbc03 +0x33:  je     081cbc0c <+0x3c>
081cbc05 +0x35:  mov    $0xffffffff,%eax
081cbc0a +0x3a:  jmp    081cbc2c <+0x5c>
081cbc0c +0x3c:  mov    0xc(%ebp),%eax
081cbc0f +0x3f:  mov    %eax,(%esp)
081cbc12 +0x42:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
081cbc17 +0x47:  test   %eax,%eax
081cbc19 +0x49:  sete   %al
081cbc1c +0x4c:  test   %al,%al
081cbc1e +0x4e:  je     081cbc27 <+0x57>
081cbc20 +0x50:  mov    $0x7fffffff,%eax
081cbc25 +0x55:  jmp    081cbc2c <+0x5c>
081cbc27 +0x57:  mov    $0x0,%eax
081cbc2c +0x5c:  leave
081cbc2d +0x5d:  ret
```

## 反编译 C

```c
// Dispatcher_MemberSecede::check_error @ 0x81cbbd0

/* Dispatcher_MemberSecede::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MemberSecede::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cbc01;
    }
  }
  bVar1 = true;
LAB_081cbc01:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
