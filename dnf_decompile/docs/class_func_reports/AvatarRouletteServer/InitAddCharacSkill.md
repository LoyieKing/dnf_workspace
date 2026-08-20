# InitAddCharacSkill

`_ZN20AvatarRouletteServer18InitAddCharacSkillEv`

`AvatarRouletteServer::InitAddCharacSkill()`

| 类 | 地址 |
|---|---|
| `AvatarRouletteServer` | `0x0817f386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817f386  _ZN20AvatarRouletteServer18InitAddCharacSkillEv
#           AvatarRouletteServer::InitAddCharacSkill()
# range [0x0817f386, 0x0817f705]
0817f386 +0x000:  push   %ebp
0817f387 +0x001:  mov    %esp,%ebp
0817f389 +0x003:  push   %esi
0817f38a +0x004:  push   %ebx
0817f38b +0x005:  sub    $0x920,%esp
0817f391 +0x00b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0817f396 +0x010:  movzbl 0x310(%eax),%eax
0817f39d +0x017:  test   %al,%al
0817f39f +0x019:  je     0817f6f4 <+0x36e>
0817f3a5 +0x01f:  movl   $0x0,-0x2c(%ebp)
0817f3ac +0x026:  jmp    0817f6e5 <+0x35f>
0817f3b1 +0x02b:  mov    0x8(%ebp),%eax
0817f3b4 +0x02e:  mov    0x18(%eax),%ecx
0817f3b7 +0x031:  mov    -0x2c(%ebp),%edx
0817f3ba +0x034:  mov    %edx,%eax
0817f3bc +0x036:  add    %eax,%eax
0817f3be +0x038:  add    %edx,%eax
0817f3c0 +0x03a:  shl    $0x2,%eax
0817f3c3 +0x03d:  add    $0x10,%eax
0817f3c6 +0x040:  lea    (%ecx,%eax,1),%eax
0817f3c9 +0x043:  add    $0x4,%eax
0817f3cc +0x046:  mov    %eax,-0x28(%ebp)
0817f3cf +0x049:  mov    -0x28(%ebp),%eax
0817f3d2 +0x04c:  mov    %eax,(%esp)
0817f3d5 +0x04f:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
0817f3da +0x054:  movl   $0x0,-0x24(%ebp)
0817f3e1 +0x05b:  mov    -0x28(%ebp),%eax
0817f3e4 +0x05e:  mov    %eax,(%esp)
0817f3e7 +0x061:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
0817f3ec +0x066:  mov    %eax,-0x20(%ebp)
0817f3ef +0x069:  jmp    0817f6d0 <+0x34a>
0817f3f4 +0x06e:  mov    -0x24(%ebp),%eax
0817f3f7 +0x071:  mov    %eax,0x4(%esp)
0817f3fb +0x075:  mov    -0x28(%ebp),%eax
0817f3fe +0x078:  mov    %eax,(%esp)
0817f401 +0x07b:  call   08180782 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x419>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x419
0817f406 +0x080:  mov    %eax,-0x1c(%ebp)
0817f409 +0x083:  movl   $0x0,-0x18(%ebp)
0817f410 +0x08a:  jmp    0817f6bd <+0x337>
0817f415 +0x08f:  cmpl   $0x3,-0x18(%ebp)
0817f419 +0x093:  jne    0817f6b9 <+0x333>
0817f41f +0x099:  cmpl   $0x9,-0x2c(%ebp)
0817f423 +0x09d:  je     0817f42f <+0xa9>
0817f425 +0x09f:  cmpl   $0x0,-0x2c(%ebp)
0817f429 +0x0a3:  jne    0817f6b9 <+0x333>
0817f42f +0x0a9:  mov    -0x18(%ebp),%eax
0817f432 +0x0ac:  mov    %eax,0x4(%esp)
0817f436 +0x0b0:  mov    -0x1c(%ebp),%eax
0817f439 +0x0b3:  mov    %eax,(%esp)
0817f43c +0x0b6:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f441 +0x0bb:  mov    (%eax),%eax
0817f443 +0x0bd:  mov    %eax,0x4(%esp)
0817f447 +0x0c1:  movl   $&g_stEquipmentScriptFileList,(%esp)
0817f44e +0x0c8:  call   088bad4e <_ZNK16STScriptFileList11GetFileNameEi>  ; STScriptFileList::GetFileName(int) const
0817f453 +0x0cd:  mov    %eax,-0x14(%ebp)
0817f456 +0x0d0:  cmpl   $0x0,-0x14(%ebp)
0817f45a +0x0d4:  je     0817f6b9 <+0x333>
0817f460 +0x0da:  lea    -0x904(%ebp),%eax
0817f466 +0x0e0:  mov    %eax,(%esp)
0817f469 +0x0e3:  call   0898db82 <_ZN17STEquipmentScriptC1Ev>  ; STEquipmentScript::STEquipmentScript()
0817f46e +0x0e8:  movl   $0xffffffff,0x10(%esp)
0817f476 +0x0f0:  movl   $0x0,0xc(%esp)
0817f47e +0x0f8:  movl   $0x0,0x8(%esp)
0817f486 +0x100:  mov    -0x14(%ebp),%eax
0817f489 +0x103:  mov    %eax,0x4(%esp)
0817f48d +0x107:  lea    -0x904(%ebp),%eax
0817f493 +0x10d:  mov    %eax,(%esp)
0817f496 +0x110:  call   08991aeb <_Z21ImportEquipmentScriptP17STEquipmentScriptPKcbii>  ; ImportEquipmentScript(STEquipmentScript*, char const*, bool, int, int)
0817f49b +0x115:  xor    $0x1,%eax
0817f49e +0x118:  test   %al,%al
0817f4a0 +0x11a:  je     0817f4e4 <+0x15e>
0817f4a2 +0x11c:  mov    -0x14(%ebp),%eax
0817f4a5 +0x11f:  mov    %eax,0x14(%esp)
0817f4a9 +0x123:  movl   $"InitAddCharacSkill() - ImportEquipmentScript() fail file - %s",0x10(%esp)
0817f4b1 +0x12b:  movl   $0x39,0xc(%esp)
0817f4b9 +0x133:  movl   $&_ZZN20AvatarRouletteServer18InitAddCharacSkillEvE19__PRETTY_FUNCTION__,0x8(%esp)
0817f4c1 +0x13b:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
0817f4c9 +0x143:  movl   $0x1,(%esp)
0817f4d0 +0x14a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817f4d5 +0x14f:  mov    $0x0,%esi
0817f4da +0x154:  mov    $0x0,%ebx
0817f4df +0x159:  jmp    0817f6a7 <+0x321>
0817f4e4 +0x15e:  lea    -0x58(%ebp),%eax
0817f4e7 +0x161:  mov    %eax,(%esp)
0817f4ea +0x164:  call   081807ae <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x445>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x445
0817f4ef +0x169:  lea    -0x904(%ebp),%eax
0817f4f5 +0x16f:  add    $0x424,%eax
0817f4fa +0x174:  mov    %eax,(%esp)
0817f4fd +0x177:  call   08180828 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x4bf>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x4bf
0817f502 +0x17c:  mov    %eax,-0x10(%ebp)
0817f505 +0x17f:  movl   $0x0,-0xc(%ebp)
0817f50c +0x186:  jmp    0817f61d <+0x297>
0817f511 +0x18b:  lea    -0x64(%ebp),%eax
0817f514 +0x18e:  mov    %eax,(%esp)
0817f517 +0x191:  call   081803a8 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f
0817f51c +0x196:  mov    -0xc(%ebp),%eax
0817f51f +0x199:  mov    %eax,0x4(%esp)
0817f523 +0x19d:  lea    -0x904(%ebp),%eax
0817f529 +0x1a3:  add    $0x424,%eax
0817f52e +0x1a8:  mov    %eax,(%esp)
0817f531 +0x1ab:  call   0818084a <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x4e1>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x4e1
0817f536 +0x1b0:  mov    0xc(%eax),%edx
0817f539 +0x1b3:  mov    %edx,-0x64(%ebp)
0817f53c +0x1b6:  mov    0x10(%eax),%edx
0817f53f +0x1b9:  mov    %edx,-0x60(%ebp)
0817f542 +0x1bc:  mov    0x14(%eax),%eax
0817f545 +0x1bf:  mov    %eax,-0x5c(%ebp)
0817f548 +0x1c2:  lea    -0x40(%ebp),%eax
0817f54b +0x1c5:  lea    -0x58(%ebp),%edx
0817f54e +0x1c8:  mov    %edx,0x4(%esp)
0817f552 +0x1cc:  mov    %eax,(%esp)
0817f555 +0x1cf:  call   08180890 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x527>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x527
0817f55a +0x1d4:  sub    $0x4,%esp
0817f55d +0x1d7:  mov    -0x64(%ebp),%eax
0817f560 +0x1da:  mov    %eax,-0x38(%ebp)
0817f563 +0x1dd:  lea    -0x3c(%ebp),%eax
0817f566 +0x1e0:  lea    -0x38(%ebp),%edx
0817f569 +0x1e3:  mov    %edx,0x8(%esp)
0817f56d +0x1e7:  lea    -0x58(%ebp),%edx
0817f570 +0x1ea:  mov    %edx,0x4(%esp)
0817f574 +0x1ee:  mov    %eax,(%esp)
0817f577 +0x1f1:  call   08180864 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x4fb>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x4fb
0817f57c +0x1f6:  sub    $0x4,%esp
0817f57f +0x1f9:  lea    -0x40(%ebp),%eax
0817f582 +0x1fc:  mov    %eax,0x4(%esp)
0817f586 +0x200:  lea    -0x3c(%ebp),%eax
0817f589 +0x203:  mov    %eax,(%esp)
0817f58c +0x206:  call   081808b6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x54d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x54d
0817f591 +0x20b:  test   %al,%al
0817f593 +0x20d:  je     0817f5ec <+0x266>
0817f595 +0x20f:  lea    -0x70(%ebp),%eax
0817f598 +0x212:  mov    %eax,(%esp)
0817f59b +0x215:  call   08180402 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x99>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x99
0817f5a0 +0x21a:  mov    -0x64(%ebp),%eax
0817f5a3 +0x21d:  mov    %eax,-0x34(%ebp)
0817f5a6 +0x220:  lea    -0x34(%ebp),%eax
0817f5a9 +0x223:  mov    %eax,0x4(%esp)
0817f5ad +0x227:  lea    -0x58(%ebp),%eax
0817f5b0 +0x22a:  mov    %eax,(%esp)
0817f5b3 +0x22d:  call   081808e0 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x577>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x577
0817f5b8 +0x232:  lea    -0x70(%ebp),%edx
0817f5bb +0x235:  mov    %edx,0x4(%esp)
0817f5bf +0x239:  mov    %eax,(%esp)
0817f5c2 +0x23c:  call   08180474 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x10b>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x10b
0817f5c7 +0x241:  jmp    0817f5e1 <+0x25b>
0817f5c9 +0x243:  mov    %edx,%ebx
0817f5cb +0x245:  mov    %eax,%esi
0817f5cd +0x247:  lea    -0x70(%ebp),%eax
0817f5d0 +0x24a:  mov    %eax,(%esp)
0817f5d3 +0x24d:  call   08180416 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xad>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xad
0817f5d8 +0x252:  mov    %esi,%eax
0817f5da +0x254:  mov    %ebx,%edx
0817f5dc +0x256:  jmp    0817f662 <+0x2dc>
0817f5e1 +0x25b:  lea    -0x70(%ebp),%eax
0817f5e4 +0x25e:  mov    %eax,(%esp)
0817f5e7 +0x261:  call   08180416 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xad>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xad
0817f5ec +0x266:  mov    -0xc(%ebp),%eax
0817f5ef +0x269:  mov    %eax,-0x60(%ebp)
0817f5f2 +0x26c:  mov    -0x64(%ebp),%eax
0817f5f5 +0x26f:  mov    %eax,-0x30(%ebp)
0817f5f8 +0x272:  lea    -0x30(%ebp),%eax
0817f5fb +0x275:  mov    %eax,0x4(%esp)
0817f5ff +0x279:  lea    -0x58(%ebp),%eax
0817f602 +0x27c:  mov    %eax,(%esp)
0817f605 +0x27f:  call   081808e0 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x577>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x577
0817f60a +0x284:  lea    -0x64(%ebp),%edx
0817f60d +0x287:  mov    %edx,0x4(%esp)
0817f611 +0x28b:  mov    %eax,(%esp)
0817f614 +0x28e:  call   08180a2c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x6c3>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x6c3
0817f619 +0x293:  addl   $0x1,-0xc(%ebp)
0817f61d +0x297:  mov    -0xc(%ebp),%eax
0817f620 +0x29a:  cmp    -0x10(%ebp),%eax
0817f623 +0x29d:  setl   %al
0817f626 +0x2a0:  test   %al,%al
0817f628 +0x2a2:  jne    0817f511 <+0x18b>
0817f62e +0x2a8:  mov    -0x18(%ebp),%eax
0817f631 +0x2ab:  mov    %eax,0x4(%esp)
0817f635 +0x2af:  mov    -0x1c(%ebp),%eax
0817f638 +0x2b2:  mov    %eax,(%esp)
0817f63b +0x2b5:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817f640 +0x2ba:  mov    %eax,%edx
0817f642 +0x2bc:  mov    0x8(%ebp),%eax
0817f645 +0x2bf:  mov    %edx,0x4(%esp)
0817f649 +0x2c3:  mov    %eax,(%esp)
0817f64c +0x2c6:  call   08180ab6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x74d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x74d
0817f651 +0x2cb:  lea    -0x58(%ebp),%edx
0817f654 +0x2ce:  mov    %edx,0x4(%esp)
0817f658 +0x2d2:  mov    %eax,(%esp)
0817f65b +0x2d5:  call   08180c02 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x899>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x899
0817f660 +0x2da:  jmp    0817f677 <+0x2f1>
0817f662 +0x2dc:  mov    %edx,%ebx
0817f664 +0x2de:  mov    %eax,%esi
0817f666 +0x2e0:  lea    -0x58(%ebp),%eax
0817f669 +0x2e3:  mov    %eax,(%esp)
0817f66c +0x2e6:  call   081803ee <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x85>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x85
0817f671 +0x2eb:  mov    %esi,%eax
0817f673 +0x2ed:  mov    %ebx,%edx
0817f675 +0x2ef:  jmp    0817f689 <+0x303>
0817f677 +0x2f1:  lea    -0x58(%ebp),%eax
0817f67a +0x2f4:  mov    %eax,(%esp)
0817f67d +0x2f7:  call   081803ee <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x85>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x85
0817f682 +0x2fc:  mov    $0x1,%ebx
0817f687 +0x301:  jmp    0817f6a7 <+0x321>
0817f689 +0x303:  mov    %edx,%ebx
0817f68b +0x305:  mov    %eax,%esi
0817f68d +0x307:  lea    -0x904(%ebp),%eax
0817f693 +0x30d:  mov    %eax,(%esp)
0817f696 +0x310:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0817f69b +0x315:  mov    %esi,%eax
0817f69d +0x317:  mov    %ebx,%edx
0817f69f +0x319:  mov    %eax,(%esp)
0817f6a2 +0x31c:  call   08ae3750 <_Unwind_Resume>
0817f6a7 +0x321:  lea    -0x904(%ebp),%eax
0817f6ad +0x327:  mov    %eax,(%esp)
0817f6b0 +0x32a:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0817f6b5 +0x32f:  test   %ebx,%ebx
0817f6b7 +0x331:  je     0817f6f9 <+0x373>
0817f6b9 +0x333:  addl   $0x1,-0x18(%ebp)
0817f6bd +0x337:  cmpl   $0x8,-0x18(%ebp)
0817f6c1 +0x33b:  setle  %al
0817f6c4 +0x33e:  test   %al,%al
0817f6c6 +0x340:  jne    0817f415 <+0x8f>
0817f6cc +0x346:  addl   $0x1,-0x24(%ebp)
0817f6d0 +0x34a:  mov    -0x24(%ebp),%eax
0817f6d3 +0x34d:  cmp    -0x20(%ebp),%eax
0817f6d6 +0x350:  setb   %al
0817f6d9 +0x353:  test   %al,%al
0817f6db +0x355:  jne    0817f3f4 <+0x6e>
0817f6e1 +0x35b:  addl   $0x1,-0x2c(%ebp)
0817f6e5 +0x35f:  cmpl   $0xa,-0x2c(%ebp)
0817f6e9 +0x363:  setle  %al
0817f6ec +0x366:  test   %al,%al
0817f6ee +0x368:  jne    0817f3b1 <+0x2b>
0817f6f4 +0x36e:  mov    $0x1,%esi
0817f6f9 +0x373:  mov    %esi,%eax
0817f6fb +0x375:  lea    -0x8(%ebp),%esp
0817f6fe +0x378:  add    $0x0,%esp
0817f701 +0x37b:  pop    %ebx
0817f702 +0x37c:  pop    %esi
0817f703 +0x37d:  pop    %ebp
0817f704 +0x37e:  ret
0817f705 +0x37f:  nop
```

## 反编译 C

```c
// AvatarRouletteServer::InitAddCharacSkill @ 0x817f386

/* AvatarRouletteServer::InitAddCharacSkill() */

undefined4 __thiscall AvatarRouletteServer::InitAddCharacSkill(AvatarRouletteServer *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector<LevelUpSkill,std::allocator<LevelUpSkill>> *pvVar4;
  ulong *puVar5;
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  *this_00;
  undefined4 unaff_ESI;
  STEquipmentScript local_908 [1060];
  vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> avStack_4e4 [1136];
  vector<LevelUpSkill,std::allocator<LevelUpSkill>> local_74 [12];
  int local_68;
  uint local_64;
  undefined4 local_60;
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_5c [24];
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_44 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
  local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
  *local_2c;
  uint local_28;
  uint local_24;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *local_20;
  uint local_1c;
  char *local_18;
  int local_14;
  uint local_10;
  
  iVar3 = G_CEnvironment();
  if (*(char *)(iVar3 + 0x310) != '\0') {
    for (local_30 = 0; local_30 < 0xb; local_30 = local_30 + 1) {
      local_2c = (vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                  *)(*(int *)(this + 0x18) + local_30 * 0xc + 0x14);
      std::
      vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
      ::size(local_2c);
      local_28 = 0;
      local_24 = std::
                 vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                 ::size(local_2c);
      for (; local_28 < local_24; local_28 = local_28 + 1) {
        local_20 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                    *)std::
                      vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                      ::operator[](local_2c,local_28);
        for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
          if ((local_1c == 3) && ((local_30 == 9 || (local_30 == 0)))) {
            std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>::
            operator[](local_20,3);
            local_18 = (char *)STScriptFileList::GetFileName(0x94fac00);
            if (local_18 != (char *)0x0) {
              STEquipmentScript::STEquipmentScript(local_908);
                    /* try { // try from 0817f496 to 0817f4ee has its CatchHandler @ 0817f689 */
              cVar2 = ImportEquipmentScript(local_908,local_18,false,0,-1);
              if (cVar2 == '\x01') {
                std::
                map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                ::map(local_5c);
                local_14 = std::
                           vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>
                           ::size(avStack_4e4);
                for (local_10 = 0; (int)local_10 < local_14; local_10 = local_10 + 1) {
                  LevelUpSkill::LevelUpSkill((LevelUpSkill *)&local_68);
                  iVar3 = std::
                          vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>
                          ::operator[](avStack_4e4,local_10);
                  local_68 = *(int *)(iVar3 + 0xc);
                  local_64 = *(undefined4 *)(iVar3 + 0x10);
                  local_60 = *(undefined4 *)(iVar3 + 0x14);
                    /* try { // try from 0817f555 to 0817f59f has its CatchHandler @ 0817f662 */
                  std::
                  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                  ::end(local_44);
                  local_3c = local_68;
                  std::
                  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                  ::find((int *)local_40);
                  cVar2 = std::
                          _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
                          ::operator==(local_40,(_Rb_tree_iterator *)local_44);
                  if (cVar2 != '\0') {
                    std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::vector(local_74);
                    local_38 = local_68;
                    /* try { // try from 0817f5b3 to 0817f5c6 has its CatchHandler @ 0817f5c9 */
                    pvVar4 = (vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                             std::
                             map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                             ::operator[](local_5c,&local_38);
                    std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::operator=
                              (pvVar4,(vector *)local_74);
                    /* try { // try from 0817f5e7 to 0817f65f has its CatchHandler @ 0817f662 */
                    std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::~vector(local_74);
                  }
                  local_64 = local_10;
                  local_34 = local_68;
                  pvVar4 = (vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                           std::
                           map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                           ::operator[](local_5c,&local_34);
                  std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::push_back
                            (pvVar4,(LevelUpSkill *)&local_68);
                }
                puVar5 = (ulong *)std::
                                  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                                  ::operator[](local_20,local_1c);
                this_00 = (map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                           *)std::
                             map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                             ::operator[]((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                                           *)this,puVar5);
                std::
                map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                ::operator=(this_00,(map *)local_5c);
                    /* try { // try from 0817f67d to 0817f681 has its CatchHandler @ 0817f689 */
                std::
                map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                ::~map(local_5c);
                bVar1 = true;
              }
              else {
                LogManager::logFormat
                          (1,"localjapan/Arad_AvatarRoulette.cpp",
                           "bool AvatarRouletteServer::InitAddCharacSkill()",0x39,
                           "InitAddCharacSkill() - ImportEquipmentScript() fail file - %s",local_18)
                ;
                unaff_ESI = 0;
                bVar1 = false;
              }
              STEquipmentScript::~STEquipmentScript(local_908);
              if (!bVar1) {
                return unaff_ESI;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
```
