# dispatch_sig

`_ZN25Inter_SendPeriodicMessage12dispatch_sigEP5CUserPci`

`Inter_SendPeriodicMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SendPeriodicMessage` | `0x084e3232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3232  _ZN25Inter_SendPeriodicMessage12dispatch_sigEP5CUserPci
#           Inter_SendPeriodicMessage::dispatch_sig(CUser*, char*, int)
# range [0x084e3232, 0x084e3325]
084e3232 +0x00:  push   %ebp
084e3233 +0x01:  mov    %esp,%ebp
084e3235 +0x03:  push   %esi
084e3236 +0x04:  push   %ebx
084e3237 +0x05:  sub    $0x20,%esp
084e323a +0x08:  mov    0x10(%ebp),%eax
084e323d +0x0b:  mov    %eax,-0xc(%ebp)
084e3240 +0x0e:  mov    -0xc(%ebp),%eax
084e3243 +0x11:  add    $0xa,%eax
084e3246 +0x14:  movzbl (%eax),%eax
084e3249 +0x17:  test   %al,%al
084e324b +0x19:  jne    084e3257 <+0x25>
084e324d +0x1b:  mov    $0x0,%ebx
084e3252 +0x20:  jmp    084e331d <+0xeb>
084e3257 +0x25:  lea    -0x18(%ebp),%eax
084e325a +0x28:  mov    %eax,(%esp)
084e325d +0x2b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3262 +0x30:  movl   $0x12b,0x8(%esp)
084e326a +0x38:  movl   $0x0,0x4(%esp)
084e3272 +0x40:  lea    -0x18(%ebp),%eax
084e3275 +0x43:  mov    %eax,(%esp)
084e3278 +0x46:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e327d +0x4b:  mov    -0xc(%ebp),%eax
084e3280 +0x4e:  add    $0xa,%eax
084e3283 +0x51:  mov    %eax,(%esp)
084e3286 +0x54:  call   0807e3b0 <_init+0xca8>
084e328b +0x59:  mov    %eax,0x4(%esp)
084e328f +0x5d:  lea    -0x18(%ebp),%eax
084e3292 +0x60:  mov    %eax,(%esp)
084e3295 +0x63:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e329a +0x68:  mov    -0xc(%ebp),%eax
084e329d +0x6b:  add    $0xa,%eax
084e32a0 +0x6e:  mov    %eax,(%esp)
084e32a3 +0x71:  call   0807e3b0 <_init+0xca8>
084e32a8 +0x76:  mov    -0xc(%ebp),%edx
084e32ab +0x79:  add    $0xa,%edx
084e32ae +0x7c:  mov    %eax,0x8(%esp)
084e32b2 +0x80:  mov    %edx,0x4(%esp)
084e32b6 +0x84:  lea    -0x18(%ebp),%eax
084e32b9 +0x87:  mov    %eax,(%esp)
084e32bc +0x8a:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e32c1 +0x8f:  movl   $0x1,0x4(%esp)
084e32c9 +0x97:  lea    -0x18(%ebp),%eax
084e32cc +0x9a:  mov    %eax,(%esp)
084e32cf +0x9d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e32d4 +0xa2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e32d9 +0xa7:  movl   $0x3,0x8(%esp)
084e32e1 +0xaf:  lea    -0x18(%ebp),%edx
084e32e4 +0xb2:  mov    %edx,0x4(%esp)
084e32e8 +0xb6:  mov    %eax,(%esp)
084e32eb +0xb9:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
084e32f0 +0xbe:  mov    $0x0,%ebx
084e32f5 +0xc3:  lea    -0x18(%ebp),%eax
084e32f8 +0xc6:  mov    %eax,(%esp)
084e32fb +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3300 +0xce:  jmp    084e331d <+0xeb>
084e3302 +0xd0:  mov    %edx,%ebx
084e3304 +0xd2:  mov    %eax,%esi
084e3306 +0xd4:  lea    -0x18(%ebp),%eax
084e3309 +0xd7:  mov    %eax,(%esp)
084e330c +0xda:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3311 +0xdf:  mov    %esi,%eax
084e3313 +0xe1:  mov    %ebx,%edx
084e3315 +0xe3:  mov    %eax,(%esp)
084e3318 +0xe6:  call   08ae3750 <_Unwind_Resume>
084e331d +0xeb:  mov    %ebx,%eax
084e331f +0xed:  add    $0x20,%esp
084e3322 +0xf0:  pop    %ebx
084e3323 +0xf1:  pop    %esi
084e3324 +0xf2:  pop    %ebp
084e3325 +0xf3:  ret
```

## 反编译 C

```c
// Inter_SendPeriodicMessage::dispatch_sig @ 0x84e3232

/* Inter_SendPeriodicMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendPeriodicMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(char *)(param_3 + 10) != '\0') {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3278 to 084e32ef has its CatchHandler @ 084e3302 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,299);
    sVar1 = strlen((char *)(local_10 + 10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar1);
    sVar1 = strlen((char *)(local_10 + 10));
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 10),sVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_1c,3);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
