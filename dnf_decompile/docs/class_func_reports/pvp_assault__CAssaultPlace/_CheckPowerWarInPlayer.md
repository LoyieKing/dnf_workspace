# _CheckPowerWarInPlayer

`_ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_`

`pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer(ENUM_POWER_SIDE_TYPE, ENUM_POWER_WAR_WINNER_OR_LOSER, int&, int&, int&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7362  _ZN11pvp_assault13CAssaultPlace22_CheckPowerWarInPlayerE20ENUM_POWER_SIDE_TYPE30ENUM_POWER_WAR_WINNER_OR_LOSERRiS3_S3_
#           pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer(ENUM_POWER_SIDE_TYPE, ENUM_POWER_WAR_WINNER_OR_LOSER, int&, int&, int&)
# range [0x082e7362, 0x082e75c9]
082e7362 +0x000:  push   %ebp
082e7363 +0x001:  mov    %esp,%ebp
082e7365 +0x003:  push   %esi
082e7366 +0x004:  push   %ebx
082e7367 +0x005:  sub    $0x30,%esp
082e736a +0x008:  movl   $0x0,-0x10(%ebp)
082e7371 +0x00f:  jmp    082e75af <+0x24d>
082e7376 +0x014:  mov    -0x10(%ebp),%eax
082e7379 +0x017:  shl    $0x5,%eax
082e737c +0x01a:  add    0x8(%ebp),%eax
082e737f +0x01d:  mov    %eax,(%esp)
082e7382 +0x020:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e7387 +0x025:  test   %al,%al
082e7389 +0x027:  jne    082e75aa <+0x248>
082e738f +0x02d:  mov    -0x10(%ebp),%eax
082e7392 +0x030:  shl    $0x5,%eax
082e7395 +0x033:  add    0x8(%ebp),%eax
082e7398 +0x036:  mov    %eax,(%esp)
082e739b +0x039:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e73a0 +0x03e:  mov    %eax,-0xc(%ebp)
082e73a3 +0x041:  cmpl   $0x0,-0xc(%ebp)
082e73a7 +0x045:  je     082e73bf <+0x5d>
082e73a9 +0x047:  mov    -0xc(%ebp),%eax
082e73ac +0x04a:  mov    %eax,(%esp)
082e73af +0x04d:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
082e73b4 +0x052:  test   %al,%al
082e73b6 +0x054:  je     082e73bf <+0x5d>
082e73b8 +0x056:  mov    $0x1,%eax
082e73bd +0x05b:  jmp    082e73c4 <+0x62>
082e73bf +0x05d:  mov    $0x0,%eax
082e73c4 +0x062:  test   %al,%al
082e73c6 +0x064:  je     082e75ab <+0x249>
082e73cc +0x06a:  cmpl   $0x1,0x10(%ebp)
082e73d0 +0x06e:  jne    082e748c <+0x12a>
082e73d6 +0x074:  mov    -0xc(%ebp),%eax
082e73d9 +0x077:  mov    %eax,(%esp)
082e73dc +0x07a:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082e73e1 +0x07f:  movsbl %al,%edx
082e73e4 +0x082:  mov    0xc(%ebp),%eax
082e73e7 +0x085:  cmp    %eax,%edx
082e73e9 +0x087:  sete   %al
082e73ec +0x08a:  test   %al,%al
082e73ee +0x08c:  je     082e7456 <+0xf4>
082e73f0 +0x08e:  mov    -0x10(%ebp),%eax
082e73f3 +0x091:  shl    $0x5,%eax
082e73f6 +0x094:  add    0x8(%ebp),%eax
082e73f9 +0x097:  mov    %eax,(%esp)
082e73fc +0x09a:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082e7401 +0x09f:  cmp    $0x5,%eax
082e7404 +0x0a2:  sete   %al
082e7407 +0x0a5:  test   %al,%al
082e7409 +0x0a7:  je     082e7418 <+0xb6>
082e740b +0x0a9:  mov    0x1c(%ebp),%eax
082e740e +0x0ac:  mov    (%eax),%eax
082e7410 +0x0ae:  lea    0x1(%eax),%edx
082e7413 +0x0b1:  mov    0x1c(%ebp),%eax
082e7416 +0x0b4:  mov    %edx,(%eax)
082e7418 +0x0b6:  mov    0x14(%ebp),%eax
082e741b +0x0b9:  mov    (%eax),%eax
082e741d +0x0bb:  lea    0x1(%eax),%edx
082e7420 +0x0be:  mov    0x14(%ebp),%eax
082e7423 +0x0c1:  mov    %edx,(%eax)
082e7425 +0x0c3:  mov    -0x10(%ebp),%eax
082e7428 +0x0c6:  shl    $0x5,%eax
082e742b +0x0c9:  add    0x8(%ebp),%eax
082e742e +0x0cc:  movl   $0x1,0x4(%esp)
082e7436 +0x0d4:  mov    %eax,(%esp)
082e7439 +0x0d7:  call   082f0596 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x31a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x31a
082e743e +0x0dc:  mov    -0xc(%ebp),%eax
082e7441 +0x0df:  movl   $0x1,0x4(%esp)
082e7449 +0x0e7:  mov    %eax,(%esp)
082e744c +0x0ea:  call   082f0b60 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x8e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x8e4
082e7451 +0x0ef:  jmp    082e753a <+0x1d8>
082e7456 +0x0f4:  mov    0x18(%ebp),%eax
082e7459 +0x0f7:  mov    (%eax),%eax
082e745b +0x0f9:  lea    0x1(%eax),%edx
082e745e +0x0fc:  mov    0x18(%ebp),%eax
082e7461 +0x0ff:  mov    %edx,(%eax)
082e7463 +0x101:  mov    -0x10(%ebp),%eax
082e7466 +0x104:  shl    $0x5,%eax
082e7469 +0x107:  add    0x8(%ebp),%eax
082e746c +0x10a:  mov    %eax,(%esp)
082e746f +0x10d:  call   082e6a40 <_ZN11pvp_assault10CAssaulter7DieUserEv>  ; pvp_assault::CAssaulter::DieUser()
082e7474 +0x112:  mov    -0xc(%ebp),%eax
082e7477 +0x115:  movl   $0x64,0x4(%esp)
082e747f +0x11d:  mov    %eax,(%esp)
082e7482 +0x120:  call   082f09c4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x748>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x748
082e7487 +0x125:  jmp    082e753a <+0x1d8>
082e748c +0x12a:  mov    -0xc(%ebp),%eax
082e748f +0x12d:  mov    %eax,(%esp)
082e7492 +0x130:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082e7497 +0x135:  movsbl %al,%edx
082e749a +0x138:  mov    0xc(%ebp),%eax
082e749d +0x13b:  cmp    %eax,%edx
082e749f +0x13d:  sete   %al
082e74a2 +0x140:  test   %al,%al
082e74a4 +0x142:  je     082e74d9 <+0x177>
082e74a6 +0x144:  mov    0x18(%ebp),%eax
082e74a9 +0x147:  mov    (%eax),%eax
082e74ab +0x149:  lea    0x1(%eax),%edx
082e74ae +0x14c:  mov    0x18(%ebp),%eax
082e74b1 +0x14f:  mov    %edx,(%eax)
082e74b3 +0x151:  mov    -0x10(%ebp),%eax
082e74b6 +0x154:  shl    $0x5,%eax
082e74b9 +0x157:  add    0x8(%ebp),%eax
082e74bc +0x15a:  mov    %eax,(%esp)
082e74bf +0x15d:  call   082e6a40 <_ZN11pvp_assault10CAssaulter7DieUserEv>  ; pvp_assault::CAssaulter::DieUser()
082e74c4 +0x162:  mov    -0xc(%ebp),%eax
082e74c7 +0x165:  movl   $0x64,0x4(%esp)
082e74cf +0x16d:  mov    %eax,(%esp)
082e74d2 +0x170:  call   082f09c4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x748>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x748
082e74d7 +0x175:  jmp    082e753a <+0x1d8>
082e74d9 +0x177:  mov    -0x10(%ebp),%eax
082e74dc +0x17a:  shl    $0x5,%eax
082e74df +0x17d:  add    0x8(%ebp),%eax
082e74e2 +0x180:  mov    %eax,(%esp)
082e74e5 +0x183:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082e74ea +0x188:  cmp    $0x5,%eax
082e74ed +0x18b:  sete   %al
082e74f0 +0x18e:  test   %al,%al
082e74f2 +0x190:  je     082e7501 <+0x19f>
082e74f4 +0x192:  mov    0x1c(%ebp),%eax
082e74f7 +0x195:  mov    (%eax),%eax
082e74f9 +0x197:  lea    0x1(%eax),%edx
082e74fc +0x19a:  mov    0x1c(%ebp),%eax
082e74ff +0x19d:  mov    %edx,(%eax)
082e7501 +0x19f:  mov    0x14(%ebp),%eax
082e7504 +0x1a2:  mov    (%eax),%eax
082e7506 +0x1a4:  lea    0x1(%eax),%edx
082e7509 +0x1a7:  mov    0x14(%ebp),%eax
082e750c +0x1aa:  mov    %edx,(%eax)
082e750e +0x1ac:  mov    -0x10(%ebp),%eax
082e7511 +0x1af:  shl    $0x5,%eax
082e7514 +0x1b2:  add    0x8(%ebp),%eax
082e7517 +0x1b5:  movl   $0x1,0x4(%esp)
082e751f +0x1bd:  mov    %eax,(%esp)
082e7522 +0x1c0:  call   082f0596 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x31a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x31a
082e7527 +0x1c5:  mov    -0xc(%ebp),%eax
082e752a +0x1c8:  movl   $0x1,0x4(%esp)
082e7532 +0x1d0:  mov    %eax,(%esp)
082e7535 +0x1d3:  call   082f0b60 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x8e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x8e4
082e753a +0x1d8:  lea    -0x1c(%ebp),%eax
082e753d +0x1db:  mov    %eax,(%esp)
082e7540 +0x1de:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e7545 +0x1e3:  mov    -0xc(%ebp),%eax
082e7548 +0x1e6:  mov    %eax,(%esp)
082e754b +0x1e9:  call   082f09ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x772>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x772
082e7550 +0x1ee:  movzwl %ax,%eax
082e7553 +0x1f1:  mov    %eax,0xc(%esp)
082e7557 +0x1f5:  mov    -0x10(%ebp),%eax
082e755a +0x1f8:  mov    %eax,0x8(%esp)
082e755e +0x1fc:  lea    -0x1c(%ebp),%eax
082e7561 +0x1ff:  mov    %eax,0x4(%esp)
082e7565 +0x203:  mov    0x8(%ebp),%eax
082e7568 +0x206:  mov    %eax,(%esp)
082e756b +0x209:  call   082e90a0 <_ZN11pvp_assault13CAssaultPlace13_MakeChangeHpEP11PacketGuardii>  ; pvp_assault::CAssaultPlace::_MakeChangeHp(PacketGuard*, int, int)
082e7570 +0x20e:  lea    -0x1c(%ebp),%eax
082e7573 +0x211:  mov    %eax,0x4(%esp)
082e7577 +0x215:  mov    0x8(%ebp),%eax
082e757a +0x218:  mov    %eax,(%esp)
082e757d +0x21b:  call   082e6d92 <_ZN11pvp_assault13CAssaultPlace17_SendPacketToVillER11PacketGuard>  ; pvp_assault::CAssaultPlace::_SendPacketToVill(PacketGuard&)
082e7582 +0x220:  lea    -0x1c(%ebp),%eax
082e7585 +0x223:  mov    %eax,(%esp)
082e7588 +0x226:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e758d +0x22b:  jmp    082e75ab <+0x249>
082e758f +0x22d:  mov    %edx,%ebx
082e7591 +0x22f:  mov    %eax,%esi
082e7593 +0x231:  lea    -0x1c(%ebp),%eax
082e7596 +0x234:  mov    %eax,(%esp)
082e7599 +0x237:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e759e +0x23c:  mov    %esi,%eax
082e75a0 +0x23e:  mov    %ebx,%edx
082e75a2 +0x240:  mov    %eax,(%esp)
082e75a5 +0x243:  call   08ae3750 <_Unwind_Resume>
082e75aa +0x248:  nop
082e75ab +0x249:  addl   $0x1,-0x10(%ebp)
082e75af +0x24d:  cmpl   $0x7,-0x10(%ebp)
082e75b3 +0x251:  setle  %al
082e75b6 +0x254:  test   %al,%al
082e75b8 +0x256:  jne    082e7376 <+0x14>
082e75be +0x25c:  mov    $0x1,%eax
082e75c3 +0x261:  add    $0x30,%esp
082e75c6 +0x264:  pop    %ebx
082e75c7 +0x265:  pop    %esi
082e75c8 +0x266:  pop    %ebp
082e75c9 +0x267:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer @ 0x82e7362

/* pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer(ENUM_POWER_SIDE_TYPE,
   ENUM_POWER_WAR_WINNER_OR_LOSER, int&, int&, int&) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_CheckPowerWarInPlayer
          (CAssaultPlace *this,int param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  PacketGuard local_20 [12];
  int local_14;
  CUserCharacInfo *local_10;
  
  local_14 = 0;
  do {
    if (7 < local_14) {
      return 1;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar2 == '\0') {
      local_10 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
      if (local_10 == (CUserCharacInfo *)0x0) {
LAB_082e73bf:
        bVar1 = false;
      }
      else {
        cVar2 = CUserCharacInfo::isJoinPowerWar(local_10);
        if (cVar2 == '\0') goto LAB_082e73bf;
        bVar1 = true;
      }
      if (bVar1) {
        if (param_3 == 1) {
          cVar2 = CUser::getPowerSide((CUser *)local_10);
          if (cVar2 == param_2) {
            iVar3 = CAssaulter::GetState((CAssaulter *)(this + local_14 * 0x20));
            if (iVar3 == 5) {
              *param_6 = *param_6 + 1;
            }
            *param_4 = *param_4 + 1;
            CAssaulter::SetPowerWarWinner((CAssaulter *)(this + local_14 * 0x20),true);
            CUserCharacInfo::SetCurCharacSuperState(local_10,true);
          }
          else {
            *param_5 = *param_5 + 1;
            CAssaulter::DieUser((CAssaulter *)(this + local_14 * 0x20));
            CUserCharacInfo::setPowerWarHP(local_10,100);
          }
        }
        else {
          cVar2 = CUser::getPowerSide((CUser *)local_10);
          if (cVar2 == param_2) {
            *param_5 = *param_5 + 1;
            CAssaulter::DieUser((CAssaulter *)(this + local_14 * 0x20));
            CUserCharacInfo::setPowerWarHP(local_10,100);
          }
          else {
            iVar3 = CAssaulter::GetState((CAssaulter *)(this + local_14 * 0x20));
            if (iVar3 == 5) {
              *param_6 = *param_6 + 1;
            }
            *param_4 = *param_4 + 1;
            CAssaulter::SetPowerWarWinner((CAssaulter *)(this + local_14 * 0x20),true);
            CUserCharacInfo::SetCurCharacSuperState(local_10,true);
          }
        }
        PacketGuard::PacketGuard(local_20);
        uVar4 = CUserCharacInfo::getPowerWarHP(local_10);
                    /* try { // try from 082e756b to 082e7581 has its CatchHandler @ 082e758f */
        _MakeChangeHp(this,local_20,local_14,uVar4 & 0xffff);
        _SendPacketToVill(this,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
