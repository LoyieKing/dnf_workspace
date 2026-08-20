# dispatch_sig

`_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci`

`Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyGuildCreate` | `0x084d368a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d368a  _ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci
#           Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int)
# range [0x084d368a, 0x084d39ad]
084d368a +0x000:  push   %ebp
084d368b +0x001:  mov    %esp,%ebp
084d368d +0x003:  push   %esi
084d368e +0x004:  push   %ebx
084d368f +0x005:  sub    $0x50,%esp
084d3692 +0x008:  mov    0x10(%ebp),%eax
084d3695 +0x00b:  mov    %eax,-0x10(%ebp)
084d3698 +0x00e:  mov    0xc(%ebp),%eax
084d369b +0x011:  mov    %eax,(%esp)
084d369e +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d36a3 +0x019:  cmp    $0x2,%eax
084d36a6 +0x01c:  setle  %al
084d36a9 +0x01f:  test   %al,%al
084d36ab +0x021:  je     084d36ed <+0x63>
084d36ad +0x023:  mov    -0x10(%ebp),%eax
084d36b0 +0x026:  mov    0xa(%eax),%eax
084d36b3 +0x029:  mov    %eax,0x14(%esp)
084d36b7 +0x02d:  movl   $"GUILD : Inter_ReplyGuildCreate:: recv->m_uCharID(%d)",0x10(%esp)
084d36bf +0x035:  movl   $0x3464,0xc(%esp)
084d36c7 +0x03d:  movl   $&_ZZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d36cf +0x045:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d36d7 +0x04d:  movl   $0x1,(%esp)
084d36de +0x054:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d36e3 +0x059:  mov    $0x0,%ebx
084d36e8 +0x05e:  jmp    084d39a5 <+0x31b>
084d36ed +0x063:  movl   $0xffffffff,0x4(%esp)
084d36f5 +0x06b:  mov    0xc(%ebp),%eax
084d36f8 +0x06e:  mov    %eax,(%esp)
084d36fb +0x071:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d3700 +0x076:  mov    %eax,%edx
084d3702 +0x078:  mov    -0x10(%ebp),%eax
084d3705 +0x07b:  mov    0xa(%eax),%eax
084d3708 +0x07e:  cmp    %eax,%edx
084d370a +0x080:  setne  %al
084d370d +0x083:  test   %al,%al
084d370f +0x085:  je     084d3768 <+0xde>
084d3711 +0x087:  mov    -0x10(%ebp),%eax
084d3714 +0x08a:  mov    0xa(%eax),%ebx
084d3717 +0x08d:  movl   $0xffffffff,0x4(%esp)
084d371f +0x095:  mov    0xc(%ebp),%eax
084d3722 +0x098:  mov    %eax,(%esp)
084d3725 +0x09b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d372a +0x0a0:  mov    %ebx,0x18(%esp)
084d372e +0x0a4:  mov    %eax,0x14(%esp)
084d3732 +0x0a8:  movl   $"GUILD : Inter_ReplyGuildCreate:: : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084d373a +0x0b0:  movl   $0x346a,0xc(%esp)
084d3742 +0x0b8:  movl   $&_ZZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d374a +0x0c0:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d3752 +0x0c8:  movl   $0x1,(%esp)
084d3759 +0x0cf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d375e +0x0d4:  mov    $0x0,%ebx
084d3763 +0x0d9:  jmp    084d39a5 <+0x31b>
084d3768 +0x0de:  lea    -0x1c(%ebp),%eax
084d376b +0x0e1:  mov    %eax,(%esp)
084d376e +0x0e4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d3773 +0x0e9:  movl   $0x47,0x8(%esp)
084d377b +0x0f1:  movl   $0x1,0x4(%esp)
084d3783 +0x0f9:  lea    -0x1c(%ebp),%eax
084d3786 +0x0fc:  mov    %eax,(%esp)
084d3789 +0x0ff:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d378e +0x104:  mov    -0x10(%ebp),%eax
084d3791 +0x107:  mov    0x12(%eax),%eax
084d3794 +0x10a:  test   %eax,%eax
084d3796 +0x10c:  jne    084d37e4 <+0x15a>
084d3798 +0x10e:  movl   $0x1,0x4(%esp)
084d37a0 +0x116:  lea    -0x1c(%ebp),%eax
084d37a3 +0x119:  mov    %eax,(%esp)
084d37a6 +0x11c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d37ab +0x121:  mov    -0x10(%ebp),%eax
084d37ae +0x124:  mov    0xa(%eax),%ebx
084d37b1 +0x127:  mov    -0x10(%ebp),%eax
084d37b4 +0x12a:  lea    0x16(%eax),%esi
084d37b7 +0x12d:  mov    0xc(%ebp),%eax
084d37ba +0x130:  mov    %eax,(%esp)
084d37bd +0x133:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084d37c2 +0x138:  mov    0xc(%ebp),%edx
084d37c5 +0x13b:  add    $0x79700,%edx
084d37cb +0x141:  mov    %ebx,0xc(%esp)
084d37cf +0x145:  mov    %esi,0x8(%esp)
084d37d3 +0x149:  mov    %eax,0x4(%esp)
084d37d7 +0x14d:  mov    %edx,(%esp)
084d37da +0x150:  call   08685978 <_ZN15cUserHistoryLog11GuildCreateEjPKcj>  ; cUserHistoryLog::GuildCreate(unsigned int, char const*, unsigned int)
084d37df +0x155:  jmp    084d386f <+0x1e5>
084d37e4 +0x15a:  movl   $0x0,0x4(%esp)
084d37ec +0x162:  lea    -0x1c(%ebp),%eax
084d37ef +0x165:  mov    %eax,(%esp)
084d37f2 +0x168:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d37f7 +0x16d:  mov    -0x10(%ebp),%eax
084d37fa +0x170:  mov    0x12(%eax),%eax
084d37fd +0x173:  mov    %eax,0x4(%esp)
084d3801 +0x177:  lea    -0x1c(%ebp),%eax
084d3804 +0x17a:  mov    %eax,(%esp)
084d3807 +0x17d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d380c +0x182:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d3811 +0x187:  mov    0xa50c(%eax),%eax
084d3817 +0x18d:  mov    %eax,-0xc(%ebp)
084d381a +0x190:  mov    0xc(%ebp),%eax
084d381d +0x193:  mov    %eax,(%esp)
084d3820 +0x196:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084d3825 +0x19b:  movl   $0x0,0x10(%esp)
084d382d +0x1a3:  movl   $0x1,0xc(%esp)
084d3835 +0x1ab:  movl   $0x19,0x8(%esp)
084d383d +0x1b3:  mov    -0xc(%ebp),%edx
084d3840 +0x1b6:  mov    %edx,0x4(%esp)
084d3844 +0x1ba:  mov    %eax,(%esp)
084d3847 +0x1bd:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
084d384c +0x1c2:  movl   $0x0,0xc(%esp)
084d3854 +0x1ca:  movl   $0x0,0x8(%esp)
084d385c +0x1d2:  movl   $0x1,0x4(%esp)
084d3864 +0x1da:  mov    0xc(%ebp),%eax
084d3867 +0x1dd:  mov    %eax,(%esp)
084d386a +0x1e0:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
084d386f +0x1e5:  movl   $0x1,0x4(%esp)
084d3877 +0x1ed:  lea    -0x1c(%ebp),%eax
084d387a +0x1f0:  mov    %eax,(%esp)
084d387d +0x1f3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d3882 +0x1f8:  lea    -0x1c(%ebp),%eax
084d3885 +0x1fb:  mov    %eax,0x4(%esp)
084d3889 +0x1ff:  mov    0xc(%ebp),%eax
084d388c +0x202:  mov    %eax,(%esp)
084d388f +0x205:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d3894 +0x20a:  mov    -0x10(%ebp),%eax
084d3897 +0x20d:  mov    0x12(%eax),%eax
084d389a +0x210:  test   %eax,%eax
084d389c +0x212:  jne    084d3978 <+0x2ee>
084d38a2 +0x218:  lea    -0x36(%ebp),%eax
084d38a5 +0x21b:  mov    %eax,(%esp)
084d38a8 +0x21e:  call   082344de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b88
084d38ad +0x223:  movb   $0x0,-0x1f(%ebp)
084d38b1 +0x227:  mov    -0x10(%ebp),%eax
084d38b4 +0x22a:  add    $0x16,%eax
084d38b7 +0x22d:  movl   $0x16,0x8(%esp)
084d38bf +0x235:  mov    %eax,0x4(%esp)
084d38c3 +0x239:  lea    -0x36(%ebp),%eax
084d38c6 +0x23c:  mov    %eax,(%esp)
084d38c9 +0x23f:  call   0807d8a0 <_init+0x198>
084d38ce +0x244:  movb   $0x0,-0x1e(%ebp)
084d38d2 +0x248:  lea    -0x36(%ebp),%eax
084d38d5 +0x24b:  mov    %eax,0x4(%esp)
084d38d9 +0x24f:  mov    0xc(%ebp),%eax
084d38dc +0x252:  mov    %eax,(%esp)
084d38df +0x255:  call   0865cd0a <_ZN5CUser17SetGuildInfoProxyER12STGuildProxy>  ; CUser::SetGuildInfoProxy(STGuildProxy&)
084d38e4 +0x25a:  lea    -0x1c(%ebp),%eax
084d38e7 +0x25d:  mov    %eax,(%esp)
084d38ea +0x260:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d38ef +0x265:  movl   $0x2,0x8(%esp)
084d38f7 +0x26d:  movl   $0x0,0x4(%esp)
084d38ff +0x275:  lea    -0x1c(%ebp),%eax
084d3902 +0x278:  mov    %eax,(%esp)
084d3905 +0x27b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d390a +0x280:  movl   $0x0,0x4(%esp)
084d3912 +0x288:  lea    -0x1c(%ebp),%eax
084d3915 +0x28b:  mov    %eax,(%esp)
084d3918 +0x28e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d391d +0x293:  movl   $0x1,0x4(%esp)
084d3925 +0x29b:  lea    -0x1c(%ebp),%eax
084d3928 +0x29e:  mov    %eax,(%esp)
084d392b +0x2a1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d3930 +0x2a6:  lea    -0x1c(%ebp),%eax
084d3933 +0x2a9:  movl   $0x0,0x8(%esp)
084d393b +0x2b1:  mov    %eax,0x4(%esp)
084d393f +0x2b5:  mov    0xc(%ebp),%eax
084d3942 +0x2b8:  mov    %eax,(%esp)
084d3945 +0x2bb:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084d394a +0x2c0:  movl   $0x1,0x4(%esp)
084d3952 +0x2c8:  lea    -0x1c(%ebp),%eax
084d3955 +0x2cb:  mov    %eax,(%esp)
084d3958 +0x2ce:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d395d +0x2d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d3962 +0x2d8:  mov    0xc(%ebp),%edx
084d3965 +0x2db:  mov    %edx,0x8(%esp)
084d3969 +0x2df:  lea    -0x1c(%ebp),%edx
084d396c +0x2e2:  mov    %edx,0x4(%esp)
084d3970 +0x2e6:  mov    %eax,(%esp)
084d3973 +0x2e9:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
084d3978 +0x2ee:  mov    $0x0,%ebx
084d397d +0x2f3:  lea    -0x1c(%ebp),%eax
084d3980 +0x2f6:  mov    %eax,(%esp)
084d3983 +0x2f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3988 +0x2fe:  jmp    084d39a5 <+0x31b>
084d398a +0x300:  mov    %edx,%ebx
084d398c +0x302:  mov    %eax,%esi
084d398e +0x304:  lea    -0x1c(%ebp),%eax
084d3991 +0x307:  mov    %eax,(%esp)
084d3994 +0x30a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d3999 +0x30f:  mov    %esi,%eax
084d399b +0x311:  mov    %ebx,%edx
084d399d +0x313:  mov    %eax,(%esp)
084d39a0 +0x316:  call   08ae3750 <_Unwind_Resume>
084d39a5 +0x31b:  mov    %ebx,%eax
084d39a7 +0x31d:  add    $0x50,%esp
084d39aa +0x320:  pop    %ebx
084d39ab +0x321:  pop    %esi
084d39ac +0x322:  pop    %ebp
084d39ad +0x323:  ret
```

## 反编译 C

```c
// Inter_ReplyGuildCreate::dispatch_sig @ 0x84d368a

/* Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildCreate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  CInventory *pCVar7;
  GameWorld *this;
  STGuildProxy local_3a [23];
  undefined1 local_23;
  undefined1 local_22;
  PacketGuard local_20 [12];
  int local_14;
  undefined4 local_10;
  
  local_14 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 < 3) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int)",0x3464,
               "GUILD : Inter_ReplyGuildCreate:: recv->m_uCharID(%d)",*(undefined4 *)(local_14 + 10)
              );
  }
  else {
    iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar4 == *(int *)(local_14 + 10)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d3789 to 084d3977 has its CatchHandler @ 084d398a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x47);
      if (*(int *)(local_14 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        uVar3 = *(uint *)(local_14 + 10);
        pcVar1 = (char *)(local_14 + 0x16);
        uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        cUserHistoryLog::GuildCreate((cUserHistoryLog *)(param_2 + 0x79700),uVar6,pcVar1,uVar3);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        iVar4 = G_CDataManager();
        local_10 = *(undefined4 *)(iVar4 + 0xa50c);
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        CInventory::gain_money(pCVar7,local_10,0x19,1,0);
        CUser::SendUpdateItemList((CUser *)param_2,1,0,0);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      if (*(int *)(local_14 + 0x12) == 0) {
        STGuildProxy::STGuildProxy(local_3a);
        local_23 = 0;
        memcpy(local_3a,(void *)(local_14 + 0x16),0x16);
        local_22 = 0;
        CUser::SetGuildInfoProxy((CUser *)param_2,local_3a);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
        CUser::make_basic_info((CUser *)param_2,(char *)local_20,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        this = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this,local_20,(CUser *)param_2);
      }
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar2 = *(undefined4 *)(local_14 + 10);
      uVar5 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int)",0x346a,
                 "GUILD : Inter_ReplyGuildCreate:: : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar5,uVar2);
    }
  }
  return 0;
}
```
