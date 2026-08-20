# dispatch_sig

`_ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci`

`Inter_MonitorDelBuddy::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorDelBuddy` | `0x084d16f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d16f6  _ZN21Inter_MonitorDelBuddy12dispatch_sigEP5CUserPci
#           Inter_MonitorDelBuddy::dispatch_sig(CUser*, char*, int)
# range [0x084d16f6, 0x084d18ab]
084d16f6 +0x000:  push   %ebp
084d16f7 +0x001:  mov    %esp,%ebp
084d16f9 +0x003:  push   %esi
084d16fa +0x004:  push   %ebx
084d16fb +0x005:  sub    $0x30,%esp
084d16fe +0x008:  mov    0xc(%ebp),%eax
084d1701 +0x00b:  mov    %eax,(%esp)
084d1704 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d1709 +0x013:  test   %eax,%eax
084d170b +0x015:  sete   %al
084d170e +0x018:  test   %al,%al
084d1710 +0x01a:  je     084d171c <+0x26>
084d1712 +0x01c:  mov    $0x0,%ebx
084d1717 +0x021:  jmp    084d18a3 <+0x1ad>
084d171c +0x026:  mov    0x10(%ebp),%eax
084d171f +0x029:  mov    %eax,-0x10(%ebp)
084d1722 +0x02c:  mov    0xc(%ebp),%eax
084d1725 +0x02f:  mov    %eax,(%esp)
084d1728 +0x032:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d172d +0x037:  mov    -0x10(%ebp),%edx
084d1730 +0x03a:  mov    0xa(%edx),%edx
084d1733 +0x03d:  cmp    %edx,%eax
084d1735 +0x03f:  setne  %al
084d1738 +0x042:  test   %al,%al
084d173a +0x044:  je     084d1746 <+0x50>
084d173c +0x046:  mov    $0x0,%ebx
084d1741 +0x04b:  jmp    084d18a3 <+0x1ad>
084d1746 +0x050:  lea    -0x1c(%ebp),%eax
084d1749 +0x053:  mov    %eax,(%esp)
084d174c +0x056:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d1751 +0x05b:  mov    -0x10(%ebp),%eax
084d1754 +0x05e:  movzbl 0x30(%eax),%eax
084d1758 +0x062:  test   %al,%al
084d175a +0x064:  jne    084d17ff <+0x109>
084d1760 +0x06a:  lea    -0x1c(%ebp),%eax
084d1763 +0x06d:  mov    %eax,(%esp)
084d1766 +0x070:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d176b +0x075:  movl   $0x40,0x8(%esp)
084d1773 +0x07d:  movl   $0x1,0x4(%esp)
084d177b +0x085:  lea    -0x1c(%ebp),%eax
084d177e +0x088:  mov    %eax,(%esp)
084d1781 +0x08b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d1786 +0x090:  movl   $0x1,0x4(%esp)
084d178e +0x098:  lea    -0x1c(%ebp),%eax
084d1791 +0x09b:  mov    %eax,(%esp)
084d1794 +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1799 +0x0a3:  mov    -0x10(%ebp),%eax
084d179c +0x0a6:  add    $0x12,%eax
084d179f +0x0a9:  mov    %eax,(%esp)
084d17a2 +0x0ac:  call   0807e3b0 <_init+0xca8>
084d17a7 +0x0b1:  mov    %eax,-0xc(%ebp)
084d17aa +0x0b4:  mov    -0xc(%ebp),%eax
084d17ad +0x0b7:  mov    %eax,0x4(%esp)
084d17b1 +0x0bb:  lea    -0x1c(%ebp),%eax
084d17b4 +0x0be:  mov    %eax,(%esp)
084d17b7 +0x0c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d17bc +0x0c6:  mov    -0x10(%ebp),%eax
084d17bf +0x0c9:  lea    0x12(%eax),%edx
084d17c2 +0x0cc:  mov    -0xc(%ebp),%eax
084d17c5 +0x0cf:  mov    %eax,0x8(%esp)
084d17c9 +0x0d3:  mov    %edx,0x4(%esp)
084d17cd +0x0d7:  lea    -0x1c(%ebp),%eax
084d17d0 +0x0da:  mov    %eax,(%esp)
084d17d3 +0x0dd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d17d8 +0x0e2:  movl   $0x1,0x4(%esp)
084d17e0 +0x0ea:  lea    -0x1c(%ebp),%eax
084d17e3 +0x0ed:  mov    %eax,(%esp)
084d17e6 +0x0f0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d17eb +0x0f5:  lea    -0x1c(%ebp),%eax
084d17ee +0x0f8:  mov    %eax,0x4(%esp)
084d17f2 +0x0fc:  mov    0xc(%ebp),%eax
084d17f5 +0x0ff:  mov    %eax,(%esp)
084d17f8 +0x102:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d17fd +0x107:  jmp    084d1876 <+0x180>
084d17ff +0x109:  lea    -0x1c(%ebp),%eax
084d1802 +0x10c:  mov    %eax,(%esp)
084d1805 +0x10f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d180a +0x114:  movl   $0x40,0x8(%esp)
084d1812 +0x11c:  movl   $0x1,0x4(%esp)
084d181a +0x124:  lea    -0x1c(%ebp),%eax
084d181d +0x127:  mov    %eax,(%esp)
084d1820 +0x12a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d1825 +0x12f:  movl   $0x0,0x4(%esp)
084d182d +0x137:  lea    -0x1c(%ebp),%eax
084d1830 +0x13a:  mov    %eax,(%esp)
084d1833 +0x13d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1838 +0x142:  mov    -0x10(%ebp),%eax
084d183b +0x145:  movzbl 0x30(%eax),%eax
084d183f +0x149:  movsbl %al,%eax
084d1842 +0x14c:  mov    %eax,0x4(%esp)
084d1846 +0x150:  lea    -0x1c(%ebp),%eax
084d1849 +0x153:  mov    %eax,(%esp)
084d184c +0x156:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d1851 +0x15b:  movl   $0x1,0x4(%esp)
084d1859 +0x163:  lea    -0x1c(%ebp),%eax
084d185c +0x166:  mov    %eax,(%esp)
084d185f +0x169:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d1864 +0x16e:  lea    -0x1c(%ebp),%eax
084d1867 +0x171:  mov    %eax,0x4(%esp)
084d186b +0x175:  mov    0xc(%ebp),%eax
084d186e +0x178:  mov    %eax,(%esp)
084d1871 +0x17b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d1876 +0x180:  mov    $0x0,%ebx
084d187b +0x185:  lea    -0x1c(%ebp),%eax
084d187e +0x188:  mov    %eax,(%esp)
084d1881 +0x18b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1886 +0x190:  jmp    084d18a3 <+0x1ad>
084d1888 +0x192:  mov    %edx,%ebx
084d188a +0x194:  mov    %eax,%esi
084d188c +0x196:  lea    -0x1c(%ebp),%eax
084d188f +0x199:  mov    %eax,(%esp)
084d1892 +0x19c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d1897 +0x1a1:  mov    %esi,%eax
084d1899 +0x1a3:  mov    %ebx,%edx
084d189b +0x1a5:  mov    %eax,(%esp)
084d189e +0x1a8:  call   08ae3750 <_Unwind_Resume>
084d18a3 +0x1ad:  mov    %ebx,%eax
084d18a5 +0x1af:  add    $0x30,%esp
084d18a8 +0x1b2:  pop    %ebx
084d18a9 +0x1b3:  pop    %esi
084d18aa +0x1b4:  pop    %ebp
084d18ab +0x1b5:  ret
```

## 反编译 C

```c
// Inter_MonitorDelBuddy::dispatch_sig @ 0x84d16f6

/* Inter_MonitorDelBuddy::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorDelBuddy::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
      if (*(char *)(local_14 + 0x30) == '\0') {
                    /* try { // try from 084d1766 to 084d1875 has its CatchHandler @ 084d1888 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x40);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        local_10 = strlen((char *)(local_14 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x40);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x30))
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
