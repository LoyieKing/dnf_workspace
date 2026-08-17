# AvatarCoin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## Add

```asm
// === 0817fefa AvatarCoin::Add  [0x0817fefa-0x817ff13] ===
 817fefa:	55                   	push   %ebp
 817fefb:	89 e5                	mov    %esp,%ebp
 817fefd:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff00:	8b 00                	mov    (%eax),%eax
 817ff02:	89 c2                	mov    %eax,%edx
 817ff04:	03 55 0c             	add    0xc(%ebp),%edx
 817ff07:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff0a:	89 10                	mov    %edx,(%eax)
 817ff0c:	b8 01 00 00 00       	mov    $0x1,%eax
 817ff11:	5d                   	pop    %ebp
 817ff12:	c3                   	ret
 817ff13:	90                   	nop

```

```c
// AvatarCoin::Add @ 0x817fefa

/* AvatarCoin::Add(unsigned int) */

undefined4 __thiscall AvatarCoin::Add(AvatarCoin *this,uint param_1)

{
  *(uint *)this = *(int *)this + param_1;
  return 1;
}

```

---

## AvatarCoin

```asm
// === 0817fed4 AvatarCoin::AvatarCoin  [0x0817fed4-0x817fee1] ===
 817fed4:	55                   	push   %ebp
 817fed5:	89 e5                	mov    %esp,%ebp
 817fed7:	8b 45 08             	mov    0x8(%ebp),%eax
 817feda:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 817fee0:	5d                   	pop    %ebp
 817fee1:	c3                   	ret

```

```c
// AvatarCoin::AvatarCoin @ 0x817fed4

/* AvatarCoin::AvatarCoin() */

void __thiscall AvatarCoin::AvatarCoin(AvatarCoin *this)

{
  *(undefined4 *)this = 0;
  return;
}

```

---

## BuyProcess

```asm
// === 081801d0 AvatarCoin::BuyProcess  [0x081801d0-0x8180289] ===
 81801d0:	55                   	push   %ebp
 81801d1:	89 e5                	mov    %esp,%ebp
 81801d3:	53                   	push   %ebx
 81801d4:	83 ec 24             	sub    $0x24,%esp
 81801d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81801da:	8b 50 02             	mov    0x2(%eax),%edx
 81801dd:	a1 24 f8 41 09       	mov    0x941f824,%eax
 81801e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81801e6:	89 04 24             	mov    %eax,(%esp)
 81801e9:	e8 1c f9 ff ff       	call   817fb0a <_ZN20AvatarRouletteServer15isAvatarPotteryEm>
 81801ee:	84 c0                	test   %al,%al
 81801f0:	0f 84 89 00 00 00    	je     818027f <_ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item+0xaf>
 81801f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81801f9:	8b 40 07             	mov    0x7(%eax),%eax
 81801fc:	89 c3                	mov    %eax,%ebx
 81801fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8180201:	89 04 24             	mov    %eax,(%esp)
 8180204:	e8 85 a0 f5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8180209:	05 58 06 00 00       	add    $0x658,%eax
 818020e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8180212:	89 04 24             	mov    %eax,(%esp)
 8180215:	e8 e0 fc ff ff       	call   817fefa <_ZN10AvatarCoin3AddEj>
 818021a:	8b 45 08             	mov    0x8(%ebp),%eax
 818021d:	89 04 24             	mov    %eax,(%esp)
 8180220:	e8 b1 fe ff ff       	call   81800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>
 8180225:	83 f0 01             	xor    $0x1,%eax
 8180228:	84 c0                	test   %al,%al
 818022a:	74 2c                	je     8180258 <_ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item+0x88>
 818022c:	c7 44 24 10 39 bb b8 	movl   $0x8b8bb39,0x10(%esp)
 8180233:	08 
 8180234:	c7 44 24 0c 9d 01 00 	movl   $0x19d,0xc(%esp)
 818023b:	00 
 818023c:	c7 44 24 08 c0 c7 b8 	movl   $0x8b8c7c0,0x8(%esp)
 8180243:	08 
 8180244:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 818024b:	08 
 818024c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8180253:	e8 b2 39 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8180258:	8b 45 0c             	mov    0xc(%ebp),%eax
 818025b:	8b 40 07             	mov    0x7(%eax),%eax
 818025e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8180262:	8b 45 08             	mov    0x8(%ebp),%eax
 8180265:	89 04 24             	mov    %eax,(%esp)
 8180268:	e8 2f fd ff ff       	call   817ff9c <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj>
 818026d:	8b 45 08             	mov    0x8(%ebp),%eax
 8180270:	89 04 24             	mov    %eax,(%esp)
 8180273:	e8 6c fd ff ff       	call   817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>
 8180278:	b8 01 00 00 00       	mov    $0x1,%eax
 818027d:	eb 05                	jmp    8180284 <_ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item+0xb4>
 818027f:	b8 00 00 00 00       	mov    $0x0,%eax
 8180284:	83 c4 24             	add    $0x24,%esp
 8180287:	5b                   	pop    %ebx
 8180288:	5d                   	pop    %ebp
 8180289:	c3                   	ret

```

```c
// AvatarCoin::BuyProcess @ 0x81801d0

/* AvatarCoin::BuyProcess(CUser*, Inven_Item&) */

undefined4 AvatarCoin::BuyProcess(CUser *param_1,Inven_Item *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar2 = AvatarRouletteServer::isAvatarPottery
                    (GlobalData::s_pAvatarRoulette,*(ulong *)(param_2 + 2));
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 7);
    iVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    Add((AvatarCoin *)(iVar3 + 0x658),uVar1);
    cVar2 = SaveToDB(param_1);
    if (cVar2 != '\x01') {
      LogManager::logFormat
                (1,"localjapan/Arad_AvatarRoulette.cpp",
                 "static bool AvatarCoin::BuyProcess(CUser*, Inven_Item&)",0x19d,
                 "SaveAvatarCoin failed");
    }
    HistoryLog::AddLog(param_1,*(uint *)(param_2 + 7));
    SendSyncPacket(param_1);
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## Get

```asm
// === 0817fef0 AvatarCoin::Get  [0x0817fef0-0x817fef9] ===
 817fef0:	55                   	push   %ebp
 817fef1:	89 e5                	mov    %esp,%ebp
 817fef3:	8b 45 08             	mov    0x8(%ebp),%eax
 817fef6:	8b 00                	mov    (%eax),%eax
 817fef8:	5d                   	pop    %ebp
 817fef9:	c3                   	ret

```

```c
// AvatarCoin::Get @ 0x817fef0

/* AvatarCoin::Get() const */

undefined4 __thiscall AvatarCoin::Get(AvatarCoin *this)

{
  return *(undefined4 *)this;
}

```

---

## GetPackage

```asm
// === 0818028a AvatarCoin::GetPackage  [0x0818028a-0x8180328] ===
 818028a:	55                   	push   %ebp
 818028b:	89 e5                	mov    %esp,%ebp
 818028d:	53                   	push   %ebx
 818028e:	83 ec 34             	sub    $0x34,%esp
 8180291:	8b 45 10             	mov    0x10(%ebp),%eax
 8180294:	88 45 f4             	mov    %al,-0xc(%ebp)
 8180297:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 818029b:	74 07                	je     81802a4 <_ZN10AvatarCoin10GetPackageEP5CUserib+0x1a>
 818029d:	b8 01 00 00 00       	mov    $0x1,%eax
 81802a2:	eb 7f                	jmp    8180323 <_ZN10AvatarCoin10GetPackageEP5CUserib+0x99>
 81802a4:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81802a7:	8b 45 08             	mov    0x8(%ebp),%eax
 81802aa:	89 04 24             	mov    %eax,(%esp)
 81802ad:	e8 dc 9f f5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81802b2:	05 58 06 00 00       	add    $0x658,%eax
 81802b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81802bb:	89 04 24             	mov    %eax,(%esp)
 81802be:	e8 37 fc ff ff       	call   817fefa <_ZN10AvatarCoin3AddEj>
 81802c3:	8b 45 08             	mov    0x8(%ebp),%eax
 81802c6:	89 04 24             	mov    %eax,(%esp)
 81802c9:	e8 08 fe ff ff       	call   81800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>
 81802ce:	83 f0 01             	xor    $0x1,%eax
 81802d1:	84 c0                	test   %al,%al
 81802d3:	74 2c                	je     8180301 <_ZN10AvatarCoin10GetPackageEP5CUserib+0x77>
 81802d5:	c7 44 24 10 39 bb b8 	movl   $0x8b8bb39,0x10(%esp)
 81802dc:	08 
 81802dd:	c7 44 24 0c b0 01 00 	movl   $0x1b0,0xc(%esp)
 81802e4:	00 
 81802e5:	c7 44 24 08 80 c7 b8 	movl   $0x8b8c780,0x8(%esp)
 81802ec:	08 
 81802ed:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 81802f4:	08 
 81802f5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81802fc:	e8 09 39 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8180301:	8b 45 0c             	mov    0xc(%ebp),%eax
 8180304:	89 44 24 04          	mov    %eax,0x4(%esp)
 8180308:	8b 45 08             	mov    0x8(%ebp),%eax
 818030b:	89 04 24             	mov    %eax,(%esp)
 818030e:	e8 89 fc ff ff       	call   817ff9c <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj>
 8180313:	8b 45 08             	mov    0x8(%ebp),%eax
 8180316:	89 04 24             	mov    %eax,(%esp)
 8180319:	e8 c6 fc ff ff       	call   817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>
 818031e:	b8 01 00 00 00       	mov    $0x1,%eax
 8180323:	83 c4 34             	add    $0x34,%esp
 8180326:	5b                   	pop    %ebx
 8180327:	5d                   	pop    %ebp
 8180328:	c3                   	ret

```

```c
// AvatarCoin::GetPackage @ 0x818028a

/* AvatarCoin::GetPackage(CUser*, int, bool) */

undefined4 AvatarCoin::GetPackage(CUser *param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  
  if (!param_3) {
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    Add((AvatarCoin *)(iVar2 + 0x658),param_2);
    cVar1 = SaveToDB(param_1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"localjapan/Arad_AvatarRoulette.cpp",
                 "static bool AvatarCoin::GetPackage(CUser*, int, bool)",0x1b0,
                 "SaveAvatarCoin failed");
    }
    HistoryLog::AddLog(param_1,param_2);
    SendSyncPacket(param_1);
  }
  return 1;
}

```

---

## IsUsable

```asm
// === 0817ff44 AvatarCoin::IsUsable  [0x0817ff44-0x817ff53] ===
 817ff44:	55                   	push   %ebp
 817ff45:	89 e5                	mov    %esp,%ebp
 817ff47:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff4a:	8b 00                	mov    (%eax),%eax
 817ff4c:	85 c0                	test   %eax,%eax
 817ff4e:	0f 95 c0             	setne  %al
 817ff51:	5d                   	pop    %ebp
 817ff52:	c3                   	ret
 817ff53:	90                   	nop

```

```c
// AvatarCoin::IsUsable @ 0x817ff44

/* AvatarCoin::IsUsable() const */

undefined4 __thiscall AvatarCoin::IsUsable(AvatarCoin *this)

{
  return CONCAT31((int3)((uint)*(int *)this >> 8),*(int *)this != 0);
}

```

---

## SaveToDB

```asm
// === 081800d6 AvatarCoin::SaveToDB  [0x081800d6-0x81801cf] ===
 81800d6:	55                   	push   %ebp
 81800d7:	89 e5                	mov    %esp,%ebp
 81800d9:	56                   	push   %esi
 81800da:	53                   	push   %ebx
 81800db:	83 ec 20             	sub    $0x20,%esp
 81800de:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81800e3:	c7 44 24 08 84 01 00 	movl   $0x184,0x8(%esp)
 81800ea:	00 
 81800eb:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 81800f2:	08 
 81800f3:	89 04 24             	mov    %eax,(%esp)
 81800f6:	e8 67 01 11 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81800fb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8180102:	00 
 8180103:	89 44 24 04          	mov    %eax,0x4(%esp)
 8180107:	8d 45 ec             	lea    -0x14(%ebp),%eax
 818010a:	89 04 24             	mov    %eax,(%esp)
 818010d:	e8 14 8b f4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8180112:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8180115:	89 04 24             	mov    %eax,(%esp)
 8180118:	e8 29 8b f4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 818011d:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 8180124:	00 
 8180125:	89 04 24             	mov    %eax,(%esp)
 8180128:	e8 29 8b f4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 818012d:	8b 45 08             	mov    0x8(%ebp),%eax
 8180130:	89 04 24             	mov    %eax,(%esp)
 8180133:	e8 5e 8b f4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8180138:	89 c3                	mov    %eax,%ebx
 818013a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 818013d:	89 04 24             	mov    %eax,(%esp)
 8180140:	e8 01 8b f4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8180145:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8180149:	89 04 24             	mov    %eax,(%esp)
 818014c:	e8 05 8b f4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8180151:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8180154:	89 04 24             	mov    %eax,(%esp)
 8180157:	e8 f2 8a f4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 818015c:	89 04 24             	mov    %eax,(%esp)
 818015f:	e8 48 0c 00 00       	call   8180dac <_ZN12CStreamGuard11GetInBufferI18SIG_SAVE_INVENTORYEEPT_v>
 8180164:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8180167:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818016a:	89 44 24 04          	mov    %eax,0x4(%esp)
 818016e:	8b 45 08             	mov    0x8(%ebp),%eax
 8180171:	89 04 24             	mov    %eax,(%esp)
 8180174:	e8 07 fc 4c 00       	call   864fd80 <_ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY>
 8180179:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818017c:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 8180180:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8180185:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8180188:	89 54 24 08          	mov    %edx,0x8(%esp)
 818018c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8180193:	00 
 8180194:	89 04 24             	mov    %eax,(%esp)
 8180197:	e8 42 0e 3f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 818019c:	bb 01 00 00 00       	mov    $0x1,%ebx
 81801a1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81801a4:	89 04 24             	mov    %eax,(%esp)
 81801a7:	e8 26 c7 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81801ac:	89 d8                	mov    %ebx,%eax
 81801ae:	83 c4 20             	add    $0x20,%esp
 81801b1:	5b                   	pop    %ebx
 81801b2:	5e                   	pop    %esi
 81801b3:	5d                   	pop    %ebp
 81801b4:	c3                   	ret
 81801b5:	89 d3                	mov    %edx,%ebx
 81801b7:	89 c6                	mov    %eax,%esi
 81801b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81801bc:	89 04 24             	mov    %eax,(%esp)
 81801bf:	e8 0e c7 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81801c4:	89 f0                	mov    %esi,%eax
 81801c6:	89 da                	mov    %ebx,%edx
 81801c8:	89 04 24             	mov    %eax,(%esp)
 81801cb:	e8 80 35 96 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// AvatarCoin::SaveToDB @ 0x81800d6

/* AvatarCoin::SaveToDB(CUser*) */

undefined4 AvatarCoin::SaveToDB(CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_SAVE_INVENTORY *local_10;
  
  pSVar1 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"localjapan/Arad_AvatarRoulette.cpp",0x184);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08180128 to 0818019b has its CatchHandler @ 081801b5 */
  CStreamGuard::operator<<(pCVar2,0x23);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_INVENTORY>(pCVar2);
  CUser::_GetSaveInvenBase(param_1,local_10);
  local_10[8] = (SIG_SAVE_INVENTORY)0x1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## SendSyncPacket

```asm
// === 0817ffe4 AvatarCoin::SendSyncPacket  [0x0817ffe4-0x81800d5] ===
 817ffe4:	55                   	push   %ebp
 817ffe5:	89 e5                	mov    %esp,%ebp
 817ffe7:	56                   	push   %esi
 817ffe8:	53                   	push   %ebx
 817ffe9:	83 ec 20             	sub    $0x20,%esp
 817ffec:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 817fff0:	75 0a                	jne    817fffc <_ZN10AvatarCoin14SendSyncPacketEP5CUser+0x18>
 817fff2:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fff7:	e9 d0 00 00 00       	jmp    81800cc <_ZN10AvatarCoin14SendSyncPacketEP5CUser+0xe8>
 817fffc:	8b 45 08             	mov    0x8(%ebp),%eax
 817ffff:	89 04 24             	mov    %eax,(%esp)
 8180002:	e8 2b 04 fa ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8180007:	85 c0                	test   %eax,%eax
 8180009:	0f 94 c0             	sete   %al
 818000c:	84 c0                	test   %al,%al
 818000e:	74 0a                	je     818001a <_ZN10AvatarCoin14SendSyncPacketEP5CUser+0x36>
 8180010:	bb 00 00 00 00       	mov    $0x0,%ebx
 8180015:	e9 b2 00 00 00       	jmp    81800cc <_ZN10AvatarCoin14SendSyncPacketEP5CUser+0xe8>
 818001a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 818001d:	89 04 24             	mov    %eax,(%esp)
 8180020:	e8 27 dd 40 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8180025:	c7 44 24 08 4b 02 00 	movl   $0x24b,0x8(%esp)
 818002c:	00 
 818002d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8180034:	00 
 8180035:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8180038:	89 04 24             	mov    %eax,(%esp)
 818003b:	e8 bc b8 f4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8180040:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8180047:	00 
 8180048:	8d 45 ec             	lea    -0x14(%ebp),%eax
 818004b:	89 04 24             	mov    %eax,(%esp)
 818004e:	e8 cd b8 f4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8180053:	8b 45 08             	mov    0x8(%ebp),%eax
 8180056:	89 04 24             	mov    %eax,(%esp)
 8180059:	e8 20 a2 f5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 818005e:	05 58 06 00 00       	add    $0x658,%eax
 8180063:	89 04 24             	mov    %eax,(%esp)
 8180066:	e8 85 fe ff ff       	call   817fef0 <_ZNK10AvatarCoin3GetEv>
 818006b:	89 44 24 04          	mov    %eax,0x4(%esp)
 818006f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8180072:	89 04 24             	mov    %eax,(%esp)
 8180075:	e8 c2 b8 f4 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 818007a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8180081:	00 
 8180082:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8180085:	89 04 24             	mov    %eax,(%esp)
 8180088:	e8 cb b8 f4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 818008d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8180090:	89 44 24 04          	mov    %eax,0x4(%esp)
 8180094:	8b 45 08             	mov    0x8(%ebp),%eax
 8180097:	89 04 24             	mov    %eax,(%esp)
 818009a:	e8 1b 85 4c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 818009f:	bb 01 00 00 00       	mov    $0x1,%ebx
 81800a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81800a7:	89 04 24             	mov    %eax,(%esp)
 81800aa:	e8 d1 dd 40 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81800af:	eb 1b                	jmp    81800cc <_ZN10AvatarCoin14SendSyncPacketEP5CUser+0xe8>
 81800b1:	89 d3                	mov    %edx,%ebx
 81800b3:	89 c6                	mov    %eax,%esi
 81800b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81800b8:	89 04 24             	mov    %eax,(%esp)
 81800bb:	e8 c0 dd 40 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81800c0:	89 f0                	mov    %esi,%eax
 81800c2:	89 da                	mov    %ebx,%edx
 81800c4:	89 04 24             	mov    %eax,(%esp)
 81800c7:	e8 84 36 96 00       	call   8ae3750 <_Unwind_Resume>
 81800cc:	89 d8                	mov    %ebx,%eax
 81800ce:	83 c4 20             	add    $0x20,%esp
 81800d1:	5b                   	pop    %ebx
 81800d2:	5e                   	pop    %esi
 81800d3:	5d                   	pop    %ebp
 81800d4:	c3                   	ret
 81800d5:	90                   	nop

```

```c
// AvatarCoin::SendSyncPacket @ 0x817ffe4

/* AvatarCoin::SendSyncPacket(CUser*) */

undefined4 AvatarCoin::SendSyncPacket(CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  PacketGuard local_18 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0818003b to 0818009e has its CatchHandler @ 081800b1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x24b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
      iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar1 = Get((AvatarCoin *)(iVar1 + 0x658));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      CUser::Send(param_1,local_18);
      uVar2 = 1;
      PacketGuard::~PacketGuard(local_18);
    }
  }
  return uVar2;
}

```

---

## Set

```asm
// === 0817fee2 AvatarCoin::Set  [0x0817fee2-0x817feef] ===
 817fee2:	55                   	push   %ebp
 817fee3:	89 e5                	mov    %esp,%ebp
 817fee5:	8b 45 08             	mov    0x8(%ebp),%eax
 817fee8:	8b 55 0c             	mov    0xc(%ebp),%edx
 817feeb:	89 10                	mov    %edx,(%eax)
 817feed:	5d                   	pop    %ebp
 817feee:	c3                   	ret
 817feef:	90                   	nop

```

```c
// AvatarCoin::Set @ 0x817fee2

/* AvatarCoin::Set(unsigned int) */

void __thiscall AvatarCoin::Set(AvatarCoin *this,uint param_1)

{
  *(uint *)this = param_1;
  return;
}

```

---

## Use

```asm
// === 0817ff14 AvatarCoin::Use  [0x0817ff14-0x817ff43] ===
 817ff14:	55                   	push   %ebp
 817ff15:	89 e5                	mov    %esp,%ebp
 817ff17:	83 ec 18             	sub    $0x18,%esp
 817ff1a:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff1d:	89 04 24             	mov    %eax,(%esp)
 817ff20:	e8 1f 00 00 00       	call   817ff44 <_ZNK10AvatarCoin8IsUsableEv>
 817ff25:	84 c0                	test   %al,%al
 817ff27:	74 14                	je     817ff3d <_ZN10AvatarCoin3UseEv+0x29>
 817ff29:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff2c:	8b 00                	mov    (%eax),%eax
 817ff2e:	8d 50 ff             	lea    -0x1(%eax),%edx
 817ff31:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff34:	89 10                	mov    %edx,(%eax)
 817ff36:	b8 01 00 00 00       	mov    $0x1,%eax
 817ff3b:	eb 05                	jmp    817ff42 <_ZN10AvatarCoin3UseEv+0x2e>
 817ff3d:	b8 00 00 00 00       	mov    $0x0,%eax
 817ff42:	c9                   	leave
 817ff43:	c3                   	ret

```

```c
// AvatarCoin::Use @ 0x817ff14

/* AvatarCoin::Use() */

bool __thiscall AvatarCoin::Use(AvatarCoin *this)

{
  char cVar1;
  
  cVar1 = IsUsable(this);
  if (cVar1 != '\0') {
    *(int *)this = *(int *)this + -1;
  }
  return cVar1 != '\0';
}

```

