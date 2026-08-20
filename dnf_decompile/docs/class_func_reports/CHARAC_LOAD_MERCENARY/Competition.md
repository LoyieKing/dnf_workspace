# Competition

`_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc`

`CHARAC_LOAD_MERCENARY::Competition(CUser*, char, char)`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b3814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b3814  _ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc
#           CHARAC_LOAD_MERCENARY::Competition(CUser*, char, char)
# range [0x081b3814, 0x081b3b67]
081b3814 +0x000:  push   %ebp
081b3815 +0x001:  mov    %esp,%ebp
081b3817 +0x003:  push   %edi
081b3818 +0x004:  push   %esi
081b3819 +0x005:  push   %ebx
081b381a +0x006:  sub    $0x7c,%esp
081b381d +0x009:  mov    0x10(%ebp),%edx
081b3820 +0x00c:  mov    0x14(%ebp),%eax
081b3823 +0x00f:  mov    %dl,-0x4c(%ebp)
081b3826 +0x012:  mov    %al,-0x50(%ebp)
081b3829 +0x015:  cmpl   $0x0,0xc(%ebp)
081b382d +0x019:  jne    081b3839 <+0x25>
081b382f +0x01b:  mov    $0x0,%eax
081b3834 +0x020:  jmp    081b3b60 <+0x34c>
081b3839 +0x025:  lea    -0x38(%ebp),%eax
081b383c +0x028:  mov    %eax,(%esp)
081b383f +0x02b:  call   081b47a8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x1c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x1c
081b3844 +0x030:  lea    -0x38(%ebp),%eax
081b3847 +0x033:  mov    %eax,0x8(%esp)
081b384b +0x037:  mov    0xc(%ebp),%eax
081b384e +0x03a:  mov    %eax,0x4(%esp)
081b3852 +0x03e:  mov    0x8(%ebp),%eax
081b3855 +0x041:  mov    %eax,(%esp)
081b3858 +0x044:  call   081b3b68 <_ZN21CHARAC_LOAD_MERCENARY6RewardEP5CUserR25competition_reward_result>  ; CHARAC_LOAD_MERCENARY::Reward(CUser*, competition_reward_result&)
081b385d +0x049:  mov    0x8(%ebp),%eax
081b3860 +0x04c:  mov    %eax,(%esp)
081b3863 +0x04f:  call   081b2e86 <_ZNK21CHARAC_LOAD_MERCENARY19GetCompetitionStateEv>  ; CHARAC_LOAD_MERCENARY::GetCompetitionState() const
081b3868 +0x054:  test   %eax,%eax
081b386a +0x056:  setne  %al
081b386d +0x059:  test   %al,%al
081b386f +0x05b:  je     081b387b <+0x67>
081b3871 +0x05d:  mov    $0x0,%eax
081b3876 +0x062:  jmp    081b3b60 <+0x34c>
081b387b +0x067:  movsbl -0x4c(%ebp),%eax
081b387f +0x06b:  mov    %eax,0x4(%esp)
081b3883 +0x06f:  mov    0x8(%ebp),%eax
081b3886 +0x072:  mov    %eax,(%esp)
081b3889 +0x075:  call   081b2bc4 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc>  ; CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const
081b388e +0x07a:  xor    $0x1,%eax
081b3891 +0x07d:  test   %al,%al
081b3893 +0x07f:  je     081b389f <+0x8b>
081b3895 +0x081:  mov    $0x0,%eax
081b389a +0x086:  jmp    081b3b60 <+0x34c>
081b389f +0x08b:  mov    0x8(%ebp),%eax
081b38a2 +0x08e:  movzwl 0x4(%eax),%eax
081b38a6 +0x092:  movswl %ax,%edx
081b38a9 +0x095:  movsbl -0x50(%ebp),%eax
081b38ad +0x099:  mov    %edx,0x8(%esp)
081b38b1 +0x09d:  mov    %eax,0x4(%esp)
081b38b5 +0x0a1:  mov    0x8(%ebp),%eax
081b38b8 +0x0a4:  mov    %eax,(%esp)
081b38bb +0x0a7:  call   081b2b34 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci>  ; CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const
081b38c0 +0x0ac:  xor    $0x1,%eax
081b38c3 +0x0af:  test   %al,%al
081b38c5 +0x0b1:  je     081b38d1 <+0xbd>
081b38c7 +0x0b3:  mov    $0x0,%eax
081b38cc +0x0b8:  jmp    081b3b60 <+0x34c>
081b38d1 +0x0bd:  movsbl -0x50(%ebp),%ebx
081b38d5 +0x0c1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b38da +0x0c6:  add    $0xa91c,%eax
081b38df +0x0cb:  mov    %ebx,0x4(%esp)
081b38e3 +0x0cf:  mov    %eax,(%esp)
081b38e6 +0x0d2:  call   081b484e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xc2>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xc2
081b38eb +0x0d7:  movzwl (%eax),%eax
081b38ee +0x0da:  cmp    $0xffff,%ax
081b38f2 +0x0de:  sete   %al
081b38f5 +0x0e1:  test   %al,%al
081b38f7 +0x0e3:  je     081b3a85 <+0x271>
081b38fd +0x0e9:  mov    $&_ZGVZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUserccE8probArea,%eax
081b3902 +0x0ee:  movzbl (%eax),%eax
081b3905 +0x0f1:  test   %al,%al
081b3907 +0x0f3:  jne    081b395d <+0x149>
081b3909 +0x0f5:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUserccE8probArea,(%esp)
081b3910 +0x0fc:  call   08725330 <__cxa_guard_acquire>
081b3915 +0x101:  test   %eax,%eax
081b3917 +0x103:  setne  %al
081b391a +0x106:  test   %al,%al
081b391c +0x108:  je     081b395d <+0x149>
081b391e +0x10a:  mov    $0x0,%ebx
081b3923 +0x10f:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUserccE8probArea,(%esp)
081b392a +0x116:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
081b392f +0x11b:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUserccE8probArea,(%esp)
081b3936 +0x122:  call   08725250 <__cxa_guard_release>
081b393b +0x127:  jmp    081b395d <+0x149>
081b393d +0x129:  mov    %edx,%esi
081b393f +0x12b:  mov    %eax,%edi
081b3941 +0x12d:  test   %bl,%bl
081b3943 +0x12f:  jne    081b3951 <+0x13d>
081b3945 +0x131:  movl   $&_ZGVZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUserccE8probArea,(%esp)
081b394c +0x138:  call   087252c0 <__cxa_guard_abort>
081b3951 +0x13d:  mov    %edi,%eax
081b3953 +0x13f:  mov    %esi,%edx
081b3955 +0x141:  mov    %eax,(%esp)
081b3958 +0x144:  call   08ae3750 <_Unwind_Resume>
081b395d +0x149:  lea    -0x44(%ebp),%eax
081b3960 +0x14c:  mov    %eax,(%esp)
081b3963 +0x14f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081b3968 +0x154:  movl   $0x0,-0x48(%ebp)
081b396f +0x15b:  jmp    081b39c9 <+0x1b5>
081b3971 +0x15d:  mov    -0x48(%ebp),%eax
081b3974 +0x160:  mov    %eax,%ebx
081b3976 +0x162:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b397b +0x167:  add    $0xa91c,%eax
081b3980 +0x16c:  mov    %ebx,0x4(%esp)
081b3984 +0x170:  mov    %eax,(%esp)
081b3987 +0x173:  call   081b484e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xc2>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xc2
081b398c +0x178:  mov    %eax,-0x1c(%ebp)
081b398f +0x17b:  mov    -0x1c(%ebp),%eax
081b3992 +0x17e:  movzwl 0x14(%eax),%eax
081b3996 +0x182:  test   %ax,%ax
081b3999 +0x185:  je     081b39c0 <+0x1ac>
081b399b +0x187:  mov    -0x1c(%ebp),%eax
081b399e +0x18a:  movzwl 0x14(%eax),%edx
081b39a2 +0x18e:  mov    0x8(%ebp),%eax
081b39a5 +0x191:  movzwl 0x4(%eax),%eax
081b39a9 +0x195:  cmp    %ax,%dx
081b39ac +0x198:  jg     081b39c0 <+0x1ac>
081b39ae +0x19a:  lea    -0x48(%ebp),%eax
081b39b1 +0x19d:  mov    %eax,0x4(%esp)
081b39b5 +0x1a1:  lea    -0x44(%ebp),%eax
081b39b8 +0x1a4:  mov    %eax,(%esp)
081b39bb +0x1a7:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
081b39c0 +0x1ac:  mov    -0x48(%ebp),%eax
081b39c3 +0x1af:  add    $0x1,%eax
081b39c6 +0x1b2:  mov    %eax,-0x48(%ebp)
081b39c9 +0x1b5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b39ce +0x1ba:  add    $0xa91c,%eax
081b39d3 +0x1bf:  mov    %eax,(%esp)
081b39d6 +0x1c2:  call   081b482c <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xa0>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xa0
081b39db +0x1c7:  mov    %eax,%edx
081b39dd +0x1c9:  mov    -0x48(%ebp),%eax
081b39e0 +0x1cc:  cmp    %eax,%edx
081b39e2 +0x1ce:  setg   %al
081b39e5 +0x1d1:  test   %al,%al
081b39e7 +0x1d3:  jne    081b3971 <+0x15d>
081b39e9 +0x1d5:  lea    -0x44(%ebp),%eax
081b39ec +0x1d8:  mov    %eax,(%esp)
081b39ef +0x1db:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
081b39f4 +0x1e0:  sub    $0x1,%eax
081b39f7 +0x1e3:  mov    %eax,-0x2c(%ebp)
081b39fa +0x1e6:  lea    -0x2c(%ebp),%eax
081b39fd +0x1e9:  mov    %eax,0x4(%esp)
081b3a01 +0x1ed:  movl   $&_ZZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUserccE8probArea,(%esp)
081b3a08 +0x1f4:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b3a0d +0x1f9:  mov    %eax,-0x24(%ebp)
081b3a10 +0x1fc:  mov    -0x24(%ebp),%eax
081b3a13 +0x1ff:  mov    %eax,0x4(%esp)
081b3a17 +0x203:  lea    -0x44(%ebp),%eax
081b3a1a +0x206:  mov    %eax,(%esp)
081b3a1d +0x209:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081b3a22 +0x20e:  mov    (%eax),%eax
081b3a24 +0x210:  mov    %eax,-0x20(%ebp)
081b3a27 +0x213:  mov    0x8(%ebp),%eax
081b3a2a +0x216:  movzwl 0x4(%eax),%eax
081b3a2e +0x21a:  movswl %ax,%edx
081b3a31 +0x21d:  mov    -0x20(%ebp),%eax
081b3a34 +0x220:  movsbl %al,%eax
081b3a37 +0x223:  mov    %edx,0x8(%esp)
081b3a3b +0x227:  mov    %eax,0x4(%esp)
081b3a3f +0x22b:  mov    0x8(%ebp),%eax
081b3a42 +0x22e:  mov    %eax,(%esp)
081b3a45 +0x231:  call   081b2b34 <_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci>  ; CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const
081b3a4a +0x236:  xor    $0x1,%eax
081b3a4d +0x239:  test   %al,%al
081b3a4f +0x23b:  je     081b3a57 <+0x243>
081b3a51 +0x23d:  movb   $0x0,-0x50(%ebp)
081b3a55 +0x241:  jmp    081b3a7a <+0x266>
081b3a57 +0x243:  mov    -0x20(%ebp),%eax
081b3a5a +0x246:  mov    %al,-0x50(%ebp)
081b3a5d +0x249:  jmp    081b3a7a <+0x266>
081b3a5f +0x24b:  mov    %edx,%ebx
081b3a61 +0x24d:  mov    %eax,%esi
081b3a63 +0x24f:  lea    -0x44(%ebp),%eax
081b3a66 +0x252:  mov    %eax,(%esp)
081b3a69 +0x255:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081b3a6e +0x25a:  mov    %esi,%eax
081b3a70 +0x25c:  mov    %ebx,%edx
081b3a72 +0x25e:  mov    %eax,(%esp)
081b3a75 +0x261:  call   08ae3750 <_Unwind_Resume>
081b3a7a +0x266:  lea    -0x44(%ebp),%eax
081b3a7d +0x269:  mov    %eax,(%esp)
081b3a80 +0x26c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081b3a85 +0x271:  movsbl -0x4c(%ebp),%eax
081b3a89 +0x275:  mov    %eax,0x4(%esp)
081b3a8d +0x279:  mov    0x8(%ebp),%eax
081b3a90 +0x27c:  mov    %eax,(%esp)
081b3a93 +0x27f:  call   081b2ed2 <_ZNK21CHARAC_LOAD_MERCENARY26GetCompetitionPeriodSecondEc>  ; CHARAC_LOAD_MERCENARY::GetCompetitionPeriodSecond(char) const
081b3a98 +0x284:  mov    %eax,-0x28(%ebp)
081b3a9b +0x287:  cmpl   $0x0,-0x28(%ebp)
081b3a9f +0x28b:  jne    081b3aab <+0x297>
081b3aa1 +0x28d:  mov    $0x0,%eax
081b3aa6 +0x292:  jmp    081b3b60 <+0x34c>
081b3aab +0x297:  mov    0x8(%ebp),%eax
081b3aae +0x29a:  mov    %eax,(%esp)
081b3ab1 +0x29d:  call   081b47c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3c
081b3ab6 +0x2a2:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081b3abd +0x2a9:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081b3ac2 +0x2ae:  mov    %eax,%edx
081b3ac4 +0x2b0:  mov    0x8(%ebp),%eax
081b3ac7 +0x2b3:  mov    %edx,0x28(%eax)
081b3aca +0x2b6:  mov    0x8(%ebp),%eax
081b3acd +0x2b9:  mov    0x28(%eax),%eax
081b3ad0 +0x2bc:  mov    %eax,%edx
081b3ad2 +0x2be:  add    -0x28(%ebp),%edx
081b3ad5 +0x2c1:  mov    0x8(%ebp),%eax
081b3ad8 +0x2c4:  mov    %edx,0x2c(%eax)
081b3adb +0x2c7:  mov    0x8(%ebp),%eax
081b3ade +0x2ca:  movzbl -0x50(%ebp),%edx
081b3ae2 +0x2ce:  mov    %dl,0x30(%eax)
081b3ae5 +0x2d1:  mov    0x8(%ebp),%eax
081b3ae8 +0x2d4:  movzbl -0x4c(%ebp),%edx
081b3aec +0x2d8:  mov    %dl,0x31(%eax)
081b3aef +0x2db:  movsbl -0x50(%ebp),%eax
081b3af3 +0x2df:  mov    %eax,-0x58(%ebp)
081b3af6 +0x2e2:  movsbl -0x4c(%ebp),%edx
081b3afa +0x2e6:  mov    %edx,-0x54(%ebp)
081b3afd +0x2e9:  mov    0x8(%ebp),%eax
081b3b00 +0x2ec:  mov    0x2c(%eax),%edi
081b3b03 +0x2ef:  mov    0x8(%ebp),%eax
081b3b06 +0x2f2:  mov    0x28(%eax),%esi
081b3b09 +0x2f5:  mov    0x8(%ebp),%eax
081b3b0c +0x2f8:  mov    (%eax),%ebx
081b3b0e +0x2fa:  mov    0xc(%ebp),%eax
081b3b11 +0x2fd:  mov    %eax,(%esp)
081b3b14 +0x300:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081b3b19 +0x305:  movl   $0xffffffff,0x24(%esp)
081b3b21 +0x30d:  movl   $0xffffffff,0x20(%esp)
081b3b29 +0x315:  movl   $0xffffffff,0x1c(%esp)
081b3b31 +0x31d:  mov    -0x58(%ebp),%edx
081b3b34 +0x320:  mov    %edx,0x18(%esp)
081b3b38 +0x324:  mov    -0x54(%ebp),%edx
081b3b3b +0x327:  mov    %edx,0x14(%esp)
081b3b3f +0x32b:  movl   $0x0,0x10(%esp)
081b3b47 +0x333:  mov    %edi,0xc(%esp)
081b3b4b +0x337:  mov    %esi,0x8(%esp)
081b3b4f +0x33b:  mov    %ebx,0x4(%esp)
081b3b53 +0x33f:  mov    %eax,(%esp)
081b3b56 +0x342:  call   08446340 <_ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii>  ; DB_MercenaryLogInfo::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char, char, char, int, int, int)
081b3b5b +0x347:  mov    $0x1,%eax
081b3b60 +0x34c:  add    $0x7c,%esp
081b3b63 +0x34f:  pop    %ebx
081b3b64 +0x350:  pop    %esi
081b3b65 +0x351:  pop    %edi
081b3b66 +0x352:  pop    %ebp
081b3b67 +0x353:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::Competition @ 0x81b3814

/* CHARAC_LOAD_MERCENARY::Competition(CUser*, char, char) */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::Competition
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,char param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  uint uVar9;
  CHARAC_LOAD_MERCENARY local_54;
  uint local_4c;
  vector<int,std::allocator<int>> local_48 [12];
  competition_reward_result local_3c [12];
  ulong local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  int local_20;
  
  local_54 = (CHARAC_LOAD_MERCENARY)param_3;
  if (param_1 == (CUser *)0x0) {
    uVar5 = 0;
  }
  else {
    competition_reward_result::competition_reward_result(local_3c);
    Reward(this,param_1,local_3c);
    iVar6 = GetCompetitionState(this);
    if (iVar6 == 0) {
      cVar4 = CheckCompetitionPeriodIndex(this,param_2);
      if (cVar4 == '\x01') {
        cVar4 = CheckCompetitionAreaIndex(this,param_3,(int)*(short *)(this + 4));
        if (cVar4 == '\x01') {
          iVar6 = G_CDataManager();
          psVar7 = (short *)std::
                            vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                            ::operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                                          *)(iVar6 + 0xa91c),(int)param_3);
          if (*psVar7 == -1) {
            if (Competition(CUser*,char,char)::probArea == '\0') {
              iVar6 = __cxa_guard_acquire(&Competition(CUser*,char,char)::probArea);
              if (iVar6 != 0) {
                    /* try { // try from 081b392a to 081b392e has its CatchHandler @ 081b393d */
                CMTRand::CMTRand((CMTRand *)Competition(CUser*,char,char)::probArea);
                __cxa_guard_release(&Competition(CUser*,char,char)::probArea);
              }
            }
            std::vector<int,std::allocator<int>>::vector(local_48);
            local_4c = 0;
            while( true ) {
              iVar6 = G_CDataManager();
              iVar6 = std::
                      vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                      ::size((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                              *)(iVar6 + 0xa91c));
              uVar1 = local_4c;
              if (iVar6 <= (int)local_4c) break;
                    /* try { // try from 081b3976 to 081b3a49 has its CatchHandler @ 081b3a5f */
              iVar6 = G_CDataManager();
              local_20 = std::
                         vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                         ::operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                                       *)(iVar6 + 0xa91c),uVar1);
              if ((*(short *)(local_20 + 0x14) != 0) &&
                 (*(short *)(local_20 + 0x14) <= *(short *)(this + 4))) {
                std::vector<int,std::allocator<int>>::push_back(local_48,(int *)&local_4c);
              }
              local_4c = local_4c + 1;
            }
            iVar6 = std::vector<int,std::allocator<int>>::size(local_48);
            local_30 = iVar6 - 1;
            local_28 = CMTRand::randInt((CMTRand *)Competition(CUser*,char,char)::probArea,&local_30
                                       );
            puVar8 = (undefined4 *)
                     std::vector<int,std::allocator<int>>::operator[](local_48,local_28);
            local_24 = *puVar8;
            cVar4 = CheckCompetitionAreaIndex(this,(char)local_24,(int)*(short *)(this + 4));
            if (cVar4 == '\x01') {
              local_54 = SUB41(local_24,0);
            }
            else {
              local_54 = (CHARAC_LOAD_MERCENARY)0x0;
            }
            std::vector<int,std::allocator<int>>::~vector(local_48);
          }
          local_2c = GetCompetitionPeriodSecond(this,param_2);
          if (local_2c == 0) {
            uVar5 = 0;
          }
          else {
            alter(this);
            uVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            *(undefined4 *)(this + 0x28) = uVar5;
            *(int *)(this + 0x2c) = *(int *)(this + 0x28) + local_2c;
            this[0x30] = local_54;
            this[0x31] = (CHARAC_LOAD_MERCENARY)param_2;
            uVar1 = *(uint *)(this + 0x2c);
            uVar2 = *(uint *)(this + 0x28);
            uVar3 = *(uint *)this;
            uVar9 = CUser::get_acc_id(param_1);
            DB_MercenaryLogInfo::makeRequest
                      (uVar9,uVar3,uVar2,uVar1,'\0',param_2,(char)local_54,-1,-1,-1);
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
