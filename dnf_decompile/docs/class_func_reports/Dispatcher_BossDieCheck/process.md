# process

`_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_BossDieCheck::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BossDieCheck` | `0x081cd7a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd7a2  _ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_BossDieCheck::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cd7a2, 0x081cda61]
081cd7a2 +0x000:  push   %ebp
081cd7a3 +0x001:  mov    %esp,%ebp
081cd7a5 +0x003:  push   %edi
081cd7a6 +0x004:  push   %esi
081cd7a7 +0x005:  push   %ebx
081cd7a8 +0x006:  sub    $0x4c,%esp
081cd7ab +0x009:  mov    0x14(%ebp),%eax
081cd7ae +0x00c:  mov    %eax,-0x24(%ebp)
081cd7b1 +0x00f:  mov    0x14(%ebp),%eax
081cd7b4 +0x012:  mov    %eax,0xc(%esp)
081cd7b8 +0x016:  mov    0x10(%ebp),%eax
081cd7bb +0x019:  mov    %eax,0x8(%esp)
081cd7bf +0x01d:  mov    0xc(%ebp),%eax
081cd7c2 +0x020:  mov    %eax,0x4(%esp)
081cd7c6 +0x024:  mov    0x8(%ebp),%eax
081cd7c9 +0x027:  mov    %eax,(%esp)
081cd7cc +0x02a:  call   081cd71e <_ZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&)
081cd7d1 +0x02f:  mov    %eax,%edx
081cd7d3 +0x031:  mov    -0x24(%ebp),%eax
081cd7d6 +0x034:  mov    %edx,0x4(%eax)
081cd7d9 +0x037:  mov    -0x24(%ebp),%eax
081cd7dc +0x03a:  mov    0x4(%eax),%eax
081cd7df +0x03d:  test   %eax,%eax
081cd7e1 +0x03f:  jle    081cd7ed <+0x4b>
081cd7e3 +0x041:  mov    $0x0,%eax
081cd7e8 +0x046:  jmp    081cda57 <+0x2b5>
081cd7ed +0x04b:  mov    -0x24(%ebp),%eax
081cd7f0 +0x04e:  mov    0x4(%eax),%eax
081cd7f3 +0x051:  test   %eax,%eax
081cd7f5 +0x053:  jns    081cd829 <+0x87>
081cd7f7 +0x055:  mov    0xc(%ebp),%eax
081cd7fa +0x058:  mov    %eax,(%esp)
081cd7fd +0x05b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cd802 +0x060:  mov    -0x24(%ebp),%edx
081cd805 +0x063:  mov    0x4(%edx),%edx
081cd808 +0x066:  mov    %eax,0xc(%esp)
081cd80c +0x06a:  mov    %edx,0x8(%esp)
081cd810 +0x06e:  movl   $&_ZZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cd818 +0x076:  movl   $0x259e,(%esp)
081cd81f +0x07d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd824 +0x082:  jmp    081cda57 <+0x2b5>
081cd829 +0x087:  mov    0x10(%ebp),%eax
081cd82c +0x08a:  mov    %eax,-0x20(%ebp)
081cd82f +0x08d:  mov    0xc(%ebp),%eax
081cd832 +0x090:  mov    %eax,(%esp)
081cd835 +0x093:  call   0864e114 <_ZNK5CUser25getCurCharacSkillCheckSumEv>  ; CUser::getCurCharacSkillCheckSum() const
081cd83a +0x098:  mov    -0x20(%ebp),%edx
081cd83d +0x09b:  mov    0x14(%edx),%edx
081cd840 +0x09e:  cmp    %edx,%eax
081cd842 +0x0a0:  setne  %al
081cd845 +0x0a3:  test   %al,%al
081cd847 +0x0a5:  je     081cd883 <+0xe1>
081cd849 +0x0a7:  mov    0xc(%ebp),%eax
081cd84c +0x0aa:  mov    %eax,(%esp)
081cd84f +0x0ad:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081cd854 +0x0b2:  movl   $0x0,0x14(%esp)
081cd85c +0x0ba:  movl   $0x0,0x10(%esp)
081cd864 +0x0c2:  movl   $0x1,0xc(%esp)
081cd86c +0x0ca:  movl   $0x25c,0x8(%esp)
081cd874 +0x0d2:  mov    0xc(%ebp),%edx
081cd877 +0x0d5:  mov    %edx,0x4(%esp)
081cd87b +0x0d9:  mov    %eax,(%esp)
081cd87e +0x0dc:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081cd883 +0x0e1:  mov    0xc(%ebp),%eax
081cd886 +0x0e4:  mov    %eax,(%esp)
081cd889 +0x0e7:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081cd88e +0x0ec:  movswl %ax,%ebx
081cd891 +0x0ef:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081cd896 +0x0f4:  mov    %ebx,0x4(%esp)
081cd89a +0x0f8:  mov    %eax,(%esp)
081cd89d +0x0fb:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081cd8a2 +0x100:  mov    %eax,-0x1c(%ebp)
081cd8a5 +0x103:  mov    -0x20(%ebp),%eax
081cd8a8 +0x106:  lea    0x10(%eax),%ebx
081cd8ab +0x109:  mov    -0x1c(%ebp),%eax
081cd8ae +0x10c:  lea    0xc3c(%eax),%edx
081cd8b4 +0x112:  lea    -0x34(%ebp),%eax
081cd8b7 +0x115:  mov    %edx,0x4(%esp)
081cd8bb +0x119:  mov    %eax,(%esp)
081cd8be +0x11c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081cd8c3 +0x121:  sub    $0x4,%esp
081cd8c6 +0x124:  mov    -0x1c(%ebp),%eax
081cd8c9 +0x127:  lea    0xc3c(%eax),%edx
081cd8cf +0x12d:  lea    -0x30(%ebp),%eax
081cd8d2 +0x130:  mov    %edx,0x4(%esp)
081cd8d6 +0x134:  mov    %eax,(%esp)
081cd8d9 +0x137:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
081cd8de +0x13c:  sub    $0x4,%esp
081cd8e1 +0x13f:  lea    -0x38(%ebp),%eax
081cd8e4 +0x142:  mov    %ebx,0xc(%esp)
081cd8e8 +0x146:  mov    -0x34(%ebp),%edx
081cd8eb +0x149:  mov    %edx,0x8(%esp)
081cd8ef +0x14d:  mov    -0x30(%ebp),%edx
081cd8f2 +0x150:  mov    %edx,0x4(%esp)
081cd8f6 +0x154:  mov    %eax,(%esp)
081cd8f9 +0x157:  call   08236e49 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc4f3>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc4f3
081cd8fe +0x15c:  sub    $0x4,%esp
081cd901 +0x15f:  mov    -0x1c(%ebp),%eax
081cd904 +0x162:  lea    0xc3c(%eax),%edx
081cd90a +0x168:  lea    -0x2c(%ebp),%eax
081cd90d +0x16b:  mov    %edx,0x4(%esp)
081cd911 +0x16f:  mov    %eax,(%esp)
081cd914 +0x172:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081cd919 +0x177:  sub    $0x4,%esp
081cd91c +0x17a:  lea    -0x2c(%ebp),%eax
081cd91f +0x17d:  mov    %eax,0x4(%esp)
081cd923 +0x181:  lea    -0x38(%ebp),%eax
081cd926 +0x184:  mov    %eax,(%esp)
081cd929 +0x187:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
081cd92e +0x18c:  test   %al,%al
081cd930 +0x18e:  je     081cd964 <+0x1c2>
081cd932 +0x190:  mov    -0x1c(%ebp),%eax
081cd935 +0x193:  lea    0xc3c(%eax),%ecx
081cd93b +0x199:  lea    -0x28(%ebp),%eax
081cd93e +0x19c:  mov    -0x38(%ebp),%edx
081cd941 +0x19f:  mov    %edx,0x8(%esp)
081cd945 +0x1a3:  mov    %ecx,0x4(%esp)
081cd949 +0x1a7:  mov    %eax,(%esp)
081cd94c +0x1aa:  call   080ea48e <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xc7>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0xc7
081cd951 +0x1af:  sub    $0x4,%esp
081cd954 +0x1b2:  mov    -0x20(%ebp),%eax
081cd957 +0x1b5:  movzwl 0x10(%eax),%edx
081cd95b +0x1b9:  mov    -0x24(%ebp),%eax
081cd95e +0x1bc:  mov    %dx,0xa(%eax)
081cd962 +0x1c0:  jmp    081cd96e <+0x1cc>
081cd964 +0x1c2:  mov    -0x24(%ebp),%eax
081cd967 +0x1c5:  movl   $0x15,0x4(%eax)
081cd96e +0x1cc:  mov    -0x1c(%ebp),%eax
081cd971 +0x1cf:  add    $0xc3c,%eax
081cd976 +0x1d4:  mov    %eax,(%esp)
081cd979 +0x1d7:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
081cd97e +0x1dc:  test   %eax,%eax
081cd980 +0x1de:  sete   %al
081cd983 +0x1e1:  test   %al,%al
081cd985 +0x1e3:  je     081cda0b <+0x269>
081cd98b +0x1e9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081cd992 +0x1f0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081cd997 +0x1f5:  mov    -0x1c(%ebp),%edx
081cd99a +0x1f8:  mov    %eax,0xc48(%edx)
081cd9a0 +0x1fe:  movl   $0xffffffff,0x4(%esp)
081cd9a8 +0x206:  mov    0xc(%ebp),%eax
081cd9ab +0x209:  mov    %eax,(%esp)
081cd9ae +0x20c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081cd9b3 +0x211:  mov    %eax,%edi
081cd9b5 +0x213:  mov    -0x1c(%ebp),%eax
081cd9b8 +0x216:  mov    0xc48(%eax),%esi
081cd9be +0x21c:  mov    -0x1c(%ebp),%eax
081cd9c1 +0x21f:  mov    %eax,(%esp)
081cd9c4 +0x222:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
081cd9c9 +0x227:  mov    %eax,%ebx
081cd9cb +0x229:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
081cd9d0 +0x22e:  mov    %edi,0x1c(%esp)
081cd9d4 +0x232:  mov    %esi,0x18(%esp)
081cd9d8 +0x236:  movl   $0x3e8,0x10(%esp)
081cd9e0 +0x23e:  movl   $0x0,0x14(%esp)
081cd9e8 +0x246:  movl   $0x64,0xc(%esp)
081cd9f0 +0x24e:  mov    %ebx,0x8(%esp)
081cd9f4 +0x252:  movl   $0x1,0x4(%esp)
081cd9fc +0x25a:  mov    %eax,(%esp)
081cd9ff +0x25d:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
081cda04 +0x262:  mov    -0x24(%ebp),%eax
081cda07 +0x265:  movb   $0x1,0x8(%eax)
081cda0b +0x269:  mov    -0x20(%ebp),%eax
081cda0e +0x26c:  movzwl 0xe(%eax),%eax
081cda12 +0x270:  cmp    $0xffff,%ax
081cda16 +0x274:  jne    081cda52 <+0x2b0>
081cda18 +0x276:  mov    0xc(%ebp),%eax
081cda1b +0x279:  mov    %eax,(%esp)
081cda1e +0x27c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081cda23 +0x281:  movl   $0x0,0x14(%esp)
081cda2b +0x289:  movl   $0x0,0x10(%esp)
081cda33 +0x291:  movl   $0x1,0xc(%esp)
081cda3b +0x299:  movl   $0xcb,0x8(%esp)
081cda43 +0x2a1:  mov    0xc(%ebp),%edx
081cda46 +0x2a4:  mov    %edx,0x4(%esp)
081cda4a +0x2a8:  mov    %eax,(%esp)
081cda4d +0x2ab:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081cda52 +0x2b0:  mov    $0x0,%eax
081cda57 +0x2b5:  lea    -0xc(%ebp),%esp
081cda5a +0x2b8:  add    $0x0,%esp
081cda5d +0x2bb:  pop    %ebx
081cda5e +0x2bc:  pop    %esi
081cda5f +0x2bd:  pop    %edi
081cda60 +0x2be:  pop    %ebp
081cda61 +0x2bf:  ret
```

## 反编译 C

```c
// Dispatcher_BossDieCheck::process @ 0x81cd7a2

/* Dispatcher_BossDieCheck::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BossDieCheck::process
          (Dispatcher_BossDieCheck *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE *pMVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  CHackAnalyzer *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  __normal_iterator local_30 [4];
  undefined1 local_2c [4];
  ParamBase *local_28;
  MSG_BASE *local_24;
  CParty *local_20;
  
  local_28 = param_3;
  uVar3 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(local_28 + 4) = uVar3;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x259e,
                       "virtual int Dispatcher_BossDieCheck::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_28 + 4),uVar4);
    }
    else {
      local_24 = param_2;
      iVar5 = CUser::getCurCharacSkillCheckSum(param_1);
      if (iVar5 != *(int *)(local_24 + 0x14)) {
        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x25c,1,0,0);
      }
      CUser::GetPartyIndex(param_1);
      iVar5 = G_CGameManager();
      local_20 = (CParty *)CGameManager::GetParty(iVar5);
      pMVar1 = local_24 + 0x10;
      std::vector<int,std::allocator<int>>::end();
      std::vector<int,std::allocator<int>>::begin();
      std::
      find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,unsigned_short>
                (&local_3c,local_34,local_38,pMVar1);
      std::vector<int,std::allocator<int>>::end();
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_3c,local_30);
      if (bVar2) {
        std::vector<int,std::allocator<int>>::erase(local_2c,local_20 + 0xc3c,local_3c);
        *(undefined2 *)(local_28 + 10) = *(undefined2 *)(local_24 + 0x10);
      }
      else {
        *(undefined4 *)(local_28 + 4) = 0x15;
      }
      iVar5 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(local_20 + 0xc3c));
      if (iVar5 == 0) {
        uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(local_20 + 0xc48) = uVar3;
        uVar7 = CUser::get_charac_no(param_1,-1);
        uVar3 = *(undefined4 *)(local_20 + 0xc48);
        uVar8 = CParty::GetPartyIndex(local_20);
        uVar9 = G_TimerQueue();
        TimerQueue::InsertTimerInMilisecond(uVar9,1,uVar8,100,1000,0,uVar3,uVar7);
        local_28[8] = (ParamBase)0x1;
      }
      if (*(short *)(local_24 + 0xe) == -1) {
        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xcb,1,0,0);
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
