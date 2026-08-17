# InterSelectCreateDnfEventInfo__Reward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Reward

```asm
// === 08160c4a InterSelectCreateDnfEventInfo::Reward::Reward  [0x08160c4a-0x8160c6d] ===
 8160c4a:	55                   	push   %ebp
 8160c4b:	89 e5                	mov    %esp,%ebp
 8160c4d:	83 ec 04             	sub    $0x4,%esp
 8160c50:	8b 45 10             	mov    0x10(%ebp),%eax
 8160c53:	88 45 fc             	mov    %al,-0x4(%ebp)
 8160c56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160c59:	89 c2                	mov    %eax,%edx
 8160c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8160c5e:	66 89 10             	mov    %dx,(%eax)
 8160c61:	8b 45 08             	mov    0x8(%ebp),%eax
 8160c64:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8160c68:	88 50 02             	mov    %dl,0x2(%eax)
 8160c6b:	c9                   	leave
 8160c6c:	c3                   	ret
 8160c6d:	90                   	nop

```

```c
// InterSelectCreateDnfEventInfo::Reward::Reward @ 0x8160c4a

/* InterSelectCreateDnfEventInfo::Reward::Reward(int, bool) */

void __thiscall InterSelectCreateDnfEventInfo::Reward::Reward(Reward *this,int param_1,bool param_2)

{
  *(short *)this = (short)param_1;
  this[2] = (Reward)param_2;
  return;
}

```

---

## operator

```asm
// === 08160c6e InterSelectCreateDnfEventInfo::Reward::operator  [0x08160c6e-0x8160d5d] ===
 8160c6e:	55                   	push   %ebp
 8160c6f:	89 e5                	mov    %esp,%ebp
 8160c71:	56                   	push   %esi
 8160c72:	53                   	push   %ebx
 8160c73:	83 ec 20             	sub    $0x20,%esp
 8160c76:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160c79:	89 04 24             	mov    %eax,(%esp)
 8160c7c:	e8 cb d0 42 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8160c81:	c7 44 24 08 2d 02 00 	movl   $0x22d,0x8(%esp)
 8160c88:	00 
 8160c89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8160c90:	00 
 8160c91:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160c94:	89 04 24             	mov    %eax,(%esp)
 8160c97:	e8 60 ac f6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8160c9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8160c9f:	0f b7 00             	movzwl (%eax),%eax
 8160ca2:	0f b7 c0             	movzwl %ax,%eax
 8160ca5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160ca9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160cac:	89 04 24             	mov    %eax,(%esp)
 8160caf:	e8 f0 91 f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8160cb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160cb7:	89 04 24             	mov    %eax,(%esp)
 8160cba:	e8 f5 24 53 00       	call   86931b4 <_ZN5CUser23GetEventCreateDnfRewardEv>
 8160cbf:	83 f0 01             	xor    $0x1,%eax
 8160cc2:	84 c0                	test   %al,%al
 8160cc4:	74 12                	je     8160cd8 <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser+0x6a>
 8160cc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8160cc9:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8160ccd:	84 c0                	test   %al,%al
 8160ccf:	74 07                	je     8160cd8 <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser+0x6a>
 8160cd1:	b8 01 00 00 00       	mov    $0x1,%eax
 8160cd6:	eb 05                	jmp    8160cdd <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser+0x6f>
 8160cd8:	b8 00 00 00 00       	mov    $0x0,%eax
 8160cdd:	84 c0                	test   %al,%al
 8160cdf:	74 15                	je     8160cf6 <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser+0x88>
 8160ce1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8160ce8:	00 
 8160ce9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160cec:	89 04 24             	mov    %eax,(%esp)
 8160cef:	e8 2c ac f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8160cf4:	eb 13                	jmp    8160d09 <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser+0x9b>
 8160cf6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8160cfd:	00 
 8160cfe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160d01:	89 04 24             	mov    %eax,(%esp)
 8160d04:	e8 17 ac f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8160d09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8160d10:	00 
 8160d11:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160d14:	89 04 24             	mov    %eax,(%esp)
 8160d17:	e8 3c ac f6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8160d1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160d1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160d26:	89 04 24             	mov    %eax,(%esp)
 8160d29:	e8 8c 78 4e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8160d2e:	eb 1b                	jmp    8160d4b <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser+0xdd>
 8160d30:	89 d3                	mov    %edx,%ebx
 8160d32:	89 c6                	mov    %eax,%esi
 8160d34:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160d37:	89 04 24             	mov    %eax,(%esp)
 8160d3a:	e8 41 d1 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8160d3f:	89 f0                	mov    %esi,%eax
 8160d41:	89 da                	mov    %ebx,%edx
 8160d43:	89 04 24             	mov    %eax,(%esp)
 8160d46:	e8 05 2a 98 00       	call   8ae3750 <_Unwind_Resume>
 8160d4b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160d4e:	89 04 24             	mov    %eax,(%esp)
 8160d51:	e8 2a d1 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8160d56:	83 c4 20             	add    $0x20,%esp
 8160d59:	5b                   	pop    %ebx
 8160d5a:	5e                   	pop    %esi
 8160d5b:	5d                   	pop    %ebp
 8160d5c:	c3                   	ret
 8160d5d:	90                   	nop

```

```c
// InterSelectCreateDnfEventInfo::Reward::operator @ 0x8160c6e

/* InterSelectCreateDnfEventInfo::Reward::TEMPNAMEPLACEHOLDERVALUE(CUser*) */

void __thiscall InterSelectCreateDnfEventInfo::Reward::operator()(Reward *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08160c97 to 08160d2d has its CatchHandler @ 08160d30 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22d);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)*(ushort *)this);
  cVar2 = CUser::GetEventCreateDnfReward(param_1);
  if ((cVar2 == '\x01') || (this[2] == (Reward)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

