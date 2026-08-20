# initTournamentDB

`_ZN10GlobalData16initTournamentDBEPKc`

`GlobalData::initTournamentDB(char const*)`

| 类 | 地址 |
|---|---|
| `GlobalData` | `0x0829dd82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829dd82  _ZN10GlobalData16initTournamentDBEPKc
#           GlobalData::initTournamentDB(char const*)
# range [0x0829dd82, 0x0829e0b1]
0829dd82 +0x000:  push   %ebp
0829dd83 +0x001:  mov    %esp,%ebp
0829dd85 +0x003:  push   %esi
0829dd86 +0x004:  push   %ebx
0829dd87 +0x005:  sub    $0x480,%esp
0829dd8d +0x00b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0829dd92 +0x010:  mov    %eax,(%esp)
0829dd95 +0x013:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0829dd9a +0x018:  cmp    $0x7,%eax
0829dd9d +0x01b:  je     0829ddba <+0x38>
0829dd9f +0x01d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0829dda4 +0x022:  mov    %eax,(%esp)
0829dda7 +0x025:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0829ddac +0x02a:  xor    $0x1,%eax
0829ddaf +0x02d:  test   %al,%al
0829ddb1 +0x02f:  je     0829ddba <+0x38>
0829ddb3 +0x031:  mov    $0x1,%eax
0829ddb8 +0x036:  jmp    0829ddbf <+0x3d>
0829ddba +0x038:  mov    $0x0,%eax
0829ddbf +0x03d:  test   %al,%al
0829ddc1 +0x03f:  je     0829ddcd <+0x4b>
0829ddc3 +0x041:  mov    $0x1,%ebx
0829ddc8 +0x046:  jmp    0829e0a6 <+0x324>
0829ddcd +0x04b:  lea    -0x474(%ebp),%eax
0829ddd3 +0x051:  mov    %eax,(%esp)
0829ddd6 +0x054:  call   082aa8e4 <_GLOBAL__I__ZN4CLog5this_E+0x6d0b>  ; global constructors keyed to CLog::this_+0x6d0b
0829dddb +0x059:  mov    0x8(%ebp),%eax
0829ddde +0x05c:  mov    %eax,0x4(%esp)
0829dde2 +0x060:  lea    -0x474(%ebp),%eax
0829dde8 +0x066:  mov    %eax,(%esp)
0829ddeb +0x069:  call   0817dff6 <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x26>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x26
0829ddf0 +0x06e:  lea    -0x474(%ebp),%eax
0829ddf6 +0x074:  mov    %eax,(%esp)
0829ddf9 +0x077:  call   08290450 <_ZN12CEnvironment4loadEv>  ; CEnvironment::load()
0829ddfe +0x07c:  xor    $0x1,%eax
0829de01 +0x07f:  test   %al,%al
0829de03 +0x081:  je     0829de0f <+0x8d>
0829de05 +0x083:  mov    $0x0,%ebx
0829de0a +0x088:  jmp    0829e098 <+0x316>
0829de0f +0x08d:  mov    &_ZN10GlobalData14s_db_connectorE,%eax
0829de14 +0x092:  test   %eax,%eax
0829de16 +0x094:  jne    0829de22 <+0xa0>
0829de18 +0x096:  mov    $0x0,%ebx
0829de1d +0x09b:  jmp    0829e098 <+0x316>
0829de22 +0x0a0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829de27 +0x0a5:  lea    0x50(%eax),%edx
0829de2a +0x0a8:  lea    -0x74(%ebp),%eax
0829de2d +0x0ab:  mov    %edx,0x4(%esp)
0829de31 +0x0af:  mov    %eax,(%esp)
0829de34 +0x0b2:  call   082b386e <_GLOBAL__I__ZN4CLog5this_E+0xfc95>  ; global constructors keyed to CLog::this_+0xfc95
0829de39 +0x0b7:  sub    $0x4,%esp
0829de3c +0x0ba:  jmp    0829dffc <+0x27a>
0829de41 +0x0bf:  lea    -0x74(%ebp),%eax
0829de44 +0x0c2:  mov    %eax,(%esp)
0829de47 +0x0c5:  call   082b3722 <_GLOBAL__I__ZN4CLog5this_E+0xfb49>  ; global constructors keyed to CLog::this_+0xfb49
0829de4c +0x0ca:  mov    (%eax),%eax
0829de4e +0x0cc:  mov    %eax,-0x78(%ebp)
0829de51 +0x0cf:  lea    -0x90(%ebp),%eax
0829de57 +0x0d5:  mov    %eax,(%esp)
0829de5a +0x0d8:  call   082b3306 <_GLOBAL__I__ZN4CLog5this_E+0xf72d>  ; global constructors keyed to CLog::this_+0xf72d
0829de5f +0x0dd:  movl   $0x2,-0x54(%ebp)
0829de66 +0x0e4:  lea    -0x5c(%ebp),%eax
0829de69 +0x0e7:  lea    -0x78(%ebp),%edx
0829de6c +0x0ea:  mov    %edx,0x8(%esp)
0829de70 +0x0ee:  lea    -0x54(%ebp),%edx
0829de73 +0x0f1:  mov    %edx,0x4(%esp)
0829de77 +0x0f5:  mov    %eax,(%esp)
0829de7a +0x0f8:  call   082b337f <_GLOBAL__I__ZN4CLog5this_E+0xf7a6>  ; global constructors keyed to CLog::this_+0xf7a6
0829de7f +0x0fd:  sub    $0x4,%esp
0829de82 +0x100:  lea    -0x5c(%ebp),%eax
0829de85 +0x103:  mov    %eax,0x4(%esp)
0829de89 +0x107:  lea    -0x64(%ebp),%eax
0829de8c +0x10a:  mov    %eax,(%esp)
0829de8f +0x10d:  call   082b33c6 <_GLOBAL__I__ZN4CLog5this_E+0xf7ed>  ; global constructors keyed to CLog::this_+0xf7ed
0829de94 +0x112:  lea    -0x6c(%ebp),%eax
0829de97 +0x115:  lea    -0x64(%ebp),%edx
0829de9a +0x118:  mov    %edx,0x8(%esp)
0829de9e +0x11c:  lea    -0x90(%ebp),%edx
0829dea4 +0x122:  mov    %edx,0x4(%esp)
0829dea8 +0x126:  mov    %eax,(%esp)
0829deab +0x129:  call   082b33f6 <_GLOBAL__I__ZN4CLog5this_E+0xf81d>  ; global constructors keyed to CLog::this_+0xf81d
0829deb0 +0x12e:  sub    $0x4,%esp
0829deb3 +0x131:  movl   $0x3,-0x38(%ebp)
0829deba +0x138:  lea    -0x40(%ebp),%eax
0829debd +0x13b:  lea    -0x78(%ebp),%edx
0829dec0 +0x13e:  mov    %edx,0x8(%esp)
0829dec4 +0x142:  lea    -0x38(%ebp),%edx
0829dec7 +0x145:  mov    %edx,0x4(%esp)
0829decb +0x149:  mov    %eax,(%esp)
0829dece +0x14c:  call   082b337f <_GLOBAL__I__ZN4CLog5this_E+0xf7a6>  ; global constructors keyed to CLog::this_+0xf7a6
0829ded3 +0x151:  sub    $0x4,%esp
0829ded6 +0x154:  lea    -0x40(%ebp),%eax
0829ded9 +0x157:  mov    %eax,0x4(%esp)
0829dedd +0x15b:  lea    -0x48(%ebp),%eax
0829dee0 +0x15e:  mov    %eax,(%esp)
0829dee3 +0x161:  call   082b33c6 <_GLOBAL__I__ZN4CLog5this_E+0xf7ed>  ; global constructors keyed to CLog::this_+0xf7ed
0829dee8 +0x166:  lea    -0x50(%ebp),%eax
0829deeb +0x169:  lea    -0x48(%ebp),%edx
0829deee +0x16c:  mov    %edx,0x8(%esp)
0829def2 +0x170:  lea    -0x90(%ebp),%edx
0829def8 +0x176:  mov    %edx,0x4(%esp)
0829defc +0x17a:  mov    %eax,(%esp)
0829deff +0x17d:  call   082b33f6 <_GLOBAL__I__ZN4CLog5this_E+0xf81d>  ; global constructors keyed to CLog::this_+0xf81d
0829df04 +0x182:  sub    $0x4,%esp
0829df07 +0x185:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829df0c +0x18a:  lea    0x80(%eax),%edx
0829df12 +0x190:  lea    -0x78(%ebp),%eax
0829df15 +0x193:  mov    %eax,0x4(%esp)
0829df19 +0x197:  mov    %edx,(%esp)
0829df1c +0x19a:  call   082b38b2 <_GLOBAL__I__ZN4CLog5this_E+0xfcd9>  ; global constructors keyed to CLog::this_+0xfcd9
0829df21 +0x19f:  mov    %eax,-0xc(%ebp)
0829df24 +0x1a2:  mov    &_ZN10GlobalData14s_db_connectorE,%eax
0829df29 +0x1a7:  mov    -0xc(%ebp),%edx
0829df2c +0x1aa:  mov    %edx,0x8(%esp)
0829df30 +0x1ae:  lea    -0x90(%ebp),%edx
0829df36 +0x1b4:  mov    %edx,0x4(%esp)
0829df3a +0x1b8:  mov    %eax,(%esp)
0829df3d +0x1bb:  call   080ec9ca <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE>  ; CDBConnector::GetConnInfo(std::map<ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, ENUM_SERVER_GROUP> > >&, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)
0829df42 +0x1c0:  xor    $0x1,%eax
0829df45 +0x1c3:  test   %al,%al
0829df47 +0x1c5:  je     0829df58 <+0x1d6>
0829df49 +0x1c7:  mov    $0x0,%ebx
0829df4e +0x1cc:  mov    $0x0,%esi
0829df53 +0x1d1:  jmp    0829dfdb <+0x259>
0829df58 +0x1d6:  mov    -0xc(%ebp),%eax
0829df5b +0x1d9:  mov    %eax,0x4(%esp)
0829df5f +0x1dd:  lea    -0x34(%ebp),%eax
0829df62 +0x1e0:  mov    %eax,(%esp)
0829df65 +0x1e3:  call   082b3422 <_GLOBAL__I__ZN4CLog5this_E+0xf849>  ; global constructors keyed to CLog::this_+0xf849
0829df6a +0x1e8:  mov    &_ZN10GlobalData14s_db_connectorE,%eax
0829df6f +0x1ed:  lea    -0x34(%ebp),%edx
0829df72 +0x1f0:  mov    %edx,0x4(%esp)
0829df76 +0x1f4:  mov    %eax,(%esp)
0829df79 +0x1f7:  call   080ec8f8 <_ZN12CDBConnector22ConnectWithServerGroupESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE>  ; CDBConnector::ConnectWithServerGroup(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >)
0829df7e +0x1fc:  mov    $0x1,%esi
0829df83 +0x201:  xor    %eax,%esi
0829df85 +0x203:  lea    -0x34(%ebp),%eax
0829df88 +0x206:  mov    %eax,(%esp)
0829df8b +0x209:  call   080cbf0e <_GLOBAL__I__ZN10BingoEventC2Ev+0xd5b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xd5b
0829df90 +0x20e:  jmp    0829dfa7 <+0x225>
0829df92 +0x210:  mov    %edx,%ebx
0829df94 +0x212:  mov    %eax,%esi
0829df96 +0x214:  lea    -0x34(%ebp),%eax
0829df99 +0x217:  mov    %eax,(%esp)
0829df9c +0x21a:  call   080cbf0e <_GLOBAL__I__ZN10BingoEventC2Ev+0xd5b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xd5b
0829dfa1 +0x21f:  mov    %esi,%eax
0829dfa3 +0x221:  mov    %ebx,%edx
0829dfa5 +0x223:  jmp    0829dfc0 <+0x23e>
0829dfa7 +0x225:  mov    %esi,%eax
0829dfa9 +0x227:  test   %al,%al
0829dfab +0x229:  je     0829dfb9 <+0x237>
0829dfad +0x22b:  mov    $0x0,%ebx
0829dfb2 +0x230:  mov    $0x0,%esi
0829dfb7 +0x235:  jmp    0829dfdb <+0x259>
0829dfb9 +0x237:  mov    $0x1,%esi
0829dfbe +0x23c:  jmp    0829dfdb <+0x259>
0829dfc0 +0x23e:  mov    %edx,%ebx
0829dfc2 +0x240:  mov    %eax,%esi
0829dfc4 +0x242:  lea    -0x90(%ebp),%eax
0829dfca +0x248:  mov    %eax,(%esp)
0829dfcd +0x24b:  call   082aa83a <_GLOBAL__I__ZN4CLog5this_E+0x6c61>  ; global constructors keyed to CLog::this_+0x6c61
0829dfd2 +0x250:  mov    %esi,%eax
0829dfd4 +0x252:  mov    %ebx,%edx
0829dfd6 +0x254:  jmp    0829e07a <+0x2f8>
0829dfdb +0x259:  lea    -0x90(%ebp),%eax
0829dfe1 +0x25f:  mov    %eax,(%esp)
0829dfe4 +0x262:  call   082aa83a <_GLOBAL__I__ZN4CLog5this_E+0x6c61>  ; global constructors keyed to CLog::this_+0x6c61
0829dfe9 +0x267:  test   %esi,%esi
0829dfeb +0x269:  je     0829e098 <+0x316>
0829dff1 +0x26f:  lea    -0x74(%ebp),%eax
0829dff4 +0x272:  mov    %eax,(%esp)
0829dff7 +0x275:  call   082b3894 <_GLOBAL__I__ZN4CLog5this_E+0xfcbb>  ; global constructors keyed to CLog::this_+0xfcbb
0829dffc +0x27a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829e001 +0x27f:  lea    0x50(%eax),%edx
0829e004 +0x282:  lea    -0x70(%ebp),%eax
0829e007 +0x285:  mov    %edx,0x4(%esp)
0829e00b +0x289:  mov    %eax,(%esp)
0829e00e +0x28c:  call   082b36e8 <_GLOBAL__I__ZN4CLog5this_E+0xfb0f>  ; global constructors keyed to CLog::this_+0xfb0f
0829e013 +0x291:  sub    $0x4,%esp
0829e016 +0x294:  lea    -0x70(%ebp),%eax
0829e019 +0x297:  mov    %eax,0x4(%esp)
0829e01d +0x29b:  lea    -0x74(%ebp),%eax
0829e020 +0x29e:  mov    %eax,(%esp)
0829e023 +0x2a1:  call   082b370e <_GLOBAL__I__ZN4CLog5this_E+0xfb35>  ; global constructors keyed to CLog::this_+0xfb35
0829e028 +0x2a6:  test   %al,%al
0829e02a +0x2a8:  jne    0829de41 <+0xbf>
0829e030 +0x2ae:  movl   $0x0,0xc(%esp)
0829e038 +0x2b6:  movl   $0x20aa,0x8(%esp)
0829e040 +0x2be:  movl   $&_ZZN10GlobalData16initTournamentDBEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
0829e048 +0x2c6:  lea    -0x1c(%ebp),%eax
0829e04b +0x2c9:  mov    %eax,(%esp)
0829e04e +0x2cc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0829e053 +0x2d1:  movl   $"This is Tournament PvP channel",0x4(%esp)
0829e05b +0x2d9:  lea    -0x1c(%ebp),%eax
0829e05e +0x2dc:  mov    %eax,(%esp)
0829e061 +0x2df:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829e066 +0x2e4:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829e06b +0x2e9:  mov    %eax,(%esp)
0829e06e +0x2ec:  call   082a420c <_GLOBAL__I__ZN4CLog5this_E+0x633>  ; global constructors keyed to CLog::this_+0x633
0829e073 +0x2f1:  mov    $0x1,%ebx
0829e078 +0x2f6:  jmp    0829e098 <+0x316>
0829e07a +0x2f8:  mov    %edx,%ebx
0829e07c +0x2fa:  mov    %eax,%esi
0829e07e +0x2fc:  lea    -0x474(%ebp),%eax
0829e084 +0x302:  mov    %eax,(%esp)
0829e087 +0x305:  call   082aa90e <_GLOBAL__I__ZN4CLog5this_E+0x6d35>  ; global constructors keyed to CLog::this_+0x6d35
0829e08c +0x30a:  mov    %esi,%eax
0829e08e +0x30c:  mov    %ebx,%edx
0829e090 +0x30e:  mov    %eax,(%esp)
0829e093 +0x311:  call   08ae3750 <_Unwind_Resume>
0829e098 +0x316:  lea    -0x474(%ebp),%eax
0829e09e +0x31c:  mov    %eax,(%esp)
0829e0a1 +0x31f:  call   082aa90e <_GLOBAL__I__ZN4CLog5this_E+0x6d35>  ; global constructors keyed to CLog::this_+0x6d35
0829e0a6 +0x324:  mov    %ebx,%eax
0829e0a8 +0x326:  lea    -0x8(%ebp),%esp
0829e0ab +0x329:  add    $0x0,%esp
0829e0ae +0x32c:  pop    %ebx
0829e0af +0x32d:  pop    %esi
0829e0b0 +0x32e:  pop    %ebp
0829e0b1 +0x32f:  ret
```

## 反编译 C

```c
// GlobalData::initTournamentDB @ 0x829dd82

/* GlobalData::initTournamentDB(char const*) */

undefined4 GlobalData::initTournamentDB(char *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  CDBEnviroment local_478 [996];
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_94 [24];
  undefined4 local_7c;
  map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
  local_78 [4];
  map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
  local_74 [4];
  pair local_70 [8];
  pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP> local_68 [8];
  ENUM_DB_HANDLE_IDX local_60 [8];
  undefined4 local_58;
  pair local_54 [8];
  pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP> local_4c [8];
  ENUM_DB_HANDLE_IDX local_44 [8];
  undefined4 local_3c;
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_38 [24];
  cMyTrace local_20 [16];
  map *local_10;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 != 7) {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0829ddbf;
    }
  }
  bVar1 = false;
LAB_0829ddbf:
  if (bVar1) {
    unaff_EBX = 1;
  }
  else {
    CDBEnviroment::CDBEnviroment(local_478);
    CEnvironment::set_file_name((CEnvironment *)local_478,param_1);
                    /* try { // try from 0829ddf9 to 0829de5e has its CatchHandler @ 0829e07a */
    cVar2 = CEnvironment::load((CEnvironment *)local_478);
    if (cVar2 == '\x01') {
      if (s_db_connector == (CDBConnector *)0x0) {
        unaff_EBX = 0;
      }
      else {
        G_CEnvironment();
        std::
        map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
        ::begin(local_78);
        while( true ) {
          G_CEnvironment();
          std::
          map<ENUM_SERVER_GROUP,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>>
          ::end(local_74);
          cVar2 = std::
                  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                  ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                                *)local_78,(_Rb_tree_iterator *)local_74);
          if (cVar2 == '\0') break;
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                   ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                                 *)local_78);
          local_7c = *puVar5;
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::map(local_94);
          local_58 = 2;
                    /* try { // try from 0829de7a to 0829df69 has its CatchHandler @ 0829dfc0 */
          std::make_pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP&>
                    (local_60,(ENUM_SERVER_GROUP *)&local_58);
          std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>::
          pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP>(local_68,local_60);
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::insert(local_70);
          local_3c = 3;
          std::make_pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP&>
                    (local_44,(ENUM_SERVER_GROUP *)&local_3c);
          std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>::
          pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP>(local_4c,local_44);
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::insert(local_54);
          iVar4 = G_CEnvironment();
          local_10 = (map *)std::
                            map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>>>>
                            ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>>>>
                                          *)(iVar4 + 0x80),(ENUM_SERVER_GROUP *)&local_7c);
          cVar2 = CDBConnector::GetConnInfo(s_db_connector,(map *)local_94,local_10);
          if (cVar2 == '\x01') {
            std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::map(local_38,local_10);
                    /* try { // try from 0829df79 to 0829df7d has its CatchHandler @ 0829df92 */
            cVar2 = CDBConnector::ConnectWithServerGroup(s_db_connector,local_38);
                    /* try { // try from 0829df8b to 0829df8f has its CatchHandler @ 0829dfc0 */
            std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::~map(local_38);
            if (cVar2 == '\x01') {
              bVar1 = true;
            }
            else {
              unaff_EBX = 0;
              bVar1 = false;
            }
          }
          else {
            unaff_EBX = 0;
            bVar1 = false;
          }
                    /* try { // try from 0829dfe4 to 0829e065 has its CatchHandler @ 0829e07a */
          std::
          map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
          ::~map(local_94);
          if (!bVar1) goto LAB_0829e098;
          std::
          _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
          ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>>>
                        *)local_78);
        }
        cMyTrace::cMyTrace(local_20,"static bool GlobalData::initTournamentDB(const char*)",0x20aa,0
                          );
        cMyTrace::operator()(local_20,"This is Tournament PvP channel");
        DBMgr::activateGlobalDB(s_db_mgr);
        unaff_EBX = 1;
      }
    }
    else {
      unaff_EBX = 0;
    }
LAB_0829e098:
    CDBEnviroment::~CDBEnviroment(local_478);
  }
  return unaff_EBX;
}
```
