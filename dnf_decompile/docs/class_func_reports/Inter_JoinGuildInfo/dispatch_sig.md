# dispatch_sig

`_ZN19Inter_JoinGuildInfo12dispatch_sigEP5CUserPci`

`Inter_JoinGuildInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_JoinGuildInfo` | `0x084e3ace` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3ace  _ZN19Inter_JoinGuildInfo12dispatch_sigEP5CUserPci
#           Inter_JoinGuildInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e3ace, 0x084e3c5f]
084e3ace +0x000:  push   %ebp
084e3acf +0x001:  mov    %esp,%ebp
084e3ad1 +0x003:  push   %esi
084e3ad2 +0x004:  push   %ebx
084e3ad3 +0x005:  sub    $0x30,%esp
084e3ad6 +0x008:  mov    0xc(%ebp),%eax
084e3ad9 +0x00b:  mov    %eax,(%esp)
084e3adc +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e3ae1 +0x013:  cmp    $0x2,%eax
084e3ae4 +0x016:  setle  %al
084e3ae7 +0x019:  test   %al,%al
084e3ae9 +0x01b:  je     084e3af5 <+0x27>
084e3aeb +0x01d:  mov    $0x0,%ebx
084e3af0 +0x022:  jmp    084e3c56 <+0x188>
084e3af5 +0x027:  mov    0x10(%ebp),%eax
084e3af8 +0x02a:  mov    %eax,-0x10(%ebp)
084e3afb +0x02d:  lea    -0x1c(%ebp),%eax
084e3afe +0x030:  mov    %eax,(%esp)
084e3b01 +0x033:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3b06 +0x038:  movl   $0x131,0x8(%esp)
084e3b0e +0x040:  movl   $0x0,0x4(%esp)
084e3b16 +0x048:  lea    -0x1c(%ebp),%eax
084e3b19 +0x04b:  mov    %eax,(%esp)
084e3b1c +0x04e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e3b21 +0x053:  mov    -0x10(%ebp),%eax
084e3b24 +0x056:  movzbl (%eax),%eax
084e3b27 +0x059:  movsbl %al,%eax
084e3b2a +0x05c:  mov    %eax,0x4(%esp)
084e3b2e +0x060:  lea    -0x1c(%ebp),%eax
084e3b31 +0x063:  mov    %eax,(%esp)
084e3b34 +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3b39 +0x06b:  mov    -0x10(%ebp),%eax
084e3b3c +0x06e:  movzbl (%eax),%eax
084e3b3f +0x071:  test   %al,%al
084e3b41 +0x073:  je     084e3c04 <+0x136>
084e3b47 +0x079:  mov    -0x10(%ebp),%eax
084e3b4a +0x07c:  mov    0x4(%eax),%eax
084e3b4d +0x07f:  mov    %eax,0x4(%esp)
084e3b51 +0x083:  lea    -0x1c(%ebp),%eax
084e3b54 +0x086:  mov    %eax,(%esp)
084e3b57 +0x089:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3b5c +0x08e:  mov    -0x10(%ebp),%eax
084e3b5f +0x091:  add    $0x26,%eax
084e3b62 +0x094:  mov    %eax,(%esp)
084e3b65 +0x097:  call   0807e3b0 <_init+0xca8>
084e3b6a +0x09c:  mov    %eax,-0xc(%ebp)
084e3b6d +0x09f:  mov    -0xc(%ebp),%eax
084e3b70 +0x0a2:  mov    %eax,0x4(%esp)
084e3b74 +0x0a6:  lea    -0x1c(%ebp),%eax
084e3b77 +0x0a9:  mov    %eax,(%esp)
084e3b7a +0x0ac:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3b7f +0x0b1:  mov    -0x10(%ebp),%eax
084e3b82 +0x0b4:  lea    0x26(%eax),%edx
084e3b85 +0x0b7:  mov    -0xc(%ebp),%eax
084e3b88 +0x0ba:  mov    %eax,0x8(%esp)
084e3b8c +0x0be:  mov    %edx,0x4(%esp)
084e3b90 +0x0c2:  lea    -0x1c(%ebp),%eax
084e3b93 +0x0c5:  mov    %eax,(%esp)
084e3b96 +0x0c8:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3b9b +0x0cd:  mov    -0x10(%ebp),%eax
084e3b9e +0x0d0:  add    $0x8,%eax
084e3ba1 +0x0d3:  mov    %eax,(%esp)
084e3ba4 +0x0d6:  call   0807e3b0 <_init+0xca8>
084e3ba9 +0x0db:  mov    %eax,-0xc(%ebp)
084e3bac +0x0de:  mov    -0xc(%ebp),%eax
084e3baf +0x0e1:  mov    %eax,0x4(%esp)
084e3bb3 +0x0e5:  lea    -0x1c(%ebp),%eax
084e3bb6 +0x0e8:  mov    %eax,(%esp)
084e3bb9 +0x0eb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3bbe +0x0f0:  mov    -0x10(%ebp),%eax
084e3bc1 +0x0f3:  lea    0x8(%eax),%edx
084e3bc4 +0x0f6:  mov    -0xc(%ebp),%eax
084e3bc7 +0x0f9:  mov    %eax,0x8(%esp)
084e3bcb +0x0fd:  mov    %edx,0x4(%esp)
084e3bcf +0x101:  lea    -0x1c(%ebp),%eax
084e3bd2 +0x104:  mov    %eax,(%esp)
084e3bd5 +0x107:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3bda +0x10c:  mov    -0x10(%ebp),%eax
084e3bdd +0x10f:  mov    0x40(%eax),%eax
084e3be0 +0x112:  mov    %eax,0x4(%esp)
084e3be4 +0x116:  lea    -0x1c(%ebp),%eax
084e3be7 +0x119:  mov    %eax,(%esp)
084e3bea +0x11c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3bef +0x121:  mov    -0x10(%ebp),%eax
084e3bf2 +0x124:  mov    0x44(%eax),%eax
084e3bf5 +0x127:  mov    %eax,0x4(%esp)
084e3bf9 +0x12b:  lea    -0x1c(%ebp),%eax
084e3bfc +0x12e:  mov    %eax,(%esp)
084e3bff +0x131:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3c04 +0x136:  movl   $0x1,0x4(%esp)
084e3c0c +0x13e:  lea    -0x1c(%ebp),%eax
084e3c0f +0x141:  mov    %eax,(%esp)
084e3c12 +0x144:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e3c17 +0x149:  lea    -0x1c(%ebp),%eax
084e3c1a +0x14c:  mov    %eax,0x4(%esp)
084e3c1e +0x150:  mov    0xc(%ebp),%eax
084e3c21 +0x153:  mov    %eax,(%esp)
084e3c24 +0x156:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e3c29 +0x15b:  mov    $0x0,%ebx
084e3c2e +0x160:  lea    -0x1c(%ebp),%eax
084e3c31 +0x163:  mov    %eax,(%esp)
084e3c34 +0x166:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3c39 +0x16b:  jmp    084e3c56 <+0x188>
084e3c3b +0x16d:  mov    %edx,%ebx
084e3c3d +0x16f:  mov    %eax,%esi
084e3c3f +0x171:  lea    -0x1c(%ebp),%eax
084e3c42 +0x174:  mov    %eax,(%esp)
084e3c45 +0x177:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3c4a +0x17c:  mov    %esi,%eax
084e3c4c +0x17e:  mov    %ebx,%edx
084e3c4e +0x180:  mov    %eax,(%esp)
084e3c51 +0x183:  call   08ae3750 <_Unwind_Resume>
084e3c56 +0x188:  mov    %ebx,%eax
084e3c58 +0x18a:  add    $0x30,%esp
084e3c5b +0x18d:  pop    %ebx
084e3c5c +0x18e:  pop    %esi
084e3c5d +0x18f:  pop    %ebp
084e3c5e +0x190:  ret
084e3c5f +0x191:  nop
```

## 反编译 C

```c
// Inter_JoinGuildInfo::dispatch_sig @ 0x84e3ace

/* Inter_JoinGuildInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_JoinGuildInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  char *local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = (char *)param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e3b1c to 084e3c28 has its CatchHandler @ 084e3c3b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x131);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*local_14);
    if (*local_14 != '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
      local_10 = strlen(local_14 + 0x26);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,local_14 + 0x26,local_10);
      local_10 = strlen(local_14 + 8);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,local_14 + 8,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x40));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x44));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
