# refund_skill_process

`_ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo`

`DisPatcher_BuySkill::refund_skill_process(CUser*, char, buySkillInfo&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bfc5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bfc5c  _ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo
#           DisPatcher_BuySkill::refund_skill_process(CUser*, char, buySkillInfo&)
# range [0x081bfc5c, 0x081bfd3b]
081bfc5c +0x00:  push   %ebp
081bfc5d +0x01:  mov    %esp,%ebp
081bfc5f +0x03:  push   %edi
081bfc60 +0x04:  push   %esi
081bfc61 +0x05:  push   %ebx
081bfc62 +0x06:  sub    $0x4c,%esp
081bfc65 +0x09:  mov    0x10(%ebp),%eax
081bfc68 +0x0c:  mov    %al,-0x2c(%ebp)
081bfc6b +0x0f:  movl   $0x0,-0x1c(%ebp)
081bfc72 +0x16:  mov    0x14(%ebp),%eax
081bfc75 +0x19:  movzbl 0x1(%eax),%eax
081bfc79 +0x1d:  movsbl %al,%eax
081bfc7c +0x20:  mov    %eax,-0x38(%ebp)
081bfc7f +0x23:  mov    0xc(%ebp),%eax
081bfc82 +0x26:  mov    %eax,(%esp)
081bfc85 +0x29:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081bfc8a +0x2e:  movsbl %al,%eax
081bfc8d +0x31:  mov    %eax,-0x34(%ebp)
081bfc90 +0x34:  mov    0xc(%ebp),%eax
081bfc93 +0x37:  mov    %eax,(%esp)
081bfc96 +0x3a:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081bfc9b +0x3f:  movsbl %al,%eax
081bfc9e +0x42:  mov    %eax,-0x30(%ebp)
081bfca1 +0x45:  mov    0xc(%ebp),%eax
081bfca4 +0x48:  mov    %eax,(%esp)
081bfca7 +0x4b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081bfcac +0x50:  mov    %eax,%esi
081bfcae +0x52:  mov    0xc(%ebp),%eax
081bfcb1 +0x55:  mov    %eax,(%esp)
081bfcb4 +0x58:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081bfcb9 +0x5d:  mov    %eax,%ebx
081bfcbb +0x5f:  mov    0x14(%ebp),%eax
081bfcbe +0x62:  movzbl (%eax),%eax
081bfcc1 +0x65:  movzbl %al,%edi
081bfcc4 +0x68:  mov    0xc(%ebp),%eax
081bfcc7 +0x6b:  mov    %eax,(%esp)
081bfcca +0x6e:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081bfccf +0x73:  mov    %eax,%edx
081bfcd1 +0x75:  lea    -0x1c(%ebp),%eax
081bfcd4 +0x78:  mov    %eax,0x1c(%esp)
081bfcd8 +0x7c:  mov    -0x38(%ebp),%eax
081bfcdb +0x7f:  mov    %eax,0x18(%esp)
081bfcdf +0x83:  mov    -0x34(%ebp),%eax
081bfce2 +0x86:  mov    %eax,0x14(%esp)
081bfce6 +0x8a:  mov    -0x30(%ebp),%eax
081bfce9 +0x8d:  mov    %eax,0x10(%esp)
081bfced +0x91:  mov    %esi,0xc(%esp)
081bfcf1 +0x95:  mov    %ebx,0x8(%esp)
081bfcf5 +0x99:  mov    %edi,0x4(%esp)
081bfcf9 +0x9d:  mov    %edx,(%esp)
081bfcfc +0xa0:  call   086069ba <_ZN9SkillSlot12refund_skillEiiiiiiRi>  ; SkillSlot::refund_skill(int, int, int, int, int, int, int&)
081bfd01 +0xa5:  mov    0x14(%ebp),%edx
081bfd04 +0xa8:  mov    %eax,0x4(%edx)
081bfd07 +0xab:  mov    0x14(%ebp),%eax
081bfd0a +0xae:  mov    0x4(%eax),%eax
081bfd0d +0xb1:  test   %eax,%eax
081bfd0f +0xb3:  js     081bfd34 <+0xd8>
081bfd11 +0xb5:  mov    0x14(%ebp),%eax
081bfd14 +0xb8:  mov    0x4(%eax),%ebx
081bfd17 +0xbb:  mov    0xc(%ebp),%eax
081bfd1a +0xbe:  mov    %eax,(%esp)
081bfd1d +0xc1:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bfd22 +0xc6:  mov    %ebx,0x4(%esp)
081bfd26 +0xca:  mov    %eax,(%esp)
081bfd29 +0xcd:  call   086068e6 <_ZNK9SkillSlot15get_skill_levelEi>  ; SkillSlot::get_skill_level(int) const
081bfd2e +0xd2:  mov    0x14(%ebp),%edx
081bfd31 +0xd5:  mov    %eax,0x8(%edx)
081bfd34 +0xd8:  add    $0x4c,%esp
081bfd37 +0xdb:  pop    %ebx
081bfd38 +0xdc:  pop    %esi
081bfd39 +0xdd:  pop    %edi
081bfd3a +0xde:  pop    %ebp
081bfd3b +0xdf:  ret
```

## 反编译 C

```c
// DisPatcher_BuySkill::refund_skill_process @ 0x81bfc5c

/* DisPatcher_BuySkill::refund_skill_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::refund_skill_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  SkillSlot *pSVar7;
  undefined4 uVar8;
  int local_20 [4];
  
  local_20[0] = 0;
  bVar1 = param_3[1];
  cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
  cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  bVar2 = *param_3;
  pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
  uVar8 = SkillSlot::refund_skill
                    (pSVar7,(uint)(byte)bVar2,iVar6,iVar5,(int)cVar4,(int)cVar3,(int)(char)bVar1,
                     local_20);
  *(undefined4 *)(param_3 + 4) = uVar8;
  if (-1 < *(int *)(param_3 + 4)) {
    iVar5 = *(int *)(param_3 + 4);
    pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    uVar8 = SkillSlot::get_skill_level(pSVar7,iVar5);
    *(undefined4 *)(param_3 + 8) = uVar8;
  }
  return;
}
```
