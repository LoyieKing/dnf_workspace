# SendMessageToCUser

`_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc`

`TowerOfDespairMgr::SendMessageToCUser(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08644366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08644366  _ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc
#           TowerOfDespairMgr::SendMessageToCUser(CUser*, char*)
# range [0x08644366, 0x0864446f]
08644366 +0x000:  push   %ebp
08644367 +0x001:  mov    %esp,%ebp
08644369 +0x003:  push   %esi
0864436a +0x004:  push   %ebx
0864436b +0x005:  sub    $0x20,%esp
0864436e +0x008:  mov    0x8(%ebp),%eax
08644371 +0x00b:  mov    %eax,(%esp)
08644374 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08644379 +0x013:  test   %al,%al
0864437b +0x015:  je     08644468 <+0x102>
08644381 +0x01b:  lea    -0x14(%ebp),%eax
08644384 +0x01e:  mov    %eax,(%esp)
08644387 +0x021:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0864438c +0x026:  movl   $0xc,0x8(%esp)
08644394 +0x02e:  movl   $0x0,0x4(%esp)
0864439c +0x036:  lea    -0x14(%ebp),%eax
0864439f +0x039:  mov    %eax,(%esp)
086443a2 +0x03c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086443a7 +0x041:  movl   $0x0,0x4(%esp)
086443af +0x049:  lea    -0x14(%ebp),%eax
086443b2 +0x04c:  mov    %eax,(%esp)
086443b5 +0x04f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086443ba +0x054:  movl   $0x0,0x4(%esp)
086443c2 +0x05c:  lea    -0x14(%ebp),%eax
086443c5 +0x05f:  mov    %eax,(%esp)
086443c8 +0x062:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086443cd +0x067:  movl   $0x0,0x4(%esp)
086443d5 +0x06f:  lea    -0x14(%ebp),%eax
086443d8 +0x072:  mov    %eax,(%esp)
086443db +0x075:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086443e0 +0x07a:  mov    0xc(%ebp),%eax
086443e3 +0x07d:  mov    %eax,(%esp)
086443e6 +0x080:  call   0807e3b0 <_init+0xca8>
086443eb +0x085:  mov    %eax,0x4(%esp)
086443ef +0x089:  lea    -0x14(%ebp),%eax
086443f2 +0x08c:  mov    %eax,(%esp)
086443f5 +0x08f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086443fa +0x094:  mov    0xc(%ebp),%eax
086443fd +0x097:  mov    %eax,(%esp)
08644400 +0x09a:  call   0807e3b0 <_init+0xca8>
08644405 +0x09f:  mov    %eax,0x8(%esp)
08644409 +0x0a3:  mov    0xc(%ebp),%eax
0864440c +0x0a6:  mov    %eax,0x4(%esp)
08644410 +0x0aa:  lea    -0x14(%ebp),%eax
08644413 +0x0ad:  mov    %eax,(%esp)
08644416 +0x0b0:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0864441b +0x0b5:  movl   $0x1,0x4(%esp)
08644423 +0x0bd:  lea    -0x14(%ebp),%eax
08644426 +0x0c0:  mov    %eax,(%esp)
08644429 +0x0c3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0864442e +0x0c8:  lea    -0x14(%ebp),%eax
08644431 +0x0cb:  mov    %eax,0x4(%esp)
08644435 +0x0cf:  mov    0x8(%ebp),%eax
08644438 +0x0d2:  mov    %eax,(%esp)
0864443b +0x0d5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08644440 +0x0da:  jmp    0864445d <+0xf7>
08644442 +0x0dc:  mov    %edx,%ebx
08644444 +0x0de:  mov    %eax,%esi
08644446 +0x0e0:  lea    -0x14(%ebp),%eax
08644449 +0x0e3:  mov    %eax,(%esp)
0864444c +0x0e6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08644451 +0x0eb:  mov    %esi,%eax
08644453 +0x0ed:  mov    %ebx,%edx
08644455 +0x0ef:  mov    %eax,(%esp)
08644458 +0x0f2:  call   08ae3750 <_Unwind_Resume>
0864445d +0x0f7:  lea    -0x14(%ebp),%eax
08644460 +0x0fa:  mov    %eax,(%esp)
08644463 +0x0fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08644468 +0x102:  add    $0x20,%esp
0864446b +0x105:  pop    %ebx
0864446c +0x106:  pop    %esi
0864446d +0x107:  pop    %ebp
0864446e +0x108:  ret
0864446f +0x109:  nop
```

## 反编译 C

```c
// TowerOfDespairMgr::SendMessageToCUser @ 0x8644366

/* TowerOfDespairMgr::SendMessageToCUser(CUser*, char*) */

void TowerOfDespairMgr::SendMessageToCUser(CUser *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086443a2 to 0864443f has its CatchHandler @ 08644442 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar2);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_2,sVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
