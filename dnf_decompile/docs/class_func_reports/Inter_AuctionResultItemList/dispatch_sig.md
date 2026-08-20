# dispatch_sig

`_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci`

`Inter_AuctionResultItemList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultItemList` | `0x084d75bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d75bc  _ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci
#           Inter_AuctionResultItemList::dispatch_sig(CUser*, char*, int)
# range [0x084d75bc, 0x084d7757]
084d75bc +0x000:  push   %ebp
084d75bd +0x001:  mov    %esp,%ebp
084d75bf +0x003:  push   %esi
084d75c0 +0x004:  push   %ebx
084d75c1 +0x005:  sub    $0x40,%esp
084d75c4 +0x008:  cmpl   $0x0,0xc(%ebp)
084d75c8 +0x00c:  jne    084d75d4 <+0x18>
084d75ca +0x00e:  mov    $0x0,%eax
084d75cf +0x013:  jmp    084d7750 <+0x194>
084d75d4 +0x018:  mov    0x14(%ebp),%eax
084d75d7 +0x01b:  cmp    $0x3,%eax
084d75da +0x01e:  jbe    084d774b <+0x18f>
084d75e0 +0x024:  movl   $0x4,0x8(%esp)
084d75e8 +0x02c:  mov    0x10(%ebp),%eax
084d75eb +0x02f:  mov    %eax,0x4(%esp)
084d75ef +0x033:  lea    -0x20(%ebp),%eax
084d75f2 +0x036:  mov    %eax,(%esp)
084d75f5 +0x039:  call   0807d8a0 <_init+0x198>
084d75fa +0x03e:  mov    -0x20(%ebp),%eax
084d75fd +0x041:  mov    %eax,%ebx
084d75ff +0x043:  mov    0xc(%ebp),%eax
084d7602 +0x046:  mov    %eax,(%esp)
084d7605 +0x049:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d760a +0x04e:  cmp    %eax,%ebx
084d760c +0x050:  setne  %al
084d760f +0x053:  test   %al,%al
084d7611 +0x055:  je     084d761d <+0x61>
084d7613 +0x057:  mov    $0x0,%eax
084d7618 +0x05c:  jmp    084d7750 <+0x194>
084d761d +0x061:  movl   $0x0,-0xc(%ebp)
084d7624 +0x068:  jmp    084d769b <+0xdf>
084d7626 +0x06a:  mov    -0xc(%ebp),%eax
084d7629 +0x06d:  mov    &_ZL6gmList(,%eax,4),%eax
084d7630 +0x074:  mov    %eax,%ebx
084d7632 +0x076:  mov    0xc(%ebp),%eax
084d7635 +0x079:  mov    %eax,(%esp)
084d7638 +0x07c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d763d +0x081:  cmp    %eax,%ebx
084d763f +0x083:  sete   %al
084d7642 +0x086:  test   %al,%al
084d7644 +0x088:  je     084d7697 <+0xdb>
084d7646 +0x08a:  mov    0xc(%ebp),%eax
084d7649 +0x08d:  mov    %eax,(%esp)
084d764c +0x090:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d7651 +0x095:  mov    %eax,%ebx
084d7653 +0x097:  movl   $0x0,0xc(%esp)
084d765b +0x09f:  movl   $0x3cab,0x8(%esp)
084d7663 +0x0a7:  movl   $&_ZZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d766b +0x0af:  lea    -0x1c(%ebp),%eax
084d766e +0x0b2:  mov    %eax,(%esp)
084d7671 +0x0b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d7676 +0x0ba:  mov    %ebx,0xc(%esp)
084d767a +0x0be:  movl   $"ACK AuctionResultItemList",0x8(%esp)
084d7682 +0x0c6:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d768a +0x0ce:  lea    -0x1c(%ebp),%eax
084d768d +0x0d1:  mov    %eax,(%esp)
084d7690 +0x0d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d7695 +0x0d9:  jmp    084d76a6 <+0xea>
084d7697 +0x0db:  addl   $0x1,-0xc(%ebp)
084d769b +0x0df:  cmpl   $0x4,-0xc(%ebp)
084d769f +0x0e3:  setle  %al
084d76a2 +0x0e6:  test   %al,%al
084d76a4 +0x0e8:  jne    084d7626 <+0x6a>
084d76a6 +0x0ea:  lea    -0x2c(%ebp),%eax
084d76a9 +0x0ed:  mov    %eax,(%esp)
084d76ac +0x0f0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d76b1 +0x0f5:  movl   $0xbd,0x8(%esp)
084d76b9 +0x0fd:  movl   $0x1,0x4(%esp)
084d76c1 +0x105:  lea    -0x2c(%ebp),%eax
084d76c4 +0x108:  mov    %eax,(%esp)
084d76c7 +0x10b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d76cc +0x110:  movl   $0x1,0x4(%esp)
084d76d4 +0x118:  lea    -0x2c(%ebp),%eax
084d76d7 +0x11b:  mov    %eax,(%esp)
084d76da +0x11e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d76df +0x123:  mov    0x14(%ebp),%eax
084d76e2 +0x126:  sub    $0x4,%eax
084d76e5 +0x129:  mov    0x10(%ebp),%edx
084d76e8 +0x12c:  add    $0x4,%edx
084d76eb +0x12f:  mov    %eax,0x8(%esp)
084d76ef +0x133:  mov    %edx,0x4(%esp)
084d76f3 +0x137:  lea    -0x2c(%ebp),%eax
084d76f6 +0x13a:  mov    %eax,(%esp)
084d76f9 +0x13d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084d76fe +0x142:  movl   $0x1,0x4(%esp)
084d7706 +0x14a:  lea    -0x2c(%ebp),%eax
084d7709 +0x14d:  mov    %eax,(%esp)
084d770c +0x150:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d7711 +0x155:  lea    -0x2c(%ebp),%eax
084d7714 +0x158:  mov    %eax,0x4(%esp)
084d7718 +0x15c:  mov    0xc(%ebp),%eax
084d771b +0x15f:  mov    %eax,(%esp)
084d771e +0x162:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d7723 +0x167:  jmp    084d7740 <+0x184>
084d7725 +0x169:  mov    %edx,%ebx
084d7727 +0x16b:  mov    %eax,%esi
084d7729 +0x16d:  lea    -0x2c(%ebp),%eax
084d772c +0x170:  mov    %eax,(%esp)
084d772f +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d7734 +0x178:  mov    %esi,%eax
084d7736 +0x17a:  mov    %ebx,%edx
084d7738 +0x17c:  mov    %eax,(%esp)
084d773b +0x17f:  call   08ae3750 <_Unwind_Resume>
084d7740 +0x184:  lea    -0x2c(%ebp),%eax
084d7743 +0x187:  mov    %eax,(%esp)
084d7746 +0x18a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d774b +0x18f:  mov    $0x0,%eax
084d7750 +0x194:  add    $0x40,%esp
084d7753 +0x197:  pop    %ebx
084d7754 +0x198:  pop    %esi
084d7755 +0x199:  pop    %ebp
084d7756 +0x19a:  ret
084d7757 +0x19b:  nop
```

## 反编译 C

```c
// Inter_AuctionResultItemList::dispatch_sig @ 0x84d75bc

/* Inter_AuctionResultItemList::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_AuctionResultItemList::dispatch_sig
          (Inter_AuctionResultItemList *this,CUser *param_1,char *param_2,int param_3)

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
                             "virtual int Inter_AuctionResultItemList::dispatch_sig(CUser*, char*, int)"
                             ,0x3cab,0);
          cMyTrace::operator()
                    (local_20,"Trace Auction Delay, %s(%d)","ACK AuctionResultItemList",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d76c7 to 084d7722 has its CatchHandler @ 084d7725 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xbd);
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
