# process

`_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_FinishLoad::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_FinishLoad` | `0x0826503c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826503c  _ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_FinishLoad::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0826503c, 0x082651e7]
0826503c +0x000:  push   %ebp
0826503d +0x001:  mov    %esp,%ebp
0826503f +0x003:  sub    $0x38,%esp
08265042 +0x006:  mov    0x14(%ebp),%eax
08265045 +0x009:  mov    %eax,-0x14(%ebp)
08265048 +0x00c:  mov    0x10(%ebp),%eax
0826504b +0x00f:  mov    %eax,0x8(%esp)
0826504f +0x013:  mov    0xc(%ebp),%eax
08265052 +0x016:  mov    %eax,0x4(%esp)
08265056 +0x01a:  mov    0x8(%ebp),%eax
08265059 +0x01d:  mov    %eax,(%esp)
0826505c +0x020:  call   08264bfe <_ZN21DisPatcher_FinishLoad11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_FinishLoad::check_error(CUser*, MSG_BASE&)
08265061 +0x025:  mov    %eax,%edx
08265063 +0x027:  mov    -0x14(%ebp),%eax
08265066 +0x02a:  mov    %edx,0x4(%eax)
08265069 +0x02d:  mov    -0x14(%ebp),%eax
0826506c +0x030:  mov    0x4(%eax),%eax
0826506f +0x033:  test   %eax,%eax
08265071 +0x035:  jle    0826507d <+0x41>
08265073 +0x037:  mov    $0x0,%eax
08265078 +0x03c:  jmp    082651e6 <+0x1aa>
0826507d +0x041:  mov    -0x14(%ebp),%eax
08265080 +0x044:  mov    0x4(%eax),%eax
08265083 +0x047:  test   %eax,%eax
08265085 +0x049:  jns    082650b2 <+0x76>
08265087 +0x04b:  mov    -0x14(%ebp),%eax
0826508a +0x04e:  mov    0x4(%eax),%eax
0826508d +0x051:  movl   $0x0,0xc(%esp)
08265095 +0x059:  mov    %eax,0x8(%esp)
08265099 +0x05d:  movl   $&_ZZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
082650a1 +0x065:  movl   $0x6ca,(%esp)
082650a8 +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082650ad +0x071:  jmp    082651e6 <+0x1aa>
082650b2 +0x076:  mov    0xc(%ebp),%eax
082650b5 +0x079:  mov    %eax,(%esp)
082650b8 +0x07c:  call   08146916 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser>  ; Global::CBossTowerFunc::FinishLoad(CUser*)
082650bd +0x081:  test   %al,%al
082650bf +0x083:  je     082650cb <+0x8f>
082650c1 +0x085:  mov    $0x0,%eax
082650c6 +0x08a:  jmp    082651e6 <+0x1aa>
082650cb +0x08f:  mov    0xc(%ebp),%eax
082650ce +0x092:  mov    %eax,(%esp)
082650d1 +0x095:  call   08130eb2 <_ZN12advancealtar7Manager10finishLoadEP5CUser>  ; advancealtar::Manager::finishLoad(CUser*)
082650d6 +0x09a:  test   %al,%al
082650d8 +0x09c:  je     082650e4 <+0xa8>
082650da +0x09e:  mov    $0x0,%eax
082650df +0x0a3:  jmp    082651e6 <+0x1aa>
082650e4 +0x0a8:  mov    0xc(%ebp),%eax
082650e7 +0x0ab:  mov    %eax,0x4(%esp)
082650eb +0x0af:  mov    0x8(%ebp),%eax
082650ee +0x0b2:  mov    %eax,(%esp)
082650f1 +0x0b5:  call   08264c28 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser>  ; DisPatcher_FinishLoad::Party_hack_check(CUser*)
082650f6 +0x0ba:  mov    0x10(%ebp),%eax
082650f9 +0x0bd:  mov    %eax,-0x10(%ebp)
082650fc +0x0c0:  mov    0xc(%ebp),%eax
082650ff +0x0c3:  mov    %eax,(%esp)
08265102 +0x0c6:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08265107 +0x0cb:  mov    %eax,-0xc(%ebp)
0826510a +0x0ce:  cmpl   $0x0,-0xc(%ebp)
0826510e +0x0d2:  je     082651e1 <+0x1a5>
08265114 +0x0d8:  mov    0xc(%ebp),%eax
08265117 +0x0db:  mov    %eax,0x4(%esp)
0826511b +0x0df:  mov    -0xc(%ebp),%eax
0826511e +0x0e2:  mov    %eax,(%esp)
08265121 +0x0e5:  call   085b15e0 <_ZN6CParty14finish_loadingEP5CUser>  ; CParty::finish_loading(CUser*)
08265126 +0x0ea:  mov    -0xc(%ebp),%eax
08265129 +0x0ed:  mov    %eax,(%esp)
0826512c +0x0f0:  call   0826525e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0x36>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0x36
08265131 +0x0f5:  test   %al,%al
08265133 +0x0f7:  je     082651e1 <+0x1a5>
08265139 +0x0fd:  mov    0xc(%ebp),%eax
0826513c +0x100:  mov    %eax,(%esp)
0826513f +0x103:  call   0864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>  ; CUser::getCurCharacInvenCheckSum() const
08265144 +0x108:  mov    -0x10(%ebp),%edx
08265147 +0x10b:  mov    0xd(%edx),%edx
0826514a +0x10e:  cmp    %edx,%eax
0826514c +0x110:  setne  %al
0826514f +0x113:  test   %al,%al
08265151 +0x115:  je     0826518d <+0x151>
08265153 +0x117:  mov    0xc(%ebp),%eax
08265156 +0x11a:  mov    %eax,(%esp)
08265159 +0x11d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0826515e +0x122:  movl   $0x0,0x14(%esp)
08265166 +0x12a:  movl   $0x0,0x10(%esp)
0826516e +0x132:  movl   $0x1,0xc(%esp)
08265176 +0x13a:  movl   $0x25b,0x8(%esp)
0826517e +0x142:  mov    0xc(%ebp),%edx
08265181 +0x145:  mov    %edx,0x4(%esp)
08265185 +0x149:  mov    %eax,(%esp)
08265188 +0x14c:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0826518d +0x151:  mov    0xc(%ebp),%eax
08265190 +0x154:  mov    %eax,(%esp)
08265193 +0x157:  call   0864e114 <_ZNK5CUser25getCurCharacSkillCheckSumEv>  ; CUser::getCurCharacSkillCheckSum() const
08265198 +0x15c:  mov    -0x10(%ebp),%edx
0826519b +0x15f:  mov    0x11(%edx),%edx
0826519e +0x162:  cmp    %edx,%eax
082651a0 +0x164:  setne  %al
082651a3 +0x167:  test   %al,%al
082651a5 +0x169:  je     082651e1 <+0x1a5>
082651a7 +0x16b:  mov    0xc(%ebp),%eax
082651aa +0x16e:  mov    %eax,(%esp)
082651ad +0x171:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082651b2 +0x176:  movl   $0x0,0x14(%esp)
082651ba +0x17e:  movl   $0x0,0x10(%esp)
082651c2 +0x186:  movl   $0x1,0xc(%esp)
082651ca +0x18e:  movl   $0x25c,0x8(%esp)
082651d2 +0x196:  mov    0xc(%ebp),%edx
082651d5 +0x199:  mov    %edx,0x4(%esp)
082651d9 +0x19d:  mov    %eax,(%esp)
082651dc +0x1a0:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082651e1 +0x1a5:  mov    $0x0,%eax
082651e6 +0x1aa:  leave
082651e7 +0x1ab:  ret
```

## 反编译 C

```c
// DisPatcher_FinishLoad::process @ 0x826503c

/* DisPatcher_FinishLoad::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_FinishLoad::process
          (DisPatcher_FinishLoad *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CParty *this_00;
  int iVar3;
  CHackAnalyzer *pCVar4;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x6ca,
                       "virtual int DisPatcher_FinishLoad::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      cVar1 = Global::CBossTowerFunc::FinishLoad(param_1);
      if (cVar1 == '\0') {
        cVar1 = advancealtar::Manager::finishLoad(param_1);
        if (cVar1 == '\0') {
          Party_hack_check(this,param_1);
          this_00 = (CParty *)CUser::GetParty(param_1);
          if (this_00 != (CParty *)0x0) {
            CParty::finish_loading(this_00,param_1);
            cVar1 = CParty::checkStartRoom(this_00);
            if (cVar1 != '\0') {
              iVar3 = CUser::getCurCharacInvenCheckSum(param_1);
              if (iVar3 != *(int *)(param_2 + 0xd)) {
                pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25b,1,0,0);
              }
              iVar3 = CUser::getCurCharacSkillCheckSum(param_1);
              if (iVar3 != *(int *)(param_2 + 0x11)) {
                pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25c,1,0,0);
              }
            }
          }
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
