# master_new_guild_skill

`_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi`

`SkillSlot::master_new_guild_skill(int, int, int, int, STGuildDBInfoOnly const&, int, int&, int&, short&, int)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086037c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086037c6  _ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi
#           SkillSlot::master_new_guild_skill(int, int, int, int, STGuildDBInfoOnly const&, int, int&, int&, short&, int)
# range [0x086037c6, 0x08603a73]
086037c6 +0x000:  push   %ebp
086037c7 +0x001:  mov    %esp,%ebp
086037c9 +0x003:  push   %esi
086037ca +0x004:  push   %ebx
086037cb +0x005:  sub    $0x40,%esp
086037ce +0x008:  mov    0x1c(%ebp),%eax
086037d1 +0x00b:  movzbl 0x44(%eax),%eax
086037d5 +0x00f:  cmp    $0xf,%al
086037d7 +0x011:  jbe    08603824 <+0x5e>
086037d9 +0x013:  mov    0x1c(%ebp),%eax
086037dc +0x016:  movzbl 0x44(%eax),%eax
086037e0 +0x01a:  movzbl %al,%edx
086037e3 +0x01d:  mov    0x1c(%ebp),%eax
086037e6 +0x020:  mov    %edx,0x18(%esp)
086037ea +0x024:  mov    %eax,0x14(%esp)
086037ee +0x028:  movl   $"BUY GUILD SKILL, GName(%s) , Learn Cnt(%d)",0x10(%esp)
086037f6 +0x030:  movl   $0x102,0xc(%esp)
086037fe +0x038:  movl   $&_ZZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_RsiE19__PRETTY_FUNCTION__,0x8(%esp)
08603806 +0x040:  movl   $"skill_slot.cpp",0x4(%esp)
0860380e +0x048:  movl   $0x1,(%esp)
08603815 +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0860381a +0x054:  mov    $0xfffffffe,%eax
0860381f +0x059:  jmp    08603a6d <+0x2a7>
08603824 +0x05e:  movl   $0x0,-0x1c(%ebp)
0860382b +0x065:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08603830 +0x06a:  mov    0xc(%ebp),%edx
08603833 +0x06d:  mov    %edx,0x8(%esp)
08603837 +0x071:  mov    0x10(%ebp),%edx
0860383a +0x074:  mov    %edx,0x4(%esp)
0860383e +0x078:  mov    %eax,(%esp)
08603841 +0x07b:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
08603846 +0x080:  mov    %eax,-0x1c(%ebp)
08603849 +0x083:  cmpl   $0x0,-0x1c(%ebp)
0860384d +0x087:  jne    08603859 <+0x93>
0860384f +0x089:  mov    $0xffffffff,%eax
08603854 +0x08e:  jmp    08603a6d <+0x2a7>
08603859 +0x093:  mov    0x28(%ebp),%eax
0860385c +0x096:  movl   $0x1,(%eax)
08603862 +0x09c:  mov    0x1c(%ebp),%eax
08603865 +0x09f:  movzbl 0x44(%eax),%eax
08603869 +0x0a3:  movzbl %al,%eax
0860386c +0x0a6:  mov    %eax,-0x18(%ebp)
0860386f +0x0a9:  movl   $0x0,-0x10(%ebp)
08603876 +0x0b0:  jmp    086038ba <+0xf4>
08603878 +0x0b2:  mov    -0x10(%ebp),%edx
0860387b +0x0b5:  mov    0x1c(%ebp),%ecx
0860387e +0x0b8:  mov    %edx,%eax
08603880 +0x0ba:  shl    $0x2,%eax
08603883 +0x0bd:  add    %edx,%eax
08603885 +0x0bf:  lea    (%ecx,%eax,1),%eax
08603888 +0x0c2:  add    $0x40,%eax
0860388b +0x0c5:  mov    0x5(%eax),%eax
0860388e +0x0c8:  cmp    0xc(%ebp),%eax
08603891 +0x0cb:  jne    086038b6 <+0xf0>
08603893 +0x0cd:  mov    -0x10(%ebp),%edx
08603896 +0x0d0:  mov    0x1c(%ebp),%ecx
08603899 +0x0d3:  mov    %edx,%eax
0860389b +0x0d5:  shl    $0x2,%eax
0860389e +0x0d8:  add    %edx,%eax
086038a0 +0x0da:  lea    (%ecx,%eax,1),%eax
086038a3 +0x0dd:  add    $0x49,%eax
086038a6 +0x0e0:  movzbl (%eax),%eax
086038a9 +0x0e3:  movsbl %al,%eax
086038ac +0x0e6:  lea    0x1(%eax),%edx
086038af +0x0e9:  mov    0x28(%ebp),%eax
086038b2 +0x0ec:  mov    %edx,(%eax)
086038b4 +0x0ee:  jmp    086038c7 <+0x101>
086038b6 +0x0f0:  addl   $0x1,-0x10(%ebp)
086038ba +0x0f4:  mov    -0x10(%ebp),%eax
086038bd +0x0f7:  cmp    -0x18(%ebp),%eax
086038c0 +0x0fa:  setl   %al
086038c3 +0x0fd:  test   %al,%al
086038c5 +0x0ff:  jne    08603878 <+0xb2>
086038c7 +0x101:  cmpl   $0x0,0x18(%ebp)
086038cb +0x105:  jg     086038f7 <+0x131>
086038cd +0x107:  mov    0x14(%ebp),%eax
086038d0 +0x10a:  mov    %eax,0x4(%esp)
086038d4 +0x10e:  mov    -0x1c(%ebp),%eax
086038d7 +0x111:  mov    %eax,(%esp)
086038da +0x114:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
086038df +0x119:  mov    0x28(%ebp),%edx
086038e2 +0x11c:  mov    (%edx),%edx
086038e4 +0x11e:  cmp    %edx,%eax
086038e6 +0x120:  setl   %al
086038e9 +0x123:  test   %al,%al
086038eb +0x125:  je     08603942 <+0x17c>
086038ed +0x127:  mov    $0xfffffffd,%eax
086038f2 +0x12c:  jmp    08603a6d <+0x2a7>
086038f7 +0x131:  mov    0x18(%ebp),%eax
086038fa +0x134:  mov    %eax,0x8(%esp)
086038fe +0x138:  mov    0x14(%ebp),%eax
08603901 +0x13b:  mov    %eax,0x4(%esp)
08603905 +0x13f:  mov    -0x1c(%ebp),%eax
08603908 +0x142:  mov    %eax,(%esp)
0860390b +0x145:  call   08350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>  ; CSkill::get_second_growtype_max_level(int, int) const
08603910 +0x14a:  mov    %eax,-0xc(%ebp)
08603913 +0x14d:  cmpl   $0x0,-0xc(%ebp)
08603917 +0x151:  jne    0860392e <+0x168>
08603919 +0x153:  mov    0x14(%ebp),%eax
0860391c +0x156:  mov    %eax,0x4(%esp)
08603920 +0x15a:  mov    -0x1c(%ebp),%eax
08603923 +0x15d:  mov    %eax,(%esp)
08603926 +0x160:  call   08374c08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebd4>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebd4
0860392b +0x165:  mov    %eax,-0xc(%ebp)
0860392e +0x168:  mov    0x28(%ebp),%eax
08603931 +0x16b:  mov    (%eax),%eax
08603933 +0x16d:  cmp    -0xc(%ebp),%eax
08603936 +0x170:  jle    08603942 <+0x17c>
08603938 +0x172:  mov    $0xfffffffd,%eax
0860393d +0x177:  jmp    08603a6d <+0x2a7>
08603942 +0x17c:  mov    0x28(%ebp),%eax
08603945 +0x17f:  mov    (%eax),%eax
08603947 +0x181:  mov    %eax,0x4(%esp)
0860394b +0x185:  mov    -0x1c(%ebp),%eax
0860394e +0x188:  mov    %eax,(%esp)
08603951 +0x18b:  call   0835013a <_ZNK6CSkill22get_guildSkillNeedGoldEi>  ; CSkill::get_guildSkillNeedGold(int) const
08603956 +0x190:  mov    0x24(%ebp),%edx
08603959 +0x193:  mov    %eax,(%edx)
0860395b +0x195:  mov    0x24(%ebp),%eax
0860395e +0x198:  mov    (%eax),%eax
08603960 +0x19a:  test   %eax,%eax
08603962 +0x19c:  js     08603976 <+0x1b0>
08603964 +0x19e:  mov    0x1c(%ebp),%eax
08603967 +0x1a1:  mov    0xa0(%eax),%edx
0860396d +0x1a7:  mov    0x24(%ebp),%eax
08603970 +0x1aa:  mov    (%eax),%eax
08603972 +0x1ac:  cmp    %eax,%edx
08603974 +0x1ae:  jae    08603980 <+0x1ba>
08603976 +0x1b0:  mov    $0xfffffffb,%eax
0860397b +0x1b5:  jmp    08603a6d <+0x2a7>
08603980 +0x1ba:  mov    0x28(%ebp),%eax
08603983 +0x1bd:  mov    (%eax),%eax
08603985 +0x1bf:  mov    %eax,0x4(%esp)
08603989 +0x1c3:  mov    -0x1c(%ebp),%eax
0860398c +0x1c6:  mov    %eax,(%esp)
0860398f +0x1c9:  call   083500f2 <_ZNK6CSkill21get_guildSkillNeedGSPEi>  ; CSkill::get_guildSkillNeedGSP(int) const
08603994 +0x1ce:  mov    0x2c(%ebp),%edx
08603997 +0x1d1:  mov    %ax,(%edx)
0860399a +0x1d4:  mov    0x2c(%ebp),%eax
0860399d +0x1d7:  movzwl (%eax),%eax
086039a0 +0x1da:  test   %ax,%ax
086039a3 +0x1dd:  js     086039b1 <+0x1eb>
086039a5 +0x1df:  mov    0x2c(%ebp),%eax
086039a8 +0x1e2:  movzwl (%eax),%eax
086039ab +0x1e5:  cwtl
086039ac +0x1e6:  cmp    0x30(%ebp),%eax
086039af +0x1e9:  jle    086039bb <+0x1f5>
086039b1 +0x1eb:  mov    $0xfffffffe,%eax
086039b6 +0x1f0:  jmp    08603a6d <+0x2a7>
086039bb +0x1f5:  mov    0x28(%ebp),%eax
086039be +0x1f8:  mov    (%eax),%eax
086039c0 +0x1fa:  mov    %eax,0x4(%esp)
086039c4 +0x1fe:  mov    -0x1c(%ebp),%eax
086039c7 +0x201:  mov    %eax,(%esp)
086039ca +0x204:  call   08350182 <_ZNK6CSkill18get_needGuildLevelEi>  ; CSkill::get_needGuildLevel(int) const
086039cf +0x209:  mov    %eax,-0x14(%ebp)
086039d2 +0x20c:  mov    0x1c(%ebp),%eax
086039d5 +0x20f:  movzbl 0x1b(%eax),%eax
086039d9 +0x213:  movzbl %al,%eax
086039dc +0x216:  cmp    -0x14(%ebp),%eax
086039df +0x219:  jge    086039eb <+0x225>
086039e1 +0x21b:  mov    $0xfffffffa,%eax
086039e6 +0x220:  jmp    08603a6d <+0x2a7>
086039eb +0x225:  mov    0x8(%ebp),%eax
086039ee +0x228:  mov    (%eax),%eax
086039f0 +0x22a:  test   %eax,%eax
086039f2 +0x22c:  je     08603a68 <+0x2a2>
086039f4 +0x22e:  mov    0x28(%ebp),%eax
086039f7 +0x231:  mov    (%eax),%esi
086039f9 +0x233:  mov    0x8(%ebp),%eax
086039fc +0x236:  mov    (%eax),%eax
086039fe +0x238:  mov    %eax,(%esp)
08603a01 +0x23b:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08603a06 +0x240:  mov    %eax,%ebx
08603a08 +0x242:  mov    0x8(%ebp),%eax
08603a0b +0x245:  mov    (%eax),%eax
08603a0d +0x247:  mov    %eax,(%esp)
08603a10 +0x24a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08603a15 +0x24f:  mov    0x8(%ebp),%edx
08603a18 +0x252:  mov    (%edx),%edx
08603a1a +0x254:  lea    0x79700(%edx),%ecx
08603a20 +0x25a:  movl   $0x0,0x14(%esp)
08603a28 +0x262:  mov    %esi,0x10(%esp)
08603a2c +0x266:  mov    0xc(%ebp),%edx
08603a2f +0x269:  mov    %edx,0xc(%esp)
08603a33 +0x26d:  mov    %ebx,0x8(%esp)
08603a37 +0x271:  mov    %eax,0x4(%esp)
08603a3b +0x275:  mov    %ecx,(%esp)
08603a3e +0x278:  call   08682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>  ; cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason)
08603a43 +0x27d:  mov    0x28(%ebp),%eax
08603a46 +0x280:  mov    (%eax),%ebx
08603a48 +0x282:  mov    -0x1c(%ebp),%eax
08603a4b +0x285:  mov    %eax,(%esp)
08603a4e +0x288:  call   0860938a <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x5d>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x5d
08603a53 +0x28d:  mov    0x8(%ebp),%edx
08603a56 +0x290:  mov    (%edx),%edx
08603a58 +0x292:  mov    %ebx,0x8(%esp)
08603a5c +0x296:  mov    %eax,0x4(%esp)
08603a60 +0x29a:  mov    %edx,(%esp)
08603a63 +0x29d:  call   08679a36 <_ZN5CUser21makeGuildSkillMessageEPKci>  ; CUser::makeGuildSkillMessage(char const*, int)
08603a68 +0x2a2:  mov    $0x0,%eax
08603a6d +0x2a7:  add    $0x40,%esp
08603a70 +0x2aa:  pop    %ebx
08603a71 +0x2ab:  pop    %esi
08603a72 +0x2ac:  pop    %ebp
08603a73 +0x2ad:  ret
```

## 反编译 C

```c
// SkillSlot::master_new_guild_skill @ 0x86037c6

/* SkillSlot::master_new_guild_skill(int, int, int, int, STGuildDBInfoOnly const&, int, int&, int&,
   short&, int) */

undefined4 __thiscall
SkillSlot::master_new_guild_skill
          (SkillSlot *this,int param_1,int param_2,int param_3,int param_4,
          STGuildDBInfoOnly *param_5,int param_6,int *param_7,int *param_8,short *param_9,
          int param_10)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  CSkill *this_00;
  undefined4 uVar4;
  char *pcVar5;
  int local_14;
  int local_10;
  
  if ((byte)param_5[0x44] < 0x10) {
    iVar3 = G_CDataManager();
    this_00 = (CSkill *)CDataManager::find_skill(iVar3,param_2);
    if (this_00 == (CSkill *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      *param_8 = 1;
      for (local_14 = 0; local_14 < (int)(uint)(byte)param_5[0x44]; local_14 = local_14 + 1) {
        if (*(int *)(param_5 + local_14 * 5 + 0x45) == param_1) {
          *param_8 = (char)param_5[local_14 * 5 + 0x49] + 1;
          break;
        }
      }
      if (param_4 < 1) {
        iVar3 = CSkill::get_type_max_level(this_00,param_3);
        if (iVar3 < *param_8) {
          return 0xfffffffd;
        }
      }
      else {
        local_10 = CSkill::get_second_growtype_max_level(this_00,param_3,param_4);
        if (local_10 == 0) {
          local_10 = CSkill::get_type_max_level(this_00,param_3);
        }
        if (local_10 < *param_8) {
          return 0xfffffffd;
        }
      }
      iVar3 = CSkill::get_guildSkillNeedGold(this_00,*param_8);
      *param_7 = iVar3;
      if ((*param_7 < 0) || (*(uint *)(param_5 + 0xa0) < (uint)*param_7)) {
        uVar2 = 0xfffffffb;
      }
      else {
        sVar1 = CSkill::get_guildSkillNeedGSP(this_00,*param_8);
        *param_9 = sVar1;
        if ((*param_9 < 0) || (param_10 < *param_9)) {
          uVar2 = 0xfffffffe;
        }
        else {
          iVar3 = CSkill::get_needGuildLevel(this_00,*param_8);
          if ((int)(uint)(byte)param_5[0x1b] < iVar3) {
            uVar2 = 0xfffffffa;
          }
          else {
            if (*(int *)this != 0) {
              iVar3 = *param_8;
              uVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
              uVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
              cUserHistoryLog::SkillAdd
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar4,uVar2,param_1,iVar3,0);
              iVar3 = *param_8;
              pcVar5 = (char *)CSkill::getSkillName(this_00);
              CUser::makeGuildSkillMessage(*(CUser **)this,pcVar5,iVar3);
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::master_new_guild_skill(int, int, int, int, const STGuildDBInfoOnly&, int, int&, int&, short int&, int)"
               ,0x102,"BUY GUILD SKILL, GName(%s) , Learn Cnt(%d)",param_5,(uint)(byte)param_5[0x44]
              );
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}
```
