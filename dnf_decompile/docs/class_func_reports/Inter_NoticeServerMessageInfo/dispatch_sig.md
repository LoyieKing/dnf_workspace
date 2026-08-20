# dispatch_sig

`_ZN29Inter_NoticeServerMessageInfo12dispatch_sigEP5CUserPci`

`Inter_NoticeServerMessageInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeServerMessageInfo` | `0x084da726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da726  _ZN29Inter_NoticeServerMessageInfo12dispatch_sigEP5CUserPci
#           Inter_NoticeServerMessageInfo::dispatch_sig(CUser*, char*, int)
# range [0x084da726, 0x084da98d]
084da726 +0x000:  push   %ebp
084da727 +0x001:  mov    %esp,%ebp
084da729 +0x003:  push   %edi
084da72a +0x004:  push   %esi
084da72b +0x005:  push   %ebx
084da72c +0x006:  sub    $0x8c,%esp
084da732 +0x00c:  mov    0x10(%ebp),%eax
084da735 +0x00f:  mov    %eax,-0x20(%ebp)
084da738 +0x012:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084da73d +0x017:  mov    %eax,(%esp)
084da740 +0x01a:  call   08298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>  ; CGameManager::GetSharedServerMessageManager()
084da745 +0x01f:  mov    %eax,-0x1c(%ebp)
084da748 +0x022:  cmpl   $0x0,-0x1c(%ebp)
084da74c +0x026:  je     084da859 <+0x133>
084da752 +0x02c:  mov    -0x20(%ebp),%eax
084da755 +0x02f:  movzbl 0xa(%eax),%eax
084da759 +0x033:  movzbl %al,%ebx
084da75c +0x036:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084da761 +0x03b:  mov    %eax,(%esp)
084da764 +0x03e:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084da769 +0x043:  cmp    %eax,%ebx
084da76b +0x045:  setne  %al
084da76e +0x048:  test   %al,%al
084da770 +0x04a:  je     084da7a9 <+0x83>
084da772 +0x04c:  mov    -0x20(%ebp),%eax
084da775 +0x04f:  mov    0x5b(%eax),%edx
084da778 +0x052:  mov    -0x20(%ebp),%eax
084da77b +0x055:  lea    0x47(%eax),%ebx
084da77e +0x058:  mov    -0x20(%ebp),%eax
084da781 +0x05b:  lea    0x11(%eax),%ecx
084da784 +0x05e:  mov    -0x20(%ebp),%eax
084da787 +0x061:  movzbl 0xc(%eax),%eax
084da78b +0x065:  movzbl %al,%eax
084da78e +0x068:  mov    %edx,0x10(%esp)
084da792 +0x06c:  mov    %ebx,0xc(%esp)
084da796 +0x070:  mov    %ecx,0x8(%esp)
084da79a +0x074:  mov    %eax,0x4(%esp)
084da79e +0x078:  mov    -0x1c(%ebp),%eax
084da7a1 +0x07b:  mov    %eax,(%esp)
084da7a4 +0x07e:  call   08601476 <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i>  ; CSharedServerMessageManager::UpdateServerMessageByBroadcast(int, char*, char*, int)
084da7a9 +0x083:  mov    -0x20(%ebp),%eax
084da7ac +0x086:  mov    0x5b(%eax),%edi
084da7af +0x089:  mov    -0x20(%ebp),%eax
084da7b2 +0x08c:  add    $0x47,%eax
084da7b5 +0x08f:  mov    %eax,-0x5c(%ebp)
084da7b8 +0x092:  mov    -0x20(%ebp),%eax
084da7bb +0x095:  mov    0x43(%eax),%eax
084da7be +0x098:  mov    %eax,-0x58(%ebp)
084da7c1 +0x09b:  mov    -0x20(%ebp),%eax
084da7c4 +0x09e:  add    $0x11,%eax
084da7c7 +0x0a1:  mov    %eax,-0x54(%ebp)
084da7ca +0x0a4:  mov    -0x20(%ebp),%eax
084da7cd +0x0a7:  mov    0xd(%eax),%eax
084da7d0 +0x0aa:  mov    %eax,-0x50(%ebp)
084da7d3 +0x0ad:  mov    -0x20(%ebp),%eax
084da7d6 +0x0b0:  movzbl 0xc(%eax),%eax
084da7da +0x0b4:  movzbl %al,%eax
084da7dd +0x0b7:  mov    %eax,-0x4c(%ebp)
084da7e0 +0x0ba:  mov    -0x20(%ebp),%eax
084da7e3 +0x0bd:  movzbl 0xb(%eax),%eax
084da7e7 +0x0c1:  movzbl %al,%esi
084da7ea +0x0c4:  mov    -0x20(%ebp),%eax
084da7ed +0x0c7:  movzbl 0xa(%eax),%eax
084da7f1 +0x0cb:  movzbl %al,%ebx
084da7f4 +0x0ce:  movl   $0x0,0xc(%esp)
084da7fc +0x0d6:  movl   $0x42be,0x8(%esp)
084da804 +0x0de:  movl   $&_ZZN29Inter_NoticeServerMessageInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084da80c +0x0e6:  lea    -0x30(%ebp),%eax
084da80f +0x0e9:  mov    %eax,(%esp)
084da812 +0x0ec:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084da817 +0x0f1:  mov    %edi,0x24(%esp)
084da81b +0x0f5:  mov    -0x5c(%ebp),%eax
084da81e +0x0f8:  mov    %eax,0x20(%esp)
084da822 +0x0fc:  mov    -0x58(%ebp),%eax
084da825 +0x0ff:  mov    %eax,0x1c(%esp)
084da829 +0x103:  mov    -0x54(%ebp),%eax
084da82c +0x106:  mov    %eax,0x18(%esp)
084da830 +0x10a:  mov    -0x50(%ebp),%eax
084da833 +0x10d:  mov    %eax,0x14(%esp)
084da837 +0x111:  mov    -0x4c(%ebp),%eax
084da83a +0x114:  mov    %eax,0x10(%esp)
084da83e +0x118:  mov    %esi,0xc(%esp)
084da842 +0x11c:  mov    %ebx,0x8(%esp)
084da846 +0x120:  movl   $"SERVER_MESSAGE : Recv ServerMessage from monitor server(source_channel:%d, kind:%d, index:%d, msg_len:%d, msg:%s, name_len:%d, name:%s, time:%d",0x4(%esp)
084da84e +0x128:  lea    -0x30(%ebp),%eax
084da851 +0x12b:  mov    %eax,(%esp)
084da854 +0x12e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084da859 +0x133:  lea    -0x3c(%ebp),%eax
084da85c +0x136:  mov    %eax,(%esp)
084da85f +0x139:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084da864 +0x13e:  movl   $0xc0,0x8(%esp)
084da86c +0x146:  movl   $0x0,0x4(%esp)
084da874 +0x14e:  lea    -0x3c(%ebp),%eax
084da877 +0x151:  mov    %eax,(%esp)
084da87a +0x154:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084da87f +0x159:  movl   $0x1,0x4(%esp)
084da887 +0x161:  lea    -0x3c(%ebp),%eax
084da88a +0x164:  mov    %eax,(%esp)
084da88d +0x167:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da892 +0x16c:  movl   $0x1,0x4(%esp)
084da89a +0x174:  lea    -0x3c(%ebp),%eax
084da89d +0x177:  mov    %eax,(%esp)
084da8a0 +0x17a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da8a5 +0x17f:  mov    -0x20(%ebp),%eax
084da8a8 +0x182:  movzbl 0xc(%eax),%eax
084da8ac +0x186:  movzbl %al,%eax
084da8af +0x189:  mov    %eax,0x4(%esp)
084da8b3 +0x18d:  lea    -0x3c(%ebp),%eax
084da8b6 +0x190:  mov    %eax,(%esp)
084da8b9 +0x193:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084da8be +0x198:  mov    -0x20(%ebp),%eax
084da8c1 +0x19b:  mov    0xd(%eax),%eax
084da8c4 +0x19e:  mov    %eax,0x4(%esp)
084da8c8 +0x1a2:  lea    -0x3c(%ebp),%eax
084da8cb +0x1a5:  mov    %eax,(%esp)
084da8ce +0x1a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084da8d3 +0x1ad:  mov    -0x20(%ebp),%eax
084da8d6 +0x1b0:  mov    0xd(%eax),%eax
084da8d9 +0x1b3:  mov    -0x20(%ebp),%edx
084da8dc +0x1b6:  add    $0x11,%edx
084da8df +0x1b9:  mov    %eax,0x8(%esp)
084da8e3 +0x1bd:  mov    %edx,0x4(%esp)
084da8e7 +0x1c1:  lea    -0x3c(%ebp),%eax
084da8ea +0x1c4:  mov    %eax,(%esp)
084da8ed +0x1c7:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084da8f2 +0x1cc:  mov    -0x20(%ebp),%eax
084da8f5 +0x1cf:  mov    0x43(%eax),%eax
084da8f8 +0x1d2:  mov    %eax,0x4(%esp)
084da8fc +0x1d6:  lea    -0x3c(%ebp),%eax
084da8ff +0x1d9:  mov    %eax,(%esp)
084da902 +0x1dc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084da907 +0x1e1:  mov    -0x20(%ebp),%eax
084da90a +0x1e4:  mov    0x43(%eax),%eax
084da90d +0x1e7:  mov    -0x20(%ebp),%edx
084da910 +0x1ea:  add    $0x47,%edx
084da913 +0x1ed:  mov    %eax,0x8(%esp)
084da917 +0x1f1:  mov    %edx,0x4(%esp)
084da91b +0x1f5:  lea    -0x3c(%ebp),%eax
084da91e +0x1f8:  mov    %eax,(%esp)
084da921 +0x1fb:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084da926 +0x200:  movl   $0x1,0x4(%esp)
084da92e +0x208:  lea    -0x3c(%ebp),%eax
084da931 +0x20b:  mov    %eax,(%esp)
084da934 +0x20e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084da939 +0x213:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084da93e +0x218:  movl   $0x3,0x8(%esp)
084da946 +0x220:  lea    -0x3c(%ebp),%edx
084da949 +0x223:  mov    %edx,0x4(%esp)
084da94d +0x227:  mov    %eax,(%esp)
084da950 +0x22a:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
084da955 +0x22f:  jmp    084da972 <+0x24c>
084da957 +0x231:  mov    %edx,%ebx
084da959 +0x233:  mov    %eax,%esi
084da95b +0x235:  lea    -0x3c(%ebp),%eax
084da95e +0x238:  mov    %eax,(%esp)
084da961 +0x23b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da966 +0x240:  mov    %esi,%eax
084da968 +0x242:  mov    %ebx,%edx
084da96a +0x244:  mov    %eax,(%esp)
084da96d +0x247:  call   08ae3750 <_Unwind_Resume>
084da972 +0x24c:  lea    -0x3c(%ebp),%eax
084da975 +0x24f:  mov    %eax,(%esp)
084da978 +0x252:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084da97d +0x257:  mov    $0x0,%eax
084da982 +0x25c:  add    $0x8c,%esp
084da988 +0x262:  pop    %ebx
084da989 +0x263:  pop    %esi
084da98a +0x264:  pop    %edi
084da98b +0x265:  pop    %ebp
084da98c +0x266:  ret
084da98d +0x267:  nop
```

## 反编译 C

```c
// Inter_NoticeServerMessageInfo::dispatch_sig @ 0x84da726

/* Inter_NoticeServerMessageInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeServerMessageInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CGameManager *this;
  CEnvironment *this_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  GameWorld *this_01;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  int local_24;
  CSharedServerMessageManager *local_20;
  
  local_24 = param_3;
  this = (CGameManager *)G_CGameManager();
  local_20 = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this);
  if (local_20 != (CSharedServerMessageManager *)0x0) {
    bVar1 = *(byte *)(local_24 + 10);
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this_00);
    if (bVar1 != uVar7) {
      CSharedServerMessageManager::UpdateServerMessageByBroadcast
                (local_20,(uint)*(byte *)(local_24 + 0xc),(char *)(local_24 + 0x11),
                 (char *)(local_24 + 0x47),*(int *)(local_24 + 0x5b));
    }
    uVar4 = *(undefined4 *)(local_24 + 0x5b);
    iVar8 = local_24 + 0x47;
    uVar5 = *(undefined4 *)(local_24 + 0x43);
    iVar9 = local_24 + 0x11;
    uVar6 = *(undefined4 *)(local_24 + 0xd);
    bVar1 = *(byte *)(local_24 + 0xc);
    bVar2 = *(byte *)(local_24 + 0xb);
    bVar3 = *(byte *)(local_24 + 10);
    cMyTrace::cMyTrace(local_34,
                       "virtual int Inter_NoticeServerMessageInfo::dispatch_sig(CUser*, char*, int)"
                       ,0x42be,0);
    cMyTrace::operator()
              (local_34,
               "SERVER_MESSAGE : Recv ServerMessage from monitor server(source_channel:%d, kind:%d, index:%d, msg_len:%d, msg:%s, name_len:%d, name:%s, time:%d"
               ,(uint)bVar3,(uint)bVar2,(uint)bVar1,uVar6,iVar9,uVar5,iVar8,uVar4);
  }
  PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084da87a to 084da954 has its CatchHandler @ 084da957 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xc0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)*(byte *)(local_24 + 0xc));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(local_24 + 0xd));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_40,(char *)(local_24 + 0x11),*(int *)(local_24 + 0xd));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(local_24 + 0x43));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_40,(char *)(local_24 + 0x47),*(int *)(local_24 + 0x43));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
  this_01 = (GameWorld *)G_GameWorld();
  GameWorld::send_all_with_state(this_01,local_40,3);
  PacketGuard::~PacketGuard(local_40);
  return 0;
}
```
