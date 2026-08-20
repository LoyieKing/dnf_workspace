# dispatch_sig

`_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestItemUnlock` | `0x08222f82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08222f82  _ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&)
# range [0x08222f82, 0x082231ad]
08222f82 +0x000:  push   %ebp
08222f83 +0x001:  mov    %esp,%ebp
08222f85 +0x003:  push   %esi
08222f86 +0x004:  push   %ebx
08222f87 +0x005:  sub    $0x30,%esp
08222f8a +0x008:  mov    0xc(%ebp),%eax
08222f8d +0x00b:  mov    %eax,(%esp)
08222f90 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08222f95 +0x013:  cmp    $0x2,%eax
08222f98 +0x016:  setle  %al
08222f9b +0x019:  test   %al,%al
08222f9d +0x01b:  je     08222fa9 <+0x27>
08222f9f +0x01d:  mov    $0x0,%ebx
08222fa4 +0x022:  jmp    082231a4 <+0x222>
08222fa9 +0x027:  movb   $0x0,-0x11(%ebp)
08222fad +0x02b:  movw   $0x0,-0x14(%ebp)
08222fb3 +0x031:  lea    -0x11(%ebp),%eax
08222fb6 +0x034:  mov    %eax,0x4(%esp)
08222fba +0x038:  mov    0x10(%ebp),%eax
08222fbd +0x03b:  mov    %eax,(%esp)
08222fc0 +0x03e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08222fc5 +0x043:  xor    $0x1,%eax
08222fc8 +0x046:  test   %al,%al
08222fca +0x048:  je     08222ff7 <+0x75>
08222fcc +0x04a:  movl   $0x0,0xc(%esp)
08222fd4 +0x052:  movl   $0x0,0x8(%esp)
08222fdc +0x05a:  movl   $&_ZZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222fe4 +0x062:  movl   $0xdd4c,(%esp)
08222feb +0x069:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08222ff0 +0x06e:  mov    %eax,%ebx
08222ff2 +0x070:  jmp    082231a4 <+0x222>
08222ff7 +0x075:  lea    -0x14(%ebp),%eax
08222ffa +0x078:  mov    %eax,0x4(%esp)
08222ffe +0x07c:  mov    0x10(%ebp),%eax
08223001 +0x07f:  mov    %eax,(%esp)
08223004 +0x082:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08223009 +0x087:  xor    $0x1,%eax
0822300c +0x08a:  test   %al,%al
0822300e +0x08c:  je     0822303b <+0xb9>
08223010 +0x08e:  movl   $0x0,0xc(%esp)
08223018 +0x096:  movl   $0x0,0x8(%esp)
08223020 +0x09e:  movl   $&_ZZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223028 +0x0a6:  movl   $0xdd4d,(%esp)
0822302f +0x0ad:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223034 +0x0b2:  mov    %eax,%ebx
08223036 +0x0b4:  jmp    082231a4 <+0x222>
0822303b +0x0b9:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08223040 +0x0be:  movl   $0x18,0x8(%esp)
08223048 +0x0c6:  mov    0xc(%ebp),%edx
0822304b +0x0c9:  mov    %edx,0x4(%esp)
0822304f +0x0cd:  mov    %eax,(%esp)
08223052 +0x0d0:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08223057 +0x0d5:  mov    %eax,-0x10(%ebp)
0822305a +0x0d8:  cmpl   $0x0,-0x10(%ebp)
0822305e +0x0dc:  je     08223087 <+0x105>
08223060 +0x0de:  mov    -0x10(%ebp),%eax
08223063 +0x0e1:  movzbl %al,%eax
08223066 +0x0e4:  mov    %eax,0x8(%esp)
0822306a +0x0e8:  movl   $0x110,0x4(%esp)
08223072 +0x0f0:  mov    0xc(%ebp),%eax
08223075 +0x0f3:  mov    %eax,(%esp)
08223078 +0x0f6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822307d +0x0fb:  mov    $0x0,%ebx
08223082 +0x100:  jmp    082231a4 <+0x222>
08223087 +0x105:  movl   $0x0,-0xc(%ebp)
0822308e +0x10c:  movl   $0x0,-0x18(%ebp)
08223095 +0x113:  movzwl -0x14(%ebp),%eax
08223099 +0x117:  movswl %ax,%edx
0822309c +0x11a:  movzbl -0x11(%ebp),%eax
082230a0 +0x11e:  movsbl %al,%eax
082230a3 +0x121:  lea    -0x18(%ebp),%ecx
082230a6 +0x124:  mov    %ecx,0xc(%esp)
082230aa +0x128:  mov    %edx,0x8(%esp)
082230ae +0x12c:  mov    %eax,0x4(%esp)
082230b2 +0x130:  mov    0xc(%ebp),%eax
082230b5 +0x133:  mov    %eax,(%esp)
082230b8 +0x136:  call   08646bfe <_ZNK5CUser16IsAbleItemUnlockEiiRi>  ; CUser::IsAbleItemUnlock(int, int, int&) const
082230bd +0x13b:  mov    %eax,-0xc(%ebp)
082230c0 +0x13e:  cmpl   $0x0,-0xc(%ebp)
082230c4 +0x142:  setne  %al
082230c7 +0x145:  test   %al,%al
082230c9 +0x147:  je     0822317e <+0x1fc>
082230cf +0x14d:  lea    -0x24(%ebp),%eax
082230d2 +0x150:  mov    %eax,(%esp)
082230d5 +0x153:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082230da +0x158:  movl   $0x110,0x8(%esp)
082230e2 +0x160:  movl   $0x1,0x4(%esp)
082230ea +0x168:  lea    -0x24(%ebp),%eax
082230ed +0x16b:  mov    %eax,(%esp)
082230f0 +0x16e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082230f5 +0x173:  movl   $0x0,0x4(%esp)
082230fd +0x17b:  lea    -0x24(%ebp),%eax
08223100 +0x17e:  mov    %eax,(%esp)
08223103 +0x181:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08223108 +0x186:  mov    -0xc(%ebp),%eax
0822310b +0x189:  mov    %eax,0x4(%esp)
0822310f +0x18d:  lea    -0x24(%ebp),%eax
08223112 +0x190:  mov    %eax,(%esp)
08223115 +0x193:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0822311a +0x198:  mov    -0x18(%ebp),%eax
0822311d +0x19b:  mov    %eax,0x4(%esp)
08223121 +0x19f:  lea    -0x24(%ebp),%eax
08223124 +0x1a2:  mov    %eax,(%esp)
08223127 +0x1a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0822312c +0x1aa:  movl   $0x1,0x4(%esp)
08223134 +0x1b2:  lea    -0x24(%ebp),%eax
08223137 +0x1b5:  mov    %eax,(%esp)
0822313a +0x1b8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0822313f +0x1bd:  lea    -0x24(%ebp),%eax
08223142 +0x1c0:  mov    %eax,0x4(%esp)
08223146 +0x1c4:  mov    0xc(%ebp),%eax
08223149 +0x1c7:  mov    %eax,(%esp)
0822314c +0x1ca:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08223151 +0x1cf:  mov    $0x0,%ebx
08223156 +0x1d4:  lea    -0x24(%ebp),%eax
08223159 +0x1d7:  mov    %eax,(%esp)
0822315c +0x1da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08223161 +0x1df:  jmp    082231a4 <+0x222>
08223163 +0x1e1:  mov    %edx,%ebx
08223165 +0x1e3:  mov    %eax,%esi
08223167 +0x1e5:  lea    -0x24(%ebp),%eax
0822316a +0x1e8:  mov    %eax,(%esp)
0822316d +0x1eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08223172 +0x1f0:  mov    %esi,%eax
08223174 +0x1f2:  mov    %ebx,%edx
08223176 +0x1f4:  mov    %eax,(%esp)
08223179 +0x1f7:  call   08ae3750 <_Unwind_Resume>
0822317e +0x1fc:  movzwl -0x14(%ebp),%eax
08223182 +0x200:  movswl %ax,%edx
08223185 +0x203:  movzbl -0x11(%ebp),%eax
08223189 +0x207:  movsbl %al,%eax
0822318c +0x20a:  mov    %edx,0x8(%esp)
08223190 +0x20e:  mov    %eax,0x4(%esp)
08223194 +0x212:  mov    0xc(%ebp),%eax
08223197 +0x215:  mov    %eax,(%esp)
0822319a +0x218:  call   08646d82 <_ZN5CUser12DoItemUnlockEii>  ; CUser::DoItemUnlock(int, int)
0822319f +0x21d:  mov    $0x0,%ebx
082231a4 +0x222:  mov    %ebx,%eax
082231a6 +0x224:  add    $0x30,%esp
082231a9 +0x227:  pop    %ebx
082231aa +0x228:  pop    %esi
082231ab +0x229:  pop    %ebp
082231ac +0x22a:  ret
082231ad +0x22b:  nop
```

## 反编译 C

```c
// Dispatcher_RequestItemUnlock::dispatch_sig @ 0x8222f82

/* Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestItemUnlock::dispatch_sig
          (Dispatcher_RequestItemUnlock *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_28 [12];
  int local_1c;
  short local_18;
  char local_15;
  uint local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_15 = '\0';
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_15);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_18);
      if (cVar1 == '\x01') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x18);
        if (local_14 == 0) {
          local_10 = 0;
          local_1c = 0;
          local_10 = CUser::IsAbleItemUnlock((int)param_1,(int)local_15,(int *)(int)local_18);
          if (local_10 == 0) {
            CUser::DoItemUnlock(param_1,(int)local_15,(int)local_18);
            uVar3 = 0;
          }
          else {
            PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082230f0 to 08223150 has its CatchHandler @ 08223163 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x110);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_1c);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
            CUser::Send(param_1,local_28);
            uVar3 = 0;
            PacketGuard::~PacketGuard(local_28);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x110,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xdd4d,
                         "virtual int Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xdd4c,
                       "virtual int Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar3;
}
```
