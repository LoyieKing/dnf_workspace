# game_master__CTestDisjointCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a9c0c game_master::CTestDisjointCmd::execute  [0x084a9c0c-0x84a9da9] ===
 84a9c0c:	55                   	push   %ebp
 84a9c0d:	89 e5                	mov    %esp,%ebp
 84a9c0f:	57                   	push   %edi
 84a9c10:	56                   	push   %esi
 84a9c11:	53                   	push   %ebx
 84a9c12:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 84a9c18:	e8 7e 25 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9c1d:	c7 44 24 04 5a 79 00 	movl   $0x795a,0x4(%esp)
 84a9c24:	00 
 84a9c25:	89 04 24             	mov    %eax,(%esp)
 84a9c28:	e8 05 5e eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a9c2d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84a9c30:	e8 66 25 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9c35:	c7 44 24 04 5b 79 00 	movl   $0x795b,0x4(%esp)
 84a9c3c:	00 
 84a9c3d:	89 04 24             	mov    %eax,(%esp)
 84a9c40:	e8 ed 5d eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a9c45:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84a9c48:	e8 4e 25 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9c4d:	c7 44 24 04 7a 79 00 	movl   $0x797a,0x4(%esp)
 84a9c54:	00 
 84a9c55:	89 04 24             	mov    %eax,(%esp)
 84a9c58:	e8 d5 5d eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a9c5d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84a9c60:	e8 36 25 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9c65:	c7 44 24 04 5e 79 00 	movl   $0x795e,0x4(%esp)
 84a9c6c:	00 
 84a9c6d:	89 04 24             	mov    %eax,(%esp)
 84a9c70:	e8 bd 5d eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a9c75:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84a9c78:	e8 1e 25 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9c7d:	c7 44 24 04 77 79 00 	movl   $0x7977,0x4(%esp)
 84a9c84:	00 
 84a9c85:	89 04 24             	mov    %eax,(%esp)
 84a9c88:	e8 a5 5d eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a9c8d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84a9c90:	e8 06 25 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a9c95:	c7 44 24 04 e0 75 09 	movl   $0x975e0,0x4(%esp)
 84a9c9c:	00 
 84a9c9d:	89 04 24             	mov    %eax,(%esp)
 84a9ca0:	e8 8d 5d eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a9ca5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84a9ca8:	c7 45 d8 e8 03 00 00 	movl   $0x3e8,-0x28(%ebp)
 84a9caf:	8d 45 98             	lea    -0x68(%ebp),%eax
 84a9cb2:	89 04 24             	mov    %eax,(%esp)
 84a9cb5:	e8 e8 aa d8 ff       	call   82347a2 <_ZN14DisJointResultC1Ev>
 84a9cba:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84a9cc1:	e9 c9 00 00 00       	jmp    84a9d8f <_ZN11game_master16CTestDisjointCmd7executeEv+0x183>
 84a9cc6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84a9ccd:	e9 aa 00 00 00       	jmp    84a9d7c <_ZN11game_master16CTestDisjointCmd7executeEv+0x170>
 84a9cd2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84a9cd9:	e9 89 00 00 00       	jmp    84a9d67 <_ZN11game_master16CTestDisjointCmd7executeEv+0x15b>
 84a9cde:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a9ce1:	8b 44 85 c0          	mov    -0x40(%ebp,%eax,4),%eax
 84a9ce5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84a9cec:	00 
 84a9ced:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84a9cf4:	00 
 84a9cf5:	8d 55 98             	lea    -0x68(%ebp),%edx
 84a9cf8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a9cfc:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a9cff:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a9d03:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a9d0a:	00 
 84a9d0b:	89 04 24             	mov    %eax,(%esp)
 84a9d0e:	e8 37 86 12 00       	call   85d234a <_ZN10expert_job11CDisjointer20get_disjoint_result_EP5CItemP10Inven_ItemiR14DisJointResultbP5CUser>
 84a9d13:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84a9d16:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84a9d19:	8b 7d b0             	mov    -0x50(%ebp),%edi
 84a9d1c:	8b 75 98             	mov    -0x68(%ebp),%esi
 84a9d1f:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 84a9d22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a9d25:	8b 44 85 c0          	mov    -0x40(%ebp,%eax,4),%eax
 84a9d29:	89 04 24             	mov    %eax,(%esp)
 84a9d2c:	e8 a5 75 c4 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84a9d31:	8b 55 94             	mov    -0x6c(%ebp),%edx
 84a9d34:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84a9d38:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84a9d3c:	89 74 24 14          	mov    %esi,0x14(%esp)
 84a9d40:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84a9d44:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a9d47:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a9d4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a9d4f:	c7 44 24 04 e0 fa c7 	movl   $0x8c7fae0,0x4(%esp)
 84a9d56:	08 
 84a9d57:	c7 04 24 f3 fa c7 08 	movl   $0x8c7faf3,(%esp)
 84a9d5e:	e8 27 2a 0e 00       	call   858c78a <_ZN6OS_API8WriteLogEPKcS1_z>
 84a9d63:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84a9d67:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a9d6a:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84a9d6d:	0f 9c c0             	setl   %al
 84a9d70:	84 c0                	test   %al,%al
 84a9d72:	0f 85 66 ff ff ff    	jne    84a9cde <_ZN11game_master16CTestDisjointCmd7executeEv+0xd2>
 84a9d78:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84a9d7c:	83 7d e0 08          	cmpl   $0x8,-0x20(%ebp)
 84a9d80:	0f 9e c0             	setle  %al
 84a9d83:	84 c0                	test   %al,%al
 84a9d85:	0f 85 47 ff ff ff    	jne    84a9cd2 <_ZN11game_master16CTestDisjointCmd7executeEv+0xc6>
 84a9d8b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84a9d8f:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 84a9d93:	0f 9e c0             	setle  %al
 84a9d96:	84 c0                	test   %al,%al
 84a9d98:	0f 85 28 ff ff ff    	jne    84a9cc6 <_ZN11game_master16CTestDisjointCmd7executeEv+0xba>
 84a9d9e:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 84a9da4:	5b                   	pop    %ebx
 84a9da5:	5e                   	pop    %esi
 84a9da6:	5f                   	pop    %edi
 84a9da7:	5d                   	pop    %ebp
 84a9da8:	c3                   	ret
 84a9da9:	90                   	nop

```

```c
// game_master::CTestDisjointCmd::execute @ 0x84a9c0c

/* game_master::CTestDisjointCmd::execute() */

void game_master::CTestDisjointCmd::execute(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[0] = CDataManager::find_item(pCVar5,0x795a);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[1] = CDataManager::find_item(pCVar5,0x795b);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[2] = CDataManager::find_item(pCVar5,0x797a);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_44[3] = CDataManager::find_item(pCVar5,0x795e);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_34 = CDataManager::find_item(pCVar5,0x7977);
  pCVar5 = (CDataManager *)G_CDataManager();
  local_30 = CDataManager::find_item(pCVar5,620000);
  local_2c = 1000;
  DisJointResult::DisJointResult((DisJointResult *)&local_6c);
  for (local_28 = 0; local_28 < 6; local_28 = local_28 + 1) {
    for (local_24 = 0; local_24 < 9; local_24 = local_24 + 1) {
      for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
        expert_job::CDisjointer::get_disjoint_result_
                  ((CItem *)local_44[local_28],(Inven_Item *)0x0,local_24,
                   (DisJointResult *)&local_6c,false,(CUser *)0x0);
        uVar4 = local_54;
        uVar3 = local_58;
        uVar2 = local_68;
        uVar1 = local_6c;
        uVar6 = CItem::get_rarity((CItem *)local_44[local_28]);
        OS_API::WriteLog("disjoint_result","%d;%d;%d;%d;%d;%d\n",uVar6,local_24,uVar3,uVar1,uVar4,
                         uVar2);
      }
    }
  }
  return;
}

```

