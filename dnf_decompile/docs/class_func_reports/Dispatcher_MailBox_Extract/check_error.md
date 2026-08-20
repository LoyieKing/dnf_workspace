# check_error

`_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_MailBox_Extract::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Extract` | `0x081cceea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cceea  _ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_MailBox_Extract::check_error(CUser*, MSG_BASE&)
# range [0x081cceea, 0x081ccf93]
081cceea +0x00:  push   %ebp
081cceeb +0x01:  mov    %esp,%ebp
081cceed +0x03:  sub    $0x28,%esp
081ccef0 +0x06:  mov    0xc(%ebp),%eax
081ccef3 +0x09:  mov    %eax,(%esp)
081ccef6 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ccefb +0x11:  cmp    $0x3,%eax
081ccefe +0x14:  jne    081ccf0f <+0x25>
081ccf00 +0x16:  mov    0xc(%ebp),%eax
081ccf03 +0x19:  mov    %eax,(%esp)
081ccf06 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ccf0b +0x21:  test   %eax,%eax
081ccf0d +0x23:  jne    081ccf16 <+0x2c>
081ccf0f +0x25:  mov    $0x1,%eax
081ccf14 +0x2a:  jmp    081ccf1b <+0x31>
081ccf16 +0x2c:  mov    $0x0,%eax
081ccf1b +0x31:  test   %al,%al
081ccf1d +0x33:  je     081ccf26 <+0x3c>
081ccf1f +0x35:  mov    $0xffffffff,%eax
081ccf24 +0x3a:  jmp    081ccf92 <+0xa8>
081ccf26 +0x3c:  cmpl   $0x0,0xc(%ebp)
081ccf2a +0x40:  je     081ccf3b <+0x51>
081ccf2c +0x42:  mov    0xc(%ebp),%eax
081ccf2f +0x45:  mov    %eax,(%esp)
081ccf32 +0x48:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081ccf37 +0x4d:  test   %al,%al
081ccf39 +0x4f:  je     081ccf42 <+0x58>
081ccf3b +0x51:  mov    $0x1,%eax
081ccf40 +0x56:  jmp    081ccf47 <+0x5d>
081ccf42 +0x58:  mov    $0x0,%eax
081ccf47 +0x5d:  test   %al,%al
081ccf49 +0x5f:  je     081ccf52 <+0x68>
081ccf4b +0x61:  mov    $0xffffffff,%eax
081ccf50 +0x66:  jmp    081ccf92 <+0xa8>
081ccf52 +0x68:  mov    0x10(%ebp),%eax
081ccf55 +0x6b:  mov    %eax,-0xc(%ebp)
081ccf58 +0x6e:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081ccf5d +0x73:  mov    0xc(%ebp),%edx
081ccf60 +0x76:  mov    %edx,0x4(%esp)
081ccf64 +0x7a:  mov    %eax,(%esp)
081ccf67 +0x7d:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081ccf6c +0x82:  test   %al,%al
081ccf6e +0x84:  je     081ccf77 <+0x8d>
081ccf70 +0x86:  mov    $0x3c,%eax
081ccf75 +0x8b:  jmp    081ccf92 <+0xa8>
081ccf77 +0x8d:  mov    0xc(%ebp),%eax
081ccf7a +0x90:  mov    %eax,(%esp)
081ccf7d +0x93:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081ccf82 +0x98:  test   %al,%al
081ccf84 +0x9a:  je     081ccf8d <+0xa3>
081ccf86 +0x9c:  mov    $0xda,%eax
081ccf8b +0xa1:  jmp    081ccf92 <+0xa8>
081ccf8d +0xa3:  mov    $0x0,%eax
081ccf92 +0xa8:  leave
081ccf93 +0xa9:  ret
```

## 反编译 C

```c
// Dispatcher_MailBox_Extract::check_error @ 0x81cceea

/* Dispatcher_MailBox_Extract::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Extract::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if ((param_2 == (MSG_BASE *)0x0) ||
       (cVar2 = CUser::CheckInTrade((CUser *)param_2), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 0xffffffff;
    }
    else {
      this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_2);
      if (cVar2 == '\0') {
        cVar2 = CUser::CheckInTrade((CUser *)param_2);
        if (cVar2 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = 0xda;
        }
      }
      else {
        uVar4 = 0x3c;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}
```
