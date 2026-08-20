# WarRoomCountManageTest

`_ZN12CGameManager22WarRoomCountManageTestEi`

`CGameManager::WarRoomCountManageTest(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a2c08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a2c08  _ZN12CGameManager22WarRoomCountManageTestEi
#           CGameManager::WarRoomCountManageTest(int)
# range [0x082a2c08, 0x082a2f93]
082a2c08 +0x000:  push   %ebp
082a2c09 +0x001:  mov    %esp,%ebp
082a2c0b +0x003:  push   %edi
082a2c0c +0x004:  push   %esi
082a2c0d +0x005:  push   %ebx
082a2c0e +0x006:  sub    $0xac,%esp
082a2c14 +0x00c:  lea    -0x8c(%ebp),%ebx
082a2c1a +0x012:  mov    $0x0,%eax
082a2c1f +0x017:  mov    $0xa,%edx
082a2c24 +0x01c:  mov    %ebx,%edi
082a2c26 +0x01e:  mov    %edx,%ecx
082a2c28 +0x020:  rep stos %eax,%es:(%edi)
082a2c2a +0x022:  movl   $0x0,-0x54(%ebp)
082a2c31 +0x029:  movl   $0x0,-0x48(%ebp)
082a2c38 +0x030:  jmp    082a2cf6 <+0xee>
082a2c3d +0x035:  movl   $0x0,-0x44(%ebp)
082a2c44 +0x03c:  jmp    082a2cca <+0xc2>
082a2c49 +0x041:  mov    -0x54(%ebp),%eax
082a2c4c +0x044:  addl   $0x1,-0x54(%ebp)
082a2c50 +0x048:  mov    %eax,0x4(%esp)
082a2c54 +0x04c:  mov    0x8(%ebp),%eax
082a2c57 +0x04f:  mov    %eax,(%esp)
082a2c5a +0x052:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
082a2c5f +0x057:  mov    %eax,-0x40(%ebp)
082a2c62 +0x05a:  cmpl   $0x0,-0x40(%ebp)
082a2c66 +0x05e:  jne    082a2c9d <+0x95>
082a2c68 +0x060:  mov    -0x54(%ebp),%eax
082a2c6b +0x063:  mov    %eax,0x14(%esp)
082a2c6f +0x067:  movl   $"WarRoomCountManage Error : WarRoom does not exist %d",0x10(%esp)
082a2c77 +0x06f:  movl   $0x30e2,0xc(%esp)
082a2c7f +0x077:  movl   $&_ZZN12CGameManager22WarRoomCountManageTestEiE19__PRETTY_FUNCTION__,0x8(%esp)
082a2c87 +0x07f:  movl   $"App.cpp",0x4(%esp)
082a2c8f +0x087:  movl   $0x1,(%esp)
082a2c96 +0x08e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082a2c9b +0x093:  jmp    082a2cc6 <+0xbe>
082a2c9d +0x095:  mov    -0x40(%ebp),%eax
082a2ca0 +0x098:  mov    %eax,(%esp)
082a2ca3 +0x09b:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
082a2ca8 +0x0a0:  cmp    $0xffffffff,%eax
082a2cab +0x0a3:  setne  %al
082a2cae +0x0a6:  test   %al,%al
082a2cb0 +0x0a8:  je     082a2cc6 <+0xbe>
082a2cb2 +0x0aa:  mov    -0x48(%ebp),%eax
082a2cb5 +0x0ad:  mov    -0x8c(%ebp,%eax,4),%edx
082a2cbc +0x0b4:  add    $0x1,%edx
082a2cbf +0x0b7:  mov    %edx,-0x8c(%ebp,%eax,4)
082a2cc6 +0x0be:  addl   $0x1,-0x44(%ebp)
082a2cca +0x0c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a2ccf +0x0c7:  lea    0x87b4(%eax),%edx
082a2cd5 +0x0cd:  mov    -0x48(%ebp),%eax
082a2cd8 +0x0d0:  mov    %eax,0x4(%esp)
082a2cdc +0x0d4:  mov    %edx,(%esp)
082a2cdf +0x0d7:  call   082a3d80 <_GLOBAL__I__ZN4CLog5this_E+0x1a7>  ; global constructors keyed to CLog::this_+0x1a7
082a2ce4 +0x0dc:  cmp    -0x44(%ebp),%eax
082a2ce7 +0x0df:  setg   %al
082a2cea +0x0e2:  test   %al,%al
082a2cec +0x0e4:  jne    082a2c49 <+0x41>
082a2cf2 +0x0ea:  addl   $0x1,-0x48(%ebp)
082a2cf6 +0x0ee:  cmpl   $0x9,-0x48(%ebp)
082a2cfa +0x0f2:  setle  %al
082a2cfd +0x0f5:  test   %al,%al
082a2cff +0x0f7:  jne    082a2c3d <+0x35>
082a2d05 +0x0fd:  mov    0xc(%ebp),%eax
082a2d08 +0x100:  mov    %eax,-0x50(%ebp)
082a2d0b +0x103:  lea    -0x60(%ebp),%eax
082a2d0e +0x106:  mov    %eax,(%esp)
082a2d11 +0x109:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082a2d16 +0x10e:  movl   $0x58,0x8(%esp)
082a2d1e +0x116:  movl   $0x0,0x4(%esp)
082a2d26 +0x11e:  lea    -0x60(%ebp),%eax
082a2d29 +0x121:  mov    %eax,(%esp)
082a2d2c +0x124:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082a2d31 +0x129:  lea    -0x60(%ebp),%eax
082a2d34 +0x12c:  mov    %eax,(%esp)
082a2d37 +0x12f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082a2d3c +0x134:  mov    %eax,-0x64(%ebp)
082a2d3f +0x137:  movl   $0x0,0x4(%esp)
082a2d47 +0x13f:  lea    -0x60(%ebp),%eax
082a2d4a +0x142:  mov    %eax,(%esp)
082a2d4d +0x145:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082a2d52 +0x14a:  movl   $0x0,-0x4c(%ebp)
082a2d59 +0x151:  movl   $0x0,-0x3c(%ebp)
082a2d60 +0x158:  jmp    082a2f00 <+0x2f8>
082a2d65 +0x15d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a2d6a +0x162:  mov    %eax,%ecx
082a2d6c +0x164:  mov    -0x50(%ebp),%edx
082a2d6f +0x167:  mov    -0x3c(%ebp),%ebx
082a2d72 +0x16a:  mov    %edx,%eax
082a2d74 +0x16c:  shl    $0x2,%eax
082a2d77 +0x16f:  add    %edx,%eax
082a2d79 +0x171:  add    %eax,%eax
082a2d7b +0x173:  add    %ebx,%eax
082a2d7d +0x175:  add    $0x223c,%eax
082a2d82 +0x17a:  mov    0x8(%ecx,%eax,4),%edx
082a2d86 +0x17e:  mov    -0x3c(%ebp),%eax
082a2d89 +0x181:  mov    -0x8c(%ebp,%eax,4),%eax
082a2d90 +0x188:  mov    %edx,%ecx
082a2d92 +0x18a:  sub    %eax,%ecx
082a2d94 +0x18c:  mov    %ecx,%eax
082a2d96 +0x18e:  mov    %eax,-0x38(%ebp)
082a2d99 +0x191:  cmpl   $0x0,-0x38(%ebp)
082a2d9d +0x195:  jns    082a2e4e <+0x246>
082a2da3 +0x19b:  mov    -0x38(%ebp),%eax
082a2da6 +0x19e:  sar    $0x1f,%eax
082a2da9 +0x1a1:  mov    %eax,%edx
082a2dab +0x1a3:  xor    -0x38(%ebp),%edx
082a2dae +0x1a6:  mov    %edx,-0x34(%ebp)
082a2db1 +0x1a9:  sub    %eax,-0x34(%ebp)
082a2db4 +0x1ac:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a2db9 +0x1b1:  lea    0x87b4(%eax),%edx
082a2dbf +0x1b7:  mov    -0x3c(%ebp),%eax
082a2dc2 +0x1ba:  mov    %eax,0x4(%esp)
082a2dc6 +0x1be:  mov    %edx,(%esp)
082a2dc9 +0x1c1:  call   082a3e90 <_GLOBAL__I__ZN4CLog5this_E+0x2b7>  ; global constructors keyed to CLog::this_+0x2b7
082a2dce +0x1c6:  mov    %eax,-0x30(%ebp)
082a2dd1 +0x1c9:  jmp    082a2e3e <+0x236>
082a2dd3 +0x1cb:  mov    -0x30(%ebp),%ebx
082a2dd6 +0x1ce:  subl   $0x1,-0x30(%ebp)
082a2dda +0x1d2:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082a2ddf +0x1d7:  mov    %ebx,0x4(%esp)
082a2de3 +0x1db:  mov    %eax,(%esp)
082a2de6 +0x1de:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
082a2deb +0x1e3:  mov    %eax,-0x2c(%ebp)
082a2dee +0x1e6:  cmpl   $0x0,-0x2c(%ebp)
082a2df2 +0x1ea:  je     082a2e0b <+0x203>
082a2df4 +0x1ec:  mov    -0x2c(%ebp),%eax
082a2df7 +0x1ef:  mov    %eax,(%esp)
082a2dfa +0x1f2:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
082a2dff +0x1f7:  cmp    $0xffffffff,%eax
082a2e02 +0x1fa:  je     082a2e0b <+0x203>
082a2e04 +0x1fc:  mov    $0x1,%eax
082a2e09 +0x201:  jmp    082a2e10 <+0x208>
082a2e0b +0x203:  mov    $0x0,%eax
082a2e10 +0x208:  test   %al,%al
082a2e12 +0x20a:  je     082a2e3e <+0x236>
082a2e14 +0x20c:  mov    -0x2c(%ebp),%eax
082a2e17 +0x20f:  mov    %eax,(%esp)
082a2e1a +0x212:  call   086bd53c <_ZN7WarRoom8ShutDownEv>  ; WarRoom::ShutDown()
082a2e1f +0x217:  mov    %al,-0x25(%ebp)
082a2e22 +0x21a:  cmpb   $0x0,-0x25(%ebp)
082a2e26 +0x21e:  je     082a2e3a <+0x232>
082a2e28 +0x220:  lea    -0x60(%ebp),%eax
082a2e2b +0x223:  mov    %eax,0x4(%esp)
082a2e2f +0x227:  mov    -0x2c(%ebp),%eax
082a2e32 +0x22a:  mov    %eax,(%esp)
082a2e35 +0x22d:  call   086be07a <_ZN7WarRoom13MakeStateInfoEPc>  ; WarRoom::MakeStateInfo(char*)
082a2e3a +0x232:  subl   $0x1,-0x34(%ebp)
082a2e3e +0x236:  cmpl   $0x0,-0x34(%ebp)
082a2e42 +0x23a:  setne  %al
082a2e45 +0x23d:  test   %al,%al
082a2e47 +0x23f:  jne    082a2dd3 <+0x1cb>
082a2e49 +0x241:  jmp    082a2eea <+0x2e2>
082a2e4e +0x246:  cmpl   $0x0,-0x38(%ebp)
082a2e52 +0x24a:  jle    082a2eea <+0x2e2>
082a2e58 +0x250:  mov    -0x38(%ebp),%eax
082a2e5b +0x253:  mov    %eax,-0x24(%ebp)
082a2e5e +0x256:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a2e63 +0x25b:  lea    0x87b4(%eax),%edx
082a2e69 +0x261:  mov    -0x3c(%ebp),%eax
082a2e6c +0x264:  mov    %eax,0x4(%esp)
082a2e70 +0x268:  mov    %edx,(%esp)
082a2e73 +0x26b:  call   082a3df4 <_GLOBAL__I__ZN4CLog5this_E+0x21b>  ; global constructors keyed to CLog::this_+0x21b
082a2e78 +0x270:  mov    %eax,-0x20(%ebp)
082a2e7b +0x273:  jmp    082a2edf <+0x2d7>
082a2e7d +0x275:  mov    -0x20(%ebp),%ebx
082a2e80 +0x278:  addl   $0x1,-0x20(%ebp)
082a2e84 +0x27c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082a2e89 +0x281:  mov    %ebx,0x4(%esp)
082a2e8d +0x285:  mov    %eax,(%esp)
082a2e90 +0x288:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
082a2e95 +0x28d:  mov    %eax,-0x1c(%ebp)
082a2e98 +0x290:  cmpl   $0x0,-0x1c(%ebp)
082a2e9c +0x294:  je     082a2eb5 <+0x2ad>
082a2e9e +0x296:  mov    -0x1c(%ebp),%eax
082a2ea1 +0x299:  mov    %eax,(%esp)
082a2ea4 +0x29c:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
082a2ea9 +0x2a1:  cmp    $0xffffffff,%eax
082a2eac +0x2a4:  jne    082a2eb5 <+0x2ad>
082a2eae +0x2a6:  mov    $0x1,%eax
082a2eb3 +0x2ab:  jmp    082a2eba <+0x2b2>
082a2eb5 +0x2ad:  mov    $0x0,%eax
082a2eba +0x2b2:  test   %al,%al
082a2ebc +0x2b4:  je     082a2edf <+0x2d7>
082a2ebe +0x2b6:  mov    -0x1c(%ebp),%eax
082a2ec1 +0x2b9:  mov    %eax,(%esp)
082a2ec4 +0x2bc:  call   086bd504 <_ZN7WarRoom4OpenEv>  ; WarRoom::Open()
082a2ec9 +0x2c1:  lea    -0x60(%ebp),%eax
082a2ecc +0x2c4:  mov    %eax,0x4(%esp)
082a2ed0 +0x2c8:  mov    -0x1c(%ebp),%eax
082a2ed3 +0x2cb:  mov    %eax,(%esp)
082a2ed6 +0x2ce:  call   086be07a <_ZN7WarRoom13MakeStateInfoEPc>  ; WarRoom::MakeStateInfo(char*)
082a2edb +0x2d3:  subl   $0x1,-0x24(%ebp)
082a2edf +0x2d7:  cmpl   $0x0,-0x24(%ebp)
082a2ee3 +0x2db:  setne  %al
082a2ee6 +0x2de:  test   %al,%al
082a2ee8 +0x2e0:  jne    082a2e7d <+0x275>
082a2eea +0x2e2:  mov    -0x38(%ebp),%eax
082a2eed +0x2e5:  mov    %eax,%edx
082a2eef +0x2e7:  sar    $0x1f,%edx
082a2ef2 +0x2ea:  mov    %edx,%eax
082a2ef4 +0x2ec:  xor    -0x38(%ebp),%eax
082a2ef7 +0x2ef:  sub    %edx,%eax
082a2ef9 +0x2f1:  add    %eax,-0x4c(%ebp)
082a2efc +0x2f4:  addl   $0x1,-0x3c(%ebp)
082a2f00 +0x2f8:  cmpl   $0x9,-0x3c(%ebp)
082a2f04 +0x2fc:  setle  %al
082a2f07 +0x2ff:  test   %al,%al
082a2f09 +0x301:  jne    082a2d65 <+0x15d>
082a2f0f +0x307:  cmpl   $0x0,-0x4c(%ebp)
082a2f13 +0x30b:  je     082a2f7d <+0x375>
082a2f15 +0x30d:  mov    -0x4c(%ebp),%eax
082a2f18 +0x310:  mov    %eax,0x8(%esp)
082a2f1c +0x314:  lea    -0x64(%ebp),%eax
082a2f1f +0x317:  mov    %eax,0x4(%esp)
082a2f23 +0x31b:  lea    -0x60(%ebp),%eax
082a2f26 +0x31e:  mov    %eax,(%esp)
082a2f29 +0x321:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
082a2f2e +0x326:  movl   $0x1,0x4(%esp)
082a2f36 +0x32e:  lea    -0x60(%ebp),%eax
082a2f39 +0x331:  mov    %eax,(%esp)
082a2f3c +0x334:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082a2f41 +0x339:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082a2f46 +0x33e:  lea    -0x60(%ebp),%edx
082a2f49 +0x341:  mov    %edx,0x4(%esp)
082a2f4d +0x345:  mov    %eax,(%esp)
082a2f50 +0x348:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082a2f55 +0x34d:  mov    0x8(%ebp),%eax
082a2f58 +0x350:  mov    %eax,(%esp)
082a2f5b +0x353:  call   08298b40 <_ZN12CGameManager16PrintWarRoomListEv>  ; CGameManager::PrintWarRoomList()
082a2f60 +0x358:  jmp    082a2f7d <+0x375>
082a2f62 +0x35a:  mov    %edx,%ebx
082a2f64 +0x35c:  mov    %eax,%esi
082a2f66 +0x35e:  lea    -0x60(%ebp),%eax
082a2f69 +0x361:  mov    %eax,(%esp)
082a2f6c +0x364:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a2f71 +0x369:  mov    %esi,%eax
082a2f73 +0x36b:  mov    %ebx,%edx
082a2f75 +0x36d:  mov    %eax,(%esp)
082a2f78 +0x370:  call   08ae3750 <_Unwind_Resume>
082a2f7d +0x375:  lea    -0x60(%ebp),%eax
082a2f80 +0x378:  mov    %eax,(%esp)
082a2f83 +0x37b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082a2f88 +0x380:  add    $0xac,%esp
082a2f8e +0x386:  pop    %ebx
082a2f8f +0x387:  pop    %esi
082a2f90 +0x388:  pop    %edi
082a2f91 +0x389:  pop    %ebp
082a2f92 +0x38a:  ret
082a2f93 +0x38b:  nop
```

## 反编译 C

```c
// CGameManager::WarRoomCountManageTest @ 0x82a2c08

/* CGameManager::WarRoomCountManageTest(int) */

void __thiscall CGameManager::WarRoomCountManageTest(CGameManager *this,int param_1)

{
  bool bVar1;
  GameWorld *this_00;
  int iVar2;
  int *piVar3;
  int local_90 [10];
  int local_68;
  PacketGuard local_64 [12];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  WarRoom *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  WarRoom *local_30;
  char local_29;
  uint local_28;
  int local_24;
  WarRoom *local_20;
  
  piVar3 = local_90;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_58 = 0;
  for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
    local_48 = 0;
    while( true ) {
      iVar2 = G_CDataManager();
      iVar2 = WarAreaCounter::GetWarRoomCountAtPeekTime((WarAreaCounter *)(iVar2 + 0x87b4),local_4c)
      ;
      if (iVar2 <= local_48) break;
      local_58 = local_58 + 1;
      local_44 = (WarRoom *)GetWarRoom((int)this);
      if (local_44 == (WarRoom *)0x0) {
        LogManager::logFormat
                  (1,"App.cpp","void CGameManager::WarRoomCountManageTest(int)",0x30e2,
                   "WarRoomCountManage Error : WarRoom does not exist %d",local_58);
      }
      else {
        iVar2 = WarRoom::GetState(local_44);
        if (iVar2 != -1) {
          local_90[local_4c] = local_90[local_4c] + 1;
        }
      }
      local_48 = local_48 + 1;
    }
  }
  local_54 = param_1;
  PacketGuard::PacketGuard(local_64);
                    /* try { // try from 082a2d2c to 082a2f54 has its CatchHandler @ 082a2f62 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,0x58);
  local_68 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_64);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,0);
  local_50 = 0;
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    iVar2 = G_CDataManager();
    local_3c = *(int *)(iVar2 + 8 + (local_54 * 10 + local_40 + 0x223c) * 4) - local_90[local_40];
    if ((int)local_3c < 0) {
      local_38 = ((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f);
      iVar2 = G_CDataManager();
      local_34 = WarAreaCounter::GetWarRoomCountLastIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_38 != 0) {
        local_34 = local_34 + -1;
        iVar2 = G_CGameManager();
        local_30 = (WarRoom *)GetWarRoom(iVar2);
        if ((local_30 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_30), iVar2 == -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_29 = WarRoom::ShutDown(local_30);
          if (local_29 != '\0') {
            WarRoom::MakeStateInfo(local_30,(char *)local_64);
          }
          local_38 = local_38 + -1;
        }
      }
    }
    else if (0 < (int)local_3c) {
      local_28 = local_3c;
      iVar2 = G_CDataManager();
      local_24 = WarAreaCounter::GetWarRoomCountFirstIndex
                           ((WarAreaCounter *)(iVar2 + 0x87b4),local_40);
      while (local_28 != 0) {
        local_24 = local_24 + 1;
        iVar2 = G_CGameManager();
        local_20 = (WarRoom *)GetWarRoom(iVar2);
        if ((local_20 == (WarRoom *)0x0) || (iVar2 = WarRoom::GetState(local_20), iVar2 != -1)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          WarRoom::Open(local_20);
          WarRoom::MakeStateInfo(local_20,(char *)local_64);
          local_28 = local_28 - 1;
        }
      }
    }
    local_50 = local_50 + (((int)local_3c >> 0x1f ^ local_3c) - ((int)local_3c >> 0x1f));
  }
  if (local_50 != 0) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,&local_68,local_50);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_64);
    PrintWarRoomList();
  }
  PacketGuard::~PacketGuard(local_64);
  return;
}
```
