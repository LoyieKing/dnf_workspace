# StartEvent

`_ZN17CSchoolMatchEvent10StartEventE10Word_Param`

`CSchoolMatchEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x08273fec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273fec  _ZN17CSchoolMatchEvent10StartEventE10Word_Param
#           CSchoolMatchEvent::StartEvent(Word_Param)
# range [0x08273fec, 0x0827423b]
08273fec +0x000:  push   %ebp
08273fed +0x001:  mov    %esp,%ebp
08273fef +0x003:  push   %edi
08273ff0 +0x004:  push   %esi
08273ff1 +0x005:  push   %ebx
08273ff2 +0x006:  sub    $0x7c,%esp
08273ff5 +0x009:  mov    0x8(%ebp),%eax
08273ff8 +0x00c:  movl   $0x1,0x4(%esp)
08274000 +0x014:  mov    %eax,(%esp)
08274003 +0x017:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08274008 +0x01c:  lea    0xc(%ebp),%eax
0827400b +0x01f:  mov    %eax,-0x1c(%ebp)
0827400e +0x022:  mov    -0x1c(%ebp),%eax
08274011 +0x025:  movzbl 0x3(%eax),%eax
08274015 +0x029:  movzbl %al,%eax
08274018 +0x02c:  mov    %eax,-0x5c(%ebp)
0827401b +0x02f:  mov    -0x1c(%ebp),%eax
0827401e +0x032:  movzbl 0x2(%eax),%eax
08274022 +0x036:  movzbl %al,%edi
08274025 +0x039:  mov    -0x1c(%ebp),%eax
08274028 +0x03c:  movzbl 0x1(%eax),%eax
0827402c +0x040:  movzbl %al,%esi
0827402f +0x043:  mov    -0x1c(%ebp),%eax
08274032 +0x046:  movzbl (%eax),%eax
08274035 +0x049:  movzbl %al,%ebx
08274038 +0x04c:  movl   $0x0,0xc(%esp)
08274040 +0x054:  movl   $0x1e,0x8(%esp)
08274048 +0x05c:  movl   $&_ZZN17CSchoolMatchEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
08274050 +0x064:  lea    -0x54(%ebp),%eax
08274053 +0x067:  mov    %eax,(%esp)
08274056 +0x06a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827405b +0x06f:  mov    -0x5c(%ebp),%eax
0827405e +0x072:  mov    %eax,0x14(%esp)
08274062 +0x076:  mov    %edi,0x10(%esp)
08274066 +0x07a:  mov    %esi,0xc(%esp)
0827406a +0x07e:  mov    %ebx,0x8(%esp)
0827406e +0x082:  movl   $"CSchoolMatchEvent Start! channel_no(%d), player_count(%d), school_rating(%d), player_rating(%d)",0x4(%esp)
08274076 +0x08a:  lea    -0x54(%ebp),%eax
08274079 +0x08d:  mov    %eax,(%esp)
0827407c +0x090:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08274081 +0x095:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08274086 +0x09a:  mov    %eax,(%esp)
08274089 +0x09d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0827408e +0x0a2:  cmp    $0x9,%eax
08274091 +0x0a5:  je     082740a5 <+0xb9>
08274093 +0x0a7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08274098 +0x0ac:  mov    %eax,(%esp)
0827409b +0x0af:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
082740a0 +0x0b4:  cmp    $0xa,%eax
082740a3 +0x0b7:  jne    082740ac <+0xc0>
082740a5 +0x0b9:  mov    $0x1,%eax
082740aa +0x0be:  jmp    082740b1 <+0xc5>
082740ac +0x0c0:  mov    $0x0,%eax
082740b1 +0x0c5:  test   %al,%al
082740b3 +0x0c7:  je     08274171 <+0x185>
082740b9 +0x0cd:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082740be +0x0d2:  mov    %eax,(%esp)
082740c1 +0x0d5:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
082740c6 +0x0da:  mov    -0x1c(%ebp),%edx
082740c9 +0x0dd:  movzbl (%edx),%edx
082740cc +0x0e0:  movzbl %dl,%edx
082740cf +0x0e3:  cmp    %edx,%eax
082740d1 +0x0e5:  sete   %al
082740d4 +0x0e8:  test   %al,%al
082740d6 +0x0ea:  je     08274171 <+0x185>
082740dc +0x0f0:  movl   $0x1,(%esp)
082740e3 +0x0f7:  call   0855d07e <_ZN12CLeagueMatch12SetMatchAbleEb>  ; CLeagueMatch::SetMatchAble(bool)
082740e8 +0x0fc:  mov    -0x1c(%ebp),%eax
082740eb +0x0ff:  movzbl 0x1(%eax),%eax
082740ef +0x103:  movzbl %al,%eax
082740f2 +0x106:  mov    %eax,(%esp)
082740f5 +0x109:  call   0855d070 <_ZN12CLeagueMatch22SetPlayCountPerOneTeamEj>  ; CLeagueMatch::SetPlayCountPerOneTeam(unsigned int)
082740fa +0x10e:  mov    -0x1c(%ebp),%eax
082740fd +0x111:  movzbl 0x2(%eax),%eax
08274101 +0x115:  movzbl %al,%eax
08274104 +0x118:  mov    %eax,&_ZN28PvPGlobalEnvironmentVariable20school_match_elo_k2_E
08274109 +0x11d:  mov    -0x1c(%ebp),%eax
0827410c +0x120:  movzbl 0x3(%eax),%eax
08274110 +0x124:  movzbl %al,%eax
08274113 +0x127:  mov    %eax,&_ZN28PvPGlobalEnvironmentVariable19school_match_elo_k_E
08274118 +0x12c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0827411d +0x131:  mov    %eax,(%esp)
08274120 +0x134:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08274125 +0x139:  cmp    $0x47,%eax
08274128 +0x13c:  sete   %al
0827412b +0x13f:  test   %al,%al
0827412d +0x141:  je     0827413b <+0x14f>
0827412f +0x143:  movl   $0x2,(%esp)
08274136 +0x14a:  call   082743a0 <_GLOBAL__I__ZN17CSchoolMatchEventC2Ev+0x1c>  ; global constructors keyed to CSchoolMatchEvent::CSchoolMatchEvent()+0x1c
0827413b +0x14f:  movl   $0x0,0xc(%esp)
08274143 +0x157:  movl   $0x30,0x8(%esp)
0827414b +0x15f:  movl   $&_ZZN17CSchoolMatchEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
08274153 +0x167:  lea    -0x44(%ebp),%eax
08274156 +0x16a:  mov    %eax,(%esp)
08274159 +0x16d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0827415e +0x172:  movl   $"This is School Matching Server!!",0x4(%esp)
08274166 +0x17a:  lea    -0x44(%ebp),%eax
08274169 +0x17d:  mov    %eax,(%esp)
0827416c +0x180:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08274171 +0x185:  mov    -0x1c(%ebp),%eax
08274174 +0x188:  movzbl (%eax),%eax
08274177 +0x18b:  movzbl %al,%eax
0827417a +0x18e:  mov    %eax,-0x30(%ebp)
0827417d +0x191:  mov    0x8(%ebp),%eax
08274180 +0x194:  lea    0xc(%eax),%edx
08274183 +0x197:  lea    -0x2c(%ebp),%eax
08274186 +0x19a:  mov    %edx,0x4(%esp)
0827418a +0x19e:  mov    %eax,(%esp)
0827418d +0x1a1:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08274192 +0x1a6:  sub    $0x4,%esp
08274195 +0x1a9:  mov    0x8(%ebp),%eax
08274198 +0x1ac:  lea    0xc(%eax),%edx
0827419b +0x1af:  lea    -0x28(%ebp),%eax
0827419e +0x1b2:  mov    %edx,0x4(%esp)
082741a2 +0x1b6:  mov    %eax,(%esp)
082741a5 +0x1b9:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
082741aa +0x1be:  sub    $0x4,%esp
082741ad +0x1c1:  lea    -0x34(%ebp),%eax
082741b0 +0x1c4:  lea    -0x30(%ebp),%edx
082741b3 +0x1c7:  mov    %edx,0xc(%esp)
082741b7 +0x1cb:  mov    -0x2c(%ebp),%edx
082741ba +0x1ce:  mov    %edx,0x8(%esp)
082741be +0x1d2:  mov    -0x28(%ebp),%edx
082741c1 +0x1d5:  mov    %edx,0x4(%esp)
082741c5 +0x1d9:  mov    %eax,(%esp)
082741c8 +0x1dc:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
082741cd +0x1e1:  sub    $0x4,%esp
082741d0 +0x1e4:  lea    -0x34(%ebp),%eax
082741d3 +0x1e7:  mov    %eax,0x4(%esp)
082741d7 +0x1eb:  lea    -0x58(%ebp),%eax
082741da +0x1ee:  mov    %eax,(%esp)
082741dd +0x1f1:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
082741e2 +0x1f6:  mov    0x8(%ebp),%eax
082741e5 +0x1f9:  lea    0xc(%eax),%edx
082741e8 +0x1fc:  lea    -0x24(%ebp),%eax
082741eb +0x1ff:  mov    %edx,0x4(%esp)
082741ef +0x203:  mov    %eax,(%esp)
082741f2 +0x206:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
082741f7 +0x20b:  sub    $0x4,%esp
082741fa +0x20e:  lea    -0x24(%ebp),%eax
082741fd +0x211:  mov    %eax,0x4(%esp)
08274201 +0x215:  lea    -0x58(%ebp),%eax
08274204 +0x218:  mov    %eax,(%esp)
08274207 +0x21b:  call   080f9e18 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x624>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x624
0827420c +0x220:  test   %al,%al
0827420e +0x222:  je     08274231 <+0x245>
08274210 +0x224:  mov    -0x1c(%ebp),%eax
08274213 +0x227:  movzbl (%eax),%eax
08274216 +0x22a:  movzbl %al,%eax
08274219 +0x22d:  mov    %eax,-0x20(%ebp)
0827421c +0x230:  mov    0x8(%ebp),%eax
0827421f +0x233:  lea    0xc(%eax),%edx
08274222 +0x236:  lea    -0x20(%ebp),%eax
08274225 +0x239:  mov    %eax,0x4(%esp)
08274229 +0x23d:  mov    %edx,(%esp)
0827422c +0x240:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08274231 +0x245:  lea    -0xc(%ebp),%esp
08274234 +0x248:  add    $0x0,%esp
08274237 +0x24b:  pop    %ebx
08274238 +0x24c:  pop    %esi
08274239 +0x24d:  pop    %edi
0827423a +0x24e:  pop    %ebp
0827423b +0x24f:  ret
```

## 反编译 C

```c
// CSchoolMatchEvent::StartEvent @ 0x8273fec

/* CSchoolMatchEvent::StartEvent(Word_Param) */

void __thiscall CSchoolMatchEvent::StartEvent(CSchoolMatchEvent *this,undefined4 param_2)

{
  bool bVar1;
  GameWorld *pGVar2;
  int iVar3;
  CEnvironment *pCVar4;
  uint uVar5;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_5c [4];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  undefined1 local_38 [4];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  __normal_iterator local_28 [4];
  uint local_24;
  byte *local_20;
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  local_20 = (byte *)&param_2;
  uVar5 = (uint)(byte)param_2;
  cMyTrace::cMyTrace(local_58,"virtual void CSchoolMatchEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()
            (local_58,
             "CSchoolMatchEvent Start! channel_no(%d), player_count(%d), school_rating(%d), player_rating(%d)"
             ,uVar5,(uint)param_2._1_1_,(uint)param_2._2_1_,(uint)param_2._3_1_);
  pGVar2 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar2);
  if (iVar3 != 9) {
    pGVar2 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar2);
    if (iVar3 != 10) {
      bVar1 = false;
      goto LAB_082740b1;
    }
  }
  bVar1 = true;
LAB_082740b1:
  if (bVar1) {
    pCVar4 = (CEnvironment *)G_CEnvironment();
    uVar5 = CEnvironment::get_channel_no(pCVar4);
    if (uVar5 == *local_20) {
      CLeagueMatch::SetMatchAble(true);
      CLeagueMatch::SetPlayCountPerOneTeam((uint)local_20[1]);
      PvPGlobalEnvironmentVariable::school_match_elo_k2_ = (uint)local_20[2];
      PvPGlobalEnvironmentVariable::school_match_elo_k_ = (uint)local_20[3];
      pCVar4 = (CEnvironment *)G_CEnvironment();
      iVar3 = CEnvironment::get_channel_no(pCVar4);
      if (iVar3 == 0x47) {
        CLeagueMatch::SetBattleMode(2);
      }
      cMyTrace::cMyTrace(local_48,"virtual void CSchoolMatchEvent::StartEvent(Word_Param)",0x30,0);
      cMyTrace::operator()(local_48,"This is School Matching Server!!");
    }
  }
  local_34 = (uint)*local_20;
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (local_38,local_2c,local_30,&local_34);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_5c,local_38);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_5c,local_28);
  if (bVar1) {
    local_24 = (uint)*local_20;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0xc),(int *)&local_24);
  }
  return;
}
```
