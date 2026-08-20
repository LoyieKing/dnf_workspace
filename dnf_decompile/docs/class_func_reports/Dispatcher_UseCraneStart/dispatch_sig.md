# dispatch_sig

`_ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UseCraneStart::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseCraneStart` | `0x0821d2c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821d2c4  _ZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UseCraneStart::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821d2c4, 0x0821d507]
0821d2c4 +0x000:  push   %ebp
0821d2c5 +0x001:  mov    %esp,%ebp
0821d2c7 +0x003:  push   %esi
0821d2c8 +0x004:  push   %ebx
0821d2c9 +0x005:  add    $0xffffff80,%esp
0821d2cc +0x008:  mov    0xc(%ebp),%eax
0821d2cf +0x00b:  mov    %eax,(%esp)
0821d2d2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d2d7 +0x013:  cmp    $0x3,%eax
0821d2da +0x016:  setne  %al
0821d2dd +0x019:  test   %al,%al
0821d2df +0x01b:  je     0821d2eb <+0x27>
0821d2e1 +0x01d:  mov    $0x0,%ebx
0821d2e6 +0x022:  jmp    0821d4fc <+0x238>
0821d2eb +0x027:  movl   $0x0,-0x1c(%ebp)
0821d2f2 +0x02e:  movl   $0x0,-0x18(%ebp)
0821d2f9 +0x035:  movw   $0xffff,-0x1e(%ebp)
0821d2ff +0x03b:  lea    -0x1e(%ebp),%eax
0821d302 +0x03e:  mov    %eax,0x4(%esp)
0821d306 +0x042:  mov    0x10(%ebp),%eax
0821d309 +0x045:  mov    %eax,(%esp)
0821d30c +0x048:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0821d311 +0x04d:  xor    $0x1,%eax
0821d314 +0x050:  test   %al,%al
0821d316 +0x052:  je     0821d343 <+0x7f>
0821d318 +0x054:  movl   $0x0,0xc(%esp)
0821d320 +0x05c:  movl   $0x0,0x8(%esp)
0821d328 +0x064:  movl   $&_ZZN24Dispatcher_UseCraneStart12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d330 +0x06c:  movl   $0xd0e8,(%esp)
0821d337 +0x073:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821d33c +0x078:  mov    %eax,%ebx
0821d33e +0x07a:  jmp    0821d4fc <+0x238>
0821d343 +0x07f:  movl   $0x0,-0x14(%ebp)
0821d34a +0x086:  movzwl -0x1e(%ebp),%eax
0821d34e +0x08a:  movswl %ax,%ebx
0821d351 +0x08d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0821d356 +0x092:  mov    %eax,(%esp)
0821d359 +0x095:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
0821d35e +0x09a:  mov    %ebx,0x8(%esp)
0821d362 +0x09e:  mov    0xc(%ebp),%edx
0821d365 +0x0a1:  mov    %edx,0x4(%esp)
0821d369 +0x0a5:  mov    %eax,(%esp)
0821d36c +0x0a8:  call   080ebe06 <_ZN20CraneMinigameManager16startUseMaterialEP5CUseri>  ; CraneMinigameManager::startUseMaterial(CUser*, int)
0821d371 +0x0ad:  mov    %eax,-0x10(%ebp)
0821d374 +0x0b0:  cmpl   $0x0,-0x10(%ebp)
0821d378 +0x0b4:  je     0821d3a5 <+0xe1>
0821d37a +0x0b6:  movl   $0x4,(%esp)
0821d381 +0x0bd:  call   08725800 <__cxa_allocate_exception>
0821d386 +0x0c2:  mov    %eax,%edx
0821d388 +0x0c4:  mov    -0x10(%ebp),%ecx
0821d38b +0x0c7:  mov    %ecx,(%edx)
0821d38d +0x0c9:  movl   $0x0,0x8(%esp)
0821d395 +0x0d1:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0821d39d +0x0d9:  mov    %eax,(%esp)
0821d3a0 +0x0dc:  call   08724c50 <__cxa_throw>
0821d3a5 +0x0e1:  movzwl -0x1e(%ebp),%eax
0821d3a9 +0x0e5:  movswl %ax,%ebx
0821d3ac +0x0e8:  mov    0xc(%ebp),%eax
0821d3af +0x0eb:  mov    %eax,(%esp)
0821d3b2 +0x0ee:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0821d3b7 +0x0f3:  lea    -0x69(%ebp),%edx
0821d3ba +0x0f6:  mov    %ebx,0xc(%esp)
0821d3be +0x0fa:  movl   $0x1,0x8(%esp)
0821d3c6 +0x102:  mov    %eax,0x4(%esp)
0821d3ca +0x106:  mov    %edx,(%esp)
0821d3cd +0x109:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0821d3d2 +0x10e:  sub    $0x4,%esp
0821d3d5 +0x111:  mov    -0x62(%ebp),%eax
0821d3d8 +0x114:  mov    %eax,-0x14(%ebp)
0821d3db +0x117:  movl   $0x1,0x4(%esp)
0821d3e3 +0x11f:  mov    0xc(%ebp),%eax
0821d3e6 +0x122:  mov    %eax,(%esp)
0821d3e9 +0x125:  call   0868dd18 <_ZN5CUser16setUseCraneStartEb>  ; CUser::setUseCraneStart(bool)
0821d3ee +0x12a:  lea    -0x2c(%ebp),%eax
0821d3f1 +0x12d:  mov    %eax,(%esp)
0821d3f4 +0x130:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821d3f9 +0x135:  movl   $0x1e6,0x8(%esp)
0821d401 +0x13d:  movl   $0x1,0x4(%esp)
0821d409 +0x145:  lea    -0x2c(%ebp),%eax
0821d40c +0x148:  mov    %eax,(%esp)
0821d40f +0x14b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821d414 +0x150:  jmp    0821d471 <+0x1ad>
0821d416 +0x152:  cmp    $0x1,%edx
0821d419 +0x155:  je     0821d423 <+0x15f>
0821d41b +0x157:  mov    %eax,(%esp)
0821d41e +0x15a:  call   08ae3750 <_Unwind_Resume>
0821d423 +0x15f:  mov    %eax,(%esp)
0821d426 +0x162:  call   08725ce0 <__cxa_begin_catch>
0821d42b +0x167:  mov    (%eax),%eax
0821d42d +0x169:  mov    %eax,-0xc(%ebp)
0821d430 +0x16c:  mov    -0xc(%ebp),%eax
0821d433 +0x16f:  movzbl %al,%eax
0821d436 +0x172:  mov    %eax,0x8(%esp)
0821d43a +0x176:  movl   $0x1e6,0x4(%esp)
0821d442 +0x17e:  mov    0xc(%ebp),%eax
0821d445 +0x181:  mov    %eax,(%esp)
0821d448 +0x184:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0821d44d +0x189:  mov    $0x0,%ebx
0821d452 +0x18e:  call   08725c30 <__cxa_end_catch>
0821d457 +0x193:  jmp    0821d4fc <+0x238>
0821d45c +0x198:  mov    %edx,%ebx
0821d45e +0x19a:  mov    %eax,%esi
0821d460 +0x19c:  call   08725c30 <__cxa_end_catch>
0821d465 +0x1a1:  mov    %esi,%eax
0821d467 +0x1a3:  mov    %ebx,%edx
0821d469 +0x1a5:  mov    %eax,(%esp)
0821d46c +0x1a8:  call   08ae3750 <_Unwind_Resume>
0821d471 +0x1ad:  movl   $0x1,0x4(%esp)
0821d479 +0x1b5:  lea    -0x2c(%ebp),%eax
0821d47c +0x1b8:  mov    %eax,(%esp)
0821d47f +0x1bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821d484 +0x1c0:  movzwl -0x1e(%ebp),%eax
0821d488 +0x1c4:  cwtl
0821d489 +0x1c5:  mov    %eax,0x4(%esp)
0821d48d +0x1c9:  lea    -0x2c(%ebp),%eax
0821d490 +0x1cc:  mov    %eax,(%esp)
0821d493 +0x1cf:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0821d498 +0x1d4:  mov    -0x14(%ebp),%eax
0821d49b +0x1d7:  mov    %eax,0x4(%esp)
0821d49f +0x1db:  lea    -0x2c(%ebp),%eax
0821d4a2 +0x1de:  mov    %eax,(%esp)
0821d4a5 +0x1e1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0821d4aa +0x1e6:  movl   $0x1,0x4(%esp)
0821d4b2 +0x1ee:  lea    -0x2c(%ebp),%eax
0821d4b5 +0x1f1:  mov    %eax,(%esp)
0821d4b8 +0x1f4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821d4bd +0x1f9:  lea    -0x2c(%ebp),%eax
0821d4c0 +0x1fc:  mov    %eax,0x4(%esp)
0821d4c4 +0x200:  mov    0xc(%ebp),%eax
0821d4c7 +0x203:  mov    %eax,(%esp)
0821d4ca +0x206:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821d4cf +0x20b:  mov    $0x0,%ebx
0821d4d4 +0x210:  lea    -0x2c(%ebp),%eax
0821d4d7 +0x213:  mov    %eax,(%esp)
0821d4da +0x216:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821d4df +0x21b:  jmp    0821d4fc <+0x238>
0821d4e1 +0x21d:  mov    %edx,%ebx
0821d4e3 +0x21f:  mov    %eax,%esi
0821d4e5 +0x221:  lea    -0x2c(%ebp),%eax
0821d4e8 +0x224:  mov    %eax,(%esp)
0821d4eb +0x227:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821d4f0 +0x22c:  mov    %esi,%eax
0821d4f2 +0x22e:  mov    %ebx,%edx
0821d4f4 +0x230:  mov    %eax,(%esp)
0821d4f7 +0x233:  call   08ae3750 <_Unwind_Resume>
0821d4fc +0x238:  mov    %ebx,%eax
0821d4fe +0x23a:  lea    -0x8(%ebp),%esp
0821d501 +0x23d:  add    $0x0,%esp
0821d504 +0x240:  pop    %ebx
0821d505 +0x241:  pop    %esi
0821d506 +0x242:  pop    %ebp
0821d507 +0x243:  ret
```

## 反编译 C

```c
// Dispatcher_UseCraneStart::dispatch_sig @ 0x821d2c4

/* Dispatcher_UseCraneStart::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseCraneStart::dispatch_sig
          (Dispatcher_UseCraneStart *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  CGameManager *this_00;
  CraneMinigameManager *this_01;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_6d [7];
  int local_66;
  PacketGuard local_30 [14];
  short local_22 [5];
  int local_18;
  int local_14;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    local_22[1] = 0;
    local_22[2] = 0;
    local_22[3] = 0;
    local_22[4] = 0;
    local_22[0] = -1;
    cVar1 = PacketBuf::get_short(param_2,local_22);
    if (cVar1 == '\x01') {
      local_18 = 0;
      iVar2 = (int)local_22[0];
                    /* try { // try from 0821d351 to 0821d3d1 has its CatchHandler @ 0821d416 */
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(this_00);
      local_14 = CraneMinigameManager::startUseMaterial(this_01,param_1,iVar2);
      if (local_14 != 0) {
        piVar3 = (int *)__cxa_allocate_exception(4);
        *piVar3 = local_14;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(piVar3,&ENUM_ERROR::typeinfo,0);
      }
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_6d,iVar2);
      local_18 = local_66;
      CUser::setUseCraneStart(param_1,true);
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0821d40f to 0821d413 has its CatchHandler @ 0821d4e1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x1e6);
                    /* try { // try from 0821d47f to 0821d4ce has its CatchHandler @ 0821d4e1 */
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(int)local_22[0]);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_18);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      uVar4 = 0;
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      uVar4 = LineFunc(0xd0e8,
                       "virtual int Dispatcher_UseCraneStart::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
