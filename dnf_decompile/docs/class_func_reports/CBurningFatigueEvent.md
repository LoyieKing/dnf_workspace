# CBurningFatigueEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CBurningFatigueEvent

```asm
// === 08109fa4 CBurningFatigueEvent::CBurningFatigueEvent  [0x08109fa4-0x8109ff3] ===
 8109fa4:	55                   	push   %ebp
 8109fa5:	89 e5                	mov    %esp,%ebp
 8109fa7:	56                   	push   %esi
 8109fa8:	53                   	push   %ebx
 8109fa9:	83 ec 10             	sub    $0x10,%esp
 8109fac:	8b 45 08             	mov    0x8(%ebp),%eax
 8109faf:	89 04 24             	mov    %eax,(%esp)
 8109fb2:	e8 75 0e 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8109fb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8109fba:	c7 00 e8 7c b4 08    	movl   $0x8b47ce8,(%eax)
 8109fc0:	e8 d6 21 fc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8109fc5:	8d 90 f4 04 00 00    	lea    0x4f4(%eax),%edx
 8109fcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8109fce:	89 50 0c             	mov    %edx,0xc(%eax)
 8109fd1:	83 c4 10             	add    $0x10,%esp
 8109fd4:	5b                   	pop    %ebx
 8109fd5:	5e                   	pop    %esi
 8109fd6:	5d                   	pop    %ebp
 8109fd7:	c3                   	ret
 8109fd8:	89 d3                	mov    %edx,%ebx
 8109fda:	89 c6                	mov    %eax,%esi
 8109fdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8109fdf:	89 04 24             	mov    %eax,(%esp)
 8109fe2:	e8 6b 0e 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8109fe7:	89 f0                	mov    %esi,%eax
 8109fe9:	89 da                	mov    %ebx,%edx
 8109feb:	89 04 24             	mov    %eax,(%esp)
 8109fee:	e8 5d 97 9d 00       	call   8ae3750 <_Unwind_Resume>
 8109ff3:	90                   	nop

```

```c
// CBurningFatigueEvent::CBurningFatigueEvent @ 0x8109fa4

/* CBurningFatigueEvent::CBurningFatigueEvent() */

void __thiscall CBurningFatigueEvent::CBurningFatigueEvent(CBurningFatigueEvent *this)

{
  int iVar1;
  
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CBurningFatigueEvent_08b47ce8;
                    /* try { // try from 08109fc0 to 08109fc4 has its CatchHandler @ 08109fd8 */
  iVar1 = G_CDataManager();
  *(int *)(this + 0xc) = iVar1 + 0x4f4;
  return;
}

```

---

## EndEvent

```asm
// === 0810a09a CBurningFatigueEvent::EndEvent  [0x0810a09a-0x810a0eb] ===
 810a09a:	55                   	push   %ebp
 810a09b:	89 e5                	mov    %esp,%ebp
 810a09d:	83 ec 28             	sub    $0x28,%esp
 810a0a0:	8b 45 08             	mov    0x8(%ebp),%eax
 810a0a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810a0aa:	00 
 810a0ab:	89 04 24             	mov    %eax,(%esp)
 810a0ae:	e8 2f e4 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a0b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a0ba:	00 
 810a0bb:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 810a0c2:	00 
 810a0c3:	c7 44 24 04 60 7c b4 	movl   $0x8b47c60,0x4(%esp)
 810a0ca:	08 
 810a0cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a0ce:	89 04 24             	mov    %eax,(%esp)
 810a0d1:	e8 42 56 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a0d6:	c7 44 24 04 3c 70 b4 	movl   $0x8b4703c,0x4(%esp)
 810a0dd:	08 
 810a0de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a0e1:	89 04 24             	mov    %eax,(%esp)
 810a0e4:	e8 9f 56 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a0e9:	c9                   	leave
 810a0ea:	c3                   	ret
 810a0eb:	90                   	nop

```

```c
// CBurningFatigueEvent::EndEvent @ 0x810a09a

/* CBurningFatigueEvent::EndEvent() */

void __thiscall CBurningFatigueEvent::EndEvent(CBurningFatigueEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void CBurningFatigueEvent::EndEvent()",0x21,0);
  cMyTrace::operator()(local_1c,"Burning Fatigue Event End");
  return;
}

```

---

## StartEvent

```asm
// === 0810a042 CBurningFatigueEvent::StartEvent  [0x0810a042-0x810a047] ===
 810a042:	55                   	push   %ebp
 810a043:	89 e5                	mov    %esp,%ebp
 810a045:	5d                   	pop    %ebp
 810a046:	c3                   	ret
 810a047:	90                   	nop

```

```c
// CBurningFatigueEvent::StartEvent @ 0x810a042

/* CBurningFatigueEvent::StartEvent() */

void CBurningFatigueEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_0810a048

```asm
// === 0810a048 CBurningFatigueEvent::StartEvent  [0x0810a048-0x810a099] ===
 810a048:	55                   	push   %ebp
 810a049:	89 e5                	mov    %esp,%ebp
 810a04b:	83 ec 28             	sub    $0x28,%esp
 810a04e:	8b 45 08             	mov    0x8(%ebp),%eax
 810a051:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a058:	00 
 810a059:	89 04 24             	mov    %eax,(%esp)
 810a05c:	e8 81 e4 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a061:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a068:	00 
 810a069:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 810a070:	00 
 810a071:	c7 44 24 04 a0 7c b4 	movl   $0x8b47ca0,0x4(%esp)
 810a078:	08 
 810a079:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a07c:	89 04 24             	mov    %eax,(%esp)
 810a07f:	e8 94 56 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a084:	c7 44 24 04 20 70 b4 	movl   $0x8b47020,0x4(%esp)
 810a08b:	08 
 810a08c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a08f:	89 04 24             	mov    %eax,(%esp)
 810a092:	e8 f1 56 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a097:	c9                   	leave
 810a098:	c3                   	ret
 810a099:	90                   	nop

```

```c
// CBurningFatigueEvent::StartEvent @ 0x810a048

/* CBurningFatigueEvent::StartEvent(Word_Param) */

void CBurningFatigueEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CBurningFatigueEvent::StartEvent(Word_Param)",0x1b,0);
  cMyTrace::operator()(local_1c,"Burning Fatigue Event Start");
  return;
}

```

---

## getBonusExpRate

```asm
// === 0810a0ec CBurningFatigueEvent::getBonusExpRate  [0x0810a0ec-0x810a165] ===
 810a0ec:	55                   	push   %ebp
 810a0ed:	89 e5                	mov    %esp,%ebp
 810a0ef:	83 ec 38             	sub    $0x38,%esp
 810a0f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 810a0f5:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 810a0f9:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 810a100:	eb 44                	jmp    810a146 <_ZNK20CBurningFatigueEvent15getBonusExpRateEt+0x5a>
 810a102:	8b 45 08             	mov    0x8(%ebp),%eax
 810a105:	8b 40 0c             	mov    0xc(%eax),%eax
 810a108:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810a10b:	89 54 24 04          	mov    %edx,0x4(%esp)
 810a10f:	89 04 24             	mov    %eax,(%esp)
 810a112:	e8 8d 01 00 00       	call   810a2a4 <_ZNSt6vectorI23stBurningFatigueParam_tSaIS0_EEixEj>
 810a117:	0f b7 00             	movzwl (%eax),%eax
 810a11a:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 810a11e:	0f 97 c0             	seta   %al
 810a121:	84 c0                	test   %al,%al
 810a123:	74 1d                	je     810a142 <_ZNK20CBurningFatigueEvent15getBonusExpRateEt+0x56>
 810a125:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810a128:	8d 50 ff             	lea    -0x1(%eax),%edx
 810a12b:	8b 45 08             	mov    0x8(%ebp),%eax
 810a12e:	8b 40 0c             	mov    0xc(%eax),%eax
 810a131:	89 54 24 04          	mov    %edx,0x4(%esp)
 810a135:	89 04 24             	mov    %eax,(%esp)
 810a138:	e8 67 01 00 00       	call   810a2a4 <_ZNSt6vectorI23stBurningFatigueParam_tSaIS0_EEixEj>
 810a13d:	8b 40 04             	mov    0x4(%eax),%eax
 810a140:	eb 21                	jmp    810a163 <_ZNK20CBurningFatigueEvent15getBonusExpRateEt+0x77>
 810a142:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810a146:	8b 45 08             	mov    0x8(%ebp),%eax
 810a149:	8b 40 0c             	mov    0xc(%eax),%eax
 810a14c:	89 04 24             	mov    %eax,(%esp)
 810a14f:	e8 2e 01 00 00       	call   810a282 <_ZNKSt6vectorI23stBurningFatigueParam_tSaIS0_EE4sizeEv>
 810a154:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 810a157:	0f 97 c0             	seta   %al
 810a15a:	84 c0                	test   %al,%al
 810a15c:	75 a4                	jne    810a102 <_ZNK20CBurningFatigueEvent15getBonusExpRateEt+0x16>
 810a15e:	b8 00 00 00 00       	mov    $0x0,%eax
 810a163:	c9                   	leave
 810a164:	c3                   	ret
 810a165:	90                   	nop

```

```c
// CBurningFatigueEvent::getBonusExpRate @ 0x810a0ec

/* CBurningFatigueEvent::getBonusExpRate(unsigned short) const */

undefined4 __thiscall
CBurningFatigueEvent::getBonusExpRate(CBurningFatigueEvent *this,ushort param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 1;
  while( true ) {
    uVar3 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::size
                      (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                        (this + 0xc));
    if (uVar3 <= local_10) {
      return 0;
    }
    puVar1 = (ushort *)
             std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::
             operator[](*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **
                         )(this + 0xc),local_10);
    if (param_1 < *puVar1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::operator[]
                    (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                      (this + 0xc),local_10 - 1);
  return *(undefined4 *)(iVar2 + 4);
}

```

---

## getRefillFatigue

```asm
// === 0810a166 CBurningFatigueEvent::getRefillFatigue  [0x0810a166-0x810a224] ===
 810a166:	55                   	push   %ebp
 810a167:	89 e5                	mov    %esp,%ebp
 810a169:	53                   	push   %ebx
 810a16a:	83 ec 34             	sub    $0x34,%esp
 810a16d:	8b 55 0c             	mov    0xc(%ebp),%edx
 810a170:	8b 45 10             	mov    0x10(%ebp),%eax
 810a173:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 810a177:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 810a17b:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 810a182:	eb 7a                	jmp    810a1fe <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0x98>
 810a184:	8b 45 08             	mov    0x8(%ebp),%eax
 810a187:	8b 40 0c             	mov    0xc(%eax),%eax
 810a18a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810a18d:	89 54 24 04          	mov    %edx,0x4(%esp)
 810a191:	89 04 24             	mov    %eax,(%esp)
 810a194:	e8 0b 01 00 00       	call   810a2a4 <_ZNSt6vectorI23stBurningFatigueParam_tSaIS0_EEixEj>
 810a199:	0f b7 00             	movzwl (%eax),%eax
 810a19c:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 810a1a0:	77 34                	ja     810a1d6 <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0x70>
 810a1a2:	8b 45 08             	mov    0x8(%ebp),%eax
 810a1a5:	8b 40 0c             	mov    0xc(%eax),%eax
 810a1a8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810a1ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 810a1af:	89 04 24             	mov    %eax,(%esp)
 810a1b2:	e8 ed 00 00 00       	call   810a2a4 <_ZNSt6vectorI23stBurningFatigueParam_tSaIS0_EEixEj>
 810a1b7:	0f b7 00             	movzwl (%eax),%eax
 810a1ba:	0f b7 c0             	movzwl %ax,%eax
 810a1bd:	0f b7 4d e4          	movzwl -0x1c(%ebp),%ecx
 810a1c1:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 810a1c5:	89 cb                	mov    %ecx,%ebx
 810a1c7:	29 d3                	sub    %edx,%ebx
 810a1c9:	89 da                	mov    %ebx,%edx
 810a1cb:	39 d0                	cmp    %edx,%eax
 810a1cd:	7e 07                	jle    810a1d6 <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0x70>
 810a1cf:	b8 01 00 00 00       	mov    $0x1,%eax
 810a1d4:	eb 05                	jmp    810a1db <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0x75>
 810a1d6:	b8 00 00 00 00       	mov    $0x0,%eax
 810a1db:	84 c0                	test   %al,%al
 810a1dd:	74 1b                	je     810a1fa <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0x94>
 810a1df:	8b 45 08             	mov    0x8(%ebp),%eax
 810a1e2:	8b 40 0c             	mov    0xc(%eax),%eax
 810a1e5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810a1e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 810a1ec:	89 04 24             	mov    %eax,(%esp)
 810a1ef:	e8 b0 00 00 00       	call   810a2a4 <_ZNSt6vectorI23stBurningFatigueParam_tSaIS0_EEixEj>
 810a1f4:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 810a1f8:	eb 25                	jmp    810a21f <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0xb9>
 810a1fa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810a1fe:	8b 45 08             	mov    0x8(%ebp),%eax
 810a201:	8b 40 0c             	mov    0xc(%eax),%eax
 810a204:	89 04 24             	mov    %eax,(%esp)
 810a207:	e8 76 00 00 00       	call   810a282 <_ZNKSt6vectorI23stBurningFatigueParam_tSaIS0_EE4sizeEv>
 810a20c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 810a20f:	0f 97 c0             	seta   %al
 810a212:	84 c0                	test   %al,%al
 810a214:	0f 85 6a ff ff ff    	jne    810a184 <_ZNK20CBurningFatigueEvent16getRefillFatigueEtt+0x1e>
 810a21a:	b8 00 00 00 00       	mov    $0x0,%eax
 810a21f:	83 c4 34             	add    $0x34,%esp
 810a222:	5b                   	pop    %ebx
 810a223:	5d                   	pop    %ebp
 810a224:	c3                   	ret

```

```c
// CBurningFatigueEvent::getRefillFatigue @ 0x810a166

/* CBurningFatigueEvent::getRefillFatigue(unsigned short, unsigned short) const */

undefined2 __thiscall
CBurningFatigueEvent::getRefillFatigue(CBurningFatigueEvent *this,ushort param_1,ushort param_2)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  local_10 = 1;
  while( true ) {
    uVar4 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::size
                      (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                        (this + 0xc));
    if (uVar4 <= local_10) {
      return 0;
    }
    puVar2 = (ushort *)
             std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::
             operator[](*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **
                         )(this + 0xc),local_10);
    if ((param_1 < *puVar2) ||
       (puVar2 = (ushort *)
                 std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::
                 operator[](*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>
                              **)(this + 0xc),local_10),
       (int)(uint)*puVar2 <= (int)((uint)param_1 - (uint)param_2))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::operator[]
                    (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                      (this + 0xc),local_10);
  return *(undefined2 *)(iVar3 + 8);
}

```

---

## ~CBurningFatigueEvent

```asm
// === 08109ff4 CBurningFatigueEvent::~CBurningFatigueEvent  [0x08109ff4-0x810a023] ===
 8109ff4:	55                   	push   %ebp
 8109ff5:	89 e5                	mov    %esp,%ebp
 8109ff7:	83 ec 18             	sub    $0x18,%esp
 8109ffa:	8b 45 08             	mov    0x8(%ebp),%eax
 8109ffd:	c7 00 e8 7c b4 08    	movl   $0x8b47ce8,(%eax)
 810a003:	8b 45 08             	mov    0x8(%ebp),%eax
 810a006:	89 04 24             	mov    %eax,(%esp)
 810a009:	e8 44 0e 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810a00e:	b8 00 00 00 00       	mov    $0x0,%eax
 810a013:	84 c0                	test   %al,%al
 810a015:	74 0b                	je     810a022 <_ZN20CBurningFatigueEventD1Ev+0x2e>
 810a017:	8b 45 08             	mov    0x8(%ebp),%eax
 810a01a:	89 04 24             	mov    %eax,(%esp)
 810a01d:	e8 ce a4 61 00       	call   87244f0 <_ZdlPv>
 810a022:	c9                   	leave
 810a023:	c3                   	ret

```

```c
// CBurningFatigueEvent::~CBurningFatigueEvent @ 0x8109ff4

/* WARNING: Removing unreachable block (ram,0x0810a017) */
/* CBurningFatigueEvent::~CBurningFatigueEvent() */

void __thiscall CBurningFatigueEvent::~CBurningFatigueEvent(CBurningFatigueEvent *this)

{
  *(undefined ***)this = &PTR__CBurningFatigueEvent_08b47ce8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CBurningFatigueEvent_0810a024

```asm
// === 0810a024 CBurningFatigueEvent::~CBurningFatigueEvent  [0x0810a024-0x810a041] ===
 810a024:	55                   	push   %ebp
 810a025:	89 e5                	mov    %esp,%ebp
 810a027:	83 ec 18             	sub    $0x18,%esp
 810a02a:	8b 45 08             	mov    0x8(%ebp),%eax
 810a02d:	89 04 24             	mov    %eax,(%esp)
 810a030:	e8 bf ff ff ff       	call   8109ff4 <_ZN20CBurningFatigueEventD1Ev>
 810a035:	8b 45 08             	mov    0x8(%ebp),%eax
 810a038:	89 04 24             	mov    %eax,(%esp)
 810a03b:	e8 b0 a4 61 00       	call   87244f0 <_ZdlPv>
 810a040:	c9                   	leave
 810a041:	c3                   	ret

```

```c
// CBurningFatigueEvent::~CBurningFatigueEvent @ 0x810a024

/* CBurningFatigueEvent::~CBurningFatigueEvent() */

void __thiscall CBurningFatigueEvent::~CBurningFatigueEvent(CBurningFatigueEvent *this)

{
  ~CBurningFatigueEvent(this);
  operator_delete(this);
  return;
}

```

