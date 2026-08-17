# BattleData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## ClearEventDungeonRoom

```asm
// === 085be7aa BattleData::ClearEventDungeonRoom  [0x085be7aa-0x85be861] ===
 85be7aa:	55                   	push   %ebp
 85be7ab:	89 e5                	mov    %esp,%ebp
 85be7ad:	53                   	push   %ebx
 85be7ae:	8b 45 14             	mov    0x14(%ebp),%eax
 85be7b1:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be7b5:	66 83 f8 02          	cmp    $0x2,%ax
 85be7b9:	76 0a                	jbe    85be7c5 <_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE+0x1b>
 85be7bb:	b8 00 00 00 00       	mov    $0x0,%eax
 85be7c0:	e9 99 00 00 00       	jmp    85be85e <_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE+0xb4>
 85be7c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85be7c8:	8b 45 14             	mov    0x14(%ebp),%eax
 85be7cb:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be7cf:	0f b7 d8             	movzwl %ax,%ebx
 85be7d2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85be7d5:	89 d0                	mov    %edx,%eax
 85be7d7:	01 c0                	add    %eax,%eax
 85be7d9:	01 d0                	add    %edx,%eax
 85be7db:	01 d8                	add    %ebx,%eax
 85be7dd:	05 c4 00 00 00       	add    $0xc4,%eax
 85be7e2:	0f b7 54 c1 10       	movzwl 0x10(%ecx,%eax,8),%edx
 85be7e7:	8b 45 14             	mov    0x14(%ebp),%eax
 85be7ea:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 85be7ee:	66 39 c2             	cmp    %ax,%dx
 85be7f1:	75 66                	jne    85be859 <_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE+0xaf>
 85be7f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 85be7f6:	8b 45 14             	mov    0x14(%ebp),%eax
 85be7f9:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be7fd:	0f b7 d8             	movzwl %ax,%ebx
 85be800:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85be803:	89 d0                	mov    %edx,%eax
 85be805:	01 c0                	add    %eax,%eax
 85be807:	01 d0                	add    %edx,%eax
 85be809:	01 d8                	add    %ebx,%eax
 85be80b:	05 c4 00 00 00       	add    $0xc4,%eax
 85be810:	0f b7 54 c1 0e       	movzwl 0xe(%ecx,%eax,8),%edx
 85be815:	8b 45 14             	mov    0x14(%ebp),%eax
 85be818:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 85be81c:	66 39 c2             	cmp    %ax,%dx
 85be81f:	75 38                	jne    85be859 <_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE+0xaf>
 85be821:	8b 45 14             	mov    0x14(%ebp),%eax
 85be824:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 85be828:	0f b7 c0             	movzwl %ax,%eax
 85be82b:	3b 45 10             	cmp    0x10(%ebp),%eax
 85be82e:	7c 29                	jl     85be859 <_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE+0xaf>
 85be830:	8b 55 0c             	mov    0xc(%ebp),%edx
 85be833:	8b 45 14             	mov    0x14(%ebp),%eax
 85be836:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be83a:	0f b7 d8             	movzwl %ax,%ebx
 85be83d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85be840:	89 d0                	mov    %edx,%eax
 85be842:	01 c0                	add    %eax,%eax
 85be844:	01 d0                	add    %edx,%eax
 85be846:	01 d8                	add    %ebx,%eax
 85be848:	05 c4 00 00 00       	add    $0xc4,%eax
 85be84d:	c6 44 c1 12 01       	movb   $0x1,0x12(%ecx,%eax,8)
 85be852:	b8 01 00 00 00       	mov    $0x1,%eax
 85be857:	eb 05                	jmp    85be85e <_ZN10BattleData21ClearEventDungeonRoomEiiRKN15CMDPacketStruct27_STReqEventDungeonClearRoomE+0xb4>
 85be859:	b8 00 00 00 00       	mov    $0x0,%eax
 85be85e:	5b                   	pop    %ebx
 85be85f:	5d                   	pop    %ebp
 85be860:	c3                   	ret
 85be861:	90                   	nop

```

```c
// BattleData::ClearEventDungeonRoom @ 0x85be7aa

/* BattleData::ClearEventDungeonRoom(int, int, CMDPacketStruct::_STReqEventDungeonClearRoom const&)
    */

undefined4 __thiscall
BattleData::ClearEventDungeonRoom
          (BattleData *this,int param_1,int param_2,_STReqEventDungeonClearRoom *param_3)

{
  undefined4 uVar1;
  
  if (*(ushort *)(param_3 + 0xe) < 3) {
    if (((*(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_3 + 0xe) + 0xc4) * 8 + 0x10) ==
          *(short *)(param_3 + 0x10)) &&
        (*(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_3 + 0xe) + 0xc4) * 8 + 0xe) ==
         *(short *)(param_3 + 0x12))) && (param_2 <= (int)(uint)*(ushort *)(param_3 + 0x10))) {
      this[(param_1 * 3 + (uint)*(ushort *)(param_3 + 0xe) + 0xc4) * 8 + 0x12] = (BattleData)0x1;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IncEventDungeonDestoryObjectPoint

```asm
// === 085be6e2 BattleData::IncEventDungeonDestoryObjectPoint  [0x085be6e2-0x85be7a9] ===
 85be6e2:	55                   	push   %ebp
 85be6e3:	89 e5                	mov    %esp,%ebp
 85be6e5:	57                   	push   %edi
 85be6e6:	56                   	push   %esi
 85be6e7:	53                   	push   %ebx
 85be6e8:	8b 45 10             	mov    0x10(%ebp),%eax
 85be6eb:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be6ef:	66 83 f8 02          	cmp    $0x2,%ax
 85be6f3:	0f 87 ab 00 00 00    	ja     85be7a4 <_ZN10BattleData33IncEventDungeonDestoryObjectPointEiRKN15CMDPacketStruct31_STReqEventDungeonDestoryObjectE+0xc2>
 85be6f9:	8b 45 10             	mov    0x10(%ebp),%eax
 85be6fc:	8b 40 10             	mov    0x10(%eax),%eax
 85be6ff:	83 f8 01             	cmp    $0x1,%eax
 85be702:	74 50                	je     85be754 <_ZN10BattleData33IncEventDungeonDestoryObjectPointEiRKN15CMDPacketStruct31_STReqEventDungeonDestoryObjectE+0x72>
 85be704:	8b 55 0c             	mov    0xc(%ebp),%edx
 85be707:	8b 45 10             	mov    0x10(%ebp),%eax
 85be70a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be70e:	0f b7 f0             	movzwl %ax,%esi
 85be711:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85be714:	8b 45 10             	mov    0x10(%ebp),%eax
 85be717:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be71b:	0f b7 f8             	movzwl %ax,%edi
 85be71e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85be721:	89 c8                	mov    %ecx,%eax
 85be723:	01 c0                	add    %eax,%eax
 85be725:	01 c8                	add    %ecx,%eax
 85be727:	01 f8                	add    %edi,%eax
 85be729:	05 c4 00 00 00       	add    $0xc4,%eax
 85be72e:	0f b7 4c c3 0e       	movzwl 0xe(%ebx,%eax,8),%ecx
 85be733:	8b 45 10             	mov    0x10(%ebp),%eax
 85be736:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 85be73a:	8d 1c 01             	lea    (%ecx,%eax,1),%ebx
 85be73d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85be740:	89 d0                	mov    %edx,%eax
 85be742:	01 c0                	add    %eax,%eax
 85be744:	01 d0                	add    %edx,%eax
 85be746:	01 f0                	add    %esi,%eax
 85be748:	05 c4 00 00 00       	add    $0xc4,%eax
 85be74d:	66 89 5c c1 0e       	mov    %bx,0xe(%ecx,%eax,8)
 85be752:	eb 51                	jmp    85be7a5 <_ZN10BattleData33IncEventDungeonDestoryObjectPointEiRKN15CMDPacketStruct31_STReqEventDungeonDestoryObjectE+0xc3>
 85be754:	8b 55 0c             	mov    0xc(%ebp),%edx
 85be757:	8b 45 10             	mov    0x10(%ebp),%eax
 85be75a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be75e:	0f b7 f0             	movzwl %ax,%esi
 85be761:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85be764:	8b 45 10             	mov    0x10(%ebp),%eax
 85be767:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 85be76b:	0f b7 f8             	movzwl %ax,%edi
 85be76e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85be771:	89 c8                	mov    %ecx,%eax
 85be773:	01 c0                	add    %eax,%eax
 85be775:	01 c8                	add    %ecx,%eax
 85be777:	01 f8                	add    %edi,%eax
 85be779:	05 c4 00 00 00       	add    $0xc4,%eax
 85be77e:	0f b7 4c c3 10       	movzwl 0x10(%ebx,%eax,8),%ecx
 85be783:	8b 45 10             	mov    0x10(%ebp),%eax
 85be786:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 85be78a:	8d 1c 01             	lea    (%ecx,%eax,1),%ebx
 85be78d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85be790:	89 d0                	mov    %edx,%eax
 85be792:	01 c0                	add    %eax,%eax
 85be794:	01 d0                	add    %edx,%eax
 85be796:	01 f0                	add    %esi,%eax
 85be798:	05 c4 00 00 00       	add    $0xc4,%eax
 85be79d:	66 89 5c c1 10       	mov    %bx,0x10(%ecx,%eax,8)
 85be7a2:	eb 01                	jmp    85be7a5 <_ZN10BattleData33IncEventDungeonDestoryObjectPointEiRKN15CMDPacketStruct31_STReqEventDungeonDestoryObjectE+0xc3>
 85be7a4:	90                   	nop
 85be7a5:	5b                   	pop    %ebx
 85be7a6:	5e                   	pop    %esi
 85be7a7:	5f                   	pop    %edi
 85be7a8:	5d                   	pop    %ebp
 85be7a9:	c3                   	ret

```

```c
// BattleData::IncEventDungeonDestoryObjectPoint @ 0x85be6e2

/* BattleData::IncEventDungeonDestoryObjectPoint(int,
   CMDPacketStruct::_STReqEventDungeonDestoryObject const&) */

void __thiscall
BattleData::IncEventDungeonDestoryObjectPoint
          (BattleData *this,int param_1,_STReqEventDungeonDestoryObject *param_2)

{
  if (*(ushort *)(param_2 + 0xe) < 3) {
    if (*(int *)(param_2 + 0x10) == 1) {
      *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0x10) =
           *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0x10) +
           *(short *)(param_2 + 0x14);
    }
    else {
      *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0xe) =
           *(short *)(this + (param_1 * 3 + (uint)*(ushort *)(param_2 + 0xe) + 0xc4) * 8 + 0xe) +
           *(short *)(param_2 + 0x14);
    }
  }
  return;
}

```

---

## IsClearEventDungeonRoom

```asm
// === 085be862 BattleData::IsClearEventDungeonRoom  [0x085be862-0x85be89f] ===
 85be862:	55                   	push   %ebp
 85be863:	89 e5                	mov    %esp,%ebp
 85be865:	53                   	push   %ebx
 85be866:	83 ec 04             	sub    $0x4,%esp
 85be869:	8b 45 10             	mov    0x10(%ebp),%eax
 85be86c:	66 89 45 f8          	mov    %ax,-0x8(%ebp)
 85be870:	66 83 7d f8 02       	cmpw   $0x2,-0x8(%ebp)
 85be875:	76 07                	jbe    85be87e <_ZNK10BattleData23IsClearEventDungeonRoomEit+0x1c>
 85be877:	b8 00 00 00 00       	mov    $0x0,%eax
 85be87c:	eb 1c                	jmp    85be89a <_ZNK10BattleData23IsClearEventDungeonRoomEit+0x38>
 85be87e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85be881:	0f b7 5d f8          	movzwl -0x8(%ebp),%ebx
 85be885:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85be888:	89 d0                	mov    %edx,%eax
 85be88a:	01 c0                	add    %eax,%eax
 85be88c:	01 d0                	add    %edx,%eax
 85be88e:	01 d8                	add    %ebx,%eax
 85be890:	05 c4 00 00 00       	add    $0xc4,%eax
 85be895:	0f b6 44 c1 12       	movzbl 0x12(%ecx,%eax,8),%eax
 85be89a:	83 c4 04             	add    $0x4,%esp
 85be89d:	5b                   	pop    %ebx
 85be89e:	5d                   	pop    %ebp
 85be89f:	c3                   	ret

```

```c
// BattleData::IsClearEventDungeonRoom @ 0x85be862

/* BattleData::IsClearEventDungeonRoom(int, unsigned short) const */

BattleData __thiscall
BattleData::IsClearEventDungeonRoom(BattleData *this,int param_1,ushort param_2)

{
  BattleData BVar1;
  
  if (param_2 < 3) {
    BVar1 = this[(param_1 * 3 + (uint)param_2 + 0xc4) * 8 + 0x12];
  }
  else {
    BVar1 = (BattleData)0x0;
  }
  return BVar1;
}

```

---

## ResetEventDungeonClearPoint

```asm
// === 085be6ba BattleData::ResetEventDungeonClearPoint  [0x085be6ba-0x85be6e1] ===
 85be6ba:	55                   	push   %ebp
 85be6bb:	89 e5                	mov    %esp,%ebp
 85be6bd:	83 ec 18             	sub    $0x18,%esp
 85be6c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85be6c3:	05 2c 06 00 00       	add    $0x62c,%eax
 85be6c8:	c7 44 24 08 60 00 00 	movl   $0x60,0x8(%esp)
 85be6cf:	00 
 85be6d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85be6d7:	00 
 85be6d8:	89 04 24             	mov    %eax,(%esp)
 85be6db:	e8 e0 f5 ab ff       	call   807dcc0 <memset@plt>
 85be6e0:	c9                   	leave
 85be6e1:	c3                   	ret

```

```c
// BattleData::ResetEventDungeonClearPoint @ 0x85be6ba

/* BattleData::ResetEventDungeonClearPoint() */

void __thiscall BattleData::ResetEventDungeonClearPoint(BattleData *this)

{
  memset(this + 0x62c,0,0x60);
  return;
}

```

