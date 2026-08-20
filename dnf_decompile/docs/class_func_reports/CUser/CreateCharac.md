# CreateCharac

`_ZN5CUser12CreateCharacEP17SIG_CREATE_CHARAC`

`CUser::CreateCharac(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a186` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a186  _ZN5CUser12CreateCharacEP17SIG_CREATE_CHARAC
#           CUser::CreateCharac(SIG_CREATE_CHARAC*)
# range [0x0864a186, 0x0864a431]
0864a186 +0x000:  push   %ebp
0864a187 +0x001:  mov    %esp,%ebp
0864a189 +0x003:  push   %edi
0864a18a +0x004:  push   %esi
0864a18b +0x005:  push   %ebx
0864a18c +0x006:  sub    $0x14fc,%esp
0864a192 +0x00c:  lea    -0x14e9(%ebp),%eax
0864a198 +0x012:  mov    %eax,(%esp)
0864a19b +0x015:  call   08695cf8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x254d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x254d
0864a1a0 +0x01a:  lea    -0x14e9(%ebp),%eax
0864a1a6 +0x020:  mov    %eax,(%esp)
0864a1a9 +0x023:  call   086822b8 <_ZN12_Charac_info5ResetEv>  ; _Charac_info::Reset()
0864a1ae +0x028:  mov    0xc(%ebp),%eax
0864a1b1 +0x02b:  mov    0x5348(%eax),%eax
0864a1b7 +0x031:  mov    %eax,-0x14e9(%ebp)
0864a1bd +0x037:  mov    0xc(%ebp),%eax
0864a1c0 +0x03a:  add    $0x4,%eax
0864a1c3 +0x03d:  movl   $0x1e,0x8(%esp)
0864a1cb +0x045:  mov    %eax,0x4(%esp)
0864a1cf +0x049:  lea    -0x14e9(%ebp),%eax
0864a1d5 +0x04f:  add    $0x4,%eax
0864a1d8 +0x052:  mov    %eax,(%esp)
0864a1db +0x055:  call   0807d8d0 <_init+0x1c8>
0864a1e0 +0x05a:  movb   $0x1,-0x14c7(%ebp)
0864a1e7 +0x061:  movb   $0x2,-0x14c6(%ebp)
0864a1ee +0x068:  movb   $0x0,-0x14c5(%ebp)
0864a1f5 +0x06f:  movb   $0x0,-0x14c4(%ebp)
0864a1fc +0x076:  mov    0xc(%ebp),%eax
0864a1ff +0x079:  movzbl 0x22(%eax),%eax
0864a203 +0x07d:  mov    %al,-0x14c3(%ebp)
0864a209 +0x083:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864a20e +0x088:  mov    0x14(%eax),%ecx
0864a211 +0x08b:  mov    0xc(%ebp),%eax
0864a214 +0x08e:  movzbl 0x22(%eax),%eax
0864a218 +0x092:  movsbl %al,%eax
0864a21b +0x095:  imul   $0x7dc,%eax,%edx
0864a221 +0x09b:  lea    -0x1461(%ebp),%eax
0864a227 +0x0a1:  lea    (%ecx,%edx,1),%edx
0864a22a +0x0a4:  mov    $0x52,%ebx
0864a22f +0x0a9:  mov    %eax,%ecx
0864a231 +0x0ab:  and    $0x1,%ecx
0864a234 +0x0ae:  test   %ecx,%ecx
0864a236 +0x0b0:  je     0864a246 <+0xc0>
0864a238 +0x0b2:  movzbl (%edx),%ecx
0864a23b +0x0b5:  mov    %cl,(%eax)
0864a23d +0x0b7:  add    $0x1,%eax
0864a240 +0x0ba:  add    $0x1,%edx
0864a243 +0x0bd:  sub    $0x1,%ebx
0864a246 +0x0c0:  mov    %eax,%ecx
0864a248 +0x0c2:  and    $0x2,%ecx
0864a24b +0x0c5:  test   %ecx,%ecx
0864a24d +0x0c7:  je     0864a25e <+0xd8>
0864a24f +0x0c9:  movzwl (%edx),%ecx
0864a252 +0x0cc:  mov    %cx,(%eax)
0864a255 +0x0cf:  add    $0x2,%eax
0864a258 +0x0d2:  add    $0x2,%edx
0864a25b +0x0d5:  sub    $0x2,%ebx
0864a25e +0x0d8:  mov    %ebx,%ecx
0864a260 +0x0da:  shr    $0x2,%ecx
0864a263 +0x0dd:  mov    %eax,%edi
0864a265 +0x0df:  mov    %edx,%esi
0864a267 +0x0e1:  rep movsl %ds:(%esi),%es:(%edi)
0864a269 +0x0e3:  mov    %esi,%edx
0864a26b +0x0e5:  mov    %edi,%eax
0864a26d +0x0e7:  mov    $0x0,%ecx
0864a272 +0x0ec:  mov    %ebx,%esi
0864a274 +0x0ee:  and    $0x2,%esi
0864a277 +0x0f1:  test   %esi,%esi
0864a279 +0x0f3:  je     0864a286 <+0x100>
0864a27b +0x0f5:  movzwl (%edx,%ecx,1),%esi
0864a27f +0x0f9:  mov    %si,(%eax,%ecx,1)
0864a283 +0x0fd:  add    $0x2,%ecx
0864a286 +0x100:  and    $0x1,%ebx
0864a289 +0x103:  test   %ebx,%ebx
0864a28b +0x105:  je     0864a294 <+0x10e>
0864a28d +0x107:  movzbl (%edx,%ecx,1),%edx
0864a291 +0x10b:  mov    %dl,(%eax,%ecx,1)
0864a294 +0x10e:  movw   $0x1,-0x14c2(%ebp)
0864a29d +0x117:  movl   $0x0,-0x14be(%ebp)
0864a2a7 +0x121:  movb   $0x0,-0x14c0(%ebp)
0864a2ae +0x128:  movb   $0x64,-0x1474(%ebp)
0864a2b5 +0x12f:  lea    -0x14e9(%ebp),%eax
0864a2bb +0x135:  add    $0x39,%eax
0864a2be +0x138:  mov    %eax,(%esp)
0864a2c1 +0x13b:  call   082a4224 <_GLOBAL__I__ZN4CLog5this_E+0x64b>  ; global constructors keyed to CLog::this_+0x64b
0864a2c6 +0x140:  movw   $0x0,-0x14b6(%ebp)
0864a2cf +0x149:  mov    &DEFAULT_MAX_FATIGUE,%eax
0864a2d4 +0x14e:  mov    %ax,-0x14b4(%ebp)
0864a2db +0x155:  movw   $0x0,-0x14b2(%ebp)
0864a2e4 +0x15e:  movw   $0x0,-0x149a(%ebp)
0864a2ed +0x167:  movb   $0x0,-0x1466(%ebp)
0864a2f4 +0x16e:  movl   $0x0,-0x1465(%ebp)
0864a2fe +0x178:  movl   $0x0,-0x6f5(%ebp)
0864a308 +0x182:  movl   $0x0,-0x6f1(%ebp)
0864a312 +0x18c:  movb   $0x0,-0x65a(%ebp)
0864a319 +0x193:  movb   $0xff,-0x2b0(%ebp)
0864a320 +0x19a:  mov    0xc(%ebp),%eax
0864a323 +0x19d:  movzbl 0x24(%eax),%eax
0864a327 +0x1a1:  test   %al,%al
0864a329 +0x1a3:  setne  %al
0864a32c +0x1a6:  mov    %al,-0x2a9(%ebp)
0864a332 +0x1ac:  mov    0x8(%ebp),%eax
0864a335 +0x1af:  add    $0x79794,%eax
0864a33a +0x1b4:  mov    %eax,0x4(%esp)
0864a33e +0x1b8:  lea    -0x14e9(%ebp),%eax
0864a344 +0x1be:  add    $0xda,%eax
0864a349 +0x1c3:  mov    %eax,(%esp)
0864a34c +0x1c6:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
0864a351 +0x1cb:  mov    0x8(%ebp),%eax
0864a354 +0x1ce:  add    $0x79794,%eax
0864a359 +0x1d3:  mov    %eax,0x4(%esp)
0864a35d +0x1d7:  lea    -0x14e9(%ebp),%eax
0864a363 +0x1dd:  add    $0xdaa,%eax
0864a368 +0x1e2:  mov    %eax,(%esp)
0864a36b +0x1e5:  call   086949c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x121b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x121b
0864a370 +0x1ea:  mov    0x8(%ebp),%eax
0864a373 +0x1ed:  lea    0x796e8(%eax),%edx
0864a379 +0x1f3:  lea    -0x14e9(%ebp),%eax
0864a37f +0x1f9:  mov    %eax,0x4(%esp)
0864a383 +0x1fd:  mov    %edx,(%esp)
0864a386 +0x200:  call   08698a58 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x52ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x52ad
0864a38b +0x205:  mov    0x8(%ebp),%eax
0864a38e +0x208:  add    $0x796e8,%eax
0864a393 +0x20d:  mov    %eax,(%esp)
0864a396 +0x210:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864a39b +0x215:  sub    $0x1,%eax
0864a39e +0x218:  mov    0x8(%ebp),%edx
0864a3a1 +0x21b:  add    $0x79700,%edx
0864a3a7 +0x221:  mov    %eax,0x4(%esp)
0864a3ab +0x225:  mov    %edx,(%esp)
0864a3ae +0x228:  call   08682a92 <_ZN15cUserHistoryLog9CharacAddEi>  ; cUserHistoryLog::CharacAdd(int)
0864a3b3 +0x22d:  mov    0x8(%ebp),%eax
0864a3b6 +0x230:  add    $0x796f4,%eax
0864a3bb +0x235:  mov    %eax,(%esp)
0864a3be +0x238:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0864a3c3 +0x23d:  mov    0xc(%ebp),%eax
0864a3c6 +0x240:  movzbl 0x22(%eax),%eax
0864a3ca +0x244:  movsbl %al,%edx
0864a3cd +0x247:  mov    0xc(%ebp),%eax
0864a3d0 +0x24a:  lea    0x4(%eax),%ecx
0864a3d3 +0x24d:  mov    0xc(%ebp),%eax
0864a3d6 +0x250:  mov    0x5348(%eax),%eax
0864a3dc +0x256:  mov    %edx,0xc(%esp)
0864a3e0 +0x25a:  mov    %ecx,0x8(%esp)
0864a3e4 +0x25e:  mov    %eax,0x4(%esp)
0864a3e8 +0x262:  mov    0x8(%ebp),%eax
0864a3eb +0x265:  mov    %eax,(%esp)
0864a3ee +0x268:  call   0864a432 <_ZN5CUser18_onCreateCharacterEjPcc>  ; CUser::_onCreateCharacter(unsigned int, char*, char)
0864a3f3 +0x26d:  mov    $0x0,%ebx
0864a3f8 +0x272:  lea    -0x14e9(%ebp),%eax
0864a3fe +0x278:  mov    %eax,(%esp)
0864a401 +0x27b:  call   08697982 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x41d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x41d7
0864a406 +0x280:  mov    %ebx,%eax
0864a408 +0x282:  add    $0x14fc,%esp
0864a40e +0x288:  pop    %ebx
0864a40f +0x289:  pop    %esi
0864a410 +0x28a:  pop    %edi
0864a411 +0x28b:  pop    %ebp
0864a412 +0x28c:  ret
0864a413 +0x28d:  mov    %edx,%ebx
0864a415 +0x28f:  mov    %eax,%esi
0864a417 +0x291:  lea    -0x14e9(%ebp),%eax
0864a41d +0x297:  mov    %eax,(%esp)
0864a420 +0x29a:  call   08697982 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x41d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x41d7
0864a425 +0x29f:  mov    %esi,%eax
0864a427 +0x2a1:  mov    %ebx,%edx
0864a429 +0x2a3:  mov    %eax,(%esp)
0864a42c +0x2a6:  call   08ae3750 <_Unwind_Resume>
0864a431 +0x2ab:  nop
```

## 反编译 C

```c
// CUser::CreateCharac @ 0x864a186

/* CUser::CreateCharac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall CUser::CreateCharac(CUser *this,SIG_CREATE_CHARAC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  undefined4 local_14ed;
  char acStack_14e9 [30];
  undefined1 local_14cb;
  undefined1 local_14ca;
  undefined1 local_14c9;
  undefined1 local_14c8;
  SIG_CREATE_CHARAC local_14c7;
  undefined2 local_14c6;
  undefined1 local_14c4;
  undefined4 local_14c2;
  undefined2 local_14ba;
  undefined2 local_14b8;
  undefined2 local_14b6;
  CommonTime aCStack_14b4 [22];
  undefined2 local_149e;
  undefined1 local_1478;
  undefined1 local_146a;
  undefined4 local_1469;
  undefined1 local_1465;
  undefined4 local_1464 [20];
  CInventory aCStack_1413 [3280];
  CCargo aCStack_743 [74];
  undefined4 local_6f9;
  undefined4 local_6f5;
  undefined1 local_65e;
  undefined1 local_2b4;
  undefined1 local_2ad;
  
  bVar7 = 0;
  _Charac_info::_Charac_info((_Charac_info *)&local_14ed);
                    /* try { // try from 0864a1a9 to 0864a3f2 has its CatchHandler @ 0864a413 */
  _Charac_info::Reset((_Charac_info *)&local_14ed);
  local_14ed = *(undefined4 *)(param_1 + 0x5348);
  strncpy(acStack_14e9,(char *)(param_1 + 4),0x1e);
  local_14cb = 1;
  local_14ca = 2;
  local_14c9 = 0;
  local_14c8 = 0;
  local_14c7 = param_1[0x22];
  iVar1 = G_CDataManager();
  puVar2 = (undefined4 *)&local_1465;
  puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x14) + (char)param_1[0x22] * 0x7dc);
  uVar5 = 0x52;
  bVar6 = ((uint)puVar2 & 1) != 0;
  if (bVar6) {
    local_1465 = *(undefined1 *)puVar4;
    puVar2 = local_1464;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    uVar5 = 0x51;
  }
  if (((uint)puVar2 & 2) != 0) {
    *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
    puVar2 = (undefined4 *)((int)puVar2 + 2);
    puVar4 = (undefined4 *)((int)puVar4 + 2);
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar7 * -2 + 1;
  }
  iVar1 = 0;
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)puVar2 = *(undefined2 *)puVar4;
    iVar1 = 2;
  }
  if (bVar6) {
    *(undefined1 *)((int)puVar2 + iVar1) = *(undefined1 *)((int)puVar4 + iVar1);
  }
  local_14c6 = 1;
  local_14c2 = 0;
  local_14c4 = 0;
  local_1478 = 100;
  CommonTime::SetCurTime(aCStack_14b4);
  local_14ba = 0;
  local_14b8 = (undefined2)DEFAULT_MAX_FATIGUE;
  local_14b6 = 0;
  local_149e = 0;
  local_146a = 0;
  local_1469 = 0;
  local_6f9 = 0;
  local_6f5 = 0;
  local_65e = 0;
  local_2b4 = 0xff;
  local_2ad = param_1[0x24] != (SIG_CREATE_CHARAC)0x0;
  CInventory::SetInventoryMemory(aCStack_1413,(InventoryMemory *)(this + 0x79794));
  CCargo::SetInventoryMemory(aCStack_743,(InventoryMemory *)(this + 0x79794));
  std::vector<_Charac_info,std::allocator<_Charac_info>>::push_back
            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
             (_Charac_info *)&local_14ed);
  iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
  cUserHistoryLog::CharacAdd((cUserHistoryLog *)(this + 0x79700),iVar1 + -1);
  CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
  _onCreateCharacter(this,*(uint *)(param_1 + 0x5348),(char *)(param_1 + 4),(char)param_1[0x22]);
  _Charac_info::~_Charac_info((_Charac_info *)&local_14ed);
  return 0;
}
```
