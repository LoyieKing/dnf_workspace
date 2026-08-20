# check_error

`_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_CeraPackageOpen::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CeraPackageOpen` | `0x081e7cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e7cc2  _ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_CeraPackageOpen::check_error(CUser*, MSG_BASE&)
# range [0x081e7cc2, 0x081e7d1b]
081e7cc2 +0x00:  push   %ebp
081e7cc3 +0x01:  mov    %esp,%ebp
081e7cc5 +0x03:  sub    $0x28,%esp
081e7cc8 +0x06:  mov    0xc(%ebp),%eax
081e7ccb +0x09:  mov    %eax,(%esp)
081e7cce +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e7cd3 +0x11:  cmp    $0x3,%eax
081e7cd6 +0x14:  setne  %al
081e7cd9 +0x17:  test   %al,%al
081e7cdb +0x19:  je     081e7ce4 <+0x22>
081e7cdd +0x1b:  mov    $0x13,%eax
081e7ce2 +0x20:  jmp    081e7d1a <+0x58>
081e7ce4 +0x22:  mov    0xc(%ebp),%eax
081e7ce7 +0x25:  mov    %eax,(%esp)
081e7cea +0x28:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081e7cef +0x2d:  test   %al,%al
081e7cf1 +0x2f:  je     081e7cfa <+0x38>
081e7cf3 +0x31:  mov    $0x13,%eax
081e7cf8 +0x36:  jmp    081e7d1a <+0x58>
081e7cfa +0x38:  mov    0xc(%ebp),%eax
081e7cfd +0x3b:  mov    %eax,(%esp)
081e7d00 +0x3e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081e7d05 +0x43:  mov    %eax,-0xc(%ebp)
081e7d08 +0x46:  cmpl   $0x0,-0xc(%ebp)
081e7d0c +0x4a:  jne    081e7d15 <+0x53>
081e7d0e +0x4c:  mov    $0x13,%eax
081e7d13 +0x51:  jmp    081e7d1a <+0x58>
081e7d15 +0x53:  mov    $0x0,%eax
081e7d1a +0x58:  leave
081e7d1b +0x59:  ret
```

## 反编译 C

```c
// Dispatcher_CeraPackageOpen::check_error @ 0x81e7cc2

/* Dispatcher_CeraPackageOpen::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_CeraPackageOpen::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    cVar1 = CUser::CheckInTrade((CUser *)param_2);
    if (cVar1 == '\0') {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar3 = 0x13;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}
```
