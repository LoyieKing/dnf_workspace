# Dispatcher_DieMobAll

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ecce6 Dispatcher_DieMobAll::dispatch_sig  [0x081ecce6-0x81ece63] ===
 81ecce6:	55                   	push   %ebp
 81ecce7:	89 e5                	mov    %esp,%ebp
 81ecce9:	53                   	push   %ebx
 81eccea:	83 ec 34             	sub    $0x34,%esp
 81ecced:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eccf0:	89 04 24             	mov    %eax,(%esp)
 81eccf3:	e8 94 d6 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eccf8:	83 f8 05             	cmp    $0x5,%eax
 81eccfb:	0f 94 c0             	sete   %al
 81eccfe:	84 c0                	test   %al,%al
 81ecd00:	0f 84 53 01 00 00    	je     81ece59 <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x173>
 81ecd06:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecd09:	89 04 24             	mov    %eax,(%esp)
 81ecd0c:	e8 3d 31 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ecd11:	0f bf d8             	movswl %ax,%ebx
 81ecd14:	e8 75 f4 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ecd19:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ecd1d:	89 04 24             	mov    %eax,(%esp)
 81ecd20:	e8 0d 82 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ecd25:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ecd28:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ecd2c:	75 29                	jne    81ecd57 <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x71>
 81ecd2e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ecd35:	00 
 81ecd36:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ecd3d:	00 
 81ecd3e:	c7 44 24 04 e0 05 bd 	movl   $0x8bd05e0,0x4(%esp)
 81ecd45:	08 
 81ecd46:	c7 04 24 f6 6e 00 00 	movl   $0x6ef6,(%esp)
 81ecd4d:	e8 85 3b 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ecd52:	e9 07 01 00 00       	jmp    81ece5e <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x178>
 81ecd57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ecd5a:	05 24 0b 00 00       	add    $0xb24,%eax
 81ecd5f:	89 04 24             	mov    %eax,(%esp)
 81ecd62:	e8 25 03 04 00       	call   822d08c <_ZN13CBattle_Field14IsClearDungeonEv>
 81ecd67:	83 f0 01             	xor    $0x1,%eax
 81ecd6a:	84 c0                	test   %al,%al
 81ecd6c:	0f 84 e7 00 00 00    	je     81ece59 <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x173>
 81ecd72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ecd75:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ecd7b:	85 c0                	test   %eax,%eax
 81ecd7d:	75 3f                	jne    81ecdbe <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 81ecd7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecd82:	89 04 24             	mov    %eax,(%esp)
 81ecd85:	e8 d0 cb f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ecd8a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ecd91:	00 
 81ecd92:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ecd99:	00 
 81ecd9a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ecda1:	00 
 81ecda2:	c7 44 24 08 cc 00 00 	movl   $0xcc,0x8(%esp)
 81ecda9:	00 
 81ecdaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ecdad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ecdb1:	89 04 24             	mov    %eax,(%esp)
 81ecdb4:	e8 c5 be f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ecdb9:	e9 9b 00 00 00       	jmp    81ece59 <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x173>
 81ecdbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecdc1:	89 04 24             	mov    %eax,(%esp)
 81ecdc4:	e8 83 83 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ecdc9:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ecdcf:	89 04 24             	mov    %eax,(%esp)
 81ecdd2:	e8 19 0f f1 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81ecdd7:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81ecddc:	0f 94 c0             	sete   %al
 81ecddf:	84 c0                	test   %al,%al
 81ecde1:	74 3c                	je     81ece1f <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x139>
 81ecde3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecde6:	89 04 24             	mov    %eax,(%esp)
 81ecde9:	e8 6c cb f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ecdee:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ecdf5:	00 
 81ecdf6:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 81ecdfd:	00 
 81ecdfe:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ece05:	00 
 81ece06:	c7 44 24 08 cc 00 00 	movl   $0xcc,0x8(%esp)
 81ece0d:	00 
 81ece0e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ece11:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ece15:	89 04 24             	mov    %eax,(%esp)
 81ece18:	e8 61 be f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ece1d:	eb 3a                	jmp    81ece59 <_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf+0x173>
 81ece1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ece22:	89 04 24             	mov    %eax,(%esp)
 81ece25:	e8 30 cb f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ece2a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ece31:	00 
 81ece32:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ece39:	00 
 81ece3a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ece41:	00 
 81ece42:	c7 44 24 08 cc 00 00 	movl   $0xcc,0x8(%esp)
 81ece49:	00 
 81ece4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ece4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ece51:	89 04 24             	mov    %eax,(%esp)
 81ece54:	e8 25 be f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ece59:	b8 00 00 00 00       	mov    $0x0,%eax
 81ece5e:	83 c4 34             	add    $0x34,%esp
 81ece61:	5b                   	pop    %ebx
 81ece62:	5d                   	pop    %ebp
 81ece63:	c3                   	ret

```

```c
// Dispatcher_DieMobAll::dispatch_sig @ 0x81ecce6

/* Dispatcher_DieMobAll::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_DieMobAll::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 5) {
    CUser::GetPartyIndex((CUser *)param_2);
    iVar2 = G_CGameManager();
    iVar2 = CGameManager::GetParty(iVar2);
    if (iVar2 == 0) {
      uVar3 = LineFunc(0x6ef6,"virtual int Dispatcher_DieMobAll::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
      return uVar3;
    }
    cVar1 = CBattle_Field::IsClearDungeon((CBattle_Field *)(iVar2 + 0xb24));
    if (cVar1 != '\x01') {
      if (*(int *)(iVar2 + 0xcac) == 0) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,0xcc,1,0,0);
      }
      else {
        iVar2 = CUser::GetParty((CUser *)param_2);
        iVar2 = CDungeon::get_index(*(CDungeon **)(iVar2 + 0xcac));
        if (iVar2 == 0x2afe) {
          pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,0xcc,1,2,0);
        }
        else {
          pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,0xcc,1,0,0);
        }
      }
    }
  }
  return 0;
}

```

