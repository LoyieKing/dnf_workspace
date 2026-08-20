# try_master_new_skills_process

`_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo`

`DisPatcher_BuySkill::try_master_new_skills_process(CUser*, char, buySkillInfo&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bfdf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bfdf0  _ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo
#           DisPatcher_BuySkill::try_master_new_skills_process(CUser*, char, buySkillInfo&)
# range [0x081bfdf0, 0x081bfee5]
081bfdf0 +0x00:  push   %ebp
081bfdf1 +0x01:  mov    %esp,%ebp
081bfdf3 +0x03:  push   %edi
081bfdf4 +0x04:  push   %esi
081bfdf5 +0x05:  push   %ebx
081bfdf6 +0x06:  sub    $0x4c,%esp
081bfdf9 +0x09:  mov    0x10(%ebp),%eax
081bfdfc +0x0c:  mov    %al,-0x2c(%ebp)
081bfdff +0x0f:  mov    0x14(%ebp),%eax
081bfe02 +0x12:  movzbl (%eax),%eax
081bfe05 +0x15:  cmp    $0xc7,%al
081bfe07 +0x17:  jbe    081bfe17 <+0x27>
081bfe09 +0x19:  mov    0x14(%ebp),%eax
081bfe0c +0x1c:  movzbl (%eax),%eax
081bfe0f +0x1f:  cmp    $0xd0,%al
081bfe11 +0x21:  jbe    081bfeda <+0xea>
081bfe17 +0x27:  mov    0xc(%ebp),%eax
081bfe1a +0x2a:  mov    %eax,(%esp)
081bfe1d +0x2d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081bfe22 +0x32:  mov    %eax,-0x1c(%ebp)
081bfe25 +0x35:  mov    -0x1c(%ebp),%eax
081bfe28 +0x38:  cmp    $0xffffffff,%eax
081bfe2b +0x3b:  je     081bfe34 <+0x44>
081bfe2d +0x3d:  mov    -0x1c(%ebp),%eax
081bfe30 +0x40:  test   %eax,%eax
081bfe32 +0x42:  jne    081bfe3f <+0x4f>
081bfe34 +0x44:  cmpb   $0x1,-0x2c(%ebp)
081bfe38 +0x48:  jne    081bfe4b <+0x5b>
081bfe3a +0x4a:  jmp    081bfede <+0xee>
081bfe3f +0x4f:  cmpb   $0x1,-0x2c(%ebp)
081bfe43 +0x53:  jne    081bfedd <+0xed>
081bfe49 +0x59:  jmp    081bfe4c <+0x5c>
081bfe4b +0x5b:  nop
081bfe4c +0x5c:  mov    0x14(%ebp),%eax
081bfe4f +0x5f:  movzbl 0x1(%eax),%eax
081bfe53 +0x63:  movsbl %al,%eax
081bfe56 +0x66:  mov    %eax,-0x38(%ebp)
081bfe59 +0x69:  mov    0xc(%ebp),%eax
081bfe5c +0x6c:  mov    %eax,(%esp)
081bfe5f +0x6f:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081bfe64 +0x74:  movsbl %al,%eax
081bfe67 +0x77:  mov    %eax,-0x34(%ebp)
081bfe6a +0x7a:  mov    0xc(%ebp),%eax
081bfe6d +0x7d:  mov    %eax,(%esp)
081bfe70 +0x80:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081bfe75 +0x85:  movsbl %al,%eax
081bfe78 +0x88:  mov    %eax,-0x30(%ebp)
081bfe7b +0x8b:  mov    0xc(%ebp),%eax
081bfe7e +0x8e:  mov    %eax,(%esp)
081bfe81 +0x91:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081bfe86 +0x96:  mov    %eax,%esi
081bfe88 +0x98:  mov    0xc(%ebp),%eax
081bfe8b +0x9b:  mov    %eax,(%esp)
081bfe8e +0x9e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081bfe93 +0xa3:  mov    %eax,%ebx
081bfe95 +0xa5:  mov    0x14(%ebp),%eax
081bfe98 +0xa8:  movzbl (%eax),%eax
081bfe9b +0xab:  movzbl %al,%edi
081bfe9e +0xae:  mov    0xc(%ebp),%eax
081bfea1 +0xb1:  mov    %eax,(%esp)
081bfea4 +0xb4:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081bfea9 +0xb9:  mov    -0x38(%ebp),%edx
081bfeac +0xbc:  mov    %edx,0x18(%esp)
081bfeb0 +0xc0:  mov    -0x34(%ebp),%edx
081bfeb3 +0xc3:  mov    %edx,0x14(%esp)
081bfeb7 +0xc7:  mov    -0x30(%ebp),%edx
081bfeba +0xca:  mov    %edx,0x10(%esp)
081bfebe +0xce:  mov    %esi,0xc(%esp)
081bfec2 +0xd2:  mov    %ebx,0x8(%esp)
081bfec6 +0xd6:  mov    %edi,0x4(%esp)
081bfeca +0xda:  mov    %eax,(%esp)
081bfecd +0xdd:  call   08607460 <_ZN9SkillSlot21try_master_new_skillsEiiiiii>  ; SkillSlot::try_master_new_skills(int, int, int, int, int, int)
081bfed2 +0xe2:  mov    0x14(%ebp),%edx
081bfed5 +0xe5:  mov    %eax,0x4(%edx)
081bfed8 +0xe8:  jmp    081bfede <+0xee>
081bfeda +0xea:  nop
081bfedb +0xeb:  jmp    081bfede <+0xee>
081bfedd +0xed:  nop
081bfede +0xee:  add    $0x4c,%esp
081bfee1 +0xf1:  pop    %ebx
081bfee2 +0xf2:  pop    %esi
081bfee3 +0xf3:  pop    %edi
081bfee4 +0xf4:  pop    %ebp
081bfee5 +0xf5:  ret
```

## 反编译 C

```c
// DisPatcher_BuySkill::try_master_new_skills_process @ 0x81bfdf0

/* DisPatcher_BuySkill::try_master_new_skills_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::try_master_new_skills_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  SkillSlot *this_00;
  undefined4 uVar7;
  
  if (((byte)*param_3 < 200) || (0xd0 < (byte)*param_3)) {
    iVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((iVar5 == -1) || (iVar5 == 0)) {
      if (param_2 == '\x01') {
        return;
      }
    }
    else if (param_2 != '\x01') {
      return;
    }
    bVar1 = param_3[1];
    cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
    cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    bVar2 = *param_3;
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    uVar7 = SkillSlot::try_master_new_skills
                      (this_00,(uint)(byte)bVar2,iVar6,iVar5,(int)cVar4,(int)cVar3,(int)(char)bVar1)
    ;
    *(undefined4 *)(param_3 + 4) = uVar7;
  }
  return;
}
```
