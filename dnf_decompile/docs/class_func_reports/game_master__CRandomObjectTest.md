# game_master__CRandomObjectTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## checkCommandExecuteError

```asm
// === 084b02be game_master::CRandomObjectTest::checkCommandExecuteError  [0x084b02be-0x84b02e5] ===
 84b02be:	55                   	push   %ebp
 84b02bf:	89 e5                	mov    %esp,%ebp
 84b02c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b02c4:	8b 40 0c             	mov    0xc(%eax),%eax
 84b02c7:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 84b02cc:	7f 0a                	jg     84b02d8 <_ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv+0x1a>
 84b02ce:	8b 45 08             	mov    0x8(%ebp),%eax
 84b02d1:	8b 40 0c             	mov    0xc(%eax),%eax
 84b02d4:	85 c0                	test   %eax,%eax
 84b02d6:	79 07                	jns    84b02df <_ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv+0x21>
 84b02d8:	b8 64 ff c7 08       	mov    $0x8c7ff64,%eax
 84b02dd:	eb 05                	jmp    84b02e4 <_ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv+0x26>
 84b02df:	b8 00 00 00 00       	mov    $0x0,%eax
 84b02e4:	5d                   	pop    %ebp
 84b02e5:	c3                   	ret

```

```c
// game_master::CRandomObjectTest::checkCommandExecuteError @ 0x84b02be

/* game_master::CRandomObjectTest::checkCommandExecuteError() */

undefined * __thiscall
game_master::CRandomObjectTest::checkCommandExecuteError(CRandomObjectTest *this)

{
  undefined *puVar1;
  
  if ((*(int *)(this + 0xc) < 0x186a1) && (-1 < *(int *)(this + 0xc))) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_08c7ff64;
  }
  return puVar1;
}

```

---

## execute

```asm
// === 084b0082 game_master::CRandomObjectTest::execute  [0x084b0082-0x84b02bd] ===
 84b0082:	55                   	push   %ebp
 84b0083:	89 e5                	mov    %esp,%ebp
 84b0085:	57                   	push   %edi
 84b0086:	56                   	push   %esi
 84b0087:	53                   	push   %ebx
 84b0088:	81 ec 7c 74 01 00    	sub    $0x1747c,%esp
 84b008e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0091:	89 04 24             	mov    %eax,(%esp)
 84b0094:	e8 21 3f 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b0099:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84b009c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84b00a0:	0f 84 0c 02 00 00    	je     84b02b2 <_ZN11game_master17CRandomObjectTest7executeEv+0x230>
 84b00a6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b00a9:	89 04 24             	mov    %eax,(%esp)
 84b00ac:	e8 0d 02 00 00       	call   84b02be <_ZN11game_master17CRandomObjectTest24checkCommandExecuteErrorEv>
 84b00b1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84b00b4:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84b00b8:	74 17                	je     84b00d1 <_ZN11game_master17CRandomObjectTest7executeEv+0x4f>
 84b00ba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b00bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b00c1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b00c4:	89 04 24             	mov    %eax,(%esp)
 84b00c7:	e8 fa e9 ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84b00cc:	e9 e2 01 00 00       	jmp    84b02b3 <_ZN11game_master17CRandomObjectTest7executeEv+0x231>
 84b00d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b00d4:	8b 40 0c             	mov    0xc(%eax),%eax
 84b00d7:	85 c0                	test   %eax,%eax
 84b00d9:	75 0a                	jne    84b00e5 <_ZN11game_master17CRandomObjectTest7executeEv+0x63>
 84b00db:	8b 45 08             	mov    0x8(%ebp),%eax
 84b00de:	c7 40 0c 10 27 00 00 	movl   $0x2710,0xc(%eax)
 84b00e5:	8b 45 08             	mov    0x8(%ebp),%eax
 84b00e8:	8b 40 0c             	mov    0xc(%eax),%eax
 84b00eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b00ef:	c7 44 24 04 db fd c7 	movl   $0x8c7fddb,0x4(%esp)
 84b00f6:	08 
 84b00f7:	8d 45 c7             	lea    -0x39(%ebp),%eax
 84b00fa:	89 04 24             	mov    %eax,(%esp)
 84b00fd:	e8 3e e3 bc ff       	call   807e440 <sprintf@plt>
 84b0102:	8d 45 c7             	lea    -0x39(%ebp),%eax
 84b0105:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0109:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b010c:	89 04 24             	mov    %eax,(%esp)
 84b010f:	e8 b2 e9 ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84b0114:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84b0117:	89 04 24             	mov    %eax,(%esp)
 84b011a:	e8 45 6b c1 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 84b011f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0122:	8b 40 08             	mov    0x8(%eax),%eax
 84b0125:	83 f8 01             	cmp    $0x1,%eax
 84b0128:	0f 85 77 01 00 00    	jne    84b02a5 <_ZN11game_master17CRandomObjectTest7executeEv+0x223>
 84b012e:	c7 44 24 04 e0 01 c8 	movl   $0x8c801e0,0x4(%esp)
 84b0135:	08 
 84b0136:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b0139:	89 04 24             	mov    %eax,(%esp)
 84b013c:	e8 85 e9 ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84b0141:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84b0144:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0148:	8b 45 08             	mov    0x8(%ebp),%eax
 84b014b:	89 04 24             	mov    %eax,(%esp)
 84b014e:	e8 93 01 00 00       	call   84b02e6 <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84b0153:	90                   	nop
 84b0154:	8d 95 ad fe ff ff    	lea    -0x153(%ebp),%edx
 84b015a:	bb ff 00 00 00       	mov    $0xff,%ebx
 84b015f:	b8 00 00 00 00       	mov    $0x0,%eax
 84b0164:	89 d1                	mov    %edx,%ecx
 84b0166:	83 e1 01             	and    $0x1,%ecx
 84b0169:	85 c9                	test   %ecx,%ecx
 84b016b:	74 08                	je     84b0175 <_ZN11game_master17CRandomObjectTest7executeEv+0xf3>
 84b016d:	88 02                	mov    %al,(%edx)
 84b016f:	83 c2 01             	add    $0x1,%edx
 84b0172:	83 eb 01             	sub    $0x1,%ebx
 84b0175:	89 d1                	mov    %edx,%ecx
 84b0177:	83 e1 02             	and    $0x2,%ecx
 84b017a:	85 c9                	test   %ecx,%ecx
 84b017c:	74 09                	je     84b0187 <_ZN11game_master17CRandomObjectTest7executeEv+0x105>
 84b017e:	66 89 02             	mov    %ax,(%edx)
 84b0181:	83 c2 02             	add    $0x2,%edx
 84b0184:	83 eb 02             	sub    $0x2,%ebx
 84b0187:	89 d9                	mov    %ebx,%ecx
 84b0189:	c1 e9 02             	shr    $0x2,%ecx
 84b018c:	89 d7                	mov    %edx,%edi
 84b018e:	f3 ab                	rep stos %eax,%es:(%edi)
 84b0190:	89 fa                	mov    %edi,%edx
 84b0192:	89 d9                	mov    %ebx,%ecx
 84b0194:	83 e1 02             	and    $0x2,%ecx
 84b0197:	85 c9                	test   %ecx,%ecx
 84b0199:	74 06                	je     84b01a1 <_ZN11game_master17CRandomObjectTest7executeEv+0x11f>
 84b019b:	66 89 02             	mov    %ax,(%edx)
 84b019e:	83 c2 02             	add    $0x2,%edx
 84b01a1:	89 d9                	mov    %ebx,%ecx
 84b01a3:	83 e1 01             	and    $0x1,%ecx
 84b01a6:	85 c9                	test   %ecx,%ecx
 84b01a8:	74 05                	je     84b01af <_ZN11game_master17CRandomObjectTest7executeEv+0x12d>
 84b01aa:	88 02                	mov    %al,(%edx)
 84b01ac:	83 c2 01             	add    $0x1,%edx
 84b01af:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84b01b5:	ba 18 73 01 00       	mov    $0x17318,%edx
 84b01ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b01be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b01c5:	00 
 84b01c6:	89 04 24             	mov    %eax,(%esp)
 84b01c9:	e8 f2 da bc ff       	call   807dcc0 <memset@plt>
 84b01ce:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 84b01d2:	e9 94 00 00 00       	jmp    84b026b <_ZN11game_master17CRandomObjectTest7executeEv+0x1e9>
 84b01d7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84b01da:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b01de:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84b01e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b01e8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b01eb:	89 04 24             	mov    %eax,(%esp)
 84b01ee:	e8 11 f3 ff ff       	call   84af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84b01f3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b01f6:	8b 40 0c             	mov    0xc(%eax),%eax
 84b01f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b01fd:	c7 44 24 04 06 02 c8 	movl   $0x8c80206,0x4(%esp)
 84b0204:	08 
 84b0205:	8d 85 ad fe ff ff    	lea    -0x153(%ebp),%eax
 84b020b:	89 04 24             	mov    %eax,(%esp)
 84b020e:	e8 2d e2 bc ff       	call   807e440 <sprintf@plt>
 84b0213:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84b0216:	89 04 24             	mov    %eax,(%esp)
 84b0219:	e8 a2 a1 e4 ff       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 84b021e:	84 c0                	test   %al,%al
 84b0220:	74 04                	je     84b0226 <_ZN11game_master17CRandomObjectTest7executeEv+0x1a4>
 84b0222:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 84b0226:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84b022a:	8d 95 95 8b fe ff    	lea    -0x1746b(%ebp),%edx
 84b0230:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b0234:	8d 95 ad fe ff ff    	lea    -0x153(%ebp),%edx
 84b023a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b023e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0242:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b0245:	89 04 24             	mov    %eax,(%esp)
 84b0248:	e8 a5 e9 ff ff       	call   84aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>
 84b024d:	c7 44 24 08 18 73 01 	movl   $0x17318,0x8(%esp)
 84b0254:	00 
 84b0255:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b025c:	00 
 84b025d:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84b0263:	89 04 24             	mov    %eax,(%esp)
 84b0266:	e8 55 da bc ff       	call   807dcc0 <memset@plt>
 84b026b:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 84b026f:	0f 85 62 ff ff ff    	jne    84b01d7 <_ZN11game_master17CRandomObjectTest7executeEv+0x155>
 84b0275:	c7 44 24 04 1d 02 c8 	movl   $0x8c8021d,0x4(%esp)
 84b027c:	08 
 84b027d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84b0280:	89 04 24             	mov    %eax,(%esp)
 84b0283:	e8 3e e8 ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84b0288:	eb 1b                	jmp    84b02a5 <_ZN11game_master17CRandomObjectTest7executeEv+0x223>
 84b028a:	89 d3                	mov    %edx,%ebx
 84b028c:	89 c6                	mov    %eax,%esi
 84b028e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84b0291:	89 04 24             	mov    %eax,(%esp)
 84b0294:	e8 2d 68 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84b0299:	89 f0                	mov    %esi,%eax
 84b029b:	89 da                	mov    %ebx,%edx
 84b029d:	89 04 24             	mov    %eax,(%esp)
 84b02a0:	e8 ab 34 63 00       	call   8ae3750 <_Unwind_Resume>
 84b02a5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84b02a8:	89 04 24             	mov    %eax,(%esp)
 84b02ab:	e8 16 68 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84b02b0:	eb 01                	jmp    84b02b3 <_ZN11game_master17CRandomObjectTest7executeEv+0x231>
 84b02b2:	90                   	nop
 84b02b3:	81 c4 7c 74 01 00    	add    $0x1747c,%esp
 84b02b9:	5b                   	pop    %ebx
 84b02ba:	5e                   	pop    %esi
 84b02bb:	5f                   	pop    %edi
 84b02bc:	5d                   	pop    %ebp
 84b02bd:	c3                   	ret

```

```c
// game_master::CRandomObjectTest::execute @ 0x84b0082

/* game_master::CRandomObjectTest::execute() */

void __thiscall game_master::CRandomObjectTest::execute(CRandomObjectTest *this)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char acStack_1746f [95000];
  char local_157;
  char local_156 [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_58 [27];
  char local_3d [21];
  CUser *local_28;
  char *local_24;
  bool local_1d;
  
  bVar6 = 0;
  local_28 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_28 != (CUser *)0x0) {
    local_24 = (char *)checkCommandExecuteError(this);
    if (local_24 == (char *)0x0) {
      if (*(int *)(this + 0xc) == 0) {
        *(undefined4 *)(this + 0xc) = 10000;
      }
      sprintf(local_3d,&DAT_08c7fddb,*(undefined4 *)(this + 0xc));
      CBoosterTest::SendChatMsg(local_28,local_3d);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_58);
      if (*(int *)(this + 8) == 1) {
                    /* try { // try from 084b013c to 084b0287 has its CatchHandler @ 084b028a */
        CBoosterTest::SendChatMsg(local_28,&DAT_08c801e0);
        getVendingMachineItem((map *)this);
        pcVar3 = &local_157;
        uVar4 = 0xff;
        bVar5 = ((uint)pcVar3 & 1) != 0;
        if (bVar5) {
          local_157 = '\0';
          pcVar3 = local_156;
          uVar4 = 0xfe;
        }
        if (((uint)pcVar3 & 2) != 0) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3 = pcVar3 + 2;
          uVar4 = uVar4 - 2;
        }
        for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
        }
        if ((uVar4 & 2) != 0) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3 = pcVar3 + 2;
        }
        if (!bVar5) {
          *pcVar3 = '\0';
        }
        memset(acStack_1746f,0,95000);
        local_1d = true;
        while (local_1d != false) {
          CBoosterTest::makeFileContents(local_28,acStack_1746f,(map *)local_58);
          sprintf(&local_157,"etc_random_test_%d.txt",*(undefined4 *)(this + 0xc));
          cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                            (local_58);
          if (cVar1 != '\0') {
            local_1d = false;
          }
          CBoosterTest::printClient(local_28,local_1d,&local_157,acStack_1746f);
          memset(acStack_1746f,0,95000);
        }
        CBoosterTest::SendChatMsg(local_28,&DAT_08c8021d);
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_58);
    }
    else {
      CBoosterTest::SendChatMsg(local_28,local_24);
    }
  }
  return;
}

```

---

## getVendingMachineInfo

```asm
// === 084b0444 game_master::CRandomObjectTest::getVendingMachineInfo  [0x084b0444-0x84b054f] ===
 84b0444:	55                   	push   %ebp
 84b0445:	89 e5                	mov    %esp,%ebp
 84b0447:	83 ec 38             	sub    $0x38,%esp
 84b044a:	e8 4c bd c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b044f:	89 04 24             	mov    %eax,(%esp)
 84b0452:	e8 f5 b1 d7 ff       	call   822b64c <_ZNK12CDataManager22getVendingMachineTableEv>
 84b0457:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b045a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b045d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b0460:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0464:	89 04 24             	mov    %eax,(%esp)
 84b0467:	e8 ee 77 d8 ff       	call   8237c5a <_ZNKSt6vectorI18stVendingMachine_tSaIS0_EE5beginEv>
 84b046c:	83 ec 04             	sub    $0x4,%esp
 84b046f:	eb 22                	jmp    84b0493 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0x4f>
 84b0471:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b0474:	89 04 24             	mov    %eax,(%esp)
 84b0477:	e8 78 78 d8 ff       	call   8237cf4 <_ZNK9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEptEv>
 84b047c:	8b 00                	mov    (%eax),%eax
 84b047e:	83 f8 01             	cmp    $0x1,%eax
 84b0481:	0f 94 c0             	sete   %al
 84b0484:	84 c0                	test   %al,%al
 84b0486:	75 38                	jne    84b04c0 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0x7c>
 84b0488:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b048b:	89 04 24             	mov    %eax,(%esp)
 84b048e:	e8 4b 78 d8 ff       	call   8237cde <_ZN9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEppEv>
 84b0493:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b0496:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b0499:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b049d:	89 04 24             	mov    %eax,(%esp)
 84b04a0:	e8 e1 77 d8 ff       	call   8237c86 <_ZNKSt6vectorI18stVendingMachine_tSaIS0_EE3endEv>
 84b04a5:	83 ec 04             	sub    $0x4,%esp
 84b04a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b04ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b04af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b04b2:	89 04 24             	mov    %eax,(%esp)
 84b04b5:	e8 f8 77 d8 ff       	call   8237cb2 <_ZN9__gnu_cxxneIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b04ba:	84 c0                	test   %al,%al
 84b04bc:	75 b3                	jne    84b0471 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0x2d>
 84b04be:	eb 01                	jmp    84b04c1 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0x7d>
 84b04c0:	90                   	nop
 84b04c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b04c4:	89 04 24             	mov    %eax,(%esp)
 84b04c7:	e8 28 78 d8 ff       	call   8237cf4 <_ZNK9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEptEv>
 84b04cc:	8d 50 04             	lea    0x4(%eax),%edx
 84b04cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b04d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b04d6:	89 04 24             	mov    %eax,(%esp)
 84b04d9:	e8 2a 78 d8 ff       	call   8237d08 <_ZNKSt6vectorI22stVendingMachineInfo_tSaIS0_EE5beginEv>
 84b04de:	83 ec 04             	sub    $0x4,%esp
 84b04e1:	eb 2f                	jmp    84b0512 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0xce>
 84b04e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b04e6:	89 04 24             	mov    %eax,(%esp)
 84b04e9:	e8 b4 78 d8 ff       	call   8237da2 <_ZNK9__gnu_cxx17__normal_iteratorIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84b04ee:	8b 00                	mov    (%eax),%eax
 84b04f0:	83 f8 01             	cmp    $0x1,%eax
 84b04f3:	0f 94 c0             	sete   %al
 84b04f6:	84 c0                	test   %al,%al
 84b04f8:	74 0d                	je     84b0507 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0xc3>
 84b04fa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b04fd:	89 04 24             	mov    %eax,(%esp)
 84b0500:	e8 a7 78 d8 ff       	call   8237dac <_ZNK9__gnu_cxx17__normal_iteratorIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEdeEv>
 84b0505:	eb 46                	jmp    84b054d <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0x109>
 84b0507:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b050a:	89 04 24             	mov    %eax,(%esp)
 84b050d:	e8 7a 78 d8 ff       	call   8237d8c <_ZN9__gnu_cxx17__normal_iteratorIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 84b0512:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b0515:	89 04 24             	mov    %eax,(%esp)
 84b0518:	e8 d7 77 d8 ff       	call   8237cf4 <_ZNK9__gnu_cxx17__normal_iteratorIPK18stVendingMachine_tSt6vectorIS1_SaIS1_EEEptEv>
 84b051d:	8d 50 04             	lea    0x4(%eax),%edx
 84b0520:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b0523:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0527:	89 04 24             	mov    %eax,(%esp)
 84b052a:	e8 05 78 d8 ff       	call   8237d34 <_ZNKSt6vectorI22stVendingMachineInfo_tSaIS0_EE3endEv>
 84b052f:	83 ec 04             	sub    $0x4,%esp
 84b0532:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b0535:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0539:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b053c:	89 04 24             	mov    %eax,(%esp)
 84b053f:	e8 1c 78 d8 ff       	call   8237d60 <_ZN9__gnu_cxxneIPK22stVendingMachineInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b0544:	84 c0                	test   %al,%al
 84b0546:	75 9b                	jne    84b04e3 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv+0x9f>
 84b0548:	b8 00 00 00 00       	mov    $0x0,%eax
 84b054d:	c9                   	leave
 84b054e:	c3                   	ret
 84b054f:	90                   	nop

```

```c
// game_master::CRandomObjectTest::getVendingMachineInfo @ 0x84b0444

/* game_master::CRandomObjectTest::getVendingMachineInfo() */

undefined4 game_master::CRandomObjectTest::getVendingMachineInfo(void)

{
  bool bVar1;
  CDataManager *this;
  int *piVar2;
  undefined4 uVar3;
  __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
  local_20 [4];
  __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  undefined4 local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::getVendingMachineTable(this);
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::begin();
  while( true ) {
    std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if ((!bVar1) ||
       (piVar2 = (int *)__gnu_cxx::
                        __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
                        ::operator->(local_1c), *piVar2 == 1)) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
    ::operator++(local_1c);
  }
  __gnu_cxx::
  __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
  ::operator->(local_1c);
  std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::begin();
  while( true ) {
    __gnu_cxx::
    __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
    ::operator->(local_1c);
    std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
                    ::operator->(local_20);
    if (*piVar2 == 1) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
    ::operator++(local_20);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
          ::operator*(local_20);
  return uVar3;
}

```

---

## getVendingMachineItem

```asm
// === 084b02e6 game_master::CRandomObjectTest::getVendingMachineItem  [0x084b02e6-0x84b0443] ===
 84b02e6:	55                   	push   %ebp
 84b02e7:	89 e5                	mov    %esp,%ebp
 84b02e9:	81 ec 58 0a 00 00    	sub    $0xa58,%esp
 84b02ef:	8b 45 08             	mov    0x8(%ebp),%eax
 84b02f2:	89 04 24             	mov    %eax,(%esp)
 84b02f5:	e8 4a 01 00 00       	call   84b0444 <_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv>
 84b02fa:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b02fd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84b0301:	0f 84 39 01 00 00    	je     84b0440 <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x15a>
 84b0307:	8d 45 83             	lea    -0x7d(%ebp),%eax
 84b030a:	89 04 24             	mov    %eax,(%esp)
 84b030d:	e8 42 b5 c1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84b0312:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84b0319:	e8 32 d4 bc ff       	call   807d750 <time@plt>
 84b031e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84b0321:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84b0324:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0328:	8d 85 b8 f5 ff ff    	lea    -0xa48(%ebp),%eax
 84b032e:	89 04 24             	mov    %eax,(%esp)
 84b0331:	e8 f4 b6 c1 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 84b0336:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84b033d:	e9 e8 00 00 00       	jmp    84b042a <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x144>
 84b0342:	c7 45 85 ff ff ff ff 	movl   $0xffffffff,-0x7b(%ebp)
 84b0349:	8d 45 83             	lea    -0x7d(%ebp),%eax
 84b034c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b0350:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b0353:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b0357:	8d 85 b8 f5 ff ff    	lea    -0xa48(%ebp),%eax
 84b035d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0361:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0364:	89 04 24             	mov    %eax,(%esp)
 84b0367:	e8 e4 01 00 00       	call   84b0550 <_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item>
 84b036c:	8b 45 85             	mov    -0x7b(%ebp),%eax
 84b036f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84b0372:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84b0375:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84b0378:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b037c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b037f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0383:	89 04 24             	mov    %eax,(%esp)
 84b0386:	e8 63 cf c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84b038b:	83 ec 04             	sub    $0x4,%esp
 84b038e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84b0391:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b0394:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0398:	89 04 24             	mov    %eax,(%esp)
 84b039b:	e8 7a cf c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84b03a0:	83 ec 04             	sub    $0x4,%esp
 84b03a3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84b03a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b03aa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84b03ad:	89 04 24             	mov    %eax,(%esp)
 84b03b0:	e8 13 a0 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84b03b5:	84 c0                	test   %al,%al
 84b03b7:	74 16                	je     84b03cf <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xe9>
 84b03b9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84b03bc:	89 04 24             	mov    %eax,(%esp)
 84b03bf:	e8 7c cf c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84b03c4:	8b 50 04             	mov    0x4(%eax),%edx
 84b03c7:	83 c2 01             	add    $0x1,%edx
 84b03ca:	89 50 04             	mov    %edx,0x4(%eax)
 84b03cd:	eb 57                	jmp    84b0426 <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x140>
 84b03cf:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 84b03d6:	8b 45 85             	mov    -0x7b(%ebp),%eax
 84b03d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84b03dc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b03df:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84b03e2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b03e6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84b03e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b03ed:	89 04 24             	mov    %eax,(%esp)
 84b03f0:	e8 4c 89 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84b03f5:	83 ec 04             	sub    $0x4,%esp
 84b03f8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84b03fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b03ff:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84b0402:	89 04 24             	mov    %eax,(%esp)
 84b0405:	e8 16 69 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84b040a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84b040d:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84b0410:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b0414:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b0417:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b041b:	89 04 24             	mov    %eax,(%esp)
 84b041e:	e8 2d 69 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84b0423:	83 ec 04             	sub    $0x4,%esp
 84b0426:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84b042a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b042d:	8b 40 0c             	mov    0xc(%eax),%eax
 84b0430:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84b0433:	0f 9f c0             	setg   %al
 84b0436:	84 c0                	test   %al,%al
 84b0438:	0f 85 04 ff ff ff    	jne    84b0342 <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x5c>
 84b043e:	eb 01                	jmp    84b0441 <_ZN11game_master17CRandomObjectTest21getVendingMachineItemERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x15b>
 84b0440:	90                   	nop
 84b0441:	c9                   	leave
 84b0442:	c3                   	ret
 84b0443:	90                   	nop

```

```c
// game_master::CRandomObjectTest::getVendingMachineItem @ 0x84b02e6

/* game_master::CRandomObjectTest::getVendingMachineItem(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CRandomObjectTest::getVendingMachineItem(map *param_1)

{
  char cVar1;
  int iVar2;
  CMTRand local_a4c [2507];
  Inven_Item local_81 [2];
  int local_7f;
  _Rb_tree_iterator<std::pair<int_const,int>> local_44 [4];
  ulong local_40;
  int local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  int local_24 [2];
  undefined4 local_1c;
  int local_18;
  stVendingMachineInfo_t *local_14;
  int local_10;
  
  local_14 = (stVendingMachineInfo_t *)getVendingMachineInfo();
  if (local_14 != (stVendingMachineInfo_t *)0x0) {
    Inven_Item::Inven_Item(local_81);
    local_40 = time((time_t *)0x0);
    CMTRand::CMTRand(local_a4c,&local_40);
    for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
      local_7f = -1;
      processVendingMachineItemLottery((CRandomObjectTest *)param_1,local_a4c,local_14,local_81);
      local_3c = local_7f;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_44);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_44,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        local_1c = 1;
        local_18 = local_7f;
        std::make_pair<int,int>(local_24,&local_18);
        std::pair<int_const,int>::pair<int,int>(local_2c,(pair *)local_24);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_34);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_44);
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
  }
  return;
}

```

---

## parse

```asm
// === 084b0032 game_master::CRandomObjectTest::parse  [0x084b0032-0x84b0081] ===
 84b0032:	55                   	push   %ebp
 84b0033:	89 e5                	mov    %esp,%ebp
 84b0035:	56                   	push   %esi
 84b0036:	53                   	push   %ebx
 84b0037:	83 ec 10             	sub    $0x10,%esp
 84b003a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b003d:	89 04 24             	mov    %eax,(%esp)
 84b0040:	e8 85 40 00 00       	call   84b40ca <_ZN11game_master17CRandomObjectTest5clearEv>
 84b0045:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0048:	8d 70 0c             	lea    0xc(%eax),%esi
 84b004b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b004e:	8d 58 08             	lea    0x8(%eax),%ebx
 84b0051:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0054:	8b 40 04             	mov    0x4(%eax),%eax
 84b0057:	83 c0 0c             	add    $0xc,%eax
 84b005a:	89 04 24             	mov    %eax,(%esp)
 84b005d:	e8 8e 64 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b0062:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84b0066:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84b006a:	c7 44 24 04 97 fd c7 	movl   $0x8c7fd97,0x4(%esp)
 84b0071:	08 
 84b0072:	89 04 24             	mov    %eax,(%esp)
 84b0075:	e8 66 d9 bc ff       	call   807d9e0 <sscanf@plt>
 84b007a:	83 c4 10             	add    $0x10,%esp
 84b007d:	5b                   	pop    %ebx
 84b007e:	5e                   	pop    %esi
 84b007f:	5d                   	pop    %ebp
 84b0080:	c3                   	ret
 84b0081:	90                   	nop

```

```c
// game_master::CRandomObjectTest::parse @ 0x84b0032

/* game_master::CRandomObjectTest::parse() */

void __thiscall game_master::CRandomObjectTest::parse(CRandomObjectTest *this)

{
  char *__s;
  
  clear(this);
  __s = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  sscanf(__s,"%d%d",this + 8,this + 0xc);
  return;
}

```

---

## processVendingMachineItemLottery

```asm
// === 084b0550 game_master::CRandomObjectTest::processVendingMachineItemLottery  [0x084b0550-0x84b060f] ===
 84b0550:	55                   	push   %ebp
 84b0551:	89 e5                	mov    %esp,%ebp
 84b0553:	83 ec 28             	sub    $0x28,%esp
 84b0556:	8b 45 10             	mov    0x10(%ebp),%eax
 84b0559:	8b 40 0c             	mov    0xc(%eax),%eax
 84b055c:	83 e8 01             	sub    $0x1,%eax
 84b055f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84b0562:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b0565:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0569:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b056c:	89 04 24             	mov    %eax,(%esp)
 84b056f:	e8 4a b5 c1 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 84b0574:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b0577:	8b 45 10             	mov    0x10(%ebp),%eax
 84b057a:	8d 50 10             	lea    0x10(%eax),%edx
 84b057d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b0580:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0584:	89 04 24             	mov    %eax,(%esp)
 84b0587:	e8 82 79 d8 ff       	call   8237f0e <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE5beginEv>
 84b058c:	83 ec 04             	sub    $0x4,%esp
 84b058f:	eb 4e                	jmp    84b05df <_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item+0x8f>
 84b0591:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b0594:	89 04 24             	mov    %eax,(%esp)
 84b0597:	e8 0c 7a d8 ff       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 84b059c:	8b 40 04             	mov    0x4(%eax),%eax
 84b059f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84b05a2:	0f 97 c0             	seta   %al
 84b05a5:	84 c0                	test   %al,%al
 84b05a7:	74 2b                	je     84b05d4 <_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item+0x84>
 84b05a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b05ac:	89 04 24             	mov    %eax,(%esp)
 84b05af:	e8 f4 79 d8 ff       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 84b05b4:	8b 10                	mov    (%eax),%edx
 84b05b6:	8b 45 14             	mov    0x14(%ebp),%eax
 84b05b9:	89 50 02             	mov    %edx,0x2(%eax)
 84b05bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b05bf:	89 04 24             	mov    %eax,(%esp)
 84b05c2:	e8 e1 79 d8 ff       	call   8237fa8 <_ZNK9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEptEv>
 84b05c7:	8b 40 08             	mov    0x8(%eax),%eax
 84b05ca:	89 c2                	mov    %eax,%edx
 84b05cc:	8b 45 14             	mov    0x14(%ebp),%eax
 84b05cf:	89 50 07             	mov    %edx,0x7(%eax)
 84b05d2:	eb 39                	jmp    84b060d <_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item+0xbd>
 84b05d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b05d7:	89 04 24             	mov    %eax,(%esp)
 84b05da:	e8 b3 79 d8 ff       	call   8237f92 <_ZN9__gnu_cxx17__normal_iteratorIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEppEv>
 84b05df:	8b 45 10             	mov    0x10(%ebp),%eax
 84b05e2:	8d 50 10             	lea    0x10(%eax),%edx
 84b05e5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b05e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b05ec:	89 04 24             	mov    %eax,(%esp)
 84b05ef:	e8 46 79 d8 ff       	call   8237f3a <_ZNKSt6vectorI24stVendingMachineOutput_tSaIS0_EE3endEv>
 84b05f4:	83 ec 04             	sub    $0x4,%esp
 84b05f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84b05fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b05fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b0601:	89 04 24             	mov    %eax,(%esp)
 84b0604:	e8 5d 79 d8 ff       	call   8237f66 <_ZN9__gnu_cxxneIPK24stVendingMachineOutput_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84b0609:	84 c0                	test   %al,%al
 84b060b:	75 84                	jne    84b0591 <_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item+0x41>
 84b060d:	c9                   	leave
 84b060e:	c3                   	ret
 84b060f:	90                   	nop

```

```c
// game_master::CRandomObjectTest::processVendingMachineItemLottery @ 0x84b0550

/* game_master::CRandomObjectTest::processVendingMachineItemLottery(CMTRand&, stVendingMachineInfo_t
   const*, Inven_Item&) */

void __thiscall
game_master::CRandomObjectTest::processVendingMachineItemLottery
          (CRandomObjectTest *this,CMTRand *param_1,stVendingMachineInfo_t *param_2,
          Inven_Item *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_1c [4];
  ulong local_18;
  __normal_iterator local_14 [4];
  uint local_10;
  
  local_18 = *(int *)(param_2 + 0xc) - 1;
  local_10 = CMTRand::randInt(param_1,&local_18);
  std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
  while( true ) {
    std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
            ::operator->(local_1c);
    if (local_10 < *(uint *)(iVar2 + 4)) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
    ::operator++(local_1c);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
           ::operator->(local_1c);
  *(undefined4 *)(param_3 + 2) = *puVar3;
  iVar2 = __gnu_cxx::
          __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
          ::operator->(local_1c);
  *(undefined4 *)(param_3 + 7) = *(undefined4 *)(iVar2 + 8);
  return;
}

```

