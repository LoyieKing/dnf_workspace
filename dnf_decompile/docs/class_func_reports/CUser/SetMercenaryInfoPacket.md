# SetMercenaryInfoPacket

`_ZN5CUser22SetMercenaryInfoPacketER11PacketGuard`

`CUser::SetMercenaryInfoPacket(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e704  _ZN5CUser22SetMercenaryInfoPacketER11PacketGuard
#           CUser::SetMercenaryInfoPacket(PacketGuard&)
# range [0x0868e704, 0x0868e9bf]
0868e704 +0x000:  push   %ebp
0868e705 +0x001:  mov    %esp,%ebp
0868e707 +0x003:  push   %ebx
0868e708 +0x004:  sub    $0x24,%esp
0868e70b +0x007:  movl   $0x0,-0x18(%ebp)
0868e712 +0x00e:  movl   $0x0,-0x14(%ebp)
0868e719 +0x015:  mov    0x8(%ebp),%eax
0868e71c +0x018:  mov    %eax,(%esp)
0868e71f +0x01b:  call   08690026 <_ZN5CUser20CalcurateManageLevelEv>  ; CUser::CalcurateManageLevel()
0868e724 +0x020:  mov    %al,-0xd(%ebp)
0868e727 +0x023:  cmpb   $0x0,-0xd(%ebp)
0868e72b +0x027:  je     0868e738 <+0x34>
0868e72d +0x029:  mov    0x8(%ebp),%eax
0868e730 +0x02c:  mov    %eax,(%esp)
0868e733 +0x02f:  call   08690b58 <_ZN5CUser21SendManageLevelUpNotiEv>  ; CUser::SendManageLevelUpNoti()
0868e738 +0x034:  mov    0x8(%ebp),%eax
0868e73b +0x037:  mov    %eax,(%esp)
0868e73e +0x03a:  call   0868fe02 <_ZN5CUser14GetManageLevelEv>  ; CUser::GetManageLevel()
0868e743 +0x03f:  mov    0xc(%ebp),%edx
0868e746 +0x042:  mov    %eax,0x4(%esp)
0868e74a +0x046:  mov    %edx,(%esp)
0868e74d +0x049:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e752 +0x04e:  mov    0x8(%ebp),%eax
0868e755 +0x051:  mov    %eax,(%esp)
0868e758 +0x054:  call   0868fe10 <_ZN5CUser14GetManagePointEv>  ; CUser::GetManagePoint()
0868e75d +0x059:  mov    0xc(%ebp),%edx
0868e760 +0x05c:  mov    %eax,0x4(%esp)
0868e764 +0x060:  mov    %edx,(%esp)
0868e767 +0x063:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e76c +0x068:  mov    0x8(%ebp),%eax
0868e76f +0x06b:  add    $0x6ef6c,%eax
0868e774 +0x070:  mov    %eax,(%esp)
0868e777 +0x073:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
0868e77c +0x078:  movsbl %al,%edx
0868e77f +0x07b:  mov    0xc(%ebp),%eax
0868e782 +0x07e:  mov    %edx,0x4(%esp)
0868e786 +0x082:  mov    %eax,(%esp)
0868e789 +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e78e +0x08a:  movl   $0x0,-0xc(%ebp)
0868e795 +0x091:  jmp    0868e99b <+0x297>
0868e79a +0x096:  mov    0x8(%ebp),%eax
0868e79d +0x099:  lea    0x6ef6c(%eax),%edx
0868e7a3 +0x09f:  mov    -0xc(%ebp),%eax
0868e7a6 +0x0a2:  mov    %eax,0x4(%esp)
0868e7aa +0x0a6:  mov    %edx,(%esp)
0868e7ad +0x0a9:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e7b2 +0x0ae:  mov    0x2c(%eax),%ebx
0868e7b5 +0x0b1:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868e7bc +0x0b8:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868e7c1 +0x0bd:  mov    %ebx,%edx
0868e7c3 +0x0bf:  sub    %eax,%edx
0868e7c5 +0x0c1:  mov    %edx,%eax
0868e7c7 +0x0c3:  mov    %eax,-0x18(%ebp)
0868e7ca +0x0c6:  mov    0x8(%ebp),%eax
0868e7cd +0x0c9:  lea    0x6ef6c(%eax),%edx
0868e7d3 +0x0cf:  mov    -0xc(%ebp),%eax
0868e7d6 +0x0d2:  mov    %eax,0x4(%esp)
0868e7da +0x0d6:  mov    %edx,(%esp)
0868e7dd +0x0d9:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e7e2 +0x0de:  mov    (%eax),%eax
0868e7e4 +0x0e0:  mov    %eax,%edx
0868e7e6 +0x0e2:  mov    0xc(%ebp),%eax
0868e7e9 +0x0e5:  mov    %edx,0x4(%esp)
0868e7ed +0x0e9:  mov    %eax,(%esp)
0868e7f0 +0x0ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e7f5 +0x0f1:  mov    0x8(%ebp),%eax
0868e7f8 +0x0f4:  lea    0x6ef6c(%eax),%edx
0868e7fe +0x0fa:  mov    -0xc(%ebp),%eax
0868e801 +0x0fd:  mov    %eax,0x4(%esp)
0868e805 +0x101:  mov    %edx,(%esp)
0868e808 +0x104:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e80d +0x109:  add    $0x6,%eax
0868e810 +0x10c:  test   %eax,%eax
0868e812 +0x10e:  sete   %al
0868e815 +0x111:  test   %al,%al
0868e817 +0x113:  je     0868e822 <+0x11e>
0868e819 +0x115:  movl   $0x0,-0x14(%ebp)
0868e820 +0x11c:  jmp    0868e848 <+0x144>
0868e822 +0x11e:  mov    0x8(%ebp),%eax
0868e825 +0x121:  lea    0x6ef6c(%eax),%edx
0868e82b +0x127:  mov    -0xc(%ebp),%eax
0868e82e +0x12a:  mov    %eax,0x4(%esp)
0868e832 +0x12e:  mov    %edx,(%esp)
0868e835 +0x131:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e83a +0x136:  add    $0x6,%eax
0868e83d +0x139:  mov    %eax,(%esp)
0868e840 +0x13c:  call   0807e3b0 <_init+0xca8>
0868e845 +0x141:  mov    %eax,-0x14(%ebp)
0868e848 +0x144:  mov    0xc(%ebp),%eax
0868e84b +0x147:  mov    -0x14(%ebp),%edx
0868e84e +0x14a:  mov    %edx,0x4(%esp)
0868e852 +0x14e:  mov    %eax,(%esp)
0868e855 +0x151:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e85a +0x156:  cmpl   $0x0,-0x14(%ebp)
0868e85e +0x15a:  je     0868e893 <+0x18f>
0868e860 +0x15c:  mov    0x8(%ebp),%eax
0868e863 +0x15f:  lea    0x6ef6c(%eax),%edx
0868e869 +0x165:  mov    -0xc(%ebp),%eax
0868e86c +0x168:  mov    %eax,0x4(%esp)
0868e870 +0x16c:  mov    %edx,(%esp)
0868e873 +0x16f:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e878 +0x174:  add    $0x6,%eax
0868e87b +0x177:  mov    %eax,%edx
0868e87d +0x179:  mov    0xc(%ebp),%eax
0868e880 +0x17c:  mov    -0x14(%ebp),%ecx
0868e883 +0x17f:  mov    %ecx,0x8(%esp)
0868e887 +0x183:  mov    %edx,0x4(%esp)
0868e88b +0x187:  mov    %eax,(%esp)
0868e88e +0x18a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0868e893 +0x18f:  cmpl   $0x0,-0x18(%ebp)
0868e897 +0x193:  jle    0868e8ae <+0x1aa>
0868e899 +0x195:  mov    0xc(%ebp),%eax
0868e89c +0x198:  movl   $0x1,0x4(%esp)
0868e8a4 +0x1a0:  mov    %eax,(%esp)
0868e8a7 +0x1a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e8ac +0x1a8:  jmp    0868e8fb <+0x1f7>
0868e8ae +0x1aa:  mov    0x8(%ebp),%eax
0868e8b1 +0x1ad:  lea    0x6ef6c(%eax),%edx
0868e8b7 +0x1b3:  mov    -0xc(%ebp),%eax
0868e8ba +0x1b6:  mov    %eax,0x4(%esp)
0868e8be +0x1ba:  mov    %edx,(%esp)
0868e8c1 +0x1bd:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e8c6 +0x1c2:  movzbl 0x30(%eax),%eax
0868e8ca +0x1c6:  cmp    $0xff,%al
0868e8cc +0x1c8:  sete   %al
0868e8cf +0x1cb:  test   %al,%al
0868e8d1 +0x1cd:  je     0868e8e8 <+0x1e4>
0868e8d3 +0x1cf:  mov    0xc(%ebp),%eax
0868e8d6 +0x1d2:  movl   $0x0,0x4(%esp)
0868e8de +0x1da:  mov    %eax,(%esp)
0868e8e1 +0x1dd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e8e6 +0x1e2:  jmp    0868e8fb <+0x1f7>
0868e8e8 +0x1e4:  mov    0xc(%ebp),%eax
0868e8eb +0x1e7:  movl   $0x2,0x4(%esp)
0868e8f3 +0x1ef:  mov    %eax,(%esp)
0868e8f6 +0x1f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e8fb +0x1f7:  mov    0xc(%ebp),%eax
0868e8fe +0x1fa:  mov    -0x18(%ebp),%edx
0868e901 +0x1fd:  mov    %edx,0x4(%esp)
0868e905 +0x201:  mov    %eax,(%esp)
0868e908 +0x204:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e90d +0x209:  mov    0x8(%ebp),%eax
0868e910 +0x20c:  lea    0x6ef6c(%eax),%edx
0868e916 +0x212:  mov    -0xc(%ebp),%eax
0868e919 +0x215:  mov    %eax,0x4(%esp)
0868e91d +0x219:  mov    %edx,(%esp)
0868e920 +0x21c:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e925 +0x221:  movzbl 0x30(%eax),%eax
0868e929 +0x225:  movsbl %al,%edx
0868e92c +0x228:  mov    0xc(%ebp),%eax
0868e92f +0x22b:  mov    %edx,0x4(%esp)
0868e933 +0x22f:  mov    %eax,(%esp)
0868e936 +0x232:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e93b +0x237:  mov    0x8(%ebp),%eax
0868e93e +0x23a:  lea    0x6ef6c(%eax),%edx
0868e944 +0x240:  mov    -0xc(%ebp),%eax
0868e947 +0x243:  mov    %eax,0x4(%esp)
0868e94b +0x247:  mov    %edx,(%esp)
0868e94e +0x24a:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e953 +0x24f:  movzbl 0x31(%eax),%eax
0868e957 +0x253:  movsbl %al,%edx
0868e95a +0x256:  mov    0xc(%ebp),%eax
0868e95d +0x259:  mov    %edx,0x4(%esp)
0868e961 +0x25d:  mov    %eax,(%esp)
0868e964 +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e969 +0x265:  mov    0x8(%ebp),%eax
0868e96c +0x268:  lea    0x6ef6c(%eax),%edx
0868e972 +0x26e:  mov    -0xc(%ebp),%eax
0868e975 +0x271:  mov    %eax,0x4(%esp)
0868e979 +0x275:  mov    %edx,(%esp)
0868e97c +0x278:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
0868e981 +0x27d:  movzbl 0x32(%eax),%eax
0868e985 +0x281:  movsbl %al,%edx
0868e988 +0x284:  mov    0xc(%ebp),%eax
0868e98b +0x287:  mov    %edx,0x4(%esp)
0868e98f +0x28b:  mov    %eax,(%esp)
0868e992 +0x28e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868e997 +0x293:  addl   $0x1,-0xc(%ebp)
0868e99b +0x297:  mov    0x8(%ebp),%eax
0868e99e +0x29a:  add    $0x6ef6c,%eax
0868e9a3 +0x29f:  mov    %eax,(%esp)
0868e9a6 +0x2a2:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
0868e9ab +0x2a7:  cmp    -0xc(%ebp),%eax
0868e9ae +0x2aa:  seta   %al
0868e9b1 +0x2ad:  test   %al,%al
0868e9b3 +0x2af:  jne    0868e79a <+0x96>
0868e9b9 +0x2b5:  add    $0x24,%esp
0868e9bc +0x2b8:  pop    %ebx
0868e9bd +0x2b9:  pop    %ebp
0868e9be +0x2ba:  ret
0868e9bf +0x2bb:  nop
```

## 反编译 C

```c
// CUser::SetMercenaryInfoPacket @ 0x868e704

/* CUser::SetMercenaryInfoPacket(PacketGuard&) */

void __thiscall CUser::SetMercenaryInfoPacket(CUser *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  size_t local_18;
  uint local_10;
  
  cVar1 = CalcurateManageLevel(this);
  if (cVar1 != '\0') {
    SendManageLevelUpNoti(this);
  }
  iVar2 = GetManageLevel(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  iVar2 = GetManagePoint(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  cVar1 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                    ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                     (this + 0x6ef6c));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
  local_10 = 0;
  while( true ) {
    uVar5 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                       (this + 0x6ef6c));
    if (uVar5 <= local_10) break;
    iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                       (this + 0x6ef6c),local_10);
    iVar2 = *(int *)(iVar2 + 0x2c);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar2 = iVar2 - iVar3;
    piVar4 = (int *)std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::
                    operator[]((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>
                                *)(this + 0x6ef6c),local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*piVar4);
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                       (this + 0x6ef6c),local_10);
    if (iVar3 == -6) {
      local_18 = 0;
    }
    else {
      iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                         (this + 0x6ef6c),local_10);
      local_18 = strlen((char *)(iVar3 + 6));
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_18);
    if (local_18 != 0) {
      iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                         (this + 0x6ef6c),local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(iVar3 + 6),local_18);
    }
    if (iVar2 < 1) {
      iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                         (this + 0x6ef6c),local_10);
      if (*(char *)(iVar3 + 0x30) == -1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
      }
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
    iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                       (this + 0x6ef6c),local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar2 + 0x30));
    iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                       (this + 0x6ef6c),local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar2 + 0x31));
    iVar2 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)
                       (this + 0x6ef6c),local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar2 + 0x32));
    local_10 = local_10 + 1;
  }
  return;
}
```
