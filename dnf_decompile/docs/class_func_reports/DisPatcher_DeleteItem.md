# DisPatcher_DeleteItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## check_error

```asm
// === 081c1a6c DisPatcher_DeleteItem::check_error  [0x081c1a6c-0x81c1ad5] ===
 81c1a6c:	55                   	push   %ebp
 81c1a6d:	89 e5                	mov    %esp,%ebp
 81c1a6f:	83 ec 38             	sub    $0x38,%esp
 81c1a72:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1a75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c1a78:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1a7b:	89 04 24             	mov    %eax,(%esp)
 81c1a7e:	e8 33 c6 48 00       	call   864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>
 81c1a83:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c1a86:	8b 92 bf 04 00 00    	mov    0x4bf(%edx),%edx
 81c1a8c:	39 d0                	cmp    %edx,%eax
 81c1a8e:	0f 95 c0             	setne  %al
 81c1a91:	84 c0                	test   %al,%al
 81c1a93:	74 3a                	je     81c1acf <_ZN21DisPatcher_DeleteItem11check_errorEP5CUserR8MSG_BASE+0x63>
 81c1a95:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1a98:	89 04 24             	mov    %eax,(%esp)
 81c1a9b:	e8 ba 7e f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c1aa0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c1aa7:	00 
 81c1aa8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c1aaf:	00 
 81c1ab0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c1ab7:	00 
 81c1ab8:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 81c1abf:	00 
 81c1ac0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c1ac3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1ac7:	89 04 24             	mov    %eax,(%esp)
 81c1aca:	e8 af 71 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c1acf:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1ad4:	c9                   	leave
 81c1ad5:	c3                   	ret

```

```c
// DisPatcher_DeleteItem::check_error @ 0x81c1a6c

/* DisPatcher_DeleteItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DeleteItem::check_error(DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  CHackAnalyzer *pCVar2;
  
  iVar1 = CUser::getCurCharacInvenCheckSum(param_1);
  if (iVar1 != *(int *)(param_2 + 0x4bf)) {
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_1,0x25b,1,0,0);
  }
  return 0;
}

```

---

## condition_check

```asm
// === 081c1d5c DisPatcher_DeleteItem::condition_check  [0x081c1d5c-0x81c1dd9] ===
 81c1d5c:	55                   	push   %ebp
 81c1d5d:	89 e5                	mov    %esp,%ebp
 81c1d5f:	53                   	push   %ebx
 81c1d60:	83 ec 24             	sub    $0x24,%esp
 81c1d63:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1d66:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c1d69:	8b 45 14             	mov    0x14(%ebp),%eax
 81c1d6c:	8b 00                	mov    (%eax),%eax
 81c1d6e:	85 c0                	test   %eax,%eax
 81c1d70:	75 1b                	jne    81c1d8d <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi+0x31>
 81c1d72:	8b 55 18             	mov    0x18(%ebp),%edx
 81c1d75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1d78:	83 c2 68             	add    $0x68,%edx
 81c1d7b:	0f b7 44 50 07       	movzwl 0x7(%eax,%edx,2),%eax
 81c1d80:	66 83 f8 09          	cmp    $0x9,%ax
 81c1d84:	7f 07                	jg     81c1d8d <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi+0x31>
 81c1d86:	b8 17 00 00 00       	mov    $0x17,%eax
 81c1d8b:	eb 46                	jmp    81c1dd3 <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi+0x77>
 81c1d8d:	8b 55 18             	mov    0x18(%ebp),%edx
 81c1d90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1d93:	83 c2 68             	add    $0x68,%edx
 81c1d96:	0f b7 44 50 07       	movzwl 0x7(%eax,%edx,2),%eax
 81c1d9b:	0f bf d8             	movswl %ax,%ebx
 81c1d9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1da1:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1da5:	0f be c0             	movsbl %al,%eax
 81c1da8:	89 04 24             	mov    %eax,(%esp)
 81c1dab:	e8 95 5a f3 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81c1db0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c1db4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1db8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1dbb:	89 04 24             	mov    %eax,(%esp)
 81c1dbe:	e8 7f 4b 48 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81c1dc3:	84 c0                	test   %al,%al
 81c1dc5:	74 07                	je     81c1dce <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi+0x72>
 81c1dc7:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81c1dcc:	eb 05                	jmp    81c1dd3 <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi+0x77>
 81c1dce:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1dd3:	83 c4 24             	add    $0x24,%esp
 81c1dd6:	5b                   	pop    %ebx
 81c1dd7:	5d                   	pop    %ebp
 81c1dd8:	c3                   	ret
 81c1dd9:	90                   	nop

```

```c
// DisPatcher_DeleteItem::condition_check @ 0x81c1d5c

/* DisPatcher_DeleteItem::condition_check(CUser*, MSG_BASE&, INVEN_TYPE&, int) */

undefined4 __thiscall
DisPatcher_DeleteItem::condition_check
          (DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2,INVEN_TYPE *param_3,
          int param_4)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((*(int *)param_3 == 0) && (*(short *)(param_2 + (param_4 + 0x68) * 2 + 7) < 10)) {
    uVar3 = 0x17;
  }
  else {
    sVar1 = *(short *)(param_2 + (param_4 + 0x68) * 2 + 7);
    iVar4 = GetInvenTypeFromItemSpace((int)(char)param_2[0xd]);
    cVar2 = CUser::CheckItemLock(param_1,iVar4,(int)sVar1);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0xd5;
    }
  }
  return uVar3;
}

```

---

## exercise_mode

```asm
// === 081c1ad6 DisPatcher_DeleteItem::exercise_mode  [0x081c1ad6-0x81c1cf5] ===
 81c1ad6:	55                   	push   %ebp
 81c1ad7:	89 e5                	mov    %esp,%ebp
 81c1ad9:	53                   	push   %ebx
 81c1ada:	83 ec 34             	sub    $0x34,%esp
 81c1add:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1ae0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81c1ae3:	8b 45 14             	mov    0x14(%ebp),%eax
 81c1ae6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c1ae9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1aec:	89 04 24             	mov    %eax,(%esp)
 81c1aef:	e8 5a e3 06 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81c1af4:	0f bf d8             	movswl %ax,%ebx
 81c1af7:	e8 92 a6 f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c1afc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c1b00:	89 04 24             	mov    %eax,(%esp)
 81c1b03:	e8 2a 34 0d 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81c1b08:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c1b0b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81c1b0f:	0f 84 d5 01 00 00    	je     81c1cea <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x214>
 81c1b15:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81c1b1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1b1f:	89 04 24             	mov    %eax,(%esp)
 81c1b22:	e8 65 88 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c1b27:	83 f8 0a             	cmp    $0xa,%eax
 81c1b2a:	0f 94 c0             	sete   %al
 81c1b2d:	84 c0                	test   %al,%al
 81c1b2f:	74 0e                	je     81c1b3f <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x69>
 81c1b31:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1b34:	89 04 24             	mov    %eax,(%esp)
 81c1b37:	e8 68 37 49 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81c1b3c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c1b3f:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 81c1b43:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81c1b47:	0f 84 da 00 00 00    	je     81c1c27 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x151>
 81c1b4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c1b50:	89 04 24             	mov    %eax,(%esp)
 81c1b53:	e8 ba 2a 07 00       	call   8234612 <_ZNK8WongWork11CDeathTower14getCDungeonMGrEv>
 81c1b58:	89 04 24             	mov    %eax,(%esp)
 81c1b5b:	e8 90 2a 07 00       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 81c1b60:	89 04 24             	mov    %eax,(%esp)
 81c1b63:	e8 66 99 06 00       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 81c1b68:	83 f0 01             	xor    $0x1,%eax
 81c1b6b:	84 c0                	test   %al,%al
 81c1b6d:	74 04                	je     81c1b73 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81c1b6f:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 81c1b73:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c1b76:	89 04 24             	mov    %eax,(%esp)
 81c1b79:	e8 94 2a 07 00       	call   8234612 <_ZNK8WongWork11CDeathTower14getCDungeonMGrEv>
 81c1b7e:	89 04 24             	mov    %eax,(%esp)
 81c1b81:	e8 6a 2a 07 00       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 81c1b86:	89 04 24             	mov    %eax,(%esp)
 81c1b89:	e8 40 99 06 00       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 81c1b8e:	84 c0                	test   %al,%al
 81c1b90:	0f 84 91 00 00 00    	je     81c1c27 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x151>
 81c1b96:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81c1b9d:	eb 70                	jmp    81c1c0f <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x139>
 81c1b9f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81c1ba2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1ba5:	83 c2 64             	add    $0x64,%edx
 81c1ba8:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c1bac:	89 c3                	mov    %eax,%ebx
 81c1bae:	e8 e8 a5 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c1bb3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c1bb7:	89 04 24             	mov    %eax,(%esp)
 81c1bba:	e8 73 de 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81c1bbf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c1bc2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c1bc6:	74 19                	je     81c1be1 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81c1bc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c1bcb:	89 04 24             	mov    %eax,(%esp)
 81c1bce:	e8 75 f0 f4 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81c1bd3:	3d 73 19 00 00       	cmp    $0x1973,%eax
 81c1bd8:	75 07                	jne    81c1be1 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81c1bda:	b8 01 00 00 00       	mov    $0x1,%eax
 81c1bdf:	eb 05                	jmp    81c1be6 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x110>
 81c1be1:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1be6:	84 c0                	test   %al,%al
 81c1be8:	74 21                	je     81c1c0b <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x135>
 81c1bea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81c1bf1:	e8 b6 3c f8 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 81c1bf6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c1bf9:	81 c2 58 0b 00 00    	add    $0xb58,%edx
 81c1bff:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1c03:	89 14 24             	mov    %edx,(%esp)
 81c1c06:	e8 41 2a 07 00       	call   823464c <_ZN8WongWork11CDeathTower25stMapMonsterKillChecker_t19setUseSkillMaterialEj>
 81c1c0b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81c1c0f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1c12:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c1c16:	0f be c0             	movsbl %al,%eax
 81c1c19:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81c1c1c:	0f 9f c0             	setg   %al
 81c1c1f:	84 c0                	test   %al,%al
 81c1c21:	0f 85 78 ff ff ff    	jne    81c1b9f <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0xc9>
 81c1c27:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c1c2a:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81c1c30:	83 f8 01             	cmp    $0x1,%eax
 81c1c33:	75 1d                	jne    81c1c52 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x17c>
 81c1c35:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1c38:	89 04 24             	mov    %eax,(%esp)
 81c1c3b:	e8 4c 87 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c1c40:	83 f8 05             	cmp    $0x5,%eax
 81c1c43:	74 06                	je     81c1c4b <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x175>
 81c1c45:	80 7d eb 00          	cmpb   $0x0,-0x15(%ebp)
 81c1c49:	74 07                	je     81c1c52 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x17c>
 81c1c4b:	b8 01 00 00 00       	mov    $0x1,%eax
 81c1c50:	eb 05                	jmp    81c1c57 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x181>
 81c1c52:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1c57:	84 c0                	test   %al,%al
 81c1c59:	0f 84 8b 00 00 00    	je     81c1cea <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x214>
 81c1c5f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c1c62:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 81c1c66:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1c69:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c1c6d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c1c70:	88 50 08             	mov    %dl,0x8(%eax)
 81c1c73:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c1c7a:	eb 53                	jmp    81c1ccf <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x1f9>
 81c1c7c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81c1c7f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c1c82:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1c85:	83 c2 68             	add    $0x68,%edx
 81c1c88:	0f b7 54 50 07       	movzwl 0x7(%eax,%edx,2),%edx
 81c1c8d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c1c90:	83 c1 68             	add    $0x68,%ecx
 81c1c93:	66 89 54 48 02       	mov    %dx,0x2(%eax,%ecx,2)
 81c1c98:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81c1c9b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c1c9e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1ca1:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c1ca7:	8b 54 90 0f          	mov    0xf(%eax,%edx,4),%edx
 81c1cab:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c1cae:	83 c1 64             	add    $0x64,%ecx
 81c1cb1:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 81c1cb5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c1cb8:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81c1cbb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1cbe:	0f b7 4c 48 0f       	movzwl 0xf(%eax,%ecx,2),%ecx
 81c1cc3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c1cc6:	66 89 4c 50 0a       	mov    %cx,0xa(%eax,%edx,2)
 81c1ccb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c1ccf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1cd2:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c1cd6:	0f be c0             	movsbl %al,%eax
 81c1cd9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81c1cdc:	0f 9f c0             	setg   %al
 81c1cdf:	84 c0                	test   %al,%al
 81c1ce1:	75 99                	jne    81c1c7c <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x1a6>
 81c1ce3:	b8 01 00 00 00       	mov    $0x1,%eax
 81c1ce8:	eb 05                	jmp    81c1cef <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase+0x219>
 81c1cea:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1cef:	83 c4 34             	add    $0x34,%esp
 81c1cf2:	5b                   	pop    %ebx
 81c1cf3:	5d                   	pop    %ebp
 81c1cf4:	c3                   	ret
 81c1cf5:	90                   	nop

```

```c
// DisPatcher_DeleteItem::exercise_mode @ 0x81c1ad6

/* DisPatcher_DeleteItem::exercise_mode(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DeleteItem::exercise_mode
          (DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CDungeonMgr *pCVar5;
  CDungeon *pCVar6;
  CDataManager *this_00;
  CItem *this_01;
  uint uVar7;
  bool bVar8;
  CDeathTower *local_20;
  int local_18;
  int local_10;
  
  CUser::GetPartyIndex(param_1);
  iVar3 = G_CGameManager();
  iVar3 = CGameManager::GetParty(iVar3);
  if (iVar3 != 0) {
    local_20 = (CDeathTower *)0x0;
    iVar4 = CUser::get_state(param_1);
    if (iVar4 == 10) {
      local_20 = (CDeathTower *)CUser::getDeathTower(param_1);
    }
    bVar8 = false;
    if (local_20 != (CDeathTower *)0x0) {
      pCVar5 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_20);
      pCVar6 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar5);
      cVar2 = CDungeon::limitOfStackableItemInTower(pCVar6);
      bVar8 = cVar2 != '\x01';
      pCVar5 = (CDungeonMgr *)WongWork::CDeathTower::getCDungeonMGr(local_20);
      pCVar6 = (CDungeon *)WongWork::CDeathTower::CDungeonMgr::getDungeon(pCVar5);
      cVar2 = CDungeon::limitOfStackableItemInTower(pCVar6);
      if (cVar2 != '\0') {
        for (local_18 = 0; local_18 < (char)param_2[0xe]; local_18 = local_18 + 1) {
          iVar4 = *(int *)(param_2 + (local_18 + 100) * 4 + 0xf);
          this_00 = (CDataManager *)G_CDataManager();
          this_01 = (CItem *)CDataManager::find_item(this_00,iVar4);
          if ((this_01 == (CItem *)0x0) || (iVar4 = CItem::get_index(this_01), iVar4 != 0x1973)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar7 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
            WongWork::CDeathTower::stMapMonsterKillChecker_t::setUseSkillMaterial
                      ((stMapMonsterKillChecker_t *)(local_20 + 0xb58),uVar7);
          }
        }
      }
    }
    if ((*(int *)(iVar3 + 0xcd8) == 1) &&
       ((iVar3 = CUser::get_state(param_1), iVar3 == 5 || (bVar8)))) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      param_3[9] = (ParamBase)0x0;
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
        *(undefined2 *)(param_3 + (local_10 + 0x68) * 2 + 2) =
             *(undefined2 *)(param_2 + (local_10 + 0x68) * 2 + 7);
        *(undefined4 *)(param_3 + (local_10 + 100) * 4 + 0xc) =
             *(undefined4 *)(param_2 + (local_10 + 200) * 4 + 0xf);
        *(undefined2 *)(param_3 + local_10 * 2 + 10) = *(undefined2 *)(param_2 + local_10 * 2 + 0xf)
        ;
      }
      return 1;
    }
  }
  return 0;
}

```

---

## process

```asm
// === 081c1dda DisPatcher_DeleteItem::process  [0x081c1dda-0x81c2791] ===
 81c1dda:	55                   	push   %ebp
 81c1ddb:	89 e5                	mov    %esp,%ebp
 81c1ddd:	56                   	push   %esi
 81c1dde:	53                   	push   %ebx
 81c1ddf:	81 ec 00 01 00 00    	sub    $0x100,%esp
 81c1de5:	8b 45 14             	mov    0x14(%ebp),%eax
 81c1de8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81c1deb:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1dee:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c1df2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1df5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1df9:	8b 45 08             	mov    0x8(%ebp),%eax
 81c1dfc:	89 04 24             	mov    %eax,(%esp)
 81c1dff:	e8 68 fc ff ff       	call   81c1a6c <_ZN21DisPatcher_DeleteItem11check_errorEP5CUserR8MSG_BASE>
 81c1e04:	89 c2                	mov    %eax,%edx
 81c1e06:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1e09:	89 50 04             	mov    %edx,0x4(%eax)
 81c1e0c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1e0f:	8b 40 04             	mov    0x4(%eax),%eax
 81c1e12:	85 c0                	test   %eax,%eax
 81c1e14:	7e 0a                	jle    81c1e20 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x46>
 81c1e16:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1e1b:	e9 66 09 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c1e20:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1e23:	8b 40 04             	mov    0x4(%eax),%eax
 81c1e26:	85 c0                	test   %eax,%eax
 81c1e28:	79 34                	jns    81c1e5e <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x84>
 81c1e2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1e2d:	89 04 24             	mov    %eax,(%esp)
 81c1e30:	e8 39 85 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c1e35:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81c1e38:	8b 52 04             	mov    0x4(%edx),%edx
 81c1e3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c1e3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c1e43:	c7 44 24 04 c0 5e bd 	movl   $0x8bd5ec0,0x4(%esp)
 81c1e4a:	08 
 81c1e4b:	c7 04 24 8e 0b 00 00 	movl   $0xb8e,(%esp)
 81c1e52:	e8 80 ea 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1e57:	89 c3                	mov    %eax,%ebx
 81c1e59:	e9 28 09 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c1e5e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1e61:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c1e65:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1e68:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c1e6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1e6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1e73:	8b 45 08             	mov    0x8(%ebp),%eax
 81c1e76:	89 04 24             	mov    %eax,(%esp)
 81c1e79:	e8 58 fc ff ff       	call   81c1ad6 <_ZN21DisPatcher_DeleteItem13exercise_modeEP5CUserR8MSG_BASER9ParamBase>
 81c1e7e:	88 45 cb             	mov    %al,-0x35(%ebp)
 81c1e81:	80 7d cb 00          	cmpb   $0x0,-0x35(%ebp)
 81c1e85:	74 0a                	je     81c1e91 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0xb7>
 81c1e87:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1e8c:	e9 f5 08 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c1e91:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1e94:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81c1e97:	c7 45 b0 06 00 00 00 	movl   $0x6,-0x50(%ebp)
 81c1e9e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1ea1:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c1ea5:	0f be c0             	movsbl %al,%eax
 81c1ea8:	83 f8 01             	cmp    $0x1,%eax
 81c1eab:	74 07                	je     81c1eb4 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0xda>
 81c1ead:	83 f8 03             	cmp    $0x3,%eax
 81c1eb0:	74 0b                	je     81c1ebd <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0xe3>
 81c1eb2:	eb 10                	jmp    81c1ec4 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0xea>
 81c1eb4:	c7 45 b0 02 00 00 00 	movl   $0x2,-0x50(%ebp)
 81c1ebb:	eb 07                	jmp    81c1ec4 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0xea>
 81c1ebd:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 81c1ec4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81c1ec7:	83 f8 02             	cmp    $0x2,%eax
 81c1eca:	75 21                	jne    81c1eed <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x113>
 81c1ecc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1ecf:	c7 40 04 17 00 00 00 	movl   $0x17,0x4(%eax)
 81c1ed6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1ed9:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c1edd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1ee0:	88 50 08             	mov    %dl,0x8(%eax)
 81c1ee3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1ee8:	e9 99 08 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c1eed:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 81c1ef1:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81c1ef8:	eb 1b                	jmp    81c1f15 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x13b>
 81c1efa:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81c1efd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1f00:	0f b7 44 50 0f       	movzwl 0xf(%eax,%edx,2),%eax
 81c1f05:	66 83 f8 01          	cmp    $0x1,%ax
 81c1f09:	7f 06                	jg     81c1f11 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x137>
 81c1f0b:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 81c1f0f:	eb 18                	jmp    81c1f29 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x14f>
 81c1f11:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 81c1f15:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1f18:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c1f1c:	0f be c0             	movsbl %al,%eax
 81c1f1f:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81c1f22:	0f 9f c0             	setg   %al
 81c1f25:	84 c0                	test   %al,%al
 81c1f27:	75 d1                	jne    81c1efa <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x120>
 81c1f29:	80 7d d3 00          	cmpb   $0x0,-0x2d(%ebp)
 81c1f2d:	74 42                	je     81c1f71 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x197>
 81c1f2f:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1f32:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c1f36:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1f39:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1f3d:	8b 45 08             	mov    0x8(%ebp),%eax
 81c1f40:	89 04 24             	mov    %eax,(%esp)
 81c1f43:	e8 ae fd ff ff       	call   81c1cf6 <_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE>
 81c1f48:	89 c2                	mov    %eax,%edx
 81c1f4a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1f4d:	89 50 04             	mov    %edx,0x4(%eax)
 81c1f50:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1f53:	8b 40 04             	mov    0x4(%eax),%eax
 81c1f56:	85 c0                	test   %eax,%eax
 81c1f58:	74 17                	je     81c1f71 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x197>
 81c1f5a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1f5d:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c1f61:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1f64:	88 50 08             	mov    %dl,0x8(%eax)
 81c1f67:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1f6c:	e9 15 08 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c1f71:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81c1f78:	e9 62 07 00 00       	jmp    81c26df <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x905>
 81c1f7d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c1f80:	89 44 24 10          	mov    %eax,0x10(%esp)
 81c1f84:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81c1f87:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c1f8b:	8b 45 10             	mov    0x10(%ebp),%eax
 81c1f8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c1f92:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1f99:	8b 45 08             	mov    0x8(%ebp),%eax
 81c1f9c:	89 04 24             	mov    %eax,(%esp)
 81c1f9f:	e8 b8 fd ff ff       	call   81c1d5c <_ZN21DisPatcher_DeleteItem15condition_checkEP5CUserR8MSG_BASER10INVEN_TYPEi>
 81c1fa4:	89 c2                	mov    %eax,%edx
 81c1fa6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1fa9:	89 50 04             	mov    %edx,0x4(%eax)
 81c1fac:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1faf:	8b 40 04             	mov    0x4(%eax),%eax
 81c1fb2:	85 c0                	test   %eax,%eax
 81c1fb4:	74 17                	je     81c1fcd <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c1fb6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1fb9:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c1fbd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c1fc0:	88 50 08             	mov    %dl,0x8(%eax)
 81c1fc3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c1fc8:	e9 b9 07 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c1fcd:	c7 45 dc 03 00 00 00 	movl   $0x3,-0x24(%ebp)
 81c1fd4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c1fd7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c1fda:	0f b7 44 50 0f       	movzwl 0xf(%eax,%edx,2),%eax
 81c1fdf:	66 83 f8 01          	cmp    $0x1,%ax
 81c1fe3:	75 23                	jne    81c2008 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x22e>
 81c1fe5:	c7 45 dc 05 00 00 00 	movl   $0x5,-0x24(%ebp)
 81c1fec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1fef:	89 04 24             	mov    %eax,(%esp)
 81c1ff2:	e8 95 83 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c1ff7:	83 f8 03             	cmp    $0x3,%eax
 81c1ffa:	0f 95 c0             	setne  %al
 81c1ffd:	84 c0                	test   %al,%al
 81c1fff:	74 07                	je     81c2008 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x22e>
 81c2001:	c7 45 dc 06 00 00 00 	movl   $0x6,-0x24(%ebp)
 81c2008:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c200b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c200e:	83 c2 68             	add    $0x68,%edx
 81c2011:	0f b7 44 50 07       	movzwl 0x7(%eax,%edx,2),%eax
 81c2016:	0f bf f0             	movswl %ax,%esi
 81c2019:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c201c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c2020:	0f be c0             	movsbl %al,%eax
 81c2023:	89 04 24             	mov    %eax,(%esp)
 81c2026:	e8 1a 58 f3 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81c202b:	89 c3                	mov    %eax,%ebx
 81c202d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2030:	89 04 24             	mov    %eax,(%esp)
 81c2033:	e8 46 82 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c2038:	8d 95 57 ff ff ff    	lea    -0xa9(%ebp),%edx
 81c203e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c2042:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c2046:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c204a:	89 14 24             	mov    %edx,(%esp)
 81c204d:	e8 c6 98 33 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81c2052:	83 ec 04             	sub    $0x4,%esp
 81c2055:	8b 85 57 ff ff ff    	mov    -0xa9(%ebp),%eax
 81c205b:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 81c2061:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 81c2067:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 81c206d:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 81c2073:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 81c2079:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 81c207f:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 81c2085:	8b 85 67 ff ff ff    	mov    -0x99(%ebp),%eax
 81c208b:	89 85 2a ff ff ff    	mov    %eax,-0xd6(%ebp)
 81c2091:	8b 85 6b ff ff ff    	mov    -0x95(%ebp),%eax
 81c2097:	89 85 2e ff ff ff    	mov    %eax,-0xd2(%ebp)
 81c209d:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 81c20a3:	89 85 32 ff ff ff    	mov    %eax,-0xce(%ebp)
 81c20a9:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 81c20af:	89 85 36 ff ff ff    	mov    %eax,-0xca(%ebp)
 81c20b5:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 81c20bb:	89 85 3a ff ff ff    	mov    %eax,-0xc6(%ebp)
 81c20c1:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 81c20c7:	89 85 3e ff ff ff    	mov    %eax,-0xc2(%ebp)
 81c20cd:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 81c20d3:	89 85 42 ff ff ff    	mov    %eax,-0xbe(%ebp)
 81c20d9:	8b 45 83             	mov    -0x7d(%ebp),%eax
 81c20dc:	89 85 46 ff ff ff    	mov    %eax,-0xba(%ebp)
 81c20e2:	8b 45 87             	mov    -0x79(%ebp),%eax
 81c20e5:	89 85 4a ff ff ff    	mov    %eax,-0xb6(%ebp)
 81c20eb:	8b 45 8b             	mov    -0x75(%ebp),%eax
 81c20ee:	89 85 4e ff ff ff    	mov    %eax,-0xb2(%ebp)
 81c20f4:	8b 45 8f             	mov    -0x71(%ebp),%eax
 81c20f7:	89 85 52 ff ff ff    	mov    %eax,-0xae(%ebp)
 81c20fd:	0f b6 45 93          	movzbl -0x6d(%ebp),%eax
 81c2101:	88 85 56 ff ff ff    	mov    %al,-0xaa(%ebp)
 81c2107:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 81c210b:	75 15                	jne    81c2122 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x348>
 81c210d:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 81c2113:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2117:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c211a:	89 04 24             	mov    %eax,(%esp)
 81c211d:	e8 fe 4a f8 ff       	call   8146c20 <_ZN6Global14CBossTowerFunc7UseItemEP5CUserRK10Inven_Item>
 81c2122:	8b 85 59 ff ff ff    	mov    -0xa7(%ebp),%eax
 81c2128:	3d dd 0b 00 00       	cmp    $0xbdd,%eax
 81c212d:	75 32                	jne    81c2161 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x387>
 81c212f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c2132:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2135:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c213b:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c213f:	89 c3                	mov    %eax,%ebx
 81c2141:	e8 88 a8 f5 ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 81c2146:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c214a:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81c2151:	00 
 81c2152:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c2155:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c2159:	89 04 24             	mov    %eax,(%esp)
 81c215c:	e8 5d 51 fa ff       	call   81672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>
 81c2161:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2164:	89 04 24             	mov    %eax,(%esp)
 81c2167:	e8 20 82 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c216c:	83 f8 03             	cmp    $0x3,%eax
 81c216f:	75 1e                	jne    81c218f <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x3b5>
 81c2171:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 81c2175:	75 18                	jne    81c218f <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x3b5>
 81c2177:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c217a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c217d:	83 c2 64             	add    $0x64,%edx
 81c2180:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c2184:	85 c0                	test   %eax,%eax
 81c2186:	75 07                	jne    81c218f <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x3b5>
 81c2188:	b8 01 00 00 00       	mov    $0x1,%eax
 81c218d:	eb 05                	jmp    81c2194 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x3ba>
 81c218f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2194:	84 c0                	test   %al,%al
 81c2196:	74 38                	je     81c21d0 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x3f6>
 81c2198:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81c219d:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 81c21a4:	00 
 81c21a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c21a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c21ac:	89 04 24             	mov    %eax,(%esp)
 81c21af:	e8 4e 68 0c 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81c21b4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c21b7:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c21bb:	74 13                	je     81c21d0 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x3f6>
 81c21bd:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c21c0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c21c3:	89 50 04             	mov    %edx,0x4(%eax)
 81c21c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c21cb:	e9 b6 05 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c21d0:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81c21d7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c21da:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c21dd:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c21e3:	8b 5c 90 0f          	mov    0xf(%eax,%edx,4),%ebx
 81c21e7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c21ea:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c21ed:	83 c2 64             	add    $0x64,%edx
 81c21f0:	8b 4c 90 0f          	mov    0xf(%eax,%edx,4),%ecx
 81c21f4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c21f7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c21fa:	83 c2 68             	add    $0x68,%edx
 81c21fd:	0f b7 44 50 07       	movzwl 0x7(%eax,%edx,2),%eax
 81c2202:	0f bf d0             	movswl %ax,%edx
 81c2205:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2208:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c220c:	0f be c0             	movsbl %al,%eax
 81c220f:	8b 75 dc             	mov    -0x24(%ebp),%esi
 81c2212:	89 74 24 14          	mov    %esi,0x14(%esp)
 81c2216:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c221a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81c221e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c2222:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2226:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2229:	89 04 24             	mov    %eax,(%esp)
 81c222c:	e8 2b 06 4a 00       	call   866285c <_ZN5CUser11delete_itemEcimi14eItemDelReason>
 81c2231:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c2234:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81c2238:	0f 8e 5c 02 00 00    	jle    81c249a <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x6c0>
 81c223e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2241:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c2245:	0f be d8             	movsbl %al,%ebx
 81c2248:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81c224f:	00 
 81c2250:	c7 44 24 08 2a 0c 00 	movl   $0xc2a,0x8(%esp)
 81c2257:	00 
 81c2258:	c7 44 24 04 c0 5e bd 	movl   $0x8bd5ec0,0x4(%esp)
 81c225f:	08 
 81c2260:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81c2263:	89 04 24             	mov    %eax,(%esp)
 81c2266:	e8 ad d4 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c226b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c226f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c2272:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c2276:	c7 44 24 04 8c 15 bc 	movl   $0x8bc158c,0x4(%esp)
 81c227d:	08 
 81c227e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81c2281:	89 04 24             	mov    %eax,(%esp)
 81c2284:	e8 ff d4 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c2289:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c228c:	89 04 24             	mov    %eax,(%esp)
 81c228f:	e8 b8 ba 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c2294:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 81c2298:	0f 8e 26 01 00 00    	jle    81c23c4 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x5ea>
 81c229e:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c22a1:	89 04 24             	mov    %eax,(%esp)
 81c22a4:	e8 a3 ba 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c22a9:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81c22b0:	00 
 81c22b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c22b8:	00 
 81c22b9:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c22bc:	89 04 24             	mov    %eax,(%esp)
 81c22bf:	e8 38 96 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c22c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c22cb:	00 
 81c22cc:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c22cf:	89 04 24             	mov    %eax,(%esp)
 81c22d2:	e8 49 96 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c22d7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c22da:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c22de:	0f be c0             	movsbl %al,%eax
 81c22e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c22e5:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c22e8:	89 04 24             	mov    %eax,(%esp)
 81c22eb:	e8 30 96 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c22f0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c22f3:	83 e8 01             	sub    $0x1,%eax
 81c22f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c22fa:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c22fd:	89 04 24             	mov    %eax,(%esp)
 81c2300:	e8 1b 96 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c2305:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81c230c:	eb 5c                	jmp    81c236a <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x590>
 81c230e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81c2311:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2314:	83 c2 68             	add    $0x68,%edx
 81c2317:	0f b7 44 50 07       	movzwl 0x7(%eax,%edx,2),%eax
 81c231c:	98                   	cwtl
 81c231d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2321:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c2324:	89 04 24             	mov    %eax,(%esp)
 81c2327:	e8 78 7b f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c232c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81c232f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2332:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c2338:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c233c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2340:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c2343:	89 04 24             	mov    %eax,(%esp)
 81c2346:	e8 f1 95 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c234b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81c234e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2351:	0f b7 44 50 0f       	movzwl 0xf(%eax,%edx,2),%eax
 81c2356:	98                   	cwtl
 81c2357:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c235b:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c235e:	89 04 24             	mov    %eax,(%esp)
 81c2361:	e8 3e 7b f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c2366:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 81c236a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c236d:	83 e8 01             	sub    $0x1,%eax
 81c2370:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81c2373:	0f 9f c0             	setg   %al
 81c2376:	84 c0                	test   %al,%al
 81c2378:	75 94                	jne    81c230e <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x534>
 81c237a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c2381:	00 
 81c2382:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c2385:	89 04 24             	mov    %eax,(%esp)
 81c2388:	e8 cb 95 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c238d:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c2390:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2394:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2397:	89 04 24             	mov    %eax,(%esp)
 81c239a:	e8 1b 62 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c239f:	eb 18                	jmp    81c23b9 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x5df>
 81c23a1:	89 d3                	mov    %edx,%ebx
 81c23a3:	89 c6                	mov    %eax,%esi
 81c23a5:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c23a8:	89 04 24             	mov    %eax,(%esp)
 81c23ab:	e8 d0 ba 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c23b0:	89 f0                	mov    %esi,%eax
 81c23b2:	89 da                	mov    %ebx,%edx
 81c23b4:	e9 c6 00 00 00       	jmp    81c247f <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x6a5>
 81c23b9:	8d 45 98             	lea    -0x68(%ebp),%eax
 81c23bc:	89 04 24             	mov    %eax,(%esp)
 81c23bf:	e8 bc ba 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c23c4:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81c23cb:	00 
 81c23cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c23d3:	00 
 81c23d4:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c23d7:	89 04 24             	mov    %eax,(%esp)
 81c23da:	e8 1d 95 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c23df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c23e6:	00 
 81c23e7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c23ea:	89 04 24             	mov    %eax,(%esp)
 81c23ed:	e8 2e 95 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c23f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c23f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c23f9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c23fc:	89 04 24             	mov    %eax,(%esp)
 81c23ff:	e8 1c 95 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c2404:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2407:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c240b:	0f be c0             	movsbl %al,%eax
 81c240e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2412:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c2415:	89 04 24             	mov    %eax,(%esp)
 81c2418:	e8 03 95 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c241d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c2424:	00 
 81c2425:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c2428:	89 04 24             	mov    %eax,(%esp)
 81c242b:	e8 28 95 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c2430:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c2433:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2437:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c243a:	89 04 24             	mov    %eax,(%esp)
 81c243d:	e8 78 61 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c2442:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2445:	89 04 24             	mov    %eax,(%esp)
 81c2448:	e8 21 7f f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c244d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c2451:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2458:	00 
 81c2459:	c7 44 24 04 c0 5e bd 	movl   $0x8bd5ec0,0x4(%esp)
 81c2460:	08 
 81c2461:	c7 04 24 48 0c 00 00 	movl   $0xc48,(%esp)
 81c2468:	e8 6a e4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c246d:	89 c3                	mov    %eax,%ebx
 81c246f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c2472:	89 04 24             	mov    %eax,(%esp)
 81c2475:	e8 06 ba 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c247a:	e9 07 03 00 00       	jmp    81c2786 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x9ac>
 81c247f:	89 d3                	mov    %edx,%ebx
 81c2481:	89 c6                	mov    %eax,%esi
 81c2483:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81c2486:	89 04 24             	mov    %eax,(%esp)
 81c2489:	e8 f2 b9 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c248e:	89 f0                	mov    %esi,%eax
 81c2490:	89 da                	mov    %ebx,%edx
 81c2492:	89 04 24             	mov    %eax,(%esp)
 81c2495:	e8 b6 12 92 00       	call   8ae3750 <_Unwind_Resume>
 81c249a:	8d 85 1a ff ff ff    	lea    -0xe6(%ebp),%eax
 81c24a0:	89 04 24             	mov    %eax,(%esp)
 81c24a3:	e8 be c8 f5 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 81c24a8:	83 f0 01             	xor    $0x1,%eax
 81c24ab:	84 c0                	test   %al,%al
 81c24ad:	74 0d                	je     81c24bc <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x6e2>
 81c24af:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 81c24b3:	75 07                	jne    81c24bc <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x6e2>
 81c24b5:	b8 01 00 00 00       	mov    $0x1,%eax
 81c24ba:	eb 05                	jmp    81c24c1 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x6e7>
 81c24bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81c24c1:	84 c0                	test   %al,%al
 81c24c3:	74 6c                	je     81c2531 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x757>
 81c24c5:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 81c24cb:	89 c3                	mov    %eax,%ebx
 81c24cd:	e8 c9 9c f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c24d2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c24d6:	89 04 24             	mov    %eax,(%esp)
 81c24d9:	e8 54 d5 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81c24de:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c24e1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c24e5:	74 4a                	je     81c2531 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x757>
 81c24e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c24ea:	89 04 24             	mov    %eax,(%esp)
 81c24ed:	e8 08 ee f2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81c24f2:	84 c0                	test   %al,%al
 81c24f4:	74 16                	je     81c250c <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x732>
 81c24f6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c24f9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c24fc:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c2502:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c2506:	89 85 21 ff ff ff    	mov    %eax,-0xdf(%ebp)
 81c250c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2513:	00 
 81c2514:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c251b:	00 
 81c251c:	8d 85 1a ff ff ff    	lea    -0xe6(%ebp),%eax
 81c2522:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2526:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2529:	89 04 24             	mov    %eax,(%esp)
 81c252c:	e8 8f 4d 48 00       	call   86472c0 <_ZN5CUser14Add_RedeemInfoERK10Inven_Itemib>
 81c2531:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c2534:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2537:	83 c2 64             	add    $0x64,%edx
 81c253a:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c253e:	89 c3                	mov    %eax,%ebx
 81c2540:	e8 56 9c f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c2545:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c2549:	89 04 24             	mov    %eax,(%esp)
 81c254c:	e8 e1 d4 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81c2551:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c2554:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81c2558:	0f 84 7d 01 00 00    	je     81c26db <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x901>
 81c255e:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 81c2565:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c2568:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c256b:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c2571:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c2575:	0f bf d8             	movswl %ax,%ebx
 81c2578:	e8 60 f5 f8 ff       	call   8151add <_Z7G_Storev>
 81c257d:	8d 55 94             	lea    -0x6c(%ebp),%edx
 81c2580:	89 54 24 14          	mov    %edx,0x14(%esp)
 81c2584:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c258b:	00 
 81c258c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c2590:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c2593:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c2597:	8d 95 57 ff ff ff    	lea    -0xa9(%ebp),%edx
 81c259d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c25a1:	89 04 24             	mov    %eax,(%esp)
 81c25a4:	e8 f7 68 45 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 81c25a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c25ac:	89 04 24             	mov    %eax,(%esp)
 81c25af:	e8 d8 7d f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c25b4:	83 f8 08             	cmp    $0x8,%eax
 81c25b7:	0f 95 c0             	setne  %al
 81c25ba:	84 c0                	test   %al,%al
 81c25bc:	74 25                	je     81c25e3 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x809>
 81c25be:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81c25c1:	89 c3                	mov    %eax,%ebx
 81c25c3:	e8 27 b0 44 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 81c25c8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c25cc:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c25cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c25d3:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 81c25da:	00 
 81c25db:	89 04 24             	mov    %eax,(%esp)
 81c25de:	e8 9f b0 44 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 81c25e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c25e6:	89 04 24             	mov    %eax,(%esp)
 81c25e9:	e8 9e 7d f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c25ee:	83 f8 05             	cmp    $0x5,%eax
 81c25f1:	0f 94 c0             	sete   %al
 81c25f4:	84 c0                	test   %al,%al
 81c25f6:	0f 84 df 00 00 00    	je     81c26db <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x901>
 81c25fc:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c25ff:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2602:	0f b7 44 50 0f       	movzwl 0xf(%eax,%edx,2),%eax
 81c2607:	66 83 f8 02          	cmp    $0x2,%ax
 81c260b:	75 3c                	jne    81c2649 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x86f>
 81c260d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c2610:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2613:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c2619:	8b 5c 90 0f          	mov    0xf(%eax,%edx,4),%ebx
 81c261d:	e8 2e b8 44 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 81c2622:	c7 44 24 10 67 00 00 	movl   $0x67,0x10(%esp)
 81c2629:	00 
 81c262a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c262d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c2631:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c2635:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c2638:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c263c:	89 04 24             	mov    %eax,(%esp)
 81c263f:	e8 36 ba 44 00       	call   860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>
 81c2644:	e9 92 00 00 00       	jmp    81c26db <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x901>
 81c2649:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c264c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c264f:	0f b7 44 50 0f       	movzwl 0xf(%eax,%edx,2),%eax
 81c2654:	66 83 f8 03          	cmp    $0x3,%ax
 81c2658:	75 39                	jne    81c2693 <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x8b9>
 81c265a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c265d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2660:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c2666:	8b 5c 90 0f          	mov    0xf(%eax,%edx,4),%ebx
 81c266a:	e8 e1 b7 44 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 81c266f:	c7 44 24 10 68 00 00 	movl   $0x68,0x10(%esp)
 81c2676:	00 
 81c2677:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c267a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c267e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c2682:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c2685:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c2689:	89 04 24             	mov    %eax,(%esp)
 81c268c:	e8 e9 b9 44 00       	call   860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>
 81c2691:	eb 48                	jmp    81c26db <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x901>
 81c2693:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c2696:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2699:	0f b7 44 50 0f       	movzwl 0xf(%eax,%edx,2),%eax
 81c269e:	66 83 f8 04          	cmp    $0x4,%ax
 81c26a2:	75 37                	jne    81c26db <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x901>
 81c26a4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c26a7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c26aa:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c26b0:	8b 5c 90 0f          	mov    0xf(%eax,%edx,4),%ebx
 81c26b4:	e8 97 b7 44 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 81c26b9:	c7 44 24 10 69 00 00 	movl   $0x69,0x10(%esp)
 81c26c0:	00 
 81c26c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c26c4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c26c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c26cc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c26cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c26d3:	89 04 24             	mov    %eax,(%esp)
 81c26d6:	e8 9f b9 44 00       	call   860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>
 81c26db:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 81c26df:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c26e2:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c26e6:	0f be c0             	movsbl %al,%eax
 81c26e9:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81c26ec:	0f 9f c0             	setg   %al
 81c26ef:	84 c0                	test   %al,%al
 81c26f1:	0f 85 86 f8 ff ff    	jne    81c1f7d <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x1a3>
 81c26f7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c26fa:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c26fe:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c2701:	88 50 08             	mov    %dl,0x8(%eax)
 81c2704:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2707:	0f b6 50 0e          	movzbl 0xe(%eax),%edx
 81c270b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c270e:	88 50 09             	mov    %dl,0x9(%eax)
 81c2711:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c2718:	eb 53                	jmp    81c276d <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x993>
 81c271a:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81c271d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c2720:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2723:	83 c2 68             	add    $0x68,%edx
 81c2726:	0f b7 54 50 07       	movzwl 0x7(%eax,%edx,2),%edx
 81c272b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c272e:	83 c1 68             	add    $0x68,%ecx
 81c2731:	66 89 54 48 02       	mov    %dx,0x2(%eax,%ecx,2)
 81c2736:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81c2739:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c273c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c273f:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c2745:	8b 54 90 0f          	mov    0xf(%eax,%edx,4),%edx
 81c2749:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c274c:	83 c1 64             	add    $0x64,%ecx
 81c274f:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 81c2753:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c2756:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81c2759:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c275c:	0f b7 4c 48 0f       	movzwl 0xf(%eax,%ecx,2),%ecx
 81c2761:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c2764:	66 89 4c 50 0a       	mov    %cx,0xa(%eax,%edx,2)
 81c2769:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c276d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2770:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c2774:	0f be c0             	movsbl %al,%eax
 81c2777:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81c277a:	0f 9f c0             	setg   %al
 81c277d:	84 c0                	test   %al,%al
 81c277f:	75 99                	jne    81c271a <_ZN21DisPatcher_DeleteItem7processEP5CUserR8MSG_BASER9ParamBase+0x940>
 81c2781:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c2786:	89 d8                	mov    %ebx,%eax
 81c2788:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81c278b:	83 c4 00             	add    $0x0,%esp
 81c278e:	5b                   	pop    %ebx
 81c278f:	5e                   	pop    %esi
 81c2790:	5d                   	pop    %ebp
 81c2791:	c3                   	ret

```

```c
// DisPatcher_DeleteItem::process @ 0x81c1dda

/* DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DeleteItem::process
          (DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  HeroMissionEvent *pHVar8;
  CDataManager *pCVar9;
  Store *this_00;
  CValueStatistic *pCVar10;
  CCubeStatistic *pCVar11;
  Inven_Item local_ea [2];
  undefined2 uStack_e8;
  undefined2 local_e6;
  undefined1 uStack_e4;
  undefined4 uStack_e3;
  undefined1 uStack_df;
  undefined4 local_de;
  undefined4 local_da;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined1 local_ae;
  Inven_Item local_ad [2];
  undefined2 uStack_ab;
  undefined2 local_a9;
  undefined2 uStack_a7;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined1 local_71;
  int local_70;
  PacketGuard local_6c [12];
  PacketGuard local_60 [12];
  int local_54;
  cMyTrace local_50 [16];
  ParamBase *local_40;
  char local_39;
  MSG_BASE *local_38;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CItem *local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  local_40 = param_3;
  uVar4 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_40 + 4) = uVar4;
  if (*(int *)(local_40 + 4) < 1) {
    if (*(int *)(local_40 + 4) < 0) {
      uVar5 = CUser::get_acc_id(param_1);
      uVar4 = LineFunc(0xb8e,
                       "virtual int DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_40 + 4),uVar5);
    }
    else {
      local_39 = exercise_mode(this,param_1,param_2,local_40);
      if (local_39 == '\0') {
        local_38 = param_2;
        local_54 = 6;
        if (param_2[0xd] == (MSG_BASE)0x1) {
          local_54 = 2;
        }
        else if (param_2[0xd] == (MSG_BASE)0x3) {
          local_54 = 0;
        }
        if (local_54 == 2) {
          *(undefined4 *)(local_40 + 4) = 0x17;
          *(MSG_BASE *)(local_40 + 8) = param_2[0xd];
          uVar4 = 0;
        }
        else {
          local_31 = '\0';
          for (local_30 = 0; local_30 < (char)param_2[0xe]; local_30 = local_30 + 1) {
            if (*(short *)(param_2 + local_30 * 2 + 0xf) < 2) {
              local_31 = '\x01';
              break;
            }
          }
          if (local_31 != '\0') {
            uVar4 = restricted_check((CUser *)this,(MSG_BASE *)param_1);
            *(undefined4 *)(local_40 + 4) = uVar4;
            if (*(int *)(local_40 + 4) != 0) {
              *(MSG_BASE *)(local_40 + 8) = local_38[0xd];
              return 0;
            }
          }
          for (local_2c = 0; local_2c < (char)local_38[0xe]; local_2c = local_2c + 1) {
            uVar4 = condition_check(this,param_1,param_2,(INVEN_TYPE *)&local_54,local_2c);
            *(undefined4 *)(local_40 + 4) = uVar4;
            if (*(int *)(local_40 + 4) != 0) {
              *(MSG_BASE *)(local_40 + 8) = local_38[0xd];
              return 0;
            }
            local_28 = 3;
            if (*(short *)(local_38 + local_2c * 2 + 0xf) == 1) {
              local_28 = 5;
              iVar6 = CUser::get_state(param_1);
              if (iVar6 != 3) {
                local_28 = 6;
              }
            }
            iVar6 = (int)*(short *)(local_38 + (local_2c + 0x68) * 2 + 7);
            GetInvenTypeFromItemSpace((int)(char)local_38[0xd]);
            iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)local_ad,iVar7);
            uStack_e8 = uStack_ab;
            local_e6 = local_a9;
            uStack_e4 = (undefined1)uStack_a7;
            uStack_e3._0_1_ = (undefined1)((ushort)uStack_a7 >> 8);
            uStack_e3._1_3_ = (undefined3)local_a5;
            uStack_df = (undefined1)((uint)local_a5 >> 0x18);
            local_de = local_a1;
            local_da = local_9d;
            local_d6 = local_99;
            local_d2 = local_95;
            local_ce = local_91;
            local_ca = local_8d;
            local_c6 = local_89;
            local_c2 = local_85;
            local_be = local_81;
            local_ba = local_7d;
            local_b6 = local_79;
            local_b2 = local_75;
            local_ae = local_71;
            if (local_28 == 3) {
              Global::CBossTowerFunc::UseItem(param_1,local_ad);
            }
            if (CONCAT22(local_a9,uStack_ab) == 0xbdd) {
              iVar6 = *(int *)(local_38 + (local_2c + 200) * 4 + 0xf);
              pHVar8 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
              HeroMissionEvent::processMission(pHVar8,param_1,3,iVar6);
            }
            iVar7 = CUser::get_state(param_1);
            if (((iVar7 == 3) && (local_28 == 5)) &&
               (*(int *)(local_38 + (local_2c + 100) * 4 + 0xf) == 0)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((bVar2) &&
               (local_1c = CSecu_ProtectionField::Check
                                     (GlobalData::s_pSecuProtectionField,param_1,0x46,iVar6),
               local_1c != 0)) {
              *(int *)(local_40 + 4) = local_1c;
              return 0;
            }
            local_24 = 0;
            local_24 = CUser::delete_item(param_1,(int)(char)local_38[0xd],
                                          (int)*(short *)(local_38 + (local_2c + 0x68) * 2 + 7),
                                          *(undefined4 *)(local_38 + (local_2c + 100) * 4 + 0xf),
                                          *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf),
                                          local_28);
            if (0 < local_24) {
              MVar1 = local_38[0xe];
              cMyTrace::cMyTrace(local_50,
                                 "virtual int DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)"
                                 ,0xc2a,5);
              cMyTrace::operator()
                        (local_50,"delete_item failed in the middle of deleting items. %d/%d",
                         local_2c,(int)(char)MVar1);
              PacketGuard::PacketGuard(local_60);
              if (1 < local_2c) {
                    /* try { // try from 081c22a4 to 081c22a8 has its CatchHandler @ 081c247f */
                PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 081c22bf to 081c239e has its CatchHandler @ 081c23a1 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x12);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,1);
                InterfacePacketBuf::put_byte
                          ((InterfacePacketBuf *)local_6c,(int)(char)local_38[0xd]);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,local_2c + -1);
                for (local_18 = 0; local_18 < local_2c + -1; local_18 = local_18 + 1) {
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_6c,
                             (int)*(short *)(local_38 + (local_18 + 0x68) * 2 + 7));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_6c,
                             *(int *)(local_38 + (local_18 + 200) * 4 + 0xf));
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_6c,
                             (int)*(short *)(local_38 + local_18 * 2 + 0xf));
                }
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
                CUser::Send(param_1,local_6c);
                    /* try { // try from 081c23bf to 081c246c has its CatchHandler @ 081c247f */
                PacketGuard::~PacketGuard(local_6c);
              }
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x12);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,local_24);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)(char)local_38[0xd]);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
              CUser::Send(param_1,local_60);
              uVar5 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0xc48,
                               "virtual int DisPatcher_DeleteItem::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar5);
              PacketGuard::~PacketGuard(local_60);
              return uVar4;
            }
            cVar3 = Inven_Item::isEmpty(local_ea);
            if ((cVar3 == '\x01') || (local_28 != 5)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              pCVar9 = (CDataManager *)G_CDataManager();
              local_14 = (CItem *)CDataManager::find_item(pCVar9,CONCAT22(local_e6,uStack_e8));
              if (local_14 != (CItem *)0x0) {
                cVar3 = CItem::is_stackable(local_14);
                if (cVar3 != '\0') {
                  uStack_e3 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                }
                CUser::Add_RedeemInfo(param_1,local_ea,0,false);
              }
            }
            iVar6 = *(int *)(local_38 + (local_2c + 100) * 4 + 0xf);
            pCVar9 = (CDataManager *)G_CDataManager();
            local_20 = (CItem *)CDataManager::find_item(pCVar9,iVar6);
            if (local_20 != (CItem *)0x0) {
              local_70 = 0;
              uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
              this_00 = (Store *)G_Store();
              Store::GetSellItemPrice(this_00,local_ad,local_20,(short)uVar4,false,&local_70);
              iVar7 = CUser::get_state(param_1);
              iVar6 = local_70;
              if (iVar7 != 8) {
                pCVar10 = (CValueStatistic *)GetInstanceValueStatistic();
                CValueStatistic::AddValueStatistic(pCVar10,0x16,param_1,iVar6);
              }
              iVar6 = CUser::get_state(param_1);
              if (iVar6 == 5) {
                if (*(short *)(local_38 + local_2c * 2 + 0xf) == 2) {
                  uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                  pCVar11 = (CCubeStatistic *)GetInstanceCubeStatistic();
                  CCubeStatistic::collectCubeStatistics(pCVar11,local_20,uVar4,param_1,0x67);
                }
                else if (*(short *)(local_38 + local_2c * 2 + 0xf) == 3) {
                  uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                  pCVar11 = (CCubeStatistic *)GetInstanceCubeStatistic();
                  CCubeStatistic::collectCubeStatistics(pCVar11,local_20,uVar4,param_1,0x68);
                }
                else if (*(short *)(local_38 + local_2c * 2 + 0xf) == 4) {
                  uVar4 = *(undefined4 *)(local_38 + (local_2c + 200) * 4 + 0xf);
                  pCVar11 = (CCubeStatistic *)GetInstanceCubeStatistic();
                  CCubeStatistic::collectCubeStatistics(pCVar11,local_20,uVar4,param_1,0x69);
                }
              }
            }
          }
          *(MSG_BASE *)(local_40 + 8) = local_38[0xd];
          *(MSG_BASE *)(local_40 + 9) = local_38[0xe];
          for (local_10 = 0; local_10 < (char)local_38[0xe]; local_10 = local_10 + 1) {
            *(undefined2 *)(local_40 + (local_10 + 0x68) * 2 + 2) =
                 *(undefined2 *)(local_38 + (local_10 + 0x68) * 2 + 7);
            *(undefined4 *)(local_40 + (local_10 + 100) * 4 + 0xc) =
                 *(undefined4 *)(local_38 + (local_10 + 200) * 4 + 0xf);
            *(undefined2 *)(local_40 + local_10 * 2 + 10) =
                 *(undefined2 *)(local_38 + local_10 * 2 + 0xf);
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## read

```asm
// === 081c17c0 DisPatcher_DeleteItem::read  [0x081c17c0-0x81c1a6b] ===
 81c17c0:	55                   	push   %ebp
 81c17c1:	89 e5                	mov    %esp,%ebp
 81c17c3:	83 ec 28             	sub    $0x28,%esp
 81c17c6:	8b 45 10             	mov    0x10(%ebp),%eax
 81c17c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c17cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c17cf:	83 c0 0d             	add    $0xd,%eax
 81c17d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c17d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c17d9:	89 04 24             	mov    %eax,(%esp)
 81c17dc:	e8 41 b7 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c17e1:	83 f0 01             	xor    $0x1,%eax
 81c17e4:	84 c0                	test   %al,%al
 81c17e6:	74 29                	je     81c1811 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x51>
 81c17e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c17ef:	00 
 81c17f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c17f7:	00 
 81c17f8:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c17ff:	08 
 81c1800:	c7 04 24 e6 0a 00 00 	movl   $0xae6,(%esp)
 81c1807:	e8 cb f0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c180c:	e9 59 02 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c1811:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c1814:	83 c0 0e             	add    $0xe,%eax
 81c1817:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c181b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c181e:	89 04 24             	mov    %eax,(%esp)
 81c1821:	e8 fc b6 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c1826:	83 f0 01             	xor    $0x1,%eax
 81c1829:	84 c0                	test   %al,%al
 81c182b:	74 29                	je     81c1856 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x96>
 81c182d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c1834:	00 
 81c1835:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c183c:	00 
 81c183d:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c1844:	08 
 81c1845:	c7 04 24 e7 0a 00 00 	movl   $0xae7,(%esp)
 81c184c:	e8 86 f0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1851:	e9 14 02 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c1856:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c1859:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c185d:	3c 64                	cmp    $0x64,%al
 81c185f:	7e 29                	jle    81c188a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0xca>
 81c1861:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c1868:	00 
 81c1869:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1870:	00 
 81c1871:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c1878:	08 
 81c1879:	c7 04 24 eb 0a 00 00 	movl   $0xaeb,(%esp)
 81c1880:	e8 52 f0 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1885:	e9 e0 01 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c188a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c1891:	e9 73 01 00 00       	jmp    81c1a09 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x249>
 81c1896:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1899:	01 c0                	add    %eax,%eax
 81c189b:	03 45 f0             	add    -0x10(%ebp),%eax
 81c189e:	83 c0 0f             	add    $0xf,%eax
 81c18a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c18a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c18a8:	89 04 24             	mov    %eax,(%esp)
 81c18ab:	e8 10 b7 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c18b0:	83 f0 01             	xor    $0x1,%eax
 81c18b3:	84 c0                	test   %al,%al
 81c18b5:	74 29                	je     81c18e0 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x120>
 81c18b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c18be:	00 
 81c18bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c18c6:	00 
 81c18c7:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c18ce:	08 
 81c18cf:	c7 04 24 f0 0a 00 00 	movl   $0xaf0,(%esp)
 81c18d6:	e8 fc ef 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c18db:	e9 8a 01 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c18e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c18e3:	83 c0 68             	add    $0x68,%eax
 81c18e6:	01 c0                	add    %eax,%eax
 81c18e8:	03 45 f0             	add    -0x10(%ebp),%eax
 81c18eb:	83 c0 07             	add    $0x7,%eax
 81c18ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c18f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c18f5:	89 04 24             	mov    %eax,(%esp)
 81c18f8:	e8 c3 b6 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c18fd:	83 f0 01             	xor    $0x1,%eax
 81c1900:	84 c0                	test   %al,%al
 81c1902:	74 29                	je     81c192d <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x16d>
 81c1904:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c190b:	00 
 81c190c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1913:	00 
 81c1914:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c191b:	08 
 81c191c:	c7 04 24 f1 0a 00 00 	movl   $0xaf1,(%esp)
 81c1923:	e8 af ef 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1928:	e9 3d 01 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c192d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1930:	83 c0 64             	add    $0x64,%eax
 81c1933:	c1 e0 02             	shl    $0x2,%eax
 81c1936:	03 45 f0             	add    -0x10(%ebp),%eax
 81c1939:	83 c0 0f             	add    $0xf,%eax
 81c193c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1940:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1943:	89 04 24             	mov    %eax,(%esp)
 81c1946:	e8 33 b9 3c 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81c194b:	83 f0 01             	xor    $0x1,%eax
 81c194e:	84 c0                	test   %al,%al
 81c1950:	74 29                	je     81c197b <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x1bb>
 81c1952:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c1959:	00 
 81c195a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1961:	00 
 81c1962:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c1969:	08 
 81c196a:	c7 04 24 f2 0a 00 00 	movl   $0xaf2,(%esp)
 81c1971:	e8 61 ef 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1976:	e9 ef 00 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c197b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c197e:	05 c8 00 00 00       	add    $0xc8,%eax
 81c1983:	c1 e0 02             	shl    $0x2,%eax
 81c1986:	03 45 f0             	add    -0x10(%ebp),%eax
 81c1989:	83 c0 0f             	add    $0xf,%eax
 81c198c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1990:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1993:	89 04 24             	mov    %eax,(%esp)
 81c1996:	e8 55 b7 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c199b:	83 f0 01             	xor    $0x1,%eax
 81c199e:	84 c0                	test   %al,%al
 81c19a0:	74 29                	je     81c19cb <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x20b>
 81c19a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c19a9:	00 
 81c19aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c19b1:	00 
 81c19b2:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c19b9:	08 
 81c19ba:	c7 04 24 f3 0a 00 00 	movl   $0xaf3,(%esp)
 81c19c1:	e8 11 ef 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c19c6:	e9 9f 00 00 00       	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c19cb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c19ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c19d1:	81 c2 c8 00 00 00    	add    $0xc8,%edx
 81c19d7:	8b 44 90 0f          	mov    0xf(%eax,%edx,4),%eax
 81c19db:	85 c0                	test   %eax,%eax
 81c19dd:	7f 26                	jg     81c1a05 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x245>
 81c19df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c19e6:	00 
 81c19e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c19ee:	00 
 81c19ef:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c19f6:	08 
 81c19f7:	c7 04 24 f5 0a 00 00 	movl   $0xaf5,(%esp)
 81c19fe:	e8 d4 ee 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1a03:	eb 65                	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c1a05:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c1a09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c1a0c:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81c1a10:	0f be c0             	movsbl %al,%eax
 81c1a13:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81c1a16:	0f 9f c0             	setg   %al
 81c1a19:	84 c0                	test   %al,%al
 81c1a1b:	0f 85 75 fe ff ff    	jne    81c1896 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0xd6>
 81c1a21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c1a24:	05 bf 04 00 00       	add    $0x4bf,%eax
 81c1a29:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c1a2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c1a30:	89 04 24             	mov    %eax,(%esp)
 81c1a33:	e8 b8 b6 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c1a38:	83 f0 01             	xor    $0x1,%eax
 81c1a3b:	84 c0                	test   %al,%al
 81c1a3d:	74 26                	je     81c1a65 <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2a5>
 81c1a3f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c1a46:	00 
 81c1a47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c1a4e:	00 
 81c1a4f:	c7 44 24 04 20 5f bd 	movl   $0x8bd5f20,0x4(%esp)
 81c1a56:	08 
 81c1a57:	c7 04 24 f8 0a 00 00 	movl   $0xaf8,(%esp)
 81c1a5e:	e8 74 ee 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c1a63:	eb 05                	jmp    81c1a6a <_ZN21DisPatcher_DeleteItem4readER9PacketBufR8MSG_BASE+0x2aa>
 81c1a65:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1a6a:	c9                   	leave
 81c1a6b:	c3                   	ret

```

```c
// DisPatcher_DeleteItem::read @ 0x81c17c0

/* DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DeleteItem::read(DisPatcher_DeleteItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      if ((char)param_2[0xe] < 'e') {
        for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + local_10 * 2 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf0,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + (local_10 + 0x68) * 2 + 7));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf1,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + (local_10 + 100) * 4 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf2,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + (local_10 + 200) * 4 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xaf3,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
          if (*(int *)(param_2 + (local_10 + 200) * 4 + 0xf) < 1) {
            uVar2 = LineFunc(0xaf5,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            return uVar2;
          }
        }
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x4bf));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0xaf8,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,
                           0);
        }
      }
      else {
        uVar2 = LineFunc(0xaeb,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0xae7,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xae6,"virtual int DisPatcher_DeleteItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## restricted_check

```asm
// === 081c1cf6 DisPatcher_DeleteItem::restricted_check  [0x081c1cf6-0x81c1d5b] ===
 81c1cf6:	55                   	push   %ebp
 81c1cf7:	89 e5                	mov    %esp,%ebp
 81c1cf9:	83 ec 28             	sub    $0x28,%esp
 81c1cfc:	e8 e5 08 fa ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81c1d01:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c1d08:	00 
 81c1d09:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c1d10:	00 
 81c1d11:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c1d14:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1d18:	89 04 24             	mov    %eax,(%esp)
 81c1d1b:	e8 98 c9 fa ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81c1d20:	84 c0                	test   %al,%al
 81c1d22:	74 07                	je     81c1d2b <_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE+0x35>
 81c1d24:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81c1d29:	eb 2f                	jmp    81c1d5a <_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE+0x64>
 81c1d2b:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81c1d30:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81c1d37:	00 
 81c1d38:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c1d3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c1d3f:	89 04 24             	mov    %eax,(%esp)
 81c1d42:	e8 bb 6c 0c 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81c1d47:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c1d4a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c1d4e:	74 05                	je     81c1d55 <_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE+0x5f>
 81c1d50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c1d53:	eb 05                	jmp    81c1d5a <_ZN21DisPatcher_DeleteItem16restricted_checkEP5CUserR8MSG_BASE+0x64>
 81c1d55:	b8 00 00 00 00       	mov    $0x0,%eax
 81c1d5a:	c9                   	leave
 81c1d5b:	c3                   	ret

```

```c
// DisPatcher_DeleteItem::restricted_check @ 0x81c1cf6

/* DisPatcher_DeleteItem::restricted_check(CUser*, MSG_BASE&) */

int DisPatcher_DeleteItem::restricted_check(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  ServiceRestrictManager *pSVar2;
  int iVar3;
  
  pSVar2 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar1 = ServiceRestrictManager::isRestricted(pSVar2,param_2,1,1);
  if (cVar1 == '\0') {
    iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x1d);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xd1;
  }
  return iVar3;
}

```

---

## send

```asm
// === 081c2792 DisPatcher_DeleteItem::send  [0x081c2792-0x81c2979] ===
 81c2792:	55                   	push   %ebp
 81c2793:	89 e5                	mov    %esp,%ebp
 81c2795:	56                   	push   %esi
 81c2796:	53                   	push   %ebx
 81c2797:	83 ec 30             	sub    $0x30,%esp
 81c279a:	8b 45 10             	mov    0x10(%ebp),%eax
 81c279d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c27a0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c27a3:	89 04 24             	mov    %eax,(%esp)
 81c27a6:	e8 a1 b5 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c27ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c27ae:	8b 40 04             	mov    0x4(%eax),%eax
 81c27b1:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c27b6:	0f 84 ac 01 00 00    	je     81c2968 <_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase+0x1d6>
 81c27bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c27bf:	8b 40 04             	mov    0x4(%eax),%eax
 81c27c2:	85 c0                	test   %eax,%eax
 81c27c4:	0f 85 00 01 00 00    	jne    81c28ca <_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase+0x138>
 81c27ca:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81c27d1:	00 
 81c27d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c27d9:	00 
 81c27da:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c27dd:	89 04 24             	mov    %eax,(%esp)
 81c27e0:	e8 17 91 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c27e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c27ec:	00 
 81c27ed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c27f0:	89 04 24             	mov    %eax,(%esp)
 81c27f3:	e8 28 91 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c27f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c27fb:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c27ff:	0f be c0             	movsbl %al,%eax
 81c2802:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2806:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2809:	89 04 24             	mov    %eax,(%esp)
 81c280c:	e8 0f 91 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c2811:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2814:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81c2818:	0f be c0             	movsbl %al,%eax
 81c281b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c281f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2822:	89 04 24             	mov    %eax,(%esp)
 81c2825:	e8 f6 90 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c282a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81c2831:	eb 59                	jmp    81c288c <_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase+0xfa>
 81c2833:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c2836:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2839:	83 c2 68             	add    $0x68,%edx
 81c283c:	0f b7 44 50 02       	movzwl 0x2(%eax,%edx,2),%eax
 81c2841:	98                   	cwtl
 81c2842:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2846:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2849:	89 04 24             	mov    %eax,(%esp)
 81c284c:	e8 53 76 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c2851:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c2854:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2857:	83 c2 64             	add    $0x64,%edx
 81c285a:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 81c285e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2862:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2865:	89 04 24             	mov    %eax,(%esp)
 81c2868:	e8 cf 90 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c286d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c2870:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2873:	0f b7 44 50 0a       	movzwl 0xa(%eax,%edx,2),%eax
 81c2878:	98                   	cwtl
 81c2879:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c287d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2880:	89 04 24             	mov    %eax,(%esp)
 81c2883:	e8 1c 76 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c2888:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81c288c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c288f:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81c2893:	0f be c0             	movsbl %al,%eax
 81c2896:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81c2899:	0f 9f c0             	setg   %al
 81c289c:	84 c0                	test   %al,%al
 81c289e:	75 93                	jne    81c2833 <_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase+0xa1>
 81c28a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c28a7:	00 
 81c28a8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c28ab:	89 04 24             	mov    %eax,(%esp)
 81c28ae:	e8 a5 90 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c28b3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c28b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c28ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c28bd:	89 04 24             	mov    %eax,(%esp)
 81c28c0:	e8 f5 5c 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c28c5:	e9 9e 00 00 00       	jmp    81c2968 <_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase+0x1d6>
 81c28ca:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81c28d1:	00 
 81c28d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c28d9:	00 
 81c28da:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c28dd:	89 04 24             	mov    %eax,(%esp)
 81c28e0:	e8 17 90 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c28e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c28ec:	00 
 81c28ed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c28f0:	89 04 24             	mov    %eax,(%esp)
 81c28f3:	e8 28 90 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c28f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c28fb:	8b 40 04             	mov    0x4(%eax),%eax
 81c28fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2902:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2905:	89 04 24             	mov    %eax,(%esp)
 81c2908:	e8 13 90 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c290d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2910:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c2914:	0f be c0             	movsbl %al,%eax
 81c2917:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c291b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c291e:	89 04 24             	mov    %eax,(%esp)
 81c2921:	e8 fa 8f f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c2926:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c292d:	00 
 81c292e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2931:	89 04 24             	mov    %eax,(%esp)
 81c2934:	e8 1f 90 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c2939:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c293c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2940:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2943:	89 04 24             	mov    %eax,(%esp)
 81c2946:	e8 6f 5c 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c294b:	eb 1b                	jmp    81c2968 <_ZN21DisPatcher_DeleteItem4sendEP5CUserR9ParamBase+0x1d6>
 81c294d:	89 d3                	mov    %edx,%ebx
 81c294f:	89 c6                	mov    %eax,%esi
 81c2951:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c2954:	89 04 24             	mov    %eax,(%esp)
 81c2957:	e8 24 b5 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c295c:	89 f0                	mov    %esi,%eax
 81c295e:	89 da                	mov    %ebx,%edx
 81c2960:	89 04 24             	mov    %eax,(%esp)
 81c2963:	e8 e8 0d 92 00       	call   8ae3750 <_Unwind_Resume>
 81c2968:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c296b:	89 04 24             	mov    %eax,(%esp)
 81c296e:	e8 0d b5 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c2973:	83 c4 30             	add    $0x30,%esp
 81c2976:	5b                   	pop    %ebx
 81c2977:	5e                   	pop    %esi
 81c2978:	5d                   	pop    %ebp
 81c2979:	c3                   	ret

```

```c
// DisPatcher_DeleteItem::send @ 0x81c2792

/* DisPatcher_DeleteItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_DeleteItem::send(DisPatcher_DeleteItem *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
  if (*(int *)(local_14 + 4) != 0x7fffffff) {
    if (*(int *)(local_14 + 4) == 0) {
                    /* try { // try from 081c27e0 to 081c294a has its CatchHandler @ 081c294d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x12);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[8]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[9]);
      for (local_10 = 0; local_10 < (char)local_14[9]; local_10 = local_10 + 1) {
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,
                   (int)*(short *)(local_14 + (local_10 + 0x68) * 2 + 2));
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)(local_14 + (local_10 + 100) * 4 + 0xc));
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,(int)*(short *)(local_14 + local_10 * 2 + 10));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send(param_1,local_20);
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x12);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[8]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send(param_1,local_20);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

