# dispatch_sig

`_ZN18Inter_GMRequestMid12dispatch_sigEP5CUserPci`

`Inter_GMRequestMid::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GMRequestMid` | `0x084d279e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d279e  _ZN18Inter_GMRequestMid12dispatch_sigEP5CUserPci
#           Inter_GMRequestMid::dispatch_sig(CUser*, char*, int)
# range [0x084d279e, 0x084d28bf]
084d279e +0x000:  push   %ebp
084d279f +0x001:  mov    %esp,%ebp
084d27a1 +0x003:  push   %esi
084d27a2 +0x004:  push   %ebx
084d27a3 +0x005:  sub    $0x30,%esp
084d27a6 +0x008:  mov    0xc(%ebp),%eax
084d27a9 +0x00b:  mov    %eax,(%esp)
084d27ac +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d27b1 +0x013:  test   %eax,%eax
084d27b3 +0x015:  sete   %al
084d27b6 +0x018:  test   %al,%al
084d27b8 +0x01a:  je     084d27c4 <+0x26>
084d27ba +0x01c:  mov    $0x0,%ebx
084d27bf +0x021:  jmp    084d28b6 <+0x118>
084d27c4 +0x026:  mov    0x10(%ebp),%eax
084d27c7 +0x029:  mov    %eax,-0x10(%ebp)
084d27ca +0x02c:  lea    -0x1c(%ebp),%eax
084d27cd +0x02f:  mov    %eax,(%esp)
084d27d0 +0x032:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d27d5 +0x037:  lea    -0x1c(%ebp),%eax
084d27d8 +0x03a:  mov    %eax,(%esp)
084d27db +0x03d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084d27e0 +0x042:  movl   $0x7e,0x8(%esp)
084d27e8 +0x04a:  movl   $0x0,0x4(%esp)
084d27f0 +0x052:  lea    -0x1c(%ebp),%eax
084d27f3 +0x055:  mov    %eax,(%esp)
084d27f6 +0x058:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d27fb +0x05d:  mov    -0x10(%ebp),%eax
084d27fe +0x060:  mov    0xe(%eax),%eax
084d2801 +0x063:  mov    %eax,0x4(%esp)
084d2805 +0x067:  lea    -0x1c(%ebp),%eax
084d2808 +0x06a:  mov    %eax,(%esp)
084d280b +0x06d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d2810 +0x072:  mov    -0x10(%ebp),%eax
084d2813 +0x075:  mov    0x12(%eax),%eax
084d2816 +0x078:  mov    %eax,0x4(%esp)
084d281a +0x07c:  lea    -0x1c(%ebp),%eax
084d281d +0x07f:  mov    %eax,(%esp)
084d2820 +0x082:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d2825 +0x087:  mov    -0x10(%ebp),%eax
084d2828 +0x08a:  add    $0x16,%eax
084d282b +0x08d:  mov    %eax,(%esp)
084d282e +0x090:  call   0807e3b0 <_init+0xca8>
084d2833 +0x095:  mov    %eax,-0xc(%ebp)
084d2836 +0x098:  mov    -0xc(%ebp),%eax
084d2839 +0x09b:  mov    %eax,0x4(%esp)
084d283d +0x09f:  lea    -0x1c(%ebp),%eax
084d2840 +0x0a2:  mov    %eax,(%esp)
084d2843 +0x0a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d2848 +0x0aa:  mov    -0x10(%ebp),%eax
084d284b +0x0ad:  lea    0x16(%eax),%edx
084d284e +0x0b0:  mov    -0xc(%ebp),%eax
084d2851 +0x0b3:  mov    %eax,0x8(%esp)
084d2855 +0x0b7:  mov    %edx,0x4(%esp)
084d2859 +0x0bb:  lea    -0x1c(%ebp),%eax
084d285c +0x0be:  mov    %eax,(%esp)
084d285f +0x0c1:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d2864 +0x0c6:  movl   $0x1,0x4(%esp)
084d286c +0x0ce:  lea    -0x1c(%ebp),%eax
084d286f +0x0d1:  mov    %eax,(%esp)
084d2872 +0x0d4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d2877 +0x0d9:  lea    -0x1c(%ebp),%eax
084d287a +0x0dc:  mov    %eax,0x4(%esp)
084d287e +0x0e0:  mov    0xc(%ebp),%eax
084d2881 +0x0e3:  mov    %eax,(%esp)
084d2884 +0x0e6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d2889 +0x0eb:  mov    $0x0,%ebx
084d288e +0x0f0:  lea    -0x1c(%ebp),%eax
084d2891 +0x0f3:  mov    %eax,(%esp)
084d2894 +0x0f6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2899 +0x0fb:  jmp    084d28b6 <+0x118>
084d289b +0x0fd:  mov    %edx,%ebx
084d289d +0x0ff:  mov    %eax,%esi
084d289f +0x101:  lea    -0x1c(%ebp),%eax
084d28a2 +0x104:  mov    %eax,(%esp)
084d28a5 +0x107:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d28aa +0x10c:  mov    %esi,%eax
084d28ac +0x10e:  mov    %ebx,%edx
084d28ae +0x110:  mov    %eax,(%esp)
084d28b1 +0x113:  call   08ae3750 <_Unwind_Resume>
084d28b6 +0x118:  mov    %ebx,%eax
084d28b8 +0x11a:  add    $0x30,%esp
084d28bb +0x11d:  pop    %ebx
084d28bc +0x11e:  pop    %esi
084d28bd +0x11f:  pop    %ebp
084d28be +0x120:  ret
084d28bf +0x121:  nop
```

## 反编译 C

```c
// Inter_GMRequestMid::dispatch_sig @ 0x84d279e

/* Inter_GMRequestMid::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GMRequestMid::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d27db to 084d2888 has its CatchHandler @ 084d289b */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x7e);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xe));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
    local_10 = strlen((char *)(local_14 + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
