# SetSkill

`_ZN5CUser8SetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL`

`CUser::SetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864db20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864db20  _ZN5CUser8SetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL
#           CUser::SetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*)
# range [0x0864db20, 0x0864dcf1]
0864db20 +0x000:  push   %ebp
0864db21 +0x001:  mov    %esp,%ebp
0864db23 +0x003:  push   %edi
0864db24 +0x004:  push   %esi
0864db25 +0x005:  push   %ebx
0864db26 +0x006:  sub    $0x6c,%esp
0864db29 +0x009:  mov    0xc(%ebp),%eax
0864db2c +0x00c:  mov    0x8(%eax),%eax
0864db2f +0x00f:  mov    %eax,-0x34(%ebp)
0864db32 +0x012:  mov    0xc(%ebp),%eax
0864db35 +0x015:  add    $0xc,%eax
0864db38 +0x018:  mov    %eax,-0x30(%ebp)
0864db3b +0x01b:  movl   $0x198,-0x2c(%ebp)
0864db42 +0x022:  mov    0xc(%ebp),%eax
0864db45 +0x025:  mov    0x1a4(%eax),%eax
0864db4b +0x02b:  mov    %eax,-0x28(%ebp)
0864db4e +0x02e:  mov    0xc(%ebp),%eax
0864db51 +0x031:  add    $0x1a8,%eax
0864db56 +0x036:  mov    %eax,-0x24(%ebp)
0864db59 +0x039:  mov    0xc(%ebp),%eax
0864db5c +0x03c:  mov    0x340(%eax),%eax
0864db62 +0x042:  mov    %eax,-0x20(%ebp)
0864db65 +0x045:  mov    0xc(%ebp),%eax
0864db68 +0x048:  mov    0x344(%eax),%eax
0864db6e +0x04e:  mov    %eax,-0x1c(%ebp)
0864db71 +0x051:  cmpl   $0x198,-0x2c(%ebp)
0864db78 +0x058:  je     0864dbbf <+0x9f>
0864db7a +0x05a:  mov    0x8(%ebp),%eax
0864db7d +0x05d:  mov    %eax,(%esp)
0864db80 +0x060:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0864db85 +0x065:  mov    %eax,0x14(%esp)
0864db89 +0x069:  movl   $"User %s - size != sizeof( _Mastered_skill ) * _Mastered_skill::SIZE_OF_SKILLSLOT",0x10(%esp)
0864db91 +0x071:  movl   $0x13a6,0xc(%esp)
0864db99 +0x079:  movl   $&_ZZN5CUser8SetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILLE19__PRETTY_FUNCTION__,0x8(%esp)
0864dba1 +0x081:  movl   $"user.cpp",0x4(%esp)
0864dba9 +0x089:  movl   $0x1,(%esp)
0864dbb0 +0x090:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0864dbb5 +0x095:  mov    $0x0,%eax
0864dbba +0x09a:  jmp    0864dce9 <+0x1c9>
0864dbbf +0x09f:  mov    0x8(%ebp),%eax
0864dbc2 +0x0a2:  mov    %eax,(%esp)
0864dbc5 +0x0a5:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864dbca +0x0aa:  test   %eax,%eax
0864dbcc +0x0ac:  sete   %al
0864dbcf +0x0af:  test   %al,%al
0864dbd1 +0x0b1:  je     0864dc13 <+0xf3>
0864dbd3 +0x0b3:  movl   $0x5,0xc(%esp)
0864dbdb +0x0bb:  movl   $0x13ad,0x8(%esp)
0864dbe3 +0x0c3:  movl   $&_ZZN5CUser8SetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILLE19__PRETTY_FUNCTION__,0x4(%esp)
0864dbeb +0x0cb:  lea    -0x44(%ebp),%eax
0864dbee +0x0ce:  mov    %eax,(%esp)
0864dbf1 +0x0d1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864dbf6 +0x0d6:  movl   $"CUser::SetSkill User  m_selected is null",0x4(%esp)
0864dbfe +0x0de:  lea    -0x44(%ebp),%eax
0864dc01 +0x0e1:  mov    %eax,(%esp)
0864dc04 +0x0e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864dc09 +0x0e9:  mov    $0x0,%eax
0864dc0e +0x0ee:  jmp    0864dce9 <+0x1c9>
0864dc13 +0x0f3:  mov    -0x1c(%ebp),%eax
0864dc16 +0x0f6:  mov    %eax,-0x4c(%ebp)
0864dc19 +0x0f9:  mov    -0x20(%ebp),%edi
0864dc1c +0x0fc:  mov    -0x28(%ebp),%esi
0864dc1f +0x0ff:  mov    -0x34(%ebp),%ebx
0864dc22 +0x102:  mov    0x8(%ebp),%eax
0864dc25 +0x105:  mov    %eax,(%esp)
0864dc28 +0x108:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0864dc2d +0x10d:  mov    -0x4c(%ebp),%edx
0864dc30 +0x110:  mov    %edx,0x10(%esp)
0864dc34 +0x114:  mov    %edi,0xc(%esp)
0864dc38 +0x118:  mov    %esi,0x8(%esp)
0864dc3c +0x11c:  mov    %ebx,0x4(%esp)
0864dc40 +0x120:  mov    %eax,(%esp)
0864dc43 +0x123:  call   08694e96 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x16eb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x16eb
0864dc48 +0x128:  mov    -0x24(%ebp),%esi
0864dc4b +0x12b:  mov    -0x30(%ebp),%ebx
0864dc4e +0x12e:  mov    0x8(%ebp),%eax
0864dc51 +0x131:  mov    %eax,(%esp)
0864dc54 +0x134:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0864dc59 +0x139:  mov    -0x2c(%ebp),%edx
0864dc5c +0x13c:  mov    %edx,0xc(%esp)
0864dc60 +0x140:  mov    %esi,0x8(%esp)
0864dc64 +0x144:  mov    %ebx,0x4(%esp)
0864dc68 +0x148:  mov    %eax,(%esp)
0864dc6b +0x14b:  call   08603378 <_ZN9SkillSlot14set_skill_slotEPcS0_i>  ; SkillSlot::set_skill_slot(char*, char*, int)
0864dc70 +0x150:  mov    0xc(%ebp),%eax
0864dc73 +0x153:  add    $0x348,%eax
0864dc78 +0x158:  mov    %eax,0x4(%esp)
0864dc7c +0x15c:  mov    0x8(%ebp),%eax
0864dc7f +0x15f:  mov    %eax,(%esp)
0864dc82 +0x162:  call   08654924 <_ZN5CUser19setSkillCommandDataEPc>  ; CUser::setSkillCommandData(char*)
0864dc87 +0x167:  mov    0x8(%ebp),%eax
0864dc8a +0x16a:  mov    %eax,(%esp)
0864dc8d +0x16d:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0864dc92 +0x172:  movl   $0x0,0x4(%esp)
0864dc9a +0x17a:  mov    %eax,(%esp)
0864dc9d +0x17d:  call   086086b6 <_ZN9SkillSlot19SetLoadStrikerSkillEb>  ; SkillSlot::SetLoadStrikerSkill(bool)
0864dca2 +0x182:  mov    0x8(%ebp),%eax
0864dca5 +0x185:  mov    %eax,(%esp)
0864dca8 +0x188:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0864dcad +0x18d:  cmp    $0x9,%eax
0864dcb0 +0x190:  sete   %al
0864dcb3 +0x193:  test   %al,%al
0864dcb5 +0x195:  je     0864dce4 <+0x1c4>
0864dcb7 +0x197:  mov    0x8(%ebp),%eax
0864dcba +0x19a:  mov    %eax,(%esp)
0864dcbd +0x19d:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0864dcc2 +0x1a2:  mov    0x10(%ebp),%edx
0864dcc5 +0x1a5:  mov    %edx,0x4(%esp)
0864dcc9 +0x1a9:  mov    %eax,(%esp)
0864dccc +0x1ac:  call   08608b1e <_ZN9SkillSlot14loadComboSkillEP15SIG_COMBO_SKILL>  ; SkillSlot::loadComboSkill(SIG_COMBO_SKILL*)
0864dcd1 +0x1b1:  mov    0x8(%ebp),%eax
0864dcd4 +0x1b4:  mov    %eax,(%esp)
0864dcd7 +0x1b7:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0864dcdc +0x1bc:  mov    %eax,(%esp)
0864dcdf +0x1bf:  call   086091fe <_ZN9SkillSlot16verifyComboSkillEv>  ; SkillSlot::verifyComboSkill()
0864dce4 +0x1c4:  mov    $0x1,%eax
0864dce9 +0x1c9:  add    $0x6c,%esp
0864dcec +0x1cc:  pop    %ebx
0864dced +0x1cd:  pop    %esi
0864dcee +0x1ce:  pop    %edi
0864dcef +0x1cf:  pop    %ebp
0864dcf0 +0x1d0:  ret
0864dcf1 +0x1d1:  nop
```

## 反编译 C

```c
// CUser::SetSkill @ 0x864db20

/* WARNING: Removing unreachable block (ram,0x0864db7a) */
/* CUser::SetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*) */

undefined4 __thiscall CUser::SetSkill(CUser *this,SIG_LOAD_SKILL *param_1,SIG_COMBO_SKILL *param_2)

{
  SIG_LOAD_SKILL *pSVar1;
  int iVar2;
  SIG_LOAD_SKILL *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  SkillSlot *pSVar8;
  int iVar9;
  cMyTrace local_48 [16];
  int local_38;
  SIG_LOAD_SKILL *local_34;
  int local_30;
  int local_2c;
  SIG_LOAD_SKILL *local_28;
  int local_24;
  int local_20;
  
  local_38 = *(int *)(param_1 + 8);
  local_34 = param_1 + 0xc;
  local_30 = 0x198;
  local_2c = *(int *)(param_1 + 0x1a4);
  local_28 = param_1 + 0x1a8;
  local_24 = *(int *)(param_1 + 0x340);
  local_20 = *(int *)(param_1 + 0x344);
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  iVar5 = local_20;
  iVar4 = local_24;
  iVar2 = local_2c;
  iVar9 = local_38;
  if (iVar6 == 0) {
    cMyTrace::cMyTrace(local_48,"bool CUser::SetSkill(SIG_LOAD_SKILL*, SIG_COMBO_SKILL*)",0x13ad,5);
    cMyTrace::operator()(local_48,"CUser::SetSkill User  m_selected is null");
    uVar7 = 0;
  }
  else {
    pSVar8 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_remain_sp(pSVar8,iVar9,iVar2,iVar4,iVar5);
    pSVar3 = local_28;
    pSVar1 = local_34;
    pSVar8 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_skill_slot(pSVar8,(char *)pSVar1,(char *)pSVar3,local_30);
    setSkillCommandData(this,(char *)(param_1 + 0x348));
    pSVar8 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::SetLoadStrikerSkill(pSVar8,false);
    iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    if (iVar9 == 9) {
      pSVar8 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::loadComboSkill(pSVar8,param_2);
      pSVar8 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::verifyComboSkill(pSVar8);
    }
    uVar7 = 1;
  }
  return uVar7;
}
```
