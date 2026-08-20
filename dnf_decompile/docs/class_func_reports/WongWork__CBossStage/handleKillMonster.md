# handleKillMonster

`_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi`

`WongWork::CBossStage::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x08150388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08150388  _ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi
#           WongWork::CBossStage::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&, int*)
# range [0x08150388, 0x0815068a]
08150388 +0x000:  push   %ebp
08150389 +0x001:  mov    %esp,%ebp
0815038b +0x003:  push   %edi
0815038c +0x004:  push   %esi
0815038d +0x005:  push   %ebx
0815038e +0x006:  sub    $0x3bc,%esp
08150394 +0x00c:  mov    0x10(%ebp),%edx
08150397 +0x00f:  mov    0x14(%ebp),%eax
0815039a +0x012:  mov    %dx,-0x37c(%ebp)
081503a1 +0x019:  mov    %ax,-0x380(%ebp)
081503a8 +0x020:  lea    -0x378(%ebp),%eax
081503ae +0x026:  mov    %eax,(%esp)
081503b1 +0x029:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
081503b6 +0x02e:  movl   $0x0,-0x1c(%ebp)
081503bd +0x035:  movzwl -0x37c(%ebp),%eax
081503c4 +0x03c:  lea    -0x1c(%ebp),%edx
081503c7 +0x03f:  mov    %edx,0xc(%esp)
081503cb +0x043:  lea    -0x378(%ebp),%edx
081503d1 +0x049:  mov    %edx,0x8(%esp)
081503d5 +0x04d:  mov    %eax,0x4(%esp)
081503d9 +0x051:  mov    0x8(%ebp),%eax
081503dc +0x054:  mov    %eax,(%esp)
081503df +0x057:  call   0814d214 <_ZN8WongWork10CBossStage16killMonsterEraseEtR11map_monsterRi>  ; WongWork::CBossStage::killMonsterErase(unsigned short, map_monster&, int&)
081503e4 +0x05c:  xor    $0x1,%eax
081503e7 +0x05f:  test   %al,%al
081503e9 +0x061:  je     081503f5 <+0x6d>
081503eb +0x063:  mov    $0x0,%ebx
081503f0 +0x068:  jmp    08150670 <+0x2e8>
081503f5 +0x06d:  mov    0x8(%ebp),%eax
081503f8 +0x070:  mov    0x4(%eax),%eax
081503fb +0x073:  mov    0xcd8(%eax),%eax
08150401 +0x079:  cmp    $0x1,%eax
08150404 +0x07c:  jne    081504fa <+0x172>
0815040a +0x082:  lea    -0x2c(%ebp),%eax
0815040d +0x085:  mov    %eax,(%esp)
08150410 +0x088:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08150415 +0x08d:  movl   $0x26,0x8(%esp)
0815041d +0x095:  movl   $0x0,0x4(%esp)
08150425 +0x09d:  lea    -0x2c(%ebp),%eax
08150428 +0x0a0:  mov    %eax,(%esp)
0815042b +0x0a3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08150430 +0x0a8:  movzwl -0x37c(%ebp),%eax
08150437 +0x0af:  mov    %eax,0x4(%esp)
0815043b +0x0b3:  lea    -0x2c(%ebp),%eax
0815043e +0x0b6:  mov    %eax,(%esp)
08150441 +0x0b9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08150446 +0x0be:  movl   $0x0,0x4(%esp)
0815044e +0x0c6:  lea    -0x2c(%ebp),%eax
08150451 +0x0c9:  mov    %eax,(%esp)
08150454 +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08150459 +0x0d1:  movl   $0x0,0x4(%esp)
08150461 +0x0d9:  lea    -0x2c(%ebp),%eax
08150464 +0x0dc:  mov    %eax,(%esp)
08150467 +0x0df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0815046c +0x0e4:  movl   $0x0,0x4(%esp)
08150474 +0x0ec:  lea    -0x2c(%ebp),%eax
08150477 +0x0ef:  mov    %eax,(%esp)
0815047a +0x0f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0815047f +0x0f7:  movl   $0x0,0x4(%esp)
08150487 +0x0ff:  lea    -0x2c(%ebp),%eax
0815048a +0x102:  mov    %eax,(%esp)
0815048d +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08150492 +0x10a:  movl   $0x0,0x4(%esp)
0815049a +0x112:  lea    -0x2c(%ebp),%eax
0815049d +0x115:  mov    %eax,(%esp)
081504a0 +0x118:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081504a5 +0x11d:  movl   $0x1,0x4(%esp)
081504ad +0x125:  lea    -0x2c(%ebp),%eax
081504b0 +0x128:  mov    %eax,(%esp)
081504b3 +0x12b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081504b8 +0x130:  mov    0x8(%ebp),%eax
081504bb +0x133:  mov    0x4(%eax),%eax
081504be +0x136:  lea    -0x2c(%ebp),%edx
081504c1 +0x139:  mov    %edx,0x4(%esp)
081504c5 +0x13d:  mov    %eax,(%esp)
081504c8 +0x140:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081504cd +0x145:  mov    $0x1,%ebx
081504d2 +0x14a:  lea    -0x2c(%ebp),%eax
081504d5 +0x14d:  mov    %eax,(%esp)
081504d8 +0x150:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081504dd +0x155:  jmp    08150670 <+0x2e8>
081504e2 +0x15a:  mov    %edx,%ebx
081504e4 +0x15c:  mov    %eax,%esi
081504e6 +0x15e:  lea    -0x2c(%ebp),%eax
081504e9 +0x161:  mov    %eax,(%esp)
081504ec +0x164:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081504f1 +0x169:  mov    %esi,%eax
081504f3 +0x16b:  mov    %ebx,%edx
081504f5 +0x16d:  jmp    08150652 <+0x2ca>
081504fa +0x172:  movl   $0x0,-0x20(%ebp)
08150501 +0x179:  lea    -0x20(%ebp),%eax
08150504 +0x17c:  mov    %eax,0x8(%esp)
08150508 +0x180:  lea    -0x378(%ebp),%eax
0815050e +0x186:  mov    %eax,0x4(%esp)
08150512 +0x18a:  mov    0x8(%ebp),%eax
08150515 +0x18d:  mov    %eax,(%esp)
08150518 +0x190:  call   0814d300 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj>  ; WongWork::CBossStage::KillMonsterGetExp(map_monster const&, unsigned int&)
0815051d +0x195:  xor    $0x1,%eax
08150520 +0x198:  test   %al,%al
08150522 +0x19a:  je     0815052e <+0x1a6>
08150524 +0x19c:  mov    $0x0,%ebx
08150529 +0x1a1:  jmp    08150670 <+0x2e8>
0815052e +0x1a6:  mov    -0x20(%ebp),%eax
08150531 +0x1a9:  mov    %eax,%esi
08150533 +0x1ab:  mov    0xc(%ebp),%eax
08150536 +0x1ae:  mov    %eax,(%esp)
08150539 +0x1b1:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
0815053e +0x1b6:  mov    %eax,%ebx
08150540 +0x1b8:  movzbl -0x370(%ebp),%eax
08150547 +0x1bf:  cmp    $0x5,%al
08150549 +0x1c1:  sete   %al
0815054c +0x1c4:  movzbl %al,%eax
0815054f +0x1c7:  mov    %eax,-0x394(%ebp)
08150555 +0x1cd:  movzbl -0x370(%ebp),%eax
0815055c +0x1d4:  movsbl %al,%eax
0815055f +0x1d7:  mov    %eax,-0x390(%ebp)
08150565 +0x1dd:  mov    0x18(%ebp),%eax
08150568 +0x1e0:  movzwl 0xa26(%eax),%eax
0815056f +0x1e7:  movzwl %ax,%eax
08150572 +0x1ea:  mov    %eax,-0x38c(%ebp)
08150578 +0x1f0:  mov    0x18(%ebp),%eax
0815057b +0x1f3:  movzwl 0xa24(%eax),%eax
08150582 +0x1fa:  movzwl %ax,%eax
08150585 +0x1fd:  mov    %eax,-0x388(%ebp)
0815058b +0x203:  mov    0x18(%ebp),%eax
0815058e +0x206:  mov    0xa1a(%eax),%eax
08150594 +0x20c:  mov    %eax,-0x384(%ebp)
0815059a +0x212:  mov    0x18(%ebp),%eax
0815059d +0x215:  mov    0xa1e(%eax),%edi
081505a3 +0x21b:  mov    -0x36c(%ebp),%ecx
081505a9 +0x221:  mov    0xc(%ebp),%eax
081505ac +0x224:  lea    0x79700(%eax),%edx
081505b2 +0x22a:  movl   $0xb,0x2c(%esp)
081505ba +0x232:  mov    %esi,0x28(%esp)
081505be +0x236:  mov    %ebx,0x24(%esp)
081505c2 +0x23a:  mov    -0x394(%ebp),%eax
081505c8 +0x240:  mov    %eax,0x20(%esp)
081505cc +0x244:  mov    -0x390(%ebp),%eax
081505d2 +0x24a:  mov    %eax,0x1c(%esp)
081505d6 +0x24e:  mov    0x18(%ebp),%eax
081505d9 +0x251:  mov    %eax,0x18(%esp)
081505dd +0x255:  mov    -0x38c(%ebp),%eax
081505e3 +0x25b:  mov    %eax,0x14(%esp)
081505e7 +0x25f:  mov    -0x388(%ebp),%eax
081505ed +0x265:  mov    %eax,0x10(%esp)
081505f1 +0x269:  mov    -0x384(%ebp),%eax
081505f7 +0x26f:  mov    %eax,0xc(%esp)
081505fb +0x273:  mov    %edi,0x8(%esp)
081505ff +0x277:  mov    %ecx,0x4(%esp)
08150603 +0x27b:  mov    %edx,(%esp)
08150606 +0x27e:  call   086851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>  ; cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short, MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason)
0815060b +0x283:  movzwl -0x380(%ebp),%ecx
08150612 +0x28a:  movzwl -0x37c(%ebp),%edx
08150619 +0x291:  mov    -0x1c(%ebp),%eax
0815061c +0x294:  mov    %ecx,0x10(%esp)
08150620 +0x298:  mov    %edx,0xc(%esp)
08150624 +0x29c:  mov    %eax,0x8(%esp)
08150628 +0x2a0:  lea    -0x378(%ebp),%eax
0815062e +0x2a6:  mov    %eax,0x4(%esp)
08150632 +0x2aa:  mov    0x8(%ebp),%eax
08150635 +0x2ad:  mov    %eax,(%esp)
08150638 +0x2b0:  call   0814d628 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt>  ; WongWork::CBossStage::killMonsterDropItem(map_monster const&, int, unsigned short, unsigned short)
0815063d +0x2b5:  xor    $0x1,%eax
08150640 +0x2b8:  test   %al,%al
08150642 +0x2ba:  je     0815064b <+0x2c3>
08150644 +0x2bc:  mov    $0x0,%ebx
08150649 +0x2c1:  jmp    08150670 <+0x2e8>
0815064b +0x2c3:  mov    $0x1,%ebx
08150650 +0x2c8:  jmp    08150670 <+0x2e8>
08150652 +0x2ca:  mov    %edx,%ebx
08150654 +0x2cc:  mov    %eax,%esi
08150656 +0x2ce:  lea    -0x378(%ebp),%eax
0815065c +0x2d4:  mov    %eax,(%esp)
0815065f +0x2d7:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08150664 +0x2dc:  mov    %esi,%eax
08150666 +0x2de:  mov    %ebx,%edx
08150668 +0x2e0:  mov    %eax,(%esp)
0815066b +0x2e3:  call   08ae3750 <_Unwind_Resume>
08150670 +0x2e8:  lea    -0x378(%ebp),%eax
08150676 +0x2ee:  mov    %eax,(%esp)
08150679 +0x2f1:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0815067e +0x2f6:  mov    %ebx,%eax
08150680 +0x2f8:  add    $0x3bc,%esp
08150686 +0x2fe:  pop    %ebx
08150687 +0x2ff:  pop    %esi
08150688 +0x300:  pop    %edi
08150689 +0x301:  pop    %ebp
0815068a +0x302:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::handleKillMonster @ 0x8150388

/* WongWork::CBossStage::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE
   const&, int*) */

undefined4
WongWork::CBossStage::handleKillMonster
          (CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  map_monster local_37c [8];
  char local_374;
  undefined4 local_370;
  PacketGuard local_30 [12];
  uint local_24;
  int local_20 [4];
  
  map_monster::map_monster(local_37c);
  local_20[0] = 0;
                    /* try { // try from 081503df to 08150414 has its CatchHandler @ 08150652 */
  cVar2 = killMonsterErase((CBossStage *)param_1,param_3,local_37c,local_20);
  if (cVar2 == '\x01') {
    if (*(int *)(*(int *)(param_1 + 4) + 0xcd8) == 1) {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0815042b to 081504cc has its CatchHandler @ 081504e2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x26);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)param_3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CParty::send_to_party(*(CParty **)(param_1 + 4),local_30);
      uVar3 = 1;
                    /* try { // try from 081504d8 to 081504dc has its CatchHandler @ 08150652 */
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      local_24 = 0;
                    /* try { // try from 08150518 to 0815063c has its CatchHandler @ 08150652 */
      cVar2 = KillMonsterGetExp((CBossStage *)param_1,local_37c,&local_24);
      uVar1 = local_24;
      if (cVar2 == '\x01') {
        uVar3 = CUserCharacInfo::getCurCharacExp(_param_2);
        cUserHistoryLog::KillMonster
                  ((cUserHistoryLog *)(_param_2 + 0x79700),local_370,
                   *(undefined4 *)((int)param_5 + 0xa1e),*(undefined4 *)((int)param_5 + 0xa1a),
                   (short)param_5[0x289],*(undefined2 *)((int)param_5 + 0xa26),param_5,
                   (int)local_374,local_374 == '\x05',uVar3,uVar1,0xb);
        cVar2 = killMonsterDropItem((CBossStage *)param_1,local_37c,local_20[0],param_3,
                                    (ushort)param_4);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  map_monster::~map_monster(local_37c);
  return uVar3;
}
```
