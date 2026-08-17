# HeroMissionEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## EndEvent

```asm
// === 08166700 HeroMissionEvent::EndEvent  [0x08166700-0x8166751] ===
 8166700:	55                   	push   %ebp
 8166701:	89 e5                	mov    %esp,%ebp
 8166703:	83 ec 28             	sub    $0x28,%esp
 8166706:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816670d:	00 
 816670e:	c7 44 24 08 0d 02 00 	movl   $0x20d,0x8(%esp)
 8166715:	00 
 8166716:	c7 44 24 04 60 ed b7 	movl   $0x8b7ed60,0x4(%esp)
 816671d:	08 
 816671e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8166721:	89 04 24             	mov    %eax,(%esp)
 8166724:	e8 ef 8f 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8166729:	c7 44 24 04 9f dc b7 	movl   $0x8b7dc9f,0x4(%esp)
 8166730:	08 
 8166731:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8166734:	89 04 24             	mov    %eax,(%esp)
 8166737:	e8 4c 90 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816673c:	8b 45 08             	mov    0x8(%ebp),%eax
 816673f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8166746:	00 
 8166747:	89 04 24             	mov    %eax,(%esp)
 816674a:	e8 93 1d f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 816674f:	c9                   	leave
 8166750:	c3                   	ret
 8166751:	90                   	nop

```

```c
// HeroMissionEvent::EndEvent @ 0x8166700

/* HeroMissionEvent::EndEvent() */

void __thiscall HeroMissionEvent::EndEvent(HeroMissionEvent *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void HeroMissionEvent::EndEvent()",0x20d,0);
  cMyTrace::operator()(local_1c,"[HeroMission] End!");
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## HeroMissionEvent

```asm
// === 08166522 HeroMissionEvent::HeroMissionEvent  [0x08166522-0x81665a1] ===
 8166522:	55                   	push   %ebp
 8166523:	89 e5                	mov    %esp,%ebp
 8166525:	56                   	push   %esi
 8166526:	53                   	push   %ebx
 8166527:	83 ec 10             	sub    $0x10,%esp
 816652a:	8b 45 08             	mov    0x8(%ebp),%eax
 816652d:	89 04 24             	mov    %eax,(%esp)
 8166530:	e8 57 20 00 00       	call   816858c <_ZN4ARAD9SingletonI16HeroMissionEventEC1Ev>
 8166535:	8b 45 08             	mov    0x8(%ebp),%eax
 8166538:	89 04 24             	mov    %eax,(%esp)
 816653b:	e8 ec 48 fa ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8166540:	8b 45 08             	mov    0x8(%ebp),%eax
 8166543:	c7 00 08 f0 b7 08    	movl   $0x8b7f008,(%eax)
 8166549:	8b 45 08             	mov    0x8(%ebp),%eax
 816654c:	83 c0 0c             	add    $0xc,%eax
 816654f:	89 04 24             	mov    %eax,(%esp)
 8166552:	e8 3b 20 00 00       	call   8168592 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEC1Ev>
 8166557:	8b 45 08             	mov    0x8(%ebp),%eax
 816655a:	83 c0 24             	add    $0x24,%eax
 816655d:	89 04 24             	mov    %eax,(%esp)
 8166560:	e8 a7 20 00 00       	call   816860c <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEEC1Ev>
 8166565:	eb 33                	jmp    816659a <_ZN16HeroMissionEventC1Ev+0x78>
 8166567:	89 d3                	mov    %edx,%ebx
 8166569:	89 c6                	mov    %eax,%esi
 816656b:	8b 45 08             	mov    0x8(%ebp),%eax
 816656e:	83 c0 0c             	add    $0xc,%eax
 8166571:	89 04 24             	mov    %eax,(%esp)
 8166574:	e8 83 1d 00 00       	call   81682fc <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEED1Ev>
 8166579:	89 f0                	mov    %esi,%eax
 816657b:	89 da                	mov    %ebx,%edx
 816657d:	eb 00                	jmp    816657f <_ZN16HeroMissionEventC1Ev+0x5d>
 816657f:	89 d3                	mov    %edx,%ebx
 8166581:	89 c6                	mov    %eax,%esi
 8166583:	8b 45 08             	mov    0x8(%ebp),%eax
 8166586:	89 04 24             	mov    %eax,(%esp)
 8166589:	e8 c4 48 fa ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 816658e:	89 f0                	mov    %esi,%eax
 8166590:	89 da                	mov    %ebx,%edx
 8166592:	89 04 24             	mov    %eax,(%esp)
 8166595:	e8 b6 d1 97 00       	call   8ae3750 <_Unwind_Resume>
 816659a:	83 c4 10             	add    $0x10,%esp
 816659d:	5b                   	pop    %ebx
 816659e:	5e                   	pop    %esi
 816659f:	5d                   	pop    %ebp
 81665a0:	c3                   	ret
 81665a1:	90                   	nop

```

```c
// HeroMissionEvent::HeroMissionEvent @ 0x8166522

/* HeroMissionEvent::HeroMissionEvent() */

void __thiscall HeroMissionEvent::HeroMissionEvent(HeroMissionEvent *this)

{
  ARAD::Singleton<HeroMissionEvent>::Singleton();
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__HeroMissionEvent_08b7f008;
                    /* try { // try from 08166552 to 08166556 has its CatchHandler @ 0816657f */
  std::
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  ::map((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
         *)(this + 0xc));
                    /* try { // try from 08166560 to 08166564 has its CatchHandler @ 08166567 */
  std::
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  ::map((map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
         *)(this + 0x24));
  return;
}

```

---

## StartEvent

```asm
// === 0816664a HeroMissionEvent::StartEvent  [0x0816664a-0x81666e5] ===
 816664a:	55                   	push   %ebp
 816664b:	89 e5                	mov    %esp,%ebp
 816664d:	83 ec 38             	sub    $0x38,%esp
 8166650:	8b 45 08             	mov    0x8(%ebp),%eax
 8166653:	89 04 24             	mov    %eax,(%esp)
 8166656:	e8 6d 14 00 00       	call   8167ac8 <_ZN16HeroMissionEvent10loadScriptEv>
 816665b:	83 f0 01             	xor    $0x1,%eax
 816665e:	84 c0                	test   %al,%al
 8166660:	74 38                	je     816669a <_ZN16HeroMissionEvent10StartEventEv+0x50>
 8166662:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8166669:	00 
 816666a:	c7 44 24 08 fe 01 00 	movl   $0x1fe,0x8(%esp)
 8166671:	00 
 8166672:	c7 44 24 04 a0 ed b7 	movl   $0x8b7eda0,0x4(%esp)
 8166679:	08 
 816667a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 816667d:	89 04 24             	mov    %eax,(%esp)
 8166680:	e8 93 90 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8166685:	c7 44 24 04 68 dc b7 	movl   $0x8b7dc68,0x4(%esp)
 816668c:	08 
 816668d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8166690:	89 04 24             	mov    %eax,(%esp)
 8166693:	e8 f0 90 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8166698:	eb 49                	jmp    81666e3 <_ZN16HeroMissionEvent10StartEventEv+0x99>
 816669a:	8b 45 08             	mov    0x8(%ebp),%eax
 816669d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81666a4:	00 
 81666a5:	89 04 24             	mov    %eax,(%esp)
 81666a8:	e8 35 1e f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81666ad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81666b4:	00 
 81666b5:	c7 44 24 08 03 02 00 	movl   $0x203,0x8(%esp)
 81666bc:	00 
 81666bd:	c7 44 24 04 a0 ed b7 	movl   $0x8b7eda0,0x4(%esp)
 81666c4:	08 
 81666c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81666c8:	89 04 24             	mov    %eax,(%esp)
 81666cb:	e8 48 90 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81666d0:	c7 44 24 04 8a dc b7 	movl   $0x8b7dc8a,0x4(%esp)
 81666d7:	08 
 81666d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81666db:	89 04 24             	mov    %eax,(%esp)
 81666de:	e8 a5 90 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81666e3:	c9                   	leave
 81666e4:	c3                   	ret
 81666e5:	90                   	nop

```

```c
// HeroMissionEvent::StartEvent @ 0x816664a

/* HeroMissionEvent::StartEvent() */

void __thiscall HeroMissionEvent::StartEvent(HeroMissionEvent *this)

{
  char cVar1;
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  cVar1 = loadScript(this);
  if (cVar1 == '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    cMyTrace::cMyTrace(local_1c,"virtual void HeroMissionEvent::StartEvent()",0x203,0);
    cMyTrace::operator()(local_1c,"[HeroMission] Start!");
  }
  else {
    cMyTrace::cMyTrace(local_2c,"virtual void HeroMissionEvent::StartEvent()",0x1fe,5);
    cMyTrace::operator()(local_2c,"[HeroMission] Script load fail!!!");
  }
  return;
}

```

---

## StartEvent_081666e6

```asm
// === 081666e6 HeroMissionEvent::StartEvent  [0x081666e6-0x81666ff] ===
 81666e6:	55                   	push   %ebp
 81666e7:	89 e5                	mov    %esp,%ebp
 81666e9:	83 ec 18             	sub    $0x18,%esp
 81666ec:	8b 45 08             	mov    0x8(%ebp),%eax
 81666ef:	8b 00                	mov    (%eax),%eax
 81666f1:	83 c0 08             	add    $0x8,%eax
 81666f4:	8b 10                	mov    (%eax),%edx
 81666f6:	8b 45 08             	mov    0x8(%ebp),%eax
 81666f9:	89 04 24             	mov    %eax,(%esp)
 81666fc:	ff d2                	call   *%edx
 81666fe:	c9                   	leave
 81666ff:	c3                   	ret

```

```c
// HeroMissionEvent::StartEvent @ 0x81666e6

/* HeroMissionEvent::StartEvent(Word_Param) */

void HeroMissionEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

```

---

## findMissionValue

```asm
// === 08168010 HeroMissionEvent::findMissionValue  [0x08168010-0x816815e] ===
 8168010:	55                   	push   %ebp
 8168011:	89 e5                	mov    %esp,%ebp
 8168013:	83 ec 38             	sub    $0x38,%esp
 8168016:	8b 45 08             	mov    0x8(%ebp),%eax
 8168019:	8b 00                	mov    (%eax),%eax
 816801b:	83 c0 34             	add    $0x34,%eax
 816801e:	8b 10                	mov    (%eax),%edx
 8168020:	8b 45 08             	mov    0x8(%ebp),%eax
 8168023:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816802a:	00 
 816802b:	89 04 24             	mov    %eax,(%esp)
 816802e:	ff d2                	call   *%edx
 8168030:	83 f0 01             	xor    $0x1,%eax
 8168033:	84 c0                	test   %al,%al
 8168035:	74 0a                	je     8168041 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x31>
 8168037:	b8 00 00 00 00       	mov    $0x0,%eax
 816803c:	e9 1c 01 00 00       	jmp    816815d <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x14d>
 8168041:	8b 45 10             	mov    0x10(%ebp),%eax
 8168044:	85 c0                	test   %eax,%eax
 8168046:	7e 08                	jle    8168050 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x40>
 8168048:	8b 45 10             	mov    0x10(%ebp),%eax
 816804b:	83 f8 06             	cmp    $0x6,%eax
 816804e:	7e 0a                	jle    816805a <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x4a>
 8168050:	b8 00 00 00 00       	mov    $0x0,%eax
 8168055:	e9 03 01 00 00       	jmp    816815d <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x14d>
 816805a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8168061:	ff 
 8168062:	8b 45 0c             	mov    0xc(%ebp),%eax
 8168065:	89 04 24             	mov    %eax,(%esp)
 8168068:	e8 33 5f 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 816806d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8168070:	8b 45 08             	mov    0x8(%ebp),%eax
 8168073:	8d 48 24             	lea    0x24(%eax),%ecx
 8168076:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8168079:	8d 55 ec             	lea    -0x14(%ebp),%edx
 816807c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8168080:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8168084:	89 04 24             	mov    %eax,(%esp)
 8168087:	e8 6c 07 00 00       	call   81687f8 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 816808c:	83 ec 04             	sub    $0x4,%esp
 816808f:	8b 45 08             	mov    0x8(%ebp),%eax
 8168092:	8d 50 24             	lea    0x24(%eax),%edx
 8168095:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8168098:	89 54 24 04          	mov    %edx,0x4(%esp)
 816809c:	89 04 24             	mov    %eax,(%esp)
 816809f:	e8 80 07 00 00       	call   8168824 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 81680a4:	83 ec 04             	sub    $0x4,%esp
 81680a7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81680aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81680ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81680b1:	89 04 24             	mov    %eax,(%esp)
 81680b4:	e8 73 08 00 00       	call   816892c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEeqERKS7_>
 81680b9:	84 c0                	test   %al,%al
 81680bb:	74 0a                	je     81680c7 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0xb7>
 81680bd:	b8 00 00 00 00       	mov    $0x0,%eax
 81680c2:	e9 96 00 00 00       	jmp    816815d <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x14d>
 81680c7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81680ca:	89 04 24             	mov    %eax,(%esp)
 81680cd:	e8 6e 08 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 81680d2:	8d 50 04             	lea    0x4(%eax),%edx
 81680d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81680d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81680dc:	89 04 24             	mov    %eax,(%esp)
 81680df:	e8 12 04 00 00       	call   81684f6 <_ZNSt6vectorI16HeroMissionValueSaIS0_EE5beginEv>
 81680e4:	83 ec 04             	sub    $0x4,%esp
 81680e7:	eb 39                	jmp    8168122 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x112>
 81680e9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81680ec:	89 04 24             	mov    %eax,(%esp)
 81680ef:	e8 8e 04 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 81680f4:	8b 00                	mov    (%eax),%eax
 81680f6:	3b 45 10             	cmp    0x10(%ebp),%eax
 81680f9:	0f 94 c0             	sete   %al
 81680fc:	84 c0                	test   %al,%al
 81680fe:	74 17                	je     8168117 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x107>
 8168100:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8168103:	89 04 24             	mov    %eax,(%esp)
 8168106:	e8 df 0a 00 00       	call   8168bea <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEdeEv>
 816810b:	8b 55 14             	mov    0x14(%ebp),%edx
 816810e:	89 02                	mov    %eax,(%edx)
 8168110:	b8 01 00 00 00       	mov    $0x1,%eax
 8168115:	eb 46                	jmp    816815d <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0x14d>
 8168117:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816811a:	89 04 24             	mov    %eax,(%esp)
 816811d:	e8 4a 04 00 00       	call   816856c <_ZN9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEppEv>
 8168122:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8168125:	89 04 24             	mov    %eax,(%esp)
 8168128:	e8 13 08 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 816812d:	8d 50 04             	lea    0x4(%eax),%edx
 8168130:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8168133:	89 54 24 04          	mov    %edx,0x4(%esp)
 8168137:	89 04 24             	mov    %eax,(%esp)
 816813a:	e8 db 03 00 00       	call   816851a <_ZNSt6vectorI16HeroMissionValueSaIS0_EE3endEv>
 816813f:	83 ec 04             	sub    $0x4,%esp
 8168142:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8168145:	89 44 24 04          	mov    %eax,0x4(%esp)
 8168149:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816814c:	89 04 24             	mov    %eax,(%esp)
 816814f:	e8 ec 03 00 00       	call   8168540 <_ZN9__gnu_cxxneIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8168154:	84 c0                	test   %al,%al
 8168156:	75 91                	jne    81680e9 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue+0xd9>
 8168158:	b8 00 00 00 00       	mov    $0x0,%eax
 816815d:	c9                   	leave
 816815e:	c3                   	ret

```

```c
// HeroMissionEvent::findMissionValue @ 0x8168010

/* HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T,
   HeroMissionValue*&) */

undefined4 __thiscall
HeroMissionEvent::findMissionValue
          (HeroMissionEvent *this,CUser *param_1,int param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_1c [4];
  undefined4 local_18;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (((cVar1 == '\x01') && (0 < param_3)) && (param_3 < 7)) {
    local_18 = CUser::get_charac_no(param_1,-1);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::find((uint *)local_1c);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::end(local_14);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      std::
      _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
      ::operator->(local_1c);
      std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
      while( true ) {
        std::
        _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
        ::operator->(local_1c);
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
        bVar2 = __gnu_cxx::operator!=(local_20,local_10);
        if (!bVar2) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                        ::operator->(local_20);
        if (*piVar3 == param_3) {
          uVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator*(local_20);
          *param_4 = uVar4;
          return 1;
        }
        __gnu_cxx::
        __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
        ::operator++(local_20);
      }
    }
  }
  return 0;
}

```

---

## loadEventData

```asm
// === 0816709e HeroMissionEvent::loadEventData  [0x0816709e-0x8167215] ===
 816709e:	55                   	push   %ebp
 816709f:	89 e5                	mov    %esp,%ebp
 81670a1:	56                   	push   %esi
 81670a2:	53                   	push   %ebx
 81670a3:	83 ec 30             	sub    $0x30,%esp
 81670a6:	8b 45 08             	mov    0x8(%ebp),%eax
 81670a9:	8b 00                	mov    (%eax),%eax
 81670ab:	83 c0 34             	add    $0x34,%eax
 81670ae:	8b 10                	mov    (%eax),%edx
 81670b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81670b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81670ba:	00 
 81670bb:	89 04 24             	mov    %eax,(%esp)
 81670be:	ff d2                	call   *%edx
 81670c0:	83 f0 01             	xor    $0x1,%eax
 81670c3:	84 c0                	test   %al,%al
 81670c5:	0f 85 42 01 00 00    	jne    816720d <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x16f>
 81670cb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81670cf:	75 31                	jne    8167102 <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x64>
 81670d1:	c7 44 24 10 ec dc b7 	movl   $0x8b7dcec,0x10(%esp)
 81670d8:	08 
 81670d9:	c7 44 24 0c 8c 02 00 	movl   $0x28c,0xc(%esp)
 81670e0:	00 
 81670e1:	c7 44 24 08 a0 ec b7 	movl   $0x8b7eca0,0x8(%esp)
 81670e8:	08 
 81670e9:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 81670f0:	08 
 81670f1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81670f8:	e8 0d cb 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81670fd:	e9 0c 01 00 00       	jmp    816720e <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x170>
 8167102:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8167107:	c7 44 24 08 91 02 00 	movl   $0x291,0x8(%esp)
 816710e:	00 
 816710f:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167116:	08 
 8167117:	89 04 24             	mov    %eax,(%esp)
 816711a:	e8 67 89 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 816711f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8167126:	00 
 8167127:	89 44 24 04          	mov    %eax,0x4(%esp)
 816712b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816712e:	89 04 24             	mov    %eax,(%esp)
 8167131:	e8 f0 1a f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8167136:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167139:	89 04 24             	mov    %eax,(%esp)
 816713c:	e8 55 1b f6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8167141:	89 44 24 08          	mov    %eax,0x8(%esp)
 8167145:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 816714c:	00 
 816714d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8167150:	89 04 24             	mov    %eax,(%esp)
 8167153:	e8 f8 c7 ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 8167158:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816715b:	89 04 24             	mov    %eax,(%esp)
 816715e:	e8 eb 1a f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8167163:	89 04 24             	mov    %eax,(%esp)
 8167166:	e8 5b 7c ff ff       	call   815edc6 <_ZN12CStreamGuard11GetInBufferIN6Taiwan22SigLoadHeroMissionDataEEEPT_v>
 816716b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816716e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8167172:	75 2e                	jne    81671a2 <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x104>
 8167174:	c7 44 24 10 6c dd b7 	movl   $0x8b7dd6c,0x10(%esp)
 816717b:	08 
 816717c:	c7 44 24 0c 96 02 00 	movl   $0x296,0xc(%esp)
 8167183:	00 
 8167184:	c7 44 24 08 a0 ec b7 	movl   $0x8b7eca0,0x8(%esp)
 816718b:	08 
 816718c:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167193:	08 
 8167194:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816719b:	e8 6a ca 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81671a0:	eb 5e                	jmp    8167200 <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x162>
 81671a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81671a5:	89 04 24             	mov    %eax,(%esp)
 81671a8:	e8 57 c8 ff ff       	call   8163a04 <_ZN6Taiwan22SigLoadHeroMissionData4initEv>
 81671ad:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81671b4:	ff 
 81671b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81671b8:	89 04 24             	mov    %eax,(%esp)
 81671bb:	e8 e0 6d 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81671c0:	89 c2                	mov    %eax,%edx
 81671c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81671c5:	89 10                	mov    %edx,(%eax)
 81671c7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81671cc:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81671cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 81671d3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81671da:	00 
 81671db:	89 04 24             	mov    %eax,(%esp)
 81671de:	e8 fb 9d 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81671e3:	eb 1b                	jmp    8167200 <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x162>
 81671e5:	89 d3                	mov    %edx,%ebx
 81671e7:	89 c6                	mov    %eax,%esi
 81671e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81671ec:	89 04 24             	mov    %eax,(%esp)
 81671ef:	e8 de 56 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81671f4:	89 f0                	mov    %esi,%eax
 81671f6:	89 da                	mov    %ebx,%edx
 81671f8:	89 04 24             	mov    %eax,(%esp)
 81671fb:	e8 50 c5 97 00       	call   8ae3750 <_Unwind_Resume>
 8167200:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8167203:	89 04 24             	mov    %eax,(%esp)
 8167206:	e8 c7 56 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816720b:	eb 01                	jmp    816720e <_ZN16HeroMissionEvent13loadEventDataEP5CUser+0x170>
 816720d:	90                   	nop
 816720e:	83 c4 30             	add    $0x30,%esp
 8167211:	5b                   	pop    %ebx
 8167212:	5e                   	pop    %esi
 8167213:	5d                   	pop    %ebp
 8167214:	c3                   	ret
 8167215:	90                   	nop

```

```c
// HeroMissionEvent::loadEventData @ 0x816709e

/* HeroMissionEvent::loadEventData(CUser*) */

void __thiscall HeroMissionEvent::loadEventData(HeroMissionEvent *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  undefined4 uVar3;
  CStreamGuard *this_00;
  CStreamGuard local_18 [8];
  SigLoadHeroMissionData *local_10;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::loadEventData(CUser*)",0x28c,"[HeroMission] User is null.")
      ;
    }
    else {
      pSVar2 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,
                                   "localtaiwan/Event/EventHeroMission.cpp",0x291);
      CStreamGuard::CStreamGuard(local_18,pSVar2,true);
      uVar3 = CUser::GetUID(param_1);
                    /* try { // try from 08167153 to 081671e2 has its CatchHandler @ 081671e5 */
      Taiwan::internal_stream(local_18,0x12,uVar3);
      this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
      local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadHeroMissionData>(this_00);
      if (local_10 == (SigLoadHeroMissionData *)0x0) {
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "void HeroMissionEvent::loadEventData(CUser*)",0x296,
                   "[HeroMission] SigLoadHeroMissionData is null.");
      }
      else {
        Taiwan::SigLoadHeroMissionData::init(local_10);
        uVar3 = CUser::get_charac_no(param_1,-1);
        *(undefined4 *)local_10 = uVar3;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
      }
      CStreamGuard::~CStreamGuard(local_18);
    }
  }
  return;
}

```

---

## loadScript

```asm
// === 08167ac8 HeroMissionEvent::loadScript  [0x08167ac8-0x816800f] ===
 8167ac8:	55                   	push   %ebp
 8167ac9:	89 e5                	mov    %esp,%ebp
 8167acb:	57                   	push   %edi
 8167acc:	56                   	push   %esi
 8167acd:	53                   	push   %ebx
 8167ace:	83 ec 6c             	sub    $0x6c,%esp
 8167ad1:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8167ad8:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8167adf:	e8 6c c9 5b 00       	call   8724450 <_Znwj>
 8167ae4:	89 c3                	mov    %eax,%ebx
 8167ae6:	89 d8                	mov    %ebx,%eax
 8167ae8:	89 04 24             	mov    %eax,(%esp)
 8167aeb:	e8 52 d8 ff ff       	call   8165342 <_ZN19ClearDungeonMissionC1Ev>
 8167af0:	eb 15                	jmp    8167b07 <_ZN16HeroMissionEvent10loadScriptEv+0x3f>
 8167af2:	89 d6                	mov    %edx,%esi
 8167af4:	89 c7                	mov    %eax,%edi
 8167af6:	89 1c 24             	mov    %ebx,(%esp)
 8167af9:	e8 f2 c9 5b 00       	call   87244f0 <_ZdlPv>
 8167afe:	89 f8                	mov    %edi,%eax
 8167b00:	89 f2                	mov    %esi,%edx
 8167b02:	e9 59 03 00 00       	jmp    8167e60 <_ZN16HeroMissionEvent10loadScriptEv+0x398>
 8167b07:	89 d8                	mov    %ebx,%eax
 8167b09:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8167b0c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8167b10:	75 2c                	jne    8167b3e <_ZN16HeroMissionEvent10loadScriptEv+0x76>
 8167b12:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8167b19:	e8 e2 dc 5b 00       	call   8725800 <__cxa_allocate_exception>
 8167b1e:	89 c2                	mov    %eax,%edx
 8167b20:	c7 02 45 03 00 00    	movl   $0x345,(%edx)
 8167b26:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8167b2d:	00 
 8167b2e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8167b35:	09 
 8167b36:	89 04 24             	mov    %eax,(%esp)
 8167b39:	e8 12 d1 5b 00       	call   8724c50 <__cxa_throw>
 8167b3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8167b41:	89 04 24             	mov    %eax,(%esp)
 8167b44:	e8 61 d4 ff ff       	call   8164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>
 8167b49:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8167b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8167b4f:	8d 50 0c             	lea    0xc(%eax),%edx
 8167b52:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8167b55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167b59:	89 14 24             	mov    %edx,(%esp)
 8167b5c:	e8 65 0e 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167b61:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8167b64:	89 10                	mov    %edx,(%eax)
 8167b66:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8167b6d:	e8 de c8 5b 00       	call   8724450 <_Znwj>
 8167b72:	89 c3                	mov    %eax,%ebx
 8167b74:	89 d8                	mov    %ebx,%eax
 8167b76:	89 04 24             	mov    %eax,(%esp)
 8167b79:	e8 16 db ff ff       	call   8165694 <_ZN17UseFatigueMissionC1Ev>
 8167b7e:	eb 15                	jmp    8167b95 <_ZN16HeroMissionEvent10loadScriptEv+0xcd>
 8167b80:	89 d6                	mov    %edx,%esi
 8167b82:	89 c7                	mov    %eax,%edi
 8167b84:	89 1c 24             	mov    %ebx,(%esp)
 8167b87:	e8 64 c9 5b 00       	call   87244f0 <_ZdlPv>
 8167b8c:	89 f8                	mov    %edi,%eax
 8167b8e:	89 f2                	mov    %esi,%edx
 8167b90:	e9 cb 02 00 00       	jmp    8167e60 <_ZN16HeroMissionEvent10loadScriptEv+0x398>
 8167b95:	89 d8                	mov    %ebx,%eax
 8167b97:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8167b9a:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8167b9e:	75 2c                	jne    8167bcc <_ZN16HeroMissionEvent10loadScriptEv+0x104>
 8167ba0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8167ba7:	e8 54 dc 5b 00       	call   8725800 <__cxa_allocate_exception>
 8167bac:	89 c2                	mov    %eax,%edx
 8167bae:	c7 02 49 03 00 00    	movl   $0x349,(%edx)
 8167bb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8167bbb:	00 
 8167bbc:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8167bc3:	09 
 8167bc4:	89 04 24             	mov    %eax,(%esp)
 8167bc7:	e8 84 d0 5b 00       	call   8724c50 <__cxa_throw>
 8167bcc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8167bcf:	89 04 24             	mov    %eax,(%esp)
 8167bd2:	e8 d3 d3 ff ff       	call   8164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>
 8167bd7:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8167bda:	8b 45 08             	mov    0x8(%ebp),%eax
 8167bdd:	8d 50 0c             	lea    0xc(%eax),%edx
 8167be0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8167be3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167be7:	89 14 24             	mov    %edx,(%esp)
 8167bea:	e8 d7 0d 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167bef:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8167bf2:	89 10                	mov    %edx,(%eax)
 8167bf4:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8167bfb:	e8 50 c8 5b 00       	call   8724450 <_Znwj>
 8167c00:	89 c3                	mov    %eax,%ebx
 8167c02:	89 d8                	mov    %ebx,%eax
 8167c04:	89 04 24             	mov    %eax,(%esp)
 8167c07:	e8 14 dd ff ff       	call   8165920 <_ZN14UseCubeMissionC1Ev>
 8167c0c:	eb 15                	jmp    8167c23 <_ZN16HeroMissionEvent10loadScriptEv+0x15b>
 8167c0e:	89 d6                	mov    %edx,%esi
 8167c10:	89 c7                	mov    %eax,%edi
 8167c12:	89 1c 24             	mov    %ebx,(%esp)
 8167c15:	e8 d6 c8 5b 00       	call   87244f0 <_ZdlPv>
 8167c1a:	89 f8                	mov    %edi,%eax
 8167c1c:	89 f2                	mov    %esi,%edx
 8167c1e:	e9 3d 02 00 00       	jmp    8167e60 <_ZN16HeroMissionEvent10loadScriptEv+0x398>
 8167c23:	89 d8                	mov    %ebx,%eax
 8167c25:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8167c28:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8167c2c:	75 2c                	jne    8167c5a <_ZN16HeroMissionEvent10loadScriptEv+0x192>
 8167c2e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8167c35:	e8 c6 db 5b 00       	call   8725800 <__cxa_allocate_exception>
 8167c3a:	89 c2                	mov    %eax,%edx
 8167c3c:	c7 02 4d 03 00 00    	movl   $0x34d,(%edx)
 8167c42:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8167c49:	00 
 8167c4a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8167c51:	09 
 8167c52:	89 04 24             	mov    %eax,(%esp)
 8167c55:	e8 f6 cf 5b 00       	call   8724c50 <__cxa_throw>
 8167c5a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8167c5d:	89 04 24             	mov    %eax,(%esp)
 8167c60:	e8 45 d3 ff ff       	call   8164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>
 8167c65:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8167c68:	8b 45 08             	mov    0x8(%ebp),%eax
 8167c6b:	8d 50 0c             	lea    0xc(%eax),%edx
 8167c6e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8167c71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167c75:	89 14 24             	mov    %edx,(%esp)
 8167c78:	e8 49 0d 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167c7d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8167c80:	89 10                	mov    %edx,(%eax)
 8167c82:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8167c89:	e8 c2 c7 5b 00       	call   8724450 <_Znwj>
 8167c8e:	89 c3                	mov    %eax,%ebx
 8167c90:	89 d8                	mov    %ebx,%eax
 8167c92:	89 04 24             	mov    %eax,(%esp)
 8167c95:	e8 12 df ff ff       	call   8165bac <_ZN14LevelUpMissionC1Ev>
 8167c9a:	eb 15                	jmp    8167cb1 <_ZN16HeroMissionEvent10loadScriptEv+0x1e9>
 8167c9c:	89 d6                	mov    %edx,%esi
 8167c9e:	89 c7                	mov    %eax,%edi
 8167ca0:	89 1c 24             	mov    %ebx,(%esp)
 8167ca3:	e8 48 c8 5b 00       	call   87244f0 <_ZdlPv>
 8167ca8:	89 f8                	mov    %edi,%eax
 8167caa:	89 f2                	mov    %esi,%edx
 8167cac:	e9 af 01 00 00       	jmp    8167e60 <_ZN16HeroMissionEvent10loadScriptEv+0x398>
 8167cb1:	89 d8                	mov    %ebx,%eax
 8167cb3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8167cb6:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8167cba:	75 2c                	jne    8167ce8 <_ZN16HeroMissionEvent10loadScriptEv+0x220>
 8167cbc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8167cc3:	e8 38 db 5b 00       	call   8725800 <__cxa_allocate_exception>
 8167cc8:	89 c2                	mov    %eax,%edx
 8167cca:	c7 02 51 03 00 00    	movl   $0x351,(%edx)
 8167cd0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8167cd7:	00 
 8167cd8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8167cdf:	09 
 8167ce0:	89 04 24             	mov    %eax,(%esp)
 8167ce3:	e8 68 cf 5b 00       	call   8724c50 <__cxa_throw>
 8167ce8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8167ceb:	89 04 24             	mov    %eax,(%esp)
 8167cee:	e8 b7 d2 ff ff       	call   8164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>
 8167cf3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8167cf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8167cf9:	8d 50 0c             	lea    0xc(%eax),%edx
 8167cfc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8167cff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167d03:	89 14 24             	mov    %edx,(%esp)
 8167d06:	e8 bb 0c 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167d0b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8167d0e:	89 10                	mov    %edx,(%eax)
 8167d10:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8167d17:	e8 34 c7 5b 00       	call   8724450 <_Znwj>
 8167d1c:	89 c3                	mov    %eax,%ebx
 8167d1e:	89 d8                	mov    %ebx,%eax
 8167d20:	89 04 24             	mov    %eax,(%esp)
 8167d23:	e8 68 e2 ff ff       	call   8165f90 <_ZN17AttendanceMissionC1Ev>
 8167d28:	eb 15                	jmp    8167d3f <_ZN16HeroMissionEvent10loadScriptEv+0x277>
 8167d2a:	89 d6                	mov    %edx,%esi
 8167d2c:	89 c7                	mov    %eax,%edi
 8167d2e:	89 1c 24             	mov    %ebx,(%esp)
 8167d31:	e8 ba c7 5b 00       	call   87244f0 <_ZdlPv>
 8167d36:	89 f8                	mov    %edi,%eax
 8167d38:	89 f2                	mov    %esi,%edx
 8167d3a:	e9 21 01 00 00       	jmp    8167e60 <_ZN16HeroMissionEvent10loadScriptEv+0x398>
 8167d3f:	89 d8                	mov    %ebx,%eax
 8167d41:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8167d44:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8167d48:	75 2c                	jne    8167d76 <_ZN16HeroMissionEvent10loadScriptEv+0x2ae>
 8167d4a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8167d51:	e8 aa da 5b 00       	call   8725800 <__cxa_allocate_exception>
 8167d56:	89 c2                	mov    %eax,%edx
 8167d58:	c7 02 55 03 00 00    	movl   $0x355,(%edx)
 8167d5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8167d65:	00 
 8167d66:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8167d6d:	09 
 8167d6e:	89 04 24             	mov    %eax,(%esp)
 8167d71:	e8 da ce 5b 00       	call   8724c50 <__cxa_throw>
 8167d76:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8167d79:	89 04 24             	mov    %eax,(%esp)
 8167d7c:	e8 29 d2 ff ff       	call   8164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>
 8167d81:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8167d84:	8b 45 08             	mov    0x8(%ebp),%eax
 8167d87:	8d 50 0c             	lea    0xc(%eax),%edx
 8167d8a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8167d8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167d91:	89 14 24             	mov    %edx,(%esp)
 8167d94:	e8 2d 0c 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167d99:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8167d9c:	89 10                	mov    %edx,(%eax)
 8167d9e:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8167da5:	e8 a6 c6 5b 00       	call   8724450 <_Znwj>
 8167daa:	89 c3                	mov    %eax,%ebx
 8167dac:	89 d8                	mov    %ebx,%eax
 8167dae:	89 04 24             	mov    %eax,(%esp)
 8167db1:	e8 50 e5 ff ff       	call   8166306 <_ZN12TotalMissionC1Ev>
 8167db6:	eb 15                	jmp    8167dcd <_ZN16HeroMissionEvent10loadScriptEv+0x305>
 8167db8:	89 d6                	mov    %edx,%esi
 8167dba:	89 c7                	mov    %eax,%edi
 8167dbc:	89 1c 24             	mov    %ebx,(%esp)
 8167dbf:	e8 2c c7 5b 00       	call   87244f0 <_ZdlPv>
 8167dc4:	89 f8                	mov    %edi,%eax
 8167dc6:	89 f2                	mov    %esi,%edx
 8167dc8:	e9 93 00 00 00       	jmp    8167e60 <_ZN16HeroMissionEvent10loadScriptEv+0x398>
 8167dcd:	89 d8                	mov    %ebx,%eax
 8167dcf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8167dd2:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8167dd6:	75 2c                	jne    8167e04 <_ZN16HeroMissionEvent10loadScriptEv+0x33c>
 8167dd8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8167ddf:	e8 1c da 5b 00       	call   8725800 <__cxa_allocate_exception>
 8167de4:	89 c2                	mov    %eax,%edx
 8167de6:	c7 02 59 03 00 00    	movl   $0x359,(%edx)
 8167dec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8167df3:	00 
 8167df4:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8167dfb:	09 
 8167dfc:	89 04 24             	mov    %eax,(%esp)
 8167dff:	e8 4c ce 5b 00       	call   8724c50 <__cxa_throw>
 8167e04:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8167e07:	89 04 24             	mov    %eax,(%esp)
 8167e0a:	e8 9b d1 ff ff       	call   8164faa <_ZN24BaseHeroMissionCondition14getMissionCodeEv>
 8167e0f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8167e12:	8b 45 08             	mov    0x8(%ebp),%eax
 8167e15:	8d 50 0c             	lea    0xc(%eax),%edx
 8167e18:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8167e1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167e1f:	89 14 24             	mov    %edx,(%esp)
 8167e22:	e8 9f 0b 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167e27:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8167e2a:	89 10                	mov    %edx,(%eax)
 8167e2c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8167e33:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8167e36:	89 04 24             	mov    %eax,(%esp)
 8167e39:	e8 7e 0c 00 00       	call   8168abc <_ZNSt6vectorI20HeroMissionConditionSaIS0_EEC1Ev>
 8167e3e:	c7 44 24 04 44 de b7 	movl   $0x8b7de44,0x4(%esp)
 8167e45:	08 
 8167e46:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8167e49:	89 04 24             	mov    %eax,(%esp)
 8167e4c:	e8 ca 98 7f 00       	call   896171b <_Z31importHeroMissionConditionsDataPSt6vectorI20HeroMissionConditionSaIS0_EEPKc>
 8167e51:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8167e54:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8167e58:	0f 84 b0 00 00 00    	je     8167f0e <_ZN16HeroMissionEvent10loadScriptEv+0x446>
 8167e5e:	eb 71                	jmp    8167ed1 <_ZN16HeroMissionEvent10loadScriptEv+0x409>
 8167e60:	83 fa 01             	cmp    $0x1,%edx
 8167e63:	74 08                	je     8167e6d <_ZN16HeroMissionEvent10loadScriptEv+0x3a5>
 8167e65:	89 04 24             	mov    %eax,(%esp)
 8167e68:	e8 e3 b8 97 00       	call   8ae3750 <_Unwind_Resume>
 8167e6d:	89 04 24             	mov    %eax,(%esp)
 8167e70:	e8 6b de 5b 00       	call   8725ce0 <__cxa_begin_catch>
 8167e75:	8b 00                	mov    (%eax),%eax
 8167e77:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8167e7a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8167e7d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8167e81:	c7 44 24 10 60 de b7 	movl   $0x8b7de60,0x10(%esp)
 8167e88:	08 
 8167e89:	c7 44 24 0c 5e 03 00 	movl   $0x35e,0xc(%esp)
 8167e90:	00 
 8167e91:	c7 44 24 08 e0 ea b7 	movl   $0x8b7eae0,0x8(%esp)
 8167e98:	08 
 8167e99:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167ea0:	08 
 8167ea1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8167ea8:	e8 5d bd 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8167ead:	bb 00 00 00 00       	mov    $0x0,%ebx
 8167eb2:	e8 79 dd 5b 00       	call   8725c30 <__cxa_end_catch>
 8167eb7:	e9 46 01 00 00       	jmp    8168002 <_ZN16HeroMissionEvent10loadScriptEv+0x53a>
 8167ebc:	89 d3                	mov    %edx,%ebx
 8167ebe:	89 c6                	mov    %eax,%esi
 8167ec0:	e8 6b dd 5b 00       	call   8725c30 <__cxa_end_catch>
 8167ec5:	89 f0                	mov    %esi,%eax
 8167ec7:	89 da                	mov    %ebx,%edx
 8167ec9:	89 04 24             	mov    %eax,(%esp)
 8167ecc:	e8 7f b8 97 00       	call   8ae3750 <_Unwind_Resume>
 8167ed1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8167ed4:	89 44 24 14          	mov    %eax,0x14(%esp)
 8167ed8:	c7 44 24 10 90 de b7 	movl   $0x8b7de90,0x10(%esp)
 8167edf:	08 
 8167ee0:	c7 44 24 0c 67 03 00 	movl   $0x367,0xc(%esp)
 8167ee7:	00 
 8167ee8:	c7 44 24 08 e0 ea b7 	movl   $0x8b7eae0,0x8(%esp)
 8167eef:	08 
 8167ef0:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167ef7:	08 
 8167ef8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8167eff:	e8 06 bd 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8167f04:	bb 00 00 00 00       	mov    $0x0,%ebx
 8167f09:	e9 e9 00 00 00       	jmp    8167ff7 <_ZN16HeroMissionEvent10loadScriptEv+0x52f>
 8167f0e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167f11:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8167f14:	89 54 24 04          	mov    %edx,0x4(%esp)
 8167f18:	89 04 24             	mov    %eax,(%esp)
 8167f1b:	e8 0e 0c 00 00       	call   8168b2e <_ZNSt6vectorI20HeroMissionConditionSaIS0_EE5beginEv>
 8167f20:	83 ec 04             	sub    $0x4,%esp
 8167f23:	eb 76                	jmp    8167f9b <_ZN16HeroMissionEvent10loadScriptEv+0x4d3>
 8167f25:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167f28:	89 04 24             	mov    %eax,(%esp)
 8167f2b:	e8 8a 0c 00 00       	call   8168bba <_ZNK9__gnu_cxx17__normal_iteratorIP20HeroMissionConditionSt6vectorIS1_SaIS1_EEEptEv>
 8167f30:	8b 00                	mov    (%eax),%eax
 8167f32:	85 c0                	test   %eax,%eax
 8167f34:	7e 19                	jle    8167f4f <_ZN16HeroMissionEvent10loadScriptEv+0x487>
 8167f36:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167f39:	89 04 24             	mov    %eax,(%esp)
 8167f3c:	e8 79 0c 00 00       	call   8168bba <_ZNK9__gnu_cxx17__normal_iteratorIP20HeroMissionConditionSt6vectorIS1_SaIS1_EEEptEv>
 8167f41:	8b 00                	mov    (%eax),%eax
 8167f43:	83 f8 06             	cmp    $0x6,%eax
 8167f46:	7f 07                	jg     8167f4f <_ZN16HeroMissionEvent10loadScriptEv+0x487>
 8167f48:	b8 01 00 00 00       	mov    $0x1,%eax
 8167f4d:	eb 05                	jmp    8167f54 <_ZN16HeroMissionEvent10loadScriptEv+0x48c>
 8167f4f:	b8 00 00 00 00       	mov    $0x0,%eax
 8167f54:	84 c0                	test   %al,%al
 8167f56:	74 38                	je     8167f90 <_ZN16HeroMissionEvent10loadScriptEv+0x4c8>
 8167f58:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167f5b:	89 04 24             	mov    %eax,(%esp)
 8167f5e:	e8 61 0c 00 00       	call   8168bc4 <_ZNK9__gnu_cxx17__normal_iteratorIP20HeroMissionConditionSt6vectorIS1_SaIS1_EEEdeEv>
 8167f63:	89 c3                	mov    %eax,%ebx
 8167f65:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167f68:	89 04 24             	mov    %eax,(%esp)
 8167f6b:	e8 4a 0c 00 00       	call   8168bba <_ZNK9__gnu_cxx17__normal_iteratorIP20HeroMissionConditionSt6vectorIS1_SaIS1_EEEptEv>
 8167f70:	8b 55 08             	mov    0x8(%ebp),%edx
 8167f73:	83 c2 0c             	add    $0xc,%edx
 8167f76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167f7a:	89 14 24             	mov    %edx,(%esp)
 8167f7d:	e8 44 0a 00 00       	call   81689c6 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEEixERS8_>
 8167f82:	8b 00                	mov    (%eax),%eax
 8167f84:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8167f88:	89 04 24             	mov    %eax,(%esp)
 8167f8b:	e8 fc cf ff ff       	call   8164f8c <_ZN24BaseHeroMissionCondition16setConditionDataER20HeroMissionCondition>
 8167f90:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167f93:	89 04 24             	mov    %eax,(%esp)
 8167f96:	e8 09 0c 00 00       	call   8168ba4 <_ZN9__gnu_cxx17__normal_iteratorIP20HeroMissionConditionSt6vectorIS1_SaIS1_EEEppEv>
 8167f9b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167f9e:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8167fa1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8167fa5:	89 04 24             	mov    %eax,(%esp)
 8167fa8:	e8 a5 0b 00 00       	call   8168b52 <_ZNSt6vectorI20HeroMissionConditionSaIS0_EE3endEv>
 8167fad:	83 ec 04             	sub    $0x4,%esp
 8167fb0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167fb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167fb7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8167fba:	89 04 24             	mov    %eax,(%esp)
 8167fbd:	e8 b6 0b 00 00       	call   8168b78 <_ZN9__gnu_cxxneIP20HeroMissionConditionSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8167fc2:	84 c0                	test   %al,%al
 8167fc4:	0f 85 5b ff ff ff    	jne    8167f25 <_ZN16HeroMissionEvent10loadScriptEv+0x45d>
 8167fca:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8167fcd:	89 04 24             	mov    %eax,(%esp)
 8167fd0:	e8 f9 0b 00 00       	call   8168bce <_ZNSt6vectorI20HeroMissionConditionSaIS0_EE5clearEv>
 8167fd5:	bb 01 00 00 00       	mov    $0x1,%ebx
 8167fda:	eb 1b                	jmp    8167ff7 <_ZN16HeroMissionEvent10loadScriptEv+0x52f>
 8167fdc:	89 d3                	mov    %edx,%ebx
 8167fde:	89 c6                	mov    %eax,%esi
 8167fe0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8167fe3:	89 04 24             	mov    %eax,(%esp)
 8167fe6:	e8 e5 0a 00 00       	call   8168ad0 <_ZNSt6vectorI20HeroMissionConditionSaIS0_EED1Ev>
 8167feb:	89 f0                	mov    %esi,%eax
 8167fed:	89 da                	mov    %ebx,%edx
 8167fef:	89 04 24             	mov    %eax,(%esp)
 8167ff2:	e8 59 b7 97 00       	call   8ae3750 <_Unwind_Resume>
 8167ff7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8167ffa:	89 04 24             	mov    %eax,(%esp)
 8167ffd:	e8 ce 0a 00 00       	call   8168ad0 <_ZNSt6vectorI20HeroMissionConditionSaIS0_EED1Ev>
 8168002:	89 d8                	mov    %ebx,%eax
 8168004:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8168007:	83 c4 00             	add    $0x0,%esp
 816800a:	5b                   	pop    %ebx
 816800b:	5e                   	pop    %esi
 816800c:	5f                   	pop    %edi
 816800d:	5d                   	pop    %ebp
 816800e:	c3                   	ret
 816800f:	90                   	nop

```

```c
// HeroMissionEvent::loadScript @ 0x8167ac8

/* HeroMissionEvent::loadScript() */

undefined4 __thiscall HeroMissionEvent::loadScript(HeroMissionEvent *this)

{
  bool bVar1;
  ClearDungeonMission *this_00;
  undefined4 *puVar2;
  UseFatigueMission *this_01;
  UseCubeMission *this_02;
  LevelUpMission *this_03;
  AttendanceMission *this_04;
  TotalMission *this_05;
  int *piVar3;
  HeroMissionCondition *pHVar4;
  T *pTVar5;
  undefined4 uVar6;
  __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
  local_54 [4];
  vector<HeroMissionCondition,std::allocator<HeroMissionCondition>> local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  __normal_iterator local_2c [4];
  int local_28;
  ClearDungeonMission *local_24;
  
  local_24 = (ClearDungeonMission *)0x0;
                    /* try { // try from 08167adf to 08167ae3 has its CatchHandler @ 08167e60 */
  this_00 = operator_new(0x34);
                    /* try { // try from 08167aeb to 08167aef has its CatchHandler @ 08167af2 */
  ClearDungeonMission::ClearDungeonMission(this_00);
  local_24 = this_00;
  if (this_00 == (ClearDungeonMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x345;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167b39 to 08167b71 has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_44 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_00);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_44);
  *puVar2 = local_24;
  this_01 = operator_new(0x34);
                    /* try { // try from 08167b79 to 08167b7d has its CatchHandler @ 08167b80 */
  UseFatigueMission::UseFatigueMission(this_01);
  local_24 = (ClearDungeonMission *)this_01;
  if (this_01 == (UseFatigueMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x349;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167bc7 to 08167bff has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_40 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_01);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_40);
  *puVar2 = local_24;
  this_02 = operator_new(0x34);
                    /* try { // try from 08167c07 to 08167c0b has its CatchHandler @ 08167c0e */
  UseCubeMission::UseCubeMission(this_02);
  local_24 = (ClearDungeonMission *)this_02;
  if (this_02 == (UseCubeMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x34d;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167c55 to 08167c8d has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_3c = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_02);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_3c);
  *puVar2 = local_24;
  this_03 = operator_new(0x34);
                    /* try { // try from 08167c95 to 08167c99 has its CatchHandler @ 08167c9c */
  LevelUpMission::LevelUpMission(this_03);
  local_24 = (ClearDungeonMission *)this_03;
  if (this_03 == (LevelUpMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x351;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167ce3 to 08167d1b has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_38 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_03);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_38);
  *puVar2 = local_24;
  this_04 = operator_new(0x34);
                    /* try { // try from 08167d23 to 08167d27 has its CatchHandler @ 08167d2a */
  AttendanceMission::AttendanceMission(this_04);
  local_24 = (ClearDungeonMission *)this_04;
  if (this_04 == (AttendanceMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x355;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167d71 to 08167da9 has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_34 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_04);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_34);
  *puVar2 = local_24;
  this_05 = operator_new(0x34);
                    /* try { // try from 08167db1 to 08167db5 has its CatchHandler @ 08167db8 */
  TotalMission::TotalMission(this_05);
  local_24 = (ClearDungeonMission *)this_05;
  if (this_05 == (TotalMission *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x359;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08167dff to 08167e26 has its CatchHandler @ 08167e60 */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  local_30 = BaseHeroMissionCondition::getMissionCode((BaseHeroMissionCondition *)this_05);
  puVar2 = (undefined4 *)
           std::
           map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
           ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                         *)(this + 0xc),(T *)&local_30);
  *puVar2 = local_24;
  local_28 = 0;
  std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::vector(local_50);
                    /* try { // try from 08167e4c to 08167e50 has its CatchHandler @ 08167fdc */
  local_28 = importHeroMissionConditionsData((vector *)local_50,"Event/HeroMissionEvent.evt");
  if (local_28 == 0) {
    std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::begin();
    while( true ) {
      std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::end();
      bVar1 = __gnu_cxx::operator!=(local_54,local_2c);
      if (!bVar1) break;
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                      ::operator->(local_54);
      if (*piVar3 < 1) {
LAB_08167f4f:
        bVar1 = false;
      }
      else {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                        ::operator->(local_54);
        if (6 < *piVar3) goto LAB_08167f4f;
        bVar1 = true;
      }
      if (bVar1) {
        pHVar4 = (HeroMissionCondition *)
                 __gnu_cxx::
                 __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                 ::operator*(local_54);
        pTVar5 = (T *)__gnu_cxx::
                      __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
                      ::operator->(local_54);
        puVar2 = (undefined4 *)
                 std::
                 map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                 ::operator[]((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
                               *)(this + 0xc),pTVar5);
        BaseHeroMissionCondition::setConditionData((BaseHeroMissionCondition *)*puVar2,pHVar4);
      }
      __gnu_cxx::
      __normal_iterator<HeroMissionCondition*,std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>>
      ::operator++(local_54);
    }
    std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::clear(local_50);
    uVar6 = 1;
  }
  else {
                    /* try { // try from 08167eff to 08167fd4 has its CatchHandler @ 08167fdc */
    LogManager::logFormat
              (1,"localtaiwan/Event/EventHeroMission.cpp","bool HeroMissionEvent::loadScript()",
               0x367,"[HeroMission] Load script fail. (line:%d)",local_28);
    uVar6 = 0;
  }
  std::vector<HeroMissionCondition,std::allocator<HeroMissionCondition>>::~vector(local_50);
  return uVar6;
}

```

---

## processMission

```asm
// === 081672be HeroMissionEvent::processMission  [0x081672be-0x816748d] ===
 81672be:	55                   	push   %ebp
 81672bf:	89 e5                	mov    %esp,%ebp
 81672c1:	53                   	push   %ebx
 81672c2:	83 ec 34             	sub    $0x34,%esp
 81672c5:	8b 45 08             	mov    0x8(%ebp),%eax
 81672c8:	8b 00                	mov    (%eax),%eax
 81672ca:	83 c0 34             	add    $0x34,%eax
 81672cd:	8b 10                	mov    (%eax),%edx
 81672cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81672d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81672d9:	00 
 81672da:	89 04 24             	mov    %eax,(%esp)
 81672dd:	ff d2                	call   *%edx
 81672df:	83 f0 01             	xor    $0x1,%eax
 81672e2:	84 c0                	test   %al,%al
 81672e4:	0f 85 9e 01 00 00    	jne    8167488 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1ca>
 81672ea:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81672ee:	75 31                	jne    8167321 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x63>
 81672f0:	c7 44 24 10 ec dc b7 	movl   $0x8b7dcec,0x10(%esp)
 81672f7:	08 
 81672f8:	c7 44 24 0c b8 02 00 	movl   $0x2b8,0xc(%esp)
 81672ff:	00 
 8167300:	c7 44 24 08 c0 eb b7 	movl   $0x8b7ebc0,0x8(%esp)
 8167307:	08 
 8167308:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 816730f:	08 
 8167310:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8167317:	e8 ee c8 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816731c:	e9 68 01 00 00       	jmp    8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 8167321:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8167328:	8b 45 10             	mov    0x10(%ebp),%eax
 816732b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 816732e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8167332:	89 44 24 08          	mov    %eax,0x8(%esp)
 8167336:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167339:	89 44 24 04          	mov    %eax,0x4(%esp)
 816733d:	8b 45 08             	mov    0x8(%ebp),%eax
 8167340:	89 04 24             	mov    %eax,(%esp)
 8167343:	e8 c8 0c 00 00       	call   8168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>
 8167348:	84 c0                	test   %al,%al
 816734a:	0f 84 39 01 00 00    	je     8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 8167350:	8b 45 08             	mov    0x8(%ebp),%eax
 8167353:	8d 48 0c             	lea    0xc(%eax),%ecx
 8167356:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8167359:	8d 55 10             	lea    0x10(%ebp),%edx
 816735c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8167360:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8167364:	89 04 24             	mov    %eax,(%esp)
 8167367:	e8 f8 15 00 00       	call   8168964 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE4findERS8_>
 816736c:	83 ec 04             	sub    $0x4,%esp
 816736f:	8b 45 08             	mov    0x8(%ebp),%eax
 8167372:	8d 50 0c             	lea    0xc(%eax),%edx
 8167375:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8167378:	89 54 24 04          	mov    %edx,0x4(%esp)
 816737c:	89 04 24             	mov    %eax,(%esp)
 816737f:	e8 9a 13 00 00       	call   816871e <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE3endEv>
 8167384:	83 ec 04             	sub    $0x4,%esp
 8167387:	8d 45 f0             	lea    -0x10(%ebp),%eax
 816738a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816738e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8167391:	89 04 24             	mov    %eax,(%esp)
 8167394:	e8 f7 15 00 00       	call   8168990 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEeqERKS8_>
 8167399:	84 c0                	test   %al,%al
 816739b:	74 71                	je     816740e <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x150>
 816739d:	8b 45 10             	mov    0x10(%ebp),%eax
 81673a0:	89 c3                	mov    %eax,%ebx
 81673a2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81673a9:	ff 
 81673aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81673ad:	89 04 24             	mov    %eax,(%esp)
 81673b0:	e8 eb 6b 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81673b5:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81673b9:	89 44 24 14          	mov    %eax,0x14(%esp)
 81673bd:	c7 44 24 10 9c dd b7 	movl   $0x8b7dd9c,0x10(%esp)
 81673c4:	08 
 81673c5:	c7 44 24 0c c2 02 00 	movl   $0x2c2,0xc(%esp)
 81673cc:	00 
 81673cd:	c7 44 24 08 c0 eb b7 	movl   $0x8b7ebc0,0x8(%esp)
 81673d4:	08 
 81673d5:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 81673dc:	08 
 81673dd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81673e4:	e8 21 c8 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81673e9:	c7 44 24 0c c3 02 00 	movl   $0x2c3,0xc(%esp)
 81673f0:	00 
 81673f1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81673f8:	00 
 81673f9:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 8167400:	00 
 8167401:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167404:	89 04 24             	mov    %eax,(%esp)
 8167407:	e8 e8 15 4e 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 816740c:	eb 7b                	jmp    8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 816740e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8167411:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8167415:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 8167419:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816741c:	89 04 24             	mov    %eax,(%esp)
 816741f:	e8 52 13 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 8167424:	8b 40 04             	mov    0x4(%eax),%eax
 8167427:	8b 10                	mov    (%eax),%edx
 8167429:	83 c2 08             	add    $0x8,%edx
 816742c:	8b 1a                	mov    (%edx),%ebx
 816742e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8167431:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8167434:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8167438:	89 54 24 08          	mov    %edx,0x8(%esp)
 816743c:	8b 55 0c             	mov    0xc(%ebp),%edx
 816743f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8167443:	89 04 24             	mov    %eax,(%esp)
 8167446:	ff d3                	call   *%ebx
 8167448:	8b 45 10             	mov    0x10(%ebp),%eax
 816744b:	83 f8 04             	cmp    $0x4,%eax
 816744e:	75 39                	jne    8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 8167450:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 8167455:	75 32                	jne    8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 8167457:	8b 45 ec             	mov    -0x14(%ebp),%eax
 816745a:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 816745e:	66 3b 45 f6          	cmp    -0xa(%ebp),%ax
 8167462:	76 25                	jbe    8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 8167464:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 816746b:	00 
 816746c:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 8167473:	00 
 8167474:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167477:	89 44 24 04          	mov    %eax,0x4(%esp)
 816747b:	8b 45 08             	mov    0x8(%ebp),%eax
 816747e:	89 04 24             	mov    %eax,(%esp)
 8167481:	e8 38 fe ff ff       	call   81672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>
 8167486:	eb 01                	jmp    8167489 <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x1cb>
 8167488:	90                   	nop
 8167489:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 816748c:	c9                   	leave
 816748d:	c3                   	ret

```

```c
// HeroMissionEvent::processMission @ 0x81672be

/* HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int) */

void __thiscall
HeroMissionEvent::processMission
          (HeroMissionEvent *this,CUser *param_1,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_1c [4];
  int local_18;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_14 [6];
  short local_e;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)"
                 ,0x2b8,"[HeroMission] User is null.");
    }
    else {
      local_18 = 0;
      cVar1 = findMissionValue(this,param_1,param_3,&local_18);
      if (cVar1 != '\0') {
        std::
        map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
        ::find(local_1c);
        std::
        map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
        ::end(local_14);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
        if (cVar1 == '\0') {
          local_e = *(short *)(local_18 + 10);
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                  ::operator->(local_1c);
          (**(code **)(**(int **)(iVar3 + 4) + 8))(*(int **)(iVar3 + 4),param_1,local_18,param_4);
          if (((param_3 == 4) && (local_e == 0)) && (*(short *)(local_18 + 10) != 0)) {
            processMission(this,param_1,6,1);
          }
        }
        else {
          uVar2 = CUser::get_charac_no(param_1,-1);
          LogManager::logFormat
                    (1,"localtaiwan/Event/EventHeroMission.cpp",
                     "void HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)"
                     ,0x2c2,"[HeroMission] Invalid mission. (charac:%u, mission:%d)",uVar2,param_3);
          CUser::DisConnSig(param_1,0x3e,1,0x2c3);
        }
      }
    }
  }
  return;
}

```

---

## resetMissionForGm

```asm
// === 08167a3a HeroMissionEvent::resetMissionForGm  [0x08167a3a-0x8167ac7] ===
 8167a3a:	55                   	push   %ebp
 8167a3b:	89 e5                	mov    %esp,%ebp
 8167a3d:	83 ec 28             	sub    $0x28,%esp
 8167a40:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8167a47:	8b 45 10             	mov    0x10(%ebp),%eax
 8167a4a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8167a4d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8167a51:	89 44 24 08          	mov    %eax,0x8(%esp)
 8167a55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167a58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167a5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8167a5f:	89 04 24             	mov    %eax,(%esp)
 8167a62:	e8 a9 05 00 00       	call   8168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>
 8167a67:	84 c0                	test   %al,%al
 8167a69:	74 5b                	je     8167ac6 <_ZN16HeroMissionEvent17resetMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TE+0x8c>
 8167a6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8167a6e:	8d 48 0c             	lea    0xc(%eax),%ecx
 8167a71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8167a74:	8d 55 10             	lea    0x10(%ebp),%edx
 8167a77:	89 54 24 08          	mov    %edx,0x8(%esp)
 8167a7b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8167a7f:	89 04 24             	mov    %eax,(%esp)
 8167a82:	e8 dd 0e 00 00       	call   8168964 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE4findERS8_>
 8167a87:	83 ec 04             	sub    $0x4,%esp
 8167a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8167a8d:	8d 50 0c             	lea    0xc(%eax),%edx
 8167a90:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8167a93:	89 54 24 04          	mov    %edx,0x4(%esp)
 8167a97:	89 04 24             	mov    %eax,(%esp)
 8167a9a:	e8 7f 0c 00 00       	call   816871e <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE3endEv>
 8167a9f:	83 ec 04             	sub    $0x4,%esp
 8167aa2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8167aa5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167aa9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8167aac:	89 04 24             	mov    %eax,(%esp)
 8167aaf:	e8 dc 0e 00 00       	call   8168990 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEeqERKS8_>
 8167ab4:	84 c0                	test   %al,%al
 8167ab6:	75 0d                	jne    8167ac5 <_ZN16HeroMissionEvent17resetMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TE+0x8b>
 8167ab8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8167abb:	89 04 24             	mov    %eax,(%esp)
 8167abe:	e8 ef d0 ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 8167ac3:	eb 01                	jmp    8167ac6 <_ZN16HeroMissionEvent17resetMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TE+0x8c>
 8167ac5:	90                   	nop
 8167ac6:	c9                   	leave
 8167ac7:	c3                   	ret

```

```c
// HeroMissionEvent::resetMissionForGm @ 0x8167a3a

/* HeroMissionEvent::resetMissionForGm(CUser*, HeroMissionCondition::MissionNo::T) */

void __thiscall
HeroMissionEvent::resetMissionForGm(HeroMissionEvent *this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_18 [4];
  HeroMissionValue *local_14;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_10 [12];
  
  local_14 = (HeroMissionValue *)0x0;
  cVar1 = findMissionValue(this,param_1,param_3,&local_14);
  if (cVar1 != '\0') {
    std::
    map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
    ::find(local_18);
    std::
    map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
            ::operator==(local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      HeroMissionValue::reset(local_14);
    }
  }
  return;
}

```

---

## rewardMission

```asm
// === 0816748e HeroMissionEvent::rewardMission  [0x0816748e-0x816770d] ===
 816748e:	55                   	push   %ebp
 816748f:	89 e5                	mov    %esp,%ebp
 8167491:	53                   	push   %ebx
 8167492:	83 ec 44             	sub    $0x44,%esp
 8167495:	8b 45 08             	mov    0x8(%ebp),%eax
 8167498:	8b 00                	mov    (%eax),%eax
 816749a:	83 c0 34             	add    $0x34,%eax
 816749d:	8b 10                	mov    (%eax),%edx
 816749f:	8b 45 08             	mov    0x8(%ebp),%eax
 81674a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81674a9:	00 
 81674aa:	89 04 24             	mov    %eax,(%esp)
 81674ad:	ff d2                	call   *%edx
 81674af:	83 f0 01             	xor    $0x1,%eax
 81674b2:	84 c0                	test   %al,%al
 81674b4:	74 0a                	je     81674c0 <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x32>
 81674b6:	b8 00 00 00 00       	mov    $0x0,%eax
 81674bb:	e9 49 02 00 00       	jmp    8167709 <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x27b>
 81674c0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81674c4:	75 36                	jne    81674fc <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x6e>
 81674c6:	c7 44 24 10 ec dc b7 	movl   $0x8b7dcec,0x10(%esp)
 81674cd:	08 
 81674ce:	c7 44 24 0c d8 02 00 	movl   $0x2d8,0xc(%esp)
 81674d5:	00 
 81674d6:	c7 44 24 08 60 eb b7 	movl   $0x8b7eb60,0x8(%esp)
 81674dd:	08 
 81674de:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 81674e5:	08 
 81674e6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81674ed:	e8 18 c7 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81674f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81674f7:	e9 0d 02 00 00       	jmp    8167709 <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x27b>
 81674fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81674ff:	8d 48 0c             	lea    0xc(%eax),%ecx
 8167502:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8167505:	8d 55 10             	lea    0x10(%ebp),%edx
 8167508:	89 54 24 08          	mov    %edx,0x8(%esp)
 816750c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8167510:	89 04 24             	mov    %eax,(%esp)
 8167513:	e8 4c 14 00 00       	call   8168964 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE4findERS8_>
 8167518:	83 ec 04             	sub    $0x4,%esp
 816751b:	8b 45 08             	mov    0x8(%ebp),%eax
 816751e:	8d 50 0c             	lea    0xc(%eax),%edx
 8167521:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8167524:	89 54 24 04          	mov    %edx,0x4(%esp)
 8167528:	89 04 24             	mov    %eax,(%esp)
 816752b:	e8 ee 11 00 00       	call   816871e <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE3endEv>
 8167530:	83 ec 04             	sub    $0x4,%esp
 8167533:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8167536:	89 44 24 04          	mov    %eax,0x4(%esp)
 816753a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816753d:	89 04 24             	mov    %eax,(%esp)
 8167540:	e8 4b 14 00 00       	call   8168990 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEeqERKS8_>
 8167545:	84 c0                	test   %al,%al
 8167547:	74 79                	je     81675c2 <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x134>
 8167549:	8b 45 10             	mov    0x10(%ebp),%eax
 816754c:	89 c3                	mov    %eax,%ebx
 816754e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8167555:	ff 
 8167556:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167559:	89 04 24             	mov    %eax,(%esp)
 816755c:	e8 3f 6a 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8167561:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8167565:	89 44 24 14          	mov    %eax,0x14(%esp)
 8167569:	c7 44 24 10 9c dd b7 	movl   $0x8b7dd9c,0x10(%esp)
 8167570:	08 
 8167571:	c7 44 24 0c df 02 00 	movl   $0x2df,0xc(%esp)
 8167578:	00 
 8167579:	c7 44 24 08 60 eb b7 	movl   $0x8b7eb60,0x8(%esp)
 8167580:	08 
 8167581:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167588:	08 
 8167589:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8167590:	e8 75 c6 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8167595:	c7 44 24 0c e0 02 00 	movl   $0x2e0,0xc(%esp)
 816759c:	00 
 816759d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81675a4:	00 
 81675a5:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 81675ac:	00 
 81675ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81675b0:	89 04 24             	mov    %eax,(%esp)
 81675b3:	e8 3c 14 4e 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81675b8:	b8 00 00 00 00       	mov    $0x0,%eax
 81675bd:	e9 47 01 00 00       	jmp    8167709 <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x27b>
 81675c2:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
 81675c6:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 81675ca:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81675d1:	8b 45 10             	mov    0x10(%ebp),%eax
 81675d4:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81675d7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81675db:	89 44 24 08          	mov    %eax,0x8(%esp)
 81675df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81675e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81675e6:	8b 45 08             	mov    0x8(%ebp),%eax
 81675e9:	89 04 24             	mov    %eax,(%esp)
 81675ec:	e8 1f 0a 00 00       	call   8168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>
 81675f1:	84 c0                	test   %al,%al
 81675f3:	0f 84 e4 00 00 00    	je     81676dd <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x24f>
 81675f9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81675fc:	89 04 24             	mov    %eax,(%esp)
 81675ff:	e8 72 11 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 8167604:	8b 40 04             	mov    0x4(%eax),%eax
 8167607:	89 04 24             	mov    %eax,(%esp)
 816760a:	e8 a7 d9 ff ff       	call   8164fb6 <_ZN24BaseHeroMissionCondition14getMissionTypeEv>
 816760f:	83 f8 03             	cmp    $0x3,%eax
 8167612:	0f 94 c0             	sete   %al
 8167615:	84 c0                	test   %al,%al
 8167617:	74 76                	je     816768f <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x201>
 8167619:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8167620:	ff 
 8167621:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167624:	89 04 24             	mov    %eax,(%esp)
 8167627:	e8 74 69 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 816762c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 816762f:	8b 45 08             	mov    0x8(%ebp),%eax
 8167632:	8d 48 24             	lea    0x24(%eax),%ecx
 8167635:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167638:	8d 55 e8             	lea    -0x18(%ebp),%edx
 816763b:	89 54 24 08          	mov    %edx,0x8(%esp)
 816763f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8167643:	89 04 24             	mov    %eax,(%esp)
 8167646:	e8 ad 11 00 00       	call   81687f8 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 816764b:	83 ec 04             	sub    $0x4,%esp
 816764e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8167651:	89 04 24             	mov    %eax,(%esp)
 8167654:	e8 1d 11 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 8167659:	8b 40 04             	mov    0x4(%eax),%eax
 816765c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 816765f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167662:	89 04 24             	mov    %eax,(%esp)
 8167665:	e8 d6 12 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 816766a:	8d 50 04             	lea    0x4(%eax),%edx
 816766d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8167670:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8167674:	89 44 24 08          	mov    %eax,0x8(%esp)
 8167678:	8b 45 0c             	mov    0xc(%ebp),%eax
 816767b:	89 44 24 04          	mov    %eax,0x4(%esp)
 816767f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8167682:	89 04 24             	mov    %eax,(%esp)
 8167685:	e8 74 ed ff ff       	call   81663fe <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE>
 816768a:	88 45 ee             	mov    %al,-0x12(%ebp)
 816768d:	eb 4e                	jmp    81676dd <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x24f>
 816768f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8167692:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8167696:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 816769a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816769d:	89 04 24             	mov    %eax,(%esp)
 81676a0:	e8 d1 10 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 81676a5:	8b 40 04             	mov    0x4(%eax),%eax
 81676a8:	8b 10                	mov    (%eax),%edx
 81676aa:	83 c2 0c             	add    $0xc,%edx
 81676ad:	8b 0a                	mov    (%edx),%ecx
 81676af:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81676b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81676b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81676b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81676bd:	89 04 24             	mov    %eax,(%esp)
 81676c0:	ff d1                	call   *%ecx
 81676c2:	88 45 ee             	mov    %al,-0x12(%ebp)
 81676c5:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 81676ca:	75 11                	jne    81676dd <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x24f>
 81676cc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81676cf:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81676d3:	66 3b 45 f6          	cmp    -0xa(%ebp),%ax
 81676d7:	76 04                	jbe    81676dd <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x24f>
 81676d9:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 81676dd:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 81676e1:	74 22                	je     8167705 <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE+0x277>
 81676e3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81676ea:	00 
 81676eb:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 81676f2:	00 
 81676f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81676f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81676fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81676fd:	89 04 24             	mov    %eax,(%esp)
 8167700:	e8 b9 fb ff ff       	call   81672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>
 8167705:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 8167709:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 816770c:	c9                   	leave
 816770d:	c3                   	ret

```

```c
// HeroMissionEvent::rewardMission @ 0x816748e

/* HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T) */

undefined1 __thiscall
HeroMissionEvent::rewardMission(HeroMissionEvent *this,CUser *param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_2c [4];
  vector *local_28;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_24 [4];
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_20 [4];
  undefined4 local_1c;
  undefined1 local_16;
  char local_15;
  CUser *local_14;
  short local_e;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "bool HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)",
                 0x2d8,"[HeroMission] User is null.");
      local_16 = 0;
    }
    else {
      std::
      map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
      ::find(local_24);
      std::
      map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
      ::end(local_20);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
              ::operator==(local_24,(_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') {
        local_16 = 0;
        local_15 = '\0';
        local_28 = (vector *)0x0;
        cVar1 = findMissionValue(this,param_1,param_3,&local_28);
        if (cVar1 != '\0') {
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                  ::operator->(local_24);
          iVar3 = BaseHeroMissionCondition::getMissionType
                            (*(BaseHeroMissionCondition **)(iVar3 + 4));
          if (iVar3 == 3) {
            local_1c = CUser::get_charac_no(param_1,-1);
            std::
            map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
            ::find((uint *)local_2c);
            iVar3 = std::
                    _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                    ::operator->(local_24);
            local_14 = *(CUser **)(iVar3 + 4);
            std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator->(local_2c);
            local_16 = TotalMission::rewardMission(local_14,(HeroMissionValue *)param_1,local_28);
          }
          else {
            local_e = *(short *)(local_28 + 10);
            iVar3 = std::
                    _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                    ::operator->(local_24);
            local_16 = (**(code **)(**(int **)(iVar3 + 4) + 0xc))
                                 (*(int **)(iVar3 + 4),param_1,local_28);
            if ((local_e == 0) && (*(short *)(local_28 + 10) != 0)) {
              local_15 = '\x01';
            }
          }
        }
        if (local_15 != '\0') {
          processMission(this,param_1,6,1);
        }
      }
      else {
        uVar2 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "bool HeroMissionEvent::rewardMission(CUser*, HeroMissionCondition::MissionNo::T)"
                   ,0x2df,"[HeroMission] Invalid mission. (charac:%u, mission:%d)",uVar2,param_3);
        CUser::DisConnSig(param_1,0x3e,1,0x2e0);
        local_16 = 0;
      }
    }
  }
  else {
    local_16 = 0;
  }
  return local_16;
}

```

---

## saveEventData

```asm
// === 08166d38 HeroMissionEvent::saveEventData  [0x08166d38-0x816709d] ===
 8166d38:	55                   	push   %ebp
 8166d39:	89 e5                	mov    %esp,%ebp
 8166d3b:	56                   	push   %esi
 8166d3c:	53                   	push   %ebx
 8166d3d:	83 ec 60             	sub    $0x60,%esp
 8166d40:	8b 45 10             	mov    0x10(%ebp),%eax
 8166d43:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8166d46:	8b 45 08             	mov    0x8(%ebp),%eax
 8166d49:	8b 00                	mov    (%eax),%eax
 8166d4b:	83 c0 34             	add    $0x34,%eax
 8166d4e:	8b 10                	mov    (%eax),%edx
 8166d50:	8b 45 08             	mov    0x8(%ebp),%eax
 8166d53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8166d5a:	00 
 8166d5b:	89 04 24             	mov    %eax,(%esp)
 8166d5e:	ff d2                	call   *%edx
 8166d60:	83 f0 01             	xor    $0x1,%eax
 8166d63:	84 c0                	test   %al,%al
 8166d65:	0f 85 25 03 00 00    	jne    8167090 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x358>
 8166d6b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8166d6f:	75 31                	jne    8166da2 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x6a>
 8166d71:	c7 44 24 10 ec dc b7 	movl   $0x8b7dcec,0x10(%esp)
 8166d78:	08 
 8166d79:	c7 44 24 0c 5e 02 00 	movl   $0x25e,0xc(%esp)
 8166d80:	00 
 8166d81:	c7 44 24 08 e0 ec b7 	movl   $0x8b7ece0,0x8(%esp)
 8166d88:	08 
 8166d89:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8166d90:	08 
 8166d91:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8166d98:	e8 6d ce 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8166d9d:	e9 f2 02 00 00       	jmp    8167094 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x35c>
 8166da2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166da9:	ff 
 8166daa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166dad:	89 04 24             	mov    %eax,(%esp)
 8166db0:	e8 eb 71 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166db5:	85 c0                	test   %eax,%eax
 8166db7:	0f 94 c0             	sete   %al
 8166dba:	84 c0                	test   %al,%al
 8166dbc:	0f 85 d1 02 00 00    	jne    8167093 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x35b>
 8166dc2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8166dc5:	89 04 24             	mov    %eax,(%esp)
 8166dc8:	e8 03 f8 59 00       	call   87065d0 <_ZNSsC1Ev>
 8166dcd:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166dd4:	ff 
 8166dd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166dd8:	89 04 24             	mov    %eax,(%esp)
 8166ddb:	e8 c0 71 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166de0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8166de3:	8b 45 08             	mov    0x8(%ebp),%eax
 8166de6:	8d 48 24             	lea    0x24(%eax),%ecx
 8166de9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8166dec:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8166def:	89 54 24 08          	mov    %edx,0x8(%esp)
 8166df3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8166df7:	89 04 24             	mov    %eax,(%esp)
 8166dfa:	e8 f9 19 00 00       	call   81687f8 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 8166dff:	83 ec 04             	sub    $0x4,%esp
 8166e02:	8b 45 08             	mov    0x8(%ebp),%eax
 8166e05:	8d 50 24             	lea    0x24(%eax),%edx
 8166e08:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8166e0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166e0f:	89 04 24             	mov    %eax,(%esp)
 8166e12:	e8 0d 1a 00 00       	call   8168824 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8166e17:	83 ec 04             	sub    $0x4,%esp
 8166e1a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8166e1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166e21:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8166e24:	89 04 24             	mov    %eax,(%esp)
 8166e27:	e8 00 1b 00 00       	call   816892c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEeqERKS7_>
 8166e2c:	84 c0                	test   %al,%al
 8166e2e:	74 48                	je     8166e78 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x140>
 8166e30:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166e37:	ff 
 8166e38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166e3b:	89 04 24             	mov    %eax,(%esp)
 8166e3e:	e8 5d 71 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166e43:	89 44 24 14          	mov    %eax,0x14(%esp)
 8166e47:	c7 44 24 10 08 dd b7 	movl   $0x8b7dd08,0x10(%esp)
 8166e4e:	08 
 8166e4f:	c7 44 24 0c 69 02 00 	movl   $0x269,0xc(%esp)
 8166e56:	00 
 8166e57:	c7 44 24 08 e0 ec b7 	movl   $0x8b7ece0,0x8(%esp)
 8166e5e:	08 
 8166e5f:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8166e66:	08 
 8166e67:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8166e6e:	e8 97 cd 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8166e73:	e9 0b 02 00 00       	jmp    8167083 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x34b>
 8166e78:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8166e7b:	89 04 24             	mov    %eax,(%esp)
 8166e7e:	e8 bd 1a 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 8166e83:	8d 50 04             	lea    0x4(%eax),%edx
 8166e86:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8166e89:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166e8d:	89 04 24             	mov    %eax,(%esp)
 8166e90:	e8 61 16 00 00       	call   81684f6 <_ZNSt6vectorI16HeroMissionValueSaIS0_EE5beginEv>
 8166e95:	83 ec 04             	sub    $0x4,%esp
 8166e98:	eb 25                	jmp    8166ebf <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x187>
 8166e9a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8166e9d:	89 04 24             	mov    %eax,(%esp)
 8166ea0:	e8 dd 16 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 8166ea5:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8166ea8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166eac:	89 04 24             	mov    %eax,(%esp)
 8166eaf:	e8 16 dd ff ff       	call   8164bca <_ZN16HeroMissionValue14getStringTokenERSs>
 8166eb4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8166eb7:	89 04 24             	mov    %eax,(%esp)
 8166eba:	e8 ad 16 00 00       	call   816856c <_ZN9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEppEv>
 8166ebf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8166ec2:	89 04 24             	mov    %eax,(%esp)
 8166ec5:	e8 76 1a 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 8166eca:	8d 50 04             	lea    0x4(%eax),%edx
 8166ecd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8166ed0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166ed4:	89 04 24             	mov    %eax,(%esp)
 8166ed7:	e8 3e 16 00 00       	call   816851a <_ZNSt6vectorI16HeroMissionValueSaIS0_EE3endEv>
 8166edc:	83 ec 04             	sub    $0x4,%esp
 8166edf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8166ee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166ee6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8166ee9:	89 04 24             	mov    %eax,(%esp)
 8166eec:	e8 4f 16 00 00       	call   8168540 <_ZN9__gnu_cxxneIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8166ef1:	84 c0                	test   %al,%al
 8166ef3:	75 a5                	jne    8166e9a <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x162>
 8166ef5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8166efa:	c7 44 24 08 71 02 00 	movl   $0x271,0x8(%esp)
 8166f01:	00 
 8166f02:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8166f09:	08 
 8166f0a:	89 04 24             	mov    %eax,(%esp)
 8166f0d:	e8 74 8b 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8166f12:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8166f19:	00 
 8166f1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166f1e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166f21:	89 04 24             	mov    %eax,(%esp)
 8166f24:	e8 fd 1c f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8166f29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166f2c:	89 04 24             	mov    %eax,(%esp)
 8166f2f:	e8 62 1d f6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8166f34:	89 44 24 08          	mov    %eax,0x8(%esp)
 8166f38:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 8166f3f:	00 
 8166f40:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166f43:	89 04 24             	mov    %eax,(%esp)
 8166f46:	e8 05 ca ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 8166f4b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166f4e:	89 04 24             	mov    %eax,(%esp)
 8166f51:	e8 f8 1c f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8166f56:	89 04 24             	mov    %eax,(%esp)
 8166f59:	e8 f0 19 00 00       	call   816894e <_ZN12CStreamGuard11GetInBufferIN6Taiwan22SigSaveHeroMissionDataEEEPT_v>
 8166f5e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8166f61:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8166f65:	75 36                	jne    8166f9d <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x265>
 8166f67:	c7 44 24 10 3c dd b7 	movl   $0x8b7dd3c,0x10(%esp)
 8166f6e:	08 
 8166f6f:	c7 44 24 0c 76 02 00 	movl   $0x276,0xc(%esp)
 8166f76:	00 
 8166f77:	c7 44 24 08 e0 ec b7 	movl   $0x8b7ece0,0x8(%esp)
 8166f7e:	08 
 8166f7f:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8166f86:	08 
 8166f87:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8166f8e:	e8 77 cc 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8166f93:	bb 00 00 00 00       	mov    $0x0,%ebx
 8166f98:	e9 bc 00 00 00       	jmp    8167059 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x321>
 8166f9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8166fa0:	89 04 24             	mov    %eax,(%esp)
 8166fa3:	e8 18 ca ff ff       	call   81639c0 <_ZN6Taiwan22SigSaveHeroMissionData4initEv>
 8166fa8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166faf:	ff 
 8166fb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166fb3:	89 04 24             	mov    %eax,(%esp)
 8166fb6:	e8 e5 6f 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166fbb:	89 c2                	mov    %eax,%edx
 8166fbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8166fc0:	89 10                	mov    %edx,(%eax)
 8166fc2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8166fc5:	89 04 24             	mov    %eax,(%esp)
 8166fc8:	e8 a3 f6 59 00       	call   8706670 <_ZNKSs6lengthEv>
 8166fcd:	89 c3                	mov    %eax,%ebx
 8166fcf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8166fd2:	89 04 24             	mov    %eax,(%esp)
 8166fd5:	e8 16 f5 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8166fda:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8166fdd:	83 c2 04             	add    $0x4,%edx
 8166fe0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8166fe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166fe8:	89 14 24             	mov    %edx,(%esp)
 8166feb:	e8 e0 68 f1 ff       	call   807d8d0 <strncpy@plt>
 8166ff0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8166ff5:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8166ff8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8166ffc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8167003:	00 
 8167004:	89 04 24             	mov    %eax,(%esp)
 8167007:	e8 d2 9f 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 816700c:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 8167010:	74 2b                	je     816703d <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x305>
 8167012:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8167019:	ff 
 816701a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816701d:	89 04 24             	mov    %eax,(%esp)
 8167020:	e8 7b 6f 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8167025:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8167028:	8b 45 08             	mov    0x8(%ebp),%eax
 816702b:	8d 50 24             	lea    0x24(%eax),%edx
 816702e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8167031:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167035:	89 14 24             	mov    %edx,(%esp)
 8167038:	e8 21 18 00 00       	call   816885e <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE5eraseERS7_>
 816703d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8167042:	eb 15                	jmp    8167059 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x321>
 8167044:	89 d3                	mov    %edx,%ebx
 8167046:	89 c6                	mov    %eax,%esi
 8167048:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816704b:	89 04 24             	mov    %eax,(%esp)
 816704e:	e8 7f 58 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8167053:	89 f0                	mov    %esi,%eax
 8167055:	89 da                	mov    %ebx,%edx
 8167057:	eb 0f                	jmp    8167068 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x330>
 8167059:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816705c:	89 04 24             	mov    %eax,(%esp)
 816705f:	e8 6e 58 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8167064:	85 db                	test   %ebx,%ebx
 8167066:	eb 1b                	jmp    8167083 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x34b>
 8167068:	89 d3                	mov    %edx,%ebx
 816706a:	89 c6                	mov    %eax,%esi
 816706c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816706f:	89 04 24             	mov    %eax,(%esp)
 8167072:	e8 69 0b 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8167077:	89 f0                	mov    %esi,%eax
 8167079:	89 da                	mov    %ebx,%edx
 816707b:	89 04 24             	mov    %eax,(%esp)
 816707e:	e8 cd c6 97 00       	call   8ae3750 <_Unwind_Resume>
 8167083:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8167086:	89 04 24             	mov    %eax,(%esp)
 8167089:	e8 52 0b 5a 00       	call   8707be0 <_ZNSsD1Ev>
 816708e:	eb 04                	jmp    8167094 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x35c>
 8167090:	90                   	nop
 8167091:	eb 01                	jmp    8167094 <_ZN16HeroMissionEvent13saveEventDataEP5CUserb+0x35c>
 8167093:	90                   	nop
 8167094:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8167097:	83 c4 00             	add    $0x0,%esp
 816709a:	5b                   	pop    %ebx
 816709b:	5e                   	pop    %esi
 816709c:	5d                   	pop    %ebp
 816709d:	c3                   	ret

```

```c
// HeroMissionEvent::saveEventData @ 0x8166d38

/* HeroMissionEvent::saveEventData(CUser*, bool) */

void __thiscall HeroMissionEvent::saveEventData(HeroMissionEvent *this,CUser *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  HeroMissionValue *this_00;
  Stream *pSVar5;
  CStreamGuard *this_01;
  size_t __n;
  char *__src;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_34 [4];
  CStreamGuard local_30 [8];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_28 [4];
  string local_24;
  undefined4 local_20;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  undefined4 local_14;
  SigSaveHeroMissionData *local_10;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::saveEventData(CUser*, bool)",0x25e,
                 "[HeroMission] User is null.");
    }
    else {
      iVar3 = CUser::get_charac_no(param_1,-1);
      if (iVar3 != 0) {
        std::string::string((string *)&local_24);
                    /* try { // try from 08166ddb to 08166f11 has its CatchHandler @ 08167068 */
        local_20 = CUser::get_charac_no(param_1,-1);
        std::
        map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
        ::find((uint *)local_28);
        std::
        map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
        ::end(local_1c);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
                ::operator==(local_28,(_Rb_tree_iterator *)local_1c);
        if (cVar1 == '\0') {
          std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
          ::operator->(local_28);
          std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
          while( true ) {
            std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator->(local_28);
            std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
            bVar2 = __gnu_cxx::operator!=(local_34,local_18);
            if (!bVar2) break;
            this_00 = (HeroMissionValue *)
                      __gnu_cxx::
                      __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                      ::operator->(local_34);
            HeroMissionValue::getStringToken(this_00,&local_24);
            __gnu_cxx::
            __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
            ::operator++(local_34);
          }
          pSVar5 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,
                                       "localtaiwan/Event/EventHeroMission.cpp",0x271);
          CStreamGuard::CStreamGuard(local_30,pSVar5,true);
          uVar4 = CUser::GetUID(param_1);
                    /* try { // try from 08166f46 to 0816703c has its CatchHandler @ 08167044 */
          Taiwan::internal_stream(local_30,0x11,uVar4);
          this_01 = (CStreamGuard *)CStreamGuard::operator->(local_30);
          local_10 = CStreamGuard::GetInBuffer<Taiwan::SigSaveHeroMissionData>(this_01);
          if (local_10 == (SigSaveHeroMissionData *)0x0) {
            LogManager::logFormat
                      (1,"localtaiwan/Event/EventHeroMission.cpp",
                       "void HeroMissionEvent::saveEventData(CUser*, bool)",0x276,
                       "[HeroMission] SigSaveHeroMissionData is null.");
          }
          else {
            Taiwan::SigSaveHeroMissionData::init(local_10);
            uVar4 = CUser::get_charac_no(param_1,-1);
            *(undefined4 *)local_10 = uVar4;
            __n = std::string::length((string *)&local_24);
            __src = (char *)std::string::c_str((string *)&local_24);
            strncpy((char *)(local_10 + 4),__src,__n);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
            if (param_2) {
              local_14 = CUser::get_charac_no(param_1,-1);
              std::
              map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
              ::erase((uint *)(this + 0x24));
            }
          }
                    /* try { // try from 0816705f to 08167063 has its CatchHandler @ 08167068 */
          CStreamGuard::~CStreamGuard(local_30);
        }
        else {
          uVar4 = CUser::get_charac_no(param_1,-1);
          LogManager::logFormat
                    (1,"localtaiwan/Event/EventHeroMission.cpp",
                     "void HeroMissionEvent::saveEventData(CUser*, bool)",0x269,
                     "[HeroMission] Not exist mission value. (charac:%u)",uVar4);
        }
        std::string::~string((string *)&local_24);
      }
    }
  }
  return;
}

```

---

## sendMissionData

```asm
// === 0816770e HeroMissionEvent::sendMissionData  [0x0816770e-0x81679ab] ===
 816770e:	55                   	push   %ebp
 816770f:	89 e5                	mov    %esp,%ebp
 8167711:	56                   	push   %esi
 8167712:	53                   	push   %ebx
 8167713:	83 ec 40             	sub    $0x40,%esp
 8167716:	8b 45 08             	mov    0x8(%ebp),%eax
 8167719:	8b 00                	mov    (%eax),%eax
 816771b:	83 c0 34             	add    $0x34,%eax
 816771e:	8b 10                	mov    (%eax),%edx
 8167720:	8b 45 08             	mov    0x8(%ebp),%eax
 8167723:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816772a:	00 
 816772b:	89 04 24             	mov    %eax,(%esp)
 816772e:	ff d2                	call   *%edx
 8167730:	83 f0 01             	xor    $0x1,%eax
 8167733:	84 c0                	test   %al,%al
 8167735:	0f 85 65 02 00 00    	jne    81679a0 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x292>
 816773b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816773f:	75 31                	jne    8167772 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x64>
 8167741:	c7 44 24 10 d4 dd b7 	movl   $0x8b7ddd4,0x10(%esp)
 8167748:	08 
 8167749:	c7 44 24 0c 07 03 00 	movl   $0x307,0xc(%esp)
 8167750:	00 
 8167751:	c7 44 24 08 20 eb b7 	movl   $0x8b7eb20,0x8(%esp)
 8167758:	08 
 8167759:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167760:	08 
 8167761:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8167768:	e8 9d c4 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816776d:	e9 2f 02 00 00       	jmp    81679a1 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x293>
 8167772:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8167779:	ff 
 816777a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816777d:	89 04 24             	mov    %eax,(%esp)
 8167780:	e8 1b 68 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8167785:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8167788:	8b 45 08             	mov    0x8(%ebp),%eax
 816778b:	8d 48 24             	lea    0x24(%eax),%ecx
 816778e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8167791:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8167794:	89 54 24 08          	mov    %edx,0x8(%esp)
 8167798:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 816779c:	89 04 24             	mov    %eax,(%esp)
 816779f:	e8 54 10 00 00       	call   81687f8 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 81677a4:	83 ec 04             	sub    $0x4,%esp
 81677a7:	8b 45 08             	mov    0x8(%ebp),%eax
 81677aa:	8d 50 24             	lea    0x24(%eax),%edx
 81677ad:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81677b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81677b4:	89 04 24             	mov    %eax,(%esp)
 81677b7:	e8 68 10 00 00       	call   8168824 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 81677bc:	83 ec 04             	sub    $0x4,%esp
 81677bf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81677c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81677c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81677c9:	89 04 24             	mov    %eax,(%esp)
 81677cc:	e8 5b 11 00 00       	call   816892c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEeqERKS7_>
 81677d1:	84 c0                	test   %al,%al
 81677d3:	74 48                	je     816781d <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x10f>
 81677d5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81677dc:	ff 
 81677dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81677e0:	89 04 24             	mov    %eax,(%esp)
 81677e3:	e8 b8 67 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81677e8:	89 44 24 14          	mov    %eax,0x14(%esp)
 81677ec:	c7 44 24 10 0c de b7 	movl   $0x8b7de0c,0x10(%esp)
 81677f3:	08 
 81677f4:	c7 44 24 0c 0e 03 00 	movl   $0x30e,0xc(%esp)
 81677fb:	00 
 81677fc:	c7 44 24 08 20 eb b7 	movl   $0x8b7eb20,0x8(%esp)
 8167803:	08 
 8167804:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 816780b:	08 
 816780c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8167813:	e8 f2 c3 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8167818:	e9 84 01 00 00       	jmp    81679a1 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x293>
 816781d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8167820:	89 04 24             	mov    %eax,(%esp)
 8167823:	e8 24 65 42 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8167828:	c7 44 24 08 2f 02 00 	movl   $0x22f,0x8(%esp)
 816782f:	00 
 8167830:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8167837:	00 
 8167838:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816783b:	89 04 24             	mov    %eax,(%esp)
 816783e:	e8 b9 40 f6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8167843:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8167846:	89 04 24             	mov    %eax,(%esp)
 8167849:	e8 f2 10 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 816784e:	83 c0 04             	add    $0x4,%eax
 8167851:	89 04 24             	mov    %eax,(%esp)
 8167854:	e8 4b 11 00 00       	call   81689a4 <_ZNKSt6vectorI16HeroMissionValueSaIS0_EE4sizeEv>
 8167859:	89 44 24 04          	mov    %eax,0x4(%esp)
 816785d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8167860:	89 04 24             	mov    %eax,(%esp)
 8167863:	e8 3c 26 f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8167868:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816786b:	89 04 24             	mov    %eax,(%esp)
 816786e:	e8 cd 10 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 8167873:	8d 50 04             	lea    0x4(%eax),%edx
 8167876:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167879:	89 54 24 04          	mov    %edx,0x4(%esp)
 816787d:	89 04 24             	mov    %eax,(%esp)
 8167880:	e8 71 0c 00 00       	call   81684f6 <_ZNSt6vectorI16HeroMissionValueSaIS0_EE5beginEv>
 8167885:	83 ec 04             	sub    $0x4,%esp
 8167888:	e9 8a 00 00 00       	jmp    8167917 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x209>
 816788d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167890:	89 04 24             	mov    %eax,(%esp)
 8167893:	e8 ea 0c 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 8167898:	8b 00                	mov    (%eax),%eax
 816789a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816789e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81678a1:	89 04 24             	mov    %eax,(%esp)
 81678a4:	e8 fb 25 f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81678a9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81678ac:	89 04 24             	mov    %eax,(%esp)
 81678af:	e8 ce 0c 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 81678b4:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81678b8:	0f b7 c0             	movzwl %ax,%eax
 81678bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81678bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81678c2:	89 04 24             	mov    %eax,(%esp)
 81678c5:	e8 da 25 f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81678ca:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81678cd:	89 04 24             	mov    %eax,(%esp)
 81678d0:	e8 ad 0c 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 81678d5:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81678d9:	0f b7 c0             	movzwl %ax,%eax
 81678dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81678e0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81678e3:	89 04 24             	mov    %eax,(%esp)
 81678e6:	e8 b9 25 f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81678eb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81678ee:	89 04 24             	mov    %eax,(%esp)
 81678f1:	e8 8c 0c 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 81678f6:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81678fa:	0f b7 c0             	movzwl %ax,%eax
 81678fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167901:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8167904:	89 04 24             	mov    %eax,(%esp)
 8167907:	e8 98 25 f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 816790c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 816790f:	89 04 24             	mov    %eax,(%esp)
 8167912:	e8 55 0c 00 00       	call   816856c <_ZN9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEppEv>
 8167917:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816791a:	89 04 24             	mov    %eax,(%esp)
 816791d:	e8 1e 10 00 00       	call   8168940 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEptEv>
 8167922:	8d 50 04             	lea    0x4(%eax),%edx
 8167925:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8167928:	89 54 24 04          	mov    %edx,0x4(%esp)
 816792c:	89 04 24             	mov    %eax,(%esp)
 816792f:	e8 e6 0b 00 00       	call   816851a <_ZNSt6vectorI16HeroMissionValueSaIS0_EE3endEv>
 8167934:	83 ec 04             	sub    $0x4,%esp
 8167937:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816793a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816793e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8167941:	89 04 24             	mov    %eax,(%esp)
 8167944:	e8 f7 0b 00 00       	call   8168540 <_ZN9__gnu_cxxneIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8167949:	84 c0                	test   %al,%al
 816794b:	0f 85 3c ff ff ff    	jne    816788d <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x17f>
 8167951:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8167958:	00 
 8167959:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816795c:	89 04 24             	mov    %eax,(%esp)
 816795f:	e8 f4 3f f6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8167964:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8167967:	89 44 24 04          	mov    %eax,0x4(%esp)
 816796b:	8b 45 0c             	mov    0xc(%ebp),%eax
 816796e:	89 04 24             	mov    %eax,(%esp)
 8167971:	e8 44 0c 4e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8167976:	eb 1b                	jmp    8167993 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x285>
 8167978:	89 d3                	mov    %edx,%ebx
 816797a:	89 c6                	mov    %eax,%esi
 816797c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 816797f:	89 04 24             	mov    %eax,(%esp)
 8167982:	e8 f9 64 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8167987:	89 f0                	mov    %esi,%eax
 8167989:	89 da                	mov    %ebx,%edx
 816798b:	89 04 24             	mov    %eax,(%esp)
 816798e:	e8 bd bd 97 00       	call   8ae3750 <_Unwind_Resume>
 8167993:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8167996:	89 04 24             	mov    %eax,(%esp)
 8167999:	e8 e2 64 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 816799e:	eb 01                	jmp    81679a1 <_ZN16HeroMissionEvent15sendMissionDataEP5CUser+0x293>
 81679a0:	90                   	nop
 81679a1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81679a4:	83 c4 00             	add    $0x0,%esp
 81679a7:	5b                   	pop    %ebx
 81679a8:	5e                   	pop    %esi
 81679a9:	5d                   	pop    %ebp
 81679aa:	c3                   	ret
 81679ab:	90                   	nop

```

```c
// HeroMissionEvent::sendMissionData @ 0x816770e

/* HeroMissionEvent::sendMissionData(CUser*) */

void __thiscall HeroMissionEvent::sendMissionData(HeroMissionEvent *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_2c [4];
  PacketGuard local_28 [12];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_1c [4];
  undefined4 local_18;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_14 [4];
  __normal_iterator local_10 [4];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::sendMissionData(CUser*)",0x307,
                 "[HeroMission] Invalid user pointer. (processMission)");
    }
    else {
      local_18 = CUser::get_charac_no(param_1,-1);
      std::
      map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
      ::find((uint *)local_1c);
      std::
      map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
      ::end(local_14);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
              ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0816783e to 08167975 has its CatchHandler @ 08167978 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x22f);
        iVar4 = std::
                _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
                ::operator->(local_1c);
        iVar4 = std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::size
                          ((vector<HeroMissionValue,std::allocator<HeroMissionValue>> *)(iVar4 + 4))
        ;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar4);
        std::
        _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
        ::operator->(local_1c);
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
        while( true ) {
          std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
          ::operator->(local_1c);
          std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
          bVar2 = __gnu_cxx::operator!=(local_2c,local_10);
          if (!bVar2) break;
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                          ::operator->(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*piVar5);
          iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)*(ushort *)(iVar4 + 4))
          ;
          iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)*(ushort *)(iVar4 + 8))
          ;
          iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_2c);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_28,(uint)*(ushort *)(iVar4 + 10));
          __gnu_cxx::
          __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
          ::operator++(local_2c);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(param_1,local_28);
        PacketGuard::~PacketGuard(local_28);
      }
      else {
        uVar3 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "void HeroMissionEvent::sendMissionData(CUser*)",0x30e,
                   "[HeroMission] Not exist hero mission value. (charac:%u)",uVar3);
      }
    }
  }
  return;
}

```

---

## setEventData

```asm
// === 08166752 HeroMissionEvent::setEventData  [0x08166752-0x8166d0d] ===
 8166752:	55                   	push   %ebp
 8166753:	89 e5                	mov    %esp,%ebp
 8166755:	56                   	push   %esi
 8166756:	53                   	push   %ebx
 8166757:	81 ec 10 01 00 00    	sub    $0x110,%esp
 816675d:	8b 45 08             	mov    0x8(%ebp),%eax
 8166760:	8b 00                	mov    (%eax),%eax
 8166762:	83 c0 34             	add    $0x34,%eax
 8166765:	8b 10                	mov    (%eax),%edx
 8166767:	8b 45 08             	mov    0x8(%ebp),%eax
 816676a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8166771:	00 
 8166772:	89 04 24             	mov    %eax,(%esp)
 8166775:	ff d2                	call   *%edx
 8166777:	83 f0 01             	xor    $0x1,%eax
 816677a:	84 c0                	test   %al,%al
 816677c:	0f 85 7e 05 00 00    	jne    8166d00 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x5ae>
 8166782:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166789:	ff 
 816678a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816678d:	89 04 24             	mov    %eax,(%esp)
 8166790:	e8 0b 78 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166795:	85 c0                	test   %eax,%eax
 8166797:	0f 94 c0             	sete   %al
 816679a:	84 c0                	test   %al,%al
 816679c:	0f 85 61 05 00 00    	jne    8166d03 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x5b1>
 81667a2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81667a8:	89 04 24             	mov    %eax,(%esp)
 81667ab:	e8 d6 1e 00 00       	call   8168686 <_ZNSt6vectorI16HeroMissionValueSaIS0_EEC1Ev>
 81667b0:	8d 45 8f             	lea    -0x71(%ebp),%eax
 81667b3:	89 04 24             	mov    %eax,(%esp)
 81667b6:	e8 15 99 57 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81667bb:	8d 45 8f             	lea    -0x71(%ebp),%eax
 81667be:	89 44 24 08          	mov    %eax,0x8(%esp)
 81667c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81667c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81667c9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81667cf:	89 04 24             	mov    %eax,(%esp)
 81667d2:	e8 59 0e 5a 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81667d7:	eb 18                	jmp    81667f1 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x9f>
 81667d9:	89 d3                	mov    %edx,%ebx
 81667db:	89 c6                	mov    %eax,%esi
 81667dd:	8d 45 8f             	lea    -0x71(%ebp),%eax
 81667e0:	89 04 24             	mov    %eax,(%esp)
 81667e3:	e8 08 99 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81667e8:	89 f0                	mov    %esi,%eax
 81667ea:	89 da                	mov    %ebx,%edx
 81667ec:	e9 e1 04 00 00       	jmp    8166cd2 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x580>
 81667f1:	8d 45 8f             	lea    -0x71(%ebp),%eax
 81667f4:	89 04 24             	mov    %eax,(%esp)
 81667f7:	e8 f4 98 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81667fc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8166802:	89 04 24             	mov    %eax,(%esp)
 8166805:	e8 66 fe 59 00       	call   8706670 <_ZNKSs6lengthEv>
 816680a:	85 c0                	test   %eax,%eax
 816680c:	0f 94 c0             	sete   %al
 816680f:	84 c0                	test   %al,%al
 8166811:	0f 84 23 01 00 00    	je     816693a <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x1e8>
 8166817:	8b 45 08             	mov    0x8(%ebp),%eax
 816681a:	8d 50 0c             	lea    0xc(%eax),%edx
 816681d:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8166823:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166827:	89 04 24             	mov    %eax,(%esp)
 816682a:	e8 c9 1e 00 00       	call   81686f8 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE5beginEv>
 816682f:	83 ec 04             	sub    $0x4,%esp
 8166832:	e9 c9 00 00 00       	jmp    8166900 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x1ae>
 8166837:	8d 45 80             	lea    -0x80(%ebp),%eax
 816683a:	89 04 24             	mov    %eax,(%esp)
 816683d:	e8 3e e3 ff ff       	call   8164b80 <_ZN16HeroMissionValue5clearEv>
 8166842:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8166848:	89 04 24             	mov    %eax,(%esp)
 816684b:	e8 26 1f 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 8166850:	8b 00                	mov    (%eax),%eax
 8166852:	89 45 80             	mov    %eax,-0x80(%ebp)
 8166855:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 816685b:	89 04 24             	mov    %eax,(%esp)
 816685e:	e8 13 1f 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 8166863:	8b 00                	mov    (%eax),%eax
 8166865:	83 f8 04             	cmp    $0x4,%eax
 8166868:	75 17                	jne    8166881 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x12f>
 816686a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816686d:	89 04 24             	mov    %eax,(%esp)
 8166870:	e8 43 3a f7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8166875:	83 f8 46             	cmp    $0x46,%eax
 8166878:	75 07                	jne    8166881 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x12f>
 816687a:	b8 01 00 00 00       	mov    $0x1,%eax
 816687f:	eb 05                	jmp    8166886 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x134>
 8166881:	b8 00 00 00 00       	mov    $0x0,%eax
 8166886:	84 c0                	test   %al,%al
 8166888:	74 18                	je     81668a2 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x150>
 816688a:	66 c7 45 84 01 00    	movw   $0x1,-0x7c(%ebp)
 8166890:	66 c7 45 86 01 00    	movw   $0x1,-0x7a(%ebp)
 8166896:	66 c7 45 88 46 00    	movw   $0x46,-0x78(%ebp)
 816689c:	66 c7 45 8a 01 00    	movw   $0x1,-0x76(%ebp)
 81668a2:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81668a8:	89 04 24             	mov    %eax,(%esp)
 81668ab:	e8 c6 1e 00 00       	call   8168776 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEptEv>
 81668b0:	8b 00                	mov    (%eax),%eax
 81668b2:	83 f8 06             	cmp    $0x6,%eax
 81668b5:	75 17                	jne    81668ce <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x17c>
 81668b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81668ba:	89 04 24             	mov    %eax,(%esp)
 81668bd:	e8 f6 39 f7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81668c2:	83 f8 46             	cmp    $0x46,%eax
 81668c5:	75 07                	jne    81668ce <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x17c>
 81668c7:	b8 01 00 00 00       	mov    $0x1,%eax
 81668cc:	eb 05                	jmp    81668d3 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x181>
 81668ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81668d3:	84 c0                	test   %al,%al
 81668d5:	74 06                	je     81668dd <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x18b>
 81668d7:	66 c7 45 84 01 00    	movw   $0x1,-0x7c(%ebp)
 81668dd:	8d 45 80             	lea    -0x80(%ebp),%eax
 81668e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81668e4:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81668ea:	89 04 24             	mov    %eax,(%esp)
 81668ed:	e8 92 1e 00 00       	call   8168784 <_ZNSt6vectorI16HeroMissionValueSaIS0_EE9push_backERKS0_>
 81668f2:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81668f8:	89 04 24             	mov    %eax,(%esp)
 81668fb:	e8 58 1e 00 00       	call   8168758 <_ZNSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEppEv>
 8166900:	8b 45 08             	mov    0x8(%ebp),%eax
 8166903:	8d 50 0c             	lea    0xc(%eax),%edx
 8166906:	8d 45 90             	lea    -0x70(%ebp),%eax
 8166909:	89 54 24 04          	mov    %edx,0x4(%esp)
 816690d:	89 04 24             	mov    %eax,(%esp)
 8166910:	e8 09 1e 00 00       	call   816871e <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE3endEv>
 8166915:	83 ec 04             	sub    $0x4,%esp
 8166918:	8d 45 90             	lea    -0x70(%ebp),%eax
 816691b:	89 44 24 04          	mov    %eax,0x4(%esp)
 816691f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8166925:	89 04 24             	mov    %eax,(%esp)
 8166928:	e8 17 1e 00 00       	call   8168744 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEneERKS8_>
 816692d:	84 c0                	test   %al,%al
 816692f:	0f 85 02 ff ff ff    	jne    8166837 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0xe5>
 8166935:	e9 ef 01 00 00       	jmp    8166b29 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x3d7>
 816693a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8166941:	00 
 8166942:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8166949:	00 
 816694a:	c7 44 24 04 b2 dc b7 	movl   $0x8b7dcb2,0x4(%esp)
 8166951:	08 
 8166952:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8166958:	89 04 24             	mov    %eax,(%esp)
 816695b:	e8 4e 99 f6 ff       	call   80d02ae <_ZN5boost14char_separatorIcSt11char_traitsIcEEC1EPKcS5_NS_18empty_token_policyE>
 8166960:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8166966:	89 44 24 08          	mov    %eax,0x8(%esp)
 816696a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8166970:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166974:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 816697a:	89 04 24             	mov    %eax,(%esp)
 816697d:	e8 f8 99 f6 ff       	call   80d037a <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEC1ISsEERKT_RKS4_>
 8166982:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8166988:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 816698e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166992:	89 04 24             	mov    %eax,(%esp)
 8166995:	e8 2a 9a f6 ff       	call   80d03c4 <_ZNK5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsE5beginEv>
 816699a:	83 ec 04             	sub    $0x4,%esp
 816699d:	e9 b3 00 00 00       	jmp    8166a55 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x303>
 81669a2:	8d 45 bf             	lea    -0x41(%ebp),%eax
 81669a5:	89 04 24             	mov    %eax,(%esp)
 81669a8:	e8 23 97 57 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81669ad:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 81669b3:	89 04 24             	mov    %eax,(%esp)
 81669b6:	e8 d7 b8 f6 ff       	call   80d2292 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEptEv>
 81669bb:	89 04 24             	mov    %eax,(%esp)
 81669be:	e8 2d fb 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 81669c3:	8d 55 bf             	lea    -0x41(%ebp),%edx
 81669c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81669ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81669ce:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81669d1:	89 04 24             	mov    %eax,(%esp)
 81669d4:	e8 57 0c 5a 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81669d9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81669dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81669e0:	8d 45 80             	lea    -0x80(%ebp),%eax
 81669e3:	89 04 24             	mov    %eax,(%esp)
 81669e6:	e8 7d e3 ff ff       	call   8164d68 <_ZN16HeroMissionValue14setStringTokenESs>
 81669eb:	eb 15                	jmp    8166a02 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x2b0>
 81669ed:	89 d3                	mov    %edx,%ebx
 81669ef:	89 c6                	mov    %eax,%esi
 81669f1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81669f4:	89 04 24             	mov    %eax,(%esp)
 81669f7:	e8 e4 11 5a 00       	call   8707be0 <_ZNSsD1Ev>
 81669fc:	89 f0                	mov    %esi,%eax
 81669fe:	89 da                	mov    %ebx,%edx
 8166a00:	eb 0d                	jmp    8166a0f <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x2bd>
 8166a02:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8166a05:	89 04 24             	mov    %eax,(%esp)
 8166a08:	e8 d3 11 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8166a0d:	eb 18                	jmp    8166a27 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x2d5>
 8166a0f:	89 d3                	mov    %edx,%ebx
 8166a11:	89 c6                	mov    %eax,%esi
 8166a13:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8166a16:	89 04 24             	mov    %eax,(%esp)
 8166a19:	e8 d2 96 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8166a1e:	89 f0                	mov    %esi,%eax
 8166a20:	89 da                	mov    %ebx,%edx
 8166a22:	e9 89 00 00 00       	jmp    8166ab0 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x35e>
 8166a27:	8d 45 bf             	lea    -0x41(%ebp),%eax
 8166a2a:	89 04 24             	mov    %eax,(%esp)
 8166a2d:	e8 be 96 57 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8166a32:	8d 45 80             	lea    -0x80(%ebp),%eax
 8166a35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166a39:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8166a3f:	89 04 24             	mov    %eax,(%esp)
 8166a42:	e8 3d 1d 00 00       	call   8168784 <_ZNSt6vectorI16HeroMissionValueSaIS0_EE9push_backERKS0_>
 8166a47:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8166a4d:	89 04 24             	mov    %eax,(%esp)
 8166a50:	e8 85 9a f6 ff       	call   80d04da <_ZN5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEppEv>
 8166a55:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8166a58:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 8166a5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166a62:	89 04 24             	mov    %eax,(%esp)
 8166a65:	e8 d4 99 f6 ff       	call   80d043e <_ZNK5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsE3endEv>
 8166a6a:	83 ec 04             	sub    $0x4,%esp
 8166a6d:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8166a70:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8166a76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166a7a:	89 04 24             	mov    %eax,(%esp)
 8166a7d:	e8 36 9a f6 ff       	call   80d04b8 <_ZN5boostneINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiSB_SsSC_SE_iEENS_6detail23enable_if_interoperableIT_T4_NS_3mpl6apply2INSF_12always_bool2ESH_SI_E4typeEE4typeERKNS_15iterator_facadeISH_T0_T1_T2_T3_EERKNSQ_ISI_T5_T6_T7_T8_EE>
 8166a82:	89 c3                	mov    %eax,%ebx
 8166a84:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8166a87:	89 04 24             	mov    %eax,(%esp)
 8166a8a:	e8 2b 76 f6 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8166a8f:	eb 15                	jmp    8166aa6 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x354>
 8166a91:	89 d3                	mov    %edx,%ebx
 8166a93:	89 c6                	mov    %eax,%esi
 8166a95:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8166a98:	89 04 24             	mov    %eax,(%esp)
 8166a9b:	e8 1a 76 f6 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8166aa0:	89 f0                	mov    %esi,%eax
 8166aa2:	89 da                	mov    %ebx,%edx
 8166aa4:	eb 0a                	jmp    8166ab0 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x35e>
 8166aa6:	84 db                	test   %bl,%bl
 8166aa8:	0f 85 f4 fe ff ff    	jne    81669a2 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x250>
 8166aae:	eb 18                	jmp    8166ac8 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x376>
 8166ab0:	89 d3                	mov    %edx,%ebx
 8166ab2:	89 c6                	mov    %eax,%esi
 8166ab4:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8166aba:	89 04 24             	mov    %eax,(%esp)
 8166abd:	e8 f8 75 f6 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8166ac2:	89 f0                	mov    %esi,%eax
 8166ac4:	89 da                	mov    %ebx,%edx
 8166ac6:	eb 10                	jmp    8166ad8 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x386>
 8166ac8:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8166ace:	89 04 24             	mov    %eax,(%esp)
 8166ad1:	e8 e4 75 f6 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8166ad6:	eb 18                	jmp    8166af0 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x39e>
 8166ad8:	89 d3                	mov    %edx,%ebx
 8166ada:	89 c6                	mov    %eax,%esi
 8166adc:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8166ae2:	89 04 24             	mov    %eax,(%esp)
 8166ae5:	e8 ba 75 f6 ff       	call   80ce0a4 <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8166aea:	89 f0                	mov    %esi,%eax
 8166aec:	89 da                	mov    %ebx,%edx
 8166aee:	eb 10                	jmp    8166b00 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x3ae>
 8166af0:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8166af6:	89 04 24             	mov    %eax,(%esp)
 8166af9:	e8 a6 75 f6 ff       	call   80ce0a4 <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8166afe:	eb 1b                	jmp    8166b1b <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x3c9>
 8166b00:	89 d3                	mov    %edx,%ebx
 8166b02:	89 c6                	mov    %eax,%esi
 8166b04:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8166b0a:	89 04 24             	mov    %eax,(%esp)
 8166b0d:	e8 4c 75 f6 ff       	call   80ce05e <_ZN5boost14char_separatorIcSt11char_traitsIcEED1Ev>
 8166b12:	89 f0                	mov    %esi,%eax
 8166b14:	89 da                	mov    %ebx,%edx
 8166b16:	e9 8f 01 00 00       	jmp    8166caa <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x558>
 8166b1b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8166b21:	89 04 24             	mov    %eax,(%esp)
 8166b24:	e8 35 75 f6 ff       	call   80ce05e <_ZN5boost14char_separatorIcSt11char_traitsIcEED1Ev>
 8166b29:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166b30:	ff 
 8166b31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166b34:	89 04 24             	mov    %eax,(%esp)
 8166b37:	e8 64 74 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166b3c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8166b3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8166b42:	8d 48 24             	lea    0x24(%eax),%ecx
 8166b45:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8166b4b:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8166b4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8166b52:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8166b56:	89 04 24             	mov    %eax,(%esp)
 8166b59:	e8 9a 1c 00 00       	call   81687f8 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 8166b5e:	83 ec 04             	sub    $0x4,%esp
 8166b61:	8b 45 08             	mov    0x8(%ebp),%eax
 8166b64:	8d 50 24             	lea    0x24(%eax),%edx
 8166b67:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8166b6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166b6e:	89 04 24             	mov    %eax,(%esp)
 8166b71:	e8 ae 1c 00 00       	call   8168824 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8166b76:	83 ec 04             	sub    $0x4,%esp
 8166b79:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8166b7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166b80:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8166b86:	89 04 24             	mov    %eax,(%esp)
 8166b89:	e8 bc 1c 00 00       	call   816884a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorI16HeroMissionValueSaIS3_EEEEneERKS7_>
 8166b8e:	84 c0                	test   %al,%al
 8166b90:	74 6e                	je     8166c00 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x4ae>
 8166b92:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166b99:	ff 
 8166b9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166b9d:	89 04 24             	mov    %eax,(%esp)
 8166ba0:	e8 fb 73 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166ba5:	89 44 24 14          	mov    %eax,0x14(%esp)
 8166ba9:	c7 44 24 10 b4 dc b7 	movl   $0x8b7dcb4,0x10(%esp)
 8166bb0:	08 
 8166bb1:	c7 44 24 0c 4b 02 00 	movl   $0x24b,0xc(%esp)
 8166bb8:	00 
 8166bb9:	c7 44 24 08 20 ed b7 	movl   $0x8b7ed20,0x8(%esp)
 8166bc0:	08 
 8166bc1:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8166bc8:	08 
 8166bc9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8166bd0:	e8 35 d0 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8166bd5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166bdc:	ff 
 8166bdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166be0:	89 04 24             	mov    %eax,(%esp)
 8166be3:	e8 b8 73 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166be8:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8166beb:	8b 45 08             	mov    0x8(%ebp),%eax
 8166bee:	8d 50 24             	lea    0x24(%eax),%edx
 8166bf1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8166bf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166bf8:	89 14 24             	mov    %edx,(%esp)
 8166bfb:	e8 5e 1c 00 00       	call   816885e <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE5eraseERS7_>
 8166c00:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166c07:	ff 
 8166c08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166c0b:	89 04 24             	mov    %eax,(%esp)
 8166c0e:	e8 8d 73 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166c13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8166c16:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8166c19:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 8166c1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8166c23:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8166c26:	89 54 24 04          	mov    %edx,0x4(%esp)
 8166c2a:	89 04 24             	mov    %eax,(%esp)
 8166c2d:	e8 46 1c 00 00       	call   8168878 <_ZSt9make_pairIiRSt6vectorI16HeroMissionValueSaIS1_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 8166c32:	83 ec 04             	sub    $0x4,%esp
 8166c35:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8166c38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166c3c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166c3f:	89 04 24             	mov    %eax,(%esp)
 8166c42:	e8 7d 1c 00 00       	call   81688c4 <_ZNSt4pairIKjSt6vectorI16HeroMissionValueSaIS2_EEEC1IiS4_EEOS_IT_T0_E>
 8166c47:	8b 45 08             	mov    0x8(%ebp),%eax
 8166c4a:	8d 48 24             	lea    0x24(%eax),%ecx
 8166c4d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8166c50:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8166c53:	89 54 24 08          	mov    %edx,0x8(%esp)
 8166c57:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8166c5b:	89 04 24             	mov    %eax,(%esp)
 8166c5e:	e8 9d 1c 00 00       	call   8168900 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEE6insertERKS8_>
 8166c63:	83 ec 04             	sub    $0x4,%esp
 8166c66:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166c69:	89 04 24             	mov    %eax,(%esp)
 8166c6c:	e8 c9 16 00 00       	call   816833a <_ZNSt4pairIKjSt6vectorI16HeroMissionValueSaIS2_EEED1Ev>
 8166c71:	eb 2a                	jmp    8166c9d <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x54b>
 8166c73:	89 d3                	mov    %edx,%ebx
 8166c75:	89 c6                	mov    %eax,%esi
 8166c77:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166c7a:	89 04 24             	mov    %eax,(%esp)
 8166c7d:	e8 b8 16 00 00       	call   816833a <_ZNSt4pairIKjSt6vectorI16HeroMissionValueSaIS2_EEED1Ev>
 8166c82:	89 f0                	mov    %esi,%eax
 8166c84:	89 da                	mov    %ebx,%edx
 8166c86:	eb 00                	jmp    8166c88 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x536>
 8166c88:	89 d3                	mov    %edx,%ebx
 8166c8a:	89 c6                	mov    %eax,%esi
 8166c8c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8166c8f:	89 04 24             	mov    %eax,(%esp)
 8166c92:	e8 8d 16 00 00       	call   8168324 <_ZNSt4pairIiSt6vectorI16HeroMissionValueSaIS1_EEED1Ev>
 8166c97:	89 f0                	mov    %esi,%eax
 8166c99:	89 da                	mov    %ebx,%edx
 8166c9b:	eb 0d                	jmp    8166caa <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x558>
 8166c9d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8166ca0:	89 04 24             	mov    %eax,(%esp)
 8166ca3:	e8 7c 16 00 00       	call   8168324 <_ZNSt4pairIiSt6vectorI16HeroMissionValueSaIS1_EEED1Ev>
 8166ca8:	eb 18                	jmp    8166cc2 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x570>
 8166caa:	89 d3                	mov    %edx,%ebx
 8166cac:	89 c6                	mov    %eax,%esi
 8166cae:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8166cb4:	89 04 24             	mov    %eax,(%esp)
 8166cb7:	e8 24 0f 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8166cbc:	89 f0                	mov    %esi,%eax
 8166cbe:	89 da                	mov    %ebx,%edx
 8166cc0:	eb 10                	jmp    8166cd2 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x580>
 8166cc2:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8166cc8:	89 04 24             	mov    %eax,(%esp)
 8166ccb:	e8 10 0f 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8166cd0:	eb 1e                	jmp    8166cf0 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x59e>
 8166cd2:	89 d3                	mov    %edx,%ebx
 8166cd4:	89 c6                	mov    %eax,%esi
 8166cd6:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8166cdc:	89 04 24             	mov    %eax,(%esp)
 8166cdf:	e8 b6 19 00 00       	call   816869a <_ZNSt6vectorI16HeroMissionValueSaIS0_EED1Ev>
 8166ce4:	89 f0                	mov    %esi,%eax
 8166ce6:	89 da                	mov    %ebx,%edx
 8166ce8:	89 04 24             	mov    %eax,(%esp)
 8166ceb:	e8 60 ca 97 00       	call   8ae3750 <_Unwind_Resume>
 8166cf0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8166cf6:	89 04 24             	mov    %eax,(%esp)
 8166cf9:	e8 9c 19 00 00       	call   816869a <_ZNSt6vectorI16HeroMissionValueSaIS0_EED1Ev>
 8166cfe:	eb 04                	jmp    8166d04 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x5b2>
 8166d00:	90                   	nop
 8166d01:	eb 01                	jmp    8166d04 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc+0x5b2>
 8166d03:	90                   	nop
 8166d04:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8166d07:	83 c4 00             	add    $0x0,%esp
 8166d0a:	5b                   	pop    %ebx
 8166d0b:	5e                   	pop    %esi
 8166d0c:	5d                   	pop    %ebp
 8166d0d:	c3                   	ret

```

```c
// HeroMissionEvent::setEventData @ 0x8166752

/* HeroMissionEvent::setEventData(CUser*, char const*) */

void __thiscall HeroMissionEvent::setEventData(HeroMissionEvent *this,CUser *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  string *this_00;
  char *pcVar6;
  undefined4 uVar7;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  local_f0 [36];
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  local_cc [28];
  char_separator<char,std::char_traits<char>> local_b0 [20];
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_9c [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_98 [4];
  string local_94;
  vector<HeroMissionValue,std::allocator<HeroMissionValue>> local_90 [12];
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  allocator<char> local_75;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_74 [4];
  iterator_facade local_70 [36];
  string local_4c [7];
  allocator<char> local_45;
  undefined4 local_44;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_40 [4];
  undefined4 local_3c;
  pair local_38 [8];
  pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_30 [16];
  pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>> local_20 [16];
  undefined4 local_10;
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if ((cVar2 == '\x01') && (iVar3 = CUser::get_charac_no(param_1,-1), iVar3 != 0)) {
    std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::vector(local_90);
    std::allocator<char>::allocator();
                    /* try { // try from 081667d2 to 081667d6 has its CatchHandler @ 081667d9 */
    std::string::string((string *)&local_94,param_2,(allocator *)&local_75);
    std::allocator<char>::~allocator(&local_75);
                    /* try { // try from 08166805 to 0816695f has its CatchHandler @ 08166caa */
    iVar3 = std::string::length((string *)&local_94);
    if (iVar3 == 0) {
      std::
      map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
      ::begin(local_9c);
      while( true ) {
        std::
        map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
        ::end(local_74);
        cVar2 = std::
                _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                ::operator!=((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                              *)local_9c,(_Rb_tree_iterator *)local_74);
        if (cVar2 == '\0') break;
        HeroMissionValue::clear((HeroMissionValue *)&local_84);
        puVar4 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                 ::operator->((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                               *)local_9c);
        local_84 = *puVar4;
        piVar5 = (int *)std::
                        _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                        ::operator->((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                                      *)local_9c);
        if ((*piVar5 == 4) &&
           (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar3 == 0x46)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_80 = 1;
          local_7e = 1;
          local_7c = 0x46;
          local_7a = 1;
        }
        piVar5 = (int *)std::
                        _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                        ::operator->((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                                      *)local_9c);
        if ((*piVar5 == 6) &&
           (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar3 == 0x46)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_80 = 1;
        }
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::push_back
                  (local_90,(HeroMissionValue *)&local_84);
        std::
        _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
        ::operator++((_Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
                      *)local_9c);
      }
    }
    else {
      boost::char_separator<char,std::char_traits<char>>::char_separator(local_b0,&DAT_08b7dcb2,0,0)
      ;
                    /* try { // try from 0816697d to 08166981 has its CatchHandler @ 08166b00 */
      boost::
      tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::tokenizer<std::string>(local_cc,&local_94,(char_separator *)local_b0);
                    /* try { // try from 08166995 to 08166999 has its CatchHandler @ 08166ad8 */
      boost::
      tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::begin();
      while( true ) {
        boost::
        tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
        ::end();
                    /* try { // try from 08166a7d to 08166a81 has its CatchHandler @ 08166a91 */
        cVar2 = boost::operator!=((iterator_facade *)local_f0,local_70);
                    /* try { // try from 08166a8a to 08166a8e has its CatchHandler @ 08166ab0 */
        boost::
        token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
        ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                           *)local_70);
        if (cVar2 == '\0') break;
        std::allocator<char>::allocator();
                    /* try { // try from 081669b6 to 081669d8 has its CatchHandler @ 08166a0f */
        this_00 = (string *)
                  boost::
                  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
                  ::operator->(local_f0);
        pcVar6 = (char *)std::string::c_str(this_00);
        std::string::string(local_4c,pcVar6,(allocator *)&local_45);
                    /* try { // try from 081669e6 to 081669ea has its CatchHandler @ 081669ed */
        HeroMissionValue::setStringToken((HeroMissionValue *)&local_84,(string)local_4c);
                    /* try { // try from 08166a08 to 08166a0c has its CatchHandler @ 08166a0f */
        std::string::~string(local_4c);
        std::allocator<char>::~allocator(&local_45);
                    /* try { // try from 08166a42 to 08166a69 has its CatchHandler @ 08166ab0 */
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::push_back
                  (local_90,(HeroMissionValue *)&local_84);
        boost::
        iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
        ::operator++(local_f0);
      }
                    /* try { // try from 08166ad1 to 08166ad5 has its CatchHandler @ 08166ad8 */
      boost::
      token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                         *)local_f0);
                    /* try { // try from 08166af9 to 08166afd has its CatchHandler @ 08166b00 */
      boost::
      tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
      ::~tokenizer(local_cc);
                    /* try { // try from 08166b24 to 08166c31 has its CatchHandler @ 08166caa */
      boost::char_separator<char,std::char_traits<char>>::~char_separator(local_b0);
    }
    local_44 = CUser::get_charac_no(param_1,-1);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::find((uint *)local_98);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::end(local_40);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator!=(local_98,(_Rb_tree_iterator *)local_40);
    if (cVar2 != '\0') {
      uVar7 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::setEventData(CUser*, const char*)",0x24b,
                 "[HeroMission] Already exist character data. (charac:%u)",uVar7);
      local_3c = CUser::get_charac_no(param_1,-1);
      std::
      map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
      ::erase((uint *)(this + 0x24));
    }
    local_10 = CUser::get_charac_no(param_1,-1);
    std::make_pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>&>
              ((int *)local_20,(vector *)&local_10);
                    /* try { // try from 08166c42 to 08166c46 has its CatchHandler @ 08166c88 */
    std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>::
    pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>(local_30,local_20);
                    /* try { // try from 08166c5e to 08166c62 has its CatchHandler @ 08166c73 */
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::insert(local_38);
                    /* try { // try from 08166c6c to 08166c70 has its CatchHandler @ 08166c88 */
    std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>::
    ~pair(local_30);
                    /* try { // try from 08166ca3 to 08166ca7 has its CatchHandler @ 08166caa */
    std::pair<int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>::~pair(local_20);
                    /* try { // try from 08166ccb to 08166ccf has its CatchHandler @ 08166cd2 */
    std::string::~string((string *)&local_94);
    std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::~vector(local_90);
  }
  return;
}

```

---

## setEventData_08166d0e

```asm
// === 08166d0e HeroMissionEvent::setEventData  [0x08166d0e-0x8166d37] ===
 8166d0e:	55                   	push   %ebp
 8166d0f:	89 e5                	mov    %esp,%ebp
 8166d11:	83 ec 18             	sub    $0x18,%esp
 8166d14:	8b 45 10             	mov    0x10(%ebp),%eax
 8166d17:	89 04 24             	mov    %eax,(%esp)
 8166d1a:	e8 d1 f7 59 00       	call   87064f0 <_ZNKSs5c_strEv>
 8166d1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8166d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8166d26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166d2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8166d2d:	89 04 24             	mov    %eax,(%esp)
 8166d30:	e8 1d fa ff ff       	call   8166752 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc>
 8166d35:	c9                   	leave
 8166d36:	c3                   	ret
 8166d37:	90                   	nop

```

```c
// HeroMissionEvent::setEventData @ 0x8166d0e

/* HeroMissionEvent::setEventData(CUser*, std::string const&) */

void __thiscall
HeroMissionEvent::setEventData(HeroMissionEvent *this,CUser *param_1,string *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::string::c_str((string *)param_2);
  setEventData(this,param_1,pcVar1);
  return;
}

```

---

## setMissionForGm

```asm
// === 081679ac HeroMissionEvent::setMissionForGm  [0x081679ac-0x8167a39] ===
 81679ac:	55                   	push   %ebp
 81679ad:	89 e5                	mov    %esp,%ebp
 81679af:	83 ec 28             	sub    $0x28,%esp
 81679b2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81679b9:	8b 45 10             	mov    0x10(%ebp),%eax
 81679bc:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81679bf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81679c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81679c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81679ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81679ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81679d1:	89 04 24             	mov    %eax,(%esp)
 81679d4:	e8 37 06 00 00       	call   8168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>
 81679d9:	84 c0                	test   %al,%al
 81679db:	74 5a                	je     8167a37 <_ZN16HeroMissionEvent15setMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x8b>
 81679dd:	8b 45 08             	mov    0x8(%ebp),%eax
 81679e0:	8d 48 0c             	lea    0xc(%eax),%ecx
 81679e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81679e6:	8d 55 10             	lea    0x10(%ebp),%edx
 81679e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81679ed:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81679f1:	89 04 24             	mov    %eax,(%esp)
 81679f4:	e8 6b 0f 00 00       	call   8168964 <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE4findERS8_>
 81679f9:	83 ec 04             	sub    $0x4,%esp
 81679fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81679ff:	8d 50 0c             	lea    0xc(%eax),%edx
 8167a02:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8167a05:	89 54 24 04          	mov    %edx,0x4(%esp)
 8167a09:	89 04 24             	mov    %eax,(%esp)
 8167a0c:	e8 0d 0d 00 00       	call   816871e <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEE3endEv>
 8167a11:	83 ec 04             	sub    $0x4,%esp
 8167a14:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8167a17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8167a1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8167a1e:	89 04 24             	mov    %eax,(%esp)
 8167a21:	e8 6a 0f 00 00       	call   8168990 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionEEeqERKS8_>
 8167a26:	84 c0                	test   %al,%al
 8167a28:	75 0c                	jne    8167a36 <_ZN16HeroMissionEvent15setMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x8a>
 8167a2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8167a2d:	8b 55 14             	mov    0x14(%ebp),%edx
 8167a30:	66 89 50 04          	mov    %dx,0x4(%eax)
 8167a34:	eb 01                	jmp    8167a37 <_ZN16HeroMissionEvent15setMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x8b>
 8167a36:	90                   	nop
 8167a37:	c9                   	leave
 8167a38:	c3                   	ret
 8167a39:	90                   	nop

```

```c
// HeroMissionEvent::setMissionForGm @ 0x81679ac

/* HeroMissionEvent::setMissionForGm(CUser*, HeroMissionCondition::MissionNo::T, unsigned int) */

void __thiscall
HeroMissionEvent::setMissionForGm
          (HeroMissionEvent *this,undefined4 param_1,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_18 [4];
  int local_14;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_10 [12];
  
  local_14 = 0;
  cVar1 = findMissionValue(this,param_1,param_3,&local_14);
  if (cVar1 != '\0') {
    std::
    map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
    ::find(local_18);
    std::
    map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
            ::operator==(local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      *(undefined2 *)(local_14 + 4) = param_4;
    }
  }
  return;
}

```

---

## setMissionValue

```asm
// === 08167216 HeroMissionEvent::setMissionValue  [0x08167216-0x81672bd] ===
 8167216:	55                   	push   %ebp
 8167217:	89 e5                	mov    %esp,%ebp
 8167219:	83 ec 38             	sub    $0x38,%esp
 816721c:	8b 45 08             	mov    0x8(%ebp),%eax
 816721f:	8b 00                	mov    (%eax),%eax
 8167221:	83 c0 34             	add    $0x34,%eax
 8167224:	8b 10                	mov    (%eax),%edx
 8167226:	8b 45 08             	mov    0x8(%ebp),%eax
 8167229:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8167230:	00 
 8167231:	89 04 24             	mov    %eax,(%esp)
 8167234:	ff d2                	call   *%edx
 8167236:	83 f0 01             	xor    $0x1,%eax
 8167239:	84 c0                	test   %al,%al
 816723b:	75 7d                	jne    81672ba <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj+0xa4>
 816723d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8167241:	75 2e                	jne    8167271 <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x5b>
 8167243:	c7 44 24 10 ec dc b7 	movl   $0x8b7dcec,0x10(%esp)
 816724a:	08 
 816724b:	c7 44 24 0c a6 02 00 	movl   $0x2a6,0xc(%esp)
 8167252:	00 
 8167253:	c7 44 24 08 20 ec b7 	movl   $0x8b7ec20,0x8(%esp)
 816725a:	08 
 816725b:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8167262:	08 
 8167263:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816726a:	e8 9b c9 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816726f:	eb 4a                	jmp    81672bb <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj+0xa5>
 8167271:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8167278:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816727b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 816727f:	8b 45 10             	mov    0x10(%ebp),%eax
 8167282:	89 44 24 08          	mov    %eax,0x8(%esp)
 8167286:	8b 45 0c             	mov    0xc(%ebp),%eax
 8167289:	89 44 24 04          	mov    %eax,0x4(%esp)
 816728d:	8b 45 08             	mov    0x8(%ebp),%eax
 8167290:	89 04 24             	mov    %eax,(%esp)
 8167293:	e8 78 0d 00 00       	call   8168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>
 8167298:	84 c0                	test   %al,%al
 816729a:	74 0a                	je     81672a6 <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj+0x90>
 816729c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816729f:	8b 55 14             	mov    0x14(%ebp),%edx
 81672a2:	66 89 50 08          	mov    %dx,0x8(%eax)
 81672a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81672a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81672ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81672b0:	89 04 24             	mov    %eax,(%esp)
 81672b3:	e8 56 04 00 00       	call   816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>
 81672b8:	eb 01                	jmp    81672bb <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj+0xa5>
 81672ba:	90                   	nop
 81672bb:	c9                   	leave
 81672bc:	c3                   	ret
 81672bd:	90                   	nop

```

```c
// HeroMissionEvent::setMissionValue @ 0x8167216

/* HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int) */

void __thiscall
HeroMissionEvent::setMissionValue
          (HeroMissionEvent *this,CUser *param_1,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  int local_10 [3];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)"
                 ,0x2a6,"[HeroMission] User is null.");
    }
    else {
      local_10[0] = 0;
      cVar1 = findMissionValue(this,param_1,param_3,local_10);
      if (cVar1 != '\0') {
        *(undefined2 *)(local_10[0] + 8) = param_4;
      }
      sendMissionData(this,param_1);
    }
  }
  return;
}

```

---

## ~HeroMissionEvent

```asm
// === 081665a2 HeroMissionEvent::~HeroMissionEvent  [0x081665a2-0x816662b] ===
 81665a2:	55                   	push   %ebp
 81665a3:	89 e5                	mov    %esp,%ebp
 81665a5:	56                   	push   %esi
 81665a6:	53                   	push   %ebx
 81665a7:	83 ec 10             	sub    $0x10,%esp
 81665aa:	8b 45 08             	mov    0x8(%ebp),%eax
 81665ad:	c7 00 08 f0 b7 08    	movl   $0x8b7f008,(%eax)
 81665b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81665b6:	83 c0 24             	add    $0x24,%eax
 81665b9:	89 04 24             	mov    %eax,(%esp)
 81665bc:	e8 4f 1d 00 00       	call   8168310 <_ZNSt3mapIjSt6vectorI16HeroMissionValueSaIS1_EESt4lessIjESaISt4pairIKjS3_EEED1Ev>
 81665c1:	eb 18                	jmp    81665db <_ZN16HeroMissionEventD1Ev+0x39>
 81665c3:	89 d3                	mov    %edx,%ebx
 81665c5:	89 c6                	mov    %eax,%esi
 81665c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81665ca:	83 c0 0c             	add    $0xc,%eax
 81665cd:	89 04 24             	mov    %eax,(%esp)
 81665d0:	e8 27 1d 00 00       	call   81682fc <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEED1Ev>
 81665d5:	89 f0                	mov    %esi,%eax
 81665d7:	89 da                	mov    %ebx,%edx
 81665d9:	eb 10                	jmp    81665eb <_ZN16HeroMissionEventD1Ev+0x49>
 81665db:	8b 45 08             	mov    0x8(%ebp),%eax
 81665de:	83 c0 0c             	add    $0xc,%eax
 81665e1:	89 04 24             	mov    %eax,(%esp)
 81665e4:	e8 13 1d 00 00       	call   81682fc <_ZNSt3mapIN20HeroMissionCondition9MissionNo1TEP24BaseHeroMissionConditionSt4lessIS2_ESaISt4pairIKS2_S4_EEED1Ev>
 81665e9:	eb 1b                	jmp    8166606 <_ZN16HeroMissionEventD1Ev+0x64>
 81665eb:	89 d3                	mov    %edx,%ebx
 81665ed:	89 c6                	mov    %eax,%esi
 81665ef:	8b 45 08             	mov    0x8(%ebp),%eax
 81665f2:	89 04 24             	mov    %eax,(%esp)
 81665f5:	e8 58 48 fa ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81665fa:	89 f0                	mov    %esi,%eax
 81665fc:	89 da                	mov    %ebx,%edx
 81665fe:	89 04 24             	mov    %eax,(%esp)
 8166601:	e8 4a d1 97 00       	call   8ae3750 <_Unwind_Resume>
 8166606:	8b 45 08             	mov    0x8(%ebp),%eax
 8166609:	89 04 24             	mov    %eax,(%esp)
 816660c:	e8 41 48 fa ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8166611:	b8 00 00 00 00       	mov    $0x0,%eax
 8166616:	84 c0                	test   %al,%al
 8166618:	74 0b                	je     8166625 <_ZN16HeroMissionEventD1Ev+0x83>
 816661a:	8b 45 08             	mov    0x8(%ebp),%eax
 816661d:	89 04 24             	mov    %eax,(%esp)
 8166620:	e8 cb de 5b 00       	call   87244f0 <_ZdlPv>
 8166625:	83 c4 10             	add    $0x10,%esp
 8166628:	5b                   	pop    %ebx
 8166629:	5e                   	pop    %esi
 816662a:	5d                   	pop    %ebp
 816662b:	c3                   	ret

```

```c
// HeroMissionEvent::~HeroMissionEvent @ 0x81665a2

/* WARNING: Removing unreachable block (ram,0x0816661a) */
/* HeroMissionEvent::~HeroMissionEvent() */

void __thiscall HeroMissionEvent::~HeroMissionEvent(HeroMissionEvent *this)

{
  *(undefined ***)this = &PTR__HeroMissionEvent_08b7f008;
                    /* try { // try from 081665bc to 081665c0 has its CatchHandler @ 081665c3 */
  std::
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  ::~map((map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
          *)(this + 0x24));
                    /* try { // try from 081665e4 to 081665e8 has its CatchHandler @ 081665eb */
  std::
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  ::~map((map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
          *)(this + 0xc));
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~HeroMissionEvent_0816662c

```asm
// === 0816662c HeroMissionEvent::~HeroMissionEvent  [0x0816662c-0x8166649] ===
 816662c:	55                   	push   %ebp
 816662d:	89 e5                	mov    %esp,%ebp
 816662f:	83 ec 18             	sub    $0x18,%esp
 8166632:	8b 45 08             	mov    0x8(%ebp),%eax
 8166635:	89 04 24             	mov    %eax,(%esp)
 8166638:	e8 65 ff ff ff       	call   81665a2 <_ZN16HeroMissionEventD1Ev>
 816663d:	8b 45 08             	mov    0x8(%ebp),%eax
 8166640:	89 04 24             	mov    %eax,(%esp)
 8166643:	e8 a8 de 5b 00       	call   87244f0 <_ZdlPv>
 8166648:	c9                   	leave
 8166649:	c3                   	ret

```

```c
// HeroMissionEvent::~HeroMissionEvent @ 0x816662c

/* HeroMissionEvent::~HeroMissionEvent() */

void __thiscall HeroMissionEvent::~HeroMissionEvent(HeroMissionEvent *this)

{
  ~HeroMissionEvent(this);
  operator_delete(this);
  return;
}

```

