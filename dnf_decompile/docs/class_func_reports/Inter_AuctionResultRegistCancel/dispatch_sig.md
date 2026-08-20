# dispatch_sig

`_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci`

`Inter_AuctionResultRegistCancel::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultRegistCancel` | `0x084d741c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d741c  _ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci
#           Inter_AuctionResultRegistCancel::dispatch_sig(CUser*, char*, int)
# range [0x084d741c, 0x084d75bb]
084d741c +0x000:  push   %ebp
084d741d +0x001:  mov    %esp,%ebp
084d741f +0x003:  push   %esi
084d7420 +0x004:  push   %ebx
084d7421 +0x005:  sub    $0x40,%esp
084d7424 +0x008:  cmpl   $0x0,0xc(%ebp)
084d7428 +0x00c:  jne    084d7434 <+0x18>
084d742a +0x00e:  mov    $0x0,%ebx
084d742f +0x013:  jmp    084d75b2 <+0x196>
084d7434 +0x018:  mov    0x10(%ebp),%eax
084d7437 +0x01b:  mov    %eax,-0x10(%ebp)
084d743a +0x01e:  mov    -0x10(%ebp),%eax
084d743d +0x021:  mov    0x4(%eax),%eax
084d7440 +0x024:  mov    %eax,%ebx
084d7442 +0x026:  mov    0xc(%ebp),%eax
084d7445 +0x029:  mov    %eax,(%esp)
084d7448 +0x02c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d744d +0x031:  cmp    %eax,%ebx
084d744f +0x033:  setne  %al
084d7452 +0x036:  test   %al,%al
084d7454 +0x038:  je     084d7460 <+0x44>
084d7456 +0x03a:  mov    $0x0,%ebx
084d745b +0x03f:  jmp    084d75b2 <+0x196>
084d7460 +0x044:  movl   $0x0,-0xc(%ebp)
084d7467 +0x04b:  jmp    084d74de <+0xc2>
084d7469 +0x04d:  mov    -0xc(%ebp),%eax
084d746c +0x050:  mov    &_ZL6gmList(,%eax,4),%eax
084d7473 +0x057:  mov    %eax,%ebx
084d7475 +0x059:  mov    0xc(%ebp),%eax
084d7478 +0x05c:  mov    %eax,(%esp)
084d747b +0x05f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7480 +0x064:  cmp    %eax,%ebx
084d7482 +0x066:  sete   %al
084d7485 +0x069:  test   %al,%al
084d7487 +0x06b:  je     084d74da <+0xbe>
084d7489 +0x06d:  mov    0xc(%ebp),%eax
084d748c +0x070:  mov    %eax,(%esp)
084d748f +0x073:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7494 +0x078:  mov    %eax,%ebx
084d7496 +0x07a:  movl   $0x0,0xc(%esp)
084d749e +0x082:  movl   $0x3c88,0x8(%esp)
084d74a6 +0x08a:  movl   $&_ZZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d74ae +0x092:  lea    -0x20(%ebp),%eax
084d74b1 +0x095:  mov    %eax,(%esp)
084d74b4 +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d74b9 +0x09d:  mov    %ebx,0xc(%esp)
084d74bd +0x0a1:  movl   $"ACK AuctionResultRegistCancel",0x8(%esp)
084d74c5 +0x0a9:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d74cd +0x0b1:  lea    -0x20(%ebp),%eax
084d74d0 +0x0b4:  mov    %eax,(%esp)
084d74d3 +0x0b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d74d8 +0x0bc:  jmp    084d74e9 <+0xcd>
084d74da +0x0be:  addl   $0x1,-0xc(%ebp)
084d74de +0x0c2:  cmpl   $0x4,-0xc(%ebp)
084d74e2 +0x0c6:  setle  %al
084d74e5 +0x0c9:  test   %al,%al
084d74e7 +0x0cb:  jne    084d7469 <+0x4d>
084d74e9 +0x0cd:  lea    -0x2c(%ebp),%eax
084d74ec +0x0d0:  mov    %eax,(%esp)
084d74ef +0x0d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d74f4 +0x0d8:  movl   $0xbb,0x8(%esp)
084d74fc +0x0e0:  movl   $0x1,0x4(%esp)
084d7504 +0x0e8:  lea    -0x2c(%ebp),%eax
084d7507 +0x0eb:  mov    %eax,(%esp)
084d750a +0x0ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d750f +0x0f3:  mov    -0x10(%ebp),%eax
084d7512 +0x0f6:  movzbl 0x8(%eax),%eax
084d7516 +0x0fa:  movzbl %al,%eax
084d7519 +0x0fd:  mov    %eax,0x4(%esp)
084d751d +0x101:  lea    -0x2c(%ebp),%eax
084d7520 +0x104:  mov    %eax,(%esp)
084d7523 +0x107:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7528 +0x10c:  mov    -0x10(%ebp),%eax
084d752b +0x10f:  movzbl 0x8(%eax),%eax
084d752f +0x113:  test   %al,%al
084d7531 +0x115:  jne    084d754c <+0x130>
084d7533 +0x117:  mov    -0x10(%ebp),%eax
084d7536 +0x11a:  movzbl 0x9(%eax),%eax
084d753a +0x11e:  movzbl %al,%eax
084d753d +0x121:  mov    %eax,0x4(%esp)
084d7541 +0x125:  lea    -0x2c(%ebp),%eax
084d7544 +0x128:  mov    %eax,(%esp)
084d7547 +0x12b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d754c +0x130:  mov    -0x10(%ebp),%eax
084d754f +0x133:  mov    (%eax),%eax
084d7551 +0x135:  mov    %eax,0x4(%esp)
084d7555 +0x139:  lea    -0x2c(%ebp),%eax
084d7558 +0x13c:  mov    %eax,(%esp)
084d755b +0x13f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7560 +0x144:  movl   $0x1,0x4(%esp)
084d7568 +0x14c:  lea    -0x2c(%ebp),%eax
084d756b +0x14f:  mov    %eax,(%esp)
084d756e +0x152:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d7573 +0x157:  lea    -0x2c(%ebp),%eax
084d7576 +0x15a:  mov    %eax,0x4(%esp)
084d757a +0x15e:  mov    0xc(%ebp),%eax
084d757d +0x161:  mov    %eax,(%esp)
084d7580 +0x164:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d7585 +0x169:  mov    $0x0,%ebx
084d758a +0x16e:  lea    -0x2c(%ebp),%eax
084d758d +0x171:  mov    %eax,(%esp)
084d7590 +0x174:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7595 +0x179:  jmp    084d75b2 <+0x196>
084d7597 +0x17b:  mov    %edx,%ebx
084d7599 +0x17d:  mov    %eax,%esi
084d759b +0x17f:  lea    -0x2c(%ebp),%eax
084d759e +0x182:  mov    %eax,(%esp)
084d75a1 +0x185:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d75a6 +0x18a:  mov    %esi,%eax
084d75a8 +0x18c:  mov    %ebx,%edx
084d75aa +0x18e:  mov    %eax,(%esp)
084d75ad +0x191:  call   08ae3750 <_Unwind_Resume>
084d75b2 +0x196:  mov    %ebx,%eax
084d75b4 +0x198:  add    $0x40,%esp
084d75b7 +0x19b:  pop    %ebx
084d75b8 +0x19c:  pop    %esi
084d75b9 +0x19d:  pop    %ebp
084d75ba +0x19e:  ret
084d75bb +0x19f:  nop
```

## 反编译 C

```c
// Inter_AuctionResultRegistCancel::dispatch_sig @ 0x84d741c

/* Inter_AuctionResultRegistCancel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultRegistCancel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int *local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_14 = (int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        iVar1 = *(int *)(gmList + local_10 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_24,
                             "virtual int Inter_AuctionResultRegistCancel::dispatch_sig(CUser*, char*, int)"
                             ,0x3c88,0);
          cMyTrace::operator()
                    (local_24,"Trace Auction Delay, %s(%d)","ACK AuctionResultRegistCancel",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d750a to 084d7584 has its CatchHandler @ 084d7597 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xbb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_14 + 2));
      if ((char)local_14[2] == '\0') {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_30,(uint)*(byte *)((int)local_14 + 9));
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}
```
