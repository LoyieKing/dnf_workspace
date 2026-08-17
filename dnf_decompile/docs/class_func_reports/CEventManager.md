# CEventManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## AddEvent

```asm
// === 08115982 CEventManager::AddEvent  [0x08115982-0x8115997] ===
 8115982:	55                   	push   %ebp
 8115983:	89 e5                	mov    %esp,%ebp
 8115985:	8b 55 0c             	mov    0xc(%ebp),%edx
 8115988:	8b 45 08             	mov    0x8(%ebp),%eax
 811598b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 811598e:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 8115991:	b8 01 00 00 00       	mov    $0x1,%eax
 8115996:	5d                   	pop    %ebp
 8115997:	c3                   	ret

```

```c
// CEventManager::AddEvent @ 0x8115982

/* CEventManager::AddEvent(int, CEventBase*) */

undefined4 __thiscall CEventManager::AddEvent(CEventManager *this,int param_1,CEventBase *param_2)

{
  *(CEventBase **)(this + param_1 * 4) = param_2;
  return 1;
}

```

---

## BroadcastEventInfo

```asm
// === 08116108 CEventManager::BroadcastEventInfo  [0x08116108-0x8116211] ===
 8116108:	55                   	push   %ebp
 8116109:	89 e5                	mov    %esp,%ebp
 811610b:	56                   	push   %esi
 811610c:	53                   	push   %ebx
 811610d:	83 ec 30             	sub    $0x30,%esp
 8116110:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8116113:	89 04 24             	mov    %eax,(%esp)
 8116116:	e8 31 7c 47 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 811611b:	e8 87 42 fc ff       	call   80da3a7 <_Z11G_GameWorldv>
 8116120:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 8116126:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8116129:	89 54 24 04          	mov    %edx,0x4(%esp)
 811612d:	89 04 24             	mov    %eax,(%esp)
 8116130:	e8 71 17 fe ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 8116135:	83 ec 04             	sub    $0x4,%esp
 8116138:	eb 6e                	jmp    81161a8 <_ZN13CEventManager18BroadcastEventInfoEv+0xa0>
 811613a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811613d:	89 04 24             	mov    %eax,(%esp)
 8116140:	e8 ff 17 fe ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 8116145:	8b 40 04             	mov    0x4(%eax),%eax
 8116148:	89 45 f4             	mov    %eax,-0xc(%ebp)
 811614b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 811614e:	89 04 24             	mov    %eax,(%esp)
 8116151:	e8 36 42 fc ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8116156:	83 f8 02             	cmp    $0x2,%eax
 8116159:	0f 9f c0             	setg   %al
 811615c:	84 c0                	test   %al,%al
 811615e:	74 2b                	je     811618b <_ZN13CEventManager18BroadcastEventInfoEv+0x83>
 8116160:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8116163:	89 44 24 08          	mov    %eax,0x8(%esp)
 8116167:	8d 45 e0             	lea    -0x20(%ebp),%eax
 811616a:	89 44 24 04          	mov    %eax,0x4(%esp)
 811616e:	8b 45 08             	mov    0x8(%ebp),%eax
 8116171:	89 04 24             	mov    %eax,(%esp)
 8116174:	e8 69 fc ff ff       	call   8115de2 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser>
 8116179:	8d 45 e0             	lea    -0x20(%ebp),%eax
 811617c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116180:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8116183:	89 04 24             	mov    %eax,(%esp)
 8116186:	e8 2f 24 53 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 811618b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 811618e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8116195:	00 
 8116196:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8116199:	89 54 24 04          	mov    %edx,0x4(%esp)
 811619d:	89 04 24             	mov    %eax,(%esp)
 81161a0:	e8 61 17 fe ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 81161a5:	83 ec 04             	sub    $0x4,%esp
 81161a8:	e8 fa 41 fc ff       	call   80da3a7 <_Z11G_GameWorldv>
 81161ad:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 81161b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81161b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81161ba:	89 04 24             	mov    %eax,(%esp)
 81161bd:	e8 0a 17 fe ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 81161c2:	83 ec 04             	sub    $0x4,%esp
 81161c5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81161c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81161cc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81161cf:	89 04 24             	mov    %eax,(%esp)
 81161d2:	e8 1b 17 fe ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 81161d7:	84 c0                	test   %al,%al
 81161d9:	0f 85 5b ff ff ff    	jne    811613a <_ZN13CEventManager18BroadcastEventInfoEv+0x32>
 81161df:	eb 1b                	jmp    81161fc <_ZN13CEventManager18BroadcastEventInfoEv+0xf4>
 81161e1:	89 d3                	mov    %edx,%ebx
 81161e3:	89 c6                	mov    %eax,%esi
 81161e5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81161e8:	89 04 24             	mov    %eax,(%esp)
 81161eb:	e8 90 7c 47 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81161f0:	89 f0                	mov    %esi,%eax
 81161f2:	89 da                	mov    %ebx,%edx
 81161f4:	89 04 24             	mov    %eax,(%esp)
 81161f7:	e8 54 d5 9c 00       	call   8ae3750 <_Unwind_Resume>
 81161fc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81161ff:	89 04 24             	mov    %eax,(%esp)
 8116202:	e8 79 7c 47 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8116207:	8d 65 f8             	lea    -0x8(%ebp),%esp
 811620a:	83 c4 00             	add    $0x0,%esp
 811620d:	5b                   	pop    %ebx
 811620e:	5e                   	pop    %esi
 811620f:	5d                   	pop    %ebp
 8116210:	c3                   	ret
 8116211:	90                   	nop

```

```c
// CEventManager::BroadcastEventInfo @ 0x8116108

/* CEventManager::BroadcastEventInfo() */

void __thiscall CEventManager::BroadcastEventInfo(CEventManager *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_28 [4];
  PacketGuard local_24 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0811611b to 081161c1 has its CatchHandler @ 081161e1 */
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_28);
  while( true ) {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      MakeNotiEventInfo(this,local_24,local_10);
      CUser::Send(local_10,local_24);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_28);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## CEventManager

```asm
// === 08114ce4 CEventManager::CEventManager  [0x08114ce4-0x8114d4d] ===
 8114ce4:	55                   	push   %ebp
 8114ce5:	89 e5                	mov    %esp,%ebp
 8114ce7:	57                   	push   %edi
 8114ce8:	56                   	push   %esi
 8114ce9:	53                   	push   %ebx
 8114cea:	83 ec 1c             	sub    $0x1c,%esp
 8114ced:	8b 45 08             	mov    0x8(%ebp),%eax
 8114cf0:	c7 44 24 08 98 02 00 	movl   $0x298,0x8(%esp)
 8114cf7:	00 
 8114cf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8114cff:	00 
 8114d00:	89 04 24             	mov    %eax,(%esp)
 8114d03:	e8 b8 8f f6 ff       	call   807dcc0 <memset@plt>
 8114d08:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8114d0f:	e8 3c f7 60 00       	call   8724450 <_Znwj>
 8114d14:	89 c3                	mov    %eax,%ebx
 8114d16:	89 d8                	mov    %ebx,%eax
 8114d18:	89 04 24             	mov    %eax,(%esp)
 8114d1b:	e8 66 16 00 00       	call   8116386 <_ZN9CDeliveryC1Ev>
 8114d20:	eb 18                	jmp    8114d3a <_ZN13CEventManagerC1Ev+0x56>
 8114d22:	89 d6                	mov    %edx,%esi
 8114d24:	89 c7                	mov    %eax,%edi
 8114d26:	89 1c 24             	mov    %ebx,(%esp)
 8114d29:	e8 c2 f7 60 00       	call   87244f0 <_ZdlPv>
 8114d2e:	89 f8                	mov    %edi,%eax
 8114d30:	89 f2                	mov    %esi,%edx
 8114d32:	89 04 24             	mov    %eax,(%esp)
 8114d35:	e8 16 ea 9c 00       	call   8ae3750 <_Unwind_Resume>
 8114d3a:	89 da                	mov    %ebx,%edx
 8114d3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8114d3f:	89 90 98 02 00 00    	mov    %edx,0x298(%eax)
 8114d45:	83 c4 1c             	add    $0x1c,%esp
 8114d48:	5b                   	pop    %ebx
 8114d49:	5e                   	pop    %esi
 8114d4a:	5f                   	pop    %edi
 8114d4b:	5d                   	pop    %ebp
 8114d4c:	c3                   	ret
 8114d4d:	90                   	nop

```

```c
// CEventManager::CEventManager @ 0x8114ce4

/* CEventManager::CEventManager() */

void __thiscall CEventManager::CEventManager(CEventManager *this)

{
  CDelivery *this_00;
  
  memset(this,0,0x298);
  this_00 = operator_new(0x18);
                    /* try { // try from 08114d1b to 08114d1f has its CatchHandler @ 08114d22 */
  CDelivery::CDelivery(this_00);
  *(CDelivery **)(this + 0x298) = this_00;
  return;
}

```

---

## GetRepeatEvent

```asm
// === 08115998 CEventManager::GetRepeatEvent  [0x08115998-0x81159b5] ===
 8115998:	55                   	push   %ebp
 8115999:	89 e5                	mov    %esp,%ebp
 811599b:	81 7d 0c a5 00 00 00 	cmpl   $0xa5,0xc(%ebp)
 81159a2:	7e 07                	jle    81159ab <_ZN13CEventManager14GetRepeatEventEi+0x13>
 81159a4:	b8 00 00 00 00       	mov    $0x0,%eax
 81159a9:	eb 09                	jmp    81159b4 <_ZN13CEventManager14GetRepeatEventEi+0x1c>
 81159ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 81159ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81159b1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 81159b4:	5d                   	pop    %ebp
 81159b5:	c3                   	ret

```

```c
// CEventManager::GetRepeatEvent @ 0x8115998

/* CEventManager::GetRepeatEvent(int) */

undefined4 __thiscall CEventManager::GetRepeatEvent(CEventManager *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xa6) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## InitEventManager

```asm
// === 08114dcc CEventManager::InitEventManager  [0x08114dcc-0x8115981] ===
 8114dcc:	55                   	push   %ebp
 8114dcd:	89 e5                	mov    %esp,%ebp
 8114dcf:	57                   	push   %edi
 8114dd0:	56                   	push   %esi
 8114dd1:	53                   	push   %ebx
 8114dd2:	83 ec 1c             	sub    $0x1c,%esp
 8114dd5:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8114ddc:	e8 6f f6 60 00       	call   8724450 <_Znwj>
 8114de1:	89 c3                	mov    %eax,%ebx
 8114de3:	89 d8                	mov    %ebx,%eax
 8114de5:	89 04 24             	mov    %eax,(%esp)
 8114de8:	e8 57 0e 17 00       	call   8285c44 <_ZN20CUnlimitFatigueEventC1Ev>
 8114ded:	eb 15                	jmp    8114e04 <_ZN13CEventManager16InitEventManagerEv+0x38>
 8114def:	89 d6                	mov    %edx,%esi
 8114df1:	89 c7                	mov    %eax,%edi
 8114df3:	89 1c 24             	mov    %ebx,(%esp)
 8114df6:	e8 f5 f6 60 00       	call   87244f0 <_ZdlPv>
 8114dfb:	89 f8                	mov    %edi,%eax
 8114dfd:	89 f2                	mov    %esi,%edx
 8114dff:	e9 61 0b 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114e04:	89 d8                	mov    %ebx,%eax
 8114e06:	89 c2                	mov    %eax,%edx
 8114e08:	8b 45 08             	mov    0x8(%ebp),%eax
 8114e0b:	89 50 04             	mov    %edx,0x4(%eax)
 8114e0e:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114e15:	e8 36 f6 60 00       	call   8724450 <_Znwj>
 8114e1a:	89 c3                	mov    %eax,%ebx
 8114e1c:	89 d8                	mov    %ebx,%eax
 8114e1e:	89 04 24             	mov    %eax,(%esp)
 8114e21:	e8 f2 d8 09 00       	call   81b2718 <_ZN22CMaxFatigueFactorEventC1Ev>
 8114e26:	eb 15                	jmp    8114e3d <_ZN13CEventManager16InitEventManagerEv+0x71>
 8114e28:	89 d6                	mov    %edx,%esi
 8114e2a:	89 c7                	mov    %eax,%edi
 8114e2c:	89 1c 24             	mov    %ebx,(%esp)
 8114e2f:	e8 bc f6 60 00       	call   87244f0 <_ZdlPv>
 8114e34:	89 f8                	mov    %edi,%eax
 8114e36:	89 f2                	mov    %esi,%edx
 8114e38:	e9 28 0b 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114e3d:	89 d8                	mov    %ebx,%eax
 8114e3f:	89 c2                	mov    %eax,%edx
 8114e41:	8b 45 08             	mov    0x8(%ebp),%eax
 8114e44:	89 50 08             	mov    %edx,0x8(%eax)
 8114e47:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114e4e:	e8 fd f5 60 00       	call   8724450 <_Znwj>
 8114e53:	89 c3                	mov    %eax,%ebx
 8114e55:	89 d8                	mov    %ebx,%eax
 8114e57:	89 04 24             	mov    %eax,(%esp)
 8114e5a:	e8 e5 5d 38 00       	call   849ac44 <_ZN15CExpDoubleEventC1Ev>
 8114e5f:	eb 15                	jmp    8114e76 <_ZN13CEventManager16InitEventManagerEv+0xaa>
 8114e61:	89 d6                	mov    %edx,%esi
 8114e63:	89 c7                	mov    %eax,%edi
 8114e65:	89 1c 24             	mov    %ebx,(%esp)
 8114e68:	e8 83 f6 60 00       	call   87244f0 <_ZdlPv>
 8114e6d:	89 f8                	mov    %edi,%eax
 8114e6f:	89 f2                	mov    %esi,%edx
 8114e71:	e9 ef 0a 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114e76:	89 d8                	mov    %ebx,%eax
 8114e78:	89 c2                	mov    %eax,%edx
 8114e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8114e7d:	89 50 0c             	mov    %edx,0xc(%eax)
 8114e80:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114e87:	e8 c4 f5 60 00       	call   8724450 <_Znwj>
 8114e8c:	89 c3                	mov    %eax,%ebx
 8114e8e:	89 d8                	mov    %ebx,%eax
 8114e90:	89 04 24             	mov    %eax,(%esp)
 8114e93:	e8 78 5c ff ff       	call   810ab10 <_ZN16CCoinEventPerDayC1Ev>
 8114e98:	eb 15                	jmp    8114eaf <_ZN13CEventManager16InitEventManagerEv+0xe3>
 8114e9a:	89 d6                	mov    %edx,%esi
 8114e9c:	89 c7                	mov    %eax,%edi
 8114e9e:	89 1c 24             	mov    %ebx,(%esp)
 8114ea1:	e8 4a f6 60 00       	call   87244f0 <_ZdlPv>
 8114ea6:	89 f8                	mov    %edi,%eax
 8114ea8:	89 f2                	mov    %esi,%edx
 8114eaa:	e9 b6 0a 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114eaf:	89 d8                	mov    %ebx,%eax
 8114eb1:	89 c2                	mov    %eax,%edx
 8114eb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8114eb6:	89 50 10             	mov    %edx,0x10(%eax)
 8114eb9:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114ec0:	e8 8b f5 60 00       	call   8724450 <_Znwj>
 8114ec5:	89 c3                	mov    %eax,%ebx
 8114ec7:	89 d8                	mov    %ebx,%eax
 8114ec9:	89 04 24             	mov    %eax,(%esp)
 8114ecc:	e8 43 5a ff ff       	call   810a914 <_ZN22CCoinEventOnCharCreateC1Ev>
 8114ed1:	eb 15                	jmp    8114ee8 <_ZN13CEventManager16InitEventManagerEv+0x11c>
 8114ed3:	89 d6                	mov    %edx,%esi
 8114ed5:	89 c7                	mov    %eax,%edi
 8114ed7:	89 1c 24             	mov    %ebx,(%esp)
 8114eda:	e8 11 f6 60 00       	call   87244f0 <_ZdlPv>
 8114edf:	89 f8                	mov    %edi,%eax
 8114ee1:	89 f2                	mov    %esi,%edx
 8114ee3:	e9 7d 0a 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114ee8:	89 d8                	mov    %ebx,%eax
 8114eea:	89 c2                	mov    %eax,%edx
 8114eec:	8b 45 08             	mov    0x8(%ebp),%eax
 8114eef:	89 50 14             	mov    %edx,0x14(%eax)
 8114ef2:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114ef9:	e8 52 f5 60 00       	call   8724450 <_Znwj>
 8114efe:	89 c3                	mov    %eax,%ebx
 8114f00:	89 d8                	mov    %ebx,%eax
 8114f02:	89 04 24             	mov    %eax,(%esp)
 8114f05:	e8 5a ae 00 00       	call   811fd64 <_ZN20CLeadingChannelEventC1Ev>
 8114f0a:	eb 15                	jmp    8114f21 <_ZN13CEventManager16InitEventManagerEv+0x155>
 8114f0c:	89 d6                	mov    %edx,%esi
 8114f0e:	89 c7                	mov    %eax,%edi
 8114f10:	89 1c 24             	mov    %ebx,(%esp)
 8114f13:	e8 d8 f5 60 00       	call   87244f0 <_ZdlPv>
 8114f18:	89 f8                	mov    %edi,%eax
 8114f1a:	89 f2                	mov    %esi,%edx
 8114f1c:	e9 44 0a 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114f21:	89 d8                	mov    %ebx,%eax
 8114f23:	89 c2                	mov    %eax,%edx
 8114f25:	8b 45 08             	mov    0x8(%ebp),%eax
 8114f28:	89 50 18             	mov    %edx,0x18(%eax)
 8114f2b:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114f32:	e8 19 f5 60 00       	call   8724450 <_Znwj>
 8114f37:	89 c3                	mov    %eax,%ebx
 8114f39:	89 d8                	mov    %ebx,%eax
 8114f3b:	89 04 24             	mov    %eax,(%esp)
 8114f3e:	e8 8d e2 41 00       	call   85331d0 <_ZN19CItemDropRatioEventC1Ev>
 8114f43:	eb 15                	jmp    8114f5a <_ZN13CEventManager16InitEventManagerEv+0x18e>
 8114f45:	89 d6                	mov    %edx,%esi
 8114f47:	89 c7                	mov    %eax,%edi
 8114f49:	89 1c 24             	mov    %ebx,(%esp)
 8114f4c:	e8 9f f5 60 00       	call   87244f0 <_ZdlPv>
 8114f51:	89 f8                	mov    %edi,%eax
 8114f53:	89 f2                	mov    %esi,%edx
 8114f55:	e9 0b 0a 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114f5a:	89 d8                	mov    %ebx,%eax
 8114f5c:	89 c2                	mov    %eax,%edx
 8114f5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8114f61:	89 50 1c             	mov    %edx,0x1c(%eax)
 8114f64:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114f6b:	e8 e0 f4 60 00       	call   8724450 <_Znwj>
 8114f70:	89 c3                	mov    %eax,%ebx
 8114f72:	89 d8                	mov    %ebx,%eax
 8114f74:	89 04 24             	mov    %eax,(%esp)
 8114f77:	e8 60 22 15 00       	call   82671dc <_ZN19CPCRoomBurningEventC1Ev>
 8114f7c:	eb 15                	jmp    8114f93 <_ZN13CEventManager16InitEventManagerEv+0x1c7>
 8114f7e:	89 d6                	mov    %edx,%esi
 8114f80:	89 c7                	mov    %eax,%edi
 8114f82:	89 1c 24             	mov    %ebx,(%esp)
 8114f85:	e8 66 f5 60 00       	call   87244f0 <_ZdlPv>
 8114f8a:	89 f8                	mov    %edi,%eax
 8114f8c:	89 f2                	mov    %esi,%edx
 8114f8e:	e9 d2 09 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114f93:	89 d8                	mov    %ebx,%eax
 8114f95:	89 c2                	mov    %eax,%edx
 8114f97:	8b 45 08             	mov    0x8(%ebp),%eax
 8114f9a:	89 50 20             	mov    %edx,0x20(%eax)
 8114f9d:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8114fa4:	e8 a7 f4 60 00       	call   8724450 <_Znwj>
 8114fa9:	89 c3                	mov    %eax,%ebx
 8114fab:	89 d8                	mov    %ebx,%eax
 8114fad:	89 04 24             	mov    %eax,(%esp)
 8114fb0:	e8 f3 7f 00 00       	call   811cfa8 <_ZN14CGuildWarEventC1Ev>
 8114fb5:	eb 15                	jmp    8114fcc <_ZN13CEventManager16InitEventManagerEv+0x200>
 8114fb7:	89 d6                	mov    %edx,%esi
 8114fb9:	89 c7                	mov    %eax,%edi
 8114fbb:	89 1c 24             	mov    %ebx,(%esp)
 8114fbe:	e8 2d f5 60 00       	call   87244f0 <_ZdlPv>
 8114fc3:	89 f8                	mov    %edi,%eax
 8114fc5:	89 f2                	mov    %esi,%edx
 8114fc7:	e9 99 09 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8114fcc:	89 d8                	mov    %ebx,%eax
 8114fce:	89 c2                	mov    %eax,%edx
 8114fd0:	8b 45 08             	mov    0x8(%ebp),%eax
 8114fd3:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 8114fd9:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8114fe0:	e8 6b f4 60 00       	call   8724450 <_Znwj>
 8114fe5:	89 c3                	mov    %eax,%ebx
 8114fe7:	89 d8                	mov    %ebx,%eax
 8114fe9:	89 04 24             	mov    %eax,(%esp)
 8114fec:	e8 cf 25 15 00       	call   82675c0 <_ZN19CPCRoomFatigueEventC1Ev>
 8114ff1:	eb 15                	jmp    8115008 <_ZN13CEventManager16InitEventManagerEv+0x23c>
 8114ff3:	89 d6                	mov    %edx,%esi
 8114ff5:	89 c7                	mov    %eax,%edi
 8114ff7:	89 1c 24             	mov    %ebx,(%esp)
 8114ffa:	e8 f1 f4 60 00       	call   87244f0 <_ZdlPv>
 8114fff:	89 f8                	mov    %edi,%eax
 8115001:	89 f2                	mov    %esi,%edx
 8115003:	e9 5d 09 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115008:	89 d8                	mov    %ebx,%eax
 811500a:	89 c2                	mov    %eax,%edx
 811500c:	8b 45 08             	mov    0x8(%ebp),%eax
 811500f:	89 50 28             	mov    %edx,0x28(%eax)
 8115012:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115019:	e8 32 f4 60 00       	call   8724450 <_Znwj>
 811501e:	89 c3                	mov    %eax,%ebx
 8115020:	89 d8                	mov    %ebx,%eax
 8115022:	89 04 24             	mov    %eax,(%esp)
 8115025:	e8 02 99 15 00       	call   826e92c <_ZN21CReformingDanjinEventC1Ev>
 811502a:	eb 15                	jmp    8115041 <_ZN13CEventManager16InitEventManagerEv+0x275>
 811502c:	89 d6                	mov    %edx,%esi
 811502e:	89 c7                	mov    %eax,%edi
 8115030:	89 1c 24             	mov    %ebx,(%esp)
 8115033:	e8 b8 f4 60 00       	call   87244f0 <_ZdlPv>
 8115038:	89 f8                	mov    %edi,%eax
 811503a:	89 f2                	mov    %esi,%edx
 811503c:	e9 24 09 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115041:	89 d8                	mov    %ebx,%eax
 8115043:	89 c2                	mov    %eax,%edx
 8115045:	8b 45 08             	mov    0x8(%ebp),%eax
 8115048:	89 50 30             	mov    %edx,0x30(%eax)
 811504b:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 8115052:	e8 f9 f3 60 00       	call   8724450 <_Znwj>
 8115057:	89 c3                	mov    %eax,%ebx
 8115059:	89 d8                	mov    %ebx,%eax
 811505b:	89 04 24             	mov    %eax,(%esp)
 811505e:	e8 91 6d 21 00       	call   832bdf4 <_ZN16CCoinRefillEventC1Ev>
 8115063:	eb 15                	jmp    811507a <_ZN13CEventManager16InitEventManagerEv+0x2ae>
 8115065:	89 d6                	mov    %edx,%esi
 8115067:	89 c7                	mov    %eax,%edi
 8115069:	89 1c 24             	mov    %ebx,(%esp)
 811506c:	e8 7f f4 60 00       	call   87244f0 <_ZdlPv>
 8115071:	89 f8                	mov    %edi,%eax
 8115073:	89 f2                	mov    %esi,%edx
 8115075:	e9 eb 08 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811507a:	89 d8                	mov    %ebx,%eax
 811507c:	89 c2                	mov    %eax,%edx
 811507e:	8b 45 08             	mov    0x8(%ebp),%eax
 8115081:	89 50 34             	mov    %edx,0x34(%eax)
 8115084:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 811508b:	e8 c0 f3 60 00       	call   8724450 <_Znwj>
 8115090:	89 c3                	mov    %eax,%ebx
 8115092:	89 d8                	mov    %ebx,%eax
 8115094:	89 04 24             	mov    %eax,(%esp)
 8115097:	e8 08 4f ff ff       	call   8109fa4 <_ZN20CBurningFatigueEventC1Ev>
 811509c:	eb 15                	jmp    81150b3 <_ZN13CEventManager16InitEventManagerEv+0x2e7>
 811509e:	89 d6                	mov    %edx,%esi
 81150a0:	89 c7                	mov    %eax,%edi
 81150a2:	89 1c 24             	mov    %ebx,(%esp)
 81150a5:	e8 46 f4 60 00       	call   87244f0 <_ZdlPv>
 81150aa:	89 f8                	mov    %edi,%eax
 81150ac:	89 f2                	mov    %esi,%edx
 81150ae:	e9 b2 08 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81150b3:	89 d8                	mov    %ebx,%eax
 81150b5:	89 c2                	mov    %eax,%edx
 81150b7:	8b 45 08             	mov    0x8(%ebp),%eax
 81150ba:	89 50 3c             	mov    %edx,0x3c(%eax)
 81150bd:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81150c4:	e8 87 f3 60 00       	call   8724450 <_Znwj>
 81150c9:	89 c3                	mov    %eax,%ebx
 81150cb:	89 d8                	mov    %ebx,%eax
 81150cd:	89 04 24             	mov    %eax,(%esp)
 81150d0:	e8 4b 56 ff ff       	call   810a720 <_ZN21CClearRewardCardEventC1Ev>
 81150d5:	eb 15                	jmp    81150ec <_ZN13CEventManager16InitEventManagerEv+0x320>
 81150d7:	89 d6                	mov    %edx,%esi
 81150d9:	89 c7                	mov    %eax,%edi
 81150db:	89 1c 24             	mov    %ebx,(%esp)
 81150de:	e8 0d f4 60 00       	call   87244f0 <_ZdlPv>
 81150e3:	89 f8                	mov    %edi,%eax
 81150e5:	89 f2                	mov    %esi,%edx
 81150e7:	e9 79 08 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81150ec:	89 d8                	mov    %ebx,%eax
 81150ee:	89 c2                	mov    %eax,%edx
 81150f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81150f3:	89 50 40             	mov    %edx,0x40(%eax)
 81150f6:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 81150fd:	e8 4e f3 60 00       	call   8724450 <_Znwj>
 8115102:	89 c3                	mov    %eax,%ebx
 8115104:	89 d8                	mov    %ebx,%eax
 8115106:	89 04 24             	mov    %eax,(%esp)
 8115109:	e8 ce 51 ff ff       	call   810a2dc <_ZN23CCeraShopBonusItemEventC1Ev>
 811510e:	eb 15                	jmp    8115125 <_ZN13CEventManager16InitEventManagerEv+0x359>
 8115110:	89 d6                	mov    %edx,%esi
 8115112:	89 c7                	mov    %eax,%edi
 8115114:	89 1c 24             	mov    %ebx,(%esp)
 8115117:	e8 d4 f3 60 00       	call   87244f0 <_ZdlPv>
 811511c:	89 f8                	mov    %edi,%eax
 811511e:	89 f2                	mov    %esi,%edx
 8115120:	e9 40 08 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115125:	89 d8                	mov    %ebx,%eax
 8115127:	89 c2                	mov    %eax,%edx
 8115129:	8b 45 08             	mov    0x8(%ebp),%eax
 811512c:	89 50 44             	mov    %edx,0x44(%eax)
 811512f:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115136:	e8 15 f3 60 00       	call   8724450 <_Znwj>
 811513b:	89 c3                	mov    %eax,%ebx
 811513d:	89 d8                	mov    %ebx,%eax
 811513f:	89 04 24             	mov    %eax,(%esp)
 8115142:	e8 85 f4 16 00       	call   82845cc <_ZN19CTournamentPvPEventC1Ev>
 8115147:	eb 15                	jmp    811515e <_ZN13CEventManager16InitEventManagerEv+0x392>
 8115149:	89 d6                	mov    %edx,%esi
 811514b:	89 c7                	mov    %eax,%edi
 811514d:	89 1c 24             	mov    %ebx,(%esp)
 8115150:	e8 9b f3 60 00       	call   87244f0 <_ZdlPv>
 8115155:	89 f8                	mov    %edi,%eax
 8115157:	89 f2                	mov    %esi,%edx
 8115159:	e9 07 08 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811515e:	89 d8                	mov    %ebx,%eax
 8115160:	89 c2                	mov    %eax,%edx
 8115162:	8b 45 08             	mov    0x8(%ebp),%eax
 8115165:	89 50 48             	mov    %edx,0x48(%eax)
 8115168:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 811516f:	e8 dc f2 60 00       	call   8724450 <_Znwj>
 8115174:	89 c3                	mov    %eax,%ebx
 8115176:	89 d8                	mov    %ebx,%eax
 8115178:	89 04 24             	mov    %eax,(%esp)
 811517b:	e8 a4 7c 00 00       	call   811ce24 <_ZN23CGoldCardBlankItemEventC1Ev>
 8115180:	eb 15                	jmp    8115197 <_ZN13CEventManager16InitEventManagerEv+0x3cb>
 8115182:	89 d6                	mov    %edx,%esi
 8115184:	89 c7                	mov    %eax,%edi
 8115186:	89 1c 24             	mov    %ebx,(%esp)
 8115189:	e8 62 f3 60 00       	call   87244f0 <_ZdlPv>
 811518e:	89 f8                	mov    %edi,%eax
 8115190:	89 f2                	mov    %esi,%edx
 8115192:	e9 ce 07 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115197:	89 d8                	mov    %ebx,%eax
 8115199:	89 c2                	mov    %eax,%edx
 811519b:	8b 45 08             	mov    0x8(%ebp),%eax
 811519e:	89 50 4c             	mov    %edx,0x4c(%eax)
 81151a1:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81151a8:	e8 a3 f2 60 00       	call   8724450 <_Znwj>
 81151ad:	89 c3                	mov    %eax,%ebx
 81151af:	89 d8                	mov    %ebx,%eax
 81151b1:	89 04 24             	mov    %eax,(%esp)
 81151b4:	e8 83 22 15 00       	call   826743c <_ZN25CPcRoomCardBlankItemEventC1Ev>
 81151b9:	eb 15                	jmp    81151d0 <_ZN13CEventManager16InitEventManagerEv+0x404>
 81151bb:	89 d6                	mov    %edx,%esi
 81151bd:	89 c7                	mov    %eax,%edi
 81151bf:	89 1c 24             	mov    %ebx,(%esp)
 81151c2:	e8 29 f3 60 00       	call   87244f0 <_ZdlPv>
 81151c7:	89 f8                	mov    %edi,%eax
 81151c9:	89 f2                	mov    %esi,%edx
 81151cb:	e9 95 07 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81151d0:	89 d8                	mov    %ebx,%eax
 81151d2:	89 c2                	mov    %eax,%edx
 81151d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81151d7:	89 50 74             	mov    %edx,0x74(%eax)
 81151da:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 81151e1:	e8 6a f2 60 00       	call   8724450 <_Znwj>
 81151e6:	89 c3                	mov    %eax,%ebx
 81151e8:	89 d8                	mov    %ebx,%eax
 81151ea:	89 04 24             	mov    %eax,(%esp)
 81151ed:	e8 9e 27 15 00       	call   8267990 <_ZN14CPowerWarEventC1Ev>
 81151f2:	eb 15                	jmp    8115209 <_ZN13CEventManager16InitEventManagerEv+0x43d>
 81151f4:	89 d6                	mov    %edx,%esi
 81151f6:	89 c7                	mov    %eax,%edi
 81151f8:	89 1c 24             	mov    %ebx,(%esp)
 81151fb:	e8 f0 f2 60 00       	call   87244f0 <_ZdlPv>
 8115200:	89 f8                	mov    %edi,%eax
 8115202:	89 f2                	mov    %esi,%edx
 8115204:	e9 5c 07 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115209:	89 d8                	mov    %ebx,%eax
 811520b:	89 c2                	mov    %eax,%edx
 811520d:	8b 45 08             	mov    0x8(%ebp),%eax
 8115210:	89 50 78             	mov    %edx,0x78(%eax)
 8115213:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 811521a:	e8 31 f2 60 00       	call   8724450 <_Znwj>
 811521f:	89 c3                	mov    %eax,%ebx
 8115221:	89 d8                	mov    %ebx,%eax
 8115223:	89 04 24             	mov    %eax,(%esp)
 8115226:	e8 1d 19 00 00       	call   8116b48 <_ZN24CCollectArchieveEventLogC1Ev>
 811522b:	eb 15                	jmp    8115242 <_ZN13CEventManager16InitEventManagerEv+0x476>
 811522d:	89 d6                	mov    %edx,%esi
 811522f:	89 c7                	mov    %eax,%edi
 8115231:	89 1c 24             	mov    %ebx,(%esp)
 8115234:	e8 b7 f2 60 00       	call   87244f0 <_ZdlPv>
 8115239:	89 f8                	mov    %edi,%eax
 811523b:	89 f2                	mov    %esi,%edx
 811523d:	e9 23 07 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115242:	89 d8                	mov    %ebx,%eax
 8115244:	89 c2                	mov    %eax,%edx
 8115246:	8b 45 08             	mov    0x8(%ebp),%eax
 8115249:	89 50 54             	mov    %edx,0x54(%eax)
 811524c:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115253:	e8 f8 f1 60 00       	call   8724450 <_Znwj>
 8115258:	89 c3                	mov    %eax,%ebx
 811525a:	89 d8                	mov    %ebx,%eax
 811525c:	89 04 24             	mov    %eax,(%esp)
 811525f:	e8 94 25 15 00       	call   82677f8 <_ZN21CPCRoomWorldDropEventC1Ev>
 8115264:	eb 15                	jmp    811527b <_ZN13CEventManager16InitEventManagerEv+0x4af>
 8115266:	89 d6                	mov    %edx,%esi
 8115268:	89 c7                	mov    %eax,%edi
 811526a:	89 1c 24             	mov    %ebx,(%esp)
 811526d:	e8 7e f2 60 00       	call   87244f0 <_ZdlPv>
 8115272:	89 f8                	mov    %edi,%eax
 8115274:	89 f2                	mov    %esi,%edx
 8115276:	e9 ea 06 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811527b:	89 d8                	mov    %ebx,%eax
 811527d:	89 c2                	mov    %eax,%edx
 811527f:	8b 45 08             	mov    0x8(%ebp),%eax
 8115282:	89 50 58             	mov    %edx,0x58(%eax)
 8115285:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 811528c:	e8 bf f1 60 00       	call   8724450 <_Znwj>
 8115291:	89 c3                	mov    %eax,%ebx
 8115293:	89 d8                	mov    %ebx,%eax
 8115295:	89 04 24             	mov    %eax,(%esp)
 8115298:	e8 ad 1a 00 00       	call   8116d4a <_ZN19CPartyExpBonusEventC1Ev>
 811529d:	eb 15                	jmp    81152b4 <_ZN13CEventManager16InitEventManagerEv+0x4e8>
 811529f:	89 d6                	mov    %edx,%esi
 81152a1:	89 c7                	mov    %eax,%edi
 81152a3:	89 1c 24             	mov    %ebx,(%esp)
 81152a6:	e8 45 f2 60 00       	call   87244f0 <_ZdlPv>
 81152ab:	89 f8                	mov    %edi,%eax
 81152ad:	89 f2                	mov    %esi,%edx
 81152af:	e9 b1 06 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81152b4:	89 d8                	mov    %ebx,%eax
 81152b6:	89 c2                	mov    %eax,%edx
 81152b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81152bb:	89 50 60             	mov    %edx,0x60(%eax)
 81152be:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81152c5:	e8 86 f1 60 00       	call   8724450 <_Znwj>
 81152ca:	89 c3                	mov    %eax,%ebx
 81152cc:	89 d8                	mov    %ebx,%eax
 81152ce:	89 04 24             	mov    %eax,(%esp)
 81152d1:	e8 32 a2 16 00       	call   827f508 <_ZN17CStabToDeathEventC1Ev>
 81152d6:	eb 15                	jmp    81152ed <_ZN13CEventManager16InitEventManagerEv+0x521>
 81152d8:	89 d6                	mov    %edx,%esi
 81152da:	89 c7                	mov    %eax,%edi
 81152dc:	89 1c 24             	mov    %ebx,(%esp)
 81152df:	e8 0c f2 60 00       	call   87244f0 <_ZdlPv>
 81152e4:	89 f8                	mov    %edi,%eax
 81152e6:	89 f2                	mov    %esi,%edx
 81152e8:	e9 78 06 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81152ed:	89 d8                	mov    %ebx,%eax
 81152ef:	89 c2                	mov    %eax,%edx
 81152f1:	8b 45 08             	mov    0x8(%ebp),%eax
 81152f4:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 81152fa:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8115301:	e8 4a f1 60 00       	call   8724450 <_Znwj>
 8115306:	89 c3                	mov    %eax,%ebx
 8115308:	89 d8                	mov    %ebx,%eax
 811530a:	89 04 24             	mov    %eax,(%esp)
 811530d:	e8 ba eb 15 00       	call   8273ecc <_ZN17CSchoolMatchEventC1Ev>
 8115312:	eb 15                	jmp    8115329 <_ZN13CEventManager16InitEventManagerEv+0x55d>
 8115314:	89 d6                	mov    %edx,%esi
 8115316:	89 c7                	mov    %eax,%edi
 8115318:	89 1c 24             	mov    %ebx,(%esp)
 811531b:	e8 d0 f1 60 00       	call   87244f0 <_ZdlPv>
 8115320:	89 f8                	mov    %edi,%eax
 8115322:	89 f2                	mov    %esi,%edx
 8115324:	e9 3c 06 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115329:	89 d8                	mov    %ebx,%eax
 811532b:	89 c2                	mov    %eax,%edx
 811532d:	8b 45 08             	mov    0x8(%ebp),%eax
 8115330:	89 50 24             	mov    %edx,0x24(%eax)
 8115333:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 811533a:	e8 11 f1 60 00       	call   8724450 <_Znwj>
 811533f:	89 c3                	mov    %eax,%ebx
 8115341:	89 d8                	mov    %ebx,%eax
 8115343:	89 04 24             	mov    %eax,(%esp)
 8115346:	e8 c9 48 ff ff       	call   8109c14 <_ZN33CAutoMarketConditionsControlEventC1Ev>
 811534b:	eb 15                	jmp    8115362 <_ZN13CEventManager16InitEventManagerEv+0x596>
 811534d:	89 d6                	mov    %edx,%esi
 811534f:	89 c7                	mov    %eax,%edi
 8115351:	89 1c 24             	mov    %ebx,(%esp)
 8115354:	e8 97 f1 60 00       	call   87244f0 <_ZdlPv>
 8115359:	89 f8                	mov    %edi,%eax
 811535b:	89 f2                	mov    %esi,%edx
 811535d:	e9 03 06 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115362:	89 d8                	mov    %ebx,%eax
 8115364:	89 c2                	mov    %eax,%edx
 8115366:	8b 45 08             	mov    0x8(%ebp),%eax
 8115369:	89 90 88 00 00 00    	mov    %edx,0x88(%eax)
 811536f:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115376:	e8 d5 f0 60 00       	call   8724450 <_Znwj>
 811537b:	89 c3                	mov    %eax,%ebx
 811537d:	89 d8                	mov    %ebx,%eax
 811537f:	89 04 24             	mov    %eax,(%esp)
 8115382:	e8 37 1a 00 00       	call   8116dbe <_ZN25CVendingMachineBonusEventC1Ev>
 8115387:	eb 15                	jmp    811539e <_ZN13CEventManager16InitEventManagerEv+0x5d2>
 8115389:	89 d6                	mov    %edx,%esi
 811538b:	89 c7                	mov    %eax,%edi
 811538d:	89 1c 24             	mov    %ebx,(%esp)
 8115390:	e8 5b f1 60 00       	call   87244f0 <_ZdlPv>
 8115395:	89 f8                	mov    %edi,%eax
 8115397:	89 f2                	mov    %esi,%edx
 8115399:	e9 c7 05 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811539e:	89 d8                	mov    %ebx,%eax
 81153a0:	89 c2                	mov    %eax,%edx
 81153a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81153a5:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 81153ab:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81153b2:	e8 99 f0 60 00       	call   8724450 <_Znwj>
 81153b7:	89 c3                	mov    %eax,%ebx
 81153b9:	89 d8                	mov    %ebx,%eax
 81153bb:	89 04 24             	mov    %eax,(%esp)
 81153be:	e8 23 1b 00 00       	call   8116ee6 <_ZN23CBurnigGoldMonsterEventC1Ev>
 81153c3:	eb 15                	jmp    81153da <_ZN13CEventManager16InitEventManagerEv+0x60e>
 81153c5:	89 d6                	mov    %edx,%esi
 81153c7:	89 c7                	mov    %eax,%edi
 81153c9:	89 1c 24             	mov    %ebx,(%esp)
 81153cc:	e8 1f f1 60 00       	call   87244f0 <_ZdlPv>
 81153d1:	89 f8                	mov    %edi,%eax
 81153d3:	89 f2                	mov    %esi,%edx
 81153d5:	e9 8b 05 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81153da:	89 d8                	mov    %ebx,%eax
 81153dc:	89 c2                	mov    %eax,%edx
 81153de:	8b 45 08             	mov    0x8(%ebp),%eax
 81153e1:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 81153e7:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81153ee:	e8 5d f0 60 00       	call   8724450 <_Znwj>
 81153f3:	89 c3                	mov    %eax,%ebx
 81153f5:	89 d8                	mov    %ebx,%eax
 81153f7:	89 04 24             	mov    %eax,(%esp)
 81153fa:	e8 8d 47 0a 00       	call   81b9b8c <_ZN29CNoNeedGoldOnGuildCreateEventC1Ev>
 81153ff:	eb 15                	jmp    8115416 <_ZN13CEventManager16InitEventManagerEv+0x64a>
 8115401:	89 d6                	mov    %edx,%esi
 8115403:	89 c7                	mov    %eax,%edi
 8115405:	89 1c 24             	mov    %ebx,(%esp)
 8115408:	e8 e3 f0 60 00       	call   87244f0 <_ZdlPv>
 811540d:	89 f8                	mov    %edi,%eax
 811540f:	89 f2                	mov    %esi,%edx
 8115411:	e9 4f 05 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115416:	89 d8                	mov    %ebx,%eax
 8115418:	89 c2                	mov    %eax,%edx
 811541a:	8b 45 08             	mov    0x8(%ebp),%eax
 811541d:	89 90 98 00 00 00    	mov    %edx,0x98(%eax)
 8115423:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 811542a:	e8 21 f0 60 00       	call   8724450 <_Znwj>
 811542f:	89 c3                	mov    %eax,%ebx
 8115431:	89 d8                	mov    %ebx,%eax
 8115433:	89 04 24             	mov    %eax,(%esp)
 8115436:	e8 ad 1c 00 00       	call   81170e8 <_ZN24CDeathTowerWinPointEventC1Ev>
 811543b:	eb 15                	jmp    8115452 <_ZN13CEventManager16InitEventManagerEv+0x686>
 811543d:	89 d6                	mov    %edx,%esi
 811543f:	89 c7                	mov    %eax,%edi
 8115441:	89 1c 24             	mov    %ebx,(%esp)
 8115444:	e8 a7 f0 60 00       	call   87244f0 <_ZdlPv>
 8115449:	89 f8                	mov    %edi,%eax
 811544b:	89 f2                	mov    %esi,%edx
 811544d:	e9 13 05 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115452:	89 d8                	mov    %ebx,%eax
 8115454:	89 c2                	mov    %eax,%edx
 8115456:	8b 45 08             	mov    0x8(%ebp),%eax
 8115459:	89 90 9c 00 00 00    	mov    %edx,0x9c(%eax)
 811545f:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115466:	e8 e5 ef 60 00       	call   8724450 <_Znwj>
 811546b:	89 c3                	mov    %eax,%ebx
 811546d:	89 d8                	mov    %ebx,%eax
 811546f:	89 04 24             	mov    %eax,(%esp)
 8115472:	e8 e5 48 0a 00       	call   81b9d5c <_ZN21CNotApplyBalkeunEventC1Ev>
 8115477:	eb 15                	jmp    811548e <_ZN13CEventManager16InitEventManagerEv+0x6c2>
 8115479:	89 d6                	mov    %edx,%esi
 811547b:	89 c7                	mov    %eax,%edi
 811547d:	89 1c 24             	mov    %ebx,(%esp)
 8115480:	e8 6b f0 60 00       	call   87244f0 <_ZdlPv>
 8115485:	89 f8                	mov    %edi,%eax
 8115487:	89 f2                	mov    %esi,%edx
 8115489:	e9 d7 04 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811548e:	89 d8                	mov    %ebx,%eax
 8115490:	89 c2                	mov    %eax,%edx
 8115492:	8b 45 08             	mov    0x8(%ebp),%eax
 8115495:	89 90 a0 00 00 00    	mov    %edx,0xa0(%eax)
 811549b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81154a2:	e8 a9 ef 60 00       	call   8724450 <_Znwj>
 81154a7:	89 c3                	mov    %eax,%ebx
 81154a9:	89 d8                	mov    %ebx,%eax
 81154ab:	89 04 24             	mov    %eax,(%esp)
 81154ae:	e8 15 50 ff ff       	call   810a4c8 <_ZN18CCharacterDayEventC1Ev>
 81154b3:	eb 15                	jmp    81154ca <_ZN13CEventManager16InitEventManagerEv+0x6fe>
 81154b5:	89 d6                	mov    %edx,%esi
 81154b7:	89 c7                	mov    %eax,%edi
 81154b9:	89 1c 24             	mov    %ebx,(%esp)
 81154bc:	e8 2f f0 60 00       	call   87244f0 <_ZdlPv>
 81154c1:	89 f8                	mov    %edi,%eax
 81154c3:	89 f2                	mov    %esi,%edx
 81154c5:	e9 9b 04 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81154ca:	89 d8                	mov    %ebx,%eax
 81154cc:	89 c2                	mov    %eax,%edx
 81154ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81154d1:	89 90 a4 00 00 00    	mov    %edx,0xa4(%eax)
 81154d7:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 81154de:	e8 6d ef 60 00       	call   8724450 <_Znwj>
 81154e3:	89 c3                	mov    %eax,%ebx
 81154e5:	89 d8                	mov    %ebx,%eax
 81154e7:	89 04 24             	mov    %eax,(%esp)
 81154ea:	e8 55 e7 15 00       	call   8273c44 <_ZN28CRestrictCharacCreationEventC1Ev>
 81154ef:	eb 15                	jmp    8115506 <_ZN13CEventManager16InitEventManagerEv+0x73a>
 81154f1:	89 d6                	mov    %edx,%esi
 81154f3:	89 c7                	mov    %eax,%edi
 81154f5:	89 1c 24             	mov    %ebx,(%esp)
 81154f8:	e8 f3 ef 60 00       	call   87244f0 <_ZdlPv>
 81154fd:	89 f8                	mov    %edi,%eax
 81154ff:	89 f2                	mov    %esi,%edx
 8115501:	e9 5f 04 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115506:	89 d8                	mov    %ebx,%eax
 8115508:	89 c2                	mov    %eax,%edx
 811550a:	8b 45 08             	mov    0x8(%ebp),%eax
 811550d:	89 90 c4 00 00 00    	mov    %edx,0xc4(%eax)
 8115513:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 811551a:	e8 31 ef 60 00       	call   8724450 <_Znwj>
 811551f:	89 c3                	mov    %eax,%ebx
 8115521:	89 d8                	mov    %ebx,%eax
 8115523:	89 04 24             	mov    %eax,(%esp)
 8115526:	e8 31 1c 00 00       	call   811715c <_ZN21CReduceUpgradeItemPayC1Ev>
 811552b:	eb 15                	jmp    8115542 <_ZN13CEventManager16InitEventManagerEv+0x776>
 811552d:	89 d6                	mov    %edx,%esi
 811552f:	89 c7                	mov    %eax,%edi
 8115531:	89 1c 24             	mov    %ebx,(%esp)
 8115534:	e8 b7 ef 60 00       	call   87244f0 <_ZdlPv>
 8115539:	89 f8                	mov    %edi,%eax
 811553b:	89 f2                	mov    %esi,%edx
 811553d:	e9 23 04 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115542:	89 d8                	mov    %ebx,%eax
 8115544:	89 c2                	mov    %eax,%edx
 8115546:	8b 45 08             	mov    0x8(%ebp),%eax
 8115549:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 811554f:	c7 04 24 60 00 00 00 	movl   $0x60,(%esp)
 8115556:	e8 f5 ee 60 00       	call   8724450 <_Znwj>
 811555b:	89 c3                	mov    %eax,%ebx
 811555d:	89 d8                	mov    %ebx,%eax
 811555f:	89 04 24             	mov    %eax,(%esp)
 8115562:	e8 bf 62 0a 00       	call   81bb826 <_ZN12COnTimeEventC1Ev>
 8115567:	eb 15                	jmp    811557e <_ZN13CEventManager16InitEventManagerEv+0x7b2>
 8115569:	89 d6                	mov    %edx,%esi
 811556b:	89 c7                	mov    %eax,%edi
 811556d:	89 1c 24             	mov    %ebx,(%esp)
 8115570:	e8 7b ef 60 00       	call   87244f0 <_ZdlPv>
 8115575:	89 f8                	mov    %edi,%eax
 8115577:	89 f2                	mov    %esi,%edx
 8115579:	e9 e7 03 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811557e:	89 d8                	mov    %ebx,%eax
 8115580:	89 c2                	mov    %eax,%edx
 8115582:	8b 45 08             	mov    0x8(%ebp),%eax
 8115585:	89 90 cc 00 00 00    	mov    %edx,0xcc(%eax)
 811558b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115592:	e8 b9 ee 60 00       	call   8724450 <_Znwj>
 8115597:	89 c3                	mov    %eax,%ebx
 8115599:	89 d8                	mov    %ebx,%eax
 811559b:	89 04 24             	mov    %eax,(%esp)
 811559e:	e8 19 48 ff ff       	call   8109dbc <_ZN22CBreakAwayPreventEventC1Ev>
 81155a3:	eb 15                	jmp    81155ba <_ZN13CEventManager16InitEventManagerEv+0x7ee>
 81155a5:	89 d6                	mov    %edx,%esi
 81155a7:	89 c7                	mov    %eax,%edi
 81155a9:	89 1c 24             	mov    %ebx,(%esp)
 81155ac:	e8 3f ef 60 00       	call   87244f0 <_ZdlPv>
 81155b1:	89 f8                	mov    %edi,%eax
 81155b3:	89 f2                	mov    %esi,%edx
 81155b5:	e9 ab 03 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81155ba:	89 d8                	mov    %ebx,%eax
 81155bc:	89 c2                	mov    %eax,%edx
 81155be:	8b 45 08             	mov    0x8(%ebp),%eax
 81155c1:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 81155c7:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 81155ce:	e8 7d ee 60 00       	call   8724450 <_Znwj>
 81155d3:	89 c3                	mov    %eax,%ebx
 81155d5:	89 d8                	mov    %ebx,%eax
 81155d7:	89 04 24             	mov    %eax,(%esp)
 81155da:	e8 3d 33 15 00       	call   826891c <_ZN24CPowerWarVictoriousEventC1Ev>
 81155df:	eb 15                	jmp    81155f6 <_ZN13CEventManager16InitEventManagerEv+0x82a>
 81155e1:	89 d6                	mov    %edx,%esi
 81155e3:	89 c7                	mov    %eax,%edi
 81155e5:	89 1c 24             	mov    %ebx,(%esp)
 81155e8:	e8 03 ef 60 00       	call   87244f0 <_ZdlPv>
 81155ed:	89 f8                	mov    %edi,%eax
 81155ef:	89 f2                	mov    %esi,%edx
 81155f1:	e9 6f 03 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81155f6:	89 d8                	mov    %ebx,%eax
 81155f8:	89 c2                	mov    %eax,%edx
 81155fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81155fd:	89 90 d4 00 00 00    	mov    %edx,0xd4(%eax)
 8115603:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 811560a:	e8 41 ee 60 00       	call   8724450 <_Znwj>
 811560f:	89 c3                	mov    %eax,%ebx
 8115611:	89 d8                	mov    %ebx,%eax
 8115613:	89 04 24             	mov    %eax,(%esp)
 8115616:	e8 a7 1c 00 00       	call   81172c2 <_ZN16CSecretShopEventC1Ev>
 811561b:	eb 15                	jmp    8115632 <_ZN13CEventManager16InitEventManagerEv+0x866>
 811561d:	89 d6                	mov    %edx,%esi
 811561f:	89 c7                	mov    %eax,%edi
 8115621:	89 1c 24             	mov    %ebx,(%esp)
 8115624:	e8 c7 ee 60 00       	call   87244f0 <_ZdlPv>
 8115629:	89 f8                	mov    %edi,%eax
 811562b:	89 f2                	mov    %esi,%edx
 811562d:	e9 33 03 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115632:	89 d8                	mov    %ebx,%eax
 8115634:	89 c2                	mov    %eax,%edx
 8115636:	8b 45 08             	mov    0x8(%ebp),%eax
 8115639:	89 90 e8 00 00 00    	mov    %edx,0xe8(%eax)
 811563f:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115646:	e8 05 ee 60 00       	call   8724450 <_Znwj>
 811564b:	89 c3                	mov    %eax,%ebx
 811564d:	89 d8                	mov    %ebx,%eax
 811564f:	89 04 24             	mov    %eax,(%esp)
 8115652:	e8 93 1d 00 00       	call   81173ea <_ZN18CFatigueAttendanceC1Ev>
 8115657:	eb 15                	jmp    811566e <_ZN13CEventManager16InitEventManagerEv+0x8a2>
 8115659:	89 d6                	mov    %edx,%esi
 811565b:	89 c7                	mov    %eax,%edi
 811565d:	89 1c 24             	mov    %ebx,(%esp)
 8115660:	e8 8b ee 60 00       	call   87244f0 <_ZdlPv>
 8115665:	89 f8                	mov    %edi,%eax
 8115667:	89 f2                	mov    %esi,%edx
 8115669:	e9 f7 02 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811566e:	89 d8                	mov    %ebx,%eax
 8115670:	89 c2                	mov    %eax,%edx
 8115672:	8b 45 08             	mov    0x8(%ebp),%eax
 8115675:	89 90 58 01 00 00    	mov    %edx,0x158(%eax)
 811567b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115682:	e8 c9 ed 60 00       	call   8724450 <_Znwj>
 8115687:	89 c3                	mov    %eax,%ebx
 8115689:	89 d8                	mov    %ebx,%eax
 811568b:	89 04 24             	mov    %eax,(%esp)
 811568e:	e8 bd 1e 00 00       	call   8117550 <_ZN18CWeekendBonusEventC1Ev>
 8115693:	eb 15                	jmp    81156aa <_ZN13CEventManager16InitEventManagerEv+0x8de>
 8115695:	89 d6                	mov    %edx,%esi
 8115697:	89 c7                	mov    %eax,%edi
 8115699:	89 1c 24             	mov    %ebx,(%esp)
 811569c:	e8 4f ee 60 00       	call   87244f0 <_ZdlPv>
 81156a1:	89 f8                	mov    %edi,%eax
 81156a3:	89 f2                	mov    %esi,%edx
 81156a5:	e9 bb 02 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81156aa:	89 d8                	mov    %ebx,%eax
 81156ac:	89 c2                	mov    %eax,%edx
 81156ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81156b1:	89 90 5c 01 00 00    	mov    %edx,0x15c(%eax)
 81156b7:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81156be:	e8 8d ed 60 00       	call   8724450 <_Znwj>
 81156c3:	89 c3                	mov    %eax,%ebx
 81156c5:	89 d8                	mov    %ebx,%eax
 81156c7:	89 04 24             	mov    %eax,(%esp)
 81156ca:	e8 a1 f2 06 00       	call   8184970 <_ZN15CConditionEventC1Ev>
 81156cf:	eb 15                	jmp    81156e6 <_ZN13CEventManager16InitEventManagerEv+0x91a>
 81156d1:	89 d6                	mov    %edx,%esi
 81156d3:	89 c7                	mov    %eax,%edi
 81156d5:	89 1c 24             	mov    %ebx,(%esp)
 81156d8:	e8 13 ee 60 00       	call   87244f0 <_ZdlPv>
 81156dd:	89 f8                	mov    %edi,%eax
 81156df:	89 f2                	mov    %esi,%edx
 81156e1:	e9 7f 02 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81156e6:	89 d8                	mov    %ebx,%eax
 81156e8:	89 c2                	mov    %eax,%edx
 81156ea:	8b 45 08             	mov    0x8(%ebp),%eax
 81156ed:	89 90 c4 01 00 00    	mov    %edx,0x1c4(%eax)
 81156f3:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81156fa:	e8 51 ed 60 00       	call   8724450 <_Znwj>
 81156ff:	89 c3                	mov    %eax,%ebx
 8115701:	89 d8                	mov    %ebx,%eax
 8115703:	89 04 24             	mov    %eax,(%esp)
 8115706:	e8 6d 1f 00 00       	call   8117678 <_ZN15CUXGameLogEventC1Ev>
 811570b:	eb 15                	jmp    8115722 <_ZN13CEventManager16InitEventManagerEv+0x956>
 811570d:	89 d6                	mov    %edx,%esi
 811570f:	89 c7                	mov    %eax,%edi
 8115711:	89 1c 24             	mov    %ebx,(%esp)
 8115714:	e8 d7 ed 60 00       	call   87244f0 <_ZdlPv>
 8115719:	89 f8                	mov    %edi,%eax
 811571b:	89 f2                	mov    %esi,%edx
 811571d:	e9 43 02 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115722:	89 d8                	mov    %ebx,%eax
 8115724:	89 c2                	mov    %eax,%edx
 8115726:	8b 45 08             	mov    0x8(%ebp),%eax
 8115729:	89 90 6c 01 00 00    	mov    %edx,0x16c(%eax)
 811572f:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115736:	e8 15 ed 60 00       	call   8724450 <_Znwj>
 811573b:	89 c3                	mov    %eax,%ebx
 811573d:	89 d8                	mov    %ebx,%eax
 811573f:	89 04 24             	mov    %eax,(%esp)
 8115742:	e8 29 6d fc ff       	call   80dc470 <_ZN22BlueMarbleDungeonEventC1Ev>
 8115747:	eb 15                	jmp    811575e <_ZN13CEventManager16InitEventManagerEv+0x992>
 8115749:	89 d6                	mov    %edx,%esi
 811574b:	89 c7                	mov    %eax,%edi
 811574d:	89 1c 24             	mov    %ebx,(%esp)
 8115750:	e8 9b ed 60 00       	call   87244f0 <_ZdlPv>
 8115755:	89 f8                	mov    %edi,%eax
 8115757:	89 f2                	mov    %esi,%edx
 8115759:	e9 07 02 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811575e:	89 d8                	mov    %ebx,%eax
 8115760:	89 c2                	mov    %eax,%edx
 8115762:	8b 45 08             	mov    0x8(%ebp),%eax
 8115765:	89 90 7c 01 00 00    	mov    %edx,0x17c(%eax)
 811576b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115772:	e8 d9 ec 60 00       	call   8724450 <_Znwj>
 8115777:	89 c3                	mov    %eax,%ebx
 8115779:	89 d8                	mov    %ebx,%eax
 811577b:	89 04 24             	mov    %eax,(%esp)
 811577e:	e8 1d 20 00 00       	call   81177a0 <_ZN20CStopOverlabExpEventC1Ev>
 8115783:	eb 15                	jmp    811579a <_ZN13CEventManager16InitEventManagerEv+0x9ce>
 8115785:	89 d6                	mov    %edx,%esi
 8115787:	89 c7                	mov    %eax,%edi
 8115789:	89 1c 24             	mov    %ebx,(%esp)
 811578c:	e8 5f ed 60 00       	call   87244f0 <_ZdlPv>
 8115791:	89 f8                	mov    %edi,%eax
 8115793:	89 f2                	mov    %esi,%edx
 8115795:	e9 cb 01 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811579a:	89 d8                	mov    %ebx,%eax
 811579c:	89 c2                	mov    %eax,%edx
 811579e:	8b 45 08             	mov    0x8(%ebp),%eax
 81157a1:	89 90 98 01 00 00    	mov    %edx,0x198(%eax)
 81157a7:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 81157ae:	e8 9d ec 60 00       	call   8724450 <_Znwj>
 81157b3:	89 c3                	mov    %eax,%ebx
 81157b5:	89 d8                	mov    %ebx,%eax
 81157b7:	89 04 24             	mov    %eax,(%esp)
 81157ba:	e8 6d 13 00 00       	call   8116b2c <_ZN22CEventAdvanceAltarOpenC1Ev>
 81157bf:	eb 15                	jmp    81157d6 <_ZN13CEventManager16InitEventManagerEv+0xa0a>
 81157c1:	89 d6                	mov    %edx,%esi
 81157c3:	89 c7                	mov    %eax,%edi
 81157c5:	89 1c 24             	mov    %ebx,(%esp)
 81157c8:	e8 23 ed 60 00       	call   87244f0 <_ZdlPv>
 81157cd:	89 f8                	mov    %edi,%eax
 81157cf:	89 f2                	mov    %esi,%edx
 81157d1:	e9 8f 01 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81157d6:	89 d8                	mov    %ebx,%eax
 81157d8:	89 c2                	mov    %eax,%edx
 81157da:	8b 45 08             	mov    0x8(%ebp),%eax
 81157dd:	89 90 dc 01 00 00    	mov    %edx,0x1dc(%eax)
 81157e3:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 81157ea:	e8 61 ec 60 00       	call   8724450 <_Znwj>
 81157ef:	89 c3                	mov    %eax,%ebx
 81157f1:	89 d8                	mov    %ebx,%eax
 81157f3:	89 04 24             	mov    %eax,(%esp)
 81157f6:	e8 a5 b6 08 00       	call   81a0ea0 <_ZN17CAradRyosikaEventC1Ev>
 81157fb:	eb 15                	jmp    8115812 <_ZN13CEventManager16InitEventManagerEv+0xa46>
 81157fd:	89 d6                	mov    %edx,%esi
 81157ff:	89 c7                	mov    %eax,%edi
 8115801:	89 1c 24             	mov    %ebx,(%esp)
 8115804:	e8 e7 ec 60 00       	call   87244f0 <_ZdlPv>
 8115809:	89 f8                	mov    %edi,%eax
 811580b:	89 f2                	mov    %esi,%edx
 811580d:	e9 53 01 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115812:	89 d8                	mov    %ebx,%eax
 8115814:	89 c2                	mov    %eax,%edx
 8115816:	8b 45 08             	mov    0x8(%ebp),%eax
 8115819:	89 90 d0 01 00 00    	mov    %edx,0x1d0(%eax)
 811581f:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115826:	e8 25 ec 60 00       	call   8724450 <_Znwj>
 811582b:	89 c3                	mov    %eax,%ebx
 811582d:	89 d8                	mov    %ebx,%eax
 811582f:	89 04 24             	mov    %eax,(%esp)
 8115832:	e8 01 8f 08 00       	call   819e738 <_ZN16Arad_MomijiEventC1Ev>
 8115837:	eb 15                	jmp    811584e <_ZN13CEventManager16InitEventManagerEv+0xa82>
 8115839:	89 d6                	mov    %edx,%esi
 811583b:	89 c7                	mov    %eax,%edi
 811583d:	89 1c 24             	mov    %ebx,(%esp)
 8115840:	e8 ab ec 60 00       	call   87244f0 <_ZdlPv>
 8115845:	89 f8                	mov    %edi,%eax
 8115847:	89 f2                	mov    %esi,%edx
 8115849:	e9 17 01 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811584e:	89 d8                	mov    %ebx,%eax
 8115850:	89 c2                	mov    %eax,%edx
 8115852:	8b 45 08             	mov    0x8(%ebp),%eax
 8115855:	89 90 6c 02 00 00    	mov    %edx,0x26c(%eax)
 811585b:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115862:	e8 e9 eb 60 00       	call   8724450 <_Znwj>
 8115867:	89 c3                	mov    %eax,%ebx
 8115869:	89 d8                	mov    %ebx,%eax
 811586b:	89 04 24             	mov    %eax,(%esp)
 811586e:	e8 85 11 00 00       	call   81169f8 <_ZN19LevelupSupportEventC1Ev>
 8115873:	eb 15                	jmp    811588a <_ZN13CEventManager16InitEventManagerEv+0xabe>
 8115875:	89 d6                	mov    %edx,%esi
 8115877:	89 c7                	mov    %eax,%edi
 8115879:	89 1c 24             	mov    %ebx,(%esp)
 811587c:	e8 6f ec 60 00       	call   87244f0 <_ZdlPv>
 8115881:	89 f8                	mov    %edi,%eax
 8115883:	89 f2                	mov    %esi,%edx
 8115885:	e9 db 00 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 811588a:	89 d8                	mov    %ebx,%eax
 811588c:	89 c2                	mov    %eax,%edx
 811588e:	8b 45 08             	mov    0x8(%ebp),%eax
 8115891:	89 90 78 02 00 00    	mov    %edx,0x278(%eax)
 8115897:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 811589e:	e8 ad eb 60 00       	call   8724450 <_Znwj>
 81158a3:	89 c3                	mov    %eax,%ebx
 81158a5:	89 d8                	mov    %ebx,%eax
 81158a7:	89 04 24             	mov    %eax,(%esp)
 81158aa:	e8 b7 67 05 00       	call   816c066 <_ZN14CEventStayTimeC1Ev>
 81158af:	eb 15                	jmp    81158c6 <_ZN13CEventManager16InitEventManagerEv+0xafa>
 81158b1:	89 d6                	mov    %edx,%esi
 81158b3:	89 c7                	mov    %eax,%edi
 81158b5:	89 1c 24             	mov    %ebx,(%esp)
 81158b8:	e8 33 ec 60 00       	call   87244f0 <_ZdlPv>
 81158bd:	89 f8                	mov    %edi,%eax
 81158bf:	89 f2                	mov    %esi,%edx
 81158c1:	e9 9f 00 00 00       	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81158c6:	89 d8                	mov    %ebx,%eax
 81158c8:	89 c2                	mov    %eax,%edx
 81158ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81158cd:	89 90 7c 02 00 00    	mov    %edx,0x27c(%eax)
 81158d3:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 81158da:	e8 71 eb 60 00       	call   8724450 <_Znwj>
 81158df:	89 c3                	mov    %eax,%ebx
 81158e1:	89 d8                	mov    %ebx,%eax
 81158e3:	89 04 24             	mov    %eax,(%esp)
 81158e6:	e8 b9 e1 04 00       	call   8163aa4 <_ZN15CEventCreateDnfC1Ev>
 81158eb:	eb 12                	jmp    81158ff <_ZN13CEventManager16InitEventManagerEv+0xb33>
 81158ed:	89 d6                	mov    %edx,%esi
 81158ef:	89 c7                	mov    %eax,%edi
 81158f1:	89 1c 24             	mov    %ebx,(%esp)
 81158f4:	e8 f7 eb 60 00       	call   87244f0 <_ZdlPv>
 81158f9:	89 f8                	mov    %edi,%eax
 81158fb:	89 f2                	mov    %esi,%edx
 81158fd:	eb 66                	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 81158ff:	89 d8                	mov    %ebx,%eax
 8115901:	89 c2                	mov    %eax,%edx
 8115903:	8b 45 08             	mov    0x8(%ebp),%eax
 8115906:	89 90 80 02 00 00    	mov    %edx,0x280(%eax)
 811590c:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8115913:	e8 38 eb 60 00       	call   8724450 <_Znwj>
 8115918:	89 c3                	mov    %eax,%ebx
 811591a:	89 d8                	mov    %ebx,%eax
 811591c:	89 04 24             	mov    %eax,(%esp)
 811591f:	e8 8c f0 04 00       	call   81649b0 <_ZN14EventGiveMeBoxC1Ev>
 8115924:	eb 12                	jmp    8115938 <_ZN13CEventManager16InitEventManagerEv+0xb6c>
 8115926:	89 d6                	mov    %edx,%esi
 8115928:	89 c7                	mov    %eax,%edi
 811592a:	89 1c 24             	mov    %ebx,(%esp)
 811592d:	e8 be eb 60 00       	call   87244f0 <_ZdlPv>
 8115932:	89 f8                	mov    %edi,%eax
 8115934:	89 f2                	mov    %esi,%edx
 8115936:	eb 2d                	jmp    8115965 <_ZN13CEventManager16InitEventManagerEv+0xb99>
 8115938:	89 d8                	mov    %ebx,%eax
 811593a:	89 c2                	mov    %eax,%edx
 811593c:	8b 45 08             	mov    0x8(%ebp),%eax
 811593f:	89 90 94 02 00 00    	mov    %edx,0x294(%eax)
 8115945:	8b 45 08             	mov    0x8(%ebp),%eax
 8115948:	89 04 24             	mov    %eax,(%esp)
 811594b:	e8 66 00 00 00       	call   81159b6 <_ZN13CEventManager15LoadEventFromDBEv>
 8115950:	83 f0 01             	xor    $0x1,%eax
 8115953:	84 c0                	test   %al,%al
 8115955:	74 07                	je     811595e <_ZN13CEventManager16InitEventManagerEv+0xb92>
 8115957:	bb 00 00 00 00       	mov    $0x0,%ebx
 811595c:	eb 19                	jmp    8115977 <_ZN13CEventManager16InitEventManagerEv+0xbab>
 811595e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8115963:	eb 12                	jmp    8115977 <_ZN13CEventManager16InitEventManagerEv+0xbab>
 8115965:	89 04 24             	mov    %eax,(%esp)
 8115968:	e8 73 03 61 00       	call   8725ce0 <__cxa_begin_catch>
 811596d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8115972:	e8 b9 02 61 00       	call   8725c30 <__cxa_end_catch>
 8115977:	89 d8                	mov    %ebx,%eax
 8115979:	83 c4 1c             	add    $0x1c,%esp
 811597c:	5b                   	pop    %ebx
 811597d:	5e                   	pop    %esi
 811597e:	5f                   	pop    %edi
 811597f:	5d                   	pop    %ebp
 8115980:	c3                   	ret
 8115981:	90                   	nop

```

```c
// CEventManager::InitEventManager @ 0x8114dcc

/* CEventManager::InitEventManager() */

bool __thiscall CEventManager::InitEventManager(CEventManager *this)

{
  char cVar1;
  CUnlimitFatigueEvent *this_00;
  CMaxFatigueFactorEvent *this_01;
  CExpDoubleEvent *this_02;
  CCoinEventPerDay *this_03;
  CCoinEventOnCharCreate *this_04;
  CLeadingChannelEvent *this_05;
  CItemDropRatioEvent *this_06;
  CPCRoomBurningEvent *this_07;
  CGuildWarEvent *this_08;
  CPCRoomFatigueEvent *this_09;
  CReformingDanjinEvent *this_10;
  CCoinRefillEvent *this_11;
  CBurningFatigueEvent *this_12;
  CClearRewardCardEvent *this_13;
  CCeraShopBonusItemEvent *this_14;
  CTournamentPvPEvent *this_15;
  CGoldCardBlankItemEvent *this_16;
  CPcRoomCardBlankItemEvent *this_17;
  CPowerWarEvent *this_18;
  CCollectArchieveEventLog *this_19;
  CPCRoomWorldDropEvent *this_20;
  CPartyExpBonusEvent *this_21;
  CStabToDeathEvent *this_22;
  CSchoolMatchEvent *this_23;
  CAutoMarketConditionsControlEvent *this_24;
  CVendingMachineBonusEvent *this_25;
  CBurnigGoldMonsterEvent *this_26;
  CNoNeedGoldOnGuildCreateEvent *this_27;
  CDeathTowerWinPointEvent *this_28;
  CNotApplyBalkeunEvent *this_29;
  CCharacterDayEvent *this_30;
  CRestrictCharacCreationEvent *this_31;
  CReduceUpgradeItemPay *this_32;
  COnTimeEvent *this_33;
  CBreakAwayPreventEvent *this_34;
  CPowerWarVictoriousEvent *this_35;
  CSecretShopEvent *this_36;
  CFatigueAttendance *this_37;
  CWeekendBonusEvent *this_38;
  CConditionEvent *this_39;
  CUXGameLogEvent *this_40;
  BlueMarbleDungeonEvent *this_41;
  CStopOverlabExpEvent *this_42;
  CEventAdvanceAltarOpen *this_43;
  CAradRyosikaEvent *this_44;
  Arad_MomijiEvent *this_45;
  LevelupSupportEvent *this_46;
  CEventStayTime *this_47;
  CEventCreateDnf *this_48;
  EventGiveMeBox *this_49;
  
                    /* try { // try from 08114ddc to 08114de0 has its CatchHandler @ 08115965 */
  this_00 = operator_new(0xc);
                    /* try { // try from 08114de8 to 08114dec has its CatchHandler @ 08114def */
  CUnlimitFatigueEvent::CUnlimitFatigueEvent(this_00);
  *(CUnlimitFatigueEvent **)(this + 4) = this_00;
                    /* try { // try from 08114e15 to 08114e19 has its CatchHandler @ 08115965 */
  this_01 = operator_new(0x10);
                    /* try { // try from 08114e21 to 08114e25 has its CatchHandler @ 08114e28 */
  CMaxFatigueFactorEvent::CMaxFatigueFactorEvent(this_01);
  *(CMaxFatigueFactorEvent **)(this + 8) = this_01;
                    /* try { // try from 08114e4e to 08114e52 has its CatchHandler @ 08115965 */
  this_02 = operator_new(0x10);
                    /* try { // try from 08114e5a to 08114e5e has its CatchHandler @ 08114e61 */
  CExpDoubleEvent::CExpDoubleEvent(this_02);
  *(CExpDoubleEvent **)(this + 0xc) = this_02;
                    /* try { // try from 08114e87 to 08114e8b has its CatchHandler @ 08115965 */
  this_03 = operator_new(0x10);
                    /* try { // try from 08114e93 to 08114e97 has its CatchHandler @ 08114e9a */
  CCoinEventPerDay::CCoinEventPerDay(this_03);
  *(CCoinEventPerDay **)(this + 0x10) = this_03;
                    /* try { // try from 08114ec0 to 08114ec4 has its CatchHandler @ 08115965 */
  this_04 = operator_new(0x10);
                    /* try { // try from 08114ecc to 08114ed0 has its CatchHandler @ 08114ed3 */
  CCoinEventOnCharCreate::CCoinEventOnCharCreate(this_04);
  *(CCoinEventOnCharCreate **)(this + 0x14) = this_04;
                    /* try { // try from 08114ef9 to 08114efd has its CatchHandler @ 08115965 */
  this_05 = operator_new(0x10);
                    /* try { // try from 08114f05 to 08114f09 has its CatchHandler @ 08114f0c */
  CLeadingChannelEvent::CLeadingChannelEvent(this_05);
  *(CLeadingChannelEvent **)(this + 0x18) = this_05;
                    /* try { // try from 08114f32 to 08114f36 has its CatchHandler @ 08115965 */
  this_06 = operator_new(0x10);
                    /* try { // try from 08114f3e to 08114f42 has its CatchHandler @ 08114f45 */
  CItemDropRatioEvent::CItemDropRatioEvent(this_06);
  *(CItemDropRatioEvent **)(this + 0x1c) = this_06;
                    /* try { // try from 08114f6b to 08114f6f has its CatchHandler @ 08115965 */
  this_07 = operator_new(0x10);
                    /* try { // try from 08114f77 to 08114f7b has its CatchHandler @ 08114f7e */
  CPCRoomBurningEvent::CPCRoomBurningEvent(this_07);
  *(CPCRoomBurningEvent **)(this + 0x20) = this_07;
                    /* try { // try from 08114fa4 to 08114fa8 has its CatchHandler @ 08115965 */
  this_08 = operator_new(0x10);
                    /* try { // try from 08114fb0 to 08114fb4 has its CatchHandler @ 08114fb7 */
  CGuildWarEvent::CGuildWarEvent(this_08);
  *(CGuildWarEvent **)(this + 0x84) = this_08;
                    /* try { // try from 08114fe0 to 08114fe4 has its CatchHandler @ 08115965 */
  this_09 = operator_new(0xc);
                    /* try { // try from 08114fec to 08114ff0 has its CatchHandler @ 08114ff3 */
  CPCRoomFatigueEvent::CPCRoomFatigueEvent(this_09);
  *(CPCRoomFatigueEvent **)(this + 0x28) = this_09;
                    /* try { // try from 08115019 to 0811501d has its CatchHandler @ 08115965 */
  this_10 = operator_new(0xc);
                    /* try { // try from 08115025 to 08115029 has its CatchHandler @ 0811502c */
  CReformingDanjinEvent::CReformingDanjinEvent(this_10);
  *(CReformingDanjinEvent **)(this + 0x30) = this_10;
                    /* try { // try from 08115052 to 08115056 has its CatchHandler @ 08115965 */
  this_11 = operator_new(0x20);
                    /* try { // try from 0811505e to 08115062 has its CatchHandler @ 08115065 */
  CCoinRefillEvent::CCoinRefillEvent(this_11);
  *(CCoinRefillEvent **)(this + 0x34) = this_11;
                    /* try { // try from 0811508b to 0811508f has its CatchHandler @ 08115965 */
  this_12 = operator_new(0x10);
                    /* try { // try from 08115097 to 0811509b has its CatchHandler @ 0811509e */
  CBurningFatigueEvent::CBurningFatigueEvent(this_12);
  *(CBurningFatigueEvent **)(this + 0x3c) = this_12;
                    /* try { // try from 081150c4 to 081150c8 has its CatchHandler @ 08115965 */
  this_13 = operator_new(0xc);
                    /* try { // try from 081150d0 to 081150d4 has its CatchHandler @ 081150d7 */
  CClearRewardCardEvent::CClearRewardCardEvent(this_13);
  *(CClearRewardCardEvent **)(this + 0x40) = this_13;
                    /* try { // try from 081150fd to 08115101 has its CatchHandler @ 08115965 */
  this_14 = operator_new(0x10);
                    /* try { // try from 08115109 to 0811510d has its CatchHandler @ 08115110 */
  CCeraShopBonusItemEvent::CCeraShopBonusItemEvent(this_14);
  *(CCeraShopBonusItemEvent **)(this + 0x44) = this_14;
                    /* try { // try from 08115136 to 0811513a has its CatchHandler @ 08115965 */
  this_15 = operator_new(0xc);
                    /* try { // try from 08115142 to 08115146 has its CatchHandler @ 08115149 */
  CTournamentPvPEvent::CTournamentPvPEvent(this_15);
  *(CTournamentPvPEvent **)(this + 0x48) = this_15;
                    /* try { // try from 0811516f to 08115173 has its CatchHandler @ 08115965 */
  this_16 = operator_new(0xc);
                    /* try { // try from 0811517b to 0811517f has its CatchHandler @ 08115182 */
  CGoldCardBlankItemEvent::CGoldCardBlankItemEvent(this_16);
  *(CGoldCardBlankItemEvent **)(this + 0x4c) = this_16;
                    /* try { // try from 081151a8 to 081151ac has its CatchHandler @ 08115965 */
  this_17 = operator_new(0xc);
                    /* try { // try from 081151b4 to 081151b8 has its CatchHandler @ 081151bb */
  CPcRoomCardBlankItemEvent::CPcRoomCardBlankItemEvent(this_17);
  *(CPcRoomCardBlankItemEvent **)(this + 0x74) = this_17;
                    /* try { // try from 081151e1 to 081151e5 has its CatchHandler @ 08115965 */
  this_18 = operator_new(0x10);
                    /* try { // try from 081151ed to 081151f1 has its CatchHandler @ 081151f4 */
  CPowerWarEvent::CPowerWarEvent(this_18);
  *(CPowerWarEvent **)(this + 0x78) = this_18;
                    /* try { // try from 0811521a to 0811521e has its CatchHandler @ 08115965 */
  this_19 = operator_new(0xc);
                    /* try { // try from 08115226 to 0811522a has its CatchHandler @ 0811522d */
  CCollectArchieveEventLog::CCollectArchieveEventLog(this_19);
  *(CCollectArchieveEventLog **)(this + 0x54) = this_19;
                    /* try { // try from 08115253 to 08115257 has its CatchHandler @ 08115965 */
  this_20 = operator_new(0xc);
                    /* try { // try from 0811525f to 08115263 has its CatchHandler @ 08115266 */
  CPCRoomWorldDropEvent::CPCRoomWorldDropEvent(this_20);
  *(CPCRoomWorldDropEvent **)(this + 0x58) = this_20;
                    /* try { // try from 0811528c to 08115290 has its CatchHandler @ 08115965 */
  this_21 = operator_new(0x10);
                    /* try { // try from 08115298 to 0811529c has its CatchHandler @ 0811529f */
  CPartyExpBonusEvent::CPartyExpBonusEvent(this_21);
  *(CPartyExpBonusEvent **)(this + 0x60) = this_21;
                    /* try { // try from 081152c5 to 081152c9 has its CatchHandler @ 08115965 */
  this_22 = operator_new(0xc);
                    /* try { // try from 081152d1 to 081152d5 has its CatchHandler @ 081152d8 */
  CStabToDeathEvent::CStabToDeathEvent(this_22);
  *(CStabToDeathEvent **)(this + 0x80) = this_22;
                    /* try { // try from 08115301 to 08115305 has its CatchHandler @ 08115965 */
  this_23 = operator_new(0x18);
                    /* try { // try from 0811530d to 08115311 has its CatchHandler @ 08115314 */
  CSchoolMatchEvent::CSchoolMatchEvent(this_23);
  *(CSchoolMatchEvent **)(this + 0x24) = this_23;
                    /* try { // try from 0811533a to 0811533e has its CatchHandler @ 08115965 */
  this_24 = operator_new(0xc);
                    /* try { // try from 08115346 to 0811534a has its CatchHandler @ 0811534d */
  CAutoMarketConditionsControlEvent::CAutoMarketConditionsControlEvent(this_24);
  *(CAutoMarketConditionsControlEvent **)(this + 0x88) = this_24;
                    /* try { // try from 08115376 to 0811537a has its CatchHandler @ 08115965 */
  this_25 = operator_new(0xc);
                    /* try { // try from 08115382 to 08115386 has its CatchHandler @ 08115389 */
  CVendingMachineBonusEvent::CVendingMachineBonusEvent(this_25);
  *(CVendingMachineBonusEvent **)(this + 0x8c) = this_25;
                    /* try { // try from 081153b2 to 081153b6 has its CatchHandler @ 08115965 */
  this_26 = operator_new(0xc);
                    /* try { // try from 081153be to 081153c2 has its CatchHandler @ 081153c5 */
  CBurnigGoldMonsterEvent::CBurnigGoldMonsterEvent(this_26);
  *(CBurnigGoldMonsterEvent **)(this + 0x90) = this_26;
                    /* try { // try from 081153ee to 081153f2 has its CatchHandler @ 08115965 */
  this_27 = operator_new(0xc);
                    /* try { // try from 081153fa to 081153fe has its CatchHandler @ 08115401 */
  CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent(this_27);
  *(CNoNeedGoldOnGuildCreateEvent **)(this + 0x98) = this_27;
                    /* try { // try from 0811542a to 0811542e has its CatchHandler @ 08115965 */
  this_28 = operator_new(0x10);
                    /* try { // try from 08115436 to 0811543a has its CatchHandler @ 0811543d */
  CDeathTowerWinPointEvent::CDeathTowerWinPointEvent(this_28);
  *(CDeathTowerWinPointEvent **)(this + 0x9c) = this_28;
                    /* try { // try from 08115466 to 0811546a has its CatchHandler @ 08115965 */
  this_29 = operator_new(0xc);
                    /* try { // try from 08115472 to 08115476 has its CatchHandler @ 08115479 */
  CNotApplyBalkeunEvent::CNotApplyBalkeunEvent(this_29);
  *(CNotApplyBalkeunEvent **)(this + 0xa0) = this_29;
                    /* try { // try from 081154a2 to 081154a6 has its CatchHandler @ 08115965 */
  this_30 = operator_new(0xc);
                    /* try { // try from 081154ae to 081154b2 has its CatchHandler @ 081154b5 */
  CCharacterDayEvent::CCharacterDayEvent(this_30);
  *(CCharacterDayEvent **)(this + 0xa4) = this_30;
                    /* try { // try from 081154de to 081154e2 has its CatchHandler @ 08115965 */
  this_31 = operator_new(0x10);
                    /* try { // try from 081154ea to 081154ee has its CatchHandler @ 081154f1 */
  CRestrictCharacCreationEvent::CRestrictCharacCreationEvent(this_31);
  *(CRestrictCharacCreationEvent **)(this + 0xc4) = this_31;
                    /* try { // try from 0811551a to 0811551e has its CatchHandler @ 08115965 */
  this_32 = operator_new(0xc);
                    /* try { // try from 08115526 to 0811552a has its CatchHandler @ 0811552d */
  CReduceUpgradeItemPay::CReduceUpgradeItemPay(this_32);
  *(CReduceUpgradeItemPay **)(this + 200) = this_32;
                    /* try { // try from 08115556 to 0811555a has its CatchHandler @ 08115965 */
  this_33 = operator_new(0x60);
                    /* try { // try from 08115562 to 08115566 has its CatchHandler @ 08115569 */
  COnTimeEvent::COnTimeEvent(this_33);
  *(COnTimeEvent **)(this + 0xcc) = this_33;
                    /* try { // try from 08115592 to 08115596 has its CatchHandler @ 08115965 */
  this_34 = operator_new(0xc);
                    /* try { // try from 0811559e to 081155a2 has its CatchHandler @ 081155a5 */
  CBreakAwayPreventEvent::CBreakAwayPreventEvent(this_34);
  *(CBreakAwayPreventEvent **)(this + 0xd0) = this_34;
                    /* try { // try from 081155ce to 081155d2 has its CatchHandler @ 08115965 */
  this_35 = operator_new(0x10);
                    /* try { // try from 081155da to 081155de has its CatchHandler @ 081155e1 */
  CPowerWarVictoriousEvent::CPowerWarVictoriousEvent(this_35);
  *(CPowerWarVictoriousEvent **)(this + 0xd4) = this_35;
                    /* try { // try from 0811560a to 0811560e has its CatchHandler @ 08115965 */
  this_36 = operator_new(0xc);
                    /* try { // try from 08115616 to 0811561a has its CatchHandler @ 0811561d */
  CSecretShopEvent::CSecretShopEvent(this_36);
  *(CSecretShopEvent **)(this + 0xe8) = this_36;
                    /* try { // try from 08115646 to 0811564a has its CatchHandler @ 08115965 */
  this_37 = operator_new(0xc);
                    /* try { // try from 08115652 to 08115656 has its CatchHandler @ 08115659 */
  CFatigueAttendance::CFatigueAttendance(this_37);
  *(CFatigueAttendance **)(this + 0x158) = this_37;
                    /* try { // try from 08115682 to 08115686 has its CatchHandler @ 08115965 */
  this_38 = operator_new(0xc);
                    /* try { // try from 0811568e to 08115692 has its CatchHandler @ 08115695 */
  CWeekendBonusEvent::CWeekendBonusEvent(this_38);
  *(CWeekendBonusEvent **)(this + 0x15c) = this_38;
                    /* try { // try from 081156be to 081156c2 has its CatchHandler @ 08115965 */
  this_39 = operator_new(0xc);
                    /* try { // try from 081156ca to 081156ce has its CatchHandler @ 081156d1 */
  CConditionEvent::CConditionEvent(this_39);
  *(CConditionEvent **)(this + 0x1c4) = this_39;
                    /* try { // try from 081156fa to 081156fe has its CatchHandler @ 08115965 */
  this_40 = operator_new(0xc);
                    /* try { // try from 08115706 to 0811570a has its CatchHandler @ 0811570d */
  CUXGameLogEvent::CUXGameLogEvent(this_40);
  *(CUXGameLogEvent **)(this + 0x16c) = this_40;
                    /* try { // try from 08115736 to 0811573a has its CatchHandler @ 08115965 */
  this_41 = operator_new(0xc);
                    /* try { // try from 08115742 to 08115746 has its CatchHandler @ 08115749 */
  BlueMarbleDungeonEvent::BlueMarbleDungeonEvent(this_41);
  *(BlueMarbleDungeonEvent **)(this + 0x17c) = this_41;
                    /* try { // try from 08115772 to 08115776 has its CatchHandler @ 08115965 */
  this_42 = operator_new(0xc);
                    /* try { // try from 0811577e to 08115782 has its CatchHandler @ 08115785 */
  CStopOverlabExpEvent::CStopOverlabExpEvent(this_42);
  *(CStopOverlabExpEvent **)(this + 0x198) = this_42;
                    /* try { // try from 081157ae to 081157b2 has its CatchHandler @ 08115965 */
  this_43 = operator_new(0xc);
                    /* try { // try from 081157ba to 081157be has its CatchHandler @ 081157c1 */
  CEventAdvanceAltarOpen::CEventAdvanceAltarOpen(this_43);
  *(CEventAdvanceAltarOpen **)(this + 0x1dc) = this_43;
                    /* try { // try from 081157ea to 081157ee has its CatchHandler @ 08115965 */
  this_44 = operator_new(0x14);
                    /* try { // try from 081157f6 to 081157fa has its CatchHandler @ 081157fd */
  CAradRyosikaEvent::CAradRyosikaEvent(this_44);
  *(CAradRyosikaEvent **)(this + 0x1d0) = this_44;
                    /* try { // try from 08115826 to 0811582a has its CatchHandler @ 08115965 */
  this_45 = operator_new(0xc);
                    /* try { // try from 08115832 to 08115836 has its CatchHandler @ 08115839 */
  Arad_MomijiEvent::Arad_MomijiEvent(this_45);
  *(Arad_MomijiEvent **)(this + 0x26c) = this_45;
                    /* try { // try from 08115862 to 08115866 has its CatchHandler @ 08115965 */
  this_46 = operator_new(0xc);
                    /* try { // try from 0811586e to 08115872 has its CatchHandler @ 08115875 */
  LevelupSupportEvent::LevelupSupportEvent(this_46);
  *(LevelupSupportEvent **)(this + 0x278) = this_46;
                    /* try { // try from 0811589e to 081158a2 has its CatchHandler @ 08115965 */
  this_47 = operator_new(0x14);
                    /* try { // try from 081158aa to 081158ae has its CatchHandler @ 081158b1 */
  CEventStayTime::CEventStayTime(this_47);
  *(CEventStayTime **)(this + 0x27c) = this_47;
                    /* try { // try from 081158da to 081158de has its CatchHandler @ 08115965 */
  this_48 = operator_new(0x18);
                    /* try { // try from 081158e6 to 081158ea has its CatchHandler @ 081158ed */
  CEventCreateDnf::CEventCreateDnf(this_48);
  *(CEventCreateDnf **)(this + 0x280) = this_48;
                    /* try { // try from 08115913 to 08115917 has its CatchHandler @ 08115965 */
  this_49 = operator_new(0xc);
                    /* try { // try from 0811591f to 08115923 has its CatchHandler @ 08115926 */
  EventGiveMeBox::EventGiveMeBox(this_49);
  *(EventGiveMeBox **)(this + 0x294) = this_49;
                    /* try { // try from 0811594b to 0811594f has its CatchHandler @ 08115965 */
  cVar1 = LoadEventFromDB(this);
  return cVar1 == '\x01';
}

```

---

## IsExistOverlappedExpBonusEvent

```asm
// === 08116212 CEventManager::IsExistOverlappedExpBonusEvent  [0x08116212-0x8116275] ===
 8116212:	55                   	push   %ebp
 8116213:	89 e5                	mov    %esp,%ebp
 8116215:	83 ec 28             	sub    $0x28,%esp
 8116218:	a1 30 f7 41 09       	mov    0x941f730,%eax
 811621d:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 8116224:	00 
 8116225:	89 04 24             	mov    %eax,(%esp)
 8116228:	e8 6b f7 ff ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 811622d:	8b 10                	mov    (%eax),%edx
 811622f:	83 c2 34             	add    $0x34,%edx
 8116232:	8b 12                	mov    (%edx),%edx
 8116234:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811623b:	00 
 811623c:	89 04 24             	mov    %eax,(%esp)
 811623f:	ff d2                	call   *%edx
 8116241:	88 45 f6             	mov    %al,-0xa(%ebp)
 8116244:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 8116249:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8116250:	00 
 8116251:	89 04 24             	mov    %eax,(%esp)
 8116254:	e8 d3 1a 3a 00       	call   84b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>
 8116259:	88 45 f7             	mov    %al,-0x9(%ebp)
 811625c:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 8116260:	75 06                	jne    8116268 <_ZN13CEventManager30IsExistOverlappedExpBonusEventEv+0x56>
 8116262:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8116266:	74 07                	je     811626f <_ZN13CEventManager30IsExistOverlappedExpBonusEventEv+0x5d>
 8116268:	b8 01 00 00 00       	mov    $0x1,%eax
 811626d:	eb 05                	jmp    8116274 <_ZN13CEventManager30IsExistOverlappedExpBonusEventEv+0x62>
 811626f:	b8 00 00 00 00       	mov    $0x0,%eax
 8116274:	c9                   	leave
 8116275:	c3                   	ret

```

```c
// CEventManager::IsExistOverlappedExpBonusEvent @ 0x8116212

/* CEventManager::IsExistOverlappedExpBonusEvent() */

undefined4 CEventManager::IsExistOverlappedExpBonusEvent(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)GetRepeatEvent(GlobalData::s_event_manager,0x66);
  cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  cVar2 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,2);
  if ((cVar1 == '\0') && (cVar2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## LoadEventFromDB

```asm
// === 081159b6 CEventManager::LoadEventFromDB  [0x081159b6-0x8115bf3] ===
 81159b6:	55                   	push   %ebp
 81159b7:	89 e5                	mov    %esp,%ebp
 81159b9:	57                   	push   %edi
 81159ba:	56                   	push   %esi
 81159bb:	53                   	push   %ebx
 81159bc:	83 ec 6c             	sub    $0x6c,%esp
 81159bf:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81159c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81159cb:	00 
 81159cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81159d3:	00 
 81159d4:	89 04 24             	mov    %eax,(%esp)
 81159d7:	e8 62 f8 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81159dc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81159df:	e8 9d 67 fb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81159e4:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81159ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 81159ee:	c7 44 24 04 3c df b4 	movl   $0x8b4df3c,0x4(%esp)
 81159f5:	08 
 81159f6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81159f9:	89 04 24             	mov    %eax,(%esp)
 81159fc:	e8 bf e7 2d 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8115a01:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8115a08:	00 
 8115a09:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8115a10:	00 
 8115a11:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8115a18:	00 
 8115a19:	c7 44 24 08 96 02 00 	movl   $0x296,0x8(%esp)
 8115a20:	00 
 8115a21:	c7 44 24 04 40 ec b4 	movl   $0x8b4ec40,0x4(%esp)
 8115a28:	08 
 8115a29:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8115a2c:	89 04 24             	mov    %eax,(%esp)
 8115a2f:	e8 12 9d 43 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8115a34:	c7 44 24 04 db df b4 	movl   $0x8b4dfdb,0x4(%esp)
 8115a3b:	08 
 8115a3c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8115a3f:	89 04 24             	mov    %eax,(%esp)
 8115a42:	e8 41 9d 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8115a47:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8115a4e:	00 
 8115a4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8115a52:	89 04 24             	mov    %eax,(%esp)
 8115a55:	e8 cc e8 2d 00       	call   83f4326 <_ZN5MySQL4execEb>
 8115a5a:	88 45 db             	mov    %al,-0x25(%ebp)
 8115a5d:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8115a61:	83 f0 01             	xor    $0x1,%eax
 8115a64:	84 c0                	test   %al,%al
 8115a66:	74 0a                	je     8115a72 <_ZN13CEventManager15LoadEventFromDBEv+0xbc>
 8115a68:	b8 00 00 00 00       	mov    $0x0,%eax
 8115a6d:	e9 7a 01 00 00       	jmp    8115bec <_ZN13CEventManager15LoadEventFromDBEv+0x236>
 8115a72:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8115a75:	89 04 24             	mov    %eax,(%esp)
 8115a78:	e8 ef c8 fc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8115a7d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8115a80:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8115a87:	e9 47 01 00 00       	jmp    8115bd3 <_ZN13CEventManager15LoadEventFromDBEv+0x21d>
 8115a8c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8115a8f:	89 04 24             	mov    %eax,(%esp)
 8115a92:	e8 25 ea 2d 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8115a97:	88 45 db             	mov    %al,-0x25(%ebp)
 8115a9a:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8115a9e:	83 f0 01             	xor    $0x1,%eax
 8115aa1:	84 c0                	test   %al,%al
 8115aa3:	0f 85 3d 01 00 00    	jne    8115be6 <_ZN13CEventManager15LoadEventFromDBEv+0x230>
 8115aa9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8115aac:	89 44 24 08          	mov    %eax,0x8(%esp)
 8115ab0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8115ab7:	00 
 8115ab8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8115abb:	89 04 24             	mov    %eax,(%esp)
 8115abe:	e8 69 0e 00 00       	call   811692c <_ZN5MySQL7get_intEiRi>
 8115ac3:	88 45 db             	mov    %al,-0x25(%ebp)
 8115ac6:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8115aca:	83 f0 01             	xor    $0x1,%eax
 8115acd:	84 c0                	test   %al,%al
 8115acf:	74 0a                	je     8115adb <_ZN13CEventManager15LoadEventFromDBEv+0x125>
 8115ad1:	b8 00 00 00 00       	mov    $0x0,%eax
 8115ad6:	e9 11 01 00 00       	jmp    8115bec <_ZN13CEventManager15LoadEventFromDBEv+0x236>
 8115adb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8115ade:	89 44 24 08          	mov    %eax,0x8(%esp)
 8115ae2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8115ae9:	00 
 8115aea:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8115aed:	89 04 24             	mov    %eax,(%esp)
 8115af0:	e8 9b 0e 00 00       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8115af5:	88 45 db             	mov    %al,-0x25(%ebp)
 8115af8:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8115afc:	83 f0 01             	xor    $0x1,%eax
 8115aff:	84 c0                	test   %al,%al
 8115b01:	74 0a                	je     8115b0d <_ZN13CEventManager15LoadEventFromDBEv+0x157>
 8115b03:	b8 00 00 00 00       	mov    $0x0,%eax
 8115b08:	e9 df 00 00 00       	jmp    8115bec <_ZN13CEventManager15LoadEventFromDBEv+0x236>
 8115b0d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8115b10:	83 c0 02             	add    $0x2,%eax
 8115b13:	89 44 24 08          	mov    %eax,0x8(%esp)
 8115b17:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8115b1e:	00 
 8115b1f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8115b22:	89 04 24             	mov    %eax,(%esp)
 8115b25:	e8 66 0e 00 00       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8115b2a:	88 45 db             	mov    %al,-0x25(%ebp)
 8115b2d:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8115b31:	83 f0 01             	xor    $0x1,%eax
 8115b34:	84 c0                	test   %al,%al
 8115b36:	74 0a                	je     8115b42 <_ZN13CEventManager15LoadEventFromDBEv+0x18c>
 8115b38:	b8 00 00 00 00       	mov    $0x0,%eax
 8115b3d:	e9 aa 00 00 00       	jmp    8115bec <_ZN13CEventManager15LoadEventFromDBEv+0x236>
 8115b42:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8115b45:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8115b48:	89 54 24 08          	mov    %edx,0x8(%esp)
 8115b4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115b50:	8b 45 08             	mov    0x8(%ebp),%eax
 8115b53:	89 04 24             	mov    %eax,(%esp)
 8115b56:	e8 6b 01 00 00       	call   8115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>
 8115b5b:	83 f0 01             	xor    $0x1,%eax
 8115b5e:	84 c0                	test   %al,%al
 8115b60:	74 0a                	je     8115b6c <_ZN13CEventManager15LoadEventFromDBEv+0x1b6>
 8115b62:	b8 00 00 00 00       	mov    $0x0,%eax
 8115b67:	e9 80 00 00 00       	jmp    8115bec <_ZN13CEventManager15LoadEventFromDBEv+0x236>
 8115b6c:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 8115b70:	0f b7 f8             	movzwl %ax,%edi
 8115b73:	0f b7 45 b0          	movzwl -0x50(%ebp),%eax
 8115b77:	0f b7 f0             	movzwl %ax,%esi
 8115b7a:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 8115b7d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8115b84:	00 
 8115b85:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8115b8c:	00 
 8115b8d:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8115b94:	00 
 8115b95:	c7 44 24 08 05 03 00 	movl   $0x305,0x8(%esp)
 8115b9c:	00 
 8115b9d:	c7 44 24 04 40 ec b4 	movl   $0x8b4ec40,0x4(%esp)
 8115ba4:	08 
 8115ba5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8115ba8:	89 04 24             	mov    %eax,(%esp)
 8115bab:	e8 96 9b 43 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8115bb0:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8115bb4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8115bb8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8115bbc:	c7 44 24 04 f4 df b4 	movl   $0x8b4dff4,0x4(%esp)
 8115bc3:	08 
 8115bc4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8115bc7:	89 04 24             	mov    %eax,(%esp)
 8115bca:	e8 b9 9b 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8115bcf:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8115bd3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8115bd6:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8115bd9:	0f 9c c0             	setl   %al
 8115bdc:	84 c0                	test   %al,%al
 8115bde:	0f 85 a8 fe ff ff    	jne    8115a8c <_ZN13CEventManager15LoadEventFromDBEv+0xd6>
 8115be4:	eb 01                	jmp    8115be7 <_ZN13CEventManager15LoadEventFromDBEv+0x231>
 8115be6:	90                   	nop
 8115be7:	b8 01 00 00 00       	mov    $0x1,%eax
 8115bec:	83 c4 6c             	add    $0x6c,%esp
 8115bef:	5b                   	pop    %ebx
 8115bf0:	5e                   	pop    %esi
 8115bf1:	5f                   	pop    %edi
 8115bf2:	5d                   	pop    %ebp
 8115bf3:	c3                   	ret

```

```c
// CEventManager::LoadEventFromDB @ 0x81159b6

/* CEventManager::LoadEventFromDB() */

undefined4 __thiscall CEventManager::LoadEventFromDB(CEventManager *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_54;
  int local_50;
  cMyTrace local_4c [16];
  cMyTrace local_3c [19];
  char local_29;
  MySQL *local_28;
  int local_24;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = G_CEnvironment();
  MySQL::set_query(local_28,
                   "seLect event_type, parameter1, parameter2 from dnf_event_log where end_time = 0 and server_id in (0,%d) and unix_timestamp() >= start_time order by start_time"
                   ,*(undefined4 *)(iVar3 + 0x378));
  cMyTrace::cMyTrace(local_4c,"bool CEventManager::LoadEventFromDB()",0x296,9,true,true);
  cMyTrace::operator()(local_4c,"[!] Load Event From DB");
  local_29 = MySQL::exec(local_28,true);
  if (local_29 == '\x01') {
    local_24 = MySQL::get_n_rows(local_28);
    local_20 = 0;
    while ((local_20 < local_24 && (local_29 = MySQL::fetch(local_28), local_29 == '\x01'))) {
      local_29 = MySQL::get_int(local_28,0,&local_50);
      if (local_29 != '\x01') {
        return 0;
      }
      local_29 = MySQL::get_ushort(local_28,1,(ushort *)&local_54);
      if (local_29 != '\x01') {
        return 0;
      }
      local_29 = MySQL::get_ushort(local_28,2,(ushort *)((int)&local_54 + 2));
      if (local_29 != '\x01') {
        return 0;
      }
      cVar2 = TriggerEventStart(this,local_50,local_54);
      iVar3 = local_50;
      if (cVar2 != '\x01') {
        return 0;
      }
      uVar1 = local_54 >> 0x10;
      uVar5 = local_54 & 0xffff;
      cMyTrace::cMyTrace(local_3c,"bool CEventManager::LoadEventFromDB()",0x305,9,true,true);
      cMyTrace::operator()
                (local_3c,"\t- Event Code(%d) , Parameter1(%d), Parameter2(%d)",iVar3,uVar5,uVar1);
      local_20 = local_20 + 1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## MakeNotiEventInfo

```asm
// === 08115de2 CEventManager::MakeNotiEventInfo  [0x08115de2-0x8116107] ===
 8115de2:	55                   	push   %ebp
 8115de3:	89 e5                	mov    %esp,%ebp
 8115de5:	56                   	push   %esi
 8115de6:	53                   	push   %ebx
 8115de7:	83 ec 50             	sub    $0x50,%esp
 8115dea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8115ded:	89 04 24             	mov    %eax,(%esp)
 8115df0:	e8 e7 1a 00 00       	call   81178dc <_ZNSt6vectorI14stEVENTADDINFOSaIS0_EEC1Ev>
 8115df5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115df8:	89 04 24             	mov    %eax,(%esp)
 8115dfb:	e8 e6 5a fb ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8115e00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115e03:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 8115e0a:	00 
 8115e0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8115e12:	00 
 8115e13:	89 04 24             	mov    %eax,(%esp)
 8115e16:	e8 e1 5a fb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8115e1b:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8115e22:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8115e29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115e2c:	89 04 24             	mov    %eax,(%esp)
 8115e2f:	e8 18 ad ff ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8115e34:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8115e37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115e3a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8115e3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8115e41:	89 04 24             	mov    %eax,(%esp)
 8115e44:	e8 5b 40 fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8115e49:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8115e4e:	85 c0                	test   %eax,%eax
 8115e50:	0f 84 c1 00 00 00    	je     8115f17 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x135>
 8115e56:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8115e5d:	e9 a3 00 00 00       	jmp    8115f05 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x123>
 8115e62:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8115e65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8115e6c:	89 04 24             	mov    %eax,(%esp)
 8115e6f:	e8 24 fb ff ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8115e74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8115e77:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8115e7b:	0f 84 80 00 00 00    	je     8115f01 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x11f>
 8115e81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8115e84:	8b 00                	mov    (%eax),%eax
 8115e86:	83 c0 34             	add    $0x34,%eax
 8115e89:	8b 10                	mov    (%eax),%edx
 8115e8b:	8b 45 10             	mov    0x10(%ebp),%eax
 8115e8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115e92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8115e95:	89 04 24             	mov    %eax,(%esp)
 8115e98:	ff d2                	call   *%edx
 8115e9a:	84 c0                	test   %al,%al
 8115e9c:	74 63                	je     8115f01 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x11f>
 8115e9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115ea1:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8115ea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8115ea8:	89 04 24             	mov    %eax,(%esp)
 8115eab:	e8 f4 3f fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8115eb0:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8115eb4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8115eb7:	8b 00                	mov    (%eax),%eax
 8115eb9:	83 c0 1c             	add    $0x1c,%eax
 8115ebc:	8b 08                	mov    (%eax),%ecx
 8115ebe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8115ec1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8115ec4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8115ec8:	89 04 24             	mov    %eax,(%esp)
 8115ecb:	ff d1                	call   *%ecx
 8115ecd:	83 ec 04             	sub    $0x4,%esp
 8115ed0:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 8115ed4:	66 85 c0             	test   %ax,%ax
 8115ed7:	78 28                	js     8115f01 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x11f>
 8115ed9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8115edc:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8115edf:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 8115ee3:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 8115ee7:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 8115eeb:	66 89 45 c6          	mov    %ax,-0x3a(%ebp)
 8115eef:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8115ef2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115ef6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8115ef9:	89 04 24             	mov    %eax,(%esp)
 8115efc:	e8 4d 1a 00 00       	call   811794e <_ZNSt6vectorI14stEVENTADDINFOSaIS0_EE9push_backERKS0_>
 8115f01:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8115f05:	81 7d e8 a5 00 00 00 	cmpl   $0xa5,-0x18(%ebp)
 8115f0c:	0f 9e c0             	setle  %al
 8115f0f:	84 c0                	test   %al,%al
 8115f11:	0f 85 4b ff ff ff    	jne    8115e62 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x80>
 8115f17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115f1a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8115f1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8115f21:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8115f24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8115f28:	89 04 24             	mov    %eax,(%esp)
 8115f2b:	e8 d8 09 00 00       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 8115f30:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8115f35:	85 c0                	test   %eax,%eax
 8115f37:	74 6c                	je     8115fa5 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x1c3>
 8115f39:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8115f40:	eb 55                	jmp    8115f97 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x1b5>
 8115f42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8115f45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115f49:	8b 45 08             	mov    0x8(%ebp),%eax
 8115f4c:	89 04 24             	mov    %eax,(%esp)
 8115f4f:	e8 44 fa ff ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8115f54:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8115f57:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8115f5b:	74 36                	je     8115f93 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x1b1>
 8115f5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115f60:	8b 00                	mov    (%eax),%eax
 8115f62:	83 c0 34             	add    $0x34,%eax
 8115f65:	8b 10                	mov    (%eax),%edx
 8115f67:	8b 45 10             	mov    0x10(%ebp),%eax
 8115f6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115f6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115f71:	89 04 24             	mov    %eax,(%esp)
 8115f74:	ff d2                	call   *%edx
 8115f76:	84 c0                	test   %al,%al
 8115f78:	74 19                	je     8115f93 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x1b1>
 8115f7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115f7d:	8b 00                	mov    (%eax),%eax
 8115f7f:	83 c0 18             	add    $0x18,%eax
 8115f82:	8b 10                	mov    (%eax),%edx
 8115f84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115f87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115f8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115f8e:	89 04 24             	mov    %eax,(%esp)
 8115f91:	ff d2                	call   *%edx
 8115f93:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8115f97:	81 7d f0 a5 00 00 00 	cmpl   $0xa5,-0x10(%ebp)
 8115f9e:	0f 9e c0             	setle  %al
 8115fa1:	84 c0                	test   %al,%al
 8115fa3:	75 9d                	jne    8115f42 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x160>
 8115fa5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8115fa8:	89 04 24             	mov    %eax,(%esp)
 8115fab:	e8 12 1a 00 00       	call   81179c2 <_ZNKSt6vectorI14stEVENTADDINFOSaIS0_EE5emptyEv>
 8115fb0:	83 f0 01             	xor    $0x1,%eax
 8115fb3:	84 c0                	test   %al,%al
 8115fb5:	0f 84 f4 00 00 00    	je     81160af <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x2cd>
 8115fbb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8115fbe:	89 04 24             	mov    %eax,(%esp)
 8115fc1:	e8 40 1a 00 00       	call   8117a06 <_ZNKSt6vectorI14stEVENTADDINFOSaIS0_EE4sizeEv>
 8115fc6:	89 c2                	mov    %eax,%edx
 8115fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115fcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8115fcf:	89 04 24             	mov    %eax,(%esp)
 8115fd2:	e8 49 59 fb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8115fd7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8115fda:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8115fdd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8115fe1:	89 04 24             	mov    %eax,(%esp)
 8115fe4:	e8 39 1a 00 00       	call   8117a22 <_ZNSt6vectorI14stEVENTADDINFOSaIS0_EE5beginEv>
 8115fe9:	83 ec 04             	sub    $0x4,%esp
 8115fec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8115fef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115ff3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8115ff6:	89 04 24             	mov    %eax,(%esp)
 8115ff9:	e8 48 1a 00 00       	call   8117a46 <_ZN9__gnu_cxx17__normal_iteratorIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8115ffe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8116001:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8116004:	89 54 24 04          	mov    %edx,0x4(%esp)
 8116008:	89 04 24             	mov    %eax,(%esp)
 811600b:	e8 50 1a 00 00       	call   8117a60 <_ZNSt6vectorI14stEVENTADDINFOSaIS0_EE3endEv>
 8116010:	83 ec 04             	sub    $0x4,%esp
 8116013:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8116016:	89 44 24 04          	mov    %eax,0x4(%esp)
 811601a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 811601d:	89 04 24             	mov    %eax,(%esp)
 8116020:	e8 21 1a 00 00       	call   8117a46 <_ZN9__gnu_cxx17__normal_iteratorIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8116025:	eb 6c                	jmp    8116093 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x2b1>
 8116027:	8d 45 bc             	lea    -0x44(%ebp),%eax
 811602a:	89 04 24             	mov    %eax,(%esp)
 811602d:	e8 80 1a 00 00       	call   8117ab2 <_ZNK9__gnu_cxx17__normal_iteratorIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEdeEv>
 8116032:	8b 00                	mov    (%eax),%eax
 8116034:	0f bf d0             	movswl %ax,%edx
 8116037:	8b 45 0c             	mov    0xc(%ebp),%eax
 811603a:	89 54 24 04          	mov    %edx,0x4(%esp)
 811603e:	89 04 24             	mov    %eax,(%esp)
 8116041:	e8 5e 3e fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8116046:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8116049:	89 04 24             	mov    %eax,(%esp)
 811604c:	e8 61 1a 00 00       	call   8117ab2 <_ZNK9__gnu_cxx17__normal_iteratorIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEdeEv>
 8116051:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8116055:	0f bf d0             	movswl %ax,%edx
 8116058:	8b 45 0c             	mov    0xc(%ebp),%eax
 811605b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811605f:	89 04 24             	mov    %eax,(%esp)
 8116062:	e8 3d 3e fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8116067:	8d 45 bc             	lea    -0x44(%ebp),%eax
 811606a:	89 04 24             	mov    %eax,(%esp)
 811606d:	e8 40 1a 00 00       	call   8117ab2 <_ZNK9__gnu_cxx17__normal_iteratorIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEdeEv>
 8116072:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8116076:	0f bf d0             	movswl %ax,%edx
 8116079:	8b 45 0c             	mov    0xc(%ebp),%eax
 811607c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8116080:	89 04 24             	mov    %eax,(%esp)
 8116083:	e8 1c 3e fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8116088:	8d 45 bc             	lea    -0x44(%ebp),%eax
 811608b:	89 04 24             	mov    %eax,(%esp)
 811608e:	e8 29 1a 00 00       	call   8117abc <_ZN9__gnu_cxx17__normal_iteratorIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEppEv>
 8116093:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8116096:	89 44 24 04          	mov    %eax,0x4(%esp)
 811609a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 811609d:	89 04 24             	mov    %eax,(%esp)
 81160a0:	e8 e1 19 00 00       	call   8117a86 <_ZN9__gnu_cxxneIPK14stEVENTADDINFOSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81160a5:	84 c0                	test   %al,%al
 81160a7:	0f 85 7a ff ff ff    	jne    8116027 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x245>
 81160ad:	eb 13                	jmp    81160c2 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x2e0>
 81160af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81160b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81160b9:	00 
 81160ba:	89 04 24             	mov    %eax,(%esp)
 81160bd:	e8 5e 58 fb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81160c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81160c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81160cc:	00 
 81160cd:	89 04 24             	mov    %eax,(%esp)
 81160d0:	e8 83 58 fb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81160d5:	eb 1b                	jmp    81160f2 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser+0x310>
 81160d7:	89 d3                	mov    %edx,%ebx
 81160d9:	89 c6                	mov    %eax,%esi
 81160db:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81160de:	89 04 24             	mov    %eax,(%esp)
 81160e1:	e8 0a 18 00 00       	call   81178f0 <_ZNSt6vectorI14stEVENTADDINFOSaIS0_EED1Ev>
 81160e6:	89 f0                	mov    %esi,%eax
 81160e8:	89 da                	mov    %ebx,%edx
 81160ea:	89 04 24             	mov    %eax,(%esp)
 81160ed:	e8 5e d6 9c 00       	call   8ae3750 <_Unwind_Resume>
 81160f2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81160f5:	89 04 24             	mov    %eax,(%esp)
 81160f8:	e8 f3 17 00 00       	call   81178f0 <_ZNSt6vectorI14stEVENTADDINFOSaIS0_EED1Ev>
 81160fd:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8116100:	83 c4 00             	add    $0x0,%esp
 8116103:	5b                   	pop    %ebx
 8116104:	5e                   	pop    %esi
 8116105:	5d                   	pop    %ebp
 8116106:	c3                   	ret
 8116107:	90                   	nop

```

```c
// CEventManager::MakeNotiEventInfo @ 0x8115de2

/* CEventManager::MakeNotiEventInfo(PacketGuard&, CUser*) */

void __thiscall
CEventManager::MakeNotiEventInfo(CEventManager *this,PacketGuard *param_1,CUser *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int local_64;
  int local_60;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  short local_40;
  undefined2 local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> local_34 [12];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  
  piVar7 = (int *)&stack0xffffffa4;
  std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::vector(local_34);
                    /* try { // try from 08115dfb to 081160d4 has its CatchHandler @ 081160d7 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x6c);
  local_38 = 0;
  local_20 = 0;
  local_38 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_20);
  if (GlobalData::s_event_manager != 0) {
    piVar7 = (int *)&stack0xffffffa4;
    for (local_1c = 0; local_1c < 0xa6; local_1c = local_1c + 1) {
      piVar7[1] = local_1c;
      *piVar7 = (int)this;
      piVar7[-1] = 0x8115e74;
      local_18 = (int *)GetRepeatEvent((CEventManager *)*piVar7,piVar7[1]);
      piVar6 = piVar7;
      if (local_18 != (int *)0x0) {
        pcVar1 = *(code **)(*local_18 + 0x34);
        piVar7[1] = (int)param_2;
        *piVar7 = (int)local_18;
        piVar7[-1] = 0x8115e9a;
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          piVar7[1] = local_1c;
          *piVar7 = (int)param_1;
          piVar7[-1] = 0x8115eb0;
          InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
          local_20 = local_20 + 1;
          pcVar1 = *(code **)(*local_18 + 0x1c);
          piVar7[1] = (int)local_18;
          *piVar7 = (int)&local_3c;
          piVar7[-1] = 0x8115ecd;
          (*pcVar1)();
          piVar6 = piVar7 + -1;
          if (-1 < local_3c) {
            local_44 = local_1c;
            local_40 = local_3c;
            local_3e = local_3a;
            *piVar7 = (int)&local_44;
            piVar7[-1] = (int)local_34;
            piVar7[-2] = 0x8115f01;
            std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::push_back
                      ((vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> *)piVar7[-1],
                       (stEVENTADDINFO *)*piVar7);
            piVar6 = piVar7 + -1;
          }
        }
      }
      piVar7 = piVar6;
    }
  }
  piVar7[2] = local_20;
  piVar7[1] = (int)&local_38;
  *piVar7 = (int)param_1;
  piVar7[-1] = 0x8115f30;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,(int *)piVar7[1],piVar7[2]);
  if (GlobalData::s_event_manager != 0) {
    for (local_14 = 0; local_14 < 0xa6; local_14 = local_14 + 1) {
      piVar7[1] = local_14;
      *piVar7 = (int)this;
      piVar7[-1] = 0x8115f54;
      local_10 = (int *)GetRepeatEvent((CEventManager *)*piVar7,piVar7[1]);
      if (local_10 != (int *)0x0) {
        pcVar1 = *(code **)(*local_10 + 0x34);
        piVar7[1] = (int)param_2;
        *piVar7 = (int)local_10;
        piVar7[-1] = 0x8115f76;
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          pcVar1 = *(code **)(*local_10 + 0x18);
          piVar7[1] = (int)param_1;
          *piVar7 = (int)local_10;
          piVar7[-1] = 0x8115f93;
          (*pcVar1)();
        }
      }
    }
  }
  *piVar7 = (int)local_34;
  piVar7[-1] = 0x8115fb0;
  cVar2 = std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::empty();
  if (cVar2 == '\x01') {
    piVar7[1] = 0;
    *piVar7 = (int)param_1;
    piVar7[-1] = 0x81160c2;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)*piVar7,piVar7[1]);
  }
  else {
    *piVar7 = (int)local_34;
    piVar7[-1] = 0x8115fc6;
    iVar4 = std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::size
                      ((vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> *)*piVar7);
    piVar7[1] = iVar4;
    *piVar7 = (int)param_1;
    piVar7[-1] = 0x8115fd7;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)*piVar7,piVar7[1]);
    piVar7[1] = (int)local_34;
    *piVar7 = (int)local_28;
    piVar7[-1] = 0x8115fe9;
    std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::begin();
    piVar7[1] = (int)local_28;
    *piVar7 = (int)local_48;
    piVar7[-1] = 0x8115ffe;
    __gnu_cxx::
    __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
    ::__normal_iterator<stEVENTADDINFO*>
              ((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                *)*piVar7,(__normal_iterator *)piVar7[1]);
    piVar7[1] = (int)local_34;
    *piVar7 = (int)local_24;
    piVar7[-1] = 0x8116010;
    std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::end();
    piVar7[1] = (int)local_24;
    *piVar7 = (int)local_4c;
    piVar7[-1] = 0x8116025;
    __gnu_cxx::
    __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
    ::__normal_iterator<stEVENTADDINFO*>
              ((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                *)*piVar7,(__normal_iterator *)piVar7[1]);
    while( true ) {
      piVar7[1] = (int)local_4c;
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x81160a5;
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar7,(__normal_iterator *)piVar7[1]);
      if (!bVar3) break;
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116032;
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
               ::operator*((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                            *)*piVar7);
      piVar7[1] = (int)(short)*puVar5;
      *piVar7 = (int)param_1;
      piVar7[-1] = 0x8116046;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116051;
      iVar4 = __gnu_cxx::
              __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
              ::operator*((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                           *)*piVar7);
      piVar7[1] = (int)*(short *)(iVar4 + 4);
      *piVar7 = (int)param_1;
      piVar7[-1] = 0x8116067;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116072;
      iVar4 = __gnu_cxx::
              __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
              ::operator*((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                           *)*piVar7);
      piVar7[1] = (int)*(short *)(iVar4 + 6);
      *piVar7 = (int)param_1;
      piVar7[-1] = 0x8116088;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116093;
      __gnu_cxx::
      __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
      ::operator++((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                    *)*piVar7);
    }
  }
  piVar7[1] = 1;
  *piVar7 = (int)param_1;
  piVar7[-1] = 0x81160d5;
  InterfacePacketBuf::finalize((InterfacePacketBuf *)*piVar7,SUB41(piVar7[1],0));
  *piVar7 = (int)local_34;
  piVar7[-1] = 0x81160fd;
  std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::~vector
            ((vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> *)*piVar7);
  return;
}

```

---

## TriggerEventEnd

```asm
// === 08115d60 CEventManager::TriggerEventEnd  [0x08115d60-0x8115de1] ===
 8115d60:	55                   	push   %ebp
 8115d61:	89 e5                	mov    %esp,%ebp
 8115d63:	83 ec 28             	sub    $0x28,%esp
 8115d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115d69:	89 04 24             	mov    %eax,(%esp)
 8115d6c:	e8 83 fe ff ff       	call   8115bf4 <_Z11filterEventi>
 8115d71:	84 c0                	test   %al,%al
 8115d73:	74 07                	je     8115d7c <_ZN13CEventManager15TriggerEventEndEi+0x1c>
 8115d75:	b8 01 00 00 00       	mov    $0x1,%eax
 8115d7a:	eb 63                	jmp    8115ddf <_ZN13CEventManager15TriggerEventEndEi+0x7f>
 8115d7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115d7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115d83:	8b 45 08             	mov    0x8(%ebp),%eax
 8115d86:	89 04 24             	mov    %eax,(%esp)
 8115d89:	e8 0a fc ff ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8115d8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8115d91:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8115d95:	74 43                	je     8115dda <_ZN13CEventManager15TriggerEventEndEi+0x7a>
 8115d97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d9a:	8b 00                	mov    (%eax),%eax
 8115d9c:	83 c0 2c             	add    $0x2c,%eax
 8115d9f:	8b 10                	mov    (%eax),%edx
 8115da1:	8b 45 08             	mov    0x8(%ebp),%eax
 8115da4:	8b 80 98 02 00 00    	mov    0x298(%eax),%eax
 8115daa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115dae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115db1:	89 04 24             	mov    %eax,(%esp)
 8115db4:	ff d2                	call   *%edx
 8115db6:	8b 45 08             	mov    0x8(%ebp),%eax
 8115db9:	89 04 24             	mov    %eax,(%esp)
 8115dbc:	e8 47 03 00 00       	call   8116108 <_ZN13CEventManager18BroadcastEventInfoEv>
 8115dc1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115dc4:	8b 00                	mov    (%eax),%eax
 8115dc6:	83 c0 0c             	add    $0xc,%eax
 8115dc9:	8b 10                	mov    (%eax),%edx
 8115dcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115dce:	89 04 24             	mov    %eax,(%esp)
 8115dd1:	ff d2                	call   *%edx
 8115dd3:	b8 01 00 00 00       	mov    $0x1,%eax
 8115dd8:	eb 05                	jmp    8115ddf <_ZN13CEventManager15TriggerEventEndEi+0x7f>
 8115dda:	b8 00 00 00 00       	mov    $0x0,%eax
 8115ddf:	c9                   	leave
 8115de0:	c3                   	ret
 8115de1:	90                   	nop

```

```c
// CEventManager::TriggerEventEnd @ 0x8115d60

/* CEventManager::TriggerEventEnd(int) */

undefined4 __thiscall CEventManager::TriggerEventEnd(CEventManager *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  cVar1 = filterEvent(param_1);
  if (cVar1 == '\0') {
    piVar3 = (int *)GetRepeatEvent(this,param_1);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*piVar3 + 0x2c))(piVar3,*(undefined4 *)(this + 0x298));
      BroadcastEventInfo(this);
      (**(code **)(*piVar3 + 0xc))(piVar3);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## TriggerEventStart

```asm
// === 08115cc6 CEventManager::TriggerEventStart  [0x08115cc6-0x8115d5f] ===
 8115cc6:	55                   	push   %ebp
 8115cc7:	89 e5                	mov    %esp,%ebp
 8115cc9:	83 ec 28             	sub    $0x28,%esp
 8115ccc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115ccf:	89 04 24             	mov    %eax,(%esp)
 8115cd2:	e8 1d ff ff ff       	call   8115bf4 <_Z11filterEventi>
 8115cd7:	84 c0                	test   %al,%al
 8115cd9:	74 07                	je     8115ce2 <_ZN13CEventManager17TriggerEventStartEi10Word_Param+0x1c>
 8115cdb:	b8 01 00 00 00       	mov    $0x1,%eax
 8115ce0:	eb 7c                	jmp    8115d5e <_ZN13CEventManager17TriggerEventStartEi10Word_Param+0x98>
 8115ce2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8115ce5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 8115cec:	89 04 24             	mov    %eax,(%esp)
 8115cef:	e8 a4 fc ff ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8115cf4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8115cf7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8115cfb:	74 5c                	je     8115d59 <_ZN13CEventManager17TriggerEventStartEi10Word_Param+0x93>
 8115cfd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d00:	8b 00                	mov    (%eax),%eax
 8115d02:	83 c0 10             	add    $0x10,%eax
 8115d05:	8b 10                	mov    (%eax),%edx
 8115d07:	8b 45 10             	mov    0x10(%ebp),%eax
 8115d0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115d0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d11:	89 04 24             	mov    %eax,(%esp)
 8115d14:	ff d2                	call   *%edx
 8115d16:	8b 45 08             	mov    0x8(%ebp),%eax
 8115d19:	89 04 24             	mov    %eax,(%esp)
 8115d1c:	e8 e7 03 00 00       	call   8116108 <_ZN13CEventManager18BroadcastEventInfoEv>
 8115d21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d24:	8b 00                	mov    (%eax),%eax
 8115d26:	83 c0 28             	add    $0x28,%eax
 8115d29:	8b 10                	mov    (%eax),%edx
 8115d2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8115d2e:	8b 80 98 02 00 00    	mov    0x298(%eax),%eax
 8115d34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8115d38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d3b:	89 04 24             	mov    %eax,(%esp)
 8115d3e:	ff d2                	call   *%edx
 8115d40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d43:	8b 00                	mov    (%eax),%eax
 8115d45:	83 c0 14             	add    $0x14,%eax
 8115d48:	8b 10                	mov    (%eax),%edx
 8115d4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8115d4d:	89 04 24             	mov    %eax,(%esp)
 8115d50:	ff d2                	call   *%edx
 8115d52:	b8 01 00 00 00       	mov    $0x1,%eax
 8115d57:	eb 05                	jmp    8115d5e <_ZN13CEventManager17TriggerEventStartEi10Word_Param+0x98>
 8115d59:	b8 00 00 00 00       	mov    $0x0,%eax
 8115d5e:	c9                   	leave
 8115d5f:	c3                   	ret

```

```c
// CEventManager::TriggerEventStart @ 0x8115cc6

/* CEventManager::TriggerEventStart(int, Word_Param) */

undefined4 __thiscall
CEventManager::TriggerEventStart(CEventManager *this,int param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  cVar1 = filterEvent(param_1);
  if (cVar1 == '\0') {
    piVar3 = (int *)GetRepeatEvent(this,param_1);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*piVar3 + 0x10))(piVar3,param_3);
      BroadcastEventInfo(this);
      (**(code **)(*piVar3 + 0x28))(piVar3,*(undefined4 *)(this + 0x298));
      (**(code **)(*piVar3 + 0x14))(piVar3);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## changeCharacName

```asm
// === 08116276 CEventManager::changeCharacName  [0x08116276-0x811630d] ===
 8116276:	55                   	push   %ebp
 8116277:	89 e5                	mov    %esp,%ebp
 8116279:	83 ec 38             	sub    $0x38,%esp
 811627c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8116283:	eb 75                	jmp    81162fa <_ZN13CEventManager16changeCharacNameEP5CUseriPci+0x84>
 8116285:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8116288:	8b 45 08             	mov    0x8(%ebp),%eax
 811628b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 811628e:	85 c0                	test   %eax,%eax
 8116290:	74 64                	je     81162f6 <_ZN13CEventManager16changeCharacNameEP5CUseriPci+0x80>
 8116292:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8116295:	8b 45 08             	mov    0x8(%ebp),%eax
 8116298:	8b 04 90             	mov    (%eax,%edx,4),%eax
 811629b:	8b 00                	mov    (%eax),%eax
 811629d:	83 c0 34             	add    $0x34,%eax
 81162a0:	8b 08                	mov    (%eax),%ecx
 81162a2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81162a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81162a8:	8b 04 90             	mov    (%eax,%edx,4),%eax
 81162ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81162b2:	00 
 81162b3:	89 04 24             	mov    %eax,(%esp)
 81162b6:	ff d1                	call   *%ecx
 81162b8:	84 c0                	test   %al,%al
 81162ba:	74 3a                	je     81162f6 <_ZN13CEventManager16changeCharacNameEP5CUseriPci+0x80>
 81162bc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81162bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81162c2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 81162c5:	8b 00                	mov    (%eax),%eax
 81162c7:	83 c0 20             	add    $0x20,%eax
 81162ca:	8b 08                	mov    (%eax),%ecx
 81162cc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81162cf:	8b 45 08             	mov    0x8(%ebp),%eax
 81162d2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 81162d5:	8b 55 18             	mov    0x18(%ebp),%edx
 81162d8:	89 54 24 10          	mov    %edx,0x10(%esp)
 81162dc:	8b 55 14             	mov    0x14(%ebp),%edx
 81162df:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81162e3:	8b 55 10             	mov    0x10(%ebp),%edx
 81162e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81162ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 81162ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 81162f1:	89 04 24             	mov    %eax,(%esp)
 81162f4:	ff d1                	call   *%ecx
 81162f6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81162fa:	81 7d f4 a5 00 00 00 	cmpl   $0xa5,-0xc(%ebp)
 8116301:	0f 9e c0             	setle  %al
 8116304:	84 c0                	test   %al,%al
 8116306:	0f 85 79 ff ff ff    	jne    8116285 <_ZN13CEventManager16changeCharacNameEP5CUseriPci+0xf>
 811630c:	c9                   	leave
 811630d:	c3                   	ret

```

```c
// CEventManager::changeCharacName @ 0x8116276

/* CEventManager::changeCharacName(CUser*, int, char*, int) */

void __thiscall
CEventManager::changeCharacName
          (CEventManager *this,CUser *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      cVar1 = (**(code **)(**(int **)(this + local_10 * 4) + 0x34))
                        (*(undefined4 *)(this + local_10 * 4),0);
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(this + local_10 * 4) + 0x20))
                  (*(undefined4 *)(this + local_10 * 4),param_1,param_2,param_3,param_4);
      }
    }
  }
  return;
}

```

---

## dailyresetData

```asm
// === 0811630e CEventManager::dailyresetData  [0x0811630e-0x8116385] ===
 811630e:	55                   	push   %ebp
 811630f:	89 e5                	mov    %esp,%ebp
 8116311:	83 ec 28             	sub    $0x28,%esp
 8116314:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 811631b:	eb 59                	jmp    8116376 <_ZN13CEventManager14dailyresetDataEv+0x68>
 811631d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8116320:	8b 45 08             	mov    0x8(%ebp),%eax
 8116323:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8116326:	85 c0                	test   %eax,%eax
 8116328:	74 48                	je     8116372 <_ZN13CEventManager14dailyresetDataEv+0x64>
 811632a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811632d:	8b 45 08             	mov    0x8(%ebp),%eax
 8116330:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8116333:	8b 00                	mov    (%eax),%eax
 8116335:	83 c0 34             	add    $0x34,%eax
 8116338:	8b 08                	mov    (%eax),%ecx
 811633a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 811633d:	8b 45 08             	mov    0x8(%ebp),%eax
 8116340:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8116343:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811634a:	00 
 811634b:	89 04 24             	mov    %eax,(%esp)
 811634e:	ff d1                	call   *%ecx
 8116350:	84 c0                	test   %al,%al
 8116352:	74 1e                	je     8116372 <_ZN13CEventManager14dailyresetDataEv+0x64>
 8116354:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8116357:	8b 45 08             	mov    0x8(%ebp),%eax
 811635a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 811635d:	8b 00                	mov    (%eax),%eax
 811635f:	83 c0 24             	add    $0x24,%eax
 8116362:	8b 08                	mov    (%eax),%ecx
 8116364:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8116367:	8b 45 08             	mov    0x8(%ebp),%eax
 811636a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 811636d:	89 04 24             	mov    %eax,(%esp)
 8116370:	ff d1                	call   *%ecx
 8116372:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8116376:	81 7d f4 a5 00 00 00 	cmpl   $0xa5,-0xc(%ebp)
 811637d:	0f 9e c0             	setle  %al
 8116380:	84 c0                	test   %al,%al
 8116382:	75 99                	jne    811631d <_ZN13CEventManager14dailyresetDataEv+0xf>
 8116384:	c9                   	leave
 8116385:	c3                   	ret

```

```c
// CEventManager::dailyresetData @ 0x811630e

/* CEventManager::dailyresetData() */

void __thiscall CEventManager::dailyresetData(CEventManager *this)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      cVar1 = (**(code **)(**(int **)(this + local_10 * 4) + 0x34))
                        (*(undefined4 *)(this + local_10 * 4),0);
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(this + local_10 * 4) + 0x24))(*(undefined4 *)(this + local_10 * 4));
      }
    }
  }
  return;
}

```

---

## eventDeliveryNotify

```asm
// === 08116874 CEventManager::eventDeliveryNotify  [0x08116874-0x81168aa] ===
 8116874:	55                   	push   %ebp
 8116875:	89 e5                	mov    %esp,%ebp
 8116877:	83 ec 18             	sub    $0x18,%esp
 811687a:	8b 45 08             	mov    0x8(%ebp),%eax
 811687d:	8b 80 98 02 00 00    	mov    0x298(%eax),%eax
 8116883:	85 c0                	test   %eax,%eax
 8116885:	74 21                	je     81168a8 <_ZN13CEventManager19eventDeliveryNotifyEiR11DeliveryMsg+0x34>
 8116887:	8b 45 08             	mov    0x8(%ebp),%eax
 811688a:	8b 80 98 02 00 00    	mov    0x298(%eax),%eax
 8116890:	8b 55 10             	mov    0x10(%ebp),%edx
 8116893:	89 54 24 08          	mov    %edx,0x8(%esp)
 8116897:	8b 55 0c             	mov    0xc(%ebp),%edx
 811689a:	89 54 24 04          	mov    %edx,0x4(%esp)
 811689e:	89 04 24             	mov    %eax,(%esp)
 81168a1:	e8 dc fd ff ff       	call   8116682 <_ZN9CDelivery6notifyEiR11DeliveryMsg>
 81168a6:	eb 01                	jmp    81168a9 <_ZN13CEventManager19eventDeliveryNotifyEiR11DeliveryMsg+0x35>
 81168a8:	90                   	nop
 81168a9:	c9                   	leave
 81168aa:	c3                   	ret

```

```c
// CEventManager::eventDeliveryNotify @ 0x8116874

/* CEventManager::eventDeliveryNotify(int, DeliveryMsg&) */

void __thiscall
CEventManager::eventDeliveryNotify(CEventManager *this,int param_1,DeliveryMsg *param_2)

{
  if (*(int *)(this + 0x298) != 0) {
    CDelivery::notify(*(CDelivery **)(this + 0x298),param_1,param_2);
  }
  return;
}

```

---

## ~CEventManager

```asm
// === 08114d4e CEventManager::~CEventManager  [0x08114d4e-0x8114dcb] ===
 8114d4e:	55                   	push   %ebp
 8114d4f:	89 e5                	mov    %esp,%ebp
 8114d51:	53                   	push   %ebx
 8114d52:	83 ec 24             	sub    $0x24,%esp
 8114d55:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8114d5c:	eb 3c                	jmp    8114d9a <_ZN13CEventManagerD1Ev+0x4c>
 8114d5e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8114d61:	8b 45 08             	mov    0x8(%ebp),%eax
 8114d64:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8114d67:	85 c0                	test   %eax,%eax
 8114d69:	74 2b                	je     8114d96 <_ZN13CEventManagerD1Ev+0x48>
 8114d6b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8114d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8114d71:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8114d74:	85 c0                	test   %eax,%eax
 8114d76:	74 1e                	je     8114d96 <_ZN13CEventManagerD1Ev+0x48>
 8114d78:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8114d7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8114d7e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8114d81:	8b 00                	mov    (%eax),%eax
 8114d83:	83 c0 04             	add    $0x4,%eax
 8114d86:	8b 08                	mov    (%eax),%ecx
 8114d88:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8114d8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8114d8e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8114d91:	89 04 24             	mov    %eax,(%esp)
 8114d94:	ff d1                	call   *%ecx
 8114d96:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8114d9a:	81 7d f4 a5 00 00 00 	cmpl   $0xa5,-0xc(%ebp)
 8114da1:	0f 9e c0             	setle  %al
 8114da4:	84 c0                	test   %al,%al
 8114da6:	75 b6                	jne    8114d5e <_ZN13CEventManagerD1Ev+0x10>
 8114da8:	8b 45 08             	mov    0x8(%ebp),%eax
 8114dab:	8b 98 98 02 00 00    	mov    0x298(%eax),%ebx
 8114db1:	85 db                	test   %ebx,%ebx
 8114db3:	74 10                	je     8114dc5 <_ZN13CEventManagerD1Ev+0x77>
 8114db5:	89 1c 24             	mov    %ebx,(%esp)
 8114db8:	e8 dd 15 00 00       	call   811639a <_ZN9CDeliveryD1Ev>
 8114dbd:	89 1c 24             	mov    %ebx,(%esp)
 8114dc0:	e8 2b f7 60 00       	call   87244f0 <_ZdlPv>
 8114dc5:	83 c4 24             	add    $0x24,%esp
 8114dc8:	5b                   	pop    %ebx
 8114dc9:	5d                   	pop    %ebp
 8114dca:	c3                   	ret
 8114dcb:	90                   	nop

```

```c
// CEventManager::~CEventManager @ 0x8114d4e

/* CEventManager::~CEventManager() */

void __thiscall CEventManager::~CEventManager(CEventManager *this)

{
  CDelivery *this_00;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
      (**(code **)(**(int **)(this + local_10 * 4) + 4))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  this_00 = *(CDelivery **)(this + 0x298);
  if (this_00 != (CDelivery *)0x0) {
    CDelivery::~CDelivery(this_00);
    operator_delete(this_00);
  }
  return;
}

```

