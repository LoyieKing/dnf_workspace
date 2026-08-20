# dispatch_sig

`_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci`

`Inter_LoadOnlinePreliminaryTeam::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadOnlinePreliminaryTeam` | `0x084e26b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e26b0  _ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci
#           Inter_LoadOnlinePreliminaryTeam::dispatch_sig(CUser*, char*, int)
# range [0x084e26b0, 0x084e271d]
084e26b0 +0x00:  push   %ebp
084e26b1 +0x01:  mov    %esp,%ebp
084e26b3 +0x03:  sub    $0x18,%esp
084e26b6 +0x06:  mov    0xc(%ebp),%eax
084e26b9 +0x09:  mov    %eax,(%esp)
084e26bc +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e26c1 +0x11:  cmp    $0x2,%eax
084e26c4 +0x14:  setle  %al
084e26c7 +0x17:  test   %al,%al
084e26c9 +0x19:  je     084e26d2 <+0x22>
084e26cb +0x1b:  mov    $0x0,%eax
084e26d0 +0x20:  jmp    084e271b <+0x6b>
084e26d2 +0x22:  mov    0xc(%ebp),%eax
084e26d5 +0x25:  mov    %eax,(%esp)
084e26d8 +0x28:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e26dd +0x2d:  test   %eax,%eax
084e26df +0x2f:  sete   %al
084e26e2 +0x32:  test   %al,%al
084e26e4 +0x34:  je     084e26ed <+0x3d>
084e26e6 +0x36:  mov    $0x0,%eax
084e26eb +0x3b:  jmp    084e271b <+0x6b>
084e26ed +0x3d:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
084e26f2 +0x42:  mov    0x10(%ebp),%edx
084e26f5 +0x45:  mov    %edx,0x8(%esp)
084e26f9 +0x49:  mov    0xc(%ebp),%edx
084e26fc +0x4c:  mov    %edx,0x4(%esp)
084e2700 +0x50:  mov    %eax,(%esp)
084e2703 +0x53:  call   085887c8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc>  ; online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser(CUser*, char*)
084e2708 +0x58:  xor    $0x1,%eax
084e270b +0x5b:  test   %al,%al
084e270d +0x5d:  je     084e2716 <+0x66>
084e270f +0x5f:  mov    $0x5219,%eax
084e2714 +0x64:  jmp    084e271b <+0x6b>
084e2716 +0x66:  mov    $0x0,%eax
084e271b +0x6b:  leave
084e271c +0x6c:  ret
084e271d +0x6d:  nop
```

## 反编译 C

```c
// Inter_LoadOnlinePreliminaryTeam::dispatch_sig @ 0x84e26b0

/* Inter_LoadOnlinePreliminaryTeam::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadOnlinePreliminaryTeam::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      cVar1 = online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser
                        (GlobalData::s_onlinePreliminaryTeamMgr,(CUser *)param_2,(char *)param_3);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x5219;
      }
    }
  }
  return uVar3;
}
```
