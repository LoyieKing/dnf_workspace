# check_error

`_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SkillInit::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SkillInit` | `0x081e5a2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5a2c  _ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SkillInit::check_error(CUser*, MSG_BASE&)
# range [0x081e5a2c, 0x081e5aeb]
081e5a2c +0x00:  push   %ebp
081e5a2d +0x01:  mov    %esp,%ebp
081e5a2f +0x03:  sub    $0x28,%esp
081e5a32 +0x06:  cmpl   $0x0,0xc(%ebp)
081e5a36 +0x0a:  jne    081e5a42 <+0x16>
081e5a38 +0x0c:  mov    $0xffffffff,%eax
081e5a3d +0x11:  jmp    081e5aea <+0xbe>
081e5a42 +0x16:  mov    0xc(%ebp),%eax
081e5a45 +0x19:  mov    %eax,(%esp)
081e5a48 +0x1c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e5a4d +0x21:  cmp    $0x3,%eax
081e5a50 +0x24:  setne  %al
081e5a53 +0x27:  test   %al,%al
081e5a55 +0x29:  je     081e5a61 <+0x35>
081e5a57 +0x2b:  mov    $0x7,%eax
081e5a5c +0x30:  jmp    081e5aea <+0xbe>
081e5a61 +0x35:  mov    0x10(%ebp),%eax
081e5a64 +0x38:  mov    %eax,-0x10(%ebp)
081e5a67 +0x3b:  mov    0xc(%ebp),%eax
081e5a6a +0x3e:  mov    %eax,(%esp)
081e5a6d +0x41:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081e5a72 +0x46:  mov    %eax,-0xc(%ebp)
081e5a75 +0x49:  mov    -0xc(%ebp),%eax
081e5a78 +0x4c:  cmp    $0xffffffff,%eax
081e5a7b +0x4f:  je     081e5a84 <+0x58>
081e5a7d +0x51:  mov    -0xc(%ebp),%eax
081e5a80 +0x54:  test   %eax,%eax
081e5a82 +0x56:  jne    081e5a9f <+0x73>
081e5a84 +0x58:  mov    -0x10(%ebp),%eax
081e5a87 +0x5b:  movzbl 0xd(%eax),%eax
081e5a8b +0x5f:  cmp    $0x1,%al
081e5a8d +0x61:  jne    081e5a96 <+0x6a>
081e5a8f +0x63:  mov    $0x13,%eax
081e5a94 +0x68:  jmp    081e5aea <+0xbe>
081e5a96 +0x6a:  mov    -0x10(%ebp),%eax
081e5a99 +0x6d:  movb   $0x0,0xd(%eax)
081e5a9d +0x71:  jmp    081e5ab8 <+0x8c>
081e5a9f +0x73:  mov    -0x10(%ebp),%eax
081e5aa2 +0x76:  movzbl 0xd(%eax),%eax
081e5aa6 +0x7a:  cmp    $0x1,%al
081e5aa8 +0x7c:  je     081e5ab1 <+0x85>
081e5aaa +0x7e:  mov    $0x13,%eax
081e5aaf +0x83:  jmp    081e5aea <+0xbe>
081e5ab1 +0x85:  mov    -0x10(%ebp),%eax
081e5ab4 +0x88:  movb   $0x1,0xd(%eax)
081e5ab8 +0x8c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e5abd +0x91:  mov    %eax,(%esp)
081e5ac0 +0x94:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
081e5ac5 +0x99:  test   %al,%al
081e5ac7 +0x9b:  je     081e5ae5 <+0xb9>
081e5ac9 +0x9d:  mov    0xc(%ebp),%eax
081e5acc +0xa0:  mov    %eax,(%esp)
081e5acf +0xa3:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
081e5ad4 +0xa8:  cmp    $0x0,%eax
081e5ad7 +0xab:  setge  %al
081e5ada +0xae:  test   %al,%al
081e5adc +0xb0:  jne    081e5ae5 <+0xb9>
081e5ade +0xb2:  mov    $0xc,%eax
081e5ae3 +0xb7:  jmp    081e5aea <+0xbe>
081e5ae5 +0xb9:  mov    $0x0,%eax
081e5aea +0xbe:  leave
081e5aeb +0xbf:  ret
```

## 反编译 C

```c
// Dispatcher_SkillInit::check_error @ 0x81e5a2c

/* Dispatcher_SkillInit::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SkillInit::check_error(Dispatcher_SkillInit *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      if ((iVar3 == -1) || (iVar3 == 0)) {
        if (param_2[0xd] == (MSG_BASE)0x1) {
          return 0x13;
        }
        param_2[0xd] = (MSG_BASE)0x0;
      }
      else {
        if (param_2[0xd] != (MSG_BASE)0x1) {
          return 0x13;
        }
        param_2[0xd] = (MSG_BASE)0x1;
      }
      this_00 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
      if ((cVar1 != '\0') &&
         (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), iVar3 < 0)) {
        return 0xc;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 7;
    }
  }
  return uVar2;
}
```
