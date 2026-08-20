# dispatch_sig

`_ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci`

`Inter_MonitorAddBuddy::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorAddBuddy` | `0x084d14b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d14b0  _ZN21Inter_MonitorAddBuddy12dispatch_sigEP5CUserPci
#           Inter_MonitorAddBuddy::dispatch_sig(CUser*, char*, int)
# range [0x084d14b0, 0x084d16f5]
084d14b0 +0x000:  push   %ebp
084d14b1 +0x001:  mov    %esp,%ebp
084d14b3 +0x003:  push   %esi
084d14b4 +0x004:  push   %ebx
084d14b5 +0x005:  sub    $0x30,%esp
084d14b8 +0x008:  mov    0xc(%ebp),%eax
084d14bb +0x00b:  mov    %eax,(%esp)
084d14be +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d14c3 +0x013:  test   %eax,%eax
084d14c5 +0x015:  sete   %al
084d14c8 +0x018:  test   %al,%al
084d14ca +0x01a:  je     084d14d6 <+0x26>
084d14cc +0x01c:  mov    $0x0,%ebx
084d14d1 +0x021:  jmp    084d16ed <+0x23d>
084d14d6 +0x026:  mov    0x10(%ebp),%eax
084d14d9 +0x029:  mov    %eax,-0x10(%ebp)
084d14dc +0x02c:  mov    0xc(%ebp),%eax
084d14df +0x02f:  mov    %eax,(%esp)
084d14e2 +0x032:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d14e7 +0x037:  mov    -0x10(%ebp),%edx
084d14ea +0x03a:  mov    0xa(%edx),%edx
084d14ed +0x03d:  cmp    %edx,%eax
084d14ef +0x03f:  setne  %al
084d14f2 +0x042:  test   %al,%al
084d14f4 +0x044:  je     084d1500 <+0x50>
084d14f6 +0x046:  mov    $0x0,%ebx
084d14fb +0x04b:  jmp    084d16ed <+0x23d>
084d1500 +0x050:  lea    -0x1c(%ebp),%eax
084d1503 +0x053:  mov    %eax,(%esp)
084d1506 +0x056:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d150b +0x05b:  mov    -0x10(%ebp),%eax
084d150e +0x05e:  movzbl 0x3a(%eax),%eax
084d1512 +0x062:  test   %al,%al
084d1514 +0x064:  jne    084d1649 <+0x199>
084d151a +0x06a:  lea    -0x1c(%ebp),%eax
084d151d +0x06d:  mov    %eax,(%esp)
084d1520 +0x070:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d1525 +0x075:  movl   $0x3f,0x8(%esp)
084d152d +0x07d:  movl   $0x1,0x4(%esp)
084d1535 +0x085:  lea    -0x1c(%ebp),%eax
084d1538 +0x088:  mov    %eax,(%esp)
084d153b +0x08b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d1540 +0x090:  movl   $0x1,0x4(%esp)
084d1548 +0x098:  lea    -0x1c(%ebp),%eax
084d154b +0x09b:  mov    %eax,(%esp)
084d154e +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1553 +0x0a3:  mov    -0x10(%ebp),%eax
084d1556 +0x0a6:  add    $0x12,%eax
084d1559 +0x0a9:  mov    %eax,(%esp)
084d155c +0x0ac:  call   0807e3b0 <_init+0xca8>
084d1561 +0x0b1:  mov    %eax,-0xc(%ebp)
084d1564 +0x0b4:  mov    -0xc(%ebp),%eax
084d1567 +0x0b7:  mov    %eax,0x4(%esp)
084d156b +0x0bb:  lea    -0x1c(%ebp),%eax
084d156e +0x0be:  mov    %eax,(%esp)
084d1571 +0x0c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d1576 +0x0c6:  mov    -0x10(%ebp),%eax
084d1579 +0x0c9:  lea    0x12(%eax),%edx
084d157c +0x0cc:  mov    -0xc(%ebp),%eax
084d157f +0x0cf:  mov    %eax,0x8(%esp)
084d1583 +0x0d3:  mov    %edx,0x4(%esp)
084d1587 +0x0d7:  lea    -0x1c(%ebp),%eax
084d158a +0x0da:  mov    %eax,(%esp)
084d158d +0x0dd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d1592 +0x0e2:  mov    -0x10(%ebp),%eax
084d1595 +0x0e5:  movzwl 0x30(%eax),%eax
084d1599 +0x0e9:  cwtl
084d159a +0x0ea:  mov    %eax,0x4(%esp)
084d159e +0x0ee:  lea    -0x1c(%ebp),%eax
084d15a1 +0x0f1:  mov    %eax,(%esp)
084d15a4 +0x0f4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d15a9 +0x0f9:  mov    -0x10(%ebp),%eax
084d15ac +0x0fc:  movzbl 0x32(%eax),%eax
084d15b0 +0x100:  movsbl %al,%eax
084d15b3 +0x103:  mov    %eax,0x4(%esp)
084d15b7 +0x107:  lea    -0x1c(%ebp),%eax
084d15ba +0x10a:  mov    %eax,(%esp)
084d15bd +0x10d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d15c2 +0x112:  mov    -0x10(%ebp),%eax
084d15c5 +0x115:  movzbl 0x33(%eax),%eax
084d15c9 +0x119:  movsbl %al,%eax
084d15cc +0x11c:  mov    %eax,0x4(%esp)
084d15d0 +0x120:  lea    -0x1c(%ebp),%eax
084d15d3 +0x123:  mov    %eax,(%esp)
084d15d6 +0x126:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d15db +0x12b:  mov    -0x10(%ebp),%eax
084d15de +0x12e:  mov    0x34(%eax),%eax
084d15e1 +0x131:  mov    %eax,0x4(%esp)
084d15e5 +0x135:  lea    -0x1c(%ebp),%eax
084d15e8 +0x138:  mov    %eax,(%esp)
084d15eb +0x13b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d15f0 +0x140:  mov    -0x10(%ebp),%eax
084d15f3 +0x143:  movzbl 0x38(%eax),%eax
084d15f7 +0x147:  movsbl %al,%eax
084d15fa +0x14a:  mov    %eax,0x4(%esp)
084d15fe +0x14e:  lea    -0x1c(%ebp),%eax
084d1601 +0x151:  mov    %eax,(%esp)
084d1604 +0x154:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1609 +0x159:  mov    -0x10(%ebp),%eax
084d160c +0x15c:  movzbl 0x39(%eax),%eax
084d1610 +0x160:  movzbl %al,%eax
084d1613 +0x163:  mov    %eax,0x4(%esp)
084d1617 +0x167:  lea    -0x1c(%ebp),%eax
084d161a +0x16a:  mov    %eax,(%esp)
084d161d +0x16d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1622 +0x172:  movl   $0x1,0x4(%esp)
084d162a +0x17a:  lea    -0x1c(%ebp),%eax
084d162d +0x17d:  mov    %eax,(%esp)
084d1630 +0x180:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d1635 +0x185:  lea    -0x1c(%ebp),%eax
084d1638 +0x188:  mov    %eax,0x4(%esp)
084d163c +0x18c:  mov    0xc(%ebp),%eax
084d163f +0x18f:  mov    %eax,(%esp)
084d1642 +0x192:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d1647 +0x197:  jmp    084d16c0 <+0x210>
084d1649 +0x199:  lea    -0x1c(%ebp),%eax
084d164c +0x19c:  mov    %eax,(%esp)
084d164f +0x19f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d1654 +0x1a4:  movl   $0x3f,0x8(%esp)
084d165c +0x1ac:  movl   $0x1,0x4(%esp)
084d1664 +0x1b4:  lea    -0x1c(%ebp),%eax
084d1667 +0x1b7:  mov    %eax,(%esp)
084d166a +0x1ba:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d166f +0x1bf:  movl   $0x0,0x4(%esp)
084d1677 +0x1c7:  lea    -0x1c(%ebp),%eax
084d167a +0x1ca:  mov    %eax,(%esp)
084d167d +0x1cd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1682 +0x1d2:  mov    -0x10(%ebp),%eax
084d1685 +0x1d5:  movzbl 0x3a(%eax),%eax
084d1689 +0x1d9:  movsbl %al,%eax
084d168c +0x1dc:  mov    %eax,0x4(%esp)
084d1690 +0x1e0:  lea    -0x1c(%ebp),%eax
084d1693 +0x1e3:  mov    %eax,(%esp)
084d1696 +0x1e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d169b +0x1eb:  movl   $0x1,0x4(%esp)
084d16a3 +0x1f3:  lea    -0x1c(%ebp),%eax
084d16a6 +0x1f6:  mov    %eax,(%esp)
084d16a9 +0x1f9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d16ae +0x1fe:  lea    -0x1c(%ebp),%eax
084d16b1 +0x201:  mov    %eax,0x4(%esp)
084d16b5 +0x205:  mov    0xc(%ebp),%eax
084d16b8 +0x208:  mov    %eax,(%esp)
084d16bb +0x20b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d16c0 +0x210:  mov    $0x0,%ebx
084d16c5 +0x215:  lea    -0x1c(%ebp),%eax
084d16c8 +0x218:  mov    %eax,(%esp)
084d16cb +0x21b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d16d0 +0x220:  jmp    084d16ed <+0x23d>
084d16d2 +0x222:  mov    %edx,%ebx
084d16d4 +0x224:  mov    %eax,%esi
084d16d6 +0x226:  lea    -0x1c(%ebp),%eax
084d16d9 +0x229:  mov    %eax,(%esp)
084d16dc +0x22c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d16e1 +0x231:  mov    %esi,%eax
084d16e3 +0x233:  mov    %ebx,%edx
084d16e5 +0x235:  mov    %eax,(%esp)
084d16e8 +0x238:  call   08ae3750 <_Unwind_Resume>
084d16ed +0x23d:  mov    %ebx,%eax
084d16ef +0x23f:  add    $0x30,%esp
084d16f2 +0x242:  pop    %ebx
084d16f3 +0x243:  pop    %esi
084d16f4 +0x244:  pop    %ebp
084d16f5 +0x245:  ret
```

## 反编译 C

```c
// Inter_MonitorAddBuddy::dispatch_sig @ 0x84d14b0

/* Inter_MonitorAddBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorAddBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == *(int *)(local_14 + 10)) {
      PacketGuard::PacketGuard(local_20);
      if (*(char *)(local_14 + 0x3a) == '\0') {
                    /* try { // try from 084d1520 to 084d16bf has its CatchHandler @ 084d16d2 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x3f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        local_10 = strlen((char *)(local_14 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(int)*(short *)(local_14 + 0x30));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x32))
        ;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x33))
        ;
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x34));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x38))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x39));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x3f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3a))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
      }
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```
