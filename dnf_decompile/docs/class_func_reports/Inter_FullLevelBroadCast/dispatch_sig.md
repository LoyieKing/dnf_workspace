# dispatch_sig

`_ZN24Inter_FullLevelBroadCast12dispatch_sigEP5CUserPci`

`Inter_FullLevelBroadCast::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_FullLevelBroadCast` | `0x084e0816` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e0816  _ZN24Inter_FullLevelBroadCast12dispatch_sigEP5CUserPci
#           Inter_FullLevelBroadCast::dispatch_sig(CUser*, char*, int)
# range [0x084e0816, 0x084e08f7]
084e0816 +0x00:  push   %ebp
084e0817 +0x01:  mov    %esp,%ebp
084e0819 +0x03:  push   %esi
084e081a +0x04:  push   %ebx
084e081b +0x05:  sub    $0x20,%esp
084e081e +0x08:  mov    0x10(%ebp),%eax
084e0821 +0x0b:  mov    %eax,-0xc(%ebp)
084e0824 +0x0e:  lea    -0x18(%ebp),%eax
084e0827 +0x11:  mov    %eax,(%esp)
084e082a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e082f +0x19:  movl   $0x56,0x8(%esp)
084e0837 +0x21:  movl   $0x0,0x4(%esp)
084e083f +0x29:  lea    -0x18(%ebp),%eax
084e0842 +0x2c:  mov    %eax,(%esp)
084e0845 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e084a +0x34:  movl   $0x6,0x4(%esp)
084e0852 +0x3c:  lea    -0x18(%ebp),%eax
084e0855 +0x3f:  mov    %eax,(%esp)
084e0858 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e085d +0x47:  mov    -0xc(%ebp),%eax
084e0860 +0x4a:  add    $0xa,%eax
084e0863 +0x4d:  mov    %eax,(%esp)
084e0866 +0x50:  call   0807e3b0 <_init+0xca8>
084e086b +0x55:  mov    %eax,0x4(%esp)
084e086f +0x59:  lea    -0x18(%ebp),%eax
084e0872 +0x5c:  mov    %eax,(%esp)
084e0875 +0x5f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e087a +0x64:  mov    -0xc(%ebp),%eax
084e087d +0x67:  add    $0xa,%eax
084e0880 +0x6a:  mov    %eax,(%esp)
084e0883 +0x6d:  call   0807e3b0 <_init+0xca8>
084e0888 +0x72:  mov    -0xc(%ebp),%edx
084e088b +0x75:  add    $0xa,%edx
084e088e +0x78:  mov    %eax,0x8(%esp)
084e0892 +0x7c:  mov    %edx,0x4(%esp)
084e0896 +0x80:  lea    -0x18(%ebp),%eax
084e0899 +0x83:  mov    %eax,(%esp)
084e089c +0x86:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e08a1 +0x8b:  movl   $0x1,0x4(%esp)
084e08a9 +0x93:  lea    -0x18(%ebp),%eax
084e08ac +0x96:  mov    %eax,(%esp)
084e08af +0x99:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e08b4 +0x9e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e08b9 +0xa3:  lea    -0x18(%ebp),%edx
084e08bc +0xa6:  mov    %edx,0x4(%esp)
084e08c0 +0xaa:  mov    %eax,(%esp)
084e08c3 +0xad:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084e08c8 +0xb2:  mov    $0x0,%ebx
084e08cd +0xb7:  lea    -0x18(%ebp),%eax
084e08d0 +0xba:  mov    %eax,(%esp)
084e08d3 +0xbd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e08d8 +0xc2:  mov    %ebx,%eax
084e08da +0xc4:  add    $0x20,%esp
084e08dd +0xc7:  pop    %ebx
084e08de +0xc8:  pop    %esi
084e08df +0xc9:  pop    %ebp
084e08e0 +0xca:  ret
084e08e1 +0xcb:  mov    %edx,%ebx
084e08e3 +0xcd:  mov    %eax,%esi
084e08e5 +0xcf:  lea    -0x18(%ebp),%eax
084e08e8 +0xd2:  mov    %eax,(%esp)
084e08eb +0xd5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e08f0 +0xda:  mov    %esi,%eax
084e08f2 +0xdc:  mov    %ebx,%edx
084e08f4 +0xde:  mov    %eax,(%esp)
084e08f7 +0xe1:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_FullLevelBroadCast::dispatch_sig @ 0x84e0816

/* Inter_FullLevelBroadCast::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_FullLevelBroadCast::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e0845 to 084e08c7 has its CatchHandler @ 084e08e1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,6);
  sVar1 = strlen((char *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar1);
  sVar1 = strlen((char *)(local_10 + 10));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 10),sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
