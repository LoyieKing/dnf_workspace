# CSchoolMatchEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AppendInfo

```asm
// === 082742a8 CSchoolMatchEvent::AppendInfo  [0x082742a8-0x8274343] ===
 82742a8:	55                   	push   %ebp
 82742a9:	89 e5                	mov    %esp,%ebp
 82742ab:	83 ec 28             	sub    $0x28,%esp
 82742ae:	8b 45 08             	mov    0x8(%ebp),%eax
 82742b1:	83 c0 0c             	add    $0xc,%eax
 82742b4:	89 04 24             	mov    %eax,(%esp)
 82742b7:	e8 04 9f e1 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 82742bc:	89 c2                	mov    %eax,%edx
 82742be:	8b 45 0c             	mov    0xc(%ebp),%eax
 82742c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82742c5:	89 04 24             	mov    %eax,(%esp)
 82742c8:	e8 53 76 e5 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82742cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82742d0:	8d 50 0c             	lea    0xc(%eax),%edx
 82742d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82742d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82742da:	89 04 24             	mov    %eax,(%esp)
 82742dd:	e8 66 9f e1 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 82742e2:	83 ec 04             	sub    $0x4,%esp
 82742e5:	eb 2d                	jmp    8274314 <_ZN17CSchoolMatchEvent10AppendInfoER11PacketGuard+0x6c>
 82742e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82742ea:	89 04 24             	mov    %eax,(%esp)
 82742ed:	e8 da a4 e1 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 82742f2:	8b 00                	mov    (%eax),%eax
 82742f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82742f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82742fa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82742fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8274301:	89 04 24             	mov    %eax,(%esp)
 8274304:	e8 9b 5b e6 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8274309:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827430c:	89 04 24             	mov    %eax,(%esp)
 827430f:	e8 78 66 e7 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 8274314:	8b 45 08             	mov    0x8(%ebp),%eax
 8274317:	8d 50 0c             	lea    0xc(%eax),%edx
 827431a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827431d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8274321:	89 04 24             	mov    %eax,(%esp)
 8274324:	e8 43 9f e1 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8274329:	83 ec 04             	sub    $0x4,%esp
 827432c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827432f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8274333:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8274336:	89 04 24             	mov    %eax,(%esp)
 8274339:	e8 24 61 e7 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 827433e:	84 c0                	test   %al,%al
 8274340:	75 a5                	jne    82742e7 <_ZN17CSchoolMatchEvent10AppendInfoER11PacketGuard+0x3f>
 8274342:	c9                   	leave
 8274343:	c3                   	ret

```

```c
// CSchoolMatchEvent::AppendInfo @ 0x82742a8

/* CSchoolMatchEvent::AppendInfo(PacketGuard&) */

void __thiscall CSchoolMatchEvent::AppendInfo(CSchoolMatchEvent *this,PacketGuard *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  iVar2 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 0xc));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_18);
    local_10 = *piVar3;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_10);
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_18);
  }
  return;
}

```

---

## CSchoolMatchEvent

```asm
// === 08273ecc CSchoolMatchEvent::CSchoolMatchEvent  [0x08273ecc-0x8273f19] ===
 8273ecc:	55                   	push   %ebp
 8273ecd:	89 e5                	mov    %esp,%ebp
 8273ecf:	56                   	push   %esi
 8273ed0:	53                   	push   %ebx
 8273ed1:	83 ec 10             	sub    $0x10,%esp
 8273ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 8273ed7:	89 04 24             	mov    %eax,(%esp)
 8273eda:	e8 4d 6f e9 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8273edf:	8b 45 08             	mov    0x8(%ebp),%eax
 8273ee2:	c7 00 08 d2 bf 08    	movl   $0x8bfd208,(%eax)
 8273ee8:	8b 45 08             	mov    0x8(%ebp),%eax
 8273eeb:	83 c0 0c             	add    $0xc,%eax
 8273eee:	89 04 24             	mov    %eax,(%esp)
 8273ef1:	e8 b6 a2 e1 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8273ef6:	eb 1b                	jmp    8273f13 <_ZN17CSchoolMatchEventC1Ev+0x47>
 8273ef8:	89 d3                	mov    %edx,%ebx
 8273efa:	89 c6                	mov    %eax,%esi
 8273efc:	8b 45 08             	mov    0x8(%ebp),%eax
 8273eff:	89 04 24             	mov    %eax,(%esp)
 8273f02:	e8 4b 6f e9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8273f07:	89 f0                	mov    %esi,%eax
 8273f09:	89 da                	mov    %ebx,%edx
 8273f0b:	89 04 24             	mov    %eax,(%esp)
 8273f0e:	e8 3d f8 86 00       	call   8ae3750 <_Unwind_Resume>
 8273f13:	83 c4 10             	add    $0x10,%esp
 8273f16:	5b                   	pop    %ebx
 8273f17:	5e                   	pop    %esi
 8273f18:	5d                   	pop    %ebp
 8273f19:	c3                   	ret

```

```c
// CSchoolMatchEvent::CSchoolMatchEvent @ 0x8273ecc

/* CSchoolMatchEvent::CSchoolMatchEvent() */

void __thiscall CSchoolMatchEvent::CSchoolMatchEvent(CSchoolMatchEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CSchoolMatchEvent_08bfd208;
                    /* try { // try from 08273ef1 to 08273ef5 has its CatchHandler @ 08273ef8 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
  return;
}

```

---

## EndEvent

```asm
// === 0827423c CSchoolMatchEvent::EndEvent  [0x0827423c-0x82742a7] ===
 827423c:	55                   	push   %ebp
 827423d:	89 e5                	mov    %esp,%ebp
 827423f:	83 ec 28             	sub    $0x28,%esp
 8274242:	8b 45 08             	mov    0x8(%ebp),%eax
 8274245:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827424c:	00 
 827424d:	89 04 24             	mov    %eax,(%esp)
 8274250:	e8 8d 42 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8274255:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 827425c:	e8 1d 8e 2e 00       	call   855d07e <_ZN12CLeagueMatch12SetMatchAbleEb>
 8274261:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8274268:	00 
 8274269:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 8274270:	00 
 8274271:	c7 44 24 04 40 d1 bf 	movl   $0x8bfd140,0x4(%esp)
 8274278:	08 
 8274279:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827427c:	89 04 24             	mov    %eax,(%esp)
 827427f:	e8 94 b4 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8274284:	c7 44 24 04 fd c4 bf 	movl   $0x8bfc4fd,0x4(%esp)
 827428b:	08 
 827428c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827428f:	89 04 24             	mov    %eax,(%esp)
 8274292:	e8 f1 b4 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8274297:	8b 45 08             	mov    0x8(%ebp),%eax
 827429a:	83 c0 0c             	add    $0xc,%eax
 827429d:	89 04 24             	mov    %eax,(%esp)
 82742a0:	e8 c9 28 e2 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 82742a5:	c9                   	leave
 82742a6:	c3                   	ret
 82742a7:	90                   	nop

```

```c
// CSchoolMatchEvent::EndEvent @ 0x827423c

/* CSchoolMatchEvent::EndEvent() */

void __thiscall CSchoolMatchEvent::EndEvent(CSchoolMatchEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  CLeagueMatch::SetMatchAble(false);
  cMyTrace::cMyTrace(local_1c,"virtual void CSchoolMatchEvent::EndEvent()",0x3f,0);
  cMyTrace::operator()(local_1c,"CSchoolMatchEvent End!");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  return;
}

```

---

## StartEvent

```asm
// === 08273f9a CSchoolMatchEvent::StartEvent  [0x08273f9a-0x8273feb] ===
 8273f9a:	55                   	push   %ebp
 8273f9b:	89 e5                	mov    %esp,%ebp
 8273f9d:	83 ec 28             	sub    $0x28,%esp
 8273fa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8273fa3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8273faa:	00 
 8273fab:	89 04 24             	mov    %eax,(%esp)
 8273fae:	e8 2f 45 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8273fb3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8273fba:	00 
 8273fbb:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8273fc2:	00 
 8273fc3:	c7 44 24 04 c0 d1 bf 	movl   $0x8bfd1c0,0x4(%esp)
 8273fca:	08 
 8273fcb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273fce:	89 04 24             	mov    %eax,(%esp)
 8273fd1:	e8 42 b7 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8273fd6:	c7 44 24 04 63 c4 bf 	movl   $0x8bfc463,0x4(%esp)
 8273fdd:	08 
 8273fde:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8273fe1:	89 04 24             	mov    %eax,(%esp)
 8273fe4:	e8 9f b7 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8273fe9:	c9                   	leave
 8273fea:	c3                   	ret
 8273feb:	90                   	nop

```

```c
// CSchoolMatchEvent::StartEvent @ 0x8273f9a

/* CSchoolMatchEvent::StartEvent() */

void __thiscall CSchoolMatchEvent::StartEvent(CSchoolMatchEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CSchoolMatchEvent::StartEvent()",0x15,0);
  cMyTrace::operator()(local_1c,"CSchoolMatchEvent Start!");
  return;
}

```

---

## StartEvent_08273fec

```asm
// === 08273fec CSchoolMatchEvent::StartEvent  [0x08273fec-0x827423b] ===
 8273fec:	55                   	push   %ebp
 8273fed:	89 e5                	mov    %esp,%ebp
 8273fef:	57                   	push   %edi
 8273ff0:	56                   	push   %esi
 8273ff1:	53                   	push   %ebx
 8273ff2:	83 ec 7c             	sub    $0x7c,%esp
 8273ff5:	8b 45 08             	mov    0x8(%ebp),%eax
 8273ff8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8273fff:	00 
 8274000:	89 04 24             	mov    %eax,(%esp)
 8274003:	e8 da 44 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8274008:	8d 45 0c             	lea    0xc(%ebp),%eax
 827400b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827400e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8274011:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 8274015:	0f b6 c0             	movzbl %al,%eax
 8274018:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 827401b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827401e:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8274022:	0f b6 f8             	movzbl %al,%edi
 8274025:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8274028:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 827402c:	0f b6 f0             	movzbl %al,%esi
 827402f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8274032:	0f b6 00             	movzbl (%eax),%eax
 8274035:	0f b6 d8             	movzbl %al,%ebx
 8274038:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827403f:	00 
 8274040:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8274047:	00 
 8274048:	c7 44 24 04 80 d1 bf 	movl   $0x8bfd180,0x4(%esp)
 827404f:	08 
 8274050:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8274053:	89 04 24             	mov    %eax,(%esp)
 8274056:	e8 bd b6 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827405b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 827405e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8274062:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8274066:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827406a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827406e:	c7 44 24 04 7c c4 bf 	movl   $0x8bfc47c,0x4(%esp)
 8274075:	08 
 8274076:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8274079:	89 04 24             	mov    %eax,(%esp)
 827407c:	e8 07 b7 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8274081:	e8 21 63 e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8274086:	89 04 24             	mov    %eax,(%esp)
 8274089:	e8 92 2a ea ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 827408e:	83 f8 09             	cmp    $0x9,%eax
 8274091:	74 12                	je     82740a5 <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0xb9>
 8274093:	e8 0f 63 e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8274098:	89 04 24             	mov    %eax,(%esp)
 827409b:	e8 80 2a ea ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 82740a0:	83 f8 0a             	cmp    $0xa,%eax
 82740a3:	75 07                	jne    82740ac <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0xc0>
 82740a5:	b8 01 00 00 00       	mov    $0x1,%eax
 82740aa:	eb 05                	jmp    82740b1 <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0xc5>
 82740ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82740b1:	84 c0                	test   %al,%al
 82740b3:	0f 84 b8 00 00 00    	je     8274171 <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0x185>
 82740b9:	e8 c3 80 e5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82740be:	89 04 24             	mov    %eax,(%esp)
 82740c1:	e8 04 6a ed ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 82740c6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 82740c9:	0f b6 12             	movzbl (%edx),%edx
 82740cc:	0f b6 d2             	movzbl %dl,%edx
 82740cf:	39 d0                	cmp    %edx,%eax
 82740d1:	0f 94 c0             	sete   %al
 82740d4:	84 c0                	test   %al,%al
 82740d6:	0f 84 95 00 00 00    	je     8274171 <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0x185>
 82740dc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82740e3:	e8 96 8f 2e 00       	call   855d07e <_ZN12CLeagueMatch12SetMatchAbleEb>
 82740e8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82740eb:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 82740ef:	0f b6 c0             	movzbl %al,%eax
 82740f2:	89 04 24             	mov    %eax,(%esp)
 82740f5:	e8 76 8f 2e 00       	call   855d070 <_ZN12CLeagueMatch22SetPlayCountPerOneTeamEj>
 82740fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82740fd:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8274101:	0f b6 c0             	movzbl %al,%eax
 8274104:	a3 70 bb 3a 09       	mov    %eax,0x93abb70
 8274109:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827410c:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 8274110:	0f b6 c0             	movzbl %al,%eax
 8274113:	a3 6c bb 3a 09       	mov    %eax,0x93abb6c
 8274118:	e8 64 80 e5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 827411d:	89 04 24             	mov    %eax,(%esp)
 8274120:	e8 a5 69 ed ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8274125:	83 f8 47             	cmp    $0x47,%eax
 8274128:	0f 94 c0             	sete   %al
 827412b:	84 c0                	test   %al,%al
 827412d:	74 0c                	je     827413b <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0x14f>
 827412f:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8274136:	e8 65 02 00 00       	call   82743a0 <_ZN12CLeagueMatch13SetBattleModeEi>
 827413b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8274142:	00 
 8274143:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 827414a:	00 
 827414b:	c7 44 24 04 80 d1 bf 	movl   $0x8bfd180,0x4(%esp)
 8274152:	08 
 8274153:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8274156:	89 04 24             	mov    %eax,(%esp)
 8274159:	e8 ba b5 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827415e:	c7 44 24 04 dc c4 bf 	movl   $0x8bfc4dc,0x4(%esp)
 8274165:	08 
 8274166:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8274169:	89 04 24             	mov    %eax,(%esp)
 827416c:	e8 17 b6 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8274171:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8274174:	0f b6 00             	movzbl (%eax),%eax
 8274177:	0f b6 c0             	movzbl %al,%eax
 827417a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 827417d:	8b 45 08             	mov    0x8(%ebp),%eax
 8274180:	8d 50 0c             	lea    0xc(%eax),%edx
 8274183:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8274186:	89 54 24 04          	mov    %edx,0x4(%esp)
 827418a:	89 04 24             	mov    %eax,(%esp)
 827418d:	e8 da a0 e1 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8274192:	83 ec 04             	sub    $0x4,%esp
 8274195:	8b 45 08             	mov    0x8(%ebp),%eax
 8274198:	8d 50 0c             	lea    0xc(%eax),%edx
 827419b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 827419e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82741a2:	89 04 24             	mov    %eax,(%esp)
 82741a5:	e8 9e a0 e1 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 82741aa:	83 ec 04             	sub    $0x4,%esp
 82741ad:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82741b0:	8d 55 d0             	lea    -0x30(%ebp),%edx
 82741b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82741b7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 82741ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 82741be:	8b 55 d8             	mov    -0x28(%ebp),%edx
 82741c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82741c5:	89 04 24             	mov    %eax,(%esp)
 82741c8:	e8 ca 57 e8 ff       	call   80f9997 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 82741cd:	83 ec 04             	sub    $0x4,%esp
 82741d0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82741d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82741d7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82741da:	89 04 24             	mov    %eax,(%esp)
 82741dd:	e8 0a 58 e8 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 82741e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82741e5:	8d 50 0c             	lea    0xc(%eax),%edx
 82741e8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82741eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82741ef:	89 04 24             	mov    %eax,(%esp)
 82741f2:	e8 75 a0 e1 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 82741f7:	83 ec 04             	sub    $0x4,%esp
 82741fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82741fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8274201:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8274204:	89 04 24             	mov    %eax,(%esp)
 8274207:	e8 0c 5c e8 ff       	call   80f9e18 <_ZN9__gnu_cxxeqIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 827420c:	84 c0                	test   %al,%al
 827420e:	74 21                	je     8274231 <_ZN17CSchoolMatchEvent10StartEventE10Word_Param+0x245>
 8274210:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8274213:	0f b6 00             	movzbl (%eax),%eax
 8274216:	0f b6 c0             	movzbl %al,%eax
 8274219:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827421c:	8b 45 08             	mov    0x8(%ebp),%eax
 827421f:	8d 50 0c             	lea    0xc(%eax),%edx
 8274222:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8274225:	89 44 24 04          	mov    %eax,0x4(%esp)
 8274229:	89 14 24             	mov    %edx,(%esp)
 827422c:	e8 bd 9f e1 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8274231:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8274234:	83 c4 00             	add    $0x0,%esp
 8274237:	5b                   	pop    %ebx
 8274238:	5e                   	pop    %esi
 8274239:	5f                   	pop    %edi
 827423a:	5d                   	pop    %ebp
 827423b:	c3                   	ret

```

```c
// CSchoolMatchEvent::StartEvent @ 0x8273fec

/* CSchoolMatchEvent::StartEvent(Word_Param) */

void __thiscall CSchoolMatchEvent::StartEvent(CSchoolMatchEvent *this,undefined4 param_2)

{
  bool bVar1;
  GameWorld *pGVar2;
  int iVar3;
  CEnvironment *pCVar4;
  uint uVar5;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_5c [4];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  undefined1 local_38 [4];
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  __normal_iterator local_28 [4];
  uint local_24;
  byte *local_20;
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  local_20 = (byte *)&param_2;
  uVar5 = (uint)(byte)param_2;
  cMyTrace::cMyTrace(local_58,"virtual void CSchoolMatchEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()
            (local_58,
             "CSchoolMatchEvent Start! channel_no(%d), player_count(%d), school_rating(%d), player_rating(%d)"
             ,uVar5,(uint)param_2._1_1_,(uint)param_2._2_1_,(uint)param_2._3_1_);
  pGVar2 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar2);
  if (iVar3 != 9) {
    pGVar2 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar2);
    if (iVar3 != 10) {
      bVar1 = false;
      goto LAB_082740b1;
    }
  }
  bVar1 = true;
LAB_082740b1:
  if (bVar1) {
    pCVar4 = (CEnvironment *)G_CEnvironment();
    uVar5 = CEnvironment::get_channel_no(pCVar4);
    if (uVar5 == *local_20) {
      CLeagueMatch::SetMatchAble(true);
      CLeagueMatch::SetPlayCountPerOneTeam((uint)local_20[1]);
      PvPGlobalEnvironmentVariable::school_match_elo_k2_ = (uint)local_20[2];
      PvPGlobalEnvironmentVariable::school_match_elo_k_ = (uint)local_20[3];
      pCVar4 = (CEnvironment *)G_CEnvironment();
      iVar3 = CEnvironment::get_channel_no(pCVar4);
      if (iVar3 == 0x47) {
        CLeagueMatch::SetBattleMode(2);
      }
      cMyTrace::cMyTrace(local_48,"virtual void CSchoolMatchEvent::StartEvent(Word_Param)",0x30,0);
      cMyTrace::operator()(local_48,"This is School Matching Server!!");
    }
  }
  local_34 = (uint)*local_20;
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (local_38,local_2c,local_30,&local_34);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_5c,local_38);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_5c,local_28);
  if (bVar1) {
    local_24 = (uint)*local_20;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0xc),(int *)&local_24);
  }
  return;
}

```

---

## ~CSchoolMatchEvent

```asm
// === 08273f1a CSchoolMatchEvent::~CSchoolMatchEvent  [0x08273f1a-0x8273f7b] ===
 8273f1a:	55                   	push   %ebp
 8273f1b:	89 e5                	mov    %esp,%ebp
 8273f1d:	56                   	push   %esi
 8273f1e:	53                   	push   %ebx
 8273f1f:	83 ec 10             	sub    $0x10,%esp
 8273f22:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f25:	c7 00 08 d2 bf 08    	movl   $0x8bfd208,(%eax)
 8273f2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f2e:	83 c0 0c             	add    $0xc,%eax
 8273f31:	89 04 24             	mov    %eax,(%esp)
 8273f34:	e8 a1 fe e0 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8273f39:	eb 1b                	jmp    8273f56 <_ZN17CSchoolMatchEventD1Ev+0x3c>
 8273f3b:	89 d3                	mov    %edx,%ebx
 8273f3d:	89 c6                	mov    %eax,%esi
 8273f3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f42:	89 04 24             	mov    %eax,(%esp)
 8273f45:	e8 08 6f e9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8273f4a:	89 f0                	mov    %esi,%eax
 8273f4c:	89 da                	mov    %ebx,%edx
 8273f4e:	89 04 24             	mov    %eax,(%esp)
 8273f51:	e8 fa f7 86 00       	call   8ae3750 <_Unwind_Resume>
 8273f56:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f59:	89 04 24             	mov    %eax,(%esp)
 8273f5c:	e8 f1 6e e9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8273f61:	b8 00 00 00 00       	mov    $0x0,%eax
 8273f66:	84 c0                	test   %al,%al
 8273f68:	74 0b                	je     8273f75 <_ZN17CSchoolMatchEventD1Ev+0x5b>
 8273f6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f6d:	89 04 24             	mov    %eax,(%esp)
 8273f70:	e8 7b 05 4b 00       	call   87244f0 <_ZdlPv>
 8273f75:	83 c4 10             	add    $0x10,%esp
 8273f78:	5b                   	pop    %ebx
 8273f79:	5e                   	pop    %esi
 8273f7a:	5d                   	pop    %ebp
 8273f7b:	c3                   	ret

```

```c
// CSchoolMatchEvent::~CSchoolMatchEvent @ 0x8273f1a

/* WARNING: Removing unreachable block (ram,0x08273f6a) */
/* CSchoolMatchEvent::~CSchoolMatchEvent() */

void __thiscall CSchoolMatchEvent::~CSchoolMatchEvent(CSchoolMatchEvent *this)

{
  *(undefined ***)this = &PTR__CSchoolMatchEvent_08bfd208;
                    /* try { // try from 08273f34 to 08273f38 has its CatchHandler @ 08273f3b */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc));
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CSchoolMatchEvent_08273f7c

```asm
// === 08273f7c CSchoolMatchEvent::~CSchoolMatchEvent  [0x08273f7c-0x8273f99] ===
 8273f7c:	55                   	push   %ebp
 8273f7d:	89 e5                	mov    %esp,%ebp
 8273f7f:	83 ec 18             	sub    $0x18,%esp
 8273f82:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f85:	89 04 24             	mov    %eax,(%esp)
 8273f88:	e8 8d ff ff ff       	call   8273f1a <_ZN17CSchoolMatchEventD1Ev>
 8273f8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8273f90:	89 04 24             	mov    %eax,(%esp)
 8273f93:	e8 58 05 4b 00       	call   87244f0 <_ZdlPv>
 8273f98:	c9                   	leave
 8273f99:	c3                   	ret

```

```c
// CSchoolMatchEvent::~CSchoolMatchEvent @ 0x8273f7c

/* CSchoolMatchEvent::~CSchoolMatchEvent() */

void __thiscall CSchoolMatchEvent::~CSchoolMatchEvent(CSchoolMatchEvent *this)

{
  ~CSchoolMatchEvent(this);
  operator_delete(this);
  return;
}

```

