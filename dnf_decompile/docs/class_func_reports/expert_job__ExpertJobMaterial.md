# expert_job__ExpertJobMaterial

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CheckType

```asm
// === 0849bfd0 expert_job::ExpertJobMaterial::CheckType  [0x0849bfd0-0x849c06d] ===
 849bfd0:	55                   	push   %ebp
 849bfd1:	89 e5                	mov    %esp,%ebp
 849bfd3:	83 ec 28             	sub    $0x28,%esp
 849bfd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 849bfd9:	88 45 f4             	mov    %al,-0xc(%ebp)
 849bfdc:	8b 45 08             	mov    0x8(%ebp),%eax
 849bfdf:	89 04 24             	mov    %eax,(%esp)
 849bfe2:	e8 9f 32 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849bfe7:	84 c0                	test   %al,%al
 849bfe9:	74 07                	je     849bff2 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x22>
 849bfeb:	b8 11 00 00 00       	mov    $0x11,%eax
 849bff0:	eb 79                	jmp    849c06b <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x9b>
 849bff2:	8b 45 08             	mov    0x8(%ebp),%eax
 849bff5:	8b 40 04             	mov    0x4(%eax),%eax
 849bff8:	89 04 24             	mov    %eax,(%esp)
 849bffb:	e8 fa 52 c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849c000:	3a 45 f4             	cmp    -0xc(%ebp),%al
 849c003:	0f 95 c0             	setne  %al
 849c006:	84 c0                	test   %al,%al
 849c008:	74 07                	je     849c011 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x41>
 849c00a:	b8 17 00 00 00       	mov    $0x17,%eax
 849c00f:	eb 5a                	jmp    849c06b <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x9b>
 849c011:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 849c015:	74 29                	je     849c040 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x70>
 849c017:	8b 45 08             	mov    0x8(%ebp),%eax
 849c01a:	8b 40 04             	mov    0x4(%eax),%eax
 849c01d:	8b 00                	mov    (%eax),%eax
 849c01f:	83 c0 0c             	add    $0xc,%eax
 849c022:	8b 10                	mov    (%eax),%edx
 849c024:	8b 45 08             	mov    0x8(%ebp),%eax
 849c027:	8b 40 04             	mov    0x4(%eax),%eax
 849c02a:	89 04 24             	mov    %eax,(%esp)
 849c02d:	ff d2                	call   *%edx
 849c02f:	3b 45 10             	cmp    0x10(%ebp),%eax
 849c032:	0f 95 c0             	setne  %al
 849c035:	84 c0                	test   %al,%al
 849c037:	74 2d                	je     849c066 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x96>
 849c039:	b8 17 00 00 00       	mov    $0x17,%eax
 849c03e:	eb 2b                	jmp    849c06b <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x9b>
 849c040:	8b 45 08             	mov    0x8(%ebp),%eax
 849c043:	8b 40 04             	mov    0x4(%eax),%eax
 849c046:	8b 00                	mov    (%eax),%eax
 849c048:	83 c0 1c             	add    $0x1c,%eax
 849c04b:	8b 10                	mov    (%eax),%edx
 849c04d:	8b 45 08             	mov    0x8(%ebp),%eax
 849c050:	8b 40 04             	mov    0x4(%eax),%eax
 849c053:	89 04 24             	mov    %eax,(%esp)
 849c056:	ff d2                	call   *%edx
 849c058:	83 f0 01             	xor    $0x1,%eax
 849c05b:	84 c0                	test   %al,%al
 849c05d:	74 07                	je     849c066 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x96>
 849c05f:	b8 17 00 00 00       	mov    $0x17,%eax
 849c064:	eb 05                	jmp    849c06b <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi+0x9b>
 849c066:	b8 00 00 00 00       	mov    $0x0,%eax
 849c06b:	c9                   	leave
 849c06c:	c3                   	ret
 849c06d:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::CheckType @ 0x849bfd0

/* expert_job::ExpertJobMaterial::CheckType(bool, int) */

undefined4 __thiscall
expert_job::ExpertJobMaterial::CheckType(ExpertJobMaterial *this,bool param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    cVar1 = CItem::is_stackable(*(CItem **)(this + 4));
    if ((bool)cVar1 == param_1) {
      if (param_1) {
        iVar3 = (**(code **)(**(int **)(this + 4) + 0xc))(*(undefined4 *)(this + 4));
        if (iVar3 != param_2) {
          return 0x17;
        }
      }
      else {
        cVar1 = (**(code **)(**(int **)(this + 4) + 0x1c))(*(undefined4 *)(this + 4));
        if (cVar1 != '\x01') {
          return 0x17;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0x17;
    }
  }
  else {
    uVar2 = 0x11;
  }
  return uVar2;
}

```

---

## DelMaterialOfRecipe

```asm
// === 0849c204 expert_job::ExpertJobMaterial::DelMaterialOfRecipe  [0x0849c204-0x849c535] ===
 849c204:	55                   	push   %ebp
 849c205:	89 e5                	mov    %esp,%ebp
 849c207:	56                   	push   %esi
 849c208:	53                   	push   %ebx
 849c209:	81 ec 90 00 00 00    	sub    $0x90,%esp
 849c20f:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 849c216:	8d 45 b0             	lea    -0x50(%ebp),%eax
 849c219:	89 04 24             	mov    %eax,(%esp)
 849c21c:	e8 8b 1f bf ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 849c221:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 849c224:	89 04 24             	mov    %eax,(%esp)
 849c227:	e8 80 1f bf ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 849c22c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849c22f:	89 04 24             	mov    %eax,(%esp)
 849c232:	e8 fb 2f ce ff       	call   817f232 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1Ev>
 849c237:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c23a:	89 04 24             	mov    %eax,(%esp)
 849c23d:	e8 4c e0 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849c242:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 849c249:	00 
 849c24a:	c7 44 24 14 08 00 00 	movl   $0x8,0x14(%esp)
 849c251:	00 
 849c252:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 849c259:	00 
 849c25a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 849c25d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849c261:	8d 55 b0             	lea    -0x50(%ebp),%edx
 849c264:	89 54 24 08          	mov    %edx,0x8(%esp)
 849c268:	8b 55 10             	mov    0x10(%ebp),%edx
 849c26b:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c26f:	89 04 24             	mov    %eax,(%esp)
 849c272:	e8 3d 9b 06 00       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 849c277:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849c27a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849c27e:	75 69                	jne    849c2e9 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0xe5>
 849c280:	8b 45 10             	mov    0x10(%ebp),%eax
 849c283:	89 04 24             	mov    %eax,(%esp)
 849c286:	e8 89 15 c4 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 849c28b:	89 c6                	mov    %eax,%esi
 849c28d:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c290:	89 04 24             	mov    %eax,(%esp)
 849c293:	e8 b6 f9 c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849c298:	89 c3                	mov    %eax,%ebx
 849c29a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849c2a1:	00 
 849c2a2:	c7 44 24 08 88 02 00 	movl   $0x288,0x8(%esp)
 849c2a9:	00 
 849c2aa:	c7 44 24 04 e0 c9 c7 	movl   $0x8c7c9e0,0x4(%esp)
 849c2b1:	08 
 849c2b2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849c2b5:	89 04 24             	mov    %eax,(%esp)
 849c2b8:	e8 5b 34 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849c2bd:	89 74 24 10          	mov    %esi,0x10(%esp)
 849c2c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849c2c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849c2c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849c2cc:	c7 44 24 04 58 ba c7 	movl   $0x8c7ba58,0x4(%esp)
 849c2d3:	08 
 849c2d4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849c2d7:	89 04 24             	mov    %eax,(%esp)
 849c2da:	e8 a9 34 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849c2df:	bb 00 00 00 00       	mov    $0x0,%ebx
 849c2e4:	e9 0d 02 00 00       	jmp    849c4f6 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x2f2>
 849c2e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849c2ec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 849c2ef:	01 c2                	add    %eax,%edx
 849c2f1:	8b 45 18             	mov    0x18(%ebp),%eax
 849c2f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c2f8:	89 04 24             	mov    %eax,(%esp)
 849c2fb:	e8 20 f6 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849c300:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c303:	89 04 24             	mov    %eax,(%esp)
 849c306:	e8 83 df c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849c30b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 849c312:	00 
 849c313:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 849c31a:	00 
 849c31b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 849c31e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849c322:	8b 55 14             	mov    0x14(%ebp),%edx
 849c325:	89 54 24 08          	mov    %edx,0x8(%esp)
 849c329:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849c330:	00 
 849c331:	89 04 24             	mov    %eax,(%esp)
 849c334:	e8 d3 7c 06 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 849c339:	88 45 f7             	mov    %al,-0x9(%ebp)
 849c33c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 849c340:	83 f0 01             	xor    $0x1,%eax
 849c343:	84 c0                	test   %al,%al
 849c345:	74 58                	je     849c39f <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x19b>
 849c347:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c34a:	89 04 24             	mov    %eax,(%esp)
 849c34d:	e8 fc f8 c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849c352:	89 c3                	mov    %eax,%ebx
 849c354:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849c35b:	00 
 849c35c:	c7 44 24 08 92 02 00 	movl   $0x292,0x8(%esp)
 849c363:	00 
 849c364:	c7 44 24 04 e0 c9 c7 	movl   $0x8c7c9e0,0x4(%esp)
 849c36b:	08 
 849c36c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 849c36f:	89 04 24             	mov    %eax,(%esp)
 849c372:	e8 a1 33 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849c377:	8b 45 14             	mov    0x14(%ebp),%eax
 849c37a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849c37e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849c382:	c7 44 24 04 cc ba c7 	movl   $0x8c7bacc,0x4(%esp)
 849c389:	08 
 849c38a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 849c38d:	89 04 24             	mov    %eax,(%esp)
 849c390:	e8 f3 33 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849c395:	bb 00 00 00 00       	mov    $0x0,%ebx
 849c39a:	e9 57 01 00 00       	jmp    849c4f6 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x2f2>
 849c39f:	8b 45 18             	mov    0x18(%ebp),%eax
 849c3a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849c3a9:	00 
 849c3aa:	89 04 24             	mov    %eax,(%esp)
 849c3ad:	e8 6e f5 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849c3b2:	8b 45 18             	mov    0x18(%ebp),%eax
 849c3b5:	8b 55 14             	mov    0x14(%ebp),%edx
 849c3b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c3bc:	89 04 24             	mov    %eax,(%esp)
 849c3bf:	e8 e0 da c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849c3c4:	8b 45 18             	mov    0x18(%ebp),%eax
 849c3c7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 849c3ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c3ce:	89 04 24             	mov    %eax,(%esp)
 849c3d1:	e8 66 f5 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849c3d6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849c3da:	0f 8e fa 00 00 00    	jle    849c4da <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x2d6>
 849c3e0:	8d 45 94             	lea    -0x6c(%ebp),%eax
 849c3e3:	8d 55 b0             	lea    -0x50(%ebp),%edx
 849c3e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c3ea:	89 04 24             	mov    %eax,(%esp)
 849c3ed:	e8 56 1e bf ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 849c3f2:	83 ec 04             	sub    $0x4,%esp
 849c3f5:	8b 45 94             	mov    -0x6c(%ebp),%eax
 849c3f8:	89 45 a0             	mov    %eax,-0x60(%ebp)
 849c3fb:	e9 ab 00 00 00       	jmp    849c4ab <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x2a7>
 849c400:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849c403:	89 04 24             	mov    %eax,(%esp)
 849c406:	e8 c1 23 bf ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849c40b:	8b 10                	mov    (%eax),%edx
 849c40d:	8b 45 18             	mov    0x18(%ebp),%eax
 849c410:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c414:	89 04 24             	mov    %eax,(%esp)
 849c417:	e8 04 f5 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849c41c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849c41f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849c426:	00 
 849c427:	8d 55 a0             	lea    -0x60(%ebp),%edx
 849c42a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c42e:	89 04 24             	mov    %eax,(%esp)
 849c431:	e8 d0 54 ea ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 849c436:	83 ec 04             	sub    $0x4,%esp
 849c439:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849c43c:	89 04 24             	mov    %eax,(%esp)
 849c43f:	e8 88 23 bf ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849c444:	8b 10                	mov    (%eax),%edx
 849c446:	8b 45 18             	mov    0x18(%ebp),%eax
 849c449:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c44d:	89 04 24             	mov    %eax,(%esp)
 849c450:	e8 4f da c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849c455:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849c458:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849c45f:	00 
 849c460:	8d 55 a0             	lea    -0x60(%ebp),%edx
 849c463:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c467:	89 04 24             	mov    %eax,(%esp)
 849c46a:	e8 97 54 ea ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 849c46f:	83 ec 04             	sub    $0x4,%esp
 849c472:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849c475:	89 04 24             	mov    %eax,(%esp)
 849c478:	e8 4f 23 bf ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849c47d:	8b 10                	mov    (%eax),%edx
 849c47f:	8b 45 18             	mov    0x18(%ebp),%eax
 849c482:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c486:	89 04 24             	mov    %eax,(%esp)
 849c489:	e8 ae f4 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849c48e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c491:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849c498:	00 
 849c499:	8d 55 a0             	lea    -0x60(%ebp),%edx
 849c49c:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c4a0:	89 04 24             	mov    %eax,(%esp)
 849c4a3:	e8 5e 54 ea ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 849c4a8:	83 ec 04             	sub    $0x4,%esp
 849c4ab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849c4ae:	8d 55 b0             	lea    -0x50(%ebp),%edx
 849c4b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c4b5:	89 04 24             	mov    %eax,(%esp)
 849c4b8:	e8 af 1d bf ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 849c4bd:	83 ec 04             	sub    $0x4,%esp
 849c4c0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849c4c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 849c4c7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849c4ca:	89 04 24             	mov    %eax,(%esp)
 849c4cd:	e8 90 df c4 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 849c4d2:	84 c0                	test   %al,%al
 849c4d4:	0f 85 26 ff ff ff    	jne    849c400 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x1fc>
 849c4da:	bb 01 00 00 00       	mov    $0x1,%ebx
 849c4df:	eb 15                	jmp    849c4f6 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x2f2>
 849c4e1:	89 d3                	mov    %edx,%ebx
 849c4e3:	89 c6                	mov    %eax,%esi
 849c4e5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 849c4e8:	89 04 24             	mov    %eax,(%esp)
 849c4eb:	e8 ea 78 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849c4f0:	89 f0                	mov    %esi,%eax
 849c4f2:	89 da                	mov    %ebx,%edx
 849c4f4:	eb 0d                	jmp    849c503 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x2ff>
 849c4f6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 849c4f9:	89 04 24             	mov    %eax,(%esp)
 849c4fc:	e8 d9 78 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849c501:	eb 1b                	jmp    849c51e <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb+0x31a>
 849c503:	89 d3                	mov    %edx,%ebx
 849c505:	89 c6                	mov    %eax,%esi
 849c507:	8d 45 b0             	lea    -0x50(%ebp),%eax
 849c50a:	89 04 24             	mov    %eax,(%esp)
 849c50d:	e8 c8 78 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849c512:	89 f0                	mov    %esi,%eax
 849c514:	89 da                	mov    %ebx,%edx
 849c516:	89 04 24             	mov    %eax,(%esp)
 849c519:	e8 32 72 64 00       	call   8ae3750 <_Unwind_Resume>
 849c51e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 849c521:	89 04 24             	mov    %eax,(%esp)
 849c524:	e8 b1 78 be ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 849c529:	89 d8                	mov    %ebx,%eax
 849c52b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 849c52e:	83 c4 00             	add    $0x0,%esp
 849c531:	5b                   	pop    %ebx
 849c532:	5e                   	pop    %esi
 849c533:	5d                   	pop    %ebp
 849c534:	c3                   	ret
 849c535:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::DelMaterialOfRecipe @ 0x849c204

/* expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&, int, PacketGuard*, bool&) */

undefined4 __thiscall
expert_job::ExpertJobMaterial::DelMaterialOfRecipe
          (ExpertJobMaterial *this,CUser *param_1,vector *param_2,int param_3,PacketGuard *param_4,
          bool *param_5)

{
  bool bVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_64 [4];
  vector<int,std::allocator<int>> local_60 [12];
  vector<int,std::allocator<int>> local_54 [12];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  __normal_iterator local_28 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  int local_18;
  int local_14;
  char local_d;
  
  local_18 = 1;
  std::vector<int,std::allocator<int>>::vector(local_54);
                    /* try { // try from 0849c227 to 0849c22b has its CatchHandler @ 0849c503 */
  std::vector<int,std::allocator<int>>::vector(local_60);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            (local_64);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0849c272 to 0849c4d1 has its CatchHandler @ 0849c4e1 */
  local_14 = CInventory::delete_event_items(pCVar2,param_2,local_54,param_5,0xc,8,0);
  if (local_14 == 0) {
    uVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_48,
                       "bool expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, const IntPairVector&, int, PacketGuard*, bool&)"
                       ,0x288,5);
    cMyTrace::operator()
              (local_48,
               "ExpertJobMaterial::DelMaterialOfRecipe, getCurCharacInvenR()->delete_event_items , size does not match! %d %d!=%d"
               ,uVar4,local_14,uVar3);
    uVar3 = 0;
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,local_14 + local_18);
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_d = CInventory::delete_item(pCVar2,1,param_3,local_18,8,1);
    if (local_d == '\x01') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,param_3);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,local_18);
      if (0 < local_14) {
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar1 = __gnu_cxx::operator!=(local_64,local_28);
          if (!bVar1) break;
          piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_64);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_4,*piVar5);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_24,(int)local_64);
          piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_64);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)param_4,*piVar5);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_20,(int)local_64);
          piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_64);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_4,*piVar5);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_1c,(int)local_64);
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_38,
                         "bool expert_job::ExpertJobMaterial::DelMaterialOfRecipe(CUser*, const IntPairVector&, int, PacketGuard*, bool&)"
                         ,0x292,5);
      cMyTrace::operator()
                (local_38,"CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",
                 uVar3,param_3);
      uVar3 = 0;
    }
  }
                    /* try { // try from 0849c4fc to 0849c500 has its CatchHandler @ 0849c503 */
  std::vector<int,std::allocator<int>>::~vector(local_60);
  std::vector<int,std::allocator<int>>::~vector(local_54);
  return uVar3;
}

```

---

## FindMonsterCard

```asm
// === 0849c612 expert_job::ExpertJobMaterial::FindMonsterCard  [0x0849c612-0x849c6c9] ===
 849c612:	55                   	push   %ebp
 849c613:	89 e5                	mov    %esp,%ebp
 849c615:	53                   	push   %ebx
 849c616:	83 ec 24             	sub    $0x24,%esp
 849c619:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849c61c:	8b 55 0c             	mov    0xc(%ebp),%edx
 849c61f:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c623:	89 04 24             	mov    %eax,(%esp)
 849c626:	e8 f5 4b c7 ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 849c62b:	83 ec 04             	sub    $0x4,%esp
 849c62e:	eb 60                	jmp    849c690 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE+0x7e>
 849c630:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849c633:	89 04 24             	mov    %eax,(%esp)
 849c636:	e8 7f 95 d9 ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 849c63b:	8b 50 04             	mov    0x4(%eax),%edx
 849c63e:	8b 00                	mov    (%eax),%eax
 849c640:	89 c3                	mov    %eax,%ebx
 849c642:	e8 54 fb c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849c647:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849c64b:	89 04 24             	mov    %eax,(%esp)
 849c64e:	e8 df 33 ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849c653:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c656:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849c65a:	74 29                	je     849c685 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE+0x73>
 849c65c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c65f:	89 04 24             	mov    %eax,(%esp)
 849c662:	e8 93 4c c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849c667:	84 c0                	test   %al,%al
 849c669:	74 1a                	je     849c685 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE+0x73>
 849c66b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c66e:	89 04 24             	mov    %eax,(%esp)
 849c671:	e8 5c 03 d9 ff       	call   822c9d2 <_ZNK14CStackableItem12get_sub_typeEv>
 849c676:	83 f8 01             	cmp    $0x1,%eax
 849c679:	0f 94 c0             	sete   %al
 849c67c:	84 c0                	test   %al,%al
 849c67e:	74 05                	je     849c685 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE+0x73>
 849c680:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c683:	eb 3f                	jmp    849c6c4 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE+0xb2>
 849c685:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849c688:	89 04 24             	mov    %eax,(%esp)
 849c68b:	e8 40 16 da ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 849c690:	8d 45 f0             	lea    -0x10(%ebp),%eax
 849c693:	8b 55 0c             	mov    0xc(%ebp),%edx
 849c696:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c69a:	89 04 24             	mov    %eax,(%esp)
 849c69d:	e8 aa 4b c7 ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 849c6a2:	83 ec 04             	sub    $0x4,%esp
 849c6a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 849c6a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 849c6ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849c6af:	89 04 24             	mov    %eax,(%esp)
 849c6b2:	e8 2e 72 cf ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 849c6b7:	84 c0                	test   %al,%al
 849c6b9:	0f 85 71 ff ff ff    	jne    849c630 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE+0x1e>
 849c6bf:	b8 00 00 00 00       	mov    $0x0,%eax
 849c6c4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 849c6c7:	c9                   	leave
 849c6c8:	c3                   	ret
 849c6c9:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::FindMonsterCard @ 0x849c612

/* expert_job::ExpertJobMaterial::FindMonsterCard(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&) */

CItem * expert_job::ExpertJobMaterial::FindMonsterCard(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  CStackableItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar2) {
      return (CItem *)0x0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_18);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CStackableItem *)CDataManager::find_item(this,iVar4);
    if (((local_10 != (CStackableItem *)0x0) &&
        (cVar1 = CItem::is_stackable((CItem *)local_10), cVar1 != '\0')) &&
       (iVar4 = CStackableItem::get_sub_type(local_10), iVar4 == 1)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return (CItem *)local_10;
}

```

---

## GetEnchantItem

```asm
// === 0849c6ca expert_job::ExpertJobMaterial::GetEnchantItem  [0x0849c6ca-0x849c71d] ===
 849c6ca:	55                   	push   %ebp
 849c6cb:	89 e5                	mov    %esp,%ebp
 849c6cd:	83 ec 18             	sub    $0x18,%esp
 849c6d0:	8b 45 08             	mov    0x8(%ebp),%eax
 849c6d3:	89 04 24             	mov    %eax,(%esp)
 849c6d6:	e8 ab 2b 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849c6db:	84 c0                	test   %al,%al
 849c6dd:	74 07                	je     849c6e6 <_ZN10expert_job17ExpertJobMaterial14GetEnchantItemEv+0x1c>
 849c6df:	b8 00 00 00 00       	mov    $0x0,%eax
 849c6e4:	eb 35                	jmp    849c71b <_ZN10expert_job17ExpertJobMaterial14GetEnchantItemEv+0x51>
 849c6e6:	8b 45 08             	mov    0x8(%ebp),%eax
 849c6e9:	89 04 24             	mov    %eax,(%esp)
 849c6ec:	e8 23 fa ff ff       	call   849c114 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv>
 849c6f1:	85 c0                	test   %eax,%eax
 849c6f3:	0f 95 c0             	setne  %al
 849c6f6:	84 c0                	test   %al,%al
 849c6f8:	74 07                	je     849c701 <_ZN10expert_job17ExpertJobMaterial14GetEnchantItemEv+0x37>
 849c6fa:	b8 00 00 00 00       	mov    $0x0,%eax
 849c6ff:	eb 1a                	jmp    849c71b <_ZN10expert_job17ExpertJobMaterial14GetEnchantItemEv+0x51>
 849c701:	8b 45 08             	mov    0x8(%ebp),%eax
 849c704:	8b 40 04             	mov    0x4(%eax),%eax
 849c707:	05 74 01 00 00       	add    $0x174,%eax
 849c70c:	89 44 24 04          	mov    %eax,0x4(%esp)
 849c710:	8b 45 08             	mov    0x8(%ebp),%eax
 849c713:	89 04 24             	mov    %eax,(%esp)
 849c716:	e8 f7 fe ff ff       	call   849c612 <_ZN10expert_job17ExpertJobMaterial15FindMonsterCardERKSt6vectorISt4pairIiiESaIS3_EE>
 849c71b:	c9                   	leave
 849c71c:	c3                   	ret
 849c71d:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::GetEnchantItem @ 0x849c6ca

/* expert_job::ExpertJobMaterial::GetEnchantItem() */

undefined4 __thiscall expert_job::ExpertJobMaterial::GetEnchantItem(ExpertJobMaterial *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    iVar3 = IsRecipe(this);
    if (iVar3 == 0) {
      uVar2 = FindMonsterCard((vector *)this);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## IsExistMaterialOfRecipe

```asm
// === 0849c166 expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe  [0x0849c166-0x849c203] ===
 849c166:	55                   	push   %ebp
 849c167:	89 e5                	mov    %esp,%ebp
 849c169:	53                   	push   %ebx
 849c16a:	83 ec 24             	sub    $0x24,%esp
 849c16d:	8b 45 08             	mov    0x8(%ebp),%eax
 849c170:	89 04 24             	mov    %eax,(%esp)
 849c173:	e8 0e 31 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849c178:	84 c0                	test   %al,%al
 849c17a:	74 07                	je     849c183 <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x1d>
 849c17c:	b8 11 00 00 00       	mov    $0x11,%eax
 849c181:	eb 7a                	jmp    849c1fd <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x97>
 849c183:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849c18a:	8b 45 08             	mov    0x8(%ebp),%eax
 849c18d:	89 04 24             	mov    %eax,(%esp)
 849c190:	e8 7f ff ff ff       	call   849c114 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv>
 849c195:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c198:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849c19c:	0f 95 c0             	setne  %al
 849c19f:	84 c0                	test   %al,%al
 849c1a1:	74 05                	je     849c1a8 <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x42>
 849c1a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c1a6:	eb 55                	jmp    849c1fd <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x97>
 849c1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 849c1ab:	8b 00                	mov    (%eax),%eax
 849c1ad:	89 04 24             	mov    %eax,(%esp)
 849c1b0:	e8 7d 42 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849c1b5:	85 c0                	test   %eax,%eax
 849c1b7:	0f 94 c0             	sete   %al
 849c1ba:	84 c0                	test   %al,%al
 849c1bc:	74 07                	je     849c1c5 <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x5f>
 849c1be:	b8 03 00 00 00       	mov    $0x3,%eax
 849c1c3:	eb 38                	jmp    849c1fd <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x97>
 849c1c5:	8b 45 08             	mov    0x8(%ebp),%eax
 849c1c8:	8b 40 04             	mov    0x4(%eax),%eax
 849c1cb:	8d 98 74 01 00 00    	lea    0x174(%eax),%ebx
 849c1d1:	8b 45 08             	mov    0x8(%ebp),%eax
 849c1d4:	8b 00                	mov    (%eax),%eax
 849c1d6:	89 04 24             	mov    %eax,(%esp)
 849c1d9:	e8 a0 e0 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849c1de:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849c1e2:	89 04 24             	mov    %eax,(%esp)
 849c1e5:	e8 e2 b8 06 00       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 849c1ea:	83 f0 01             	xor    $0x1,%eax
 849c1ed:	84 c0                	test   %al,%al
 849c1ef:	74 07                	je     849c1f8 <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x92>
 849c1f1:	b8 15 00 00 00       	mov    $0x15,%eax
 849c1f6:	eb 05                	jmp    849c1fd <_ZN10expert_job17ExpertJobMaterial23IsExistMaterialOfRecipeEv+0x97>
 849c1f8:	b8 00 00 00 00       	mov    $0x0,%eax
 849c1fd:	83 c4 24             	add    $0x24,%esp
 849c200:	5b                   	pop    %ebx
 849c201:	5d                   	pop    %ebp
 849c202:	c3                   	ret
 849c203:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe @ 0x849c166

/* expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe() */

int __thiscall expert_job::ExpertJobMaterial::IsExistMaterialOfRecipe(ExpertJobMaterial *this)

{
  char cVar1;
  int iVar2;
  CInventory *this_00;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    iVar2 = IsRecipe(this);
    if (iVar2 == 0) {
      iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
      if (iVar2 == 0) {
        iVar2 = 3;
      }
      else {
        iVar2 = *(int *)(this + 4);
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
        cVar1 = CInventory::CheckNeedItemList(this_00,(vector *)(iVar2 + 0x174));
        if (cVar1 == '\x01') {
          iVar2 = 0;
        }
        else {
          iVar2 = 0x15;
        }
      }
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}

```

---

## IsRecipe

```asm
// === 0849c114 expert_job::ExpertJobMaterial::IsRecipe  [0x0849c114-0x849c165] ===
 849c114:	55                   	push   %ebp
 849c115:	89 e5                	mov    %esp,%ebp
 849c117:	83 ec 18             	sub    $0x18,%esp
 849c11a:	8b 45 08             	mov    0x8(%ebp),%eax
 849c11d:	8b 40 04             	mov    0x4(%eax),%eax
 849c120:	89 04 24             	mov    %eax,(%esp)
 849c123:	e8 d2 51 c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849c128:	83 f0 01             	xor    $0x1,%eax
 849c12b:	84 c0                	test   %al,%al
 849c12d:	74 07                	je     849c136 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv+0x22>
 849c12f:	b8 17 00 00 00       	mov    $0x17,%eax
 849c134:	eb 2e                	jmp    849c164 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv+0x50>
 849c136:	8b 45 08             	mov    0x8(%ebp),%eax
 849c139:	8b 40 04             	mov    0x4(%eax),%eax
 849c13c:	8b 00                	mov    (%eax),%eax
 849c13e:	83 c0 0c             	add    $0xc,%eax
 849c141:	8b 10                	mov    (%eax),%edx
 849c143:	8b 45 08             	mov    0x8(%ebp),%eax
 849c146:	8b 40 04             	mov    0x4(%eax),%eax
 849c149:	89 04 24             	mov    %eax,(%esp)
 849c14c:	ff d2                	call   *%edx
 849c14e:	83 f8 03             	cmp    $0x3,%eax
 849c151:	0f 95 c0             	setne  %al
 849c154:	84 c0                	test   %al,%al
 849c156:	74 07                	je     849c15f <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv+0x4b>
 849c158:	b8 17 00 00 00       	mov    $0x17,%eax
 849c15d:	eb 05                	jmp    849c164 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv+0x50>
 849c15f:	b8 00 00 00 00       	mov    $0x0,%eax
 849c164:	c9                   	leave
 849c165:	c3                   	ret

```

```c
// expert_job::ExpertJobMaterial::IsRecipe @ 0x849c114

/* expert_job::ExpertJobMaterial::IsRecipe() */

undefined4 __thiscall expert_job::ExpertJobMaterial::IsRecipe(ExpertJobMaterial *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = CItem::is_stackable(*(CItem **)(this + 4));
  if (cVar1 == '\x01') {
    iVar3 = (**(code **)(**(int **)(this + 4) + 0xc))(*(undefined4 *)(this + 4));
    if (iVar3 == 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x17;
    }
  }
  else {
    uVar2 = 0x17;
  }
  return uVar2;
}

```

---

## IsRight

```asm
// === 0849c06e expert_job::ExpertJobMaterial::IsRight  [0x0849c06e-0x849c113] ===
 849c06e:	55                   	push   %ebp
 849c06f:	89 e5                	mov    %esp,%ebp
 849c071:	83 ec 28             	sub    $0x28,%esp
 849c074:	8b 45 08             	mov    0x8(%ebp),%eax
 849c077:	89 04 24             	mov    %eax,(%esp)
 849c07a:	e8 07 32 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849c07f:	84 c0                	test   %al,%al
 849c081:	74 0a                	je     849c08d <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0x1f>
 849c083:	b8 11 00 00 00       	mov    $0x11,%eax
 849c088:	e9 85 00 00 00       	jmp    849c112 <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0xa4>
 849c08d:	8b 45 08             	mov    0x8(%ebp),%eax
 849c090:	8b 00                	mov    (%eax),%eax
 849c092:	89 04 24             	mov    %eax,(%esp)
 849c095:	e8 98 43 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849c09a:	85 c0                	test   %eax,%eax
 849c09c:	0f 94 c0             	sete   %al
 849c09f:	84 c0                	test   %al,%al
 849c0a1:	74 07                	je     849c0aa <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0x3c>
 849c0a3:	b8 03 00 00 00       	mov    $0x3,%eax
 849c0a8:	eb 68                	jmp    849c112 <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0xa4>
 849c0aa:	8b 45 08             	mov    0x8(%ebp),%eax
 849c0ad:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 849c0b1:	66 85 c0             	test   %ax,%ax
 849c0b4:	74 07                	je     849c0bd <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0x4f>
 849c0b6:	b8 11 00 00 00       	mov    $0x11,%eax
 849c0bb:	eb 55                	jmp    849c112 <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0xa4>
 849c0bd:	8b 45 08             	mov    0x8(%ebp),%eax
 849c0c0:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 849c0c4:	0f b7 c8             	movzwl %ax,%ecx
 849c0c7:	8b 45 08             	mov    0x8(%ebp),%eax
 849c0ca:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 849c0ce:	0f b7 d0             	movzwl %ax,%edx
 849c0d1:	8b 45 08             	mov    0x8(%ebp),%eax
 849c0d4:	8b 00                	mov    (%eax),%eax
 849c0d6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 849c0da:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c0de:	89 04 24             	mov    %eax,(%esp)
 849c0e1:	e8 48 4e 1e 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 849c0e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c0e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849c0ed:	75 07                	jne    849c0f6 <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0x88>
 849c0ef:	b8 11 00 00 00       	mov    $0x11,%eax
 849c0f4:	eb 1c                	jmp    849c112 <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0xa4>
 849c0f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c0f9:	8b 50 02             	mov    0x2(%eax),%edx
 849c0fc:	8b 45 08             	mov    0x8(%ebp),%eax
 849c0ff:	8b 40 08             	mov    0x8(%eax),%eax
 849c102:	39 c2                	cmp    %eax,%edx
 849c104:	74 07                	je     849c10d <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0x9f>
 849c106:	b8 11 00 00 00       	mov    $0x11,%eax
 849c10b:	eb 05                	jmp    849c112 <_ZN10expert_job17ExpertJobMaterial7IsRightEv+0xa4>
 849c10d:	b8 00 00 00 00       	mov    $0x0,%eax
 849c112:	c9                   	leave
 849c113:	c3                   	ret

```

```c
// expert_job::ExpertJobMaterial::IsRight @ 0x849c06e

/* expert_job::ExpertJobMaterial::IsRight() */

undefined4 __thiscall expert_job::ExpertJobMaterial::IsRight(ExpertJobMaterial *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
    if (iVar3 == 0) {
      uVar2 = 3;
    }
    else if (*(short *)(this + 0xe) == 0) {
      iVar3 = CUser::GetCurCharacInventoryRef
                        (*(CUser **)this,*(ushort *)(this + 0xe),*(ushort *)(this + 0xc));
      if (iVar3 == 0) {
        uVar2 = 0x11;
      }
      else if (*(int *)(iVar3 + 2) == *(int *)(this + 8)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x11;
      }
    }
    else {
      uVar2 = 0x11;
    }
  }
  else {
    uVar2 = 0x11;
  }
  return uVar2;
}

```

---

## SetData

```asm
// === 0849bf08 expert_job::ExpertJobMaterial::SetData  [0x0849bf08-0x849bfcf] ===
 849bf08:	55                   	push   %ebp
 849bf09:	89 e5                	mov    %esp,%ebp
 849bf0b:	53                   	push   %ebx
 849bf0c:	83 ec 34             	sub    $0x34,%esp
 849bf0f:	8b 55 10             	mov    0x10(%ebp),%edx
 849bf12:	8b 45 14             	mov    0x14(%ebp),%eax
 849bf15:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 849bf19:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 849bf1d:	66 83 7d e4 00       	cmpw   $0x0,-0x1c(%ebp)
 849bf22:	74 0a                	je     849bf2e <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0x26>
 849bf24:	b8 15 00 00 00       	mov    $0x15,%eax
 849bf29:	e9 9b 00 00 00       	jmp    849bfc9 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0xc1>
 849bf2e:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 849bf32:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 849bf36:	89 54 24 08          	mov    %edx,0x8(%esp)
 849bf3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 849bf3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 849bf41:	89 04 24             	mov    %eax,(%esp)
 849bf44:	e8 e5 4f 1e 00       	call   8680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>
 849bf49:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849bf4c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849bf50:	75 07                	jne    849bf59 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0x51>
 849bf52:	b8 15 00 00 00       	mov    $0x15,%eax
 849bf57:	eb 70                	jmp    849bfc9 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0xc1>
 849bf59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849bf5c:	8b 40 02             	mov    0x2(%eax),%eax
 849bf5f:	85 c0                	test   %eax,%eax
 849bf61:	75 07                	jne    849bf6a <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0x62>
 849bf63:	b8 15 00 00 00       	mov    $0x15,%eax
 849bf68:	eb 5f                	jmp    849bfc9 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0xc1>
 849bf6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849bf6d:	8b 50 02             	mov    0x2(%eax),%edx
 849bf70:	8b 45 08             	mov    0x8(%ebp),%eax
 849bf73:	89 50 08             	mov    %edx,0x8(%eax)
 849bf76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849bf79:	8b 40 02             	mov    0x2(%eax),%eax
 849bf7c:	89 c3                	mov    %eax,%ebx
 849bf7e:	e8 18 02 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849bf83:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849bf87:	89 04 24             	mov    %eax,(%esp)
 849bf8a:	e8 a3 3a ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849bf8f:	8b 55 08             	mov    0x8(%ebp),%edx
 849bf92:	89 42 04             	mov    %eax,0x4(%edx)
 849bf95:	8b 45 08             	mov    0x8(%ebp),%eax
 849bf98:	8b 40 04             	mov    0x4(%eax),%eax
 849bf9b:	85 c0                	test   %eax,%eax
 849bf9d:	75 07                	jne    849bfa6 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0x9e>
 849bf9f:	b8 15 00 00 00       	mov    $0x15,%eax
 849bfa4:	eb 23                	jmp    849bfc9 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt+0xc1>
 849bfa6:	8b 45 08             	mov    0x8(%ebp),%eax
 849bfa9:	8b 55 0c             	mov    0xc(%ebp),%edx
 849bfac:	89 10                	mov    %edx,(%eax)
 849bfae:	8b 45 08             	mov    0x8(%ebp),%eax
 849bfb1:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 849bfb5:	66 89 50 0c          	mov    %dx,0xc(%eax)
 849bfb9:	8b 45 08             	mov    0x8(%ebp),%eax
 849bfbc:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 849bfc0:	66 89 50 0e          	mov    %dx,0xe(%eax)
 849bfc4:	b8 00 00 00 00       	mov    $0x0,%eax
 849bfc9:	83 c4 34             	add    $0x34,%esp
 849bfcc:	5b                   	pop    %ebx
 849bfcd:	5d                   	pop    %ebp
 849bfce:	c3                   	ret
 849bfcf:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::SetData @ 0x849bf08

/* expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short) */

undefined4 __thiscall
expert_job::ExpertJobMaterial::SetData
          (ExpertJobMaterial *this,CUser *param_1,ushort param_2,ushort param_3)

{
  undefined4 uVar1;
  int iVar2;
  CDataManager *this_00;
  
  if (param_2 == 0) {
    iVar2 = CUser::GetCurCharacInventoryRef(param_1,0,param_3);
    if (iVar2 == 0) {
      uVar1 = 0x15;
    }
    else if (*(int *)(iVar2 + 2) == 0) {
      uVar1 = 0x15;
    }
    else {
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + 2);
      iVar2 = *(int *)(iVar2 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      uVar1 = CDataManager::find_item(this_00,iVar2);
      *(undefined4 *)(this + 4) = uVar1;
      if (*(int *)(this + 4) == 0) {
        uVar1 = 0x15;
      }
      else {
        *(CUser **)this = param_1;
        *(ushort *)(this + 0xc) = param_3;
        *(undefined2 *)(this + 0xe) = 0;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x15;
  }
  return uVar1;
}

```

---

## UseMaterialOfRecipe

```asm
// === 0849c536 expert_job::ExpertJobMaterial::UseMaterialOfRecipe  [0x0849c536-0x849c611] ===
 849c536:	55                   	push   %ebp
 849c537:	89 e5                	mov    %esp,%ebp
 849c539:	53                   	push   %ebx
 849c53a:	83 ec 34             	sub    $0x34,%esp
 849c53d:	8b 45 08             	mov    0x8(%ebp),%eax
 849c540:	89 04 24             	mov    %eax,(%esp)
 849c543:	e8 3e 2d 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849c548:	84 c0                	test   %al,%al
 849c54a:	74 0a                	je     849c556 <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0x20>
 849c54c:	b8 11 00 00 00       	mov    $0x11,%eax
 849c551:	e9 b5 00 00 00       	jmp    849c60b <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0xd5>
 849c556:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849c55d:	8b 45 08             	mov    0x8(%ebp),%eax
 849c560:	89 04 24             	mov    %eax,(%esp)
 849c563:	e8 ac fb ff ff       	call   849c114 <_ZN10expert_job17ExpertJobMaterial8IsRecipeEv>
 849c568:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c56b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849c56f:	0f 95 c0             	setne  %al
 849c572:	84 c0                	test   %al,%al
 849c574:	74 08                	je     849c57e <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0x48>
 849c576:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c579:	e9 8d 00 00 00       	jmp    849c60b <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0xd5>
 849c57e:	8b 45 08             	mov    0x8(%ebp),%eax
 849c581:	8b 00                	mov    (%eax),%eax
 849c583:	89 04 24             	mov    %eax,(%esp)
 849c586:	e8 a7 3e c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849c58b:	85 c0                	test   %eax,%eax
 849c58d:	0f 94 c0             	sete   %al
 849c590:	84 c0                	test   %al,%al
 849c592:	74 07                	je     849c59b <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0x65>
 849c594:	b8 03 00 00 00       	mov    $0x3,%eax
 849c599:	eb 70                	jmp    849c60b <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0xd5>
 849c59b:	8b 45 08             	mov    0x8(%ebp),%eax
 849c59e:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 849c5a2:	0f b7 d0             	movzwl %ax,%edx
 849c5a5:	8b 45 08             	mov    0x8(%ebp),%eax
 849c5a8:	8b 40 04             	mov    0x4(%eax),%eax
 849c5ab:	8d 98 74 01 00 00    	lea    0x174(%eax),%ebx
 849c5b1:	8b 45 08             	mov    0x8(%ebp),%eax
 849c5b4:	8b 00                	mov    (%eax),%eax
 849c5b6:	8d 4d f3             	lea    -0xd(%ebp),%ecx
 849c5b9:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 849c5bd:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 849c5c0:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 849c5c4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849c5c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849c5cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 849c5d0:	8b 45 08             	mov    0x8(%ebp),%eax
 849c5d3:	89 04 24             	mov    %eax,(%esp)
 849c5d6:	e8 29 fc ff ff       	call   849c204 <_ZN10expert_job17ExpertJobMaterial19DelMaterialOfRecipeEP5CUserRKSt6vectorISt4pairIiiESaIS5_EEiP11PacketGuardRb>
 849c5db:	83 f0 01             	xor    $0x1,%eax
 849c5de:	84 c0                	test   %al,%al
 849c5e0:	74 07                	je     849c5e9 <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0xb3>
 849c5e2:	b8 11 00 00 00       	mov    $0x11,%eax
 849c5e7:	eb 22                	jmp    849c60b <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0xd5>
 849c5e9:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 849c5ed:	84 c0                	test   %al,%al
 849c5ef:	74 15                	je     849c606 <_ZN10expert_job17ExpertJobMaterial19UseMaterialOfRecipeEP11PacketGuard+0xd0>
 849c5f1:	8b 45 08             	mov    0x8(%ebp),%eax
 849c5f4:	8b 00                	mov    (%eax),%eax
 849c5f6:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 849c5fd:	00 
 849c5fe:	89 04 24             	mov    %eax,(%esp)
 849c601:	e8 0e 17 1c 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 849c606:	b8 00 00 00 00       	mov    $0x0,%eax
 849c60b:	83 c4 34             	add    $0x34,%esp
 849c60e:	5b                   	pop    %ebx
 849c60f:	5d                   	pop    %ebp
 849c610:	c3                   	ret
 849c611:	90                   	nop

```

```c
// expert_job::ExpertJobMaterial::UseMaterialOfRecipe @ 0x849c536

/* expert_job::ExpertJobMaterial::UseMaterialOfRecipe(PacketGuard*) */

int __thiscall
expert_job::ExpertJobMaterial::UseMaterialOfRecipe(ExpertJobMaterial *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  bool local_11;
  int local_10;
  
  cVar1 = Empty(this);
  if (cVar1 == '\0') {
    local_10 = 0;
    local_10 = IsRecipe(this);
    if (local_10 == 0) {
      iVar2 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
      if (iVar2 == 0) {
        local_10 = 3;
      }
      else {
        cVar1 = DelMaterialOfRecipe(this,*(CUser **)this,(vector *)(*(int *)(this + 4) + 0x174),
                                    (uint)*(ushort *)(this + 0xc),param_1,&local_11);
        if (cVar1 == '\x01') {
          if (local_11 != false) {
            CUser::send_equip(*(CUser **)this,0x16);
          }
          local_10 = 0;
        }
        else {
          local_10 = 0x11;
        }
      }
    }
  }
  else {
    local_10 = 0x11;
  }
  return local_10;
}

```

