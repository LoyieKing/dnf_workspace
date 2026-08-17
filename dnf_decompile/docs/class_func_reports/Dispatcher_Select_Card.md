# Dispatcher_Select_Card

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ff7de Dispatcher_Select_Card::dispatch_sig  [0x081ff7de-0x81ffa55] ===
 81ff7de:	55                   	push   %ebp
 81ff7df:	89 e5                	mov    %esp,%ebp
 81ff7e1:	53                   	push   %ebx
 81ff7e2:	83 ec 24             	sub    $0x24,%esp
 81ff7e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff7e8:	89 04 24             	mov    %eax,(%esp)
 81ff7eb:	e8 9c ab ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ff7f0:	83 f8 05             	cmp    $0x5,%eax
 81ff7f3:	0f 95 c0             	setne  %al
 81ff7f6:	84 c0                	test   %al,%al
 81ff7f8:	74 0a                	je     81ff804 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x26>
 81ff7fa:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff7ff:	e9 4b 02 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff804:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff807:	89 04 24             	mov    %eax,(%esp)
 81ff80a:	e8 bb 16 49 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81ff80f:	83 f8 01             	cmp    $0x1,%eax
 81ff812:	0f 94 c0             	sete   %al
 81ff815:	84 c0                	test   %al,%al
 81ff817:	74 0a                	je     81ff823 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x45>
 81ff819:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff81e:	e9 2c 02 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff823:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff826:	89 04 24             	mov    %eax,(%esp)
 81ff829:	e8 20 06 03 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ff82e:	0f bf d8             	movswl %ax,%ebx
 81ff831:	e8 58 c9 ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ff836:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ff83a:	89 04 24             	mov    %eax,(%esp)
 81ff83d:	e8 f0 56 09 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ff842:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ff845:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ff849:	0f 94 c0             	sete   %al
 81ff84c:	84 c0                	test   %al,%al
 81ff84e:	74 29                	je     81ff879 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 81ff850:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff857:	00 
 81ff858:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff85f:	00 
 81ff860:	c7 44 24 04 00 f9 bc 	movl   $0x8bcf900,0x4(%esp)
 81ff867:	08 
 81ff868:	c7 04 24 71 93 00 00 	movl   $0x9371,(%esp)
 81ff86f:	e8 63 10 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff874:	e9 d6 01 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff879:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff87c:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ff882:	85 c0                	test   %eax,%eax
 81ff884:	74 1c                	je     81ff8a2 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0xc4>
 81ff886:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff889:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ff88f:	89 04 24             	mov    %eax,(%esp)
 81ff892:	e8 63 bc 02 00       	call   822b4fa <_ZNK8CDungeon23isTowerOfDespairDungeonEv>
 81ff897:	84 c0                	test   %al,%al
 81ff899:	74 07                	je     81ff8a2 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0xc4>
 81ff89b:	b8 01 00 00 00       	mov    $0x1,%eax
 81ff8a0:	eb 05                	jmp    81ff8a7 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 81ff8a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff8a7:	84 c0                	test   %al,%al
 81ff8a9:	74 0a                	je     81ff8b5 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0xd7>
 81ff8ab:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff8b0:	e9 9a 01 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff8b5:	8d 45 f2             	lea    -0xe(%ebp),%eax
 81ff8b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff8bc:	8b 45 10             	mov    0x10(%ebp),%eax
 81ff8bf:	89 04 24             	mov    %eax,(%esp)
 81ff8c2:	e8 5b d6 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ff8c7:	83 f0 01             	xor    $0x1,%eax
 81ff8ca:	84 c0                	test   %al,%al
 81ff8cc:	74 29                	je     81ff8f7 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x119>
 81ff8ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff8d5:	00 
 81ff8d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff8dd:	00 
 81ff8de:	c7 44 24 04 00 f9 bc 	movl   $0x8bcf900,0x4(%esp)
 81ff8e5:	08 
 81ff8e6:	c7 04 24 82 93 00 00 	movl   $0x9382,(%esp)
 81ff8ed:	e8 e5 0f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff8f2:	e9 58 01 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff8f7:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 81ff8fb:	84 c0                	test   %al,%al
 81ff8fd:	78 08                	js     81ff907 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x129>
 81ff8ff:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 81ff903:	3c 01                	cmp    $0x1,%al
 81ff905:	7e 29                	jle    81ff930 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x152>
 81ff907:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff90e:	00 
 81ff90f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff916:	00 
 81ff917:	c7 44 24 04 00 f9 bc 	movl   $0x8bcf900,0x4(%esp)
 81ff91e:	08 
 81ff91f:	c7 04 24 84 93 00 00 	movl   $0x9384,(%esp)
 81ff926:	e8 ac 0f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff92b:	e9 1f 01 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff930:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81ff933:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff937:	8b 45 10             	mov    0x10(%ebp),%eax
 81ff93a:	89 04 24             	mov    %eax,(%esp)
 81ff93d:	e8 e0 d5 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ff942:	83 f0 01             	xor    $0x1,%eax
 81ff945:	84 c0                	test   %al,%al
 81ff947:	74 29                	je     81ff972 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x194>
 81ff949:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ff950:	00 
 81ff951:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ff958:	00 
 81ff959:	c7 44 24 04 00 f9 bc 	movl   $0x8bcf900,0x4(%esp)
 81ff960:	08 
 81ff961:	c7 04 24 92 93 00 00 	movl   $0x9392,(%esp)
 81ff968:	e8 6a 0f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ff96d:	e9 dd 00 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff972:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff975:	89 04 24             	mov    %eax,(%esp)
 81ff978:	e8 1f df 02 00       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 81ff97d:	3c 04                	cmp    $0x4,%al
 81ff97f:	0f 9f c0             	setg   %al
 81ff982:	84 c0                	test   %al,%al
 81ff984:	74 0a                	je     81ff990 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x1b2>
 81ff986:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff98b:	e9 bf 00 00 00       	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff990:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ff997:	00 
 81ff998:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff99b:	89 04 24             	mov    %eax,(%esp)
 81ff99e:	e8 f9 4e 3b 00       	call   85b489c <_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t>
 81ff9a3:	83 f0 01             	xor    $0x1,%eax
 81ff9a6:	84 c0                	test   %al,%al
 81ff9a8:	74 41                	je     81ff9eb <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x20d>
 81ff9aa:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 81ff9ae:	0f be d0             	movsbl %al,%edx
 81ff9b1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81ff9b5:	0f be c0             	movsbl %al,%eax
 81ff9b8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ff9bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ff9c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff9c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff9c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff9ca:	89 04 24             	mov    %eax,(%esp)
 81ff9cd:	e8 88 47 3b 00       	call   85b415a <_ZN6CParty13SetCardNumberEP5CUserc22eClearRewardCardType_t>
 81ff9d2:	83 f0 01             	xor    $0x1,%eax
 81ff9d5:	84 c0                	test   %al,%al
 81ff9d7:	74 07                	je     81ff9e0 <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x202>
 81ff9d9:	b8 00 00 00 00       	mov    $0x0,%eax
 81ff9de:	eb 6f                	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ff9e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff9e3:	89 04 24             	mov    %eax,(%esp)
 81ff9e6:	e8 eb 4a 3b 00       	call   85b44d6 <_ZN6CParty16SendEachCardInfoEv>
 81ff9eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ff9ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ff9f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ff9f5:	89 04 24             	mov    %eax,(%esp)
 81ff9f8:	e8 db 45 3b 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 81ff9fd:	83 f0 01             	xor    $0x1,%eax
 81ffa00:	84 c0                	test   %al,%al
 81ffa02:	74 07                	je     81ffa0b <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x22d>
 81ffa04:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffa09:	eb 44                	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ffa0b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ffa12:	00 
 81ffa13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ffa16:	89 04 24             	mov    %eax,(%esp)
 81ffa19:	e8 7e 4e 3b 00       	call   85b489c <_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t>
 81ffa1e:	83 f0 01             	xor    $0x1,%eax
 81ffa21:	84 c0                	test   %al,%al
 81ffa23:	74 07                	je     81ffa2c <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x24e>
 81ffa25:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffa2a:	eb 23                	jmp    81ffa4f <_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf+0x271>
 81ffa2c:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81ffa33:	00 
 81ffa34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ffa37:	89 04 24             	mov    %eax,(%esp)
 81ffa3a:	e8 6d de 02 00       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 81ffa3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ffa42:	89 04 24             	mov    %eax,(%esp)
 81ffa45:	e8 ec bc 3a 00       	call   85ab736 <_ZN6CParty13dungeon_clearEv>
 81ffa4a:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffa4f:	83 c4 24             	add    $0x24,%esp
 81ffa52:	5b                   	pop    %ebx
 81ffa53:	5d                   	pop    %ebp
 81ffa54:	c3                   	ret
 81ffa55:	90                   	nop

```

```c
// Dispatcher_Select_Card::dispatch_sig @ 0x81ff7de

/* Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Select_Card::dispatch_sig(Dispatcher_Select_Card *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char local_12;
  char local_11;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 5) {
    return 0;
  }
  iVar3 = CUser::getMoveSpace(param_1);
  if (iVar3 != 1) {
    CUser::GetPartyIndex(param_1);
    iVar3 = G_CGameManager();
    local_10 = (CParty *)CGameManager::GetParty(iVar3);
    if (local_10 == (CParty *)0x0) {
      uVar4 = LineFunc(0x9371,"virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar4;
    }
    if ((*(int *)(local_10 + 0xcac) == 0) ||
       (cVar2 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(local_10 + 0xcac)), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      cVar2 = PacketBuf::get_byte(param_2,&local_12);
      if (cVar2 == '\x01') {
        if ((local_12 < '\0') || ('\x01' < local_12)) {
          uVar4 = LineFunc(0x9384,
                           "virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)",0,
                           0);
        }
        else {
          cVar2 = PacketBuf::get_byte(param_2,&local_11);
          if (cVar2 == '\x01') {
            cVar2 = CParty::get_dungeon_clear_state(local_10);
            if (cVar2 < '\x05') {
              cVar2 = CParty::IsCompleteCardSelectOfMembers(local_10,2);
              if (cVar2 != '\x01') {
                cVar2 = CParty::SetCardNumber(local_10,param_1,(int)local_11,(int)local_12);
                if (cVar2 != '\x01') {
                  return 0;
                }
                CParty::SendEachCardInfo(local_10);
              }
              cVar2 = CParty::CheckRecvFromAllMember(local_10,param_1);
              if (cVar2 == '\x01') {
                cVar2 = CParty::IsCompleteCardSelectOfMembers(local_10,2);
                if (cVar2 == '\x01') {
                  CParty::set_dungeon_clear_state(local_10,'\x05');
                  CParty::dungeon_clear(local_10);
                  uVar4 = 0;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = LineFunc(0x9392,
                             "virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)",
                             0,0);
          }
        }
      }
      else {
        uVar4 = LineFunc(0x9382,
                         "virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
    return uVar4;
  }
  return 0;
}

```

