# WongWork__CBossStage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 20

---

## CBossStage

```asm
// === 0814bd0c WongWork::CBossStage::CBossStage  [0x0814bd0c-0x814bdd5] ===
 814bd0c:	55                   	push   %ebp
 814bd0d:	89 e5                	mov    %esp,%ebp
 814bd0f:	56                   	push   %esi
 814bd10:	53                   	push   %ebx
 814bd11:	83 ec 10             	sub    $0x10,%esp
 814bd14:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd17:	89 04 24             	mov    %eax,(%esp)
 814bd1a:	e8 cd 5c 00 00       	call   81519ec <_ZN8WongWork9CBossPlayC1Ev>
 814bd1f:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd22:	c7 00 08 5f b7 08    	movl   $0x8b75f08,(%eax)
 814bd28:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd2b:	05 f4 09 00 00       	add    $0x9f4,%eax
 814bd30:	89 04 24             	mov    %eax,(%esp)
 814bd33:	e8 5c 56 00 00       	call   8151394 <_ZN7MapInfoC1Ev>
 814bd38:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd3b:	c7 80 e0 0a 00 00 01 	movl   $0x1,0xae0(%eax)
 814bd42:	00 00 00 
 814bd45:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd48:	c7 80 f0 09 00 00 00 	movl   $0x0,0x9f0(%eax)
 814bd4f:	00 00 00 
 814bd52:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd55:	c7 80 e8 0a 00 00 00 	movl   $0x0,0xae8(%eax)
 814bd5c:	00 00 00 
 814bd5f:	8b 45 08             	mov    0x8(%ebp),%eax
 814bd62:	05 f4 09 00 00       	add    $0x9f4,%eax
 814bd67:	89 04 24             	mov    %eax,(%esp)
 814bd6a:	e8 3f 57 00 00       	call   81514ae <_ZN7MapInfo5ClearEv>
 814bd6f:	c7 04 24 60 ea 00 00 	movl   $0xea60,(%esp)
 814bd76:	e8 0c 5e 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814bd7b:	8b 55 08             	mov    0x8(%ebp),%edx
 814bd7e:	89 82 30 0a 00 00    	mov    %eax,0xa30(%edx)
 814bd84:	c7 04 24 60 ea 00 00 	movl   $0xea60,(%esp)
 814bd8b:	e8 f7 5d 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814bd90:	8b 55 08             	mov    0x8(%ebp),%edx
 814bd93:	89 82 34 0a 00 00    	mov    %eax,0xa34(%edx)
 814bd99:	83 c4 10             	add    $0x10,%esp
 814bd9c:	5b                   	pop    %ebx
 814bd9d:	5e                   	pop    %esi
 814bd9e:	5d                   	pop    %ebp
 814bd9f:	c3                   	ret
 814bda0:	89 d3                	mov    %edx,%ebx
 814bda2:	89 c6                	mov    %eax,%esi
 814bda4:	8b 45 08             	mov    0x8(%ebp),%eax
 814bda7:	05 f4 09 00 00       	add    $0x9f4,%eax
 814bdac:	89 04 24             	mov    %eax,(%esp)
 814bdaf:	e8 08 5b 00 00       	call   81518bc <_ZN7MapInfoD1Ev>
 814bdb4:	89 f0                	mov    %esi,%eax
 814bdb6:	89 da                	mov    %ebx,%edx
 814bdb8:	eb 00                	jmp    814bdba <_ZN8WongWork10CBossStageC1Ev+0xae>
 814bdba:	89 d3                	mov    %edx,%ebx
 814bdbc:	89 c6                	mov    %eax,%esi
 814bdbe:	8b 45 08             	mov    0x8(%ebp),%eax
 814bdc1:	89 04 24             	mov    %eax,(%esp)
 814bdc4:	e8 71 5c 00 00       	call   8151a3a <_ZN8WongWork9CBossPlayD1Ev>
 814bdc9:	89 f0                	mov    %esi,%eax
 814bdcb:	89 da                	mov    %ebx,%edx
 814bdcd:	89 04 24             	mov    %eax,(%esp)
 814bdd0:	e8 7b 79 99 00       	call   8ae3750 <_Unwind_Resume>
 814bdd5:	90                   	nop

```

```c
// WongWork::CBossStage::CBossStage @ 0x814bd0c

/* WongWork::CBossStage::CBossStage() */

void __thiscall WongWork::CBossStage::CBossStage(CBossStage *this)

{
  undefined4 uVar1;
  
  CBossPlay::CBossPlay((CBossPlay *)this);
  *(undefined ***)this = &PTR_generateRewardItem_08b75f08;
                    /* try { // try from 0814bd33 to 0814bd37 has its CatchHandler @ 0814bdba */
  MapInfo::MapInfo((MapInfo *)(this + 0x9f4));
  *(undefined4 *)(this + 0xae0) = 1;
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 0xae8) = 0;
                    /* try { // try from 0814bd6a to 0814bd8f has its CatchHandler @ 0814bda0 */
  MapInfo::Clear((MapInfo *)(this + 0x9f4));
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa30) = uVar1;
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa34) = uVar1;
  return;
}

```

---

## GoldPickupItem

```asm
// === 0814f0e6 WongWork::CBossStage::GoldPickupItem  [0x0814f0e6-0x814f425] ===
 814f0e6:	55                   	push   %ebp
 814f0e7:	89 e5                	mov    %esp,%ebp
 814f0e9:	56                   	push   %esi
 814f0ea:	53                   	push   %ebx
 814f0eb:	83 ec 60             	sub    $0x60,%esp
 814f0ee:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 814f0f5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 814f0fc:	eb 17                	jmp    814f115 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x2f>
 814f0fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814f101:	8b 55 08             	mov    0x8(%ebp),%edx
 814f104:	0f b6 44 02 0d       	movzbl 0xd(%edx,%eax,1),%eax
 814f109:	84 c0                	test   %al,%al
 814f10b:	74 04                	je     814f111 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x2b>
 814f10d:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 814f111:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 814f115:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 814f119:	0f 9e c0             	setle  %al
 814f11c:	84 c0                	test   %al,%al
 814f11e:	75 de                	jne    814f0fe <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x18>
 814f120:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f123:	89 04 24             	mov    %eax,(%esp)
 814f126:	e8 21 ec 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814f12b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f12e:	89 04 24             	mov    %eax,(%esp)
 814f131:	e8 b0 c7 f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814f136:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 814f13a:	75 70                	jne    814f1ac <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0xc6>
 814f13c:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 814f143:	00 
 814f144:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f14b:	00 
 814f14c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f14f:	89 04 24             	mov    %eax,(%esp)
 814f152:	e8 a5 c7 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814f157:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f15e:	00 
 814f15f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f162:	89 04 24             	mov    %eax,(%esp)
 814f165:	e8 b6 c7 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f16a:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 814f171:	00 
 814f172:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f175:	89 04 24             	mov    %eax,(%esp)
 814f178:	e8 a3 c7 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f17d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f184:	00 
 814f185:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f188:	89 04 24             	mov    %eax,(%esp)
 814f18b:	e8 c8 c7 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814f190:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f193:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f197:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f19a:	89 04 24             	mov    %eax,(%esp)
 814f19d:	e8 18 94 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814f1a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 814f1a7:	e9 66 02 00 00       	jmp    814f412 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x32c>
 814f1ac:	8b 45 14             	mov    0x14(%ebp),%eax
 814f1af:	83 c0 10             	add    $0x10,%eax
 814f1b2:	89 04 24             	mov    %eax,(%esp)
 814f1b5:	e8 80 86 fa ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 814f1ba:	89 45 d0             	mov    %eax,-0x30(%ebp)
 814f1bd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814f1c0:	89 c2                	mov    %eax,%edx
 814f1c2:	c1 fa 1f             	sar    $0x1f,%edx
 814f1c5:	f7 7d cc             	idivl  -0x34(%ebp)
 814f1c8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 814f1cb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814f1ce:	89 c2                	mov    %eax,%edx
 814f1d0:	c1 fa 1f             	sar    $0x1f,%edx
 814f1d3:	f7 7d cc             	idivl  -0x34(%ebp)
 814f1d6:	89 55 d8             	mov    %edx,-0x28(%ebp)
 814f1d9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814f1dc:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 814f1df:	8d 04 02             	lea    (%edx,%eax,1),%eax
 814f1e2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 814f1e5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 814f1e8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814f1eb:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 814f1f2:	00 
 814f1f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f1fa:	00 
 814f1fb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f1fe:	89 04 24             	mov    %eax,(%esp)
 814f201:	e8 f6 c6 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814f206:	8b 45 10             	mov    0x10(%ebp),%eax
 814f209:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f20d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f210:	89 04 24             	mov    %eax,(%esp)
 814f213:	e8 8c ac f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814f218:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f21b:	89 04 24             	mov    %eax,(%esp)
 814f21e:	e8 59 b1 f8 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 814f223:	0f b7 c0             	movzwl %ax,%eax
 814f226:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f22a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f22d:	89 04 24             	mov    %eax,(%esp)
 814f230:	e8 6f ac f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814f235:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 814f23c:	e9 5a 01 00 00       	jmp    814f39b <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x2b5>
 814f241:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 814f248:	8b 45 08             	mov    0x8(%ebp),%eax
 814f24b:	8b 40 04             	mov    0x4(%eax),%eax
 814f24e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814f251:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f255:	89 04 24             	mov    %eax,(%esp)
 814f258:	e8 07 65 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 814f25d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 814f260:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 814f264:	74 20                	je     814f286 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x1a0>
 814f266:	8b 45 08             	mov    0x8(%ebp),%eax
 814f269:	8b 40 04             	mov    0x4(%eax),%eax
 814f26c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814f26f:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f273:	89 04 24             	mov    %eax,(%esp)
 814f276:	e8 ed 65 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 814f27b:	84 c0                	test   %al,%al
 814f27d:	74 07                	je     814f286 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x1a0>
 814f27f:	b8 01 00 00 00       	mov    $0x1,%eax
 814f284:	eb 05                	jmp    814f28b <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x1a5>
 814f286:	b8 00 00 00 00       	mov    $0x0,%eax
 814f28b:	84 c0                	test   %al,%al
 814f28d:	0f 84 de 00 00 00    	je     814f371 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x28b>
 814f293:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f29a:	00 
 814f29b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f29e:	89 04 24             	mov    %eax,(%esp)
 814f2a1:	e8 7a c6 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f2a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f2a9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 814f2ac:	75 05                	jne    814f2b3 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x1cd>
 814f2ae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 814f2b1:	eb 03                	jmp    814f2b6 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x1d0>
 814f2b3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814f2b6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814f2b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f2bc:	89 04 24             	mov    %eax,(%esp)
 814f2bf:	e8 ca af f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814f2c4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 814f2cb:	00 
 814f2cc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814f2d3:	00 
 814f2d4:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 814f2db:	00 
 814f2dc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814f2df:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f2e3:	89 04 24             	mov    %eax,(%esp)
 814f2e6:	e8 b1 ff 3a 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 814f2eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814f2ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814f2f1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 814f2f4:	7d 2e                	jge    814f324 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x23e>
 814f2f6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814f2fa:	79 07                	jns    814f303 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x21d>
 814f2fc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814f303:	8b 55 f4             	mov    -0xc(%ebp),%edx
 814f306:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814f309:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814f30d:	89 44 24 08          	mov    %eax,0x8(%esp)
 814f311:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f318:	00 
 814f319:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f31c:	89 04 24             	mov    %eax,(%esp)
 814f31f:	e8 20 d5 52 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 814f324:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814f327:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f32b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f32e:	89 04 24             	mov    %eax,(%esp)
 814f331:	e8 06 c6 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814f336:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f33d:	00 
 814f33e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f341:	89 04 24             	mov    %eax,(%esp)
 814f344:	e8 d7 c5 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f349:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f350:	00 
 814f351:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f354:	89 04 24             	mov    %eax,(%esp)
 814f357:	e8 e0 c5 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814f35c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f363:	00 
 814f364:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f367:	89 04 24             	mov    %eax,(%esp)
 814f36a:	e8 cd c5 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814f36f:	eb 26                	jmp    814f397 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x2b1>
 814f371:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f378:	00 
 814f379:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f37c:	89 04 24             	mov    %eax,(%esp)
 814f37f:	e8 9c c5 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f384:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f38b:	00 
 814f38c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f38f:	89 04 24             	mov    %eax,(%esp)
 814f392:	e8 a5 c5 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814f397:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 814f39b:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 814f39f:	0f 9e c0             	setle  %al
 814f3a2:	84 c0                	test   %al,%al
 814f3a4:	0f 85 97 fe ff ff    	jne    814f241 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x15b>
 814f3aa:	8b 45 10             	mov    0x10(%ebp),%eax
 814f3ad:	89 45 c8             	mov    %eax,-0x38(%ebp)
 814f3b0:	8b 45 08             	mov    0x8(%ebp),%eax
 814f3b3:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 814f3b9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814f3bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f3c0:	89 14 24             	mov    %edx,(%esp)
 814f3c3:	e8 50 38 00 00       	call   8152c18 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 814f3c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f3cf:	00 
 814f3d0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f3d3:	89 04 24             	mov    %eax,(%esp)
 814f3d6:	e8 7d c5 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814f3db:	8b 45 08             	mov    0x8(%ebp),%eax
 814f3de:	8b 40 04             	mov    0x4(%eax),%eax
 814f3e1:	8d 55 bc             	lea    -0x44(%ebp),%edx
 814f3e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f3e8:	89 04 24             	mov    %eax,(%esp)
 814f3eb:	e8 5e dd 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814f3f0:	bb 01 00 00 00       	mov    $0x1,%ebx
 814f3f5:	eb 1b                	jmp    814f412 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item+0x32c>
 814f3f7:	89 d3                	mov    %edx,%ebx
 814f3f9:	89 c6                	mov    %eax,%esi
 814f3fb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f3fe:	89 04 24             	mov    %eax,(%esp)
 814f401:	e8 7a ea 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814f406:	89 f0                	mov    %esi,%eax
 814f408:	89 da                	mov    %ebx,%edx
 814f40a:	89 04 24             	mov    %eax,(%esp)
 814f40d:	e8 3e 43 99 00       	call   8ae3750 <_Unwind_Resume>
 814f412:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814f415:	89 04 24             	mov    %eax,(%esp)
 814f418:	e8 63 ea 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814f41d:	89 d8                	mov    %ebx,%eax
 814f41f:	83 c4 60             	add    $0x60,%esp
 814f422:	5b                   	pop    %ebx
 814f423:	5e                   	pop    %esi
 814f424:	5d                   	pop    %ebp
 814f425:	c3                   	ret

```

```c
// WongWork::CBossStage::GoldPickupItem @ 0x814f0e6

/* WongWork::CBossStage::GoldPickupItem(CUser*, unsigned int, map_item const&) */

undefined4 __thiscall
WongWork::CBossStage::GoldPickupItem(CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  PacketGuard local_48 [12];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  int local_10;
  
  local_38 = 0;
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    if (this[local_20 + 0xd] != (CBossStage)0x0) {
      local_38 = local_38 + 1;
    }
  }
  PacketGuard::PacketGuard(local_48);
                    /* try { // try from 0814f131 to 0814f3ef has its CatchHandler @ 0814f3f7 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
  if (local_38 == 0) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send(param_1,local_48);
    uVar5 = 0;
  }
  else {
    local_34 = Inven_Item::get_add_info((Inven_Item *)(param_3 + 0x10));
    local_30 = local_34 / local_38;
    local_2c = local_34 % local_38;
    local_28 = local_30 + local_2c;
    local_24 = local_30;
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x27);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,param_2);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar3 & 0xffff);
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      local_18 = (CUserCharacInfo *)0x0;
      local_18 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_1c);
      if ((local_18 == (CUserCharacInfo *)0x0) ||
         (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_1c), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        local_14 = local_24;
        if (local_18 == (CUserCharacInfo *)param_1) {
          local_14 = local_28;
        }
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_18);
        local_10 = CInventory::gain_money(pCVar4,local_14,4,1,0);
        if (local_10 < local_14) {
          if (local_10 < 0) {
            local_10 = 0;
          }
          CUser::SendMoneyFullReason((CUser *)local_18,0,local_14,local_10);
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
      }
    }
    local_3c = param_2;
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
              ((int *)(this + 0xa18));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_48);
    uVar5 = 1;
  }
  PacketGuard::~PacketGuard(local_48);
  return uVar5;
}

```

---

## KillMonsterGetExp

```asm
// === 0814d300 WongWork::CBossStage::KillMonsterGetExp  [0x0814d300-0x814d627] ===
 814d300:	55                   	push   %ebp
 814d301:	89 e5                	mov    %esp,%ebp
 814d303:	56                   	push   %esi
 814d304:	53                   	push   %ebx
 814d305:	83 ec 70             	sub    $0x70,%esp
 814d308:	8b 45 08             	mov    0x8(%ebp),%eax
 814d30b:	8b 40 04             	mov    0x4(%eax),%eax
 814d30e:	89 04 24             	mov    %eax,(%esp)
 814d311:	e8 5a 47 00 00       	call   8151a70 <_ZN6CParty17getMemberLevelGapEv>
 814d316:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814d319:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 814d320:	e9 e7 02 00 00       	jmp    814d60c <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x30c>
 814d325:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 814d32c:	8b 45 08             	mov    0x8(%ebp),%eax
 814d32f:	8b 40 04             	mov    0x4(%eax),%eax
 814d332:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814d335:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d339:	89 04 24             	mov    %eax,(%esp)
 814d33c:	e8 23 84 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 814d341:	89 45 ec             	mov    %eax,-0x14(%ebp)
 814d344:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 814d348:	74 1c                	je     814d366 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x66>
 814d34a:	8b 45 08             	mov    0x8(%ebp),%eax
 814d34d:	8b 40 04             	mov    0x4(%eax),%eax
 814d350:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814d353:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d357:	89 04 24             	mov    %eax,(%esp)
 814d35a:	e8 09 85 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 814d35f:	83 f0 01             	xor    $0x1,%eax
 814d362:	84 c0                	test   %al,%al
 814d364:	74 07                	je     814d36d <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x6d>
 814d366:	b8 01 00 00 00       	mov    $0x1,%eax
 814d36b:	eb 05                	jmp    814d372 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x72>
 814d36d:	b8 00 00 00 00       	mov    $0x0,%eax
 814d372:	84 c0                	test   %al,%al
 814d374:	0f 85 8a 02 00 00    	jne    814d604 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x304>
 814d37a:	8b 45 08             	mov    0x8(%ebp),%eax
 814d37d:	8b 40 04             	mov    0x4(%eax),%eax
 814d380:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 814d386:	83 f8 01             	cmp    $0x1,%eax
 814d389:	0f 84 78 02 00 00    	je     814d607 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x307>
 814d38f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814d392:	89 04 24             	mov    %eax,(%esp)
 814d395:	e8 1e cf f8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 814d39a:	89 c3                	mov    %eax,%ebx
 814d39c:	e8 fa ed f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814d3a1:	8b 55 10             	mov    0x10(%ebp),%edx
 814d3a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 814d3a8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814d3ac:	89 04 24             	mov    %eax,(%esp)
 814d3af:	e8 ba 36 21 00       	call   8360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>
 814d3b4:	8b 45 08             	mov    0x8(%ebp),%eax
 814d3b7:	8b 80 ec 0a 00 00    	mov    0xaec(%eax),%eax
 814d3bd:	89 c3                	mov    %eax,%ebx
 814d3bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d3c2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 814d3c6:	0f be c8             	movsbl %al,%ecx
 814d3c9:	8b 45 10             	mov    0x10(%ebp),%eax
 814d3cc:	8b 10                	mov    (%eax),%edx
 814d3ce:	8b 45 08             	mov    0x8(%ebp),%eax
 814d3d1:	8b 40 04             	mov    0x4(%eax),%eax
 814d3d4:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 814d3db:	00 
 814d3dc:	be 00 00 80 3f       	mov    $0x3f800000,%esi
 814d3e1:	89 74 24 14          	mov    %esi,0x14(%esp)
 814d3e5:	be 00 00 80 3f       	mov    $0x3f800000,%esi
 814d3ea:	89 74 24 10          	mov    %esi,0x10(%esp)
 814d3ee:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 814d3f2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814d3f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d3fa:	89 04 24             	mov    %eax,(%esp)
 814d3fd:	e8 da 4f 45 00       	call   85a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>
 814d402:	8b 55 10             	mov    0x10(%ebp),%edx
 814d405:	89 02                	mov    %eax,(%edx)
 814d407:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d40a:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 814d40e:	3c 05                	cmp    $0x5,%al
 814d410:	75 5f                	jne    814d471 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x171>
 814d412:	8b 45 10             	mov    0x10(%ebp),%eax
 814d415:	8b 00                	mov    (%eax),%eax
 814d417:	ba 00 00 00 00       	mov    $0x0,%edx
 814d41c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 814d41f:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 814d422:	df 6d c0             	fildll -0x40(%ebp)
 814d425:	d9 5d b0             	fstps  -0x50(%ebp)
 814d428:	8b 45 08             	mov    0x8(%ebp),%eax
 814d42b:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814d431:	89 04 24             	mov    %eax,(%esp)
 814d434:	e8 b7 08 fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 814d439:	89 c3                	mov    %eax,%ebx
 814d43b:	e8 5b ed f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814d440:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814d444:	89 04 24             	mov    %eax,(%esp)
 814d447:	e8 8c 81 ff ff       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 814d44c:	d9 00                	flds   (%eax)
 814d44e:	d8 4d b0             	fmuls  -0x50(%ebp)
 814d451:	d9 7d be             	fnstcw -0x42(%ebp)
 814d454:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 814d458:	b4 0c                	mov    $0xc,%ah
 814d45a:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 814d45e:	d9 6d bc             	fldcw  -0x44(%ebp)
 814d461:	db 5d b8             	fistpl -0x48(%ebp)
 814d464:	d9 6d be             	fldcw  -0x42(%ebp)
 814d467:	8b 45 b8             	mov    -0x48(%ebp),%eax
 814d46a:	89 c2                	mov    %eax,%edx
 814d46c:	8b 45 10             	mov    0x10(%ebp),%eax
 814d46f:	89 10                	mov    %edx,(%eax)
 814d471:	8b 45 10             	mov    0x10(%ebp),%eax
 814d474:	8b 00                	mov    (%eax),%eax
 814d476:	ba 00 00 00 00       	mov    $0x0,%edx
 814d47b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 814d47e:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 814d481:	df 6d c0             	fildll -0x40(%ebp)
 814d484:	d9 5d b4             	fstps  -0x4c(%ebp)
 814d487:	8b 45 08             	mov    0x8(%ebp),%eax
 814d48a:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814d490:	89 04 24             	mov    %eax,(%esp)
 814d493:	e8 58 08 fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 814d498:	89 c3                	mov    %eax,%ebx
 814d49a:	e8 fc ec f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814d49f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814d4a3:	89 04 24             	mov    %eax,(%esp)
 814d4a6:	e8 2d 81 ff ff       	call   81455d8 <_ZN12CDataManager14GetTowerScriptEj>
 814d4ab:	d9 80 84 0c 00 00    	flds   0xc84(%eax)
 814d4b1:	d8 4d b4             	fmuls  -0x4c(%ebp)
 814d4b4:	d9 7d be             	fnstcw -0x42(%ebp)
 814d4b7:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 814d4bb:	b4 0c                	mov    $0xc,%ah
 814d4bd:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 814d4c1:	d9 6d bc             	fldcw  -0x44(%ebp)
 814d4c4:	db 5d b8             	fistpl -0x48(%ebp)
 814d4c7:	d9 6d be             	fldcw  -0x42(%ebp)
 814d4ca:	8b 45 b8             	mov    -0x48(%ebp),%eax
 814d4cd:	89 c2                	mov    %eax,%edx
 814d4cf:	8b 45 10             	mov    0x10(%ebp),%eax
 814d4d2:	89 10                	mov    %edx,(%eax)
 814d4d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814d4d7:	89 04 24             	mov    %eax,(%esp)
 814d4da:	e8 77 45 00 00       	call   8151a56 <_ZN19STGainedEachExpDataC1Ev>
 814d4df:	8b 45 10             	mov    0x10(%ebp),%eax
 814d4e2:	8b 00                	mov    (%eax),%eax
 814d4e4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 814d4e7:	8b 45 08             	mov    0x8(%ebp),%eax
 814d4ea:	8b 40 04             	mov    0x4(%eax),%eax
 814d4ed:	8d 55 dc             	lea    -0x24(%ebp),%edx
 814d4f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 814d4f4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 814d4f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d4fb:	89 04 24             	mov    %eax,(%esp)
 814d4fe:	e8 85 4f 45 00       	call   85a2488 <_ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData>
 814d503:	8b 55 10             	mov    0x10(%ebp),%edx
 814d506:	89 02                	mov    %eax,(%edx)
 814d508:	8b 45 10             	mov    0x10(%ebp),%eax
 814d50b:	8b 10                	mov    (%eax),%edx
 814d50d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814d510:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814d517:	00 
 814d518:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d51c:	89 04 24             	mov    %eax,(%esp)
 814d51f:	e8 de 0e 50 00       	call   864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>
 814d524:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 814d52b:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 814d532:	c7 45 f0 0b 00 00 00 	movl   $0xb,-0x10(%ebp)
 814d539:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d53c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 814d540:	3c 05                	cmp    $0x5,%al
 814d542:	75 07                	jne    814d54b <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x24b>
 814d544:	c7 45 f0 0c 00 00 00 	movl   $0xc,-0x10(%ebp)
 814d54b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d54e:	8b 50 0c             	mov    0xc(%eax),%edx
 814d551:	8b 45 10             	mov    0x10(%ebp),%eax
 814d554:	8b 00                	mov    (%eax),%eax
 814d556:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 814d55d:	00 
 814d55e:	89 54 24 14          	mov    %edx,0x14(%esp)
 814d562:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814d565:	89 54 24 10          	mov    %edx,0x10(%esp)
 814d569:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 814d56c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814d570:	8d 55 d8             	lea    -0x28(%ebp),%edx
 814d573:	89 54 24 08          	mov    %edx,0x8(%esp)
 814d577:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d57b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814d57e:	89 04 24             	mov    %eax,(%esp)
 814d581:	e8 78 ce 51 00       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 814d586:	84 c0                	test   %al,%al
 814d588:	74 23                	je     814d5ad <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x2ad>
 814d58a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814d591:	00 
 814d592:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 814d599:	00 
 814d59a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 814d5a1:	00 
 814d5a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814d5a5:	89 04 24             	mov    %eax,(%esp)
 814d5a8:	e8 af e4 52 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 814d5ad:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 814d5b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d5b7:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 814d5bb:	3c 04                	cmp    $0x4,%al
 814d5bd:	7e 12                	jle    814d5d1 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x2d1>
 814d5bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d5c2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 814d5c6:	3c 08                	cmp    $0x8,%al
 814d5c8:	7f 07                	jg     814d5d1 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x2d1>
 814d5ca:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 814d5d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d5d4:	8b 58 0c             	mov    0xc(%eax),%ebx
 814d5d7:	8b 45 08             	mov    0x8(%ebp),%eax
 814d5da:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814d5e0:	89 04 24             	mov    %eax,(%esp)
 814d5e3:	e8 08 07 fb ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 814d5e8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 814d5eb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814d5ef:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 814d5f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d5f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814d5fa:	89 04 24             	mov    %eax,(%esp)
 814d5fd:	e8 02 f5 51 00       	call   866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>
 814d602:	eb 04                	jmp    814d608 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x308>
 814d604:	90                   	nop
 814d605:	eb 01                	jmp    814d608 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x308>
 814d607:	90                   	nop
 814d608:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 814d60c:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 814d610:	0f 9e c0             	setle  %al
 814d613:	84 c0                	test   %al,%al
 814d615:	0f 85 0a fd ff ff    	jne    814d325 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj+0x25>
 814d61b:	b8 01 00 00 00       	mov    $0x1,%eax
 814d620:	83 c4 70             	add    $0x70,%esp
 814d623:	5b                   	pop    %ebx
 814d624:	5e                   	pop    %esi
 814d625:	5d                   	pop    %ebp
 814d626:	c3                   	ret
 814d627:	90                   	nop

```

```c
// WongWork::CBossStage::KillMonsterGetExp @ 0x814d300

/* WongWork::CBossStage::KillMonsterGetExp(map_monster const&, unsigned int&) */

undefined4 __thiscall
WongWork::CBossStage::KillMonsterGetExp(CBossStage *this,map_monster *param_1,uint *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CDataManager *pCVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [2];
  undefined4 local_20;
  int local_1c;
  CUserCharacInfo *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = CParty::getMemberLevelGap(*(CParty **)(this + 4));
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    local_18 = (CUserCharacInfo *)0x0;
    local_18 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_1c);
    if ((local_18 == (CUserCharacInfo *)0x0) ||
       (cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_1c), cVar3 != '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((!bVar2) && (*(int *)(*(int *)(this + 4) + 0xcd8) != 1)) {
      iVar4 = CUserCharacInfo::get_charac_level(local_18);
      pCVar5 = (CDataManager *)G_CDataManager();
      CDataManager::get_mob_reward(pCVar5,iVar4,param_2);
      uVar6 = CParty::getMonsterTotalExp
                        (*(CParty **)(this + 4),*param_2,(char)param_1[8],*(int *)(this + 0xaec),1.0
                         ,1.0,false);
      *param_2 = uVar6;
      if (param_1[8] == (map_monster)0x5) {
        uVar6 = *param_2;
        uVar7 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
        pCVar5 = (CDataManager *)G_CDataManager();
        pfVar8 = (float *)CDataManager::GetTowerScript(pCVar5,uVar7);
        *param_2 = (int)ROUND(*pfVar8 * (float)uVar6);
      }
      uVar6 = *param_2;
      uVar7 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
      pCVar5 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::GetTowerScript(pCVar5,uVar7);
      *param_2 = (int)ROUND(*(float *)(iVar4 + 0xc84) * (float)uVar6);
      STGainedEachExpData::STGainedEachExpData((STGainedEachExpData *)local_28);
      local_28[0] = *param_2;
      uVar6 = CParty::sumGainedEachExp
                        (*(CParty **)(this + 4),(CUser *)local_18,(STGainedEachExpData *)local_28);
      *param_2 = uVar6;
      CUserCharacInfo::calcHelpAbuseRatio((uint)local_18,SUB41(*param_2,0));
      local_2c = 0;
      local_30 = 0;
      local_14 = 0xb;
      if (param_1[8] == (map_monster)0x5) {
        local_14 = 0xc;
      }
      cVar3 = CUser::gain_exp_sp((CUser *)local_18,*param_2,&local_2c,&local_30,local_14,
                                 *(undefined4 *)(param_1 + 0xc),0);
      if (cVar3 != '\0') {
        CUser::SendNotiPacket((CUser *)local_18,2,2,1);
      }
      local_10 = 1;
      if (('\x04' < (char)param_1[8]) && ((char)param_1[8] < '\t')) {
        local_10 = 2;
      }
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      uVar9 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
      CUser::CheckQuestMonster((CUser *)local_18,uVar9,uVar1,local_10);
    }
  }
  return 1;
}

```

---

## NormalPickupItem

```asm
// === 0814ecec WongWork::CBossStage::NormalPickupItem  [0x0814ecec-0x814f0e5] ===
 814ecec:	55                   	push   %ebp
 814eced:	89 e5                	mov    %esp,%ebp
 814ecef:	56                   	push   %esi
 814ecf0:	53                   	push   %ebx
 814ecf1:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 814ecf7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 814ecfb:	0f 84 d4 03 00 00    	je     814f0d5 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x3e9>
 814ed01:	8b 45 14             	mov    0x14(%ebp),%eax
 814ed04:	8b 40 12             	mov    0x12(%eax),%eax
 814ed07:	89 c3                	mov    %eax,%ebx
 814ed09:	e8 8d d4 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814ed0e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814ed12:	89 04 24             	mov    %eax,(%esp)
 814ed15:	e8 18 0d 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814ed1a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 814ed1d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 814ed21:	75 0a                	jne    814ed2d <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x41>
 814ed23:	bb 00 00 00 00       	mov    $0x0,%ebx
 814ed28:	e9 ad 03 00 00       	jmp    814f0da <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x3ee>
 814ed2d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 814ed34:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed37:	89 04 24             	mov    %eax,(%esp)
 814ed3a:	e8 bb 25 fa ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 814ed3f:	84 c0                	test   %al,%al
 814ed41:	74 25                	je     814ed68 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x7c>
 814ed43:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed46:	8b 00                	mov    (%eax),%eax
 814ed48:	83 c0 0c             	add    $0xc,%eax
 814ed4b:	8b 10                	mov    (%eax),%edx
 814ed4d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed50:	89 04 24             	mov    %eax,(%esp)
 814ed53:	ff d2                	call   *%edx
 814ed55:	83 f8 09             	cmp    $0x9,%eax
 814ed58:	0f 94 c0             	sete   %al
 814ed5b:	84 c0                	test   %al,%al
 814ed5d:	74 45                	je     814eda4 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0xb8>
 814ed5f:	c7 45 ec 07 00 00 00 	movl   $0x7,-0x14(%ebp)
 814ed66:	eb 3c                	jmp    814eda4 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0xb8>
 814ed68:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed6b:	8b 00                	mov    (%eax),%eax
 814ed6d:	83 c0 14             	add    $0x14,%eax
 814ed70:	8b 10                	mov    (%eax),%edx
 814ed72:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed75:	89 04 24             	mov    %eax,(%esp)
 814ed78:	ff d2                	call   *%edx
 814ed7a:	84 c0                	test   %al,%al
 814ed7c:	74 09                	je     814ed87 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x9b>
 814ed7e:	c7 45 ec 07 00 00 00 	movl   $0x7,-0x14(%ebp)
 814ed85:	eb 1d                	jmp    814eda4 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0xb8>
 814ed87:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed8a:	8b 00                	mov    (%eax),%eax
 814ed8c:	83 c0 10             	add    $0x10,%eax
 814ed8f:	8b 10                	mov    (%eax),%edx
 814ed91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814ed94:	89 04 24             	mov    %eax,(%esp)
 814ed97:	ff d2                	call   *%edx
 814ed99:	84 c0                	test   %al,%al
 814ed9b:	74 07                	je     814eda4 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0xb8>
 814ed9d:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 814eda4:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 814edab:	8b 45 14             	mov    0x14(%ebp),%eax
 814edae:	83 c0 10             	add    $0x10,%eax
 814edb1:	89 04 24             	mov    %eax,(%esp)
 814edb4:	e8 47 1a 00 00       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 814edb9:	84 c0                	test   %al,%al
 814edbb:	74 7f                	je     814ee3c <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x150>
 814edbd:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 814edc4:	00 
 814edc5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814edcc:	00 
 814edcd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 814edd0:	89 04 24             	mov    %eax,(%esp)
 814edd3:	e8 e8 ee f2 ff       	call   807dcc0 <memset@plt>
 814edd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 814eddb:	89 04 24             	mov    %eax,(%esp)
 814edde:	e8 6b ce f7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 814ede3:	8d 55 cc             	lea    -0x34(%ebp),%edx
 814ede6:	89 54 24 08          	mov    %edx,0x8(%esp)
 814edea:	89 44 24 04          	mov    %eax,0x4(%esp)
 814edee:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 814edf5:	e8 56 89 36 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 814edfa:	8b 45 14             	mov    0x14(%ebp),%eax
 814edfd:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 814ee01:	0f be d0             	movsbl %al,%edx
 814ee04:	8b 45 14             	mov    0x14(%ebp),%eax
 814ee07:	8b 40 12             	mov    0x12(%eax),%eax
 814ee0a:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 814ee11:	00 
 814ee12:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 814ee15:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814ee19:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814ee1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814ee24:	00 
 814ee25:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ee29:	8b 45 0c             	mov    0xc(%ebp),%eax
 814ee2c:	89 04 24             	mov    %eax,(%esp)
 814ee2f:	e8 f0 23 53 00       	call   8681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>
 814ee34:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814ee37:	e9 a4 00 00 00       	jmp    814eee0 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x1f4>
 814ee3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 814ee3f:	89 04 24             	mov    %eax,(%esp)
 814ee42:	e8 47 b4 f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814ee47:	89 c2                	mov    %eax,%edx
 814ee49:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 814ee50:	00 
 814ee51:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 814ee58:	00 
 814ee59:	c7 44 24 44 04 00 00 	movl   $0x4,0x44(%esp)
 814ee60:	00 
 814ee61:	8b 45 14             	mov    0x14(%ebp),%eax
 814ee64:	8b 48 10             	mov    0x10(%eax),%ecx
 814ee67:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814ee6b:	8b 48 14             	mov    0x14(%eax),%ecx
 814ee6e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814ee72:	8b 48 18             	mov    0x18(%eax),%ecx
 814ee75:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814ee79:	8b 48 1c             	mov    0x1c(%eax),%ecx
 814ee7c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814ee80:	8b 48 20             	mov    0x20(%eax),%ecx
 814ee83:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 814ee87:	8b 48 24             	mov    0x24(%eax),%ecx
 814ee8a:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 814ee8e:	8b 48 28             	mov    0x28(%eax),%ecx
 814ee91:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 814ee95:	8b 48 2c             	mov    0x2c(%eax),%ecx
 814ee98:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 814ee9c:	8b 48 30             	mov    0x30(%eax),%ecx
 814ee9f:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 814eea3:	8b 48 34             	mov    0x34(%eax),%ecx
 814eea6:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 814eeaa:	8b 48 38             	mov    0x38(%eax),%ecx
 814eead:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 814eeb1:	8b 48 3c             	mov    0x3c(%eax),%ecx
 814eeb4:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 814eeb8:	8b 48 40             	mov    0x40(%eax),%ecx
 814eebb:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 814eebf:	8b 48 44             	mov    0x44(%eax),%ecx
 814eec2:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 814eec6:	8b 48 48             	mov    0x48(%eax),%ecx
 814eec9:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 814eecd:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 814eed1:	88 44 24 40          	mov    %al,0x40(%esp)
 814eed5:	89 14 24             	mov    %edx,(%esp)
 814eed8:	e8 a9 3e 3b 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 814eedd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814eee0:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 814eee4:	0f 85 ac 00 00 00    	jne    814ef96 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x2aa>
 814eeea:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814eeed:	89 04 24             	mov    %eax,(%esp)
 814eef0:	e8 57 ee 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814eef5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814eef8:	89 04 24             	mov    %eax,(%esp)
 814eefb:	e8 e6 c9 f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814ef00:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 814ef07:	00 
 814ef08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ef0f:	00 
 814ef10:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef13:	89 04 24             	mov    %eax,(%esp)
 814ef16:	e8 e1 c9 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814ef1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814ef22:	00 
 814ef23:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef26:	89 04 24             	mov    %eax,(%esp)
 814ef29:	e8 f2 c9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ef2e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814ef35:	00 
 814ef36:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef39:	89 04 24             	mov    %eax,(%esp)
 814ef3c:	e8 df c9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ef41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ef48:	00 
 814ef49:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef4c:	89 04 24             	mov    %eax,(%esp)
 814ef4f:	e8 04 ca f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814ef54:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef57:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ef5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814ef5e:	89 04 24             	mov    %eax,(%esp)
 814ef61:	e8 54 96 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814ef66:	bb 00 00 00 00       	mov    $0x0,%ebx
 814ef6b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef6e:	89 04 24             	mov    %eax,(%esp)
 814ef71:	e8 0a ef 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814ef76:	e9 5f 01 00 00       	jmp    814f0da <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x3ee>
 814ef7b:	89 d3                	mov    %edx,%ebx
 814ef7d:	89 c6                	mov    %eax,%esi
 814ef7f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814ef82:	89 04 24             	mov    %eax,(%esp)
 814ef85:	e8 f6 ee 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814ef8a:	89 f0                	mov    %esi,%eax
 814ef8c:	89 da                	mov    %ebx,%edx
 814ef8e:	89 04 24             	mov    %eax,(%esp)
 814ef91:	e8 ba 47 99 00       	call   8ae3750 <_Unwind_Resume>
 814ef96:	8b 45 10             	mov    0x10(%ebp),%eax
 814ef99:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814ef9c:	8b 45 08             	mov    0x8(%ebp),%eax
 814ef9f:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 814efa5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814efa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 814efac:	89 14 24             	mov    %edx,(%esp)
 814efaf:	e8 64 3c 00 00       	call   8152c18 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 814efb4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814efb7:	89 04 24             	mov    %eax,(%esp)
 814efba:	e8 8d ed 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814efbf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814efc2:	89 04 24             	mov    %eax,(%esp)
 814efc5:	e8 1c c9 f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814efca:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 814efd1:	00 
 814efd2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814efd9:	00 
 814efda:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814efdd:	89 04 24             	mov    %eax,(%esp)
 814efe0:	e8 17 c9 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814efe5:	8b 45 10             	mov    0x10(%ebp),%eax
 814efe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 814efec:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814efef:	89 04 24             	mov    %eax,(%esp)
 814eff2:	e8 ad ae f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814eff7:	8b 45 0c             	mov    0xc(%ebp),%eax
 814effa:	89 04 24             	mov    %eax,(%esp)
 814effd:	e8 7a b3 f8 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 814f002:	0f b7 c0             	movzwl %ax,%eax
 814f005:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f009:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f00c:	89 04 24             	mov    %eax,(%esp)
 814f00f:	e8 90 ae f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814f014:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814f01b:	eb 17                	jmp    814f034 <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x348>
 814f01d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f024:	00 
 814f025:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f028:	89 04 24             	mov    %eax,(%esp)
 814f02b:	e8 f0 c8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f030:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 814f034:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 814f038:	0f 9e c0             	setle  %al
 814f03b:	84 c0                	test   %al,%al
 814f03d:	75 de                	jne    814f01d <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x331>
 814f03f:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f042:	89 04 24             	mov    %eax,(%esp)
 814f045:	e8 32 b3 f8 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 814f04a:	0f b7 c0             	movzwl %ax,%eax
 814f04d:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f051:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f054:	89 04 24             	mov    %eax,(%esp)
 814f057:	e8 48 ae f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814f05c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814f05f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f063:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f066:	89 04 24             	mov    %eax,(%esp)
 814f069:	e8 36 ae f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814f06e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f071:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f075:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f078:	89 04 24             	mov    %eax,(%esp)
 814f07b:	e8 a0 c8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f080:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f087:	00 
 814f088:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f08b:	89 04 24             	mov    %eax,(%esp)
 814f08e:	e8 c5 c8 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814f093:	8b 45 08             	mov    0x8(%ebp),%eax
 814f096:	8b 40 04             	mov    0x4(%eax),%eax
 814f099:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 814f09c:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f0a0:	89 04 24             	mov    %eax,(%esp)
 814f0a3:	e8 a6 e0 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814f0a8:	bb 01 00 00 00       	mov    $0x1,%ebx
 814f0ad:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f0b0:	89 04 24             	mov    %eax,(%esp)
 814f0b3:	e8 c8 ed 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814f0b8:	eb 20                	jmp    814f0da <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item+0x3ee>
 814f0ba:	89 d3                	mov    %edx,%ebx
 814f0bc:	89 c6                	mov    %eax,%esi
 814f0be:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 814f0c1:	89 04 24             	mov    %eax,(%esp)
 814f0c4:	e8 b7 ed 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814f0c9:	89 f0                	mov    %esi,%eax
 814f0cb:	89 da                	mov    %ebx,%edx
 814f0cd:	89 04 24             	mov    %eax,(%esp)
 814f0d0:	e8 7b 46 99 00       	call   8ae3750 <_Unwind_Resume>
 814f0d5:	bb 00 00 00 00       	mov    $0x0,%ebx
 814f0da:	89 d8                	mov    %ebx,%eax
 814f0dc:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 814f0e2:	5b                   	pop    %ebx
 814f0e3:	5e                   	pop    %esi
 814f0e4:	5d                   	pop    %ebp
 814f0e5:	c3                   	ret

```

```c
// WongWork::CBossStage::NormalPickupItem @ 0x814ecec

/* WongWork::CBossStage::NormalPickupItem(CUser*, unsigned int, map_item const&) */

undefined4 __thiscall
WongWork::CBossStage::NormalPickupItem
          (CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  undefined1 local_38 [24];
  uint local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x12);
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = (CItem *)CDataManager::find_item(this_00,iVar2);
    if (local_1c == (CItem *)0x0) {
      uVar4 = 0;
    }
    else {
      local_18 = 0;
      cVar1 = CItem::is_stackable(local_1c);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(int *)local_1c + 0x14))(local_1c);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
          if (cVar1 != '\0') {
            local_18 = 1;
          }
        }
        else {
          local_18 = 7;
        }
      }
      else {
        iVar2 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
        if (iVar2 == 9) {
          local_18 = 7;
        }
      }
      local_14 = 0xffffffff;
      cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(param_3 + 0x10));
      if (cVar1 == '\0') {
        uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_14 = CInventory::insertItemIntoInventory
                             (uVar4,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                              *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                              *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                              *(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                              *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                              *(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                              *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                              *(undefined4 *)(param_3 + 0x48),param_3[0x4c],4,1,1);
      }
      else {
        memset(local_38,0,0x18);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        CGenUniqueNo::genIPGNo(5,uVar4,local_38);
        local_14 = CUser::addAvatarItem
                             (param_1,*(undefined4 *)(param_3 + 0x12),0,
                              (int)(char)*(undefined2 *)(param_3 + 0x1b),local_38,0x10);
      }
      if (local_14 == -1) {
        PacketGuard::PacketGuard(local_44);
                    /* try { // try from 0814eefb to 0814ef65 has its CatchHandler @ 0814ef7b */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,1,0x2e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
        CUser::Send(param_1,local_44);
        uVar4 = 0;
        PacketGuard::~PacketGuard(local_44);
      }
      else {
        local_20 = param_2;
        std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
                  ((int *)(this + 0xa18));
        PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0814efc5 to 0814f0a7 has its CatchHandler @ 0814f0ba */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_50);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x27);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,param_2);
        uVar3 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        }
        uVar3 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar3 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_14);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_18);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_50);
        uVar4 = 1;
        PacketGuard::~PacketGuard(local_50);
      }
    }
  }
  return uVar4;
}

```

---

## RandomConsistMap

```asm
// === 0814f426 WongWork::CBossStage::RandomConsistMap  [0x0814f426-0x814f4fb] ===
 814f426:	55                   	push   %ebp
 814f427:	89 e5                	mov    %esp,%ebp
 814f429:	53                   	push   %ebx
 814f42a:	83 ec 24             	sub    $0x24,%esp
 814f42d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 814f434:	8d 45 f0             	lea    -0x10(%ebp),%eax
 814f437:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f43b:	8b 45 08             	mov    0x8(%ebp),%eax
 814f43e:	89 04 24             	mov    %eax,(%esp)
 814f441:	e8 b6 00 00 00       	call   814f4fc <_ZN8WongWork10CBossStage14randomMapIndexERi>
 814f446:	83 f0 01             	xor    $0x1,%eax
 814f449:	84 c0                	test   %al,%al
 814f44b:	74 0a                	je     814f457 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0x31>
 814f44d:	b8 00 00 00 00       	mov    $0x0,%eax
 814f452:	e9 9e 00 00 00       	jmp    814f4f5 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0xcf>
 814f457:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f45a:	89 04 24             	mov    %eax,(%esp)
 814f45d:	e8 3a 64 ff ff       	call   814589c <_ZN5CUser8isGMUserEv>
 814f462:	84 c0                	test   %al,%al
 814f464:	74 26                	je     814f48c <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0x66>
 814f466:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f469:	8b 80 d0 96 07 00    	mov    0x796d0(%eax),%eax
 814f46f:	85 c0                	test   %eax,%eax
 814f471:	74 19                	je     814f48c <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0x66>
 814f473:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f476:	8b 80 d0 96 07 00    	mov    0x796d0(%eax),%eax
 814f47c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814f47f:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f482:	c7 80 d0 96 07 00 00 	movl   $0x0,0x796d0(%eax)
 814f489:	00 00 00 
 814f48c:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 814f48f:	e8 07 cd f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814f494:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814f498:	89 04 24             	mov    %eax,(%esp)
 814f49b:	e8 74 05 21 00       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 814f4a0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814f4a3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814f4a7:	74 19                	je     814f4c2 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0x9c>
 814f4a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814f4ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f4b0:	8b 45 08             	mov    0x8(%ebp),%eax
 814f4b3:	89 04 24             	mov    %eax,(%esp)
 814f4b6:	e8 39 ca ff ff       	call   814bef4 <_ZN8WongWork10CBossStage10consistMapEPK4CMap>
 814f4bb:	83 f0 01             	xor    $0x1,%eax
 814f4be:	84 c0                	test   %al,%al
 814f4c0:	74 07                	je     814f4c9 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0xa3>
 814f4c2:	b8 01 00 00 00       	mov    $0x1,%eax
 814f4c7:	eb 05                	jmp    814f4ce <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0xa8>
 814f4c9:	b8 00 00 00 00       	mov    $0x0,%eax
 814f4ce:	84 c0                	test   %al,%al
 814f4d0:	74 07                	je     814f4d9 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0xb3>
 814f4d2:	b8 00 00 00 00       	mov    $0x0,%eax
 814f4d7:	eb 1c                	jmp    814f4f5 <_ZN8WongWork10CBossStage16RandomConsistMapER5CUser+0xcf>
 814f4d9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 814f4e0:	e8 c7 63 ff ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 814f4e5:	89 c2                	mov    %eax,%edx
 814f4e7:	8b 45 08             	mov    0x8(%ebp),%eax
 814f4ea:	89 90 e8 09 00 00    	mov    %edx,0x9e8(%eax)
 814f4f0:	b8 01 00 00 00       	mov    $0x1,%eax
 814f4f5:	83 c4 24             	add    $0x24,%esp
 814f4f8:	5b                   	pop    %ebx
 814f4f9:	5d                   	pop    %ebp
 814f4fa:	c3                   	ret
 814f4fb:	90                   	nop

```

```c
// WongWork::CBossStage::RandomConsistMap @ 0x814f426

/* WongWork::CBossStage::RandomConsistMap(CUser&) */

bool __thiscall WongWork::CBossStage::RandomConsistMap(CBossStage *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  CMap *local_10;
  
  local_14 = 0;
  cVar2 = randomMapIndex(this,&local_14);
  if (cVar2 != '\x01') {
    return false;
  }
  cVar2 = CUser::isGMUser(param_1);
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x796d0) != 0)) {
    local_14 = *(int *)(param_1 + 0x796d0);
    *(undefined4 *)(param_1 + 0x796d0) = 0;
  }
  iVar3 = G_CDataManager();
  local_10 = (CMap *)CDataManager::find_map(iVar3);
  if ((local_10 == (CMap *)0x0) || (cVar2 = consistMap(this,local_10), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar4 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x9e8) = uVar4;
  }
  return !bVar1;
}

```

---

## RandomPickupItem

```asm
// === 0814e684 WongWork::CBossStage::RandomPickupItem  [0x0814e684-0x814eceb] ===
 814e684:	55                   	push   %ebp
 814e685:	89 e5                	mov    %esp,%ebp
 814e687:	56                   	push   %esi
 814e688:	53                   	push   %ebx
 814e689:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 814e68f:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 814e696:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 814e69a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 814e6a1:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 814e6a8:	e9 52 01 00 00       	jmp    814e7ff <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x17b>
 814e6ad:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 814e6b4:	8b 45 08             	mov    0x8(%ebp),%eax
 814e6b7:	8b 40 04             	mov    0x4(%eax),%eax
 814e6ba:	8b 55 dc             	mov    -0x24(%ebp),%edx
 814e6bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 814e6c1:	89 04 24             	mov    %eax,(%esp)
 814e6c4:	e8 9b 70 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 814e6c9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814e6cc:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 814e6d0:	74 1c                	je     814e6ee <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x6a>
 814e6d2:	8b 45 08             	mov    0x8(%ebp),%eax
 814e6d5:	8b 40 04             	mov    0x4(%eax),%eax
 814e6d8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 814e6db:	89 54 24 04          	mov    %edx,0x4(%esp)
 814e6df:	89 04 24             	mov    %eax,(%esp)
 814e6e2:	e8 81 71 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 814e6e7:	83 f0 01             	xor    $0x1,%eax
 814e6ea:	84 c0                	test   %al,%al
 814e6ec:	74 07                	je     814e6f5 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x71>
 814e6ee:	b8 01 00 00 00       	mov    $0x1,%eax
 814e6f3:	eb 05                	jmp    814e6fa <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x76>
 814e6f5:	b8 00 00 00 00       	mov    $0x0,%eax
 814e6fa:	84 c0                	test   %al,%al
 814e6fc:	0f 85 f8 00 00 00    	jne    814e7fa <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x176>
 814e702:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814e705:	89 04 24             	mov    %eax,(%esp)
 814e708:	e8 71 bb f8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 814e70d:	89 c2                	mov    %eax,%edx
 814e70f:	8b 45 14             	mov    0x14(%ebp),%eax
 814e712:	8b 48 10             	mov    0x10(%eax),%ecx
 814e715:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814e719:	8b 48 14             	mov    0x14(%eax),%ecx
 814e71c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814e720:	8b 48 18             	mov    0x18(%eax),%ecx
 814e723:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814e727:	8b 48 1c             	mov    0x1c(%eax),%ecx
 814e72a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814e72e:	8b 48 20             	mov    0x20(%eax),%ecx
 814e731:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 814e735:	8b 48 24             	mov    0x24(%eax),%ecx
 814e738:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 814e73c:	8b 48 28             	mov    0x28(%eax),%ecx
 814e73f:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 814e743:	8b 48 2c             	mov    0x2c(%eax),%ecx
 814e746:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 814e74a:	8b 48 30             	mov    0x30(%eax),%ecx
 814e74d:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 814e751:	8b 48 34             	mov    0x34(%eax),%ecx
 814e754:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 814e758:	8b 48 38             	mov    0x38(%eax),%ecx
 814e75b:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 814e75f:	8b 48 3c             	mov    0x3c(%eax),%ecx
 814e762:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 814e766:	8b 48 40             	mov    0x40(%eax),%ecx
 814e769:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 814e76d:	8b 48 44             	mov    0x44(%eax),%ecx
 814e770:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 814e774:	8b 48 48             	mov    0x48(%eax),%ecx
 814e777:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 814e77b:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 814e77f:	88 44 24 40          	mov    %al,0x40(%esp)
 814e783:	89 14 24             	mov    %edx,(%esp)
 814e786:	e8 3f 37 3b 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 814e78b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814e78e:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 814e792:	74 1d                	je     814e7b1 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x12d>
 814e794:	8b 45 08             	mov    0x8(%ebp),%eax
 814e797:	8b 55 dc             	mov    -0x24(%ebp),%edx
 814e79a:	89 54 24 04          	mov    %edx,0x4(%esp)
 814e79e:	89 04 24             	mov    %eax,(%esp)
 814e7a1:	e8 dc 6e ff ff       	call   8145682 <_ZN8WongWork9CBossPlay13isMemberAliveEi>
 814e7a6:	84 c0                	test   %al,%al
 814e7a8:	74 07                	je     814e7b1 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x12d>
 814e7aa:	b8 01 00 00 00       	mov    $0x1,%eax
 814e7af:	eb 05                	jmp    814e7b6 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x132>
 814e7b1:	b8 00 00 00 00       	mov    $0x0,%eax
 814e7b6:	84 c0                	test   %al,%al
 814e7b8:	74 36                	je     814e7f0 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x16c>
 814e7ba:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 814e7bd:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 814e7c4:	e8 be 33 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814e7c9:	83 c0 01             	add    $0x1,%eax
 814e7cc:	88 44 1d bc          	mov    %al,-0x44(%ebp,%ebx,1)
 814e7d0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 814e7d3:	0f b6 44 05 bc       	movzbl -0x44(%ebp,%eax,1),%eax
 814e7d8:	3a 45 d7             	cmp    -0x29(%ebp),%al
 814e7db:	7e 1e                	jle    814e7fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x177>
 814e7dd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 814e7e0:	0f b6 44 05 bc       	movzbl -0x44(%ebp,%eax,1),%eax
 814e7e5:	88 45 d7             	mov    %al,-0x29(%ebp)
 814e7e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814e7eb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 814e7ee:	eb 0b                	jmp    814e7fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x177>
 814e7f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 814e7f3:	c6 44 05 bc 00       	movb   $0x0,-0x44(%ebp,%eax,1)
 814e7f8:	eb 01                	jmp    814e7fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x177>
 814e7fa:	90                   	nop
 814e7fb:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 814e7ff:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 814e803:	0f 9e c0             	setle  %al
 814e806:	84 c0                	test   %al,%al
 814e808:	0f 85 9f fe ff ff    	jne    814e6ad <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x29>
 814e80e:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 814e812:	0f 84 1e 04 00 00    	je     814ec36 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x5b2>
 814e818:	8b 45 14             	mov    0x14(%ebp),%eax
 814e81b:	8b 40 12             	mov    0x12(%eax),%eax
 814e81e:	89 c3                	mov    %eax,%ebx
 814e820:	e8 76 d9 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814e825:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814e829:	89 04 24             	mov    %eax,(%esp)
 814e82c:	e8 01 12 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814e831:	89 45 e8             	mov    %eax,-0x18(%ebp)
 814e834:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 814e838:	75 4a                	jne    814e884 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x200>
 814e83a:	8b 45 14             	mov    0x14(%ebp),%eax
 814e83d:	8b 58 12             	mov    0x12(%eax),%ebx
 814e840:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814e847:	00 
 814e848:	c7 44 24 08 9c 03 00 	movl   $0x39c,0x8(%esp)
 814e84f:	00 
 814e850:	c7 44 24 04 80 5e b7 	movl   $0x8b75e80,0x4(%esp)
 814e857:	08 
 814e858:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814e85b:	89 04 24             	mov    %eax,(%esp)
 814e85e:	e8 b5 0e 40 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 814e863:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 814e867:	c7 44 24 04 34 51 b7 	movl   $0x8b75134,0x4(%esp)
 814e86e:	08 
 814e86f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814e872:	89 04 24             	mov    %eax,(%esp)
 814e875:	e8 0e 0f 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 814e87a:	bb 00 00 00 00       	mov    $0x0,%ebx
 814e87f:	e9 5b 04 00 00       	jmp    814ecdf <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x65b>
 814e884:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 814e88b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e88e:	89 04 24             	mov    %eax,(%esp)
 814e891:	e8 64 2a fa ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 814e896:	84 c0                	test   %al,%al
 814e898:	74 25                	je     814e8bf <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x23b>
 814e89a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e89d:	8b 00                	mov    (%eax),%eax
 814e89f:	83 c0 0c             	add    $0xc,%eax
 814e8a2:	8b 10                	mov    (%eax),%edx
 814e8a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e8a7:	89 04 24             	mov    %eax,(%esp)
 814e8aa:	ff d2                	call   *%edx
 814e8ac:	83 f8 09             	cmp    $0x9,%eax
 814e8af:	0f 94 c0             	sete   %al
 814e8b2:	84 c0                	test   %al,%al
 814e8b4:	74 45                	je     814e8fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x277>
 814e8b6:	c7 45 ec 07 00 00 00 	movl   $0x7,-0x14(%ebp)
 814e8bd:	eb 3c                	jmp    814e8fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x277>
 814e8bf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e8c2:	8b 00                	mov    (%eax),%eax
 814e8c4:	83 c0 14             	add    $0x14,%eax
 814e8c7:	8b 10                	mov    (%eax),%edx
 814e8c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e8cc:	89 04 24             	mov    %eax,(%esp)
 814e8cf:	ff d2                	call   *%edx
 814e8d1:	84 c0                	test   %al,%al
 814e8d3:	74 09                	je     814e8de <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x25a>
 814e8d5:	c7 45 ec 07 00 00 00 	movl   $0x7,-0x14(%ebp)
 814e8dc:	eb 1d                	jmp    814e8fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x277>
 814e8de:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e8e1:	8b 00                	mov    (%eax),%eax
 814e8e3:	83 c0 10             	add    $0x10,%eax
 814e8e6:	8b 10                	mov    (%eax),%edx
 814e8e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814e8eb:	89 04 24             	mov    %eax,(%esp)
 814e8ee:	ff d2                	call   *%edx
 814e8f0:	84 c0                	test   %al,%al
 814e8f2:	74 07                	je     814e8fb <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x277>
 814e8f4:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 814e8fb:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 814e902:	8b 45 14             	mov    0x14(%ebp),%eax
 814e905:	83 c0 10             	add    $0x10,%eax
 814e908:	89 04 24             	mov    %eax,(%esp)
 814e90b:	e8 f0 1e 00 00       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 814e910:	84 c0                	test   %al,%al
 814e912:	74 7f                	je     814e993 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x30f>
 814e914:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 814e91b:	00 
 814e91c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814e923:	00 
 814e924:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814e927:	89 04 24             	mov    %eax,(%esp)
 814e92a:	e8 91 f3 f2 ff       	call   807dcc0 <memset@plt>
 814e92f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814e932:	89 04 24             	mov    %eax,(%esp)
 814e935:	e8 14 d3 f7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 814e93a:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 814e93d:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e941:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e945:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 814e94c:	e8 ff 8d 36 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 814e951:	8b 45 14             	mov    0x14(%ebp),%eax
 814e954:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 814e958:	0f be d0             	movsbl %al,%edx
 814e95b:	8b 45 14             	mov    0x14(%ebp),%eax
 814e95e:	8b 40 12             	mov    0x12(%eax),%eax
 814e961:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 814e968:	00 
 814e969:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 814e96c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814e970:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814e974:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814e97b:	00 
 814e97c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e980:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814e983:	89 04 24             	mov    %eax,(%esp)
 814e986:	e8 99 28 53 00       	call   8681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>
 814e98b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814e98e:	e9 a4 00 00 00       	jmp    814ea37 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x3b3>
 814e993:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814e996:	89 04 24             	mov    %eax,(%esp)
 814e999:	e8 f0 b8 f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814e99e:	89 c2                	mov    %eax,%edx
 814e9a0:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 814e9a7:	00 
 814e9a8:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 814e9af:	00 
 814e9b0:	c7 44 24 44 04 00 00 	movl   $0x4,0x44(%esp)
 814e9b7:	00 
 814e9b8:	8b 45 14             	mov    0x14(%ebp),%eax
 814e9bb:	8b 48 10             	mov    0x10(%eax),%ecx
 814e9be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814e9c2:	8b 48 14             	mov    0x14(%eax),%ecx
 814e9c5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814e9c9:	8b 48 18             	mov    0x18(%eax),%ecx
 814e9cc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814e9d0:	8b 48 1c             	mov    0x1c(%eax),%ecx
 814e9d3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 814e9d7:	8b 48 20             	mov    0x20(%eax),%ecx
 814e9da:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 814e9de:	8b 48 24             	mov    0x24(%eax),%ecx
 814e9e1:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 814e9e5:	8b 48 28             	mov    0x28(%eax),%ecx
 814e9e8:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 814e9ec:	8b 48 2c             	mov    0x2c(%eax),%ecx
 814e9ef:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 814e9f3:	8b 48 30             	mov    0x30(%eax),%ecx
 814e9f6:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 814e9fa:	8b 48 34             	mov    0x34(%eax),%ecx
 814e9fd:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 814ea01:	8b 48 38             	mov    0x38(%eax),%ecx
 814ea04:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 814ea08:	8b 48 3c             	mov    0x3c(%eax),%ecx
 814ea0b:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 814ea0f:	8b 48 40             	mov    0x40(%eax),%ecx
 814ea12:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 814ea16:	8b 48 44             	mov    0x44(%eax),%ecx
 814ea19:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 814ea1d:	8b 48 48             	mov    0x48(%eax),%ecx
 814ea20:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 814ea24:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 814ea28:	88 44 24 40          	mov    %al,0x40(%esp)
 814ea2c:	89 14 24             	mov    %edx,(%esp)
 814ea2f:	e8 52 43 3b 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 814ea34:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814ea37:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 814ea3b:	0f 85 ac 00 00 00    	jne    814eaed <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x469>
 814ea41:	8d 45 98             	lea    -0x68(%ebp),%eax
 814ea44:	89 04 24             	mov    %eax,(%esp)
 814ea47:	e8 00 f3 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814ea4c:	8d 45 98             	lea    -0x68(%ebp),%eax
 814ea4f:	89 04 24             	mov    %eax,(%esp)
 814ea52:	e8 8f ce f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814ea57:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 814ea5e:	00 
 814ea5f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ea66:	00 
 814ea67:	8d 45 98             	lea    -0x68(%ebp),%eax
 814ea6a:	89 04 24             	mov    %eax,(%esp)
 814ea6d:	e8 8a ce f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814ea72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814ea79:	00 
 814ea7a:	8d 45 98             	lea    -0x68(%ebp),%eax
 814ea7d:	89 04 24             	mov    %eax,(%esp)
 814ea80:	e8 9b ce f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ea85:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814ea8c:	00 
 814ea8d:	8d 45 98             	lea    -0x68(%ebp),%eax
 814ea90:	89 04 24             	mov    %eax,(%esp)
 814ea93:	e8 88 ce f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ea98:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ea9f:	00 
 814eaa0:	8d 45 98             	lea    -0x68(%ebp),%eax
 814eaa3:	89 04 24             	mov    %eax,(%esp)
 814eaa6:	e8 ad ce f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814eaab:	8d 45 98             	lea    -0x68(%ebp),%eax
 814eaae:	89 44 24 04          	mov    %eax,0x4(%esp)
 814eab2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814eab5:	89 04 24             	mov    %eax,(%esp)
 814eab8:	e8 fd 9a 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814eabd:	bb 00 00 00 00       	mov    $0x0,%ebx
 814eac2:	8d 45 98             	lea    -0x68(%ebp),%eax
 814eac5:	89 04 24             	mov    %eax,(%esp)
 814eac8:	e8 b3 f3 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814eacd:	e9 0d 02 00 00       	jmp    814ecdf <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x65b>
 814ead2:	89 d3                	mov    %edx,%ebx
 814ead4:	89 c6                	mov    %eax,%esi
 814ead6:	8d 45 98             	lea    -0x68(%ebp),%eax
 814ead9:	89 04 24             	mov    %eax,(%esp)
 814eadc:	e8 9f f3 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814eae1:	89 f0                	mov    %esi,%eax
 814eae3:	89 da                	mov    %ebx,%edx
 814eae5:	89 04 24             	mov    %eax,(%esp)
 814eae8:	e8 63 4c 99 00       	call   8ae3750 <_Unwind_Resume>
 814eaed:	8b 45 10             	mov    0x10(%ebp),%eax
 814eaf0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 814eaf3:	8b 45 08             	mov    0x8(%ebp),%eax
 814eaf6:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 814eafc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814eaff:	89 44 24 04          	mov    %eax,0x4(%esp)
 814eb03:	89 14 24             	mov    %edx,(%esp)
 814eb06:	e8 0d 41 00 00       	call   8152c18 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 814eb0b:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814eb0e:	89 04 24             	mov    %eax,(%esp)
 814eb11:	e8 36 f2 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814eb16:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814eb19:	89 04 24             	mov    %eax,(%esp)
 814eb1c:	e8 c5 cd f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814eb21:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 814eb28:	00 
 814eb29:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814eb30:	00 
 814eb31:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814eb34:	89 04 24             	mov    %eax,(%esp)
 814eb37:	e8 c0 cd f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814eb3c:	8b 45 10             	mov    0x10(%ebp),%eax
 814eb3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814eb43:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814eb46:	89 04 24             	mov    %eax,(%esp)
 814eb49:	e8 56 b3 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814eb4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 814eb51:	89 04 24             	mov    %eax,(%esp)
 814eb54:	e8 23 b8 f8 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 814eb59:	0f b7 c0             	movzwl %ax,%eax
 814eb5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814eb60:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814eb63:	89 04 24             	mov    %eax,(%esp)
 814eb66:	e8 39 b3 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814eb6b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814eb72:	eb 1e                	jmp    814eb92 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x50e>
 814eb74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814eb77:	0f b6 44 05 bc       	movzbl -0x44(%ebp,%eax,1),%eax
 814eb7c:	0f be c0             	movsbl %al,%eax
 814eb7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814eb83:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814eb86:	89 04 24             	mov    %eax,(%esp)
 814eb89:	e8 92 cd f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814eb8e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 814eb92:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 814eb96:	0f 9e c0             	setle  %al
 814eb99:	84 c0                	test   %al,%al
 814eb9b:	75 d7                	jne    814eb74 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x4f0>
 814eb9d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814eba0:	89 04 24             	mov    %eax,(%esp)
 814eba3:	e8 d4 b7 f8 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 814eba8:	0f b7 c0             	movzwl %ax,%eax
 814ebab:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ebaf:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814ebb2:	89 04 24             	mov    %eax,(%esp)
 814ebb5:	e8 ea b2 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814ebba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814ebbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ebc1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814ebc4:	89 04 24             	mov    %eax,(%esp)
 814ebc7:	e8 d8 b2 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814ebcc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814ebcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ebd3:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814ebd6:	89 04 24             	mov    %eax,(%esp)
 814ebd9:	e8 42 cd f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ebde:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ebe5:	00 
 814ebe6:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814ebe9:	89 04 24             	mov    %eax,(%esp)
 814ebec:	e8 67 cd f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814ebf1:	8b 45 08             	mov    0x8(%ebp),%eax
 814ebf4:	8b 40 04             	mov    0x4(%eax),%eax
 814ebf7:	8d 55 8c             	lea    -0x74(%ebp),%edx
 814ebfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 814ebfe:	89 04 24             	mov    %eax,(%esp)
 814ec01:	e8 48 e5 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814ec06:	bb 01 00 00 00       	mov    $0x1,%ebx
 814ec0b:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814ec0e:	89 04 24             	mov    %eax,(%esp)
 814ec11:	e8 6a f2 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814ec16:	e9 c4 00 00 00       	jmp    814ecdf <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x65b>
 814ec1b:	89 d3                	mov    %edx,%ebx
 814ec1d:	89 c6                	mov    %eax,%esi
 814ec1f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814ec22:	89 04 24             	mov    %eax,(%esp)
 814ec25:	e8 56 f2 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814ec2a:	89 f0                	mov    %esi,%eax
 814ec2c:	89 da                	mov    %ebx,%edx
 814ec2e:	89 04 24             	mov    %eax,(%esp)
 814ec31:	e8 1a 4b 99 00       	call   8ae3750 <_Unwind_Resume>
 814ec36:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ec39:	89 04 24             	mov    %eax,(%esp)
 814ec3c:	e8 0b f1 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814ec41:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ec44:	89 04 24             	mov    %eax,(%esp)
 814ec47:	e8 9a cc f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814ec4c:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 814ec53:	00 
 814ec54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ec5b:	00 
 814ec5c:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ec5f:	89 04 24             	mov    %eax,(%esp)
 814ec62:	e8 95 cc f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814ec67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814ec6e:	00 
 814ec6f:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ec72:	89 04 24             	mov    %eax,(%esp)
 814ec75:	e8 a6 cc f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ec7a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814ec81:	00 
 814ec82:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ec85:	89 04 24             	mov    %eax,(%esp)
 814ec88:	e8 93 cc f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ec8d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ec94:	00 
 814ec95:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ec98:	89 04 24             	mov    %eax,(%esp)
 814ec9b:	e8 b8 cc f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814eca0:	8d 45 80             	lea    -0x80(%ebp),%eax
 814eca3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814eca7:	8b 45 0c             	mov    0xc(%ebp),%eax
 814ecaa:	89 04 24             	mov    %eax,(%esp)
 814ecad:	e8 08 99 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814ecb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 814ecb7:	8d 45 80             	lea    -0x80(%ebp),%eax
 814ecba:	89 04 24             	mov    %eax,(%esp)
 814ecbd:	e8 be f1 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814ecc2:	eb 1b                	jmp    814ecdf <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item+0x65b>
 814ecc4:	89 d3                	mov    %edx,%ebx
 814ecc6:	89 c6                	mov    %eax,%esi
 814ecc8:	8d 45 80             	lea    -0x80(%ebp),%eax
 814eccb:	89 04 24             	mov    %eax,(%esp)
 814ecce:	e8 ad f1 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814ecd3:	89 f0                	mov    %esi,%eax
 814ecd5:	89 da                	mov    %ebx,%edx
 814ecd7:	89 04 24             	mov    %eax,(%esp)
 814ecda:	e8 71 4a 99 00       	call   8ae3750 <_Unwind_Resume>
 814ecdf:	89 d8                	mov    %ebx,%eax
 814ece1:	81 c4 d0 00 00 00    	add    $0xd0,%esp
 814ece7:	5b                   	pop    %ebx
 814ece8:	5e                   	pop    %esi
 814ece9:	5d                   	pop    %ebp
 814ecea:	c3                   	ret
 814eceb:	90                   	nop

```

```c
// WongWork::CBossStage::RandomPickupItem @ 0x814e684

/* WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, map_item const&) */

undefined4 __thiscall
WongWork::CBossStage::RandomPickupItem
          (CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  PacketGuard local_84 [12];
  PacketGuard local_78 [12];
  PacketGuard local_6c [12];
  undefined1 local_60 [24];
  undefined4 local_48;
  cMyTrace local_44 [16];
  uint local_34;
  cMyTrace local_2d;
  CUserCharacInfo *local_2c;
  int local_28;
  CUserCharacInfo *local_24;
  int local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_48 = 0;
  local_2d = (cMyTrace)0x0;
  local_2c = (CUserCharacInfo *)0x0;
  local_28 = 0;
  do {
    if (3 < local_28) {
      if (local_2c == (CUserCharacInfo *)0x0) {
        PacketGuard::PacketGuard(local_84);
                    /* try { // try from 0814ec47 to 0814ecb1 has its CatchHandler @ 0814ecc4 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_84);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_84,1,0x2e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_84,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_84,true);
        CUser::Send(param_1,local_84);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_84);
      }
      else {
        iVar3 = *(int *)(param_3 + 0x12);
        this_00 = (CDataManager *)G_CDataManager();
        local_1c = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_1c == (CItem *)0x0) {
          uVar5 = *(undefined4 *)(param_3 + 0x12);
          cMyTrace::cMyTrace(local_44,
                             "bool WongWork::CBossStage::RandomPickupItem(CUser*, unsigned int, const map_item&)"
                             ,0x39c,5);
          cMyTrace::operator()(local_44,"item not find : %d",uVar5);
          uVar5 = 0;
        }
        else {
          local_18 = 0;
          cVar2 = CItem::is_stackable(local_1c);
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*(int *)local_1c + 0x14))(local_1c);
            if (cVar2 == '\0') {
              cVar2 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
              if (cVar2 != '\0') {
                local_18 = 1;
              }
            }
            else {
              local_18 = 7;
            }
          }
          else {
            iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
            if (iVar3 == 9) {
              local_18 = 7;
            }
          }
          local_14 = 0xffffffff;
          cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)(param_3 + 0x10));
          if (cVar2 == '\0') {
            uVar5 = CUserCharacInfo::getCurCharacInvenW(local_2c);
            local_14 = CInventory::insertItemIntoInventory
                                 (uVar5,*(undefined4 *)(param_3 + 0x10),
                                  *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
                                  *(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20),
                                  *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),
                                  *(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),
                                  *(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),
                                  *(undefined4 *)(param_3 + 0x3c),*(undefined4 *)(param_3 + 0x40),
                                  *(undefined4 *)(param_3 + 0x44),*(undefined4 *)(param_3 + 0x48),
                                  param_3[0x4c],4,1,1);
          }
          else {
            memset(local_60,0,0x18);
            uVar5 = CUserCharacInfo::getCurCharacNo(local_2c);
            CGenUniqueNo::genIPGNo(5,uVar5,local_60);
            local_14 = CUser::addAvatarItem
                                 ((CUser *)local_2c,*(undefined4 *)(param_3 + 0x12),0,
                                  (int)(char)*(undefined2 *)(param_3 + 0x1b),local_60,0x10);
          }
          if (local_14 == -1) {
            PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 0814ea52 to 0814eabc has its CatchHandler @ 0814ead2 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_6c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x2e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,4);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
            CUser::Send((CUser *)local_2c,local_6c);
            uVar5 = 0;
            PacketGuard::~PacketGuard(local_6c);
          }
          else {
            local_34 = param_2;
            std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::
            erase((int *)(this + 0xa18));
            PacketGuard::PacketGuard(local_78);
                    /* try { // try from 0814eb1c to 0814ec05 has its CatchHandler @ 0814ec1b */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_78);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_78,0,0x27);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,param_2);
            uVar4 = CUser::get_unique_id(param_1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,uVar4 & 0xffff);
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              InterfacePacketBuf::put_byte
                        ((InterfacePacketBuf *)local_78,(int)(char)local_44[local_10 + -4]);
            }
            uVar4 = CUser::get_unique_id((CUser *)local_2c);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,uVar4 & 0xffff);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_78,local_14);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_78,local_18);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_78,true);
            CParty::send_to_party(*(CParty **)(this + 4),local_78);
            uVar5 = 1;
            PacketGuard::~PacketGuard(local_78);
          }
        }
      }
      return uVar5;
    }
    local_24 = (CUserCharacInfo *)0x0;
    local_24 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_28);
    if (local_24 == (CUserCharacInfo *)0x0) {
LAB_0814e6ee:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_28);
      if (cVar2 != '\x01') goto LAB_0814e6ee;
      bVar1 = false;
    }
    if (!bVar1) {
      uVar5 = CUserCharacInfo::getCurCharacInvenR(local_24);
      local_20 = CInventory::tryInsertItemIntoInventory
                           (uVar5,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14),
                            *(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c),
                            *(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),
                            *(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c),
                            *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x34),
                            *(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x3c),
                            *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                            *(undefined4 *)(param_3 + 0x48),param_3[0x4c]);
      if (local_20 == -1) {
LAB_0814e7b1:
        bVar1 = false;
      }
      else {
        cVar2 = CBossPlay::isMemberAlive((CBossPlay *)this,local_28);
        if (cVar2 == '\0') goto LAB_0814e7b1;
        bVar1 = true;
      }
      iVar3 = local_28;
      if (bVar1) {
        cVar2 = get_rand_int(100);
        local_44[iVar3 + -4] = (cMyTrace)(cVar2 + '\x01');
        if ((char)local_2d < (char)local_44[local_28 + -4]) {
          local_2d = local_44[local_28 + -4];
          local_2c = local_24;
        }
      }
      else {
        local_44[local_28 + -4] = (cMyTrace)0x0;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}

```

---

## RoutingPickupItem

```asm
// === 0814e57a WongWork::CBossStage::RoutingPickupItem  [0x0814e57a-0x814e683] ===
 814e57a:	55                   	push   %ebp
 814e57b:	89 e5                	mov    %esp,%ebp
 814e57d:	56                   	push   %esi
 814e57e:	53                   	push   %ebx
 814e57f:	83 ec 30             	sub    $0x30,%esp
 814e582:	e8 07 dc f7 ff       	call   80cc18e <_Z14G_CGameManagerv>
 814e587:	89 04 24             	mov    %eax,(%esp)
 814e58a:	e8 35 aa 14 00       	call   8298fc4 <_ZN12CGameManager28GetSpecialItemRoutingManagerEv>
 814e58f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814e592:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814e599:	8b 45 14             	mov    0x14(%ebp),%eax
 814e59c:	8d 50 10             	lea    0x10(%eax),%edx
 814e59f:	8b 45 10             	mov    0x10(%ebp),%eax
 814e5a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 814e5a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e5aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e5ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e5b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814e5b4:	89 04 24             	mov    %eax,(%esp)
 814e5b7:	e8 18 c4 4b 00       	call   860a9d4 <_ZN26CSpecialItemRoutingManager12StartRoutingEP5CUserR10Inven_Itemj>
 814e5bc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814e5bf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 814e5c3:	0f 95 c0             	setne  %al
 814e5c6:	84 c0                	test   %al,%al
 814e5c8:	0f 84 a8 00 00 00    	je     814e676 <_ZN8WongWork10CBossStage17RoutingPickupItemEP5CUserjR8map_item+0xfc>
 814e5ce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e5d1:	89 04 24             	mov    %eax,(%esp)
 814e5d4:	e8 73 f7 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814e5d9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e5dc:	89 04 24             	mov    %eax,(%esp)
 814e5df:	e8 02 d3 f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814e5e4:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 814e5eb:	00 
 814e5ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814e5f3:	00 
 814e5f4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e5f7:	89 04 24             	mov    %eax,(%esp)
 814e5fa:	e8 fd d2 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814e5ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814e606:	00 
 814e607:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e60a:	89 04 24             	mov    %eax,(%esp)
 814e60d:	e8 0e d3 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814e612:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814e615:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e619:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e61c:	89 04 24             	mov    %eax,(%esp)
 814e61f:	e8 fc d2 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814e624:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814e62b:	00 
 814e62c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e62f:	89 04 24             	mov    %eax,(%esp)
 814e632:	e8 21 d3 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814e637:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e63a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e63e:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e641:	89 04 24             	mov    %eax,(%esp)
 814e644:	e8 71 9f 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814e649:	bb 00 00 00 00       	mov    $0x0,%ebx
 814e64e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e651:	89 04 24             	mov    %eax,(%esp)
 814e654:	e8 27 f8 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814e659:	eb 20                	jmp    814e67b <_ZN8WongWork10CBossStage17RoutingPickupItemEP5CUserjR8map_item+0x101>
 814e65b:	89 d3                	mov    %edx,%ebx
 814e65d:	89 c6                	mov    %eax,%esi
 814e65f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814e662:	89 04 24             	mov    %eax,(%esp)
 814e665:	e8 16 f8 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814e66a:	89 f0                	mov    %esi,%eax
 814e66c:	89 da                	mov    %ebx,%edx
 814e66e:	89 04 24             	mov    %eax,(%esp)
 814e671:	e8 da 50 99 00       	call   8ae3750 <_Unwind_Resume>
 814e676:	bb 01 00 00 00       	mov    $0x1,%ebx
 814e67b:	89 d8                	mov    %ebx,%eax
 814e67d:	83 c4 30             	add    $0x30,%esp
 814e680:	5b                   	pop    %ebx
 814e681:	5e                   	pop    %esi
 814e682:	5d                   	pop    %ebp
 814e683:	c3                   	ret

```

```c
// WongWork::CBossStage::RoutingPickupItem @ 0x814e57a

/* WongWork::CBossStage::RoutingPickupItem(CUser*, unsigned int, map_item&) */

bool __thiscall
WongWork::CBossStage::RoutingPickupItem
          (CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  CGameManager *this_00;
  bool bVar1;
  PacketGuard local_20 [12];
  CSpecialItemRoutingManager *local_14;
  int local_10;
  
  this_00 = (CGameManager *)G_CGameManager();
  local_14 = (CSpecialItemRoutingManager *)CGameManager::GetSpecialItemRoutingManager(this_00);
  local_10 = 0;
  local_10 = CSpecialItemRoutingManager::StartRouting
                       (local_14,param_1,(Inven_Item *)(param_3 + 0x10),param_2);
  bVar1 = local_10 == 0;
  if (!bVar1) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0814e5df to 0814e648 has its CatchHandler @ 0814e65b */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(param_1,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return bVar1;
}

```

---

## SendMapInfoPacket

```asm
// === 0814ce12 WongWork::CBossStage::SendMapInfoPacket  [0x0814ce12-0x814d1b5] ===
 814ce12:	55                   	push   %ebp
 814ce13:	89 e5                	mov    %esp,%ebp
 814ce15:	57                   	push   %edi
 814ce16:	56                   	push   %esi
 814ce17:	53                   	push   %ebx
 814ce18:	81 ec dc 03 00 00    	sub    $0x3dc,%esp
 814ce1e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814ce21:	89 04 24             	mov    %eax,(%esp)
 814ce24:	e8 23 0f 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814ce29:	c7 44 24 08 e2 01 00 	movl   $0x1e2,0x8(%esp)
 814ce30:	00 
 814ce31:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814ce38:	00 
 814ce39:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814ce3c:	89 04 24             	mov    %eax,(%esp)
 814ce3f:	e8 b8 ea f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814ce44:	8b 45 08             	mov    0x8(%ebp),%eax
 814ce47:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 814ce4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ce51:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814ce54:	89 04 24             	mov    %eax,(%esp)
 814ce57:	e8 48 d0 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814ce5c:	8b 45 08             	mov    0x8(%ebp),%eax
 814ce5f:	8b 80 3c 0a 00 00    	mov    0xa3c(%eax),%eax
 814ce65:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ce69:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814ce6c:	89 04 24             	mov    %eax,(%esp)
 814ce6f:	e8 c8 ea f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814ce74:	8b 45 08             	mov    0x8(%ebp),%eax
 814ce77:	8b 80 f8 09 00 00    	mov    0x9f8(%eax),%eax
 814ce7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ce81:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814ce84:	89 04 24             	mov    %eax,(%esp)
 814ce87:	e8 18 d0 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814ce8c:	8b 45 08             	mov    0x8(%ebp),%eax
 814ce8f:	05 00 0a 00 00       	add    $0xa00,%eax
 814ce94:	89 04 24             	mov    %eax,(%esp)
 814ce97:	e8 ca 5a 00 00       	call   8152966 <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 814ce9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cea0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cea3:	89 04 24             	mov    %eax,(%esp)
 814cea6:	e8 75 ea f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814ceab:	8b 45 08             	mov    0x8(%ebp),%eax
 814ceae:	8d 90 00 0a 00 00    	lea    0xa00(%eax),%edx
 814ceb4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814ceb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 814cebb:	89 04 24             	mov    %eax,(%esp)
 814cebe:	e8 45 57 00 00       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 814cec3:	83 ec 04             	sub    $0x4,%esp
 814cec6:	e9 fa 00 00 00       	jmp    814cfc5 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv+0x1b3>
 814cecb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814cece:	89 04 24             	mov    %eax,(%esp)
 814ced1:	e8 76 57 00 00       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 814ced6:	83 c0 04             	add    $0x4,%eax
 814ced9:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cedd:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 814cee3:	89 04 24             	mov    %eax,(%esp)
 814cee6:	e8 ff 4b 00 00       	call   8151aea <_ZN11map_monsterC1ERKS_>
 814ceeb:	8b 85 2c fc ff ff    	mov    -0x3d4(%ebp),%eax
 814cef1:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cef5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cef8:	89 04 24             	mov    %eax,(%esp)
 814cefb:	e8 3c ea f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814cf00:	8b 85 30 fc ff ff    	mov    -0x3d0(%ebp),%eax
 814cf06:	98                   	cwtl
 814cf07:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cf0b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cf0e:	89 04 24             	mov    %eax,(%esp)
 814cf11:	e8 8e cf f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814cf16:	8b 85 38 fc ff ff    	mov    -0x3c8(%ebp),%eax
 814cf1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cf20:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cf23:	89 04 24             	mov    %eax,(%esp)
 814cf26:	e8 79 cf f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814cf2b:	0f b6 85 3c fc ff ff 	movzbl -0x3c4(%ebp),%eax
 814cf32:	0f b6 c0             	movzbl %al,%eax
 814cf35:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cf39:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cf3c:	89 04 24             	mov    %eax,(%esp)
 814cf3f:	e8 dc e9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814cf44:	0f b6 85 34 fc ff ff 	movzbl -0x3cc(%ebp),%eax
 814cf4b:	0f be c0             	movsbl %al,%eax
 814cf4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cf52:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cf55:	89 04 24             	mov    %eax,(%esp)
 814cf58:	e8 c3 e9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814cf5d:	0f b6 85 3f fc ff ff 	movzbl -0x3c1(%ebp),%eax
 814cf64:	0f b6 c0             	movzbl %al,%eax
 814cf67:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cf6b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cf6e:	89 04 24             	mov    %eax,(%esp)
 814cf71:	e8 aa e9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814cf76:	0f b6 85 40 fc ff ff 	movzbl -0x3c0(%ebp),%eax
 814cf7d:	0f b6 c0             	movzbl %al,%eax
 814cf80:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cf84:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814cf87:	89 04 24             	mov    %eax,(%esp)
 814cf8a:	e8 91 e9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814cf8f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814cf92:	89 04 24             	mov    %eax,(%esp)
 814cf95:	e8 94 56 00 00       	call   815262e <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEv>
 814cf9a:	eb 1b                	jmp    814cfb7 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv+0x1a5>
 814cf9c:	89 d3                	mov    %edx,%ebx
 814cf9e:	89 c6                	mov    %eax,%esi
 814cfa0:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 814cfa6:	89 04 24             	mov    %eax,(%esp)
 814cfa9:	e8 00 46 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814cfae:	89 f0                	mov    %esi,%eax
 814cfb0:	89 da                	mov    %ebx,%edx
 814cfb2:	e9 e4 01 00 00       	jmp    814d19b <_ZN8WongWork10CBossStage17SendMapInfoPacketEv+0x389>
 814cfb7:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 814cfbd:	89 04 24             	mov    %eax,(%esp)
 814cfc0:	e8 e9 45 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814cfc5:	8b 45 08             	mov    0x8(%ebp),%eax
 814cfc8:	8d 90 00 0a 00 00    	lea    0xa00(%eax),%edx
 814cfce:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814cfd1:	89 54 24 04          	mov    %edx,0x4(%esp)
 814cfd5:	89 04 24             	mov    %eax,(%esp)
 814cfd8:	e8 a9 54 00 00       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 814cfdd:	83 ec 04             	sub    $0x4,%esp
 814cfe0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814cfe3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cfe7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814cfea:	89 04 24             	mov    %eax,(%esp)
 814cfed:	e8 ba 54 00 00       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 814cff2:	84 c0                	test   %al,%al
 814cff4:	0f 85 d1 fe ff ff    	jne    814cecb <_ZN8WongWork10CBossStage17SendMapInfoPacketEv+0xb9>
 814cffa:	8b 45 08             	mov    0x8(%ebp),%eax
 814cffd:	05 18 0a 00 00       	add    $0xa18,%eax
 814d002:	89 04 24             	mov    %eax,(%esp)
 814d005:	e8 70 59 00 00       	call   815297a <_ZNKSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 814d00a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d00e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d011:	89 04 24             	mov    %eax,(%esp)
 814d014:	e8 07 e9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814d019:	8b 45 08             	mov    0x8(%ebp),%eax
 814d01c:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 814d022:	8d 45 cc             	lea    -0x34(%ebp),%eax
 814d025:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d029:	89 04 24             	mov    %eax,(%esp)
 814d02c:	e8 5d 59 00 00       	call   815298e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 814d031:	83 ec 04             	sub    $0x4,%esp
 814d034:	e9 e8 00 00 00       	jmp    814d121 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv+0x30f>
 814d039:	8d 45 cc             	lea    -0x34(%ebp),%eax
 814d03c:	89 04 24             	mov    %eax,(%esp)
 814d03f:	e8 70 59 00 00       	call   81529b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEptEv>
 814d044:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 814d04a:	8d 58 04             	lea    0x4(%eax),%ebx
 814d04d:	b8 15 00 00 00       	mov    $0x15,%eax
 814d052:	89 d7                	mov    %edx,%edi
 814d054:	89 de                	mov    %ebx,%esi
 814d056:	89 c1                	mov    %eax,%ecx
 814d058:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 814d05a:	0f b6 85 79 ff ff ff 	movzbl -0x87(%ebp),%eax
 814d061:	0f be c0             	movsbl %al,%eax
 814d064:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d068:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d06b:	89 04 24             	mov    %eax,(%esp)
 814d06e:	e8 ad e8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814d073:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 814d079:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d07d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d080:	89 04 24             	mov    %eax,(%esp)
 814d083:	e8 1c ce f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814d088:	8b 45 8a             	mov    -0x76(%ebp),%eax
 814d08b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d08f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d092:	89 04 24             	mov    %eax,(%esp)
 814d095:	e8 a2 e8 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814d09a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 814d0a0:	83 c0 10             	add    $0x10,%eax
 814d0a3:	89 04 24             	mov    %eax,(%esp)
 814d0a6:	e8 8f a7 fa ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 814d0ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d0af:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d0b2:	89 04 24             	mov    %eax,(%esp)
 814d0b5:	e8 82 e8 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814d0ba:	0f b7 45 93          	movzwl -0x6d(%ebp),%eax
 814d0be:	0f b7 c0             	movzwl %ax,%eax
 814d0c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d0c5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d0c8:	89 04 24             	mov    %eax,(%esp)
 814d0cb:	e8 d4 cd f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814d0d0:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 814d0d6:	83 c0 21             	add    $0x21,%eax
 814d0d9:	89 04 24             	mov    %eax,(%esp)
 814d0dc:	e8 51 36 00 00       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 814d0e1:	0f b6 c0             	movzbl %al,%eax
 814d0e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d0e8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d0eb:	89 04 24             	mov    %eax,(%esp)
 814d0ee:	e8 2d e8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814d0f3:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 814d0f9:	83 c0 21             	add    $0x21,%eax
 814d0fc:	89 04 24             	mov    %eax,(%esp)
 814d0ff:	e8 6e 36 00 00       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 814d104:	0f b7 c0             	movzwl %ax,%eax
 814d107:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d10b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d10e:	89 04 24             	mov    %eax,(%esp)
 814d111:	e8 8e cd f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814d116:	8d 45 cc             	lea    -0x34(%ebp),%eax
 814d119:	89 04 24             	mov    %eax,(%esp)
 814d11c:	e8 a1 58 00 00       	call   81529c2 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEppEv>
 814d121:	8b 45 08             	mov    0x8(%ebp),%eax
 814d124:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 814d12a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814d12d:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d131:	89 04 24             	mov    %eax,(%esp)
 814d134:	e8 25 54 00 00       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 814d139:	83 ec 04             	sub    $0x4,%esp
 814d13c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814d13f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d143:	8d 45 cc             	lea    -0x34(%ebp),%eax
 814d146:	89 04 24             	mov    %eax,(%esp)
 814d149:	e8 36 54 00 00       	call   8152584 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEneERKS4_>
 814d14e:	84 c0                	test   %al,%al
 814d150:	0f 85 e3 fe ff ff    	jne    814d039 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv+0x227>
 814d156:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814d15d:	00 
 814d15e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d161:	89 04 24             	mov    %eax,(%esp)
 814d164:	e8 ef e7 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814d169:	8b 45 08             	mov    0x8(%ebp),%eax
 814d16c:	8b 40 04             	mov    0x4(%eax),%eax
 814d16f:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 814d172:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d176:	89 04 24             	mov    %eax,(%esp)
 814d179:	e8 d0 ff 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814d17e:	bb 01 00 00 00       	mov    $0x1,%ebx
 814d183:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d186:	89 04 24             	mov    %eax,(%esp)
 814d189:	e8 f2 0c 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814d18e:	89 d8                	mov    %ebx,%eax
 814d190:	8d 65 f4             	lea    -0xc(%ebp),%esp
 814d193:	83 c4 00             	add    $0x0,%esp
 814d196:	5b                   	pop    %ebx
 814d197:	5e                   	pop    %esi
 814d198:	5f                   	pop    %edi
 814d199:	5d                   	pop    %ebp
 814d19a:	c3                   	ret
 814d19b:	89 d3                	mov    %edx,%ebx
 814d19d:	89 c6                	mov    %eax,%esi
 814d19f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814d1a2:	89 04 24             	mov    %eax,(%esp)
 814d1a5:	e8 d6 0c 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814d1aa:	89 f0                	mov    %esi,%eax
 814d1ac:	89 da                	mov    %ebx,%edx
 814d1ae:	89 04 24             	mov    %eax,(%esp)
 814d1b1:	e8 9a 65 99 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WongWork::CBossStage::SendMapInfoPacket @ 0x814ce12

/* WongWork::CBossStage::SendMapInfoPacket() */

undefined4 __thiscall WongWork::CBossStage::SendMapInfoPacket(CBossStage *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_3d8 [2];
  char local_3d0;
  int local_3cc;
  byte local_3c8;
  byte local_3c5;
  byte local_3c4;
  undefined4 local_8c;
  int local_88;
  Inven_Item aIStack_7c [2];
  int local_7a;
  ushort local_71;
  stAmplifyOption_t asStack_6b [51];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_38 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_34 [4];
  PacketGuard local_30 [12];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar7 = 0;
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0814ce3f to 0814ceea has its CatchHandler @ 0814d19b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1e2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,*(int *)(this + 0xae0));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(this + 0xa3c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,*(int *)(this + 0x9f8));
  iVar2 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0xa00));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,iVar2);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_34);
  while( true ) {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34);
    map_monster::map_monster((map_monster *)local_3d8,(map_monster *)(iVar2 + 4));
                    /* try { // try from 0814cefb to 0814cf99 has its CatchHandler @ 0814cf9c */
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_3d8[0]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(int)(short)local_3d8[1]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,local_3cc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_3c8);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_3d0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_3c5);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_3c4);
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_34);
                    /* try { // try from 0814cfc0 to 0814d17d has its CatchHandler @ 0814d19b */
    map_monster::~map_monster((map_monster *)local_3d8);
  }
  iVar2 = std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::size
                    ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>
                      *)(this + 0xa18));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,iVar2);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::begin
            (local_38);
  while( true ) {
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_38,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_38);
    puVar5 = (undefined4 *)(iVar2 + 4);
    puVar6 = &local_8c;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_8c._1_1_);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,local_88);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_7a);
    iVar2 = Inven_Item::get_add_info(aIStack_7c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,iVar2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)local_71);
    uVar3 = stAmplifyOption_t::getAbilityType(asStack_6b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar3 & 0xff);
    uVar3 = stAmplifyOption_t::getAbilityValue(asStack_6b);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar3 & 0xffff);
    std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_38);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CParty::send_to_party(*(CParty **)(this + 4),local_30);
  PacketGuard::~PacketGuard(local_30);
  return 1;
}

```

---

## consistMap

```asm
// === 0814bef4 WongWork::CBossStage::consistMap  [0x0814bef4-0x814ce11] ===
 814bef4:	55                   	push   %ebp
 814bef5:	89 e5                	mov    %esp,%ebp
 814bef7:	57                   	push   %edi
 814bef8:	56                   	push   %esi
 814bef9:	53                   	push   %ebx
 814befa:	81 ec bc 0f 00 00    	sub    $0xfbc,%esp
 814bf00:	8b 45 0c             	mov    0xc(%ebp),%eax
 814bf03:	89 04 24             	mov    %eax,(%esp)
 814bf06:	e8 6b 88 fe ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 814bf0b:	8b 55 08             	mov    0x8(%ebp),%edx
 814bf0e:	89 82 f8 09 00 00    	mov    %eax,0x9f8(%edx)
 814bf14:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 814bf1a:	89 04 24             	mov    %eax,(%esp)
 814bf1d:	e8 5c 65 f9 ff       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 814bf22:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 814bf28:	89 04 24             	mov    %eax,(%esp)
 814bf2b:	e8 34 ad f7 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 814bf30:	e8 66 02 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814bf35:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 814bf3b:	89 04 24             	mov    %eax,(%esp)
 814bf3e:	e8 3d 49 00 00       	call   8150880 <_ZNK16CAICharacterList10getAPCountEv>
 814bf43:	89 44 24 04          	mov    %eax,0x4(%esp)
 814bf47:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 814bf4d:	89 04 24             	mov    %eax,(%esp)
 814bf50:	e8 6b 67 00 00       	call   81526c0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEaSERKS6_>
 814bf55:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 814bf5c:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814bf62:	89 04 24             	mov    %eax,(%esp)
 814bf65:	e8 5e 52 00 00       	call   81511c8 <_ZN11map_monsterC1Ev>
 814bf6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 814bf6d:	89 04 24             	mov    %eax,(%esp)
 814bf70:	e8 87 49 00 00       	call   81508fc <_ZNK4CMap15getAICharactersEv>
 814bf75:	89 45 c8             	mov    %eax,-0x38(%ebp)
 814bf78:	8b 45 c8             	mov    -0x38(%ebp),%eax
 814bf7b:	89 04 24             	mov    %eax,(%esp)
 814bf7e:	e8 5b 67 00 00       	call   81526de <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE5emptyEv>
 814bf83:	83 f0 01             	xor    $0x1,%eax
 814bf86:	84 c0                	test   %al,%al
 814bf88:	0f 84 8c 02 00 00    	je     814c21a <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x326>
 814bf8e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 814bf95:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 814bf9b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 814bf9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 814bfa2:	89 04 24             	mov    %eax,(%esp)
 814bfa5:	e8 78 67 00 00       	call   8152722 <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE5beginEv>
 814bfaa:	83 ec 04             	sub    $0x4,%esp
 814bfad:	8d 85 28 f5 ff ff    	lea    -0xad8(%ebp),%eax
 814bfb3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 814bfb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 814bfba:	89 04 24             	mov    %eax,(%esp)
 814bfbd:	e8 8c 67 00 00       	call   815274e <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE3endEv>
 814bfc2:	83 ec 04             	sub    $0x4,%esp
 814bfc5:	e9 30 02 00 00       	jmp    814c1fa <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x306>
 814bfca:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 814bfd0:	89 04 24             	mov    %eax,(%esp)
 814bfd3:	e8 e4 67 00 00       	call   81527bc <_ZNK9__gnu_cxx17__normal_iteratorIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEdeEv>
 814bfd8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 814bfdb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814bfde:	8b 00                	mov    (%eax),%eax
 814bfe0:	89 c3                	mov    %eax,%ebx
 814bfe2:	e8 b4 01 f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814bfe7:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 814bfed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814bff1:	89 04 24             	mov    %eax,(%esp)
 814bff4:	e8 d9 e9 1f 00       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 814bff9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 814bffc:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 814c000:	75 0a                	jne    814c00c <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x118>
 814c002:	bb 00 00 00 00       	mov    $0x0,%ebx
 814c007:	e9 95 0d 00 00       	jmp    814cda1 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xead>
 814c00c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 814c00f:	89 04 24             	mov    %eax,(%esp)
 814c012:	e8 39 48 00 00       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 814c017:	89 85 8c f5 ff ff    	mov    %eax,-0xa74(%ebp)
 814c01d:	8d 85 8c f5 ff ff    	lea    -0xa74(%ebp),%eax
 814c023:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c027:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 814c02d:	89 04 24             	mov    %eax,(%esp)
 814c030:	e8 91 67 00 00       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 814c035:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 814c038:	89 04 24             	mov    %eax,(%esp)
 814c03b:	e8 26 48 00 00       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 814c040:	85 c0                	test   %eax,%eax
 814c042:	0f 95 c0             	setne  %al
 814c045:	84 c0                	test   %al,%al
 814c047:	0f 84 be 00 00 00    	je     814c10b <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x217>
 814c04d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 814c050:	89 04 24             	mov    %eax,(%esp)
 814c053:	e8 0e 48 00 00       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 814c058:	89 85 90 f5 ff ff    	mov    %eax,-0xa70(%ebp)
 814c05e:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 814c064:	8d 95 90 f5 ff ff    	lea    -0xa70(%ebp),%edx
 814c06a:	89 54 24 08          	mov    %edx,0x8(%esp)
 814c06e:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 814c074:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c078:	89 04 24             	mov    %eax,(%esp)
 814c07b:	e8 6e 12 f8 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 814c080:	83 ec 04             	sub    $0x4,%esp
 814c083:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 814c089:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 814c08f:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c093:	89 04 24             	mov    %eax,(%esp)
 814c096:	e8 7f 12 f8 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 814c09b:	83 ec 04             	sub    $0x4,%esp
 814c09e:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 814c0a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c0a8:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 814c0ae:	89 04 24             	mov    %eax,(%esp)
 814c0b1:	e8 12 e3 f8 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 814c0b6:	84 c0                	test   %al,%al
 814c0b8:	74 51                	je     814c10b <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x217>
 814c0ba:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 814c0c0:	89 04 24             	mov    %eax,(%esp)
 814c0c3:	e8 78 12 f8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 814c0c8:	89 c3                	mov    %eax,%ebx
 814c0ca:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 814c0d0:	89 04 24             	mov    %eax,(%esp)
 814c0d3:	e8 68 12 f8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 814c0d8:	8b 40 04             	mov    0x4(%eax),%eax
 814c0db:	83 e8 01             	sub    $0x1,%eax
 814c0de:	89 85 98 f5 ff ff    	mov    %eax,-0xa68(%ebp)
 814c0e4:	c7 85 9c f5 ff ff 00 	movl   $0x0,-0xa64(%ebp)
 814c0eb:	00 00 00 
 814c0ee:	8d 85 98 f5 ff ff    	lea    -0xa68(%ebp),%eax
 814c0f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c0f8:	8d 85 9c f5 ff ff    	lea    -0xa64(%ebp),%eax
 814c0fe:	89 04 24             	mov    %eax,(%esp)
 814c101:	e8 12 21 f4 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 814c106:	8b 00                	mov    (%eax),%eax
 814c108:	89 43 04             	mov    %eax,0x4(%ebx)
 814c10b:	c7 44 24 08 4c 03 00 	movl   $0x34c,0x8(%esp)
 814c112:	00 
 814c113:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814c11a:	00 
 814c11b:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c121:	89 04 24             	mov    %eax,(%esp)
 814c124:	e8 97 1b f3 ff       	call   807dcc0 <memset@plt>
 814c129:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 814c12c:	89 85 b0 f0 ff ff    	mov    %eax,-0xf50(%ebp)
 814c132:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814c135:	8b 00                	mov    (%eax),%eax
 814c137:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 814c13d:	8b 45 08             	mov    0x8(%ebp),%eax
 814c140:	8b 80 30 0a 00 00    	mov    0xa30(%eax),%eax
 814c146:	89 85 b4 f0 ff ff    	mov    %eax,-0xf4c(%ebp)
 814c14c:	8d 50 01             	lea    0x1(%eax),%edx
 814c14f:	8b 45 08             	mov    0x8(%ebp),%eax
 814c152:	89 90 30 0a 00 00    	mov    %edx,0xa30(%eax)
 814c158:	c6 85 b8 f0 ff ff 05 	movb   $0x5,-0xf48(%ebp)
 814c15f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 814c162:	89 04 24             	mov    %eax,(%esp)
 814c165:	e8 f0 46 00 00       	call   815085a <_ZNK12CAICharacter8getLevelEv>
 814c16a:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 814c170:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814c173:	8b 40 10             	mov    0x10(%eax),%eax
 814c176:	89 85 dc f0 ff ff    	mov    %eax,-0xf24(%ebp)
 814c17c:	c6 85 c1 f0 ff ff 00 	movb   $0x0,-0xf3f(%ebp)
 814c183:	c6 85 c2 f0 ff ff 00 	movb   $0x0,-0xf3e(%ebp)
 814c18a:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c190:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c194:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 814c19a:	89 04 24             	mov    %eax,(%esp)
 814c19d:	e8 48 59 00 00       	call   8151aea <_ZN11map_monsterC1ERKS_>
 814c1a2:	8b 45 08             	mov    0x8(%ebp),%eax
 814c1a5:	8d 90 f4 09 00 00    	lea    0x9f4(%eax),%edx
 814c1ab:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 814c1b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c1b5:	89 14 24             	mov    %edx,(%esp)
 814c1b8:	e8 55 54 00 00       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 814c1bd:	eb 1b                	jmp    814c1da <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x2e6>
 814c1bf:	89 d3                	mov    %edx,%ebx
 814c1c1:	89 c6                	mov    %eax,%esi
 814c1c3:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 814c1c9:	89 04 24             	mov    %eax,(%esp)
 814c1cc:	e8 dd 53 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814c1d1:	89 f0                	mov    %esi,%eax
 814c1d3:	89 da                	mov    %ebx,%edx
 814c1d5:	e9 af 0b 00 00       	jmp    814cd89 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe95>
 814c1da:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 814c1e0:	89 04 24             	mov    %eax,(%esp)
 814c1e3:	e8 c6 53 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814c1e8:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 814c1ec:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 814c1f2:	89 04 24             	mov    %eax,(%esp)
 814c1f5:	e8 ac 65 00 00       	call   81527a6 <_ZN9__gnu_cxx17__normal_iteratorIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEppEv>
 814c1fa:	8d 85 28 f5 ff ff    	lea    -0xad8(%ebp),%eax
 814c200:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c204:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 814c20a:	89 04 24             	mov    %eax,(%esp)
 814c20d:	e8 68 65 00 00       	call   815277a <_ZN9__gnu_cxxneIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 814c212:	84 c0                	test   %al,%al
 814c214:	0f 85 b0 fd ff ff    	jne    814bfca <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xd6>
 814c21a:	8b 45 0c             	mov    0xc(%ebp),%eax
 814c21d:	89 04 24             	mov    %eax,(%esp)
 814c220:	e8 cb 46 00 00       	call   81508f0 <_ZNK4CMap17getAPCRandomPointEv>
 814c225:	89 85 64 f5 ff ff    	mov    %eax,-0xa9c(%ebp)
 814c22b:	8b 85 64 f5 ff ff    	mov    -0xa9c(%ebp),%eax
 814c231:	85 c0                	test   %eax,%eax
 814c233:	0f 84 d2 03 00 00    	je     814c60b <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x717>
 814c239:	c7 45 c4 40 00 00 00 	movl   $0x40,-0x3c(%ebp)
 814c240:	e9 a0 03 00 00       	jmp    814c5e5 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x6f1>
 814c245:	8b 85 64 f5 ff ff    	mov    -0xa9c(%ebp),%eax
 814c24b:	89 04 24             	mov    %eax,(%esp)
 814c24e:	e8 34 59 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814c253:	83 c0 01             	add    $0x1,%eax
 814c256:	89 c3                	mov    %eax,%ebx
 814c258:	e8 3e ff f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814c25d:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 814c263:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814c267:	89 04 24             	mov    %eax,(%esp)
 814c26a:	e8 85 e8 1f 00       	call   834aaf4 <_ZN16CAICharacterList7getByAPEj>
 814c26f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 814c272:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 814c276:	75 0a                	jne    814c282 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x38e>
 814c278:	bb 00 00 00 00       	mov    $0x0,%ebx
 814c27d:	e9 1f 0b 00 00       	jmp    814cda1 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xead>
 814c282:	8d 85 ec f8 ff ff    	lea    -0x714(%ebp),%eax
 814c288:	8d 95 80 f5 ff ff    	lea    -0xa80(%ebp),%edx
 814c28e:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c292:	89 04 24             	mov    %eax,(%esp)
 814c295:	e8 f0 67 f9 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 814c29a:	83 ec 04             	sub    $0x4,%esp
 814c29d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814c2a0:	89 04 24             	mov    %eax,(%esp)
 814c2a3:	e8 a8 45 00 00       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 814c2a8:	89 85 f4 f8 ff ff    	mov    %eax,-0x70c(%ebp)
 814c2ae:	8d 85 f8 f8 ff ff    	lea    -0x708(%ebp),%eax
 814c2b4:	8d 95 80 f5 ff ff    	lea    -0xa80(%ebp),%edx
 814c2ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c2be:	89 04 24             	mov    %eax,(%esp)
 814c2c1:	e8 c4 67 f9 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 814c2c6:	83 ec 04             	sub    $0x4,%esp
 814c2c9:	8d 85 fc f8 ff ff    	lea    -0x704(%ebp),%eax
 814c2cf:	8d 95 80 f5 ff ff    	lea    -0xa80(%ebp),%edx
 814c2d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c2d9:	89 04 24             	mov    %eax,(%esp)
 814c2dc:	e8 6d 75 f9 ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 814c2e1:	83 ec 04             	sub    $0x4,%esp
 814c2e4:	8d 85 f0 f8 ff ff    	lea    -0x710(%ebp),%eax
 814c2ea:	8d 95 f4 f8 ff ff    	lea    -0x70c(%ebp),%edx
 814c2f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814c2f4:	8b 95 f8 f8 ff ff    	mov    -0x708(%ebp),%edx
 814c2fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 814c2fe:	8b 95 fc f8 ff ff    	mov    -0x704(%ebp),%edx
 814c304:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c308:	89 04 24             	mov    %eax,(%esp)
 814c30b:	e8 5b 63 00 00       	call   815266b <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEjET_S7_S7_RKT0_>
 814c310:	83 ec 04             	sub    $0x4,%esp
 814c313:	8d 85 ec f8 ff ff    	lea    -0x714(%ebp),%eax
 814c319:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c31d:	8d 85 f0 f8 ff ff    	lea    -0x710(%ebp),%eax
 814c323:	89 04 24             	mov    %eax,(%esp)
 814c326:	e8 c5 4f fc ff       	call   81112f0 <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 814c32b:	84 c0                	test   %al,%al
 814c32d:	0f 84 c6 00 00 00    	je     814c3f9 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x505>
 814c333:	8d 85 00 f9 ff ff    	lea    -0x700(%ebp),%eax
 814c339:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 814c33f:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c343:	89 04 24             	mov    %eax,(%esp)
 814c346:	e8 55 5c 00 00       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 814c34b:	83 ec 04             	sub    $0x4,%esp
 814c34e:	8d 85 00 f9 ff ff    	lea    -0x700(%ebp),%eax
 814c354:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c358:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 814c35e:	89 04 24             	mov    %eax,(%esp)
 814c361:	e8 60 5c 00 00       	call   8151fc6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 814c366:	8d 85 04 f9 ff ff    	lea    -0x6fc(%ebp),%eax
 814c36c:	8d 95 64 f5 ff ff    	lea    -0xa9c(%ebp),%edx
 814c372:	89 54 24 08          	mov    %edx,0x8(%esp)
 814c376:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 814c37c:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c380:	89 04 24             	mov    %eax,(%esp)
 814c383:	e8 68 64 00 00       	call   81527f0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE11upper_boundERS3_>
 814c388:	83 ec 04             	sub    $0x4,%esp
 814c38b:	8d 85 04 f9 ff ff    	lea    -0x6fc(%ebp),%eax
 814c391:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c395:	8d 85 18 f5 ff ff    	lea    -0xae8(%ebp),%eax
 814c39b:	89 04 24             	mov    %eax,(%esp)
 814c39e:	e8 23 5c 00 00       	call   8151fc6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 814c3a3:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 814c3aa:	eb 22                	jmp    814c3ce <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x4da>
 814c3ac:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 814c3b2:	89 04 24             	mov    %eax,(%esp)
 814c3b5:	e8 56 ab f7 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 814c3ba:	8b 40 04             	mov    0x4(%eax),%eax
 814c3bd:	01 45 dc             	add    %eax,-0x24(%ebp)
 814c3c0:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 814c3c6:	89 04 24             	mov    %eax,(%esp)
 814c3c9:	e8 b4 5b 00 00       	call   8151f82 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEv>
 814c3ce:	8d 85 18 f5 ff ff    	lea    -0xae8(%ebp),%eax
 814c3d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c3d8:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 814c3de:	89 04 24             	mov    %eax,(%esp)
 814c3e1:	e8 16 ab f7 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 814c3e6:	84 c0                	test   %al,%al
 814c3e8:	75 c2                	jne    814c3ac <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x4b8>
 814c3ea:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 814c3ee:	0f 85 f0 01 00 00    	jne    814c5e4 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x6f0>
 814c3f4:	e9 12 02 00 00       	jmp    814c60b <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x717>
 814c3f9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814c3fc:	89 04 24             	mov    %eax,(%esp)
 814c3ff:	e8 4c 44 00 00       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 814c404:	89 85 08 f9 ff ff    	mov    %eax,-0x6f8(%ebp)
 814c40a:	8d 85 08 f9 ff ff    	lea    -0x6f8(%ebp),%eax
 814c410:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c414:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 814c41a:	89 04 24             	mov    %eax,(%esp)
 814c41d:	e8 a4 63 00 00       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 814c422:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814c425:	89 04 24             	mov    %eax,(%esp)
 814c428:	e8 39 44 00 00       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 814c42d:	89 85 0c f9 ff ff    	mov    %eax,-0x6f4(%ebp)
 814c433:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 814c439:	8d 95 0c f9 ff ff    	lea    -0x6f4(%ebp),%edx
 814c43f:	89 54 24 08          	mov    %edx,0x8(%esp)
 814c443:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 814c449:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c44d:	89 04 24             	mov    %eax,(%esp)
 814c450:	e8 99 0e f8 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 814c455:	83 ec 04             	sub    $0x4,%esp
 814c458:	8d 85 10 f9 ff ff    	lea    -0x6f0(%ebp),%eax
 814c45e:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 814c464:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c468:	89 04 24             	mov    %eax,(%esp)
 814c46b:	e8 aa 0e f8 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 814c470:	83 ec 04             	sub    $0x4,%esp
 814c473:	8d 85 10 f9 ff ff    	lea    -0x6f0(%ebp),%eax
 814c479:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c47d:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 814c483:	89 04 24             	mov    %eax,(%esp)
 814c486:	e8 3d df f8 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 814c48b:	84 c0                	test   %al,%al
 814c48d:	74 51                	je     814c4e0 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x5ec>
 814c48f:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 814c495:	89 04 24             	mov    %eax,(%esp)
 814c498:	e8 a3 0e f8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 814c49d:	89 c3                	mov    %eax,%ebx
 814c49f:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 814c4a5:	89 04 24             	mov    %eax,(%esp)
 814c4a8:	e8 93 0e f8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 814c4ad:	8b 40 04             	mov    0x4(%eax),%eax
 814c4b0:	83 e8 01             	sub    $0x1,%eax
 814c4b3:	89 85 14 f9 ff ff    	mov    %eax,-0x6ec(%ebp)
 814c4b9:	c7 85 18 f9 ff ff 00 	movl   $0x0,-0x6e8(%ebp)
 814c4c0:	00 00 00 
 814c4c3:	8d 85 14 f9 ff ff    	lea    -0x6ec(%ebp),%eax
 814c4c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c4cd:	8d 85 18 f9 ff ff    	lea    -0x6e8(%ebp),%eax
 814c4d3:	89 04 24             	mov    %eax,(%esp)
 814c4d6:	e8 3d 1d f4 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 814c4db:	8b 00                	mov    (%eax),%eax
 814c4dd:	89 43 04             	mov    %eax,0x4(%ebx)
 814c4e0:	8b 9d 64 f5 ff ff    	mov    -0xa9c(%ebp),%ebx
 814c4e6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814c4e9:	89 04 24             	mov    %eax,(%esp)
 814c4ec:	e8 75 43 00 00       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 814c4f1:	89 da                	mov    %ebx,%edx
 814c4f3:	29 c2                	sub    %eax,%edx
 814c4f5:	89 d0                	mov    %edx,%eax
 814c4f7:	89 85 64 f5 ff ff    	mov    %eax,-0xa9c(%ebp)
 814c4fd:	c7 44 24 08 4c 03 00 	movl   $0x34c,0x8(%esp)
 814c504:	00 
 814c505:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814c50c:	00 
 814c50d:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c513:	89 04 24             	mov    %eax,(%esp)
 814c516:	e8 a5 17 f3 ff       	call   807dcc0 <memset@plt>
 814c51b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 814c51e:	89 85 b0 f0 ff ff    	mov    %eax,-0xf50(%ebp)
 814c524:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814c527:	89 04 24             	mov    %eax,(%esp)
 814c52a:	e8 21 43 00 00       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 814c52f:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 814c535:	8b 45 08             	mov    0x8(%ebp),%eax
 814c538:	8b 80 30 0a 00 00    	mov    0xa30(%eax),%eax
 814c53e:	89 85 b4 f0 ff ff    	mov    %eax,-0xf4c(%ebp)
 814c544:	8d 50 01             	lea    0x1(%eax),%edx
 814c547:	8b 45 08             	mov    0x8(%ebp),%eax
 814c54a:	89 90 30 0a 00 00    	mov    %edx,0xa30(%eax)
 814c550:	c6 85 b8 f0 ff ff 05 	movb   $0x5,-0xf48(%ebp)
 814c557:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814c55a:	89 04 24             	mov    %eax,(%esp)
 814c55d:	e8 f8 42 00 00       	call   815085a <_ZNK12CAICharacter8getLevelEv>
 814c562:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 814c568:	c7 85 dc f0 ff ff 64 	movl   $0x64,-0xf24(%ebp)
 814c56f:	00 00 00 
 814c572:	c6 85 c1 f0 ff ff 00 	movb   $0x0,-0xf3f(%ebp)
 814c579:	c6 85 c2 f0 ff ff 00 	movb   $0x0,-0xf3e(%ebp)
 814c580:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c586:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c58a:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 814c590:	89 04 24             	mov    %eax,(%esp)
 814c593:	e8 52 55 00 00       	call   8151aea <_ZN11map_monsterC1ERKS_>
 814c598:	8b 45 08             	mov    0x8(%ebp),%eax
 814c59b:	8d 90 f4 09 00 00    	lea    0x9f4(%eax),%edx
 814c5a1:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 814c5a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c5ab:	89 14 24             	mov    %edx,(%esp)
 814c5ae:	e8 5f 50 00 00       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 814c5b3:	eb 1b                	jmp    814c5d0 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x6dc>
 814c5b5:	89 d3                	mov    %edx,%ebx
 814c5b7:	89 c6                	mov    %eax,%esi
 814c5b9:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 814c5bf:	89 04 24             	mov    %eax,(%esp)
 814c5c2:	e8 e7 4f 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814c5c7:	89 f0                	mov    %esi,%eax
 814c5c9:	89 da                	mov    %ebx,%edx
 814c5cb:	e9 b9 07 00 00       	jmp    814cd89 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe95>
 814c5d0:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 814c5d6:	89 04 24             	mov    %eax,(%esp)
 814c5d9:	e8 d0 4f 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814c5de:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 814c5e2:	eb 01                	jmp    814c5e5 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x6f1>
 814c5e4:	90                   	nop
 814c5e5:	e8 b1 fb f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814c5ea:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 814c5f0:	89 04 24             	mov    %eax,(%esp)
 814c5f3:	e8 7a 42 00 00       	call   8150872 <_ZN16CAICharacterList8getMinAPEv>
 814c5f8:	8b 95 64 f5 ff ff    	mov    -0xa9c(%ebp),%edx
 814c5fe:	39 d0                	cmp    %edx,%eax
 814c600:	0f 9e c0             	setle  %al
 814c603:	84 c0                	test   %al,%al
 814c605:	0f 85 3a fc ff ff    	jne    814c245 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x351>
 814c60b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 814c612:	e8 70 55 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814c617:	8b 55 08             	mov    0x8(%ebp),%edx
 814c61a:	89 82 3c 0a 00 00    	mov    %eax,0xa3c(%edx)
 814c620:	8b 45 08             	mov    0x8(%ebp),%eax
 814c623:	8b 80 3c 0a 00 00    	mov    0xa3c(%eax),%eax
 814c629:	89 c2                	mov    %eax,%edx
 814c62b:	81 e2 ff ff fb ff    	and    $0xfffbffff,%edx
 814c631:	8b 45 08             	mov    0x8(%ebp),%eax
 814c634:	89 90 3c 0a 00 00    	mov    %edx,0xa3c(%eax)
 814c63a:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 814c641:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 814c647:	89 04 24             	mov    %eax,(%esp)
 814c64a:	e8 5d 1b f4 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 814c64f:	8d 85 50 f5 ff ff    	lea    -0xab0(%ebp),%eax
 814c655:	8b 55 0c             	mov    0xc(%ebp),%edx
 814c658:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c65c:	89 04 24             	mov    %eax,(%esp)
 814c65f:	e8 32 81 fe ff       	call   8134796 <_ZNK4CMap16get_monster_listEv>
 814c664:	83 ec 04             	sub    $0x4,%esp
 814c667:	8d 85 68 fc ff ff    	lea    -0x398(%ebp),%eax
 814c66d:	8d 95 50 f5 ff ff    	lea    -0xab0(%ebp),%edx
 814c673:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c677:	89 04 24             	mov    %eax,(%esp)
 814c67a:	e8 9d 61 00 00       	call   815281c <_ZNSt4listI11_mapMonsterSaIS0_EE5beginEv>
 814c67f:	83 ec 04             	sub    $0x4,%esp
 814c682:	8d 85 68 fc ff ff    	lea    -0x398(%ebp),%eax
 814c688:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c68c:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 814c692:	89 04 24             	mov    %eax,(%esp)
 814c695:	e8 a8 61 00 00       	call   8152842 <_ZNSt20_List_const_iteratorI11_mapMonsterEC1ERKSt14_List_iteratorIS0_E>
 814c69a:	e9 03 02 00 00       	jmp    814c8a2 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x9ae>
 814c69f:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 814c6a5:	89 04 24             	mov    %eax,(%esp)
 814c6a8:	e8 c7 d1 fe ff       	call   8139874 <_ZNKSt20_List_const_iteratorI11_mapMonsterEdeEv>
 814c6ad:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814c6b0:	c7 44 24 08 4c 03 00 	movl   $0x34c,0x8(%esp)
 814c6b7:	00 
 814c6b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814c6bf:	00 
 814c6c0:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c6c6:	89 04 24             	mov    %eax,(%esp)
 814c6c9:	e8 f2 15 f3 ff       	call   807dcc0 <memset@plt>
 814c6ce:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 814c6d1:	89 85 b0 f0 ff ff    	mov    %eax,-0xf50(%ebp)
 814c6d7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c6da:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 814c6de:	84 c0                	test   %al,%al
 814c6e0:	74 5a                	je     814c73c <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x848>
 814c6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 814c6e5:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814c6eb:	89 04 24             	mov    %eax,(%esp)
 814c6ee:	e8 1d d1 fa ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 814c6f3:	89 c2                	mov    %eax,%edx
 814c6f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c6f8:	8b 40 08             	mov    0x8(%eax),%eax
 814c6fb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 814c6fe:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 814c704:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 814c70b:	3c 62                	cmp    $0x62,%al
 814c70d:	77 0e                	ja     814c71d <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x829>
 814c70f:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 814c716:	0f b6 c0             	movzbl %al,%eax
 814c719:	85 c0                	test   %eax,%eax
 814c71b:	7e 12                	jle    814c72f <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x83b>
 814c71d:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 814c724:	3c 63                	cmp    $0x63,%al
 814c726:	76 0c                	jbe    814c734 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x840>
 814c728:	b8 63 00 00 00       	mov    $0x63,%eax
 814c72d:	eb 05                	jmp    814c734 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x840>
 814c72f:	b8 01 00 00 00       	mov    $0x1,%eax
 814c734:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 814c73a:	eb 0c                	jmp    814c748 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x854>
 814c73c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c73f:	8b 40 08             	mov    0x8(%eax),%eax
 814c742:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 814c748:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c74b:	8b 00                	mov    (%eax),%eax
 814c74d:	83 f8 ff             	cmp    $0xffffffff,%eax
 814c750:	75 26                	jne    814c778 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x884>
 814c752:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 814c759:	0f b6 d8             	movzbl %al,%ebx
 814c75c:	e8 3a fa f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814c761:	8b 40 08             	mov    0x8(%eax),%eax
 814c764:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814c768:	89 04 24             	mov    %eax,(%esp)
 814c76b:	e8 b0 37 20 00       	call   834ff20 <_ZN15CMonsterManager19get_levelrandom_mobEi>
 814c770:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 814c776:	eb 0b                	jmp    814c783 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x88f>
 814c778:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c77b:	8b 00                	mov    (%eax),%eax
 814c77d:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 814c783:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c786:	8b 40 10             	mov    0x10(%eax),%eax
 814c789:	88 85 c1 f0 ff ff    	mov    %al,-0xf3f(%ebp)
 814c78f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c792:	8b 40 14             	mov    0x14(%eax),%eax
 814c795:	88 85 c2 f0 ff ff    	mov    %al,-0xf3e(%ebp)
 814c79b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c79e:	8b 40 18             	mov    0x18(%eax),%eax
 814c7a1:	88 85 b8 f0 ff ff    	mov    %al,-0xf48(%ebp)
 814c7a7:	8b 45 08             	mov    0x8(%ebp),%eax
 814c7aa:	8b 80 30 0a 00 00    	mov    0xa30(%eax),%eax
 814c7b0:	89 85 b4 f0 ff ff    	mov    %eax,-0xf4c(%ebp)
 814c7b6:	8d 50 01             	lea    0x1(%eax),%edx
 814c7b9:	8b 45 08             	mov    0x8(%ebp),%eax
 814c7bc:	89 90 30 0a 00 00    	mov    %edx,0xa30(%eax)
 814c7c2:	0f b6 85 b8 f0 ff ff 	movzbl -0xf48(%ebp),%eax
 814c7c9:	84 c0                	test   %al,%al
 814c7cb:	75 1c                	jne    814c7e9 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x8f5>
 814c7cd:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c7d3:	89 04 24             	mov    %eax,(%esp)
 814c7d6:	e8 a7 49 00 00       	call   8151182 <_ZN11map_monster14isNamedMonsterEv>
 814c7db:	83 f0 01             	xor    $0x1,%eax
 814c7de:	84 c0                	test   %al,%al
 814c7e0:	74 07                	je     814c7e9 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x8f5>
 814c7e2:	b8 01 00 00 00       	mov    $0x1,%eax
 814c7e7:	eb 05                	jmp    814c7ee <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x8fa>
 814c7e9:	b8 00 00 00 00       	mov    $0x0,%eax
 814c7ee:	84 c0                	test   %al,%al
 814c7f0:	74 1b                	je     814c80d <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x919>
 814c7f2:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c7f8:	83 c0 04             	add    $0x4,%eax
 814c7fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c7ff:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 814c805:	89 04 24             	mov    %eax,(%esp)
 814c808:	e8 19 49 fc ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 814c80d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c810:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 814c814:	88 85 c3 f0 ff ff    	mov    %al,-0xf3d(%ebp)
 814c81a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c81d:	8b 40 20             	mov    0x20(%eax),%eax
 814c820:	88 85 c4 f0 ff ff    	mov    %al,-0xf3c(%ebp)
 814c826:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814c829:	8b 40 28             	mov    0x28(%eax),%eax
 814c82c:	89 85 dc f0 ff ff    	mov    %eax,-0xf24(%ebp)
 814c832:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814c838:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c83c:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 814c842:	89 04 24             	mov    %eax,(%esp)
 814c845:	e8 a0 52 00 00       	call   8151aea <_ZN11map_monsterC1ERKS_>
 814c84a:	8b 45 08             	mov    0x8(%ebp),%eax
 814c84d:	8d 90 f4 09 00 00    	lea    0x9f4(%eax),%edx
 814c853:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 814c859:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c85d:	89 14 24             	mov    %edx,(%esp)
 814c860:	e8 ad 4d 00 00       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 814c865:	eb 1b                	jmp    814c882 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x98e>
 814c867:	89 d3                	mov    %edx,%ebx
 814c869:	89 c6                	mov    %eax,%esi
 814c86b:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 814c871:	89 04 24             	mov    %eax,(%esp)
 814c874:	e8 35 4d 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814c879:	89 f0                	mov    %esi,%eax
 814c87b:	89 da                	mov    %ebx,%edx
 814c87d:	e9 b7 04 00 00       	jmp    814cd39 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe45>
 814c882:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 814c888:	89 04 24             	mov    %eax,(%esp)
 814c88b:	e8 1e 4d 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814c890:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 814c896:	89 04 24             	mov    %eax,(%esp)
 814c899:	e8 c2 cf fe ff       	call   8139860 <_ZNSt20_List_const_iteratorI11_mapMonsterEppEv>
 814c89e:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 814c8a2:	8d 85 70 fc ff ff    	lea    -0x390(%ebp),%eax
 814c8a8:	8d 95 50 f5 ff ff    	lea    -0xab0(%ebp),%edx
 814c8ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c8b2:	89 04 24             	mov    %eax,(%esp)
 814c8b5:	e8 52 f1 fe ff       	call   813ba0c <_ZNSt4listI11_mapMonsterSaIS0_EE3endEv>
 814c8ba:	83 ec 04             	sub    $0x4,%esp
 814c8bd:	8d 85 70 fc ff ff    	lea    -0x390(%ebp),%eax
 814c8c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c8c7:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 814c8cd:	89 04 24             	mov    %eax,(%esp)
 814c8d0:	e8 6d 5f 00 00       	call   8152842 <_ZNSt20_List_const_iteratorI11_mapMonsterEC1ERKSt14_List_iteratorIS0_E>
 814c8d5:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 814c8db:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c8df:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 814c8e5:	89 04 24             	mov    %eax,(%esp)
 814c8e8:	e8 e5 94 fe ff       	call   8135dd2 <_ZNKSt20_List_const_iteratorI11_mapMonsterEneERKS1_>
 814c8ed:	84 c0                	test   %al,%al
 814c8ef:	0f 85 aa fd ff ff    	jne    814c69f <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0x7ab>
 814c8f5:	8d 85 3c f5 ff ff    	lea    -0xac4(%ebp),%eax
 814c8fb:	89 04 24             	mov    %eax,(%esp)
 814c8fe:	e8 8b 3f 00 00       	call   815088e <_ZN8_mapItemC1Ev>
 814c903:	8b 45 08             	mov    0x8(%ebp),%eax
 814c906:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814c90c:	89 04 24             	mov    %eax,(%esp)
 814c90f:	e8 00 40 00 00       	call   8150914 <_ZNK8CDungeon28getSpecialPassiveObjectItemsEv>
 814c914:	89 45 cc             	mov    %eax,-0x34(%ebp)
 814c917:	8d 85 98 f4 ff ff    	lea    -0xb68(%ebp),%eax
 814c91d:	89 04 24             	mov    %eax,(%esp)
 814c920:	e8 e1 dd ff ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 814c925:	8d 85 50 f4 ff ff    	lea    -0xbb0(%ebp),%eax
 814c92b:	89 04 24             	mov    %eax,(%esp)
 814c92e:	e8 d3 dd ff ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 814c933:	8b 45 08             	mov    0x8(%ebp),%eax
 814c936:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814c93c:	89 04 24             	mov    %eax,(%esp)
 814c93f:	e8 c4 3f 00 00       	call   8150908 <_ZNK8CDungeon18getObjectDropItemsEv>
 814c944:	89 85 84 f4 ff ff    	mov    %eax,-0xb7c(%ebp)
 814c94a:	8d 85 34 f5 ff ff    	lea    -0xacc(%ebp),%eax
 814c950:	8b 55 0c             	mov    0xc(%ebp),%edx
 814c953:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c957:	89 04 24             	mov    %eax,(%esp)
 814c95a:	e8 67 3f 00 00       	call   81508c6 <_ZNK4CMap13get_item_listEv>
 814c95f:	83 ec 04             	sub    $0x4,%esp
 814c962:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 814c968:	8d 95 34 f5 ff ff    	lea    -0xacc(%ebp),%edx
 814c96e:	89 54 24 04          	mov    %edx,0x4(%esp)
 814c972:	89 04 24             	mov    %eax,(%esp)
 814c975:	e8 d8 5e 00 00       	call   8152852 <_ZNSt4listI8_mapItemSaIS0_EE5beginEv>
 814c97a:	83 ec 04             	sub    $0x4,%esp
 814c97d:	e9 05 03 00 00       	jmp    814cc87 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xd93>
 814c982:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 814c988:	89 04 24             	mov    %eax,(%esp)
 814c98b:	e8 20 5f 00 00       	call   81528b0 <_ZNKSt14_List_iteratorI8_mapItemEdeEv>
 814c990:	8b 10                	mov    (%eax),%edx
 814c992:	89 95 3c f5 ff ff    	mov    %edx,-0xac4(%ebp)
 814c998:	8b 50 04             	mov    0x4(%eax),%edx
 814c99b:	89 95 40 f5 ff ff    	mov    %edx,-0xac0(%ebp)
 814c9a1:	8b 50 08             	mov    0x8(%eax),%edx
 814c9a4:	89 95 44 f5 ff ff    	mov    %edx,-0xabc(%ebp)
 814c9aa:	8b 40 0c             	mov    0xc(%eax),%eax
 814c9ad:	89 85 48 f5 ff ff    	mov    %eax,-0xab8(%ebp)
 814c9b3:	8b 85 3c f5 ff ff    	mov    -0xac4(%ebp),%eax
 814c9b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 814c9bd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 814c9c0:	89 04 24             	mov    %eax,(%esp)
 814c9c3:	e8 f6 5e 00 00       	call   81528be <_ZNKSt6vectorI21stDungeonAssignItem_tSaIS0_EE2atEj>
 814c9c8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814c9cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814c9ce:	8b 00                	mov    (%eax),%eax
 814c9d0:	83 f8 ff             	cmp    $0xffffffff,%eax
 814c9d3:	74 0d                	je     814c9e2 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xaee>
 814c9d5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814c9d8:	8b 00                	mov    (%eax),%eax
 814c9da:	88 85 d0 f4 ff ff    	mov    %al,-0xb30(%ebp)
 814c9e0:	eb 58                	jmp    814ca3a <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xb46>
 814c9e2:	8b 45 08             	mov    0x8(%ebp),%eax
 814c9e5:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814c9eb:	89 04 24             	mov    %eax,(%esp)
 814c9ee:	e8 1d ce fa ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 814c9f3:	85 c0                	test   %eax,%eax
 814c9f5:	7e 18                	jle    814ca0f <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xb1b>
 814c9f7:	8b 45 08             	mov    0x8(%ebp),%eax
 814c9fa:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814ca00:	89 04 24             	mov    %eax,(%esp)
 814ca03:	e8 08 ce fa ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 814ca08:	3d c8 00 00 00       	cmp    $0xc8,%eax
 814ca0d:	7e 07                	jle    814ca16 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xb22>
 814ca0f:	b8 01 00 00 00       	mov    $0x1,%eax
 814ca14:	eb 05                	jmp    814ca1b <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xb27>
 814ca16:	b8 00 00 00 00       	mov    $0x0,%eax
 814ca1b:	84 c0                	test   %al,%al
 814ca1d:	0f 85 63 02 00 00    	jne    814cc86 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xd92>
 814ca23:	8b 45 08             	mov    0x8(%ebp),%eax
 814ca26:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814ca2c:	89 04 24             	mov    %eax,(%esp)
 814ca2f:	e8 dc cd fa ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 814ca34:	88 85 d0 f4 ff ff    	mov    %al,-0xb30(%ebp)
 814ca3a:	8d 85 e0 f4 ff ff    	lea    -0xb20(%ebp),%eax
 814ca40:	89 04 24             	mov    %eax,(%esp)
 814ca43:	e8 be e0 ff ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 814ca48:	8b 85 40 f5 ff ff    	mov    -0xac0(%ebp),%eax
 814ca4e:	88 85 d1 f4 ff ff    	mov    %al,-0xb2f(%ebp)
 814ca54:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814ca57:	83 c0 04             	add    $0x4,%eax
 814ca5a:	89 85 cc f4 ff ff    	mov    %eax,-0xb34(%ebp)
 814ca60:	e8 36 f7 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814ca65:	89 04 24             	mov    %eax,(%esp)
 814ca68:	e8 7d dc ff ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 814ca6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ca74:	00 
 814ca75:	89 04 24             	mov    %eax,(%esp)
 814ca78:	e8 53 dd ff ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 814ca7d:	8b 10                	mov    (%eax),%edx
 814ca7f:	83 c2 0c             	add    $0xc,%edx
 814ca82:	8b 0a                	mov    (%edx),%ecx
 814ca84:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 814ca8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 814ca8e:	8d 95 98 f4 ff ff    	lea    -0xb68(%ebp),%edx
 814ca94:	89 54 24 04          	mov    %edx,0x4(%esp)
 814ca98:	89 04 24             	mov    %eax,(%esp)
 814ca9b:	ff d1                	call   *%ecx
 814ca9d:	e8 f9 f6 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814caa2:	89 04 24             	mov    %eax,(%esp)
 814caa5:	e8 40 dc ff ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 814caaa:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814cab1:	00 
 814cab2:	89 04 24             	mov    %eax,(%esp)
 814cab5:	e8 16 dd ff ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 814caba:	8b 10                	mov    (%eax),%edx
 814cabc:	83 c2 0c             	add    $0xc,%edx
 814cabf:	8b 0a                	mov    (%edx),%ecx
 814cac1:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 814cac7:	89 54 24 08          	mov    %edx,0x8(%esp)
 814cacb:	8d 95 50 f4 ff ff    	lea    -0xbb0(%ebp),%edx
 814cad1:	89 54 24 04          	mov    %edx,0x4(%esp)
 814cad5:	89 04 24             	mov    %eax,(%esp)
 814cad8:	ff d1                	call   *%ecx
 814cada:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 814cae0:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 814cae6:	89 54 24 04          	mov    %edx,0x4(%esp)
 814caea:	89 04 24             	mov    %eax,(%esp)
 814caed:	e8 12 e2 ff ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 814caf2:	83 ec 04             	sub    $0x4,%esp
 814caf5:	8d 85 10 f5 ff ff    	lea    -0xaf0(%ebp),%eax
 814cafb:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 814cb01:	89 54 24 04          	mov    %edx,0x4(%esp)
 814cb05:	89 04 24             	mov    %eax,(%esp)
 814cb08:	e8 dd 5d 00 00       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 814cb0d:	83 ec 04             	sub    $0x4,%esp
 814cb10:	e9 1b 01 00 00       	jmp    814cc30 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xd3c>
 814cb15:	8d 85 fc f3 ff ff    	lea    -0xc04(%ebp),%eax
 814cb1b:	89 04 24             	mov    %eax,(%esp)
 814cb1e:	e8 a9 47 00 00       	call   81512cc <_ZN8map_itemC1Ev>
 814cb23:	c6 85 fc f3 ff ff 01 	movb   $0x1,-0xc04(%ebp)
 814cb2a:	8b 45 08             	mov    0x8(%ebp),%eax
 814cb2d:	8b 80 34 0a 00 00    	mov    0xa34(%eax),%eax
 814cb33:	89 85 00 f4 ff ff    	mov    %eax,-0xc00(%ebp)
 814cb39:	8d 50 01             	lea    0x1(%eax),%edx
 814cb3c:	8b 45 08             	mov    0x8(%ebp),%eax
 814cb3f:	89 90 34 0a 00 00    	mov    %edx,0xa34(%eax)
 814cb45:	8b 85 48 f5 ff ff    	mov    -0xab8(%ebp),%eax
 814cb4b:	88 85 fd f3 ff ff    	mov    %al,-0xc03(%ebp)
 814cb51:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 814cb57:	89 04 24             	mov    %eax,(%esp)
 814cb5a:	e8 c9 e1 ff ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 814cb5f:	8b 10                	mov    (%eax),%edx
 814cb61:	89 95 0c f4 ff ff    	mov    %edx,-0xbf4(%ebp)
 814cb67:	8b 50 04             	mov    0x4(%eax),%edx
 814cb6a:	89 95 10 f4 ff ff    	mov    %edx,-0xbf0(%ebp)
 814cb70:	8b 50 08             	mov    0x8(%eax),%edx
 814cb73:	89 95 14 f4 ff ff    	mov    %edx,-0xbec(%ebp)
 814cb79:	8b 50 0c             	mov    0xc(%eax),%edx
 814cb7c:	89 95 18 f4 ff ff    	mov    %edx,-0xbe8(%ebp)
 814cb82:	8b 50 10             	mov    0x10(%eax),%edx
 814cb85:	89 95 1c f4 ff ff    	mov    %edx,-0xbe4(%ebp)
 814cb8b:	8b 50 14             	mov    0x14(%eax),%edx
 814cb8e:	89 95 20 f4 ff ff    	mov    %edx,-0xbe0(%ebp)
 814cb94:	8b 50 18             	mov    0x18(%eax),%edx
 814cb97:	89 95 24 f4 ff ff    	mov    %edx,-0xbdc(%ebp)
 814cb9d:	8b 50 1c             	mov    0x1c(%eax),%edx
 814cba0:	89 95 28 f4 ff ff    	mov    %edx,-0xbd8(%ebp)
 814cba6:	8b 50 20             	mov    0x20(%eax),%edx
 814cba9:	89 95 2c f4 ff ff    	mov    %edx,-0xbd4(%ebp)
 814cbaf:	8b 50 24             	mov    0x24(%eax),%edx
 814cbb2:	89 95 30 f4 ff ff    	mov    %edx,-0xbd0(%ebp)
 814cbb8:	8b 50 28             	mov    0x28(%eax),%edx
 814cbbb:	89 95 34 f4 ff ff    	mov    %edx,-0xbcc(%ebp)
 814cbc1:	8b 50 2c             	mov    0x2c(%eax),%edx
 814cbc4:	89 95 38 f4 ff ff    	mov    %edx,-0xbc8(%ebp)
 814cbca:	8b 50 30             	mov    0x30(%eax),%edx
 814cbcd:	89 95 3c f4 ff ff    	mov    %edx,-0xbc4(%ebp)
 814cbd3:	8b 50 34             	mov    0x34(%eax),%edx
 814cbd6:	89 95 40 f4 ff ff    	mov    %edx,-0xbc0(%ebp)
 814cbdc:	8b 50 38             	mov    0x38(%eax),%edx
 814cbdf:	89 95 44 f4 ff ff    	mov    %edx,-0xbbc(%ebp)
 814cbe5:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 814cbe9:	88 85 48 f4 ff ff    	mov    %al,-0xbb8(%ebp)
 814cbef:	8b 45 08             	mov    0x8(%ebp),%eax
 814cbf2:	05 f4 09 00 00       	add    $0x9f4,%eax
 814cbf7:	89 85 a4 f0 ff ff    	mov    %eax,-0xf5c(%ebp)
 814cbfd:	8d 54 24 04          	lea    0x4(%esp),%edx
 814cc01:	8d 9d fc f3 ff ff    	lea    -0xc04(%ebp),%ebx
 814cc07:	b8 15 00 00 00       	mov    $0x15,%eax
 814cc0c:	89 d7                	mov    %edx,%edi
 814cc0e:	89 de                	mov    %ebx,%esi
 814cc10:	89 c1                	mov    %eax,%ecx
 814cc12:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 814cc14:	8b 85 a4 f0 ff ff    	mov    -0xf5c(%ebp),%eax
 814cc1a:	89 04 24             	mov    %eax,(%esp)
 814cc1d:	e8 be 4b 00 00       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 814cc22:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 814cc28:	89 04 24             	mov    %eax,(%esp)
 814cc2b:	e8 0c 5d 00 00       	call   815293c <_ZN9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 814cc30:	8d 85 10 f5 ff ff    	lea    -0xaf0(%ebp),%eax
 814cc36:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cc3a:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 814cc40:	89 04 24             	mov    %eax,(%esp)
 814cc43:	e8 c8 5c 00 00       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 814cc48:	84 c0                	test   %al,%al
 814cc4a:	0f 85 c5 fe ff ff    	jne    814cb15 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xc21>
 814cc50:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 814cc56:	89 04 24             	mov    %eax,(%esp)
 814cc59:	e8 f4 5c 00 00       	call   8152952 <_ZNSt14_List_iteratorI8_mapItemEppEv>
 814cc5e:	8d 85 e0 f4 ff ff    	lea    -0xb20(%ebp),%eax
 814cc64:	89 04 24             	mov    %eax,(%esp)
 814cc67:	e8 e0 de ff ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 814cc6c:	eb 19                	jmp    814cc87 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xd93>
 814cc6e:	89 d3                	mov    %edx,%ebx
 814cc70:	89 c6                	mov    %eax,%esi
 814cc72:	8d 85 e0 f4 ff ff    	lea    -0xb20(%ebp),%eax
 814cc78:	89 04 24             	mov    %eax,(%esp)
 814cc7b:	e8 cc de ff ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 814cc80:	89 f0                	mov    %esi,%eax
 814cc82:	89 da                	mov    %ebx,%edx
 814cc84:	eb 4b                	jmp    814ccd1 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xddd>
 814cc86:	90                   	nop
 814cc87:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814cc8a:	8d 95 34 f5 ff ff    	lea    -0xacc(%ebp),%edx
 814cc90:	89 54 24 04          	mov    %edx,0x4(%esp)
 814cc94:	89 04 24             	mov    %eax,(%esp)
 814cc97:	e8 dc 5b 00 00       	call   8152878 <_ZNSt4listI8_mapItemSaIS0_EE3endEv>
 814cc9c:	83 ec 04             	sub    $0x4,%esp
 814cc9f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814cca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 814cca6:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 814ccac:	89 04 24             	mov    %eax,(%esp)
 814ccaf:	e8 e8 5b 00 00       	call   815289c <_ZNKSt14_List_iteratorI8_mapItemEneERKS1_>
 814ccb4:	84 c0                	test   %al,%al
 814ccb6:	0f 85 c6 fc ff ff    	jne    814c982 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xa8e>
 814ccbc:	bb 01 00 00 00       	mov    $0x1,%ebx
 814ccc1:	8d 85 34 f5 ff ff    	lea    -0xacc(%ebp),%eax
 814ccc7:	89 04 24             	mov    %eax,(%esp)
 814ccca:	e8 e3 3b 00 00       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 814cccf:	eb 30                	jmp    814cd01 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe0d>
 814ccd1:	89 d3                	mov    %edx,%ebx
 814ccd3:	89 c6                	mov    %eax,%esi
 814ccd5:	8d 85 34 f5 ff ff    	lea    -0xacc(%ebp),%eax
 814ccdb:	89 04 24             	mov    %eax,(%esp)
 814ccde:	e8 cf 3b 00 00       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 814cce3:	89 f0                	mov    %esi,%eax
 814cce5:	89 da                	mov    %ebx,%edx
 814cce7:	eb 00                	jmp    814cce9 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xdf5>
 814cce9:	89 d3                	mov    %edx,%ebx
 814cceb:	89 c6                	mov    %eax,%esi
 814cced:	8d 85 50 f4 ff ff    	lea    -0xbb0(%ebp),%eax
 814ccf3:	89 04 24             	mov    %eax,(%esp)
 814ccf6:	e8 f5 dd ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814ccfb:	89 f0                	mov    %esi,%eax
 814ccfd:	89 da                	mov    %ebx,%edx
 814ccff:	eb 10                	jmp    814cd11 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe1d>
 814cd01:	8d 85 50 f4 ff ff    	lea    -0xbb0(%ebp),%eax
 814cd07:	89 04 24             	mov    %eax,(%esp)
 814cd0a:	e8 e1 dd ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814cd0f:	eb 18                	jmp    814cd29 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe35>
 814cd11:	89 d3                	mov    %edx,%ebx
 814cd13:	89 c6                	mov    %eax,%esi
 814cd15:	8d 85 98 f4 ff ff    	lea    -0xb68(%ebp),%eax
 814cd1b:	89 04 24             	mov    %eax,(%esp)
 814cd1e:	e8 cd dd ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814cd23:	89 f0                	mov    %esi,%eax
 814cd25:	89 da                	mov    %ebx,%edx
 814cd27:	eb 10                	jmp    814cd39 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe45>
 814cd29:	8d 85 98 f4 ff ff    	lea    -0xb68(%ebp),%eax
 814cd2f:	89 04 24             	mov    %eax,(%esp)
 814cd32:	e8 b9 dd ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814cd37:	eb 18                	jmp    814cd51 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe5d>
 814cd39:	89 d3                	mov    %edx,%ebx
 814cd3b:	89 c6                	mov    %eax,%esi
 814cd3d:	8d 85 50 f5 ff ff    	lea    -0xab0(%ebp),%eax
 814cd43:	89 04 24             	mov    %eax,(%esp)
 814cd46:	e8 37 7a fe ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 814cd4b:	89 f0                	mov    %esi,%eax
 814cd4d:	89 da                	mov    %ebx,%edx
 814cd4f:	eb 10                	jmp    814cd61 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe6d>
 814cd51:	8d 85 50 f5 ff ff    	lea    -0xab0(%ebp),%eax
 814cd57:	89 04 24             	mov    %eax,(%esp)
 814cd5a:	e8 23 7a fe ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 814cd5f:	eb 18                	jmp    814cd79 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe85>
 814cd61:	89 d3                	mov    %edx,%ebx
 814cd63:	89 c6                	mov    %eax,%esi
 814cd65:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 814cd6b:	89 04 24             	mov    %eax,(%esp)
 814cd6e:	e8 67 70 f3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 814cd73:	89 f0                	mov    %esi,%eax
 814cd75:	89 da                	mov    %ebx,%edx
 814cd77:	eb 10                	jmp    814cd89 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xe95>
 814cd79:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 814cd7f:	89 04 24             	mov    %eax,(%esp)
 814cd82:	e8 53 70 f3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 814cd87:	eb 18                	jmp    814cda1 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xead>
 814cd89:	89 d3                	mov    %edx,%ebx
 814cd8b:	89 c6                	mov    %eax,%esi
 814cd8d:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814cd93:	89 04 24             	mov    %eax,(%esp)
 814cd96:	e8 13 48 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814cd9b:	89 f0                	mov    %esi,%eax
 814cd9d:	89 da                	mov    %ebx,%edx
 814cd9f:	eb 10                	jmp    814cdb1 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xebd>
 814cda1:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 814cda7:	89 04 24             	mov    %eax,(%esp)
 814cdaa:	e8 ff 47 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 814cdaf:	eb 18                	jmp    814cdc9 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xed5>
 814cdb1:	89 d3                	mov    %edx,%ebx
 814cdb3:	89 c6                	mov    %eax,%esi
 814cdb5:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 814cdbb:	89 04 24             	mov    %eax,(%esp)
 814cdbe:	e8 03 9d f7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 814cdc3:	89 f0                	mov    %esi,%eax
 814cdc5:	89 da                	mov    %ebx,%edx
 814cdc7:	eb 10                	jmp    814cdd9 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xee5>
 814cdc9:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 814cdcf:	89 04 24             	mov    %eax,(%esp)
 814cdd2:	e8 ef 9c f7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 814cdd7:	eb 1e                	jmp    814cdf7 <_ZN8WongWork10CBossStage10consistMapEPK4CMap+0xf03>
 814cdd9:	89 d3                	mov    %edx,%ebx
 814cddb:	89 c6                	mov    %eax,%esi
 814cddd:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 814cde3:	89 04 24             	mov    %eax,(%esp)
 814cde6:	e8 a7 56 f9 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 814cdeb:	89 f0                	mov    %esi,%eax
 814cded:	89 da                	mov    %ebx,%edx
 814cdef:	89 04 24             	mov    %eax,(%esp)
 814cdf2:	e8 59 69 99 00       	call   8ae3750 <_Unwind_Resume>
 814cdf7:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 814cdfd:	89 04 24             	mov    %eax,(%esp)
 814ce00:	e8 8d 56 f9 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 814ce05:	89 d8                	mov    %ebx,%eax
 814ce07:	8d 65 f4             	lea    -0xc(%ebp),%esp
 814ce0a:	83 c4 00             	add    $0x0,%esp
 814ce0d:	5b                   	pop    %ebx
 814ce0e:	5e                   	pop    %esi
 814ce0f:	5f                   	pop    %edi
 814ce10:	5d                   	pop    %ebp
 814ce11:	c3                   	ret

```

```c
// WongWork::CBossStage::consistMap @ 0x814bef4

/* WARNING: Type propagation algorithm not settling */
/* WongWork::CBossStage::consistMap(CMap const*) */

undefined4 __thiscall WongWork::CBossStage::consistMap(CBossStage *this,CMap *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  map *pmVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int local_fd4 [2];
  int aiStack_fc0 [27];
  int local_f54;
  int local_f50;
  char local_f4c;
  uint local_f48;
  byte local_f44;
  undefined1 local_f43;
  undefined1 local_f42;
  undefined1 local_f41;
  undefined1 local_f40;
  uint local_f28;
  undefined4 local_c08;
  int local_c04;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4 [52];
  undefined4 local_b80;
  undefined1 local_b6c [52];
  int *local_b38;
  undefined1 local_b34;
  undefined1 local_b33;
  undefined1 local_b24 [48];
  undefined1 local_af4 [4];
  undefined1 local_af0 [4];
  undefined1 local_aec [4];
  undefined1 local_ae8 [4];
  undefined1 local_ae4 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_ae0 [4];
  __normal_iterator local_adc [4];
  __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
  local_ad8 [4];
  undefined1 local_ad4 [4];
  undefined1 local_ad0 [8];
  int local_ac8;
  int local_ac4;
  int local_ac0;
  int local_abc;
  undefined1 local_ab8 [4];
  undefined1 local_ab4 [8];
  undefined1 local_aac [12];
  int local_aa0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a9c [24];
  vector<unsigned_int,std::allocator<unsigned_int>> local_a84 [12];
  uint local_a78;
  undefined4 local_a74;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a70 [4];
  int local_a6c [2];
  map_monster local_a64 [844];
  undefined1 local_718 [4];
  undefined1 local_714 [4];
  undefined4 local_710;
  int local_70c;
  undefined4 local_708;
  undefined1 local_704 [4];
  undefined1 local_700 [4];
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4 [4];
  int local_6f0 [2];
  undefined1 local_6e8 [844];
  undefined1 local_39c [4];
  undefined1 local_398 [4];
  undefined1 local_394 [4];
  undefined1 local_390 [844];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  CAICharacter *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  
  bVar14 = 0;
  piVar12 = (int *)&stack0xfffff034;
  uVar4 = CMap::get_index(param_1);
  *(undefined4 *)(this + 0x9f8) = uVar4;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_a84);
                    /* try { // try from 0814bf2b to 0814bf2f has its CatchHandler @ 0814cdd9 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_a9c);
                    /* try { // try from 0814bf30 to 0814bf69 has its CatchHandler @ 0814cdb1 */
  iVar5 = G_CDataManager();
  pmVar6 = (map *)CAICharacterList::getAPCount(*(CAICharacterList **)(iVar5 + 0x869c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
            (local_a9c,pmVar6);
  local_40 = 0;
  map_monster::map_monster((map_monster *)&local_f54);
  local_3c = CMap::getAICharacters(param_1);
                    /* try { // try from 0814bf7e to 0814c1a1 has its CatchHandler @ 0814cd89 */
  cVar2 = std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
          empty();
  if (cVar2 != '\x01') {
    local_40 = 0;
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::begin();
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::end();
    while (bVar3 = __gnu_cxx::operator!=(local_ad8,local_adc), bVar3) {
      local_34 = (uint *)__gnu_cxx::
                         __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                         ::operator*(local_ad8);
      uVar10 = *local_34;
      iVar5 = G_CDataManager();
      local_30 = (CAICharacter *)
                 CAICharacterList::get(*(CAICharacterList **)(iVar5 + 0x869c),uVar10);
      if (local_30 == (CAICharacter *)0x0) {
        uVar4 = 0;
        goto LAB_0814cda1;
      }
      local_a78 = CAICharacter::getIdx(local_30);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_a84,&local_a78);
      iVar5 = CAICharacter::getAppearancePoint(local_30);
      if (iVar5 != 0) {
        local_a74 = CAICharacter::getAppearancePoint(local_30);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_ae0);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_a70);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_ae0,(_Rb_tree_iterator *)local_a70);
        if (cVar2 != '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          local_a6c[0] = *(int *)(iVar7 + 4) + -1;
          local_a6c[1] = 0;
          piVar8 = std::max<int>(local_a6c + 1,local_a6c);
          *(int *)(iVar5 + 4) = *piVar8;
        }
      }
      memset(&local_f54,0,0x34c);
      local_f54 = local_40;
      local_f48 = *local_34;
      local_f50 = *(int *)(this + 0xa30);
      *(int *)(this + 0xa30) = local_f50 + 1;
      local_f4c = '\x05';
      local_f44 = CAICharacter::getLevel(local_30);
      local_f28 = local_34[4];
      local_f43 = 0;
      local_f42 = 0;
      map_monster::map_monster(local_a64,(map_monster *)&local_f54);
                    /* try { // try from 0814c1b8 to 0814c1bc has its CatchHandler @ 0814c1bf */
      MapInfo::Add_Mob();
                    /* try { // try from 0814c1e3 to 0814c597 has its CatchHandler @ 0814cd89 */
      map_monster::~map_monster(local_a64);
      local_40 = local_40 + 1;
      __gnu_cxx::
      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
      ::operator++(local_ad8);
    }
  }
  local_aa0 = CMap::getAPCRandomPoint(param_1);
  piVar8 = (int *)&stack0xfffff034;
  if (local_aa0 != 0) {
    local_40 = 0x40;
    piVar12 = (int *)&stack0xfffff034;
    do {
      while( true ) {
        piVar12[-1] = 0x814c5ea;
        iVar5 = G_CDataManager();
        *piVar12 = *(undefined4 *)(iVar5 + 0x869c);
        piVar12[-1] = 0x814c5f8;
        iVar5 = CAICharacterList::getMinAP((CAICharacterList *)*piVar12);
        piVar8 = piVar12;
        if (local_aa0 < iVar5) goto LAB_0814c60b;
        *piVar12 = local_aa0;
        piVar12[-1] = 0x814c253;
        iVar5 = get_rand_int(*piVar12);
        piVar12[-1] = 0x814c25d;
        iVar7 = G_CDataManager();
        uVar4 = *(undefined4 *)(iVar7 + 0x869c);
        piVar12[1] = iVar5 + 1;
        *piVar12 = uVar4;
        piVar12[-1] = 0x814c26f;
        local_2c = CAICharacterList::getByAP((CAICharacterList *)*piVar12,piVar12[1]);
        if (local_2c == 0) {
          uVar4 = 0;
          goto LAB_0814cda1;
        }
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)local_718;
        piVar12[-1] = 0x814c29a;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        *piVar12 = local_2c;
        piVar12[-1] = 0x814c2a8;
        local_710 = CAICharacter::getIdx((CAICharacter *)*piVar12);
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_70c;
        piVar12[-1] = 0x814c2c6;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_708;
        piVar12[-1] = 0x814c2e1;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
        piVar12[3] = (int)&local_710;
        piVar12[2] = local_70c;
        piVar12[1] = local_708;
        *piVar12 = (int)local_714;
        piVar12[-1] = 0x814c310;
        std::
        find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                  ();
        piVar11 = piVar12 + -1;
        *piVar12 = (int)local_718;
        piVar12[-1] = (int)local_714;
        piVar12[-2] = 0x814c32b;
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)piVar12[-1],(__normal_iterator *)*piVar12);
        if (bVar3) break;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c404;
        local_6fc = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        *piVar12 = (int)&local_6fc;
        piVar12[-1] = (int)local_a84;
        piVar12[-2] = 0x814c422;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)piVar12[-1],(uint *)*piVar12
                  );
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c42d;
        local_6f8 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        piVar12[1] = (int)&local_6f8;
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x814c455;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)piVar12[-1]);
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_6f4;
        piVar12[-2] = 0x814c470;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                   piVar12[-1]);
        *piVar12 = (int)local_6f4;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x814c48b;
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_iterator *)*piVar12);
        if (cVar2 != '\0') {
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x814c49d;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x814c4ad;
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          local_6f0[0] = *(int *)(iVar7 + 4) + -1;
          local_6f0[1] = 0;
          *piVar12 = (int)local_6f0;
          piVar12[-1] = (int)(local_6f0 + 1);
          piVar12[-2] = 0x814c4db;
          piVar8 = std::max<int>((int *)piVar12[-1],(int *)*piVar12);
          *(int *)(iVar5 + 4) = *piVar8;
        }
        iVar5 = local_aa0;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c4f1;
        iVar7 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        local_aa0 = iVar5 - iVar7;
        piVar12[1] = 0x34c;
        *piVar12 = 0;
        piVar12[-1] = (int)&local_f54;
        piVar12[-2] = 0x814c51b;
        memset((void *)piVar12[-1],*piVar12,piVar12[1]);
        local_f54 = local_40;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c52f;
        local_f48 = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        local_f50 = *(int *)(this + 0xa30);
        *(int *)(this + 0xa30) = *(int *)(this + 0xa30) + 1;
        local_f4c = '\x05';
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x814c562;
        local_f44 = CAICharacter::getLevel((CAICharacter *)piVar12[-1]);
        local_f28 = 100;
        local_f43 = 0;
        local_f42 = 0;
        *piVar12 = (int)&local_f54;
        piVar12[-1] = (int)local_6e8;
        piVar12[-2] = 0x814c598;
        map_monster::map_monster((map_monster *)piVar12[-1],(map_monster *)*piVar12);
        *piVar12 = (int)local_6e8;
        piVar12[-1] = (int)(this + 0x9f4);
                    /* try { // try from 0814c5ae to 0814c5b2 has its CatchHandler @ 0814c5b5 */
        piVar12[-2] = 0x814c5b3;
        MapInfo::Add_Mob();
        piVar12[-1] = (int)local_6e8;
                    /* try { // try from 0814c5d9 to 0814c64e has its CatchHandler @ 0814cd89 */
        piVar12[-2] = 0x814c5de;
        map_monster::~map_monster((map_monster *)piVar12[-1]);
        local_40 = local_40 + 1;
        piVar12 = piVar12 + -1;
      }
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_704;
      piVar12[-2] = 0x814c34b;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                );
      *piVar12 = (int)local_704;
      piVar12[-1] = (int)local_ae8;
      piVar12[-2] = 0x814c366;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      piVar12[1] = (int)&local_aa0;
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_700;
      piVar12[-2] = 0x814c388;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                 ,(int *)*piVar12);
      *piVar12 = (int)local_700;
      piVar12[-1] = (int)local_aec;
      piVar12[-2] = 0x814c3a3;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      local_28 = 0;
      while( true ) {
        *piVar12 = (int)local_aec;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x814c3e6;
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_const_iterator *)*piVar12);
        if (cVar2 == '\0') break;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x814c3ba;
        iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
        local_28 = local_28 + *(int *)(iVar5 + 4);
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x814c3ce;
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
      }
      piVar12 = piVar12 + -1;
      piVar8 = piVar11;
    } while (local_28 != 0);
  }
LAB_0814c60b:
  piVar12 = piVar8;
  *piVar12 = 0;
  piVar12[-1] = 0x814c617;
  uVar4 = get_rand_int(*piVar12);
  *(undefined4 *)(this + 0xa3c) = uVar4;
  *(uint *)(this + 0xa3c) = *(uint *)(this + 0xa3c) & 0xfffbffff;
  local_40 = 0;
  *piVar12 = (int)local_aac;
  piVar12[-1] = 0x814c64f;
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)*piVar12);
  piVar12[1] = (int)param_1;
  *piVar12 = (int)local_ab4;
                    /* try { // try from 0814c65f to 0814c663 has its CatchHandler @ 0814cd61 */
  piVar12[-1] = 0x814c664;
  CMap::get_monster_list();
  piVar12[1] = (int)local_ab4;
  *piVar12 = (int)local_39c;
                    /* try { // try from 0814c67a to 0814c849 has its CatchHandler @ 0814cd39 */
  piVar12[-1] = 0x814c67f;
  std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
  piVar12[1] = (int)local_39c;
  *piVar12 = (int)local_ab8;
  piVar12[-1] = 0x814c69a;
  std::_List_const_iterator<_mapMonster>::_List_const_iterator
            ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
  while( true ) {
    piVar12[1] = (int)local_ab4;
    *piVar12 = (int)local_394;
    piVar12[-1] = 0x814c8ba;
    std::list<_mapMonster,std::allocator<_mapMonster>>::end();
    piVar12[1] = (int)local_394;
    *piVar12 = (int)local_398;
    piVar12[-1] = 0x814c8d5;
    std::_List_const_iterator<_mapMonster>::_List_const_iterator
              ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
    piVar12[1] = (int)local_398;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x814c8ed;
    cVar2 = std::_List_const_iterator<_mapMonster>::operator!=
                      ((_List_const_iterator<_mapMonster> *)*piVar12,
                       (_List_const_iterator *)piVar12[1]);
    if (cVar2 == '\0') break;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x814c6ad;
    local_24 = (uint *)std::_List_const_iterator<_mapMonster>::operator*
                                 ((_List_const_iterator<_mapMonster> *)*piVar12);
    piVar12[2] = 0x34c;
    piVar12[1] = 0;
    *piVar12 = (int)&local_f54;
    piVar12[-1] = 0x814c6ce;
    memset((void *)*piVar12,piVar12[1],piVar12[2]);
    local_f54 = local_40;
    if ((char)local_24[1] == '\0') {
      local_f44 = (byte)local_24[2];
    }
    else {
      *piVar12 = *(undefined4 *)(this + 0x9f0);
      piVar12[-1] = 0x814c6f3;
      cVar2 = CDungeon::get_standard_level((CDungeon *)*piVar12);
      local_f44 = cVar2 + (char)local_24[2];
      if ((local_f44 < 99) && (local_f44 == 0)) {
        local_f44 = 1;
      }
      else if (99 < local_f44) {
        local_f44 = 99;
      }
    }
    if (*local_24 == 0xffffffff) {
      uVar10 = (uint)local_f44;
      piVar12[-1] = 0x814c761;
      iVar5 = G_CDataManager();
      uVar4 = *(undefined4 *)(iVar5 + 8);
      piVar12[1] = uVar10;
      *piVar12 = uVar4;
      piVar12[-1] = 0x814c770;
      local_f48 = CMonsterManager::get_levelrandom_mob(*piVar12);
    }
    else {
      local_f48 = *local_24;
    }
    local_f43 = (char)local_24[4];
    local_f42 = (char)local_24[5];
    uVar10 = local_24[6];
    local_f4c = (char)uVar10;
    local_f50 = *(int *)(this + 0xa30);
    *(int *)(this + 0xa30) = *(int *)(this + 0xa30) + 1;
    if ((char)uVar10 == '\0') {
      *piVar12 = (int)&local_f54;
      piVar12[-1] = 0x814c7db;
      cVar2 = map_monster::isNamedMonster((map_monster *)*piVar12);
      if (cVar2 == '\x01') goto LAB_0814c7e9;
      bVar3 = true;
    }
    else {
LAB_0814c7e9:
      bVar3 = false;
    }
    if (bVar3) {
      piVar12[1] = (int)&local_f50;
      *piVar12 = (int)local_aac;
      piVar12[-1] = 0x814c80d;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)*piVar12,(int *)piVar12[1]);
    }
    local_f41 = (char)local_24[7];
    local_f40 = (char)local_24[8];
    local_f28 = local_24[10];
    piVar12[1] = (int)&local_f54;
    *piVar12 = (int)local_390;
    piVar12[-1] = 0x814c84a;
    map_monster::map_monster((map_monster *)*piVar12,(map_monster *)piVar12[1]);
    piVar12[1] = (int)local_390;
    *piVar12 = (int)(this + 0x9f4);
                    /* try { // try from 0814c860 to 0814c864 has its CatchHandler @ 0814c867 */
    piVar12[-1] = 0x814c865;
    MapInfo::Add_Mob();
    *piVar12 = (int)local_390;
                    /* try { // try from 0814c88b to 0814c924 has its CatchHandler @ 0814cd39 */
    piVar12[-1] = 0x814c890;
    map_monster::~map_monster((map_monster *)*piVar12);
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x814c89e;
    std::_List_const_iterator<_mapMonster>::operator++
              ((_List_const_iterator<_mapMonster> *)*piVar12);
    local_40 = local_40 + 1;
  }
  *piVar12 = (int)&local_ac8;
  piVar12[-1] = 0x814c903;
  _mapItem::_mapItem((_mapItem *)*piVar12);
  *piVar12 = *(undefined4 *)(this + 0x9f0);
  piVar12[-1] = 0x814c914;
  local_38 = CDungeon::getSpecialPassiveObjectItems((CDungeon *)*piVar12);
  *piVar12 = (int)local_b6c;
  piVar12[-1] = 0x814c925;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = (int)local_bb4;
                    /* try { // try from 0814c92e to 0814c932 has its CatchHandler @ 0814cd11 */
  piVar12[-1] = 0x814c933;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = *(undefined4 *)(this + 0x9f0);
  piVar12[-1] = 0x814c944;
  local_b80 = CDungeon::getObjectDropItems((CDungeon *)*piVar12);
  piVar12[1] = (int)param_1;
  *piVar12 = (int)local_ad0;
                    /* try { // try from 0814c95a to 0814c95e has its CatchHandler @ 0814cce9 */
  piVar12[-1] = 0x814c95f;
  CMap::get_item_list();
  piVar12[1] = (int)local_ad0;
  *piVar12 = (int)local_ad4;
                    /* try { // try from 0814c975 to 0814ca47 has its CatchHandler @ 0814ccd1 */
  piVar12[-1] = 0x814c97a;
  std::list<_mapItem,std::allocator<_mapItem>>::begin();
  do {
    piVar12[1] = (int)local_ad0;
    *piVar12 = (int)local_44;
                    /* try { // try from 0814cc97 to 0814cc9b has its CatchHandler @ 0814ccd1 */
    piVar12[-1] = 0x814cc9c;
    std::list<_mapItem,std::allocator<_mapItem>>::end();
    piVar12[1] = (int)local_44;
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x814ccb4;
    cVar2 = std::_List_iterator<_mapItem>::operator!=
                      ((_List_iterator<_mapItem> *)*piVar12,(_List_iterator *)piVar12[1]);
    if (cVar2 == '\0') {
      uVar4 = 1;
      *piVar12 = (int)local_ad0;
                    /* try { // try from 0814ccca to 0814ccce has its CatchHandler @ 0814cce9 */
      piVar12[-1] = 0x814cccf;
      std::list<_mapItem,std::allocator<_mapItem>>::~list
                ((list<_mapItem,std::allocator<_mapItem>> *)*piVar12);
      *piVar12 = (int)local_bb4;
                    /* try { // try from 0814cd0a to 0814cd0e has its CatchHandler @ 0814cd11 */
      piVar12[-1] = 0x814cd0f;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_b6c;
                    /* try { // try from 0814cd32 to 0814cd36 has its CatchHandler @ 0814cd39 */
      piVar12[-1] = 0x814cd37;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_ab4;
                    /* try { // try from 0814cd5a to 0814cd5e has its CatchHandler @ 0814cd61 */
      piVar12[-1] = 0x814cd5f;
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                ((list<_mapMonster,std::allocator<_mapMonster>> *)*piVar12);
      *piVar12 = (int)local_aac;
                    /* try { // try from 0814cd82 to 0814cd86 has its CatchHandler @ 0814cd89 */
      piVar12[-1] = 0x814cd87;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)*piVar12);
LAB_0814cda1:
      *piVar12 = (int)&local_f54;
                    /* try { // try from 0814cdaa to 0814cdae has its CatchHandler @ 0814cdb1 */
      piVar12[-1] = 0x814cdaf;
      map_monster::~map_monster((map_monster *)*piVar12);
      *piVar12 = (int)local_a9c;
                    /* try { // try from 0814cdd2 to 0814cdd6 has its CatchHandler @ 0814cdd9 */
      piVar12[-1] = 0x814cdd7;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)*piVar12);
      *piVar12 = (int)local_a84;
      piVar12[-1] = 0x814ce05;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)*piVar12);
      return uVar4;
    }
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x814c990;
    piVar8 = (int *)std::_List_iterator<_mapItem>::operator*((_List_iterator<_mapItem> *)*piVar12);
    local_ac8 = *piVar8;
    local_ac4 = piVar8[1];
    local_ac0 = piVar8[2];
    local_abc = piVar8[3];
    piVar12[1] = *piVar8;
    *piVar12 = local_38;
    piVar12[-1] = 0x814c9c8;
    local_20 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::at
                                ((vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>
                                  *)*piVar12,piVar12[1]);
    if (*local_20 != -1) {
      local_b34 = (char)*local_20;
      goto LAB_0814ca3a;
    }
    *piVar12 = *(undefined4 *)(this + 0x9f0);
    piVar12[-1] = 0x814c9f3;
    iVar5 = CDungeon::get_standard_level((CDungeon *)*piVar12);
    if (iVar5 < 1) {
LAB_0814ca0f:
      bVar3 = true;
    }
    else {
      *piVar12 = *(undefined4 *)(this + 0x9f0);
      piVar12[-1] = 0x814ca08;
      iVar5 = CDungeon::get_standard_level((CDungeon *)*piVar12);
      if (200 < iVar5) goto LAB_0814ca0f;
      bVar3 = false;
    }
    if (!bVar3) {
      *piVar12 = *(undefined4 *)(this + 0x9f0);
      piVar12[-1] = 0x814ca34;
      local_b34 = CDungeon::get_standard_level((CDungeon *)*piVar12);
LAB_0814ca3a:
      *piVar12 = (int)local_b24;
      piVar12[-1] = 0x814ca48;
      stGenerateResult_t::stGenerateResult_t((stGenerateResult_t *)*piVar12);
      local_b33 = (undefined1)local_ac4;
      local_b38 = local_20 + 1;
                    /* try { // try from 0814ca60 to 0814cc47 has its CatchHandler @ 0814cc6e */
      piVar12[-1] = 0x814ca65;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x814ca6d;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 1;
      *piVar12 = uVar4;
      piVar12[-1] = 0x814ca7d;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_b6c;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x814ca9d;
      (*pcVar1)();
      piVar12[-1] = 0x814caa2;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x814caaa;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 4;
      *piVar12 = uVar4;
      piVar12[-1] = 0x814caba;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_bb4;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x814cada;
      (*pcVar1)();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af0;
      piVar12[-1] = 0x814caf2;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af4;
      piVar12[-1] = 0x814cb0d;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      while( true ) {
        piVar12[1] = (int)local_af4;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x814cc48;
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar12,(__normal_iterator *)piVar12[1])
        ;
        if (!bVar3) break;
        *piVar12 = (int)&local_c08;
        piVar12[-1] = 0x814cb23;
        map_item::map_item((map_item *)*piVar12);
        local_c08._0_1_ = 1;
        local_c04 = *(int *)(this + 0xa34);
        *(int *)(this + 0xa34) = *(int *)(this + 0xa34) + 1;
        local_c08._1_1_ = (char)local_abc;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x814cb5f;
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                            *)*piVar12);
        local_bf8 = *puVar9;
        local_bf4 = puVar9[1];
        local_bf0 = puVar9[2];
        local_bec = puVar9[3];
        local_be8 = puVar9[4];
        local_be4 = puVar9[5];
        local_be0 = puVar9[6];
        local_bdc = puVar9[7];
        local_bd8 = puVar9[8];
        local_bd4 = puVar9[9];
        local_bd0 = puVar9[10];
        local_bcc = puVar9[0xb];
        local_bc8 = puVar9[0xc];
        local_bc4 = puVar9[0xd];
        local_bc0 = puVar9[0xe];
        local_bbc = *(undefined1 *)(puVar9 + 0xf);
        piVar8 = &local_c08;
        piVar13 = piVar12 + 1;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar13 = *piVar8;
          piVar8 = piVar8 + (uint)bVar14 * -2 + 1;
          piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
        }
        *piVar12 = (int)(this + 0x9f4);
        piVar12[-1] = 0x814cc22;
        MapInfo::Add_Item();
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x814cc30;
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                      *)*piVar12);
      }
      *piVar12 = (int)local_ad4;
      piVar12[-1] = 0x814cc5e;
      std::_List_iterator<_mapItem>::operator++((_List_iterator<_mapItem> *)*piVar12);
      *piVar12 = (int)local_b24;
                    /* try { // try from 0814cc67 to 0814cc6b has its CatchHandler @ 0814ccd1 */
      piVar12[-1] = 0x814cc6c;
      stGenerateResult_t::~stGenerateResult_t((stGenerateResult_t *)*piVar12);
    }
  } while( true );
}

```

---

## dropItem

```asm
// === 0814de1a WongWork::CBossStage::dropItem  [0x0814de1a-0x814e579] ===
 814de1a:	55                   	push   %ebp
 814de1b:	89 e5                	mov    %esp,%ebp
 814de1d:	53                   	push   %ebx
 814de1e:	81 ec d4 00 00 00    	sub    $0xd4,%esp
 814de24:	8b 45 10             	mov    0x10(%ebp),%eax
 814de27:	88 45 94             	mov    %al,-0x6c(%ebp)
 814de2a:	8d 45 a7             	lea    -0x59(%ebp),%eax
 814de2d:	89 04 24             	mov    %eax,(%esp)
 814de30:	e8 1f da f7 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 814de35:	0f be 45 94          	movsbl -0x6c(%ebp),%eax
 814de39:	83 f8 02             	cmp    $0x2,%eax
 814de3c:	0f 84 32 01 00 00    	je     814df74 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x15a>
 814de42:	83 f8 02             	cmp    $0x2,%eax
 814de45:	7f 09                	jg     814de50 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x36>
 814de47:	85 c0                	test   %eax,%eax
 814de49:	74 1c                	je     814de67 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x4d>
 814de4b:	e9 66 03 00 00       	jmp    814e1b6 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x39c>
 814de50:	83 f8 03             	cmp    $0x3,%eax
 814de53:	0f 84 d2 01 00 00    	je     814e02b <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x211>
 814de59:	83 f8 07             	cmp    $0x7,%eax
 814de5c:	0f 84 88 02 00 00    	je     814e0ea <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x2d0>
 814de62:	e9 4f 03 00 00       	jmp    814e1b6 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x39c>
 814de67:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 814de6b:	75 48                	jne    814deb5 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x9b>
 814de6d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814de70:	c6 00 00             	movb   $0x0,(%eax)
 814de73:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814de76:	c6 40 11 02          	movb   $0x2,0x11(%eax)
 814de7a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814de7d:	c7 40 12 00 00 00 00 	movl   $0x0,0x12(%eax)
 814de84:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814de87:	66 c7 40 1b 00 00    	movw   $0x0,0x1b(%eax)
 814de8d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814de90:	8d 50 10             	lea    0x10(%eax),%edx
 814de93:	8b 45 18             	mov    0x18(%ebp),%eax
 814de96:	89 44 24 04          	mov    %eax,0x4(%esp)
 814de9a:	89 14 24             	mov    %edx,(%esp)
 814de9d:	e8 e2 d9 f7 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 814dea2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814dea5:	83 c0 10             	add    $0x10,%eax
 814dea8:	89 04 24             	mov    %eax,(%esp)
 814deab:	e8 e2 d9 f7 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 814deb0:	e9 0c 03 00 00       	jmp    814e1c1 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x3a7>
 814deb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 814deb8:	89 04 24             	mov    %eax,(%esp)
 814debb:	e8 be c3 f8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 814dec0:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 814dec6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 814dec9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814decd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 814ded4:	00 
 814ded5:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ded9:	89 14 24             	mov    %edx,(%esp)
 814dedc:	e8 37 da 3a 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 814dee1:	83 ec 04             	sub    $0x4,%esp
 814dee4:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 814deea:	89 45 a7             	mov    %eax,-0x59(%ebp)
 814deed:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 814def3:	89 45 ab             	mov    %eax,-0x55(%ebp)
 814def6:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 814defc:	89 45 af             	mov    %eax,-0x51(%ebp)
 814deff:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 814df05:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 814df08:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 814df0e:	89 45 b7             	mov    %eax,-0x49(%ebp)
 814df11:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 814df17:	89 45 bb             	mov    %eax,-0x45(%ebp)
 814df1a:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 814df20:	89 45 bf             	mov    %eax,-0x41(%ebp)
 814df23:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 814df29:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 814df2c:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 814df32:	89 45 c7             	mov    %eax,-0x39(%ebp)
 814df35:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 814df3b:	89 45 cb             	mov    %eax,-0x35(%ebp)
 814df3e:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 814df44:	89 45 cf             	mov    %eax,-0x31(%ebp)
 814df47:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 814df4d:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 814df50:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 814df56:	89 45 d7             	mov    %eax,-0x29(%ebp)
 814df59:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 814df5f:	89 45 db             	mov    %eax,-0x25(%ebp)
 814df62:	8b 45 80             	mov    -0x80(%ebp),%eax
 814df65:	89 45 df             	mov    %eax,-0x21(%ebp)
 814df68:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 814df6c:	88 45 e3             	mov    %al,-0x1d(%ebp)
 814df6f:	e9 4d 02 00 00       	jmp    814e1c1 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x3a7>
 814df74:	8b 45 0c             	mov    0xc(%ebp),%eax
 814df77:	89 04 24             	mov    %eax,(%esp)
 814df7a:	e8 05 3b 00 00       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 814df7f:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 814df85:	8b 4d 14             	mov    0x14(%ebp),%ecx
 814df88:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814df8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814df90:	89 14 24             	mov    %edx,(%esp)
 814df93:	e8 1c d3 3b 00       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 814df98:	83 ec 04             	sub    $0x4,%esp
 814df9b:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 814dfa1:	89 45 a7             	mov    %eax,-0x59(%ebp)
 814dfa4:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 814dfaa:	89 45 ab             	mov    %eax,-0x55(%ebp)
 814dfad:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 814dfb3:	89 45 af             	mov    %eax,-0x51(%ebp)
 814dfb6:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 814dfbc:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 814dfbf:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 814dfc5:	89 45 b7             	mov    %eax,-0x49(%ebp)
 814dfc8:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 814dfce:	89 45 bb             	mov    %eax,-0x45(%ebp)
 814dfd1:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 814dfd7:	89 45 bf             	mov    %eax,-0x41(%ebp)
 814dfda:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 814dfe0:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 814dfe3:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 814dfe9:	89 45 c7             	mov    %eax,-0x39(%ebp)
 814dfec:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 814dff2:	89 45 cb             	mov    %eax,-0x35(%ebp)
 814dff5:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 814dffb:	89 45 cf             	mov    %eax,-0x31(%ebp)
 814dffe:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 814e004:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 814e007:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 814e00d:	89 45 d7             	mov    %eax,-0x29(%ebp)
 814e010:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 814e016:	89 45 db             	mov    %eax,-0x25(%ebp)
 814e019:	8b 45 80             	mov    -0x80(%ebp),%eax
 814e01c:	89 45 df             	mov    %eax,-0x21(%ebp)
 814e01f:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 814e023:	88 45 e3             	mov    %al,-0x1d(%ebp)
 814e026:	e9 96 01 00 00       	jmp    814e1c1 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x3a7>
 814e02b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e02e:	89 04 24             	mov    %eax,(%esp)
 814e031:	e8 48 c2 f8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 814e036:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 814e03c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 814e03f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814e043:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814e04a:	00 
 814e04b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e04f:	89 14 24             	mov    %edx,(%esp)
 814e052:	e8 c1 d8 3a 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 814e057:	83 ec 04             	sub    $0x4,%esp
 814e05a:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 814e060:	89 45 a7             	mov    %eax,-0x59(%ebp)
 814e063:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 814e069:	89 45 ab             	mov    %eax,-0x55(%ebp)
 814e06c:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 814e072:	89 45 af             	mov    %eax,-0x51(%ebp)
 814e075:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 814e07b:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 814e07e:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 814e084:	89 45 b7             	mov    %eax,-0x49(%ebp)
 814e087:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 814e08d:	89 45 bb             	mov    %eax,-0x45(%ebp)
 814e090:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 814e096:	89 45 bf             	mov    %eax,-0x41(%ebp)
 814e099:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 814e09f:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 814e0a2:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 814e0a8:	89 45 c7             	mov    %eax,-0x39(%ebp)
 814e0ab:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 814e0b1:	89 45 cb             	mov    %eax,-0x35(%ebp)
 814e0b4:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 814e0ba:	89 45 cf             	mov    %eax,-0x31(%ebp)
 814e0bd:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 814e0c3:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 814e0c6:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 814e0cc:	89 45 d7             	mov    %eax,-0x29(%ebp)
 814e0cf:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 814e0d5:	89 45 db             	mov    %eax,-0x25(%ebp)
 814e0d8:	8b 45 80             	mov    -0x80(%ebp),%eax
 814e0db:	89 45 df             	mov    %eax,-0x21(%ebp)
 814e0de:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 814e0e2:	88 45 e3             	mov    %al,-0x1d(%ebp)
 814e0e5:	e9 d7 00 00 00       	jmp    814e1c1 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x3a7>
 814e0ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e0ed:	89 04 24             	mov    %eax,(%esp)
 814e0f0:	e8 89 c1 f8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 814e0f5:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 814e0fb:	8b 4d 14             	mov    0x14(%ebp),%ecx
 814e0fe:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 814e102:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 814e109:	00 
 814e10a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e10e:	89 14 24             	mov    %edx,(%esp)
 814e111:	e8 02 d8 3a 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 814e116:	83 ec 04             	sub    $0x4,%esp
 814e119:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 814e11f:	89 45 a7             	mov    %eax,-0x59(%ebp)
 814e122:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 814e128:	89 45 ab             	mov    %eax,-0x55(%ebp)
 814e12b:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 814e131:	89 45 af             	mov    %eax,-0x51(%ebp)
 814e134:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 814e13a:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 814e13d:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 814e143:	89 45 b7             	mov    %eax,-0x49(%ebp)
 814e146:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 814e14c:	89 45 bb             	mov    %eax,-0x45(%ebp)
 814e14f:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 814e155:	89 45 bf             	mov    %eax,-0x41(%ebp)
 814e158:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 814e15e:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 814e161:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 814e167:	89 45 c7             	mov    %eax,-0x39(%ebp)
 814e16a:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 814e170:	89 45 cb             	mov    %eax,-0x35(%ebp)
 814e173:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 814e179:	89 45 cf             	mov    %eax,-0x31(%ebp)
 814e17c:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 814e182:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 814e185:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 814e18b:	89 45 d7             	mov    %eax,-0x29(%ebp)
 814e18e:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 814e194:	89 45 db             	mov    %eax,-0x25(%ebp)
 814e197:	8b 45 80             	mov    -0x80(%ebp),%eax
 814e19a:	89 45 df             	mov    %eax,-0x21(%ebp)
 814e19d:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 814e1a1:	88 45 e3             	mov    %al,-0x1d(%ebp)
 814e1a4:	0f b6 45 a8          	movzbl -0x58(%ebp),%eax
 814e1a8:	3c 05                	cmp    $0x5,%al
 814e1aa:	75 14                	jne    814e1c0 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x3a6>
 814e1ac:	b8 00 00 00 00       	mov    $0x0,%eax
 814e1b1:	e9 bf 03 00 00       	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e1b6:	b8 00 00 00 00       	mov    $0x0,%eax
 814e1bb:	e9 b5 03 00 00       	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e1c0:	90                   	nop
 814e1c1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 814e1c8:	8b 45 a9             	mov    -0x57(%ebp),%eax
 814e1cb:	85 c0                	test   %eax,%eax
 814e1cd:	0f 84 8d 01 00 00    	je     814e360 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x546>
 814e1d3:	8b 45 a9             	mov    -0x57(%ebp),%eax
 814e1d6:	89 c3                	mov    %eax,%ebx
 814e1d8:	e8 be df f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814e1dd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814e1e1:	89 04 24             	mov    %eax,(%esp)
 814e1e4:	e8 49 18 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814e1e9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 814e1ec:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 814e1f0:	75 0a                	jne    814e1fc <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x3e2>
 814e1f2:	b8 00 00 00 00       	mov    $0x0,%eax
 814e1f7:	e9 79 03 00 00       	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e1fc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814e1ff:	89 04 24             	mov    %eax,(%esp)
 814e202:	e8 db 30 fa ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 814e207:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814e20a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814e20d:	83 f8 05             	cmp    $0x5,%eax
 814e210:	77 28                	ja     814e23a <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x420>
 814e212:	8b 04 85 1c 51 b7 08 	mov    0x8b7511c(,%eax,4),%eax
 814e219:	ff e0                	jmp    *%eax
 814e21b:	b8 00 00 00 00       	mov    $0x0,%eax
 814e220:	e9 50 03 00 00       	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e225:	0f b6 45 a7          	movzbl -0x59(%ebp),%eax
 814e229:	83 f0 01             	xor    $0x1,%eax
 814e22c:	84 c0                	test   %al,%al
 814e22e:	74 0a                	je     814e23a <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x420>
 814e230:	b8 00 00 00 00       	mov    $0x0,%eax
 814e235:	e9 3b 03 00 00       	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e23a:	8d 45 a7             	lea    -0x59(%ebp),%eax
 814e23d:	89 04 24             	mov    %eax,(%esp)
 814e240:	e8 cd 25 00 00       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 814e245:	84 c0                	test   %al,%al
 814e247:	74 2c                	je     814e275 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x45b>
 814e249:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814e24c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814e24f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814e252:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 814e258:	83 f8 0b             	cmp    $0xb,%eax
 814e25b:	74 0e                	je     814e26b <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x451>
 814e25d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814e260:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 814e266:	83 f8 09             	cmp    $0x9,%eax
 814e269:	7f 0a                	jg     814e275 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x45b>
 814e26b:	b8 00 00 00 00       	mov    $0x0,%eax
 814e270:	e9 00 03 00 00       	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e275:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e278:	c6 00 00             	movb   $0x0,(%eax)
 814e27b:	0f b6 55 a8          	movzbl -0x58(%ebp),%edx
 814e27f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e282:	88 50 11             	mov    %dl,0x11(%eax)
 814e285:	8b 55 a9             	mov    -0x57(%ebp),%edx
 814e288:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e28b:	89 50 12             	mov    %edx,0x12(%eax)
 814e28e:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 814e291:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e294:	89 50 1d             	mov    %edx,0x1d(%eax)
 814e297:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e29a:	8b 55 bc             	mov    -0x44(%ebp),%edx
 814e29d:	89 50 25             	mov    %edx,0x25(%eax)
 814e2a0:	8b 55 c0             	mov    -0x40(%ebp),%edx
 814e2a3:	89 50 29             	mov    %edx,0x29(%eax)
 814e2a6:	0f b7 55 c4          	movzwl -0x3c(%ebp),%edx
 814e2aa:	66 89 50 2d          	mov    %dx,0x2d(%eax)
 814e2ae:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e2b1:	8b 55 b8             	mov    -0x48(%ebp),%edx
 814e2b4:	89 50 21             	mov    %edx,0x21(%eax)
 814e2b7:	8d 45 a7             	lea    -0x59(%ebp),%eax
 814e2ba:	89 04 24             	mov    %eax,(%esp)
 814e2bd:	e8 50 25 00 00       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 814e2c2:	83 f0 01             	xor    $0x1,%eax
 814e2c5:	84 c0                	test   %al,%al
 814e2c7:	74 17                	je     814e2e0 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x4c6>
 814e2c9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e2cc:	8d 50 10             	lea    0x10(%eax),%edx
 814e2cf:	8b 45 18             	mov    0x18(%ebp),%eax
 814e2d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e2d6:	89 14 24             	mov    %edx,(%esp)
 814e2d9:	e8 a6 d5 f7 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 814e2de:	eb 15                	jmp    814e2f5 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x4db>
 814e2e0:	8b 45 ae             	mov    -0x52(%ebp),%eax
 814e2e3:	8b 55 1c             	mov    0x1c(%ebp),%edx
 814e2e6:	83 c2 10             	add    $0x10,%edx
 814e2e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e2ed:	89 14 24             	mov    %edx,(%esp)
 814e2f0:	e8 8f d5 f7 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 814e2f5:	8d 45 a7             	lea    -0x59(%ebp),%eax
 814e2f8:	89 04 24             	mov    %eax,(%esp)
 814e2fb:	e8 dc 24 00 00       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 814e300:	0f b6 c0             	movzbl %al,%eax
 814e303:	8b 55 1c             	mov    0x1c(%ebp),%edx
 814e306:	83 c2 10             	add    $0x10,%edx
 814e309:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e30d:	89 14 24             	mov    %edx,(%esp)
 814e310:	e8 d3 24 00 00       	call   81507e8 <_ZN10Inven_Item11SetItemAttrEh>
 814e315:	0f b7 55 b2          	movzwl -0x4e(%ebp),%edx
 814e319:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e31c:	66 89 50 1b          	mov    %dx,0x1b(%eax)
 814e320:	0f b6 55 a7          	movzbl -0x59(%ebp),%edx
 814e324:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e327:	88 50 10             	mov    %dl,0x10(%eax)
 814e32a:	8b 45 18             	mov    0x18(%ebp),%eax
 814e32d:	0f bf d8             	movswl %ax,%ebx
 814e330:	e8 a8 37 00 00       	call   8151add <_Z7G_Storev>
 814e335:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 814e338:	89 54 24 14          	mov    %edx,0x14(%esp)
 814e33c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 814e343:	00 
 814e344:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 814e348:	8b 55 ec             	mov    -0x14(%ebp),%edx
 814e34b:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e34f:	8d 55 a7             	lea    -0x59(%ebp),%edx
 814e352:	89 54 24 04          	mov    %edx,0x4(%esp)
 814e356:	89 04 24             	mov    %eax,(%esp)
 814e359:	e8 42 ab 4c 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 814e35e:	eb 43                	jmp    814e3a3 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x589>
 814e360:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e363:	c6 00 00             	movb   $0x0,(%eax)
 814e366:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e369:	c6 40 11 02          	movb   $0x2,0x11(%eax)
 814e36d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e370:	c7 40 12 00 00 00 00 	movl   $0x0,0x12(%eax)
 814e377:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e37a:	66 c7 40 1b 00 00    	movw   $0x0,0x1b(%eax)
 814e380:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e383:	8d 50 10             	lea    0x10(%eax),%edx
 814e386:	8b 45 18             	mov    0x18(%ebp),%eax
 814e389:	89 44 24 04          	mov    %eax,0x4(%esp)
 814e38d:	89 14 24             	mov    %edx,(%esp)
 814e390:	e8 ef d4 f7 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 814e395:	8b 45 1c             	mov    0x1c(%ebp),%eax
 814e398:	83 c0 10             	add    $0x10,%eax
 814e39b:	89 04 24             	mov    %eax,(%esp)
 814e39e:	e8 ef d4 f7 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 814e3a3:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 814e3a7:	0f be 45 94          	movsbl -0x6c(%ebp),%eax
 814e3ab:	83 f8 02             	cmp    $0x2,%eax
 814e3ae:	0f 84 9e 00 00 00    	je     814e452 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x638>
 814e3b4:	83 f8 02             	cmp    $0x2,%eax
 814e3b7:	7f 09                	jg     814e3c2 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x5a8>
 814e3b9:	85 c0                	test   %eax,%eax
 814e3bb:	74 1c                	je     814e3d9 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x5bf>
 814e3bd:	e9 3f 01 00 00       	jmp    814e501 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6e7>
 814e3c2:	83 f8 03             	cmp    $0x3,%eax
 814e3c5:	0f 84 b8 00 00 00    	je     814e483 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x669>
 814e3cb:	83 f8 07             	cmp    $0x7,%eax
 814e3ce:	0f 84 ee 00 00 00    	je     814e4c2 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6a8>
 814e3d4:	e9 28 01 00 00       	jmp    814e501 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6e7>
 814e3d9:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 814e3dd:	75 32                	jne    814e411 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x5f7>
 814e3df:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e3e2:	89 04 24             	mov    %eax,(%esp)
 814e3e5:	e8 a4 be f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814e3ea:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814e3f1:	00 
 814e3f2:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 814e3f9:	00 
 814e3fa:	8b 55 18             	mov    0x18(%ebp),%edx
 814e3fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 814e401:	89 04 24             	mov    %eax,(%esp)
 814e404:	e8 43 11 3b 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 814e409:	88 45 eb             	mov    %al,-0x15(%ebp)
 814e40c:	e9 f7 00 00 00       	jmp    814e508 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6ee>
 814e411:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e414:	89 04 24             	mov    %eax,(%esp)
 814e417:	e8 72 be f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814e41c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 814e423:	00 
 814e424:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 814e42b:	00 
 814e42c:	8b 55 18             	mov    0x18(%ebp),%edx
 814e42f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814e433:	8b 55 14             	mov    0x14(%ebp),%edx
 814e436:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e43a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814e441:	00 
 814e442:	89 04 24             	mov    %eax,(%esp)
 814e445:	e8 c2 5b 3b 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 814e44a:	88 45 eb             	mov    %al,-0x15(%ebp)
 814e44d:	e9 b6 00 00 00       	jmp    814e508 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6ee>
 814e452:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e455:	89 04 24             	mov    %eax,(%esp)
 814e458:	e8 37 36 00 00       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 814e45d:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 814e464:	00 
 814e465:	8b 55 18             	mov    0x18(%ebp),%edx
 814e468:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e46c:	8b 55 14             	mov    0x14(%ebp),%edx
 814e46f:	89 54 24 04          	mov    %edx,0x4(%esp)
 814e473:	89 04 24             	mov    %eax,(%esp)
 814e476:	e8 19 d3 3b 00       	call   850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>
 814e47b:	88 45 eb             	mov    %al,-0x15(%ebp)
 814e47e:	e9 85 00 00 00       	jmp    814e508 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6ee>
 814e483:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e486:	89 04 24             	mov    %eax,(%esp)
 814e489:	e8 00 be f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814e48e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 814e495:	00 
 814e496:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 814e49d:	00 
 814e49e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814e4a5:	00 
 814e4a6:	8b 55 14             	mov    0x14(%ebp),%edx
 814e4a9:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e4ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814e4b4:	00 
 814e4b5:	89 04 24             	mov    %eax,(%esp)
 814e4b8:	e8 4f 5b 3b 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 814e4bd:	88 45 eb             	mov    %al,-0x15(%ebp)
 814e4c0:	eb 46                	jmp    814e508 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6ee>
 814e4c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 814e4c5:	89 04 24             	mov    %eax,(%esp)
 814e4c8:	e8 c1 bd f8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 814e4cd:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 814e4d4:	00 
 814e4d5:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 814e4dc:	00 
 814e4dd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814e4e4:	00 
 814e4e5:	8b 55 14             	mov    0x14(%ebp),%edx
 814e4e8:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e4ec:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 814e4f3:	00 
 814e4f4:	89 04 24             	mov    %eax,(%esp)
 814e4f7:	e8 10 5b 3b 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 814e4fc:	88 45 eb             	mov    %al,-0x15(%ebp)
 814e4ff:	eb 07                	jmp    814e508 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x6ee>
 814e501:	b8 00 00 00 00       	mov    $0x0,%eax
 814e506:	eb 6d                	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e508:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 814e50c:	83 f0 01             	xor    $0x1,%eax
 814e50f:	84 c0                	test   %al,%al
 814e511:	74 07                	je     814e51a <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x700>
 814e513:	b8 00 00 00 00       	mov    $0x0,%eax
 814e518:	eb 5b                	jmp    814e575 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x75b>
 814e51a:	80 7d 94 00          	cmpb   $0x0,-0x6c(%ebp)
 814e51e:	75 2b                	jne    814e54b <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x731>
 814e520:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 814e524:	75 25                	jne    814e54b <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x731>
 814e526:	8b 5d 18             	mov    0x18(%ebp),%ebx
 814e529:	e8 c1 f0 4b 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 814e52e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 814e532:	8b 55 0c             	mov    0xc(%ebp),%edx
 814e535:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e539:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 814e540:	00 
 814e541:	89 04 24             	mov    %eax,(%esp)
 814e544:	e8 39 f1 4b 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 814e549:	eb 25                	jmp    814e570 <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item+0x756>
 814e54b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814e54e:	89 c3                	mov    %eax,%ebx
 814e550:	e8 9a f0 4b 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 814e555:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 814e559:	8b 55 0c             	mov    0xc(%ebp),%edx
 814e55c:	89 54 24 08          	mov    %edx,0x8(%esp)
 814e560:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 814e567:	00 
 814e568:	89 04 24             	mov    %eax,(%esp)
 814e56b:	e8 12 f1 4b 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 814e570:	b8 01 00 00 00       	mov    $0x1,%eax
 814e575:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 814e578:	c9                   	leave
 814e579:	c3                   	ret

```

```c
// WongWork::CBossStage::dropItem @ 0x814de1a

/* WongWork::CBossStage::dropItem(CUser*, char, int, int, map_item&) */

undefined4 __thiscall
WongWork::CBossStage::dropItem
          (CBossStage *this,CUser *param_1,char param_2,int param_3,int param_4,map_item *param_5)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  CDataManager *this_00;
  Store *this_01;
  CInventory *pCVar4;
  CCargo *pCVar5;
  undefined4 uVar6;
  CValueStatistic *pCVar7;
  undefined1 local_bc [12];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  char local_70;
  map_item local_5d;
  map_item mStack_5c;
  undefined2 uStack_5b;
  undefined2 uStack_59;
  undefined1 uStack_57;
  int iStack_56;
  undefined1 local_52;
  undefined4 uStack_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined1 uStack_41;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  int local_20;
  char local_19;
  CItem *local_18;
  undefined4 local_14;
  CItem *local_10;
  
  local_70 = param_2;
  Inven_Item::Inven_Item((Inven_Item *)&local_5d);
  if (local_70 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_bc);
    local_5d = SUB41(local_bc._0_4_,0);
    mStack_5c = SUB41(local_bc._0_4_,1);
    uStack_5b = SUB42(local_bc._0_4_,2);
    uStack_59 = (undefined2)local_bc._4_4_;
    uStack_57 = SUB41(local_bc._4_4_,2);
    iStack_56._1_3_ = (undefined3)local_bc._8_4_;
    iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
    local_52 = SUB41(local_bc._8_4_,3);
    uStack_51 = local_b0;
    uStack_4d = local_ac;
    uStack_49 = local_a8;
    uStack_45 = local_a4;
    uStack_41 = (undefined1)local_a0;
    local_40 = (undefined2)((uint)local_a0 >> 8);
    uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
  }
  else if (local_70 < '\x03') {
    if (local_70 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      *param_5 = (map_item)0x0;
      param_5[0x11] = (map_item)0x2;
      *(undefined4 *)(param_5 + 0x12) = 0;
      *(undefined2 *)(param_5 + 0x1b) = 0;
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
      Inven_Item::ResetItemAttr((Inven_Item *)(param_5 + 0x10));
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_bc,iVar3);
      local_5d = SUB41(local_bc._0_4_,0);
      mStack_5c = SUB41(local_bc._0_4_,1);
      uStack_5b = SUB42(local_bc._0_4_,2);
      uStack_59 = (undefined2)local_bc._4_4_;
      uStack_57 = SUB41(local_bc._4_4_,2);
      iStack_56._1_3_ = (undefined3)local_bc._8_4_;
      iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
      local_52 = SUB41(local_bc._8_4_,3);
      uStack_51 = local_b0;
      uStack_4d = local_ac;
      uStack_49 = local_a8;
      uStack_45 = local_a4;
      uStack_41 = (undefined1)local_a0;
      local_40 = (undefined2)((uint)local_a0 >> 8);
      uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
      local_3d = local_9c;
      local_39 = local_98;
      local_35 = local_94;
      local_31 = local_90;
      local_2d = local_8c;
      local_29 = local_88;
      local_25 = local_84;
      local_21 = local_80;
    }
  }
  else if (local_70 == '\x03') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_bc,iVar3);
    local_5d = SUB41(local_bc._0_4_,0);
    mStack_5c = SUB41(local_bc._0_4_,1);
    uStack_5b = SUB42(local_bc._0_4_,2);
    uStack_59 = (undefined2)local_bc._4_4_;
    uStack_57 = SUB41(local_bc._4_4_,2);
    iStack_56._1_3_ = (undefined3)local_bc._8_4_;
    iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
    local_52 = SUB41(local_bc._8_4_,3);
    uStack_51 = local_b0;
    uStack_4d = local_ac;
    uStack_49 = local_a8;
    uStack_45 = local_a4;
    uStack_41 = (undefined1)local_a0;
    local_40 = (undefined2)((uint)local_a0 >> 8);
    uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
  }
  else {
    if (local_70 != '\a') {
      return 0;
    }
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_bc,iVar3);
    local_5d = SUB41(local_bc._0_4_,0);
    mStack_5c = SUB41(local_bc._0_4_,1);
    uStack_5b = SUB42(local_bc._0_4_,2);
    uStack_59 = (undefined2)local_bc._4_4_;
    uStack_57 = SUB41(local_bc._4_4_,2);
    iStack_56._1_3_ = (undefined3)local_bc._8_4_;
    iStack_56 = CONCAT31(iStack_56._1_3_,SUB41(local_bc._4_4_,3));
    local_52 = SUB41(local_bc._8_4_,3);
    uStack_51 = local_b0;
    uStack_4d = local_ac;
    uStack_49 = local_a8;
    uStack_45 = local_a4;
    uStack_41 = (undefined1)local_a0;
    local_40 = (undefined2)((uint)local_a0 >> 8);
    uStack_3e = (undefined1)((uint)local_a0 >> 0x18);
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    if (mStack_5c == (map_item)0x5) {
      return 0;
    }
  }
  local_20 = 0;
  if (CONCAT22(uStack_59,uStack_5b) == 0) {
    *param_5 = (map_item)0x0;
    param_5[0x11] = (map_item)0x2;
    *(undefined4 *)(param_5 + 0x12) = 0;
    *(undefined2 *)(param_5 + 0x1b) = 0;
    Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
    Inven_Item::ResetItemAttr((Inven_Item *)(param_5 + 0x10));
  }
  else {
    iVar3 = CONCAT22(uStack_59,uStack_5b);
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_18 == (CItem *)0x0) {
      return 0;
    }
    local_14 = CItem::GetAttachType(local_18);
    switch(local_14) {
    case 1:
    case 2:
    case 5:
      return 0;
    case 3:
      if (local_5d != (map_item)0x1) {
        return 0;
      }
    }
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_5d);
    if ((cVar1 != '\0') &&
       ((local_10 = local_18, *(int *)(local_18 + 0x234) == 0xb || (*(int *)(local_18 + 0x234) < 10)
        ))) {
      return 0;
    }
    *param_5 = (map_item)0x0;
    param_5[0x11] = mStack_5c;
    *(uint *)(param_5 + 0x12) = CONCAT22(uStack_59,uStack_5b);
    *(uint *)(param_5 + 0x1d) = CONCAT13((undefined1)uStack_4d,uStack_51._1_3_);
    *(uint *)(param_5 + 0x25) = CONCAT13((undefined1)uStack_45,uStack_49._1_3_);
    *(uint *)(param_5 + 0x29) = CONCAT13(uStack_41,uStack_45._1_3_);
    *(undefined2 *)(param_5 + 0x2d) = local_40;
    *(uint *)(param_5 + 0x21) = CONCAT13((undefined1)uStack_49,uStack_4d._1_3_);
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_5d);
    if (cVar1 == '\x01') {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),iStack_56);
    }
    else {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
    }
    uVar2 = Inven_Item::GetItemAttr((Inven_Item *)&local_5d);
    Inven_Item::SetItemAttr((Inven_Item *)(param_5 + 0x10),uVar2);
    *(ushort *)(param_5 + 0x1b) = CONCAT11((undefined1)uStack_51,local_52);
    param_5[0x10] = local_5d;
    this_01 = (Store *)G_Store();
    Store::GetSellItemPrice(this_01,(Inven_Item *)&local_5d,local_18,(short)param_4,false,&local_20)
    ;
  }
  local_19 = 0;
  if (local_70 == '\x02') {
    pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
    local_19 = CCargo::delete_item(pCVar5,param_3,param_4,0x10);
  }
  else if (local_70 < '\x03') {
    if (local_70 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_19 = CInventory::use_money(pCVar4,param_4,6,1);
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_19 = CInventory::delete_item(pCVar4,1,param_3,param_4,6,1);
    }
  }
  else if (local_70 == '\x03') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_19 = CInventory::delete_item(pCVar4,0,param_3,1,6,1);
  }
  else {
    if (local_70 != '\a') {
      return 0;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_19 = CInventory::delete_item(pCVar4,3,param_3,1,6,1);
  }
  iVar3 = local_20;
  if (local_19 == '\x01') {
    if ((local_70 == '\0') && (param_3 == 0)) {
      pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar7,0x17,param_1,param_4);
    }
    else {
      pCVar7 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar7,0x16,param_1,iVar3);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## handleDropItem

```asm
// === 0814ff4a WongWork::CBossStage::handleDropItem  [0x0814ff4a-0x8150387] ===
 814ff4a:	55                   	push   %ebp
 814ff4b:	89 e5                	mov    %esp,%ebp
 814ff4d:	57                   	push   %edi
 814ff4e:	56                   	push   %esi
 814ff4f:	53                   	push   %ebx
 814ff50:	81 ec ec 00 00 00    	sub    $0xec,%esp
 814ff56:	8b 45 18             	mov    0x18(%ebp),%eax
 814ff59:	88 85 74 ff ff ff    	mov    %al,-0x8c(%ebp)
 814ff5f:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 814ff63:	79 0a                	jns    814ff6f <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x25>
 814ff65:	bb 00 00 00 00       	mov    $0x0,%ebx
 814ff6a:	e9 0c 04 00 00       	jmp    815037b <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x431>
 814ff6f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 814ff72:	89 04 24             	mov    %eax,(%esp)
 814ff75:	e8 d2 dd 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814ff7a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 814ff7d:	89 04 24             	mov    %eax,(%esp)
 814ff80:	e8 61 b9 f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814ff85:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814ff88:	89 04 24             	mov    %eax,(%esp)
 814ff8b:	e8 3c 13 00 00       	call   81512cc <_ZN8map_itemC1Ev>
 814ff90:	0f be 85 74 ff ff ff 	movsbl -0x8c(%ebp),%eax
 814ff97:	8d 55 84             	lea    -0x7c(%ebp),%edx
 814ff9a:	89 54 24 14          	mov    %edx,0x14(%esp)
 814ff9e:	8b 55 20             	mov    0x20(%ebp),%edx
 814ffa1:	89 54 24 10          	mov    %edx,0x10(%esp)
 814ffa5:	8b 55 1c             	mov    0x1c(%ebp),%edx
 814ffa8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814ffac:	89 44 24 08          	mov    %eax,0x8(%esp)
 814ffb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 814ffb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ffb7:	8b 45 08             	mov    0x8(%ebp),%eax
 814ffba:	89 04 24             	mov    %eax,(%esp)
 814ffbd:	e8 58 de ff ff       	call   814de1a <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item>
 814ffc2:	83 f0 01             	xor    $0x1,%eax
 814ffc5:	84 c0                	test   %al,%al
 814ffc7:	0f 84 86 00 00 00    	je     8150053 <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x109>
 814ffcd:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 814ffd4:	00 
 814ffd5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814ffdc:	00 
 814ffdd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 814ffe0:	89 04 24             	mov    %eax,(%esp)
 814ffe3:	e8 14 b9 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814ffe8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814ffef:	00 
 814fff0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 814fff3:	89 04 24             	mov    %eax,(%esp)
 814fff6:	e8 25 b9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814fffb:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 8150002:	00 
 8150003:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150006:	89 04 24             	mov    %eax,(%esp)
 8150009:	e8 12 b9 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 815000e:	0f be 85 74 ff ff ff 	movsbl -0x8c(%ebp),%eax
 8150015:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150019:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815001c:	89 04 24             	mov    %eax,(%esp)
 815001f:	e8 fc b8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8150024:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815002b:	00 
 815002c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815002f:	89 04 24             	mov    %eax,(%esp)
 8150032:	e8 21 b9 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8150037:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815003a:	89 44 24 04          	mov    %eax,0x4(%esp)
 815003e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8150041:	89 04 24             	mov    %eax,(%esp)
 8150044:	e8 71 85 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8150049:	bb 00 00 00 00       	mov    $0x0,%ebx
 815004e:	e9 1d 03 00 00       	jmp    8150370 <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x426>
 8150053:	8b 45 08             	mov    0x8(%ebp),%eax
 8150056:	8b 80 34 0a 00 00    	mov    0xa34(%eax),%eax
 815005c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 815005f:	8d 50 01             	lea    0x1(%eax),%edx
 8150062:	8b 45 08             	mov    0x8(%ebp),%eax
 8150065:	89 90 34 0a 00 00    	mov    %edx,0xa34(%eax)
 815006b:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 815006f:	0f 85 86 00 00 00    	jne    81500fb <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x1b1>
 8150075:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 815007c:	00 
 815007d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8150084:	00 
 8150085:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150088:	89 04 24             	mov    %eax,(%esp)
 815008b:	e8 6c b8 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8150090:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150097:	00 
 8150098:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815009b:	89 04 24             	mov    %eax,(%esp)
 815009e:	e8 7d b8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81500a3:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81500aa:	00 
 81500ab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81500ae:	89 04 24             	mov    %eax,(%esp)
 81500b1:	e8 6a b8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81500b6:	0f be 85 74 ff ff ff 	movsbl -0x8c(%ebp),%eax
 81500bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81500c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81500c4:	89 04 24             	mov    %eax,(%esp)
 81500c7:	e8 54 b8 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81500cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81500d3:	00 
 81500d4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81500d7:	89 04 24             	mov    %eax,(%esp)
 81500da:	e8 79 b8 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81500df:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81500e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81500e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81500e9:	89 04 24             	mov    %eax,(%esp)
 81500ec:	e8 c9 84 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81500f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81500f6:	e9 75 02 00 00       	jmp    8150370 <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x426>
 81500fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81500fe:	89 45 88             	mov    %eax,-0x78(%ebp)
 8150101:	8b 45 08             	mov    0x8(%ebp),%eax
 8150104:	05 f4 09 00 00       	add    $0x9f4,%eax
 8150109:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 815010f:	8d 54 24 04          	lea    0x4(%esp),%edx
 8150113:	8d 5d 84             	lea    -0x7c(%ebp),%ebx
 8150116:	b8 15 00 00 00       	mov    $0x15,%eax
 815011b:	89 d7                	mov    %edx,%edi
 815011d:	89 de                	mov    %ebx,%esi
 815011f:	89 c1                	mov    %eax,%ecx
 8150121:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8150123:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8150129:	89 04 24             	mov    %eax,(%esp)
 815012c:	e8 af 16 00 00       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 8150131:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8150138:	00 
 8150139:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150140:	00 
 8150141:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150144:	89 04 24             	mov    %eax,(%esp)
 8150147:	e8 b0 b7 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 815014c:	8b 45 0c             	mov    0xc(%ebp),%eax
 815014f:	89 04 24             	mov    %eax,(%esp)
 8150152:	e8 25 a2 f8 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8150157:	0f b7 c0             	movzwl %ax,%eax
 815015a:	89 44 24 04          	mov    %eax,0x4(%esp)
 815015e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150161:	89 04 24             	mov    %eax,(%esp)
 8150164:	e8 3b 9d f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8150169:	8b 45 10             	mov    0x10(%ebp),%eax
 815016c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150170:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150173:	89 04 24             	mov    %eax,(%esp)
 8150176:	e8 29 9d f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 815017b:	8b 45 14             	mov    0x14(%ebp),%eax
 815017e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150182:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150185:	89 04 24             	mov    %eax,(%esp)
 8150188:	e8 17 9d f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 815018d:	8b 45 88             	mov    -0x78(%ebp),%eax
 8150190:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150194:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150197:	89 04 24             	mov    %eax,(%esp)
 815019a:	e8 05 9d f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 815019f:	8b 45 96             	mov    -0x6a(%ebp),%eax
 81501a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81501a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81501a9:	89 04 24             	mov    %eax,(%esp)
 81501ac:	e8 8b b7 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81501b1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81501b4:	83 c0 10             	add    $0x10,%eax
 81501b7:	89 04 24             	mov    %eax,(%esp)
 81501ba:	e8 1d 06 00 00       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 81501bf:	0f b6 c0             	movzbl %al,%eax
 81501c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81501c6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81501c9:	89 04 24             	mov    %eax,(%esp)
 81501cc:	e8 4f b7 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81501d1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81501d4:	83 c0 10             	add    $0x10,%eax
 81501d7:	89 04 24             	mov    %eax,(%esp)
 81501da:	e8 5b 76 fa ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 81501df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81501e3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81501e6:	89 04 24             	mov    %eax,(%esp)
 81501e9:	e8 4e b7 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81501ee:	0f b7 45 9f          	movzwl -0x61(%ebp),%eax
 81501f2:	0f b7 c0             	movzwl %ax,%eax
 81501f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81501f9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81501fc:	89 04 24             	mov    %eax,(%esp)
 81501ff:	e8 a0 9c f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8150204:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 8150207:	89 44 24 04          	mov    %eax,0x4(%esp)
 815020b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815020e:	89 04 24             	mov    %eax,(%esp)
 8150211:	e8 26 b7 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8150216:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8150219:	83 c0 21             	add    $0x21,%eax
 815021c:	89 04 24             	mov    %eax,(%esp)
 815021f:	e8 0e 05 00 00       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8150224:	0f b6 c0             	movzbl %al,%eax
 8150227:	89 44 24 04          	mov    %eax,0x4(%esp)
 815022b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815022e:	89 04 24             	mov    %eax,(%esp)
 8150231:	e8 ea b6 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8150236:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8150239:	83 c0 21             	add    $0x21,%eax
 815023c:	89 04 24             	mov    %eax,(%esp)
 815023f:	e8 2e 05 00 00       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8150244:	0f b7 c0             	movzwl %ax,%eax
 8150247:	89 44 24 04          	mov    %eax,0x4(%esp)
 815024b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815024e:	89 04 24             	mov    %eax,(%esp)
 8150251:	e8 4e 9c f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8150256:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8150259:	83 c0 10             	add    $0x10,%eax
 815025c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150260:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150263:	89 04 24             	mov    %eax,(%esp)
 8150266:	e8 23 07 00 00       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 815026b:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 815026f:	84 c0                	test   %al,%al
 8150271:	74 07                	je     815027a <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x330>
 8150273:	b8 00 00 00 00       	mov    $0x0,%eax
 8150278:	eb 05                	jmp    815027f <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x335>
 815027a:	b8 01 00 00 00       	mov    $0x1,%eax
 815027f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150283:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150286:	89 04 24             	mov    %eax,(%esp)
 8150289:	e8 92 b6 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 815028e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8150295:	00 
 8150296:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150299:	89 04 24             	mov    %eax,(%esp)
 815029c:	e8 b7 b6 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81502a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81502a4:	8b 40 04             	mov    0x4(%eax),%eax
 81502a7:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81502aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81502ae:	89 04 24             	mov    %eax,(%esp)
 81502b1:	e8 98 ce 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81502b6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81502b9:	89 04 24             	mov    %eax,(%esp)
 81502bc:	e8 25 b6 f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81502c1:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 81502c8:	00 
 81502c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81502d0:	00 
 81502d1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81502d4:	89 04 24             	mov    %eax,(%esp)
 81502d7:	e8 20 b6 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81502dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81502e3:	00 
 81502e4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81502e7:	89 04 24             	mov    %eax,(%esp)
 81502ea:	e8 31 b6 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81502ef:	0f be 85 74 ff ff ff 	movsbl -0x8c(%ebp),%eax
 81502f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81502fa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81502fd:	89 04 24             	mov    %eax,(%esp)
 8150300:	e8 1b b6 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8150305:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8150308:	89 44 24 04          	mov    %eax,0x4(%esp)
 815030c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815030f:	89 04 24             	mov    %eax,(%esp)
 8150312:	e8 8d 9b f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8150317:	8b 45 20             	mov    0x20(%ebp),%eax
 815031a:	89 44 24 04          	mov    %eax,0x4(%esp)
 815031e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150321:	89 04 24             	mov    %eax,(%esp)
 8150324:	e8 13 b6 f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8150329:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8150330:	00 
 8150331:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150334:	89 04 24             	mov    %eax,(%esp)
 8150337:	e8 1c b6 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 815033c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815033f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150343:	8b 45 0c             	mov    0xc(%ebp),%eax
 8150346:	89 04 24             	mov    %eax,(%esp)
 8150349:	e8 6c 82 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 815034e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8150353:	eb 1b                	jmp    8150370 <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii+0x426>
 8150355:	89 d3                	mov    %edx,%ebx
 8150357:	89 c6                	mov    %eax,%esi
 8150359:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815035c:	89 04 24             	mov    %eax,(%esp)
 815035f:	e8 1c db 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8150364:	89 f0                	mov    %esi,%eax
 8150366:	89 da                	mov    %ebx,%edx
 8150368:	89 04 24             	mov    %eax,(%esp)
 815036b:	e8 e0 33 99 00       	call   8ae3750 <_Unwind_Resume>
 8150370:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8150373:	89 04 24             	mov    %eax,(%esp)
 8150376:	e8 05 db 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 815037b:	89 d8                	mov    %ebx,%eax
 815037d:	81 c4 ec 00 00 00    	add    $0xec,%esp
 8150383:	5b                   	pop    %ebx
 8150384:	5e                   	pop    %esi
 8150385:	5f                   	pop    %edi
 8150386:	5d                   	pop    %ebp
 8150387:	c3                   	ret

```

```c
// WongWork::CBossStage::handleDropItem @ 0x814ff4a

/* WongWork::CBossStage::handleDropItem(CUser*, int, int, char, int, int) */

undefined4 __thiscall
WongWork::CBossStage::handleDropItem
          (CBossStage *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  map_item *pmVar5;
  undefined4 *puVar6;
  byte bVar7;
  map_item local_80 [4];
  int local_7c;
  Inven_Item aIStack_70 [2];
  int local_6e;
  ushort local_65;
  int local_63;
  stAmplifyOption_t asStack_5f [51];
  PacketGuard local_2c [12];
  int local_20;
  
  bVar7 = 0;
  if (param_6 < 0) {
    uVar4 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0814ff80 to 0815034d has its CatchHandler @ 08150355 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    map_item::map_item(local_80);
    cVar1 = dropItem(this,param_1,param_4,param_5,param_6,local_80);
    if (cVar1 == '\x01') {
      local_20 = *(int *)(this + 0xa34);
      *(int *)(this + 0xa34) = local_20 + 1;
      if (local_20 == -1) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0x11);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)param_4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(param_1,local_2c);
        uVar4 = 0;
      }
      else {
        local_7c = local_20;
        pmVar5 = local_80;
        puVar6 = (undefined4 *)&stack0xffffff08;
        for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *(undefined4 *)pmVar5;
          pmVar5 = pmVar5 + ((uint)bVar7 * -2 + 1) * 4;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        MapInfo::Add_Item(this + 0x9f4);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x28);
        uVar2 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar2 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,param_2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,param_3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_7c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_6e);
        uVar2 = Inven_Item::GetItemAttr(aIStack_70);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar2 & 0xff);
        iVar3 = Inven_Item::get_add_info(aIStack_70);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(uint)local_65);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_63);
        uVar2 = stAmplifyOption_t::getAbilityType(asStack_5f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar2 & 0xff);
        uVar2 = stAmplifyOption_t::getAbilityValue(asStack_5f);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar2 & 0xffff);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_2c,aIStack_70);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_2c,(uint)(local_80[0] == (map_item)0x0));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_2c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)param_4);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,param_5);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,param_6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(param_1,local_2c);
        uVar4 = 1;
      }
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x32);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0x11);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)param_4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
      uVar4 = 0;
    }
    PacketGuard::~PacketGuard(local_2c);
  }
  return uVar4;
}

```

---

## handleKillMonster

```asm
// === 08150388 WongWork::CBossStage::handleKillMonster  [0x08150388-0x815068a] ===
 8150388:	55                   	push   %ebp
 8150389:	89 e5                	mov    %esp,%ebp
 815038b:	57                   	push   %edi
 815038c:	56                   	push   %esi
 815038d:	53                   	push   %ebx
 815038e:	81 ec bc 03 00 00    	sub    $0x3bc,%esp
 8150394:	8b 55 10             	mov    0x10(%ebp),%edx
 8150397:	8b 45 14             	mov    0x14(%ebp),%eax
 815039a:	66 89 95 84 fc ff ff 	mov    %dx,-0x37c(%ebp)
 81503a1:	66 89 85 80 fc ff ff 	mov    %ax,-0x380(%ebp)
 81503a8:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 81503ae:	89 04 24             	mov    %eax,(%esp)
 81503b1:	e8 12 0e 00 00       	call   81511c8 <_ZN11map_monsterC1Ev>
 81503b6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81503bd:	0f b7 85 84 fc ff ff 	movzwl -0x37c(%ebp),%eax
 81503c4:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81503c7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81503cb:	8d 95 88 fc ff ff    	lea    -0x378(%ebp),%edx
 81503d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81503d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81503d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81503dc:	89 04 24             	mov    %eax,(%esp)
 81503df:	e8 30 ce ff ff       	call   814d214 <_ZN8WongWork10CBossStage16killMonsterEraseEtR11map_monsterRi>
 81503e4:	83 f0 01             	xor    $0x1,%eax
 81503e7:	84 c0                	test   %al,%al
 81503e9:	74 0a                	je     81503f5 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x6d>
 81503eb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81503f0:	e9 7b 02 00 00       	jmp    8150670 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2e8>
 81503f5:	8b 45 08             	mov    0x8(%ebp),%eax
 81503f8:	8b 40 04             	mov    0x4(%eax),%eax
 81503fb:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8150401:	83 f8 01             	cmp    $0x1,%eax
 8150404:	0f 85 f0 00 00 00    	jne    81504fa <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x172>
 815040a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815040d:	89 04 24             	mov    %eax,(%esp)
 8150410:	e8 37 d9 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8150415:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 815041c:	00 
 815041d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150424:	00 
 8150425:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8150428:	89 04 24             	mov    %eax,(%esp)
 815042b:	e8 cc b4 f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8150430:	0f b7 85 84 fc ff ff 	movzwl -0x37c(%ebp),%eax
 8150437:	89 44 24 04          	mov    %eax,0x4(%esp)
 815043b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815043e:	89 04 24             	mov    %eax,(%esp)
 8150441:	e8 5e 9a f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8150446:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815044d:	00 
 815044e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8150451:	89 04 24             	mov    %eax,(%esp)
 8150454:	e8 c7 b4 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8150459:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150460:	00 
 8150461:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8150464:	89 04 24             	mov    %eax,(%esp)
 8150467:	e8 b4 b4 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 815046c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150473:	00 
 8150474:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8150477:	89 04 24             	mov    %eax,(%esp)
 815047a:	e8 a1 b4 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 815047f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150486:	00 
 8150487:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815048a:	89 04 24             	mov    %eax,(%esp)
 815048d:	e8 8e b4 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8150492:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8150499:	00 
 815049a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815049d:	89 04 24             	mov    %eax,(%esp)
 81504a0:	e8 7b b4 f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81504a5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81504ac:	00 
 81504ad:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81504b0:	89 04 24             	mov    %eax,(%esp)
 81504b3:	e8 a0 b4 f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81504b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81504bb:	8b 40 04             	mov    0x4(%eax),%eax
 81504be:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81504c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81504c5:	89 04 24             	mov    %eax,(%esp)
 81504c8:	e8 81 cc 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81504cd:	bb 01 00 00 00       	mov    $0x1,%ebx
 81504d2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81504d5:	89 04 24             	mov    %eax,(%esp)
 81504d8:	e8 a3 d9 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81504dd:	e9 8e 01 00 00       	jmp    8150670 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2e8>
 81504e2:	89 d3                	mov    %edx,%ebx
 81504e4:	89 c6                	mov    %eax,%esi
 81504e6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81504e9:	89 04 24             	mov    %eax,(%esp)
 81504ec:	e8 8f d9 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81504f1:	89 f0                	mov    %esi,%eax
 81504f3:	89 da                	mov    %ebx,%edx
 81504f5:	e9 58 01 00 00       	jmp    8150652 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2ca>
 81504fa:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8150501:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8150504:	89 44 24 08          	mov    %eax,0x8(%esp)
 8150508:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 815050e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150512:	8b 45 08             	mov    0x8(%ebp),%eax
 8150515:	89 04 24             	mov    %eax,(%esp)
 8150518:	e8 e3 cd ff ff       	call   814d300 <_ZN8WongWork10CBossStage17KillMonsterGetExpERK11map_monsterRj>
 815051d:	83 f0 01             	xor    $0x1,%eax
 8150520:	84 c0                	test   %al,%al
 8150522:	74 0a                	je     815052e <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1a6>
 8150524:	bb 00 00 00 00       	mov    $0x0,%ebx
 8150529:	e9 42 01 00 00       	jmp    8150670 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2e8>
 815052e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8150531:	89 c6                	mov    %eax,%esi
 8150533:	8b 45 0c             	mov    0xc(%ebp),%eax
 8150536:	89 04 24             	mov    %eax,(%esp)
 8150539:	e8 80 15 00 00       	call   8151abe <_ZNK15CUserCharacInfo15getCurCharacExpEv>
 815053e:	89 c3                	mov    %eax,%ebx
 8150540:	0f b6 85 90 fc ff ff 	movzbl -0x370(%ebp),%eax
 8150547:	3c 05                	cmp    $0x5,%al
 8150549:	0f 94 c0             	sete   %al
 815054c:	0f b6 c0             	movzbl %al,%eax
 815054f:	89 85 6c fc ff ff    	mov    %eax,-0x394(%ebp)
 8150555:	0f b6 85 90 fc ff ff 	movzbl -0x370(%ebp),%eax
 815055c:	0f be c0             	movsbl %al,%eax
 815055f:	89 85 70 fc ff ff    	mov    %eax,-0x390(%ebp)
 8150565:	8b 45 18             	mov    0x18(%ebp),%eax
 8150568:	0f b7 80 26 0a 00 00 	movzwl 0xa26(%eax),%eax
 815056f:	0f b7 c0             	movzwl %ax,%eax
 8150572:	89 85 74 fc ff ff    	mov    %eax,-0x38c(%ebp)
 8150578:	8b 45 18             	mov    0x18(%ebp),%eax
 815057b:	0f b7 80 24 0a 00 00 	movzwl 0xa24(%eax),%eax
 8150582:	0f b7 c0             	movzwl %ax,%eax
 8150585:	89 85 78 fc ff ff    	mov    %eax,-0x388(%ebp)
 815058b:	8b 45 18             	mov    0x18(%ebp),%eax
 815058e:	8b 80 1a 0a 00 00    	mov    0xa1a(%eax),%eax
 8150594:	89 85 7c fc ff ff    	mov    %eax,-0x384(%ebp)
 815059a:	8b 45 18             	mov    0x18(%ebp),%eax
 815059d:	8b b8 1e 0a 00 00    	mov    0xa1e(%eax),%edi
 81505a3:	8b 8d 94 fc ff ff    	mov    -0x36c(%ebp),%ecx
 81505a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81505ac:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 81505b2:	c7 44 24 2c 0b 00 00 	movl   $0xb,0x2c(%esp)
 81505b9:	00 
 81505ba:	89 74 24 28          	mov    %esi,0x28(%esp)
 81505be:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 81505c2:	8b 85 6c fc ff ff    	mov    -0x394(%ebp),%eax
 81505c8:	89 44 24 20          	mov    %eax,0x20(%esp)
 81505cc:	8b 85 70 fc ff ff    	mov    -0x390(%ebp),%eax
 81505d2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81505d6:	8b 45 18             	mov    0x18(%ebp),%eax
 81505d9:	89 44 24 18          	mov    %eax,0x18(%esp)
 81505dd:	8b 85 74 fc ff ff    	mov    -0x38c(%ebp),%eax
 81505e3:	89 44 24 14          	mov    %eax,0x14(%esp)
 81505e7:	8b 85 78 fc ff ff    	mov    -0x388(%ebp),%eax
 81505ed:	89 44 24 10          	mov    %eax,0x10(%esp)
 81505f1:	8b 85 7c fc ff ff    	mov    -0x384(%ebp),%eax
 81505f7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81505fb:	89 7c 24 08          	mov    %edi,0x8(%esp)
 81505ff:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8150603:	89 14 24             	mov    %edx,(%esp)
 8150606:	e8 a1 4b 53 00       	call   86851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>
 815060b:	0f b7 8d 80 fc ff ff 	movzwl -0x380(%ebp),%ecx
 8150612:	0f b7 95 84 fc ff ff 	movzwl -0x37c(%ebp),%edx
 8150619:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815061c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8150620:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8150624:	89 44 24 08          	mov    %eax,0x8(%esp)
 8150628:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 815062e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8150632:	8b 45 08             	mov    0x8(%ebp),%eax
 8150635:	89 04 24             	mov    %eax,(%esp)
 8150638:	e8 eb cf ff ff       	call   814d628 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt>
 815063d:	83 f0 01             	xor    $0x1,%eax
 8150640:	84 c0                	test   %al,%al
 8150642:	74 07                	je     815064b <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2c3>
 8150644:	bb 00 00 00 00       	mov    $0x0,%ebx
 8150649:	eb 25                	jmp    8150670 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2e8>
 815064b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8150650:	eb 1e                	jmp    8150670 <_ZN8WongWork10CBossStage17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2e8>
 8150652:	89 d3                	mov    %edx,%ebx
 8150654:	89 c6                	mov    %eax,%esi
 8150656:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 815065c:	89 04 24             	mov    %eax,(%esp)
 815065f:	e8 4a 0f 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 8150664:	89 f0                	mov    %esi,%eax
 8150666:	89 da                	mov    %ebx,%edx
 8150668:	89 04 24             	mov    %eax,(%esp)
 815066b:	e8 e0 30 99 00       	call   8ae3750 <_Unwind_Resume>
 8150670:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 8150676:	89 04 24             	mov    %eax,(%esp)
 8150679:	e8 30 0f 00 00       	call   81515ae <_ZN11map_monsterD1Ev>
 815067e:	89 d8                	mov    %ebx,%eax
 8150680:	81 c4 bc 03 00 00    	add    $0x3bc,%esp
 8150686:	5b                   	pop    %ebx
 8150687:	5e                   	pop    %esi
 8150688:	5f                   	pop    %edi
 8150689:	5d                   	pop    %ebp
 815068a:	c3                   	ret

```

```c
// WongWork::CBossStage::handleKillMonster @ 0x8150388

/* WongWork::CBossStage::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE
   const&, int*) */

undefined4
WongWork::CBossStage::handleKillMonster
          (CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  map_monster local_37c [8];
  char local_374;
  undefined4 local_370;
  PacketGuard local_30 [12];
  uint local_24;
  int local_20 [4];
  
  map_monster::map_monster(local_37c);
  local_20[0] = 0;
                    /* try { // try from 081503df to 08150414 has its CatchHandler @ 08150652 */
  cVar2 = killMonsterErase((CBossStage *)param_1,param_3,local_37c,local_20);
  if (cVar2 == '\x01') {
    if (*(int *)(*(int *)(param_1 + 4) + 0xcd8) == 1) {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0815042b to 081504cc has its CatchHandler @ 081504e2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x26);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)param_3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CParty::send_to_party(*(CParty **)(param_1 + 4),local_30);
      uVar3 = 1;
                    /* try { // try from 081504d8 to 081504dc has its CatchHandler @ 08150652 */
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      local_24 = 0;
                    /* try { // try from 08150518 to 0815063c has its CatchHandler @ 08150652 */
      cVar2 = KillMonsterGetExp((CBossStage *)param_1,local_37c,&local_24);
      uVar1 = local_24;
      if (cVar2 == '\x01') {
        uVar3 = CUserCharacInfo::getCurCharacExp(_param_2);
        cUserHistoryLog::KillMonster
                  ((cUserHistoryLog *)(_param_2 + 0x79700),local_370,
                   *(undefined4 *)((int)param_5 + 0xa1e),*(undefined4 *)((int)param_5 + 0xa1a),
                   (short)param_5[0x289],*(undefined2 *)((int)param_5 + 0xa26),param_5,
                   (int)local_374,local_374 == '\x05',uVar3,uVar1,0xb);
        cVar2 = killMonsterDropItem((CBossStage *)param_1,local_37c,local_20[0],param_3,
                                    (ushort)param_4);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  map_monster::~map_monster(local_37c);
  return uVar3;
}

```

---

## handleMoveMap

```asm
// === 0814f66a WongWork::CBossStage::handleMoveMap  [0x0814f66a-0x814fa75] ===
 814f66a:	55                   	push   %ebp
 814f66b:	89 e5                	mov    %esp,%ebp
 814f66d:	56                   	push   %esi
 814f66e:	53                   	push   %ebx
 814f66f:	83 ec 50             	sub    $0x50,%esp
 814f672:	8b 45 08             	mov    0x8(%ebp),%eax
 814f675:	8b 00                	mov    (%eax),%eax
 814f677:	83 c0 08             	add    $0x8,%eax
 814f67a:	8b 10                	mov    (%eax),%edx
 814f67c:	8b 45 08             	mov    0x8(%ebp),%eax
 814f67f:	89 04 24             	mov    %eax,(%esp)
 814f682:	ff d2                	call   *%edx
 814f684:	84 c0                	test   %al,%al
 814f686:	74 0a                	je     814f692 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x28>
 814f688:	bb 00 00 00 00       	mov    $0x0,%ebx
 814f68d:	e9 da 03 00 00       	jmp    814fa6c <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x402>
 814f692:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 814f699:	8b 45 08             	mov    0x8(%ebp),%eax
 814f69c:	8b 90 ec 09 00 00    	mov    0x9ec(%eax),%edx
 814f6a2:	8b 45 08             	mov    0x8(%ebp),%eax
 814f6a5:	8b 80 e8 09 00 00    	mov    0x9e8(%eax),%eax
 814f6ab:	89 d1                	mov    %edx,%ecx
 814f6ad:	29 c1                	sub    %eax,%ecx
 814f6af:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 814f6b4:	89 c8                	mov    %ecx,%eax
 814f6b6:	f7 ea                	imul   %edx
 814f6b8:	c1 fa 06             	sar    $0x6,%edx
 814f6bb:	89 c8                	mov    %ecx,%eax
 814f6bd:	c1 f8 1f             	sar    $0x1f,%eax
 814f6c0:	89 d1                	mov    %edx,%ecx
 814f6c2:	29 c1                	sub    %eax,%ecx
 814f6c4:	89 c8                	mov    %ecx,%eax
 814f6c6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814f6c9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 814f6d0:	e9 5f 01 00 00       	jmp    814f834 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x1ca>
 814f6d5:	8b 45 08             	mov    0x8(%ebp),%eax
 814f6d8:	8b 40 04             	mov    0x4(%eax),%eax
 814f6db:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 814f6de:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f6e2:	89 04 24             	mov    %eax,(%esp)
 814f6e5:	e8 7a 60 ff ff       	call   8145764 <_ZN6CParty8get_userEi>
 814f6ea:	89 45 e8             	mov    %eax,-0x18(%ebp)
 814f6ed:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 814f6f1:	74 1c                	je     814f70f <_ZN8WongWork10CBossStage13handleMoveMapEPt+0xa5>
 814f6f3:	8b 45 08             	mov    0x8(%ebp),%eax
 814f6f6:	8b 40 04             	mov    0x4(%eax),%eax
 814f6f9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 814f6fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f700:	89 04 24             	mov    %eax,(%esp)
 814f703:	e8 60 61 ff ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 814f708:	83 f0 01             	xor    $0x1,%eax
 814f70b:	84 c0                	test   %al,%al
 814f70d:	74 07                	je     814f716 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0xac>
 814f70f:	b8 01 00 00 00       	mov    $0x1,%eax
 814f714:	eb 05                	jmp    814f71b <_ZN8WongWork10CBossStage13handleMoveMapEPt+0xb1>
 814f716:	b8 00 00 00 00       	mov    $0x0,%eax
 814f71b:	84 c0                	test   %al,%al
 814f71d:	0f 85 0c 01 00 00    	jne    814f82f <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x1c5>
 814f723:	83 7d e0 04          	cmpl   $0x4,-0x20(%ebp)
 814f727:	7f 3a                	jg     814f763 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0xf9>
 814f729:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814f72c:	89 04 24             	mov    %eax,(%esp)
 814f72f:	e8 26 a2 fa ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 814f734:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 814f73b:	00 
 814f73c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 814f743:	00 
 814f744:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814f74b:	00 
 814f74c:	c7 44 24 08 9f 01 00 	movl   $0x19f,0x8(%esp)
 814f753:	00 
 814f754:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814f757:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f75b:	89 04 24             	mov    %eax,(%esp)
 814f75e:	e8 1b 95 fa ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 814f763:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814f766:	01 c0                	add    %eax,%eax
 814f768:	03 45 0c             	add    0xc(%ebp),%eax
 814f76b:	0f b7 00             	movzwl (%eax),%eax
 814f76e:	66 85 c0             	test   %ax,%ax
 814f771:	75 3a                	jne    814f7ad <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x143>
 814f773:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814f776:	89 04 24             	mov    %eax,(%esp)
 814f779:	e8 dc a1 fa ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 814f77e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 814f785:	00 
 814f786:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 814f78d:	00 
 814f78e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814f795:	00 
 814f796:	c7 44 24 08 9b 01 00 	movl   $0x19b,0x8(%esp)
 814f79d:	00 
 814f79e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814f7a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f7a5:	89 04 24             	mov    %eax,(%esp)
 814f7a8:	e8 d1 94 fa ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 814f7ad:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 814f7b0:	8b 45 08             	mov    0x8(%ebp),%eax
 814f7b3:	81 c2 70 02 00 00    	add    $0x270,%edx
 814f7b9:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 814f7bd:	85 c0                	test   %eax,%eax
 814f7bf:	75 3a                	jne    814f7fb <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x191>
 814f7c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 814f7c4:	89 04 24             	mov    %eax,(%esp)
 814f7c7:	e8 8e a1 fa ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 814f7cc:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 814f7d3:	00 
 814f7d4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 814f7db:	00 
 814f7dc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 814f7e3:	00 
 814f7e4:	c7 44 24 08 dd 00 00 	movl   $0xdd,0x8(%esp)
 814f7eb:	00 
 814f7ec:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814f7ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 814f7f3:	89 04 24             	mov    %eax,(%esp)
 814f7f6:	e8 83 94 fa ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 814f7fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814f7fe:	01 c0                	add    %eax,%eax
 814f800:	03 45 0c             	add    0xc(%ebp),%eax
 814f803:	0f b7 00             	movzwl (%eax),%eax
 814f806:	0f b7 c0             	movzwl %ax,%eax
 814f809:	8b 55 e8             	mov    -0x18(%ebp),%edx
 814f80c:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 814f812:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 814f819:	00 
 814f81a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 814f81d:	89 54 24 08          	mov    %edx,0x8(%esp)
 814f821:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f825:	89 0c 24             	mov    %ecx,(%esp)
 814f828:	e8 f5 52 53 00       	call   8684b22 <_ZN15cUserHistoryLog8MapClearEtii>
 814f82d:	eb 01                	jmp    814f830 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x1c6>
 814f82f:	90                   	nop
 814f830:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 814f834:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 814f838:	0f 9e c0             	setle  %al
 814f83b:	84 c0                	test   %al,%al
 814f83d:	0f 85 92 fe ff ff    	jne    814f6d5 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x6b>
 814f843:	8b 45 08             	mov    0x8(%ebp),%eax
 814f846:	89 04 24             	mov    %eax,(%esp)
 814f849:	e8 68 d9 ff ff       	call   814d1b6 <_ZN8WongWork10CBossStage13moveNextStageEv>
 814f84e:	84 c0                	test   %al,%al
 814f850:	0f 84 11 02 00 00    	je     814fa67 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x3fd>
 814f856:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 814f85d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 814f860:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f864:	8b 45 08             	mov    0x8(%ebp),%eax
 814f867:	89 04 24             	mov    %eax,(%esp)
 814f86a:	e8 8d fc ff ff       	call   814f4fc <_ZN8WongWork10CBossStage14randomMapIndexERi>
 814f86f:	83 f0 01             	xor    $0x1,%eax
 814f872:	84 c0                	test   %al,%al
 814f874:	74 0a                	je     814f880 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x216>
 814f876:	bb 00 00 00 00       	mov    $0x0,%ebx
 814f87b:	e9 ec 01 00 00       	jmp    814fa6c <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x402>
 814f880:	8b 45 08             	mov    0x8(%ebp),%eax
 814f883:	8b 40 04             	mov    0x4(%eax),%eax
 814f886:	89 04 24             	mov    %eax,(%esp)
 814f889:	e8 f2 5e ff ff       	call   8145780 <_ZN6CParty10getManagerEv>
 814f88e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 814f891:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f894:	89 04 24             	mov    %eax,(%esp)
 814f897:	e8 00 60 ff ff       	call   814589c <_ZN5CUser8isGMUserEv>
 814f89c:	84 c0                	test   %al,%al
 814f89e:	74 54                	je     814f8f4 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x28a>
 814f8a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f8a3:	8b 80 d0 96 07 00    	mov    0x796d0(%eax),%eax
 814f8a9:	85 c0                	test   %eax,%eax
 814f8ab:	74 19                	je     814f8c6 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x25c>
 814f8ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f8b0:	8b 80 d0 96 07 00    	mov    0x796d0(%eax),%eax
 814f8b6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 814f8b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f8bc:	c7 80 d0 96 07 00 00 	movl   $0x0,0x796d0(%eax)
 814f8c3:	00 00 00 
 814f8c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f8c9:	0f b6 80 cc 96 07 00 	movzbl 0x796cc(%eax),%eax
 814f8d0:	84 c0                	test   %al,%al
 814f8d2:	74 20                	je     814f8f4 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x28a>
 814f8d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f8d7:	0f b6 80 cc 96 07 00 	movzbl 0x796cc(%eax),%eax
 814f8de:	0f be d0             	movsbl %al,%edx
 814f8e1:	8b 45 08             	mov    0x8(%ebp),%eax
 814f8e4:	89 90 e8 0a 00 00    	mov    %edx,0xae8(%eax)
 814f8ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 814f8ed:	c6 80 cc 96 07 00 00 	movb   $0x0,0x796cc(%eax)
 814f8f4:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 814f8f7:	e8 9f c8 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814f8fc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814f900:	89 04 24             	mov    %eax,(%esp)
 814f903:	e8 0c 01 21 00       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 814f908:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814f90b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 814f90f:	75 0a                	jne    814f91b <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x2b1>
 814f911:	bb 00 00 00 00       	mov    $0x0,%ebx
 814f916:	e9 51 01 00 00       	jmp    814fa6c <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x402>
 814f91b:	8b 45 08             	mov    0x8(%ebp),%eax
 814f91e:	89 04 24             	mov    %eax,(%esp)
 814f921:	e8 7c c5 ff ff       	call   814bea2 <_ZN8WongWork10CBossStage5resetEv>
 814f926:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814f929:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f92d:	8b 45 08             	mov    0x8(%ebp),%eax
 814f930:	89 04 24             	mov    %eax,(%esp)
 814f933:	e8 bc c5 ff ff       	call   814bef4 <_ZN8WongWork10CBossStage10consistMapEPK4CMap>
 814f938:	83 f0 01             	xor    $0x1,%eax
 814f93b:	84 c0                	test   %al,%al
 814f93d:	74 2c                	je     814f96b <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x301>
 814f93f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 814f946:	e8 b5 5e 5d 00       	call   8725800 <__cxa_allocate_exception>
 814f94b:	89 c2                	mov    %eax,%edx
 814f94d:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 814f953:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814f95a:	00 
 814f95b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 814f962:	08 
 814f963:	89 04 24             	mov    %eax,(%esp)
 814f966:	e8 e5 52 5d 00       	call   8724c50 <__cxa_throw>
 814f96b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 814f972:	e8 35 5f ff ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 814f977:	89 c2                	mov    %eax,%edx
 814f979:	8b 45 08             	mov    0x8(%ebp),%eax
 814f97c:	89 90 e8 09 00 00    	mov    %edx,0x9e8(%eax)
 814f982:	8b 45 08             	mov    0x8(%ebp),%eax
 814f985:	89 04 24             	mov    %eax,(%esp)
 814f988:	e8 85 d4 ff ff       	call   814ce12 <_ZN8WongWork10CBossStage17SendMapInfoPacketEv>
 814f98d:	bb 01 00 00 00       	mov    $0x1,%ebx
 814f992:	e9 d5 00 00 00       	jmp    814fa6c <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x402>
 814f997:	83 fa 01             	cmp    $0x1,%edx
 814f99a:	74 08                	je     814f9a4 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x33a>
 814f99c:	89 04 24             	mov    %eax,(%esp)
 814f99f:	e8 ac 3d 99 00       	call   8ae3750 <_Unwind_Resume>
 814f9a4:	89 04 24             	mov    %eax,(%esp)
 814f9a7:	e8 34 63 5d 00       	call   8725ce0 <__cxa_begin_catch>
 814f9ac:	8b 00                	mov    (%eax),%eax
 814f9ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814f9b1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814f9b4:	89 04 24             	mov    %eax,(%esp)
 814f9b7:	e8 90 e3 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814f9bc:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 814f9c3:	00 
 814f9c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814f9cb:	00 
 814f9cc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814f9cf:	89 04 24             	mov    %eax,(%esp)
 814f9d2:	e8 25 bf f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814f9d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814f9de:	00 
 814f9df:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814f9e2:	89 04 24             	mov    %eax,(%esp)
 814f9e5:	e8 36 bf f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f9ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814f9ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f9f1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814f9f4:	89 04 24             	mov    %eax,(%esp)
 814f9f7:	e8 24 bf f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814f9fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814fa03:	00 
 814fa04:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814fa07:	89 04 24             	mov    %eax,(%esp)
 814fa0a:	e8 49 bf f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814fa0f:	8b 45 08             	mov    0x8(%ebp),%eax
 814fa12:	8b 40 04             	mov    0x4(%eax),%eax
 814fa15:	8d 55 d0             	lea    -0x30(%ebp),%edx
 814fa18:	89 54 24 04          	mov    %edx,0x4(%esp)
 814fa1c:	89 04 24             	mov    %eax,(%esp)
 814fa1f:	e8 2a d7 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814fa24:	bb 00 00 00 00       	mov    $0x0,%ebx
 814fa29:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814fa2c:	89 04 24             	mov    %eax,(%esp)
 814fa2f:	e8 4c e4 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814fa34:	eb 2a                	jmp    814fa60 <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x3f6>
 814fa36:	89 d3                	mov    %edx,%ebx
 814fa38:	89 c6                	mov    %eax,%esi
 814fa3a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814fa3d:	89 04 24             	mov    %eax,(%esp)
 814fa40:	e8 3b e4 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814fa45:	89 f0                	mov    %esi,%eax
 814fa47:	89 da                	mov    %ebx,%edx
 814fa49:	eb 00                	jmp    814fa4b <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x3e1>
 814fa4b:	89 d3                	mov    %edx,%ebx
 814fa4d:	89 c6                	mov    %eax,%esi
 814fa4f:	e8 dc 61 5d 00       	call   8725c30 <__cxa_end_catch>
 814fa54:	89 f0                	mov    %esi,%eax
 814fa56:	89 da                	mov    %ebx,%edx
 814fa58:	89 04 24             	mov    %eax,(%esp)
 814fa5b:	e8 f0 3c 99 00       	call   8ae3750 <_Unwind_Resume>
 814fa60:	e8 cb 61 5d 00       	call   8725c30 <__cxa_end_catch>
 814fa65:	eb 05                	jmp    814fa6c <_ZN8WongWork10CBossStage13handleMoveMapEPt+0x402>
 814fa67:	bb 00 00 00 00       	mov    $0x0,%ebx
 814fa6c:	89 d8                	mov    %ebx,%eax
 814fa6e:	83 c4 50             	add    $0x50,%esp
 814fa71:	5b                   	pop    %ebx
 814fa72:	5e                   	pop    %esi
 814fa73:	5d                   	pop    %ebp
 814fa74:	c3                   	ret
 814fa75:	90                   	nop

```

```c
// WongWork::CBossStage::handleMoveMap @ 0x814f66a

/* WongWork::CBossStage::handleMoveMap(unsigned short*) */

undefined4 __thiscall WongWork::CBossStage::handleMoveMap(CBossStage *this,ushort *param_1)

{
  bool bVar1;
  char cVar2;
  CHackAnalyzer *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_28;
  int local_24;
  int local_20;
  CUser *local_1c;
  CUser *local_18;
  CMap *local_14;
  
  cVar2 = (**(code **)(*(int *)this + 8))(this);
  if (cVar2 == '\0') {
    local_24 = (*(int *)(this + 0x9ec) - *(int *)(this + 0x9e8)) / 1000;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      local_1c = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_20);
      if (local_1c == (CUser *)0x0) {
LAB_0814f70f:
        bVar1 = true;
      }
      else {
        cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_20);
        if (cVar2 != '\x01') goto LAB_0814f70f;
        bVar1 = false;
      }
      if (!bVar1) {
        if (local_24 < 5) {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
          CHackAnalyzer::addServerHackCnt(pCVar3,local_1c,0x19f,1,0,0);
        }
        if (param_1[local_20] == 0) {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
          CHackAnalyzer::addServerHackCnt(pCVar3,local_1c,0x19b,1,0,0);
        }
        if (*(int *)(this + (local_20 + 0x270) * 4 + 8) == 0) {
          pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
          CHackAnalyzer::addServerHackCnt(pCVar3,local_1c,0xdd,1,0,0);
        }
        cUserHistoryLog::MapClear
                  ((cUserHistoryLog *)(local_1c + 0x79700),param_1[local_20],local_24,0);
      }
    }
    cVar2 = moveNextStage(this);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      local_28 = 0;
                    /* try { // try from 0814f86a to 0814f96a has its CatchHandler @ 0814f997 */
      cVar2 = randomMapIndex(this,&local_28);
      if (cVar2 == '\x01') {
        local_18 = (CUser *)CParty::getManager(*(CParty **)(this + 4));
        cVar2 = CUser::isGMUser(local_18);
        if (cVar2 != '\0') {
          if (*(int *)(local_18 + 0x796d0) != 0) {
            local_28 = *(int *)(local_18 + 0x796d0);
            *(undefined4 *)(local_18 + 0x796d0) = 0;
          }
          if (local_18[0x796cc] != (CUser)0x0) {
            *(int *)(this + 0xae8) = (int)(char)local_18[0x796cc];
            local_18[0x796cc] = (CUser)0x0;
          }
        }
        iVar4 = G_CDataManager();
        local_14 = (CMap *)CDataManager::find_map(iVar4);
        if (local_14 == (CMap *)0x0) {
          uVar6 = 0;
        }
        else {
          reset(this);
          cVar2 = consistMap(this,local_14);
          if (cVar2 != '\x01') {
            puVar5 = (undefined4 *)__cxa_allocate_exception(4);
            *puVar5 = 1;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar5,&ENUM_ERROR::typeinfo,0);
          }
          uVar6 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          *(undefined4 *)(this + 0x9e8) = uVar6;
          SendMapInfoPacket(this);
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## handlePickupItem

```asm
// === 0814fa76 WongWork::CBossStage::handlePickupItem  [0x0814fa76-0x814ff49] ===
 814fa76:	55                   	push   %ebp
 814fa77:	89 e5                	mov    %esp,%ebp
 814fa79:	57                   	push   %edi
 814fa7a:	56                   	push   %esi
 814fa7b:	53                   	push   %ebx
 814fa7c:	81 ec ec 00 00 00    	sub    $0xec,%esp
 814fa82:	8b 45 14             	mov    0x14(%ebp),%eax
 814fa85:	88 85 24 ff ff ff    	mov    %al,-0xdc(%ebp)
 814fa8b:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 814fa91:	89 04 24             	mov    %eax,(%esp)
 814fa94:	e8 33 18 00 00       	call   81512cc <_ZN8map_itemC1Ev>
 814fa99:	8b 45 08             	mov    0x8(%ebp),%eax
 814fa9c:	8d 88 18 0a 00 00    	lea    0xa18(%eax),%ecx
 814faa2:	8d 45 94             	lea    -0x6c(%ebp),%eax
 814faa5:	8d 55 10             	lea    0x10(%ebp),%edx
 814faa8:	89 54 24 08          	mov    %edx,0x8(%esp)
 814faac:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814fab0:	89 04 24             	mov    %eax,(%esp)
 814fab3:	e8 7a 2a 00 00       	call   8152532 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 814fab8:	83 ec 04             	sub    $0x4,%esp
 814fabb:	8d 45 94             	lea    -0x6c(%ebp),%eax
 814fabe:	89 44 24 04          	mov    %eax,0x4(%esp)
 814fac2:	8d 45 90             	lea    -0x70(%ebp),%eax
 814fac5:	89 04 24             	mov    %eax,(%esp)
 814fac8:	e8 d5 34 00 00       	call   8152fa2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 814facd:	8b 45 08             	mov    0x8(%ebp),%eax
 814fad0:	8d 90 18 0a 00 00    	lea    0xa18(%eax),%edx
 814fad6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 814fad9:	89 54 24 04          	mov    %edx,0x4(%esp)
 814fadd:	89 04 24             	mov    %eax,(%esp)
 814fae0:	e8 79 2a 00 00       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 814fae5:	83 ec 04             	sub    $0x4,%esp
 814fae8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 814faeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 814faef:	8d 45 98             	lea    -0x68(%ebp),%eax
 814faf2:	89 04 24             	mov    %eax,(%esp)
 814faf5:	e8 a8 34 00 00       	call   8152fa2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 814fafa:	8d 45 98             	lea    -0x68(%ebp),%eax
 814fafd:	89 44 24 04          	mov    %eax,0x4(%esp)
 814fb01:	8d 45 90             	lea    -0x70(%ebp),%eax
 814fb04:	89 04 24             	mov    %eax,(%esp)
 814fb07:	e8 a6 34 00 00       	call   8152fb2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEneERKS4_>
 814fb0c:	84 c0                	test   %al,%al
 814fb0e:	74 34                	je     814fb44 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0xce>
 814fb10:	8d 45 90             	lea    -0x70(%ebp),%eax
 814fb13:	89 04 24             	mov    %eax,(%esp)
 814fb16:	e8 ab 34 00 00       	call   8152fc6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEptEv>
 814fb1b:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 814fb21:	8d 58 04             	lea    0x4(%eax),%ebx
 814fb24:	b8 15 00 00 00       	mov    $0x15,%eax
 814fb29:	89 d7                	mov    %edx,%edi
 814fb2b:	89 de                	mov    %ebx,%esi
 814fb2d:	89 c1                	mov    %eax,%ecx
 814fb2f:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 814fb31:	8b 85 42 ff ff ff    	mov    -0xbe(%ebp),%eax
 814fb37:	85 c0                	test   %eax,%eax
 814fb39:	0f 85 ee 00 00 00    	jne    814fc2d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x1b7>
 814fb3f:	e9 c3 03 00 00       	jmp    814ff07 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x491>
 814fb44:	8b 5d 10             	mov    0x10(%ebp),%ebx
 814fb47:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814fb4e:	00 
 814fb4f:	c7 44 24 08 6e 05 00 	movl   $0x56e,0x8(%esp)
 814fb56:	00 
 814fb57:	c7 44 24 04 20 5e b7 	movl   $0x8b75e20,0x4(%esp)
 814fb5e:	08 
 814fb5f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 814fb62:	89 04 24             	mov    %eax,(%esp)
 814fb65:	e8 ae fb 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 814fb6a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 814fb6e:	c7 44 24 04 48 51 b7 	movl   $0x8b75148,0x4(%esp)
 814fb75:	08 
 814fb76:	8d 45 a0             	lea    -0x60(%ebp),%eax
 814fb79:	89 04 24             	mov    %eax,(%esp)
 814fb7c:	e8 07 fc 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 814fb81:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fb84:	89 04 24             	mov    %eax,(%esp)
 814fb87:	e8 c0 e1 43 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814fb8c:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fb8f:	89 04 24             	mov    %eax,(%esp)
 814fb92:	e8 4f bd f7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814fb97:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 814fb9e:	00 
 814fb9f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814fba6:	00 
 814fba7:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fbaa:	89 04 24             	mov    %eax,(%esp)
 814fbad:	e8 4a bd f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814fbb2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814fbb9:	00 
 814fbba:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fbbd:	89 04 24             	mov    %eax,(%esp)
 814fbc0:	e8 5b bd f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814fbc5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814fbcc:	00 
 814fbcd:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fbd0:	89 04 24             	mov    %eax,(%esp)
 814fbd3:	e8 48 bd f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814fbd8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814fbdf:	00 
 814fbe0:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fbe3:	89 04 24             	mov    %eax,(%esp)
 814fbe6:	e8 6d bd f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814fbeb:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fbee:	89 44 24 04          	mov    %eax,0x4(%esp)
 814fbf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 814fbf5:	89 04 24             	mov    %eax,(%esp)
 814fbf8:	e8 bd 89 4f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 814fbfd:	bb 00 00 00 00       	mov    $0x0,%ebx
 814fc02:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fc05:	89 04 24             	mov    %eax,(%esp)
 814fc08:	e8 73 e2 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814fc0d:	e9 2b 03 00 00       	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814fc12:	89 d3                	mov    %edx,%ebx
 814fc14:	89 c6                	mov    %eax,%esi
 814fc16:	8d 45 84             	lea    -0x7c(%ebp),%eax
 814fc19:	89 04 24             	mov    %eax,(%esp)
 814fc1c:	e8 5f e2 43 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814fc21:	89 f0                	mov    %esi,%eax
 814fc23:	89 da                	mov    %ebx,%edx
 814fc25:	89 04 24             	mov    %eax,(%esp)
 814fc28:	e8 23 3b 99 00       	call   8ae3750 <_Unwind_Resume>
 814fc2d:	8b 85 42 ff ff ff    	mov    -0xbe(%ebp),%eax
 814fc33:	89 c3                	mov    %eax,%ebx
 814fc35:	e8 61 c5 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814fc3a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814fc3e:	89 04 24             	mov    %eax,(%esp)
 814fc41:	e8 ec fd 20 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814fc46:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814fc49:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 814fc4d:	75 51                	jne    814fca0 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x22a>
 814fc4f:	8b 75 10             	mov    0x10(%ebp),%esi
 814fc52:	8b 9d 42 ff ff ff    	mov    -0xbe(%ebp),%ebx
 814fc58:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814fc5f:	00 
 814fc60:	c7 44 24 08 7f 05 00 	movl   $0x57f,0x8(%esp)
 814fc67:	00 
 814fc68:	c7 44 24 04 20 5e b7 	movl   $0x8b75e20,0x4(%esp)
 814fc6f:	08 
 814fc70:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814fc73:	89 04 24             	mov    %eax,(%esp)
 814fc76:	e8 9d fa 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 814fc7b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 814fc7f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 814fc83:	c7 44 24 04 70 51 b7 	movl   $0x8b75170,0x4(%esp)
 814fc8a:	08 
 814fc8b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814fc8e:	89 04 24             	mov    %eax,(%esp)
 814fc91:	e8 f2 fa 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 814fc96:	bb 00 00 00 00       	mov    $0x0,%ebx
 814fc9b:	e9 9d 02 00 00       	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814fca0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 814fca7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fcaa:	89 04 24             	mov    %eax,(%esp)
 814fcad:	e8 48 16 fa ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 814fcb2:	84 c0                	test   %al,%al
 814fcb4:	74 25                	je     814fcdb <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x265>
 814fcb6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fcb9:	8b 00                	mov    (%eax),%eax
 814fcbb:	83 c0 0c             	add    $0xc,%eax
 814fcbe:	8b 10                	mov    (%eax),%edx
 814fcc0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fcc3:	89 04 24             	mov    %eax,(%esp)
 814fcc6:	ff d2                	call   *%edx
 814fcc8:	83 f8 09             	cmp    $0x9,%eax
 814fccb:	0f 94 c0             	sete   %al
 814fcce:	84 c0                	test   %al,%al
 814fcd0:	74 45                	je     814fd17 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2a1>
 814fcd2:	c7 45 e4 07 00 00 00 	movl   $0x7,-0x1c(%ebp)
 814fcd9:	eb 3c                	jmp    814fd17 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2a1>
 814fcdb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fcde:	8b 00                	mov    (%eax),%eax
 814fce0:	83 c0 14             	add    $0x14,%eax
 814fce3:	8b 10                	mov    (%eax),%edx
 814fce5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fce8:	89 04 24             	mov    %eax,(%esp)
 814fceb:	ff d2                	call   *%edx
 814fced:	84 c0                	test   %al,%al
 814fcef:	74 09                	je     814fcfa <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x284>
 814fcf1:	c7 45 e4 07 00 00 00 	movl   $0x7,-0x1c(%ebp)
 814fcf8:	eb 1d                	jmp    814fd17 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2a1>
 814fcfa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fcfd:	8b 00                	mov    (%eax),%eax
 814fcff:	83 c0 10             	add    $0x10,%eax
 814fd02:	8b 10                	mov    (%eax),%edx
 814fd04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fd07:	89 04 24             	mov    %eax,(%esp)
 814fd0a:	ff d2                	call   *%edx
 814fd0c:	84 c0                	test   %al,%al
 814fd0e:	74 07                	je     814fd17 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2a1>
 814fd10:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 814fd17:	8b 45 08             	mov    0x8(%ebp),%eax
 814fd1a:	8b 40 04             	mov    0x4(%eax),%eax
 814fd1d:	89 04 24             	mov    %eax,(%esp)
 814fd20:	e8 45 a4 44 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814fd25:	83 f8 01             	cmp    $0x1,%eax
 814fd28:	7e 41                	jle    814fd6b <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2f5>
 814fd2a:	8b 45 08             	mov    0x8(%ebp),%eax
 814fd2d:	89 04 24             	mov    %eax,(%esp)
 814fd30:	e8 31 97 ff ff       	call   8149466 <_ZN8WongWork9CBossPlay18getLiveMemberCountEv>
 814fd35:	83 f8 01             	cmp    $0x1,%eax
 814fd38:	7e 31                	jle    814fd6b <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2f5>
 814fd3a:	0f b6 85 30 ff ff ff 	movzbl -0xd0(%ebp),%eax
 814fd41:	84 c0                	test   %al,%al
 814fd43:	74 26                	je     814fd6b <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2f5>
 814fd45:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fd48:	89 04 24             	mov    %eax,(%esp)
 814fd4b:	e8 86 15 fa ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 814fd50:	83 f8 04             	cmp    $0x4,%eax
 814fd53:	74 0f                	je     814fd64 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2ee>
 814fd55:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fd58:	89 04 24             	mov    %eax,(%esp)
 814fd5b:	e8 b8 11 00 00       	call   8150f18 <_ZNK5CItem13IsRoutingItemEv>
 814fd60:	84 c0                	test   %al,%al
 814fd62:	74 07                	je     814fd6b <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2f5>
 814fd64:	b8 01 00 00 00       	mov    $0x1,%eax
 814fd69:	eb 05                	jmp    814fd70 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x2fa>
 814fd6b:	b8 00 00 00 00       	mov    $0x0,%eax
 814fd70:	84 c0                	test   %al,%al
 814fd72:	74 3e                	je     814fdb2 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x33c>
 814fd74:	8b 45 10             	mov    0x10(%ebp),%eax
 814fd77:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 814fd7d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814fd81:	89 44 24 08          	mov    %eax,0x8(%esp)
 814fd85:	8b 45 0c             	mov    0xc(%ebp),%eax
 814fd88:	89 44 24 04          	mov    %eax,0x4(%esp)
 814fd8c:	8b 45 08             	mov    0x8(%ebp),%eax
 814fd8f:	89 04 24             	mov    %eax,(%esp)
 814fd92:	e8 e3 e7 ff ff       	call   814e57a <_ZN8WongWork10CBossStage17RoutingPickupItemEP5CUserjR8map_item>
 814fd97:	83 f0 01             	xor    $0x1,%eax
 814fd9a:	84 c0                	test   %al,%al
 814fd9c:	74 0a                	je     814fda8 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x332>
 814fd9e:	bb 00 00 00 00       	mov    $0x0,%ebx
 814fda3:	e9 95 01 00 00       	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814fda8:	bb 01 00 00 00       	mov    $0x1,%ebx
 814fdad:	e9 8b 01 00 00       	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814fdb2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fdb5:	89 04 24             	mov    %eax,(%esp)
 814fdb8:	e8 19 15 fa ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 814fdbd:	89 c2                	mov    %eax,%edx
 814fdbf:	8b 45 18             	mov    0x18(%ebp),%eax
 814fdc2:	88 10                	mov    %dl,(%eax)
 814fdc4:	8b 45 08             	mov    0x8(%ebp),%eax
 814fdc7:	8b 40 04             	mov    0x4(%eax),%eax
 814fdca:	89 04 24             	mov    %eax,(%esp)
 814fdcd:	e8 98 a3 44 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814fdd2:	83 f8 01             	cmp    $0x1,%eax
 814fdd5:	7e 52                	jle    814fe29 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3b3>
 814fdd7:	8b 45 08             	mov    0x8(%ebp),%eax
 814fdda:	89 04 24             	mov    %eax,(%esp)
 814fddd:	e8 84 96 ff ff       	call   8149466 <_ZN8WongWork9CBossPlay18getLiveMemberCountEv>
 814fde2:	83 f8 01             	cmp    $0x1,%eax
 814fde5:	7e 42                	jle    814fe29 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3b3>
 814fde7:	0f b6 85 30 ff ff ff 	movzbl -0xd0(%ebp),%eax
 814fdee:	84 c0                	test   %al,%al
 814fdf0:	74 37                	je     814fe29 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3b3>
 814fdf2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fdf5:	89 04 24             	mov    %eax,(%esp)
 814fdf8:	e8 d9 14 fa ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 814fdfd:	83 f8 01             	cmp    $0x1,%eax
 814fe00:	74 20                	je     814fe22 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3ac>
 814fe02:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fe05:	89 04 24             	mov    %eax,(%esp)
 814fe08:	e8 c9 14 fa ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 814fe0d:	83 f8 02             	cmp    $0x2,%eax
 814fe10:	74 10                	je     814fe22 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3ac>
 814fe12:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814fe15:	89 04 24             	mov    %eax,(%esp)
 814fe18:	e8 b9 14 fa ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 814fe1d:	83 f8 03             	cmp    $0x3,%eax
 814fe20:	75 07                	jne    814fe29 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3b3>
 814fe22:	b8 01 00 00 00       	mov    $0x1,%eax
 814fe27:	eb 05                	jmp    814fe2e <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x3b8>
 814fe29:	b8 00 00 00 00       	mov    $0x0,%eax
 814fe2e:	84 c0                	test   %al,%al
 814fe30:	74 6e                	je     814fea0 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x42a>
 814fe32:	8b 45 10             	mov    0x10(%ebp),%eax
 814fe35:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 814fe3b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814fe3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 814fe43:	8b 45 0c             	mov    0xc(%ebp),%eax
 814fe46:	89 44 24 04          	mov    %eax,0x4(%esp)
 814fe4a:	8b 45 08             	mov    0x8(%ebp),%eax
 814fe4d:	89 04 24             	mov    %eax,(%esp)
 814fe50:	e8 2f e8 ff ff       	call   814e684 <_ZN8WongWork10CBossStage16RandomPickupItemEP5CUserjRK8map_item>
 814fe55:	83 f0 01             	xor    $0x1,%eax
 814fe58:	84 c0                	test   %al,%al
 814fe5a:	0f 84 d8 00 00 00    	je     814ff38 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c2>
 814fe60:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814fe67:	00 
 814fe68:	c7 44 24 08 ac 05 00 	movl   $0x5ac,0x8(%esp)
 814fe6f:	00 
 814fe70:	c7 44 24 04 20 5e b7 	movl   $0x8b75e20,0x4(%esp)
 814fe77:	08 
 814fe78:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814fe7b:	89 04 24             	mov    %eax,(%esp)
 814fe7e:	e8 95 f8 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 814fe83:	c7 44 24 04 9b 51 b7 	movl   $0x8b7519b,0x4(%esp)
 814fe8a:	08 
 814fe8b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814fe8e:	89 04 24             	mov    %eax,(%esp)
 814fe91:	e8 f2 f8 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 814fe96:	bb 00 00 00 00       	mov    $0x0,%ebx
 814fe9b:	e9 9d 00 00 00       	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814fea0:	8b 45 10             	mov    0x10(%ebp),%eax
 814fea3:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 814fea9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814fead:	89 44 24 08          	mov    %eax,0x8(%esp)
 814feb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 814feb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814feb8:	8b 45 08             	mov    0x8(%ebp),%eax
 814febb:	89 04 24             	mov    %eax,(%esp)
 814febe:	e8 29 ee ff ff       	call   814ecec <_ZN8WongWork10CBossStage16NormalPickupItemEP5CUserjRK8map_item>
 814fec3:	83 f0 01             	xor    $0x1,%eax
 814fec6:	84 c0                	test   %al,%al
 814fec8:	74 6e                	je     814ff38 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c2>
 814feca:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 814fed1:	00 
 814fed2:	c7 44 24 08 b4 05 00 	movl   $0x5b4,0x8(%esp)
 814fed9:	00 
 814feda:	c7 44 24 04 20 5e b7 	movl   $0x8b75e20,0x4(%esp)
 814fee1:	08 
 814fee2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814fee5:	89 04 24             	mov    %eax,(%esp)
 814fee8:	e8 2b f8 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 814feed:	c7 44 24 04 b2 51 b7 	movl   $0x8b751b2,0x4(%esp)
 814fef4:	08 
 814fef5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814fef8:	89 04 24             	mov    %eax,(%esp)
 814fefb:	e8 88 f8 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 814ff00:	bb 00 00 00 00       	mov    $0x0,%ebx
 814ff05:	eb 36                	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814ff07:	8b 45 10             	mov    0x10(%ebp),%eax
 814ff0a:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 814ff10:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814ff14:	89 44 24 08          	mov    %eax,0x8(%esp)
 814ff18:	8b 45 0c             	mov    0xc(%ebp),%eax
 814ff1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814ff1f:	8b 45 08             	mov    0x8(%ebp),%eax
 814ff22:	89 04 24             	mov    %eax,(%esp)
 814ff25:	e8 bc f1 ff ff       	call   814f0e6 <_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item>
 814ff2a:	83 f0 01             	xor    $0x1,%eax
 814ff2d:	84 c0                	test   %al,%al
 814ff2f:	74 07                	je     814ff38 <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c2>
 814ff31:	bb 00 00 00 00       	mov    $0x0,%ebx
 814ff36:	eb 05                	jmp    814ff3d <_ZN8WongWork10CBossStage16handlePickupItemEP5CUseribRc+0x4c7>
 814ff38:	bb 01 00 00 00       	mov    $0x1,%ebx
 814ff3d:	89 d8                	mov    %ebx,%eax
 814ff3f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 814ff42:	83 c4 00             	add    $0x0,%esp
 814ff45:	5b                   	pop    %ebx
 814ff46:	5e                   	pop    %esi
 814ff47:	5f                   	pop    %edi
 814ff48:	5d                   	pop    %ebp
 814ff49:	c3                   	ret

```

```c
// WongWork::CBossStage::handlePickupItem @ 0x814fa76

/* WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&) */

undefined4 __thiscall
WongWork::CBossStage::handlePickupItem
          (CBossStage *this,CUser *param_1,int param_2,bool param_3,char *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 *puVar5;
  map_item *pmVar6;
  byte bVar7;
  map_item local_d4 [18];
  int local_c2;
  PacketGuard local_80 [12];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_74 [4];
  _Rb_tree_iterator local_70 [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_6c [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_68 [4];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  CItem *local_24;
  undefined4 local_20;
  
  bVar7 = 0;
  map_item::map_item(local_d4);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            ((int *)local_70);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_74,local_70);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_68)
  ;
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_6c,(_Rb_tree_iterator *)local_68);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator!=
                    (local_74,(_Rb_tree_const_iterator *)local_6c);
  if (cVar2 == '\0') {
    cMyTrace::cMyTrace(local_64,
                       "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                       ,0x56e,5);
    cMyTrace::operator()(local_64,"stageData_.item not find itemUID : %d",param_2);
    PacketGuard::PacketGuard(local_80);
                    /* try { // try from 0814fb92 to 0814fbfc has its CatchHandler @ 0814fc12 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_80);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_80,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_80,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_80,4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_80,true);
    CUser::Send(param_1,local_80);
    PacketGuard::~PacketGuard(local_80);
    return 0;
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator->(local_74);
  puVar5 = (undefined4 *)(iVar3 + 4);
  pmVar6 = local_d4;
  for (iVar4 = 0x15; iVar3 = local_c2, iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pmVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    pmVar6 = pmVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if (local_c2 == 0) {
    cVar2 = GoldPickupItem(this,param_1,param_2,local_d4);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_24 == (CItem *)0x0) {
      cMyTrace::cMyTrace(local_54,
                         "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                         ,0x57f,5);
      cMyTrace::operator()(local_54,"item not find - item_id : %d, itemUID : %d",local_c2,param_2);
      return 0;
    }
    local_20 = 0;
    cVar2 = CItem::is_stackable(local_24);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)local_24 + 0x14))(local_24);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*(int *)local_24 + 0x10))(local_24);
        if (cVar2 != '\0') {
          local_20 = 1;
        }
      }
      else {
        local_20 = 7;
      }
    }
    else {
      iVar3 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
      if (iVar3 == 9) {
        local_20 = 7;
      }
    }
    iVar3 = CParty::get_member_count(*(CParty **)(this + 4));
    if ((((iVar3 < 2) || (iVar3 = CBossPlay::getLiveMemberCount((CBossPlay *)this), iVar3 < 2)) ||
        (local_d4[0] == (map_item)0x0)) ||
       ((iVar3 = CItem::get_rarity(local_24), iVar3 != 4 &&
        (cVar2 = CItem::IsRoutingItem(local_24), cVar2 == '\0')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = RoutingPickupItem(this,param_1,param_2,local_d4);
      if (cVar2 != '\x01') {
        return 0;
      }
      return 1;
    }
    cVar2 = CItem::get_rarity(local_24);
    *param_4 = cVar2;
    iVar3 = CParty::get_member_count(*(CParty **)(this + 4));
    if (((iVar3 < 2) || (iVar3 = CBossPlay::getLiveMemberCount((CBossPlay *)this), iVar3 < 2)) ||
       ((local_d4[0] == (map_item)0x0 ||
        (((iVar3 = CItem::get_rarity(local_24), iVar3 != 1 &&
          (iVar3 = CItem::get_rarity(local_24), iVar3 != 2)) &&
         (iVar3 = CItem::get_rarity(local_24), iVar3 != 3)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = RandomPickupItem(this,param_1,param_2,local_d4);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_44,
                           "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                           ,0x5ac,5);
        cMyTrace::operator()(local_44,"RandomPickupItem false");
        return 0;
      }
    }
    else {
      cVar2 = NormalPickupItem(this,param_1,param_2,local_d4);
      if (cVar2 != '\x01') {
        cMyTrace::cMyTrace(local_34,
                           "virtual bool WongWork::CBossStage::handlePickupItem(CUser*, int, bool, char&)"
                           ,0x5b4,5);
        cMyTrace::operator()(local_34,"NormalPickupItem false");
        return 0;
      }
    }
  }
  return 1;
}

```

---

## killMonsterDropItem

```asm
// === 0814d628 WongWork::CBossStage::killMonsterDropItem  [0x0814d628-0x814de19] ===
 814d628:	55                   	push   %ebp
 814d629:	89 e5                	mov    %esp,%ebp
 814d62b:	57                   	push   %edi
 814d62c:	56                   	push   %esi
 814d62d:	53                   	push   %ebx
 814d62e:	81 ec 1c 02 00 00    	sub    $0x21c,%esp
 814d634:	8b 55 14             	mov    0x14(%ebp),%edx
 814d637:	8b 45 18             	mov    0x18(%ebp),%eax
 814d63a:	66 89 95 44 fe ff ff 	mov    %dx,-0x1bc(%ebp)
 814d641:	66 89 85 40 fe ff ff 	mov    %ax,-0x1c0(%ebp)
 814d648:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814d64b:	89 04 24             	mov    %eax,(%esp)
 814d64e:	e8 6f 7d fa ff       	call   80f53c2 <_ZNSt6vectorImSaImEEC1Ev>
 814d653:	8d 45 a8             	lea    -0x58(%ebp),%eax
 814d656:	89 04 24             	mov    %eax,(%esp)
 814d659:	e8 ce 53 00 00       	call   8152a2c <_ZNSt4listI8map_itemSaIS0_EEC1Ev>
 814d65e:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 814d664:	89 04 24             	mov    %eax,(%esp)
 814d667:	e8 9a d4 ff ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 814d66c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814d66f:	89 04 24             	mov    %eax,(%esp)
 814d672:	e8 1f 54 00 00       	call   8152a96 <_ZNSt6vectorImSaImEE5clearEv>
 814d677:	8d 45 a8             	lea    -0x58(%ebp),%eax
 814d67a:	89 04 24             	mov    %eax,(%esp)
 814d67d:	e8 30 54 00 00       	call   8152ab2 <_ZNSt4listI8map_itemSaIS0_EE5clearEv>
 814d682:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 814d688:	89 04 24             	mov    %eax,(%esp)
 814d68b:	e8 40 54 00 00       	call   8152ad0 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5clearEv>
 814d690:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d693:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 814d697:	3c 04                	cmp    $0x4,%al
 814d699:	0f 8e dc 00 00 00    	jle    814d77b <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x153>
 814d69f:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d6a2:	8b 40 0c             	mov    0xc(%eax),%eax
 814d6a5:	89 c3                	mov    %eax,%ebx
 814d6a7:	e8 ef ea f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814d6ac:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 814d6b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814d6b6:	89 04 24             	mov    %eax,(%esp)
 814d6b9:	e8 14 d3 1f 00       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 814d6be:	89 45 d0             	mov    %eax,-0x30(%ebp)
 814d6c1:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 814d6c5:	0f 84 58 01 00 00    	je     814d823 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x1fb>
 814d6cb:	8b 45 08             	mov    0x8(%ebp),%eax
 814d6ce:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814d6d4:	89 04 24             	mov    %eax,(%esp)
 814d6d7:	e8 52 32 00 00       	call   815092e <_ZNK8CDungeon16hasTowerItemDropEv>
 814d6dc:	84 c0                	test   %al,%al
 814d6de:	74 12                	je     814d6f2 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0xca>
 814d6e0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814d6e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d6e7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814d6ea:	89 04 24             	mov    %eax,(%esp)
 814d6ed:	e8 aa ca 1f 00       	call   834a19c <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE>
 814d6f2:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 814d6f8:	89 04 24             	mov    %eax,(%esp)
 814d6fb:	e8 06 d0 ff ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 814d700:	8b 45 08             	mov    0x8(%ebp),%eax
 814d703:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 814d709:	88 85 26 ff ff ff    	mov    %al,-0xda(%ebp)
 814d70f:	8b 45 10             	mov    0x10(%ebp),%eax
 814d712:	88 85 24 ff ff ff    	mov    %al,-0xdc(%ebp)
 814d718:	8b 45 08             	mov    0x8(%ebp),%eax
 814d71b:	8b 40 04             	mov    0x4(%eax),%eax
 814d71e:	89 04 24             	mov    %eax,(%esp)
 814d721:	e8 44 ca 44 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814d726:	88 85 2e ff ff ff    	mov    %al,-0xd2(%ebp)
 814d72c:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 814d732:	89 44 24 08          	mov    %eax,0x8(%esp)
 814d736:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 814d73c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d740:	8b 45 d0             	mov    -0x30(%ebp),%eax
 814d743:	89 04 24             	mov    %eax,(%esp)
 814d746:	e8 ef c9 1f 00       	call   834a13a <_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>
 814d74b:	eb 1b                	jmp    814d768 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x140>
 814d74d:	89 d3                	mov    %edx,%ebx
 814d74f:	89 c6                	mov    %eax,%esi
 814d751:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 814d757:	89 04 24             	mov    %eax,(%esp)
 814d75a:	e8 91 d3 ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814d75f:	89 f0                	mov    %esi,%eax
 814d761:	89 da                	mov    %ebx,%edx
 814d763:	e9 35 06 00 00       	jmp    814dd9d <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x775>
 814d768:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 814d76e:	89 04 24             	mov    %eax,(%esp)
 814d771:	e8 7a d3 ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814d776:	e9 a8 00 00 00       	jmp    814d823 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x1fb>
 814d77b:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d77e:	8b 58 0c             	mov    0xc(%eax),%ebx
 814d781:	e8 15 ea f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814d786:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814d78a:	89 04 24             	mov    %eax,(%esp)
 814d78d:	e8 f2 25 21 00       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 814d792:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 814d795:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 814d799:	0f 84 84 00 00 00    	je     814d823 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x1fb>
 814d79f:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 814d7a5:	89 04 24             	mov    %eax,(%esp)
 814d7a8:	e8 59 cf ff ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 814d7ad:	8b 45 08             	mov    0x8(%ebp),%eax
 814d7b0:	8b 80 e8 0a 00 00    	mov    0xae8(%eax),%eax
 814d7b6:	88 85 de fe ff ff    	mov    %al,-0x122(%ebp)
 814d7bc:	8b 45 10             	mov    0x10(%ebp),%eax
 814d7bf:	88 85 dc fe ff ff    	mov    %al,-0x124(%ebp)
 814d7c5:	8b 45 08             	mov    0x8(%ebp),%eax
 814d7c8:	8b 40 04             	mov    0x4(%eax),%eax
 814d7cb:	89 04 24             	mov    %eax,(%esp)
 814d7ce:	e8 97 c9 44 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 814d7d3:	88 85 e6 fe ff ff    	mov    %al,-0x11a(%ebp)
 814d7d9:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 814d7df:	89 44 24 08          	mov    %eax,0x8(%esp)
 814d7e3:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 814d7e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d7ed:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 814d7f0:	89 04 24             	mov    %eax,(%esp)
 814d7f3:	e8 7e 20 20 00       	call   834f876 <_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>
 814d7f8:	eb 1b                	jmp    814d815 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x1ed>
 814d7fa:	89 d3                	mov    %edx,%ebx
 814d7fc:	89 c6                	mov    %eax,%esi
 814d7fe:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 814d804:	89 04 24             	mov    %eax,(%esp)
 814d807:	e8 e4 d2 ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814d80c:	89 f0                	mov    %esi,%eax
 814d80e:	89 da                	mov    %ebx,%edx
 814d810:	e9 88 05 00 00       	jmp    814dd9d <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x775>
 814d815:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 814d81b:	89 04 24             	mov    %eax,(%esp)
 814d81e:	e8 cd d2 ff ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 814d823:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814d826:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 814d82c:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d830:	89 04 24             	mov    %eax,(%esp)
 814d833:	e8 cc d4 ff ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 814d838:	83 ec 04             	sub    $0x4,%esp
 814d83b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 814d83e:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d842:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814d845:	89 04 24             	mov    %eax,(%esp)
 814d848:	e8 9f 52 00 00       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 814d84d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814d850:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 814d856:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d85a:	89 04 24             	mov    %eax,(%esp)
 814d85d:	e8 88 50 00 00       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 814d862:	83 ec 04             	sub    $0x4,%esp
 814d865:	8d 45 c0             	lea    -0x40(%ebp),%eax
 814d868:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d86c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 814d86f:	89 04 24             	mov    %eax,(%esp)
 814d872:	e8 75 52 00 00       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 814d877:	e9 3e 01 00 00       	jmp    814d9ba <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x392>
 814d87c:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 814d882:	89 04 24             	mov    %eax,(%esp)
 814d885:	e8 42 3a 00 00       	call   81512cc <_ZN8map_itemC1Ev>
 814d88a:	c6 85 54 fe ff ff 01 	movb   $0x1,-0x1ac(%ebp)
 814d891:	0f b7 85 40 fe ff ff 	movzwl -0x1c0(%ebp),%eax
 814d898:	66 89 85 5c fe ff ff 	mov    %ax,-0x1a4(%ebp)
 814d89f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 814d8a6:	e8 f3 e3 f7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 814d8ab:	89 85 60 fe ff ff    	mov    %eax,-0x1a0(%ebp)
 814d8b1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814d8b4:	89 04 24             	mov    %eax,(%esp)
 814d8b7:	e8 8c 52 00 00       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 814d8bc:	8b 10                	mov    (%eax),%edx
 814d8be:	89 95 64 fe ff ff    	mov    %edx,-0x19c(%ebp)
 814d8c4:	8b 50 04             	mov    0x4(%eax),%edx
 814d8c7:	89 95 68 fe ff ff    	mov    %edx,-0x198(%ebp)
 814d8cd:	8b 50 08             	mov    0x8(%eax),%edx
 814d8d0:	89 95 6c fe ff ff    	mov    %edx,-0x194(%ebp)
 814d8d6:	8b 50 0c             	mov    0xc(%eax),%edx
 814d8d9:	89 95 70 fe ff ff    	mov    %edx,-0x190(%ebp)
 814d8df:	8b 50 10             	mov    0x10(%eax),%edx
 814d8e2:	89 95 74 fe ff ff    	mov    %edx,-0x18c(%ebp)
 814d8e8:	8b 50 14             	mov    0x14(%eax),%edx
 814d8eb:	89 95 78 fe ff ff    	mov    %edx,-0x188(%ebp)
 814d8f1:	8b 50 18             	mov    0x18(%eax),%edx
 814d8f4:	89 95 7c fe ff ff    	mov    %edx,-0x184(%ebp)
 814d8fa:	8b 50 1c             	mov    0x1c(%eax),%edx
 814d8fd:	89 95 80 fe ff ff    	mov    %edx,-0x180(%ebp)
 814d903:	8b 50 20             	mov    0x20(%eax),%edx
 814d906:	89 95 84 fe ff ff    	mov    %edx,-0x17c(%ebp)
 814d90c:	8b 50 24             	mov    0x24(%eax),%edx
 814d90f:	89 95 88 fe ff ff    	mov    %edx,-0x178(%ebp)
 814d915:	8b 50 28             	mov    0x28(%eax),%edx
 814d918:	89 95 8c fe ff ff    	mov    %edx,-0x174(%ebp)
 814d91e:	8b 50 2c             	mov    0x2c(%eax),%edx
 814d921:	89 95 90 fe ff ff    	mov    %edx,-0x170(%ebp)
 814d927:	8b 50 30             	mov    0x30(%eax),%edx
 814d92a:	89 95 94 fe ff ff    	mov    %edx,-0x16c(%ebp)
 814d930:	8b 50 34             	mov    0x34(%eax),%edx
 814d933:	89 95 98 fe ff ff    	mov    %edx,-0x168(%ebp)
 814d939:	8b 50 38             	mov    0x38(%eax),%edx
 814d93c:	89 95 9c fe ff ff    	mov    %edx,-0x164(%ebp)
 814d942:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 814d946:	88 85 a0 fe ff ff    	mov    %al,-0x160(%ebp)
 814d94c:	8b 45 08             	mov    0x8(%ebp),%eax
 814d94f:	8b 80 34 0a 00 00    	mov    0xa34(%eax),%eax
 814d955:	89 85 58 fe ff ff    	mov    %eax,-0x1a8(%ebp)
 814d95b:	8d 50 01             	lea    0x1(%eax),%edx
 814d95e:	8b 45 08             	mov    0x8(%ebp),%eax
 814d961:	89 90 34 0a 00 00    	mov    %edx,0xa34(%eax)
 814d967:	8b 45 08             	mov    0x8(%ebp),%eax
 814d96a:	05 f4 09 00 00       	add    $0x9f4,%eax
 814d96f:	89 85 3c fe ff ff    	mov    %eax,-0x1c4(%ebp)
 814d975:	8d 54 24 04          	lea    0x4(%esp),%edx
 814d979:	8d 9d 54 fe ff ff    	lea    -0x1ac(%ebp),%ebx
 814d97f:	b8 15 00 00 00       	mov    $0x15,%eax
 814d984:	89 d7                	mov    %edx,%edi
 814d986:	89 de                	mov    %ebx,%esi
 814d988:	89 c1                	mov    %eax,%ecx
 814d98a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 814d98c:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
 814d992:	89 04 24             	mov    %eax,(%esp)
 814d995:	e8 46 3e 00 00       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 814d99a:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 814d9a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d9a4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 814d9a7:	89 04 24             	mov    %eax,(%esp)
 814d9aa:	e8 a3 51 00 00       	call   8152b52 <_ZNSt4listI8map_itemSaIS0_EE9push_backERKS0_>
 814d9af:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814d9b2:	89 04 24             	mov    %eax,(%esp)
 814d9b5:	e8 78 51 00 00       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 814d9ba:	8d 45 a0             	lea    -0x60(%ebp),%eax
 814d9bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d9c1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 814d9c4:	89 04 24             	mov    %eax,(%esp)
 814d9c7:	e8 3a 51 00 00       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 814d9cc:	84 c0                	test   %al,%al
 814d9ce:	0f 85 a8 fe ff ff    	jne    814d87c <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x254>
 814d9d4:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 814d9db:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 814d9e2:	8d 45 90             	lea    -0x70(%ebp),%eax
 814d9e5:	89 04 24             	mov    %eax,(%esp)
 814d9e8:	e8 5f 03 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814d9ed:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 814d9f4:	00 
 814d9f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814d9fc:	00 
 814d9fd:	8d 45 90             	lea    -0x70(%ebp),%eax
 814da00:	89 04 24             	mov    %eax,(%esp)
 814da03:	e8 f4 de f7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814da08:	0f b7 85 44 fe ff ff 	movzwl -0x1bc(%ebp),%eax
 814da0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814da13:	8d 45 90             	lea    -0x70(%ebp),%eax
 814da16:	89 04 24             	mov    %eax,(%esp)
 814da19:	e8 86 c4 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814da1e:	8d 45 90             	lea    -0x70(%ebp),%eax
 814da21:	89 04 24             	mov    %eax,(%esp)
 814da24:	e8 23 31 fc ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 814da29:	89 45 9c             	mov    %eax,-0x64(%ebp)
 814da2c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 814da2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814da33:	8d 45 90             	lea    -0x70(%ebp),%eax
 814da36:	89 04 24             	mov    %eax,(%esp)
 814da39:	e8 e2 de f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814da3e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 814da41:	8d 55 a8             	lea    -0x58(%ebp),%edx
 814da44:	89 54 24 04          	mov    %edx,0x4(%esp)
 814da48:	89 04 24             	mov    %eax,(%esp)
 814da4b:	e8 38 51 00 00       	call   8152b88 <_ZNSt4listI8map_itemSaIS0_EE5beginEv>
 814da50:	83 ec 04             	sub    $0x4,%esp
 814da53:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 814da56:	89 44 24 04          	mov    %eax,0x4(%esp)
 814da5a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814da5d:	89 04 24             	mov    %eax,(%esp)
 814da60:	e8 49 51 00 00       	call   8152bae <_ZNSt20_List_const_iteratorI8map_itemEC1ERKSt14_List_iteratorIS0_E>
 814da65:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814da68:	8d 55 a8             	lea    -0x58(%ebp),%edx
 814da6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 814da6f:	89 04 24             	mov    %eax,(%esp)
 814da72:	e8 47 51 00 00       	call   8152bbe <_ZNSt4listI8map_itemSaIS0_EE3endEv>
 814da77:	83 ec 04             	sub    $0x4,%esp
 814da7a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 814da7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 814da81:	8d 45 88             	lea    -0x78(%ebp),%eax
 814da84:	89 04 24             	mov    %eax,(%esp)
 814da87:	e8 22 51 00 00       	call   8152bae <_ZNSt20_List_const_iteratorI8map_itemEC1ERKSt14_List_iteratorIS0_E>
 814da8c:	8d 85 6a ff ff ff    	lea    -0x96(%ebp),%eax
 814da92:	89 04 24             	mov    %eax,(%esp)
 814da95:	e8 4e 2c 00 00       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 814da9a:	e9 43 02 00 00       	jmp    814dce2 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x6ba>
 814da9f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814daa2:	89 04 24             	mov    %eax,(%esp)
 814daa5:	e8 60 51 00 00       	call   8152c0a <_ZNKSt20_List_const_iteratorI8map_itemEdeEv>
 814daaa:	89 45 d8             	mov    %eax,-0x28(%ebp)
 814daad:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dab0:	8b 40 04             	mov    0x4(%eax),%eax
 814dab3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dab7:	8d 45 90             	lea    -0x70(%ebp),%eax
 814daba:	89 04 24             	mov    %eax,(%esp)
 814dabd:	e8 e2 c3 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814dac2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dac5:	8b 40 12             	mov    0x12(%eax),%eax
 814dac8:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dacc:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dacf:	89 04 24             	mov    %eax,(%esp)
 814dad2:	e8 65 de f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814dad7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dada:	83 c0 10             	add    $0x10,%eax
 814dadd:	89 04 24             	mov    %eax,(%esp)
 814dae0:	e8 f7 2c 00 00       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 814dae5:	0f b6 c0             	movzbl %al,%eax
 814dae8:	89 44 24 04          	mov    %eax,0x4(%esp)
 814daec:	8d 45 90             	lea    -0x70(%ebp),%eax
 814daef:	89 04 24             	mov    %eax,(%esp)
 814daf2:	e8 29 de f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814daf7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dafa:	83 c0 10             	add    $0x10,%eax
 814dafd:	89 04 24             	mov    %eax,(%esp)
 814db00:	e8 fb 2c 00 00       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 814db05:	84 c0                	test   %al,%al
 814db07:	0f 84 b8 00 00 00    	je     814dbc5 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x59d>
 814db0d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814db10:	8b 40 12             	mov    0x12(%eax),%eax
 814db13:	89 c3                	mov    %eax,%ebx
 814db15:	e8 81 e6 f7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 814db1a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814db1e:	89 04 24             	mov    %eax,(%esp)
 814db21:	e8 0c 1f 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814db26:	89 45 dc             	mov    %eax,-0x24(%ebp)
 814db29:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 814db2d:	75 22                	jne    814db51 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x529>
 814db2f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814db32:	83 c0 10             	add    $0x10,%eax
 814db35:	89 04 24             	mov    %eax,(%esp)
 814db38:	e8 fd 9c fa ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 814db3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 814db41:	8d 45 90             	lea    -0x70(%ebp),%eax
 814db44:	89 04 24             	mov    %eax,(%esp)
 814db47:	e8 f0 dd f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814db4c:	e9 91 00 00 00       	jmp    814dbe2 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x5ba>
 814db51:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 814db58:	8b 45 dc             	mov    -0x24(%ebp),%eax
 814db5b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814db5e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814db61:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 814db65:	0f b6 c0             	movzbl %al,%eax
 814db68:	89 44 24 04          	mov    %eax,0x4(%esp)
 814db6c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814db6f:	89 04 24             	mov    %eax,(%esp)
 814db72:	e8 a9 35 00 00       	call   8151120 <_ZNK10CEquipItem15getAvatarPeriodEh>
 814db77:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814db7a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 814db7d:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 814db83:	89 44 24 04          	mov    %eax,0x4(%esp)
 814db87:	8d 45 90             	lea    -0x70(%ebp),%eax
 814db8a:	89 04 24             	mov    %eax,(%esp)
 814db8d:	e8 aa dd f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814db92:	8d 85 6a ff ff ff    	lea    -0x96(%ebp),%eax
 814db98:	89 04 24             	mov    %eax,(%esp)
 814db9b:	e8 48 2b 00 00       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 814dba0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dba3:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 814dba7:	0f b7 c0             	movzwl %ax,%eax
 814dbaa:	8d 95 6a ff ff ff    	lea    -0x96(%ebp),%edx
 814dbb0:	89 54 24 08          	mov    %edx,0x8(%esp)
 814dbb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dbb8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814dbbb:	89 04 24             	mov    %eax,(%esp)
 814dbbe:	e8 73 33 00 00       	call   8150f36 <_ZNK10CEquipItem15getAvatarSocketEiR20stAvatarEmblemInfo_t>
 814dbc3:	eb 1d                	jmp    814dbe2 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x5ba>
 814dbc5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dbc8:	83 c0 10             	add    $0x10,%eax
 814dbcb:	89 04 24             	mov    %eax,(%esp)
 814dbce:	e8 67 9c fa ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 814dbd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dbd7:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dbda:	89 04 24             	mov    %eax,(%esp)
 814dbdd:	e8 5a dd f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814dbe2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dbe5:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 814dbe9:	0f b7 c0             	movzwl %ax,%eax
 814dbec:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dbf0:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dbf3:	89 04 24             	mov    %eax,(%esp)
 814dbf6:	e8 a9 c2 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814dbfb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dbfe:	83 c0 21             	add    $0x21,%eax
 814dc01:	89 04 24             	mov    %eax,(%esp)
 814dc04:	e8 29 2b 00 00       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 814dc09:	0f b6 c0             	movzbl %al,%eax
 814dc0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dc10:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dc13:	89 04 24             	mov    %eax,(%esp)
 814dc16:	e8 05 dd f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814dc1b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dc1e:	83 c0 21             	add    $0x21,%eax
 814dc21:	89 04 24             	mov    %eax,(%esp)
 814dc24:	e8 49 2b 00 00       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 814dc29:	0f b7 c0             	movzwl %ax,%eax
 814dc2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dc30:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dc33:	89 04 24             	mov    %eax,(%esp)
 814dc36:	e8 69 c2 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814dc3b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dc3e:	83 c0 10             	add    $0x10,%eax
 814dc41:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dc45:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dc48:	89 04 24             	mov    %eax,(%esp)
 814dc4b:	e8 3e 2d 00 00       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 814dc50:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dc53:	83 c0 10             	add    $0x10,%eax
 814dc56:	89 04 24             	mov    %eax,(%esp)
 814dc59:	e8 a2 2b 00 00       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 814dc5e:	84 c0                	test   %al,%al
 814dc60:	74 45                	je     814dca7 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x67f>
 814dc62:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814dc69:	00 
 814dc6a:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dc6d:	89 04 24             	mov    %eax,(%esp)
 814dc70:	e8 ab dc f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814dc75:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 814dc7c:	00 
 814dc7d:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dc80:	89 04 24             	mov    %eax,(%esp)
 814dc83:	e8 b4 dc f7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814dc88:	8d 85 6a ff ff ff    	lea    -0x96(%ebp),%eax
 814dc8e:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 814dc95:	00 
 814dc96:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dc9a:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dc9d:	89 04 24             	mov    %eax,(%esp)
 814dca0:	e8 c5 2c 00 00       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 814dca5:	eb 13                	jmp    814dcba <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x692>
 814dca7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814dcae:	00 
 814dcaf:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dcb2:	89 04 24             	mov    %eax,(%esp)
 814dcb5:	e8 66 dc f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814dcba:	8b 45 d8             	mov    -0x28(%ebp),%eax
 814dcbd:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 814dcc1:	0f b7 c0             	movzwl %ax,%eax
 814dcc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dcc8:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dccb:	89 04 24             	mov    %eax,(%esp)
 814dcce:	e8 d1 c1 f8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 814dcd3:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 814dcd7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814dcda:	89 04 24             	mov    %eax,(%esp)
 814dcdd:	e8 14 4f 00 00       	call   8152bf6 <_ZNSt20_List_const_iteratorI8map_itemEppEv>
 814dce2:	8d 45 88             	lea    -0x78(%ebp),%eax
 814dce5:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dce9:	8d 45 8c             	lea    -0x74(%ebp),%eax
 814dcec:	89 04 24             	mov    %eax,(%esp)
 814dcef:	e8 ee 4e 00 00       	call   8152be2 <_ZNKSt20_List_const_iteratorI8map_itemEneERKS1_>
 814dcf4:	84 c0                	test   %al,%al
 814dcf6:	0f 85 a3 fd ff ff    	jne    814da9f <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x477>
 814dcfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814dd03:	00 
 814dd04:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd07:	89 04 24             	mov    %eax,(%esp)
 814dd0a:	e8 11 dc f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814dd0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814dd16:	00 
 814dd17:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd1a:	89 04 24             	mov    %eax,(%esp)
 814dd1d:	e8 fe db f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814dd22:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814dd29:	00 
 814dd2a:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd2d:	89 04 24             	mov    %eax,(%esp)
 814dd30:	e8 eb db f7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 814dd35:	8b 45 cc             	mov    -0x34(%ebp),%eax
 814dd38:	89 44 24 08          	mov    %eax,0x8(%esp)
 814dd3c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 814dd3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814dd43:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd46:	89 04 24             	mov    %eax,(%esp)
 814dd49:	e8 da 2d fc ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 814dd4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814dd55:	00 
 814dd56:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd59:	89 04 24             	mov    %eax,(%esp)
 814dd5c:	e8 f7 db f7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 814dd61:	8b 45 08             	mov    0x8(%ebp),%eax
 814dd64:	8b 40 04             	mov    0x4(%eax),%eax
 814dd67:	8d 55 90             	lea    -0x70(%ebp),%edx
 814dd6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 814dd6e:	89 04 24             	mov    %eax,(%esp)
 814dd71:	e8 d8 f3 44 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 814dd76:	bb 01 00 00 00       	mov    $0x1,%ebx
 814dd7b:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd7e:	89 04 24             	mov    %eax,(%esp)
 814dd81:	e8 fa 00 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814dd86:	eb 2d                	jmp    814ddb5 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x78d>
 814dd88:	89 d3                	mov    %edx,%ebx
 814dd8a:	89 c6                	mov    %eax,%esi
 814dd8c:	8d 45 90             	lea    -0x70(%ebp),%eax
 814dd8f:	89 04 24             	mov    %eax,(%esp)
 814dd92:	e8 e9 00 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814dd97:	89 f0                	mov    %esi,%eax
 814dd99:	89 da                	mov    %ebx,%edx
 814dd9b:	eb 00                	jmp    814dd9d <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x775>
 814dd9d:	89 d3                	mov    %edx,%ebx
 814dd9f:	89 c6                	mov    %eax,%esi
 814dda1:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 814dda7:	89 04 24             	mov    %eax,(%esp)
 814ddaa:	e8 9d cd ff ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 814ddaf:	89 f0                	mov    %esi,%eax
 814ddb1:	89 da                	mov    %ebx,%edx
 814ddb3:	eb 10                	jmp    814ddc5 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x79d>
 814ddb5:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 814ddbb:	89 04 24             	mov    %eax,(%esp)
 814ddbe:	e8 89 cd ff ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 814ddc3:	eb 15                	jmp    814ddda <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x7b2>
 814ddc5:	89 d3                	mov    %edx,%ebx
 814ddc7:	89 c6                	mov    %eax,%esi
 814ddc9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 814ddcc:	89 04 24             	mov    %eax,(%esp)
 814ddcf:	e8 9a 41 00 00       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 814ddd4:	89 f0                	mov    %esi,%eax
 814ddd6:	89 da                	mov    %ebx,%edx
 814ddd8:	eb 0d                	jmp    814dde7 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x7bf>
 814ddda:	8d 45 a8             	lea    -0x58(%ebp),%eax
 814dddd:	89 04 24             	mov    %eax,(%esp)
 814dde0:	e8 89 41 00 00       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 814dde5:	eb 1b                	jmp    814de02 <_ZN8WongWork10CBossStage19killMonsterDropItemERK11map_monsteritt+0x7da>
 814dde7:	89 d3                	mov    %edx,%ebx
 814dde9:	89 c6                	mov    %eax,%esi
 814ddeb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814ddee:	89 04 24             	mov    %eax,(%esp)
 814ddf1:	e8 e0 75 fa ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 814ddf6:	89 f0                	mov    %esi,%eax
 814ddf8:	89 da                	mov    %ebx,%edx
 814ddfa:	89 04 24             	mov    %eax,(%esp)
 814ddfd:	e8 4e 59 99 00       	call   8ae3750 <_Unwind_Resume>
 814de02:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814de05:	89 04 24             	mov    %eax,(%esp)
 814de08:	e8 c9 75 fa ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 814de0d:	89 d8                	mov    %ebx,%eax
 814de0f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 814de12:	83 c4 00             	add    $0x0,%esp
 814de15:	5b                   	pop    %ebx
 814de16:	5e                   	pop    %esi
 814de17:	5f                   	pop    %edi
 814de18:	5d                   	pop    %ebp
 814de19:	c3                   	ret

```

```c
// WongWork::CBossStage::killMonsterDropItem @ 0x814d628

/* WongWork::CBossStage::killMonsterDropItem(map_monster const&, int, unsigned short, unsigned
   short) */

undefined4 __thiscall
WongWork::CBossStage::killMonsterDropItem
          (CBossStage *this,map_monster *param_1,int param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  CDataManager *this_00;
  map_item *pmVar6;
  byte bVar7;
  map_item local_1b0 [4];
  int local_1ac;
  ushort local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  stGenerateRefData_t local_15c [52];
  undefined1 local_128;
  undefined1 local_126;
  undefined1 local_11e;
  stGenerateRefData_t local_114 [52];
  undefined1 local_e0;
  undefined1 local_de;
  undefined1 local_d6;
  stGenerateResult_t local_cc [50];
  stAvatarEmblemInfo_t local_9a [30];
  _List_const_iterator<map_item> local_7c [4];
  _List_const_iterator<map_item> local_78 [4];
  PacketGuard local_74 [12];
  int local_68;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_64 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_60 [4];
  list<map_item,std::allocator<map_item>> local_5c [8];
  vector<unsigned_long,std::allocator<unsigned_long>> local_54 [12];
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  _List_iterator local_40 [4];
  _List_iterator local_3c [4];
  int local_38;
  CAICharacter *local_34;
  CMonster *local_30;
  int local_2c;
  CEquipItem *local_28;
  int local_24;
  CEquipItem *local_20;
  
  bVar7 = 0;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::vector(local_54);
                    /* try { // try from 0814d659 to 0814d65d has its CatchHandler @ 0814dde7 */
  std::list<map_item,std::allocator<map_item>>::list(local_5c);
                    /* try { // try from 0814d667 to 0814d66b has its CatchHandler @ 0814ddc5 */
  stGenerateResult_t::stGenerateResult_t(local_cc);
                    /* try { // try from 0814d672 to 0814d6ff has its CatchHandler @ 0814dd9d */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::clear(local_54);
  std::list<map_item,std::allocator<map_item>>::clear(local_5c);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::clear
            ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_cc);
  if ((char)param_1[8] < '\x05') {
    iVar3 = G_CDataManager();
    local_30 = (CMonster *)CDataManager::find_monster(iVar3);
    if (local_30 != (CMonster *)0x0) {
      stGenerateRefData_t::stGenerateRefData_t(local_15c);
      local_126 = (undefined1)*(undefined4 *)(this + 0xae8);
      local_128 = (char)param_2;
                    /* try { // try from 0814d7ce to 0814d7f7 has its CatchHandler @ 0814d7fa */
      local_11e = CParty::get_member_count(*(CParty **)(this + 4));
      CMonster::generateIndependentItem(local_30,local_15c,(vector *)local_cc);
                    /* try { // try from 0814d81e to 0814d9ec has its CatchHandler @ 0814dd9d */
      stGenerateRefData_t::~stGenerateRefData_t(local_15c);
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xc);
    iVar3 = G_CDataManager();
    local_34 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar3 + 0x869c),uVar5);
    if (local_34 != (CAICharacter *)0x0) {
      cVar1 = CDungeon::hasTowerItemDrop(*(CDungeon **)(this + 0x9f0));
      if (cVar1 != '\0') {
        CAICharacter::deathTowerSpecifyItemDrop(local_34,(vector *)local_54);
      }
      stGenerateRefData_t::stGenerateRefData_t(local_114);
      local_de = (undefined1)*(undefined4 *)(this + 0xae8);
      local_e0 = (char)param_2;
                    /* try { // try from 0814d721 to 0814d74a has its CatchHandler @ 0814d74d */
      local_d6 = CParty::get_member_count(*(CParty **)(this + 4));
      CAICharacter::generateIndependentItem(local_34,local_114,(vector *)local_cc);
                    /* try { // try from 0814d771 to 0814d7ac has its CatchHandler @ 0814dd9d */
      stGenerateRefData_t::~stGenerateRefData_t(local_114);
    }
  }
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_60,local_48);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_64,local_44);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=(local_60,local_64);
    if (!bVar2) break;
    map_item::map_item(local_1b0);
    local_1b0[0] = (map_item)0x1;
    local_1a8 = param_4;
    local_1a4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
             ::operator*(local_60);
    local_1a0 = *puVar4;
    local_19c = puVar4[1];
    local_198 = puVar4[2];
    local_194 = puVar4[3];
    local_190 = puVar4[4];
    local_18c = puVar4[5];
    local_188 = puVar4[6];
    local_184 = puVar4[7];
    local_180 = puVar4[8];
    local_17c = puVar4[9];
    local_178 = puVar4[10];
    local_174 = puVar4[0xb];
    local_170 = puVar4[0xc];
    local_16c = puVar4[0xd];
    local_168 = puVar4[0xe];
    local_164 = *(undefined1 *)(puVar4 + 0xf);
    local_1ac = *(int *)(this + 0xa34);
    *(int *)(this + 0xa34) = *(int *)(this + 0xa34) + 1;
    pmVar6 = local_1b0;
    puVar4 = (undefined4 *)&stack0xfffffdd8;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *(undefined4 *)pmVar6;
      pmVar6 = pmVar6 + ((uint)bVar7 * -2 + 1) * 4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    }
    MapInfo::Add_Item(this + 0x9f4);
    std::list<map_item,std::allocator<map_item>>::push_back(local_5c,local_1b0);
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_60);
  }
  local_68 = 0;
  local_38 = 0;
  PacketGuard::PacketGuard(local_74);
                    /* try { // try from 0814da03 to 0814dd75 has its CatchHandler @ 0814dd88 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_74,0,0x26);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,(uint)param_3);
  local_68 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_74);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,local_38);
  std::list<map_item,std::allocator<map_item>>::begin();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_78,local_40);
  std::list<map_item,std::allocator<map_item>>::end();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_7c,local_3c);
  stAvatarEmblemInfo_t::init(local_9a);
  while( true ) {
    cVar1 = std::_List_const_iterator<map_item>::operator!=(local_78,local_7c);
    if (cVar1 == '\0') break;
    local_2c = std::_List_const_iterator<map_item>::operator*(local_78);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,*(int *)(local_2c + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,*(int *)(local_2c + 0x12));
    uVar5 = Inven_Item::GetItemAttr((Inven_Item *)(local_2c + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,uVar5 & 0xff);
    cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_2c + 0x10));
    if (cVar1 == '\0') {
      iVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,iVar3);
    }
    else {
      iVar3 = *(int *)(local_2c + 0x12);
      this_00 = (CDataManager *)G_CDataManager();
      local_28 = (CEquipItem *)CDataManager::find_item(this_00,iVar3);
      if (local_28 == (CEquipItem *)0x0) {
        iVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c + 0x10));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,iVar3);
      }
      else {
        local_24 = 0;
        local_20 = local_28;
        local_24 = CEquipItem::getAvatarPeriod(local_28,(uchar)*(undefined2 *)(local_2c + 0x1b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,local_24 * 0x15180);
        stAvatarEmblemInfo_t::init(local_9a);
        CEquipItem::getAvatarSocket(local_20,(uint)*(ushort *)(local_2c + 0x1b),local_9a);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,(uint)*(ushort *)(local_2c + 0x1b))
    ;
    uVar5 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_2c + 0x21));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,uVar5 & 0xff);
    uVar5 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_2c + 0x21));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,uVar5 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_74,(Inven_Item *)(local_2c + 0x10));
    cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_2c + 0x10));
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_74,0x1e);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_74,(char *)local_9a,0x1e);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_74,(uint)*(ushort *)(local_2c + 8));
    local_38 = local_38 + 1;
    std::_List_const_iterator<map_item>::operator++(local_78);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_74,&local_68,local_38);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_74,true);
  CParty::send_to_party(*(CParty **)(this + 4),local_74);
                    /* try { // try from 0814dd81 to 0814dd85 has its CatchHandler @ 0814dd9d */
  PacketGuard::~PacketGuard(local_74);
                    /* try { // try from 0814ddbe to 0814ddc2 has its CatchHandler @ 0814ddc5 */
  stGenerateResult_t::~stGenerateResult_t(local_cc);
                    /* try { // try from 0814dde0 to 0814dde4 has its CatchHandler @ 0814dde7 */
  std::list<map_item,std::allocator<map_item>>::~list(local_5c);
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(local_54);
  return 1;
}

```

---

## killMonsterErase

```asm
// === 0814d214 WongWork::CBossStage::killMonsterErase  [0x0814d214-0x814d2ff] ===
 814d214:	55                   	push   %ebp
 814d215:	89 e5                	mov    %esp,%ebp
 814d217:	83 ec 48             	sub    $0x48,%esp
 814d21a:	8b 45 0c             	mov    0xc(%ebp),%eax
 814d21d:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 814d221:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 814d225:	89 45 e8             	mov    %eax,-0x18(%ebp)
 814d228:	8b 45 08             	mov    0x8(%ebp),%eax
 814d22b:	8d 88 00 0a 00 00    	lea    0xa00(%eax),%ecx
 814d231:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814d234:	8d 55 e8             	lea    -0x18(%ebp),%edx
 814d237:	89 54 24 08          	mov    %edx,0x8(%esp)
 814d23b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814d23f:	89 04 24             	mov    %eax,(%esp)
 814d242:	e8 13 52 00 00       	call   815245a <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 814d247:	83 ec 04             	sub    $0x4,%esp
 814d24a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814d24d:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d251:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814d254:	89 04 24             	mov    %eax,(%esp)
 814d257:	e8 84 57 00 00       	call   81529e0 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 814d25c:	8b 45 08             	mov    0x8(%ebp),%eax
 814d25f:	8d 90 00 0a 00 00    	lea    0xa00(%eax),%edx
 814d265:	8d 45 f0             	lea    -0x10(%ebp),%eax
 814d268:	89 54 24 04          	mov    %edx,0x4(%esp)
 814d26c:	89 04 24             	mov    %eax,(%esp)
 814d26f:	e8 12 52 00 00       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 814d274:	83 ec 04             	sub    $0x4,%esp
 814d277:	8d 45 f0             	lea    -0x10(%ebp),%eax
 814d27a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d27e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 814d281:	89 04 24             	mov    %eax,(%esp)
 814d284:	e8 57 57 00 00       	call   81529e0 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 814d289:	8d 45 ec             	lea    -0x14(%ebp),%eax
 814d28c:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d290:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814d293:	89 04 24             	mov    %eax,(%esp)
 814d296:	e8 55 57 00 00       	call   81529f0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 814d29b:	84 c0                	test   %al,%al
 814d29d:	74 5a                	je     814d2f9 <_ZN8WongWork10CBossStage16killMonsterEraseEtR11map_monsterRi+0xe5>
 814d29f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814d2a2:	89 04 24             	mov    %eax,(%esp)
 814d2a5:	e8 5a 57 00 00       	call   8152a04 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEptEv>
 814d2aa:	83 c0 04             	add    $0x4,%eax
 814d2ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d2b1:	8b 45 10             	mov    0x10(%ebp),%eax
 814d2b4:	89 04 24             	mov    %eax,(%esp)
 814d2b7:	e8 7e 4a 00 00       	call   8151d3a <_ZN11map_monsteraSERKS_>
 814d2bc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814d2bf:	89 04 24             	mov    %eax,(%esp)
 814d2c2:	e8 3d 57 00 00       	call   8152a04 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEptEv>
 814d2c7:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 814d2cb:	0f b6 d0             	movzbl %al,%edx
 814d2ce:	8b 45 14             	mov    0x14(%ebp),%eax
 814d2d1:	89 10                	mov    %edx,(%eax)
 814d2d3:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 814d2d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814d2da:	8b 45 08             	mov    0x8(%ebp),%eax
 814d2dd:	8d 90 00 0a 00 00    	lea    0xa00(%eax),%edx
 814d2e3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 814d2e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 814d2ea:	89 14 24             	mov    %edx,(%esp)
 814d2ed:	e8 20 57 00 00       	call   8152a12 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 814d2f2:	b8 01 00 00 00       	mov    $0x1,%eax
 814d2f7:	eb 05                	jmp    814d2fe <_ZN8WongWork10CBossStage16killMonsterEraseEtR11map_monsterRi+0xea>
 814d2f9:	b8 00 00 00 00       	mov    $0x0,%eax
 814d2fe:	c9                   	leave
 814d2ff:	c3                   	ret

```

```c
// WongWork::CBossStage::killMonsterErase @ 0x814d214

/* WongWork::CBossStage::killMonsterErase(unsigned short, map_monster&, int&) */

bool __thiscall
WongWork::CBossStage::killMonsterErase
          (CBossStage *this,ushort param_1,map_monster *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_24 [4];
  _Rb_tree_iterator local_20 [4];
  uint local_1c;
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_18 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  uint local_10;
  
  local_1c = (uint)param_1;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_20);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_24,local_20);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_14);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_18,(_Rb_tree_iterator *)local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator!=
                    (local_24,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_24);
    map_monster::operator=(param_2,(map_monster *)(iVar2 + 4));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_24);
    *param_3 = (uint)*(byte *)(iVar2 + 0x14);
    local_10 = (uint)param_1;
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::erase
              ((int *)(this + 0xa00));
  }
  return cVar1 != '\0';
}

```

---

## moveNextStage

```asm
// === 0814d1b6 WongWork::CBossStage::moveNextStage  [0x0814d1b6-0x814d213] ===
 814d1b6:	55                   	push   %ebp
 814d1b7:	89 e5                	mov    %esp,%ebp
 814d1b9:	83 ec 18             	sub    $0x18,%esp
 814d1bc:	8b 45 08             	mov    0x8(%ebp),%eax
 814d1bf:	05 00 0a 00 00       	add    $0xa00,%eax
 814d1c4:	89 04 24             	mov    %eax,(%esp)
 814d1c7:	e8 ee 87 ff ff       	call   81459ba <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
 814d1cc:	83 f0 01             	xor    $0x1,%eax
 814d1cf:	84 c0                	test   %al,%al
 814d1d1:	74 07                	je     814d1da <_ZN8WongWork10CBossStage13moveNextStageEv+0x24>
 814d1d3:	b8 00 00 00 00       	mov    $0x0,%eax
 814d1d8:	eb 37                	jmp    814d211 <_ZN8WongWork10CBossStage13moveNextStageEv+0x5b>
 814d1da:	8b 45 08             	mov    0x8(%ebp),%eax
 814d1dd:	8b 90 e0 0a 00 00    	mov    0xae0(%eax),%edx
 814d1e3:	8b 45 08             	mov    0x8(%ebp),%eax
 814d1e6:	8b 80 e4 0a 00 00    	mov    0xae4(%eax),%eax
 814d1ec:	39 c2                	cmp    %eax,%edx
 814d1ee:	72 07                	jb     814d1f7 <_ZN8WongWork10CBossStage13moveNextStageEv+0x41>
 814d1f0:	b8 00 00 00 00       	mov    $0x0,%eax
 814d1f5:	eb 1a                	jmp    814d211 <_ZN8WongWork10CBossStage13moveNextStageEv+0x5b>
 814d1f7:	8b 45 08             	mov    0x8(%ebp),%eax
 814d1fa:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 814d200:	8d 50 01             	lea    0x1(%eax),%edx
 814d203:	8b 45 08             	mov    0x8(%ebp),%eax
 814d206:	89 90 e0 0a 00 00    	mov    %edx,0xae0(%eax)
 814d20c:	b8 01 00 00 00       	mov    $0x1,%eax
 814d211:	c9                   	leave
 814d212:	c3                   	ret
 814d213:	90                   	nop

```

```c
// WongWork::CBossStage::moveNextStage @ 0x814d1b6

/* WongWork::CBossStage::moveNextStage() */

undefined4 __thiscall WongWork::CBossStage::moveNextStage(CBossStage *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::empty((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                   *)(this + 0xa00));
  if (cVar1 == '\x01') {
    if (*(uint *)(this + 0xae0) < *(uint *)(this + 0xae4)) {
      *(int *)(this + 0xae0) = *(int *)(this + 0xae0) + 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## randomMapIndex

```asm
// === 0814f4fc WongWork::CBossStage::randomMapIndex  [0x0814f4fc-0x814f669] ===
 814f4fc:	55                   	push   %ebp
 814f4fd:	89 e5                	mov    %esp,%ebp
 814f4ff:	56                   	push   %esi
 814f500:	53                   	push   %ebx
 814f501:	83 ec 50             	sub    $0x50,%esp
 814f504:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 814f50b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 814f512:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814f515:	89 04 24             	mov    %eax,(%esp)
 814f518:	e8 15 37 00 00       	call   8152c32 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEC1Ev>
 814f51d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f520:	89 04 24             	mov    %eax,(%esp)
 814f523:	e8 18 37 00 00       	call   8152c40 <_ZNSt6vectorI10RandomListSaIS0_EEC1Ev>
 814f528:	8b 45 08             	mov    0x8(%ebp),%eax
 814f52b:	8b 80 e0 0a 00 00    	mov    0xae0(%eax),%eax
 814f531:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 814f534:	8b 45 08             	mov    0x8(%ebp),%eax
 814f537:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814f53d:	89 04 24             	mov    %eax,(%esp)
 814f540:	e8 db 13 00 00       	call   8150920 <_ZNK8CDungeon24getRandomTowerMapIndexesEv>
 814f545:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 814f548:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 814f54b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814f54f:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f553:	89 14 24             	mov    %edx,(%esp)
 814f556:	e8 57 37 00 00       	call   8152cb2 <_ZNKSt3mapIiSt6vectorI10RandomListSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 814f55b:	83 ec 04             	sub    $0x4,%esp
 814f55e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 814f561:	89 45 e0             	mov    %eax,-0x20(%ebp)
 814f564:	8b 45 08             	mov    0x8(%ebp),%eax
 814f567:	8b 80 f0 09 00 00    	mov    0x9f0(%eax),%eax
 814f56d:	89 04 24             	mov    %eax,(%esp)
 814f570:	e8 ab 13 00 00       	call   8150920 <_ZNK8CDungeon24getRandomTowerMapIndexesEv>
 814f575:	8d 55 e8             	lea    -0x18(%ebp),%edx
 814f578:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f57c:	89 14 24             	mov    %edx,(%esp)
 814f57f:	e8 5a 37 00 00       	call   8152cde <_ZNKSt3mapIiSt6vectorI10RandomListSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 814f584:	83 ec 04             	sub    $0x4,%esp
 814f587:	8d 45 e8             	lea    -0x18(%ebp),%eax
 814f58a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f58e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814f591:	89 04 24             	mov    %eax,(%esp)
 814f594:	e8 6b 37 00 00       	call   8152d04 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEeqERKS7_>
 814f599:	84 c0                	test   %al,%al
 814f59b:	74 0a                	je     814f5a7 <_ZN8WongWork10CBossStage14randomMapIndexERi+0xab>
 814f59d:	bb 00 00 00 00       	mov    $0x0,%ebx
 814f5a2:	e9 ab 00 00 00       	jmp    814f652 <_ZN8WongWork10CBossStage14randomMapIndexERi+0x156>
 814f5a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 814f5aa:	89 04 24             	mov    %eax,(%esp)
 814f5ad:	e8 66 37 00 00       	call   8152d18 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorI10RandomListSaIS3_EEEEptEv>
 814f5b2:	83 c0 04             	add    $0x4,%eax
 814f5b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f5b9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f5bc:	89 04 24             	mov    %eax,(%esp)
 814f5bf:	e8 62 37 00 00       	call   8152d26 <_ZNSt6vectorI10RandomListSaIS0_EEaSERKS2_>
 814f5c4:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 814f5cb:	e8 b7 25 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814f5d0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814f5d3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 814f5da:	eb 3f                	jmp    814f61b <_ZN8WongWork10CBossStage14randomMapIndexERi+0x11f>
 814f5dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814f5df:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f5e3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f5e6:	89 04 24             	mov    %eax,(%esp)
 814f5e9:	e8 a2 39 00 00       	call   8152f90 <_ZNSt6vectorI10RandomListSaIS0_EEixEj>
 814f5ee:	8b 40 04             	mov    0x4(%eax),%eax
 814f5f1:	01 45 ec             	add    %eax,-0x14(%ebp)
 814f5f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814f5f7:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 814f5fa:	7d 1b                	jge    814f617 <_ZN8WongWork10CBossStage14randomMapIndexERi+0x11b>
 814f5fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814f5ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 814f603:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f606:	89 04 24             	mov    %eax,(%esp)
 814f609:	e8 82 39 00 00       	call   8152f90 <_ZNSt6vectorI10RandomListSaIS0_EEixEj>
 814f60e:	8b 10                	mov    (%eax),%edx
 814f610:	8b 45 0c             	mov    0xc(%ebp),%eax
 814f613:	89 10                	mov    %edx,(%eax)
 814f615:	eb 19                	jmp    814f630 <_ZN8WongWork10CBossStage14randomMapIndexERi+0x134>
 814f617:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 814f61b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f61e:	89 04 24             	mov    %eax,(%esp)
 814f621:	e8 4e 39 00 00       	call   8152f74 <_ZNKSt6vectorI10RandomListSaIS0_EE4sizeEv>
 814f626:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 814f629:	0f 97 c0             	seta   %al
 814f62c:	84 c0                	test   %al,%al
 814f62e:	75 ac                	jne    814f5dc <_ZN8WongWork10CBossStage14randomMapIndexERi+0xe0>
 814f630:	bb 01 00 00 00       	mov    $0x1,%ebx
 814f635:	eb 1b                	jmp    814f652 <_ZN8WongWork10CBossStage14randomMapIndexERi+0x156>
 814f637:	89 d3                	mov    %edx,%ebx
 814f639:	89 c6                	mov    %eax,%esi
 814f63b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f63e:	89 04 24             	mov    %eax,(%esp)
 814f641:	e8 0e 36 00 00       	call   8152c54 <_ZNSt6vectorI10RandomListSaIS0_EED1Ev>
 814f646:	89 f0                	mov    %esi,%eax
 814f648:	89 da                	mov    %ebx,%edx
 814f64a:	89 04 24             	mov    %eax,(%esp)
 814f64d:	e8 fe 40 99 00       	call   8ae3750 <_Unwind_Resume>
 814f652:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 814f655:	89 04 24             	mov    %eax,(%esp)
 814f658:	e8 f7 35 00 00       	call   8152c54 <_ZNSt6vectorI10RandomListSaIS0_EED1Ev>
 814f65d:	89 d8                	mov    %ebx,%eax
 814f65f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 814f662:	83 c4 00             	add    $0x0,%esp
 814f665:	5b                   	pop    %ebx
 814f666:	5e                   	pop    %esi
 814f667:	5d                   	pop    %ebp
 814f668:	c3                   	ret
 814f669:	90                   	nop

```

```c
// WongWork::CBossStage::randomMapIndex @ 0x814f4fc

/* WongWork::CBossStage::randomMapIndex(int&) */

undefined4 __thiscall WongWork::CBossStage::randomMapIndex(CBossStage *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_40 [4];
  vector<RandomList,std::allocator<RandomList>> local_30 [12];
  int local_24;
  undefined4 local_20;
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  local_1c [4];
  int local_18;
  int local_14;
  uint local_10;
  
  local_18 = 0;
  local_14 = 0;
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
              *)&local_24);
  std::vector<RandomList,std::allocator<RandomList>>::vector(local_30);
  local_20 = *(undefined4 *)(this + 0xae0);
  CDungeon::getRandomTowerMapIndexes(*(CDungeon **)(this + 0x9f0));
                    /* try { // try from 0814f556 to 0814f5cf has its CatchHandler @ 0814f637 */
  std::
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  ::find(local_40);
  local_24 = local_40[0];
  CDungeon::getRandomTowerMapIndexes(*(CDungeon **)(this + 0x9f0));
  std::
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
          ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                        *)&local_24,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                          *)&local_24);
    std::vector<RandomList,std::allocator<RandomList>>::operator=(local_30,(vector *)(iVar2 + 4));
    local_14 = get_rand_int(10000);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<RandomList,std::allocator<RandomList>>::size(local_30);
      if (uVar4 <= local_10) break;
      iVar2 = std::vector<RandomList,std::allocator<RandomList>>::operator[](local_30,local_10);
      local_18 = local_18 + *(int *)(iVar2 + 4);
      if (local_14 < local_18) {
        piVar3 = (int *)std::vector<RandomList,std::allocator<RandomList>>::operator[]
                                  (local_30,local_10);
        *param_1 = *piVar3;
        break;
      }
      local_10 = local_10 + 1;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  std::vector<RandomList,std::allocator<RandomList>>::~vector(local_30);
  return uVar5;
}

```

---

## reset

```asm
// === 0814bea2 WongWork::CBossStage::reset  [0x0814bea2-0x814bef3] ===
 814bea2:	55                   	push   %ebp
 814bea3:	89 e5                	mov    %esp,%ebp
 814bea5:	83 ec 18             	sub    $0x18,%esp
 814bea8:	8b 45 08             	mov    0x8(%ebp),%eax
 814beab:	c7 80 e8 09 00 00 00 	movl   $0x0,0x9e8(%eax)
 814beb2:	00 00 00 
 814beb5:	8b 45 08             	mov    0x8(%ebp),%eax
 814beb8:	c7 80 ec 09 00 00 00 	movl   $0x0,0x9ec(%eax)
 814bebf:	00 00 00 
 814bec2:	8b 45 08             	mov    0x8(%ebp),%eax
 814bec5:	05 f4 09 00 00       	add    $0x9f4,%eax
 814beca:	89 04 24             	mov    %eax,(%esp)
 814becd:	e8 dc 55 00 00       	call   81514ae <_ZN7MapInfo5ClearEv>
 814bed2:	8b 45 08             	mov    0x8(%ebp),%eax
 814bed5:	05 c8 09 00 00       	add    $0x9c8,%eax
 814beda:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 814bee1:	00 
 814bee2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814bee9:	00 
 814beea:	89 04 24             	mov    %eax,(%esp)
 814beed:	e8 ce 1d f3 ff       	call   807dcc0 <memset@plt>
 814bef2:	c9                   	leave
 814bef3:	c3                   	ret

```

```c
// WongWork::CBossStage::reset @ 0x814bea2

/* WongWork::CBossStage::reset() */

void __thiscall WongWork::CBossStage::reset(CBossStage *this)

{
  *(undefined4 *)(this + 0x9e8) = 0;
  *(undefined4 *)(this + 0x9ec) = 0;
  MapInfo::Clear((MapInfo *)(this + 0x9f4));
  memset(this + 0x9c8,0,0x10);
  return;
}

```

---

## ~CBossStage

```asm
// === 0814bdd6 WongWork::CBossStage::~CBossStage  [0x0814bdd6-0x814bea1] ===
 814bdd6:	55                   	push   %ebp
 814bdd7:	89 e5                	mov    %esp,%ebp
 814bdd9:	56                   	push   %esi
 814bdda:	53                   	push   %ebx
 814bddb:	83 ec 10             	sub    $0x10,%esp
 814bdde:	8b 45 08             	mov    0x8(%ebp),%eax
 814bde1:	c7 00 08 5f b7 08    	movl   $0x8b75f08,(%eax)
 814bde7:	8b 45 08             	mov    0x8(%ebp),%eax
 814bdea:	c7 80 e0 0a 00 00 01 	movl   $0x1,0xae0(%eax)
 814bdf1:	00 00 00 
 814bdf4:	8b 45 08             	mov    0x8(%ebp),%eax
 814bdf7:	c7 80 f0 09 00 00 00 	movl   $0x0,0x9f0(%eax)
 814bdfe:	00 00 00 
 814be01:	8b 45 08             	mov    0x8(%ebp),%eax
 814be04:	c7 80 e8 0a 00 00 00 	movl   $0x0,0xae8(%eax)
 814be0b:	00 00 00 
 814be0e:	8b 45 08             	mov    0x8(%ebp),%eax
 814be11:	05 f4 09 00 00       	add    $0x9f4,%eax
 814be16:	89 04 24             	mov    %eax,(%esp)
 814be19:	e8 90 56 00 00       	call   81514ae <_ZN7MapInfo5ClearEv>
 814be1e:	c7 04 24 60 ea 00 00 	movl   $0xea60,(%esp)
 814be25:	e8 5d 5d 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814be2a:	8b 55 08             	mov    0x8(%ebp),%edx
 814be2d:	89 82 30 0a 00 00    	mov    %eax,0xa30(%edx)
 814be33:	c7 04 24 60 ea 00 00 	movl   $0xea60,(%esp)
 814be3a:	e8 48 5d 56 00       	call   86b1b87 <_Z12get_rand_inti>
 814be3f:	8b 55 08             	mov    0x8(%ebp),%edx
 814be42:	89 82 34 0a 00 00    	mov    %eax,0xa34(%edx)
 814be48:	8b 45 08             	mov    0x8(%ebp),%eax
 814be4b:	05 f4 09 00 00       	add    $0x9f4,%eax
 814be50:	89 04 24             	mov    %eax,(%esp)
 814be53:	e8 64 5a 00 00       	call   81518bc <_ZN7MapInfoD1Ev>
 814be58:	eb 35                	jmp    814be8f <_ZN8WongWork10CBossStageD1Ev+0xb9>
 814be5a:	89 d3                	mov    %edx,%ebx
 814be5c:	89 c6                	mov    %eax,%esi
 814be5e:	8b 45 08             	mov    0x8(%ebp),%eax
 814be61:	05 f4 09 00 00       	add    $0x9f4,%eax
 814be66:	89 04 24             	mov    %eax,(%esp)
 814be69:	e8 4e 5a 00 00       	call   81518bc <_ZN7MapInfoD1Ev>
 814be6e:	89 f0                	mov    %esi,%eax
 814be70:	89 da                	mov    %ebx,%edx
 814be72:	eb 00                	jmp    814be74 <_ZN8WongWork10CBossStageD1Ev+0x9e>
 814be74:	89 d3                	mov    %edx,%ebx
 814be76:	89 c6                	mov    %eax,%esi
 814be78:	8b 45 08             	mov    0x8(%ebp),%eax
 814be7b:	89 04 24             	mov    %eax,(%esp)
 814be7e:	e8 b7 5b 00 00       	call   8151a3a <_ZN8WongWork9CBossPlayD1Ev>
 814be83:	89 f0                	mov    %esi,%eax
 814be85:	89 da                	mov    %ebx,%edx
 814be87:	89 04 24             	mov    %eax,(%esp)
 814be8a:	e8 c1 78 99 00       	call   8ae3750 <_Unwind_Resume>
 814be8f:	8b 45 08             	mov    0x8(%ebp),%eax
 814be92:	89 04 24             	mov    %eax,(%esp)
 814be95:	e8 a0 5b 00 00       	call   8151a3a <_ZN8WongWork9CBossPlayD1Ev>
 814be9a:	83 c4 10             	add    $0x10,%esp
 814be9d:	5b                   	pop    %ebx
 814be9e:	5e                   	pop    %esi
 814be9f:	5d                   	pop    %ebp
 814bea0:	c3                   	ret
 814bea1:	90                   	nop

```

```c
// WongWork::CBossStage::~CBossStage @ 0x814bdd6

/* WongWork::CBossStage::~CBossStage() */

void __thiscall WongWork::CBossStage::~CBossStage(CBossStage *this)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR_generateRewardItem_08b75f08;
  *(undefined4 *)(this + 0xae0) = 1;
  *(undefined4 *)(this + 0x9f0) = 0;
  *(undefined4 *)(this + 0xae8) = 0;
                    /* try { // try from 0814be19 to 0814be3e has its CatchHandler @ 0814be5a */
  MapInfo::Clear((MapInfo *)(this + 0x9f4));
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa30) = uVar1;
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0xa34) = uVar1;
                    /* try { // try from 0814be53 to 0814be57 has its CatchHandler @ 0814be74 */
  MapInfo::~MapInfo((MapInfo *)(this + 0x9f4));
  CBossPlay::~CBossPlay((CBossPlay *)this);
  return;
}

```

