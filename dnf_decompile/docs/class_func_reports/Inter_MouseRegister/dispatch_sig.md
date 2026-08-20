# dispatch_sig

`_ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci`

`Inter_MouseRegister::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MouseRegister` | `0x084d07d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d07d2  _ZN19Inter_MouseRegister12dispatch_sigEP5CUserPci
#           Inter_MouseRegister::dispatch_sig(CUser*, char*, int)
# range [0x084d07d2, 0x084d09a9]
084d07d2 +0x000:  push   %ebp
084d07d3 +0x001:  mov    %esp,%ebp
084d07d5 +0x003:  push   %esi
084d07d6 +0x004:  push   %ebx
084d07d7 +0x005:  sub    $0x20,%esp
084d07da +0x008:  mov    0x10(%ebp),%eax
084d07dd +0x00b:  mov    %eax,-0xc(%ebp)
084d07e0 +0x00e:  mov    -0xc(%ebp),%eax
084d07e3 +0x011:  mov    0x16(%eax),%eax
084d07e6 +0x014:  test   %eax,%eax
084d07e8 +0x016:  jne    084d097d <+0x1ab>
084d07ee +0x01c:  mov    -0xc(%ebp),%eax
084d07f1 +0x01f:  mov    0x4(%eax),%eax
084d07f4 +0x022:  cmp    $0x1,%eax
084d07f7 +0x025:  je     084d0808 <+0x36>
084d07f9 +0x027:  mov    -0xc(%ebp),%eax
084d07fc +0x02a:  mov    0x4(%eax),%eax
084d07ff +0x02d:  cmp    $0x2,%eax
084d0802 +0x030:  jne    084d0897 <+0xc5>
084d0808 +0x036:  mov    0xc(%ebp),%eax
084d080b +0x039:  mov    %eax,(%esp)
084d080e +0x03c:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d0813 +0x041:  movl   $0x1,0x4(%esp)
084d081b +0x049:  mov    %eax,(%esp)
084d081e +0x04c:  call   084ebe08 <_GLOBAL__I__Z7getUserj+0x2dba>  ; global constructors keyed to getUser(unsigned int)+0x2dba
084d0823 +0x051:  mov    0xc(%ebp),%eax
084d0826 +0x054:  mov    %eax,(%esp)
084d0829 +0x057:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d082e +0x05c:  movl   $0x1,0x4(%esp)
084d0836 +0x064:  mov    %eax,(%esp)
084d0839 +0x067:  call   0826530e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xe6>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xe6
084d083e +0x06c:  mov    -0xc(%ebp),%eax
084d0841 +0x06f:  lea    0x23(%eax),%ebx
084d0844 +0x072:  mov    0xc(%ebp),%eax
084d0847 +0x075:  mov    %eax,(%esp)
084d084a +0x078:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d084f +0x07d:  mov    %ebx,0x4(%esp)
084d0853 +0x081:  mov    %eax,(%esp)
084d0856 +0x084:  call   0828713a <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x78>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x78
084d085b +0x089:  mov    -0xc(%ebp),%eax
084d085e +0x08c:  mov    0x1b(%eax),%ebx
084d0861 +0x08f:  mov    0xc(%ebp),%eax
084d0864 +0x092:  mov    %eax,(%esp)
084d0867 +0x095:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d086c +0x09a:  mov    %ebx,0x4(%esp)
084d0870 +0x09e:  mov    %eax,(%esp)
084d0873 +0x0a1:  call   084ebdfa <_GLOBAL__I__Z7getUserj+0x2dac>  ; global constructors keyed to getUser(unsigned int)+0x2dac
084d0878 +0x0a6:  mov    -0xc(%ebp),%eax
084d087b +0x0a9:  mov    0x1f(%eax),%ebx
084d087e +0x0ac:  mov    0xc(%ebp),%eax
084d0881 +0x0af:  mov    %eax,(%esp)
084d0884 +0x0b2:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d0889 +0x0b7:  mov    %ebx,0x4(%esp)
084d088d +0x0bb:  mov    %eax,(%esp)
084d0890 +0x0be:  call   0828712c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x6a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x6a
084d0895 +0x0c3:  jmp    084d08f5 <+0x123>
084d0897 +0x0c5:  mov    -0xc(%ebp),%eax
084d089a +0x0c8:  mov    0x4(%eax),%eax
084d089d +0x0cb:  cmp    $0x3,%eax
084d08a0 +0x0ce:  jne    084d08f5 <+0x123>
084d08a2 +0x0d0:  mov    0xc(%ebp),%eax
084d08a5 +0x0d3:  mov    %eax,(%esp)
084d08a8 +0x0d6:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d08ad +0x0db:  movl   $0x0,0x4(%esp)
084d08b5 +0x0e3:  mov    %eax,(%esp)
084d08b8 +0x0e6:  call   084ebe08 <_GLOBAL__I__Z7getUserj+0x2dba>  ; global constructors keyed to getUser(unsigned int)+0x2dba
084d08bd +0x0eb:  mov    0xc(%ebp),%eax
084d08c0 +0x0ee:  mov    %eax,(%esp)
084d08c3 +0x0f1:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d08c8 +0x0f6:  movl   $0x0,0x4(%esp)
084d08d0 +0x0fe:  mov    %eax,(%esp)
084d08d3 +0x101:  call   0826530e <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xe6>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xe6
084d08d8 +0x106:  mov    -0xc(%ebp),%eax
084d08db +0x109:  lea    0x23(%eax),%ebx
084d08de +0x10c:  mov    0xc(%ebp),%eax
084d08e1 +0x10f:  mov    %eax,(%esp)
084d08e4 +0x112:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
084d08e9 +0x117:  mov    %ebx,0x4(%esp)
084d08ed +0x11b:  mov    %eax,(%esp)
084d08f0 +0x11e:  call   0828713a <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x78>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x78
084d08f5 +0x123:  lea    -0x18(%ebp),%eax
084d08f8 +0x126:  mov    %eax,(%esp)
084d08fb +0x129:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d0900 +0x12e:  movl   $0x74,0x8(%esp)
084d0908 +0x136:  movl   $0x1,0x4(%esp)
084d0910 +0x13e:  lea    -0x18(%ebp),%eax
084d0913 +0x141:  mov    %eax,(%esp)
084d0916 +0x144:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d091b +0x149:  movl   $0x1,0x4(%esp)
084d0923 +0x151:  lea    -0x18(%ebp),%eax
084d0926 +0x154:  mov    %eax,(%esp)
084d0929 +0x157:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d092e +0x15c:  movl   $0x1,0x4(%esp)
084d0936 +0x164:  lea    -0x18(%ebp),%eax
084d0939 +0x167:  mov    %eax,(%esp)
084d093c +0x16a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d0941 +0x16f:  lea    -0x18(%ebp),%eax
084d0944 +0x172:  mov    %eax,0x4(%esp)
084d0948 +0x176:  mov    0xc(%ebp),%eax
084d094b +0x179:  mov    %eax,(%esp)
084d094e +0x17c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d0953 +0x181:  jmp    084d0970 <+0x19e>
084d0955 +0x183:  mov    %edx,%ebx
084d0957 +0x185:  mov    %eax,%esi
084d0959 +0x187:  lea    -0x18(%ebp),%eax
084d095c +0x18a:  mov    %eax,(%esp)
084d095f +0x18d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d0964 +0x192:  mov    %esi,%eax
084d0966 +0x194:  mov    %ebx,%edx
084d0968 +0x196:  mov    %eax,(%esp)
084d096b +0x199:  call   08ae3750 <_Unwind_Resume>
084d0970 +0x19e:  lea    -0x18(%ebp),%eax
084d0973 +0x1a1:  mov    %eax,(%esp)
084d0976 +0x1a4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d097b +0x1a9:  jmp    084d099d <+0x1cb>
084d097d +0x1ab:  mov    -0xc(%ebp),%eax
084d0980 +0x1ae:  mov    0x16(%eax),%eax
084d0983 +0x1b1:  movzbl %al,%eax
084d0986 +0x1b4:  mov    %eax,0x8(%esp)
084d098a +0x1b8:  movl   $0x74,0x4(%esp)
084d0992 +0x1c0:  mov    0xc(%ebp),%eax
084d0995 +0x1c3:  mov    %eax,(%esp)
084d0998 +0x1c6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d099d +0x1cb:  mov    $0x0,%eax
084d09a2 +0x1d0:  add    $0x20,%esp
084d09a5 +0x1d3:  pop    %ebx
084d09a6 +0x1d4:  pop    %esi
084d09a7 +0x1d5:  pop    %ebp
084d09a8 +0x1d6:  ret
084d09a9 +0x1d7:  nop
```

## 反编译 C

```c
// Inter_MouseRegister::dispatch_sig @ 0x84d07d2

/* Inter_MouseRegister::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MouseRegister::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  CPad *pCVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(int *)(param_3 + 0x16) == 0) {
    if ((*(int *)(param_3 + 4) == 1) || (*(int *)(param_3 + 4) == 2)) {
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setActivate(pCVar3,true);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCertified(pCVar3,true);
      pcVar1 = (char *)(local_10 + 0x23);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setPassword(pCVar3,pcVar1);
      iVar2 = *(int *)(local_10 + 0x1b);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCancelCnt(pCVar3,iVar2);
      iVar2 = *(int *)(local_10 + 0x1f);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setFailCnt(pCVar3,iVar2);
    }
    else if (*(int *)(param_3 + 4) == 3) {
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setActivate(pCVar3,false);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setCertified(pCVar3,false);
      pcVar1 = (char *)(local_10 + 0x23);
      pCVar3 = (CPad *)CUser::getPad((CUser *)param_2);
      Sanicova::CPad::setPassword(pCVar3,pcVar1);
    }
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d0916 to 084d0952 has its CatchHandler @ 084d0955 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x74);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x74,*(uint *)(param_3 + 0x16) & 0xff);
  }
  return 0;
}
```
