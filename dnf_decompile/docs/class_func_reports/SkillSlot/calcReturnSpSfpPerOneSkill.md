# calcReturnSpSfpPerOneSkill

`_ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb`

`SkillSlot::calcReturnSpSfpPerOneSkill(int&, int&, int, _Mastered_skill const*, int, CSkill const*, bool) const`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x0860658e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860658e  _ZNK9SkillSlot26calcReturnSpSfpPerOneSkillERiS0_iPK15_Mastered_skilliPK6CSkillb
#           SkillSlot::calcReturnSpSfpPerOneSkill(int&, int&, int, _Mastered_skill const*, int, CSkill const*, bool) const
# range [0x0860658e, 0x086066f1]
0860658e +0x000:  push   %ebp
0860658f +0x001:  mov    %esp,%ebp
08606591 +0x003:  push   %ebx
08606592 +0x004:  sub    $0x34,%esp
08606595 +0x007:  mov    0x24(%ebp),%eax
08606598 +0x00a:  mov    %al,-0x1c(%ebp)
0860659b +0x00d:  movl   $0x0,-0x14(%ebp)
086065a2 +0x014:  movl   $0x0,-0x10(%ebp)
086065a9 +0x01b:  mov    0x14(%ebp),%eax
086065ac +0x01e:  add    $0x1,%eax
086065af +0x021:  mov    %eax,-0xc(%ebp)
086065b2 +0x024:  jmp    086066c8 <+0x13a>
086065b7 +0x029:  mov    0x8(%ebp),%eax
086065ba +0x02c:  mov    (%eax),%eax
086065bc +0x02e:  mov    %eax,(%esp)
086065bf +0x031:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086065c4 +0x036:  movsbl %al,%ebx
086065c7 +0x039:  mov    0x8(%ebp),%eax
086065ca +0x03c:  mov    (%eax),%eax
086065cc +0x03e:  mov    %eax,(%esp)
086065cf +0x041:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
086065d4 +0x046:  movsbl %al,%eax
086065d7 +0x049:  mov    %ebx,0x8(%esp)
086065db +0x04d:  mov    %eax,0x4(%esp)
086065df +0x051:  mov    0x20(%ebp),%eax
086065e2 +0x054:  mov    %eax,(%esp)
086065e5 +0x057:  call   083505be <_ZNK6CSkill27get_second_growtype_fitnessEii>  ; CSkill::get_second_growtype_fitness(int, int) const
086065ea +0x05c:  mov    %eax,-0x10(%ebp)
086065ed +0x05f:  cmpl   $0x0,-0x10(%ebp)
086065f1 +0x063:  jne    08606615 <+0x87>
086065f3 +0x065:  mov    0x8(%ebp),%eax
086065f6 +0x068:  mov    (%eax),%eax
086065f8 +0x06a:  mov    %eax,(%esp)
086065fb +0x06d:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08606600 +0x072:  movsbl %al,%eax
08606603 +0x075:  mov    %eax,0x4(%esp)
08606607 +0x079:  mov    0x20(%ebp),%eax
0860660a +0x07c:  mov    %eax,(%esp)
0860660d +0x07f:  call   08609378 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x4b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x4b
08606612 +0x084:  mov    %eax,-0x10(%ebp)
08606615 +0x087:  mov    -0xc(%ebp),%eax
08606618 +0x08a:  lea    -0x1(%eax),%edx
0860661b +0x08d:  mov    -0xc(%ebp),%eax
0860661e +0x090:  mov    %eax,0x8(%esp)
08606622 +0x094:  mov    %edx,0x4(%esp)
08606626 +0x098:  mov    0x20(%ebp),%eax
08606629 +0x09b:  mov    %eax,(%esp)
0860662c +0x09e:  call   0835027c <_ZNK6CSkill25get_need_sp_sfp_for_levelEii>  ; CSkill::get_need_sp_sfp_for_level(int, int) const
08606631 +0x0a3:  mov    %eax,-0x14(%ebp)
08606634 +0x0a6:  cmpl   $0x0,-0x14(%ebp)
08606638 +0x0aa:  js     086066e7 <+0x159>
0860663e +0x0b0:  cmpl   $0x0,-0x10(%ebp)
08606642 +0x0b4:  jle    0860666c <+0xde>
08606644 +0x0b6:  mov    $0x64,%eax
08606649 +0x0bb:  sub    -0x10(%ebp),%eax
0860664c +0x0be:  mov    %eax,%ecx
0860664e +0x0c0:  imul   -0x14(%ebp),%ecx
08606652 +0x0c4:  mov    $0x51eb851f,%edx
08606657 +0x0c9:  mov    %ecx,%eax
08606659 +0x0cb:  imul   %edx
0860665b +0x0cd:  sar    $0x5,%edx
0860665e +0x0d0:  mov    %ecx,%eax
08606660 +0x0d2:  sar    $0x1f,%eax
08606663 +0x0d5:  mov    %edx,%ecx
08606665 +0x0d7:  sub    %eax,%ecx
08606667 +0x0d9:  mov    %ecx,%eax
08606669 +0x0db:  mov    %eax,-0x14(%ebp)
0860666c +0x0de:  cmpb   $0x0,-0x1c(%ebp)
08606670 +0x0e2:  je     0860668f <+0x101>
08606672 +0x0e4:  mov    0x20(%ebp),%eax
08606675 +0x0e7:  mov    %eax,(%esp)
08606678 +0x0ea:  call   08609358 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x2b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x2b
0860667d +0x0ef:  mov    %eax,0x4(%esp)
08606681 +0x0f3:  mov    -0x14(%ebp),%eax
08606684 +0x0f6:  mov    %eax,(%esp)
08606687 +0x0f9:  call   08a9afa2 <_Z22getSkillSpendSPOnStealii>  ; getSkillSpendSPOnSteal(int, int)
0860668c +0x0fe:  mov    %eax,-0x14(%ebp)
0860668f +0x101:  cmpl   $0x0,-0x14(%ebp)
08606693 +0x105:  js     086066ea <+0x15c>
08606695 +0x107:  mov    0x20(%ebp),%eax
08606698 +0x10a:  mov    %eax,(%esp)
0860669b +0x10d:  call   0822b5b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc5c
086066a0 +0x112:  test   %al,%al
086066a2 +0x114:  je     086066b5 <+0x127>
086066a4 +0x116:  mov    0x10(%ebp),%eax
086066a7 +0x119:  mov    (%eax),%eax
086066a9 +0x11b:  mov    %eax,%edx
086066ab +0x11d:  add    -0x14(%ebp),%edx
086066ae +0x120:  mov    0x10(%ebp),%eax
086066b1 +0x123:  mov    %edx,(%eax)
086066b3 +0x125:  jmp    086066c4 <+0x136>
086066b5 +0x127:  mov    0xc(%ebp),%eax
086066b8 +0x12a:  mov    (%eax),%eax
086066ba +0x12c:  mov    %eax,%edx
086066bc +0x12e:  add    -0x14(%ebp),%edx
086066bf +0x131:  mov    0xc(%ebp),%eax
086066c2 +0x134:  mov    %edx,(%eax)
086066c4 +0x136:  addl   $0x1,-0xc(%ebp)
086066c8 +0x13a:  mov    0x1c(%ebp),%eax
086066cb +0x13d:  add    %eax,%eax
086066cd +0x13f:  add    0x18(%ebp),%eax
086066d0 +0x142:  movzbl 0x1(%eax),%eax
086066d4 +0x146:  movsbl %al,%eax
086066d7 +0x149:  cmp    -0xc(%ebp),%eax
086066da +0x14c:  setge  %al
086066dd +0x14f:  test   %al,%al
086066df +0x151:  jne    086065b7 <+0x29>
086066e5 +0x157:  jmp    086066eb <+0x15d>
086066e7 +0x159:  nop
086066e8 +0x15a:  jmp    086066eb <+0x15d>
086066ea +0x15c:  nop
086066eb +0x15d:  add    $0x34,%esp
086066ee +0x160:  pop    %ebx
086066ef +0x161:  pop    %ebp
086066f0 +0x162:  ret
086066f1 +0x163:  nop
```

## 反编译 C

```c
// SkillSlot::calcReturnSpSfpPerOneSkill @ 0x860658e

/* SkillSlot::calcReturnSpSfpPerOneSkill(int&, int&, int, _Mastered_skill const*, int, CSkill
   const*, bool) const */

void __thiscall
SkillSlot::calcReturnSpSfpPerOneSkill
          (SkillSlot *this,int *param_1,int *param_2,int param_3,_Mastered_skill *param_4,
          int param_5,CSkill *param_6,bool param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  
  while( true ) {
    local_10 = param_3 + 1;
    if ((char)param_4[param_5 * 2 + 1] < local_10) {
      return;
    }
    cVar1 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
    cVar2 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
    local_14 = CSkill::get_second_growtype_fitness(param_6,(int)cVar2,(int)cVar1);
    if (local_14 == 0) {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
      local_14 = CSkill::get_fitness(param_6,(int)cVar1);
    }
    local_18 = CSkill::get_need_sp_sfp_for_level(param_6,param_3,local_10);
    if (local_18 < 0) break;
    if (0 < local_14) {
      local_18 = ((100 - local_14) * local_18) / 100;
    }
    if (param_7) {
      iVar3 = CSkill::GetStealSPPenalty(param_6);
      local_18 = getSkillSpendSPOnSteal(local_18,iVar3);
    }
    if (local_18 < 0) {
      return;
    }
    cVar1 = CSkill::IsSpecialSkill(param_6);
    param_3 = local_10;
    if (cVar1 == '\0') {
      *param_1 = *param_1 + local_18;
    }
    else {
      *param_2 = *param_2 + local_18;
    }
  }
  return;
}
```
