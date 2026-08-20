# check_error

`_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_RefundSkill::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RefundSkill` | `0x081dad1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dad1c  _ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_RefundSkill::check_error(CUser*, MSG_BASE&)
# range [0x081dad1c, 0x081dae09]
081dad1c +0x00:  push   %ebp
081dad1d +0x01:  mov    %esp,%ebp
081dad1f +0x03:  sub    $0x28,%esp
081dad22 +0x06:  cmpl   $0x0,0xc(%ebp)
081dad26 +0x0a:  jne    081dad32 <+0x16>
081dad28 +0x0c:  mov    $0xffffffff,%eax
081dad2d +0x11:  jmp    081dae07 <+0xeb>
081dad32 +0x16:  mov    0x10(%ebp),%eax
081dad35 +0x19:  mov    %eax,-0x10(%ebp)
081dad38 +0x1c:  mov    0xc(%ebp),%eax
081dad3b +0x1f:  mov    %eax,(%esp)
081dad3e +0x22:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081dad43 +0x27:  test   %eax,%eax
081dad45 +0x29:  sete   %al
081dad48 +0x2c:  test   %al,%al
081dad4a +0x2e:  je     081dad56 <+0x3a>
081dad4c +0x30:  mov    $0xffffffff,%eax
081dad51 +0x35:  jmp    081dae07 <+0xeb>
081dad56 +0x3a:  mov    0xc(%ebp),%eax
081dad59 +0x3d:  mov    %eax,(%esp)
081dad5c +0x40:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dad61 +0x45:  cmp    $0x3,%eax
081dad64 +0x48:  setne  %al
081dad67 +0x4b:  test   %al,%al
081dad69 +0x4d:  je     081dad75 <+0x59>
081dad6b +0x4f:  mov    $0x7,%eax
081dad70 +0x54:  jmp    081dae07 <+0xeb>
081dad75 +0x59:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dad7a +0x5e:  mov    %eax,(%esp)
081dad7d +0x61:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
081dad82 +0x66:  test   %al,%al
081dad84 +0x68:  je     081dad9a <+0x7e>
081dad86 +0x6a:  mov    -0x10(%ebp),%eax
081dad89 +0x6d:  mov    0xd(%eax),%eax
081dad8c +0x70:  cmp    $0x2897c7,%eax
081dad91 +0x75:  je     081dadae <+0x92>
081dad93 +0x77:  mov    $0x16,%eax
081dad98 +0x7c:  jmp    081dae07 <+0xeb>
081dad9a +0x7e:  mov    -0x10(%ebp),%eax
081dad9d +0x81:  mov    0xd(%eax),%eax
081dada0 +0x84:  cmp    $0x2897c6,%eax
081dada5 +0x89:  je     081dadae <+0x92>
081dada7 +0x8b:  mov    $0x16,%eax
081dadac +0x90:  jmp    081dae07 <+0xeb>
081dadae +0x92:  mov    0xc(%ebp),%eax
081dadb1 +0x95:  mov    %eax,(%esp)
081dadb4 +0x98:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081dadb9 +0x9d:  mov    %eax,-0xc(%ebp)
081dadbc +0xa0:  mov    -0xc(%ebp),%eax
081dadbf +0xa3:  cmp    $0xffffffff,%eax
081dadc2 +0xa6:  je     081dadcb <+0xaf>
081dadc4 +0xa8:  mov    -0xc(%ebp),%eax
081dadc7 +0xab:  test   %eax,%eax
081dadc9 +0xad:  jne    081daddd <+0xc1>
081dadcb +0xaf:  mov    -0x10(%ebp),%eax
081dadce +0xb2:  movzbl 0x11(%eax),%eax
081dadd2 +0xb6:  cmp    $0x1,%al
081dadd4 +0xb8:  jne    081dadef <+0xd3>
081dadd6 +0xba:  mov    $0x13,%eax
081daddb +0xbf:  jmp    081dae07 <+0xeb>
081daddd +0xc1:  mov    -0x10(%ebp),%eax
081dade0 +0xc4:  movzbl 0x11(%eax),%eax
081dade4 +0xc8:  cmp    $0x1,%al
081dade6 +0xca:  je     081dadf0 <+0xd4>
081dade8 +0xcc:  mov    $0x13,%eax
081daded +0xd1:  jmp    081dae07 <+0xeb>
081dadef +0xd3:  nop
081dadf0 +0xd4:  mov    -0x10(%ebp),%eax
081dadf3 +0xd7:  movzbl 0x13(%eax),%eax
081dadf7 +0xdb:  test   %al,%al
081dadf9 +0xdd:  jne    081dae02 <+0xe6>
081dadfb +0xdf:  mov    $0x13,%eax
081dae00 +0xe4:  jmp    081dae07 <+0xeb>
081dae02 +0xe6:  mov    $0x0,%eax
081dae07 +0xeb:  leave
081dae08 +0xec:  ret
081dae09 +0xed:  nop
```

## 反编译 C

```c
// Dispatcher_RefundSkill::check_error @ 0x81dad1c

/* Dispatcher_RefundSkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RefundSkill::check_error(Dispatcher_RefundSkill *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = CUser::get_state(param_1);
      if (iVar3 == 3) {
        this_00 = (GameWorld *)G_GameWorld();
        cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
        if (cVar1 == '\0') {
          if (*(int *)(param_2 + 0xd) != 0x2897c6) {
            return 0x16;
          }
        }
        else if (*(int *)(param_2 + 0xd) != 0x2897c7) {
          return 0x16;
        }
        iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
        if ((iVar3 == -1) || (iVar3 == 0)) {
          if (param_2[0x11] == (MSG_BASE)0x1) {
            return 0x13;
          }
        }
        else if (param_2[0x11] != (MSG_BASE)0x1) {
          return 0x13;
        }
        if (param_2[0x13] == (MSG_BASE)0x0) {
          uVar2 = 0x13;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}
```
