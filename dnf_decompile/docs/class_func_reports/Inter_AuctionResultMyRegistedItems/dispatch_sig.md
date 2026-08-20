# dispatch_sig

`_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci`

`Inter_AuctionResultMyRegistedItems::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AuctionResultMyRegistedItems` | `0x084d7758` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d7758  _ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci
#           Inter_AuctionResultMyRegistedItems::dispatch_sig(CUser*, char*, int)
# range [0x084d7758, 0x084d78f3]
084d7758 +0x000:  push   %ebp
084d7759 +0x001:  mov    %esp,%ebp
084d775b +0x003:  push   %esi
084d775c +0x004:  push   %ebx
084d775d +0x005:  sub    $0x40,%esp
084d7760 +0x008:  cmpl   $0x0,0xc(%ebp)
084d7764 +0x00c:  jne    084d7770 <+0x18>
084d7766 +0x00e:  mov    $0x0,%eax
084d776b +0x013:  jmp    084d78ec <+0x194>
084d7770 +0x018:  mov    0x14(%ebp),%eax
084d7773 +0x01b:  cmp    $0x3,%eax
084d7776 +0x01e:  jbe    084d78e7 <+0x18f>
084d777c +0x024:  movl   $0x4,0x8(%esp)
084d7784 +0x02c:  mov    0x10(%ebp),%eax
084d7787 +0x02f:  mov    %eax,0x4(%esp)
084d778b +0x033:  lea    -0x20(%ebp),%eax
084d778e +0x036:  mov    %eax,(%esp)
084d7791 +0x039:  call   0807d8a0 <_init+0x198>
084d7796 +0x03e:  mov    -0x20(%ebp),%eax
084d7799 +0x041:  mov    %eax,%ebx
084d779b +0x043:  mov    0xc(%ebp),%eax
084d779e +0x046:  mov    %eax,(%esp)
084d77a1 +0x049:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d77a6 +0x04e:  cmp    %eax,%ebx
084d77a8 +0x050:  setne  %al
084d77ab +0x053:  test   %al,%al
084d77ad +0x055:  je     084d77b9 <+0x61>
084d77af +0x057:  mov    $0x0,%eax
084d77b4 +0x05c:  jmp    084d78ec <+0x194>
084d77b9 +0x061:  movl   $0x0,-0xc(%ebp)
084d77c0 +0x068:  jmp    084d7837 <+0xdf>
084d77c2 +0x06a:  mov    -0xc(%ebp),%eax
084d77c5 +0x06d:  mov    &_ZL6gmList(,%eax,4),%eax
084d77cc +0x074:  mov    %eax,%ebx
084d77ce +0x076:  mov    0xc(%ebp),%eax
084d77d1 +0x079:  mov    %eax,(%esp)
084d77d4 +0x07c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d77d9 +0x081:  cmp    %eax,%ebx
084d77db +0x083:  sete   %al
084d77de +0x086:  test   %al,%al
084d77e0 +0x088:  je     084d7833 <+0xdb>
084d77e2 +0x08a:  mov    0xc(%ebp),%eax
084d77e5 +0x08d:  mov    %eax,(%esp)
084d77e8 +0x090:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d77ed +0x095:  mov    %eax,%ebx
084d77ef +0x097:  movl   $0x0,0xc(%esp)
084d77f7 +0x09f:  movl   $0x3ced,0x8(%esp)
084d77ff +0x0a7:  movl   $&_ZZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d7807 +0x0af:  lea    -0x1c(%ebp),%eax
084d780a +0x0b2:  mov    %eax,(%esp)
084d780d +0x0b5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d7812 +0x0ba:  mov    %ebx,0xc(%esp)
084d7816 +0x0be:  movl   $"ACK AuctionResultMyRegistedItems",0x8(%esp)
084d781e +0x0c6:  movl   $"Trace Auction Delay, %s(%d)",0x4(%esp)
084d7826 +0x0ce:  lea    -0x1c(%ebp),%eax
084d7829 +0x0d1:  mov    %eax,(%esp)
084d782c +0x0d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d7831 +0x0d9:  jmp    084d7842 <+0xea>
084d7833 +0x0db:  addl   $0x1,-0xc(%ebp)
084d7837 +0x0df:  cmpl   $0x4,-0xc(%ebp)
084d783b +0x0e3:  setle  %al
084d783e +0x0e6:  test   %al,%al
084d7840 +0x0e8:  jne    084d77c2 <+0x6a>
084d7842 +0x0ea:  lea    -0x2c(%ebp),%eax
084d7845 +0x0ed:  mov    %eax,(%esp)
084d7848 +0x0f0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d784d +0x0f5:  movl   $0xbf,0x8(%esp)
084d7855 +0x0fd:  movl   $0x1,0x4(%esp)
084d785d +0x105:  lea    -0x2c(%ebp),%eax
084d7860 +0x108:  mov    %eax,(%esp)
084d7863 +0x10b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d7868 +0x110:  movl   $0x1,0x4(%esp)
084d7870 +0x118:  lea    -0x2c(%ebp),%eax
084d7873 +0x11b:  mov    %eax,(%esp)
084d7876 +0x11e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d787b +0x123:  mov    0x14(%ebp),%eax
084d787e +0x126:  sub    $0x4,%eax
084d7881 +0x129:  mov    0x10(%ebp),%edx
084d7884 +0x12c:  add    $0x4,%edx
084d7887 +0x12f:  mov    %eax,0x8(%esp)
084d788b +0x133:  mov    %edx,0x4(%esp)
084d788f +0x137:  lea    -0x2c(%ebp),%eax
084d7892 +0x13a:  mov    %eax,(%esp)
084d7895 +0x13d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084d789a +0x142:  movl   $0x1,0x4(%esp)
084d78a2 +0x14a:  lea    -0x2c(%ebp),%eax
084d78a5 +0x14d:  mov    %eax,(%esp)
084d78a8 +0x150:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d78ad +0x155:  lea    -0x2c(%ebp),%eax
084d78b0 +0x158:  mov    %eax,0x4(%esp)
084d78b4 +0x15c:  mov    0xc(%ebp),%eax
084d78b7 +0x15f:  mov    %eax,(%esp)
084d78ba +0x162:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d78bf +0x167:  jmp    084d78dc <+0x184>
084d78c1 +0x169:  mov    %edx,%ebx
084d78c3 +0x16b:  mov    %eax,%esi
084d78c5 +0x16d:  lea    -0x2c(%ebp),%eax
084d78c8 +0x170:  mov    %eax,(%esp)
084d78cb +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d78d0 +0x178:  mov    %esi,%eax
084d78d2 +0x17a:  mov    %ebx,%edx
084d78d4 +0x17c:  mov    %eax,(%esp)
084d78d7 +0x17f:  call   08ae3750 <_Unwind_Resume>
084d78dc +0x184:  lea    -0x2c(%ebp),%eax
084d78df +0x187:  mov    %eax,(%esp)
084d78e2 +0x18a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d78e7 +0x18f:  mov    $0x0,%eax
084d78ec +0x194:  add    $0x40,%esp
084d78ef +0x197:  pop    %ebx
084d78f0 +0x198:  pop    %esi
084d78f1 +0x199:  pop    %ebp
084d78f2 +0x19a:  ret
084d78f3 +0x19b:  nop
```

## 反编译 C

```c
// Inter_AuctionResultMyRegistedItems::dispatch_sig @ 0x84d7758

/* Inter_AuctionResultMyRegistedItems::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_AuctionResultMyRegistedItems::dispatch_sig
          (Inter_AuctionResultMyRegistedItems *this,CUser *param_1,char *param_2,int param_3)

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
                             "virtual int Inter_AuctionResultMyRegistedItems::dispatch_sig(CUser*, char*, int)"
                             ,0x3ced,0);
          cMyTrace::operator()
                    (local_20,"Trace Auction Delay, %s(%d)","ACK AuctionResultMyRegistedItems",uVar3
                    );
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d7863 to 084d78be has its CatchHandler @ 084d78c1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xbf);
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
