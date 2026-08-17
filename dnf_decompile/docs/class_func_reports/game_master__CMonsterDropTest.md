# game_master__CMonsterDropTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## checkCommandExecuteError

```asm
// === 084ad82a game_master::CMonsterDropTest::checkCommandExecuteError  [0x084ad82a-0x84ad8db] ===
 84ad82a:	55                   	push   %ebp
 84ad82b:	89 e5                	mov    %esp,%ebp
 84ad82d:	53                   	push   %ebx
 84ad82e:	83 ec 24             	sub    $0x24,%esp
 84ad831:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84ad835:	75 0a                	jne    84ad841 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0x17>
 84ad837:	b8 9c fd c7 08       	mov    $0x8c7fd9c,%eax
 84ad83c:	e9 95 00 00 00       	jmp    84ad8d6 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xac>
 84ad841:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad844:	8b 40 08             	mov    0x8(%eax),%eax
 84ad847:	83 f8 01             	cmp    $0x1,%eax
 84ad84a:	75 0a                	jne    84ad856 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0x2c>
 84ad84c:	b8 16 ff c7 08       	mov    $0x8c7ff16,%eax
 84ad851:	e9 80 00 00 00       	jmp    84ad8d6 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xac>
 84ad856:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad859:	8b 40 08             	mov    0x8(%eax),%eax
 84ad85c:	83 f8 02             	cmp    $0x2,%eax
 84ad85f:	75 14                	jne    84ad875 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0x4b>
 84ad861:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad864:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad867:	3d 10 27 00 00       	cmp    $0x2710,%eax
 84ad86c:	76 1b                	jbe    84ad889 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0x5f>
 84ad86e:	b8 34 ff c7 08       	mov    $0x8c7ff34,%eax
 84ad873:	eb 61                	jmp    84ad8d6 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xac>
 84ad875:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad878:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad87b:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 84ad880:	76 07                	jbe    84ad889 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0x5f>
 84ad882:	b8 64 ff c7 08       	mov    $0x8c7ff64,%eax
 84ad887:	eb 4d                	jmp    84ad8d6 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xac>
 84ad889:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad88c:	05 24 0b 00 00       	add    $0xb24,%eax
 84ad891:	89 04 24             	mov    %eax,(%esp)
 84ad894:	e8 3f f8 d7 ff       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 84ad899:	89 c3                	mov    %eax,%ebx
 84ad89b:	e8 fb e8 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ad8a0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ad8a4:	89 04 24             	mov    %eax,(%esp)
 84ad8a7:	e8 4c 21 eb ff       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 84ad8ac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ad8af:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84ad8b3:	75 07                	jne    84ad8bc <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0x92>
 84ad8b5:	b8 87 ff c7 08       	mov    $0x8c7ff87,%eax
 84ad8ba:	eb 1a                	jmp    84ad8d6 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xac>
 84ad8bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad8bf:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 84ad8c5:	83 f8 01             	cmp    $0x1,%eax
 84ad8c8:	75 07                	jne    84ad8d1 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xa7>
 84ad8ca:	b8 9c ff c7 08       	mov    $0x8c7ff9c,%eax
 84ad8cf:	eb 05                	jmp    84ad8d6 <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty+0xac>
 84ad8d1:	b8 00 00 00 00       	mov    $0x0,%eax
 84ad8d6:	83 c4 24             	add    $0x24,%esp
 84ad8d9:	5b                   	pop    %ebx
 84ad8da:	5d                   	pop    %ebp
 84ad8db:	c3                   	ret

```

```c
// game_master::CMonsterDropTest::checkCommandExecuteError @ 0x84ad82a

/* game_master::CMonsterDropTest::checkCommandExecuteError(CParty*) */

undefined * __thiscall
game_master::CMonsterDropTest::checkCommandExecuteError(CMonsterDropTest *this,CParty *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_1 == (CParty *)0x0) {
    puVar1 = &DAT_08c7fd9c;
  }
  else if (*(int *)(this + 8) == 1) {
    puVar1 = &DAT_08c7ff16;
  }
  else {
    if (*(int *)(this + 8) == 2) {
      if (10000 < *(uint *)(this + 0xc)) {
        return &DAT_08c7ff34;
      }
    }
    else if (100000 < *(uint *)(this + 0xc)) {
      return &DAT_08c7ff64;
    }
    CBattle_Field::get_dungeon_index((CBattle_Field *)(param_1 + 0xb24));
    iVar2 = G_CDataManager();
    iVar2 = CDataManager::find_dungeon(iVar2);
    if (iVar2 == 0) {
      puVar1 = &DAT_08c7ff87;
    }
    else if (*(int *)(param_1 + 0xcd8) == 1) {
      puVar1 = &DAT_08c7ff9c;
    }
    else {
      puVar1 = (undefined *)0x0;
    }
  }
  return puVar1;
}

```

---

## execute

```asm
// === 084acf98 game_master::CMonsterDropTest::execute  [0x084acf98-0x84ad6d5] ===
 84acf98:	55                   	push   %ebp
 84acf99:	89 e5                	mov    %esp,%ebp
 84acf9b:	57                   	push   %edi
 84acf9c:	56                   	push   %esi
 84acf9d:	53                   	push   %ebx
 84acf9e:	81 ec cc 78 01 00    	sub    $0x178cc,%esp
 84acfa4:	8b 45 08             	mov    0x8(%ebp),%eax
 84acfa7:	89 04 24             	mov    %eax,(%esp)
 84acfaa:	e8 0b 70 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84acfaf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84acfb2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84acfb6:	0f 84 0a 07 00 00    	je     84ad6c6 <_ZN11game_master16CMonsterDropTest7executeEv+0x72e>
 84acfbc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84acfbf:	89 04 24             	mov    %eax,(%esp)
 84acfc2:	e8 85 81 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84acfc7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84acfca:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84acfce:	0f 84 f5 06 00 00    	je     84ad6c9 <_ZN11game_master16CMonsterDropTest7executeEv+0x731>
 84acfd4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84acfd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84acfdb:	8b 45 08             	mov    0x8(%ebp),%eax
 84acfde:	89 04 24             	mov    %eax,(%esp)
 84acfe1:	e8 44 08 00 00       	call   84ad82a <_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty>
 84acfe6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84acfe9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84acfed:	74 17                	je     84ad006 <_ZN11game_master16CMonsterDropTest7executeEv+0x6e>
 84acfef:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84acff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84acff6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84acff9:	89 04 24             	mov    %eax,(%esp)
 84acffc:	e8 c5 1a 00 00       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84ad001:	e9 c4 06 00 00       	jmp    84ad6ca <_ZN11game_master16CMonsterDropTest7executeEv+0x732>
 84ad006:	c7 44 24 04 b0 fd c7 	movl   $0x8c7fdb0,0x4(%esp)
 84ad00d:	08 
 84ad00e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad011:	89 04 24             	mov    %eax,(%esp)
 84ad014:	e8 ad 1a 00 00       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84ad019:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad01c:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad01f:	85 c0                	test   %eax,%eax
 84ad021:	75 0a                	jne    84ad02d <_ZN11game_master16CMonsterDropTest7executeEv+0x95>
 84ad023:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad026:	c7 40 0c 10 27 00 00 	movl   $0x2710,0xc(%eax)
 84ad02d:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad030:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad033:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad037:	c7 44 24 04 db fd c7 	movl   $0x8c7fddb,0x4(%esp)
 84ad03e:	08 
 84ad03f:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 84ad042:	89 04 24             	mov    %eax,(%esp)
 84ad045:	e8 f6 13 bd ff       	call   807e440 <sprintf@plt>
 84ad04a:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 84ad04d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad051:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad054:	89 04 24             	mov    %eax,(%esp)
 84ad057:	e8 6a 1a 00 00       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84ad05c:	8d 95 69 fe ff ff    	lea    -0x197(%ebp),%edx
 84ad062:	bb ff 00 00 00       	mov    $0xff,%ebx
 84ad067:	b8 00 00 00 00       	mov    $0x0,%eax
 84ad06c:	89 d1                	mov    %edx,%ecx
 84ad06e:	83 e1 01             	and    $0x1,%ecx
 84ad071:	85 c9                	test   %ecx,%ecx
 84ad073:	74 08                	je     84ad07d <_ZN11game_master16CMonsterDropTest7executeEv+0xe5>
 84ad075:	88 02                	mov    %al,(%edx)
 84ad077:	83 c2 01             	add    $0x1,%edx
 84ad07a:	83 eb 01             	sub    $0x1,%ebx
 84ad07d:	89 d1                	mov    %edx,%ecx
 84ad07f:	83 e1 02             	and    $0x2,%ecx
 84ad082:	85 c9                	test   %ecx,%ecx
 84ad084:	74 09                	je     84ad08f <_ZN11game_master16CMonsterDropTest7executeEv+0xf7>
 84ad086:	66 89 02             	mov    %ax,(%edx)
 84ad089:	83 c2 02             	add    $0x2,%edx
 84ad08c:	83 eb 02             	sub    $0x2,%ebx
 84ad08f:	89 d9                	mov    %ebx,%ecx
 84ad091:	c1 e9 02             	shr    $0x2,%ecx
 84ad094:	89 d7                	mov    %edx,%edi
 84ad096:	f3 ab                	rep stos %eax,%es:(%edi)
 84ad098:	89 fa                	mov    %edi,%edx
 84ad09a:	89 d9                	mov    %ebx,%ecx
 84ad09c:	83 e1 02             	and    $0x2,%ecx
 84ad09f:	85 c9                	test   %ecx,%ecx
 84ad0a1:	74 06                	je     84ad0a9 <_ZN11game_master16CMonsterDropTest7executeEv+0x111>
 84ad0a3:	66 89 02             	mov    %ax,(%edx)
 84ad0a6:	83 c2 02             	add    $0x2,%edx
 84ad0a9:	89 d9                	mov    %ebx,%ecx
 84ad0ab:	83 e1 01             	and    $0x1,%ecx
 84ad0ae:	85 c9                	test   %ecx,%ecx
 84ad0b0:	74 05                	je     84ad0b7 <_ZN11game_master16CMonsterDropTest7executeEv+0x11f>
 84ad0b2:	88 02                	mov    %al,(%edx)
 84ad0b4:	83 c2 01             	add    $0x1,%edx
 84ad0b7:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad0bd:	ba 18 73 01 00       	mov    $0x17318,%edx
 84ad0c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ad0c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ad0cd:	00 
 84ad0ce:	89 04 24             	mov    %eax,(%esp)
 84ad0d1:	e8 ea 0b bd ff       	call   807dcc0 <memset@plt>
 84ad0d6:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad0d9:	89 04 24             	mov    %eax,(%esp)
 84ad0dc:	e8 83 9b c1 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 84ad0e1:	8d 45 80             	lea    -0x80(%ebp),%eax
 84ad0e4:	89 04 24             	mov    %eax,(%esp)
 84ad0e7:	e8 b6 87 ed ff       	call   83858a2 <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEEC1Ev>
 84ad0ec:	8d 45 80             	lea    -0x80(%ebp),%eax
 84ad0ef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ad0f3:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad0f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad0fa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ad0fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad101:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad104:	89 04 24             	mov    %eax,(%esp)
 84ad107:	e8 d0 07 00 00       	call   84ad8dc <_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE>
 84ad10c:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 84ad110:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad113:	8b 40 08             	mov    0x8(%eax),%eax
 84ad116:	83 f8 02             	cmp    $0x2,%eax
 84ad119:	74 0d                	je     84ad128 <_ZN11game_master16CMonsterDropTest7executeEv+0x190>
 84ad11b:	83 f8 03             	cmp    $0x3,%eax
 84ad11e:	74 2c                	je     84ad14c <_ZN11game_master16CMonsterDropTest7executeEv+0x1b4>
 84ad120:	85 c0                	test   %eax,%eax
 84ad122:	0f 85 73 01 00 00    	jne    84ad29b <_ZN11game_master16CMonsterDropTest7executeEv+0x303>
 84ad128:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 84ad12f:	00 
 84ad130:	c7 44 24 04 ec fd c7 	movl   $0x8c7fdec,0x4(%esp)
 84ad137:	08 
 84ad138:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad13e:	89 04 24             	mov    %eax,(%esp)
 84ad141:	e8 5a 07 bd ff       	call   807d8a0 <memcpy@plt>
 84ad146:	90                   	nop
 84ad147:	e9 4f 01 00 00       	jmp    84ad29b <_ZN11game_master16CMonsterDropTest7executeEv+0x303>
 84ad14c:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 84ad153:	00 
 84ad154:	c7 44 24 04 30 fe c7 	movl   $0x8c7fe30,0x4(%esp)
 84ad15b:	08 
 84ad15c:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad162:	89 04 24             	mov    %eax,(%esp)
 84ad165:	e8 36 07 bd ff       	call   807d8a0 <memcpy@plt>
 84ad16a:	e9 2c 01 00 00       	jmp    84ad29b <_ZN11game_master16CMonsterDropTest7executeEv+0x303>
 84ad16f:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad172:	8b 40 08             	mov    0x8(%eax),%eax
 84ad175:	83 f8 02             	cmp    $0x2,%eax
 84ad178:	74 4f                	je     84ad1c9 <_ZN11game_master16CMonsterDropTest7executeEv+0x231>
 84ad17a:	83 f8 03             	cmp    $0x3,%eax
 84ad17d:	0f 84 84 00 00 00    	je     84ad207 <_ZN11game_master16CMonsterDropTest7executeEv+0x26f>
 84ad183:	85 c0                	test   %eax,%eax
 84ad185:	0f 85 b8 00 00 00    	jne    84ad243 <_ZN11game_master16CMonsterDropTest7executeEv+0x2ab>
 84ad18b:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad18e:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad191:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad195:	c7 44 24 04 53 fe c7 	movl   $0x8c7fe53,0x4(%esp)
 84ad19c:	08 
 84ad19d:	8d 85 69 fe ff ff    	lea    -0x197(%ebp),%eax
 84ad1a3:	89 04 24             	mov    %eax,(%esp)
 84ad1a6:	e8 95 12 bd ff       	call   807e440 <sprintf@plt>
 84ad1ab:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad1ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad1b2:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad1b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad1bc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad1bf:	89 04 24             	mov    %eax,(%esp)
 84ad1c2:	e8 3d 23 00 00       	call   84af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84ad1c7:	eb 7a                	jmp    84ad243 <_ZN11game_master16CMonsterDropTest7executeEv+0x2ab>
 84ad1c9:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad1cc:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad1cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad1d3:	c7 44 24 04 6e fe c7 	movl   $0x8c7fe6e,0x4(%esp)
 84ad1da:	08 
 84ad1db:	8d 85 69 fe ff ff    	lea    -0x197(%ebp),%eax
 84ad1e1:	89 04 24             	mov    %eax,(%esp)
 84ad1e4:	e8 57 12 bd ff       	call   807e440 <sprintf@plt>
 84ad1e9:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad1ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad1f0:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad1f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad1fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad1fd:	89 04 24             	mov    %eax,(%esp)
 84ad200:	e8 ff 22 00 00       	call   84af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84ad205:	eb 3c                	jmp    84ad243 <_ZN11game_master16CMonsterDropTest7executeEv+0x2ab>
 84ad207:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad20a:	8b 40 0c             	mov    0xc(%eax),%eax
 84ad20d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad211:	c7 44 24 04 89 fe c7 	movl   $0x8c7fe89,0x4(%esp)
 84ad218:	08 
 84ad219:	8d 85 69 fe ff ff    	lea    -0x197(%ebp),%eax
 84ad21f:	89 04 24             	mov    %eax,(%esp)
 84ad222:	e8 19 12 bd ff       	call   807e440 <sprintf@plt>
 84ad227:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad22a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad22e:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad234:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad238:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad23b:	89 04 24             	mov    %eax,(%esp)
 84ad23e:	e8 93 04 00 00       	call   84ad6d6 <_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84ad243:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad246:	89 04 24             	mov    %eax,(%esp)
 84ad249:	e8 72 d1 e4 ff       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 84ad24e:	84 c0                	test   %al,%al
 84ad250:	74 04                	je     84ad256 <_ZN11game_master16CMonsterDropTest7executeEv+0x2be>
 84ad252:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 84ad256:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84ad25a:	8d 95 51 87 fe ff    	lea    -0x178af(%ebp),%edx
 84ad260:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84ad264:	8d 95 69 fe ff ff    	lea    -0x197(%ebp),%edx
 84ad26a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ad26e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad272:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad275:	89 04 24             	mov    %eax,(%esp)
 84ad278:	e8 75 19 00 00       	call   84aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>
 84ad27d:	c7 44 24 08 18 73 01 	movl   $0x17318,0x8(%esp)
 84ad284:	00 
 84ad285:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ad28c:	00 
 84ad28d:	8d 85 51 87 fe ff    	lea    -0x178af(%ebp),%eax
 84ad293:	89 04 24             	mov    %eax,(%esp)
 84ad296:	e8 25 0a bd ff       	call   807dcc0 <memset@plt>
 84ad29b:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 84ad29f:	0f 85 ca fe ff ff    	jne    84ad16f <_ZN11game_master16CMonsterDropTest7executeEv+0x1d7>
 84ad2a5:	8d 45 80             	lea    -0x80(%ebp),%eax
 84ad2a8:	89 04 24             	mov    %eax,(%esp)
 84ad2ab:	e8 f2 74 00 00       	call   84b47a2 <_ZNKSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE4sizeEv>
 84ad2b0:	85 c0                	test   %eax,%eax
 84ad2b2:	0f 95 c0             	setne  %al
 84ad2b5:	84 c0                	test   %al,%al
 84ad2b7:	0f 84 aa 03 00 00    	je     84ad667 <_ZN11game_master16CMonsterDropTest7executeEv+0x6cf>
 84ad2bd:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad2c3:	89 04 24             	mov    %eax,(%esp)
 84ad2c6:	e8 05 93 25 00       	call   87065d0 <_ZNSsC1Ev>
 84ad2cb:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad2d1:	89 04 24             	mov    %eax,(%esp)
 84ad2d4:	e8 f7 ba 25 00       	call   8708dd0 <_ZNSs5clearEv>
 84ad2d9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad2df:	8d 55 80             	lea    -0x80(%ebp),%edx
 84ad2e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad2e6:	89 04 24             	mov    %eax,(%esp)
 84ad2e9:	e8 10 5f ee ff       	call   83931fe <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE5beginEv>
 84ad2ee:	83 ec 04             	sub    $0x4,%esp
 84ad2f1:	e9 ea 02 00 00       	jmp    84ad5e0 <_ZN11game_master16CMonsterDropTest7executeEv+0x648>
 84ad2f6:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 84ad2fd:	00 00 00 
 84ad300:	e9 41 01 00 00       	jmp    84ad446 <_ZN11game_master16CMonsterDropTest7executeEv+0x4ae>
 84ad305:	8d 95 69 fa ff ff    	lea    -0x597(%ebp),%edx
 84ad30b:	bb 00 04 00 00       	mov    $0x400,%ebx
 84ad310:	b8 00 00 00 00       	mov    $0x0,%eax
 84ad315:	89 d1                	mov    %edx,%ecx
 84ad317:	83 e1 01             	and    $0x1,%ecx
 84ad31a:	85 c9                	test   %ecx,%ecx
 84ad31c:	74 08                	je     84ad326 <_ZN11game_master16CMonsterDropTest7executeEv+0x38e>
 84ad31e:	88 02                	mov    %al,(%edx)
 84ad320:	83 c2 01             	add    $0x1,%edx
 84ad323:	83 eb 01             	sub    $0x1,%ebx
 84ad326:	89 d1                	mov    %edx,%ecx
 84ad328:	83 e1 02             	and    $0x2,%ecx
 84ad32b:	85 c9                	test   %ecx,%ecx
 84ad32d:	74 09                	je     84ad338 <_ZN11game_master16CMonsterDropTest7executeEv+0x3a0>
 84ad32f:	66 89 02             	mov    %ax,(%edx)
 84ad332:	83 c2 02             	add    $0x2,%edx
 84ad335:	83 eb 02             	sub    $0x2,%ebx
 84ad338:	89 d9                	mov    %ebx,%ecx
 84ad33a:	c1 e9 02             	shr    $0x2,%ecx
 84ad33d:	89 d7                	mov    %edx,%edi
 84ad33f:	f3 ab                	rep stos %eax,%es:(%edi)
 84ad341:	89 fa                	mov    %edi,%edx
 84ad343:	89 d9                	mov    %ebx,%ecx
 84ad345:	83 e1 02             	and    $0x2,%ecx
 84ad348:	85 c9                	test   %ecx,%ecx
 84ad34a:	74 06                	je     84ad352 <_ZN11game_master16CMonsterDropTest7executeEv+0x3ba>
 84ad34c:	66 89 02             	mov    %ax,(%edx)
 84ad34f:	83 c2 02             	add    $0x2,%edx
 84ad352:	89 d9                	mov    %ebx,%ecx
 84ad354:	83 e1 01             	and    $0x1,%ecx
 84ad357:	85 c9                	test   %ecx,%ecx
 84ad359:	74 05                	je     84ad360 <_ZN11game_master16CMonsterDropTest7executeEv+0x3c8>
 84ad35b:	88 02                	mov    %al,(%edx)
 84ad35d:	83 c2 01             	add    $0x1,%edx
 84ad360:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad366:	89 04 24             	mov    %eax,(%esp)
 84ad369:	e8 0e 5f ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ad36e:	8d 48 04             	lea    0x4(%eax),%ecx
 84ad371:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84ad377:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 84ad37d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ad381:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ad385:	89 04 24             	mov    %eax,(%esp)
 84ad388:	e8 61 ff c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84ad38d:	83 ec 04             	sub    $0x4,%esp
 84ad390:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad396:	89 04 24             	mov    %eax,(%esp)
 84ad399:	e8 de 5e ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ad39e:	8d 50 04             	lea    0x4(%eax),%edx
 84ad3a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ad3a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad3a8:	89 04 24             	mov    %eax,(%esp)
 84ad3ab:	e8 6a ff c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ad3b0:	83 ec 04             	sub    $0x4,%esp
 84ad3b3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ad3b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad3ba:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84ad3c0:	89 04 24             	mov    %eax,(%esp)
 84ad3c3:	e8 00 d0 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ad3c8:	84 c0                	test   %al,%al
 84ad3ca:	74 6b                	je     84ad437 <_ZN11game_master16CMonsterDropTest7executeEv+0x49f>
 84ad3cc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84ad3d2:	89 04 24             	mov    %eax,(%esp)
 84ad3d5:	e8 66 ff c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ad3da:	8b 70 04             	mov    0x4(%eax),%esi
 84ad3dd:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84ad3e3:	89 04 24             	mov    %eax,(%esp)
 84ad3e6:	e8 55 ff c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ad3eb:	8b 18                	mov    (%eax),%ebx
 84ad3ed:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad3f3:	89 04 24             	mov    %eax,(%esp)
 84ad3f6:	e8 81 5e ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ad3fb:	8b 00                	mov    (%eax),%eax
 84ad3fd:	89 74 24 10          	mov    %esi,0x10(%esp)
 84ad401:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84ad405:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad409:	c7 44 24 04 a2 fe c7 	movl   $0x8c7fea2,0x4(%esp)
 84ad410:	08 
 84ad411:	8d 85 69 fa ff ff    	lea    -0x597(%ebp),%eax
 84ad417:	89 04 24             	mov    %eax,(%esp)
 84ad41a:	e8 21 10 bd ff       	call   807e440 <sprintf@plt>
 84ad41f:	8d 85 69 fa ff ff    	lea    -0x597(%ebp),%eax
 84ad425:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad429:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad42f:	89 04 24             	mov    %eax,(%esp)
 84ad432:	e8 f9 ab 25 00       	call   8708030 <_ZNSspLEPKc>
 84ad437:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84ad43d:	83 c0 01             	add    $0x1,%eax
 84ad440:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84ad446:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84ad44c:	83 f8 0a             	cmp    $0xa,%eax
 84ad44f:	0f 9e c0             	setle  %al
 84ad452:	84 c0                	test   %al,%al
 84ad454:	0f 85 ab fe ff ff    	jne    84ad305 <_ZN11game_master16CMonsterDropTest7executeEv+0x36d>
 84ad45a:	c7 85 6c ff ff ff e9 	movl   $0x3e9,-0x94(%ebp)
 84ad461:	03 00 00 
 84ad464:	e9 41 01 00 00       	jmp    84ad5aa <_ZN11game_master16CMonsterDropTest7executeEv+0x612>
 84ad469:	8d 95 69 fa ff ff    	lea    -0x597(%ebp),%edx
 84ad46f:	bb 00 04 00 00       	mov    $0x400,%ebx
 84ad474:	b8 00 00 00 00       	mov    $0x0,%eax
 84ad479:	89 d1                	mov    %edx,%ecx
 84ad47b:	83 e1 01             	and    $0x1,%ecx
 84ad47e:	85 c9                	test   %ecx,%ecx
 84ad480:	74 08                	je     84ad48a <_ZN11game_master16CMonsterDropTest7executeEv+0x4f2>
 84ad482:	88 02                	mov    %al,(%edx)
 84ad484:	83 c2 01             	add    $0x1,%edx
 84ad487:	83 eb 01             	sub    $0x1,%ebx
 84ad48a:	89 d1                	mov    %edx,%ecx
 84ad48c:	83 e1 02             	and    $0x2,%ecx
 84ad48f:	85 c9                	test   %ecx,%ecx
 84ad491:	74 09                	je     84ad49c <_ZN11game_master16CMonsterDropTest7executeEv+0x504>
 84ad493:	66 89 02             	mov    %ax,(%edx)
 84ad496:	83 c2 02             	add    $0x2,%edx
 84ad499:	83 eb 02             	sub    $0x2,%ebx
 84ad49c:	89 d9                	mov    %ebx,%ecx
 84ad49e:	c1 e9 02             	shr    $0x2,%ecx
 84ad4a1:	89 d7                	mov    %edx,%edi
 84ad4a3:	f3 ab                	rep stos %eax,%es:(%edi)
 84ad4a5:	89 fa                	mov    %edi,%edx
 84ad4a7:	89 d9                	mov    %ebx,%ecx
 84ad4a9:	83 e1 02             	and    $0x2,%ecx
 84ad4ac:	85 c9                	test   %ecx,%ecx
 84ad4ae:	74 06                	je     84ad4b6 <_ZN11game_master16CMonsterDropTest7executeEv+0x51e>
 84ad4b0:	66 89 02             	mov    %ax,(%edx)
 84ad4b3:	83 c2 02             	add    $0x2,%edx
 84ad4b6:	89 d9                	mov    %ebx,%ecx
 84ad4b8:	83 e1 01             	and    $0x1,%ecx
 84ad4bb:	85 c9                	test   %ecx,%ecx
 84ad4bd:	74 05                	je     84ad4c4 <_ZN11game_master16CMonsterDropTest7executeEv+0x52c>
 84ad4bf:	88 02                	mov    %al,(%edx)
 84ad4c1:	83 c2 01             	add    $0x1,%edx
 84ad4c4:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad4ca:	89 04 24             	mov    %eax,(%esp)
 84ad4cd:	e8 aa 5d ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ad4d2:	8d 48 04             	lea    0x4(%eax),%ecx
 84ad4d5:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84ad4db:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 84ad4e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ad4e5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ad4e9:	89 04 24             	mov    %eax,(%esp)
 84ad4ec:	e8 fd fd c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84ad4f1:	83 ec 04             	sub    $0x4,%esp
 84ad4f4:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad4fa:	89 04 24             	mov    %eax,(%esp)
 84ad4fd:	e8 7a 5d ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ad502:	8d 50 04             	lea    0x4(%eax),%edx
 84ad505:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ad508:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad50c:	89 04 24             	mov    %eax,(%esp)
 84ad50f:	e8 06 fe c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ad514:	83 ec 04             	sub    $0x4,%esp
 84ad517:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ad51a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad51e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84ad524:	89 04 24             	mov    %eax,(%esp)
 84ad527:	e8 9c ce c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ad52c:	84 c0                	test   %al,%al
 84ad52e:	74 6b                	je     84ad59b <_ZN11game_master16CMonsterDropTest7executeEv+0x603>
 84ad530:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84ad536:	89 04 24             	mov    %eax,(%esp)
 84ad539:	e8 02 fe c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ad53e:	8b 70 04             	mov    0x4(%eax),%esi
 84ad541:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84ad547:	89 04 24             	mov    %eax,(%esp)
 84ad54a:	e8 f1 fd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ad54f:	8b 18                	mov    (%eax),%ebx
 84ad551:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad557:	89 04 24             	mov    %eax,(%esp)
 84ad55a:	e8 1d 5d ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ad55f:	8b 00                	mov    (%eax),%eax
 84ad561:	89 74 24 10          	mov    %esi,0x10(%esp)
 84ad565:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84ad569:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad56d:	c7 44 24 04 a2 fe c7 	movl   $0x8c7fea2,0x4(%esp)
 84ad574:	08 
 84ad575:	8d 85 69 fa ff ff    	lea    -0x597(%ebp),%eax
 84ad57b:	89 04 24             	mov    %eax,(%esp)
 84ad57e:	e8 bd 0e bd ff       	call   807e440 <sprintf@plt>
 84ad583:	8d 85 69 fa ff ff    	lea    -0x597(%ebp),%eax
 84ad589:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad58d:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad593:	89 04 24             	mov    %eax,(%esp)
 84ad596:	e8 95 aa 25 00       	call   8708030 <_ZNSspLEPKc>
 84ad59b:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84ad5a1:	83 c0 01             	add    $0x1,%eax
 84ad5a4:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 84ad5aa:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84ad5b0:	3d ed 03 00 00       	cmp    $0x3ed,%eax
 84ad5b5:	0f 9e c0             	setle  %al
 84ad5b8:	84 c0                	test   %al,%al
 84ad5ba:	0f 85 a9 fe ff ff    	jne    84ad469 <_ZN11game_master16CMonsterDropTest7executeEv+0x4d1>
 84ad5c0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ad5c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ad5ca:	00 
 84ad5cb:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 84ad5d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad5d5:	89 04 24             	mov    %eax,(%esp)
 84ad5d8:	e8 d9 71 00 00       	call   84b47b6 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEppEi>
 84ad5dd:	83 ec 04             	sub    $0x4,%esp
 84ad5e0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ad5e3:	8d 55 80             	lea    -0x80(%ebp),%edx
 84ad5e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad5ea:	89 04 24             	mov    %eax,(%esp)
 84ad5ed:	e8 32 5c ee ff       	call   8393224 <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE3endEv>
 84ad5f2:	83 ec 04             	sub    $0x4,%esp
 84ad5f5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ad5f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad5fc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ad602:	89 04 24             	mov    %eax,(%esp)
 84ad605:	e8 40 5c ee ff       	call   839324a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEneERKS9_>
 84ad60a:	84 c0                	test   %al,%al
 84ad60c:	0f 85 e4 fc ff ff    	jne    84ad2f6 <_ZN11game_master16CMonsterDropTest7executeEv+0x35e>
 84ad612:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad618:	89 04 24             	mov    %eax,(%esp)
 84ad61b:	e8 d0 8e 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ad620:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ad624:	c7 44 24 08 b1 fe c7 	movl   $0x8c7feb1,0x8(%esp)
 84ad62b:	08 
 84ad62c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ad633:	00 
 84ad634:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad637:	89 04 24             	mov    %eax,(%esp)
 84ad63a:	e8 b3 15 00 00       	call   84aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>
 84ad63f:	eb 18                	jmp    84ad659 <_ZN11game_master16CMonsterDropTest7executeEv+0x6c1>
 84ad641:	89 d3                	mov    %edx,%ebx
 84ad643:	89 c6                	mov    %eax,%esi
 84ad645:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad64b:	89 04 24             	mov    %eax,(%esp)
 84ad64e:	e8 8d a5 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ad653:	89 f0                	mov    %esi,%eax
 84ad655:	89 da                	mov    %ebx,%edx
 84ad657:	eb 23                	jmp    84ad67c <_ZN11game_master16CMonsterDropTest7executeEv+0x6e4>
 84ad659:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84ad65f:	89 04 24             	mov    %eax,(%esp)
 84ad662:	e8 79 a5 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ad667:	c7 44 24 04 c8 fe c7 	movl   $0x8c7fec8,0x4(%esp)
 84ad66e:	08 
 84ad66f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ad672:	89 04 24             	mov    %eax,(%esp)
 84ad675:	e8 4c 14 00 00       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84ad67a:	eb 15                	jmp    84ad691 <_ZN11game_master16CMonsterDropTest7executeEv+0x6f9>
 84ad67c:	89 d3                	mov    %edx,%ebx
 84ad67e:	89 c6                	mov    %eax,%esi
 84ad680:	8d 45 80             	lea    -0x80(%ebp),%eax
 84ad683:	89 04 24             	mov    %eax,(%esp)
 84ad686:	e8 3b 48 ec ff       	call   8371ec6 <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEED1Ev>
 84ad68b:	89 f0                	mov    %esi,%eax
 84ad68d:	89 da                	mov    %ebx,%edx
 84ad68f:	eb 0d                	jmp    84ad69e <_ZN11game_master16CMonsterDropTest7executeEv+0x706>
 84ad691:	8d 45 80             	lea    -0x80(%ebp),%eax
 84ad694:	89 04 24             	mov    %eax,(%esp)
 84ad697:	e8 2a 48 ec ff       	call   8371ec6 <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEED1Ev>
 84ad69c:	eb 1b                	jmp    84ad6b9 <_ZN11game_master16CMonsterDropTest7executeEv+0x721>
 84ad69e:	89 d3                	mov    %edx,%ebx
 84ad6a0:	89 c6                	mov    %eax,%esi
 84ad6a2:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad6a5:	89 04 24             	mov    %eax,(%esp)
 84ad6a8:	e8 19 94 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84ad6ad:	89 f0                	mov    %esi,%eax
 84ad6af:	89 da                	mov    %ebx,%edx
 84ad6b1:	89 04 24             	mov    %eax,(%esp)
 84ad6b4:	e8 97 60 63 00       	call   8ae3750 <_Unwind_Resume>
 84ad6b9:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ad6bc:	89 04 24             	mov    %eax,(%esp)
 84ad6bf:	e8 02 94 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84ad6c4:	eb 04                	jmp    84ad6ca <_ZN11game_master16CMonsterDropTest7executeEv+0x732>
 84ad6c6:	90                   	nop
 84ad6c7:	eb 01                	jmp    84ad6ca <_ZN11game_master16CMonsterDropTest7executeEv+0x732>
 84ad6c9:	90                   	nop
 84ad6ca:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84ad6cd:	83 c4 00             	add    $0x0,%esp
 84ad6d0:	5b                   	pop    %ebx
 84ad6d1:	5e                   	pop    %esi
 84ad6d2:	5f                   	pop    %edi
 84ad6d3:	5d                   	pop    %ebp
 84ad6d4:	c3                   	ret
 84ad6d5:	90                   	nop

```

```c
// game_master::CMonsterDropTest::execute @ 0x84acf98

/* game_master::CMonsterDropTest::execute() */

void __thiscall game_master::CMonsterDropTest::execute(CMonsterDropTest *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  *pmVar11;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  amStack_178b3 [95000];
  char local_59b;
  char local_59a [1023];
  char local_19b;
  char local_19a [254];
  _Rb_tree_iterator<std::pair<int_const,int>> local_9c [4];
  int local_98;
  _Rb_tree_iterator<std::pair<int_const,int>> local_94 [4];
  int local_90;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_8c [4];
  string local_88 [4];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_84 [24];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_6c [27];
  char local_51 [21];
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_3c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [4];
  _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_30 [4];
  CUser *local_2c;
  CParty *local_28;
  char *local_24;
  bool local_1d;
  
  bVar10 = 0;
  local_2c = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_2c == (CUser *)0x0) {
    return;
  }
  local_28 = (CParty *)CUser::GetParty(local_2c);
  if (local_28 == (CParty *)0x0) {
    return;
  }
  local_24 = (char *)checkCommandExecuteError(this,local_28);
  if (local_24 != (char *)0x0) {
    CBoosterTest::SendChatMsg(local_2c,local_24);
    return;
  }
  CBoosterTest::SendChatMsg(local_2c,&DAT_08c7fdb0);
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0xc) = 10000;
  }
  sprintf(local_51,&DAT_08c7fddb,*(undefined4 *)(this + 0xc));
  CBoosterTest::SendChatMsg(local_2c,local_51);
  pcVar7 = &local_19b;
  uVar8 = 0xff;
  bVar9 = ((uint)pcVar7 & 1) != 0;
  if (bVar9) {
    local_19b = '\0';
    pcVar7 = local_19a;
    uVar8 = 0xfe;
  }
  if (((uint)pcVar7 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
    uVar8 = uVar8 - 2;
  }
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
  }
  if ((uVar8 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
  }
  if (!bVar9) {
    *pcVar7 = '\0';
  }
  memset(amStack_178b3,0,95000);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_6c);
                    /* try { // try from 084ad0e7 to 084ad0eb has its CatchHandler @ 084ad69e */
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::map(local_84);
  pmVar11 = local_84;
                    /* try { // try from 084ad107 to 084ad2ca has its CatchHandler @ 084ad67c */
  processDungeonDrop((CParty *)this,(map *)local_28,(map *)local_6c);
  local_1d = true;
  iVar4 = *(int *)(this + 8);
  if (iVar4 != 2) {
    if (iVar4 == 3) {
      memcpy(amStack_178b3,"item_name\tgold_quantity\t drop_cnt\n",0x23);
      goto LAB_084ad29b;
    }
    if (iVar4 != 0) goto LAB_084ad29b;
  }
  memcpy(amStack_178b3,"item_id\t item_name\t rarity\t drop_cnt\t price\t sell_price\t usable_lv\n",
         0x44);
LAB_084ad29b:
  while (local_1d != false) {
    iVar4 = *(int *)(this + 8);
    if (iVar4 == 2) {
      sprintf(&local_19b,"passed_dungeon_drop_%d.txt",*(undefined4 *)(this + 0xc),pmVar11);
      CBoosterTest::makeFileContents(local_2c,(char *)amStack_178b3,(map *)local_6c);
    }
    else if (iVar4 == 3) {
      sprintf(&local_19b,"gold_dungeon_drop_%d.txt",*(undefined4 *)(this + 0xc),pmVar11);
      makeFileGoldContents(local_2c,(char *)amStack_178b3,(map *)local_6c);
    }
    else if (iVar4 == 0) {
      sprintf(&local_19b,"single_dungeon_drop_%d.txt",*(undefined4 *)(this + 0xc),pmVar11);
      CBoosterTest::makeFileContents(local_2c,(char *)amStack_178b3,(map *)local_6c);
    }
    cVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                      (local_6c);
    if (cVar3 != '\0') {
      local_1d = false;
    }
    pmVar11 = amStack_178b3;
    CBoosterTest::printClient(local_2c,local_1d,&local_19b,(char *)pmVar11);
    memset(amStack_178b3,0,95000);
  }
  iVar4 = std::
          map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
          ::size(local_84);
  if (iVar4 != 0) {
    std::string::string(local_88);
                    /* try { // try from 084ad2d4 to 084ad63e has its CatchHandler @ 084ad641 */
    std::string::clear(local_88);
    std::
    map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
    ::begin(local_8c);
    while( true ) {
      std::
      map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
      ::end(local_3c);
      cVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                            *)local_8c,(_Rb_tree_iterator *)local_3c);
      if (cVar3 == '\0') break;
      for (local_90 = 0; local_90 < 0xb; local_90 = local_90 + 1) {
        pcVar7 = &local_59b;
        uVar8 = 0x400;
        bVar9 = ((uint)pcVar7 & 1) != 0;
        if (bVar9) {
          local_59b = '\0';
          pcVar7 = local_59a;
          uVar8 = 0x3ff;
        }
        if (((uint)pcVar7 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
          uVar8 = uVar8 - 2;
        }
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
        }
        if ((uVar8 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
        }
        if (bVar9) {
          *pcVar7 = '\0';
        }
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_94);
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_94,(_Rb_tree_iterator *)local_38);
        if (cVar3 != '\0') {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
          uVar1 = *(undefined4 *)(iVar4 + 4);
          puVar5 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
          uVar2 = *puVar5;
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                   ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                                 *)local_8c);
          sprintf(&local_59b,"%5d\t\t%2d\t\t%8d\n",*puVar5,uVar2,uVar1);
          std::string::operator+=(local_88,&local_59b);
        }
      }
      for (local_98 = 0x3e9; local_98 < 0x3ee; local_98 = local_98 + 1) {
        pcVar7 = &local_59b;
        uVar8 = 0x400;
        bVar9 = ((uint)pcVar7 & 1) != 0;
        if (bVar9) {
          local_59b = '\0';
          pcVar7 = local_59a;
          uVar8 = 0x3ff;
        }
        if (((uint)pcVar7 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
          uVar8 = uVar8 - 2;
        }
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
        }
        if ((uVar8 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
        }
        if (bVar9) {
          *pcVar7 = '\0';
        }
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_9c);
        std::
        _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                      *)local_8c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_34);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_9c,(_Rb_tree_iterator *)local_34);
        if (cVar3 != '\0') {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_9c);
          uVar1 = *(undefined4 *)(iVar4 + 4);
          puVar5 = (undefined4 *)
                   std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_9c);
          uVar2 = *puVar5;
          puVar5 = (undefined4 *)
                   std::
                   _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                   ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                                 *)local_8c);
          sprintf(&local_59b,"%5d\t\t%2d\t\t%8d\n",*puVar5,uVar2,uVar1);
          std::string::operator+=(local_88,&local_59b);
        }
      }
      std::
      _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
      ::operator++(local_30,(int)local_8c);
    }
    pcVar7 = (char *)std::string::c_str(local_88);
    CBoosterTest::printClient(local_2c,true,"drop_grade_list.txt",pcVar7);
                    /* try { // try from 084ad662 to 084ad679 has its CatchHandler @ 084ad67c */
    std::string::~string(local_88);
  }
  CBoosterTest::SendChatMsg(local_2c,&DAT_08c7fec8);
                    /* try { // try from 084ad697 to 084ad69b has its CatchHandler @ 084ad69e */
  std::
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  ::~map(local_84);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_6c);
  return;
}

```

---

## getDungeonDropResult

```asm
// === 084ae0e2 game_master::CMonsterDropTest::getDungeonDropResult  [0x084ae0e2-0x84ae14b] ===
 84ae0e2:	55                   	push   %ebp
 84ae0e3:	89 e5                	mov    %esp,%ebp
 84ae0e5:	83 ec 18             	sub    $0x18,%esp
 84ae0e8:	8b 45 08             	mov    0x8(%ebp),%eax
 84ae0eb:	8b 40 08             	mov    0x8(%eax),%eax
 84ae0ee:	83 f8 02             	cmp    $0x2,%eax
 84ae0f1:	74 09                	je     84ae0fc <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE+0x1a>
 84ae0f3:	83 f8 03             	cmp    $0x3,%eax
 84ae0f6:	74 38                	je     84ae130 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE+0x4e>
 84ae0f8:	85 c0                	test   %eax,%eax
 84ae0fa:	75 4d                	jne    84ae149 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE+0x67>
 84ae0fc:	8b 45 10             	mov    0x10(%ebp),%eax
 84ae0ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ae103:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ae106:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae10a:	8b 45 08             	mov    0x8(%ebp),%eax
 84ae10d:	89 04 24             	mov    %eax,(%esp)
 84ae110:	e8 1f 06 00 00       	call   84ae734 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84ae115:	8b 45 14             	mov    0x14(%ebp),%eax
 84ae118:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ae11c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ae11f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae123:	8b 45 08             	mov    0x8(%ebp),%eax
 84ae126:	89 04 24             	mov    %eax,(%esp)
 84ae129:	e8 1e 00 00 00       	call   84ae14c <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE>
 84ae12e:	eb 19                	jmp    84ae149 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE+0x67>
 84ae130:	8b 45 10             	mov    0x10(%ebp),%eax
 84ae133:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ae137:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ae13a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae13e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ae141:	89 04 24             	mov    %eax,(%esp)
 84ae144:	e8 fb 07 00 00       	call   84ae944 <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84ae149:	c9                   	leave
 84ae14a:	c3                   	ret
 84ae14b:	90                   	nop

```

```c
// game_master::CMonsterDropTest::getDungeonDropResult @ 0x84ae0e2

/* game_master::CMonsterDropTest::getDungeonDropResult(std::list<map_item, std::allocator<map_item>
   >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&,
   std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >,
   std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::getDungeonDropResult(list *param_1,map *param_2,map *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      makeGoldItemDropList(param_1,param_2);
      return;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  makeGeneralItemDropList(param_1,param_2);
  makeUpgradeDropList(param_1,param_2);
  return;
}

```

---

## makeFileGoldContents

```asm
// === 084ad6d6 game_master::CMonsterDropTest::makeFileGoldContents  [0x084ad6d6-0x84ad829] ===
 84ad6d6:	55                   	push   %ebp
 84ad6d7:	89 e5                	mov    %esp,%ebp
 84ad6d9:	57                   	push   %edi
 84ad6da:	53                   	push   %ebx
 84ad6db:	81 ec 30 04 00 00    	sub    $0x430,%esp
 84ad6e1:	8d 9d ec fb ff ff    	lea    -0x414(%ebp),%ebx
 84ad6e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84ad6ec:	ba 00 01 00 00       	mov    $0x100,%edx
 84ad6f1:	89 df                	mov    %ebx,%edi
 84ad6f3:	89 d1                	mov    %edx,%ecx
 84ad6f5:	f3 ab                	rep stos %eax,%es:(%edi)
 84ad6f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ad6fa:	8b 55 10             	mov    0x10(%ebp),%edx
 84ad6fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad701:	89 04 24             	mov    %eax,(%esp)
 84ad704:	e8 97 48 ca ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84ad709:	83 ec 04             	sub    $0x4,%esp
 84ad70c:	e9 e0 00 00 00       	jmp    84ad7f1 <_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x11b>
 84ad711:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ad714:	89 04 24             	mov    %eax,(%esp)
 84ad717:	e8 24 fc c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ad71c:	8b 58 04             	mov    0x4(%eax),%ebx
 84ad71f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ad722:	89 04 24             	mov    %eax,(%esp)
 84ad725:	e8 16 fc c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ad72a:	8b 00                	mov    (%eax),%eax
 84ad72c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84ad730:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ad734:	c7 44 24 08 3b fd c7 	movl   $0x8c7fd3b,0x8(%esp)
 84ad73b:	08 
 84ad73c:	c7 44 24 04 f7 fe c7 	movl   $0x8c7fef7,0x4(%esp)
 84ad743:	08 
 84ad744:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 84ad74a:	89 04 24             	mov    %eax,(%esp)
 84ad74d:	e8 ee 0c bd ff       	call   807e440 <sprintf@plt>
 84ad752:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad755:	89 04 24             	mov    %eax,(%esp)
 84ad758:	e8 53 0c bd ff       	call   807e3b0 <strlen@plt>
 84ad75d:	89 c3                	mov    %eax,%ebx
 84ad75f:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 84ad765:	89 04 24             	mov    %eax,(%esp)
 84ad768:	e8 43 0c bd ff       	call   807e3b0 <strlen@plt>
 84ad76d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84ad770:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 84ad775:	76 18                	jbe    84ad78f <_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xb9>
 84ad777:	c7 44 24 04 03 ff c7 	movl   $0x8c7ff03,0x4(%esp)
 84ad77e:	08 
 84ad77f:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad782:	89 04 24             	mov    %eax,(%esp)
 84ad785:	e8 3c 13 00 00       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84ad78a:	e9 91 00 00 00       	jmp    84ad820 <_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x14a>
 84ad78f:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 84ad795:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad799:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad79c:	89 04 24             	mov    %eax,(%esp)
 84ad79f:	e8 bc 05 bd ff       	call   807dd60 <strcat@plt>
 84ad7a4:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84ad7ab:	00 
 84ad7ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ad7b3:	00 
 84ad7b4:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 84ad7ba:	89 04 24             	mov    %eax,(%esp)
 84ad7bd:	e8 fe 04 bd ff       	call   807dcc0 <memset@plt>
 84ad7c2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84ad7c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ad7cc:	00 
 84ad7cd:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84ad7d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad7d4:	89 04 24             	mov    %eax,(%esp)
 84ad7d7:	e8 28 b5 d0 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 84ad7dc:	83 ec 04             	sub    $0x4,%esp
 84ad7df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ad7e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad7e6:	8b 45 10             	mov    0x10(%ebp),%eax
 84ad7e9:	89 04 24             	mov    %eax,(%esp)
 84ad7ec:	e8 e9 47 e6 ff       	call   8311fda <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 84ad7f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ad7f4:	8b 55 10             	mov    0x10(%ebp),%edx
 84ad7f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad7fb:	89 04 24             	mov    %eax,(%esp)
 84ad7fe:	e8 17 fb c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ad803:	83 ec 04             	sub    $0x4,%esp
 84ad806:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ad809:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad80d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ad810:	89 04 24             	mov    %eax,(%esp)
 84ad813:	e8 b0 cb c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ad818:	84 c0                	test   %al,%al
 84ad81a:	0f 85 f1 fe ff ff    	jne    84ad711 <_ZN11game_master16CMonsterDropTest20makeFileGoldContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x3b>
 84ad820:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84ad823:	83 c4 00             	add    $0x0,%esp
 84ad826:	5b                   	pop    %ebx
 84ad827:	5f                   	pop    %edi
 84ad828:	5d                   	pop    %ebp
 84ad829:	c3                   	ret

```

```c
// game_master::CMonsterDropTest::makeFileGoldContents @ 0x84ad6d6

/* game_master::CMonsterDropTest::makeFileGoldContents(CUser*, char*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CMonsterDropTest::makeFileGoldContents(CUser *param_1,char *param_2,map *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char local_418 [1024];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  undefined4 local_10;
  
  pcVar6 = local_418;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_18);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return;
    }
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
    uVar7 = *(undefined4 *)(iVar5 + 4);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
    sprintf(local_418,"\"%s\"\t%d\t%d\n",&DAT_08c7fd3b,*puVar2,uVar7);
    sVar3 = strlen(param_2);
    sVar4 = strlen(local_418);
    if (89999 < sVar3 + sVar4) break;
    strcat(param_2,local_418);
    memset(local_418,0,0x400);
    uVar7 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_10,(int)local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_3,
               local_10,uVar7);
  }
  CBoosterTest::SendChatMsg(param_1,&DAT_08c7ff03);
  return;
}

```

---

## makeGeneralItemDropList

```asm
// === 084ae734 game_master::CMonsterDropTest::makeGeneralItemDropList  [0x084ae734-0x84ae943] ===
 84ae734:	55                   	push   %ebp
 84ae735:	89 e5                	mov    %esp,%ebp
 84ae737:	56                   	push   %esi
 84ae738:	53                   	push   %ebx
 84ae739:	83 ec 70             	sub    $0x70,%esp
 84ae73c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae73f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ae742:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae746:	89 04 24             	mov    %eax,(%esp)
 84ae749:	e8 3a 44 ca ff       	call   8152b88 <_ZNSt4listI8map_itemSaIS0_EE5beginEv>
 84ae74e:	83 ec 04             	sub    $0x4,%esp
 84ae751:	e9 b5 01 00 00       	jmp    84ae90b <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1d7>
 84ae756:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae759:	89 04 24             	mov    %eax,(%esp)
 84ae75c:	e8 49 61 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae761:	8b 40 12             	mov    0x12(%eax),%eax
 84ae764:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84ae767:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84ae76a:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84ae76d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae771:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae774:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae778:	89 04 24             	mov    %eax,(%esp)
 84ae77b:	e8 6e eb c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84ae780:	83 ec 04             	sub    $0x4,%esp
 84ae783:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae786:	89 04 24             	mov    %eax,(%esp)
 84ae789:	e8 1c 61 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae78e:	8b 40 12             	mov    0x12(%eax),%eax
 84ae791:	85 c0                	test   %eax,%eax
 84ae793:	0f 94 c0             	sete   %al
 84ae796:	84 c0                	test   %al,%al
 84ae798:	0f 84 bf 00 00 00    	je     84ae85d <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x129>
 84ae79e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84ae7a1:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae7a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae7a8:	89 04 24             	mov    %eax,(%esp)
 84ae7ab:	e8 6a eb c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ae7b0:	83 ec 04             	sub    $0x4,%esp
 84ae7b3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84ae7b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae7ba:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84ae7bd:	89 04 24             	mov    %eax,(%esp)
 84ae7c0:	e8 03 bc c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ae7c5:	84 c0                	test   %al,%al
 84ae7c7:	74 29                	je     84ae7f2 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xbe>
 84ae7c9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84ae7cc:	89 04 24             	mov    %eax,(%esp)
 84ae7cf:	e8 6c eb c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ae7d4:	89 c3                	mov    %eax,%ebx
 84ae7d6:	8b 73 04             	mov    0x4(%ebx),%esi
 84ae7d9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae7dc:	89 04 24             	mov    %eax,(%esp)
 84ae7df:	e8 c6 60 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae7e4:	8b 40 17             	mov    0x17(%eax),%eax
 84ae7e7:	8d 04 06             	lea    (%esi,%eax,1),%eax
 84ae7ea:	89 43 04             	mov    %eax,0x4(%ebx)
 84ae7ed:	e9 0e 01 00 00       	jmp    84ae900 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1cc>
 84ae7f2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae7f5:	89 04 24             	mov    %eax,(%esp)
 84ae7f8:	e8 ad 60 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae7fd:	8d 58 17             	lea    0x17(%eax),%ebx
 84ae800:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae803:	89 04 24             	mov    %eax,(%esp)
 84ae806:	e8 9f 60 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae80b:	8b 40 12             	mov    0x12(%eax),%eax
 84ae80e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84ae811:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ae814:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ae818:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84ae81b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae81f:	89 04 24             	mov    %eax,(%esp)
 84ae822:	e8 1a a5 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ae827:	83 ec 04             	sub    $0x4,%esp
 84ae82a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ae82d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae831:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84ae834:	89 04 24             	mov    %eax,(%esp)
 84ae837:	e8 e4 84 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84ae83c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84ae83f:	8d 55 c0             	lea    -0x40(%ebp),%edx
 84ae842:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae846:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae849:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae84d:	89 04 24             	mov    %eax,(%esp)
 84ae850:	e8 fb 84 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84ae855:	83 ec 04             	sub    $0x4,%esp
 84ae858:	e9 a3 00 00 00       	jmp    84ae900 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1cc>
 84ae85d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ae860:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae863:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae867:	89 04 24             	mov    %eax,(%esp)
 84ae86a:	e8 ab ea c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ae86f:	83 ec 04             	sub    $0x4,%esp
 84ae872:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ae875:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae879:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84ae87c:	89 04 24             	mov    %eax,(%esp)
 84ae87f:	e8 44 bb c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ae884:	84 c0                	test   %al,%al
 84ae886:	74 16                	je     84ae89e <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x16a>
 84ae888:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84ae88b:	89 04 24             	mov    %eax,(%esp)
 84ae88e:	e8 ad ea c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ae893:	8b 50 04             	mov    0x4(%eax),%edx
 84ae896:	83 c2 01             	add    $0x1,%edx
 84ae899:	89 50 04             	mov    %edx,0x4(%eax)
 84ae89c:	eb 62                	jmp    84ae900 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1cc>
 84ae89e:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 84ae8a5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae8a8:	89 04 24             	mov    %eax,(%esp)
 84ae8ab:	e8 fa 5f 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae8b0:	8b 40 12             	mov    0x12(%eax),%eax
 84ae8b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ae8b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ae8b9:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84ae8bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae8c0:	8d 55 f4             	lea    -0xc(%ebp),%edx
 84ae8c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae8c7:	89 04 24             	mov    %eax,(%esp)
 84ae8ca:	e8 72 a4 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ae8cf:	83 ec 04             	sub    $0x4,%esp
 84ae8d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ae8d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae8d9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84ae8dc:	89 04 24             	mov    %eax,(%esp)
 84ae8df:	e8 3c 84 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84ae8e4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ae8e7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 84ae8ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae8ee:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae8f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae8f5:	89 04 24             	mov    %eax,(%esp)
 84ae8f8:	e8 53 84 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84ae8fd:	83 ec 04             	sub    $0x4,%esp
 84ae900:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae903:	89 04 24             	mov    %eax,(%esp)
 84ae906:	e8 8b 5f 00 00       	call   84b4896 <_ZNSt14_List_iteratorI8map_itemEppEv>
 84ae90b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84ae90e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ae911:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae915:	89 04 24             	mov    %eax,(%esp)
 84ae918:	e8 a1 42 ca ff       	call   8152bbe <_ZNSt4listI8map_itemSaIS0_EE3endEv>
 84ae91d:	83 ec 04             	sub    $0x4,%esp
 84ae920:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84ae923:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae927:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae92a:	89 04 24             	mov    %eax,(%esp)
 84ae92d:	e8 3e 35 e6 ff       	call   8311e70 <_ZNKSt14_List_iteratorI8map_itemEneERKS1_>
 84ae932:	84 c0                	test   %al,%al
 84ae934:	0f 85 1c fe ff ff    	jne    84ae756 <_ZN11game_master16CMonsterDropTest23makeGeneralItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x22>
 84ae93a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84ae93d:	83 c4 00             	add    $0x0,%esp
 84ae940:	5b                   	pop    %ebx
 84ae941:	5e                   	pop    %esi
 84ae942:	5d                   	pop    %ebp
 84ae943:	c3                   	ret

```

```c
// game_master::CMonsterDropTest::makeGeneralItemDropList @ 0x84ae734

/* game_master::CMonsterDropTest::makeGeneralItemDropList(std::list<map_item,
   std::allocator<map_item> >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > >&) */

void game_master::CMonsterDropTest::makeGeneralItemDropList(list *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,int>> local_60 [4];
  _List_iterator<map_item> local_5c [4];
  _List_iterator local_58 [4];
  undefined4 local_54;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  pair local_4c [8];
  pair<int_const,int> local_44 [8];
  int local_3c [2];
  int local_34;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_5c,local_58);
    if (cVar1 == '\0') break;
    iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
    local_54 = *(undefined4 *)(iVar2 + 0x12);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_60)
    ;
    iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
    if (*(int *)(iVar2 + 0x12) == 0) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_50);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_60,(_Rb_tree_iterator *)local_50);
      if (cVar1 == '\0') {
        std::_List_iterator<map_item>::operator->(local_5c);
        iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
        local_34 = *(int *)(iVar2 + 0x12);
        std::make_pair<int,int>(local_3c,&local_34);
        std::pair<int_const,int>::pair<int,int>(local_44,(pair *)local_3c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_4c);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_60);
        iVar2 = *(int *)(iVar3 + 4);
        iVar4 = std::_List_iterator<map_item>::operator->(local_5c);
        *(int *)(iVar3 + 4) = iVar2 + *(int *)(iVar4 + 0x17);
      }
    }
    else {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_60,(_Rb_tree_iterator *)local_30);
      if (cVar1 == '\0') {
        local_14 = 1;
        iVar2 = std::_List_iterator<map_item>::operator->(local_5c);
        local_10 = *(int *)(iVar2 + 0x12);
        std::make_pair<int,int>(local_1c,&local_10);
        std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_60);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
    std::_List_iterator<map_item>::operator++(local_5c);
  }
  return;
}

```

---

## makeGoldItemDropList

```asm
// === 084ae944 game_master::CMonsterDropTest::makeGoldItemDropList  [0x084ae944-0x84aea7f] ===
 84ae944:	55                   	push   %ebp
 84ae945:	89 e5                	mov    %esp,%ebp
 84ae947:	83 ec 48             	sub    $0x48,%esp
 84ae94a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ae94d:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ae950:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae954:	89 04 24             	mov    %eax,(%esp)
 84ae957:	e8 2c 42 ca ff       	call   8152b88 <_ZNSt4listI8map_itemSaIS0_EE5beginEv>
 84ae95c:	83 ec 04             	sub    $0x4,%esp
 84ae95f:	e9 ea 00 00 00       	jmp    84aea4e <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x10a>
 84ae964:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ae967:	89 04 24             	mov    %eax,(%esp)
 84ae96a:	e8 3b 5f 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae96f:	8b 40 12             	mov    0x12(%eax),%eax
 84ae972:	85 c0                	test   %eax,%eax
 84ae974:	0f 94 c0             	sete   %al
 84ae977:	84 c0                	test   %al,%al
 84ae979:	0f 84 c4 00 00 00    	je     84aea43 <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xff>
 84ae97f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ae982:	89 04 24             	mov    %eax,(%esp)
 84ae985:	e8 20 5f 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae98a:	8d 50 17             	lea    0x17(%eax),%edx
 84ae98d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae990:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae994:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae997:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae99b:	89 04 24             	mov    %eax,(%esp)
 84ae99e:	e8 4b e9 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84ae9a3:	83 ec 04             	sub    $0x4,%esp
 84ae9a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ae9a9:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae9ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae9b0:	89 04 24             	mov    %eax,(%esp)
 84ae9b3:	e8 62 e9 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ae9b8:	83 ec 04             	sub    $0x4,%esp
 84ae9bb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ae9be:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae9c2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae9c5:	89 04 24             	mov    %eax,(%esp)
 84ae9c8:	e8 fb b9 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ae9cd:	84 c0                	test   %al,%al
 84ae9cf:	74 16                	je     84ae9e7 <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa3>
 84ae9d1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae9d4:	89 04 24             	mov    %eax,(%esp)
 84ae9d7:	e8 64 e9 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ae9dc:	8b 50 04             	mov    0x4(%eax),%edx
 84ae9df:	83 c2 01             	add    $0x1,%edx
 84ae9e2:	89 50 04             	mov    %edx,0x4(%eax)
 84ae9e5:	eb 5c                	jmp    84aea43 <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xff>
 84ae9e7:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84ae9ee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ae9f1:	89 04 24             	mov    %eax,(%esp)
 84ae9f4:	e8 b1 5e 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae9f9:	8d 48 17             	lea    0x17(%eax),%ecx
 84ae9fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84ae9ff:	8d 55 f4             	lea    -0xc(%ebp),%edx
 84aea02:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aea06:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84aea0a:	89 04 24             	mov    %eax,(%esp)
 84aea0d:	e8 2f a3 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84aea12:	83 ec 04             	sub    $0x4,%esp
 84aea15:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aea18:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aea1c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84aea1f:	89 04 24             	mov    %eax,(%esp)
 84aea22:	e8 f9 82 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84aea27:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84aea2a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84aea2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aea31:	8b 55 10             	mov    0x10(%ebp),%edx
 84aea34:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aea38:	89 04 24             	mov    %eax,(%esp)
 84aea3b:	e8 10 83 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84aea40:	83 ec 04             	sub    $0x4,%esp
 84aea43:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84aea46:	89 04 24             	mov    %eax,(%esp)
 84aea49:	e8 48 5e 00 00       	call   84b4896 <_ZNSt14_List_iteratorI8map_itemEppEv>
 84aea4e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aea51:	8b 55 0c             	mov    0xc(%ebp),%edx
 84aea54:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aea58:	89 04 24             	mov    %eax,(%esp)
 84aea5b:	e8 5e 41 ca ff       	call   8152bbe <_ZNSt4listI8map_itemSaIS0_EE3endEv>
 84aea60:	83 ec 04             	sub    $0x4,%esp
 84aea63:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84aea66:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aea6a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84aea6d:	89 04 24             	mov    %eax,(%esp)
 84aea70:	e8 fb 33 e6 ff       	call   8311e70 <_ZNKSt14_List_iteratorI8map_itemEneERKS1_>
 84aea75:	84 c0                	test   %al,%al
 84aea77:	0f 85 e7 fe ff ff    	jne    84ae964 <_ZN11game_master16CMonsterDropTest20makeGoldItemDropListERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x20>
 84aea7d:	c9                   	leave
 84aea7e:	c3                   	ret
 84aea7f:	90                   	nop

```

```c
// game_master::CMonsterDropTest::makeGoldItemDropList @ 0x84ae944

/* game_master::CMonsterDropTest::makeGoldItemDropList(std::list<map_item, std::allocator<map_item>
   >&, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CMonsterDropTest::makeGoldItemDropList(list *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_38 [4];
  _List_iterator<map_item> local_34 [4];
  _List_iterator local_30 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  int local_18 [2];
  undefined4 local_10;
  
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_34,local_30);
    if (cVar1 == '\0') break;
    iVar2 = std::_List_iterator<map_item>::operator->(local_34);
    if (*(int *)(iVar2 + 0x12) == 0) {
      std::_List_iterator<map_item>::operator->(local_34);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_38);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_38,(_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') {
        local_10 = 1;
        iVar2 = std::_List_iterator<map_item>::operator->(local_34);
        std::make_pair<int,int>(local_18,(int *)(iVar2 + 0x17));
        std::pair<int_const,int>::pair<int,int>(local_20,(pair *)local_18);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_38);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
    std::_List_iterator<map_item>::operator++(local_34);
  }
  return;
}

```

---

## makeUpgradeDropList

```asm
// === 084ae14c game_master::CMonsterDropTest::makeUpgradeDropList  [0x084ae14c-0x84ae733] ===
 84ae14c:	55                   	push   %ebp
 84ae14d:	89 e5                	mov    %esp,%ebp
 84ae14f:	56                   	push   %esi
 84ae150:	53                   	push   %ebx
 84ae151:	81 ec 30 01 00 00    	sub    $0x130,%esp
 84ae157:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae15d:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ae160:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae164:	89 04 24             	mov    %eax,(%esp)
 84ae167:	e8 1c 4a ca ff       	call   8152b88 <_ZNSt4listI8map_itemSaIS0_EE5beginEv>
 84ae16c:	83 ec 04             	sub    $0x4,%esp
 84ae16f:	e9 7d 05 00 00       	jmp    84ae6f1 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x5a5>
 84ae174:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae17a:	89 04 24             	mov    %eax,(%esp)
 84ae17d:	e8 28 67 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae182:	8b 40 12             	mov    0x12(%eax),%eax
 84ae185:	85 c0                	test   %eax,%eax
 84ae187:	0f 94 c0             	sete   %al
 84ae18a:	84 c0                	test   %al,%al
 84ae18c:	0f 85 4d 05 00 00    	jne    84ae6df <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x593>
 84ae192:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae198:	89 04 24             	mov    %eax,(%esp)
 84ae19b:	e8 0a 67 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae1a0:	8b 40 12             	mov    0x12(%eax),%eax
 84ae1a3:	89 c3                	mov    %eax,%ebx
 84ae1a5:	e8 f1 df c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ae1aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ae1ae:	89 04 24             	mov    %eax,(%esp)
 84ae1b1:	e8 7c 18 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84ae1b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84ae1b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ae1bc:	89 04 24             	mov    %eax,(%esp)
 84ae1bf:	e8 36 31 c4 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84ae1c4:	84 c0                	test   %al,%al
 84ae1c6:	0f 85 16 05 00 00    	jne    84ae6e2 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x596>
 84ae1cc:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae1d2:	89 04 24             	mov    %eax,(%esp)
 84ae1d5:	e8 d0 66 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae1da:	8b 40 17             	mov    0x17(%eax),%eax
 84ae1dd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ae1e0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84ae1e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ae1ea:	3d f0 5d 00 00       	cmp    $0x5df0,%eax
 84ae1ef:	74 42                	je     84ae233 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xe7>
 84ae1f1:	3d f0 5d 00 00       	cmp    $0x5df0,%eax
 84ae1f6:	7f 10                	jg     84ae208 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xbc>
 84ae1f8:	3d a6 0f 00 00       	cmp    $0xfa6,%eax
 84ae1fd:	74 22                	je     84ae221 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xd5>
 84ae1ff:	3d a7 5a 00 00       	cmp    $0x5aa7,%eax
 84ae204:	74 12                	je     84ae218 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xcc>
 84ae206:	eb 3b                	jmp    84ae243 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf7>
 84ae208:	3d 23 6a 00 00       	cmp    $0x6a23,%eax
 84ae20d:	74 1b                	je     84ae22a <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xde>
 84ae20f:	3d 70 72 00 00       	cmp    $0x7270,%eax
 84ae214:	74 26                	je     84ae23c <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf0>
 84ae216:	eb 2b                	jmp    84ae243 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf7>
 84ae218:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84ae21f:	eb 22                	jmp    84ae243 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf7>
 84ae221:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 84ae228:	eb 19                	jmp    84ae243 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf7>
 84ae22a:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 84ae231:	eb 10                	jmp    84ae243 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf7>
 84ae233:	c7 45 f4 04 00 00 00 	movl   $0x4,-0xc(%ebp)
 84ae23a:	eb 07                	jmp    84ae243 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0xf7>
 84ae23c:	c7 45 f4 05 00 00 00 	movl   $0x5,-0xc(%ebp)
 84ae243:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ae246:	89 04 24             	mov    %eax,(%esp)
 84ae249:	e8 06 2a c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84ae24e:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 84ae254:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae25a:	8d 95 10 ff ff ff    	lea    -0xf0(%ebp),%edx
 84ae260:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae264:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae267:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae26b:	89 04 24             	mov    %eax,(%esp)
 84ae26e:	e8 45 66 00 00       	call   84b48b8 <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE4findERS3_>
 84ae273:	83 ec 04             	sub    $0x4,%esp
 84ae276:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 84ae27c:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae27f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae283:	89 04 24             	mov    %eax,(%esp)
 84ae286:	e8 99 4f ee ff       	call   8393224 <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE3endEv>
 84ae28b:	83 ec 04             	sub    $0x4,%esp
 84ae28e:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 84ae294:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae298:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae29e:	89 04 24             	mov    %eax,(%esp)
 84ae2a1:	e8 a4 4f ee ff       	call   839324a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEneERKS9_>
 84ae2a6:	84 c0                	test   %al,%al
 84ae2a8:	0f 84 78 02 00 00    	je     84ae526 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x3da>
 84ae2ae:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae2b4:	89 04 24             	mov    %eax,(%esp)
 84ae2b7:	e8 ee 65 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae2bc:	83 c0 10             	add    $0x10,%eax
 84ae2bf:	89 04 24             	mov    %eax,(%esp)
 84ae2c2:	e8 a5 6d c4 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 84ae2c7:	0f b6 c0             	movzbl %al,%eax
 84ae2ca:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 84ae2d0:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae2d6:	89 04 24             	mov    %eax,(%esp)
 84ae2d9:	e8 9e 4f ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ae2de:	8d 48 04             	lea    0x4(%eax),%ecx
 84ae2e1:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84ae2e7:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 84ae2ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae2f1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ae2f5:	89 04 24             	mov    %eax,(%esp)
 84ae2f8:	e8 f1 ef c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84ae2fd:	83 ec 04             	sub    $0x4,%esp
 84ae300:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae306:	89 04 24             	mov    %eax,(%esp)
 84ae309:	e8 6e 4f ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ae30e:	8d 50 04             	lea    0x4(%eax),%edx
 84ae311:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84ae317:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae31b:	89 04 24             	mov    %eax,(%esp)
 84ae31e:	e8 f7 ef c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ae323:	83 ec 04             	sub    $0x4,%esp
 84ae326:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 84ae32c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae330:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84ae336:	89 04 24             	mov    %eax,(%esp)
 84ae339:	e8 8a c0 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ae33e:	84 c0                	test   %al,%al
 84ae340:	74 1c                	je     84ae35e <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x212>
 84ae342:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84ae348:	89 04 24             	mov    %eax,(%esp)
 84ae34b:	e8 f0 ef c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ae350:	8b 50 04             	mov    0x4(%eax),%edx
 84ae353:	83 c2 01             	add    $0x1,%edx
 84ae356:	89 50 04             	mov    %edx,0x4(%eax)
 84ae359:	e9 96 00 00 00       	jmp    84ae3f4 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x2a8>
 84ae35e:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
 84ae365:	00 00 00 
 84ae368:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae36e:	89 04 24             	mov    %eax,(%esp)
 84ae371:	e8 34 65 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae376:	83 c0 10             	add    $0x10,%eax
 84ae379:	89 04 24             	mov    %eax,(%esp)
 84ae37c:	e8 eb 6c c4 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 84ae381:	88 85 3f ff ff ff    	mov    %al,-0xc1(%ebp)
 84ae387:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84ae38d:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84ae393:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae397:	8d 95 3f ff ff ff    	lea    -0xc1(%ebp),%edx
 84ae39d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae3a1:	89 04 24             	mov    %eax,(%esp)
 84ae3a4:	e8 3b 65 00 00       	call   84b48e4 <_ZSt9make_pairIhiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ae3a9:	83 ec 04             	sub    $0x4,%esp
 84ae3ac:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84ae3b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae3b6:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84ae3bc:	89 04 24             	mov    %eax,(%esp)
 84ae3bf:	e8 6c 65 00 00       	call   84b4930 <_ZNSt4pairIKiiEC1IhiEEOS_IT_T0_E>
 84ae3c4:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae3ca:	89 04 24             	mov    %eax,(%esp)
 84ae3cd:	e8 aa 4e ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ae3d2:	8d 48 04             	lea    0x4(%eax),%ecx
 84ae3d5:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84ae3db:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 84ae3e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae3e5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ae3e9:	89 04 24             	mov    %eax,(%esp)
 84ae3ec:	e8 5f 89 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84ae3f1:	83 ec 04             	sub    $0x4,%esp
 84ae3f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ae3f7:	05 e8 03 00 00       	add    $0x3e8,%eax
 84ae3fc:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 84ae402:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae408:	89 04 24             	mov    %eax,(%esp)
 84ae40b:	e8 6c 4e ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ae410:	8d 48 04             	lea    0x4(%eax),%ecx
 84ae413:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 84ae419:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 84ae41f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae423:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ae427:	89 04 24             	mov    %eax,(%esp)
 84ae42a:	e8 bf ee c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84ae42f:	83 ec 04             	sub    $0x4,%esp
 84ae432:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 84ae438:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 84ae43e:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae444:	89 04 24             	mov    %eax,(%esp)
 84ae447:	e8 30 4e ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ae44c:	8d 50 04             	lea    0x4(%eax),%edx
 84ae44f:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 84ae455:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae459:	89 04 24             	mov    %eax,(%esp)
 84ae45c:	e8 b9 ee c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84ae461:	83 ec 04             	sub    $0x4,%esp
 84ae464:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 84ae46a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae46e:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84ae474:	89 04 24             	mov    %eax,(%esp)
 84ae477:	e8 4c bf c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84ae47c:	84 c0                	test   %al,%al
 84ae47e:	74 1c                	je     84ae49c <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x350>
 84ae480:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 84ae486:	89 04 24             	mov    %eax,(%esp)
 84ae489:	e8 b2 ee c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84ae48e:	8b 50 04             	mov    0x4(%eax),%edx
 84ae491:	83 c2 01             	add    $0x1,%edx
 84ae494:	89 50 04             	mov    %edx,0x4(%eax)
 84ae497:	e9 47 02 00 00       	jmp    84ae6e3 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x597>
 84ae49c:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
 84ae4a3:	00 00 00 
 84ae4a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ae4a9:	05 e8 03 00 00       	add    $0x3e8,%eax
 84ae4ae:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 84ae4b4:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84ae4ba:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 84ae4c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae4c4:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 84ae4ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae4ce:	89 04 24             	mov    %eax,(%esp)
 84ae4d1:	e8 6b a8 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ae4d6:	83 ec 04             	sub    $0x4,%esp
 84ae4d9:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84ae4df:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae4e3:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84ae4e9:	89 04 24             	mov    %eax,(%esp)
 84ae4ec:	e8 2f 88 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84ae4f1:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 84ae4f7:	89 04 24             	mov    %eax,(%esp)
 84ae4fa:	e8 7d 4d ee ff       	call   839327c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIiiSt4lessIiESaIS0_IS1_iEEEEEptEv>
 84ae4ff:	8d 48 04             	lea    0x4(%eax),%ecx
 84ae502:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84ae508:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 84ae50e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae512:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ae516:	89 04 24             	mov    %eax,(%esp)
 84ae519:	e8 32 88 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84ae51e:	83 ec 04             	sub    $0x4,%esp
 84ae521:	e9 bd 01 00 00       	jmp    84ae6e3 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x597>
 84ae526:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 84ae52c:	89 04 24             	mov    %eax,(%esp)
 84ae52f:	e8 30 87 c1 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 84ae534:	c7 45 80 01 00 00 00 	movl   $0x1,-0x80(%ebp)
 84ae53b:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae541:	89 04 24             	mov    %eax,(%esp)
 84ae544:	e8 61 63 00 00       	call   84b48aa <_ZNKSt14_List_iteratorI8map_itemEptEv>
 84ae549:	83 c0 10             	add    $0x10,%eax
 84ae54c:	89 04 24             	mov    %eax,(%esp)
 84ae54f:	e8 18 6b c4 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 84ae554:	88 45 87             	mov    %al,-0x79(%ebp)
 84ae557:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ae55d:	8d 55 80             	lea    -0x80(%ebp),%edx
 84ae560:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae564:	8d 55 87             	lea    -0x79(%ebp),%edx
 84ae567:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae56b:	89 04 24             	mov    %eax,(%esp)
 84ae56e:	e8 71 63 00 00       	call   84b48e4 <_ZSt9make_pairIhiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ae573:	83 ec 04             	sub    $0x4,%esp
 84ae576:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84ae57c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae580:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84ae586:	89 04 24             	mov    %eax,(%esp)
 84ae589:	e8 a2 63 00 00       	call   84b4930 <_ZNSt4pairIKiiEC1IhiEEOS_IT_T0_E>
 84ae58e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84ae594:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84ae59a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae59e:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 84ae5a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae5a8:	89 04 24             	mov    %eax,(%esp)
 84ae5ab:	e8 a0 87 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84ae5b0:	83 ec 04             	sub    $0x4,%esp
 84ae5b3:	c7 45 a0 01 00 00 00 	movl   $0x1,-0x60(%ebp)
 84ae5ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ae5bd:	05 e8 03 00 00       	add    $0x3e8,%eax
 84ae5c2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84ae5c5:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ae5c8:	8d 55 a0             	lea    -0x60(%ebp),%edx
 84ae5cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae5cf:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 84ae5d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae5d6:	89 04 24             	mov    %eax,(%esp)
 84ae5d9:	e8 63 a7 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84ae5de:	83 ec 04             	sub    $0x4,%esp
 84ae5e1:	8d 45 98             	lea    -0x68(%ebp),%eax
 84ae5e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae5e8:	8d 45 90             	lea    -0x70(%ebp),%eax
 84ae5eb:	89 04 24             	mov    %eax,(%esp)
 84ae5ee:	e8 2d 87 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84ae5f3:	8d 45 88             	lea    -0x78(%ebp),%eax
 84ae5f6:	8d 55 90             	lea    -0x70(%ebp),%edx
 84ae5f9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae5fd:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 84ae603:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae607:	89 04 24             	mov    %eax,(%esp)
 84ae60a:	e8 41 87 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84ae60f:	83 ec 04             	sub    $0x4,%esp
 84ae612:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ae615:	89 04 24             	mov    %eax,(%esp)
 84ae618:	e8 37 26 c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84ae61d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84ae620:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae623:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 84ae629:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae62d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84ae630:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae634:	89 04 24             	mov    %eax,(%esp)
 84ae637:	e8 28 63 00 00       	call   84b4964 <_ZSt9make_pairIiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEEES3_INSt17__decay_and_stripIT_E6__typeENS9_IT0_E6__typeEEOSA_OSD_>
 84ae63c:	83 ec 04             	sub    $0x4,%esp
 84ae63f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae642:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae646:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ae649:	89 04 24             	mov    %eax,(%esp)
 84ae64c:	e8 5f 63 00 00       	call   84b49b0 <_ZNSt4pairIKiSt3mapIiiSt4lessIiESaIS_IS0_iEEEEC1IiS6_EEOS_IT_T0_E>
 84ae651:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84ae654:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84ae657:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ae65b:	8b 55 10             	mov    0x10(%ebp),%edx
 84ae65e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae662:	89 04 24             	mov    %eax,(%esp)
 84ae665:	e8 80 63 00 00       	call   84b49ea <_ZNSt3mapIiS_IiiSt4lessIiESaISt4pairIKiiEEES1_SaIS2_IS3_S6_EEE6insertERKS7_>
 84ae66a:	83 ec 04             	sub    $0x4,%esp
 84ae66d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ae670:	89 04 24             	mov    %eax,(%esp)
 84ae673:	e8 d0 fb f1 ff       	call   83ce248 <_ZNSt4pairIKiSt3mapIiiSt4lessIiESaIS_IS0_iEEEED1Ev>
 84ae678:	eb 2a                	jmp    84ae6a4 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x558>
 84ae67a:	89 d3                	mov    %edx,%ebx
 84ae67c:	89 c6                	mov    %eax,%esi
 84ae67e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ae681:	89 04 24             	mov    %eax,(%esp)
 84ae684:	e8 bf fb f1 ff       	call   83ce248 <_ZNSt4pairIKiSt3mapIiiSt4lessIiESaIS_IS0_iEEEED1Ev>
 84ae689:	89 f0                	mov    %esi,%eax
 84ae68b:	89 da                	mov    %ebx,%edx
 84ae68d:	eb 00                	jmp    84ae68f <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x543>
 84ae68f:	89 d3                	mov    %edx,%ebx
 84ae691:	89 c6                	mov    %eax,%esi
 84ae693:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae696:	89 04 24             	mov    %eax,(%esp)
 84ae699:	e8 b2 5d 00 00       	call   84b4450 <_ZNSt4pairIiSt3mapIiiSt4lessIiESaIS_IKiiEEEED1Ev>
 84ae69e:	89 f0                	mov    %esi,%eax
 84ae6a0:	89 da                	mov    %ebx,%edx
 84ae6a2:	eb 0d                	jmp    84ae6b1 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x565>
 84ae6a4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ae6a7:	89 04 24             	mov    %eax,(%esp)
 84ae6aa:	e8 a1 5d 00 00       	call   84b4450 <_ZNSt4pairIiSt3mapIiiSt4lessIiESaIS_IKiiEEEED1Ev>
 84ae6af:	eb 1e                	jmp    84ae6cf <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x583>
 84ae6b1:	89 d3                	mov    %edx,%ebx
 84ae6b3:	89 c6                	mov    %eax,%esi
 84ae6b5:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 84ae6bb:	89 04 24             	mov    %eax,(%esp)
 84ae6be:	e8 03 84 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84ae6c3:	89 f0                	mov    %esi,%eax
 84ae6c5:	89 da                	mov    %ebx,%edx
 84ae6c7:	89 04 24             	mov    %eax,(%esp)
 84ae6ca:	e8 81 50 63 00       	call   8ae3750 <_Unwind_Resume>
 84ae6cf:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 84ae6d5:	89 04 24             	mov    %eax,(%esp)
 84ae6d8:	e8 e9 83 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84ae6dd:	eb 04                	jmp    84ae6e3 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x597>
 84ae6df:	90                   	nop
 84ae6e0:	eb 01                	jmp    84ae6e3 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x597>
 84ae6e2:	90                   	nop
 84ae6e3:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae6e9:	89 04 24             	mov    %eax,(%esp)
 84ae6ec:	e8 a5 61 00 00       	call   84b4896 <_ZNSt14_List_iteratorI8map_itemEppEv>
 84ae6f1:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 84ae6f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ae6fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ae6fe:	89 04 24             	mov    %eax,(%esp)
 84ae701:	e8 b8 44 ca ff       	call   8152bbe <_ZNSt4listI8map_itemSaIS0_EE3endEv>
 84ae706:	83 ec 04             	sub    $0x4,%esp
 84ae709:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 84ae70f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae713:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84ae719:	89 04 24             	mov    %eax,(%esp)
 84ae71c:	e8 4f 37 e6 ff       	call   8311e70 <_ZNKSt14_List_iteratorI8map_itemEneERKS1_>
 84ae721:	84 c0                	test   %al,%al
 84ae723:	0f 85 4b fa ff ff    	jne    84ae174 <_ZN11game_master16CMonsterDropTest19makeUpgradeDropListERSt4listI8map_itemSaIS2_EERSt3mapIiS6_IiiSt4lessIiESaISt4pairIKiiEEES8_SaIS9_ISA_SD_EEE+0x28>
 84ae729:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84ae72c:	83 c4 00             	add    $0x0,%esp
 84ae72f:	5b                   	pop    %ebx
 84ae730:	5e                   	pop    %esi
 84ae731:	5d                   	pop    %ebp
 84ae732:	c3                   	ret
 84ae733:	90                   	nop

```

```c
// game_master::CMonsterDropTest::makeUpgradeDropList @ 0x84ae14c

/* game_master::CMonsterDropTest::makeUpgradeDropList(std::list<map_item, std::allocator<map_item>
   >&, std::map<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> >
   >, std::less<int>, std::allocator<std::pair<int const, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::makeUpgradeDropList(list *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  CDataManager *this;
  int local_120;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_11c [24];
  int local_104;
  _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
  local_100 [4];
  _List_iterator<map_item> local_fc [4];
  _List_iterator local_f8 [4];
  undefined4 local_f4;
  map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
  local_f0 [4];
  uint local_ec;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_e8 [4];
  pair local_e4 [8];
  pair<int_const,int> local_dc [8];
  uchar local_d4 [8];
  undefined4 local_cc;
  undefined1 local_c5;
  int local_c4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_c0 [4];
  pair local_bc [8];
  pair<int_const,int> local_b4 [8];
  int local_ac [2];
  undefined4 local_a4;
  int local_a0;
  pair local_9c [8];
  pair<int_const,int> local_94 [8];
  uchar local_8c [8];
  undefined4 local_84;
  undefined1 local_7d;
  pair local_7c [8];
  pair<int_const,int> local_74 [8];
  int local_6c [2];
  undefined4 local_64;
  int local_60;
  pair local_5c [8];
  pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
  local_54 [28];
  pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>> local_38 [28];
  undefined4 local_1c;
  CItem *local_18;
  int local_14;
  int local_10;
  
  std::list<map_item,std::allocator<map_item>>::begin();
  while( true ) {
    std::list<map_item,std::allocator<map_item>>::end();
    cVar1 = std::_List_iterator<map_item>::operator!=(local_fc,local_f8);
    if (cVar1 == '\0') break;
    iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
    if (*(int *)(iVar2 + 0x12) != 0) {
      iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
      iVar2 = *(int *)(iVar2 + 0x12);
      this = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(this,iVar2);
      cVar1 = CItem::is_stackable(local_18);
      if (cVar1 == '\0') {
        iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
        local_14 = *(int *)(iVar2 + 0x17);
        local_10 = 0;
        if (local_14 == 0x5df0) {
          local_10 = 4;
        }
        else if (local_14 < 0x5df1) {
          if (local_14 == 0xfa6) {
            local_10 = 2;
          }
          else if (local_14 == 0x5aa7) {
            local_10 = 1;
          }
        }
        else if (local_14 == 0x6a23) {
          local_10 = 3;
        }
        else if (local_14 == 0x7270) {
          local_10 = 5;
        }
        local_f4 = CItem::get_grade(local_18);
        std::
        map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
        ::find((int *)local_100);
        std::
        map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
        ::end(local_f0);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
                ::operator!=(local_100,(_Rb_tree_iterator *)local_f0);
        if (cVar1 == '\0') {
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_11c);
          local_84 = 1;
          iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
          local_7d = Inven_Item::GetUpgrade((Inven_Item *)(iVar2 + 0x10));
                    /* try { // try from 084ae56e to 084ae63b has its CatchHandler @ 084ae6b1 */
          std::make_pair<unsigned_char,int>(local_8c,(int *)&local_7d);
          std::pair<int_const,int>::pair<unsigned_char,int>(local_94,local_8c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_9c);
          local_64 = 1;
          local_60 = local_10 + 1000;
          std::make_pair<int,int>(local_6c,&local_60);
          std::pair<int_const,int>::pair<int,int>(local_74,(pair *)local_6c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_7c);
          local_1c = CItem::get_grade(local_18);
          std::
          make_pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>&>
                    ((int *)local_38,(map *)&local_1c);
                    /* try { // try from 084ae64c to 084ae650 has its CatchHandler @ 084ae68f */
          std::
          pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
          ::pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
                    (local_54,local_38);
                    /* try { // try from 084ae665 to 084ae669 has its CatchHandler @ 084ae67a */
          std::
          map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
          ::insert(local_5c);
                    /* try { // try from 084ae673 to 084ae677 has its CatchHandler @ 084ae68f */
          std::
          pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
          ::~pair(local_54);
                    /* try { // try from 084ae6aa to 084ae6ae has its CatchHandler @ 084ae6b1 */
          std::pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>::
          ~pair(local_38);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_11c)
          ;
        }
        else {
          iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
          local_ec = Inven_Item::GetUpgrade((Inven_Item *)(iVar2 + 0x10));
          local_ec = local_ec & 0xff;
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    (&local_104);
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_e8);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104,
                             (_Rb_tree_iterator *)local_e8);
          if (cVar1 == '\0') {
            local_cc = 1;
            iVar2 = std::_List_iterator<map_item>::operator->(local_fc);
            local_c5 = Inven_Item::GetUpgrade((Inven_Item *)(iVar2 + 0x10));
            std::make_pair<unsigned_char,int>(local_d4,(int *)&local_c5);
            std::pair<int_const,int>::pair<unsigned_char,int>(local_dc,local_d4);
            std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
            ::operator->(local_100);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_e4);
          }
          else {
            iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104);
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
          local_c4 = local_10 + 1000;
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    (&local_120);
          local_104 = local_120;
          std::
          _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
          ::operator->(local_100);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_c0);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104,
                             (_Rb_tree_iterator *)local_c0);
          if (cVar1 == '\0') {
            local_a4 = 1;
            local_a0 = local_10 + 1000;
            std::make_pair<int,int>(local_ac,&local_a0);
            std::pair<int_const,int>::pair<int,int>(local_b4,(pair *)local_ac);
            std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>
            ::operator->(local_100);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_bc);
          }
          else {
            iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_104);
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
          }
        }
      }
    }
    std::_List_iterator<map_item>::operator++(local_fc);
  }
  return;
}

```

---

## parse

```asm
// === 084ace8a game_master::CMonsterDropTest::parse  [0x084ace8a-0x84acf97] ===
 84ace8a:	55                   	push   %ebp
 84ace8b:	89 e5                	mov    %esp,%ebp
 84ace8d:	56                   	push   %esi
 84ace8e:	53                   	push   %ebx
 84ace8f:	83 ec 20             	sub    $0x20,%esp
 84ace92:	8b 45 08             	mov    0x8(%ebp),%eax
 84ace95:	89 04 24             	mov    %eax,(%esp)
 84ace98:	e8 f9 71 00 00       	call   84b4096 <_ZN11game_master16CMonsterDropTest5clearEv>
 84ace9d:	8b 45 08             	mov    0x8(%ebp),%eax
 84acea0:	8d 70 0c             	lea    0xc(%eax),%esi
 84acea3:	8b 45 08             	mov    0x8(%ebp),%eax
 84acea6:	8d 58 08             	lea    0x8(%eax),%ebx
 84acea9:	8b 45 08             	mov    0x8(%ebp),%eax
 84aceac:	8b 40 04             	mov    0x4(%eax),%eax
 84aceaf:	83 c0 0c             	add    $0xc,%eax
 84aceb2:	89 04 24             	mov    %eax,(%esp)
 84aceb5:	e8 36 96 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aceba:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84acebe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84acec2:	c7 44 24 04 97 fd c7 	movl   $0x8c7fd97,0x4(%esp)
 84acec9:	08 
 84aceca:	89 04 24             	mov    %eax,(%esp)
 84acecd:	e8 0e 0b bd ff       	call   807d9e0 <sscanf@plt>
 84aced2:	8b 45 08             	mov    0x8(%ebp),%eax
 84aced5:	89 04 24             	mov    %eax,(%esp)
 84aced8:	e8 dd 70 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84acedd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84acee0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84acee4:	0f 84 a6 00 00 00    	je     84acf90 <_ZN11game_master16CMonsterDropTest5parseEv+0x106>
 84aceea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aceed:	89 04 24             	mov    %eax,(%esp)
 84acef0:	e8 57 82 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84acef5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84acef8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84acefc:	75 15                	jne    84acf13 <_ZN11game_master16CMonsterDropTest5parseEv+0x89>
 84acefe:	c7 44 24 04 9c fd c7 	movl   $0x8c7fd9c,0x4(%esp)
 84acf05:	08 
 84acf06:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84acf09:	89 04 24             	mov    %eax,(%esp)
 84acf0c:	e8 b5 1b 00 00       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84acf11:	eb 7e                	jmp    84acf91 <_ZN11game_master16CMonsterDropTest5parseEv+0x107>
 84acf13:	8b 45 08             	mov    0x8(%ebp),%eax
 84acf16:	8b 40 08             	mov    0x8(%eax),%eax
 84acf19:	83 f8 01             	cmp    $0x1,%eax
 84acf1c:	74 0c                	je     84acf2a <_ZN11game_master16CMonsterDropTest5parseEv+0xa0>
 84acf1e:	83 f8 01             	cmp    $0x1,%eax
 84acf21:	72 6e                	jb     84acf91 <_ZN11game_master16CMonsterDropTest5parseEv+0x107>
 84acf23:	83 f8 03             	cmp    $0x3,%eax
 84acf26:	77 69                	ja     84acf91 <_ZN11game_master16CMonsterDropTest5parseEv+0x107>
 84acf28:	eb 51                	jmp    84acf7b <_ZN11game_master16CMonsterDropTest5parseEv+0xf1>
 84acf2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acf2d:	89 04 24             	mov    %eax,(%esp)
 84acf30:	e8 73 73 00 00       	call   84b42a8 <_ZN6CParty20getPassedMapInfoListEv>
 84acf35:	89 04 24             	mov    %eax,(%esp)
 84acf38:	e8 d3 77 00 00       	call   84b4710 <_ZNSt6vectorI7MapInfoSaIS0_EE5clearEv>
 84acf3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acf40:	05 24 0b 00 00       	add    $0xb24,%eax
 84acf45:	89 04 24             	mov    %eax,(%esp)
 84acf48:	e8 7f fc d7 ff       	call   822cbcc <_ZN13CBattle_Field17GetCurrentMapInfoEv>
 84acf4d:	89 c3                	mov    %eax,%ebx
 84acf4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acf52:	89 04 24             	mov    %eax,(%esp)
 84acf55:	e8 4e 73 00 00       	call   84b42a8 <_ZN6CParty20getPassedMapInfoListEv>
 84acf5a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84acf5e:	89 04 24             	mov    %eax,(%esp)
 84acf61:	e8 c6 77 00 00       	call   84b472c <_ZNSt6vectorI7MapInfoSaIS0_EE9push_backERKS0_>
 84acf66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84acf6d:	00 
 84acf6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acf71:	89 04 24             	mov    %eax,(%esp)
 84acf74:	e8 13 73 00 00       	call   84b428c <_ZN6CParty19setDungeonMapSavingEb>
 84acf79:	eb 16                	jmp    84acf91 <_ZN11game_master16CMonsterDropTest5parseEv+0x107>
 84acf7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acf82:	00 
 84acf83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acf86:	89 04 24             	mov    %eax,(%esp)
 84acf89:	e8 fe 72 00 00       	call   84b428c <_ZN6CParty19setDungeonMapSavingEb>
 84acf8e:	eb 01                	jmp    84acf91 <_ZN11game_master16CMonsterDropTest5parseEv+0x107>
 84acf90:	90                   	nop
 84acf91:	83 c4 20             	add    $0x20,%esp
 84acf94:	5b                   	pop    %ebx
 84acf95:	5e                   	pop    %esi
 84acf96:	5d                   	pop    %ebp
 84acf97:	c3                   	ret

```

```c
// game_master::CMonsterDropTest::parse @ 0x84ace8a

/* game_master::CMonsterDropTest::parse() */

void __thiscall game_master::CMonsterDropTest::parse(CMonsterDropTest *this)

{
  uint uVar1;
  char *__s;
  CUser *this_00;
  CParty *this_01;
  vector<MapInfo,std::allocator<MapInfo>> *pvVar2;
  MapInfo *pMVar3;
  
  clear(this);
  __s = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  sscanf(__s,"%d%d",this + 8,this + 0xc);
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUser *)0x0) {
    this_01 = (CParty *)CUser::GetParty(this_00);
    if (this_01 == (CParty *)0x0) {
      CBoosterTest::SendChatMsg(this_00,&DAT_08c7fd9c);
    }
    else {
      uVar1 = *(uint *)(this + 8);
      if (uVar1 == 1) {
        pvVar2 = (vector<MapInfo,std::allocator<MapInfo>> *)CParty::getPassedMapInfoList(this_01);
        std::vector<MapInfo,std::allocator<MapInfo>>::clear(pvVar2);
        pMVar3 = (MapInfo *)CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(this_01 + 0xb24));
        pvVar2 = (vector<MapInfo,std::allocator<MapInfo>> *)CParty::getPassedMapInfoList(this_01);
        std::vector<MapInfo,std::allocator<MapInfo>>::push_back(pvVar2,pMVar3);
        CParty::setDungeonMapSaving(this_01,true);
      }
      else if ((uVar1 != 0) && (uVar1 < 4)) {
        CParty::setDungeonMapSaving(this_01,false);
      }
    }
  }
  return;
}

```

---

## passedMapMonsterKill

```asm
// === 084adaf8 game_master::CMonsterDropTest::passedMapMonsterKill  [0x084adaf8-0x84add1f] ===
 84adaf8:	55                   	push   %ebp
 84adaf9:	89 e5                	mov    %esp,%ebp
 84adafb:	56                   	push   %esi
 84adafc:	53                   	push   %ebx
 84adafd:	83 ec 60             	sub    $0x60,%esp
 84adb00:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84adb03:	89 04 24             	mov    %eax,(%esp)
 84adb06:	e8 21 4f ca ff       	call   8152a2c <_ZNSt4listI8map_itemSaIS0_EEC1Ev>
 84adb0b:	c7 45 ec 64 00 00 00 	movl   $0x64,-0x14(%ebp)
 84adb12:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adb15:	89 04 24             	mov    %eax,(%esp)
 84adb18:	e8 75 d0 c9 ff       	call   814ab92 <_ZNSt6vectorIbSaIbEEC1Ev>
 84adb1d:	c6 45 f2 01          	movb   $0x1,-0xe(%ebp)
 84adb21:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 84adb25:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 84adb29:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adb2d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adb30:	89 04 24             	mov    %eax,(%esp)
 84adb33:	e8 b8 d0 c9 ff       	call   814abf0 <_ZNSt6vectorIbSaIbEE9push_backEb>
 84adb38:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84adb3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adb40:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adb43:	89 04 24             	mov    %eax,(%esp)
 84adb46:	e8 a5 d0 c9 ff       	call   814abf0 <_ZNSt6vectorIbSaIbEE9push_backEb>
 84adb4b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84adb52:	e9 60 01 00 00       	jmp    84adcb7 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x1bf>
 84adb57:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adb5a:	89 04 24             	mov    %eax,(%esp)
 84adb5d:	e8 46 67 00 00       	call   84b42a8 <_ZN6CParty20getPassedMapInfoListEv>
 84adb62:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84adb65:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adb69:	89 14 24             	mov    %edx,(%esp)
 84adb6c:	e8 83 6c 00 00       	call   84b47f4 <_ZNSt6vectorI7MapInfoSaIS0_EE5beginEv>
 84adb71:	83 ec 04             	sub    $0x4,%esp
 84adb74:	e9 03 01 00 00       	jmp    84adc7c <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x184>
 84adb79:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84adb7c:	89 04 24             	mov    %eax,(%esp)
 84adb7f:	e8 fe 6c 00 00       	call   84b4882 <_ZNK9__gnu_cxx17__normal_iteratorIP7MapInfoSt6vectorIS1_SaIS1_EEEptEv>
 84adb84:	8d 50 0c             	lea    0xc(%eax),%edx
 84adb87:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84adb8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84adb8e:	89 04 24             	mov    %eax,(%esp)
 84adb91:	e8 72 4a ca ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 84adb96:	83 ec 04             	sub    $0x4,%esp
 84adb99:	e9 99 00 00 00       	jmp    84adc37 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x13f>
 84adb9e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84adba1:	89 04 24             	mov    %eax,(%esp)
 84adba4:	e8 a3 4a ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84adba9:	8b 40 30             	mov    0x30(%eax),%eax
 84adbac:	83 f8 64             	cmp    $0x64,%eax
 84adbaf:	0f 95 c0             	setne  %al
 84adbb2:	84 c0                	test   %al,%al
 84adbb4:	75 75                	jne    84adc2b <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x133>
 84adbb6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84adbb9:	89 04 24             	mov    %eax,(%esp)
 84adbbc:	e8 8b 4a ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84adbc1:	8d 58 04             	lea    0x4(%eax),%ebx
 84adbc4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84adbc7:	89 04 24             	mov    %eax,(%esp)
 84adbca:	e8 bd 6c 00 00       	call   84b488c <_ZNK9__gnu_cxx17__normal_iteratorIP7MapInfoSt6vectorIS1_SaIS1_EEEdeEv>
 84adbcf:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84adbd2:	89 54 24 18          	mov    %edx,0x18(%esp)
 84adbd6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84adbd9:	89 54 24 14          	mov    %edx,0x14(%esp)
 84adbdd:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84adbe0:	89 54 24 10          	mov    %edx,0x10(%esp)
 84adbe4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84adbe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84adbec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adbef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adbf3:	8b 45 08             	mov    0x8(%ebp),%eax
 84adbf6:	89 04 24             	mov    %eax,(%esp)
 84adbf9:	e8 22 01 00 00       	call   84add20 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE>
 84adbfe:	8b 45 14             	mov    0x14(%ebp),%eax
 84adc01:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84adc05:	8b 45 10             	mov    0x10(%ebp),%eax
 84adc08:	89 44 24 08          	mov    %eax,0x8(%esp)
 84adc0c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84adc0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adc13:	8b 45 08             	mov    0x8(%ebp),%eax
 84adc16:	89 04 24             	mov    %eax,(%esp)
 84adc19:	e8 c4 04 00 00       	call   84ae0e2 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE>
 84adc1e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84adc21:	89 04 24             	mov    %eax,(%esp)
 84adc24:	e8 89 4e ca ff       	call   8152ab2 <_ZNSt4listI8map_itemSaIS0_EE5clearEv>
 84adc29:	eb 01                	jmp    84adc2c <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x134>
 84adc2b:	90                   	nop
 84adc2c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84adc2f:	89 04 24             	mov    %eax,(%esp)
 84adc32:	e8 f7 49 ca ff       	call   815262e <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEv>
 84adc37:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84adc3a:	89 04 24             	mov    %eax,(%esp)
 84adc3d:	e8 40 6c 00 00       	call   84b4882 <_ZNK9__gnu_cxx17__normal_iteratorIP7MapInfoSt6vectorIS1_SaIS1_EEEptEv>
 84adc42:	8d 50 0c             	lea    0xc(%eax),%edx
 84adc45:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84adc48:	89 54 24 04          	mov    %edx,0x4(%esp)
 84adc4c:	89 04 24             	mov    %eax,(%esp)
 84adc4f:	e8 32 48 ca ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84adc54:	83 ec 04             	sub    $0x4,%esp
 84adc57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84adc5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adc5e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84adc61:	89 04 24             	mov    %eax,(%esp)
 84adc64:	e8 43 48 ca ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 84adc69:	84 c0                	test   %al,%al
 84adc6b:	0f 85 2d ff ff ff    	jne    84adb9e <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0xa6>
 84adc71:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84adc74:	89 04 24             	mov    %eax,(%esp)
 84adc77:	e8 ee 6b 00 00       	call   84b486a <_ZN9__gnu_cxx17__normal_iteratorIP7MapInfoSt6vectorIS1_SaIS1_EEEppEv>
 84adc7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adc7f:	89 04 24             	mov    %eax,(%esp)
 84adc82:	e8 21 66 00 00       	call   84b42a8 <_ZN6CParty20getPassedMapInfoListEv>
 84adc87:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84adc8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adc8e:	89 14 24             	mov    %edx,(%esp)
 84adc91:	e8 82 6b 00 00       	call   84b4818 <_ZNSt6vectorI7MapInfoSaIS0_EE3endEv>
 84adc96:	83 ec 04             	sub    $0x4,%esp
 84adc99:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84adc9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adca0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84adca3:	89 04 24             	mov    %eax,(%esp)
 84adca6:	e8 93 6b 00 00       	call   84b483e <_ZN9__gnu_cxxneIP7MapInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 84adcab:	84 c0                	test   %al,%al
 84adcad:	0f 85 c6 fe ff ff    	jne    84adb79 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x81>
 84adcb3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84adcb7:	8b 45 08             	mov    0x8(%ebp),%eax
 84adcba:	8b 40 0c             	mov    0xc(%eax),%eax
 84adcbd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84adcc0:	0f 97 c0             	seta   %al
 84adcc3:	84 c0                	test   %al,%al
 84adcc5:	0f 85 8c fe ff ff    	jne    84adb57 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x5f>
 84adccb:	eb 15                	jmp    84adce2 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x1ea>
 84adccd:	89 d3                	mov    %edx,%ebx
 84adccf:	89 c6                	mov    %eax,%esi
 84adcd1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adcd4:	89 04 24             	mov    %eax,(%esp)
 84adcd7:	e8 ca ce c9 ff       	call   814aba6 <_ZNSt6vectorIbSaIbEED1Ev>
 84adcdc:	89 f0                	mov    %esi,%eax
 84adcde:	89 da                	mov    %ebx,%edx
 84adce0:	eb 0d                	jmp    84adcef <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x1f7>
 84adce2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adce5:	89 04 24             	mov    %eax,(%esp)
 84adce8:	e8 b9 ce c9 ff       	call   814aba6 <_ZNSt6vectorIbSaIbEED1Ev>
 84adced:	eb 1b                	jmp    84add0a <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x212>
 84adcef:	89 d3                	mov    %edx,%ebx
 84adcf1:	89 c6                	mov    %eax,%esi
 84adcf3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84adcf6:	89 04 24             	mov    %eax,(%esp)
 84adcf9:	e8 70 42 ca ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 84adcfe:	89 f0                	mov    %esi,%eax
 84add00:	89 da                	mov    %ebx,%edx
 84add02:	89 04 24             	mov    %eax,(%esp)
 84add05:	e8 46 5a 63 00       	call   8ae3750 <_Unwind_Resume>
 84add0a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84add0d:	89 04 24             	mov    %eax,(%esp)
 84add10:	e8 59 42 ca ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 84add15:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84add18:	83 c4 00             	add    $0x0,%esp
 84add1b:	5b                   	pop    %ebx
 84add1c:	5e                   	pop    %esi
 84add1d:	5d                   	pop    %ebp
 84add1e:	c3                   	ret
 84add1f:	90                   	nop

```

```c
// game_master::CMonsterDropTest::passedMapMonsterKill @ 0x84adaf8

/* game_master::CMonsterDropTest::passedMapMonsterKill(CParty*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::passedMapMonsterKill(CParty *param_1,map *param_2,map *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  MapInfo *pMVar4;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_44 [4];
  __normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>> local_40 [4];
  vector<bool,std::allocator<bool>> local_3c [20];
  list<map_item,std::allocator<map_item>> local_28 [8];
  __normal_iterator local_20 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_1c [4];
  int local_18;
  undefined1 local_12;
  bool local_11;
  uint local_10;
  
  std::list<map_item,std::allocator<map_item>>::list(local_28);
  local_18 = 100;
                    /* try { // try from 084adb18 to 084adb1c has its CatchHandler @ 084adcef */
  std::vector<bool,std::allocator<bool>>::vector(local_3c);
  local_12 = 1;
  local_11 = true;
                    /* try { // try from 084adb33 to 084adcaa has its CatchHandler @ 084adccd */
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,true);
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,local_11);
  for (local_10 = 0; local_10 < *(uint *)(param_1 + 0xc); local_10 = local_10 + 1) {
    CParty::getPassedMapInfoList((CParty *)param_2);
    std::vector<MapInfo,std::allocator<MapInfo>>::begin();
    while( true ) {
      CParty::getPassedMapInfoList((CParty *)param_2);
      std::vector<MapInfo,std::allocator<MapInfo>>::end();
      bVar2 = __gnu_cxx::operator!=(local_40,local_20);
      if (!bVar2) break;
      __gnu_cxx::__normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
      operator->(local_40);
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      begin(local_44);
      while( true ) {
        __gnu_cxx::__normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
        operator->(local_40);
        std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
        end(local_1c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar1 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44);
        if (*(int *)(iVar3 + 0x30) == 100) {
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44);
          pMVar4 = (MapInfo *)
                   __gnu_cxx::
                   __normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
                   operator*(local_40);
          processKillMonster((CMonsterDropTest *)param_1,(CParty *)param_2,pMVar4,
                             (map_monster *)(iVar3 + 4),(vector *)local_3c,local_18,(list *)local_28
                            );
          getDungeonDropResult((list *)param_1,(map *)local_28,param_3);
          std::list<map_item,std::allocator<map_item>>::clear(local_28);
        }
        std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_44);
      }
      __gnu_cxx::__normal_iterator<MapInfo*,std::vector<MapInfo,std::allocator<MapInfo>>>::
      operator++(local_40);
    }
  }
                    /* try { // try from 084adce8 to 084adcec has its CatchHandler @ 084adcef */
  std::vector<bool,std::allocator<bool>>::~vector(local_3c);
  std::list<map_item,std::allocator<map_item>>::~list(local_28);
  return;
}

```

---

## processDungeonDrop

```asm
// === 084ad8dc game_master::CMonsterDropTest::processDungeonDrop  [0x084ad8dc-0x84ad939] ===
 84ad8dc:	55                   	push   %ebp
 84ad8dd:	89 e5                	mov    %esp,%ebp
 84ad8df:	83 ec 18             	sub    $0x18,%esp
 84ad8e2:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad8e5:	8b 40 08             	mov    0x8(%eax),%eax
 84ad8e8:	85 c0                	test   %eax,%eax
 84ad8ea:	74 0a                	je     84ad8f6 <_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x1a>
 84ad8ec:	83 e8 02             	sub    $0x2,%eax
 84ad8ef:	83 f8 01             	cmp    $0x1,%eax
 84ad8f2:	77 44                	ja     84ad938 <_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x5c>
 84ad8f4:	eb 22                	jmp    84ad918 <_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x3c>
 84ad8f6:	8b 45 14             	mov    0x14(%ebp),%eax
 84ad8f9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ad8fd:	8b 45 10             	mov    0x10(%ebp),%eax
 84ad900:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad904:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad907:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad90b:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad90e:	89 04 24             	mov    %eax,(%esp)
 84ad911:	e8 24 00 00 00       	call   84ad93a <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE>
 84ad916:	eb 20                	jmp    84ad938 <_ZN11game_master16CMonsterDropTest18processDungeonDropEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x5c>
 84ad918:	8b 45 14             	mov    0x14(%ebp),%eax
 84ad91b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ad91f:	8b 45 10             	mov    0x10(%ebp),%eax
 84ad922:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ad926:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad929:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad92d:	8b 45 08             	mov    0x8(%ebp),%eax
 84ad930:	89 04 24             	mov    %eax,(%esp)
 84ad933:	e8 c0 01 00 00       	call   84adaf8 <_ZN11game_master16CMonsterDropTest20passedMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE>
 84ad938:	c9                   	leave
 84ad939:	c3                   	ret

```

```c
// game_master::CMonsterDropTest::processDungeonDrop @ 0x84ad8dc

/* game_master::CMonsterDropTest::processDungeonDrop(CParty*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::processDungeonDrop(CParty *param_1,map *param_2,map *param_3)

{
  if (*(int *)(param_1 + 8) == 0) {
    singleMapMonsterKill(param_1,param_2,param_3);
  }
  else if (*(int *)(param_1 + 8) - 2U < 2) {
    passedMapMonsterKill(param_1,param_2,param_3);
  }
  return;
}

```

---

## processKillMonster

```asm
// === 084add20 game_master::CMonsterDropTest::processKillMonster  [0x084add20-0x84ae0e1] ===
 84add20:	55                   	push   %ebp
 84add21:	89 e5                	mov    %esp,%ebp
 84add23:	57                   	push   %edi
 84add24:	56                   	push   %esi
 84add25:	53                   	push   %ebx
 84add26:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 84add2c:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 84add31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84add38:	00 
 84add39:	89 04 24             	mov    %eax,(%esp)
 84add3c:	e8 eb 9f 00 00       	call   84b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>
 84add41:	84 c0                	test   %al,%al
 84add43:	0f 84 ed 00 00 00    	je     84ade36 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x116>
 84add49:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 84add4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84add55:	00 
 84add56:	89 04 24             	mov    %eax,(%esp)
 84add59:	e8 4c a0 00 00       	call   84b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>
 84add5e:	d9 5d d0             	fstps  -0x30(%ebp)
 84add61:	e8 35 e4 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84add66:	89 04 24             	mov    %eax,(%esp)
 84add69:	e8 64 09 e6 ff       	call   830e6d2 <_ZNK12CDataManager11getDropRateEv>
 84add6e:	d9 7d 96             	fnstcw -0x6a(%ebp)
 84add71:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 84add75:	b4 0c                	mov    $0xc,%ah
 84add77:	66 89 45 94          	mov    %ax,-0x6c(%ebp)
 84add7b:	d9 6d 94             	fldcw  -0x6c(%ebp)
 84add7e:	df 7d 98             	fistpll -0x68(%ebp)
 84add81:	d9 6d 96             	fldcw  -0x6a(%ebp)
 84add84:	8b 45 98             	mov    -0x68(%ebp),%eax
 84add87:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84add8a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84add8d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84add90:	ba 00 00 00 00       	mov    $0x0,%edx
 84add95:	89 45 98             	mov    %eax,-0x68(%ebp)
 84add98:	89 55 9c             	mov    %edx,-0x64(%ebp)
 84add9b:	df 6d 98             	fildll -0x68(%ebp)
 84add9e:	d9 45 d0             	flds   -0x30(%ebp)
 84adda1:	da e9                	fucompp
 84adda3:	df e0                	fnstsw %ax
 84adda5:	f6 c4 45             	test   $0x45,%ah
 84adda8:	0f 94 c0             	sete   %al
 84addab:	84 c0                	test   %al,%al
 84addad:	0f 84 83 00 00 00    	je     84ade36 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x116>
 84addb3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84addb6:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84addb9:	db 45 a4             	fildl  -0x5c(%ebp)
 84addbc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84addbf:	ba 00 00 00 00       	mov    $0x0,%edx
 84addc4:	89 45 98             	mov    %eax,-0x68(%ebp)
 84addc7:	89 55 9c             	mov    %edx,-0x64(%ebp)
 84addca:	df 6d 98             	fildll -0x68(%ebp)
 84addcd:	d9 45 d0             	flds   -0x30(%ebp)
 84addd0:	de e1                	fsubp  %st,%st(1)
 84addd2:	de c9                	fmulp  %st,%st(1)
 84addd4:	d9 6d 94             	fldcw  -0x6c(%ebp)
 84addd7:	df 7d 98             	fistpll -0x68(%ebp)
 84addda:	d9 6d 96             	fldcw  -0x6a(%ebp)
 84adddd:	8b 45 98             	mov    -0x68(%ebp),%eax
 84adde0:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84adde3:	89 c2                	mov    %eax,%edx
 84adde5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84adde8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84addeb:	89 45 1c             	mov    %eax,0x1c(%ebp)
 84addee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84addf1:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84addf4:	db 45 a4             	fildl  -0x5c(%ebp)
 84addf7:	d8 4d d0             	fmuls  -0x30(%ebp)
 84addfa:	d9 6d 94             	fldcw  -0x6c(%ebp)
 84addfd:	db 5d a4             	fistpl -0x5c(%ebp)
 84ade00:	d9 6d 96             	fldcw  -0x6a(%ebp)
 84ade03:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84ade06:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84ade09:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84ade0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ade10:	8d 45 1c             	lea    0x1c(%ebp),%eax
 84ade13:	89 04 24             	mov    %eax,(%esp)
 84ade16:	e8 f3 1a c3 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84ade1b:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84ade22:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ade26:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ade29:	89 04 24             	mov    %eax,(%esp)
 84ade2c:	e8 e7 03 be ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 84ade31:	8b 00                	mov    (%eax),%eax
 84ade33:	89 45 1c             	mov    %eax,0x1c(%ebp)
 84ade36:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 84ade3b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84ade42:	00 
 84ade43:	89 04 24             	mov    %eax,(%esp)
 84ade46:	e8 e1 9e 00 00       	call   84b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>
 84ade4b:	84 c0                	test   %al,%al
 84ade4d:	0f 84 ed 00 00 00    	je     84adf40 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x220>
 84ade53:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 84ade58:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84ade5f:	00 
 84ade60:	89 04 24             	mov    %eax,(%esp)
 84ade63:	e8 42 9f 00 00       	call   84b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>
 84ade68:	d9 5d d8             	fstps  -0x28(%ebp)
 84ade6b:	e8 2b e3 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ade70:	89 04 24             	mov    %eax,(%esp)
 84ade73:	e8 5a 08 e6 ff       	call   830e6d2 <_ZNK12CDataManager11getDropRateEv>
 84ade78:	d9 7d 96             	fnstcw -0x6a(%ebp)
 84ade7b:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 84ade7f:	b4 0c                	mov    $0xc,%ah
 84ade81:	66 89 45 94          	mov    %ax,-0x6c(%ebp)
 84ade85:	d9 6d 94             	fldcw  -0x6c(%ebp)
 84ade88:	df 7d 98             	fistpll -0x68(%ebp)
 84ade8b:	d9 6d 96             	fldcw  -0x6a(%ebp)
 84ade8e:	8b 45 98             	mov    -0x68(%ebp),%eax
 84ade91:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84ade94:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84ade97:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ade9a:	ba 00 00 00 00       	mov    $0x0,%edx
 84ade9f:	89 45 98             	mov    %eax,-0x68(%ebp)
 84adea2:	89 55 9c             	mov    %edx,-0x64(%ebp)
 84adea5:	df 6d 98             	fildll -0x68(%ebp)
 84adea8:	d9 45 d8             	flds   -0x28(%ebp)
 84adeab:	da e9                	fucompp
 84adead:	df e0                	fnstsw %ax
 84adeaf:	f6 c4 45             	test   $0x45,%ah
 84adeb2:	0f 94 c0             	sete   %al
 84adeb5:	84 c0                	test   %al,%al
 84adeb7:	0f 84 83 00 00 00    	je     84adf40 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x220>
 84adebd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84adec0:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84adec3:	db 45 a4             	fildl  -0x5c(%ebp)
 84adec6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84adec9:	ba 00 00 00 00       	mov    $0x0,%edx
 84adece:	89 45 98             	mov    %eax,-0x68(%ebp)
 84aded1:	89 55 9c             	mov    %edx,-0x64(%ebp)
 84aded4:	df 6d 98             	fildll -0x68(%ebp)
 84aded7:	d9 45 d8             	flds   -0x28(%ebp)
 84adeda:	de e1                	fsubp  %st,%st(1)
 84adedc:	de c9                	fmulp  %st,%st(1)
 84adede:	d9 6d 94             	fldcw  -0x6c(%ebp)
 84adee1:	df 7d 98             	fistpll -0x68(%ebp)
 84adee4:	d9 6d 96             	fldcw  -0x6a(%ebp)
 84adee7:	8b 45 98             	mov    -0x68(%ebp),%eax
 84adeea:	8b 55 9c             	mov    -0x64(%ebp),%edx
 84adeed:	89 c2                	mov    %eax,%edx
 84adeef:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84adef2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84adef5:	89 45 1c             	mov    %eax,0x1c(%ebp)
 84adef8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84adefb:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84adefe:	db 45 a4             	fildl  -0x5c(%ebp)
 84adf01:	d8 4d d8             	fmuls  -0x28(%ebp)
 84adf04:	d9 6d 94             	fldcw  -0x6c(%ebp)
 84adf07:	db 5d a4             	fistpl -0x5c(%ebp)
 84adf0a:	d9 6d 96             	fldcw  -0x6a(%ebp)
 84adf0d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84adf10:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84adf13:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84adf16:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adf1a:	8d 45 1c             	lea    0x1c(%ebp),%eax
 84adf1d:	89 04 24             	mov    %eax,(%esp)
 84adf20:	e8 e9 19 c3 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84adf25:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 84adf2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adf30:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84adf33:	89 04 24             	mov    %eax,(%esp)
 84adf36:	e8 dd 02 be ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 84adf3b:	8b 00                	mov    (%eax),%eax
 84adf3d:	89 45 1c             	mov    %eax,0x1c(%ebp)
 84adf40:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
 84adf44:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84adf4b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84adf52:	eb 56                	jmp    84adfaa <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x28a>
 84adf54:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84adf57:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adf5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adf5e:	89 04 24             	mov    %eax,(%esp)
 84adf61:	e8 02 79 c9 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 84adf66:	83 f0 01             	xor    $0x1,%eax
 84adf69:	84 c0                	test   %al,%al
 84adf6b:	75 38                	jne    84adfa5 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x285>
 84adf6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adf70:	89 04 24             	mov    %eax,(%esp)
 84adf73:	e8 a4 f9 d7 ff       	call   822d91c <_ZN6CParty9GetMemberEv>
 84adf78:	89 c1                	mov    %eax,%ecx
 84adf7a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84adf7d:	89 d0                	mov    %edx,%eax
 84adf7f:	01 c0                	add    %eax,%eax
 84adf81:	01 d0                	add    %edx,%eax
 84adf83:	c1 e0 03             	shl    $0x3,%eax
 84adf86:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84adf89:	8b 00                	mov    (%eax),%eax
 84adf8b:	c7 44 24 04 4f 00 00 	movl   $0x4f,0x4(%esp)
 84adf92:	00 
 84adf93:	89 04 24             	mov    %eax,(%esp)
 84adf96:	e8 73 80 c3 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84adf9b:	84 c0                	test   %al,%al
 84adf9d:	74 07                	je     84adfa6 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x286>
 84adf9f:	80 45 cb 01          	addb   $0x1,-0x35(%ebp)
 84adfa3:	eb 01                	jmp    84adfa6 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x286>
 84adfa5:	90                   	nop
 84adfa6:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84adfaa:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 84adfae:	0f 9e c0             	setle  %al
 84adfb1:	84 c0                	test   %al,%al
 84adfb3:	75 9f                	jne    84adf54 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x234>
 84adfb5:	80 7d cb 00          	cmpb   $0x0,-0x35(%ebp)
 84adfb9:	74 74                	je     84ae02f <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x30f>
 84adfbb:	80 7d cb 04          	cmpb   $0x4,-0x35(%ebp)
 84adfbf:	77 6e                	ja     84ae02f <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x30f>
 84adfc1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84adfc8:	eb 5a                	jmp    84ae024 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x304>
 84adfca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84adfcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84adfd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adfd4:	89 04 24             	mov    %eax,(%esp)
 84adfd7:	e8 8c 78 c9 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 84adfdc:	83 f0 01             	xor    $0x1,%eax
 84adfdf:	84 c0                	test   %al,%al
 84adfe1:	74 06                	je     84adfe9 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x2c9>
 84adfe3:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84adfe7:	eb 3b                	jmp    84ae024 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x304>
 84adfe9:	0f b6 5d cb          	movzbl -0x35(%ebp),%ebx
 84adfed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84adff0:	89 04 24             	mov    %eax,(%esp)
 84adff3:	e8 24 f9 d7 ff       	call   822d91c <_ZN6CParty9GetMemberEv>
 84adff8:	89 c1                	mov    %eax,%ecx
 84adffa:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84adffd:	89 d0                	mov    %edx,%eax
 84adfff:	01 c0                	add    %eax,%eax
 84ae001:	01 d0                	add    %edx,%eax
 84ae003:	c1 e0 03             	shl    $0x3,%eax
 84ae006:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84ae009:	8b 00                	mov    (%eax),%eax
 84ae00b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ae00f:	c7 44 24 04 4f 00 00 	movl   $0x4f,0x4(%esp)
 84ae016:	00 
 84ae017:	89 04 24             	mov    %eax,(%esp)
 84ae01a:	e8 8b 0d e6 ff       	call   830edaa <_ZN5CUser36getAddIndependentDropRateFromPremiumE17ENUM_PREMIUM_TYPEj>
 84ae01f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84ae022:	eb 0b                	jmp    84ae02f <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x30f>
 84ae024:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 84ae028:	0f 9e c0             	setle  %al
 84ae02b:	84 c0                	test   %al,%al
 84ae02d:	75 9b                	jne    84adfca <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x2aa>
 84ae02f:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 84ae033:	8b 45 14             	mov    0x14(%ebp),%eax
 84ae036:	0f b7 80 34 03 00 00 	movzwl 0x334(%eax),%eax
 84ae03d:	66 85 c0             	test   %ax,%ax
 84ae040:	74 26                	je     84ae068 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE+0x348>
 84ae042:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ae045:	8d 90 24 0b 00 00    	lea    0xb24(%eax),%edx
 84ae04b:	8d 45 b7             	lea    -0x49(%ebp),%eax
 84ae04e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ae052:	8b 45 14             	mov    0x14(%ebp),%eax
 84ae055:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ae059:	8b 45 10             	mov    0x10(%ebp),%eax
 84ae05c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae060:	89 14 24             	mov    %edx,(%esp)
 84ae063:	e8 9c f6 e5 ff       	call   830d704 <_ZN13CBattle_Field28KillHellPartyGroupMonsterCntER7MapInfoR11map_monsterRb>
 84ae068:	8b 7d cc             	mov    -0x34(%ebp),%edi
 84ae06b:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 84ae06f:	0f b6 f0             	movzbl %al,%esi
 84ae072:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 84ae075:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ae078:	89 04 24             	mov    %eax,(%esp)
 84ae07b:	e8 ea c0 0e 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 84ae080:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ae083:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 84ae089:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 84ae08d:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 84ae092:	89 54 24 28          	mov    %edx,0x28(%esp)
 84ae096:	8b 55 18             	mov    0x18(%ebp),%edx
 84ae099:	89 54 24 24          	mov    %edx,0x24(%esp)
 84ae09d:	89 74 24 20          	mov    %esi,0x20(%esp)
 84ae0a1:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84ae0a5:	c7 44 24 18 64 00 00 	movl   $0x64,0x18(%esp)
 84ae0ac:	00 
 84ae0ad:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ae0b1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84ae0b8:	00 
 84ae0b9:	8b 45 14             	mov    0x14(%ebp),%eax
 84ae0bc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ae0c0:	8b 45 10             	mov    0x10(%ebp),%eax
 84ae0c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ae0c7:	8b 45 20             	mov    0x20(%ebp),%eax
 84ae0ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ae0ce:	89 0c 24             	mov    %ecx,(%esp)
 84ae0d1:	e8 20 cd e5 ff       	call   830adf6 <_ZN13CBattle_Field14_MakeDropItemsERSt4listI8map_itemSaIS1_EER7MapInfoRK11map_monstertiiibRSt6vectorIbSaIbEEfi>
 84ae0d6:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 84ae0dc:	5b                   	pop    %ebx
 84ae0dd:	5e                   	pop    %esi
 84ae0de:	5f                   	pop    %edi
 84ae0df:	5d                   	pop    %ebp
 84ae0e0:	c3                   	ret
 84ae0e1:	90                   	nop

```

```c
// game_master::CMonsterDropTest::processKillMonster @ 0x84add20

/* game_master::CMonsterDropTest::processKillMonster(CParty*, MapInfo&, map_monster&,
   std::vector<bool, std::allocator<bool> >&, int, std::list<map_item, std::allocator<map_item> >&)
    */

void __thiscall
game_master::CMonsterDropTest::processKillMonster
          (CMonsterDropTest *this,CParty *param_1,MapInfo *param_2,map_monster *param_3,
          vector *param_4,int param_5,list *param_6)

{
  ulonglong uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  CDataManager *pCVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longdouble lVar10;
  ulonglong local_6c;
  bool local_4d;
  int local_4c [3];
  int local_40;
  byte local_39;
  int local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  cVar5 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,1);
  if (cVar5 != '\0') {
    lVar10 = (longdouble)CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,1);
    local_34 = (float)lVar10;
    pCVar6 = (CDataManager *)G_CDataManager();
    lVar10 = (longdouble)CDataManager::getDropRate(pCVar6);
    uVar1 = (ulonglong)ROUND(lVar10);
    local_6c._0_4_ = (int)uVar1;
    local_30 = (int)local_6c;
    local_6c = uVar1 & 0xffffffff;
    if ((float)local_6c < local_34) {
      local_6c = uVar1 & 0xffffffff;
      local_6c._0_4_ = (int)(longlong)ROUND((local_34 - (float)local_6c) * (float)param_5);
      param_5 = (int)local_6c + param_5;
      local_4c[0] = (int)ROUND((float)param_5 * local_34);
      piVar7 = std::min<int>(&param_5,local_4c);
      local_4c[1] = 0;
      piVar7 = std::max<int>(local_4c + 1,piVar7);
      param_5 = *piVar7;
    }
  }
  cVar5 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,4);
  if (cVar5 != '\0') {
    lVar10 = (longdouble)CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,4);
    local_2c = (float)lVar10;
    pCVar6 = (CDataManager *)G_CDataManager();
    lVar10 = (longdouble)CDataManager::getDropRate(pCVar6);
    uVar1 = (ulonglong)ROUND(lVar10);
    local_6c._0_4_ = (int)uVar1;
    local_28 = (int)local_6c;
    local_6c = uVar1 & 0xffffffff;
    if ((float)local_6c < local_2c) {
      local_6c = uVar1 & 0xffffffff;
      local_6c._0_4_ = (int)(longlong)ROUND((local_2c - (float)local_6c) * (float)param_5);
      param_5 = (int)local_6c + param_5;
      local_4c[2] = (int)ROUND((float)param_5 * local_2c);
      piVar7 = std::min<int>(&param_5,local_4c + 2);
      local_40 = 0;
      piVar7 = std::max<int>(&local_40,piVar7);
      param_5 = *piVar7;
    }
  }
  local_39 = 0;
  local_38 = 0;
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    cVar5 = CParty::checkValidUser(param_1,local_24);
    if (cVar5 == '\x01') {
      iVar8 = CParty::GetMember(param_1);
      cVar5 = CUser::isAffectedPremium(*(CUser **)(iVar8 + local_24 * 0x18),0x4f);
      if (cVar5 != '\0') {
        local_39 = local_39 + 1;
      }
    }
  }
  if ((local_39 != 0) && (local_39 < 5)) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      cVar5 = CParty::checkValidUser(param_1,local_20);
      bVar3 = local_39;
      if (cVar5 == '\x01') {
        iVar8 = CParty::GetMember(param_1);
        local_38 = CUser::getAddIndependentDropRateFromPremium
                             (*(CUser **)(iVar8 + local_20 * 0x18),0x4f,bVar3);
        break;
      }
    }
  }
  local_4d = false;
  if (*(short *)(param_3 + 0x334) != 0) {
    CBattle_Field::KillHellPartyGroupMonsterCnt
              ((CBattle_Field *)(param_1 + 0xb24),param_2,param_3,&local_4d);
  }
  iVar4 = local_38;
  bVar2 = local_4d;
  iVar8 = param_5;
  iVar9 = CParty::get_member_count(param_1);
  CBattle_Field::_MakeDropItems
            ((CBattle_Field *)(param_1 + 0xb24),param_6,param_2,param_3,0,iVar9,100,iVar8,bVar2,
             param_4,1.0,iVar4);
  return;
}

```

---

## singleMapMonsterKill

```asm
// === 084ad93a game_master::CMonsterDropTest::singleMapMonsterKill  [0x084ad93a-0x84adaf7] ===
 84ad93a:	55                   	push   %ebp
 84ad93b:	89 e5                	mov    %esp,%ebp
 84ad93d:	56                   	push   %esi
 84ad93e:	53                   	push   %ebx
 84ad93f:	83 ec 60             	sub    $0x60,%esp
 84ad942:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ad945:	89 04 24             	mov    %eax,(%esp)
 84ad948:	e8 df 50 ca ff       	call   8152a2c <_ZNSt4listI8map_itemSaIS0_EEC1Ev>
 84ad94d:	c7 45 e8 64 00 00 00 	movl   $0x64,-0x18(%ebp)
 84ad954:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ad957:	89 04 24             	mov    %eax,(%esp)
 84ad95a:	e8 33 d2 c9 ff       	call   814ab92 <_ZNSt6vectorIbSaIbEEC1Ev>
 84ad95f:	c6 45 ee 01          	movb   $0x1,-0x12(%ebp)
 84ad963:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 84ad967:	0f b6 45 ee          	movzbl -0x12(%ebp),%eax
 84ad96b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad96f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ad972:	89 04 24             	mov    %eax,(%esp)
 84ad975:	e8 76 d2 c9 ff       	call   814abf0 <_ZNSt6vectorIbSaIbEE9push_backEb>
 84ad97a:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84ad97e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ad982:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ad985:	89 04 24             	mov    %eax,(%esp)
 84ad988:	e8 63 d2 c9 ff       	call   814abf0 <_ZNSt6vectorIbSaIbEE9push_backEb>
 84ad98d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ad990:	05 24 0b 00 00       	add    $0xb24,%eax
 84ad995:	89 04 24             	mov    %eax,(%esp)
 84ad998:	e8 2f f2 d7 ff       	call   822cbcc <_ZN13CBattle_Field17GetCurrentMapInfoEv>
 84ad99d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ad9a0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84ad9a7:	e9 e4 00 00 00       	jmp    84ada90 <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x156>
 84ad9ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ad9af:	8d 50 0c             	lea    0xc(%eax),%edx
 84ad9b2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ad9b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ad9b9:	89 04 24             	mov    %eax,(%esp)
 84ad9bc:	e8 47 4c ca ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 84ad9c1:	83 ec 04             	sub    $0x4,%esp
 84ad9c4:	e9 91 00 00 00       	jmp    84ada5a <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x120>
 84ad9c9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ad9cc:	89 04 24             	mov    %eax,(%esp)
 84ad9cf:	e8 78 4c ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84ad9d4:	8b 40 30             	mov    0x30(%eax),%eax
 84ad9d7:	83 f8 64             	cmp    $0x64,%eax
 84ad9da:	0f 95 c0             	setne  %al
 84ad9dd:	84 c0                	test   %al,%al
 84ad9df:	75 6d                	jne    84ada4e <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x114>
 84ad9e1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ad9e4:	89 04 24             	mov    %eax,(%esp)
 84ad9e7:	e8 60 4c ca ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84ad9ec:	8d 50 04             	lea    0x4(%eax),%edx
 84ad9ef:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ad9f2:	89 44 24 18          	mov    %eax,0x18(%esp)
 84ad9f6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84ad9f9:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ad9fd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ada00:	89 44 24 10          	mov    %eax,0x10(%esp)
 84ada04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84ada08:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ada0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ada0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ada12:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ada16:	8b 45 08             	mov    0x8(%ebp),%eax
 84ada19:	89 04 24             	mov    %eax,(%esp)
 84ada1c:	e8 ff 02 00 00       	call   84add20 <_ZN11game_master16CMonsterDropTest18processKillMonsterEP6CPartyR7MapInfoR11map_monsterRSt6vectorIbSaIbEEiRSt4listI8map_itemSaISC_EE>
 84ada21:	8b 45 14             	mov    0x14(%ebp),%eax
 84ada24:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ada28:	8b 45 10             	mov    0x10(%ebp),%eax
 84ada2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ada2f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ada32:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ada36:	8b 45 08             	mov    0x8(%ebp),%eax
 84ada39:	89 04 24             	mov    %eax,(%esp)
 84ada3c:	e8 a1 06 00 00       	call   84ae0e2 <_ZN11game_master16CMonsterDropTest20getDungeonDropResultERSt4listI8map_itemSaIS2_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS6_IiSD_S8_SaIS9_ISA_SD_EEE>
 84ada41:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ada44:	89 04 24             	mov    %eax,(%esp)
 84ada47:	e8 66 50 ca ff       	call   8152ab2 <_ZNSt4listI8map_itemSaIS0_EE5clearEv>
 84ada4c:	eb 01                	jmp    84ada4f <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x115>
 84ada4e:	90                   	nop
 84ada4f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ada52:	89 04 24             	mov    %eax,(%esp)
 84ada55:	e8 d4 4b ca ff       	call   815262e <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEv>
 84ada5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ada5d:	8d 50 0c             	lea    0xc(%eax),%edx
 84ada60:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ada63:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ada67:	89 04 24             	mov    %eax,(%esp)
 84ada6a:	e8 17 4a ca ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84ada6f:	83 ec 04             	sub    $0x4,%esp
 84ada72:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ada75:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ada79:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ada7c:	89 04 24             	mov    %eax,(%esp)
 84ada7f:	e8 28 4a ca ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 84ada84:	84 c0                	test   %al,%al
 84ada86:	0f 85 3d ff ff ff    	jne    84ad9c9 <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x8f>
 84ada8c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84ada90:	8b 45 08             	mov    0x8(%ebp),%eax
 84ada93:	8b 40 0c             	mov    0xc(%eax),%eax
 84ada96:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84ada99:	0f 97 c0             	seta   %al
 84ada9c:	84 c0                	test   %al,%al
 84ada9e:	0f 85 08 ff ff ff    	jne    84ad9ac <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x72>
 84adaa4:	eb 15                	jmp    84adabb <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x181>
 84adaa6:	89 d3                	mov    %edx,%ebx
 84adaa8:	89 c6                	mov    %eax,%esi
 84adaaa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adaad:	89 04 24             	mov    %eax,(%esp)
 84adab0:	e8 f1 d0 c9 ff       	call   814aba6 <_ZNSt6vectorIbSaIbEED1Ev>
 84adab5:	89 f0                	mov    %esi,%eax
 84adab7:	89 da                	mov    %ebx,%edx
 84adab9:	eb 0d                	jmp    84adac8 <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x18e>
 84adabb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84adabe:	89 04 24             	mov    %eax,(%esp)
 84adac1:	e8 e0 d0 c9 ff       	call   814aba6 <_ZNSt6vectorIbSaIbEED1Ev>
 84adac6:	eb 1b                	jmp    84adae3 <_ZN11game_master16CMonsterDropTest20singleMapMonsterKillEP6CPartyRSt3mapIiiSt4lessIiESaISt4pairIKiiEEERS3_IiSA_S5_SaIS6_IS7_SA_EEE+0x1a9>
 84adac8:	89 d3                	mov    %edx,%ebx
 84adaca:	89 c6                	mov    %eax,%esi
 84adacc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84adacf:	89 04 24             	mov    %eax,(%esp)
 84adad2:	e8 97 44 ca ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 84adad7:	89 f0                	mov    %esi,%eax
 84adad9:	89 da                	mov    %ebx,%edx
 84adadb:	89 04 24             	mov    %eax,(%esp)
 84adade:	e8 6d 5c 63 00       	call   8ae3750 <_Unwind_Resume>
 84adae3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84adae6:	89 04 24             	mov    %eax,(%esp)
 84adae9:	e8 80 44 ca ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 84adaee:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84adaf1:	83 c4 00             	add    $0x0,%esp
 84adaf4:	5b                   	pop    %ebx
 84adaf5:	5e                   	pop    %esi
 84adaf6:	5d                   	pop    %ebp
 84adaf7:	c3                   	ret

```

```c
// game_master::CMonsterDropTest::singleMapMonsterKill @ 0x84ad93a

/* game_master::CMonsterDropTest::singleMapMonsterKill(CParty*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&, std::map<int, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >, std::less<int>, std::allocator<std::pair<int const,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > > > >&) */

void game_master::CMonsterDropTest::singleMapMonsterKill(CParty *param_1,map *param_2,map *param_3)

{
  char cVar1;
  int iVar2;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_40 [4];
  vector<bool,std::allocator<bool>> local_3c [20];
  list<map_item,std::allocator<map_item>> local_28 [8];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_20 [4];
  int local_1c;
  undefined1 local_16;
  bool local_15;
  MapInfo *local_14;
  uint local_10;
  
  std::list<map_item,std::allocator<map_item>>::list(local_28);
  local_1c = 100;
                    /* try { // try from 084ad95a to 084ad95e has its CatchHandler @ 084adac8 */
  std::vector<bool,std::allocator<bool>>::vector(local_3c);
  local_16 = 1;
  local_15 = true;
                    /* try { // try from 084ad975 to 084ada6e has its CatchHandler @ 084adaa6 */
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,true);
  std::vector<bool,std::allocator<bool>>::push_back(local_3c,local_15);
  local_14 = (MapInfo *)CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(param_2 + 0xb24));
  for (local_10 = 0; local_10 < *(uint *)(param_1 + 0xc); local_10 = local_10 + 1) {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
              (local_40);
    while( true ) {
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40,
                         (_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
      if (*(int *)(iVar2 + 0x30) == 100) {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
        processKillMonster((CMonsterDropTest *)param_1,(CParty *)param_2,local_14,
                           (map_monster *)(iVar2 + 4),(vector *)local_3c,local_1c,(list *)local_28);
        getDungeonDropResult((list *)param_1,(map *)local_28,param_3);
        std::list<map_item,std::allocator<map_item>>::clear(local_28);
      }
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_40);
    }
  }
                    /* try { // try from 084adac1 to 084adac5 has its CatchHandler @ 084adac8 */
  std::vector<bool,std::allocator<bool>>::~vector(local_3c);
  std::list<map_item,std::allocator<map_item>>::~list(local_28);
  return;
}

```

