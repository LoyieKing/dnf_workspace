# dispatch_sig

`_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci`

`Inter_AuctionResultAskPrice::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultAskPrice` | `0x084d5740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d5740  _ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci
#           Inter_AuctionResultAskPrice::dispatch_sig(CUser*, char*, int)
# range [0x084d5740, 0x084d592f]
084d5740 +0x000:  push   %ebp
084d5741 +0x001:  mov    %esp,%ebp
084d5743 +0x003:  push   %esi
084d5744 +0x004:  push   %ebx
084d5745 +0x005:  sub    $0x40,%esp
084d5748 +0x008:  cmpl   $0x0,0xc(%ebp)
084d574c +0x00c:  jne    084d5758 <+0x18>
084d574e +0x00e:  mov    $0x0,%ebx
084d5753 +0x013:  jmp    084d5926 <+0x1e6>
084d5758 +0x018:  mov    0x10(%ebp),%eax
084d575b +0x01b:  mov    %eax,-0x18(%ebp)
084d575e +0x01e:  mov    -0x18(%ebp),%eax
084d5761 +0x021:  mov    0x4(%eax),%eax
084d5764 +0x024:  mov    %eax,%ebx
084d5766 +0x026:  mov    0xc(%ebp),%eax
084d5769 +0x029:  mov    %eax,(%esp)
084d576c +0x02c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d5771 +0x031:  cmp    %eax,%ebx
084d5773 +0x033:  setne  %al
084d5776 +0x036:  test   %al,%al
084d5778 +0x038:  je     084d5784 <+0x44>
084d577a +0x03a:  mov    $0x0,%ebx
084d577f +0x03f:  jmp    084d5926 <+0x1e6>
084d5784 +0x044:  movl   $0x0,-0x14(%ebp)
084d578b +0x04b:  jmp    084d5802 <+0xc2>
084d578d +0x04d:  mov    -0x14(%ebp),%eax
084d5790 +0x050:  mov    &_ZL6gmList(,%eax,4),%eax
084d5797 +0x057:  mov    %eax,%ebx
084d5799 +0x059:  mov    0xc(%ebp),%eax
084d579c +0x05c:  mov    %eax,(%esp)
084d579f +0x05f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d57a4 +0x064:  cmp    %eax,%ebx
084d57a6 +0x066:  sete   %al
084d57a9 +0x069:  test   %al,%al
084d57ab +0x06b:  je     084d57fe <+0xbe>
084d57ad +0x06d:  mov    0xc(%ebp),%eax
084d57b0 +0x070:  mov    %eax,(%esp)
084d57b3 +0x073:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d57b8 +0x078:  mov    %eax,%ebx
084d57ba +0x07a:  movl   $0x0,0xc(%esp)
084d57c2 +0x082:  movl   $0x377c,0x8(%esp)
084d57ca +0x08a:  movl   $&_ZZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d57d2 +0x092:  lea    -0x28(%ebp),%eax
084d57d5 +0x095:  mov    %eax,(%esp)
084d57d8 +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d57dd +0x09d:  mov    %ebx,0xc(%esp)
084d57e1 +0x0a1:  movl   $"ACK AuctionResultAskPrice",0x8(%esp)
084d57e9 +0x0a9:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d57f1 +0x0b1:  lea    -0x28(%ebp),%eax
084d57f4 +0x0b4:  mov    %eax,(%esp)
084d57f7 +0x0b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d57fc +0x0bc:  jmp    084d580d <+0xcd>
084d57fe +0x0be:  addl   $0x1,-0x14(%ebp)
084d5802 +0x0c2:  cmpl   $0x4,-0x14(%ebp)
084d5806 +0x0c6:  setle  %al
084d5809 +0x0c9:  test   %al,%al
084d580b +0x0cb:  jne    084d578d <+0x4d>
084d580d +0x0cd:  lea    -0x34(%ebp),%eax
084d5810 +0x0d0:  mov    %eax,(%esp)
084d5813 +0x0d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d5818 +0x0d8:  movl   $0xb9,0x8(%esp)
084d5820 +0x0e0:  movl   $0x1,0x4(%esp)
084d5828 +0x0e8:  lea    -0x34(%ebp),%eax
084d582b +0x0eb:  mov    %eax,(%esp)
084d582e +0x0ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d5833 +0x0f3:  movl   $0x1,0x4(%esp)
084d583b +0x0fb:  lea    -0x34(%ebp),%eax
084d583e +0x0fe:  mov    %eax,(%esp)
084d5841 +0x101:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d5846 +0x106:  mov    -0x18(%ebp),%eax
084d5849 +0x109:  mov    (%eax),%eax
084d584b +0x10b:  mov    %eax,0x4(%esp)
084d584f +0x10f:  lea    -0x34(%ebp),%eax
084d5852 +0x112:  mov    %eax,(%esp)
084d5855 +0x115:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d585a +0x11a:  mov    -0x18(%ebp),%eax
084d585d +0x11d:  mov    0x8(%eax),%eax
084d5860 +0x120:  mov    %eax,0x4(%esp)
084d5864 +0x124:  lea    -0x34(%ebp),%eax
084d5867 +0x127:  mov    %eax,(%esp)
084d586a +0x12a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d586f +0x12f:  movl   $0x0,-0x10(%ebp)
084d5876 +0x136:  jmp    084d5895 <+0x155>
084d5878 +0x138:  mov    -0x10(%ebp),%edx
084d587b +0x13b:  mov    -0x18(%ebp),%eax
084d587e +0x13e:  mov    0xc(%eax,%edx,4),%eax
084d5882 +0x142:  mov    %eax,0x4(%esp)
084d5886 +0x146:  lea    -0x34(%ebp),%eax
084d5889 +0x149:  mov    %eax,(%esp)
084d588c +0x14c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d5891 +0x151:  addl   $0x1,-0x10(%ebp)
084d5895 +0x155:  cmpl   $0x2,-0x10(%ebp)
084d5899 +0x159:  setle  %al
084d589c +0x15c:  test   %al,%al
084d589e +0x15e:  jne    084d5878 <+0x138>
084d58a0 +0x160:  movl   $0x0,-0xc(%ebp)
084d58a7 +0x167:  jmp    084d58c9 <+0x189>
084d58a9 +0x169:  mov    -0xc(%ebp),%edx
084d58ac +0x16c:  mov    -0x18(%ebp),%eax
084d58af +0x16f:  add    $0x4,%edx
084d58b2 +0x172:  mov    0x8(%eax,%edx,4),%eax
084d58b6 +0x176:  mov    %eax,0x4(%esp)
084d58ba +0x17a:  lea    -0x34(%ebp),%eax
084d58bd +0x17d:  mov    %eax,(%esp)
084d58c0 +0x180:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d58c5 +0x185:  addl   $0x1,-0xc(%ebp)
084d58c9 +0x189:  cmpl   $0x2,-0xc(%ebp)
084d58cd +0x18d:  setle  %al
084d58d0 +0x190:  test   %al,%al
084d58d2 +0x192:  jne    084d58a9 <+0x169>
084d58d4 +0x194:  movl   $0x1,0x4(%esp)
084d58dc +0x19c:  lea    -0x34(%ebp),%eax
084d58df +0x19f:  mov    %eax,(%esp)
084d58e2 +0x1a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d58e7 +0x1a7:  lea    -0x34(%ebp),%eax
084d58ea +0x1aa:  mov    %eax,0x4(%esp)
084d58ee +0x1ae:  mov    0xc(%ebp),%eax
084d58f1 +0x1b1:  mov    %eax,(%esp)
084d58f4 +0x1b4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d58f9 +0x1b9:  mov    $0x0,%ebx
084d58fe +0x1be:  lea    -0x34(%ebp),%eax
084d5901 +0x1c1:  mov    %eax,(%esp)
084d5904 +0x1c4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d5909 +0x1c9:  jmp    084d5926 <+0x1e6>
084d590b +0x1cb:  mov    %edx,%ebx
084d590d +0x1cd:  mov    %eax,%esi
084d590f +0x1cf:  lea    -0x34(%ebp),%eax
084d5912 +0x1d2:  mov    %eax,(%esp)
084d5915 +0x1d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d591a +0x1da:  mov    %esi,%eax
084d591c +0x1dc:  mov    %ebx,%edx
084d591e +0x1de:  mov    %eax,(%esp)
084d5921 +0x1e1:  call   08ae3750 <_Unwind_Resume>
084d5926 +0x1e6:  mov    %ebx,%eax
084d5928 +0x1e8:  add    $0x40,%esp
084d592b +0x1eb:  pop    %ebx
084d592c +0x1ec:  pop    %esi
084d592d +0x1ed:  pop    %ebp
084d592e +0x1ee:  ret
084d592f +0x1ef:  nop
```

## 反编译 C

```c
// Inter_AuctionResultAskPrice::dispatch_sig @ 0x84d5740

/* Inter_AuctionResultAskPrice::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultAskPrice::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_38 [12];
  cMyTrace local_2c [16];
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_1c = (int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
        iVar1 = *(int *)(gmList + local_18 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_2c,
                             "virtual int Inter_AuctionResultAskPrice::dispatch_sig(CUser*, char*, int)"
                             ,0x377c,0);
          cMyTrace::operator()
                    (local_2c,"Trace Auction Delay, %s(%d)","ACK AuctionResultAskPrice",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_38);
                    /* try { // try from 084d582e to 084d58f8 has its CatchHandler @ 084d590b */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0xb9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*local_1c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_1c[2]);
      for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_1c[local_14 + 3]);
      }
      for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_1c[local_10 + 6]);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
      CUser::Send((CUser *)param_2,local_38);
      PacketGuard::~PacketGuard(local_38);
    }
  }
  return 0;
}
```
