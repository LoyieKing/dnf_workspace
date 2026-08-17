# APSystem__DB_LoadActionPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## ParseActionClearState

```asm
// === 08123f50 APSystem::DB_LoadActionPoint::ParseActionClearState  [0x08123f50-0x8124155] ===
 8123f50:	55                   	push   %ebp
 8123f51:	89 e5                	mov    %esp,%ebp
 8123f53:	53                   	push   %ebx
 8123f54:	83 ec 44             	sub    $0x44,%esp
 8123f57:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8123f5b:	74 06                	je     8123f63 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x13>
 8123f5d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8123f61:	75 0a                	jne    8123f6d <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1d>
 8123f63:	b8 00 00 00 00       	mov    $0x0,%eax
 8123f68:	e9 e3 01 00 00       	jmp    8124150 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x200>
 8123f6d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8123f74:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8123f7b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8123f7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8123f82:	c7 44 24 04 f1 e2 b5 	movl   $0x8b5e2f1,0x4(%esp)
 8123f89:	08 
 8123f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123f8d:	89 04 24             	mov    %eax,(%esp)
 8123f90:	e8 bb a1 f5 ff       	call   807e150 <strtok_r@plt>
 8123f95:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8123f98:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8123f9f:	e9 85 01 00 00       	jmp    8124129 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1d9>
 8123fa4:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8123fab:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8123fb2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8123fb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8123fb9:	c7 44 24 04 f3 e2 b5 	movl   $0x8b5e2f3,0x4(%esp)
 8123fc0:	08 
 8123fc1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123fc4:	89 04 24             	mov    %eax,(%esp)
 8123fc7:	e8 84 a1 f5 ff       	call   807e150 <strtok_r@plt>
 8123fcc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8123fcf:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8123fd6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8123fdd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8123fe1:	74 3f                	je     8124022 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0xd2>
 8123fe3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8123fe6:	89 d0                	mov    %edx,%eax
 8123fe8:	c1 e0 02             	shl    $0x2,%eax
 8123feb:	01 d0                	add    %edx,%eax
 8123fed:	01 c0                	add    %eax,%eax
 8123fef:	01 d0                	add    %edx,%eax
 8123ff1:	89 c3                	mov    %eax,%ebx
 8123ff3:	03 5d 10             	add    0x10(%ebp),%ebx
 8123ff6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8123ff9:	89 04 24             	mov    %eax,(%esp)
 8123ffc:	e8 ef a6 f5 ff       	call   807e6f0 <atoi@plt>
 8124001:	66 89 03             	mov    %ax,(%ebx)
 8124004:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8124007:	89 44 24 08          	mov    %eax,0x8(%esp)
 812400b:	c7 44 24 04 f3 e2 b5 	movl   $0x8b5e2f3,0x4(%esp)
 8124012:	08 
 8124013:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 812401a:	e8 31 a1 f5 ff       	call   807e150 <strtok_r@plt>
 812401f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8124022:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8124026:	74 6c                	je     8124094 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x144>
 8124028:	8b 55 e0             	mov    -0x20(%ebp),%edx
 812402b:	89 d0                	mov    %edx,%eax
 812402d:	c1 e0 02             	shl    $0x2,%eax
 8124030:	01 d0                	add    %edx,%eax
 8124032:	01 c0                	add    %eax,%eax
 8124034:	01 d0                	add    %edx,%eax
 8124036:	89 c3                	mov    %eax,%ebx
 8124038:	03 5d 10             	add    0x10(%ebp),%ebx
 812403b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812403e:	89 04 24             	mov    %eax,(%esp)
 8124041:	e8 aa a6 f5 ff       	call   807e6f0 <atoi@plt>
 8124046:	89 43 02             	mov    %eax,0x2(%ebx)
 8124049:	8b 55 e0             	mov    -0x20(%ebp),%edx
 812404c:	89 d0                	mov    %edx,%eax
 812404e:	c1 e0 02             	shl    $0x2,%eax
 8124051:	01 d0                	add    %edx,%eax
 8124053:	01 c0                	add    %eax,%eax
 8124055:	01 d0                	add    %edx,%eax
 8124057:	03 45 10             	add    0x10(%ebp),%eax
 812405a:	8b 40 02             	mov    0x2(%eax),%eax
 812405d:	89 04 24             	mov    %eax,(%esp)
 8124060:	e8 f1 08 77 00       	call   8894956 <_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE>
 8124065:	83 f0 01             	xor    $0x1,%eax
 8124068:	84 c0                	test   %al,%al
 812406a:	74 0a                	je     8124076 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x126>
 812406c:	b8 00 00 00 00       	mov    $0x0,%eax
 8124071:	e9 da 00 00 00       	jmp    8124150 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x200>
 8124076:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8124079:	89 44 24 08          	mov    %eax,0x8(%esp)
 812407d:	c7 44 24 04 f3 e2 b5 	movl   $0x8b5e2f3,0x4(%esp)
 8124084:	08 
 8124085:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 812408c:	e8 bf a0 f5 ff       	call   807e150 <strtok_r@plt>
 8124091:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8124094:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 812409b:	eb 4e                	jmp    81240eb <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x19b>
 812409d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81240a0:	89 04 24             	mov    %eax,(%esp)
 81240a3:	e8 48 a6 f5 ff       	call   807e6f0 <atoi@plt>
 81240a8:	88 45 f7             	mov    %al,-0x9(%ebp)
 81240ab:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81240ae:	89 d0                	mov    %edx,%eax
 81240b0:	c1 e0 02             	shl    $0x2,%eax
 81240b3:	01 d0                	add    %edx,%eax
 81240b5:	01 c0                	add    %eax,%eax
 81240b7:	01 d0                	add    %edx,%eax
 81240b9:	89 c2                	mov    %eax,%edx
 81240bb:	03 55 10             	add    0x10(%ebp),%edx
 81240be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81240c1:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
 81240c5:	88 4c 02 06          	mov    %cl,0x6(%edx,%eax,1)
 81240c9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81240cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81240d0:	c7 44 24 04 f3 e2 b5 	movl   $0x8b5e2f3,0x4(%esp)
 81240d7:	08 
 81240d8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81240df:	e8 6c a0 f5 ff       	call   807e150 <strtok_r@plt>
 81240e4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81240e7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81240eb:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81240ef:	74 0d                	je     81240fe <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1ae>
 81240f1:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 81240f5:	7f 07                	jg     81240fe <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1ae>
 81240f7:	b8 01 00 00 00       	mov    $0x1,%eax
 81240fc:	eb 05                	jmp    8124103 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1b3>
 81240fe:	b8 00 00 00 00       	mov    $0x0,%eax
 8124103:	84 c0                	test   %al,%al
 8124105:	75 96                	jne    812409d <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x14d>
 8124107:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812410a:	89 44 24 08          	mov    %eax,0x8(%esp)
 812410e:	c7 44 24 04 f1 e2 b5 	movl   $0x8b5e2f1,0x4(%esp)
 8124115:	08 
 8124116:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 812411d:	e8 2e a0 f5 ff       	call   807e150 <strtok_r@plt>
 8124122:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8124125:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8124129:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 812412d:	74 0f                	je     812413e <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1ee>
 812412f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124132:	3b 45 14             	cmp    0x14(%ebp),%eax
 8124135:	73 07                	jae    812413e <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1ee>
 8124137:	b8 01 00 00 00       	mov    $0x1,%eax
 812413c:	eb 05                	jmp    8124143 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x1f3>
 812413e:	b8 00 00 00 00       	mov    $0x0,%eax
 8124143:	84 c0                	test   %al,%al
 8124145:	0f 85 59 fe ff ff    	jne    8123fa4 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj+0x54>
 812414b:	b8 01 00 00 00       	mov    $0x1,%eax
 8124150:	83 c4 44             	add    $0x44,%esp
 8124153:	5b                   	pop    %ebx
 8124154:	5d                   	pop    %ebp
 8124155:	c3                   	ret

```

```c
// APSystem::DB_LoadActionPoint::ParseActionClearState @ 0x8123f50

/* APSystem::DB_LoadActionPoint::ParseActionClearState(char*, APSystem::_ActionPoint*, unsigned int)
    */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::ParseActionClearState
          (DB_LoadActionPoint *this,char *param_1,_ActionPoint *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *local_30;
  char *local_2c;
  char *local_28;
  uint local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  _ActionPoint local_d;
  
  if ((param_1 != (char *)0x0) && (param_2 != (_ActionPoint *)0x0)) {
    local_2c = (char *)0x0;
    local_28 = (char *)0x0;
    local_28 = strtok_r(param_1,"|",&local_2c);
    local_24 = 0;
    while( true ) {
      if ((local_28 == (char *)0x0) || (param_3 <= local_24)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_30 = (char *)0x0;
      local_20 = (char *)0x0;
      local_20 = strtok_r(local_28,",",&local_30);
      local_1c = (char *)0x0;
      local_18 = (char *)0x0;
      if (local_20 != (char *)0x0) {
        iVar4 = local_24 * 0xb;
        iVar3 = atoi(local_20);
        *(short *)(param_2 + iVar4) = (short)iVar3;
        local_1c = strtok_r((char *)0x0,",",&local_30);
      }
      if (local_1c != (char *)0x0) {
        iVar4 = local_24 * 0xb;
        iVar3 = atoi(local_1c);
        *(int *)(param_2 + iVar4 + 2) = iVar3;
        cVar2 = CActionPointEtcParameter::IsValidActionGroupIndex
                          (*(undefined4 *)(param_2 + local_24 * 0xb + 2));
        if (cVar2 != '\x01') {
          return 0;
        }
        local_18 = strtok_r((char *)0x0,",",&local_30);
      }
      local_14 = 0;
      while( true ) {
        if ((local_18 == (char *)0x0) || (4 < local_14)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        iVar4 = atoi(local_18);
        local_d = SUB41(iVar4,0);
        param_2[local_14 + local_24 * 0xb + 6] = local_d;
        local_18 = strtok_r((char *)0x0,",",&local_30);
        local_14 = local_14 + 1;
      }
      local_28 = strtok_r((char *)0x0,"|",&local_2c);
      local_24 = local_24 + 1;
    }
    return 1;
  }
  return 0;
}

```

---

## Select

```asm
// === 08123b9e APSystem::DB_LoadActionPoint::Select  [0x08123b9e-0x8123f4f] ===
 8123b9e:	55                   	push   %ebp
 8123b9f:	89 e5                	mov    %esp,%ebp
 8123ba1:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8123ba7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8123bac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8123bb3:	00 
 8123bb4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8123bbb:	00 
 8123bbc:	89 04 24             	mov    %eax,(%esp)
 8123bbf:	e8 7a 16 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8123bc4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8123bc7:	e8 b5 85 fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8123bcc:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8123bd2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8123bd5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8123bdc:	00 
 8123bdd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8123be4:	00 
 8123be5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8123be8:	89 04 24             	mov    %eax,(%esp)
 8123beb:	e8 6a e3 58 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 8123bf0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8123bf3:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8123bf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123bfa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8123bfd:	89 04 24             	mov    %eax,(%esp)
 8123c00:	e8 5b a7 f5 ff       	call   807e360 <localtime_r@plt>
 8123c05:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8123c08:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8123c0b:	8d 4a 01             	lea    0x1(%edx),%ecx
 8123c0e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8123c11:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 8123c17:	89 44 24 10          	mov    %eax,0x10(%esp)
 8123c1b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8123c1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123c23:	c7 44 24 04 23 e2 b5 	movl   $0x8b5e223,0x4(%esp)
 8123c2a:	08 
 8123c2b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8123c2e:	89 04 24             	mov    %eax,(%esp)
 8123c31:	e8 0a a8 f5 ff       	call   807e440 <sprintf@plt>
 8123c36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123c39:	8b 00                	mov    (%eax),%eax
 8123c3b:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8123c3e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8123c42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8123c46:	c7 44 24 04 34 e2 b5 	movl   $0x8b5e234,0x4(%esp)
 8123c4d:	08 
 8123c4e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123c51:	89 04 24             	mov    %eax,(%esp)
 8123c54:	e8 67 05 2d 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8123c59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8123c60:	00 
 8123c61:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123c64:	89 04 24             	mov    %eax,(%esp)
 8123c67:	e8 ba 06 2d 00       	call   83f4326 <_ZN5MySQL4execEb>
 8123c6c:	83 f0 01             	xor    $0x1,%eax
 8123c6f:	84 c0                	test   %al,%al
 8123c71:	74 0a                	je     8123c7d <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0xdf>
 8123c73:	b8 00 00 00 00       	mov    $0x0,%eax
 8123c78:	e9 d1 02 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123c7d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123c80:	89 04 24             	mov    %eax,(%esp)
 8123c83:	e8 e4 e6 fb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8123c88:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8123c8b:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 8123c8f:	0f 85 b4 02 00 00    	jne    8123f49 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3ab>
 8123c95:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123c98:	89 04 24             	mov    %eax,(%esp)
 8123c9b:	e8 1c 08 2d 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8123ca0:	83 f0 01             	xor    $0x1,%eax
 8123ca3:	84 c0                	test   %al,%al
 8123ca5:	74 0a                	je     8123cb1 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x113>
 8123ca7:	b8 00 00 00 00       	mov    $0x0,%eax
 8123cac:	e9 9d 02 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123cb1:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8123cb8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8123cbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123cc2:	8d 50 04             	lea    0x4(%eax),%edx
 8123cc5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123cc8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8123ccc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123cd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123cd4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123cd7:	89 04 24             	mov    %eax,(%esp)
 8123cda:	e8 13 e6 fb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8123cdf:	83 f0 01             	xor    $0x1,%eax
 8123ce2:	84 c0                	test   %al,%al
 8123ce4:	74 0a                	je     8123cf0 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x152>
 8123ce6:	b8 00 00 00 00       	mov    $0x0,%eax
 8123ceb:	e9 5e 02 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123cf0:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 8123cf4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123cf7:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8123cfb:	8d 55 c7             	lea    -0x39(%ebp),%edx
 8123cfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123d02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123d06:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123d09:	89 04 24             	mov    %eax,(%esp)
 8123d0c:	e8 a9 a1 fd ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8123d11:	83 f0 01             	xor    $0x1,%eax
 8123d14:	84 c0                	test   %al,%al
 8123d16:	74 0a                	je     8123d22 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x184>
 8123d18:	b8 00 00 00 00       	mov    $0x0,%eax
 8123d1d:	e9 2c 02 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123d22:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8123d26:	84 c0                	test   %al,%al
 8123d28:	0f 95 c2             	setne  %dl
 8123d2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123d2e:	88 50 08             	mov    %dl,0x8(%eax)
 8123d31:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123d34:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8123d38:	8d 55 c7             	lea    -0x39(%ebp),%edx
 8123d3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123d3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123d43:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123d46:	89 04 24             	mov    %eax,(%esp)
 8123d49:	e8 6c a1 fd ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8123d4e:	83 f0 01             	xor    $0x1,%eax
 8123d51:	84 c0                	test   %al,%al
 8123d53:	74 0a                	je     8123d5f <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x1c1>
 8123d55:	b8 00 00 00 00       	mov    $0x0,%eax
 8123d5a:	e9 ef 01 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123d5f:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8123d63:	84 c0                	test   %al,%al
 8123d65:	0f 95 c2             	setne  %dl
 8123d68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123d6b:	88 50 09             	mov    %dl,0x9(%eax)
 8123d6e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123d71:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8123d75:	8d 55 c7             	lea    -0x39(%ebp),%edx
 8123d78:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123d7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123d80:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123d83:	89 04 24             	mov    %eax,(%esp)
 8123d86:	e8 2f a1 fd ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8123d8b:	83 f0 01             	xor    $0x1,%eax
 8123d8e:	84 c0                	test   %al,%al
 8123d90:	74 0a                	je     8123d9c <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x1fe>
 8123d92:	b8 00 00 00 00       	mov    $0x0,%eax
 8123d97:	e9 b2 01 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123d9c:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8123da0:	84 c0                	test   %al,%al
 8123da2:	0f 95 c2             	setne  %dl
 8123da5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123da8:	88 50 0a             	mov    %dl,0xa(%eax)
 8123dab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123dae:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8123db2:	8d 55 c7             	lea    -0x39(%ebp),%edx
 8123db5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123db9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123dbd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123dc0:	89 04 24             	mov    %eax,(%esp)
 8123dc3:	e8 f2 a0 fd ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8123dc8:	83 f0 01             	xor    $0x1,%eax
 8123dcb:	84 c0                	test   %al,%al
 8123dcd:	74 0a                	je     8123dd9 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x23b>
 8123dcf:	b8 00 00 00 00       	mov    $0x0,%eax
 8123dd4:	e9 75 01 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123dd9:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8123ddd:	84 c0                	test   %al,%al
 8123ddf:	0f 95 c2             	setne  %dl
 8123de2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123de5:	88 50 0b             	mov    %dl,0xb(%eax)
 8123de8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123deb:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8123def:	8d 55 c7             	lea    -0x39(%ebp),%edx
 8123df2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123df6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123dfa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123dfd:	89 04 24             	mov    %eax,(%esp)
 8123e00:	e8 b5 a0 fd ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8123e05:	83 f0 01             	xor    $0x1,%eax
 8123e08:	84 c0                	test   %al,%al
 8123e0a:	74 0a                	je     8123e16 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x278>
 8123e0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8123e11:	e9 38 01 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123e16:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8123e1a:	84 c0                	test   %al,%al
 8123e1c:	0f 95 c2             	setne  %dl
 8123e1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123e22:	88 50 0c             	mov    %dl,0xc(%eax)
 8123e25:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123e28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123e2c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123e2f:	89 04 24             	mov    %eax,(%esp)
 8123e32:	e8 a7 15 00 00       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8123e37:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8123e3a:	81 7d f0 ff 07 00 00 	cmpl   $0x7ff,-0x10(%ebp)
 8123e41:	76 0a                	jbe    8123e4d <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x2af>
 8123e43:	b8 00 00 00 00       	mov    $0x0,%eax
 8123e48:	e9 01 01 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123e4d:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 8123e54:	00 
 8123e55:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8123e5c:	00 
 8123e5d:	c7 04 24 a0 f0 3f 09 	movl   $0x93ff0a0,(%esp)
 8123e64:	e8 57 9e f5 ff       	call   807dcc0 <memset@plt>
 8123e69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8123e6c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8123e70:	c7 44 24 08 a0 f0 3f 	movl   $0x93ff0a0,0x8(%esp)
 8123e77:	09 
 8123e78:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8123e7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123e7f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8123e82:	89 04 24             	mov    %eax,(%esp)
 8123e85:	e8 90 14 00 00       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8123e8a:	83 f0 01             	xor    $0x1,%eax
 8123e8d:	84 c0                	test   %al,%al
 8123e8f:	74 0a                	je     8123e9b <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x2fd>
 8123e91:	b8 00 00 00 00       	mov    $0x0,%eax
 8123e96:	e9 b3 00 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123e9b:	b8 a0 f0 3f 09       	mov    $0x93ff0a0,%eax
 8123ea0:	8b 00                	mov    (%eax),%eax
 8123ea2:	25 ff ff ff 3f       	and    $0x3fffffff,%eax
 8123ea7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8123eaa:	81 7d f4 ff 07 00 00 	cmpl   $0x7ff,-0xc(%ebp)
 8123eb1:	76 0a                	jbe    8123ebd <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x31f>
 8123eb3:	b8 00 00 00 00       	mov    $0x0,%eax
 8123eb8:	e9 91 00 00 00       	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123ebd:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 8123ec4:	00 
 8123ec5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8123ecc:	00 
 8123ecd:	c7 04 24 a0 f8 3f 09 	movl   $0x93ff8a0,(%esp)
 8123ed4:	e8 e7 9d f5 ff       	call   807dcc0 <memset@plt>
 8123ed9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8123edc:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8123edf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8123ee2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8123ee6:	c7 44 24 08 a0 f0 3f 	movl   $0x93ff0a0,0x8(%esp)
 8123eed:	09 
 8123eee:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8123ef1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123ef5:	c7 04 24 a0 f8 3f 09 	movl   $0x93ff8a0,(%esp)
 8123efc:	e8 01 e2 58 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8123f01:	83 f0 01             	xor    $0x1,%eax
 8123f04:	84 c0                	test   %al,%al
 8123f06:	74 07                	je     8123f0f <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x371>
 8123f08:	b8 00 00 00 00       	mov    $0x0,%eax
 8123f0d:	eb 3f                	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123f0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123f12:	83 c0 0d             	add    $0xd,%eax
 8123f15:	c7 44 24 0c 2c 01 00 	movl   $0x12c,0xc(%esp)
 8123f1c:	00 
 8123f1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8123f21:	c7 44 24 04 a0 f8 3f 	movl   $0x93ff8a0,0x4(%esp)
 8123f28:	09 
 8123f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8123f2c:	89 04 24             	mov    %eax,(%esp)
 8123f2f:	e8 1c 00 00 00       	call   8123f50 <_ZN8APSystem18DB_LoadActionPoint21ParseActionClearStateEPcPNS_12_ActionPointEj>
 8123f34:	83 f0 01             	xor    $0x1,%eax
 8123f37:	84 c0                	test   %al,%al
 8123f39:	74 07                	je     8123f42 <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3a4>
 8123f3b:	b8 00 00 00 00       	mov    $0x0,%eax
 8123f40:	eb 0c                	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123f42:	b8 01 00 00 00       	mov    $0x1,%eax
 8123f47:	eb 05                	jmp    8123f4e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE+0x3b0>
 8123f49:	b8 00 00 00 00       	mov    $0x0,%eax
 8123f4e:	c9                   	leave
 8123f4f:	c3                   	ret

```

```c
// APSystem::DB_LoadActionPoint::Select @ 0x8123b9e

/* APSystem::DB_LoadActionPoint::Select(APSystem::_SIG_LOAD_ACTION_POINT&) */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::Select(DB_LoadActionPoint *this,_SIG_LOAD_ACTION_POINT *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  tm local_70;
  uint local_44;
  uchar local_3d;
  char local_3c [16];
  time_t local_2c;
  MySQL *local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  iVar2 = G_CEnvironment();
  local_24 = *(int *)(iVar2 + 0x37c);
  local_2c = getDailyInitializeTime(local_24,0,0);
  localtime_r(&local_2c,&local_70);
  sprintf(local_3c,"%04d-%02d-%02d",local_70.tm_year + 0x76c,local_70.tm_mon + 1,local_70.tm_mday);
  MySQL::set_query(local_28,
                   "select ap_sum, is_reward_medal, is_reward_item_1, is_reward_item_2, is_reward_item_3, is_reward_item_4, ap_clear_state  from charac_action_point  where charac_no = %u  and occ_date = \'%s\' "
                   ,*(undefined4 *)param_1,local_3c);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    local_20 = MySQL::get_n_rows(local_28);
    if (local_20 == 1) {
      cVar1 = MySQL::fetch(local_28);
      if (cVar1 == '\x01') {
        local_18 = 0;
        local_1c = 1;
        cVar1 = MySQL::get_uint(local_28,0,(uint *)(param_1 + 4));
        iVar2 = local_1c;
        if (cVar1 == '\x01') {
          local_3d = '\0';
          local_1c = local_1c + 1;
          cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
          iVar2 = local_1c;
          if (cVar1 == '\x01') {
            param_1[8] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
            local_1c = local_1c + 1;
            cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
            iVar2 = local_1c;
            if (cVar1 == '\x01') {
              param_1[9] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
              local_1c = local_1c + 1;
              cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
              iVar2 = local_1c;
              if (cVar1 == '\x01') {
                param_1[10] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
                local_1c = local_1c + 1;
                cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
                iVar2 = local_1c;
                if (cVar1 == '\x01') {
                  param_1[0xb] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
                  local_1c = local_1c + 1;
                  cVar1 = MySQL::get_ubyte(local_28,iVar2,&local_3d);
                  if (cVar1 == '\x01') {
                    param_1[0xc] = (_SIG_LOAD_ACTION_POINT)(local_3d != '\0');
                    local_14 = MySQL::get_binary_length(local_28,local_1c);
                    if (local_14 < 0x800) {
                      memset(&g_szZipAP_CLEAR_STATE,0,0x800);
                      cVar1 = MySQL::get_binary(local_28,local_1c,&g_szZipAP_CLEAR_STATE,local_14);
                      if (cVar1 == '\x01') {
                        local_10 = g_szZipAP_CLEAR_STATE & 0x3fffffff;
                        if (local_10 < 0x800) {
                          memset(g_szStrAP_CLEAR_STATE,0,0x800);
                          local_44 = local_10;
                          cVar1 = uncompress_zip(g_szStrAP_CLEAR_STATE,&local_44,
                                                 (char *)&g_szZipAP_CLEAR_STATE,local_14);
                          if (cVar1 == '\x01') {
                            cVar1 = ParseActionClearState
                                              (this,g_szStrAP_CLEAR_STATE,
                                               (_ActionPoint *)(param_1 + 0xd),300);
                            if (cVar1 == '\x01') {
                              uVar3 = 1;
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## SendResult

```asm
// === 08124156 APSystem::DB_LoadActionPoint::SendResult  [0x08124156-0x812431b] ===
 8124156:	55                   	push   %ebp
 8124157:	89 e5                	mov    %esp,%ebp
 8124159:	56                   	push   %esi
 812415a:	53                   	push   %ebx
 812415b:	83 ec 30             	sub    $0x30,%esp
 812415e:	8b 45 18             	mov    0x18(%ebp),%eax
 8124161:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8124164:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8124168:	0f 84 d3 00 00 00    	je     8124241 <_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb+0xeb>
 812416e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8124173:	c7 44 24 08 b1 00 00 	movl   $0xb1,0x8(%esp)
 812417a:	00 
 812417b:	c7 44 24 04 f8 e2 b5 	movl   $0x8b5e2f8,0x4(%esp)
 8124182:	08 
 8124183:	89 04 24             	mov    %eax,(%esp)
 8124186:	e8 fb b8 16 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 812418b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8124192:	00 
 8124193:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124197:	8d 45 f0             	lea    -0x10(%ebp),%eax
 812419a:	89 04 24             	mov    %eax,(%esp)
 812419d:	e8 84 4a fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81241a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81241a5:	89 04 24             	mov    %eax,(%esp)
 81241a8:	e8 99 4a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81241ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 81241b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81241b4:	89 04 24             	mov    %eax,(%esp)
 81241b7:	e8 9a 4a fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81241bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81241bf:	89 04 24             	mov    %eax,(%esp)
 81241c2:	e8 7f 4a fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81241c7:	8b 55 10             	mov    0x10(%ebp),%edx
 81241ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 81241ce:	89 04 24             	mov    %eax,(%esp)
 81241d1:	e8 80 4a fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81241d6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81241d9:	89 04 24             	mov    %eax,(%esp)
 81241dc:	e8 6d 4a fa ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81241e1:	c7 44 24 08 f1 0c 00 	movl   $0xcf1,0x8(%esp)
 81241e8:	00 
 81241e9:	8b 55 14             	mov    0x14(%ebp),%edx
 81241ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 81241f0:	89 04 24             	mov    %eax,(%esp)
 81241f3:	e8 5a a4 fb ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81241f8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81241fd:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8124200:	89 54 24 08          	mov    %edx,0x8(%esp)
 8124204:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812420b:	00 
 812420c:	89 04 24             	mov    %eax,(%esp)
 812420f:	e8 ca cd 44 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8124214:	eb 1b                	jmp    8124231 <_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb+0xdb>
 8124216:	89 d3                	mov    %edx,%ebx
 8124218:	89 c6                	mov    %eax,%esi
 812421a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 812421d:	89 04 24             	mov    %eax,(%esp)
 8124220:	e8 ad 86 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8124225:	89 f0                	mov    %esi,%eax
 8124227:	89 da                	mov    %ebx,%edx
 8124229:	89 04 24             	mov    %eax,(%esp)
 812422c:	e8 1f f5 9b 00       	call   8ae3750 <_Unwind_Resume>
 8124231:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124234:	89 04 24             	mov    %eax,(%esp)
 8124237:	e8 96 86 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 812423c:	e9 cf 00 00 00       	jmp    8124310 <_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb+0x1ba>
 8124241:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8124246:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 812424d:	00 
 812424e:	c7 44 24 04 f8 e2 b5 	movl   $0x8b5e2f8,0x4(%esp)
 8124255:	08 
 8124256:	89 04 24             	mov    %eax,(%esp)
 8124259:	e8 28 b8 16 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 812425e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8124265:	00 
 8124266:	89 44 24 04          	mov    %eax,0x4(%esp)
 812426a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812426d:	89 04 24             	mov    %eax,(%esp)
 8124270:	e8 b1 49 fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8124275:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8124278:	89 04 24             	mov    %eax,(%esp)
 812427b:	e8 c6 49 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8124280:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 8124287:	00 
 8124288:	89 04 24             	mov    %eax,(%esp)
 812428b:	e8 c6 49 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8124290:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8124293:	89 04 24             	mov    %eax,(%esp)
 8124296:	e8 ab 49 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 812429b:	8b 55 10             	mov    0x10(%ebp),%edx
 812429e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81242a2:	89 04 24             	mov    %eax,(%esp)
 81242a5:	e8 ac 49 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81242aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81242ad:	89 04 24             	mov    %eax,(%esp)
 81242b0:	e8 99 49 fa ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81242b5:	c7 44 24 08 f1 0c 00 	movl   $0xcf1,0x8(%esp)
 81242bc:	00 
 81242bd:	8b 55 14             	mov    0x14(%ebp),%edx
 81242c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81242c4:	89 04 24             	mov    %eax,(%esp)
 81242c7:	e8 86 a3 fb ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81242cc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81242d1:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81242d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81242d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81242df:	00 
 81242e0:	89 04 24             	mov    %eax,(%esp)
 81242e3:	e8 f6 cc 44 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81242e8:	eb 1b                	jmp    8124305 <_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb+0x1af>
 81242ea:	89 d3                	mov    %edx,%ebx
 81242ec:	89 c6                	mov    %eax,%esi
 81242ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81242f1:	89 04 24             	mov    %eax,(%esp)
 81242f4:	e8 d9 85 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81242f9:	89 f0                	mov    %esi,%eax
 81242fb:	89 da                	mov    %ebx,%edx
 81242fd:	89 04 24             	mov    %eax,(%esp)
 8124300:	e8 4b f4 9b 00       	call   8ae3750 <_Unwind_Resume>
 8124305:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8124308:	89 04 24             	mov    %eax,(%esp)
 812430b:	e8 c2 85 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8124310:	b8 01 00 00 00       	mov    $0x1,%eax
 8124315:	83 c4 30             	add    $0x30,%esp
 8124318:	5b                   	pop    %ebx
 8124319:	5e                   	pop    %esi
 812431a:	5d                   	pop    %ebp
 812431b:	c3                   	ret

```

```c
// APSystem::DB_LoadActionPoint::SendResult @ 0x8124156

/* APSystem::DB_LoadActionPoint::SendResult(int, int, APSystem::_SIG_LOAD_ACTION_POINT&, bool) */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::SendResult
          (DB_LoadActionPoint *this,int param_1,int param_2,_SIG_LOAD_ACTION_POINT *param_3,
          bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_1c [8];
  CStreamGuard local_14 [8];
  
  if (param_4) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localchina/localchina_ActionPointSystem_Dispatcher.cpp",0xb1);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 081241b7 to 08124213 has its CatchHandler @ 08124216 */
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_3,0xcf1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  else {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localchina/localchina_ActionPointSystem_Dispatcher.cpp",0xbc);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0812428b to 081242e7 has its CatchHandler @ 081242ea */
    CStreamGuard::operator<<(pCVar2,0x12);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    CStreamGuard::put_binary(pCVar2,param_3,0xcf1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return 1;
}

```

---

## dispatch

```asm
// === 08123b10 APSystem::DB_LoadActionPoint::dispatch  [0x08123b10-0x8123b9d] ===
 8123b10:	55                   	push   %ebp
 8123b11:	89 e5                	mov    %esp,%ebp
 8123b13:	83 ec 38             	sub    $0x38,%esp
 8123b16:	8b 45 08             	mov    0x8(%ebp),%eax
 8123b19:	8b 55 14             	mov    0x14(%ebp),%edx
 8123b1c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8123b20:	8b 55 10             	mov    0x10(%ebp),%edx
 8123b23:	89 54 24 08          	mov    %edx,0x8(%esp)
 8123b27:	8b 55 0c             	mov    0xc(%ebp),%edx
 8123b2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8123b2e:	89 04 24             	mov    %eax,(%esp)
 8123b31:	e8 46 84 2d 00       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8123b36:	83 f0 01             	xor    $0x1,%eax
 8123b39:	84 c0                	test   %al,%al
 8123b3b:	74 07                	je     8123b44 <_ZN8APSystem18DB_LoadActionPoint8dispatchEiiP6Stream+0x34>
 8123b3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8123b42:	eb 58                	jmp    8123b9c <_ZN8APSystem18DB_LoadActionPoint8dispatchEiiP6Stream+0x8c>
 8123b44:	8b 45 14             	mov    0x14(%ebp),%eax
 8123b47:	89 04 24             	mov    %eax,(%esp)
 8123b4a:	e8 95 1b 00 00       	call   81256e4 <_ZN6Stream12GetOutBufferIN8APSystem22_SIG_LOAD_ACTION_POINTEEEPT_v>
 8123b4f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8123b52:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8123b56:	75 07                	jne    8123b5f <_ZN8APSystem18DB_LoadActionPoint8dispatchEiiP6Stream+0x4f>
 8123b58:	b8 00 00 00 00       	mov    $0x0,%eax
 8123b5d:	eb 3d                	jmp    8123b9c <_ZN8APSystem18DB_LoadActionPoint8dispatchEiiP6Stream+0x8c>
 8123b5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8123b62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123b66:	8b 45 08             	mov    0x8(%ebp),%eax
 8123b69:	89 04 24             	mov    %eax,(%esp)
 8123b6c:	e8 2d 00 00 00       	call   8123b9e <_ZN8APSystem18DB_LoadActionPoint6SelectERNS_22_SIG_LOAD_ACTION_POINTE>
 8123b71:	88 45 f7             	mov    %al,-0x9(%ebp)
 8123b74:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8123b78:	89 44 24 10          	mov    %eax,0x10(%esp)
 8123b7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8123b7f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8123b83:	8b 45 10             	mov    0x10(%ebp),%eax
 8123b86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8123b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8123b8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8123b91:	8b 45 08             	mov    0x8(%ebp),%eax
 8123b94:	89 04 24             	mov    %eax,(%esp)
 8123b97:	e8 ba 05 00 00       	call   8124156 <_ZN8APSystem18DB_LoadActionPoint10SendResultEiiRNS_22_SIG_LOAD_ACTION_POINTEb>
 8123b9c:	c9                   	leave
 8123b9d:	c3                   	ret

```

```c
// APSystem::DB_LoadActionPoint::dispatch @ 0x8123b10

/* APSystem::DB_LoadActionPoint::dispatch(int, int, Stream*) */

undefined4 __thiscall
APSystem::DB_LoadActionPoint::dispatch
          (DB_LoadActionPoint *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  _SIG_LOAD_ACTION_POINT *p_Var4;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    p_Var4 = Stream::GetOutBuffer<APSystem::_SIG_LOAD_ACTION_POINT>(param_3);
    if (p_Var4 == (_SIG_LOAD_ACTION_POINT *)0x0) {
      uVar3 = 0;
    }
    else {
      bVar2 = (bool)Select(this,p_Var4);
      uVar3 = SendResult(this,param_1,param_2,p_Var4,bVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

