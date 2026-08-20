# dispatch_sig

`_ZN17Inter_SecedePower12dispatch_sigEP5CUserPci`

`Inter_SecedePower::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SecedePower` | `0x084d49d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d49d6  _ZN17Inter_SecedePower12dispatch_sigEP5CUserPci
#           Inter_SecedePower::dispatch_sig(CUser*, char*, int)
# range [0x084d49d6, 0x084d4bd1]
084d49d6 +0x000:  push   %ebp
084d49d7 +0x001:  mov    %esp,%ebp
084d49d9 +0x003:  push   %esi
084d49da +0x004:  push   %ebx
084d49db +0x005:  sub    $0x50,%esp
084d49de +0x008:  mov    0x10(%ebp),%eax
084d49e1 +0x00b:  mov    %eax,-0x10(%ebp)
084d49e4 +0x00e:  mov    0xc(%ebp),%eax
084d49e7 +0x011:  mov    %eax,(%esp)
084d49ea +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d49ef +0x019:  cmp    $0x2,%eax
084d49f2 +0x01c:  setle  %al
084d49f5 +0x01f:  test   %al,%al
084d49f7 +0x021:  je     084d4a03 <+0x2d>
084d49f9 +0x023:  mov    $0x0,%ebx
084d49fe +0x028:  jmp    084d4bc9 <+0x1f3>
084d4a03 +0x02d:  movl   $0xffffffff,0x4(%esp)
084d4a0b +0x035:  mov    0xc(%ebp),%eax
084d4a0e +0x038:  mov    %eax,(%esp)
084d4a11 +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d4a16 +0x040:  mov    %eax,%edx
084d4a18 +0x042:  mov    -0x10(%ebp),%eax
084d4a1b +0x045:  mov    0x12(%eax),%eax
084d4a1e +0x048:  cmp    %eax,%edx
084d4a20 +0x04a:  setne  %al
084d4a23 +0x04d:  test   %al,%al
084d4a25 +0x04f:  je     084d4a7e <+0xa8>
084d4a27 +0x051:  mov    -0x10(%ebp),%eax
084d4a2a +0x054:  mov    0x12(%eax),%ebx
084d4a2d +0x057:  movl   $0xffffffff,0x4(%esp)
084d4a35 +0x05f:  mov    0xc(%ebp),%eax
084d4a38 +0x062:  mov    %eax,(%esp)
084d4a3b +0x065:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d4a40 +0x06a:  mov    %ebx,0x18(%esp)
084d4a44 +0x06e:  mov    %eax,0x14(%esp)
084d4a48 +0x072:  movl   $"Inter_SecedePower::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharNo(%d)",0x10(%esp)
084d4a50 +0x07a:  movl   $0x3620,0xc(%esp)
084d4a58 +0x082:  movl   $&_ZZN17Inter_SecedePower12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084d4a60 +0x08a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d4a68 +0x092:  movl   $0x1,(%esp)
084d4a6f +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d4a74 +0x09e:  mov    $0x0,%ebx
084d4a79 +0x0a3:  jmp    084d4bc9 <+0x1f3>
084d4a7e +0x0a8:  lea    -0x1c(%ebp),%eax
084d4a81 +0x0ab:  mov    %eax,(%esp)
084d4a84 +0x0ae:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4a89 +0x0b3:  movl   $0xb5,0x8(%esp)
084d4a91 +0x0bb:  movl   $0x1,0x4(%esp)
084d4a99 +0x0c3:  lea    -0x1c(%ebp),%eax
084d4a9c +0x0c6:  mov    %eax,(%esp)
084d4a9f +0x0c9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d4aa4 +0x0ce:  mov    -0x10(%ebp),%eax
084d4aa7 +0x0d1:  mov    0xa(%eax),%eax
084d4aaa +0x0d4:  test   %eax,%eax
084d4aac +0x0d6:  jne    084d4adc <+0x106>
084d4aae +0x0d8:  movl   $0x1,0x4(%esp)
084d4ab6 +0x0e0:  lea    -0x1c(%ebp),%eax
084d4ab9 +0x0e3:  mov    %eax,(%esp)
084d4abc +0x0e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4ac1 +0x0eb:  mov    -0x10(%ebp),%eax
084d4ac4 +0x0ee:  movzbl 0x16(%eax),%eax
084d4ac8 +0x0f2:  movzbl %al,%eax
084d4acb +0x0f5:  mov    %eax,0x4(%esp)
084d4acf +0x0f9:  lea    -0x1c(%ebp),%eax
084d4ad2 +0x0fc:  mov    %eax,(%esp)
084d4ad5 +0x0ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4ada +0x104:  jmp    084d4b04 <+0x12e>
084d4adc +0x106:  movl   $0x0,0x4(%esp)
084d4ae4 +0x10e:  lea    -0x1c(%ebp),%eax
084d4ae7 +0x111:  mov    %eax,(%esp)
084d4aea +0x114:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4aef +0x119:  mov    -0x10(%ebp),%eax
084d4af2 +0x11c:  mov    0xa(%eax),%eax
084d4af5 +0x11f:  mov    %eax,0x4(%esp)
084d4af9 +0x123:  lea    -0x1c(%ebp),%eax
084d4afc +0x126:  mov    %eax,(%esp)
084d4aff +0x129:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d4b04 +0x12e:  movl   $0x1,0x4(%esp)
084d4b0c +0x136:  lea    -0x1c(%ebp),%eax
084d4b0f +0x139:  mov    %eax,(%esp)
084d4b12 +0x13c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d4b17 +0x141:  lea    -0x1c(%ebp),%eax
084d4b1a +0x144:  mov    %eax,0x4(%esp)
084d4b1e +0x148:  mov    0xc(%ebp),%eax
084d4b21 +0x14b:  mov    %eax,(%esp)
084d4b24 +0x14e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d4b29 +0x153:  mov    0xc(%ebp),%eax
084d4b2c +0x156:  mov    %eax,(%esp)
084d4b2f +0x159:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
084d4b34 +0x15e:  mov    %eax,-0xc(%ebp)
084d4b37 +0x161:  mov    -0xc(%ebp),%eax
084d4b3a +0x164:  movzbl 0x1b(%eax),%eax
084d4b3e +0x168:  movzbl %al,%edx
084d4b41 +0x16b:  mov    -0xc(%ebp),%eax
084d4b44 +0x16e:  movl   $0x0,0xc(%esp)
084d4b4c +0x176:  mov    %edx,0x8(%esp)
084d4b50 +0x17a:  mov    %eax,0x4(%esp)
084d4b54 +0x17e:  lea    -0x36(%ebp),%eax
084d4b57 +0x181:  mov    %eax,(%esp)
084d4b5a +0x184:  call   084ed19a <_GLOBAL__I__Z7getUserj+0x414c>  ; global constructors keyed to getUser(unsigned int)+0x414c
084d4b5f +0x189:  mov    0xc(%ebp),%eax
084d4b62 +0x18c:  mov    %eax,(%esp)
084d4b65 +0x18f:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084d4b6a +0x194:  mov    %eax,%ebx
084d4b6c +0x196:  mov    0xc(%ebp),%eax
084d4b6f +0x199:  mov    %eax,(%esp)
084d4b72 +0x19c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d4b77 +0x1a1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084d4b7d +0x1a7:  mov    %eax,0x4(%esp)
084d4b81 +0x1ab:  mov    %edx,(%esp)
084d4b84 +0x1ae:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d4b89 +0x1b3:  lea    -0x36(%ebp),%edx
084d4b8c +0x1b6:  mov    %edx,0x8(%esp)
084d4b90 +0x1ba:  mov    %ebx,0x4(%esp)
084d4b94 +0x1be:  mov    %eax,(%esp)
084d4b97 +0x1c1:  call   0846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)
084d4b9c +0x1c6:  mov    $0x0,%ebx
084d4ba1 +0x1cb:  lea    -0x1c(%ebp),%eax
084d4ba4 +0x1ce:  mov    %eax,(%esp)
084d4ba7 +0x1d1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4bac +0x1d6:  jmp    084d4bc9 <+0x1f3>
084d4bae +0x1d8:  mov    %edx,%ebx
084d4bb0 +0x1da:  mov    %eax,%esi
084d4bb2 +0x1dc:  lea    -0x1c(%ebp),%eax
084d4bb5 +0x1df:  mov    %eax,(%esp)
084d4bb8 +0x1e2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d4bbd +0x1e7:  mov    %esi,%eax
084d4bbf +0x1e9:  mov    %ebx,%edx
084d4bc1 +0x1eb:  mov    %eax,(%esp)
084d4bc4 +0x1ee:  call   08ae3750 <_Unwind_Resume>
084d4bc9 +0x1f3:  mov    %ebx,%eax
084d4bcb +0x1f5:  add    $0x50,%esp
084d4bce +0x1f8:  pop    %ebx
084d4bcf +0x1f9:  pop    %esi
084d4bd0 +0x1fa:  pop    %ebp
084d4bd1 +0x1fb:  ret
```

## 反编译 C

```c
// Inter_SecedePower::dispatch_sig @ 0x84d49d6

/* Inter_SecedePower::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecedePower::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == *(int *)(local_14 + 0x12)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d4a9f to 084d4b9b has its CatchHandler @ 084d4bae */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xb5);
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
      STGuildProxy::STGuildProxy(local_3a,local_10,local_10[0x1b],'\0');
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
                 "virtual int Inter_SecedePower::dispatch_sig(CUser*, char*, int)",0x3620,
                 "Inter_SecedePower::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharNo(%d)"
                 ,uVar2,uVar4);
    }
  }
  return 0;
}
```
