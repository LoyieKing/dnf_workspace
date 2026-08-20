# sendPowerUpInfo

`_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii`

`TimerGeneratePowerUp::sendPowerUpInfo(int, int)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUp` | `0x08638aac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638aac  _ZN20TimerGeneratePowerUp15sendPowerUpInfoEii
#           TimerGeneratePowerUp::sendPowerUpInfo(int, int)
# range [0x08638aac, 0x08638b5b]
08638aac +0x00:  push   %ebp
08638aad +0x01:  mov    %esp,%ebp
08638aaf +0x03:  push   %esi
08638ab0 +0x04:  push   %ebx
08638ab1 +0x05:  sub    $0x20,%esp
08638ab4 +0x08:  lea    -0x14(%ebp),%eax
08638ab7 +0x0b:  mov    %eax,(%esp)
08638aba +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08638abf +0x13:  movl   $0xdd,0x8(%esp)
08638ac7 +0x1b:  movl   $0x0,0x4(%esp)
08638acf +0x23:  lea    -0x14(%ebp),%eax
08638ad2 +0x26:  mov    %eax,(%esp)
08638ad5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08638ada +0x2e:  mov    0xc(%ebp),%eax
08638add +0x31:  mov    %eax,0x4(%esp)
08638ae1 +0x35:  lea    -0x14(%ebp),%eax
08638ae4 +0x38:  mov    %eax,(%esp)
08638ae7 +0x3b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08638aec +0x40:  mov    0x10(%ebp),%eax
08638aef +0x43:  mov    %eax,0x4(%esp)
08638af3 +0x47:  lea    -0x14(%ebp),%eax
08638af6 +0x4a:  mov    %eax,(%esp)
08638af9 +0x4d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08638afe +0x52:  movl   $0x1,0x4(%esp)
08638b06 +0x5a:  lea    -0x14(%ebp),%eax
08638b09 +0x5d:  mov    %eax,(%esp)
08638b0c +0x60:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08638b11 +0x65:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08638b16 +0x6a:  lea    -0x14(%ebp),%edx
08638b19 +0x6d:  mov    %edx,0x8(%esp)
08638b1d +0x71:  movl   $0x7,0x4(%esp)
08638b25 +0x79:  mov    %eax,(%esp)
08638b28 +0x7c:  call   086c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>  ; GameWorld::send_to_vill(int, PacketGuard&)
08638b2d +0x81:  jmp    08638b4a <+0x9e>
08638b2f +0x83:  mov    %edx,%ebx
08638b31 +0x85:  mov    %eax,%esi
08638b33 +0x87:  lea    -0x14(%ebp),%eax
08638b36 +0x8a:  mov    %eax,(%esp)
08638b39 +0x8d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08638b3e +0x92:  mov    %esi,%eax
08638b40 +0x94:  mov    %ebx,%edx
08638b42 +0x96:  mov    %eax,(%esp)
08638b45 +0x99:  call   08ae3750 <_Unwind_Resume>
08638b4a +0x9e:  lea    -0x14(%ebp),%eax
08638b4d +0xa1:  mov    %eax,(%esp)
08638b50 +0xa4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08638b55 +0xa9:  add    $0x20,%esp
08638b58 +0xac:  pop    %ebx
08638b59 +0xad:  pop    %esi
08638b5a +0xae:  pop    %ebp
08638b5b +0xaf:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUp::sendPowerUpInfo @ 0x8638aac

/* TimerGeneratePowerUp::sendPowerUpInfo(int, int) */

void __thiscall
TimerGeneratePowerUp::sendPowerUpInfo(TimerGeneratePowerUp *this,int param_1,int param_2)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08638ad5 to 08638b2c has its CatchHandler @ 08638b2f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xdd);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_vill(this_00,7,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
