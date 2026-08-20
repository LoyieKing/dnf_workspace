# process

`_ZN22DisPatcher_ChangeSkill7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_ChangeSkill::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ChangeSkill` | `0x081bffbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bffbc  _ZN22DisPatcher_ChangeSkill7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_ChangeSkill::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081bffbc, 0x081c00ab]
081bffbc +0x00:  push   %ebp
081bffbd +0x01:  mov    %esp,%ebp
081bffbf +0x03:  push   %edi
081bffc0 +0x04:  push   %esi
081bffc1 +0x05:  push   %ebx
081bffc2 +0x06:  sub    $0x2c,%esp
081bffc5 +0x09:  mov    0x10(%ebp),%eax
081bffc8 +0x0c:  mov    %eax,0x8(%esp)
081bffcc +0x10:  mov    0xc(%ebp),%eax
081bffcf +0x13:  mov    %eax,0x4(%esp)
081bffd3 +0x17:  mov    0x8(%ebp),%eax
081bffd6 +0x1a:  mov    %eax,(%esp)
081bffd9 +0x1d:  call   081c0196 <_ZN22DisPatcher_ChangeSkill11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_ChangeSkill::check_error(CUser*, MSG_BASE&)
081bffde +0x22:  mov    %eax,-0x24(%ebp)
081bffe1 +0x25:  cmpl   $0x0,-0x24(%ebp)
081bffe5 +0x29:  jle    081c000e <+0x52>
081bffe7 +0x2b:  mov    -0x24(%ebp),%eax
081bffea +0x2e:  movzbl %al,%eax
081bffed +0x31:  mov    %eax,0x8(%esp)
081bfff1 +0x35:  movl   $0x1e,0x4(%esp)
081bfff9 +0x3d:  mov    0xc(%ebp),%eax
081bfffc +0x40:  mov    %eax,(%esp)
081bffff +0x43:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c0004 +0x48:  mov    $0xffffffff,%eax
081c0009 +0x4d:  jmp    081c00a4 <+0xe8>
081c000e +0x52:  mov    0x14(%ebp),%eax
081c0011 +0x55:  mov    %eax,-0x20(%ebp)
081c0014 +0x58:  mov    0x10(%ebp),%eax
081c0017 +0x5b:  mov    %eax,-0x1c(%ebp)
081c001a +0x5e:  mov    -0x1c(%ebp),%eax
081c001d +0x61:  movzbl 0xe(%eax),%edx
081c0021 +0x65:  mov    -0x20(%ebp),%eax
081c0024 +0x68:  mov    %dl,0x4(%eax)
081c0027 +0x6b:  mov    -0x1c(%ebp),%eax
081c002a +0x6e:  movzbl 0xf(%eax),%edx
081c002e +0x72:  mov    -0x20(%ebp),%eax
081c0031 +0x75:  mov    %dl,0x5(%eax)
081c0034 +0x78:  mov    0xc(%ebp),%eax
081c0037 +0x7b:  mov    %eax,(%esp)
081c003a +0x7e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081c003f +0x83:  mov    %eax,%ebx
081c0041 +0x85:  mov    -0x1c(%ebp),%eax
081c0044 +0x88:  movzbl 0xf(%eax),%eax
081c0048 +0x8c:  movzbl %al,%edi
081c004b +0x8f:  mov    -0x1c(%ebp),%eax
081c004e +0x92:  movzbl 0xe(%eax),%eax
081c0052 +0x96:  movzbl %al,%esi
081c0055 +0x99:  mov    0xc(%ebp),%eax
081c0058 +0x9c:  mov    %eax,(%esp)
081c005b +0x9f:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081c0060 +0xa4:  mov    %ebx,0xc(%esp)
081c0064 +0xa8:  mov    %edi,0x8(%esp)
081c0068 +0xac:  mov    %esi,0x4(%esp)
081c006c +0xb0:  mov    %eax,(%esp)
081c006f +0xb3:  call   08604428 <_ZN9SkillSlot10skill_moveEhhi>  ; SkillSlot::skill_move(unsigned char, unsigned char, int)
081c0074 +0xb8:  mov    %eax,-0x24(%ebp)
081c0077 +0xbb:  cmpl   $0x0,-0x24(%ebp)
081c007b +0xbf:  jle    081c00a1 <+0xe5>
081c007d +0xc1:  mov    -0x24(%ebp),%eax
081c0080 +0xc4:  movzbl %al,%eax
081c0083 +0xc7:  mov    %eax,0x8(%esp)
081c0087 +0xcb:  movl   $0x1e,0x4(%esp)
081c008f +0xd3:  mov    0xc(%ebp),%eax
081c0092 +0xd6:  mov    %eax,(%esp)
081c0095 +0xd9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c009a +0xde:  mov    $0xffffffff,%eax
081c009f +0xe3:  jmp    081c00a4 <+0xe8>
081c00a1 +0xe5:  mov    -0x24(%ebp),%eax
081c00a4 +0xe8:  add    $0x2c,%esp
081c00a7 +0xeb:  pop    %ebx
081c00a8 +0xec:  pop    %esi
081c00a9 +0xed:  pop    %edi
081c00aa +0xee:  pop    %ebp
081c00ab +0xef:  ret
```

## 反编译 C

```c
// DisPatcher_ChangeSkill::process @ 0x81bffbc

/* DisPatcher_ChangeSkill::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_ChangeSkill::process
          (DisPatcher_ChangeSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  uint uVar3;
  int iVar4;
  SkillSlot *this_00;
  
  uVar3 = check_error(this,param_1,param_2);
  if ((int)uVar3 < 1) {
    *(MSG_BASE *)(param_3 + 4) = param_2[0xe];
    *(MSG_BASE *)(param_3 + 5) = param_2[0xf];
    iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    MVar1 = param_2[0xf];
    MVar2 = param_2[0xe];
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    uVar3 = SkillSlot::skill_move(this_00,(uchar)MVar2,(uchar)MVar1,iVar4);
    if (0 < (int)uVar3) {
      CUser::SendCmdErrorPacket(param_1,0x1e,uVar3 & 0xff);
      uVar3 = 0xffffffff;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1e,uVar3 & 0xff);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
