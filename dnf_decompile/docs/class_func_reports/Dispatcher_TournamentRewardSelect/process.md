# process

`_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TournamentRewardSelect` | `0x081e00f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e00f0  _ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e00f0, 0x081e02af]
081e00f0 +0x000:  push   %ebp
081e00f1 +0x001:  mov    %esp,%ebp
081e00f3 +0x003:  push   %esi
081e00f4 +0x004:  push   %ebx
081e00f5 +0x005:  sub    $0x30,%esp
081e00f8 +0x008:  mov    0x14(%ebp),%eax
081e00fb +0x00b:  mov    %eax,-0x1c(%ebp)
081e00fe +0x00e:  mov    0x10(%ebp),%eax
081e0101 +0x011:  mov    %eax,0x8(%esp)
081e0105 +0x015:  mov    0xc(%ebp),%eax
081e0108 +0x018:  mov    %eax,0x4(%esp)
081e010c +0x01c:  mov    0x8(%ebp),%eax
081e010f +0x01f:  mov    %eax,(%esp)
081e0112 +0x022:  call   081e046c <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_TournamentRewardSelect::check_error(CUser*, MSG_BASE&)
081e0117 +0x027:  mov    -0x1c(%ebp),%edx
081e011a +0x02a:  mov    %eax,0x4(%edx)
081e011d +0x02d:  mov    -0x1c(%ebp),%eax
081e0120 +0x030:  mov    0x4(%eax),%eax
081e0123 +0x033:  test   %eax,%eax
081e0125 +0x035:  jle    081e0131 <+0x41>
081e0127 +0x037:  mov    $0x0,%ebx
081e012c +0x03c:  jmp    081e02a6 <+0x1b6>
081e0131 +0x041:  mov    -0x1c(%ebp),%eax
081e0134 +0x044:  mov    0x4(%eax),%eax
081e0137 +0x047:  test   %eax,%eax
081e0139 +0x049:  jns    081e0168 <+0x78>
081e013b +0x04b:  mov    -0x1c(%ebp),%eax
081e013e +0x04e:  mov    0x4(%eax),%eax
081e0141 +0x051:  movl   $0x0,0xc(%esp)
081e0149 +0x059:  mov    %eax,0x8(%esp)
081e014d +0x05d:  movl   $&_ZZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e0155 +0x065:  movl   $0x5315,(%esp)
081e015c +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e0161 +0x071:  mov    %eax,%ebx
081e0163 +0x073:  jmp    081e02a6 <+0x1b6>
081e0168 +0x078:  mov    0x10(%ebp),%eax
081e016b +0x07b:  mov    %eax,-0x18(%ebp)
081e016e +0x07e:  mov    0xc(%ebp),%eax
081e0171 +0x081:  mov    %eax,(%esp)
081e0174 +0x084:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081e0179 +0x089:  movswl %ax,%ebx
081e017c +0x08c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081e0181 +0x091:  mov    %ebx,0x4(%esp)
081e0185 +0x095:  mov    %eax,(%esp)
081e0188 +0x098:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081e018d +0x09d:  mov    %eax,-0x14(%ebp)
081e0190 +0x0a0:  cmpl   $0x0,-0x14(%ebp)
081e0194 +0x0a4:  jne    081e01c1 <+0xd1>
081e0196 +0x0a6:  movl   $0x0,0xc(%esp)
081e019e +0x0ae:  movl   $0x0,0x8(%esp)
081e01a6 +0x0b6:  movl   $&_ZZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e01ae +0x0be:  movl   $0x531c,(%esp)
081e01b5 +0x0c5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e01ba +0x0ca:  mov    %eax,%ebx
081e01bc +0x0cc:  jmp    081e02a6 <+0x1b6>
081e01c1 +0x0d1:  lea    -0x28(%ebp),%eax
081e01c4 +0x0d4:  mov    %eax,(%esp)
081e01c7 +0x0d7:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081e01cc +0x0dc:  lea    -0x28(%ebp),%eax
081e01cf +0x0df:  mov    %eax,0x4(%esp)
081e01d3 +0x0e3:  mov    -0x14(%ebp),%eax
081e01d6 +0x0e6:  mov    %eax,(%esp)
081e01d9 +0x0e9:  call   085bd1dc <_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE>  ; CParty::GetValidPartyMember(std::vector<int, std::allocator<int> >&)
081e01de +0x0ee:  mov    -0x14(%ebp),%eax
081e01e1 +0x0f1:  add    $0x17bc,%eax
081e01e6 +0x0f6:  mov    %eax,-0x10(%ebp)
081e01e9 +0x0f9:  lea    -0x28(%ebp),%eax
081e01ec +0x0fc:  mov    %eax,0x8(%esp)
081e01f0 +0x100:  movl   $0x2,0x4(%esp)
081e01f8 +0x108:  mov    -0x10(%ebp),%eax
081e01fb +0x10b:  mov    %eax,(%esp)
081e01fe +0x10e:  call   08284d08 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>  ; CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
081e0203 +0x113:  mov    %al,-0xa(%ebp)
081e0206 +0x116:  movzbl -0xa(%ebp),%eax
081e020a +0x11a:  xor    $0x1,%eax
081e020d +0x11d:  test   %al,%al
081e020f +0x11f:  je     081e026f <+0x17f>
081e0211 +0x121:  mov    -0x18(%ebp),%eax
081e0214 +0x124:  movzbl 0xe(%eax),%eax
081e0218 +0x128:  movsbl %al,%esi
081e021b +0x12b:  mov    -0x18(%ebp),%eax
081e021e +0x12e:  movzbl 0xd(%eax),%eax
081e0222 +0x132:  movsbl %al,%ebx
081e0225 +0x135:  mov    0xc(%ebp),%eax
081e0228 +0x138:  mov    %eax,0x4(%esp)
081e022c +0x13c:  mov    -0x14(%ebp),%eax
081e022f +0x13f:  mov    %eax,(%esp)
081e0232 +0x142:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
081e0237 +0x147:  mov    %esi,0xc(%esp)
081e023b +0x14b:  mov    %ebx,0x8(%esp)
081e023f +0x14f:  mov    %eax,0x4(%esp)
081e0243 +0x153:  mov    -0x10(%ebp),%eax
081e0246 +0x156:  mov    %eax,(%esp)
081e0249 +0x159:  call   08284ee4 <_ZN24CTournamentDungeonReward10SelectCardEicc>  ; CTournamentDungeonReward::SelectCard(int, char, char)
081e024e +0x15e:  mov    %al,-0x9(%ebp)
081e0251 +0x161:  cmpb   $0x0,-0x9(%ebp)
081e0255 +0x165:  je     081e025e <+0x16e>
081e0257 +0x167:  mov    $0x0,%ebx
081e025c +0x16c:  jmp    081e029b <+0x1ab>
081e025e +0x16e:  mov    -0x1c(%ebp),%eax
081e0261 +0x171:  movl   $0x7fffffff,0x4(%eax)
081e0268 +0x178:  mov    $0x0,%ebx
081e026d +0x17d:  jmp    081e029b <+0x1ab>
081e026f +0x17f:  mov    -0x1c(%ebp),%eax
081e0272 +0x182:  movl   $0x7fffffff,0x4(%eax)
081e0279 +0x189:  mov    $0x0,%ebx
081e027e +0x18e:  jmp    081e029b <+0x1ab>
081e0280 +0x190:  mov    %edx,%ebx
081e0282 +0x192:  mov    %eax,%esi
081e0284 +0x194:  lea    -0x28(%ebp),%eax
081e0287 +0x197:  mov    %eax,(%esp)
081e028a +0x19a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081e028f +0x19f:  mov    %esi,%eax
081e0291 +0x1a1:  mov    %ebx,%edx
081e0293 +0x1a3:  mov    %eax,(%esp)
081e0296 +0x1a6:  call   08ae3750 <_Unwind_Resume>
081e029b +0x1ab:  lea    -0x28(%ebp),%eax
081e029e +0x1ae:  mov    %eax,(%esp)
081e02a1 +0x1b1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081e02a6 +0x1b6:  mov    %ebx,%eax
081e02a8 +0x1b8:  add    $0x30,%esp
081e02ab +0x1bb:  pop    %ebx
081e02ac +0x1bc:  pop    %esi
081e02ad +0x1bd:  pop    %ebp
081e02ae +0x1be:  ret
081e02af +0x1bf:  nop
```

## 反编译 C

```c
// Dispatcher_TournamentRewardSelect::process @ 0x81e00f0

/* Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_TournamentRewardSelect::process
          (Dispatcher_TournamentRewardSelect *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  int iVar4;
  vector<int,std::allocator<int>> local_2c [12];
  ParamBase *local_20;
  MSG_BASE *local_1c;
  CParty *local_18;
  CTournamentDungeonReward *local_14;
  char local_e;
  char local_d;
  
  local_20 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_20 + 4) = uVar3;
  if (*(int *)(local_20 + 4) < 1) {
    if (*(int *)(local_20 + 4) < 0) {
      uVar3 = LineFunc(0x5315,
                       "virtual int Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_20 + 4),0);
    }
    else {
      local_1c = param_2;
      CUser::GetPartyIndex(param_1);
      iVar4 = G_CGameManager();
      local_18 = (CParty *)CGameManager::GetParty(iVar4);
      if (local_18 == (CParty *)0x0) {
        uVar3 = LineFunc(0x531c,
                         "virtual int Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,0);
      }
      else {
        std::vector<int,std::allocator<int>>::vector(local_2c);
                    /* try { // try from 081e01d9 to 081e024d has its CatchHandler @ 081e0280 */
        CParty::GetValidPartyMember(local_18,(vector *)local_2c);
        local_14 = (CTournamentDungeonReward *)(local_18 + 0x17bc);
        local_e = CTournamentDungeonReward::isCardSelectComplete(local_14,2,local_2c);
        if (local_e == '\x01') {
          *(undefined4 *)(local_20 + 4) = 0x7fffffff;
        }
        else {
          MVar1 = local_1c[0xe];
          MVar2 = local_1c[0xd];
          iVar4 = CParty::GetMemberSlotNo(local_18,param_1);
          local_d = CTournamentDungeonReward::SelectCard(local_14,iVar4,(char)MVar2,(char)MVar1);
          if (local_d == '\0') {
            *(undefined4 *)(local_20 + 4) = 0x7fffffff;
          }
        }
        uVar3 = 0;
        std::vector<int,std::allocator<int>>::~vector(local_2c);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
