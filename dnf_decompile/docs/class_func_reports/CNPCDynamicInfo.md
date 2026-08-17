# CNPCDynamicInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## changeMood

```asm
// === 085804b2 CNPCDynamicInfo::changeMood  [0x085804b2-0x858053d] ===
 85804b2:	55                   	push   %ebp
 85804b3:	89 e5                	mov    %esp,%ebp
 85804b5:	53                   	push   %ebx
 85804b6:	83 ec 24             	sub    $0x24,%esp
 85804b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85804bc:	88 45 f4             	mov    %al,-0xc(%ebp)
 85804bf:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 85804c3:	75 16                	jne    85804db <_ZN15CNPCDynamicInfo10changeMoodEb+0x29>
 85804c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85804c8:	8b 58 0c             	mov    0xc(%eax),%ebx
 85804cb:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85804d2:	e8 c7 b7 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85804d7:	39 c3                	cmp    %eax,%ebx
 85804d9:	7f 07                	jg     85804e2 <_ZN15CNPCDynamicInfo10changeMoodEb+0x30>
 85804db:	b8 01 00 00 00       	mov    $0x1,%eax
 85804e0:	eb 05                	jmp    85804e7 <_ZN15CNPCDynamicInfo10changeMoodEb+0x35>
 85804e2:	b8 00 00 00 00       	mov    $0x0,%eax
 85804e7:	84 c0                	test   %al,%al
 85804e9:	74 42                	je     858052d <_ZN15CNPCDynamicInfo10changeMoodEb+0x7b>
 85804eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85804ee:	8d 48 08             	lea    0x8(%eax),%ecx
 85804f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85804f4:	8d 50 04             	lea    0x4(%eax),%edx
 85804f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85804fa:	8b 00                	mov    (%eax),%eax
 85804fc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8580500:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580504:	89 04 24             	mov    %eax,(%esp)
 8580507:	e8 1c 0a 00 00       	call   8580f28 <_ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj>
 858050c:	8b 55 08             	mov    0x8(%ebp),%edx
 858050f:	89 42 0c             	mov    %eax,0xc(%edx)
 8580512:	8b 45 08             	mov    0x8(%ebp),%eax
 8580515:	8b 58 0c             	mov    0xc(%eax),%ebx
 8580518:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 858051f:	e8 7a b7 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8580524:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 8580527:	8b 45 08             	mov    0x8(%ebp),%eax
 858052a:	89 50 0c             	mov    %edx,0xc(%eax)
 858052d:	8b 45 08             	mov    0x8(%ebp),%eax
 8580530:	89 04 24             	mov    %eax,(%esp)
 8580533:	e8 d8 13 00 00       	call   8581910 <_ZNK15CNPCDynamicInfo7getMoodEv>
 8580538:	83 c4 24             	add    $0x24,%esp
 858053b:	5b                   	pop    %ebx
 858053c:	5d                   	pop    %ebp
 858053d:	c3                   	ret

```

```c
// CNPCDynamicInfo::changeMood @ 0x85804b2

/* CNPCDynamicInfo::changeMood(bool) */

void __thiscall CNPCDynamicInfo::changeMood(CNPCDynamicInfo *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (!param_1) {
    iVar1 = *(int *)(this + 0xc);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar3 < iVar1) {
      bVar2 = false;
      goto LAB_085804e7;
    }
  }
  bVar2 = true;
LAB_085804e7:
  if (bVar2) {
    uVar4 = CNPCScript::getNextMood(*(CNPCScript **)this,this + 4,(uint *)(this + 8));
    *(undefined4 *)(this + 0xc) = uVar4;
    iVar1 = *(int *)(this + 0xc);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(int *)(this + 0xc) = iVar1 + iVar3;
  }
  getMood(this);
  return;
}

```

---

## forceChangeMood

```asm
// === 0858053e CNPCDynamicInfo::forceChangeMood  [0x0858053e-0x8580583] ===
 858053e:	55                   	push   %ebp
 858053f:	89 e5                	mov    %esp,%ebp
 8580541:	83 ec 18             	sub    $0x18,%esp
 8580544:	8b 45 08             	mov    0x8(%ebp),%eax
 8580547:	89 04 24             	mov    %eax,(%esp)
 858054a:	e8 c1 13 00 00       	call   8581910 <_ZNK15CNPCDynamicInfo7getMoodEv>
 858054f:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8580552:	0f 94 c0             	sete   %al
 8580555:	84 c0                	test   %al,%al
 8580557:	74 07                	je     8580560 <_ZN15CNPCDynamicInfo15forceChangeMoodE13ENUM_NPC_MOOD+0x22>
 8580559:	b8 00 00 00 00       	mov    $0x0,%eax
 858055e:	eb 22                	jmp    8580582 <_ZN15CNPCDynamicInfo15forceChangeMoodE13ENUM_NPC_MOOD+0x44>
 8580560:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8580567:	00 
 8580568:	8b 45 08             	mov    0x8(%ebp),%eax
 858056b:	89 04 24             	mov    %eax,(%esp)
 858056e:	e8 3f ff ff ff       	call   85804b2 <_ZN15CNPCDynamicInfo10changeMoodEb>
 8580573:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8580576:	0f 95 c0             	setne  %al
 8580579:	84 c0                	test   %al,%al
 858057b:	75 e3                	jne    8580560 <_ZN15CNPCDynamicInfo15forceChangeMoodE13ENUM_NPC_MOOD+0x22>
 858057d:	b8 01 00 00 00       	mov    $0x1,%eax
 8580582:	c9                   	leave
 8580583:	c3                   	ret

```

```c
// CNPCDynamicInfo::forceChangeMood @ 0x858053e

/* CNPCDynamicInfo::forceChangeMood(ENUM_NPC_MOOD) */

undefined4 __thiscall CNPCDynamicInfo::forceChangeMood(CNPCDynamicInfo *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getMood(this);
  if (iVar1 == param_2) {
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = changeMood(this,true);
    } while (iVar1 != param_2);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## giveGiftItem

```asm
// === 085805a8 CNPCDynamicInfo::giveGiftItem  [0x085805a8-0x8580623] ===
 85805a8:	55                   	push   %ebp
 85805a9:	89 e5                	mov    %esp,%ebp
 85805ab:	83 ec 48             	sub    $0x48,%esp
 85805ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85805b1:	8b 00                	mov    (%eax),%eax
 85805b3:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85805b6:	89 54 24 10          	mov    %edx,0x10(%esp)
 85805ba:	8b 55 14             	mov    0x14(%ebp),%edx
 85805bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85805c1:	8b 55 18             	mov    0x18(%ebp),%edx
 85805c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85805c8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85805cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85805cf:	89 04 24             	mov    %eax,(%esp)
 85805d2:	e8 0d 04 00 00       	call   85809e4 <_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST>
 85805d7:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85805db:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 85805e0:	7e 3b                	jle    858061d <_ZNK15CNPCDynamicInfo12giveGiftItemEjmjPK5CItemR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST+0x75>
 85805e2:	df 45 f6             	filds  -0xa(%ebp)
 85805e5:	d9 5d e0             	fstps  -0x20(%ebp)
 85805e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85805eb:	89 04 24             	mov    %eax,(%esp)
 85805ee:	e8 1d 13 00 00       	call   8581910 <_ZNK15CNPCDynamicInfo7getMoodEv>
 85805f3:	8b 55 08             	mov    0x8(%ebp),%edx
 85805f6:	8b 12                	mov    (%edx),%edx
 85805f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85805fc:	89 14 24             	mov    %edx,(%esp)
 85805ff:	e8 c2 13 00 00       	call   85819c6 <_ZNK10CNPCScript19getFavorRatePerMoodE13ENUM_NPC_MOOD>
 8580604:	d8 4d e0             	fmuls  -0x20(%ebp)
 8580607:	d9 7d e6             	fnstcw -0x1a(%ebp)
 858060a:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 858060e:	b4 0c                	mov    $0xc,%ah
 8580610:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8580614:	d9 6d e4             	fldcw  -0x1c(%ebp)
 8580617:	df 5d f6             	fistps -0xa(%ebp)
 858061a:	d9 6d e6             	fldcw  -0x1a(%ebp)
 858061d:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 8580621:	c9                   	leave
 8580622:	c3                   	ret
 8580623:	90                   	nop

```

```c
// CNPCDynamicInfo::giveGiftItem @ 0x85805a8

/* CNPCDynamicInfo::giveGiftItem(unsigned int, unsigned long, unsigned int, CItem const*,
   ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const */

short __thiscall
CNPCDynamicInfo::giveGiftItem
          (CNPCDynamicInfo *this,uint param_1,ulong param_2,uint param_3,CItem *param_4,
          ENUM_NPC_FAVOR_GIFT_RESULT_CONST *param_5)

{
  undefined4 uVar1;
  longdouble lVar2;
  undefined2 local_e;
  
  local_e = CNPCScript::giveGiftItem(*(CNPCScript **)this,param_1,param_4,param_3,param_5);
  if (0 < local_e) {
    uVar1 = getMood(this);
    lVar2 = (longdouble)CNPCScript::getFavorRatePerMood(*(CNPCScript **)this,uVar1);
    local_e = (short)ROUND(lVar2 * (longdouble)local_e);
  }
  return local_e;
}

```

---

## isKeyItem

```asm
// === 08580584 CNPCDynamicInfo::isKeyItem  [0x08580584-0x85805a7] ===
 8580584:	55                   	push   %ebp
 8580585:	89 e5                	mov    %esp,%ebp
 8580587:	83 ec 18             	sub    $0x18,%esp
 858058a:	8b 45 08             	mov    0x8(%ebp),%eax
 858058d:	8b 00                	mov    (%eax),%eax
 858058f:	8b 55 10             	mov    0x10(%ebp),%edx
 8580592:	89 54 24 08          	mov    %edx,0x8(%esp)
 8580596:	8b 55 0c             	mov    0xc(%ebp),%edx
 8580599:	89 54 24 04          	mov    %edx,0x4(%esp)
 858059d:	89 04 24             	mov    %eax,(%esp)
 85805a0:	e8 c5 08 00 00       	call   8580e6a <_ZNK10CNPCScript9isKeyItemEmj>
 85805a5:	c9                   	leave
 85805a6:	c3                   	ret
 85805a7:	90                   	nop

```

```c
// CNPCDynamicInfo::isKeyItem @ 0x8580584

/* CNPCDynamicInfo::isKeyItem(unsigned long, unsigned int) const */

void __thiscall CNPCDynamicInfo::isKeyItem(CNPCDynamicInfo *this,ulong param_1,uint param_2)

{
  CNPCScript::isKeyItem(*(CNPCScript **)this,param_1,param_2);
  return;
}

```

---

## makeNotiPacketCurMood

```asm
// === 08580624 CNPCDynamicInfo::makeNotiPacketCurMood  [0x08580624-0x8580667] ===
 8580624:	55                   	push   %ebp
 8580625:	89 e5                	mov    %esp,%ebp
 8580627:	83 ec 18             	sub    $0x18,%esp
 858062a:	8b 45 08             	mov    0x8(%ebp),%eax
 858062d:	8b 00                	mov    (%eax),%eax
 858062f:	89 04 24             	mov    %eax,(%esp)
 8580632:	e8 75 13 00 00       	call   85819ac <_ZNK10CNPCScript8getIndexEv>
 8580637:	89 c2                	mov    %eax,%edx
 8580639:	8b 45 0c             	mov    0xc(%ebp),%eax
 858063c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8580640:	89 04 24             	mov    %eax,(%esp)
 8580643:	e8 5c 98 b5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8580648:	8b 45 08             	mov    0x8(%ebp),%eax
 858064b:	89 04 24             	mov    %eax,(%esp)
 858064e:	e8 bd 12 00 00       	call   8581910 <_ZNK15CNPCDynamicInfo7getMoodEv>
 8580653:	0f be d0             	movsbl %al,%edx
 8580656:	8b 45 0c             	mov    0xc(%ebp),%eax
 8580659:	89 54 24 04          	mov    %edx,0x4(%esp)
 858065d:	89 04 24             	mov    %eax,(%esp)
 8580660:	e8 bb b2 b4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8580665:	c9                   	leave
 8580666:	c3                   	ret
 8580667:	90                   	nop

```

```c
// CNPCDynamicInfo::makeNotiPacketCurMood @ 0x8580624

/* CNPCDynamicInfo::makeNotiPacketCurMood(PacketGuard&) const */

void __thiscall CNPCDynamicInfo::makeNotiPacketCurMood(CNPCDynamicInfo *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CNPCScript::getIndex(*(CNPCScript **)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar2);
  cVar1 = getMood(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
  return;
}

```

