# MakeTeam

`_ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri`

`pvp_assault::CAssaultPlace::MakeTeam(CUser*, CUser*, int&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7d0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7d0a  _ZN11pvp_assault13CAssaultPlace8MakeTeamEP5CUserS2_Ri
#           pvp_assault::CAssaultPlace::MakeTeam(CUser*, CUser*, int&)
# range [0x082e7d0a, 0x082e8049]
082e7d0a +0x000:  push   %ebp
082e7d0b +0x001:  mov    %esp,%ebp
082e7d0d +0x003:  push   %edi
082e7d0e +0x004:  push   %esi
082e7d0f +0x005:  push   %ebx
082e7d10 +0x006:  sub    $0x8c,%esp
082e7d16 +0x00c:  mov    0xc(%ebp),%eax
082e7d19 +0x00f:  mov    %eax,(%esp)
082e7d1c +0x012:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e7d21 +0x017:  movsbl %al,%edx
082e7d24 +0x01a:  mov    0x8(%ebp),%eax
082e7d27 +0x01d:  mov    %edx,0x118(%eax)
082e7d2d +0x023:  movl   $0x0,0x4(%esp)
082e7d35 +0x02b:  mov    0xc(%ebp),%eax
082e7d38 +0x02e:  mov    %eax,(%esp)
082e7d3b +0x031:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082e7d40 +0x036:  mov    0x8(%ebp),%edx
082e7d43 +0x039:  mov    %eax,0x11c(%edx)
082e7d49 +0x03f:  mov    0x8(%ebp),%eax
082e7d4c +0x042:  mov    0x118(%eax),%eax
082e7d52 +0x048:  test   %eax,%eax
082e7d54 +0x04a:  jne    082e7d8f <+0x85>
082e7d56 +0x04c:  mov    0x8(%ebp),%eax
082e7d59 +0x04f:  mov    0x11c(%eax),%eax
082e7d5f +0x055:  test   %eax,%eax
082e7d61 +0x057:  jne    082e7d8f <+0x85>
082e7d63 +0x059:  movl   $0x4,(%esp)
082e7d6a +0x060:  call   08725800 <__cxa_allocate_exception>
082e7d6f +0x065:  mov    %eax,%edx
082e7d71 +0x067:  movl   $0x15,(%edx)
082e7d77 +0x06d:  movl   $0x0,0x8(%esp)
082e7d7f +0x075:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e7d87 +0x07d:  mov    %eax,(%esp)
082e7d8a +0x080:  call   08724c50 <__cxa_throw>
082e7d8f +0x085:  mov    0x8(%ebp),%eax
082e7d92 +0x088:  mov    0xc(%ebp),%edx
082e7d95 +0x08b:  mov    %edx,0x134(%eax)
082e7d9b +0x091:  mov    0x8(%ebp),%eax
082e7d9e +0x094:  mov    0x10(%ebp),%edx
082e7da1 +0x097:  mov    %edx,0x138(%eax)
082e7da7 +0x09d:  mov    0xc(%ebp),%eax
082e7daa +0x0a0:  mov    %eax,(%esp)
082e7dad +0x0a3:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e7db2 +0x0a8:  mov    %eax,%ebx
082e7db4 +0x0aa:  mov    0x10(%ebp),%eax
082e7db7 +0x0ad:  mov    %eax,(%esp)
082e7dba +0x0b0:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
082e7dbf +0x0b5:  cmp    %ax,%bx
082e7dc2 +0x0b8:  setb   %al
082e7dc5 +0x0bb:  test   %al,%al
082e7dc7 +0x0bd:  je     082e7df1 <+0xe7>
082e7dc9 +0x0bf:  mov    0x10(%ebp),%eax
082e7dcc +0x0c2:  mov    %eax,0x8(%esp)
082e7dd0 +0x0c6:  mov    0xc(%ebp),%eax
082e7dd3 +0x0c9:  mov    %eax,0x4(%esp)
082e7dd7 +0x0cd:  mov    0x8(%ebp),%eax
082e7dda +0x0d0:  mov    %eax,(%esp)
082e7ddd +0x0d3:  call   082e8098 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_>  ; pvp_assault::CAssaultPlace::_SeparateTeam(CUser*, CUser*)
082e7de2 +0x0d8:  mov    0x8(%ebp),%eax
082e7de5 +0x0db:  movl   $0x0,0x124(%eax)
082e7def +0x0e5:  jmp    082e7e17 <+0x10d>
082e7df1 +0x0e7:  mov    0xc(%ebp),%eax
082e7df4 +0x0ea:  mov    %eax,0x8(%esp)
082e7df8 +0x0ee:  mov    0x10(%ebp),%eax
082e7dfb +0x0f1:  mov    %eax,0x4(%esp)
082e7dff +0x0f5:  mov    0x8(%ebp),%eax
082e7e02 +0x0f8:  mov    %eax,(%esp)
082e7e05 +0x0fb:  call   082e8098 <_ZN11pvp_assault13CAssaultPlace13_SeparateTeamEP5CUserS2_>  ; pvp_assault::CAssaultPlace::_SeparateTeam(CUser*, CUser*)
082e7e0a +0x100:  mov    0x8(%ebp),%eax
082e7e0d +0x103:  movl   $0x1,0x124(%eax)
082e7e17 +0x10d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e7e1e +0x114:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e7e23 +0x119:  mov    0x8(%ebp),%edx
082e7e26 +0x11c:  mov    %eax,0x108(%edx)
082e7e2c +0x122:  mov    0x8(%ebp),%eax
082e7e2f +0x125:  mov    %eax,(%esp)
082e7e32 +0x128:  call   082e82a2 <_ZN11pvp_assault13CAssaultPlace14_SetReadyStateEv>  ; pvp_assault::CAssaultPlace::_SetReadyState()
082e7e37 +0x12d:  mov    0x8(%ebp),%eax
082e7e3a +0x130:  mov    0x12c(%eax),%eax
082e7e40 +0x136:  test   %eax,%eax
082e7e42 +0x138:  je     082e7e5d <+0x153>
082e7e44 +0x13a:  mov    0x8(%ebp),%eax
082e7e47 +0x13d:  mov    0x12c(%eax),%eax
082e7e4d +0x143:  movl   $0x2,0x4(%esp)
082e7e55 +0x14b:  mov    %eax,(%esp)
082e7e58 +0x14e:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e7e5d +0x153:  mov    0x8(%ebp),%eax
082e7e60 +0x156:  mov    0x130(%eax),%eax
082e7e66 +0x15c:  test   %eax,%eax
082e7e68 +0x15e:  je     082e7e83 <+0x179>
082e7e6a +0x160:  mov    0x8(%ebp),%eax
082e7e6d +0x163:  mov    0x130(%eax),%eax
082e7e73 +0x169:  movl   $0x2,0x4(%esp)
082e7e7b +0x171:  mov    %eax,(%esp)
082e7e7e +0x174:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082e7e83 +0x179:  movl   $"",-0x4c(%ebp)
082e7e8a +0x180:  movl   $"",-0x48(%ebp)
082e7e91 +0x187:  movl   $"",-0x44(%ebp)
082e7e98 +0x18e:  movl   $"",-0x40(%ebp)
082e7e9f +0x195:  movl   $"",-0x3c(%ebp)
082e7ea6 +0x19c:  movl   $"",-0x38(%ebp)
082e7ead +0x1a3:  movl   $"",-0x34(%ebp)
082e7eb4 +0x1aa:  movl   $"",-0x30(%ebp)
082e7ebb +0x1b1:  movl   $0x0,-0x28(%ebp)
082e7ec2 +0x1b8:  movl   $0x0,-0x24(%ebp)
082e7ec9 +0x1bf:  movl   $0x0,-0x2c(%ebp)
082e7ed0 +0x1c6:  jmp    082e7f63 <+0x259>
082e7ed5 +0x1cb:  mov    -0x2c(%ebp),%eax
082e7ed8 +0x1ce:  shl    $0x5,%eax
082e7edb +0x1d1:  add    0x8(%ebp),%eax
082e7ede +0x1d4:  mov    %eax,(%esp)
082e7ee1 +0x1d7:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e7ee6 +0x1dc:  test   %al,%al
082e7ee8 +0x1de:  jne    082e7f5e <+0x254>
082e7eea +0x1e0:  mov    -0x2c(%ebp),%eax
082e7eed +0x1e3:  shl    $0x5,%eax
082e7ef0 +0x1e6:  add    0x8(%ebp),%eax
082e7ef3 +0x1e9:  mov    %eax,(%esp)
082e7ef6 +0x1ec:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e7efb +0x1f1:  test   %eax,%eax
082e7efd +0x1f3:  sete   %al
082e7f00 +0x1f6:  test   %al,%al
082e7f02 +0x1f8:  je     082e7f22 <+0x218>
082e7f04 +0x1fa:  mov    -0x28(%ebp),%ebx
082e7f07 +0x1fd:  mov    -0x2c(%ebp),%eax
082e7f0a +0x200:  shl    $0x5,%eax
082e7f0d +0x203:  add    0x8(%ebp),%eax
082e7f10 +0x206:  mov    %eax,(%esp)
082e7f13 +0x209:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082e7f18 +0x20e:  mov    %eax,-0x4c(%ebp,%ebx,4)
082e7f1c +0x212:  addl   $0x1,-0x28(%ebp)
082e7f20 +0x216:  jmp    082e7f5f <+0x255>
082e7f22 +0x218:  mov    -0x2c(%ebp),%eax
082e7f25 +0x21b:  shl    $0x5,%eax
082e7f28 +0x21e:  add    0x8(%ebp),%eax
082e7f2b +0x221:  mov    %eax,(%esp)
082e7f2e +0x224:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e7f33 +0x229:  cmp    $0x1,%eax
082e7f36 +0x22c:  sete   %al
082e7f39 +0x22f:  test   %al,%al
082e7f3b +0x231:  je     082e7f5f <+0x255>
082e7f3d +0x233:  mov    -0x24(%ebp),%eax
082e7f40 +0x236:  lea    0x4(%eax),%ebx
082e7f43 +0x239:  mov    -0x2c(%ebp),%eax
082e7f46 +0x23c:  shl    $0x5,%eax
082e7f49 +0x23f:  add    0x8(%ebp),%eax
082e7f4c +0x242:  mov    %eax,(%esp)
082e7f4f +0x245:  call   082e663c <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv>  ; pvp_assault::CAssaulter::GetCharacName() const
082e7f54 +0x24a:  mov    %eax,-0x4c(%ebp,%ebx,4)
082e7f58 +0x24e:  addl   $0x1,-0x24(%ebp)
082e7f5c +0x252:  jmp    082e7f5f <+0x255>
082e7f5e +0x254:  nop
082e7f5f +0x255:  addl   $0x1,-0x2c(%ebp)
082e7f63 +0x259:  cmpl   $0x7,-0x2c(%ebp)
082e7f67 +0x25d:  setle  %al
082e7f6a +0x260:  test   %al,%al
082e7f6c +0x262:  jne    082e7ed5 <+0x1cb>
082e7f72 +0x268:  movl   $0x0,-0x2c(%ebp)
082e7f79 +0x26f:  jmp    082e802f <+0x325>
082e7f7e +0x274:  mov    -0x2c(%ebp),%eax
082e7f81 +0x277:  shl    $0x5,%eax
082e7f84 +0x27a:  add    0x8(%ebp),%eax
082e7f87 +0x27d:  mov    %eax,(%esp)
082e7f8a +0x280:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e7f8f +0x285:  mov    %eax,-0x20(%ebp)
082e7f92 +0x288:  cmpl   $0x0,-0x20(%ebp)
082e7f96 +0x28c:  je     082e802a <+0x320>
082e7f9c +0x292:  mov    -0x20(%ebp),%eax
082e7f9f +0x295:  mov    %eax,(%esp)
082e7fa2 +0x298:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e7fa7 +0x29d:  cmp    $0x7,%al
082e7fa9 +0x29f:  sete   %al
082e7fac +0x2a2:  test   %al,%al
082e7fae +0x2a4:  je     082e7fb9 <+0x2af>
082e7fb0 +0x2a6:  movl   $0x0,-0x1c(%ebp)
082e7fb7 +0x2ad:  jmp    082e7fc0 <+0x2b6>
082e7fb9 +0x2af:  movl   $0x4,-0x1c(%ebp)
082e7fc0 +0x2b6:  mov    -0x30(%ebp),%ecx
082e7fc3 +0x2b9:  mov    -0x34(%ebp),%esi
082e7fc6 +0x2bc:  mov    -0x38(%ebp),%eax
082e7fc9 +0x2bf:  mov    %eax,-0x68(%ebp)
082e7fcc +0x2c2:  mov    -0x3c(%ebp),%eax
082e7fcf +0x2c5:  mov    %eax,-0x64(%ebp)
082e7fd2 +0x2c8:  mov    -0x40(%ebp),%eax
082e7fd5 +0x2cb:  mov    %eax,-0x60(%ebp)
082e7fd8 +0x2ce:  mov    -0x44(%ebp),%eax
082e7fdb +0x2d1:  mov    %eax,-0x5c(%ebp)
082e7fde +0x2d4:  mov    -0x48(%ebp),%edi
082e7fe1 +0x2d7:  mov    -0x4c(%ebp),%ebx
082e7fe4 +0x2da:  mov    -0x20(%ebp),%eax
082e7fe7 +0x2dd:  lea    0x79700(%eax),%edx
082e7fed +0x2e3:  mov    %ecx,0x24(%esp)
082e7ff1 +0x2e7:  mov    %esi,0x20(%esp)
082e7ff5 +0x2eb:  mov    -0x68(%ebp),%eax
082e7ff8 +0x2ee:  mov    %eax,0x1c(%esp)
082e7ffc +0x2f2:  mov    -0x64(%ebp),%eax
082e7fff +0x2f5:  mov    %eax,0x18(%esp)
082e8003 +0x2f9:  mov    -0x60(%ebp),%eax
082e8006 +0x2fc:  mov    %eax,0x14(%esp)
082e800a +0x300:  mov    -0x5c(%ebp),%eax
082e800d +0x303:  mov    %eax,0x10(%esp)
082e8011 +0x307:  mov    %edi,0xc(%esp)
082e8015 +0x30b:  mov    %ebx,0x8(%esp)
082e8019 +0x30f:  mov    -0x1c(%ebp),%eax
082e801c +0x312:  mov    %eax,0x4(%esp)
082e8020 +0x316:  mov    %edx,(%esp)
082e8023 +0x319:  call   086863b6 <_ZN15cUserHistoryLog8StartPvPE23ENUM_PVP_HISTORY_REASONPKcS2_S2_S2_S2_S2_S2_S2_>  ; cUserHistoryLog::StartPvP(ENUM_PVP_HISTORY_REASON, char const*, char const*, char const*, char const*, char const*, char const*, char const*, char const*)
082e8028 +0x31e:  jmp    082e802b <+0x321>
082e802a +0x320:  nop
082e802b +0x321:  addl   $0x1,-0x2c(%ebp)
082e802f +0x325:  cmpl   $0x7,-0x2c(%ebp)
082e8033 +0x329:  setle  %al
082e8036 +0x32c:  test   %al,%al
082e8038 +0x32e:  jne    082e7f7e <+0x274>
082e803e +0x334:  add    $0x8c,%esp
082e8044 +0x33a:  pop    %ebx
082e8045 +0x33b:  pop    %esi
082e8046 +0x33c:  pop    %edi
082e8047 +0x33d:  pop    %ebp
082e8048 +0x33e:  ret
082e8049 +0x33f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::MakeTeam @ 0x82e7d0a

/* pvp_assault::CAssaultPlace::MakeTeam(CUser*, CUser*, int&) */

void pvp_assault::CAssaultPlace::MakeTeam(CUser *param_1,CUser *param_2,int *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined *local_50 [4];
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  int local_28;
  CUserCharacInfo *local_24;
  undefined4 local_20;
  
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  *(int *)(param_1 + 0x118) = (int)cVar1;
  uVar4 = CUser::get_area(param_2,false);
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  if ((*(int *)(param_1 + 0x118) == 0) && (*(int *)(param_1 + 0x11c) == 0)) {
    puVar5 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar5 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&ENUM_ERROR::typeinfo,0);
  }
  *(CUser **)(param_1 + 0x134) = param_2;
  *(int **)(param_1 + 0x138) = param_3;
  uVar2 = CUser::get_posX(param_2);
  uVar3 = CUser::get_posX((CUser *)param_3);
  if (uVar2 < uVar3) {
    _SeparateTeam((CAssaultPlace *)param_1,param_2,(CUser *)param_3);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  else {
    _SeparateTeam((CAssaultPlace *)param_1,(CUser *)param_3,param_2);
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(param_1 + 0x108) = uVar4;
  _SetReadyState((CAssaultPlace *)param_1);
  if (*(int *)(param_1 + 300) != 0) {
    CParty::SetAssaultState(*(CParty **)(param_1 + 300),'\x02');
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    CParty::SetAssaultState(*(CParty **)(param_1 + 0x130),'\x02');
  }
  local_50[0] = &DAT_08c1bca0;
  local_50[1] = &DAT_08c1bca0;
  local_50[2] = &DAT_08c1bca0;
  local_50[3] = &DAT_08c1bca0;
  local_40 = &DAT_08c1bca0;
  local_3c = &DAT_08c1bca0;
  local_38 = &DAT_08c1bca0;
  local_34 = &DAT_08c1bca0;
  local_2c = 0;
  local_28 = 0;
  for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(param_1 + local_30 * 0x20));
    if (cVar1 == '\0') {
      iVar6 = CAssaulter::GetTeam((CAssaulter *)(param_1 + local_30 * 0x20));
      iVar8 = local_2c;
      if (iVar6 == 0) {
        puVar7 = (undefined *)CAssaulter::GetCharacName((CAssaulter *)(param_1 + local_30 * 0x20));
        local_50[iVar8] = puVar7;
        local_2c = local_2c + 1;
      }
      else {
        iVar8 = CAssaulter::GetTeam((CAssaulter *)(param_1 + local_30 * 0x20));
        if (iVar8 == 1) {
          iVar8 = local_28 + 4;
          puVar7 = (undefined *)CAssaulter::GetCharacName((CAssaulter *)(param_1 + local_30 * 0x20))
          ;
          local_50[iVar8] = puVar7;
          local_28 = local_28 + 1;
        }
      }
    }
  }
  for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
    local_24 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(param_1 + local_30 * 0x20));
    if (local_24 != (CUserCharacInfo *)0x0) {
      cVar1 = CUserCharacInfo::getCurCharacVill(local_24);
      if (cVar1 == '\a') {
        local_20 = 0;
      }
      else {
        local_20 = 4;
      }
      cUserHistoryLog::StartPvP
                ((cUserHistoryLog *)(local_24 + 0x79700),local_20,local_50[0],local_50[1],
                 local_50[2],local_50[3],local_40,local_3c,local_38,local_34);
    }
  }
  return;
}
```
