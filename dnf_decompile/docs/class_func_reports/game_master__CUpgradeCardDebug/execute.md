# execute

`_ZN11game_master17CUpgradeCardDebug7executeEv`

`game_master::CUpgradeCardDebug::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CUpgradeCardDebug` | `0x084b1b96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1b96  _ZN11game_master17CUpgradeCardDebug7executeEv
#           game_master::CUpgradeCardDebug::execute()
# range [0x084b1b96, 0x084b1e89]
084b1b96 +0x000:  push   %ebp
084b1b97 +0x001:  mov    %esp,%ebp
084b1b99 +0x003:  push   %edi
084b1b9a +0x004:  push   %esi
084b1b9b +0x005:  push   %ebx
084b1b9c +0x006:  sub    $&_ZL14gUnicodeBuffer+0xd660,%esp
084b1ba2 +0x00c:  mov    0x8(%ebp),%eax
084b1ba5 +0x00f:  mov    %eax,(%esp)
084b1ba8 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b1bad +0x017:  mov    %eax,-0x3c(%ebp)
084b1bb0 +0x01a:  cmpl   $0x0,-0x3c(%ebp)
084b1bb4 +0x01e:  je     084b1e78 <+0x2e2>
084b1bba +0x024:  mov    0x8(%ebp),%eax
084b1bbd +0x027:  mov    0x8(%eax),%ebx
084b1bc0 +0x02a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b1bc5 +0x02f:  mov    %ebx,0x4(%esp)
084b1bc9 +0x033:  mov    %eax,(%esp)
084b1bcc +0x036:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084b1bd1 +0x03b:  mov    %eax,-0x38(%ebp)
084b1bd4 +0x03e:  cmpl   $0x0,-0x38(%ebp)
084b1bd8 +0x042:  je     084b1e7b <+0x2e5>
084b1bde +0x048:  mov    -0x38(%ebp),%eax
084b1be1 +0x04b:  mov    %eax,(%esp)
084b1be4 +0x04e:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
084b1be9 +0x053:  xor    $0x1,%eax
084b1bec +0x056:  test   %al,%al
084b1bee +0x058:  jne    084b1e7e <+0x2e8>
084b1bf4 +0x05e:  lea    -0x45a(%ebp),%edx
084b1bfa +0x064:  mov    $0x400,%ebx
084b1bff +0x069:  mov    $0x0,%eax
084b1c04 +0x06e:  mov    %edx,%ecx
084b1c06 +0x070:  and    $0x2,%ecx
084b1c09 +0x073:  test   %ecx,%ecx
084b1c0b +0x075:  je     084b1c16 <+0x80>
084b1c0d +0x077:  mov    %ax,(%edx)
084b1c10 +0x07a:  add    $0x2,%edx
084b1c13 +0x07d:  sub    $0x2,%ebx
084b1c16 +0x080:  mov    %ebx,%ecx
084b1c18 +0x082:  shr    $0x2,%ecx
084b1c1b +0x085:  mov    %edx,%edi
084b1c1d +0x087:  rep stos %eax,%es:(%edi)
084b1c1f +0x089:  mov    %edi,%edx
084b1c21 +0x08b:  mov    %ebx,%ecx
084b1c23 +0x08d:  and    $0x2,%ecx
084b1c26 +0x090:  test   %ecx,%ecx
084b1c28 +0x092:  je     084b1c30 <+0x9a>
084b1c2a +0x094:  mov    %ax,(%edx)
084b1c2d +0x097:  add    $0x2,%edx
084b1c30 +0x09a:  mov    %ebx,%ecx
084b1c32 +0x09c:  and    $0x1,%ecx
084b1c35 +0x09f:  test   %ecx,%ecx
084b1c37 +0x0a1:  je     084b1c3e <+0xa8>
084b1c39 +0x0a3:  mov    %al,(%edx)
084b1c3b +0x0a5:  add    $0x1,%edx
084b1c3e +0x0a8:  lea    -&_ZL14gUnicodeBuffer+0xd646(%ebp),%eax
084b1c44 +0x0ae:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084b1c49 +0x0b3:  mov    %edx,0x8(%esp)
084b1c4d +0x0b7:  movl   $0x0,0x4(%esp)
084b1c55 +0x0bf:  mov    %eax,(%esp)
084b1c58 +0x0c2:  call   0807dcc0 <_init+0x5b8>
084b1c5d +0x0c7:  lea    -0x5a(%ebp),%eax
084b1c60 +0x0ca:  mov    $0x1e,%ebx
084b1c65 +0x0cf:  mov    $0x0,%edx
084b1c6a +0x0d4:  mov    %eax,%ecx
084b1c6c +0x0d6:  and    $0x2,%ecx
084b1c6f +0x0d9:  test   %ecx,%ecx
084b1c71 +0x0db:  je     084b1c7c <+0xe6>
084b1c73 +0x0dd:  mov    %dx,(%eax)
084b1c76 +0x0e0:  add    $0x2,%eax
084b1c79 +0x0e3:  sub    $0x2,%ebx
084b1c7c +0x0e6:  mov    %ebx,%esi
084b1c7e +0x0e8:  and    $0xfffffffc,%esi
084b1c81 +0x0eb:  mov    $0x0,%ecx
084b1c86 +0x0f0:  mov    %edx,(%eax,%ecx,1)
084b1c89 +0x0f3:  add    $0x4,%ecx
084b1c8c +0x0f6:  cmp    %esi,%ecx
084b1c8e +0x0f8:  jb     084b1c86 <+0xf0>
084b1c90 +0x0fa:  add    %ecx,%eax
084b1c92 +0x0fc:  mov    %ebx,%ecx
084b1c94 +0x0fe:  and    $0x2,%ecx
084b1c97 +0x101:  test   %ecx,%ecx
084b1c99 +0x103:  je     084b1ca1 <+0x10b>
084b1c9b +0x105:  mov    %dx,(%eax)
084b1c9e +0x108:  add    $0x2,%eax
084b1ca1 +0x10b:  mov    %ebx,%ecx
084b1ca3 +0x10d:  and    $0x1,%ecx
084b1ca6 +0x110:  test   %ecx,%ecx
084b1ca8 +0x112:  je     084b1caf <+0x119>
084b1caa +0x114:  mov    %dl,(%eax)
084b1cac +0x116:  add    $0x1,%eax
084b1caf +0x119:  lea    -0x85a(%ebp),%edx
084b1cb5 +0x11f:  mov    $0x400,%ebx
084b1cba +0x124:  mov    $0x0,%eax
084b1cbf +0x129:  mov    %edx,%ecx
084b1cc1 +0x12b:  and    $0x2,%ecx
084b1cc4 +0x12e:  test   %ecx,%ecx
084b1cc6 +0x130:  je     084b1cd1 <+0x13b>
084b1cc8 +0x132:  mov    %ax,(%edx)
084b1ccb +0x135:  add    $0x2,%edx
084b1cce +0x138:  sub    $0x2,%ebx
084b1cd1 +0x13b:  mov    %ebx,%ecx
084b1cd3 +0x13d:  shr    $0x2,%ecx
084b1cd6 +0x140:  mov    %edx,%edi
084b1cd8 +0x142:  rep stos %eax,%es:(%edi)
084b1cda +0x144:  mov    %edi,%edx
084b1cdc +0x146:  mov    %ebx,%ecx
084b1cde +0x148:  and    $0x2,%ecx
084b1ce1 +0x14b:  test   %ecx,%ecx
084b1ce3 +0x14d:  je     084b1ceb <+0x155>
084b1ce5 +0x14f:  mov    %ax,(%edx)
084b1ce8 +0x152:  add    $0x2,%edx
084b1ceb +0x155:  mov    %ebx,%ecx
084b1ced +0x157:  and    $0x1,%ecx
084b1cf0 +0x15a:  test   %ecx,%ecx
084b1cf2 +0x15c:  je     084b1cf9 <+0x163>
084b1cf4 +0x15e:  mov    %al,(%edx)
084b1cf6 +0x160:  add    $0x1,%edx
084b1cf9 +0x163:  movl   $0x0,-0x34(%ebp)
084b1d00 +0x16a:  mov    -0x38(%ebp),%eax
084b1d03 +0x16d:  mov    %eax,(%esp)
084b1d06 +0x170:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084b1d0b +0x175:  cmp    $0x1d29,%eax
084b1d10 +0x17a:  je     084b1d3a <+0x1a4>
084b1d12 +0x17c:  cmp    $0x1d29,%eax
084b1d17 +0x181:  jg     084b1d25 <+0x18f>
084b1d19 +0x183:  sub    $0x1c69,%eax
084b1d1e +0x188:  cmp    $0x2,%eax
084b1d21 +0x18b:  ja     084b1d41 <+0x1ab>
084b1d23 +0x18d:  jmp    084b1d3a <+0x1a4>
084b1d25 +0x18f:  cmp    $0x1e3f,%eax
084b1d2a +0x194:  jl     084b1d41 <+0x1ab>
084b1d2c +0x196:  cmp    $0x1e40,%eax
084b1d31 +0x19b:  jle    084b1d3a <+0x1a4>
084b1d33 +0x19d:  cmp    $0x1e86,%eax
084b1d38 +0x1a2:  jne    084b1d41 <+0x1ab>
084b1d3a +0x1a4:  movl   $0x64,-0x34(%ebp)
084b1d41 +0x1ab:  mov    -0x38(%ebp),%eax
084b1d44 +0x1ae:  mov    %eax,-0x28(%ebp)
084b1d47 +0x1b1:  mov    -0x28(%ebp),%eax
084b1d4a +0x1b4:  mov    %eax,(%esp)
084b1d4d +0x1b7:  call   084b4222 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2d5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2d5
084b1d52 +0x1bc:  test   %al,%al
084b1d54 +0x1be:  je     084b1d83 <+0x1ed>
084b1d56 +0x1c0:  mov    -0x28(%ebp),%eax
084b1d59 +0x1c3:  mov    %eax,(%esp)
084b1d5c +0x1c6:  call   084b4232 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2e5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2e5
084b1d61 +0x1cb:  mov    %al,-0x21(%ebp)
084b1d64 +0x1ce:  cmpb   $0x0,-0x21(%ebp)
084b1d68 +0x1d2:  js     084b1d70 <+0x1da>
084b1d6a +0x1d4:  cmpb   $0x64,-0x21(%ebp)
084b1d6e +0x1d8:  jle    084b1d7a <+0x1e4>
084b1d70 +0x1da:  movl   $0x0,-0x34(%ebp)
084b1d77 +0x1e1:  nop
084b1d78 +0x1e2:  jmp    084b1dbe <+0x228>
084b1d7a +0x1e4:  movsbl -0x21(%ebp),%eax
084b1d7e +0x1e8:  mov    %eax,-0x34(%ebp)
084b1d81 +0x1eb:  jmp    084b1dbe <+0x228>
084b1d83 +0x1ed:  mov    -0x28(%ebp),%eax
084b1d86 +0x1f0:  mov    %eax,(%esp)
084b1d89 +0x1f3:  call   084b4242 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2f5>  ; global constructors keyed to game_master::CMacro::Reset()+0x2f5
084b1d8e +0x1f8:  test   %al,%al
084b1d90 +0x1fa:  je     084b1dbe <+0x228>
084b1d92 +0x1fc:  mov    -0x28(%ebp),%eax
084b1d95 +0x1ff:  mov    %eax,(%esp)
084b1d98 +0x202:  call   084b4252 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x305>  ; global constructors keyed to game_master::CMacro::Reset()+0x305
084b1d9d +0x207:  movsbl %al,%eax
084b1da0 +0x20a:  mov    %eax,-0x20(%ebp)
084b1da3 +0x20d:  cmpl   $0x0,-0x20(%ebp)
084b1da7 +0x211:  js     084b1daf <+0x219>
084b1da9 +0x213:  cmpl   $0x64,-0x20(%ebp)
084b1dad +0x217:  jle    084b1db8 <+0x222>
084b1daf +0x219:  movl   $0x0,-0x34(%ebp)
084b1db6 +0x220:  jmp    084b1dbe <+0x228>
084b1db8 +0x222:  mov    -0x20(%ebp),%eax
084b1dbb +0x225:  mov    %eax,-0x34(%ebp)
084b1dbe +0x228:  movl   $0x0,-0x30(%ebp)
084b1dc5 +0x22f:  movl   $0x0,-0x2c(%ebp)
084b1dcc +0x236:  movl   $0x0,-0x1c(%ebp)
084b1dd3 +0x23d:  jmp    084b1df9 <+0x263>
084b1dd5 +0x23f:  movl   $0x64,(%esp)
084b1ddc +0x246:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
084b1de1 +0x24b:  cmp    -0x34(%ebp),%eax
084b1de4 +0x24e:  setl   %al
084b1de7 +0x251:  test   %al,%al
084b1de9 +0x253:  je     084b1df1 <+0x25b>
084b1deb +0x255:  addl   $0x1,-0x30(%ebp)
084b1def +0x259:  jmp    084b1df5 <+0x25f>
084b1df1 +0x25b:  addl   $0x1,-0x2c(%ebp)
084b1df5 +0x25f:  addl   $0x1,-0x1c(%ebp)
084b1df9 +0x263:  cmpl   $0x270f,-0x1c(%ebp)
084b1e00 +0x26a:  setle  %al
084b1e03 +0x26d:  test   %al,%al
084b1e05 +0x26f:  jne    084b1dd5 <+0x23f>
084b1e07 +0x271:  mov    -0x38(%ebp),%eax
084b1e0a +0x274:  mov    %eax,(%esp)
084b1e0d +0x277:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
084b1e12 +0x27c:  mov    %eax,%ebx
084b1e14 +0x27e:  mov    -0x38(%ebp),%eax
084b1e17 +0x281:  mov    %eax,(%esp)
084b1e1a +0x284:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
084b1e1f +0x289:  mov    -0x2c(%ebp),%edx
084b1e22 +0x28c:  mov    %edx,0x18(%esp)
084b1e26 +0x290:  mov    -0x30(%ebp),%edx
084b1e29 +0x293:  mov    %edx,0x14(%esp)
084b1e2d +0x297:  mov    -0x34(%ebp),%edx
084b1e30 +0x29a:  mov    %edx,0x10(%esp)
084b1e34 +0x29e:  mov    %ebx,0xc(%esp)
084b1e38 +0x2a2:  mov    %eax,0x8(%esp)
084b1e3c +0x2a6:  movl   $"아이템:%s(%d) 성공확률:%d  (%d번 성공, %d번 실패)\n",0x4(%esp)
084b1e44 +0x2ae:  lea    -0x85a(%ebp),%eax
084b1e4a +0x2b4:  mov    %eax,(%esp)
084b1e4d +0x2b7:  call   0807e440 <_init+0xd38>
084b1e52 +0x2bc:  mov    0x8(%ebp),%eax
084b1e55 +0x2bf:  mov    %eax,(%esp)
084b1e58 +0x2c2:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b1e5d +0x2c7:  lea    -0x85a(%ebp),%edx
084b1e63 +0x2cd:  mov    %edx,0x8(%esp)
084b1e67 +0x2d1:  mov    %eax,0x4(%esp)
084b1e6b +0x2d5:  mov    0x8(%ebp),%eax
084b1e6e +0x2d8:  mov    %eax,(%esp)
084b1e71 +0x2db:  call   084b1e8a <_ZN11game_master17CUpgradeCardDebug11SendChatMsgEP5CUserPc>  ; game_master::CUpgradeCardDebug::SendChatMsg(CUser*, char*)
084b1e76 +0x2e0:  jmp    084b1e7f <+0x2e9>
084b1e78 +0x2e2:  nop
084b1e79 +0x2e3:  jmp    084b1e7f <+0x2e9>
084b1e7b +0x2e5:  nop
084b1e7c +0x2e6:  jmp    084b1e7f <+0x2e9>
084b1e7e +0x2e8:  nop
084b1e7f +0x2e9:  add    $&_ZL14gUnicodeBuffer+0xd660,%esp
084b1e85 +0x2ef:  pop    %ebx
084b1e86 +0x2f0:  pop    %esi
084b1e87 +0x2f1:  pop    %edi
084b1e88 +0x2f2:  pop    %ebp
084b1e89 +0x2f3:  ret
```

## 反编译 C

```c
// game_master::CUpgradeCardDebug::execute @ 0x84b1b96

/* WARNING: Removing unreachable block (ram,0x084b1caa) */
/* WARNING: Removing unreachable block (ram,0x084b1c39) */
/* WARNING: Removing unreachable block (ram,0x084b1cf4) */
/* game_master::CUpgradeCardDebug::execute() */

void __thiscall game_master::CUpgradeCardDebug::execute(CUpgradeCardDebug *this)

{
  char cVar1;
  CDataManager *this_00;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CUser *pCVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  undefined1 auStack_17b76 [95000];
  char local_85e [1024];
  undefined2 local_45e;
  undefined4 auStack_45c [255];
  undefined2 local_5e;
  undefined2 local_5c [14];
  int local_40;
  CItem *local_3c;
  int local_38;
  int local_34;
  int local_30;
  CStackableItem *local_2c;
  char local_25;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  local_40 = CCommand::GetUser((CCommand *)this);
  if (local_40 == 0) {
    return;
  }
  iVar3 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(this_00,iVar3);
  if (local_3c == (CItem *)0x0) {
    return;
  }
  cVar1 = CItem::is_stackable(local_3c);
  if (cVar1 != '\x01') {
    return;
  }
  puVar8 = (undefined4 *)&local_45e;
  uVar10 = 0x400;
  bVar11 = ((uint)puVar8 & 2) != 0;
  if (bVar11) {
    local_45e = 0;
    puVar8 = auStack_45c;
    uVar10 = 0x3fe;
  }
  for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
  }
  if (bVar11) {
    *(undefined2 *)puVar8 = 0;
  }
  memset(auStack_17b76,0,95000);
  puVar2 = &local_5e;
  uVar10 = 0x1e;
  bVar11 = ((uint)puVar2 & 2) != 0;
  if (bVar11) {
    local_5e = 0;
    puVar2 = local_5c;
    uVar10 = 0x1c;
  }
  uVar7 = 0;
  do {
    *(undefined4 *)((int)puVar2 + uVar7) = 0;
    uVar7 = uVar7 + 4;
  } while (uVar7 < (uVar10 & 0xfffffffc));
  if (!bVar11) {
    *(undefined2 *)((int)puVar2 + uVar7) = 0;
  }
  pcVar9 = local_85e;
  uVar10 = 0x400;
  bVar11 = ((uint)pcVar9 & 2) != 0;
  if (bVar11) {
    local_85e[0] = '\0';
    local_85e[1] = '\0';
    pcVar9 = local_85e + 2;
    uVar10 = 0x3fe;
  }
  for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
  }
  if (bVar11) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
  }
  local_38 = 0;
  iVar3 = CItem::get_index(local_3c);
  if (iVar3 != 0x1d29) {
    if (iVar3 < 0x1d2a) {
      if (2 < iVar3 - 0x1c69U) goto LAB_084b1d41;
    }
    else if ((iVar3 < 0x1e3f) || ((0x1e40 < iVar3 && (iVar3 != 0x1e86)))) goto LAB_084b1d41;
  }
  local_38 = 100;
LAB_084b1d41:
  local_2c = (CStackableItem *)local_3c;
  cVar1 = CStackableItem::IsReinforceTicket((CStackableItem *)local_3c);
  if (cVar1 == '\0') {
    cVar1 = CStackableItem::IsAmplifyReinforceTicket(local_2c);
    if (cVar1 != '\0') {
      cVar1 = CStackableItem::GetAmplifyReinforceRate(local_2c);
      local_24 = (int)cVar1;
      if ((local_24 < 0) || (local_38 = local_24, 100 < local_24)) {
        local_38 = 0;
      }
    }
  }
  else {
    local_25 = CStackableItem::GetReinforceRate(local_2c);
    if ((local_25 < '\0') || ('d' < local_25)) {
      local_38 = 0;
    }
    else {
      local_38 = (int)local_25;
    }
  }
  local_34 = 0;
  local_30 = 0;
  for (local_20 = 0; local_20 < 10000; local_20 = local_20 + 1) {
    iVar3 = get_rand_int(100);
    if (iVar3 < local_38) {
      local_34 = local_34 + 1;
    }
    else {
      local_30 = local_30 + 1;
    }
  }
  uVar4 = CItem::get_index(local_3c);
  uVar5 = CItem::GetItemName(local_3c);
  sprintf(local_85e,&DAT_08c8035c,uVar5,uVar4,local_38,local_34,local_30);
  pCVar6 = (CUser *)CCommand::GetUser((CCommand *)this);
  SendChatMsg(this,pCVar6,local_85e);
  return;
}
```
