# SendPowerWarUserStatueInfo

`_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser`

`CPowerManager::SendPowerWarUserStatueInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f200  _ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser
#           CPowerManager::SendPowerWarUserStatueInfo(CUser*)
# range [0x0847f200, 0x0847f4fd]
0847f200 +0x000:  push   %ebp
0847f201 +0x001:  mov    %esp,%ebp
0847f203 +0x003:  push   %esi
0847f204 +0x004:  push   %ebx
0847f205 +0x005:  sub    $0x30,%esp
0847f208 +0x008:  lea    -0x28(%ebp),%eax
0847f20b +0x00b:  mov    %eax,(%esp)
0847f20e +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0847f213 +0x013:  movl   $0xb6,0x8(%esp)
0847f21b +0x01b:  movl   $0x0,0x4(%esp)
0847f223 +0x023:  lea    -0x28(%ebp),%eax
0847f226 +0x026:  mov    %eax,(%esp)
0847f229 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0847f22e +0x02e:  movl   $0x0,-0x1c(%ebp)
0847f235 +0x035:  movl   $0x0,-0x14(%ebp)
0847f23c +0x03c:  jmp    0847f262 <+0x62>
0847f23e +0x03e:  mov    -0x14(%ebp),%eax
0847f241 +0x041:  mov    0x8(%ebp),%edx
0847f244 +0x044:  shl    $0x2,%eax
0847f247 +0x047:  mov    %eax,%ecx
0847f249 +0x049:  shl    $0x5,%ecx
0847f24c +0x04c:  add    %ecx,%eax
0847f24e +0x04e:  lea    (%edx,%eax,1),%eax
0847f251 +0x051:  add    $0x2c,%eax
0847f254 +0x054:  mov    (%eax),%eax
0847f256 +0x056:  test   %eax,%eax
0847f258 +0x058:  je     0847f25e <+0x5e>
0847f25a +0x05a:  addl   $0x1,-0x1c(%ebp)
0847f25e +0x05e:  addl   $0x1,-0x14(%ebp)
0847f262 +0x062:  mov    -0x14(%ebp),%eax
0847f265 +0x065:  cmp    $0x2,%eax
0847f268 +0x068:  setbe  %al
0847f26b +0x06b:  test   %al,%al
0847f26d +0x06d:  jne    0847f23e <+0x3e>
0847f26f +0x06f:  mov    -0x1c(%ebp),%eax
0847f272 +0x072:  movsbl %al,%eax
0847f275 +0x075:  mov    %eax,0x4(%esp)
0847f279 +0x079:  lea    -0x28(%ebp),%eax
0847f27c +0x07c:  mov    %eax,(%esp)
0847f27f +0x07f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f284 +0x084:  movl   $0x0,-0x18(%ebp)
0847f28b +0x08b:  movl   $0x0,-0x10(%ebp)
0847f292 +0x092:  jmp    0847f47c <+0x27c>
0847f297 +0x097:  mov    -0x10(%ebp),%eax
0847f29a +0x09a:  shl    $0x2,%eax
0847f29d +0x09d:  mov    %eax,%edx
0847f29f +0x09f:  shl    $0x5,%edx
0847f2a2 +0x0a2:  add    %edx,%eax
0847f2a4 +0x0a4:  add    $0x20,%eax
0847f2a7 +0x0a7:  add    0x8(%ebp),%eax
0847f2aa +0x0aa:  add    $0x10,%eax
0847f2ad +0x0ad:  mov    %eax,(%esp)
0847f2b0 +0x0b0:  call   0807e3b0 <_init+0xca8>
0847f2b5 +0x0b5:  mov    %eax,-0x18(%ebp)
0847f2b8 +0x0b8:  mov    -0x18(%ebp),%eax
0847f2bb +0x0bb:  mov    %eax,0x4(%esp)
0847f2bf +0x0bf:  lea    -0x28(%ebp),%eax
0847f2c2 +0x0c2:  mov    %eax,(%esp)
0847f2c5 +0x0c5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f2ca +0x0ca:  mov    -0x10(%ebp),%eax
0847f2cd +0x0cd:  shl    $0x2,%eax
0847f2d0 +0x0d0:  mov    %eax,%edx
0847f2d2 +0x0d2:  shl    $0x5,%edx
0847f2d5 +0x0d5:  add    %edx,%eax
0847f2d7 +0x0d7:  add    $0x20,%eax
0847f2da +0x0da:  add    0x8(%ebp),%eax
0847f2dd +0x0dd:  lea    0x10(%eax),%edx
0847f2e0 +0x0e0:  mov    -0x18(%ebp),%eax
0847f2e3 +0x0e3:  mov    %eax,0x8(%esp)
0847f2e7 +0x0e7:  mov    %edx,0x4(%esp)
0847f2eb +0x0eb:  lea    -0x28(%ebp),%eax
0847f2ee +0x0ee:  mov    %eax,(%esp)
0847f2f1 +0x0f1:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0847f2f6 +0x0f6:  mov    -0x10(%ebp),%eax
0847f2f9 +0x0f9:  mov    0x8(%ebp),%edx
0847f2fc +0x0fc:  shl    $0x2,%eax
0847f2ff +0x0ff:  mov    %eax,%ecx
0847f301 +0x101:  shl    $0x5,%ecx
0847f304 +0x104:  add    %ecx,%eax
0847f306 +0x106:  lea    (%edx,%eax,1),%eax
0847f309 +0x109:  add    $0x40,%eax
0847f30c +0x10c:  movzbl 0xe(%eax),%eax
0847f310 +0x110:  movsbl %al,%eax
0847f313 +0x113:  mov    %eax,0x4(%esp)
0847f317 +0x117:  lea    -0x28(%ebp),%eax
0847f31a +0x11a:  mov    %eax,(%esp)
0847f31d +0x11d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f322 +0x122:  mov    -0x10(%ebp),%eax
0847f325 +0x125:  mov    0x8(%ebp),%edx
0847f328 +0x128:  shl    $0x2,%eax
0847f32b +0x12b:  mov    %eax,%ecx
0847f32d +0x12d:  shl    $0x5,%ecx
0847f330 +0x130:  add    %ecx,%eax
0847f332 +0x132:  lea    (%edx,%eax,1),%eax
0847f335 +0x135:  add    $0x40,%eax
0847f338 +0x138:  movzbl 0xf(%eax),%eax
0847f33c +0x13c:  movsbl %al,%eax
0847f33f +0x13f:  mov    %eax,0x4(%esp)
0847f343 +0x143:  lea    -0x28(%ebp),%eax
0847f346 +0x146:  mov    %eax,(%esp)
0847f349 +0x149:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f34e +0x14e:  mov    -0x10(%ebp),%eax
0847f351 +0x151:  mov    0x8(%ebp),%edx
0847f354 +0x154:  shl    $0x2,%eax
0847f357 +0x157:  mov    %eax,%ecx
0847f359 +0x159:  shl    $0x5,%ecx
0847f35c +0x15c:  add    %ecx,%eax
0847f35e +0x15e:  lea    (%edx,%eax,1),%eax
0847f361 +0x161:  add    $0x40,%eax
0847f364 +0x164:  movzbl 0x10(%eax),%eax
0847f368 +0x168:  movsbl %al,%eax
0847f36b +0x16b:  mov    %eax,0x4(%esp)
0847f36f +0x16f:  lea    -0x28(%ebp),%eax
0847f372 +0x172:  mov    %eax,(%esp)
0847f375 +0x175:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0847f37a +0x17a:  mov    -0x10(%ebp),%eax
0847f37d +0x17d:  shl    $0x2,%eax
0847f380 +0x180:  mov    %eax,%edx
0847f382 +0x182:  shl    $0x5,%edx
0847f385 +0x185:  add    %edx,%eax
0847f387 +0x187:  add    $0x40,%eax
0847f38a +0x18a:  add    0x8(%ebp),%eax
0847f38d +0x18d:  add    $0x11,%eax
0847f390 +0x190:  mov    %eax,(%esp)
0847f393 +0x193:  call   0807e3b0 <_init+0xca8>
0847f398 +0x198:  mov    %eax,-0x18(%ebp)
0847f39b +0x19b:  mov    -0x18(%ebp),%eax
0847f39e +0x19e:  mov    %eax,0x4(%esp)
0847f3a2 +0x1a2:  lea    -0x28(%ebp),%eax
0847f3a5 +0x1a5:  mov    %eax,(%esp)
0847f3a8 +0x1a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f3ad +0x1ad:  mov    -0x10(%ebp),%eax
0847f3b0 +0x1b0:  shl    $0x2,%eax
0847f3b3 +0x1b3:  mov    %eax,%edx
0847f3b5 +0x1b5:  shl    $0x5,%edx
0847f3b8 +0x1b8:  add    %edx,%eax
0847f3ba +0x1ba:  add    $0x40,%eax
0847f3bd +0x1bd:  add    0x8(%ebp),%eax
0847f3c0 +0x1c0:  lea    0x11(%eax),%edx
0847f3c3 +0x1c3:  mov    -0x18(%ebp),%eax
0847f3c6 +0x1c6:  mov    %eax,0x8(%esp)
0847f3ca +0x1ca:  mov    %edx,0x4(%esp)
0847f3ce +0x1ce:  lea    -0x28(%ebp),%eax
0847f3d1 +0x1d1:  mov    %eax,(%esp)
0847f3d4 +0x1d4:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0847f3d9 +0x1d9:  mov    -0x10(%ebp),%eax
0847f3dc +0x1dc:  mov    0x8(%ebp),%edx
0847f3df +0x1df:  shl    $0x2,%eax
0847f3e2 +0x1e2:  mov    %eax,%ecx
0847f3e4 +0x1e4:  shl    $0x5,%ecx
0847f3e7 +0x1e7:  add    %ecx,%eax
0847f3e9 +0x1e9:  lea    (%edx,%eax,1),%eax
0847f3ec +0x1ec:  add    $0x7c,%eax
0847f3ef +0x1ef:  mov    (%eax),%eax
0847f3f1 +0x1f1:  mov    %eax,0x4(%esp)
0847f3f5 +0x1f5:  lea    -0x28(%ebp),%eax
0847f3f8 +0x1f8:  mov    %eax,(%esp)
0847f3fb +0x1fb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f400 +0x200:  movl   $0x0,-0xc(%ebp)
0847f407 +0x207:  jmp    0847f46d <+0x26d>
0847f409 +0x209:  mov    -0x10(%ebp),%edx
0847f40c +0x20c:  mov    -0xc(%ebp),%ebx
0847f40f +0x20f:  mov    0x8(%ebp),%ecx
0847f412 +0x212:  mov    %edx,%eax
0847f414 +0x214:  shl    $0x5,%eax
0847f417 +0x217:  add    %edx,%eax
0847f419 +0x219:  add    %ebx,%eax
0847f41b +0x21b:  add    $0x1c,%eax
0847f41e +0x21e:  mov    0x10(%ecx,%eax,4),%eax
0847f422 +0x222:  test   %eax,%eax
0847f424 +0x224:  je     0847f42c <+0x22c>
0847f426 +0x226:  cmpl   $0x9,-0xc(%ebp)
0847f42a +0x22a:  jne    0847f441 <+0x241>
0847f42c +0x22c:  movl   $0xffffffff,0x4(%esp)
0847f434 +0x234:  lea    -0x28(%ebp),%eax
0847f437 +0x237:  mov    %eax,(%esp)
0847f43a +0x23a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f43f +0x23f:  jmp    0847f469 <+0x269>
0847f441 +0x241:  mov    -0x10(%ebp),%edx
0847f444 +0x244:  mov    -0xc(%ebp),%ebx
0847f447 +0x247:  mov    0x8(%ebp),%ecx
0847f44a +0x24a:  mov    %edx,%eax
0847f44c +0x24c:  shl    $0x5,%eax
0847f44f +0x24f:  add    %edx,%eax
0847f451 +0x251:  add    %ebx,%eax
0847f453 +0x253:  add    $0x1c,%eax
0847f456 +0x256:  mov    0x10(%ecx,%eax,4),%eax
0847f45a +0x25a:  mov    %eax,0x4(%esp)
0847f45e +0x25e:  lea    -0x28(%ebp),%eax
0847f461 +0x261:  mov    %eax,(%esp)
0847f464 +0x264:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0847f469 +0x269:  addl   $0x1,-0xc(%ebp)
0847f46d +0x26d:  cmpl   $0xa,-0xc(%ebp)
0847f471 +0x271:  setle  %al
0847f474 +0x274:  test   %al,%al
0847f476 +0x276:  jne    0847f409 <+0x209>
0847f478 +0x278:  addl   $0x1,-0x10(%ebp)
0847f47c +0x27c:  mov    -0x10(%ebp),%eax
0847f47f +0x27f:  cmp    -0x1c(%ebp),%eax
0847f482 +0x282:  setl   %al
0847f485 +0x285:  test   %al,%al
0847f487 +0x287:  jne    0847f297 <+0x97>
0847f48d +0x28d:  movl   $0x1,0x4(%esp)
0847f495 +0x295:  lea    -0x28(%ebp),%eax
0847f498 +0x298:  mov    %eax,(%esp)
0847f49b +0x29b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0847f4a0 +0x2a0:  cmpl   $0x0,0xc(%ebp)
0847f4a4 +0x2a4:  je     0847f4ba <+0x2ba>
0847f4a6 +0x2a6:  lea    -0x28(%ebp),%eax
0847f4a9 +0x2a9:  mov    %eax,0x4(%esp)
0847f4ad +0x2ad:  mov    0xc(%ebp),%eax
0847f4b0 +0x2b0:  mov    %eax,(%esp)
0847f4b3 +0x2b3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0847f4b8 +0x2b8:  jmp    0847f4eb <+0x2eb>
0847f4ba +0x2ba:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0847f4bf +0x2bf:  lea    -0x28(%ebp),%edx
0847f4c2 +0x2c2:  mov    %edx,0x4(%esp)
0847f4c6 +0x2c6:  mov    %eax,(%esp)
0847f4c9 +0x2c9:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0847f4ce +0x2ce:  jmp    0847f4eb <+0x2eb>
0847f4d0 +0x2d0:  mov    %edx,%ebx
0847f4d2 +0x2d2:  mov    %eax,%esi
0847f4d4 +0x2d4:  lea    -0x28(%ebp),%eax
0847f4d7 +0x2d7:  mov    %eax,(%esp)
0847f4da +0x2da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0847f4df +0x2df:  mov    %esi,%eax
0847f4e1 +0x2e1:  mov    %ebx,%edx
0847f4e3 +0x2e3:  mov    %eax,(%esp)
0847f4e6 +0x2e6:  call   08ae3750 <_Unwind_Resume>
0847f4eb +0x2eb:  lea    -0x28(%ebp),%eax
0847f4ee +0x2ee:  mov    %eax,(%esp)
0847f4f1 +0x2f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0847f4f6 +0x2f6:  add    $0x30,%esp
0847f4f9 +0x2f9:  pop    %ebx
0847f4fa +0x2fa:  pop    %esi
0847f4fb +0x2fb:  pop    %ebp
0847f4fc +0x2fc:  ret
0847f4fd +0x2fd:  nop
```

## 反编译 C

```c
// CPowerManager::SendPowerWarUserStatueInfo @ 0x847f200

/* CPowerManager::SendPowerWarUserStatueInfo(CUser*) */

void __thiscall CPowerManager::SendPowerWarUserStatueInfo(CPowerManager *this,CUser *param_1)

{
  GameWorld *this_00;
  PacketGuard local_2c [12];
  int local_20;
  size_t local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0847f229 to 0847f4cd has its CatchHandler @ 0847f4d0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xb6);
  local_20 = 0;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    if (*(int *)(this + local_18 * 0x84 + 0x2c) != 0) {
      local_20 = local_20 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20);
  local_1c = 0;
  for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
    local_1c = strlen((char *)(this + local_14 * 0x84 + 0x30));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_2c,(char *)(this + local_14 * 0x84 + 0x30),local_1c);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_2c,(int)(char)this[local_14 * 0x84 + 0x4e]);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_2c,(int)(char)this[local_14 * 0x84 + 0x4f]);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_2c,(int)(char)this[local_14 * 0x84 + 0x50]);
    local_1c = strlen((char *)(this + local_14 * 0x84 + 0x51));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_2c,(char *)(this + local_14 * 0x84 + 0x51),local_1c);
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_2c,*(int *)(this + local_14 * 0x84 + 0x7c));
    for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
      if ((*(int *)(this + (local_14 * 0x21 + local_10 + 0x1c) * 4 + 0x10) == 0) || (local_10 == 9))
      {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,-1);
      }
      else {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_2c,
                   *(int *)(this + (local_14 * 0x21 + local_10 + 0x1c) * 4 + 0x10));
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  if (param_1 == (CUser *)0x0) {
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_2c);
  }
  else {
    CUser::Send(param_1,local_2c);
  }
  PacketGuard::~PacketGuard(local_2c);
  return;
}
```
