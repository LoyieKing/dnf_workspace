# dispatch_sig

`_ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci`

`Inter_ReqQueryCharacInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReqQueryCharacInfo` | `0x084d22fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d22fc  _ZN24Inter_ReqQueryCharacInfo12dispatch_sigEP5CUserPci
#           Inter_ReqQueryCharacInfo::dispatch_sig(CUser*, char*, int)
# range [0x084d22fc, 0x084d24a1]
084d22fc +0x000:  push   %ebp
084d22fd +0x001:  mov    %esp,%ebp
084d22ff +0x003:  push   %esi
084d2300 +0x004:  push   %ebx
084d2301 +0x005:  sub    $0x20,%esp
084d2304 +0x008:  mov    0xc(%ebp),%eax
084d2307 +0x00b:  mov    %eax,(%esp)
084d230a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d230f +0x013:  cmp    $0x2,%eax
084d2312 +0x016:  setle  %al
084d2315 +0x019:  test   %al,%al
084d2317 +0x01b:  je     084d2323 <+0x27>
084d2319 +0x01d:  mov    $0x0,%eax
084d231e +0x022:  jmp    084d249b <+0x19f>
084d2323 +0x027:  mov    0x10(%ebp),%eax
084d2326 +0x02a:  mov    %eax,-0xc(%ebp)
084d2329 +0x02d:  mov    -0xc(%ebp),%eax
084d232c +0x030:  mov    0x20(%eax),%eax
084d232f +0x033:  test   %eax,%eax
084d2331 +0x035:  je     084d2358 <+0x5c>
084d2333 +0x037:  mov    -0xc(%ebp),%eax
084d2336 +0x03a:  mov    0x20(%eax),%eax
084d2339 +0x03d:  movzbl %al,%eax
084d233c +0x040:  mov    %eax,0x8(%esp)
084d2340 +0x044:  movl   $0x8b,0x4(%esp)
084d2348 +0x04c:  mov    0xc(%ebp),%eax
084d234b +0x04f:  mov    %eax,(%esp)
084d234e +0x052:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d2353 +0x057:  jmp    084d2496 <+0x19a>
084d2358 +0x05c:  lea    -0x18(%ebp),%eax
084d235b +0x05f:  mov    %eax,(%esp)
084d235e +0x062:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084d2363 +0x067:  movl   $0x8b,0x8(%esp)
084d236b +0x06f:  movl   $0x1,0x4(%esp)
084d2373 +0x077:  lea    -0x18(%ebp),%eax
084d2376 +0x07a:  mov    %eax,(%esp)
084d2379 +0x07d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084d237e +0x082:  movl   $0x1,0x4(%esp)
084d2386 +0x08a:  lea    -0x18(%ebp),%eax
084d2389 +0x08d:  mov    %eax,(%esp)
084d238c +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2391 +0x095:  mov    -0xc(%ebp),%eax
084d2394 +0x098:  mov    %eax,(%esp)
084d2397 +0x09b:  call   0807e3b0 <_init+0xca8>
084d239c +0x0a0:  mov    %eax,0x4(%esp)
084d23a0 +0x0a4:  lea    -0x18(%ebp),%eax
084d23a3 +0x0a7:  mov    %eax,(%esp)
084d23a6 +0x0aa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084d23ab +0x0af:  mov    -0xc(%ebp),%eax
084d23ae +0x0b2:  mov    %eax,(%esp)
084d23b1 +0x0b5:  call   0807e3b0 <_init+0xca8>
084d23b6 +0x0ba:  mov    %eax,%edx
084d23b8 +0x0bc:  mov    -0xc(%ebp),%eax
084d23bb +0x0bf:  mov    %edx,0x8(%esp)
084d23bf +0x0c3:  mov    %eax,0x4(%esp)
084d23c3 +0x0c7:  lea    -0x18(%ebp),%eax
084d23c6 +0x0ca:  mov    %eax,(%esp)
084d23c9 +0x0cd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084d23ce +0x0d2:  mov    -0xc(%ebp),%eax
084d23d1 +0x0d5:  movzwl 0x2a(%eax),%eax
084d23d5 +0x0d9:  cwtl
084d23d6 +0x0da:  mov    %eax,0x4(%esp)
084d23da +0x0de:  lea    -0x18(%ebp),%eax
084d23dd +0x0e1:  mov    %eax,(%esp)
084d23e0 +0x0e4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084d23e5 +0x0e9:  mov    -0xc(%ebp),%eax
084d23e8 +0x0ec:  movzbl 0x28(%eax),%eax
084d23ec +0x0f0:  movsbl %al,%eax
084d23ef +0x0f3:  mov    %eax,0x4(%esp)
084d23f3 +0x0f7:  lea    -0x18(%ebp),%eax
084d23f6 +0x0fa:  mov    %eax,(%esp)
084d23f9 +0x0fd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d23fe +0x102:  mov    -0xc(%ebp),%eax
084d2401 +0x105:  movzbl 0x2c(%eax),%eax
084d2405 +0x109:  movsbl %al,%eax
084d2408 +0x10c:  mov    %eax,0x4(%esp)
084d240c +0x110:  lea    -0x18(%ebp),%eax
084d240f +0x113:  mov    %eax,(%esp)
084d2412 +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2417 +0x11b:  mov    -0xc(%ebp),%eax
084d241a +0x11e:  movzbl 0x2d(%eax),%eax
084d241e +0x122:  movsbl %al,%eax
084d2421 +0x125:  mov    %eax,0x4(%esp)
084d2425 +0x129:  lea    -0x18(%ebp),%eax
084d2428 +0x12c:  mov    %eax,(%esp)
084d242b +0x12f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2430 +0x134:  mov    -0xc(%ebp),%eax
084d2433 +0x137:  movzbl 0x2e(%eax),%eax
084d2437 +0x13b:  movsbl %al,%eax
084d243a +0x13e:  mov    %eax,0x4(%esp)
084d243e +0x142:  lea    -0x18(%ebp),%eax
084d2441 +0x145:  mov    %eax,(%esp)
084d2444 +0x148:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084d2449 +0x14d:  movl   $0x1,0x4(%esp)
084d2451 +0x155:  lea    -0x18(%ebp),%eax
084d2454 +0x158:  mov    %eax,(%esp)
084d2457 +0x15b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084d245c +0x160:  lea    -0x18(%ebp),%eax
084d245f +0x163:  mov    %eax,0x4(%esp)
084d2463 +0x167:  mov    0xc(%ebp),%eax
084d2466 +0x16a:  mov    %eax,(%esp)
084d2469 +0x16d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084d246e +0x172:  jmp    084d248b <+0x18f>
084d2470 +0x174:  mov    %edx,%ebx
084d2472 +0x176:  mov    %eax,%esi
084d2474 +0x178:  lea    -0x18(%ebp),%eax
084d2477 +0x17b:  mov    %eax,(%esp)
084d247a +0x17e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d247f +0x183:  mov    %esi,%eax
084d2481 +0x185:  mov    %ebx,%edx
084d2483 +0x187:  mov    %eax,(%esp)
084d2486 +0x18a:  call   08ae3750 <_Unwind_Resume>
084d248b +0x18f:  lea    -0x18(%ebp),%eax
084d248e +0x192:  mov    %eax,(%esp)
084d2491 +0x195:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084d2496 +0x19a:  mov    $0x0,%eax
084d249b +0x19f:  add    $0x20,%esp
084d249e +0x1a2:  pop    %ebx
084d249f +0x1a3:  pop    %esi
084d24a0 +0x1a4:  pop    %ebp
084d24a1 +0x1a5:  ret
```

## 反编译 C

```c
// Inter_ReqQueryCharacInfo::dispatch_sig @ 0x84d22fc

/* Inter_ReqQueryCharacInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqQueryCharacInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  PacketGuard local_1c [12];
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = (char *)param_3;
    if (*(int *)(param_3 + 0x20) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d2379 to 084d246d has its CatchHandler @ 084d2470 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x8b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar2);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,local_10,sVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x2a))
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x28]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2c]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2d]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2e]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x8b,*(uint *)(param_3 + 0x20) & 0xff);
    }
  }
  return 0;
}
```
