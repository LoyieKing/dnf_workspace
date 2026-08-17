# CRelayBattleMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 22

---

## ArrangeChangeSequence

```asm
// === 085de790 CRelayBattleMgr::ArrangeChangeSequence  [0x085de790-0x85de83d] ===
 85de790:	55                   	push   %ebp
 85de791:	89 e5                	mov    %esp,%ebp
 85de793:	53                   	push   %ebx
 85de794:	83 ec 24             	sub    $0x24,%esp
 85de797:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85de79e:	e9 85 00 00 00       	jmp    85de828 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi+0x98>
 85de7a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de7a6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de7a9:	89 d0                	mov    %edx,%eax
 85de7ab:	01 c0                	add    %eax,%eax
 85de7ad:	01 d0                	add    %edx,%eax
 85de7af:	c1 e0 02             	shl    $0x2,%eax
 85de7b2:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85de7b7:	0f be c0             	movsbl %al,%eax
 85de7ba:	3b 45 10             	cmp    0x10(%ebp),%eax
 85de7bd:	75 65                	jne    85de824 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi+0x94>
 85de7bf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de7c2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de7c5:	89 d0                	mov    %edx,%eax
 85de7c7:	01 c0                	add    %eax,%eax
 85de7c9:	01 d0                	add    %edx,%eax
 85de7cb:	c1 e0 02             	shl    $0x2,%eax
 85de7ce:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 85de7d1:	83 f8 01             	cmp    $0x1,%eax
 85de7d4:	75 4e                	jne    85de824 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi+0x94>
 85de7d6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de7d9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de7dc:	89 d0                	mov    %edx,%eax
 85de7de:	01 c0                	add    %eax,%eax
 85de7e0:	01 d0                	add    %edx,%eax
 85de7e2:	c1 e0 02             	shl    $0x2,%eax
 85de7e5:	0f b6 44 08 07       	movzbl 0x7(%eax,%ecx,1),%eax
 85de7ea:	84 c0                	test   %al,%al
 85de7ec:	74 36                	je     85de824 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi+0x94>
 85de7ee:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85de7f1:	8b 45 14             	mov    0x14(%ebp),%eax
 85de7f4:	8b 00                	mov    (%eax),%eax
 85de7f6:	89 c2                	mov    %eax,%edx
 85de7f8:	8d 48 01             	lea    0x1(%eax),%ecx
 85de7fb:	8b 45 14             	mov    0x14(%ebp),%eax
 85de7fe:	89 08                	mov    %ecx,(%eax)
 85de800:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de804:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de807:	89 04 24             	mov    %eax,(%esp)
 85de80a:	e8 cd f9 aa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85de80f:	8b 00                	mov    (%eax),%eax
 85de811:	89 c1                	mov    %eax,%ecx
 85de813:	8b 55 08             	mov    0x8(%ebp),%edx
 85de816:	89 d8                	mov    %ebx,%eax
 85de818:	01 c0                	add    %eax,%eax
 85de81a:	01 d8                	add    %ebx,%eax
 85de81c:	c1 e0 02             	shl    $0x2,%eax
 85de81f:	66 89 4c 10 04       	mov    %cx,0x4(%eax,%edx,1)
 85de824:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85de828:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85de82c:	0f 9e c0             	setle  %al
 85de82f:	84 c0                	test   %al,%al
 85de831:	0f 85 6c ff ff ff    	jne    85de7a3 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi+0x13>
 85de837:	83 c4 24             	add    $0x24,%esp
 85de83a:	5b                   	pop    %ebx
 85de83b:	5d                   	pop    %ebp
 85de83c:	c3                   	ret
 85de83d:	90                   	nop

```

```c
// CRelayBattleMgr::ArrangeChangeSequence @ 0x85de790

/* CRelayBattleMgr::ArrangeChangeSequence(std::vector<int, std::allocator<int> >&, int, int&) */

void __thiscall
CRelayBattleMgr::ArrangeChangeSequence
          (CRelayBattleMgr *this,vector *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((((char)this[local_10 * 0xc + 6] == param_2) && (*(int *)(this + local_10 * 0xc) == 1)) &&
       (this[local_10 * 0xc + 7] != (CRelayBattleMgr)0x0)) {
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      puVar2 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)param_1,uVar1);
      *(short *)(this + local_10 * 0xc + 4) = (short)*puVar2;
    }
  }
  return;
}

```

---

## ArrangeMatchSequence

```asm
// === 085de8ee CRelayBattleMgr::ArrangeMatchSequence  [0x085de8ee-0x85dea13] ===
 85de8ee:	55                   	push   %ebp
 85de8ef:	89 e5                	mov    %esp,%ebp
 85de8f1:	56                   	push   %esi
 85de8f2:	53                   	push   %ebx
 85de8f3:	83 ec 30             	sub    $0x30,%esp
 85de8f6:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85de8fd:	e9 fc 00 00 00       	jmp    85de9fe <_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv+0x110>
 85de902:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85de909:	8d 45 eb             	lea    -0x15(%ebp),%eax
 85de90c:	89 04 24             	mov    %eax,(%esp)
 85de90f:	e8 02 fe aa ff       	call   808e716 <_ZNSaIiEC1Ev>
 85de914:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85de91b:	8d 45 eb             	lea    -0x15(%ebp),%eax
 85de91e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85de922:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85de925:	89 44 24 08          	mov    %eax,0x8(%esp)
 85de929:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85de930:	00 
 85de931:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de934:	89 04 24             	mov    %eax,(%esp)
 85de937:	e8 40 18 00 00       	call   85e017c <_ZNSt6vectorIiSaIiEEC1EjRKiRKS0_>
 85de93c:	eb 1b                	jmp    85de959 <_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv+0x6b>
 85de93e:	89 d3                	mov    %edx,%ebx
 85de940:	89 c6                	mov    %eax,%esi
 85de942:	8d 45 eb             	lea    -0x15(%ebp),%eax
 85de945:	89 04 24             	mov    %eax,(%esp)
 85de948:	e8 85 56 aa ff       	call   8083fd2 <_ZNSaIiED1Ev>
 85de94d:	89 f0                	mov    %esi,%eax
 85de94f:	89 da                	mov    %ebx,%edx
 85de951:	89 04 24             	mov    %eax,(%esp)
 85de954:	e8 f7 4d 50 00       	call   8ae3750 <_Unwind_Resume>
 85de959:	8d 45 eb             	lea    -0x15(%ebp),%eax
 85de95c:	89 04 24             	mov    %eax,(%esp)
 85de95f:	e8 6e 56 aa ff       	call   8083fd2 <_ZNSaIiED1Ev>
 85de964:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85de967:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de96b:	8b 45 08             	mov    0x8(%ebp),%eax
 85de96e:	89 04 24             	mov    %eax,(%esp)
 85de971:	e8 fe fa ff ff       	call   85de474 <_ZN15CRelayBattleMgr22GetChangeSequenceCountEi>
 85de976:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85de979:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85de97c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85de980:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de983:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de987:	8b 45 08             	mov    0x8(%ebp),%eax
 85de98a:	89 04 24             	mov    %eax,(%esp)
 85de98d:	e8 52 fc ff ff       	call   85de5e4 <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi>
 85de992:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85de995:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85de999:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85de99c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85de9a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de9a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de9a7:	8b 45 08             	mov    0x8(%ebp),%eax
 85de9aa:	89 04 24             	mov    %eax,(%esp)
 85de9ad:	e8 de fd ff ff       	call   85de790 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi>
 85de9b2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85de9b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85de9b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85de9bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 85de9c0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de9c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de9c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85de9ca:	89 04 24             	mov    %eax,(%esp)
 85de9cd:	e8 6c fe ff ff       	call   85de83e <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi>
 85de9d2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de9d5:	89 04 24             	mov    %eax,(%esp)
 85de9d8:	e8 fd 53 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85de9dd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85de9e1:	eb 1b                	jmp    85de9fe <_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv+0x110>
 85de9e3:	89 d3                	mov    %edx,%ebx
 85de9e5:	89 c6                	mov    %eax,%esi
 85de9e7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de9ea:	89 04 24             	mov    %eax,(%esp)
 85de9ed:	e8 e8 53 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85de9f2:	89 f0                	mov    %esi,%eax
 85de9f4:	89 da                	mov    %ebx,%edx
 85de9f6:	89 04 24             	mov    %eax,(%esp)
 85de9f9:	e8 52 4d 50 00       	call   8ae3750 <_Unwind_Resume>
 85de9fe:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 85dea02:	0f 9e c0             	setle  %al
 85dea05:	84 c0                	test   %al,%al
 85dea07:	0f 85 f5 fe ff ff    	jne    85de902 <_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv+0x14>
 85dea0d:	83 c4 30             	add    $0x30,%esp
 85dea10:	5b                   	pop    %ebx
 85dea11:	5e                   	pop    %esi
 85dea12:	5d                   	pop    %ebp
 85dea13:	c3                   	ret

```

```c
// CRelayBattleMgr::ArrangeMatchSequence @ 0x85de8ee

/* CRelayBattleMgr::ArrangeMatchSequence() */

void __thiscall CRelayBattleMgr::ArrangeMatchSequence(CRelayBattleMgr *this)

{
  vector<int,std::allocator<int>> local_2c [12];
  int local_20;
  allocator<int> local_19;
  int local_18;
  int local_14;
  int local_10;
  
  for (local_14 = 1; local_14 < 3; local_14 = local_14 + 1) {
    local_20 = 0;
    std::allocator<int>::allocator();
    local_18 = 0;
                    /* try { // try from 085de937 to 085de93b has its CatchHandler @ 085de93e */
    std::vector<int,std::allocator<int>>::vector(local_2c,4,&local_18,(allocator *)&local_19);
    std::allocator<int>::~allocator(&local_19);
    local_10 = GetChangeSequenceCount(this,local_14);
                    /* try { // try from 085de98d to 085de991 has its CatchHandler @ 085de9e3 */
    CreateRandomSequenceVector(this,(vector *)local_2c,local_10);
    ArrangeChangeSequence(this,(vector *)local_2c,local_14,&local_20);
    ArrangeNoChangeSequence(this,(vector *)local_2c,local_14,&local_20);
    std::vector<int,std::allocator<int>>::~vector(local_2c);
  }
  return;
}

```

---

## ArrangeNoChangeSequence

```asm
// === 085de83e CRelayBattleMgr::ArrangeNoChangeSequence  [0x085de83e-0x85de8ed] ===
 85de83e:	55                   	push   %ebp
 85de83f:	89 e5                	mov    %esp,%ebp
 85de841:	53                   	push   %ebx
 85de842:	83 ec 24             	sub    $0x24,%esp
 85de845:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85de84c:	e9 88 00 00 00       	jmp    85de8d9 <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi+0x9b>
 85de851:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de854:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de857:	89 d0                	mov    %edx,%eax
 85de859:	01 c0                	add    %eax,%eax
 85de85b:	01 d0                	add    %edx,%eax
 85de85d:	c1 e0 02             	shl    $0x2,%eax
 85de860:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85de865:	0f be c0             	movsbl %al,%eax
 85de868:	3b 45 10             	cmp    0x10(%ebp),%eax
 85de86b:	75 68                	jne    85de8d5 <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi+0x97>
 85de86d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de870:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de873:	89 d0                	mov    %edx,%eax
 85de875:	01 c0                	add    %eax,%eax
 85de877:	01 d0                	add    %edx,%eax
 85de879:	c1 e0 02             	shl    $0x2,%eax
 85de87c:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 85de87f:	83 f8 01             	cmp    $0x1,%eax
 85de882:	75 51                	jne    85de8d5 <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi+0x97>
 85de884:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de887:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de88a:	89 d0                	mov    %edx,%eax
 85de88c:	01 c0                	add    %eax,%eax
 85de88e:	01 d0                	add    %edx,%eax
 85de890:	c1 e0 02             	shl    $0x2,%eax
 85de893:	0f b6 44 08 07       	movzbl 0x7(%eax,%ecx,1),%eax
 85de898:	83 f0 01             	xor    $0x1,%eax
 85de89b:	84 c0                	test   %al,%al
 85de89d:	74 36                	je     85de8d5 <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi+0x97>
 85de89f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85de8a2:	8b 45 14             	mov    0x14(%ebp),%eax
 85de8a5:	8b 00                	mov    (%eax),%eax
 85de8a7:	89 c2                	mov    %eax,%edx
 85de8a9:	8d 48 01             	lea    0x1(%eax),%ecx
 85de8ac:	8b 45 14             	mov    0x14(%ebp),%eax
 85de8af:	89 08                	mov    %ecx,(%eax)
 85de8b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de8b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de8b8:	89 04 24             	mov    %eax,(%esp)
 85de8bb:	e8 1c f9 aa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85de8c0:	8b 00                	mov    (%eax),%eax
 85de8c2:	89 c1                	mov    %eax,%ecx
 85de8c4:	8b 55 08             	mov    0x8(%ebp),%edx
 85de8c7:	89 d8                	mov    %ebx,%eax
 85de8c9:	01 c0                	add    %eax,%eax
 85de8cb:	01 d8                	add    %ebx,%eax
 85de8cd:	c1 e0 02             	shl    $0x2,%eax
 85de8d0:	66 89 4c 10 04       	mov    %cx,0x4(%eax,%edx,1)
 85de8d5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85de8d9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85de8dd:	0f 9e c0             	setle  %al
 85de8e0:	84 c0                	test   %al,%al
 85de8e2:	0f 85 69 ff ff ff    	jne    85de851 <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi+0x13>
 85de8e8:	83 c4 24             	add    $0x24,%esp
 85de8eb:	5b                   	pop    %ebx
 85de8ec:	5d                   	pop    %ebp
 85de8ed:	c3                   	ret

```

```c
// CRelayBattleMgr::ArrangeNoChangeSequence @ 0x85de83e

/* CRelayBattleMgr::ArrangeNoChangeSequence(std::vector<int, std::allocator<int> >&, int, int&) */

void __thiscall
CRelayBattleMgr::ArrangeNoChangeSequence
          (CRelayBattleMgr *this,vector *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((((char)this[local_10 * 0xc + 6] == param_2) && (*(int *)(this + local_10 * 0xc) == 1)) &&
       (this[local_10 * 0xc + 7] != (CRelayBattleMgr)0x1)) {
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      puVar2 = (undefined4 *)
               std::vector<int,std::allocator<int>>::operator[]
                         ((vector<int,std::allocator<int>> *)param_1,uVar1);
      *(short *)(this + local_10 * 0xc + 4) = (short)*puVar2;
    }
  }
  return;
}

```

---

## CreateRandomSequenceVector

```asm
// === 085de5e4 CRelayBattleMgr::CreateRandomSequenceVector  [0x085de5e4-0x85de78f] ===
 85de5e4:	55                   	push   %ebp
 85de5e5:	89 e5                	mov    %esp,%ebp
 85de5e7:	56                   	push   %esi
 85de5e8:	53                   	push   %ebx
 85de5e9:	83 ec 60             	sub    $0x60,%esp
 85de5ec:	8b 45 10             	mov    0x10(%ebp),%eax
 85de5ef:	89 c3                	mov    %eax,%ebx
 85de5f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de5f4:	89 04 24             	mov    %eax,(%esp)
 85de5f7:	e8 c4 fb aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85de5fc:	39 c3                	cmp    %eax,%ebx
 85de5fe:	0f 97 c0             	seta   %al
 85de601:	84 c0                	test   %al,%al
 85de603:	74 0e                	je     85de613 <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi+0x2f>
 85de605:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de608:	89 04 24             	mov    %eax,(%esp)
 85de60b:	e8 b0 fb aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85de610:	89 45 10             	mov    %eax,0x10(%ebp)
 85de613:	8b 45 10             	mov    0x10(%ebp),%eax
 85de616:	85 c0                	test   %eax,%eax
 85de618:	0f 8e 1e 01 00 00    	jle    85de73c <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi+0x158>
 85de61e:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 85de625:	00 
 85de626:	c7 44 24 0c 64 00 00 	movl   $0x64,0xc(%esp)
 85de62d:	00 
 85de62e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85de635:	00 
 85de636:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de639:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de63d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85de640:	89 04 24             	mov    %eax,(%esp)
 85de643:	e8 b6 11 00 00       	call   85df7fe <_ZN12CRandomValueC1ERSt6vectorIiSaIiEEiii>
 85de648:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85de64b:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de64e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de652:	89 04 24             	mov    %eax,(%esp)
 85de655:	e8 12 fc aa ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85de65a:	83 ec 04             	sub    $0x4,%esp
 85de65d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85de660:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de663:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de667:	89 04 24             	mov    %eax,(%esp)
 85de66a:	e8 d9 fb aa ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85de66f:	83 ec 04             	sub    $0x4,%esp
 85de672:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85de675:	89 44 24 08          	mov    %eax,0x8(%esp)
 85de679:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85de67c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85de680:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85de683:	89 44 24 10          	mov    %eax,0x10(%esp)
 85de687:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85de68a:	89 44 24 14          	mov    %eax,0x14(%esp)
 85de68e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85de691:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de695:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85de698:	89 04 24             	mov    %eax,(%esp)
 85de69b:	e8 1f 1a 00 00       	call   85e00bf <_ZSt8generateIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE12CRandomValueEvT_S8_T0_>
 85de6a0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85de6a3:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de6a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de6aa:	89 04 24             	mov    %eax,(%esp)
 85de6ad:	e8 ba fb aa ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85de6b2:	83 ec 04             	sub    $0x4,%esp
 85de6b5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85de6b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de6bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de6bf:	89 04 24             	mov    %eax,(%esp)
 85de6c2:	e8 81 fb aa ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85de6c7:	83 ec 04             	sub    $0x4,%esp
 85de6ca:	89 f0                	mov    %esi,%eax
 85de6cc:	88 44 24 08          	mov    %al,0x8(%esp)
 85de6d0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85de6d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de6d7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85de6da:	89 04 24             	mov    %eax,(%esp)
 85de6dd:	e8 27 1a 00 00       	call   85e0109 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE11CDescendingEvT_S8_T0_>
 85de6e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85de6e5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de6e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de6ec:	89 04 24             	mov    %eax,(%esp)
 85de6ef:	e8 54 fb aa ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85de6f4:	83 ec 04             	sub    $0x4,%esp
 85de6f7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85de6fa:	8d 55 10             	lea    0x10(%ebp),%edx
 85de6fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85de701:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85de704:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de708:	89 04 24             	mov    %eax,(%esp)
 85de70b:	e8 92 c2 b0 ff       	call   80ea9a2 <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplERKi>
 85de710:	83 ec 04             	sub    $0x4,%esp
 85de713:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85de716:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de719:	89 54 24 04          	mov    %edx,0x4(%esp)
 85de71d:	89 04 24             	mov    %eax,(%esp)
 85de720:	e8 23 fb aa ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85de725:	83 ec 04             	sub    $0x4,%esp
 85de728:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85de72b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de72f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85de732:	89 04 24             	mov    %eax,(%esp)
 85de735:	e8 54 66 b5 ff       	call   8134d8e <_ZSt14random_shuffleIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_>
 85de73a:	eb 49                	jmp    85de785 <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi+0x1a1>
 85de73c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de73f:	89 04 24             	mov    %eax,(%esp)
 85de742:	e8 79 fa aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85de747:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85de74a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85de74d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85de750:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85de757:	eb 1f                	jmp    85de778 <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi+0x194>
 85de759:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85de75c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de760:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de763:	89 04 24             	mov    %eax,(%esp)
 85de766:	e8 71 fa aa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85de76b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85de76e:	89 10                	mov    %edx,(%eax)
 85de770:	83 6d f0 01          	subl   $0x1,-0x10(%ebp)
 85de774:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85de778:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85de77b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85de77e:	0f 9c c0             	setl   %al
 85de781:	84 c0                	test   %al,%al
 85de783:	75 d4                	jne    85de759 <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi+0x175>
 85de785:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85de788:	83 c4 00             	add    $0x0,%esp
 85de78b:	5b                   	pop    %ebx
 85de78c:	5e                   	pop    %esi
 85de78d:	5d                   	pop    %ebp
 85de78e:	c3                   	ret
 85de78f:	90                   	nop

```

```c
// CRelayBattleMgr::CreateRandomSequenceVector @ 0x85de5e4

/* CRelayBattleMgr::CreateRandomSequenceVector(std::vector<int, std::allocator<int> >&, int) */

void __thiscall
CRelayBattleMgr::CreateRandomSequenceVector(CRelayBattleMgr *this,vector *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 unaff_SI;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar1 = param_2;
  uVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
  if (uVar2 < (uint)iVar1) {
    param_2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1)
    ;
  }
  if (param_2 < 1) {
    local_18 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_14 = local_18;
    for (local_10 = 0; (int)local_10 < local_18; local_10 = local_10 + 1) {
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)param_1,local_10);
      *piVar3 = local_14;
      local_14 = local_14 + -1;
    }
  }
  else {
    CRandomValue::CRandomValue((CRandomValue *)&local_44,param_1,1,100,10);
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    generate<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,CRandomValue>
              (local_30,local_34,local_44,local_40,local_3c,local_38);
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,CDescending>
              (local_28,local_2c,unaff_SI);
    std::vector<int,std::allocator<int>>::begin();
    piVar3 = &param_2;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator+
              ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_24,&local_20);
    std::vector<int,std::allocator<int>>::begin();
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (local_1c,local_24,piVar3);
  }
  return;
}

```

---

## DecreaseChangeSequenceCount

```asm
// === 085de53e CRelayBattleMgr::DecreaseChangeSequenceCount  [0x085de53e-0x85de5e3] ===
 85de53e:	55                   	push   %ebp
 85de53f:	89 e5                	mov    %esp,%ebp
 85de541:	53                   	push   %ebx
 85de542:	83 ec 24             	sub    $0x24,%esp
 85de545:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de549:	0f 8e 8a 00 00 00    	jle    85de5d9 <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi+0x9b>
 85de54f:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85de553:	0f 8f 83 00 00 00    	jg     85de5dc <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi+0x9e>
 85de559:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de55c:	8b 55 08             	mov    0x8(%ebp),%edx
 85de55f:	8d 48 18             	lea    0x18(%eax),%ecx
 85de562:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 85de565:	8d 4a ff             	lea    -0x1(%edx),%ecx
 85de568:	8b 55 08             	mov    0x8(%ebp),%edx
 85de56b:	83 c0 18             	add    $0x18,%eax
 85de56e:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 85de571:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de574:	8b 45 08             	mov    0x8(%ebp),%eax
 85de577:	83 c2 18             	add    $0x18,%edx
 85de57a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85de57d:	85 c0                	test   %eax,%eax
 85de57f:	79 5c                	jns    85de5dd <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi+0x9f>
 85de581:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de584:	8b 45 08             	mov    0x8(%ebp),%eax
 85de587:	83 c2 18             	add    $0x18,%edx
 85de58a:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85de58d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85de594:	00 
 85de595:	c7 44 24 08 ea 13 00 	movl   $0x13ea,0x8(%esp)
 85de59c:	00 
 85de59d:	c7 44 24 04 20 22 cc 	movl   $0x8cc2220,0x4(%esp)
 85de5a4:	08 
 85de5a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85de5a8:	89 04 24             	mov    %eax,(%esp)
 85de5ab:	e8 68 11 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85de5b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85de5b4:	c7 44 24 04 04 14 cc 	movl   $0x8cc1404,0x4(%esp)
 85de5bb:	08 
 85de5bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85de5bf:	89 04 24             	mov    %eax,(%esp)
 85de5c2:	e8 c1 11 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85de5c7:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de5ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85de5cd:	83 c2 18             	add    $0x18,%edx
 85de5d0:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85de5d7:	eb 04                	jmp    85de5dd <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi+0x9f>
 85de5d9:	90                   	nop
 85de5da:	eb 01                	jmp    85de5dd <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi+0x9f>
 85de5dc:	90                   	nop
 85de5dd:	83 c4 24             	add    $0x24,%esp
 85de5e0:	5b                   	pop    %ebx
 85de5e1:	5d                   	pop    %ebp
 85de5e2:	c3                   	ret
 85de5e3:	90                   	nop

```

```c
// CRelayBattleMgr::DecreaseChangeSequenceCount @ 0x85de53e

/* CRelayBattleMgr::DecreaseChangeSequenceCount(int) */

void __thiscall CRelayBattleMgr::DecreaseChangeSequenceCount(CRelayBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  cMyTrace local_1c [20];
  
  if (((0 < param_1) && (param_1 < 3)) &&
     (*(int *)(this + (param_1 + 0x18) * 4) = *(int *)(this + (param_1 + 0x18) * 4) + -1,
     *(int *)(this + (param_1 + 0x18) * 4) < 0)) {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x18) * 4);
    cMyTrace::cMyTrace(local_1c,"void CRelayBattleMgr::DecreaseChangeSequenceCount(int)",0x13ea,0);
    cMyTrace::operator()(local_1c,"ERROR ChangeSequenceCount underflow (%d)",uVar1);
    *(undefined4 *)(this + (param_1 + 0x18) * 4) = 0;
  }
  return;
}

```

---

## GetAllKillUserIndex

```asm
// === 085ded74 CRelayBattleMgr::GetAllKillUserIndex  [0x085ded74-0x85dee21] ===
 85ded74:	55                   	push   %ebp
 85ded75:	89 e5                	mov    %esp,%ebp
 85ded77:	83 ec 10             	sub    $0x10,%esp
 85ded7a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85ded81:	e9 85 00 00 00       	jmp    85dee0b <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0x97>
 85ded86:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85ded89:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85ded8c:	89 d0                	mov    %edx,%eax
 85ded8e:	01 c0                	add    %eax,%eax
 85ded90:	01 d0                	add    %edx,%eax
 85ded92:	c1 e0 02             	shl    $0x2,%eax
 85ded95:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 85ded9a:	3c 01                	cmp    $0x1,%al
 85ded9c:	7e 69                	jle    85dee07 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0x93>
 85ded9e:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85deda1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85deda4:	89 d0                	mov    %edx,%eax
 85deda6:	01 c0                	add    %eax,%eax
 85deda8:	01 d0                	add    %edx,%eax
 85dedaa:	c1 e0 02             	shl    $0x2,%eax
 85dedad:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 85dedb2:	0f be d0             	movsbl %al,%edx
 85dedb5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dedb8:	8b 40 78             	mov    0x78(%eax),%eax
 85dedbb:	89 c1                	mov    %eax,%ecx
 85dedbd:	c1 e9 1f             	shr    $0x1f,%ecx
 85dedc0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85dedc3:	d1 f8                	sar    $1,%eax
 85dedc5:	39 c2                	cmp    %eax,%edx
 85dedc7:	7c 3e                	jl     85dee07 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0x93>
 85dedc9:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dedcc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dedcf:	89 d0                	mov    %edx,%eax
 85dedd1:	01 c0                	add    %eax,%eax
 85dedd3:	01 d0                	add    %edx,%eax
 85dedd5:	c1 e0 02             	shl    $0x2,%eax
 85dedd8:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 85deddb:	83 f8 02             	cmp    $0x2,%eax
 85dedde:	75 27                	jne    85dee07 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0x93>
 85dede0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dede4:	74 1c                	je     85dee02 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0x8e>
 85dede6:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dede9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dedec:	89 d0                	mov    %edx,%eax
 85dedee:	01 c0                	add    %eax,%eax
 85dedf0:	01 d0                	add    %edx,%eax
 85dedf2:	c1 e0 02             	shl    $0x2,%eax
 85dedf5:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85dedfa:	0f be d0             	movsbl %al,%edx
 85dedfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dee00:	89 10                	mov    %edx,(%eax)
 85dee02:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dee05:	eb 18                	jmp    85dee1f <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0xab>
 85dee07:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dee0b:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dee0f:	0f 9e c0             	setle  %al
 85dee12:	84 c0                	test   %al,%al
 85dee14:	0f 85 6c ff ff ff    	jne    85ded86 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi+0x12>
 85dee1a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85dee1f:	c9                   	leave
 85dee20:	c3                   	ret
 85dee21:	90                   	nop

```

```c
// CRelayBattleMgr::GetAllKillUserIndex @ 0x85ded74

/* CRelayBattleMgr::GetAllKillUserIndex(int*) */

int __thiscall CRelayBattleMgr::GetAllKillUserIndex(CRelayBattleMgr *this,int *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return -1;
    }
    if ((('\x01' < (char)this[local_8 * 0xc + 8]) &&
        (*(int *)(this + 0x78) / 2 <= (int)(char)this[local_8 * 0xc + 8])) &&
       (*(int *)(this + local_8 * 0xc) == 2)) break;
    local_8 = local_8 + 1;
  }
  if (param_1 == (int *)0x0) {
    return local_8;
  }
  *param_1 = (int)(char)this[local_8 * 0xc + 6];
  return local_8;
}

```

---

## GetChangeSequenceCount

```asm
// === 085de474 CRelayBattleMgr::GetChangeSequenceCount  [0x085de474-0x85de497] ===
 85de474:	55                   	push   %ebp
 85de475:	89 e5                	mov    %esp,%ebp
 85de477:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de47b:	7e 06                	jle    85de483 <_ZN15CRelayBattleMgr22GetChangeSequenceCountEi+0xf>
 85de47d:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85de481:	7e 07                	jle    85de48a <_ZN15CRelayBattleMgr22GetChangeSequenceCountEi+0x16>
 85de483:	b8 00 00 00 00       	mov    $0x0,%eax
 85de488:	eb 0c                	jmp    85de496 <_ZN15CRelayBattleMgr22GetChangeSequenceCountEi+0x22>
 85de48a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de48d:	8b 45 08             	mov    0x8(%ebp),%eax
 85de490:	83 c2 18             	add    $0x18,%edx
 85de493:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85de496:	5d                   	pop    %ebp
 85de497:	c3                   	ret

```

```c
// CRelayBattleMgr::GetChangeSequenceCount @ 0x85de474

/* CRelayBattleMgr::GetChangeSequenceCount(int) */

undefined4 __thiscall CRelayBattleMgr::GetChangeSequenceCount(CRelayBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (2 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x18) * 4);
  }
  return uVar1;
}

```

---

## GetNextPlayer

```asm
// === 085dea14 CRelayBattleMgr::GetNextPlayer  [0x085dea14-0x85dead5] ===
 85dea14:	55                   	push   %ebp
 85dea15:	89 e5                	mov    %esp,%ebp
 85dea17:	83 ec 10             	sub    $0x10,%esp
 85dea1a:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 85dea21:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85dea28:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dea2f:	eb 7b                	jmp    85deaac <_ZN15CRelayBattleMgr13GetNextPlayerEi+0x98>
 85dea31:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dea34:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dea37:	89 d0                	mov    %edx,%eax
 85dea39:	01 c0                	add    %eax,%eax
 85dea3b:	01 d0                	add    %edx,%eax
 85dea3d:	c1 e0 02             	shl    $0x2,%eax
 85dea40:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85dea45:	0f be c0             	movsbl %al,%eax
 85dea48:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dea4b:	75 5b                	jne    85deaa8 <_ZN15CRelayBattleMgr13GetNextPlayerEi+0x94>
 85dea4d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dea50:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dea53:	89 d0                	mov    %edx,%eax
 85dea55:	01 c0                	add    %eax,%eax
 85dea57:	01 d0                	add    %edx,%eax
 85dea59:	c1 e0 02             	shl    $0x2,%eax
 85dea5c:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 85dea5f:	83 f8 01             	cmp    $0x1,%eax
 85dea62:	74 0c                	je     85dea70 <_ZN15CRelayBattleMgr13GetNextPlayerEi+0x5c>
 85dea64:	83 f8 02             	cmp    $0x2,%eax
 85dea67:	75 3f                	jne    85deaa8 <_ZN15CRelayBattleMgr13GetNextPlayerEi+0x94>
 85dea69:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85dea6e:	eb 64                	jmp    85dead4 <_ZN15CRelayBattleMgr13GetNextPlayerEi+0xc0>
 85dea70:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dea73:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dea76:	89 d0                	mov    %edx,%eax
 85dea78:	01 c0                	add    %eax,%eax
 85dea7a:	01 d0                	add    %edx,%eax
 85dea7c:	c1 e0 02             	shl    $0x2,%eax
 85dea7f:	0f b7 44 08 04       	movzwl 0x4(%eax,%ecx,1),%eax
 85dea84:	98                   	cwtl
 85dea85:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 85dea88:	7e 1e                	jle    85deaa8 <_ZN15CRelayBattleMgr13GetNextPlayerEi+0x94>
 85dea8a:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dea8d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dea90:	89 d0                	mov    %edx,%eax
 85dea92:	01 c0                	add    %eax,%eax
 85dea94:	01 d0                	add    %edx,%eax
 85dea96:	c1 e0 02             	shl    $0x2,%eax
 85dea99:	0f b7 44 08 04       	movzwl 0x4(%eax,%ecx,1),%eax
 85dea9e:	98                   	cwtl
 85dea9f:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85deaa2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85deaa5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85deaa8:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85deaac:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85deab0:	0f 9e c0             	setle  %al
 85deab3:	84 c0                	test   %al,%al
 85deab5:	0f 85 76 ff ff ff    	jne    85dea31 <_ZN15CRelayBattleMgr13GetNextPlayerEi+0x1d>
 85deabb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85deabe:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85deac1:	89 d0                	mov    %edx,%eax
 85deac3:	01 c0                	add    %eax,%eax
 85deac5:	01 d0                	add    %edx,%eax
 85deac7:	c1 e0 02             	shl    $0x2,%eax
 85deaca:	c7 04 08 02 00 00 00 	movl   $0x2,(%eax,%ecx,1)
 85dead1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dead4:	c9                   	leave
 85dead5:	c3                   	ret

```

```c
// CRelayBattleMgr::GetNextPlayer @ 0x85dea14

/* CRelayBattleMgr::GetNextPlayer(int) */

int __thiscall CRelayBattleMgr::GetNextPlayer(CRelayBattleMgr *this,int param_1)

{
  short sVar1;
  int local_10;
  int local_8;
  
  local_10 = -1;
  sVar1 = 0;
  local_8 = 0;
  do {
    if (7 < local_8) {
      *(undefined4 *)(this + local_10 * 0xc) = 2;
      return local_10;
    }
    if ((char)this[local_8 * 0xc + 6] == param_1) {
      if (*(int *)(this + local_8 * 0xc) == 1) {
        if (sVar1 < *(short *)(this + local_8 * 0xc + 4)) {
          sVar1 = *(short *)(this + local_8 * 0xc + 4);
          local_10 = local_8;
        }
      }
      else if (*(int *)(this + local_8 * 0xc) == 2) {
        return -1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

```

---

## IncreaseChangeSequenceCount

```asm
// === 085de498 CRelayBattleMgr::IncreaseChangeSequenceCount  [0x085de498-0x85de53d] ===
 85de498:	55                   	push   %ebp
 85de499:	89 e5                	mov    %esp,%ebp
 85de49b:	53                   	push   %ebx
 85de49c:	83 ec 24             	sub    $0x24,%esp
 85de49f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de4a3:	0f 8e 8b 00 00 00    	jle    85de534 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi+0x9c>
 85de4a9:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85de4ad:	0f 8f 84 00 00 00    	jg     85de537 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi+0x9f>
 85de4b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de4b6:	8b 55 08             	mov    0x8(%ebp),%edx
 85de4b9:	8d 48 18             	lea    0x18(%eax),%ecx
 85de4bc:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 85de4bf:	8d 4a 01             	lea    0x1(%edx),%ecx
 85de4c2:	8b 55 08             	mov    0x8(%ebp),%edx
 85de4c5:	83 c0 18             	add    $0x18,%eax
 85de4c8:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 85de4cb:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de4ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85de4d1:	83 c2 18             	add    $0x18,%edx
 85de4d4:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85de4d7:	83 f8 03             	cmp    $0x3,%eax
 85de4da:	7e 5c                	jle    85de538 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi+0xa0>
 85de4dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de4df:	8b 45 08             	mov    0x8(%ebp),%eax
 85de4e2:	83 c2 18             	add    $0x18,%edx
 85de4e5:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85de4e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85de4ef:	00 
 85de4f0:	c7 44 24 08 de 13 00 	movl   $0x13de,0x8(%esp)
 85de4f7:	00 
 85de4f8:	c7 44 24 04 60 22 cc 	movl   $0x8cc2260,0x4(%esp)
 85de4ff:	08 
 85de500:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85de503:	89 04 24             	mov    %eax,(%esp)
 85de506:	e8 0d 12 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85de50b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85de50f:	c7 44 24 04 dc 13 cc 	movl   $0x8cc13dc,0x4(%esp)
 85de516:	08 
 85de517:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85de51a:	89 04 24             	mov    %eax,(%esp)
 85de51d:	e8 66 12 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85de522:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de525:	8b 45 08             	mov    0x8(%ebp),%eax
 85de528:	83 c2 18             	add    $0x18,%edx
 85de52b:	c7 04 90 04 00 00 00 	movl   $0x4,(%eax,%edx,4)
 85de532:	eb 04                	jmp    85de538 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi+0xa0>
 85de534:	90                   	nop
 85de535:	eb 01                	jmp    85de538 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi+0xa0>
 85de537:	90                   	nop
 85de538:	83 c4 24             	add    $0x24,%esp
 85de53b:	5b                   	pop    %ebx
 85de53c:	5d                   	pop    %ebp
 85de53d:	c3                   	ret

```

```c
// CRelayBattleMgr::IncreaseChangeSequenceCount @ 0x85de498

/* CRelayBattleMgr::IncreaseChangeSequenceCount(int) */

void __thiscall CRelayBattleMgr::IncreaseChangeSequenceCount(CRelayBattleMgr *this,int param_1)

{
  undefined4 uVar1;
  cMyTrace local_1c [20];
  
  if (((0 < param_1) && (param_1 < 3)) &&
     (*(int *)(this + (param_1 + 0x18) * 4) = *(int *)(this + (param_1 + 0x18) * 4) + 1,
     3 < *(int *)(this + (param_1 + 0x18) * 4))) {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x18) * 4);
    cMyTrace::cMyTrace(local_1c,"void CRelayBattleMgr::IncreaseChangeSequenceCount(int)",0x13de,0);
    cMyTrace::operator()(local_1c,"ERROR ChangeSequenceCount overflow (%d)",uVar1);
    *(undefined4 *)(this + (param_1 + 0x18) * 4) = 4;
  }
  return;
}

```

---

## OnChangeTeam

```asm
// === 085de15a CRelayBattleMgr::OnChangeTeam  [0x085de15a-0x85de18b] ===
 85de15a:	55                   	push   %ebp
 85de15b:	89 e5                	mov    %esp,%ebp
 85de15d:	53                   	push   %ebx
 85de15e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de162:	78 20                	js     85de184 <_ZN15CRelayBattleMgr12OnChangeTeamEii+0x2a>
 85de164:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de168:	7f 1d                	jg     85de187 <_ZN15CRelayBattleMgr12OnChangeTeamEii+0x2d>
 85de16a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de16d:	8b 45 10             	mov    0x10(%ebp),%eax
 85de170:	89 c3                	mov    %eax,%ebx
 85de172:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de175:	89 d0                	mov    %edx,%eax
 85de177:	01 c0                	add    %eax,%eax
 85de179:	01 d0                	add    %edx,%eax
 85de17b:	c1 e0 02             	shl    $0x2,%eax
 85de17e:	88 5c 08 06          	mov    %bl,0x6(%eax,%ecx,1)
 85de182:	eb 04                	jmp    85de188 <_ZN15CRelayBattleMgr12OnChangeTeamEii+0x2e>
 85de184:	90                   	nop
 85de185:	eb 01                	jmp    85de188 <_ZN15CRelayBattleMgr12OnChangeTeamEii+0x2e>
 85de187:	90                   	nop
 85de188:	5b                   	pop    %ebx
 85de189:	5d                   	pop    %ebp
 85de18a:	c3                   	ret
 85de18b:	90                   	nop

```

```c
// CRelayBattleMgr::OnChangeTeam @ 0x85de15a

/* CRelayBattleMgr::OnChangeTeam(int, int) */

void __thiscall CRelayBattleMgr::OnChangeTeam(CRelayBattleMgr *this,int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    this[param_1 * 0xc + 6] = SUB41(param_2,0);
  }
  return;
}

```

---

## OnCreateRoom

```asm
// === 085de0cc CRelayBattleMgr::OnCreateRoom  [0x085de0cc-0x85de0dd] ===
 85de0cc:	55                   	push   %ebp
 85de0cd:	89 e5                	mov    %esp,%ebp
 85de0cf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de0d3:	78 06                	js     85de0db <_ZN15CRelayBattleMgr12OnCreateRoomEi+0xf>
 85de0d5:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de0d9:	eb 01                	jmp    85de0dc <_ZN15CRelayBattleMgr12OnCreateRoomEi+0x10>
 85de0db:	90                   	nop
 85de0dc:	5d                   	pop    %ebp
 85de0dd:	c3                   	ret

```

```c
// CRelayBattleMgr::OnCreateRoom @ 0x85de0cc

/* CRelayBattleMgr::OnCreateRoom(int) */

void CRelayBattleMgr::OnCreateRoom(int param_1)

{
  return;
}

```

---

## OnDiePlayer

```asm
// === 085de38a CRelayBattleMgr::OnDiePlayer  [0x085de38a-0x85de473] ===
 85de38a:	55                   	push   %ebp
 85de38b:	89 e5                	mov    %esp,%ebp
 85de38d:	56                   	push   %esi
 85de38e:	53                   	push   %ebx
 85de38f:	83 ec 30             	sub    $0x30,%esp
 85de392:	8b 45 14             	mov    0x14(%ebp),%eax
 85de395:	88 45 f4             	mov    %al,-0xc(%ebp)
 85de398:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de39c:	78 1c                	js     85de3ba <_ZN15CRelayBattleMgr11OnDiePlayerEiib+0x30>
 85de39e:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de3a2:	7f 16                	jg     85de3ba <_ZN15CRelayBattleMgr11OnDiePlayerEiib+0x30>
 85de3a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de3a7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de3aa:	89 d0                	mov    %edx,%eax
 85de3ac:	01 c0                	add    %eax,%eax
 85de3ae:	01 d0                	add    %edx,%eax
 85de3b0:	c1 e0 02             	shl    $0x2,%eax
 85de3b3:	c7 04 08 03 00 00 00 	movl   $0x3,(%eax,%ecx,1)
 85de3ba:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85de3be:	78 2d                	js     85de3ed <_ZN15CRelayBattleMgr11OnDiePlayerEiib+0x63>
 85de3c0:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 85de3c4:	7f 27                	jg     85de3ed <_ZN15CRelayBattleMgr11OnDiePlayerEiib+0x63>
 85de3c6:	8b 55 10             	mov    0x10(%ebp),%edx
 85de3c9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de3cc:	89 d0                	mov    %edx,%eax
 85de3ce:	01 c0                	add    %eax,%eax
 85de3d0:	01 d0                	add    %edx,%eax
 85de3d2:	c1 e0 02             	shl    $0x2,%eax
 85de3d5:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 85de3da:	8d 58 01             	lea    0x1(%eax),%ebx
 85de3dd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de3e0:	89 d0                	mov    %edx,%eax
 85de3e2:	01 c0                	add    %eax,%eax
 85de3e4:	01 d0                	add    %edx,%eax
 85de3e6:	c1 e0 02             	shl    $0x2,%eax
 85de3e9:	88 5c 08 08          	mov    %bl,0x8(%eax,%ecx,1)
 85de3ed:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 85de3f1:	74 7a                	je     85de46d <_ZN15CRelayBattleMgr11OnDiePlayerEiib+0xe3>
 85de3f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85de3f6:	8b 40 74             	mov    0x74(%eax),%eax
 85de3f9:	83 f8 01             	cmp    $0x1,%eax
 85de3fc:	75 6f                	jne    85de46d <_ZN15CRelayBattleMgr11OnDiePlayerEiib+0xe3>
 85de3fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85de401:	c7 40 74 02 00 00 00 	movl   $0x2,0x74(%eax)
 85de408:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85de40f:	e8 8a d8 ae ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85de414:	8b 55 08             	mov    0x8(%ebp),%edx
 85de417:	89 42 70             	mov    %eax,0x70(%edx)
 85de41a:	8b 45 08             	mov    0x8(%ebp),%eax
 85de41d:	8b 70 70             	mov    0x70(%eax),%esi
 85de420:	8b 45 08             	mov    0x8(%ebp),%eax
 85de423:	8b 40 6c             	mov    0x6c(%eax),%eax
 85de426:	89 04 24             	mov    %eax,(%esp)
 85de429:	e8 66 f5 c4 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85de42e:	89 c3                	mov    %eax,%ebx
 85de430:	e8 47 80 b1 ff       	call   80f647c <_Z12G_TimerQueuev>
 85de435:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85de43c:	00 
 85de43d:	89 74 24 18          	mov    %esi,0x18(%esp)
 85de441:	c7 44 24 10 b8 0b 00 	movl   $0xbb8,0x10(%esp)
 85de448:	00 
 85de449:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85de450:	00 
 85de451:	c7 44 24 0c 63 00 00 	movl   $0x63,0xc(%esp)
 85de458:	00 
 85de459:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85de45d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85de464:	00 
 85de465:	89 04 24             	mov    %eax,(%esp)
 85de468:	e8 f3 29 05 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 85de46d:	83 c4 30             	add    $0x30,%esp
 85de470:	5b                   	pop    %ebx
 85de471:	5e                   	pop    %esi
 85de472:	5d                   	pop    %ebp
 85de473:	c3                   	ret

```

```c
// CRelayBattleMgr::OnDiePlayer @ 0x85de38a

/* CRelayBattleMgr::OnDiePlayer(int, int, bool) */

void __thiscall
CRelayBattleMgr::OnDiePlayer(CRelayBattleMgr *this,int param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    *(undefined4 *)(this + param_1 * 0xc) = 3;
  }
  if ((-1 < param_2) && (param_2 < 8)) {
    this[param_2 * 0xc + 8] = (CRelayBattleMgr)((char)this[param_2 * 0xc + 8] + '\x01');
  }
  if ((param_3) && (*(int *)(this + 0x74) == 1)) {
    *(undefined4 *)(this + 0x74) = 2;
    uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x70) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x70);
    uVar2 = PvP_Room::get_index(*(PvP_Room **)(this + 0x6c));
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar2,99,3000,0,uVar1,0);
  }
  return;
}

```

---

## OnFight

```asm
// === 085de358 CRelayBattleMgr::OnFight  [0x085de358-0x85de389] ===
 85de358:	55                   	push   %ebp
 85de359:	89 e5                	mov    %esp,%ebp
 85de35b:	83 ec 18             	sub    $0x18,%esp
 85de35e:	8b 45 08             	mov    0x8(%ebp),%eax
 85de361:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 85de368:	8b 45 08             	mov    0x8(%ebp),%eax
 85de36b:	89 04 24             	mov    %eax,(%esp)
 85de36e:	e8 7b 05 00 00       	call   85de8ee <_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv>
 85de373:	8b 45 08             	mov    0x8(%ebp),%eax
 85de376:	89 04 24             	mov    %eax,(%esp)
 85de379:	e8 58 07 00 00       	call   85dead6 <_ZN15CRelayBattleMgr10TurnPlayerEv>
 85de37e:	8b 45 08             	mov    0x8(%ebp),%eax
 85de381:	c7 40 74 01 00 00 00 	movl   $0x1,0x74(%eax)
 85de388:	c9                   	leave
 85de389:	c3                   	ret

```

```c
// CRelayBattleMgr::OnFight @ 0x85de358

/* CRelayBattleMgr::OnFight() */

void __thiscall CRelayBattleMgr::OnFight(CRelayBattleMgr *this)

{
  *(undefined4 *)(this + 0x70) = 0;
  ArrangeMatchSequence(this);
  TurnPlayer(this);
  *(undefined4 *)(this + 0x74) = 1;
  return;
}

```

---

## OnJoinRoom

```asm
// === 085de0de CRelayBattleMgr::OnJoinRoom  [0x085de0de-0x85de0ef] ===
 85de0de:	55                   	push   %ebp
 85de0df:	89 e5                	mov    %esp,%ebp
 85de0e1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de0e5:	78 06                	js     85de0ed <_ZN15CRelayBattleMgr10OnJoinRoomEi+0xf>
 85de0e7:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de0eb:	eb 01                	jmp    85de0ee <_ZN15CRelayBattleMgr10OnJoinRoomEi+0x10>
 85de0ed:	90                   	nop
 85de0ee:	5d                   	pop    %ebp
 85de0ef:	c3                   	ret

```

```c
// CRelayBattleMgr::OnJoinRoom @ 0x85de0de

/* CRelayBattleMgr::OnJoinRoom(int) */

void CRelayBattleMgr::OnJoinRoom(int param_1)

{
  return;
}

```

---

## OnLeaveRoom

```asm
// === 085de0f0 CRelayBattleMgr::OnLeaveRoom  [0x085de0f0-0x85de159] ===
 85de0f0:	55                   	push   %ebp
 85de0f1:	89 e5                	mov    %esp,%ebp
 85de0f3:	83 ec 18             	sub    $0x18,%esp
 85de0f6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de0fa:	78 58                	js     85de154 <_ZN15CRelayBattleMgr11OnLeaveRoomEi+0x64>
 85de0fc:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de100:	7f 55                	jg     85de157 <_ZN15CRelayBattleMgr11OnLeaveRoomEi+0x67>
 85de102:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de105:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de108:	89 d0                	mov    %edx,%eax
 85de10a:	01 c0                	add    %eax,%eax
 85de10c:	01 d0                	add    %edx,%eax
 85de10e:	c1 e0 02             	shl    $0x2,%eax
 85de111:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 85de114:	83 f8 02             	cmp    $0x2,%eax
 85de117:	75 22                	jne    85de13b <_ZN15CRelayBattleMgr11OnLeaveRoomEi+0x4b>
 85de119:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85de120:	00 
 85de121:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 85de128:	ff 
 85de129:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de12c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de130:	8b 45 08             	mov    0x8(%ebp),%eax
 85de133:	89 04 24             	mov    %eax,(%esp)
 85de136:	e8 4f 02 00 00       	call   85de38a <_ZN15CRelayBattleMgr11OnDiePlayerEiib>
 85de13b:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de13e:	89 d0                	mov    %edx,%eax
 85de140:	01 c0                	add    %eax,%eax
 85de142:	01 d0                	add    %edx,%eax
 85de144:	c1 e0 02             	shl    $0x2,%eax
 85de147:	03 45 08             	add    0x8(%ebp),%eax
 85de14a:	89 04 24             	mov    %eax,(%esp)
 85de14d:	e8 c8 fe ff ff       	call   85de01a <_ZN12CRelayBattle5ResetEv>
 85de152:	eb 04                	jmp    85de158 <_ZN15CRelayBattleMgr11OnLeaveRoomEi+0x68>
 85de154:	90                   	nop
 85de155:	eb 01                	jmp    85de158 <_ZN15CRelayBattleMgr11OnLeaveRoomEi+0x68>
 85de157:	90                   	nop
 85de158:	c9                   	leave
 85de159:	c3                   	ret

```

```c
// CRelayBattleMgr::OnLeaveRoom @ 0x85de0f0

/* CRelayBattleMgr::OnLeaveRoom(int) */

void __thiscall CRelayBattleMgr::OnLeaveRoom(CRelayBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    if (*(int *)(this + param_1 * 0xc) == 2) {
      OnDiePlayer(this,param_1,-1,true);
    }
    CRelayBattle::Reset((CRelayBattle *)(this + param_1 * 0xc));
  }
  return;
}

```

---

## OnReady

```asm
// === 085de252 CRelayBattleMgr::OnReady  [0x085de252-0x85de29b] ===
 85de252:	55                   	push   %ebp
 85de253:	89 e5                	mov    %esp,%ebp
 85de255:	53                   	push   %ebx
 85de256:	83 ec 04             	sub    $0x4,%esp
 85de259:	8b 45 10             	mov    0x10(%ebp),%eax
 85de25c:	88 45 f8             	mov    %al,-0x8(%ebp)
 85de25f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de263:	78 2c                	js     85de291 <_ZN15CRelayBattleMgr7OnReadyEib+0x3f>
 85de265:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de269:	7f 29                	jg     85de294 <_ZN15CRelayBattleMgr7OnReadyEib+0x42>
 85de26b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85de26e:	80 7d f8 00          	cmpb   $0x0,-0x8(%ebp)
 85de272:	74 07                	je     85de27b <_ZN15CRelayBattleMgr7OnReadyEib+0x29>
 85de274:	ba 01 00 00 00       	mov    $0x1,%edx
 85de279:	eb 05                	jmp    85de280 <_ZN15CRelayBattleMgr7OnReadyEib+0x2e>
 85de27b:	ba 00 00 00 00       	mov    $0x0,%edx
 85de280:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85de283:	89 c8                	mov    %ecx,%eax
 85de285:	01 c0                	add    %eax,%eax
 85de287:	01 c8                	add    %ecx,%eax
 85de289:	c1 e0 02             	shl    $0x2,%eax
 85de28c:	89 14 18             	mov    %edx,(%eax,%ebx,1)
 85de28f:	eb 04                	jmp    85de295 <_ZN15CRelayBattleMgr7OnReadyEib+0x43>
 85de291:	90                   	nop
 85de292:	eb 01                	jmp    85de295 <_ZN15CRelayBattleMgr7OnReadyEib+0x43>
 85de294:	90                   	nop
 85de295:	83 c4 04             	add    $0x4,%esp
 85de298:	5b                   	pop    %ebx
 85de299:	5d                   	pop    %ebp
 85de29a:	c3                   	ret
 85de29b:	90                   	nop

```

```c
// CRelayBattleMgr::OnReady @ 0x85de252

/* CRelayBattleMgr::OnReady(int, bool) */

void __thiscall CRelayBattleMgr::OnReady(CRelayBattleMgr *this,int param_1,bool param_2)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    *(uint *)(this + param_1 * 0xc) = (uint)param_2;
  }
  return;
}

```

---

## OnRequestFight

```asm
// === 085de18c CRelayBattleMgr::OnRequestFight  [0x085de18c-0x85de251] ===
 85de18c:	55                   	push   %ebp
 85de18d:	89 e5                	mov    %esp,%ebp
 85de18f:	83 ec 18             	sub    $0x18,%esp
 85de192:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85de196:	0f 88 af 00 00 00    	js     85de24b <_ZN15CRelayBattleMgr14OnRequestFightEi+0xbf>
 85de19c:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85de1a0:	0f 8f a8 00 00 00    	jg     85de24e <_ZN15CRelayBattleMgr14OnRequestFightEi+0xc2>
 85de1a6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de1a9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de1ac:	89 d0                	mov    %edx,%eax
 85de1ae:	01 c0                	add    %eax,%eax
 85de1b0:	01 d0                	add    %edx,%eax
 85de1b2:	c1 e0 02             	shl    $0x2,%eax
 85de1b5:	0f b6 44 08 07       	movzbl 0x7(%eax,%ecx,1),%eax
 85de1ba:	83 f0 01             	xor    $0x1,%eax
 85de1bd:	84 c0                	test   %al,%al
 85de1bf:	74 3c                	je     85de1fd <_ZN15CRelayBattleMgr14OnRequestFightEi+0x71>
 85de1c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de1c4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de1c7:	89 d0                	mov    %edx,%eax
 85de1c9:	01 c0                	add    %eax,%eax
 85de1cb:	01 d0                	add    %edx,%eax
 85de1cd:	c1 e0 02             	shl    $0x2,%eax
 85de1d0:	c6 44 08 07 01       	movb   $0x1,0x7(%eax,%ecx,1)
 85de1d5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de1d8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de1db:	89 d0                	mov    %edx,%eax
 85de1dd:	01 c0                	add    %eax,%eax
 85de1df:	01 d0                	add    %edx,%eax
 85de1e1:	c1 e0 02             	shl    $0x2,%eax
 85de1e4:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85de1e9:	0f be c0             	movsbl %al,%eax
 85de1ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de1f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85de1f3:	89 04 24             	mov    %eax,(%esp)
 85de1f6:	e8 9d 02 00 00       	call   85de498 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi>
 85de1fb:	eb 3a                	jmp    85de237 <_ZN15CRelayBattleMgr14OnRequestFightEi+0xab>
 85de1fd:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de200:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de203:	89 d0                	mov    %edx,%eax
 85de205:	01 c0                	add    %eax,%eax
 85de207:	01 d0                	add    %edx,%eax
 85de209:	c1 e0 02             	shl    $0x2,%eax
 85de20c:	c6 44 08 07 00       	movb   $0x0,0x7(%eax,%ecx,1)
 85de211:	8b 55 0c             	mov    0xc(%ebp),%edx
 85de214:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de217:	89 d0                	mov    %edx,%eax
 85de219:	01 c0                	add    %eax,%eax
 85de21b:	01 d0                	add    %edx,%eax
 85de21d:	c1 e0 02             	shl    $0x2,%eax
 85de220:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85de225:	0f be c0             	movsbl %al,%eax
 85de228:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de22c:	8b 45 08             	mov    0x8(%ebp),%eax
 85de22f:	89 04 24             	mov    %eax,(%esp)
 85de232:	e8 07 03 00 00       	call   85de53e <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi>
 85de237:	8b 45 0c             	mov    0xc(%ebp),%eax
 85de23a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de23e:	8b 45 08             	mov    0x8(%ebp),%eax
 85de241:	89 04 24             	mov    %eax,(%esp)
 85de244:	e8 8f 0a 00 00       	call   85decd8 <_ZN15CRelayBattleMgr16SendRequestFightEi>
 85de249:	eb 04                	jmp    85de24f <_ZN15CRelayBattleMgr14OnRequestFightEi+0xc3>
 85de24b:	90                   	nop
 85de24c:	eb 01                	jmp    85de24f <_ZN15CRelayBattleMgr14OnRequestFightEi+0xc3>
 85de24e:	90                   	nop
 85de24f:	c9                   	leave
 85de250:	c3                   	ret
 85de251:	90                   	nop

```

```c
// CRelayBattleMgr::OnRequestFight @ 0x85de18c

/* CRelayBattleMgr::OnRequestFight(int) */

void __thiscall CRelayBattleMgr::OnRequestFight(CRelayBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    if (this[param_1 * 0xc + 7] == (CRelayBattleMgr)0x1) {
      this[param_1 * 0xc + 7] = (CRelayBattleMgr)0x0;
      DecreaseChangeSequenceCount(this,(int)(char)this[param_1 * 0xc + 6]);
    }
    else {
      this[param_1 * 0xc + 7] = (CRelayBattleMgr)0x1;
      IncreaseChangeSequenceCount(this,(int)(char)this[param_1 * 0xc + 6]);
    }
    SendRequestFight(this,param_1);
  }
  return;
}

```

---

## OnStart

```asm
// === 085de29c CRelayBattleMgr::OnStart  [0x085de29c-0x85de357] ===
 85de29c:	55                   	push   %ebp
 85de29d:	89 e5                	mov    %esp,%ebp
 85de29f:	56                   	push   %esi
 85de2a0:	53                   	push   %ebx
 85de2a1:	83 ec 30             	sub    $0x30,%esp
 85de2a4:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85de2ab:	e8 ee d9 ae ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85de2b0:	8b 55 08             	mov    0x8(%ebp),%edx
 85de2b3:	89 42 70             	mov    %eax,0x70(%edx)
 85de2b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85de2b9:	c7 40 78 00 00 00 00 	movl   $0x0,0x78(%eax)
 85de2c0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85de2c7:	eb 2a                	jmp    85de2f3 <_ZN15CRelayBattleMgr7OnStartEv+0x57>
 85de2c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de2cc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85de2cf:	89 d0                	mov    %edx,%eax
 85de2d1:	01 c0                	add    %eax,%eax
 85de2d3:	01 d0                	add    %edx,%eax
 85de2d5:	c1 e0 02             	shl    $0x2,%eax
 85de2d8:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 85de2db:	83 f8 01             	cmp    $0x1,%eax
 85de2de:	75 0f                	jne    85de2ef <_ZN15CRelayBattleMgr7OnStartEv+0x53>
 85de2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85de2e3:	8b 40 78             	mov    0x78(%eax),%eax
 85de2e6:	8d 50 01             	lea    0x1(%eax),%edx
 85de2e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85de2ec:	89 50 78             	mov    %edx,0x78(%eax)
 85de2ef:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85de2f3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85de2f7:	0f 9e c0             	setle  %al
 85de2fa:	84 c0                	test   %al,%al
 85de2fc:	75 cb                	jne    85de2c9 <_ZN15CRelayBattleMgr7OnStartEv+0x2d>
 85de2fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85de301:	8b 70 70             	mov    0x70(%eax),%esi
 85de304:	8b 45 08             	mov    0x8(%ebp),%eax
 85de307:	8b 40 6c             	mov    0x6c(%eax),%eax
 85de30a:	89 04 24             	mov    %eax,(%esp)
 85de30d:	e8 82 f6 c4 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85de312:	89 c3                	mov    %eax,%ebx
 85de314:	e8 63 81 b1 ff       	call   80f647c <_Z12G_TimerQueuev>
 85de319:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85de320:	00 
 85de321:	89 74 24 18          	mov    %esi,0x18(%esp)
 85de325:	c7 44 24 10 58 1b 00 	movl   $0x1b58,0x10(%esp)
 85de32c:	00 
 85de32d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85de334:	00 
 85de335:	c7 44 24 0c 63 00 00 	movl   $0x63,0xc(%esp)
 85de33c:	00 
 85de33d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85de341:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85de348:	00 
 85de349:	89 04 24             	mov    %eax,(%esp)
 85de34c:	e8 0f 2b 05 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 85de351:	83 c4 30             	add    $0x30,%esp
 85de354:	5b                   	pop    %ebx
 85de355:	5e                   	pop    %esi
 85de356:	5d                   	pop    %ebp
 85de357:	c3                   	ret

```

```c
// CRelayBattleMgr::OnStart @ 0x85de29c

/* CRelayBattleMgr::OnStart() */

void __thiscall CRelayBattleMgr::OnStart(CRelayBattleMgr *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_10;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x78) = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 0xc) == 1) {
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    }
  }
  uVar1 = *(undefined4 *)(this + 0x70);
  uVar2 = PvP_Room::get_index(*(PvP_Room **)(this + 0x6c));
  uVar3 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar2,99,7000,0,uVar1,0);
  return;
}

```

---

## Reset

```asm
// === 085de046 CRelayBattleMgr::Reset  [0x085de046-0x85de09b] ===
 85de046:	55                   	push   %ebp
 85de047:	89 e5                	mov    %esp,%ebp
 85de049:	83 ec 28             	sub    $0x28,%esp
 85de04c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85de053:	eb 1b                	jmp    85de070 <_ZN15CRelayBattleMgr5ResetEv+0x2a>
 85de055:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85de058:	89 d0                	mov    %edx,%eax
 85de05a:	01 c0                	add    %eax,%eax
 85de05c:	01 d0                	add    %edx,%eax
 85de05e:	c1 e0 02             	shl    $0x2,%eax
 85de061:	03 45 08             	add    0x8(%ebp),%eax
 85de064:	89 04 24             	mov    %eax,(%esp)
 85de067:	e8 ae ff ff ff       	call   85de01a <_ZN12CRelayBattle5ResetEv>
 85de06c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85de070:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85de074:	0f 9e c0             	setle  %al
 85de077:	84 c0                	test   %al,%al
 85de079:	75 da                	jne    85de055 <_ZN15CRelayBattleMgr5ResetEv+0xf>
 85de07b:	8b 45 08             	mov    0x8(%ebp),%eax
 85de07e:	89 04 24             	mov    %eax,(%esp)
 85de081:	e8 16 00 00 00       	call   85de09c <_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv>
 85de086:	8b 45 08             	mov    0x8(%ebp),%eax
 85de089:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 85de090:	8b 45 08             	mov    0x8(%ebp),%eax
 85de093:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 85de09a:	c9                   	leave
 85de09b:	c3                   	ret

```

```c
// CRelayBattleMgr::Reset @ 0x85de046

/* CRelayBattleMgr::Reset() */

void __thiscall CRelayBattleMgr::Reset(CRelayBattleMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    CRelayBattle::Reset((CRelayBattle *)(this + local_10 * 0xc));
  }
  ResetChangeSequenceCount(this);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}

```

---

## ResetChangeSequenceCount

```asm
// === 085de09c CRelayBattleMgr::ResetChangeSequenceCount  [0x085de09c-0x85de0cb] ===
 85de09c:	55                   	push   %ebp
 85de09d:	89 e5                	mov    %esp,%ebp
 85de09f:	83 ec 10             	sub    $0x10,%esp
 85de0a2:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 85de0a9:	eb 14                	jmp    85de0bf <_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv+0x23>
 85de0ab:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85de0ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85de0b1:	83 c2 18             	add    $0x18,%edx
 85de0b4:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85de0bb:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85de0bf:	83 7d fc 02          	cmpl   $0x2,-0x4(%ebp)
 85de0c3:	0f 9e c0             	setle  %al
 85de0c6:	84 c0                	test   %al,%al
 85de0c8:	75 e1                	jne    85de0ab <_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv+0xf>
 85de0ca:	c9                   	leave
 85de0cb:	c3                   	ret

```

```c
// CRelayBattleMgr::ResetChangeSequenceCount @ 0x85de09c

/* CRelayBattleMgr::ResetChangeSequenceCount() */

void __thiscall CRelayBattleMgr::ResetChangeSequenceCount(CRelayBattleMgr *this)

{
  int local_8;
  
  for (local_8 = 1; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x18) * 4) = 0;
  }
  return;
}

```

---

## SendRequestFight

```asm
// === 085decd8 CRelayBattleMgr::SendRequestFight  [0x085decd8-0x85ded73] ===
 85decd8:	55                   	push   %ebp
 85decd9:	89 e5                	mov    %esp,%ebp
 85decdb:	56                   	push   %esi
 85decdc:	53                   	push   %ebx
 85decdd:	83 ec 20             	sub    $0x20,%esp
 85dece0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dece3:	89 04 24             	mov    %eax,(%esp)
 85dece6:	e8 61 f0 fa ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85deceb:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 85decf2:	00 
 85decf3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85decfa:	00 
 85decfb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85decfe:	89 04 24             	mov    %eax,(%esp)
 85ded01:	e8 f6 cb ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85ded06:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ded09:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ded0d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ded10:	89 04 24             	mov    %eax,(%esp)
 85ded13:	e8 08 cc ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85ded18:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ded1f:	00 
 85ded20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ded23:	89 04 24             	mov    %eax,(%esp)
 85ded26:	e8 2d cc ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85ded2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ded2e:	8b 40 6c             	mov    0x6c(%eax),%eax
 85ded31:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85ded34:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ded38:	89 04 24             	mov    %eax,(%esp)
 85ded3b:	e8 d8 d0 ff ff       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85ded40:	bb 01 00 00 00       	mov    $0x1,%ebx
 85ded45:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ded48:	89 04 24             	mov    %eax,(%esp)
 85ded4b:	e8 30 f1 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85ded50:	89 d8                	mov    %ebx,%eax
 85ded52:	83 c4 20             	add    $0x20,%esp
 85ded55:	5b                   	pop    %ebx
 85ded56:	5e                   	pop    %esi
 85ded57:	5d                   	pop    %ebp
 85ded58:	c3                   	ret
 85ded59:	89 d3                	mov    %edx,%ebx
 85ded5b:	89 c6                	mov    %eax,%esi
 85ded5d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ded60:	89 04 24             	mov    %eax,(%esp)
 85ded63:	e8 18 f1 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85ded68:	89 f0                	mov    %esi,%eax
 85ded6a:	89 da                	mov    %ebx,%edx
 85ded6c:	89 04 24             	mov    %eax,(%esp)
 85ded6f:	e8 dc 49 50 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CRelayBattleMgr::SendRequestFight @ 0x85decd8

/* CRelayBattleMgr::SendRequestFight(int) */

undefined4 __thiscall CRelayBattleMgr::SendRequestFight(CRelayBattleMgr *this,int param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ded01 to 085ded3f has its CatchHandler @ 085ded59 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x71);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  PvP_Room::send_to_pvp(*(PvP_Room **)(this + 0x6c),local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}

```

---

## TurnPlayer

```asm
// === 085dead6 CRelayBattleMgr::TurnPlayer  [0x085dead6-0x85decd7] ===
 85dead6:	55                   	push   %ebp
 85dead7:	89 e5                	mov    %esp,%ebp
 85dead9:	56                   	push   %esi
 85deada:	53                   	push   %ebx
 85deadb:	83 ec 30             	sub    $0x30,%esp
 85deade:	8b 45 08             	mov    0x8(%ebp),%eax
 85deae1:	8b 40 6c             	mov    0x6c(%eax),%eax
 85deae4:	89 04 24             	mov    %eax,(%esp)
 85deae7:	e8 46 58 cc ff       	call   82a4332 <_ZN8PvP_Room14IsEndPvpBattleEv>
 85deaec:	84 c0                	test   %al,%al
 85deaee:	74 0a                	je     85deafa <_ZN15CRelayBattleMgr10TurnPlayerEv+0x24>
 85deaf0:	bb 01 00 00 00       	mov    $0x1,%ebx
 85deaf5:	e9 d4 01 00 00       	jmp    85decce <_ZN15CRelayBattleMgr10TurnPlayerEv+0x1f8>
 85deafa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deafd:	89 04 24             	mov    %eax,(%esp)
 85deb00:	e8 47 f2 fa ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85deb05:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 85deb0c:	00 
 85deb0d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85deb14:	00 
 85deb15:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deb18:	89 04 24             	mov    %eax,(%esp)
 85deb1b:	e8 dc cd ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85deb20:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85deb27:	00 
 85deb28:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deb2b:	89 04 24             	mov    %eax,(%esp)
 85deb2e:	e8 ed cd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85deb33:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 85deb3a:	e9 20 01 00 00       	jmp    85dec5f <_ZN15CRelayBattleMgr10TurnPlayerEv+0x189>
 85deb3f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85deb42:	89 44 24 04          	mov    %eax,0x4(%esp)
 85deb46:	8b 45 08             	mov    0x8(%ebp),%eax
 85deb49:	89 04 24             	mov    %eax,(%esp)
 85deb4c:	e8 c3 fe ff ff       	call   85dea14 <_ZN15CRelayBattleMgr13GetNextPlayerEi>
 85deb51:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85deb54:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85deb57:	89 44 24 04          	mov    %eax,0x4(%esp)
 85deb5b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deb5e:	89 04 24             	mov    %eax,(%esp)
 85deb61:	e8 ba cd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85deb66:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deb69:	89 04 24             	mov    %eax,(%esp)
 85deb6c:	e8 db 1f b3 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 85deb71:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85deb74:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85deb7b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85deb7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85deb82:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deb85:	89 04 24             	mov    %eax,(%esp)
 85deb88:	e8 93 cd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85deb8d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85deb90:	8b 45 08             	mov    0x8(%ebp),%eax
 85deb93:	83 c2 18             	add    $0x18,%edx
 85deb96:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85deb99:	85 c0                	test   %eax,%eax
 85deb9b:	0f 8e a1 00 00 00    	jle    85dec42 <_ZN15CRelayBattleMgr10TurnPlayerEv+0x16c>
 85deba1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85deba8:	e9 86 00 00 00       	jmp    85dec33 <_ZN15CRelayBattleMgr10TurnPlayerEv+0x15d>
 85debad:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85debb0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85debb3:	89 d0                	mov    %edx,%eax
 85debb5:	01 c0                	add    %eax,%eax
 85debb7:	01 d0                	add    %edx,%eax
 85debb9:	c1 e0 02             	shl    $0x2,%eax
 85debbc:	0f b6 44 08 07       	movzbl 0x7(%eax,%ecx,1),%eax
 85debc1:	84 c0                	test   %al,%al
 85debc3:	74 6a                	je     85dec2f <_ZN15CRelayBattleMgr10TurnPlayerEv+0x159>
 85debc5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85debc8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85debcb:	89 d0                	mov    %edx,%eax
 85debcd:	01 c0                	add    %eax,%eax
 85debcf:	01 d0                	add    %edx,%eax
 85debd1:	c1 e0 02             	shl    $0x2,%eax
 85debd4:	0f b6 44 08 06       	movzbl 0x6(%eax,%ecx,1),%eax
 85debd9:	0f be c0             	movsbl %al,%eax
 85debdc:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85debdf:	75 4e                	jne    85dec2f <_ZN15CRelayBattleMgr10TurnPlayerEv+0x159>
 85debe1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85debe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85debe8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85debeb:	89 04 24             	mov    %eax,(%esp)
 85debee:	e8 2d cd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85debf3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85debf6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85debf9:	89 d0                	mov    %edx,%eax
 85debfb:	01 c0                	add    %eax,%eax
 85debfd:	01 d0                	add    %edx,%eax
 85debff:	c1 e0 02             	shl    $0x2,%eax
 85dec02:	0f b7 44 08 04       	movzwl 0x4(%eax,%ecx,1),%eax
 85dec07:	98                   	cwtl
 85dec08:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dec0c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85dec0f:	89 04 24             	mov    %eax,(%esp)
 85dec12:	e8 8d b2 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dec17:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85dec1b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dec1e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dec21:	89 d0                	mov    %edx,%eax
 85dec23:	01 c0                	add    %eax,%eax
 85dec25:	01 d0                	add    %edx,%eax
 85dec27:	c1 e0 02             	shl    $0x2,%eax
 85dec2a:	c6 44 08 07 00       	movb   $0x0,0x7(%eax,%ecx,1)
 85dec2f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dec33:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dec37:	0f 9e c0             	setle  %al
 85dec3a:	84 c0                	test   %al,%al
 85dec3c:	0f 85 6b ff ff ff    	jne    85debad <_ZN15CRelayBattleMgr10TurnPlayerEv+0xd7>
 85dec42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85dec45:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dec49:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85dec4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dec50:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85dec53:	89 04 24             	mov    %eax,(%esp)
 85dec56:	e8 cd 1e b3 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 85dec5b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85dec5f:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 85dec63:	0f 9e c0             	setle  %al
 85dec66:	84 c0                	test   %al,%al
 85dec68:	0f 85 d1 fe ff ff    	jne    85deb3f <_ZN15CRelayBattleMgr10TurnPlayerEv+0x69>
 85dec6e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dec75:	00 
 85dec76:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85dec79:	89 04 24             	mov    %eax,(%esp)
 85dec7c:	e8 d7 cc ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dec81:	8b 45 08             	mov    0x8(%ebp),%eax
 85dec84:	8b 40 6c             	mov    0x6c(%eax),%eax
 85dec87:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85dec8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dec8e:	89 04 24             	mov    %eax,(%esp)
 85dec91:	e8 82 d1 ff ff       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85dec96:	8b 45 08             	mov    0x8(%ebp),%eax
 85dec99:	89 04 24             	mov    %eax,(%esp)
 85dec9c:	e8 fb f3 ff ff       	call   85de09c <_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv>
 85deca1:	bb 01 00 00 00       	mov    $0x1,%ebx
 85deca6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85deca9:	89 04 24             	mov    %eax,(%esp)
 85decac:	e8 cf f1 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85decb1:	eb 1b                	jmp    85decce <_ZN15CRelayBattleMgr10TurnPlayerEv+0x1f8>
 85decb3:	89 d3                	mov    %edx,%ebx
 85decb5:	89 c6                	mov    %eax,%esi
 85decb7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85decba:	89 04 24             	mov    %eax,(%esp)
 85decbd:	e8 be f1 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85decc2:	89 f0                	mov    %esi,%eax
 85decc4:	89 da                	mov    %ebx,%edx
 85decc6:	89 04 24             	mov    %eax,(%esp)
 85decc9:	e8 82 4a 50 00       	call   8ae3750 <_Unwind_Resume>
 85decce:	89 d8                	mov    %ebx,%eax
 85decd0:	83 c4 30             	add    $0x30,%esp
 85decd3:	5b                   	pop    %ebx
 85decd4:	5e                   	pop    %esi
 85decd5:	5d                   	pop    %ebp
 85decd6:	c3                   	ret
 85decd7:	90                   	nop

```

```c
// CRelayBattleMgr::TurnPlayer @ 0x85dead6

/* CRelayBattleMgr::TurnPlayer() */

undefined4 __thiscall CRelayBattleMgr::TurnPlayer(CRelayBattleMgr *this)

{
  char cVar1;
  int local_2c;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = PvP_Room::IsEndPvpBattle(*(PvP_Room **)(this + 0x6c));
  if (cVar1 == '\0') {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085deb1b to 085dec95 has its CatchHandler @ 085decb3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x70);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,2);
    for (local_18 = 1; local_18 < 3; local_18 = local_18 + 1) {
      local_1c = GetNextPlayer(this,local_18);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_1c);
      local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
      local_14 = 0;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
      if (0 < *(int *)(this + (local_18 + 0x18) * 4)) {
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          if ((this[local_10 * 0xc + 7] != (CRelayBattleMgr)0x0) &&
             ((char)this[local_10 * 0xc + 6] == local_18)) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_28,(int)*(short *)(this + local_10 * 0xc + 4));
            local_14 = local_14 + 1;
            this[local_10 * 0xc + 7] = (CRelayBattleMgr)0x0;
          }
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_14);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    PvP_Room::send_to_pvp(*(PvP_Room **)(this + 0x6c),local_28);
    ResetChangeSequenceCount(this);
    PacketGuard::~PacketGuard(local_28);
  }
  return 1;
}

```

