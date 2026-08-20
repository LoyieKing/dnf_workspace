# CheckTrapBitsHackCnt

`_ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP`

`DisPatcher_MoveMap::CheckTrapBitsHackCnt(CUser*, MSG_MOVE_MAP&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveMap` | `0x081c4b7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4b7a  _ZN18DisPatcher_MoveMap20CheckTrapBitsHackCntEP5CUserR12MSG_MOVE_MAP
#           DisPatcher_MoveMap::CheckTrapBitsHackCnt(CUser*, MSG_MOVE_MAP&)
# range [0x081c4b7a, 0x081c4d25]
081c4b7a +0x000:  push   %ebp
081c4b7b +0x001:  mov    %esp,%ebp
081c4b7d +0x003:  push   %ebx
081c4b7e +0x004:  sub    $0x34,%esp
081c4b81 +0x007:  mov    0x10(%ebp),%eax
081c4b84 +0x00a:  movzwl 0x18(%eax),%ecx
081c4b88 +0x00e:  movzwl %cx,%eax
081c4b8b +0x011:  imul   $0x2493,%eax,%eax
081c4b91 +0x017:  shr    $0x10,%eax
081c4b94 +0x01a:  mov    %ecx,%edx
081c4b96 +0x01c:  sub    %ax,%dx
081c4b99 +0x01f:  shr    %dx
081c4b9c +0x022:  lea    (%edx,%eax,1),%eax
081c4b9f +0x025:  mov    %eax,%edx
081c4ba1 +0x027:  shr    $0x2,%dx
081c4ba5 +0x02b:  mov    %edx,%eax
081c4ba7 +0x02d:  shl    $0x3,%eax
081c4baa +0x030:  sub    %dx,%ax
081c4bad +0x033:  mov    %ecx,%edx
081c4baf +0x035:  sub    %ax,%dx
081c4bb2 +0x038:  test   %dx,%dx
081c4bb5 +0x03b:  je     081c4d20 <+0x1a6>
081c4bbb +0x041:  mov    0xc(%ebp),%eax
081c4bbe +0x044:  mov    %eax,(%esp)
081c4bc1 +0x047:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c4bc6 +0x04c:  movl   $0x0,0x14(%esp)
081c4bce +0x054:  movl   $0x0,0x10(%esp)
081c4bd6 +0x05c:  movl   $0x1,0xc(%esp)
081c4bde +0x064:  movl   $0x1f9,0x8(%esp)
081c4be6 +0x06c:  mov    0xc(%ebp),%edx
081c4be9 +0x06f:  mov    %edx,0x4(%esp)
081c4bed +0x073:  mov    %eax,(%esp)
081c4bf0 +0x076:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c4bf5 +0x07b:  mov    0xc(%ebp),%eax
081c4bf8 +0x07e:  mov    %eax,(%esp)
081c4bfb +0x081:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c4c00 +0x086:  movl   $0x1f9,0x4(%esp)
081c4c08 +0x08e:  mov    %eax,(%esp)
081c4c0b +0x091:  call   0822eef6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45a0
081c4c10 +0x096:  cmp    $0x4,%eax
081c4c13 +0x099:  setg   %al
081c4c16 +0x09c:  test   %al,%al
081c4c18 +0x09e:  je     081c4d20 <+0x1a6>
081c4c1e +0x0a4:  mov    0xc(%ebp),%eax
081c4c21 +0x0a7:  mov    %eax,(%esp)
081c4c24 +0x0aa:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c4c29 +0x0af:  mov    %eax,-0x14(%ebp)
081c4c2c +0x0b2:  cmpl   $0x0,-0x14(%ebp)
081c4c30 +0x0b6:  je     081c4d20 <+0x1a6>
081c4c36 +0x0bc:  movl   $0x0,-0x10(%ebp)
081c4c3d +0x0c3:  jmp    081c4d11 <+0x197>
081c4c42 +0x0c8:  mov    -0x10(%ebp),%eax
081c4c45 +0x0cb:  mov    %eax,0x4(%esp)
081c4c49 +0x0cf:  mov    -0x14(%ebp),%eax
081c4c4c +0x0d2:  mov    %eax,(%esp)
081c4c4f +0x0d5:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081c4c54 +0x0da:  xor    $0x1,%eax
081c4c57 +0x0dd:  test   %al,%al
081c4c59 +0x0df:  jne    081c4d0c <+0x192>
081c4c5f +0x0e5:  mov    -0x10(%ebp),%eax
081c4c62 +0x0e8:  mov    %eax,0x4(%esp)
081c4c66 +0x0ec:  mov    -0x14(%ebp),%eax
081c4c69 +0x0ef:  mov    %eax,(%esp)
081c4c6c +0x0f2:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081c4c71 +0x0f7:  mov    %eax,-0xc(%ebp)
081c4c74 +0x0fa:  mov    -0xc(%ebp),%eax
081c4c77 +0x0fd:  cmp    0xc(%ebp),%eax
081c4c7a +0x100:  je     081c4cb6 <+0x13c>
081c4c7c +0x102:  mov    -0xc(%ebp),%eax
081c4c7f +0x105:  mov    %eax,(%esp)
081c4c82 +0x108:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c4c87 +0x10d:  movl   $0x0,0x14(%esp)
081c4c8f +0x115:  movl   $0x0,0x10(%esp)
081c4c97 +0x11d:  movl   $0x1,0xc(%esp)
081c4c9f +0x125:  movl   $0x1fa,0x8(%esp)
081c4ca7 +0x12d:  mov    -0xc(%ebp),%edx
081c4caa +0x130:  mov    %edx,0x4(%esp)
081c4cae +0x134:  mov    %eax,(%esp)
081c4cb1 +0x137:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c4cb6 +0x13c:  mov    -0xc(%ebp),%eax
081c4cb9 +0x13f:  add    $0xe0,%eax
081c4cbe +0x144:  mov    %eax,(%esp)
081c4cc1 +0x147:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
081c4cc6 +0x14c:  mov    %eax,%ebx
081c4cc8 +0x14e:  mov    -0xc(%ebp),%eax
081c4ccb +0x151:  mov    %eax,(%esp)
081c4cce +0x154:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c4cd3 +0x159:  mov    %ebx,0x8(%esp)
081c4cd7 +0x15d:  movl   $0x0,0x4(%esp)
081c4cdf +0x165:  mov    %eax,(%esp)
081c4ce2 +0x168:  call   08425494 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc>  ; DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*)
081c4ce7 +0x16d:  movl   $0x0,0xc(%esp)
081c4cef +0x175:  movl   $0x1,0x8(%esp)
081c4cf7 +0x17d:  movl   $0x18,0x4(%esp)
081c4cff +0x185:  mov    -0xc(%ebp),%eax
081c4d02 +0x188:  mov    %eax,(%esp)
081c4d05 +0x18b:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081c4d0a +0x190:  jmp    081c4d0d <+0x193>
081c4d0c +0x192:  nop
081c4d0d +0x193:  addl   $0x1,-0x10(%ebp)
081c4d11 +0x197:  cmpl   $0x3,-0x10(%ebp)
081c4d15 +0x19b:  setle  %al
081c4d18 +0x19e:  test   %al,%al
081c4d1a +0x1a0:  jne    081c4c42 <+0xc8>
081c4d20 +0x1a6:  add    $0x34,%esp
081c4d23 +0x1a9:  pop    %ebx
081c4d24 +0x1aa:  pop    %ebp
081c4d25 +0x1ab:  ret
```

## 反编译 C

```c
// DisPatcher_MoveMap::CheckTrapBitsHackCnt @ 0x81c4b7a

/* DisPatcher_MoveMap::CheckTrapBitsHackCnt(CUser*, MSG_MOVE_MAP&) */

void __thiscall
DisPatcher_MoveMap::CheckTrapBitsHackCnt
          (DisPatcher_MoveMap *this,CUser *param_1,MSG_MOVE_MAP *param_2)

{
  ushort uVar1;
  char cVar2;
  CHackAnalyzer *pCVar3;
  int iVar4;
  CParty *this_00;
  CUser *this_01;
  char *pcVar5;
  uint uVar6;
  int local_14;
  
  uVar1 = *(ushort *)(param_2 + 0x18);
  if ((ushort)(uVar1 + ((ushort)((uint)((ushort)(uVar1 - (short)((uint)uVar1 * 0x2493 >> 0x10)) >> 1
                                       ) + ((uint)uVar1 * 0x2493 >> 0x10)) >> 2) * -7) != 0) {
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_1,0x1f9,1,0,0);
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    iVar4 = WongWork::CHackAnalyzer::getServerHackAccumulatedCnt(pCVar3,0x1f9);
    if (4 < iVar4) {
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 != (CParty *)0x0) {
        for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
          cVar2 = CParty::checkValidUser(this_00,local_14);
          if (cVar2 == '\x01') {
            this_01 = (CUser *)CParty::get_user(this_00,local_14);
            if (this_01 != param_1) {
              pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_01);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,this_01,0x1fa,1,0,0);
            }
            pcVar5 = (char *)CNetwork<4096,450000>::get_str_ip
                                       ((CNetwork<4096,450000> *)(this_01 + 0xe0));
            uVar6 = CUser::get_acc_id(this_01);
            DB_ReqSaveHackUserPunish::makeRequest(uVar6,0,pcVar5);
            CUser::DisConnSig(this_01,0x18,1,0);
          }
        }
      }
    }
  }
  return;
}
```
