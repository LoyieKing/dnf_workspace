# village_attacked__CVillageMonster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CVillageMonster

```asm
// === 086b3004 village_attacked::CVillageMonster::CVillageMonster  [0x086b3004-0x86b3097] ===
 86b3004:	55                   	push   %ebp
 86b3005:	89 e5                	mov    %esp,%ebp
 86b3007:	83 ec 04             	sub    $0x4,%esp
 86b300a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b300d:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 86b3011:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3014:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86b3017:	89 50 1c             	mov    %edx,0x1c(%eax)
 86b301a:	a1 54 ce 3a 09       	mov    0x93ace54,%eax
 86b301f:	89 c1                	mov    %eax,%ecx
 86b3021:	8b 55 08             	mov    0x8(%ebp),%edx
 86b3024:	66 89 0a             	mov    %cx,(%edx)
 86b3027:	83 c0 01             	add    $0x1,%eax
 86b302a:	a3 54 ce 3a 09       	mov    %eax,0x93ace54
 86b302f:	a1 54 ce 3a 09       	mov    0x93ace54,%eax
 86b3034:	85 c0                	test   %eax,%eax
 86b3036:	75 0a                	jne    86b3042 <_ZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEii+0x3e>
 86b3038:	c7 05 54 ce 3a 09 01 	movl   $0x1,0x93ace54
 86b303f:	00 00 00 
 86b3042:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3045:	0f b7 55 fc          	movzwl -0x4(%ebp),%edx
 86b3049:	66 89 50 02          	mov    %dx,0x2(%eax)
 86b304d:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3050:	8b 55 10             	mov    0x10(%ebp),%edx
 86b3053:	89 50 04             	mov    %edx,0x4(%eax)
 86b3056:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3059:	8b 55 14             	mov    0x14(%ebp),%edx
 86b305c:	89 50 08             	mov    %edx,0x8(%eax)
 86b305f:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3062:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 86b3066:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3069:	8b 55 18             	mov    0x18(%ebp),%edx
 86b306c:	89 50 0c             	mov    %edx,0xc(%eax)
 86b306f:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3072:	c7 40 18 ff ff ff ff 	movl   $0xffffffff,0x18(%eax)
 86b3079:	8b 45 08             	mov    0x8(%ebp),%eax
 86b307c:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 86b3083:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3086:	8b 55 20             	mov    0x20(%ebp),%edx
 86b3089:	89 50 20             	mov    %edx,0x20(%eax)
 86b308c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b308f:	8b 55 24             	mov    0x24(%ebp),%edx
 86b3092:	89 50 24             	mov    %edx,0x24(%eax)
 86b3095:	c9                   	leave
 86b3096:	c3                   	ret
 86b3097:	90                   	nop

```

```c
// village_attacked::CVillageMonster::CVillageMonster @ 0x86b3004

/* village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int,
   village_attacked::CVillageMonsterArea*, int, int) */

void __thiscall
village_attacked::CVillageMonster::CVillageMonster
          (CVillageMonster *this,ushort param_1,int param_2,int param_3,int param_4,
          CVillageMonsterArea *param_5,int param_6,int param_7)

{
  *(CVillageMonsterArea **)(this + 0x1c) = param_5;
  *(short *)this =
       (short)CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)
              ::uid_seed;
  CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)::
  uid_seed = CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)
             ::uid_seed + 1;
  if (CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)::
      uid_seed == 0) {
    CVillageMonster(unsigned_short,int,int,int,village_attacked::CVillageMonsterArea*,int,int)::
    uid_seed = 1;
  }
  *(ushort *)(this + 2) = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  this[0x10] = (CVillageMonster)0x0;
  *(int *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x20) = param_6;
  *(int *)(this + 0x24) = param_7;
  return;
}

```

---

## CVillageMonster_086b3098

```asm
// === 086b3098 village_attacked::CVillageMonster::CVillageMonster  [0x086b3098-0x86b3105] ===
 86b3098:	55                   	push   %ebp
 86b3099:	89 e5                	mov    %esp,%ebp
 86b309b:	8b 45 08             	mov    0x8(%ebp),%eax
 86b309e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 86b30a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30a8:	66 c7 00 00 00       	movw   $0x0,(%eax)
 86b30ad:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30b0:	66 c7 40 02 00 00    	movw   $0x0,0x2(%eax)
 86b30b6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30b9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86b30c0:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30c3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86b30ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30cd:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 86b30d1:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30d4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 86b30db:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30de:	c7 40 18 ff ff ff ff 	movl   $0xffffffff,0x18(%eax)
 86b30e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30e8:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 86b30ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30f2:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 86b30f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b30fc:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 86b3103:	5d                   	pop    %ebp
 86b3104:	c3                   	ret
 86b3105:	90                   	nop

```

```c
// village_attacked::CVillageMonster::CVillageMonster @ 0x86b3098

/* village_attacked::CVillageMonster::CVillageMonster() */

void __thiscall village_attacked::CVillageMonster::CVillageMonster(CVillageMonster *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 2) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (CVillageMonster)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}

```

---

## MakeVillageMonsterListPacket

```asm
// === 086b3666 village_attacked::CVillageMonster::MakeVillageMonsterListPacket  [0x086b3666-0x86b36e5] ===
 86b3666:	55                   	push   %ebp
 86b3667:	89 e5                	mov    %esp,%ebp
 86b3669:	83 ec 18             	sub    $0x18,%esp
 86b366c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b366f:	0f b7 00             	movzwl (%eax),%eax
 86b3672:	0f b7 d0             	movzwl %ax,%edx
 86b3675:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3678:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b367c:	89 04 24             	mov    %eax,(%esp)
 86b367f:	e8 20 68 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3684:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3687:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 86b368b:	0f b7 d0             	movzwl %ax,%edx
 86b368e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3691:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3695:	89 04 24             	mov    %eax,(%esp)
 86b3698:	e8 07 68 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b369d:	8b 45 08             	mov    0x8(%ebp),%eax
 86b36a0:	8b 40 14             	mov    0x14(%eax),%eax
 86b36a3:	89 c2                	mov    %eax,%edx
 86b36a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b36a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b36ac:	89 04 24             	mov    %eax,(%esp)
 86b36af:	e8 6c 82 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b36b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86b36b7:	8b 50 04             	mov    0x4(%eax),%edx
 86b36ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b36bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b36c1:	89 04 24             	mov    %eax,(%esp)
 86b36c4:	e8 db 67 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b36c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b36cc:	8b 50 08             	mov    0x8(%eax),%edx
 86b36cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b36d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b36d6:	89 04 24             	mov    %eax,(%esp)
 86b36d9:	e8 c6 67 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b36de:	b8 01 00 00 00       	mov    $0x1,%eax
 86b36e3:	c9                   	leave
 86b36e4:	c3                   	ret
 86b36e5:	90                   	nop

```

```c
// village_attacked::CVillageMonster::MakeVillageMonsterListPacket @ 0x86b3666

/* village_attacked::CVillageMonster::MakeVillageMonsterListPacket(PacketGuard&) */

undefined4 __thiscall
village_attacked::CVillageMonster::MakeVillageMonsterListPacket
          (CVillageMonster *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 2));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 8));
  return 1;
}

```

---

## MakeVillageMonsterPositionPacket

```asm
// === 086b36e6 village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket  [0x086b36e6-0x86b3751] ===
 86b36e6:	55                   	push   %ebp
 86b36e7:	89 e5                	mov    %esp,%ebp
 86b36e9:	83 ec 18             	sub    $0x18,%esp
 86b36ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86b36ef:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86b36f3:	83 f0 01             	xor    $0x1,%eax
 86b36f6:	84 c0                	test   %al,%al
 86b36f8:	74 07                	je     86b3701 <_ZN16village_attacked15CVillageMonster32MakeVillageMonsterPositionPacketER11PacketGuard+0x1b>
 86b36fa:	b8 00 00 00 00       	mov    $0x0,%eax
 86b36ff:	eb 4e                	jmp    86b374f <_ZN16village_attacked15CVillageMonster32MakeVillageMonsterPositionPacketER11PacketGuard+0x69>
 86b3701:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3704:	0f b7 00             	movzwl (%eax),%eax
 86b3707:	0f b7 d0             	movzwl %ax,%edx
 86b370a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b370d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3711:	89 04 24             	mov    %eax,(%esp)
 86b3714:	e8 8b 67 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3719:	8b 45 08             	mov    0x8(%ebp),%eax
 86b371c:	8b 50 04             	mov    0x4(%eax),%edx
 86b371f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3722:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3726:	89 04 24             	mov    %eax,(%esp)
 86b3729:	e8 76 67 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b372e:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3731:	8b 50 08             	mov    0x8(%eax),%edx
 86b3734:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3737:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b373b:	89 04 24             	mov    %eax,(%esp)
 86b373e:	e8 61 67 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3743:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3746:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 86b374a:	b8 01 00 00 00       	mov    $0x1,%eax
 86b374f:	c9                   	leave
 86b3750:	c3                   	ret
 86b3751:	90                   	nop

```

```c
// village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket @ 0x86b36e6

/* village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket(PacketGuard&) */

bool __thiscall
village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket
          (CVillageMonster *this,PacketGuard *param_1)

{
  CVillageMonster CVar1;
  
  CVar1 = this[0x10];
  if (CVar1 == (CVillageMonster)0x1) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 8));
    this[0x10] = (CVillageMonster)0x0;
  }
  return CVar1 == (CVillageMonster)0x1;
}

```

---

## OnChangeState

```asm
// === 086b35a0 village_attacked::CVillageMonster::OnChangeState  [0x086b35a0-0x86b3665] ===
 86b35a0:	55                   	push   %ebp
 86b35a1:	89 e5                	mov    %esp,%ebp
 86b35a3:	56                   	push   %esi
 86b35a4:	53                   	push   %ebx
 86b35a5:	83 ec 20             	sub    $0x20,%esp
 86b35a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86b35ab:	8b 55 0c             	mov    0xc(%ebp),%edx
 86b35ae:	89 50 14             	mov    %edx,0x14(%eax)
 86b35b1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b35b4:	89 04 24             	mov    %eax,(%esp)
 86b35b7:	e8 90 a7 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b35bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b35bf:	89 04 24             	mov    %eax,(%esp)
 86b35c2:	e8 1f 83 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b35c7:	c7 44 24 08 f0 00 00 	movl   $0xf0,0x8(%esp)
 86b35ce:	00 
 86b35cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b35d6:	00 
 86b35d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b35da:	89 04 24             	mov    %eax,(%esp)
 86b35dd:	e8 1a 83 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b35e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86b35e5:	8b 40 14             	mov    0x14(%eax),%eax
 86b35e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b35ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b35ef:	89 04 24             	mov    %eax,(%esp)
 86b35f2:	e8 29 83 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b35f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86b35fa:	0f b7 00             	movzwl (%eax),%eax
 86b35fd:	0f b7 c0             	movzwl %ax,%eax
 86b3600:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3604:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3607:	89 04 24             	mov    %eax,(%esp)
 86b360a:	e8 95 68 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b360f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b3616:	00 
 86b3617:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b361a:	89 04 24             	mov    %eax,(%esp)
 86b361d:	e8 36 83 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b3622:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3625:	8b 40 1c             	mov    0x1c(%eax),%eax
 86b3628:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86b362b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b362f:	89 04 24             	mov    %eax,(%esp)
 86b3632:	e8 65 05 00 00       	call   86b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>
 86b3637:	eb 1b                	jmp    86b3654 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE+0xb4>
 86b3639:	89 d3                	mov    %edx,%ebx
 86b363b:	89 c6                	mov    %eax,%esi
 86b363d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3640:	89 04 24             	mov    %eax,(%esp)
 86b3643:	e8 38 a8 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3648:	89 f0                	mov    %esi,%eax
 86b364a:	89 da                	mov    %ebx,%edx
 86b364c:	89 04 24             	mov    %eax,(%esp)
 86b364f:	e8 fc 00 43 00       	call   8ae3750 <_Unwind_Resume>
 86b3654:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3657:	89 04 24             	mov    %eax,(%esp)
 86b365a:	e8 21 a8 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b365f:	83 c4 20             	add    $0x20,%esp
 86b3662:	5b                   	pop    %ebx
 86b3663:	5e                   	pop    %esi
 86b3664:	5d                   	pop    %ebp
 86b3665:	c3                   	ret

```

```c
// village_attacked::CVillageMonster::OnChangeState @ 0x86b35a0

/* village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE) */

void __thiscall
village_attacked::CVillageMonster::OnChangeState(CVillageMonster *this,undefined4 param_2)

{
  PacketGuard local_18 [12];
  
  *(undefined4 *)(this + 0x14) = param_2;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086b35c2 to 086b3636 has its CatchHandler @ 086b3639 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xf0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,*(int *)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)*(ushort *)this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CVillageMonsterArea::SendPacket(*(CVillageMonsterArea **)(this + 0x1c),local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## OnFightVillageMonster

```asm
// === 086b3240 village_attacked::CVillageMonster::OnFightVillageMonster  [0x086b3240-0x86b3309] ===
 86b3240:	55                   	push   %ebp
 86b3241:	89 e5                	mov    %esp,%ebp
 86b3243:	83 ec 18             	sub    $0x18,%esp
 86b3246:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3249:	8b 40 14             	mov    0x14(%eax),%eax
 86b324c:	85 c0                	test   %eax,%eax
 86b324e:	74 0a                	je     86b325a <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0x1a>
 86b3250:	b8 13 00 00 00       	mov    $0x13,%eax
 86b3255:	e9 ad 00 00 00       	jmp    86b3307 <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0xc7>
 86b325a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b325d:	89 04 24             	mov    %eax,(%esp)
 86b3260:	e8 c7 16 a8 ff       	call   813492c <_ZN5CUser8get_posXEv>
 86b3265:	0f b7 d0             	movzwl %ax,%edx
 86b3268:	8b 45 08             	mov    0x8(%ebp),%eax
 86b326b:	8b 40 04             	mov    0x4(%eax),%eax
 86b326e:	89 d1                	mov    %edx,%ecx
 86b3270:	29 c1                	sub    %eax,%ecx
 86b3272:	89 c8                	mov    %ecx,%eax
 86b3274:	89 c2                	mov    %eax,%edx
 86b3276:	c1 fa 1f             	sar    $0x1f,%edx
 86b3279:	31 d0                	xor    %edx,%eax
 86b327b:	29 d0                	sub    %edx,%eax
 86b327d:	3d 2c 01 00 00       	cmp    $0x12c,%eax
 86b3282:	7f 2a                	jg     86b32ae <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0x6e>
 86b3284:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3287:	89 04 24             	mov    %eax,(%esp)
 86b328a:	e8 ad 16 a8 ff       	call   813493c <_ZN5CUser8get_posYEv>
 86b328f:	0f b7 d0             	movzwl %ax,%edx
 86b3292:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3295:	8b 40 08             	mov    0x8(%eax),%eax
 86b3298:	89 d1                	mov    %edx,%ecx
 86b329a:	29 c1                	sub    %eax,%ecx
 86b329c:	89 c8                	mov    %ecx,%eax
 86b329e:	89 c2                	mov    %eax,%edx
 86b32a0:	c1 fa 1f             	sar    $0x1f,%edx
 86b32a3:	31 d0                	xor    %edx,%eax
 86b32a5:	29 d0                	sub    %edx,%eax
 86b32a7:	3d 2c 01 00 00       	cmp    $0x12c,%eax
 86b32ac:	7e 07                	jle    86b32b5 <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0x75>
 86b32ae:	b8 01 00 00 00       	mov    $0x1,%eax
 86b32b3:	eb 05                	jmp    86b32ba <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0x7a>
 86b32b5:	b8 00 00 00 00       	mov    $0x0,%eax
 86b32ba:	84 c0                	test   %al,%al
 86b32bc:	74 07                	je     86b32c5 <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0x85>
 86b32be:	b8 63 00 00 00       	mov    $0x63,%eax
 86b32c3:	eb 42                	jmp    86b3307 <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_+0xc7>
 86b32c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b32cc:	00 
 86b32cd:	8b 45 08             	mov    0x8(%ebp),%eax
 86b32d0:	89 04 24             	mov    %eax,(%esp)
 86b32d3:	e8 c8 02 00 00       	call   86b35a0 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE>
 86b32d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b32db:	89 04 24             	mov    %eax,(%esp)
 86b32de:	e8 6b cb b7 ff       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 86b32e3:	0f bf d0             	movswl %ax,%edx
 86b32e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b32e9:	89 50 18             	mov    %edx,0x18(%eax)
 86b32ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86b32ef:	8b 50 20             	mov    0x20(%eax),%edx
 86b32f2:	8b 45 10             	mov    0x10(%ebp),%eax
 86b32f5:	89 10                	mov    %edx,(%eax)
 86b32f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86b32fa:	8b 50 24             	mov    0x24(%eax),%edx
 86b32fd:	8b 45 14             	mov    0x14(%ebp),%eax
 86b3300:	89 10                	mov    %edx,(%eax)
 86b3302:	b8 00 00 00 00       	mov    $0x0,%eax
 86b3307:	c9                   	leave
 86b3308:	c3                   	ret
 86b3309:	90                   	nop

```

```c
// village_attacked::CVillageMonster::OnFightVillageMonster @ 0x86b3240

/* village_attacked::CVillageMonster::OnFightVillageMonster(CUser*, int&, int&) */

undefined4 __thiscall
village_attacked::CVillageMonster::OnFightVillageMonster
          (CVillageMonster *this,CUser *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(int *)(this + 0x14) == 0) {
    uVar3 = CUser::get_posX(param_1);
    uVar3 = (uVar3 & 0xffff) - *(int *)(this + 4);
    uVar5 = (int)uVar3 >> 0x1f;
    if (((int)((uVar3 ^ uVar5) - uVar5) < 0x12d) &&
       (uVar3 = CUser::get_posY(param_1), uVar3 = (uVar3 & 0xffff) - *(int *)(this + 8),
       uVar5 = (int)uVar3 >> 0x1f, (int)((uVar3 ^ uVar5) - uVar5) < 0x12d)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 99;
    }
    else {
      OnChangeState(this,1);
      sVar2 = CUser::GetPartyIndex(param_1);
      *(int *)(this + 0x18) = (int)sVar2;
      *param_2 = *(int *)(this + 0x20);
      *param_3 = *(int *)(this + 0x24);
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0x13;
}

```

---

## OnKillVillageMonster

```asm
// === 086b34a0 village_attacked::CVillageMonster::OnKillVillageMonster  [0x086b34a0-0x86b359f] ===
 86b34a0:	55                   	push   %ebp
 86b34a1:	89 e5                	mov    %esp,%ebp
 86b34a3:	53                   	push   %ebx
 86b34a4:	83 ec 34             	sub    $0x34,%esp
 86b34a7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86b34aa:	88 45 f4             	mov    %al,-0xc(%ebp)
 86b34ad:	8b 45 08             	mov    0x8(%ebp),%eax
 86b34b0:	8b 40 14             	mov    0x14(%eax),%eax
 86b34b3:	83 f8 01             	cmp    $0x1,%eax
 86b34b6:	74 0a                	je     86b34c2 <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0x22>
 86b34b8:	b8 13 00 00 00       	mov    $0x13,%eax
 86b34bd:	e9 d8 00 00 00       	jmp    86b359a <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0xfa>
 86b34c2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86b34c6:	74 27                	je     86b34ef <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0x4f>
 86b34c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b34cb:	89 04 24             	mov    %eax,(%esp)
 86b34ce:	e8 7b c9 b7 ff       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 86b34d3:	0f bf d0             	movswl %ax,%edx
 86b34d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b34d9:	8b 40 18             	mov    0x18(%eax),%eax
 86b34dc:	39 c2                	cmp    %eax,%edx
 86b34de:	0f 95 c0             	setne  %al
 86b34e1:	84 c0                	test   %al,%al
 86b34e3:	74 0a                	je     86b34ef <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0x4f>
 86b34e5:	b8 13 00 00 00       	mov    $0x13,%eax
 86b34ea:	e9 ab 00 00 00       	jmp    86b359a <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0xfa>
 86b34ef:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 86b34f3:	83 f0 01             	xor    $0x1,%eax
 86b34f6:	84 c0                	test   %al,%al
 86b34f8:	74 34                	je     86b352e <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0x8e>
 86b34fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b3501:	00 
 86b3502:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3505:	89 04 24             	mov    %eax,(%esp)
 86b3508:	e8 93 00 00 00       	call   86b35a0 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE>
 86b350d:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 86b3511:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b3515:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3518:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b351c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b351f:	89 04 24             	mov    %eax,(%esp)
 86b3522:	e8 e3 fd ff ff       	call   86b330a <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb>
 86b3527:	b8 00 00 00 00       	mov    $0x0,%eax
 86b352c:	eb 6c                	jmp    86b359a <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib+0xfa>
 86b352e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86b3535:	00 
 86b3536:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3539:	89 04 24             	mov    %eax,(%esp)
 86b353c:	e8 5f 00 00 00       	call   86b35a0 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE>
 86b3541:	8b 5d 14             	mov    0x14(%ebp),%ebx
 86b3544:	e8 33 2f a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b3549:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86b354d:	8b 55 10             	mov    0x10(%ebp),%edx
 86b3550:	89 54 24 14          	mov    %edx,0x14(%esp)
 86b3554:	8b 55 18             	mov    0x18(%ebp),%edx
 86b3557:	89 54 24 10          	mov    %edx,0x10(%esp)
 86b355b:	c7 44 24 0c 86 00 00 	movl   $0x86,0xc(%esp)
 86b3562:	00 
 86b3563:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b356a:	00 
 86b356b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86b3572:	00 
 86b3573:	89 04 24             	mov    %eax,(%esp)
 86b3576:	e8 9b d8 f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b357b:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 86b357f:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b3583:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3586:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b358a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b358d:	89 04 24             	mov    %eax,(%esp)
 86b3590:	e8 75 fd ff ff       	call   86b330a <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb>
 86b3595:	b8 00 00 00 00       	mov    $0x0,%eax
 86b359a:	83 c4 34             	add    $0x34,%esp
 86b359d:	5b                   	pop    %ebx
 86b359e:	5d                   	pop    %ebp
 86b359f:	c3                   	ret

```

```c
// village_attacked::CVillageMonster::OnKillVillageMonster @ 0x86b34a0

/* village_attacked::CVillageMonster::OnKillVillageMonster(CUser*, int, int, int, bool) */

undefined4 __thiscall
village_attacked::CVillageMonster::OnKillVillageMonster
          (CVillageMonster *this,CUser *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  short sVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)(this + 0x14) == 1) {
    if ((param_1 != (CUser *)0x0) &&
       (sVar1 = CUser::GetPartyIndex(param_1), (int)sVar1 != *(int *)(this + 0x18))) {
      return 0x13;
    }
    if (param_5) {
      OnChangeState(this,2);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,2,0,0x86,param_4,param_2,param_3);
      SendVillageMonsterFightResult(this,param_1,true);
      uVar2 = 0;
    }
    else {
      OnChangeState(this,0);
      SendVillageMonsterFightResult(this,param_1,false);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## OnRunVillageMonster

```asm
// === 086b310c village_attacked::CVillageMonster::OnRunVillageMonster  [0x086b310c-0x86b323f] ===
 86b310c:	55                   	push   %ebp
 86b310d:	89 e5                	mov    %esp,%ebp
 86b310f:	53                   	push   %ebx
 86b3110:	83 ec 34             	sub    $0x34,%esp
 86b3113:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3116:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 86b311a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b311d:	8b 40 14             	mov    0x14(%eax),%eax
 86b3120:	85 c0                	test   %eax,%eax
 86b3122:	0f 85 0d 01 00 00    	jne    86b3235 <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi+0x129>
 86b3128:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86b312b:	ba 56 55 55 55       	mov    $0x55555556,%edx
 86b3130:	89 c8                	mov    %ecx,%eax
 86b3132:	f7 ea                	imul   %edx
 86b3134:	89 c8                	mov    %ecx,%eax
 86b3136:	c1 f8 1f             	sar    $0x1f,%eax
 86b3139:	29 c2                	sub    %eax,%edx
 86b313b:	89 d0                	mov    %edx,%eax
 86b313d:	01 c0                	add    %eax,%eax
 86b313f:	01 d0                	add    %edx,%eax
 86b3141:	89 ca                	mov    %ecx,%edx
 86b3143:	29 c2                	sub    %eax,%edx
 86b3145:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3148:	8b 40 0c             	mov    0xc(%eax),%eax
 86b314b:	39 c2                	cmp    %eax,%edx
 86b314d:	0f 85 e5 00 00 00    	jne    86b3238 <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi+0x12c>
 86b3153:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3156:	8b 40 04             	mov    0x4(%eax),%eax
 86b3159:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86b315c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b315f:	8b 40 08             	mov    0x8(%eax),%eax
 86b3162:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86b3165:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 86b316c:	e8 16 ea ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b3171:	2d 96 00 00 00       	sub    $0x96,%eax
 86b3176:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b3179:	8b 45 08             	mov    0x8(%ebp),%eax
 86b317c:	8b 40 04             	mov    0x4(%eax),%eax
 86b317f:	89 c2                	mov    %eax,%edx
 86b3181:	03 55 f4             	add    -0xc(%ebp),%edx
 86b3184:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3187:	89 50 04             	mov    %edx,0x4(%eax)
 86b318a:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 86b3191:	e8 f1 e9 ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b3196:	2d 96 00 00 00       	sub    $0x96,%eax
 86b319b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b319e:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31a1:	8b 40 08             	mov    0x8(%eax),%eax
 86b31a4:	89 c2                	mov    %eax,%edx
 86b31a6:	03 55 f4             	add    -0xc(%ebp),%edx
 86b31a9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31ac:	89 50 08             	mov    %edx,0x8(%eax)
 86b31af:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31b2:	8d 58 08             	lea    0x8(%eax),%ebx
 86b31b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31b8:	8d 48 04             	lea    0x4(%eax),%ecx
 86b31bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31be:	8b 50 08             	mov    0x8(%eax),%edx
 86b31c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31c4:	8b 40 04             	mov    0x4(%eax),%eax
 86b31c7:	c7 44 24 14 14 00 00 	movl   $0x14,0x14(%esp)
 86b31ce:	00 
 86b31cf:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86b31d3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86b31d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b31db:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b31df:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b31e2:	89 04 24             	mov    %eax,(%esp)
 86b31e5:	e8 21 28 c3 ff       	call   82e5a0b <_ZN11pvp_assault25IsIncludeVirtualMoveAreasEPSt6vectorI7MapAreaSaIS1_EEiiRiS5_i>
 86b31ea:	8b 45 08             	mov    0x8(%ebp),%eax
 86b31ed:	8b 40 04             	mov    0x4(%eax),%eax
 86b31f0:	2b 45 ec             	sub    -0x14(%ebp),%eax
 86b31f3:	89 c1                	mov    %eax,%ecx
 86b31f5:	c1 f9 1f             	sar    $0x1f,%ecx
 86b31f8:	89 ca                	mov    %ecx,%edx
 86b31fa:	31 c2                	xor    %eax,%edx
 86b31fc:	29 ca                	sub    %ecx,%edx
 86b31fe:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3201:	8b 40 08             	mov    0x8(%eax),%eax
 86b3204:	2b 45 f0             	sub    -0x10(%ebp),%eax
 86b3207:	89 c1                	mov    %eax,%ecx
 86b3209:	c1 f9 1f             	sar    $0x1f,%ecx
 86b320c:	31 c8                	xor    %ecx,%eax
 86b320e:	29 c8                	sub    %ecx,%eax
 86b3210:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86b3213:	83 f8 31             	cmp    $0x31,%eax
 86b3216:	7f 14                	jg     86b322c <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi+0x120>
 86b3218:	8b 45 08             	mov    0x8(%ebp),%eax
 86b321b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86b321e:	89 50 04             	mov    %edx,0x4(%eax)
 86b3221:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3224:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86b3227:	89 50 08             	mov    %edx,0x8(%eax)
 86b322a:	eb 0d                	jmp    86b3239 <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi+0x12d>
 86b322c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b322f:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 86b3233:	eb 04                	jmp    86b3239 <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi+0x12d>
 86b3235:	90                   	nop
 86b3236:	eb 01                	jmp    86b3239 <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi+0x12d>
 86b3238:	90                   	nop
 86b3239:	83 c4 34             	add    $0x34,%esp
 86b323c:	5b                   	pop    %ebx
 86b323d:	5d                   	pop    %ebp
 86b323e:	c3                   	ret
 86b323f:	90                   	nop

```

```c
// village_attacked::CVillageMonster::OnRunVillageMonster @ 0x86b310c

/* village_attacked::CVillageMonster::OnRunVillageMonster(std::vector<MapArea,
   std::allocator<MapArea> >*, int) */

void __thiscall
village_attacked::CVillageMonster::OnRunVillageMonster
          (CVillageMonster *this,vector *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  this[0x10] = (CVillageMonster)0x0;
  if ((*(int *)(this + 0x14) == 0) && (param_2 % 3 == *(int *)(this + 0xc))) {
    iVar1 = *(int *)(this + 4);
    iVar2 = *(int *)(this + 8);
    iVar3 = get_rand_int(300);
    *(int *)(this + 4) = *(int *)(this + 4) + iVar3 + -0x96;
    iVar3 = get_rand_int(300);
    *(int *)(this + 8) = *(int *)(this + 8) + iVar3 + -0x96;
    pvp_assault::IsIncludeVirtualMoveAreas
              (param_1,*(int *)(this + 4),*(int *)(this + 8),(int *)(this + 4),(int *)(this + 8),
               0x14);
    uVar4 = *(int *)(this + 4) - iVar1;
    uVar6 = (int)uVar4 >> 0x1f;
    uVar5 = *(int *)(this + 8) - iVar2;
    uVar7 = (int)uVar5 >> 0x1f;
    if ((int)(((uVar6 ^ uVar4) - uVar6) + ((uVar5 ^ uVar7) - uVar7)) < 0x32) {
      *(int *)(this + 4) = iVar1;
      *(int *)(this + 8) = iVar2;
    }
    else {
      this[0x10] = (CVillageMonster)0x1;
    }
  }
  return;
}

```

---

## SendVillageMonsterFightResult

```asm
// === 086b330a village_attacked::CVillageMonster::SendVillageMonsterFightResult  [0x086b330a-0x86b349f] ===
 86b330a:	55                   	push   %ebp
 86b330b:	89 e5                	mov    %esp,%ebp
 86b330d:	56                   	push   %esi
 86b330e:	53                   	push   %ebx
 86b330f:	83 ec 70             	sub    $0x70,%esp
 86b3312:	8b 45 10             	mov    0x10(%ebp),%eax
 86b3315:	88 45 a4             	mov    %al,-0x5c(%ebp)
 86b3318:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86b331c:	0f 84 75 01 00 00    	je     86b3497 <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0x18d>
 86b3322:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3325:	89 04 24             	mov    %eax,(%esp)
 86b3328:	e8 1f 1e fa ff       	call   865514c <_ZN5CUser8GetPartyEv>
 86b332d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86b3330:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86b3334:	0f 84 5e 01 00 00    	je     86b3498 <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0x18e>
 86b333a:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 86b333d:	89 04 24             	mov    %eax,(%esp)
 86b3340:	e8 3f 18 00 00       	call   86b4b84 <_ZN32Packet_VillageMonsterFightResultC1Ev>
 86b3345:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86b334c:	eb 70                	jmp    86b33be <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0xb4>
 86b334e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b3351:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3355:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b3358:	89 04 24             	mov    %eax,(%esp)
 86b335b:	e8 04 24 a9 ff       	call   8145764 <_ZN6CParty8get_userEi>
 86b3360:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b3363:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86b3367:	74 51                	je     86b33ba <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0xb0>
 86b3369:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 86b336c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b336f:	89 04 24             	mov    %eax,(%esp)
 86b3372:	e8 1f 59 a1 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86b3377:	89 44 9d bf          	mov    %eax,-0x41(%ebp,%ebx,4)
 86b337b:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 86b337e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 86b3385:	ff 
 86b3386:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b3389:	89 04 24             	mov    %eax,(%esp)
 86b338c:	e8 0f ac f9 ff       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 86b3391:	8d 53 04             	lea    0x4(%ebx),%edx
 86b3394:	89 44 95 bf          	mov    %eax,-0x41(%ebp,%edx,4)
 86b3398:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 86b339d:	89 04 24             	mov    %eax,(%esp)
 86b33a0:	e8 9f db c3 ff       	call   82f0f44 <_ZN16village_attacked18CVillageMonsterMgr7OnEventEv>
 86b33a5:	84 c0                	test   %al,%al
 86b33a7:	74 11                	je     86b33ba <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0xb0>
 86b33a9:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 86b33ad:	74 0b                	je     86b33ba <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0xb0>
 86b33af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b33b2:	89 04 24             	mov    %eax,(%esp)
 86b33b5:	e8 2c 18 00 00       	call   86b4be6 <_ZN15CUserCharacInfo21IncVillageAttackCountEv>
 86b33ba:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86b33be:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 86b33c2:	0f 9e c0             	setle  %al
 86b33c5:	84 c0                	test   %al,%al
 86b33c7:	75 85                	jne    86b334e <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0x44>
 86b33c9:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 86b33cd:	88 45 df             	mov    %al,-0x21(%ebp)
 86b33d0:	8d 5d b5             	lea    -0x4b(%ebp),%ebx
 86b33d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b33d6:	89 04 24             	mov    %eax,(%esp)
 86b33d9:	e8 b2 88 a1 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 86b33de:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 86b33e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b33e8:	89 14 24             	mov    %edx,(%esp)
 86b33eb:	e8 9a ec a5 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 86b33f0:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 86b33f7:	00 
 86b33f8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b33fc:	89 04 24             	mov    %eax,(%esp)
 86b33ff:	e8 40 da db ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 86b3404:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3407:	89 04 24             	mov    %eax,(%esp)
 86b340a:	e8 3d a9 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b340f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3412:	89 04 24             	mov    %eax,(%esp)
 86b3415:	e8 cc 84 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b341a:	c7 44 24 08 f9 00 00 	movl   $0xf9,0x8(%esp)
 86b3421:	00 
 86b3422:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b3429:	00 
 86b342a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b342d:	89 04 24             	mov    %eax,(%esp)
 86b3430:	e8 c7 84 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b3435:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 86b3439:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b343d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3440:	89 04 24             	mov    %eax,(%esp)
 86b3443:	e8 d8 84 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b3448:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b344f:	00 
 86b3450:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3453:	89 04 24             	mov    %eax,(%esp)
 86b3456:	e8 fd 84 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b345b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b345e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3462:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b3465:	89 04 24             	mov    %eax,(%esp)
 86b3468:	e8 e1 9c ee ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 86b346d:	eb 1b                	jmp    86b348a <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0x180>
 86b346f:	89 d3                	mov    %edx,%ebx
 86b3471:	89 c6                	mov    %eax,%esi
 86b3473:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3476:	89 04 24             	mov    %eax,(%esp)
 86b3479:	e8 02 aa ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b347e:	89 f0                	mov    %esi,%eax
 86b3480:	89 da                	mov    %ebx,%edx
 86b3482:	89 04 24             	mov    %eax,(%esp)
 86b3485:	e8 c6 02 43 00       	call   8ae3750 <_Unwind_Resume>
 86b348a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b348d:	89 04 24             	mov    %eax,(%esp)
 86b3490:	e8 eb a9 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3495:	eb 01                	jmp    86b3498 <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb+0x18e>
 86b3497:	90                   	nop
 86b3498:	83 c4 70             	add    $0x70,%esp
 86b349b:	5b                   	pop    %ebx
 86b349c:	5e                   	pop    %esi
 86b349d:	5d                   	pop    %ebp
 86b349e:	c3                   	ret
 86b349f:	90                   	nop

```

```c
// village_attacked::CVillageMonster::SendVillageMonsterFightResult @ 0x86b330a

/* village_attacked::CVillageMonster::SendVillageMonsterFightResult(CUser*, bool) */

void __thiscall
village_attacked::CVillageMonster::SendVillageMonsterFightResult
          (CVillageMonster *this,CUser *param_1,bool param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CMonitorServerProxy *this_00;
  Packet_VillageMonsterFightResult local_4f [10];
  undefined4 auStack_45 [8];
  undefined1 local_25;
  PacketGuard local_24 [12];
  CParty *local_18;
  int local_14;
  CUser *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_18 = (CParty *)CUser::GetParty(param_1);
    if (local_18 != (CParty *)0x0) {
      Packet_VillageMonsterFightResult::Packet_VillageMonsterFightResult(local_4f);
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        local_10 = (CUser *)CParty::get_user(local_18,local_14);
        iVar1 = local_14;
        if (local_10 != (CUser *)0x0) {
          uVar3 = CUser::GetUID(local_10);
          auStack_45[iVar1] = uVar3;
          iVar1 = local_14;
          uVar3 = CUser::get_charac_no(local_10,-1);
          auStack_45[iVar1 + 4] = uVar3;
          cVar2 = CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
          if ((cVar2 != '\0') && (param_2)) {
            CUserCharacInfo::IncVillageAttackCount((CUserCharacInfo *)local_10);
          }
        }
      }
      local_25 = param_2;
      uVar3 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar3);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_4f,0x2b);
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086b3415 to 086b346c has its CatchHandler @ 086b346f */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xf9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)param_2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CParty::send_to_party(local_18,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
  }
  return;
}

```

---

## ~CVillageMonster

```asm
// === 086b3106 village_attacked::CVillageMonster::~CVillageMonster  [0x086b3106-0x86b310b] ===
 86b3106:	55                   	push   %ebp
 86b3107:	89 e5                	mov    %esp,%ebp
 86b3109:	5d                   	pop    %ebp
 86b310a:	c3                   	ret
 86b310b:	90                   	nop

```

```c
// village_attacked::CVillageMonster::~CVillageMonster @ 0x86b3106

/* village_attacked::CVillageMonster::~CVillageMonster() */

void __thiscall village_attacked::CVillageMonster::~CVillageMonster(CVillageMonster *this)

{
  return;
}

```

