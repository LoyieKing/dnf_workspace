# dispatch_sig

`_ZN24Inter_ReplyPowerWarScore12dispatch_sigEP5CUserPci`

`Inter_ReplyPowerWarScore::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReplyPowerWarScore` | `0x084d46fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d46fa  _ZN24Inter_ReplyPowerWarScore12dispatch_sigEP5CUserPci
#           Inter_ReplyPowerWarScore::dispatch_sig(CUser*, char*, int)
# range [0x084d46fa, 0x084d47cf]
084d46fa +0x00:  push   %ebp
084d46fb +0x01:  mov    %esp,%ebp
084d46fd +0x03:  push   %esi
084d46fe +0x04:  push   %ebx
084d46ff +0x05:  sub    $0x20,%esp
084d4702 +0x08:  mov    0x10(%ebp),%eax
084d4705 +0x0b:  mov    %eax,-0xc(%ebp)
084d4708 +0x0e:  lea    -0x18(%ebp),%eax
084d470b +0x11:  mov    %eax,(%esp)
084d470e +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d4713 +0x19:  movl   $0x9b,0x8(%esp)
084d471b +0x21:  movl   $0x0,0x4(%esp)
084d4723 +0x29:  lea    -0x18(%ebp),%eax
084d4726 +0x2c:  mov    %eax,(%esp)
084d4729 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d472e +0x34:  mov    -0xc(%ebp),%eax
084d4731 +0x37:  mov    0xa(%eax),%eax
084d4734 +0x3a:  mov    %eax,0x4(%esp)
084d4738 +0x3e:  lea    -0x18(%ebp),%eax
084d473b +0x41:  mov    %eax,(%esp)
084d473e +0x44:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d4743 +0x49:  mov    -0xc(%ebp),%eax
084d4746 +0x4c:  mov    0xe(%eax),%eax
084d4749 +0x4f:  mov    %eax,0x4(%esp)
084d474d +0x53:  lea    -0x18(%ebp),%eax
084d4750 +0x56:  mov    %eax,(%esp)
084d4753 +0x59:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d4758 +0x5e:  movl   $0x1,0x4(%esp)
084d4760 +0x66:  lea    -0x18(%ebp),%eax
084d4763 +0x69:  mov    %eax,(%esp)
084d4766 +0x6c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d476b +0x71:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d4770 +0x76:  lea    -0x18(%ebp),%edx
084d4773 +0x79:  mov    %edx,0x4(%esp)
084d4777 +0x7d:  mov    %eax,(%esp)
084d477a +0x80:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084d477f +0x85:  mov    -0xc(%ebp),%eax
084d4782 +0x88:  mov    0xe(%eax),%ecx
084d4785 +0x8b:  mov    -0xc(%ebp),%eax
084d4788 +0x8e:  mov    0xa(%eax),%edx
084d478b +0x91:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084d4790 +0x96:  mov    %ecx,0x8(%esp)
084d4794 +0x9a:  mov    %edx,0x4(%esp)
084d4798 +0x9e:  mov    %eax,(%esp)
084d479b +0xa1:  call   084ebe2e <_GLOBAL__I__Z7getUserj+0x2de0>  ; global constructors keyed to getUser(unsigned int)+0x2de0
084d47a0 +0xa6:  mov    $0x0,%ebx
084d47a5 +0xab:  lea    -0x18(%ebp),%eax
084d47a8 +0xae:  mov    %eax,(%esp)
084d47ab +0xb1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d47b0 +0xb6:  mov    %ebx,%eax
084d47b2 +0xb8:  add    $0x20,%esp
084d47b5 +0xbb:  pop    %ebx
084d47b6 +0xbc:  pop    %esi
084d47b7 +0xbd:  pop    %ebp
084d47b8 +0xbe:  ret
084d47b9 +0xbf:  mov    %edx,%ebx
084d47bb +0xc1:  mov    %eax,%esi
084d47bd +0xc3:  lea    -0x18(%ebp),%eax
084d47c0 +0xc6:  mov    %eax,(%esp)
084d47c3 +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d47c8 +0xce:  mov    %esi,%eax
084d47ca +0xd0:  mov    %ebx,%edx
084d47cc +0xd2:  mov    %eax,(%esp)
084d47cf +0xd5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_ReplyPowerWarScore::dispatch_sig @ 0x84d46fa

/* Inter_ReplyPowerWarScore::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyPowerWarScore::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4729 to 084d477e has its CatchHandler @ 084d47b9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x9b);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  CPowerManager::SetPowerWarPoint
            (GlobalData::s_power_manager,*(int *)(local_10 + 10),*(int *)(local_10 + 0xe));
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
