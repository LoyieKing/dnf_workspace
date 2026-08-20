# SendReward

`_ZN15CEventCreateDnf10SendRewardEP5CUser`

`CEventCreateDnf::SendReward(CUser*)`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x0816426c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816426c  _ZN15CEventCreateDnf10SendRewardEP5CUser
#           CEventCreateDnf::SendReward(CUser*)
# range [0x0816426c, 0x0816451d]
0816426c +0x000:  push   %ebp
0816426d +0x001:  mov    %esp,%ebp
0816426f +0x003:  push   %edi
08164270 +0x004:  push   %esi
08164271 +0x005:  push   %ebx
08164272 +0x006:  sub    $0x3ec,%esp
08164278 +0x00c:  lea    -0x2c(%ebp),%eax
0816427b +0x00f:  mov    %eax,(%esp)
0816427e +0x012:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08164283 +0x017:  mov    0x8(%ebp),%eax
08164286 +0x01a:  movzbl 0x14(%eax),%eax
0816428a +0x01e:  movzbl %al,%ebx
0816428d +0x021:  call   08164907 <_GLOBAL__I__ZN15CEventCreateDnfC2Ev+0x77>  ; global constructors keyed to CEventCreateDnf::CEventCreateDnf()+0x77
08164292 +0x026:  lea    0x4(%eax),%edx
08164295 +0x029:  mov    %ebx,0x8(%esp)
08164299 +0x02d:  lea    -0x2c(%ebp),%eax
0816429c +0x030:  mov    %eax,0x4(%esp)
081642a0 +0x034:  mov    %edx,(%esp)
081642a3 +0x037:  call   08ac03a6 <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi>  ; CreateDnfEventSciprt::GetItemInfo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)
081642a8 +0x03c:  movl   $0x0,0xc(%esp)
081642b0 +0x044:  movl   $"tw_cb_launching_title_01",0x8(%esp)
081642b8 +0x04c:  movl   $0x4,0x4(%esp)
081642c0 +0x054:  movl   $&g_scriptStringManager_,(%esp)
081642c7 +0x05b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
081642cc +0x060:  movl   $0x1d,0x8(%esp)
081642d4 +0x068:  mov    %eax,0x4(%esp)
081642d8 +0x06c:  lea    -0x4a(%ebp),%eax
081642db +0x06f:  mov    %eax,(%esp)
081642de +0x072:  call   0807d8d0 <_init+0x1c8>
081642e3 +0x077:  movl   $0x0,0xc(%esp)
081642eb +0x07f:  movl   $"game_server_msg_81",0x8(%esp)
081642f3 +0x087:  movl   $0x4,0x4(%esp)
081642fb +0x08f:  movl   $&g_scriptStringManager_,(%esp)
08164302 +0x096:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08164307 +0x09b:  movl   $0xff,0x8(%esp)
0816430f +0x0a3:  mov    %eax,0x4(%esp)
08164313 +0x0a7:  lea    -0x158(%ebp),%eax
08164319 +0x0ad:  mov    %eax,(%esp)
0816431c +0x0b0:  call   0807d8d0 <_init+0x1c8>
08164321 +0x0b5:  lea    -0x3ba(%ebp),%eax
08164327 +0x0bb:  mov    %eax,%ebx
08164329 +0x0bd:  mov    $0x9,%esi
0816432e +0x0c2:  jmp    0816433e <+0xd2>
08164330 +0x0c4:  mov    %ebx,(%esp)
08164333 +0x0c7:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08164338 +0x0cc:  add    $0x3d,%ebx
0816433b +0x0cf:  sub    $0x1,%esi
0816433e +0x0d2:  cmp    $0xffffffff,%esi
08164341 +0x0d5:  setne  %al
08164344 +0x0d8:  test   %al,%al
08164346 +0x0da:  jne    08164330 <+0xc4>
08164348 +0x0dc:  movl   $0xa,0x8(%esp)
08164350 +0x0e4:  lea    -0x3ba(%ebp),%eax
08164356 +0x0ea:  mov    %eax,0x4(%esp)
0816435a +0x0ee:  lea    -0x2c(%ebp),%eax
0816435d +0x0f1:  mov    %eax,(%esp)
08164360 +0x0f4:  call   08556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>  ; WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int)
08164365 +0x0f9:  mov    0xc(%ebp),%eax
08164368 +0x0fc:  mov    %eax,(%esp)
0816436b +0x0ff:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08164370 +0x104:  mov    %eax,%esi
08164372 +0x106:  lea    -0x158(%ebp),%eax
08164378 +0x10c:  mov    %eax,(%esp)
0816437b +0x10f:  call   0807e3b0 <_init+0xca8>
08164380 +0x114:  mov    %eax,%edi
08164382 +0x116:  mov    0xc(%ebp),%eax
08164385 +0x119:  mov    %eax,(%esp)
08164388 +0x11c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0816438d +0x121:  mov    %eax,%ebx
0816438f +0x123:  lea    -0x2c(%ebp),%eax
08164392 +0x126:  mov    %eax,(%esp)
08164395 +0x129:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0816439a +0x12e:  movl   $0x0,0x24(%esp)
081643a2 +0x136:  mov    %esi,0x20(%esp)
081643a6 +0x13a:  movl   $0x0,0x1c(%esp)
081643ae +0x142:  mov    %edi,0x18(%esp)
081643b2 +0x146:  lea    -0x158(%ebp),%edx
081643b8 +0x14c:  mov    %edx,0x14(%esp)
081643bc +0x150:  mov    %ebx,0x10(%esp)
081643c0 +0x154:  movl   $0x0,0xc(%esp)
081643c8 +0x15c:  mov    %eax,0x8(%esp)
081643cc +0x160:  lea    -0x3ba(%ebp),%eax
081643d2 +0x166:  mov    %eax,0x4(%esp)
081643d6 +0x16a:  lea    -0x4a(%ebp),%eax
081643d9 +0x16d:  mov    %eax,(%esp)
081643dc +0x170:  call   08556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
081643e1 +0x175:  lea    -0x58(%ebp),%eax
081643e4 +0x178:  mov    %eax,(%esp)
081643e7 +0x17b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081643ec +0x180:  movl   $0x258,0x8(%esp)
081643f4 +0x188:  movl   $0x1,0x4(%esp)
081643fc +0x190:  lea    -0x58(%ebp),%eax
081643ff +0x193:  mov    %eax,(%esp)
08164402 +0x196:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08164407 +0x19b:  movl   $0x1,0x4(%esp)
0816440f +0x1a3:  lea    -0x58(%ebp),%eax
08164412 +0x1a6:  mov    %eax,(%esp)
08164415 +0x1a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0816441a +0x1ae:  lea    -0x2c(%ebp),%eax
0816441d +0x1b1:  mov    %eax,(%esp)
08164420 +0x1b4:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08164425 +0x1b9:  mov    %eax,0x4(%esp)
08164429 +0x1bd:  lea    -0x58(%ebp),%eax
0816442c +0x1c0:  mov    %eax,(%esp)
0816442f +0x1c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08164434 +0x1c8:  movl   $0x0,-0x20(%ebp)
0816443b +0x1cf:  lea    -0x2c(%ebp),%eax
0816443e +0x1d2:  mov    %eax,(%esp)
08164441 +0x1d5:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08164446 +0x1da:  mov    %eax,-0x1c(%ebp)
08164449 +0x1dd:  jmp    08164496 <+0x22a>
0816444b +0x1df:  mov    -0x20(%ebp),%eax
0816444e +0x1e2:  mov    %eax,0x4(%esp)
08164452 +0x1e6:  lea    -0x2c(%ebp),%eax
08164455 +0x1e9:  mov    %eax,(%esp)
08164458 +0x1ec:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0816445d +0x1f1:  mov    (%eax),%eax
0816445f +0x1f3:  mov    %eax,0x4(%esp)
08164463 +0x1f7:  lea    -0x58(%ebp),%eax
08164466 +0x1fa:  mov    %eax,(%esp)
08164469 +0x1fd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0816446e +0x202:  mov    -0x20(%ebp),%eax
08164471 +0x205:  mov    %eax,0x4(%esp)
08164475 +0x209:  lea    -0x2c(%ebp),%eax
08164478 +0x20c:  mov    %eax,(%esp)
0816447b +0x20f:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08164480 +0x214:  mov    0x4(%eax),%eax
08164483 +0x217:  mov    %eax,0x4(%esp)
08164487 +0x21b:  lea    -0x58(%ebp),%eax
0816448a +0x21e:  mov    %eax,(%esp)
0816448d +0x221:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08164492 +0x226:  addl   $0x1,-0x20(%ebp)
08164496 +0x22a:  mov    -0x20(%ebp),%eax
08164499 +0x22d:  cmp    -0x1c(%ebp),%eax
0816449c +0x230:  setb   %al
0816449f +0x233:  test   %al,%al
081644a1 +0x235:  jne    0816444b <+0x1df>
081644a3 +0x237:  movl   $0x1,0x4(%esp)
081644ab +0x23f:  lea    -0x58(%ebp),%eax
081644ae +0x242:  mov    %eax,(%esp)
081644b1 +0x245:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081644b6 +0x24a:  lea    -0x58(%ebp),%eax
081644b9 +0x24d:  mov    %eax,0x4(%esp)
081644bd +0x251:  mov    0xc(%ebp),%eax
081644c0 +0x254:  mov    %eax,(%esp)
081644c3 +0x257:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081644c8 +0x25c:  jmp    081644df <+0x273>
081644ca +0x25e:  mov    %edx,%ebx
081644cc +0x260:  mov    %eax,%esi
081644ce +0x262:  lea    -0x58(%ebp),%eax
081644d1 +0x265:  mov    %eax,(%esp)
081644d4 +0x268:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081644d9 +0x26d:  mov    %esi,%eax
081644db +0x26f:  mov    %ebx,%edx
081644dd +0x271:  jmp    081644ec <+0x280>
081644df +0x273:  lea    -0x58(%ebp),%eax
081644e2 +0x276:  mov    %eax,(%esp)
081644e5 +0x279:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081644ea +0x27e:  jmp    08164507 <+0x29b>
081644ec +0x280:  mov    %edx,%ebx
081644ee +0x282:  mov    %eax,%esi
081644f0 +0x284:  lea    -0x2c(%ebp),%eax
081644f3 +0x287:  mov    %eax,(%esp)
081644f6 +0x28a:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081644fb +0x28f:  mov    %esi,%eax
081644fd +0x291:  mov    %ebx,%edx
081644ff +0x293:  mov    %eax,(%esp)
08164502 +0x296:  call   08ae3750 <_Unwind_Resume>
08164507 +0x29b:  lea    -0x2c(%ebp),%eax
0816450a +0x29e:  mov    %eax,(%esp)
0816450d +0x2a1:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08164512 +0x2a6:  add    $0x3ec,%esp
08164518 +0x2ac:  pop    %ebx
08164519 +0x2ad:  pop    %esi
0816451a +0x2ae:  pop    %edi
0816451b +0x2af:  pop    %ebp
0816451c +0x2b0:  ret
0816451d +0x2b1:  nop
```

## 反编译 C

```c
// CEventCreateDnf::SendReward @ 0x816426c

/* CEventCreateDnf::SendReward(CUser*) */

void __thiscall CEventCreateDnf::SendReward(CEventCreateDnf *this,CUser *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  Inven_Item *this_00;
  Inven_Item local_3be [610];
  char local_15c [256];
  PacketGuard local_5c [14];
  char local_4e [30];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  uint local_24;
  uint local_20;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 0816428d to 081643eb has its CatchHandler @ 081644ec */
  iVar1 = ARAD::Singleton<CreateDnfEventSciprtServer>::Get();
  CreateDnfEventSciprt::GetItemInfo((vector *)(iVar1 + 4),(int)local_30);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "tw_cb_launching_title_01",(bool *)0x0);
  strncpy(local_4e,pcVar2,0x1d);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_81",(bool *)0x0);
  strncpy(local_15c,pcVar2,0xff);
  this_00 = local_3be;
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  WongWork::CMailBoxHelper::MakeSystemMultiMailPostal((vector *)local_30,local_3be,10);
  uVar3 = CUser::GetServerGroup(param_1);
  sVar4 = strlen(local_15c);
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_30);
  WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
            (local_4e,local_3be,uVar6,0,uVar5,local_15c,sVar4,0,uVar3,0);
  PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 08164402 to 081644c7 has its CatchHandler @ 081644ca */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,1,600);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
  iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_30);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,iVar1);
  local_24 = 0;
  local_20 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_30);
  for (; local_24 < local_20; local_24 = local_24 + 1) {
    piVar7 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_30,local_24);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,*piVar7);
    iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      (local_30,local_24);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,*(int *)(iVar1 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
  CUser::Send(param_1,local_5c);
                    /* try { // try from 081644e5 to 081644e9 has its CatchHandler @ 081644ec */
  PacketGuard::~PacketGuard(local_5c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
  return;
}
```
