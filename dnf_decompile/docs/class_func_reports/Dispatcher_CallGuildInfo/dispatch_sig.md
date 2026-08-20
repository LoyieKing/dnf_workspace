# dispatch_sig

`_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildInfo` | `0x08200448` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08200448  _ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08200448, 0x082006cf]
08200448 +0x000:  push   %ebp
08200449 +0x001:  mov    %esp,%ebp
0820044b +0x003:  push   %edi
0820044c +0x004:  push   %esi
0820044d +0x005:  push   %ebx
0820044e +0x006:  sub    $0x1bc,%esp
08200454 +0x00c:  mov    0xc(%ebp),%eax
08200457 +0x00f:  mov    %eax,(%esp)
0820045a +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820045f +0x017:  cmp    $0x2,%eax
08200462 +0x01a:  jle    08200473 <+0x2b>
08200464 +0x01c:  mov    0xc(%ebp),%eax
08200467 +0x01f:  mov    %eax,(%esp)
0820046a +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820046f +0x027:  test   %eax,%eax
08200471 +0x029:  jne    0820047a <+0x32>
08200473 +0x02b:  mov    $0x1,%eax
08200478 +0x030:  jmp    0820047f <+0x37>
0820047a +0x032:  mov    $0x0,%eax
0820047f +0x037:  test   %al,%al
08200481 +0x039:  je     082004ae <+0x66>
08200483 +0x03b:  movl   $0x0,0xc(%esp)
0820048b +0x043:  movl   $0x0,0x8(%esp)
08200493 +0x04b:  movl   $&_ZZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820049b +0x053:  movl   $0x94e7,(%esp)
082004a2 +0x05a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082004a7 +0x05f:  mov    %eax,%ebx
082004a9 +0x061:  jmp    082006c3 <+0x27b>
082004ae +0x066:  lea    -0x1d(%ebp),%eax
082004b1 +0x069:  mov    %eax,0x4(%esp)
082004b5 +0x06d:  mov    0x10(%ebp),%eax
082004b8 +0x070:  mov    %eax,(%esp)
082004bb +0x073:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082004c0 +0x078:  xor    $0x1,%eax
082004c3 +0x07b:  test   %al,%al
082004c5 +0x07d:  je     082004f2 <+0xaa>
082004c7 +0x07f:  movl   $0x0,0xc(%esp)
082004cf +0x087:  movl   $0x0,0x8(%esp)
082004d7 +0x08f:  movl   $&_ZZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082004df +0x097:  movl   $0x94ec,(%esp)
082004e6 +0x09e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082004eb +0x0a3:  mov    %eax,%ebx
082004ed +0x0a5:  jmp    082006c3 <+0x27b>
082004f2 +0x0aa:  movzbl -0x1d(%ebp),%eax
082004f6 +0x0ae:  cmp    $0x5f,%al
082004f8 +0x0b0:  jbe    08200525 <+0xdd>
082004fa +0x0b2:  movl   $0x0,0xc(%esp)
08200502 +0x0ba:  movl   $0x0,0x8(%esp)
0820050a +0x0c2:  movl   $&_ZZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200512 +0x0ca:  movl   $0x94f0,(%esp)
08200519 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820051e +0x0d6:  mov    %eax,%ebx
08200520 +0x0d8:  jmp    082006c3 <+0x27b>
08200525 +0x0dd:  lea    -0x1a8(%ebp),%ebx
0820052b +0x0e3:  mov    $0x0,%eax
08200530 +0x0e8:  mov    $0x5f,%edx
08200535 +0x0ed:  mov    %ebx,%edi
08200537 +0x0ef:  mov    %edx,%ecx
08200539 +0x0f1:  rep stos %eax,%es:(%edi)
0820053b +0x0f3:  movl   $0x0,-0x1c(%ebp)
08200542 +0x0fa:  jmp    0820064d <+0x205>
08200547 +0x0ff:  mov    -0x1c(%ebp),%edx
0820054a +0x102:  lea    -0x1a8(%ebp),%eax
08200550 +0x108:  shl    $0x2,%edx
08200553 +0x10b:  add    %edx,%eax
08200555 +0x10d:  mov    %eax,0x4(%esp)
08200559 +0x111:  mov    0x10(%ebp),%eax
0820055c +0x114:  mov    %eax,(%esp)
0820055f +0x117:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08200564 +0x11c:  xor    $0x1,%eax
08200567 +0x11f:  test   %al,%al
08200569 +0x121:  je     08200596 <+0x14e>
0820056b +0x123:  movl   $0x0,0xc(%esp)
08200573 +0x12b:  movl   $0x0,0x8(%esp)
0820057b +0x133:  movl   $&_ZZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200583 +0x13b:  movl   $0x94f7,(%esp)
0820058a +0x142:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820058f +0x147:  mov    %eax,%ebx
08200591 +0x149:  jmp    082006c3 <+0x27b>
08200596 +0x14e:  mov    -0x1c(%ebp),%eax
08200599 +0x151:  mov    -0x1a8(%ebp,%eax,4),%eax
082005a0 +0x158:  test   %eax,%eax
082005a2 +0x15a:  jne    08200649 <+0x201>
082005a8 +0x160:  lea    -0x2c(%ebp),%eax
082005ab +0x163:  mov    %eax,(%esp)
082005ae +0x166:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082005b3 +0x16b:  movl   $0x4d,0x8(%esp)
082005bb +0x173:  movl   $0x1,0x4(%esp)
082005c3 +0x17b:  lea    -0x2c(%ebp),%eax
082005c6 +0x17e:  mov    %eax,(%esp)
082005c9 +0x181:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082005ce +0x186:  movl   $0x0,0x4(%esp)
082005d6 +0x18e:  lea    -0x2c(%ebp),%eax
082005d9 +0x191:  mov    %eax,(%esp)
082005dc +0x194:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082005e1 +0x199:  movl   $0x22,0x4(%esp)
082005e9 +0x1a1:  lea    -0x2c(%ebp),%eax
082005ec +0x1a4:  mov    %eax,(%esp)
082005ef +0x1a7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082005f4 +0x1ac:  movl   $0x1,0x4(%esp)
082005fc +0x1b4:  lea    -0x2c(%ebp),%eax
082005ff +0x1b7:  mov    %eax,(%esp)
08200602 +0x1ba:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08200607 +0x1bf:  lea    -0x2c(%ebp),%eax
0820060a +0x1c2:  mov    %eax,0x4(%esp)
0820060e +0x1c6:  mov    0xc(%ebp),%eax
08200611 +0x1c9:  mov    %eax,(%esp)
08200614 +0x1cc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08200619 +0x1d1:  mov    $0x0,%ebx
0820061e +0x1d6:  lea    -0x2c(%ebp),%eax
08200621 +0x1d9:  mov    %eax,(%esp)
08200624 +0x1dc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08200629 +0x1e1:  jmp    082006c3 <+0x27b>
0820062e +0x1e6:  mov    %edx,%ebx
08200630 +0x1e8:  mov    %eax,%esi
08200632 +0x1ea:  lea    -0x2c(%ebp),%eax
08200635 +0x1ed:  mov    %eax,(%esp)
08200638 +0x1f0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820063d +0x1f5:  mov    %esi,%eax
0820063f +0x1f7:  mov    %ebx,%edx
08200641 +0x1f9:  mov    %eax,(%esp)
08200644 +0x1fc:  call   08ae3750 <_Unwind_Resume>
08200649 +0x201:  addl   $0x1,-0x1c(%ebp)
0820064d +0x205:  movzbl -0x1d(%ebp),%eax
08200651 +0x209:  movzbl %al,%eax
08200654 +0x20c:  cmp    -0x1c(%ebp),%eax
08200657 +0x20f:  setg   %al
0820065a +0x212:  test   %al,%al
0820065c +0x214:  jne    08200547 <+0xff>
08200662 +0x21a:  movzbl -0x1d(%ebp),%eax
08200666 +0x21e:  movzbl %al,%edi
08200669 +0x221:  mov    0xc(%ebp),%eax
0820066c +0x224:  mov    %eax,(%esp)
0820066f +0x227:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08200674 +0x22c:  mov    %eax,%esi
08200676 +0x22e:  mov    0xc(%ebp),%eax
08200679 +0x231:  mov    %eax,(%esp)
0820067c +0x234:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08200681 +0x239:  mov    %eax,%ebx
08200683 +0x23b:  mov    0xc(%ebp),%eax
08200686 +0x23e:  mov    %eax,(%esp)
08200689 +0x241:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0820068e +0x246:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08200694 +0x24c:  mov    %eax,0x4(%esp)
08200698 +0x250:  mov    %edx,(%esp)
0820069b +0x253:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
082006a0 +0x258:  lea    -0x1a8(%ebp),%edx
082006a6 +0x25e:  mov    %edx,0x10(%esp)
082006aa +0x262:  mov    %edi,0xc(%esp)
082006ae +0x266:  mov    %esi,0x8(%esp)
082006b2 +0x26a:  mov    %ebx,0x4(%esp)
082006b6 +0x26e:  mov    %eax,(%esp)
082006b9 +0x271:  call   0846ddd2 <_ZN17CGuildServerProxy17SendCallGuildInfoEjjhPj>  ; CGuildServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)
082006be +0x276:  mov    $0x0,%ebx
082006c3 +0x27b:  mov    %ebx,%eax
082006c5 +0x27d:  add    $0x1bc,%esp
082006cb +0x283:  pop    %ebx
082006cc +0x284:  pop    %esi
082006cd +0x285:  pop    %edi
082006ce +0x286:  pop    %ebp
082006cf +0x287:  ret
```

## 反编译 C

```c
// Dispatcher_CallGuildInfo::dispatch_sig @ 0x8200448

/* Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CallGuildInfo::dispatch_sig
          (Dispatcher_CallGuildInfo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  CGuildServerProxy *this_00;
  uint *puVar7;
  byte bVar8;
  uint local_1ac [95];
  PacketGuard local_30 [15];
  byte local_21;
  int local_20;
  
  bVar8 = 0;
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x94e7,"virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,&local_21);
    if (cVar2 == '\x01') {
      if (local_21 < 0x60) {
        puVar7 = local_1ac;
        for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (local_20 = 0; local_20 < (int)(uint)local_21; local_20 = local_20 + 1) {
          cVar2 = PacketBuf::get_int(param_2,local_1ac + local_20);
          if (cVar2 != '\x01') {
            uVar4 = LineFunc(0x94f7,
                             "virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar4;
          }
          if (local_1ac[local_20] == 0) {
            PacketGuard::PacketGuard(local_30);
                    /* try { // try from 082005c9 to 08200618 has its CatchHandler @ 0820062e */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x4d);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x22);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
            CUser::Send(param_1,local_30);
            PacketGuard::~PacketGuard(local_30);
            return 0;
          }
        }
        uVar5 = CUser::GetUID(param_1);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = CUser::GetServerGroup(param_1);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar4);
        CGuildServerProxy::SendCallGuildInfo(this_00,uVar6,uVar5,local_21,local_1ac);
        uVar4 = 0;
      }
      else {
        uVar4 = LineFunc(0x94f0,
                         "virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar4 = LineFunc(0x94ec,
                       "virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  return uVar4;
}
```
