# CDimensionActivationEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CDimensionActivationEvent

```asm
// === 080eea84 CDimensionActivationEvent::CDimensionActivationEvent  [0x080eea84-0x80eea9f] ===
 80eea84:	55                   	push   %ebp
 80eea85:	89 e5                	mov    %esp,%ebp
 80eea87:	83 ec 18             	sub    $0x18,%esp
 80eea8a:	8b 45 08             	mov    0x8(%ebp),%eax
 80eea8d:	89 04 24             	mov    %eax,(%esp)
 80eea90:	e8 97 c3 01 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 80eea95:	8b 45 08             	mov    0x8(%ebp),%eax
 80eea98:	c7 00 e8 9b b3 08    	movl   $0x8b39be8,(%eax)
 80eea9e:	c9                   	leave
 80eea9f:	c3                   	ret

```

```c
// CDimensionActivationEvent::CDimensionActivationEvent @ 0x80eea84

/* CDimensionActivationEvent::CDimensionActivationEvent() */

void __thiscall
CDimensionActivationEvent::CDimensionActivationEvent(CDimensionActivationEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CDimensionActivationEvent_08b39be8;
  return;
}

```

---

## EndEvent

```asm
// === 080eeb64 CDimensionActivationEvent::EndEvent  [0x080eeb64-0x80eebbf] ===
 80eeb64:	55                   	push   %ebp
 80eeb65:	89 e5                	mov    %esp,%ebp
 80eeb67:	83 ec 28             	sub    $0x28,%esp
 80eeb6a:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeb6d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80eeb74:	00 
 80eeb75:	89 04 24             	mov    %eax,(%esp)
 80eeb78:	e8 65 99 fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80eeb7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80eeb84:	00 
 80eeb85:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 80eeb8c:	00 
 80eeb8d:	c7 44 24 04 60 9b b3 	movl   $0x8b39b60,0x4(%esp)
 80eeb94:	08 
 80eeb95:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80eeb98:	89 04 24             	mov    %eax,(%esp)
 80eeb9b:	e8 78 0b 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80eeba0:	c7 44 24 04 48 8e b3 	movl   $0x8b38e48,0x4(%esp)
 80eeba7:	08 
 80eeba8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80eebab:	89 04 24             	mov    %eax,(%esp)
 80eebae:	e8 d5 0b 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80eebb3:	8b 45 08             	mov    0x8(%ebp),%eax
 80eebb6:	89 04 24             	mov    %eax,(%esp)
 80eebb9:	e8 9a 00 00 00       	call   80eec58 <_ZN25CDimensionActivationEvent24reset_dungeon_play_countEv>
 80eebbe:	c9                   	leave
 80eebbf:	c3                   	ret

```

```c
// CDimensionActivationEvent::EndEvent @ 0x80eeb64

/* CDimensionActivationEvent::EndEvent() */

void __thiscall CDimensionActivationEvent::EndEvent(CDimensionActivationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void CDimensionActivationEvent::EndEvent()",0x1e,0);
  cMyTrace::operator()(local_1c,"CDimensionActivationEvent Event End!");
  reset_dungeon_play_count();
  return;
}

```

---

## StartEvent

```asm
// === 080eeaee CDimensionActivationEvent::StartEvent  [0x080eeaee-0x80eeb49] ===
 80eeaee:	55                   	push   %ebp
 80eeaef:	89 e5                	mov    %esp,%ebp
 80eeaf1:	83 ec 28             	sub    $0x28,%esp
 80eeaf4:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeaf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80eeafe:	00 
 80eeaff:	89 04 24             	mov    %eax,(%esp)
 80eeb02:	e8 db 99 fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80eeb07:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80eeb0e:	00 
 80eeb0f:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 80eeb16:	00 
 80eeb17:	c7 44 24 04 a0 9b b3 	movl   $0x8b39ba0,0x4(%esp)
 80eeb1e:	08 
 80eeb1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80eeb22:	89 04 24             	mov    %eax,(%esp)
 80eeb25:	e8 ee 0b 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80eeb2a:	c7 44 24 04 20 8e b3 	movl   $0x8b38e20,0x4(%esp)
 80eeb31:	08 
 80eeb32:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80eeb35:	89 04 24             	mov    %eax,(%esp)
 80eeb38:	e8 4b 0c 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80eeb3d:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeb40:	89 04 24             	mov    %eax,(%esp)
 80eeb43:	e8 78 00 00 00       	call   80eebc0 <_ZN25CDimensionActivationEvent22set_dungeon_play_countEv>
 80eeb48:	c9                   	leave
 80eeb49:	c3                   	ret

```

```c
// CDimensionActivationEvent::StartEvent @ 0x80eeaee

/* CDimensionActivationEvent::StartEvent() */

void __thiscall CDimensionActivationEvent::StartEvent(CDimensionActivationEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void CDimensionActivationEvent::StartEvent()",0x12,0);
  cMyTrace::operator()(local_1c,"CDimensionActivationEvent Event Start!");
  set_dungeon_play_count();
  return;
}

```

---

## StartEvent_080eeb4a

```asm
// === 080eeb4a CDimensionActivationEvent::StartEvent  [0x080eeb4a-0x80eeb63] ===
 80eeb4a:	55                   	push   %ebp
 80eeb4b:	89 e5                	mov    %esp,%ebp
 80eeb4d:	83 ec 18             	sub    $0x18,%esp
 80eeb50:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeb53:	8b 00                	mov    (%eax),%eax
 80eeb55:	83 c0 08             	add    $0x8,%eax
 80eeb58:	8b 10                	mov    (%eax),%edx
 80eeb5a:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeb5d:	89 04 24             	mov    %eax,(%esp)
 80eeb60:	ff d2                	call   *%edx
 80eeb62:	c9                   	leave
 80eeb63:	c3                   	ret

```

```c
// CDimensionActivationEvent::StartEvent @ 0x80eeb4a

/* CDimensionActivationEvent::StartEvent(Word_Param) */

void CDimensionActivationEvent::StartEvent(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

```

---

## checkFreeRevivalCondition

```asm
// === 080eeca4 CDimensionActivationEvent::checkFreeRevivalCondition  [0x080eeca4-0x80eed24] ===
 80eeca4:	55                   	push   %ebp
 80eeca5:	89 e5                	mov    %esp,%ebp
 80eeca7:	83 ec 28             	sub    $0x28,%esp
 80eecaa:	e8 ec d4 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80eecaf:	8d 88 1c 4b 00 00    	lea    0x4b1c(%eax),%ecx
 80eecb5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80eecb8:	8d 55 0c             	lea    0xc(%ebp),%edx
 80eecbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 80eecbf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80eecc3:	89 04 24             	mov    %eax,(%esp)
 80eecc6:	e8 e9 00 00 00       	call   80eedb4 <_ZNSt3mapIi17DimensionCoinInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 80eeccb:	83 ec 04             	sub    $0x4,%esp
 80eecce:	e8 c8 d4 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80eecd3:	8d 90 1c 4b 00 00    	lea    0x4b1c(%eax),%edx
 80eecd9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80eecdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 80eece0:	89 04 24             	mov    %eax,(%esp)
 80eece3:	e8 f8 00 00 00       	call   80eede0 <_ZNSt3mapIi17DimensionCoinInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 80eece8:	83 ec 04             	sub    $0x4,%esp
 80eeceb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80eecee:	89 44 24 04          	mov    %eax,0x4(%esp)
 80eecf2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80eecf5:	89 04 24             	mov    %eax,(%esp)
 80eecf8:	e8 09 01 00 00       	call   80eee06 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17DimensionCoinInfoEEneERKS4_>
 80eecfd:	84 c0                	test   %al,%al
 80eecff:	74 1d                	je     80eed1e <_ZN25CDimensionActivationEvent25checkFreeRevivalConditionEi+0x7a>
 80eed01:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80eed04:	89 04 24             	mov    %eax,(%esp)
 80eed07:	e8 0e 01 00 00       	call   80eee1a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17DimensionCoinInfoEEptEv>
 80eed0c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 80eed10:	83 f0 01             	xor    $0x1,%eax
 80eed13:	84 c0                	test   %al,%al
 80eed15:	74 07                	je     80eed1e <_ZN25CDimensionActivationEvent25checkFreeRevivalConditionEi+0x7a>
 80eed17:	b8 01 00 00 00       	mov    $0x1,%eax
 80eed1c:	eb 05                	jmp    80eed23 <_ZN25CDimensionActivationEvent25checkFreeRevivalConditionEi+0x7f>
 80eed1e:	b8 00 00 00 00       	mov    $0x0,%eax
 80eed23:	c9                   	leave
 80eed24:	c3                   	ret

```

```c
// CDimensionActivationEvent::checkFreeRevivalCondition @ 0x80eeca4

/* CDimensionActivationEvent::checkFreeRevivalCondition(int) */

undefined4 CDimensionActivationEvent::checkFreeRevivalCondition(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,DimensionCoinInfo>> local_14 [4];
  map<int,DimensionCoinInfo,std::less<int>,std::allocator<std::pair<int_const,DimensionCoinInfo>>>
  local_10 [12];
  
  G_CDataManager();
  std::
  map<int,DimensionCoinInfo,std::less<int>,std::allocator<std::pair<int_const,DimensionCoinInfo>>>::
  find((int *)local_14);
  G_CDataManager();
  std::
  map<int,DimensionCoinInfo,std::less<int>,std::allocator<std::pair<int_const,DimensionCoinInfo>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,DimensionCoinInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if ((cVar1 != '\0') &&
     (iVar2 = std::_Rb_tree_iterator<std::pair<int_const,DimensionCoinInfo>>::operator->(local_14),
     *(char *)(iVar2 + 8) != '\x01')) {
    return 1;
  }
  return 0;
}

```

---

## reset_dungeon_play_count

```asm
// === 080eec58 CDimensionActivationEvent::reset_dungeon_play_count  [0x080eec58-0x80eeca3] ===
 80eec58:	55                   	push   %ebp
 80eec59:	89 e5                	mov    %esp,%ebp
 80eec5b:	83 ec 28             	sub    $0x28,%esp
 80eec5e:	e8 38 d5 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80eec63:	89 04 24             	mov    %eax,(%esp)
 80eec66:	e8 35 72 27 00       	call   8365ea0 <_ZN12CDataManager20reset_dimensionInoutEv>
 80eec6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80eec72:	00 
 80eec73:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 80eec7a:	00 
 80eec7b:	c7 44 24 04 e0 9a b3 	movl   $0x8b39ae0,0x4(%esp)
 80eec82:	08 
 80eec83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80eec86:	89 04 24             	mov    %eax,(%esp)
 80eec89:	e8 8a 0a 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80eec8e:	c7 44 24 04 a0 8e b3 	movl   $0x8b38ea0,0x4(%esp)
 80eec95:	08 
 80eec96:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80eec99:	89 04 24             	mov    %eax,(%esp)
 80eec9c:	e8 e7 0a 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80eeca1:	c9                   	leave
 80eeca2:	c3                   	ret
 80eeca3:	90                   	nop

```

```c
// CDimensionActivationEvent::reset_dungeon_play_count @ 0x80eec58

/* CDimensionActivationEvent::reset_dungeon_play_count() */

void CDimensionActivationEvent::reset_dungeon_play_count(void)

{
  CDataManager *this;
  cMyTrace local_1c [24];
  
  this = (CDataManager *)G_CDataManager();
  CDataManager::reset_dimensionInout(this);
  cMyTrace::cMyTrace(local_1c,"void CDimensionActivationEvent::reset_dungeon_play_count()",0x34,0);
  cMyTrace::operator()(local_1c,"CDimensionActivationEvent reset_dungeon_play_count");
  return;
}

```

---

## set_dungeon_play_count

```asm
// === 080eebc0 CDimensionActivationEvent::set_dungeon_play_count  [0x080eebc0-0x80eec57] ===
 80eebc0:	55                   	push   %ebp
 80eebc1:	89 e5                	mov    %esp,%ebp
 80eebc3:	53                   	push   %ebx
 80eebc4:	83 ec 34             	sub    $0x34,%esp
 80eebc7:	e8 cf d5 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80eebcc:	8b 80 18 4b 00 00    	mov    0x4b18(%eax),%eax
 80eebd2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80eebd5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80eebdc:	00 
 80eebdd:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 80eebe4:	00 
 80eebe5:	c7 44 24 04 20 9b b3 	movl   $0x8b39b20,0x4(%esp)
 80eebec:	08 
 80eebed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80eebf0:	89 04 24             	mov    %eax,(%esp)
 80eebf3:	e8 20 0b 46 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80eebf8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80eebfb:	89 44 24 08          	mov    %eax,0x8(%esp)
 80eebff:	c7 44 24 04 70 8e b3 	movl   $0x8b38e70,0x4(%esp)
 80eec06:	08 
 80eec07:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80eec0a:	89 04 24             	mov    %eax,(%esp)
 80eec0d:	e8 76 0b 46 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80eec12:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80eec16:	7e 38                	jle    80eec50 <_ZN25CDimensionActivationEvent22set_dungeon_play_countEv+0x90>
 80eec18:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80eec1f:	eb 22                	jmp    80eec43 <_ZN25CDimensionActivationEvent22set_dungeon_play_countEv+0x83>
 80eec21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80eec24:	0f be d8             	movsbl %al,%ebx
 80eec27:	e8 6f d5 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80eec2c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80eec30:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80eec33:	89 54 24 04          	mov    %edx,0x4(%esp)
 80eec37:	89 04 24             	mov    %eax,(%esp)
 80eec3a:	e8 43 01 00 00       	call   80eed82 <_ZN12CDataManager18set_dimensionInoutEic>
 80eec3f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80eec43:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80eec47:	0f 9e c0             	setle  %al
 80eec4a:	84 c0                	test   %al,%al
 80eec4c:	75 d3                	jne    80eec21 <_ZN25CDimensionActivationEvent22set_dungeon_play_countEv+0x61>
 80eec4e:	eb 01                	jmp    80eec51 <_ZN25CDimensionActivationEvent22set_dungeon_play_countEv+0x91>
 80eec50:	90                   	nop
 80eec51:	83 c4 34             	add    $0x34,%esp
 80eec54:	5b                   	pop    %ebx
 80eec55:	5d                   	pop    %ebp
 80eec56:	c3                   	ret
 80eec57:	90                   	nop

```

```c
// CDimensionActivationEvent::set_dungeon_play_count @ 0x80eebc0

/* CDimensionActivationEvent::set_dungeon_play_count() */

void CDimensionActivationEvent::set_dungeon_play_count(void)

{
  char cVar1;
  int iVar2;
  CDataManager *this;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_14 = *(int *)(iVar2 + 0x4b18);
  cMyTrace::cMyTrace(local_24,"void CDimensionActivationEvent::set_dungeon_play_count()",0x27,0);
  cMyTrace::operator()(local_24,"CDimensionActivationEvent day_play_count : %d",local_14);
  if (0 < local_14) {
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      cVar1 = (char)local_14;
      this = (CDataManager *)G_CDataManager();
      CDataManager::set_dimensionInout(this,local_10,cVar1);
    }
  }
  return;
}

```

---

## ~CDimensionActivationEvent

```asm
// === 080eeaa0 CDimensionActivationEvent::~CDimensionActivationEvent  [0x080eeaa0-0x80eeacf] ===
 80eeaa0:	55                   	push   %ebp
 80eeaa1:	89 e5                	mov    %esp,%ebp
 80eeaa3:	83 ec 18             	sub    $0x18,%esp
 80eeaa6:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeaa9:	c7 00 e8 9b b3 08    	movl   $0x8b39be8,(%eax)
 80eeaaf:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeab2:	89 04 24             	mov    %eax,(%esp)
 80eeab5:	e8 98 c3 01 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80eeaba:	b8 00 00 00 00       	mov    $0x0,%eax
 80eeabf:	84 c0                	test   %al,%al
 80eeac1:	74 0b                	je     80eeace <_ZN25CDimensionActivationEventD1Ev+0x2e>
 80eeac3:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeac6:	89 04 24             	mov    %eax,(%esp)
 80eeac9:	e8 22 5a 63 00       	call   87244f0 <_ZdlPv>
 80eeace:	c9                   	leave
 80eeacf:	c3                   	ret

```

```c
// CDimensionActivationEvent::~CDimensionActivationEvent @ 0x80eeaa0

/* WARNING: Removing unreachable block (ram,0x080eeac3) */
/* CDimensionActivationEvent::~CDimensionActivationEvent() */

void __thiscall
CDimensionActivationEvent::~CDimensionActivationEvent(CDimensionActivationEvent *this)

{
  *(undefined ***)this = &PTR__CDimensionActivationEvent_08b39be8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CDimensionActivationEvent_080eead0

```asm
// === 080eead0 CDimensionActivationEvent::~CDimensionActivationEvent  [0x080eead0-0x80eeaed] ===
 80eead0:	55                   	push   %ebp
 80eead1:	89 e5                	mov    %esp,%ebp
 80eead3:	83 ec 18             	sub    $0x18,%esp
 80eead6:	8b 45 08             	mov    0x8(%ebp),%eax
 80eead9:	89 04 24             	mov    %eax,(%esp)
 80eeadc:	e8 bf ff ff ff       	call   80eeaa0 <_ZN25CDimensionActivationEventD1Ev>
 80eeae1:	8b 45 08             	mov    0x8(%ebp),%eax
 80eeae4:	89 04 24             	mov    %eax,(%esp)
 80eeae7:	e8 04 5a 63 00       	call   87244f0 <_ZdlPv>
 80eeaec:	c9                   	leave
 80eeaed:	c3                   	ret

```

```c
// CDimensionActivationEvent::~CDimensionActivationEvent @ 0x80eead0

/* CDimensionActivationEvent::~CDimensionActivationEvent() */

void __thiscall
CDimensionActivationEvent::~CDimensionActivationEvent(CDimensionActivationEvent *this)

{
  ~CDimensionActivationEvent(this);
  operator_delete(this);
  return;
}

```

