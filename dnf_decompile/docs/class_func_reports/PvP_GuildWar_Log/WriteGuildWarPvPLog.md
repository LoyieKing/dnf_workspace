# WriteGuildWarPvPLog

`_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser`

`PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)`

| 类 | 地址 |
|---|---|
| `PvP_GuildWar_Log` | `0x085ddad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ddad0  _ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser
#           PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)
# range [0x085ddad0, 0x085ddd7f]
085ddad0 +0x000:  push   %ebp
085ddad1 +0x001:  mov    %esp,%ebp
085ddad3 +0x003:  push   %edi
085ddad4 +0x004:  push   %esi
085ddad5 +0x005:  push   %ebx
085ddad6 +0x006:  sub    $0x95c,%esp
085ddadc +0x00c:  mov    0x10(%ebp),%eax
085ddadf +0x00f:  mov    %al,-0x93c(%ebp)
085ddae5 +0x015:  movl   $0x0,-0x24(%ebp)
085ddaec +0x01c:  jmp    085ddb3c <+0x6c>
085ddaee +0x01e:  mov    -0x24(%ebp),%eax
085ddaf1 +0x021:  shl    $0x2,%eax
085ddaf4 +0x024:  add    0x14(%ebp),%eax
085ddaf7 +0x027:  mov    (%eax),%eax
085ddaf9 +0x029:  test   %eax,%eax
085ddafb +0x02b:  je     085ddb38 <+0x68>
085ddafd +0x02d:  mov    -0x24(%ebp),%eax
085ddb00 +0x030:  shl    $0x2,%eax
085ddb03 +0x033:  add    0x14(%ebp),%eax
085ddb06 +0x036:  mov    (%eax),%eax
085ddb08 +0x038:  mov    %eax,(%esp)
085ddb0b +0x03b:  call   085dfa56 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2dd>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2dd
085ddb10 +0x040:  mov    %eax,%ebx
085ddb12 +0x042:  mov    -0x24(%ebp),%eax
085ddb15 +0x045:  shl    $0x2,%eax
085ddb18 +0x048:  add    0x14(%ebp),%eax
085ddb1b +0x04b:  mov    (%eax),%eax
085ddb1d +0x04d:  mov    %eax,(%esp)
085ddb20 +0x050:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085ddb25 +0x055:  mov    %ebx,0x8(%esp)
085ddb29 +0x059:  mov    %eax,0x4(%esp)
085ddb2d +0x05d:  mov    0x8(%ebp),%eax
085ddb30 +0x060:  mov    %eax,(%esp)
085ddb33 +0x063:  call   085ddd80 <_ZN16PvP_GuildWar_Log14InsertPvPGuildEji>  ; PvP_GuildWar_Log::InsertPvPGuild(unsigned int, int)
085ddb38 +0x068:  addl   $0x1,-0x24(%ebp)
085ddb3c +0x06c:  cmpl   $0x7,-0x24(%ebp)
085ddb40 +0x070:  setle  %al
085ddb43 +0x073:  test   %al,%al
085ddb45 +0x075:  jne    085ddaee <+0x1e>
085ddb47 +0x077:  lea    -0x92c(%ebp),%ebx
085ddb4d +0x07d:  mov    $0x0,%eax
085ddb52 +0x082:  mov    $0x200,%edx
085ddb57 +0x087:  mov    %ebx,%edi
085ddb59 +0x089:  mov    %edx,%ecx
085ddb5b +0x08b:  rep stos %eax,%es:(%edi)
085ddb5d +0x08d:  mov    0x8(%ebp),%eax
085ddb60 +0x090:  movzbl (%eax),%eax
085ddb63 +0x093:  movzbl %al,%ebx
085ddb66 +0x096:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085ddb6d +0x09d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085ddb72 +0x0a2:  mov    0x8(%ebp),%edx
085ddb75 +0x0a5:  mov    0x4(%edx),%edx
085ddb78 +0x0a8:  mov    %eax,%ecx
085ddb7a +0x0aa:  sub    %edx,%ecx
085ddb7c +0x0ac:  mov    %ecx,%edx
085ddb7e +0x0ae:  movsbl -0x93c(%ebp),%eax
085ddb85 +0x0b5:  mov    %ebx,0x14(%esp)
085ddb89 +0x0b9:  mov    %edx,0x10(%esp)
085ddb8d +0x0bd:  mov    %eax,0xc(%esp)
085ddb91 +0x0c1:  mov    0xc(%ebp),%eax
085ddb94 +0x0c4:  mov    %eax,0x8(%esp)
085ddb98 +0x0c8:  movl   $"Room_Idx:%d\tPvP_Mode:%d\tElasp_Time:%d\tG_Cnt:%d\n",0x4(%esp)
085ddba0 +0x0d0:  lea    -0x92c(%ebp),%eax
085ddba6 +0x0d6:  mov    %eax,(%esp)
085ddba9 +0x0d9:  call   0807e440 <_init+0xd38>
085ddbae +0x0de:  mov    0x8(%ebp),%eax
085ddbb1 +0x0e1:  movzbl (%eax),%eax
085ddbb4 +0x0e4:  cmp    $0x8,%al
085ddbb6 +0x0e6:  jbe    085ddbf6 <+0x126>
085ddbb8 +0x0e8:  mov    0x8(%ebp),%eax
085ddbbb +0x0eb:  movzbl (%eax),%eax
085ddbbe +0x0ee:  movzbl %al,%eax
085ddbc1 +0x0f1:  mov    %eax,0x14(%esp)
085ddbc5 +0x0f5:  movl   $"PvP_GuildWar_Log::WriteGuildWarPvPLog() m_guildCnt(%d) > MAX_PVP_PLAYER(8) ",0x10(%esp)
085ddbcd +0x0fd:  movl   $0x12cc,0xc(%esp)
085ddbd5 +0x105:  movl   $&_ZZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
085ddbdd +0x10d:  movl   $"pvp.cpp",0x4(%esp)
085ddbe5 +0x115:  movl   $0x1,(%esp)
085ddbec +0x11c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085ddbf1 +0x121:  jmp    085ddd75 <+0x2a5>
085ddbf6 +0x126:  movl   $0x0,-0x20(%ebp)
085ddbfd +0x12d:  jmp    085ddc92 <+0x1c2>
085ddc02 +0x132:  mov    -0x20(%ebp),%edx
085ddc05 +0x135:  mov    0x8(%ebp),%ecx
085ddc08 +0x138:  mov    %edx,%eax
085ddc0a +0x13a:  add    %eax,%eax
085ddc0c +0x13c:  add    %edx,%eax
085ddc0e +0x13e:  shl    $0x2,%eax
085ddc11 +0x141:  lea    (%ecx,%eax,1),%eax
085ddc14 +0x144:  add    $0x8,%eax
085ddc17 +0x147:  mov    (%eax),%eax
085ddc19 +0x149:  test   %eax,%eax
085ddc1b +0x14b:  je     085ddc8e <+0x1be>
085ddc1d +0x14d:  mov    -0x20(%ebp),%edx
085ddc20 +0x150:  mov    0x8(%ebp),%ecx
085ddc23 +0x153:  mov    %edx,%eax
085ddc25 +0x155:  add    %eax,%eax
085ddc27 +0x157:  add    %edx,%eax
085ddc29 +0x159:  shl    $0x2,%eax
085ddc2c +0x15c:  movzbl 0x10(%eax,%ecx,1),%eax
085ddc31 +0x161:  movzbl %al,%ebx
085ddc34 +0x164:  mov    -0x20(%ebp),%edx
085ddc37 +0x167:  mov    0x8(%ebp),%ecx
085ddc3a +0x16a:  mov    %edx,%eax
085ddc3c +0x16c:  add    %eax,%eax
085ddc3e +0x16e:  add    %edx,%eax
085ddc40 +0x170:  shl    $0x2,%eax
085ddc43 +0x173:  lea    (%ecx,%eax,1),%eax
085ddc46 +0x176:  add    $0xc,%eax
085ddc49 +0x179:  mov    (%eax),%ecx
085ddc4b +0x17b:  mov    -0x20(%ebp),%edx
085ddc4e +0x17e:  mov    0x8(%ebp),%esi
085ddc51 +0x181:  mov    %edx,%eax
085ddc53 +0x183:  add    %eax,%eax
085ddc55 +0x185:  add    %edx,%eax
085ddc57 +0x187:  shl    $0x2,%eax
085ddc5a +0x18a:  lea    (%esi,%eax,1),%eax
085ddc5d +0x18d:  add    $0x8,%eax
085ddc60 +0x190:  mov    (%eax),%eax
085ddc62 +0x192:  mov    %ebx,0x14(%esp)
085ddc66 +0x196:  mov    %ecx,0x10(%esp)
085ddc6a +0x19a:  mov    %eax,0xc(%esp)
085ddc6e +0x19e:  lea    -0x92c(%ebp),%eax
085ddc74 +0x1a4:  mov    %eax,0x8(%esp)
085ddc78 +0x1a8:  movl   $"%s->\t\tG_Key:%d\tPoint:%d\tM_Cnt:%d\n",0x4(%esp)
085ddc80 +0x1b0:  lea    -0x92c(%ebp),%eax
085ddc86 +0x1b6:  mov    %eax,(%esp)
085ddc89 +0x1b9:  call   0807e440 <_init+0xd38>
085ddc8e +0x1be:  addl   $0x1,-0x20(%ebp)
085ddc92 +0x1c2:  mov    0x8(%ebp),%eax
085ddc95 +0x1c5:  movzbl (%eax),%eax
085ddc98 +0x1c8:  movzbl %al,%eax
085ddc9b +0x1cb:  cmp    -0x20(%ebp),%eax
085ddc9e +0x1ce:  setg   %al
085ddca1 +0x1d1:  test   %al,%al
085ddca3 +0x1d3:  jne    085ddc02 <+0x132>
085ddca9 +0x1d9:  lea    -0x12c(%ebp),%ebx
085ddcaf +0x1df:  mov    $0x0,%eax
085ddcb4 +0x1e4:  mov    $0x40,%edx
085ddcb9 +0x1e9:  mov    %ebx,%edi
085ddcbb +0x1eb:  mov    %edx,%ecx
085ddcbd +0x1ed:  rep stos %eax,%es:(%edi)
085ddcbf +0x1ef:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085ddcc4 +0x1f4:  mov    %eax,(%esp)
085ddcc7 +0x1f7:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
085ddccc +0x1fc:  mov    %eax,0x8(%esp)
085ddcd0 +0x200:  movl   $"./log/%s/GuildWarResult",0x4(%esp)
085ddcd8 +0x208:  lea    -0x12c(%ebp),%eax
085ddcde +0x20e:  mov    %eax,(%esp)
085ddce1 +0x211:  call   0807e440 <_init+0xd38>
085ddce6 +0x216:  movl   $0x12dc,0x8(%esp)
085ddcee +0x21e:  movl   $&_ZZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085ddcf6 +0x226:  lea    -0x2c(%ebp),%eax
085ddcf9 +0x229:  mov    %eax,(%esp)
085ddcfc +0x22c:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
085ddd01 +0x231:  lea    -0x92c(%ebp),%eax
085ddd07 +0x237:  mov    %eax,0xc(%esp)
085ddd0b +0x23b:  movl   $"%s",0x8(%esp)
085ddd13 +0x243:  lea    -0x12c(%ebp),%eax
085ddd19 +0x249:  mov    %eax,0x4(%esp)
085ddd1d +0x24d:  lea    -0x2c(%ebp),%eax
085ddd20 +0x250:  mov    %eax,(%esp)
085ddd23 +0x253:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
085ddd28 +0x258:  mov    0x8(%ebp),%eax
085ddd2b +0x25b:  mov    %eax,(%esp)
085ddd2e +0x25e:  call   085dda9a <_ZN16PvP_GuildWar_Log5ClearEv>  ; PvP_GuildWar_Log::Clear()
085ddd33 +0x263:  movl   $0x0,-0x1c(%ebp)
085ddd3a +0x26a:  jmp    085ddd6a <+0x29a>
085ddd3c +0x26c:  mov    -0x1c(%ebp),%eax
085ddd3f +0x26f:  shl    $0x2,%eax
085ddd42 +0x272:  add    0x14(%ebp),%eax
085ddd45 +0x275:  mov    (%eax),%eax
085ddd47 +0x277:  test   %eax,%eax
085ddd49 +0x279:  je     085ddd66 <+0x296>
085ddd4b +0x27b:  mov    -0x1c(%ebp),%eax
085ddd4e +0x27e:  shl    $0x2,%eax
085ddd51 +0x281:  add    0x14(%ebp),%eax
085ddd54 +0x284:  mov    (%eax),%eax
085ddd56 +0x286:  movl   $0x0,0x4(%esp)
085ddd5e +0x28e:  mov    %eax,(%esp)
085ddd61 +0x291:  call   085dfa64 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2eb>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2eb
085ddd66 +0x296:  addl   $0x1,-0x1c(%ebp)
085ddd6a +0x29a:  cmpl   $0x7,-0x1c(%ebp)
085ddd6e +0x29e:  setle  %al
085ddd71 +0x2a1:  test   %al,%al
085ddd73 +0x2a3:  jne    085ddd3c <+0x26c>
085ddd75 +0x2a5:  add    $0x95c,%esp
085ddd7b +0x2ab:  pop    %ebx
085ddd7c +0x2ac:  pop    %esi
085ddd7d +0x2ad:  pop    %edi
085ddd7e +0x2ae:  pop    %ebp
085ddd7f +0x2af:  ret
```

## 反编译 C

```c
// PvP_GuildWar_Log::WriteGuildWarPvPLog @ 0x85ddad0

/* PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**) */

void __thiscall
PvP_GuildWar_Log::WriteGuildWarPvPLog
          (PvP_GuildWar_Log *this,int param_1,char param_2,CUser **param_3)

{
  PvP_GuildWar_Log PVar1;
  uint uVar2;
  CEnvironment *this_00;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_930 [2048];
  char local_130 [256];
  CMyFileLog local_30 [8];
  int local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    if (param_3[local_28] != (CUser *)0x0) {
      iVar4 = CUser::get_guildwar_point_per_pvpplay(param_3[local_28]);
      uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_3[local_28]);
      InsertPvPGuild(this,uVar2,iVar4);
    }
  }
  pcVar5 = local_930;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  PVar1 = *this;
  iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  sprintf(local_930,"Room_Idx:%d\tPvP_Mode:%d\tElasp_Time:%d\tG_Cnt:%d\n",param_1,(int)param_2,
          iVar4 - *(int *)(this + 4),(uint)(byte)PVar1);
  if ((byte)*this < 9) {
    for (local_24 = 0; local_24 < (int)(uint)(byte)*this; local_24 = local_24 + 1) {
      if (*(int *)(this + local_24 * 0xc + 8) != 0) {
        sprintf(local_930,"%s->\t\tG_Key:%d\tPoint:%d\tM_Cnt:%d\n",local_930,
                *(undefined4 *)(this + local_24 * 0xc + 8),
                *(undefined4 *)(this + local_24 * 0xc + 0xc),(uint)(byte)this[local_24 * 0xc + 0x10]
               );
      }
    }
    pcVar5 = local_130;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
    }
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar3 = CEnvironment::get_file_name(this_00);
    sprintf(local_130,"./log/%s/GuildWarResult",uVar3);
    CMyFileLog::CMyFileLog
              (local_30,"void PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)",0x12dc);
    CMyFileLog::operator()(local_30,local_130,"%s",local_930);
    Clear(this);
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (param_3[local_20] != (CUser *)0x0) {
        CUser::set_guildwar_point_per_pvpplay(param_3[local_20],0);
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"pvp.cpp","void PvP_GuildWar_Log::WriteGuildWarPvPLog(int, char, CUser**)",0x12cc,
               "PvP_GuildWar_Log::WriteGuildWarPvPLog() m_guildCnt(%d) > MAX_PVP_PLAYER(8) ",
               (uint)(byte)*this);
  }
  return;
}
```
