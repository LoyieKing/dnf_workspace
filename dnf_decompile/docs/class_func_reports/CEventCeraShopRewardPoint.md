# CEventCeraShopRewardPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CEventCeraShopRewardPoint

```asm
// === 0816459a CEventCeraShopRewardPoint::CEventCeraShopRewardPoint  [0x0816459a-0x81645c9] ===
 816459a:	55                   	push   %ebp
 816459b:	89 e5                	mov    %esp,%ebp
 816459d:	83 ec 18             	sub    $0x18,%esp
 81645a0:	8b 45 08             	mov    0x8(%ebp),%eax
 81645a3:	89 04 24             	mov    %eax,(%esp)
 81645a6:	e8 81 68 fa ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81645ab:	8b 45 08             	mov    0x8(%ebp),%eax
 81645ae:	c7 00 68 cb b7 08    	movl   $0x8b7cb68,(%eax)
 81645b4:	8b 45 08             	mov    0x8(%ebp),%eax
 81645b7:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 81645be:	8b 45 08             	mov    0x8(%ebp),%eax
 81645c1:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 81645c8:	c9                   	leave
 81645c9:	c3                   	ret

```

```c
// CEventCeraShopRewardPoint::CEventCeraShopRewardPoint @ 0x816459a

/* CEventCeraShopRewardPoint::CEventCeraShopRewardPoint() */

void __thiscall
CEventCeraShopRewardPoint::CEventCeraShopRewardPoint(CEventCeraShopRewardPoint *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CEventCeraShopRewardPoint_08b7cb68;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## EndEvent

```asm
// === 081646b8 CEventCeraShopRewardPoint::EndEvent  [0x081646b8-0x816471d] ===
 81646b8:	55                   	push   %ebp
 81646b9:	89 e5                	mov    %esp,%ebp
 81646bb:	83 ec 28             	sub    $0x28,%esp
 81646be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81646c5:	00 
 81646c6:	c7 44 24 08 47 01 00 	movl   $0x147,0x8(%esp)
 81646cd:	00 
 81646ce:	c7 44 24 04 20 c9 b7 	movl   $0x8b7c920,0x4(%esp)
 81646d5:	08 
 81646d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81646d9:	89 04 24             	mov    %eax,(%esp)
 81646dc:	e8 37 b0 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81646e1:	c7 44 24 04 cc bc b7 	movl   $0x8b7bccc,0x4(%esp)
 81646e8:	08 
 81646e9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81646ec:	89 04 24             	mov    %eax,(%esp)
 81646ef:	e8 94 b0 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81646f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81646f7:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 81646fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8164701:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8164708:	8b 45 08             	mov    0x8(%ebp),%eax
 816470b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8164712:	00 
 8164713:	89 04 24             	mov    %eax,(%esp)
 8164716:	e8 c7 3d f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 816471b:	c9                   	leave
 816471c:	c3                   	ret
 816471d:	90                   	nop

```

```c
// CEventCeraShopRewardPoint::EndEvent @ 0x81646b8

/* CEventCeraShopRewardPoint::EndEvent() */

void __thiscall CEventCeraShopRewardPoint::EndEvent(CEventCeraShopRewardPoint *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void CEventCeraShopRewardPoint::EndEvent()",0x147,0);
  cMyTrace::operator()(local_1c,"[Taiwan, CeraShopRewardPoint] End event.");
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## SendReward

```asm
// === 0816471e CEventCeraShopRewardPoint::SendReward  [0x0816471e-0x816484f] ===
 816471e:	55                   	push   %ebp
 816471f:	89 e5                	mov    %esp,%ebp
 8164721:	56                   	push   %esi
 8164722:	53                   	push   %ebx
 8164723:	81 ec 90 01 00 00    	sub    $0x190,%esp
 8164729:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816472d:	0f 84 12 01 00 00    	je     8164845 <_ZN25CEventCeraShopRewardPoint10SendRewardEP5CUser+0x127>
 8164733:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816473a:	00 
 816473b:	c7 44 24 08 f5 bc b7 	movl   $0x8b7bcf5,0x8(%esp)
 8164742:	08 
 8164743:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 816474a:	00 
 816474b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8164752:	e8 a7 10 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8164757:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 816475e:	00 
 816475f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164763:	8d 45 da             	lea    -0x26(%ebp),%eax
 8164766:	89 04 24             	mov    %eax,(%esp)
 8164769:	e8 62 91 f1 ff       	call   807d8d0 <strncpy@plt>
 816476e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164775:	00 
 8164776:	c7 44 24 08 08 bd b7 	movl   $0x8b7bd08,0x8(%esp)
 816477d:	08 
 816477e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8164785:	00 
 8164786:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 816478d:	e8 6c 10 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8164792:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8164799:	00 
 816479a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816479e:	8d 85 9d fe ff ff    	lea    -0x163(%ebp),%eax
 81647a4:	89 04 24             	mov    %eax,(%esp)
 81647a7:	e8 24 91 f1 ff       	call   807d8d0 <strncpy@plt>
 81647ac:	8d 45 9d             	lea    -0x63(%ebp),%eax
 81647af:	89 04 24             	mov    %eax,(%esp)
 81647b2:	e8 9d 70 f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81647b7:	c7 45 9f 3d ec 28 00 	movl   $0x28ec3d,-0x61(%ebp)
 81647be:	8b 45 08             	mov    0x8(%ebp),%eax
 81647c1:	8b 40 0c             	mov    0xc(%eax),%eax
 81647c4:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81647c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81647ca:	89 04 24             	mov    %eax,(%esp)
 81647cd:	e8 be 74 f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81647d2:	89 c3                	mov    %eax,%ebx
 81647d4:	8d 85 9d fe ff ff    	lea    -0x163(%ebp),%eax
 81647da:	89 04 24             	mov    %eax,(%esp)
 81647dd:	e8 ce 9b f1 ff       	call   807e3b0 <strlen@plt>
 81647e2:	89 c6                	mov    %eax,%esi
 81647e4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81647eb:	ff 
 81647ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81647ef:	89 04 24             	mov    %eax,(%esp)
 81647f2:	e8 a9 97 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81647f7:	89 c2                	mov    %eax,%edx
 81647f9:	8b 45 08             	mov    0x8(%ebp),%eax
 81647fc:	8b 40 0c             	mov    0xc(%eax),%eax
 81647ff:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8164806:	00 
 8164807:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 816480e:	00 
 816480f:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8164813:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 816481a:	00 
 816481b:	89 74 24 14          	mov    %esi,0x14(%esp)
 816481f:	8d 8d 9d fe ff ff    	lea    -0x163(%ebp),%ecx
 8164825:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8164829:	89 54 24 0c          	mov    %edx,0xc(%esp)
 816482d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8164831:	8d 45 9d             	lea    -0x63(%ebp),%eax
 8164834:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164838:	8d 45 da             	lea    -0x26(%ebp),%eax
 816483b:	89 04 24             	mov    %eax,(%esp)
 816483e:	e8 a5 0d 3f 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8164843:	eb 01                	jmp    8164846 <_ZN25CEventCeraShopRewardPoint10SendRewardEP5CUser+0x128>
 8164845:	90                   	nop
 8164846:	81 c4 90 01 00 00    	add    $0x190,%esp
 816484c:	5b                   	pop    %ebx
 816484d:	5e                   	pop    %esi
 816484e:	5d                   	pop    %ebp
 816484f:	c3                   	ret

```

```c
// CEventCeraShopRewardPoint::SendReward @ 0x816471e

/* CEventCeraShopRewardPoint::SendReward(CUser*) */

void __thiscall
CEventCeraShopRewardPoint::SendReward(CEventCeraShopRewardPoint *this,CUser *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_167 [256];
  Inven_Item local_67 [2];
  undefined4 local_65;
  undefined4 local_60;
  char local_2a [30];
  
  if (param_1 != (CUser *)0x0) {
    pcVar1 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "tw_shop_open_title",(bool *)0x0);
    strncpy(local_2a,pcVar1,0x1d);
    pcVar1 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "tw_shop_open_content",(bool *)0x0);
    strncpy(local_167,pcVar1,0xff);
    Inven_Item::Inven_Item(local_67);
    local_65 = 0x28ec3d;
    local_60 = *(undefined4 *)(this + 0xc);
    uVar2 = CUser::GetServerGroup(param_1);
    sVar3 = strlen(local_167);
    uVar4 = CUser::get_charac_no(param_1,-1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_2a,local_67,*(undefined4 *)(this + 0xc),uVar4,local_167,sVar3,0,uVar2,0,0);
  }
  return;
}

```

---

## StartEvent

```asm
// === 08164618 CEventCeraShopRewardPoint::StartEvent  [0x08164618-0x8164683] ===
 8164618:	55                   	push   %ebp
 8164619:	89 e5                	mov    %esp,%ebp
 816461b:	56                   	push   %esi
 816461c:	53                   	push   %ebx
 816461d:	83 ec 20             	sub    $0x20,%esp
 8164620:	8b 45 08             	mov    0x8(%ebp),%eax
 8164623:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816462a:	00 
 816462b:	89 04 24             	mov    %eax,(%esp)
 816462e:	e8 af 3e f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8164633:	8b 45 08             	mov    0x8(%ebp),%eax
 8164636:	8b 70 0c             	mov    0xc(%eax),%esi
 8164639:	8b 45 08             	mov    0x8(%ebp),%eax
 816463c:	8b 58 10             	mov    0x10(%eax),%ebx
 816463f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164646:	00 
 8164647:	c7 44 24 08 3a 01 00 	movl   $0x13a,0x8(%esp)
 816464e:	00 
 816464f:	c7 44 24 04 60 c9 b7 	movl   $0x8b7c960,0x4(%esp)
 8164656:	08 
 8164657:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816465a:	89 04 24             	mov    %eax,(%esp)
 816465d:	e8 b6 b0 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8164662:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8164666:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816466a:	c7 44 24 04 88 bc b7 	movl   $0x8b7bc88,0x4(%esp)
 8164671:	08 
 8164672:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164675:	89 04 24             	mov    %eax,(%esp)
 8164678:	e8 0b b1 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816467d:	83 c4 20             	add    $0x20,%esp
 8164680:	5b                   	pop    %ebx
 8164681:	5e                   	pop    %esi
 8164682:	5d                   	pop    %ebp
 8164683:	c3                   	ret

```

```c
// CEventCeraShopRewardPoint::StartEvent @ 0x8164618

/* CEventCeraShopRewardPoint::StartEvent() */

void __thiscall CEventCeraShopRewardPoint::StartEvent(CEventCeraShopRewardPoint *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_1c [16];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x10);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventCeraShopRewardPoint::StartEvent()",0x13a,0);
  cMyTrace::operator()
            (local_1c,"[Taiwan, CeraShopRewardPoint] Start event. Timing:%d, CeraPoint:%d ",uVar2,
             uVar1);
  return;
}

```

---

## StartEvent_08164684

```asm
// === 08164684 CEventCeraShopRewardPoint::StartEvent  [0x08164684-0x81646b7] ===
 8164684:	55                   	push   %ebp
 8164685:	89 e5                	mov    %esp,%ebp
 8164687:	83 ec 18             	sub    $0x18,%esp
 816468a:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 816468e:	0f b7 d0             	movzwl %ax,%edx
 8164691:	8b 45 08             	mov    0x8(%ebp),%eax
 8164694:	89 50 10             	mov    %edx,0x10(%eax)
 8164697:	0f b7 45 0e          	movzwl 0xe(%ebp),%eax
 816469b:	0f b7 d0             	movzwl %ax,%edx
 816469e:	8b 45 08             	mov    0x8(%ebp),%eax
 81646a1:	89 50 0c             	mov    %edx,0xc(%eax)
 81646a4:	8b 45 08             	mov    0x8(%ebp),%eax
 81646a7:	8b 00                	mov    (%eax),%eax
 81646a9:	83 c0 08             	add    $0x8,%eax
 81646ac:	8b 10                	mov    (%eax),%edx
 81646ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81646b1:	89 04 24             	mov    %eax,(%esp)
 81646b4:	ff d2                	call   *%edx
 81646b6:	c9                   	leave
 81646b7:	c3                   	ret

```

```c
// CEventCeraShopRewardPoint::StartEvent @ 0x8164684

/* CEventCeraShopRewardPoint::StartEvent(Word_Param) */

void __thiscall CEventCeraShopRewardPoint::StartEvent(CEventCeraShopRewardPoint *this,uint param_2)

{
  *(uint *)(this + 0x10) = param_2 & 0xffff;
  *(uint *)(this + 0xc) = param_2 >> 0x10;
  (**(code **)(*(int *)this + 8))(this);
  return;
}

```

---

## ~CEventCeraShopRewardPoint

```asm
// === 081645ca CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint  [0x081645ca-0x81645f9] ===
 81645ca:	55                   	push   %ebp
 81645cb:	89 e5                	mov    %esp,%ebp
 81645cd:	83 ec 18             	sub    $0x18,%esp
 81645d0:	8b 45 08             	mov    0x8(%ebp),%eax
 81645d3:	c7 00 68 cb b7 08    	movl   $0x8b7cb68,(%eax)
 81645d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81645dc:	89 04 24             	mov    %eax,(%esp)
 81645df:	e8 6e 68 fa ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81645e4:	b8 00 00 00 00       	mov    $0x0,%eax
 81645e9:	84 c0                	test   %al,%al
 81645eb:	74 0b                	je     81645f8 <_ZN25CEventCeraShopRewardPointD1Ev+0x2e>
 81645ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81645f0:	89 04 24             	mov    %eax,(%esp)
 81645f3:	e8 f8 fe 5b 00       	call   87244f0 <_ZdlPv>
 81645f8:	c9                   	leave
 81645f9:	c3                   	ret

```

```c
// CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint @ 0x81645ca

/* WARNING: Removing unreachable block (ram,0x081645ed) */
/* CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint() */

void __thiscall
CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint(CEventCeraShopRewardPoint *this)

{
  *(undefined ***)this = &PTR__CEventCeraShopRewardPoint_08b7cb68;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CEventCeraShopRewardPoint_081645fa

```asm
// === 081645fa CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint  [0x081645fa-0x8164617] ===
 81645fa:	55                   	push   %ebp
 81645fb:	89 e5                	mov    %esp,%ebp
 81645fd:	83 ec 18             	sub    $0x18,%esp
 8164600:	8b 45 08             	mov    0x8(%ebp),%eax
 8164603:	89 04 24             	mov    %eax,(%esp)
 8164606:	e8 bf ff ff ff       	call   81645ca <_ZN25CEventCeraShopRewardPointD1Ev>
 816460b:	8b 45 08             	mov    0x8(%ebp),%eax
 816460e:	89 04 24             	mov    %eax,(%esp)
 8164611:	e8 da fe 5b 00       	call   87244f0 <_ZdlPv>
 8164616:	c9                   	leave
 8164617:	c3                   	ret

```

```c
// CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint @ 0x81645fa

/* CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint() */

void __thiscall
CEventCeraShopRewardPoint::~CEventCeraShopRewardPoint(CEventCeraShopRewardPoint *this)

{
  ~CEventCeraShopRewardPoint(this);
  operator_delete(this);
  return;
}

```

