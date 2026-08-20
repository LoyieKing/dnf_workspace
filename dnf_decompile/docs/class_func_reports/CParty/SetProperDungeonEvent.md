# SetProperDungeonEvent

`_ZN6CParty21SetProperDungeonEventEP5CUseri`

`CParty::SetProperDungeonEvent(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bb62a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb62a  _ZN6CParty21SetProperDungeonEventEP5CUseri
#           CParty::SetProperDungeonEvent(CUser*, int)
# range [0x085bb62a, 0x085bb745]
085bb62a +0x000:  push   %ebp
085bb62b +0x001:  mov    %esp,%ebp
085bb62d +0x003:  push   %ebx
085bb62e +0x004:  sub    $0x34,%esp
085bb631 +0x007:  mov    0xc(%ebp),%eax
085bb634 +0x00a:  mov    %eax,(%esp)
085bb637 +0x00d:  call   085bfc3e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x119c>  ; global constructors keyed to CParty::cMember::cMember()+0x119c
085bb63c +0x012:  mov    0x8(%ebp),%eax
085bb63f +0x015:  mov    0xcac(%eax),%eax
085bb645 +0x01b:  mov    %eax,(%esp)
085bb648 +0x01e:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
085bb64d +0x023:  mov    %eax,%ebx
085bb64f +0x025:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bb654 +0x02a:  add    $0x4de8,%eax
085bb659 +0x02f:  mov    %ebx,0x4(%esp)
085bb65d +0x033:  mov    %eax,(%esp)
085bb660 +0x036:  call   089139d4 <_ZN24ConditionLevelChkDungeon14isEventDungeonEi>  ; ConditionLevelChkDungeon::isEventDungeon(int)
085bb665 +0x03b:  xor    $0x1,%eax
085bb668 +0x03e:  test   %al,%al
085bb66a +0x040:  jne    085bb736 <+0x10c>
085bb670 +0x046:  mov    0xc(%ebp),%eax
085bb673 +0x049:  mov    %eax,(%esp)
085bb676 +0x04c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085bb67b +0x051:  mov    %eax,%ebx
085bb67d +0x053:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085bb682 +0x058:  add    $0x4de8,%eax
085bb687 +0x05d:  mov    %ebx,0x4(%esp)
085bb68b +0x061:  mov    %eax,(%esp)
085bb68e +0x064:  call   08913a62 <_ZN24ConditionLevelChkDungeon12isApplyLevelEi>  ; ConditionLevelChkDungeon::isApplyLevel(int)
085bb693 +0x069:  xor    $0x1,%eax
085bb696 +0x06c:  test   %al,%al
085bb698 +0x06e:  jne    085bb739 <+0x10f>
085bb69e +0x074:  mov    0x8(%ebp),%eax
085bb6a1 +0x077:  mov    0xcac(%eax),%eax
085bb6a7 +0x07d:  mov    %eax,(%esp)
085bb6aa +0x080:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085bb6af +0x085:  mov    %eax,-0x10(%ebp)
085bb6b2 +0x088:  mov    0x8(%ebp),%eax
085bb6b5 +0x08b:  mov    0xcac(%eax),%eax
085bb6bb +0x091:  mov    %eax,(%esp)
085bb6be +0x094:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085bb6c3 +0x099:  mov    %eax,-0x1c(%ebp)
085bb6c6 +0x09c:  movl   $0x0,-0x18(%ebp)
085bb6cd +0x0a3:  lea    -0x18(%ebp),%eax
085bb6d0 +0x0a6:  mov    %eax,0x4(%esp)
085bb6d4 +0x0aa:  lea    -0x1c(%ebp),%eax
085bb6d7 +0x0ad:  mov    %eax,(%esp)
085bb6da +0x0b0:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
085bb6df +0x0b5:  mov    (%eax),%eax
085bb6e1 +0x0b7:  mov    %eax,-0x1c(%ebp)
085bb6e4 +0x0ba:  mov    -0x10(%ebp),%eax
085bb6e7 +0x0bd:  add    $0x1,%eax
085bb6ea +0x0c0:  mov    %eax,-0x20(%ebp)
085bb6ed +0x0c3:  movl   $0x46,-0x14(%ebp)
085bb6f4 +0x0ca:  lea    -0x14(%ebp),%eax
085bb6f7 +0x0cd:  mov    %eax,0x4(%esp)
085bb6fb +0x0d1:  lea    -0x20(%ebp),%eax
085bb6fe +0x0d4:  mov    %eax,(%esp)
085bb701 +0x0d7:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
085bb706 +0x0dc:  mov    (%eax),%eax
085bb708 +0x0de:  mov    %eax,-0x20(%ebp)
085bb70b +0x0e1:  mov    0xc(%ebp),%eax
085bb70e +0x0e4:  mov    %eax,(%esp)
085bb711 +0x0e7:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
085bb716 +0x0ec:  mov    %eax,-0xc(%ebp)
085bb719 +0x0ef:  mov    -0x1c(%ebp),%eax
085bb71c +0x0f2:  cmp    %eax,-0xc(%ebp)
085bb71f +0x0f5:  jl     085bb73c <+0x112>
085bb721 +0x0f7:  mov    -0x20(%ebp),%eax
085bb724 +0x0fa:  cmp    %eax,-0xc(%ebp)
085bb727 +0x0fd:  jg     085bb73f <+0x115>
085bb729 +0x0ff:  mov    0xc(%ebp),%eax
085bb72c +0x102:  mov    %eax,(%esp)
085bb72f +0x105:  call   085bfc22 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1180>  ; global constructors keyed to CParty::cMember::cMember()+0x1180
085bb734 +0x10a:  jmp    085bb740 <+0x116>
085bb736 +0x10c:  nop
085bb737 +0x10d:  jmp    085bb740 <+0x116>
085bb739 +0x10f:  nop
085bb73a +0x110:  jmp    085bb740 <+0x116>
085bb73c +0x112:  nop
085bb73d +0x113:  jmp    085bb740 <+0x116>
085bb73f +0x115:  nop
085bb740 +0x116:  add    $0x34,%esp
085bb743 +0x119:  pop    %ebx
085bb744 +0x11a:  pop    %ebp
085bb745 +0x11b:  ret
```

## 反编译 C

```c
// CParty::SetProperDungeonEvent @ 0x85bb62a

/* CParty::SetProperDungeonEvent(CUser*, int) */

void CParty::SetProperDungeonEvent(CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  int local_20 [4];
  int local_10;
  
  CUserCharacInfo::ClearProperDungeonUser((CUserCharacInfo *)param_2);
  iVar2 = CDungeon::get_index(*(CDungeon **)(param_1 + 0xcac));
  iVar3 = G_CDataManager();
  cVar1 = ConditionLevelChkDungeon::isEventDungeon
                    ((ConditionLevelChkDungeon *)(iVar3 + 0x4de8),iVar2);
  if (cVar1 == '\x01') {
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
    iVar3 = G_CDataManager();
    cVar1 = ConditionLevelChkDungeon::isApplyLevel
                      ((ConditionLevelChkDungeon *)(iVar3 + 0x4de8),iVar2);
    if (cVar1 == '\x01') {
      local_20[3] = CDungeon::get_standard_level(*(CDungeon **)(param_1 + 0xcac));
      local_20[0] = CDungeon::get_min_level(*(CDungeon **)(param_1 + 0xcac));
      local_20[1] = 0;
      piVar4 = std::max<int>(local_20,local_20 + 1);
      local_20[0] = *piVar4;
      local_24 = local_20[3] + 1;
      local_20[2] = 0x46;
      piVar4 = std::min<int>(&local_24,local_20 + 2);
      local_24 = *piVar4;
      local_10 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if ((local_20[0] <= local_10) && (local_10 <= local_24)) {
        CUserCharacInfo::SetProperDungeonUser((CUserCharacInfo *)param_2);
      }
    }
  }
  return;
}
```
