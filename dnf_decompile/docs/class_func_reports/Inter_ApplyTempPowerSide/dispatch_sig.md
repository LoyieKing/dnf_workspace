# dispatch_sig

`_ZN24Inter_ApplyTempPowerSide12dispatch_sigEP5CUserPci`

`Inter_ApplyTempPowerSide::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ApplyTempPowerSide` | `0x084dccde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dccde  _ZN24Inter_ApplyTempPowerSide12dispatch_sigEP5CUserPci
#           Inter_ApplyTempPowerSide::dispatch_sig(CUser*, char*, int)
# range [0x084dccde, 0x084dceeb]
084dccde +0x000:  push   %ebp
084dccdf +0x001:  mov    %esp,%ebp
084dcce1 +0x003:  push   %esi
084dcce2 +0x004:  push   %ebx
084dcce3 +0x005:  sub    $0x50,%esp
084dcce6 +0x008:  mov    0x10(%ebp),%eax
084dcce9 +0x00b:  mov    %eax,-0x10(%ebp)
084dccec +0x00e:  mov    -0x10(%ebp),%eax
084dccef +0x011:  mov    0xe(%eax),%ebx
084dccf2 +0x014:  movl   $0xffffffff,0x4(%esp)
084dccfa +0x01c:  mov    0xc(%ebp),%eax
084dccfd +0x01f:  mov    %eax,(%esp)
084dcd00 +0x022:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dcd05 +0x027:  cmp    %eax,%ebx
084dcd07 +0x029:  setne  %al
084dcd0a +0x02c:  test   %al,%al
084dcd0c +0x02e:  je     084dcd18 <+0x3a>
084dcd0e +0x030:  mov    $0x0,%ebx
084dcd13 +0x035:  jmp    084dcee3 <+0x205>
084dcd18 +0x03a:  mov    0xc(%ebp),%eax
084dcd1b +0x03d:  mov    %eax,(%esp)
084dcd1e +0x040:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
084dcd23 +0x045:  mov    %eax,-0xc(%ebp)
084dcd26 +0x048:  mov    -0x10(%ebp),%eax
084dcd29 +0x04b:  movzbl 0x16(%eax),%eax
084dcd2d +0x04f:  movzbl %al,%ecx
084dcd30 +0x052:  mov    -0xc(%ebp),%eax
084dcd33 +0x055:  movzbl 0x1b(%eax),%eax
084dcd37 +0x059:  movzbl %al,%edx
084dcd3a +0x05c:  mov    -0xc(%ebp),%eax
084dcd3d +0x05f:  mov    %ecx,0xc(%esp)
084dcd41 +0x063:  mov    %edx,0x8(%esp)
084dcd45 +0x067:  mov    %eax,0x4(%esp)
084dcd49 +0x06b:  lea    -0x2a(%ebp),%eax
084dcd4c +0x06e:  mov    %eax,(%esp)
084dcd4f +0x071:  call   084ed19a <_GLOBAL__I__Z7getUserj+0x414c>  ; global constructors keyed to getUser(unsigned int)+0x414c
084dcd54 +0x076:  mov    0xc(%ebp),%eax
084dcd57 +0x079:  mov    %eax,(%esp)
084dcd5a +0x07c:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084dcd5f +0x081:  mov    %eax,%ebx
084dcd61 +0x083:  mov    0xc(%ebp),%eax
084dcd64 +0x086:  mov    %eax,(%esp)
084dcd67 +0x089:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084dcd6c +0x08e:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084dcd72 +0x094:  mov    %eax,0x4(%esp)
084dcd76 +0x098:  mov    %edx,(%esp)
084dcd79 +0x09b:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084dcd7e +0x0a0:  lea    -0x2a(%ebp),%edx
084dcd81 +0x0a3:  mov    %edx,0x8(%esp)
084dcd85 +0x0a7:  mov    %ebx,0x4(%esp)
084dcd89 +0x0ab:  mov    %eax,(%esp)
084dcd8c +0x0ae:  call   0846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)
084dcd91 +0x0b3:  lea    -0x38(%ebp),%eax
084dcd94 +0x0b6:  mov    %eax,(%esp)
084dcd97 +0x0b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dcd9c +0x0be:  movl   $0x2,0x8(%esp)
084dcda4 +0x0c6:  movl   $0x0,0x4(%esp)
084dcdac +0x0ce:  lea    -0x38(%ebp),%eax
084dcdaf +0x0d1:  mov    %eax,(%esp)
084dcdb2 +0x0d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dcdb7 +0x0d9:  movl   $0x0,0x4(%esp)
084dcdbf +0x0e1:  lea    -0x38(%ebp),%eax
084dcdc2 +0x0e4:  mov    %eax,(%esp)
084dcdc5 +0x0e7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dcdca +0x0ec:  movl   $0x1,0x4(%esp)
084dcdd2 +0x0f4:  lea    -0x38(%ebp),%eax
084dcdd5 +0x0f7:  mov    %eax,(%esp)
084dcdd8 +0x0fa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084dcddd +0x0ff:  lea    -0x38(%ebp),%eax
084dcde0 +0x102:  movl   $0x0,0x8(%esp)
084dcde8 +0x10a:  mov    %eax,0x4(%esp)
084dcdec +0x10e:  mov    0xc(%ebp),%eax
084dcdef +0x111:  mov    %eax,(%esp)
084dcdf2 +0x114:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084dcdf7 +0x119:  movl   $0x1,0x4(%esp)
084dcdff +0x121:  lea    -0x38(%ebp),%eax
084dce02 +0x124:  mov    %eax,(%esp)
084dce05 +0x127:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dce0a +0x12c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084dce0f +0x131:  mov    0xc(%ebp),%edx
084dce12 +0x134:  mov    %edx,0x8(%esp)
084dce16 +0x138:  lea    -0x38(%ebp),%edx
084dce19 +0x13b:  mov    %edx,0x4(%esp)
084dce1d +0x13f:  mov    %eax,(%esp)
084dce20 +0x142:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
084dce25 +0x147:  lea    -0x44(%ebp),%eax
084dce28 +0x14a:  mov    %eax,(%esp)
084dce2b +0x14d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dce30 +0x152:  movl   $0xc3,0x8(%esp)
084dce38 +0x15a:  movl   $0x1,0x4(%esp)
084dce40 +0x162:  lea    -0x44(%ebp),%eax
084dce43 +0x165:  mov    %eax,(%esp)
084dce46 +0x168:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dce4b +0x16d:  movl   $0x1,0x4(%esp)
084dce53 +0x175:  lea    -0x44(%ebp),%eax
084dce56 +0x178:  mov    %eax,(%esp)
084dce59 +0x17b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dce5e +0x180:  movl   $0x1,0x4(%esp)
084dce66 +0x188:  lea    -0x44(%ebp),%eax
084dce69 +0x18b:  mov    %eax,(%esp)
084dce6c +0x18e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dce71 +0x193:  movl   $0x1,0x4(%esp)
084dce79 +0x19b:  lea    -0x44(%ebp),%eax
084dce7c +0x19e:  mov    %eax,(%esp)
084dce7f +0x1a1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dce84 +0x1a6:  lea    -0x44(%ebp),%eax
084dce87 +0x1a9:  mov    %eax,0x4(%esp)
084dce8b +0x1ad:  mov    0xc(%ebp),%eax
084dce8e +0x1b0:  mov    %eax,(%esp)
084dce91 +0x1b3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dce96 +0x1b8:  mov    $0x0,%ebx
084dce9b +0x1bd:  lea    -0x44(%ebp),%eax
084dce9e +0x1c0:  mov    %eax,(%esp)
084dcea1 +0x1c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dcea6 +0x1c8:  jmp    084dced8 <+0x1fa>
084dcea8 +0x1ca:  mov    %edx,%ebx
084dceaa +0x1cc:  mov    %eax,%esi
084dceac +0x1ce:  lea    -0x44(%ebp),%eax
084dceaf +0x1d1:  mov    %eax,(%esp)
084dceb2 +0x1d4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dceb7 +0x1d9:  mov    %esi,%eax
084dceb9 +0x1db:  mov    %ebx,%edx
084dcebb +0x1dd:  jmp    084dcebd <+0x1df>
084dcebd +0x1df:  mov    %edx,%ebx
084dcebf +0x1e1:  mov    %eax,%esi
084dcec1 +0x1e3:  lea    -0x38(%ebp),%eax
084dcec4 +0x1e6:  mov    %eax,(%esp)
084dcec7 +0x1e9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dcecc +0x1ee:  mov    %esi,%eax
084dcece +0x1f0:  mov    %ebx,%edx
084dced0 +0x1f2:  mov    %eax,(%esp)
084dced3 +0x1f5:  call   08ae3750 <_Unwind_Resume>
084dced8 +0x1fa:  lea    -0x38(%ebp),%eax
084dcedb +0x1fd:  mov    %eax,(%esp)
084dcede +0x200:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dcee3 +0x205:  mov    %ebx,%eax
084dcee5 +0x207:  add    $0x50,%esp
084dcee8 +0x20a:  pop    %ebx
084dcee9 +0x20b:  pop    %esi
084dceea +0x20c:  pop    %ebp
084dceeb +0x20d:  ret
```

## 反编译 C

```c
// Inter_ApplyTempPowerSide::dispatch_sig @ 0x84dccde

/* Inter_ApplyTempPowerSide::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ApplyTempPowerSide::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  GameWorld *this_00;
  PacketGuard local_48 [12];
  PacketGuard local_3c [14];
  STGuildProxy local_2e [26];
  int local_14;
  char *local_10;
  
  local_14 = param_3;
  iVar1 = *(int *)(param_3 + 0xe);
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar1 == iVar2) {
    local_10 = (char *)CUser::GetGuildDBInfo((CUser *)param_2);
    STGuildProxy::STGuildProxy(local_2e,local_10,local_10[0x1b],*(uchar *)(local_14 + 0x16));
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::ModifyGuildInfoProxy(this,uVar3,local_2e);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084dcdb2 to 084dce2f has its CatchHandler @ 084dcebd */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_3c,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_3c,(CUser *)param_2);
    PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084dce46 to 084dce95 has its CatchHandler @ 084dcea8 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0xc3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send((CUser *)param_2,local_48);
                    /* try { // try from 084dcea1 to 084dcea5 has its CatchHandler @ 084dcebd */
    PacketGuard::~PacketGuard(local_48);
    PacketGuard::~PacketGuard(local_3c);
  }
  return 0;
}
```
