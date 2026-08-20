# GetSkill

`_ZNK5CUser8GetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL`

`CUser::GetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864dcf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864dcf2  _ZNK5CUser8GetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL
#           CUser::GetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*) const
# range [0x0864dcf2, 0x0864de57]
0864dcf2 +0x000:  push   %ebp
0864dcf3 +0x001:  mov    %esp,%ebp
0864dcf5 +0x003:  push   %edi
0864dcf6 +0x004:  push   %esi
0864dcf7 +0x005:  push   %ebx
0864dcf8 +0x006:  sub    $0x10c,%esp
0864dcfe +0x00c:  mov    0xc(%ebp),%eax
0864dd01 +0x00f:  movl   $0x0,0x4(%eax)
0864dd08 +0x016:  mov    0xc(%ebp),%eax
0864dd0b +0x019:  add    $0x344,%eax
0864dd10 +0x01e:  mov    %eax,-0xec(%ebp)
0864dd16 +0x024:  mov    0xc(%ebp),%eax
0864dd19 +0x027:  add    $0x340,%eax
0864dd1e +0x02c:  mov    %eax,%edi
0864dd20 +0x02e:  mov    0xc(%ebp),%eax
0864dd23 +0x031:  add    $0x1a4,%eax
0864dd28 +0x036:  mov    %eax,%esi
0864dd2a +0x038:  mov    0xc(%ebp),%eax
0864dd2d +0x03b:  add    $0x8,%eax
0864dd30 +0x03e:  mov    %eax,%ebx
0864dd32 +0x040:  mov    0x8(%ebp),%eax
0864dd35 +0x043:  mov    %eax,(%esp)
0864dd38 +0x046:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0864dd3d +0x04b:  mov    -0xec(%ebp),%edx
0864dd43 +0x051:  mov    %edx,0x10(%esp)
0864dd47 +0x055:  mov    %edi,0xc(%esp)
0864dd4b +0x059:  mov    %esi,0x8(%esp)
0864dd4f +0x05d:  mov    %ebx,0x4(%esp)
0864dd53 +0x061:  mov    %eax,(%esp)
0864dd56 +0x064:  call   08694ec0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1715>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1715
0864dd5b +0x069:  mov    0xc(%ebp),%eax
0864dd5e +0x06c:  add    $0x1a8,%eax
0864dd63 +0x071:  mov    %eax,%esi
0864dd65 +0x073:  mov    0xc(%ebp),%eax
0864dd68 +0x076:  add    $0xc,%eax
0864dd6b +0x079:  mov    %eax,%ebx
0864dd6d +0x07b:  mov    0x8(%ebp),%eax
0864dd70 +0x07e:  mov    %eax,(%esp)
0864dd73 +0x081:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0864dd78 +0x086:  movl   $0x198,0xc(%esp)
0864dd80 +0x08e:  mov    %esi,0x8(%esp)
0864dd84 +0x092:  mov    %ebx,0x4(%esp)
0864dd88 +0x096:  mov    %eax,(%esp)
0864dd8b +0x099:  call   086033cc <_ZNK9SkillSlot14get_skill_slotEPcS0_i>  ; SkillSlot::get_skill_slot(char*, char*, int) const
0864dd90 +0x09e:  lea    -0xe4(%ebp),%eax
0864dd96 +0x0a4:  mov    %eax,%ebx
0864dd98 +0x0a6:  mov    $0x31,%esi
0864dd9d +0x0ab:  jmp    0864ddad <+0xbb>
0864dd9f +0x0ad:  mov    %ebx,(%esp)
0864dda2 +0x0b0:  call   0822da04 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x30ae>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x30ae
0864dda7 +0x0b5:  add    $0x4,%ebx
0864ddaa +0x0b8:  sub    $0x1,%esi
0864ddad +0x0bb:  cmp    $0xffffffff,%esi
0864ddb0 +0x0be:  setne  %al
0864ddb3 +0x0c1:  test   %al,%al
0864ddb5 +0x0c3:  jne    0864dd9f <+0xad>
0864ddb7 +0x0c5:  movl   $0xc8,0x8(%esp)
0864ddbf +0x0cd:  movl   $0x0,0x4(%esp)
0864ddc7 +0x0d5:  lea    -0xe4(%ebp),%eax
0864ddcd +0x0db:  mov    %eax,(%esp)
0864ddd0 +0x0de:  call   0807dcc0 <_init+0x5b8>
0864ddd5 +0x0e3:  lea    -0xe4(%ebp),%eax
0864dddb +0x0e9:  mov    %eax,0x4(%esp)
0864dddf +0x0ed:  mov    0x8(%ebp),%eax
0864dde2 +0x0f0:  mov    %eax,(%esp)
0864dde5 +0x0f3:  call   08654768 <_ZNK5CUser21get_skill_command_bufEPN18STSkillCommandData9STCommandE>  ; CUser::get_skill_command_buf(STSkillCommandData::STCommand*) const
0864ddea +0x0f8:  lea    -0xe4(%ebp),%eax
0864ddf0 +0x0fe:  mov    %eax,-0x1c(%ebp)
0864ddf3 +0x101:  cmpl   $0x0,-0x1c(%ebp)
0864ddf7 +0x105:  je     0864de19 <+0x127>
0864ddf9 +0x107:  mov    0xc(%ebp),%eax
0864ddfc +0x10a:  lea    0x348(%eax),%edx
0864de02 +0x110:  movl   $0xc8,0x8(%esp)
0864de0a +0x118:  mov    -0x1c(%ebp),%eax
0864de0d +0x11b:  mov    %eax,0x4(%esp)
0864de11 +0x11f:  mov    %edx,(%esp)
0864de14 +0x122:  call   0807d8a0 <_init+0x198>
0864de19 +0x127:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864de1e +0x12c:  movzbl 0xa850(%eax),%edx
0864de25 +0x133:  mov    0xc(%ebp),%eax
0864de28 +0x136:  mov    %dl,0x411(%eax)
0864de2e +0x13c:  mov    0x8(%ebp),%eax
0864de31 +0x13f:  mov    %eax,(%esp)
0864de34 +0x142:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0864de39 +0x147:  mov    0x10(%ebp),%edx
0864de3c +0x14a:  mov    %edx,0x4(%esp)
0864de40 +0x14e:  mov    %eax,(%esp)
0864de43 +0x151:  call   08608b78 <_ZNK9SkillSlot21getComboSkillSaveDataEP15SIG_COMBO_SKILL>  ; SkillSlot::getComboSkillSaveData(SIG_COMBO_SKILL*) const
0864de48 +0x156:  mov    $0x1,%eax
0864de4d +0x15b:  add    $0x10c,%esp
0864de53 +0x161:  pop    %ebx
0864de54 +0x162:  pop    %esi
0864de55 +0x163:  pop    %edi
0864de56 +0x164:  pop    %ebp
0864de57 +0x165:  ret
```

## 反编译 C

```c
// CUser::GetSkill @ 0x864dcf2

/* CUser::GetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*) const */

undefined4 __thiscall CUser::GetSkill(CUser *this,SIG_LOAD_SKILL *param_1,SIG_COMBO_SKILL *param_2)

{
  SkillSlot *pSVar1;
  STCommand *this_00;
  int iVar2;
  STCommand local_e8 [200];
  STCommand *local_20;
  
  *(undefined4 *)(param_1 + 4) = 0;
  pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  SkillSlot::get_remain_sp
            (pSVar1,(int *)(param_1 + 8),(int *)(param_1 + 0x1a4),(int *)(param_1 + 0x340),
             (int *)(param_1 + 0x344));
  pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  SkillSlot::get_skill_slot(pSVar1,(char *)(param_1 + 0xc),(char *)(param_1 + 0x1a8),0x198);
  this_00 = local_e8;
  for (iVar2 = 0x31; iVar2 != -1; iVar2 = iVar2 + -1) {
    STSkillCommandData::STCommand::STCommand(this_00);
    this_00 = this_00 + 4;
  }
  memset(local_e8,0,200);
  get_skill_command_buf(this,local_e8);
  local_20 = local_e8;
  if (local_20 != (STCommand *)0x0) {
    memcpy(param_1 + 0x348,local_20,200);
  }
  iVar2 = G_CDataManager();
  param_1[0x411] = *(SIG_LOAD_SKILL *)(iVar2 + 0xa850);
  pSVar1 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
  SkillSlot::getComboSkillSaveData(pSVar1,param_2);
  return 1;
}
```
