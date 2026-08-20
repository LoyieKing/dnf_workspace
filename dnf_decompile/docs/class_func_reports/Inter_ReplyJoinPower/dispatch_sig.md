# dispatch_sig

`_ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci`

`Inter_ReplyJoinPower::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyJoinPower` | `0x084d47d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d47d4  _ZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPci
#           Inter_ReplyJoinPower::dispatch_sig(CUser*, char*, int)
# range [0x084d47d4, 0x084d49d5]
084d47d4 +0x000:  push   %ebp
084d47d5 +0x001:  mov    %esp,%ebp
084d47d7 +0x003:  push   %esi
084d47d8 +0x004:  push   %ebx
084d47d9 +0x005:  sub    $0x50,%esp
084d47dc +0x008:  mov    0xc(%ebp),%eax
084d47df +0x00b:  mov    %eax,(%esp)
084d47e2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d47e7 +0x013:  cmp    $0x2,%eax
084d47ea +0x016:  setle  %al
084d47ed +0x019:  test   %al,%al
084d47ef +0x01b:  je     084d47fb <+0x27>
084d47f1 +0x01d:  mov    $0x0,%ebx
084d47f6 +0x022:  jmp    084d49cd <+0x1f9>
084d47fb +0x027:  mov    0x10(%ebp),%eax
084d47fe +0x02a:  mov    %eax,-0x10(%ebp)
084d4801 +0x02d:  movl   $0xffffffff,0x4(%esp)
084d4809 +0x035:  mov    0xc(%ebp),%eax
084d480c +0x038:  mov    %eax,(%esp)
084d480f +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d4814 +0x040:  mov    %eax,%edx
084d4816 +0x042:  mov    -0x10(%ebp),%eax
084d4819 +0x045:  mov    0x12(%eax),%eax
084d481c +0x048:  cmp    %eax,%edx
084d481e +0x04a:  setne  %al
084d4821 +0x04d:  test   %al,%al
084d4823 +0x04f:  je     084d487c <+0xa8>
084d4825 +0x051:  mov    -0x10(%ebp),%eax
084d4828 +0x054:  mov    0x12(%eax),%ebx
084d482b +0x057:  movl   $0xffffffff,0x4(%esp)
084d4833 +0x05f:  mov    0xc(%ebp),%eax
084d4836 +0x062:  mov    %eax,(%esp)
084d4839 +0x065:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d483e +0x06a:  mov    %ebx,0x18(%esp)
084d4842 +0x06e:  mov    %eax,0x14(%esp)
084d4846 +0x072:  movl   $"Inter_ReplyJoinPower::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharNo(%d)",0x10(%esp)
084d484e +0x07a:  movl   $0x35fc,0xc(%esp)
084d4856 +0x082:  movl   $&_ZZN20Inter_ReplyJoinPower12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d485e +0x08a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d4866 +0x092:  movl   $0x1,(%esp)
084d486d +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d4872 +0x09e:  mov    $0x0,%ebx
084d4877 +0x0a3:  jmp    084d49cd <+0x1f9>
084d487c +0x0a8:  lea    -0x1c(%ebp),%eax
084d487f +0x0ab:  mov    %eax,(%esp)
084d4882 +0x0ae:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4887 +0x0b3:  movl   $0xb4,0x8(%esp)
084d488f +0x0bb:  movl   $0x1,0x4(%esp)
084d4897 +0x0c3:  lea    -0x1c(%ebp),%eax
084d489a +0x0c6:  mov    %eax,(%esp)
084d489d +0x0c9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d48a2 +0x0ce:  mov    -0x10(%ebp),%eax
084d48a5 +0x0d1:  mov    0xa(%eax),%eax
084d48a8 +0x0d4:  test   %eax,%eax
084d48aa +0x0d6:  jne    084d48da <+0x106>
084d48ac +0x0d8:  movl   $0x1,0x4(%esp)
084d48b4 +0x0e0:  lea    -0x1c(%ebp),%eax
084d48b7 +0x0e3:  mov    %eax,(%esp)
084d48ba +0x0e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d48bf +0x0eb:  mov    -0x10(%ebp),%eax
084d48c2 +0x0ee:  movzbl 0x16(%eax),%eax
084d48c6 +0x0f2:  movzbl %al,%eax
084d48c9 +0x0f5:  mov    %eax,0x4(%esp)
084d48cd +0x0f9:  lea    -0x1c(%ebp),%eax
084d48d0 +0x0fc:  mov    %eax,(%esp)
084d48d3 +0x0ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d48d8 +0x104:  jmp    084d4902 <+0x12e>
084d48da +0x106:  movl   $0x0,0x4(%esp)
084d48e2 +0x10e:  lea    -0x1c(%ebp),%eax
084d48e5 +0x111:  mov    %eax,(%esp)
084d48e8 +0x114:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d48ed +0x119:  mov    -0x10(%ebp),%eax
084d48f0 +0x11c:  mov    0xa(%eax),%eax
084d48f3 +0x11f:  mov    %eax,0x4(%esp)
084d48f7 +0x123:  lea    -0x1c(%ebp),%eax
084d48fa +0x126:  mov    %eax,(%esp)
084d48fd +0x129:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4902 +0x12e:  movl   $0x1,0x4(%esp)
084d490a +0x136:  lea    -0x1c(%ebp),%eax
084d490d +0x139:  mov    %eax,(%esp)
084d4910 +0x13c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d4915 +0x141:  lea    -0x1c(%ebp),%eax
084d4918 +0x144:  mov    %eax,0x4(%esp)
084d491c +0x148:  mov    0xc(%ebp),%eax
084d491f +0x14b:  mov    %eax,(%esp)
084d4922 +0x14e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d4927 +0x153:  mov    0xc(%ebp),%eax
084d492a +0x156:  mov    %eax,(%esp)
084d492d +0x159:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
084d4932 +0x15e:  mov    %eax,-0xc(%ebp)
084d4935 +0x161:  mov    -0x10(%ebp),%eax
084d4938 +0x164:  movzbl 0x16(%eax),%eax
084d493c +0x168:  movzbl %al,%ecx
084d493f +0x16b:  mov    -0xc(%ebp),%eax
084d4942 +0x16e:  movzbl 0x1b(%eax),%eax
084d4946 +0x172:  movzbl %al,%edx
084d4949 +0x175:  mov    -0xc(%ebp),%eax
084d494c +0x178:  mov    %ecx,0xc(%esp)
084d4950 +0x17c:  mov    %edx,0x8(%esp)
084d4954 +0x180:  mov    %eax,0x4(%esp)
084d4958 +0x184:  lea    -0x36(%ebp),%eax
084d495b +0x187:  mov    %eax,(%esp)
084d495e +0x18a:  call   084ed19a <_GLOBAL__I__Z7getUserj+0x414c>  ; global constructors keyed to getUser(unsigned int)+0x414c
084d4963 +0x18f:  mov    0xc(%ebp),%eax
084d4966 +0x192:  mov    %eax,(%esp)
084d4969 +0x195:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084d496e +0x19a:  mov    %eax,%ebx
084d4970 +0x19c:  mov    0xc(%ebp),%eax
084d4973 +0x19f:  mov    %eax,(%esp)
084d4976 +0x1a2:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d497b +0x1a7:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d4981 +0x1ad:  mov    %eax,0x4(%esp)
084d4985 +0x1b1:  mov    %edx,(%esp)
084d4988 +0x1b4:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d498d +0x1b9:  lea    -0x36(%ebp),%edx
084d4990 +0x1bc:  mov    %edx,0x8(%esp)
084d4994 +0x1c0:  mov    %ebx,0x4(%esp)
084d4998 +0x1c4:  mov    %eax,(%esp)
084d499b +0x1c7:  call   0846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)
084d49a0 +0x1cc:  mov    $0x0,%ebx
084d49a5 +0x1d1:  lea    -0x1c(%ebp),%eax
084d49a8 +0x1d4:  mov    %eax,(%esp)
084d49ab +0x1d7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d49b0 +0x1dc:  jmp    084d49cd <+0x1f9>
084d49b2 +0x1de:  mov    %edx,%ebx
084d49b4 +0x1e0:  mov    %eax,%esi
084d49b6 +0x1e2:  lea    -0x1c(%ebp),%eax
084d49b9 +0x1e5:  mov    %eax,(%esp)
084d49bc +0x1e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d49c1 +0x1ed:  mov    %esi,%eax
084d49c3 +0x1ef:  mov    %ebx,%edx
084d49c5 +0x1f1:  mov    %eax,(%esp)
084d49c8 +0x1f4:  call   08ae3750 <_Unwind_Resume>
084d49cd +0x1f9:  mov    %ebx,%eax
084d49cf +0x1fb:  add    $0x50,%esp
084d49d2 +0x1fe:  pop    %ebx
084d49d3 +0x1ff:  pop    %esi
084d49d4 +0x200:  pop    %ebp
084d49d5 +0x201:  ret
```

## 反编译 C

```c
// Inter_ReplyJoinPower::dispatch_sig @ 0x84d47d4

/* Inter_ReplyJoinPower::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyJoinPower::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  STGuildProxy local_3a [26];
  PacketGuard local_20 [12];
  int local_14;
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = param_3;
    iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == *(int *)(local_14 + 0x12)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d489d to 084d499f has its CatchHandler @ 084d49b2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xb4);
      if (*(int *)(local_14 + 10) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x16));
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 10));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      local_10 = (char *)CUser::GetGuildDBInfo((CUser *)param_2);
      STGuildProxy::STGuildProxy(local_3a,local_10,local_10[0x1b],*(uchar *)(local_14 + 0x16));
      uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      uVar4 = CUser::GetServerGroup((CUser *)param_2);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
      ;
      CGuildServerProxy::ModifyGuildInfoProxy(this,uVar3,local_3a);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar4 = *(undefined4 *)(local_14 + 0x12);
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyJoinPower::dispatch_sig(CUser*, char*, int)",0x35fc,
                 "Inter_ReplyJoinPower::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharNo(%d)"
                 ,uVar2,uVar4);
    }
  }
  return 0;
}
```
