# dispatch_sig

`_ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci`

`Inter_DeleteCharac::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DeleteCharac` | `0x084bf810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084bf810  _ZN18Inter_DeleteCharac12dispatch_sigEP5CUserPci
#           Inter_DeleteCharac::dispatch_sig(CUser*, char*, int)
# range [0x084bf810, 0x084bfb83]
084bf810 +0x000:  push   %ebp
084bf811 +0x001:  mov    %esp,%ebp
084bf813 +0x003:  push   %esi
084bf814 +0x004:  push   %ebx
084bf815 +0x005:  sub    $0x40,%esp
084bf818 +0x008:  mov    0xc(%ebp),%eax
084bf81b +0x00b:  mov    %eax,(%esp)
084bf81e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084bf823 +0x013:  test   %eax,%eax
084bf825 +0x015:  sete   %al
084bf828 +0x018:  test   %al,%al
084bf82a +0x01a:  je     084bf836 <+0x26>
084bf82c +0x01c:  mov    $0x812,%ebx
084bf831 +0x021:  jmp    084bfb7b <+0x36b>
084bf836 +0x026:  mov    0xc(%ebp),%eax
084bf839 +0x029:  mov    %eax,(%esp)
084bf83c +0x02c:  call   0864aa48 <_ZN5CUser18unlockDeleteCharacEv>  ; CUser::unlockDeleteCharac()
084bf841 +0x031:  xor    $0x1,%eax
084bf844 +0x034:  test   %al,%al
084bf846 +0x036:  je     084bf852 <+0x42>
084bf848 +0x038:  mov    $0x817,%ebx
084bf84d +0x03d:  jmp    084bfb7b <+0x36b>
084bf852 +0x042:  mov    0x10(%ebp),%eax
084bf855 +0x045:  mov    %eax,-0xc(%ebp)
084bf858 +0x048:  lea    -0x18(%ebp),%eax
084bf85b +0x04b:  mov    %eax,(%esp)
084bf85e +0x04e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084bf863 +0x053:  movl   $0x6,0x8(%esp)
084bf86b +0x05b:  movl   $0x1,0x4(%esp)
084bf873 +0x063:  lea    -0x18(%ebp),%eax
084bf876 +0x066:  mov    %eax,(%esp)
084bf879 +0x069:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084bf87e +0x06e:  mov    -0xc(%ebp),%eax
084bf881 +0x071:  mov    0x8(%eax),%eax
084bf884 +0x074:  cmp    $0x1,%eax
084bf887 +0x077:  jne    084bf8de <+0xce>
084bf889 +0x079:  movl   $0x0,0x4(%esp)
084bf891 +0x081:  lea    -0x18(%ebp),%eax
084bf894 +0x084:  mov    %eax,(%esp)
084bf897 +0x087:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf89c +0x08c:  movl   $0x2,0x4(%esp)
084bf8a4 +0x094:  lea    -0x18(%ebp),%eax
084bf8a7 +0x097:  mov    %eax,(%esp)
084bf8aa +0x09a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf8af +0x09f:  movl   $0x1,0x4(%esp)
084bf8b7 +0x0a7:  lea    -0x18(%ebp),%eax
084bf8ba +0x0aa:  mov    %eax,(%esp)
084bf8bd +0x0ad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bf8c2 +0x0b2:  lea    -0x18(%ebp),%eax
084bf8c5 +0x0b5:  mov    %eax,0x4(%esp)
084bf8c9 +0x0b9:  mov    0xc(%ebp),%eax
084bf8cc +0x0bc:  mov    %eax,(%esp)
084bf8cf +0x0bf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bf8d4 +0x0c4:  mov    $0x825,%ebx
084bf8d9 +0x0c9:  jmp    084bfb70 <+0x360>
084bf8de +0x0ce:  mov    -0xc(%ebp),%eax
084bf8e1 +0x0d1:  mov    0x8(%eax),%eax
084bf8e4 +0x0d4:  cmp    $0x2,%eax
084bf8e7 +0x0d7:  jne    084bf93e <+0x12e>
084bf8e9 +0x0d9:  movl   $0x0,0x4(%esp)
084bf8f1 +0x0e1:  lea    -0x18(%ebp),%eax
084bf8f4 +0x0e4:  mov    %eax,(%esp)
084bf8f7 +0x0e7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf8fc +0x0ec:  movl   $0x24,0x4(%esp)
084bf904 +0x0f4:  lea    -0x18(%ebp),%eax
084bf907 +0x0f7:  mov    %eax,(%esp)
084bf90a +0x0fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf90f +0x0ff:  movl   $0x1,0x4(%esp)
084bf917 +0x107:  lea    -0x18(%ebp),%eax
084bf91a +0x10a:  mov    %eax,(%esp)
084bf91d +0x10d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bf922 +0x112:  lea    -0x18(%ebp),%eax
084bf925 +0x115:  mov    %eax,0x4(%esp)
084bf929 +0x119:  mov    0xc(%ebp),%eax
084bf92c +0x11c:  mov    %eax,(%esp)
084bf92f +0x11f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bf934 +0x124:  mov    $0x0,%ebx
084bf939 +0x129:  jmp    084bfb70 <+0x360>
084bf93e +0x12e:  mov    -0xc(%ebp),%eax
084bf941 +0x131:  mov    0x8(%eax),%eax
084bf944 +0x134:  cmp    $0x3,%eax
084bf947 +0x137:  jne    084bf99e <+0x18e>
084bf949 +0x139:  movl   $0x0,0x4(%esp)
084bf951 +0x141:  lea    -0x18(%ebp),%eax
084bf954 +0x144:  mov    %eax,(%esp)
084bf957 +0x147:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf95c +0x14c:  movl   $0xd5,0x4(%esp)
084bf964 +0x154:  lea    -0x18(%ebp),%eax
084bf967 +0x157:  mov    %eax,(%esp)
084bf96a +0x15a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf96f +0x15f:  movl   $0x1,0x4(%esp)
084bf977 +0x167:  lea    -0x18(%ebp),%eax
084bf97a +0x16a:  mov    %eax,(%esp)
084bf97d +0x16d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bf982 +0x172:  lea    -0x18(%ebp),%eax
084bf985 +0x175:  mov    %eax,0x4(%esp)
084bf989 +0x179:  mov    0xc(%ebp),%eax
084bf98c +0x17c:  mov    %eax,(%esp)
084bf98f +0x17f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bf994 +0x184:  mov    $0x0,%ebx
084bf999 +0x189:  jmp    084bfb70 <+0x360>
084bf99e +0x18e:  lea    -0x2e(%ebp),%eax
084bf9a1 +0x191:  mov    %eax,(%esp)
084bf9a4 +0x194:  call   084e9318 <_GLOBAL__I__Z7getUserj+0x2ca>  ; global constructors keyed to getUser(unsigned int)+0x2ca
084bf9a9 +0x199:  mov    0xc(%ebp),%eax
084bf9ac +0x19c:  mov    %eax,(%esp)
084bf9af +0x19f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084bf9b4 +0x1a4:  mov    %eax,-0x24(%ebp)
084bf9b7 +0x1a7:  mov    -0xc(%ebp),%eax
084bf9ba +0x1aa:  mov    0x4(%eax),%eax
084bf9bd +0x1ad:  mov    %eax,-0x20(%ebp)
084bf9c0 +0x1b0:  mov    -0xc(%ebp),%eax
084bf9c3 +0x1b3:  mov    0xc(%eax),%eax
084bf9c6 +0x1b6:  mov    %eax,-0x1c(%ebp)
084bf9c9 +0x1b9:  lea    -0x2e(%ebp),%ebx
084bf9cc +0x1bc:  mov    0xc(%ebp),%eax
084bf9cf +0x1bf:  mov    %eax,(%esp)
084bf9d2 +0x1c2:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084bf9d7 +0x1c7:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084bf9dd +0x1cd:  mov    %eax,0x4(%esp)
084bf9e1 +0x1d1:  mov    %edx,(%esp)
084bf9e4 +0x1d4:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084bf9e9 +0x1d9:  movl   $0x16,0x8(%esp)
084bf9f1 +0x1e1:  mov    %ebx,0x4(%esp)
084bf9f5 +0x1e5:  mov    %eax,(%esp)
084bf9f8 +0x1e8:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084bf9fd +0x1ed:  mov    -0x1c(%ebp),%eax
084bfa00 +0x1f0:  test   %eax,%eax
084bfa02 +0x1f2:  je     084bfa38 <+0x228>
084bfa04 +0x1f4:  lea    -0x2e(%ebp),%ebx
084bfa07 +0x1f7:  mov    0xc(%ebp),%eax
084bfa0a +0x1fa:  mov    %eax,(%esp)
084bfa0d +0x1fd:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084bfa12 +0x202:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084bfa18 +0x208:  mov    %eax,0x4(%esp)
084bfa1c +0x20c:  mov    %edx,(%esp)
084bfa1f +0x20f:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084bfa24 +0x214:  movl   $0x16,0x8(%esp)
084bfa2c +0x21c:  mov    %ebx,0x4(%esp)
084bfa30 +0x220:  mov    %eax,(%esp)
084bfa33 +0x223:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
084bfa38 +0x228:  mov    -0xc(%ebp),%eax
084bfa3b +0x22b:  mov    0x4(%eax),%eax
084bfa3e +0x22e:  mov    %eax,0x4(%esp)
084bfa42 +0x232:  mov    0xc(%ebp),%eax
084bfa45 +0x235:  mov    %eax,(%esp)
084bfa48 +0x238:  call   0864a63a <_ZN5CUser12DeleteCharacEj>  ; CUser::DeleteCharac(unsigned int)
084bfa4d +0x23d:  movl   $0x1,0x4(%esp)
084bfa55 +0x245:  lea    -0x18(%ebp),%eax
084bfa58 +0x248:  mov    %eax,(%esp)
084bfa5b +0x24b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bfa60 +0x250:  mov    -0xc(%ebp),%eax
084bfa63 +0x253:  movzbl 0x10(%eax),%eax
084bfa67 +0x257:  test   %al,%al
084bfa69 +0x259:  je     084bfa93 <+0x283>
084bfa6b +0x25b:  mov    0xc(%ebp),%eax
084bfa6e +0x25e:  movl   $0x0,0x4(%esp)
084bfa76 +0x266:  mov    %eax,(%esp)
084bfa79 +0x269:  call   084ebfe6 <_GLOBAL__I__Z7getUserj+0x2f98>  ; global constructors keyed to getUser(unsigned int)+0x2f98
084bfa7e +0x26e:  movl   $0x1,0x4(%esp)
084bfa86 +0x276:  lea    -0x18(%ebp),%eax
084bfa89 +0x279:  mov    %eax,(%esp)
084bfa8c +0x27c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bfa91 +0x281:  jmp    084bfaa6 <+0x296>
084bfa93 +0x283:  movl   $0x0,0x4(%esp)
084bfa9b +0x28b:  lea    -0x18(%ebp),%eax
084bfa9e +0x28e:  mov    %eax,(%esp)
084bfaa1 +0x291:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bfaa6 +0x296:  movl   $0x1,0x4(%esp)
084bfaae +0x29e:  lea    -0x18(%ebp),%eax
084bfab1 +0x2a1:  mov    %eax,(%esp)
084bfab4 +0x2a4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bfab9 +0x2a9:  lea    -0x18(%ebp),%eax
084bfabc +0x2ac:  mov    %eax,0x4(%esp)
084bfac0 +0x2b0:  mov    0xc(%ebp),%eax
084bfac3 +0x2b3:  mov    %eax,(%esp)
084bfac6 +0x2b6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bfacb +0x2bb:  lea    -0x18(%ebp),%eax
084bface +0x2be:  mov    %eax,(%esp)
084bfad1 +0x2c1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084bfad6 +0x2c6:  movl   $0x2,0x8(%esp)
084bfade +0x2ce:  movl   $0x0,0x4(%esp)
084bfae6 +0x2d6:  lea    -0x18(%ebp),%eax
084bfae9 +0x2d9:  mov    %eax,(%esp)
084bfaec +0x2dc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084bfaf1 +0x2e1:  movl   $0x2,0x4(%esp)
084bfaf9 +0x2e9:  lea    -0x18(%ebp),%eax
084bfafc +0x2ec:  mov    %eax,(%esp)
084bfaff +0x2ef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bfb04 +0x2f4:  lea    -0x18(%ebp),%eax
084bfb07 +0x2f7:  movl   $0x2,0x8(%esp)
084bfb0f +0x2ff:  mov    %eax,0x4(%esp)
084bfb13 +0x303:  mov    0xc(%ebp),%eax
084bfb16 +0x306:  mov    %eax,(%esp)
084bfb19 +0x309:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084bfb1e +0x30e:  movl   $0x1,0x4(%esp)
084bfb26 +0x316:  lea    -0x18(%ebp),%eax
084bfb29 +0x319:  mov    %eax,(%esp)
084bfb2c +0x31c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bfb31 +0x321:  lea    -0x18(%ebp),%eax
084bfb34 +0x324:  mov    %eax,0x4(%esp)
084bfb38 +0x328:  mov    0xc(%ebp),%eax
084bfb3b +0x32b:  mov    %eax,(%esp)
084bfb3e +0x32e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bfb43 +0x333:  mov    0xc(%ebp),%eax
084bfb46 +0x336:  mov    %eax,(%esp)
084bfb49 +0x339:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
084bfb4e +0x33e:  mov    $0x0,%ebx
084bfb53 +0x343:  jmp    084bfb70 <+0x360>
084bfb55 +0x345:  mov    %edx,%ebx
084bfb57 +0x347:  mov    %eax,%esi
084bfb59 +0x349:  lea    -0x18(%ebp),%eax
084bfb5c +0x34c:  mov    %eax,(%esp)
084bfb5f +0x34f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084bfb64 +0x354:  mov    %esi,%eax
084bfb66 +0x356:  mov    %ebx,%edx
084bfb68 +0x358:  mov    %eax,(%esp)
084bfb6b +0x35b:  call   08ae3750 <_Unwind_Resume>
084bfb70 +0x360:  lea    -0x18(%ebp),%eax
084bfb73 +0x363:  mov    %eax,(%esp)
084bfb76 +0x366:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084bfb7b +0x36b:  mov    %ebx,%eax
084bfb7d +0x36d:  add    $0x40,%esp
084bfb80 +0x370:  pop    %ebx
084bfb81 +0x371:  pop    %esi
084bfb82 +0x372:  pop    %ebp
084bfb83 +0x373:  ret
```

## 反编译 C

```c
// Inter_DeleteCharac::dispatch_sig @ 0x84bf810

/* Inter_DeleteCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DeleteCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CMonitorServerProxy *this;
  CGuildServerProxy *this_00;
  undefined4 uVar3;
  Packet_Monitor_Charac_Delete local_32 [10];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0x812;
  }
  else {
    cVar1 = CUser::unlockDeleteCharac((CUser *)param_2);
    if (cVar1 == '\x01') {
      local_10 = param_3;
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084bf879 to 084bfb4d has its CatchHandler @ 084bfb55 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,6);
      if (*(int *)(local_10 + 8) == 1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        uVar3 = 0x825;
      }
      else if (*(int *)(local_10 + 8) == 2) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x24);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        uVar3 = 0;
      }
      else if (*(int *)(local_10 + 8) == 3) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xd5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        uVar3 = 0;
      }
      else {
        Packet_Monitor_Charac_Delete::Packet_Monitor_Charac_Delete(local_32);
        local_28 = CUser::get_acc_id((CUser *)param_2);
        local_24 = *(undefined4 *)(local_10 + 4);
        local_20 = *(int *)(local_10 + 0xc);
        uVar3 = CUser::GetServerGroup((CUser *)param_2);
        this = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar3);
        CMonitorServerProxy::SendTcpPacket(this,(char *)local_32,0x16);
        if (local_20 != 0) {
          uVar3 = CUser::GetServerGroup((CUser *)param_2);
          this_00 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                              (GlobalData::s_guild_proxy_mgr,uVar3);
          CGuildServerProxy::SendTcpPacket(this_00,(char *)local_32,0x16);
        }
        CUser::DeleteCharac((CUser *)param_2,*(uint *)(local_10 + 4));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        if (*(char *)(local_10 + 0x10) == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        }
        else {
          CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)param_2,'\0');
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
        CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\x02');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        CUser::UpdateCharacView((CUser *)param_2);
        uVar3 = 0;
      }
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = 0x817;
    }
  }
  return uVar3;
}
```
