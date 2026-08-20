# dispatch_sig

`_ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildMemberInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildMemberInfo` | `0x084cc768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc768  _ZN34Inter_MonitorNoticeGuildMemberInfo12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildMemberInfo::dispatch_sig(CUser*, char*, int)
# range [0x084cc768, 0x084cc909]
084cc768 +0x000:  push   %ebp
084cc769 +0x001:  mov    %esp,%ebp
084cc76b +0x003:  push   %esi
084cc76c +0x004:  push   %ebx
084cc76d +0x005:  sub    $0x20,%esp
084cc770 +0x008:  mov    0xc(%ebp),%eax
084cc773 +0x00b:  mov    %eax,(%esp)
084cc776 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc77b +0x013:  cmp    $0x2,%eax
084cc77e +0x016:  setle  %al
084cc781 +0x019:  test   %al,%al
084cc783 +0x01b:  je     084cc78f <+0x27>
084cc785 +0x01d:  mov    $0x0,%ebx
084cc78a +0x022:  jmp    084cc901 <+0x199>
084cc78f +0x027:  mov    0x10(%ebp),%eax
084cc792 +0x02a:  mov    %eax,-0xc(%ebp)
084cc795 +0x02d:  mov    -0xc(%ebp),%eax
084cc798 +0x030:  mov    0xe(%eax),%ebx
084cc79b +0x033:  movl   $0xffffffff,0x4(%esp)
084cc7a3 +0x03b:  mov    0xc(%ebp),%eax
084cc7a6 +0x03e:  mov    %eax,(%esp)
084cc7a9 +0x041:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc7ae +0x046:  cmp    %eax,%ebx
084cc7b0 +0x048:  setne  %al
084cc7b3 +0x04b:  test   %al,%al
084cc7b5 +0x04d:  je     084cc7c1 <+0x59>
084cc7b7 +0x04f:  mov    $0x0,%ebx
084cc7bc +0x054:  jmp    084cc901 <+0x199>
084cc7c1 +0x059:  mov    -0xc(%ebp),%eax
084cc7c4 +0x05c:  movzbl 0x27(%eax),%eax
084cc7c8 +0x060:  movzbl %al,%edx
084cc7cb +0x063:  mov    0xc(%ebp),%eax
084cc7ce +0x066:  mov    %edx,0x4(%esp)
084cc7d2 +0x06a:  mov    %eax,(%esp)
084cc7d5 +0x06d:  call   084ec0b4 <_GLOBAL__I__Z7getUserj+0x3066>  ; global constructors keyed to getUser(unsigned int)+0x3066
084cc7da +0x072:  lea    -0x18(%ebp),%eax
084cc7dd +0x075:  mov    %eax,(%esp)
084cc7e0 +0x078:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cc7e5 +0x07d:  movl   $0x7f,0x8(%esp)
084cc7ed +0x085:  movl   $0x0,0x4(%esp)
084cc7f5 +0x08d:  lea    -0x18(%ebp),%eax
084cc7f8 +0x090:  mov    %eax,(%esp)
084cc7fb +0x093:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc800 +0x098:  mov    -0xc(%ebp),%eax
084cc803 +0x09b:  movzbl 0x27(%eax),%eax
084cc807 +0x09f:  movzbl %al,%eax
084cc80a +0x0a2:  mov    %eax,0x4(%esp)
084cc80e +0x0a6:  lea    -0x18(%ebp),%eax
084cc811 +0x0a9:  mov    %eax,(%esp)
084cc814 +0x0ac:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc819 +0x0b1:  movl   $0x1,0x4(%esp)
084cc821 +0x0b9:  lea    -0x18(%ebp),%eax
084cc824 +0x0bc:  mov    %eax,(%esp)
084cc827 +0x0bf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc82c +0x0c4:  lea    -0x18(%ebp),%eax
084cc82f +0x0c7:  mov    %eax,0x4(%esp)
084cc833 +0x0cb:  mov    0xc(%ebp),%eax
084cc836 +0x0ce:  mov    %eax,(%esp)
084cc839 +0x0d1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc83e +0x0d6:  mov    0xc(%ebp),%eax
084cc841 +0x0d9:  mov    %eax,(%esp)
084cc844 +0x0dc:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
084cc849 +0x0e1:  lea    -0x18(%ebp),%eax
084cc84c +0x0e4:  mov    %eax,(%esp)
084cc84f +0x0e7:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084cc854 +0x0ec:  movl   $0x2,0x8(%esp)
084cc85c +0x0f4:  movl   $0x0,0x4(%esp)
084cc864 +0x0fc:  lea    -0x18(%ebp),%eax
084cc867 +0x0ff:  mov    %eax,(%esp)
084cc86a +0x102:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc86f +0x107:  movl   $0x1,0x4(%esp)
084cc877 +0x10f:  lea    -0x18(%ebp),%eax
084cc87a +0x112:  mov    %eax,(%esp)
084cc87d +0x115:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc882 +0x11a:  movl   $0x1,0x4(%esp)
084cc88a +0x122:  lea    -0x18(%ebp),%eax
084cc88d +0x125:  mov    %eax,(%esp)
084cc890 +0x128:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cc895 +0x12d:  lea    -0x18(%ebp),%eax
084cc898 +0x130:  movl   $0x1,0x8(%esp)
084cc8a0 +0x138:  mov    %eax,0x4(%esp)
084cc8a4 +0x13c:  mov    0xc(%ebp),%eax
084cc8a7 +0x13f:  mov    %eax,(%esp)
084cc8aa +0x142:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084cc8af +0x147:  movl   $0x1,0x4(%esp)
084cc8b7 +0x14f:  lea    -0x18(%ebp),%eax
084cc8ba +0x152:  mov    %eax,(%esp)
084cc8bd +0x155:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc8c2 +0x15a:  lea    -0x18(%ebp),%eax
084cc8c5 +0x15d:  mov    %eax,0x4(%esp)
084cc8c9 +0x161:  mov    0xc(%ebp),%eax
084cc8cc +0x164:  mov    %eax,(%esp)
084cc8cf +0x167:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc8d4 +0x16c:  mov    $0x0,%ebx
084cc8d9 +0x171:  lea    -0x18(%ebp),%eax
084cc8dc +0x174:  mov    %eax,(%esp)
084cc8df +0x177:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc8e4 +0x17c:  jmp    084cc901 <+0x199>
084cc8e6 +0x17e:  mov    %edx,%ebx
084cc8e8 +0x180:  mov    %eax,%esi
084cc8ea +0x182:  lea    -0x18(%ebp),%eax
084cc8ed +0x185:  mov    %eax,(%esp)
084cc8f0 +0x188:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc8f5 +0x18d:  mov    %esi,%eax
084cc8f7 +0x18f:  mov    %ebx,%edx
084cc8f9 +0x191:  mov    %eax,(%esp)
084cc8fc +0x194:  call   08ae3750 <_Unwind_Resume>
084cc901 +0x199:  mov    %ebx,%eax
084cc903 +0x19b:  add    $0x20,%esp
084cc906 +0x19e:  pop    %ebx
084cc907 +0x19f:  pop    %esi
084cc908 +0x1a0:  pop    %ebp
084cc909 +0x1a1:  ret
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildMemberInfo::dispatch_sig @ 0x84cc768

/* Inter_MonitorNoticeGuildMemberInfo::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeGuildMemberInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      CUserCharacInfo::setGuildMemberGrade((CUserCharacInfo *)param_2,*(uchar *)(local_10 + 0x27));
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cc7fb to 084cc8d3 has its CatchHandler @ 084cc8e6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x7f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x27));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      CUser::send_skill_info((CUser *)param_2);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}
```
