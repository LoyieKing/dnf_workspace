# dispatch_sig

`_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci`

`Inter_AuctionResultMyBidding::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultMyBidding` | `0x084d78f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d78f4  _ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci
#           Inter_AuctionResultMyBidding::dispatch_sig(CUser*, char*, int)
# range [0x084d78f4, 0x084d7a8f]
084d78f4 +0x000:  push   %ebp
084d78f5 +0x001:  mov    %esp,%ebp
084d78f7 +0x003:  push   %esi
084d78f8 +0x004:  push   %ebx
084d78f9 +0x005:  sub    $0x40,%esp
084d78fc +0x008:  cmpl   $0x0,0xc(%ebp)
084d7900 +0x00c:  jne    084d790c <+0x18>
084d7902 +0x00e:  mov    $0x0,%eax
084d7907 +0x013:  jmp    084d7a88 <+0x194>
084d790c +0x018:  mov    0x14(%ebp),%eax
084d790f +0x01b:  cmp    $0x3,%eax
084d7912 +0x01e:  jbe    084d7a83 <+0x18f>
084d7918 +0x024:  movl   $0x4,0x8(%esp)
084d7920 +0x02c:  mov    0x10(%ebp),%eax
084d7923 +0x02f:  mov    %eax,0x4(%esp)
084d7927 +0x033:  lea    -0x20(%ebp),%eax
084d792a +0x036:  mov    %eax,(%esp)
084d792d +0x039:  call   0807d8a0 <_init+0x198>
084d7932 +0x03e:  mov    -0x20(%ebp),%eax
084d7935 +0x041:  mov    %eax,%ebx
084d7937 +0x043:  mov    0xc(%ebp),%eax
084d793a +0x046:  mov    %eax,(%esp)
084d793d +0x049:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7942 +0x04e:  cmp    %eax,%ebx
084d7944 +0x050:  setne  %al
084d7947 +0x053:  test   %al,%al
084d7949 +0x055:  je     084d7955 <+0x61>
084d794b +0x057:  mov    $0x0,%eax
084d7950 +0x05c:  jmp    084d7a88 <+0x194>
084d7955 +0x061:  movl   $0x0,-0xc(%ebp)
084d795c +0x068:  jmp    084d79d3 <+0xdf>
084d795e +0x06a:  mov    -0xc(%ebp),%eax
084d7961 +0x06d:  mov    &_ZL6gmList(,%eax,4),%eax
084d7968 +0x074:  mov    %eax,%ebx
084d796a +0x076:  mov    0xc(%ebp),%eax
084d796d +0x079:  mov    %eax,(%esp)
084d7970 +0x07c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7975 +0x081:  cmp    %eax,%ebx
084d7977 +0x083:  sete   %al
084d797a +0x086:  test   %al,%al
084d797c +0x088:  je     084d79cf <+0xdb>
084d797e +0x08a:  mov    0xc(%ebp),%eax
084d7981 +0x08d:  mov    %eax,(%esp)
084d7984 +0x090:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7989 +0x095:  mov    %eax,%ebx
084d798b +0x097:  movl   $0x0,0xc(%esp)
084d7993 +0x09f:  movl   $0x3d31,0x8(%esp)
084d799b +0x0a7:  movl   $&_ZZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d79a3 +0x0af:  lea    -0x1c(%ebp),%eax
084d79a6 +0x0b2:  mov    %eax,(%esp)
084d79a9 +0x0b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d79ae +0x0ba:  mov    %ebx,0xc(%esp)
084d79b2 +0x0be:  movl   $"ACK AuctionResultMyBidding",0x8(%esp)
084d79ba +0x0c6:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d79c2 +0x0ce:  lea    -0x1c(%ebp),%eax
084d79c5 +0x0d1:  mov    %eax,(%esp)
084d79c8 +0x0d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d79cd +0x0d9:  jmp    084d79de <+0xea>
084d79cf +0x0db:  addl   $0x1,-0xc(%ebp)
084d79d3 +0x0df:  cmpl   $0x4,-0xc(%ebp)
084d79d7 +0x0e3:  setle  %al
084d79da +0x0e6:  test   %al,%al
084d79dc +0x0e8:  jne    084d795e <+0x6a>
084d79de +0x0ea:  lea    -0x2c(%ebp),%eax
084d79e1 +0x0ed:  mov    %eax,(%esp)
084d79e4 +0x0f0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d79e9 +0x0f5:  movl   $0xc0,0x8(%esp)
084d79f1 +0x0fd:  movl   $0x1,0x4(%esp)
084d79f9 +0x105:  lea    -0x2c(%ebp),%eax
084d79fc +0x108:  mov    %eax,(%esp)
084d79ff +0x10b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d7a04 +0x110:  movl   $0x1,0x4(%esp)
084d7a0c +0x118:  lea    -0x2c(%ebp),%eax
084d7a0f +0x11b:  mov    %eax,(%esp)
084d7a12 +0x11e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d7a17 +0x123:  mov    0x14(%ebp),%eax
084d7a1a +0x126:  sub    $0x4,%eax
084d7a1d +0x129:  mov    0x10(%ebp),%edx
084d7a20 +0x12c:  add    $0x4,%edx
084d7a23 +0x12f:  mov    %eax,0x8(%esp)
084d7a27 +0x133:  mov    %edx,0x4(%esp)
084d7a2b +0x137:  lea    -0x2c(%ebp),%eax
084d7a2e +0x13a:  mov    %eax,(%esp)
084d7a31 +0x13d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084d7a36 +0x142:  movl   $0x1,0x4(%esp)
084d7a3e +0x14a:  lea    -0x2c(%ebp),%eax
084d7a41 +0x14d:  mov    %eax,(%esp)
084d7a44 +0x150:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d7a49 +0x155:  lea    -0x2c(%ebp),%eax
084d7a4c +0x158:  mov    %eax,0x4(%esp)
084d7a50 +0x15c:  mov    0xc(%ebp),%eax
084d7a53 +0x15f:  mov    %eax,(%esp)
084d7a56 +0x162:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d7a5b +0x167:  jmp    084d7a78 <+0x184>
084d7a5d +0x169:  mov    %edx,%ebx
084d7a5f +0x16b:  mov    %eax,%esi
084d7a61 +0x16d:  lea    -0x2c(%ebp),%eax
084d7a64 +0x170:  mov    %eax,(%esp)
084d7a67 +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7a6c +0x178:  mov    %esi,%eax
084d7a6e +0x17a:  mov    %ebx,%edx
084d7a70 +0x17c:  mov    %eax,(%esp)
084d7a73 +0x17f:  call   08ae3750 <_Unwind_Resume>
084d7a78 +0x184:  lea    -0x2c(%ebp),%eax
084d7a7b +0x187:  mov    %eax,(%esp)
084d7a7e +0x18a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7a83 +0x18f:  mov    $0x0,%eax
084d7a88 +0x194:  add    $0x40,%esp
084d7a8b +0x197:  pop    %ebx
084d7a8c +0x198:  pop    %esi
084d7a8d +0x199:  pop    %ebp
084d7a8e +0x19a:  ret
084d7a8f +0x19b:  nop
```

## 反编译 C

```c
// Inter_AuctionResultMyBidding::dispatch_sig @ 0x84d78f4

/* Inter_AuctionResultMyBidding::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_AuctionResultMyBidding::dispatch_sig
          (Inter_AuctionResultMyBidding *this,CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  int local_24;
  cMyTrace local_20 [16];
  int local_10;
  
  if ((param_1 != (CUser *)0x0) && (3 < (uint)param_3)) {
    memcpy(&local_24,param_2,4);
    iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if (local_24 == iVar1) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        iVar1 = *(int *)(gmList + local_10 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_20,
                             "virtual int Inter_AuctionResultMyBidding::dispatch_sig(CUser*, char*, int)"
                             ,0x3d31,0);
          cMyTrace::operator()
                    (local_20,"Trace Auction Delay, %s(%d)","ACK AuctionResultMyBidding",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d79ff to 084d7a5a has its CatchHandler @ 084d7a5d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xc0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_30,param_2 + 4,param_3 + -4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}
```
