# SetInventory

`_ZN5CUser12SetInventoryEP18SIG_LOAD_INVENTORY`

`CUser::SetInventory(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d160  _ZN5CUser12SetInventoryEP18SIG_LOAD_INVENTORY
#           CUser::SetInventory(SIG_LOAD_INVENTORY*)
# range [0x0864d160, 0x0864d4b9]
0864d160 +0x000:  push   %ebp
0864d161 +0x001:  mov    %esp,%ebp
0864d163 +0x003:  push   %ebx
0864d164 +0x004:  sub    $0x74,%esp
0864d167 +0x007:  mov    0xc(%ebp),%eax
0864d16a +0x00a:  mov    0x4034(%eax),%eax
0864d170 +0x010:  mov    %eax,-0x4c(%ebp)
0864d173 +0x013:  mov    0xc(%ebp),%eax
0864d176 +0x016:  mov    0x4038(%eax),%eax
0864d17c +0x01c:  mov    %eax,-0x48(%ebp)
0864d17f +0x01f:  mov    0xc(%ebp),%eax
0864d182 +0x022:  mov    0x403c(%eax),%eax
0864d188 +0x028:  mov    %eax,-0x44(%ebp)
0864d18b +0x02b:  mov    0xc(%ebp),%eax
0864d18e +0x02e:  mov    0x4040(%eax),%eax
0864d194 +0x034:  mov    %eax,-0x40(%ebp)
0864d197 +0x037:  mov    0xc(%ebp),%eax
0864d19a +0x03a:  add    $0x5949,%eax
0864d19f +0x03f:  mov    %eax,-0x3c(%ebp)
0864d1a2 +0x042:  movl   $0x4a58,-0x38(%ebp)
0864d1a9 +0x049:  mov    0xc(%ebp),%eax
0864d1ac +0x04c:  add    $0x4044,%eax
0864d1b1 +0x051:  mov    %eax,-0x34(%ebp)
0864d1b4 +0x054:  movl   $0x1905,-0x30(%ebp)
0864d1bb +0x05b:  mov    0xc(%ebp),%eax
0864d1be +0x05e:  add    $0xa3a1,%eax
0864d1c3 +0x063:  mov    %eax,-0x2c(%ebp)
0864d1c6 +0x066:  movl   $0x53e,-0x28(%ebp)
0864d1cd +0x06d:  mov    0xc(%ebp),%eax
0864d1d0 +0x070:  add    $0xa8e4,%eax
0864d1d5 +0x075:  mov    %eax,-0x24(%ebp)
0864d1d8 +0x078:  mov    0xc(%ebp),%eax
0864d1db +0x07b:  mov    0xa8e0(%eax),%eax
0864d1e1 +0x081:  mov    %eax,-0x20(%ebp)
0864d1e4 +0x084:  mov    0xc(%ebp),%eax
0864d1e7 +0x087:  add    $0xeed1,%eax
0864d1ec +0x08c:  mov    %eax,-0x1c(%ebp)
0864d1ef +0x08f:  movl   $0x39aa,-0x18(%ebp)
0864d1f6 +0x096:  mov    0x8(%ebp),%eax
0864d1f9 +0x099:  mov    %eax,(%esp)
0864d1fc +0x09c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864d201 +0x0a1:  test   %eax,%eax
0864d203 +0x0a3:  sete   %al
0864d206 +0x0a6:  test   %al,%al
0864d208 +0x0a8:  je     0864d24a <+0xea>
0864d20a +0x0aa:  movl   $0x5,0xc(%esp)
0864d212 +0x0b2:  movl   $0x1271,0x8(%esp)
0864d21a +0x0ba:  movl   $&_ZZN5CUser12SetInventoryEP18SIG_LOAD_INVENTORYE19__PRETTY_FUNCTION__,0x4(%esp)
0864d222 +0x0c2:  lea    -0x5c(%ebp),%eax
0864d225 +0x0c5:  mov    %eax,(%esp)
0864d228 +0x0c8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864d22d +0x0cd:  movl   $"CUser::SetInventory m_selected is null",0x4(%esp)
0864d235 +0x0d5:  lea    -0x5c(%ebp),%eax
0864d238 +0x0d8:  mov    %eax,(%esp)
0864d23b +0x0db:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864d240 +0x0e0:  mov    $0x0,%eax
0864d245 +0x0e5:  jmp    0864d4b4 <+0x354>
0864d24a +0x0ea:  mov    -0x2c(%ebp),%eax
0864d24d +0x0ed:  mov    %eax,-0x14(%ebp)
0864d250 +0x0f0:  movl   $0x0,-0x10(%ebp)
0864d257 +0x0f7:  jmp    0864d29d <+0x13d>
0864d259 +0x0f9:  mov    0x8(%ebp),%eax
0864d25c +0x0fc:  mov    %eax,(%esp)
0864d25f +0x0ff:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d264 +0x104:  mov    -0x10(%ebp),%edx
0864d267 +0x107:  imul   $0x3d,%edx,%edx
0864d26a +0x10a:  add    %edx,%eax
0864d26c +0x10c:  add    $0x10,%eax
0864d26f +0x10f:  mov    0xe(%eax),%edx
0864d272 +0x112:  mov    -0x10(%ebp),%eax
0864d275 +0x115:  imul   $0x3d,%eax,%eax
0864d278 +0x118:  add    -0x14(%ebp),%eax
0864d27b +0x11b:  mov    0x2(%eax),%eax
0864d27e +0x11e:  cmp    %eax,%edx
0864d280 +0x120:  setne  %al
0864d283 +0x123:  test   %al,%al
0864d285 +0x125:  je     0864d299 <+0x139>
0864d287 +0x127:  mov    0x8(%ebp),%eax
0864d28a +0x12a:  add    $0x796f4,%eax
0864d28f +0x12f:  mov    %eax,(%esp)
0864d292 +0x132:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
0864d297 +0x137:  jmp    0864d2a8 <+0x148>
0864d299 +0x139:  addl   $0x1,-0x10(%ebp)
0864d29d +0x13d:  cmpl   $0xb,-0x10(%ebp)
0864d2a1 +0x141:  setle  %al
0864d2a4 +0x144:  test   %al,%al
0864d2a6 +0x146:  jne    0864d259 <+0xf9>
0864d2a8 +0x148:  mov    0xc(%ebp),%eax
0864d2ab +0x14b:  mov    &_ZL14gUnicodeBuffer+0xa254(%eax),%ebx
0864d2b1 +0x151:  mov    0x8(%ebp),%eax
0864d2b4 +0x154:  mov    %eax,(%esp)
0864d2b7 +0x157:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d2bc +0x15c:  add    $0x658,%eax
0864d2c1 +0x161:  mov    %ebx,0x4(%esp)
0864d2c5 +0x165:  mov    %eax,(%esp)
0864d2c8 +0x168:  call   0817fee2 <_ZN10AvatarCoin3SetEj>  ; AvatarCoin::Set(unsigned int)
0864d2cd +0x16d:  mov    0x8(%ebp),%eax
0864d2d0 +0x170:  mov    %eax,(%esp)
0864d2d3 +0x173:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d2d8 +0x178:  mov    -0x4c(%ebp),%edx
0864d2db +0x17b:  mov    %edx,0x4(%esp)
0864d2df +0x17f:  mov    %eax,(%esp)
0864d2e2 +0x182:  call   0822d652 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2cfc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2cfc
0864d2e7 +0x187:  mov    0x8(%ebp),%eax
0864d2ea +0x18a:  mov    %eax,(%esp)
0864d2ed +0x18d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d2f2 +0x192:  mov    -0x48(%ebp),%edx
0864d2f5 +0x195:  mov    %edx,0x4(%esp)
0864d2f9 +0x199:  mov    %eax,(%esp)
0864d2fc +0x19c:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
0864d301 +0x1a1:  mov    0x8(%ebp),%eax
0864d304 +0x1a4:  mov    %eax,(%esp)
0864d307 +0x1a7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d30c +0x1ac:  mov    -0x44(%ebp),%edx
0864d30f +0x1af:  mov    %edx,0x4(%esp)
0864d313 +0x1b3:  mov    %eax,(%esp)
0864d316 +0x1b6:  call   081ac73a <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x46>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x46
0864d31b +0x1bb:  mov    0x8(%ebp),%eax
0864d31e +0x1be:  mov    %eax,(%esp)
0864d321 +0x1c1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d326 +0x1c6:  mov    -0x40(%ebp),%edx
0864d329 +0x1c9:  mov    %edx,0x4(%esp)
0864d32d +0x1cd:  mov    %eax,(%esp)
0864d330 +0x1d0:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
0864d335 +0x1d5:  mov    0x8(%ebp),%eax
0864d338 +0x1d8:  mov    %eax,(%esp)
0864d33b +0x1db:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d340 +0x1e0:  mov    -0x38(%ebp),%edx
0864d343 +0x1e3:  mov    %edx,0xc(%esp)
0864d347 +0x1e7:  mov    -0x3c(%ebp),%edx
0864d34a +0x1ea:  mov    %edx,0x8(%esp)
0864d34e +0x1ee:  movl   $0x1,0x4(%esp)
0864d356 +0x1f6:  mov    %eax,(%esp)
0864d359 +0x1f9:  call   084fb11a <_ZN10CInventory12SetInvenDataEiPvi>  ; CInventory::SetInvenData(int, void*, int)
0864d35e +0x1fe:  mov    0x8(%ebp),%eax
0864d361 +0x201:  mov    %eax,(%esp)
0864d364 +0x204:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d369 +0x209:  mov    -0x30(%ebp),%edx
0864d36c +0x20c:  mov    %edx,0xc(%esp)
0864d370 +0x210:  mov    -0x34(%ebp),%edx
0864d373 +0x213:  mov    %edx,0x8(%esp)
0864d377 +0x217:  movl   $0x2,0x4(%esp)
0864d37f +0x21f:  mov    %eax,(%esp)
0864d382 +0x222:  call   084fb11a <_ZN10CInventory12SetInvenDataEiPvi>  ; CInventory::SetInvenData(int, void*, int)
0864d387 +0x227:  mov    -0x28(%ebp),%ebx
0864d38a +0x22a:  mov    0x8(%ebp),%eax
0864d38d +0x22d:  mov    %eax,(%esp)
0864d390 +0x230:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d395 +0x235:  add    $0x1c,%eax
0864d398 +0x238:  mov    %ebx,0x8(%esp)
0864d39c +0x23c:  mov    -0x2c(%ebp),%edx
0864d39f +0x23f:  mov    %edx,0x4(%esp)
0864d3a3 +0x243:  mov    %eax,(%esp)
0864d3a6 +0x246:  call   0807d8a0 <_init+0x198>
0864d3ab +0x24b:  mov    -0x1c(%ebp),%eax
0864d3ae +0x24e:  lea    0x38b6(%eax),%ebx
0864d3b4 +0x254:  mov    0x8(%ebp),%eax
0864d3b7 +0x257:  mov    %eax,(%esp)
0864d3ba +0x25a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d3bf +0x25f:  add    $0x55a,%eax
0864d3c4 +0x264:  movl   $0xf4,0x8(%esp)
0864d3cc +0x26c:  mov    %ebx,0x4(%esp)
0864d3d0 +0x270:  mov    %eax,(%esp)
0864d3d3 +0x273:  call   0807d8a0 <_init+0x198>
0864d3d8 +0x278:  movl   $0x17,-0xc(%ebp)
0864d3df +0x27f:  jmp    0864d424 <+0x2c4>
0864d3e1 +0x281:  mov    0x8(%ebp),%eax
0864d3e4 +0x284:  mov    %eax,(%esp)
0864d3e7 +0x287:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d3ec +0x28c:  mov    -0xc(%ebp),%edx
0864d3ef +0x28f:  imul   $0x3d,%edx,%edx
0864d3f2 +0x292:  add    $0x10,%edx
0864d3f5 +0x295:  add    %edx,%eax
0864d3f7 +0x297:  lea    0xc(%eax),%ebx
0864d3fa +0x29a:  mov    0x8(%ebp),%eax
0864d3fd +0x29d:  mov    %eax,(%esp)
0864d400 +0x2a0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d405 +0x2a5:  mov    %eax,(%esp)
0864d408 +0x2a8:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
0864d40d +0x2ad:  mov    %ebx,0x8(%esp)
0864d411 +0x2b1:  mov    -0xc(%ebp),%edx
0864d414 +0x2b4:  mov    %edx,0x4(%esp)
0864d418 +0x2b8:  mov    %eax,(%esp)
0864d41b +0x2bb:  call   0833be7c <_ZN13user_creature12CCreatureMgr12LoadArtifactEiP10Inven_Item>  ; user_creature::CCreatureMgr::LoadArtifact(int, Inven_Item*)
0864d420 +0x2c0:  addl   $0x1,-0xc(%ebp)
0864d424 +0x2c4:  cmpl   $0x19,-0xc(%ebp)
0864d428 +0x2c8:  setle  %al
0864d42b +0x2cb:  test   %al,%al
0864d42d +0x2cd:  jne    0864d3e1 <+0x281>
0864d42f +0x2cf:  mov    0x8(%ebp),%eax
0864d432 +0x2d2:  mov    %eax,(%esp)
0864d435 +0x2d5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0864d43a +0x2da:  mov    -0x18(%ebp),%edx
0864d43d +0x2dd:  mov    %edx,0xc(%esp)
0864d441 +0x2e1:  mov    -0x1c(%ebp),%edx
0864d444 +0x2e4:  mov    %edx,0x8(%esp)
0864d448 +0x2e8:  movl   $0x3,0x4(%esp)
0864d450 +0x2f0:  mov    %eax,(%esp)
0864d453 +0x2f3:  call   084fb11a <_ZN10CInventory12SetInvenDataEiPvi>  ; CInventory::SetInvenData(int, void*, int)
0864d458 +0x2f8:  cmpl   $0x0,-0x20(%ebp)
0864d45c +0x2fc:  jne    0864d47b <+0x31b>
0864d45e +0x2fe:  mov    0x8(%ebp),%eax
0864d461 +0x301:  mov    %eax,(%esp)
0864d464 +0x304:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0864d469 +0x309:  movl   $0x8,0x4(%esp)
0864d471 +0x311:  mov    %eax,(%esp)
0864d474 +0x314:  call   08694a0c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1261>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1261
0864d479 +0x319:  jmp    0864d4af <+0x34f>
0864d47b +0x31b:  mov    0x8(%ebp),%eax
0864d47e +0x31e:  mov    %eax,(%esp)
0864d481 +0x321:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0864d486 +0x326:  mov    -0x20(%ebp),%edx
0864d489 +0x329:  mov    %edx,0x4(%esp)
0864d48d +0x32d:  mov    %eax,(%esp)
0864d490 +0x330:  call   08694a0c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1261>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1261
0864d495 +0x335:  mov    0x8(%ebp),%eax
0864d498 +0x338:  mov    %eax,(%esp)
0864d49b +0x33b:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
0864d4a0 +0x340:  mov    -0x24(%ebp),%edx
0864d4a3 +0x343:  mov    %edx,0x4(%esp)
0864d4a7 +0x347:  mov    %eax,(%esp)
0864d4aa +0x34a:  call   0850b116 <_ZN6CCargo9set_cargoEPv>  ; CCargo::set_cargo(void*)
0864d4af +0x34f:  mov    $0x1,%eax
0864d4b4 +0x354:  add    $0x74,%esp
0864d4b7 +0x357:  pop    %ebx
0864d4b8 +0x358:  pop    %ebp
0864d4b9 +0x359:  ret
```

## 反编译 C

```c
// CUser::SetInventory @ 0x864d160

/* CUser::SetInventory(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall CUser::SetInventory(CUser *this,SIG_LOAD_INVENTORY *param_1)

{
  SIG_LOAD_INVENTORY *__src;
  uint uVar1;
  size_t __n;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  CCreatureMgr *this_00;
  CCargo *pCVar5;
  int iVar6;
  cMyTrace local_60 [16];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  SIG_LOAD_INVENTORY *local_40;
  int local_3c;
  SIG_LOAD_INVENTORY *local_38;
  int local_34;
  SIG_LOAD_INVENTORY *local_30;
  size_t local_2c;
  SIG_LOAD_INVENTORY *local_28;
  int local_24;
  SIG_LOAD_INVENTORY *local_20;
  int local_1c;
  SIG_LOAD_INVENTORY *local_18;
  int local_14;
  int local_10;
  
  local_50 = *(uint *)(param_1 + 0x4034);
  local_4c = *(uint *)(param_1 + 0x4038);
  local_48 = *(uint *)(param_1 + 0x403c);
  local_44 = *(uint *)(param_1 + 0x4040);
  local_40 = param_1 + 0x5949;
  local_3c = 0x4a58;
  local_38 = param_1 + 0x4044;
  local_34 = 0x1905;
  local_30 = param_1 + 0xa3a1;
  local_2c = 0x53e;
  local_28 = param_1 + 0xa8e4;
  local_24 = *(int *)(param_1 + 0xa8e0);
  local_20 = param_1 + 0xeed1;
  local_1c = 0x39aa;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 == 0) {
    cMyTrace::cMyTrace(local_60,"bool CUser::SetInventory(SIG_LOAD_INVENTORY*)",0x1271,5);
    cMyTrace::operator()(local_60,"CUser::SetInventory m_selected is null");
    uVar3 = 0;
  }
  else {
    local_18 = local_30;
    for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      if (*(int *)(iVar2 + local_14 * 0x3d + 0x1e) != *(int *)(local_18 + local_14 * 0x3d + 2)) {
        CCharacterView::enableSaveCharacView((CCharacterView *)(this + 0x796f4));
        break;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x14780);
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    AvatarCoin::Set((AvatarCoin *)(iVar2 + 0x658),uVar1);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::set_money(pCVar4,local_50);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetCoin(pCVar4,local_4c);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetPayCoin(pCVar4,local_48);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetEventCoin(pCVar4,local_44);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetInvenData(pCVar4,1,local_40,local_3c);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetInvenData(pCVar4,2,local_38,local_34);
    __n = local_2c;
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    memcpy((void *)(iVar2 + 0x1c),local_30,__n);
    __src = local_20 + 0x38b6;
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    memcpy((void *)(iVar2 + 0x55a),__src,0xf4);
    for (local_10 = 0x17; local_10 < 0x1a; local_10 = local_10 + 1) {
      iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      iVar6 = local_10 * 0x3d;
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
      user_creature::CCreatureMgr::LoadArtifact
                (this_00,local_10,(Inven_Item *)(iVar2 + iVar6 + 0x1c));
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetInvenData(pCVar4,3,local_20,local_1c);
    if (local_24 == 0) {
      pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      CCargo::SetCapacity(pCVar5,8);
    }
    else {
      pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      CCargo::SetCapacity(pCVar5,local_24);
      pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      CCargo::set_cargo(pCVar5,local_28);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
