# try_refund_skills_process

`_ZN19DisPatcher_BuySkill25try_refund_skills_processEP5CUsercR12buySkillInfo`

`DisPatcher_BuySkill::try_refund_skills_process(CUser*, char, buySkillInfo&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bfd3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bfd3c  _ZN19DisPatcher_BuySkill25try_refund_skills_processEP5CUsercR12buySkillInfo
#           DisPatcher_BuySkill::try_refund_skills_process(CUser*, char, buySkillInfo&)
# range [0x081bfd3c, 0x081bfdef]
081bfd3c +0x00:  push   %ebp
081bfd3d +0x01:  mov    %esp,%ebp
081bfd3f +0x03:  push   %edi
081bfd40 +0x04:  push   %esi
081bfd41 +0x05:  push   %ebx
081bfd42 +0x06:  sub    $0x4c,%esp
081bfd45 +0x09:  mov    0x10(%ebp),%eax
081bfd48 +0x0c:  mov    %al,-0x2c(%ebp)
081bfd4b +0x0f:  movl   $0x0,-0x1c(%ebp)
081bfd52 +0x16:  mov    0x14(%ebp),%eax
081bfd55 +0x19:  movzbl 0x1(%eax),%eax
081bfd59 +0x1d:  movsbl %al,%eax
081bfd5c +0x20:  mov    %eax,-0x38(%ebp)
081bfd5f +0x23:  mov    0xc(%ebp),%eax
081bfd62 +0x26:  mov    %eax,(%esp)
081bfd65 +0x29:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081bfd6a +0x2e:  movsbl %al,%eax
081bfd6d +0x31:  mov    %eax,-0x34(%ebp)
081bfd70 +0x34:  mov    0xc(%ebp),%eax
081bfd73 +0x37:  mov    %eax,(%esp)
081bfd76 +0x3a:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081bfd7b +0x3f:  movsbl %al,%eax
081bfd7e +0x42:  mov    %eax,-0x30(%ebp)
081bfd81 +0x45:  mov    0xc(%ebp),%eax
081bfd84 +0x48:  mov    %eax,(%esp)
081bfd87 +0x4b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081bfd8c +0x50:  mov    %eax,%esi
081bfd8e +0x52:  mov    0xc(%ebp),%eax
081bfd91 +0x55:  mov    %eax,(%esp)
081bfd94 +0x58:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081bfd99 +0x5d:  mov    %eax,%ebx
081bfd9b +0x5f:  mov    0x14(%ebp),%eax
081bfd9e +0x62:  movzbl (%eax),%eax
081bfda1 +0x65:  movzbl %al,%edi
081bfda4 +0x68:  mov    0xc(%ebp),%eax
081bfda7 +0x6b:  mov    %eax,(%esp)
081bfdaa +0x6e:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081bfdaf +0x73:  mov    %eax,%edx
081bfdb1 +0x75:  lea    -0x1c(%ebp),%eax
081bfdb4 +0x78:  mov    %eax,0x1c(%esp)
081bfdb8 +0x7c:  mov    -0x38(%ebp),%eax
081bfdbb +0x7f:  mov    %eax,0x18(%esp)
081bfdbf +0x83:  mov    -0x34(%ebp),%eax
081bfdc2 +0x86:  mov    %eax,0x14(%esp)
081bfdc6 +0x8a:  mov    -0x30(%ebp),%eax
081bfdc9 +0x8d:  mov    %eax,0x10(%esp)
081bfdcd +0x91:  mov    %esi,0xc(%esp)
081bfdd1 +0x95:  mov    %ebx,0x8(%esp)
081bfdd5 +0x99:  mov    %edi,0x4(%esp)
081bfdd9 +0x9d:  mov    %edx,(%esp)
081bfddc +0xa0:  call   086078f4 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi>  ; SkillSlot::try_refund_skill(int, int, int, int, int, int, int&)
081bfde1 +0xa5:  mov    0x14(%ebp),%edx
081bfde4 +0xa8:  mov    %eax,0x4(%edx)
081bfde7 +0xab:  add    $0x4c,%esp
081bfdea +0xae:  pop    %ebx
081bfdeb +0xaf:  pop    %esi
081bfdec +0xb0:  pop    %edi
081bfded +0xb1:  pop    %ebp
081bfdee +0xb2:  ret
081bfdef +0xb3:  nop
```

## 反编译 C

```c
// DisPatcher_BuySkill::try_refund_skills_process @ 0x81bfd3c

/* DisPatcher_BuySkill::try_refund_skills_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::try_refund_skills_process
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
  int local_20 [4];
  
  local_20[0] = 0;
  bVar1 = param_3[1];
  cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
  cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  bVar2 = *param_3;
  this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
  uVar7 = SkillSlot::try_refund_skill
                    (this_00,(uint)(byte)bVar2,iVar6,iVar5,(int)cVar4,(int)cVar3,(int)(char)bVar1,
                     local_20);
  *(undefined4 *)(param_3 + 4) = uVar7;
  return;
}
```
