# dispatch_sig

`_ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci`

`Inter_GuildAttendanceInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildAttendanceInfo` | `0x084e4052` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4052  _ZN25Inter_GuildAttendanceInfo12dispatch_sigEP5CUserPci
#           Inter_GuildAttendanceInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e4052, 0x084e41e3]
084e4052 +0x000:  push   %ebp
084e4053 +0x001:  mov    %esp,%ebp
084e4055 +0x003:  push   %esi
084e4056 +0x004:  push   %ebx
084e4057 +0x005:  sub    $0x20,%esp
084e405a +0x008:  mov    0x10(%ebp),%eax
084e405d +0x00b:  mov    %eax,-0xc(%ebp)
084e4060 +0x00e:  mov    0xc(%ebp),%eax
084e4063 +0x011:  mov    %eax,(%esp)
084e4066 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e406b +0x019:  cmp    $0x2,%eax
084e406e +0x01c:  setle  %al
084e4071 +0x01f:  test   %al,%al
084e4073 +0x021:  je     084e407f <+0x2d>
084e4075 +0x023:  mov    $0x0,%ebx
084e407a +0x028:  jmp    084e41da <+0x188>
084e407f +0x02d:  mov    -0xc(%ebp),%eax
084e4082 +0x030:  mov    0xa(%eax),%ebx
084e4085 +0x033:  mov    0xc(%ebp),%eax
084e4088 +0x036:  mov    %eax,(%esp)
084e408b +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e4090 +0x03e:  cmp    %eax,%ebx
084e4092 +0x040:  setne  %al
084e4095 +0x043:  test   %al,%al
084e4097 +0x045:  je     084e40a3 <+0x51>
084e4099 +0x047:  mov    $0x0,%ebx
084e409e +0x04c:  jmp    084e41da <+0x188>
084e40a3 +0x051:  lea    -0x18(%ebp),%eax
084e40a6 +0x054:  mov    %eax,(%esp)
084e40a9 +0x057:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e40ae +0x05c:  movl   $0x164,0x8(%esp)
084e40b6 +0x064:  movl   $0x1,0x4(%esp)
084e40be +0x06c:  lea    -0x18(%ebp),%eax
084e40c1 +0x06f:  mov    %eax,(%esp)
084e40c4 +0x072:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e40c9 +0x077:  movl   $0x1,0x4(%esp)
084e40d1 +0x07f:  lea    -0x18(%ebp),%eax
084e40d4 +0x082:  mov    %eax,(%esp)
084e40d7 +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e40dc +0x08a:  mov    -0xc(%ebp),%eax
084e40df +0x08d:  movzbl 0x12(%eax),%eax
084e40e3 +0x091:  movsbl %al,%eax
084e40e6 +0x094:  mov    %eax,0x4(%esp)
084e40ea +0x098:  lea    -0x18(%ebp),%eax
084e40ed +0x09b:  mov    %eax,(%esp)
084e40f0 +0x09e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e40f5 +0x0a3:  mov    -0xc(%ebp),%eax
084e40f8 +0x0a6:  mov    0x13(%eax),%eax
084e40fb +0x0a9:  mov    %eax,0x4(%esp)
084e40ff +0x0ad:  lea    -0x18(%ebp),%eax
084e4102 +0x0b0:  mov    %eax,(%esp)
084e4105 +0x0b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e410a +0x0b8:  mov    -0xc(%ebp),%eax
084e410d +0x0bb:  mov    0x17(%eax),%eax
084e4110 +0x0be:  mov    %eax,0x4(%esp)
084e4114 +0x0c2:  lea    -0x18(%ebp),%eax
084e4117 +0x0c5:  mov    %eax,(%esp)
084e411a +0x0c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e411f +0x0cd:  mov    -0xc(%ebp),%eax
084e4122 +0x0d0:  mov    0x2b(%eax),%eax
084e4125 +0x0d3:  mov    %eax,0x4(%esp)
084e4129 +0x0d7:  lea    -0x18(%ebp),%eax
084e412c +0x0da:  mov    %eax,(%esp)
084e412f +0x0dd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4134 +0x0e2:  mov    -0xc(%ebp),%eax
084e4137 +0x0e5:  mov    0x23(%eax),%eax
084e413a +0x0e8:  mov    %eax,0x4(%esp)
084e413e +0x0ec:  lea    -0x18(%ebp),%eax
084e4141 +0x0ef:  mov    %eax,(%esp)
084e4144 +0x0f2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4149 +0x0f7:  mov    -0xc(%ebp),%eax
084e414c +0x0fa:  mov    0x27(%eax),%eax
084e414f +0x0fd:  mov    %eax,0x4(%esp)
084e4153 +0x101:  lea    -0x18(%ebp),%eax
084e4156 +0x104:  mov    %eax,(%esp)
084e4159 +0x107:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e415e +0x10c:  mov    -0xc(%ebp),%eax
084e4161 +0x10f:  mov    0x1b(%eax),%eax
084e4164 +0x112:  mov    %eax,0x4(%esp)
084e4168 +0x116:  lea    -0x18(%ebp),%eax
084e416b +0x119:  mov    %eax,(%esp)
084e416e +0x11c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4173 +0x121:  mov    -0xc(%ebp),%eax
084e4176 +0x124:  mov    0x1f(%eax),%eax
084e4179 +0x127:  mov    %eax,0x4(%esp)
084e417d +0x12b:  lea    -0x18(%ebp),%eax
084e4180 +0x12e:  mov    %eax,(%esp)
084e4183 +0x131:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4188 +0x136:  movl   $0x1,0x4(%esp)
084e4190 +0x13e:  lea    -0x18(%ebp),%eax
084e4193 +0x141:  mov    %eax,(%esp)
084e4196 +0x144:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e419b +0x149:  lea    -0x18(%ebp),%eax
084e419e +0x14c:  mov    %eax,0x4(%esp)
084e41a2 +0x150:  mov    0xc(%ebp),%eax
084e41a5 +0x153:  mov    %eax,(%esp)
084e41a8 +0x156:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e41ad +0x15b:  mov    $0x0,%ebx
084e41b2 +0x160:  lea    -0x18(%ebp),%eax
084e41b5 +0x163:  mov    %eax,(%esp)
084e41b8 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e41bd +0x16b:  jmp    084e41da <+0x188>
084e41bf +0x16d:  mov    %edx,%ebx
084e41c1 +0x16f:  mov    %eax,%esi
084e41c3 +0x171:  lea    -0x18(%ebp),%eax
084e41c6 +0x174:  mov    %eax,(%esp)
084e41c9 +0x177:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e41ce +0x17c:  mov    %esi,%eax
084e41d0 +0x17e:  mov    %ebx,%edx
084e41d2 +0x180:  mov    %eax,(%esp)
084e41d5 +0x183:  call   08ae3750 <_Unwind_Resume>
084e41da +0x188:  mov    %ebx,%eax
084e41dc +0x18a:  add    $0x20,%esp
084e41df +0x18d:  pop    %ebx
084e41e0 +0x18e:  pop    %esi
084e41e1 +0x18f:  pop    %ebp
084e41e2 +0x190:  ret
084e41e3 +0x191:  nop
```

## 反编译 C

```c
// Inter_GuildAttendanceInfo::dispatch_sig @ 0x84e4052

/* Inter_GuildAttendanceInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildAttendanceInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_10 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e40c4 to 084e41ac has its CatchHandler @ 084e41bf */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x164);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)*(char *)(local_10 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x13));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x2b));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x23));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x27));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1b));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x1f));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
