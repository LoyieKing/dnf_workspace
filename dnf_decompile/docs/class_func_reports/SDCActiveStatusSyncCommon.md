# SDCActiveStatusSyncCommon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## getActiveStatusDamageDurationForSDC

```asm
// === 0808df82 SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC  [0x0808df82-0x808e13b] ===
 808df82:	55                   	push   %ebp
 808df83:	89 e5                	mov    %esp,%ebp
 808df85:	56                   	push   %esi
 808df86:	53                   	push   %ebx
 808df87:	83 c4 80             	add    $0xffffff80,%esp
 808df8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 808df8d:	88 45 a4             	mov    %al,-0x5c(%ebp)
 808df90:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 808df94:	0f 84 93 01 00 00    	je     808e12d <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x1ab>
 808df9a:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 808df9e:	0f 84 8c 01 00 00    	je     808e130 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x1ae>
 808dfa4:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 808dfa8:	0f 84 85 01 00 00    	je     808e133 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x1b1>
 808dfae:	8b 45 1c             	mov    0x1c(%ebp),%eax
 808dfb1:	8b 10                	mov    (%eax),%edx
 808dfb3:	89 55 b6             	mov    %edx,-0x4a(%ebp)
 808dfb6:	8b 50 04             	mov    0x4(%eax),%edx
 808dfb9:	89 55 ba             	mov    %edx,-0x46(%ebp)
 808dfbc:	8b 50 08             	mov    0x8(%eax),%edx
 808dfbf:	89 55 be             	mov    %edx,-0x42(%ebp)
 808dfc2:	8b 50 0c             	mov    0xc(%eax),%edx
 808dfc5:	89 55 c2             	mov    %edx,-0x3e(%ebp)
 808dfc8:	8b 50 10             	mov    0x10(%eax),%edx
 808dfcb:	89 55 c6             	mov    %edx,-0x3a(%ebp)
 808dfce:	8b 50 14             	mov    0x14(%eax),%edx
 808dfd1:	89 55 ca             	mov    %edx,-0x36(%ebp)
 808dfd4:	8b 50 18             	mov    0x18(%eax),%edx
 808dfd7:	89 55 ce             	mov    %edx,-0x32(%ebp)
 808dfda:	8b 50 1c             	mov    0x1c(%eax),%edx
 808dfdd:	89 55 d2             	mov    %edx,-0x2e(%ebp)
 808dfe0:	8b 50 20             	mov    0x20(%eax),%edx
 808dfe3:	89 55 d6             	mov    %edx,-0x2a(%ebp)
 808dfe6:	8b 50 24             	mov    0x24(%eax),%edx
 808dfe9:	89 55 da             	mov    %edx,-0x26(%ebp)
 808dfec:	8b 50 28             	mov    0x28(%eax),%edx
 808dfef:	89 55 de             	mov    %edx,-0x22(%ebp)
 808dff2:	8b 50 2c             	mov    0x2c(%eax),%edx
 808dff5:	89 55 e2             	mov    %edx,-0x1e(%ebp)
 808dff8:	8b 50 30             	mov    0x30(%eax),%edx
 808dffb:	89 55 e6             	mov    %edx,-0x1a(%ebp)
 808dffe:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 808e002:	88 45 ea             	mov    %al,-0x16(%ebp)
 808e005:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808e008:	89 04 24             	mov    %eax,(%esp)
 808e00b:	e8 9c 01 00 00       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 808e010:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 808e014:	8b 55 14             	mov    0x14(%ebp),%edx
 808e017:	89 54 24 14          	mov    %edx,0x14(%esp)
 808e01b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 808e01e:	89 54 24 10          	mov    %edx,0x10(%esp)
 808e022:	8d 55 b6             	lea    -0x4a(%ebp),%edx
 808e025:	89 54 24 0c          	mov    %edx,0xc(%esp)
 808e029:	8b 55 10             	mov    0x10(%ebp),%edx
 808e02c:	89 54 24 08          	mov    %edx,0x8(%esp)
 808e030:	89 44 24 04          	mov    %eax,0x4(%esp)
 808e034:	8b 45 08             	mov    0x8(%ebp),%eax
 808e037:	89 04 24             	mov    %eax,(%esp)
 808e03a:	e8 75 f4 ff ff       	call   808d4b4 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiPvPSt6vectorIiSaIiEEPi>
 808e03f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808e042:	89 04 24             	mov    %eax,(%esp)
 808e045:	e8 76 01 00 00       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 808e04a:	85 c0                	test   %eax,%eax
 808e04c:	0f 95 c0             	setne  %al
 808e04f:	84 c0                	test   %al,%al
 808e051:	74 20                	je     808e073 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0xf1>
 808e053:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 808e05a:	00 
 808e05b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808e05e:	89 04 24             	mov    %eax,(%esp)
 808e061:	e8 76 01 00 00       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 808e066:	8b 00                	mov    (%eax),%eax
 808e068:	89 45 b9             	mov    %eax,-0x47(%ebp)
 808e06b:	8b 45 14             	mov    0x14(%ebp),%eax
 808e06e:	8b 00                	mov    (%eax),%eax
 808e070:	89 45 bd             	mov    %eax,-0x43(%ebp)
 808e073:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 808e077:	83 f8 0b             	cmp    $0xb,%eax
 808e07a:	0f 87 85 00 00 00    	ja     808e105 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x183>
 808e080:	8b 04 85 30 46 af 08 	mov    0x8af4630(,%eax,4),%eax
 808e087:	ff e0                	jmp    *%eax
 808e089:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 808e08d:	8b 45 bd             	mov    -0x43(%ebp),%eax
 808e090:	89 44 24 10          	mov    %eax,0x10(%esp)
 808e094:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808e09b:	00 
 808e09c:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 808e09f:	89 44 24 08          	mov    %eax,0x8(%esp)
 808e0a3:	8d 45 eb             	lea    -0x15(%ebp),%eax
 808e0a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 808e0aa:	8b 45 08             	mov    0x8(%ebp),%eax
 808e0ad:	89 04 24             	mov    %eax,(%esp)
 808e0b0:	e8 53 fd ff ff       	call   808de08 <_ZN25SDCActiveStatusSyncCommon13getBurnDamageERbP29STSDCActiveStatusSyncDataSendPvi>
 808e0b5:	8b 55 18             	mov    0x18(%ebp),%edx
 808e0b8:	89 02                	mov    %eax,(%edx)
 808e0ba:	eb 49                	jmp    808e105 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x183>
 808e0bc:	8b 45 bd             	mov    -0x43(%ebp),%eax
 808e0bf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 808e0c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 808e0ca:	00 
 808e0cb:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 808e0ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 808e0d2:	8b 45 08             	mov    0x8(%ebp),%eax
 808e0d5:	89 04 24             	mov    %eax,(%esp)
 808e0d8:	e8 e7 fb ff ff       	call   808dcc4 <_ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi>
 808e0dd:	8b 55 18             	mov    0x18(%ebp),%edx
 808e0e0:	89 02                	mov    %eax,(%edx)
 808e0e2:	eb 21                	jmp    808e105 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x183>
 808e0e4:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 808e0e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 808e0eb:	8b 45 08             	mov    0x8(%ebp),%eax
 808e0ee:	89 04 24             	mov    %eax,(%esp)
 808e0f1:	e8 24 fe ff ff       	call   808df1a <_ZN25SDCActiveStatusSyncCommon23getBleedingDamageServerEP29STSDCActiveStatusSyncDataSend>
 808e0f6:	8b 55 18             	mov    0x18(%ebp),%edx
 808e0f9:	89 02                	mov    %eax,(%edx)
 808e0fb:	eb 08                	jmp    808e105 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x183>
 808e0fd:	8b 55 b9             	mov    -0x47(%ebp),%edx
 808e100:	8b 45 18             	mov    0x18(%ebp),%eax
 808e103:	89 10                	mov    %edx,(%eax)
 808e105:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808e108:	89 04 24             	mov    %eax,(%esp)
 808e10b:	e8 ca 5c ff ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 808e110:	eb 22                	jmp    808e134 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x1b2>
 808e112:	89 d3                	mov    %edx,%ebx
 808e114:	89 c6                	mov    %eax,%esi
 808e116:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808e119:	89 04 24             	mov    %eax,(%esp)
 808e11c:	e8 b9 5c ff ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 808e121:	89 f0                	mov    %esi,%eax
 808e123:	89 da                	mov    %ebx,%edx
 808e125:	89 04 24             	mov    %eax,(%esp)
 808e128:	e8 23 56 a5 00       	call   8ae3750 <_Unwind_Resume>
 808e12d:	90                   	nop
 808e12e:	eb 04                	jmp    808e134 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x1b2>
 808e130:	90                   	nop
 808e131:	eb 01                	jmp    808e134 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv+0x1b2>
 808e133:	90                   	nop
 808e134:	83 ec 80             	sub    $0xffffff80,%esp
 808e137:	5b                   	pop    %ebx
 808e138:	5e                   	pop    %esi
 808e139:	5d                   	pop    %ebp
 808e13a:	c3                   	ret
 808e13b:	90                   	nop

```

```c
// SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC @ 0x808df82

/* SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC(char, int, int*, int*,
   STSDCActiveStatusSyncDataSend*, void*) */

void SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC
               (char param_1,int param_2,int *param_3,int *param_4,
               STSDCActiveStatusSyncDataSend *param_5,void *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined3 in_stack_00000005;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined1 local_1a;
  bool local_19;
  vector<int,std::allocator<int>> local_18 [12];
  
  if (((param_4 != (int *)0x0) && (param_5 != (STSDCActiveStatusSyncDataSend *)0x0)) &&
     (param_6 != (void *)0x0)) {
    local_4e = *(undefined4 *)param_6;
    local_4a = *(undefined4 *)((int)param_6 + 4);
    local_46 = *(undefined4 *)((int)param_6 + 8);
    local_42 = *(undefined4 *)((int)param_6 + 0xc);
    local_3e = *(undefined4 *)((int)param_6 + 0x10);
    local_3a = *(undefined4 *)((int)param_6 + 0x14);
    local_36 = *(undefined4 *)((int)param_6 + 0x18);
    local_32 = *(undefined4 *)((int)param_6 + 0x1c);
    local_2e = *(undefined4 *)((int)param_6 + 0x20);
    local_2a = *(undefined4 *)((int)param_6 + 0x24);
    local_26 = *(undefined4 *)((int)param_6 + 0x28);
    local_22 = *(undefined4 *)((int)param_6 + 0x2c);
    local_1e = *(undefined4 *)((int)param_6 + 0x30);
    local_1a = *(undefined1 *)((int)param_6 + 0x34);
    std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 0808e03a to 0808e0dc has its CatchHandler @ 0808e112 */
    makeEtcParameters(_param_1,(int)(char)param_2,param_3,&local_4e,local_18,param_4);
    iVar1 = std::vector<int,std::allocator<int>>::size(local_18);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_18,0);
      local_4e._3_1_ = (undefined1)*puVar2;
      local_4a._3_1_ = (undefined1)*param_4;
      local_4a = CONCAT13(local_4a._3_1_,(int3)((uint)*puVar2 >> 8));
      local_46._0_3_ = (undefined3)((uint)*param_4 >> 8);
    }
    switch((char)param_2) {
    case '\x02':
      uVar3 = getPoisonDamage(_param_1,(STSDCActiveStatusSyncDataSend *)&local_4e,(void *)0x0,
                              CONCAT31((undefined3)local_46,local_4a._3_1_));
      *(undefined4 *)param_5 = uVar3;
      break;
    case '\x06':
    case '\a':
      *(uint *)param_5 = CONCAT31((undefined3)local_4a,local_4e._3_1_);
      break;
    case '\t':
      local_19 = false;
      uVar3 = getBurnDamage(_param_1,&local_19,(STSDCActiveStatusSyncDataSend *)&local_4e,
                            (void *)0x0,CONCAT31((undefined3)local_46,local_4a._3_1_));
      *(undefined4 *)param_5 = uVar3;
      break;
    case '\v':
      uVar3 = getBleedingDamageServer(_param_1,(STSDCActiveStatusSyncDataSend *)&local_4e);
      *(undefined4 *)param_5 = uVar3;
    }
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}

```

---

## getActiveStatusDurationClient

```asm
// === 0808d268 SDCActiveStatusSyncCommon::getActiveStatusDurationClient  [0x0808d268-0x808d271] ===
 808d268:	55                   	push   %ebp
 808d269:	89 e5                	mov    %esp,%ebp
 808d26b:	b8 00 00 00 00       	mov    $0x0,%eax
 808d270:	5d                   	pop    %ebp
 808d271:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getActiveStatusDurationClient @ 0x808d268

/* SDCActiveStatusSyncCommon::getActiveStatusDurationClient(int, int, IRDActiveObject*) */

undefined4
SDCActiveStatusSyncCommon::getActiveStatusDurationClient
          (int param_1,int param_2,IRDActiveObject *param_3)

{
  return 0;
}

```

---

## getActiveStatusDurationServer

```asm
// === 0808d272 SDCActiveStatusSyncCommon::getActiveStatusDurationServer  [0x0808d272-0x808d379] ===
 808d272:	55                   	push   %ebp
 808d273:	89 e5                	mov    %esp,%ebp
 808d275:	53                   	push   %ebx
 808d276:	83 ec 34             	sub    $0x34,%esp
 808d279:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 808d280:	83 7d 0c 11          	cmpl   $0x11,0xc(%ebp)
 808d284:	0f 87 88 00 00 00    	ja     808d312 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0xa0>
 808d28a:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d28d:	ba 01 00 00 00       	mov    $0x1,%edx
 808d292:	89 d3                	mov    %edx,%ebx
 808d294:	89 c1                	mov    %eax,%ecx
 808d296:	d3 e3                	shl    %cl,%ebx
 808d298:	89 d8                	mov    %ebx,%eax
 808d29a:	89 c2                	mov    %eax,%edx
 808d29c:	81 e2 aa 85 03 00    	and    $0x385aa,%edx
 808d2a2:	85 d2                	test   %edx,%edx
 808d2a4:	75 2c                	jne    808d2d2 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0x60>
 808d2a6:	89 c2                	mov    %eax,%edx
 808d2a8:	81 e2 55 3a 00 00    	and    $0x3a55,%edx
 808d2ae:	85 d2                	test   %edx,%edx
 808d2b0:	75 0b                	jne    808d2bd <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0x4b>
 808d2b2:	25 00 40 00 00       	and    $0x4000,%eax
 808d2b7:	85 c0                	test   %eax,%eax
 808d2b9:	75 50                	jne    808d30b <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0x99>
 808d2bb:	eb 55                	jmp    808d312 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0xa0>
 808d2bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d2c0:	8b 04 85 a0 58 3f 09 	mov    0x93f58a0(,%eax,4),%eax
 808d2c7:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 808d2cd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 808d2d0:	eb 40                	jmp    808d312 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0xa0>
 808d2d2:	8b 45 10             	mov    0x10(%ebp),%eax
 808d2d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 808d2d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d2dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 808d2e3:	89 04 24             	mov    %eax,(%esp)
 808d2e6:	e8 8f 00 00 00       	call   808d37a <_ZN25SDCActiveStatusSyncCommon21getActiveStatusPower1Eii>
 808d2eb:	d9 05 10 4c af 08    	flds   0x8af4c10
 808d2f1:	de c9                	fmulp  %st,%st(1)
 808d2f3:	d9 7d e6             	fnstcw -0x1a(%ebp)
 808d2f6:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 808d2fa:	b4 0c                	mov    $0xc,%ah
 808d2fc:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 808d300:	d9 6d e4             	fldcw  -0x1c(%ebp)
 808d303:	db 5d e8             	fistpl -0x18(%ebp)
 808d306:	d9 6d e6             	fldcw  -0x1a(%ebp)
 808d309:	eb 07                	jmp    808d312 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0xa0>
 808d30b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 808d312:	c7 44 24 04 11 02 00 	movl   $0x211,0x4(%esp)
 808d319:	00 
 808d31a:	8b 45 14             	mov    0x14(%ebp),%eax
 808d31d:	89 04 24             	mov    %eax,(%esp)
 808d320:	e8 c3 7d 00 00       	call   80950e8 <_ZN4_SDC12isObjectTypeEii>
 808d325:	84 c0                	test   %al,%al
 808d327:	74 3b                	je     808d364 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0xf2>
 808d329:	db 45 1c             	fildl  0x1c(%ebp)
 808d32c:	d9 05 14 4c af 08    	flds   0x8af4c14
 808d332:	de f9                	fdivrp %st,%st(1)
 808d334:	d9 5d ec             	fstps  -0x14(%ebp)
 808d337:	db 45 1c             	fildl  0x1c(%ebp)
 808d33a:	d9 45 ec             	flds   -0x14(%ebp)
 808d33d:	de f1                	fdivp  %st,%st(1)
 808d33f:	d9 5d f0             	fstps  -0x10(%ebp)
 808d342:	db 45 e8             	fildl  -0x18(%ebp)
 808d345:	d8 4d f0             	fmuls  -0x10(%ebp)
 808d348:	d9 7d e6             	fnstcw -0x1a(%ebp)
 808d34b:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 808d34f:	b4 0c                	mov    $0xc,%ah
 808d351:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 808d355:	d9 6d e4             	fldcw  -0x1c(%ebp)
 808d358:	db 5d f4             	fistpl -0xc(%ebp)
 808d35b:	d9 6d e6             	fldcw  -0x1a(%ebp)
 808d35e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808d361:	29 45 e8             	sub    %eax,-0x18(%ebp)
 808d364:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 808d368:	79 07                	jns    808d371 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii+0xff>
 808d36a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 808d371:	8b 45 e8             	mov    -0x18(%ebp),%eax
 808d374:	83 c4 34             	add    $0x34,%esp
 808d377:	5b                   	pop    %ebx
 808d378:	5d                   	pop    %ebp
 808d379:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getActiveStatusDurationServer @ 0x808d272

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SDCActiveStatusSyncCommon::getActiveStatusDurationServer(int, int, int, int, int) */

int __thiscall
SDCActiveStatusSyncCommon::getActiveStatusDurationServer
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  char cVar1;
  uint uVar2;
  longdouble lVar3;
  int local_1c;
  
  local_1c = 0;
  if ((uint)param_1 < 0x12) {
    uVar2 = 1 << ((byte)param_1 & 0x1f);
    if ((uVar2 & 0x385aa) == 0) {
      if ((uVar2 & 0x3a55) == 0) {
        if ((uVar2 & 0x4000) != 0) {
          local_1c = 0;
        }
      }
      else {
        local_1c = *(int *)(ACTIVESTATUS_DURATION + param_1 * 4) * 1000;
      }
    }
    else {
      lVar3 = (longdouble)getActiveStatusPower1(this,param_1,param_2);
      local_1c = (int)ROUND((longdouble)_DAT_08af4c10 * lVar3);
    }
  }
  cVar1 = _SDC::isObjectType(param_3,0x211);
  if (cVar1 != '\0') {
    local_1c = local_1c -
               (int)ROUND((float)local_1c * (((float)param_5 / _DAT_08af4c14) / (float)param_5));
  }
  if (local_1c < 0) {
    local_1c = 0;
  }
  return local_1c;
}

```

---

## getActiveStatusEtcParameter

```asm
// === 0808d43e SDCActiveStatusSyncCommon::getActiveStatusEtcParameter  [0x0808d43e-0x808d4b3] ===
 808d43e:	55                   	push   %ebp
 808d43f:	89 e5                	mov    %esp,%ebp
 808d441:	56                   	push   %esi
 808d442:	53                   	push   %ebx
 808d443:	83 ec 30             	sub    $0x30,%esp
 808d446:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 808d44d:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 808d454:	a1 84 e4 36 09       	mov    0x936e484,%eax
 808d459:	8d 58 ff             	lea    -0x1(%eax),%ebx
 808d45c:	8b 45 10             	mov    0x10(%ebp),%eax
 808d45f:	8d 48 ff             	lea    -0x1(%eax),%ecx
 808d462:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d465:	8b 55 14             	mov    0x14(%ebp),%edx
 808d468:	01 d2                	add    %edx,%edx
 808d46a:	83 c2 01             	add    $0x1,%edx
 808d46d:	c1 e0 03             	shl    $0x3,%eax
 808d470:	01 d0                	add    %edx,%eax
 808d472:	8b 14 85 40 5a 3f 09 	mov    0x93f5a40(,%eax,4),%edx
 808d479:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d47c:	8b 75 14             	mov    0x14(%ebp),%esi
 808d47f:	01 f6                	add    %esi,%esi
 808d481:	c1 e0 03             	shl    $0x3,%eax
 808d484:	01 f0                	add    %esi,%eax
 808d486:	8b 04 85 40 5a 3f 09 	mov    0x93f5a40(,%eax,4),%eax
 808d48d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 808d491:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 808d495:	89 54 24 04          	mov    %edx,0x4(%esp)
 808d499:	89 04 24             	mov    %eax,(%esp)
 808d49c:	e8 20 50 80 00       	call   88924c1 <_Z26GetUniformVelocityFloatSDCffii>
 808d4a1:	d9 5d f4             	fstps  -0xc(%ebp)
 808d4a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808d4a7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808d4aa:	d9 45 e4             	flds   -0x1c(%ebp)
 808d4ad:	83 c4 30             	add    $0x30,%esp
 808d4b0:	5b                   	pop    %ebx
 808d4b1:	5e                   	pop    %esi
 808d4b2:	5d                   	pop    %ebp
 808d4b3:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getActiveStatusEtcParameter @ 0x808d43e

/* SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getActiveStatusEtcParameter
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2,int param_3)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC
                    (*(float *)(ACTIVESTATUS_ETC_PARAMETERS + (param_1 * 8 + param_3 * 2) * 4),
                     *(float *)(ACTIVESTATUS_ETC_PARAMETERS + (param_1 * 8 + param_3 * 2 + 1) * 4),
                     param_2 + -1,ACTIVESTATUS_MAXLEVEL + -1);
  return (longdouble)(float)lVar1;
}

```

---

## getActiveStatusPower1

```asm
// === 0808d37a SDCActiveStatusSyncCommon::getActiveStatusPower1  [0x0808d37a-0x808d3db] ===
 808d37a:	55                   	push   %ebp
 808d37b:	89 e5                	mov    %esp,%ebp
 808d37d:	53                   	push   %ebx
 808d37e:	83 ec 34             	sub    $0x34,%esp
 808d381:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 808d388:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 808d38f:	a1 84 e4 36 09       	mov    0x936e484,%eax
 808d394:	8d 58 ff             	lea    -0x1(%eax),%ebx
 808d397:	8b 45 10             	mov    0x10(%ebp),%eax
 808d39a:	8d 48 ff             	lea    -0x1(%eax),%ecx
 808d39d:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d3a0:	01 c0                	add    %eax,%eax
 808d3a2:	83 c0 01             	add    $0x1,%eax
 808d3a5:	8b 14 85 00 59 3f 09 	mov    0x93f5900(,%eax,4),%edx
 808d3ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d3af:	8b 04 c5 00 59 3f 09 	mov    0x93f5900(,%eax,8),%eax
 808d3b6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 808d3ba:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 808d3be:	89 54 24 04          	mov    %edx,0x4(%esp)
 808d3c2:	89 04 24             	mov    %eax,(%esp)
 808d3c5:	e8 f7 50 80 00       	call   88924c1 <_Z26GetUniformVelocityFloatSDCffii>
 808d3ca:	d9 5d f4             	fstps  -0xc(%ebp)
 808d3cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808d3d0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808d3d3:	d9 45 e4             	flds   -0x1c(%ebp)
 808d3d6:	83 c4 34             	add    $0x34,%esp
 808d3d9:	5b                   	pop    %ebx
 808d3da:	5d                   	pop    %ebp
 808d3db:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getActiveStatusPower1 @ 0x808d37a

/* SDCActiveStatusSyncCommon::getActiveStatusPower1(int, int) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getActiveStatusPower1
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC
                    (*(float *)(ACTIVESTATUS_POWER1 + param_1 * 8),
                     *(float *)(ACTIVESTATUS_POWER1 + (param_1 * 2 + 1) * 4),param_2 + -1,
                     ACTIVESTATUS_MAXLEVEL + -1);
  return (longdouble)(float)lVar1;
}

```

---

## getActiveStatusPower2

```asm
// === 0808d3dc SDCActiveStatusSyncCommon::getActiveStatusPower2  [0x0808d3dc-0x808d43d] ===
 808d3dc:	55                   	push   %ebp
 808d3dd:	89 e5                	mov    %esp,%ebp
 808d3df:	53                   	push   %ebx
 808d3e0:	83 ec 34             	sub    $0x34,%esp
 808d3e3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 808d3ea:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 808d3f1:	a1 84 e4 36 09       	mov    0x936e484,%eax
 808d3f6:	8d 58 ff             	lea    -0x1(%eax),%ebx
 808d3f9:	8b 45 10             	mov    0x10(%ebp),%eax
 808d3fc:	8d 48 ff             	lea    -0x1(%eax),%ecx
 808d3ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d402:	01 c0                	add    %eax,%eax
 808d404:	83 c0 01             	add    $0x1,%eax
 808d407:	8b 14 85 a0 59 3f 09 	mov    0x93f59a0(,%eax,4),%edx
 808d40e:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d411:	8b 04 c5 a0 59 3f 09 	mov    0x93f59a0(,%eax,8),%eax
 808d418:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 808d41c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 808d420:	89 54 24 04          	mov    %edx,0x4(%esp)
 808d424:	89 04 24             	mov    %eax,(%esp)
 808d427:	e8 95 50 80 00       	call   88924c1 <_Z26GetUniformVelocityFloatSDCffii>
 808d42c:	d9 5d e4             	fstps  -0x1c(%ebp)
 808d42f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808d432:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808d435:	d9 45 e4             	flds   -0x1c(%ebp)
 808d438:	83 c4 34             	add    $0x34,%esp
 808d43b:	5b                   	pop    %ebx
 808d43c:	5d                   	pop    %ebp
 808d43d:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getActiveStatusPower2 @ 0x808d3dc

/* SDCActiveStatusSyncCommon::getActiveStatusPower2(int, int) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getActiveStatusPower2
          (SDCActiveStatusSyncCommon *this,int param_1,int param_2)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC
                    (*(float *)(ACTIVESTATUS_POWER2 + param_1 * 8),
                     *(float *)(ACTIVESTATUS_POWER2 + (param_1 * 2 + 1) * 4),param_2 + -1,
                     ACTIVESTATUS_MAXLEVEL + -1);
  return (longdouble)(float)lVar1;
}

```

---

## getBleedingDamageClient

```asm
// === 0808de9e SDCActiveStatusSyncCommon::getBleedingDamageClient  [0x0808de9e-0x808df19] ===
 808de9e:	55                   	push   %ebp
 808de9f:	89 e5                	mov    %esp,%ebp
 808dea1:	83 ec 38             	sub    $0x38,%esp
 808dea4:	8b 45 10             	mov    0x10(%ebp),%eax
 808dea7:	88 45 e4             	mov    %al,-0x1c(%ebp)
 808deaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dead:	8b 48 07             	mov    0x7(%eax),%ecx
 808deb0:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 808deb5:	89 c8                	mov    %ecx,%eax
 808deb7:	f7 ea                	imul   %edx
 808deb9:	c1 fa 05             	sar    $0x5,%edx
 808debc:	89 c8                	mov    %ecx,%eax
 808debe:	c1 f8 1f             	sar    $0x1f,%eax
 808dec1:	89 d1                	mov    %edx,%ecx
 808dec3:	29 c1                	sub    %eax,%ecx
 808dec5:	89 c8                	mov    %ecx,%eax
 808dec7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 808deca:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 808ded1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 808ded4:	89 44 24 04          	mov    %eax,0x4(%esp)
 808ded8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808dedb:	89 04 24             	mov    %eax,(%esp)
 808dede:	e8 35 03 00 00       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 808dee3:	8b 00                	mov    (%eax),%eax
 808dee5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808dee8:	8b 45 0c             	mov    0xc(%ebp),%eax
 808deeb:	8b 40 03             	mov    0x3(%eax),%eax
 808deee:	89 45 e0             	mov    %eax,-0x20(%ebp)
 808def1:	db 45 e0             	fildl  -0x20(%ebp)
 808def4:	db 45 f0             	fildl  -0x10(%ebp)
 808def7:	de f9                	fdivrp %st,%st(1)
 808def9:	d9 5d f4             	fstps  -0xc(%ebp)
 808defc:	d9 45 f4             	flds   -0xc(%ebp)
 808deff:	d9 7d de             	fnstcw -0x22(%ebp)
 808df02:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 808df06:	b4 0c                	mov    $0xc,%ah
 808df08:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 808df0c:	d9 6d dc             	fldcw  -0x24(%ebp)
 808df0f:	db 5d e0             	fistpl -0x20(%ebp)
 808df12:	d9 6d de             	fldcw  -0x22(%ebp)
 808df15:	8b 45 e0             	mov    -0x20(%ebp),%eax
 808df18:	c9                   	leave
 808df19:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getBleedingDamageClient @ 0x808de9e

/* SDCActiveStatusSyncCommon::getBleedingDamageClient(STSDCActiveStatusSyncDataSend*, bool, void*)
    */

int SDCActiveStatusSyncCommon::getBleedingDamageClient
              (STSDCActiveStatusSyncDataSend *param_1,bool param_2,void *param_3)

{
  int *piVar1;
  undefined3 in_stack_00000009;
  int local_1c [6];
  
  local_1c[0] = *(int *)(_param_2 + 7) / 500;
  local_1c[1] = 1;
  piVar1 = std::max<int>(local_1c + 1,local_1c);
  return (int)ROUND((float)*(int *)(_param_2 + 3) / (float)*piVar1);
}

```

---

## getBleedingDamageServer

```asm
// === 0808df1a SDCActiveStatusSyncCommon::getBleedingDamageServer  [0x0808df1a-0x808df5b] ===
 808df1a:	55                   	push   %ebp
 808df1b:	89 e5                	mov    %esp,%ebp
 808df1d:	83 ec 18             	sub    $0x18,%esp
 808df20:	8b 45 0c             	mov    0xc(%ebp),%eax
 808df23:	8b 40 03             	mov    0x3(%eax),%eax
 808df26:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808df29:	db 45 ec             	fildl  -0x14(%ebp)
 808df2c:	d9 5d fc             	fstps  -0x4(%ebp)
 808df2f:	d9 45 fc             	flds   -0x4(%ebp)
 808df32:	d9 05 18 4c af 08    	flds   0x8af4c18
 808df38:	de c9                	fmulp  %st,%st(1)
 808df3a:	d9 5d fc             	fstps  -0x4(%ebp)
 808df3d:	d9 45 fc             	flds   -0x4(%ebp)
 808df40:	d9 7d ea             	fnstcw -0x16(%ebp)
 808df43:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 808df47:	b4 0c                	mov    $0xc,%ah
 808df49:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 808df4d:	d9 6d e8             	fldcw  -0x18(%ebp)
 808df50:	db 5d ec             	fistpl -0x14(%ebp)
 808df53:	d9 6d ea             	fldcw  -0x16(%ebp)
 808df56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808df59:	c9                   	leave
 808df5a:	c3                   	ret
 808df5b:	90                   	nop

```

```c
// SDCActiveStatusSyncCommon::getBleedingDamageServer @ 0x808df1a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SDCActiveStatusSyncCommon::getBleedingDamageServer(STSDCActiveStatusSyncDataSend*) */

int __thiscall
SDCActiveStatusSyncCommon::getBleedingDamageServer
          (SDCActiveStatusSyncCommon *this,STSDCActiveStatusSyncDataSend *param_1)

{
  return (int)ROUND(_DAT_08af4c18 * (float)*(int *)(param_1 + 3));
}

```

---

## getBurnDamage

```asm
// === 0808de08 SDCActiveStatusSyncCommon::getBurnDamage  [0x0808de08-0x808de9d] ===
 808de08:	55                   	push   %ebp
 808de09:	89 e5                	mov    %esp,%ebp
 808de0b:	83 ec 38             	sub    $0x38,%esp
 808de0e:	8b 45 10             	mov    0x10(%ebp),%eax
 808de11:	8b 40 07             	mov    0x7(%eax),%eax
 808de14:	8b 55 10             	mov    0x10(%ebp),%edx
 808de17:	8b 52 03             	mov    0x3(%edx),%edx
 808de1a:	89 55 e0             	mov    %edx,-0x20(%ebp)
 808de1d:	db 45 e0             	fildl  -0x20(%ebp)
 808de20:	89 44 24 0c          	mov    %eax,0xc(%esp)
 808de24:	8b 45 18             	mov    0x18(%ebp),%eax
 808de27:	89 44 24 08          	mov    %eax,0x8(%esp)
 808de2b:	d9 5c 24 04          	fstps  0x4(%esp)
 808de2f:	b8 00 00 00 00       	mov    $0x0,%eax
 808de34:	89 04 24             	mov    %eax,(%esp)
 808de37:	e8 85 46 80 00       	call   88924c1 <_Z26GetUniformVelocityFloatSDCffii>
 808de3c:	d9 5d f4             	fstps  -0xc(%ebp)
 808de3f:	8b 45 10             	mov    0x10(%ebp),%eax
 808de42:	8b 40 03             	mov    0x3(%eax),%eax
 808de45:	85 c0                	test   %eax,%eax
 808de47:	7e 06                	jle    808de4f <_ZN25SDCActiveStatusSyncCommon13getBurnDamageERbP29STSDCActiveStatusSyncDataSendPvi+0x47>
 808de49:	8b 45 0c             	mov    0xc(%ebp),%eax
 808de4c:	c6 00 00             	movb   $0x0,(%eax)
 808de4f:	8b 45 10             	mov    0x10(%ebp),%eax
 808de52:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 808de56:	84 c0                	test   %al,%al
 808de58:	74 26                	je     808de80 <_ZN25SDCActiveStatusSyncCommon13getBurnDamageERbP29STSDCActiveStatusSyncDataSendPvi+0x78>
 808de5a:	8b 45 10             	mov    0x10(%ebp),%eax
 808de5d:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 808de61:	3c 0a                	cmp    $0xa,%al
 808de63:	0f 94 c0             	sete   %al
 808de66:	0f b6 c0             	movzbl %al,%eax
 808de69:	89 44 24 04          	mov    %eax,0x4(%esp)
 808de6d:	8b 45 08             	mov    0x8(%ebp),%eax
 808de70:	89 04 24             	mov    %eax,(%esp)
 808de73:	e8 e4 00 00 00       	call   808df5c <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb>
 808de78:	d9 45 f4             	flds   -0xc(%ebp)
 808de7b:	de c9                	fmulp  %st,%st(1)
 808de7d:	d9 5d f4             	fstps  -0xc(%ebp)
 808de80:	d9 45 f4             	flds   -0xc(%ebp)
 808de83:	d9 7d e6             	fnstcw -0x1a(%ebp)
 808de86:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 808de8a:	b4 0c                	mov    $0xc,%ah
 808de8c:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 808de90:	d9 6d e4             	fldcw  -0x1c(%ebp)
 808de93:	db 5d e0             	fistpl -0x20(%ebp)
 808de96:	d9 6d e6             	fldcw  -0x1a(%ebp)
 808de99:	8b 45 e0             	mov    -0x20(%ebp),%eax
 808de9c:	c9                   	leave
 808de9d:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getBurnDamage @ 0x808de08

/* SDCActiveStatusSyncCommon::getBurnDamage(bool&, STSDCActiveStatusSyncDataSend*, void*, int) */

int __thiscall
SDCActiveStatusSyncCommon::getBurnDamage
          (SDCActiveStatusSyncCommon *this,bool *param_1,STSDCActiveStatusSyncDataSend *param_2,
          void *param_3,int param_4)

{
  longdouble lVar1;
  float local_10;
  
  lVar1 = (longdouble)
          GetUniformVelocityFloatSDC(0.0,(float)*(int *)(param_2 + 3),param_4,*(int *)(param_2 + 7))
  ;
  local_10 = (float)lVar1;
  if (0 < *(int *)(param_2 + 3)) {
    *param_1 = false;
  }
  if (param_2[0xc] != (STSDCActiveStatusSyncDataSend)0x0) {
    lVar1 = (longdouble)
            getUserToUserDamageRate(this,param_2[0xb] == (STSDCActiveStatusSyncDataSend)0xa);
    local_10 = (float)((longdouble)local_10 * lVar1);
  }
  return (int)ROUND(local_10);
}

```

---

## getDiseaseDamage

```asm
// === 0808dd5c SDCActiveStatusSyncCommon::getDiseaseDamage  [0x0808dd5c-0x808de07] ===
 808dd5c:	55                   	push   %ebp
 808dd5d:	89 e5                	mov    %esp,%ebp
 808dd5f:	83 ec 38             	sub    $0x38,%esp
 808dd62:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dd65:	8b 40 1d             	mov    0x1d(%eax),%eax
 808dd68:	83 f8 63             	cmp    $0x63,%eax
 808dd6b:	7e 0a                	jle    808dd77 <_ZN25SDCActiveStatusSyncCommon16getDiseaseDamageEP29STSDCActiveStatusSyncDataSendi+0x1b>
 808dd6d:	b8 00 00 00 00       	mov    $0x0,%eax
 808dd72:	e9 8f 00 00 00       	jmp    808de06 <_ZN25SDCActiveStatusSyncCommon16getDiseaseDamageEP29STSDCActiveStatusSyncDataSendi+0xaa>
 808dd77:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dd7a:	8b 40 07             	mov    0x7(%eax),%eax
 808dd7d:	8b 55 0c             	mov    0xc(%ebp),%edx
 808dd80:	8b 52 03             	mov    0x3(%edx),%edx
 808dd83:	89 55 e0             	mov    %edx,-0x20(%ebp)
 808dd86:	db 45 e0             	fildl  -0x20(%ebp)
 808dd89:	89 44 24 0c          	mov    %eax,0xc(%esp)
 808dd8d:	8b 45 10             	mov    0x10(%ebp),%eax
 808dd90:	89 44 24 08          	mov    %eax,0x8(%esp)
 808dd94:	d9 5c 24 04          	fstps  0x4(%esp)
 808dd98:	b8 00 00 00 00       	mov    $0x0,%eax
 808dd9d:	89 04 24             	mov    %eax,(%esp)
 808dda0:	e8 1c 47 80 00       	call   88924c1 <_Z26GetUniformVelocityFloatSDCffii>
 808dda5:	d9 7d e6             	fnstcw -0x1a(%ebp)
 808dda8:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 808ddac:	b4 0c                	mov    $0xc,%ah
 808ddae:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 808ddb2:	d9 6d e4             	fldcw  -0x1c(%ebp)
 808ddb5:	db 5d f4             	fistpl -0xc(%ebp)
 808ddb8:	d9 6d e6             	fldcw  -0x1a(%ebp)
 808ddbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 808ddbe:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 808ddc2:	84 c0                	test   %al,%al
 808ddc4:	74 3d                	je     808de03 <_ZN25SDCActiveStatusSyncCommon16getDiseaseDamageEP29STSDCActiveStatusSyncDataSendi+0xa7>
 808ddc6:	db 45 f4             	fildl  -0xc(%ebp)
 808ddc9:	d9 5d dc             	fstps  -0x24(%ebp)
 808ddcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 808ddcf:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 808ddd3:	3c 0a                	cmp    $0xa,%al
 808ddd5:	0f 94 c0             	sete   %al
 808ddd8:	0f b6 c0             	movzbl %al,%eax
 808dddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dddf:	8b 45 08             	mov    0x8(%ebp),%eax
 808dde2:	89 04 24             	mov    %eax,(%esp)
 808dde5:	e8 72 01 00 00       	call   808df5c <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb>
 808ddea:	d8 4d dc             	fmuls  -0x24(%ebp)
 808dded:	d9 7d e6             	fnstcw -0x1a(%ebp)
 808ddf0:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 808ddf4:	b4 0c                	mov    $0xc,%ah
 808ddf6:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 808ddfa:	d9 6d e4             	fldcw  -0x1c(%ebp)
 808ddfd:	db 5d f4             	fistpl -0xc(%ebp)
 808de00:	d9 6d e6             	fldcw  -0x1a(%ebp)
 808de03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808de06:	c9                   	leave
 808de07:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getDiseaseDamage @ 0x808dd5c

/* SDCActiveStatusSyncCommon::getDiseaseDamage(STSDCActiveStatusSyncDataSend*, int) */

int __thiscall
SDCActiveStatusSyncCommon::getDiseaseDamage
          (SDCActiveStatusSyncCommon *this,STSDCActiveStatusSyncDataSend *param_1,int param_2)

{
  int iVar1;
  longdouble lVar2;
  
  if (*(int *)(param_1 + 0x1d) < 100) {
    lVar2 = (longdouble)
            GetUniformVelocityFloatSDC
                      (0.0,(float)*(int *)(param_1 + 3),param_2,*(int *)(param_1 + 7));
    iVar1 = (int)ROUND(lVar2);
    if (param_1[0xc] != (STSDCActiveStatusSyncDataSend)0x0) {
      lVar2 = (longdouble)
              getUserToUserDamageRate(this,param_1[0xb] == (STSDCActiveStatusSyncDataSend)0xa);
      iVar1 = (int)ROUND(lVar2 * (longdouble)iVar1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## getDuration

```asm
// === 0808dc7a SDCActiveStatusSyncCommon::getDuration  [0x0808dc7a-0x808dcc3] ===
 808dc7a:	55                   	push   %ebp
 808dc7b:	89 e5                	mov    %esp,%ebp
 808dc7d:	53                   	push   %ebx
 808dc7e:	83 ec 34             	sub    $0x34,%esp
 808dc81:	8b 45 14             	mov    0x14(%ebp),%eax
 808dc84:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808dc87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808dc8a:	8b 58 31             	mov    0x31(%eax),%ebx
 808dc8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808dc90:	8b 48 2d             	mov    0x2d(%eax),%ecx
 808dc93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808dc96:	8b 50 29             	mov    0x29(%eax),%edx
 808dc99:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dc9c:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 808dca0:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 808dca4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 808dca8:	8b 55 10             	mov    0x10(%ebp),%edx
 808dcab:	89 54 24 08          	mov    %edx,0x8(%esp)
 808dcaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dcb3:	8b 45 08             	mov    0x8(%ebp),%eax
 808dcb6:	89 04 24             	mov    %eax,(%esp)
 808dcb9:	e8 b4 f5 ff ff       	call   808d272 <_ZN25SDCActiveStatusSyncCommon29getActiveStatusDurationServerEiiiii>
 808dcbe:	83 c4 34             	add    $0x34,%esp
 808dcc1:	5b                   	pop    %ebx
 808dcc2:	5d                   	pop    %ebp
 808dcc3:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getDuration @ 0x808dc7a

/* SDCActiveStatusSyncCommon::getDuration(ENUM_ACTIVESTATUS, int, void*) */

void __thiscall
SDCActiveStatusSyncCommon::getDuration
          (SDCActiveStatusSyncCommon *this,int param_2,int param_3,int param_4)

{
  getActiveStatusDurationServer
            (this,param_2,param_3,*(int *)(param_4 + 0x29),*(int *)(param_4 + 0x2d),
             *(int *)(param_4 + 0x31));
  return;
}

```

---

## getPoisonDamage

```asm
// === 0808dcc4 SDCActiveStatusSyncCommon::getPoisonDamage  [0x0808dcc4-0x808dd5b] ===
 808dcc4:	55                   	push   %ebp
 808dcc5:	89 e5                	mov    %esp,%ebp
 808dcc7:	83 ec 38             	sub    $0x38,%esp
 808dcca:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dccd:	8b 40 1d             	mov    0x1d(%eax),%eax
 808dcd0:	83 f8 63             	cmp    $0x63,%eax
 808dcd3:	7e 07                	jle    808dcdc <_ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi+0x18>
 808dcd5:	b8 00 00 00 00       	mov    $0x0,%eax
 808dcda:	eb 7e                	jmp    808dd5a <_ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi+0x96>
 808dcdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dcdf:	8b 40 07             	mov    0x7(%eax),%eax
 808dce2:	8b 55 0c             	mov    0xc(%ebp),%edx
 808dce5:	8b 52 03             	mov    0x3(%edx),%edx
 808dce8:	89 55 e0             	mov    %edx,-0x20(%ebp)
 808dceb:	db 45 e0             	fildl  -0x20(%ebp)
 808dcee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 808dcf2:	8b 45 14             	mov    0x14(%ebp),%eax
 808dcf5:	89 44 24 08          	mov    %eax,0x8(%esp)
 808dcf9:	d9 5c 24 04          	fstps  0x4(%esp)
 808dcfd:	b8 00 00 00 00       	mov    $0x0,%eax
 808dd02:	89 04 24             	mov    %eax,(%esp)
 808dd05:	e8 b7 47 80 00       	call   88924c1 <_Z26GetUniformVelocityFloatSDCffii>
 808dd0a:	d9 5d f4             	fstps  -0xc(%ebp)
 808dd0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dd10:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 808dd14:	84 c0                	test   %al,%al
 808dd16:	74 26                	je     808dd3e <_ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi+0x7a>
 808dd18:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dd1b:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 808dd1f:	3c 0a                	cmp    $0xa,%al
 808dd21:	0f 94 c0             	sete   %al
 808dd24:	0f b6 c0             	movzbl %al,%eax
 808dd27:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dd2b:	8b 45 08             	mov    0x8(%ebp),%eax
 808dd2e:	89 04 24             	mov    %eax,(%esp)
 808dd31:	e8 26 02 00 00       	call   808df5c <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb>
 808dd36:	d9 45 f4             	flds   -0xc(%ebp)
 808dd39:	de c9                	fmulp  %st,%st(1)
 808dd3b:	d9 5d f4             	fstps  -0xc(%ebp)
 808dd3e:	d9 45 f4             	flds   -0xc(%ebp)
 808dd41:	d9 7d e6             	fnstcw -0x1a(%ebp)
 808dd44:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 808dd48:	b4 0c                	mov    $0xc,%ah
 808dd4a:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 808dd4e:	d9 6d e4             	fldcw  -0x1c(%ebp)
 808dd51:	db 5d e0             	fistpl -0x20(%ebp)
 808dd54:	d9 6d e6             	fldcw  -0x1a(%ebp)
 808dd57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 808dd5a:	c9                   	leave
 808dd5b:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getPoisonDamage @ 0x808dcc4

/* SDCActiveStatusSyncCommon::getPoisonDamage(STSDCActiveStatusSyncDataSend*, void*, int) */

int __thiscall
SDCActiveStatusSyncCommon::getPoisonDamage
          (SDCActiveStatusSyncCommon *this,STSDCActiveStatusSyncDataSend *param_1,void *param_2,
          int param_3)

{
  int iVar1;
  longdouble lVar2;
  float local_10;
  
  if (*(int *)(param_1 + 0x1d) < 100) {
    lVar2 = (longdouble)
            GetUniformVelocityFloatSDC
                      (0.0,(float)*(int *)(param_1 + 3),param_3,*(int *)(param_1 + 7));
    local_10 = (float)lVar2;
    if (param_1[0xc] != (STSDCActiveStatusSyncDataSend)0x0) {
      lVar2 = (longdouble)
              getUserToUserDamageRate(this,param_1[0xb] == (STSDCActiveStatusSyncDataSend)0xa);
      local_10 = (float)((longdouble)local_10 * lVar2);
    }
    iVar1 = (int)ROUND(local_10);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## getUserToUserDamageRate

```asm
// === 0808df5c SDCActiveStatusSyncCommon::getUserToUserDamageRate  [0x0808df5c-0x808df81] ===
 808df5c:	55                   	push   %ebp
 808df5d:	89 e5                	mov    %esp,%ebp
 808df5f:	83 ec 08             	sub    $0x8,%esp
 808df62:	8b 45 0c             	mov    0xc(%ebp),%eax
 808df65:	88 45 fc             	mov    %al,-0x4(%ebp)
 808df68:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 808df6c:	74 07                	je     808df75 <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb+0x19>
 808df6e:	a1 90 e4 36 09       	mov    0x936e490,%eax
 808df73:	eb 05                	jmp    808df7a <_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb+0x1e>
 808df75:	a1 8c e4 36 09       	mov    0x936e48c,%eax
 808df7a:	89 45 f8             	mov    %eax,-0x8(%ebp)
 808df7d:	d9 45 f8             	flds   -0x8(%ebp)
 808df80:	c9                   	leave
 808df81:	c3                   	ret

```

```c
// SDCActiveStatusSyncCommon::getUserToUserDamageRate @ 0x808df5c

/* SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getUserToUserDamageRate(SDCActiveStatusSyncCommon *this,bool param_1)

{
  float fVar1;
  
  fVar1 = ACTIVESTATUS_USER_TO_USER_DAMAGE_RATE;
  if (param_1) {
    fVar1 = ACTIVESTATUS_USER_TO_USER_DAMAGE_RATE_DEATH_TOWER;
  }
  return (longdouble)fVar1;
}

```

---

## makeEtcParameters

```asm
// === 0808d4b4 SDCActiveStatusSyncCommon::makeEtcParameters  [0x0808d4b4-0x808d50d] ===
 808d4b4:	55                   	push   %ebp
 808d4b5:	89 e5                	mov    %esp,%ebp
 808d4b7:	83 ec 28             	sub    $0x28,%esp
 808d4ba:	8b 45 18             	mov    0x18(%ebp),%eax
 808d4bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808d4c0:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 808d4c4:	74 25                	je     808d4eb <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiPvPSt6vectorIiSaIiEEPi+0x37>
 808d4c6:	8b 45 14             	mov    0x14(%ebp),%eax
 808d4c9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 808d4cd:	8b 45 10             	mov    0x10(%ebp),%eax
 808d4d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 808d4d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d4d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d4db:	8b 45 08             	mov    0x8(%ebp),%eax
 808d4de:	89 04 24             	mov    %eax,(%esp)
 808d4e1:	e8 94 07 00 00       	call   808dc7a <_ZN25SDCActiveStatusSyncCommon11getDurationE17ENUM_ACTIVESTATUSiPv>
 808d4e6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 808d4e9:	89 02                	mov    %eax,(%edx)
 808d4eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808d4ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 808d4f2:	8b 45 10             	mov    0x10(%ebp),%eax
 808d4f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 808d4f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d4fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d500:	8b 45 08             	mov    0x8(%ebp),%eax
 808d503:	89 04 24             	mov    %eax,(%esp)
 808d506:	e8 03 00 00 00       	call   808d50e <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE>
 808d50b:	c9                   	leave
 808d50c:	c3                   	ret
 808d50d:	90                   	nop

```

```c
// SDCActiveStatusSyncCommon::makeEtcParameters @ 0x808d4b4

/* SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, void*, std::vector<int,
   std::allocator<int> >*, int*) */

void __thiscall
SDCActiveStatusSyncCommon::makeEtcParameters
          (SDCActiveStatusSyncCommon *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  if (param_6 != (undefined4 *)0x0) {
    uVar1 = getDuration(this,param_2,param_3,param_4);
    *param_6 = uVar1;
  }
  makeEtcParameters(this,param_2,param_3,param_5);
  return;
}

```

---

## makeEtcParameters_0808d50e

```asm
// === 0808d50e SDCActiveStatusSyncCommon::makeEtcParameters  [0x0808d50e-0x808dc79] ===
 808d50e:	55                   	push   %ebp
 808d50f:	89 e5                	mov    %esp,%ebp
 808d511:	81 ec 98 00 00 00    	sub    $0x98,%esp
 808d517:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d51a:	83 f8 11             	cmp    $0x11,%eax
 808d51d:	0f 87 54 07 00 00    	ja     808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d523:	8b 04 85 e8 45 af 08 	mov    0x8af45e8(,%eax,4),%eax
 808d52a:	ff e0                	jmp    *%eax
 808d52c:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d52f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d536:	00 
 808d537:	8b 55 10             	mov    0x10(%ebp),%edx
 808d53a:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d53e:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d542:	8b 45 08             	mov    0x8(%ebp),%eax
 808d545:	89 04 24             	mov    %eax,(%esp)
 808d548:	e8 f1 fe ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d54d:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d550:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d554:	b4 0c                	mov    $0xc,%ah
 808d556:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d55a:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d55d:	db 5d 80             	fistpl -0x80(%ebp)
 808d560:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d563:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d566:	89 45 94             	mov    %eax,-0x6c(%ebp)
 808d569:	8d 45 94             	lea    -0x6c(%ebp),%eax
 808d56c:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d570:	8b 45 14             	mov    0x14(%ebp),%eax
 808d573:	89 04 24             	mov    %eax,(%esp)
 808d576:	e8 73 0c 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d57b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d57e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 808d585:	00 
 808d586:	8b 55 10             	mov    0x10(%ebp),%edx
 808d589:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d58d:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d591:	8b 45 08             	mov    0x8(%ebp),%eax
 808d594:	89 04 24             	mov    %eax,(%esp)
 808d597:	e8 a2 fe ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d59c:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d59f:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d5a3:	b4 0c                	mov    $0xc,%ah
 808d5a5:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d5a9:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d5ac:	db 5d 80             	fistpl -0x80(%ebp)
 808d5af:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d5b2:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d5b5:	89 45 98             	mov    %eax,-0x68(%ebp)
 808d5b8:	8d 45 98             	lea    -0x68(%ebp),%eax
 808d5bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d5bf:	8b 45 14             	mov    0x14(%ebp),%eax
 808d5c2:	89 04 24             	mov    %eax,(%esp)
 808d5c5:	e8 24 0c 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d5ca:	e9 a8 06 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d5cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d5d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d5d9:	00 
 808d5da:	8b 55 10             	mov    0x10(%ebp),%edx
 808d5dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d5e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d5e5:	8b 45 08             	mov    0x8(%ebp),%eax
 808d5e8:	89 04 24             	mov    %eax,(%esp)
 808d5eb:	e8 4e fe ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d5f0:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d5f3:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d5f7:	b4 0c                	mov    $0xc,%ah
 808d5f9:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d5fd:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d600:	db 5d 80             	fistpl -0x80(%ebp)
 808d603:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d606:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d609:	89 45 9c             	mov    %eax,-0x64(%ebp)
 808d60c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 808d60f:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d613:	8b 45 14             	mov    0x14(%ebp),%eax
 808d616:	89 04 24             	mov    %eax,(%esp)
 808d619:	e8 d0 0b 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d61e:	e9 54 06 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d623:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d626:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d62d:	00 
 808d62e:	8b 55 10             	mov    0x10(%ebp),%edx
 808d631:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d635:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d639:	8b 45 08             	mov    0x8(%ebp),%eax
 808d63c:	89 04 24             	mov    %eax,(%esp)
 808d63f:	e8 fa fd ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d644:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d647:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d64b:	b4 0c                	mov    $0xc,%ah
 808d64d:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d651:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d654:	db 5d 80             	fistpl -0x80(%ebp)
 808d657:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d65a:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d65d:	89 45 a0             	mov    %eax,-0x60(%ebp)
 808d660:	8d 45 a0             	lea    -0x60(%ebp),%eax
 808d663:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d667:	8b 45 14             	mov    0x14(%ebp),%eax
 808d66a:	89 04 24             	mov    %eax,(%esp)
 808d66d:	e8 7c 0b 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d672:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d675:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 808d67c:	00 
 808d67d:	8b 55 10             	mov    0x10(%ebp),%edx
 808d680:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d684:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d688:	8b 45 08             	mov    0x8(%ebp),%eax
 808d68b:	89 04 24             	mov    %eax,(%esp)
 808d68e:	e8 ab fd ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d693:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d696:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d69a:	b4 0c                	mov    $0xc,%ah
 808d69c:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d6a0:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d6a3:	db 5d 80             	fistpl -0x80(%ebp)
 808d6a6:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d6a9:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d6ac:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 808d6af:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 808d6b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d6b6:	8b 45 14             	mov    0x14(%ebp),%eax
 808d6b9:	89 04 24             	mov    %eax,(%esp)
 808d6bc:	e8 2d 0b 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d6c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d6c4:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 808d6cb:	00 
 808d6cc:	8b 55 10             	mov    0x10(%ebp),%edx
 808d6cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d6d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d6d7:	8b 45 08             	mov    0x8(%ebp),%eax
 808d6da:	89 04 24             	mov    %eax,(%esp)
 808d6dd:	e8 5c fd ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d6e2:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d6e5:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d6e9:	b4 0c                	mov    $0xc,%ah
 808d6eb:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d6ef:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d6f2:	db 5d 80             	fistpl -0x80(%ebp)
 808d6f5:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d6f8:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d6fb:	89 45 a8             	mov    %eax,-0x58(%ebp)
 808d6fe:	8d 45 a8             	lea    -0x58(%ebp),%eax
 808d701:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d705:	8b 45 14             	mov    0x14(%ebp),%eax
 808d708:	89 04 24             	mov    %eax,(%esp)
 808d70b:	e8 de 0a 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d710:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d713:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 808d71a:	00 
 808d71b:	8b 55 10             	mov    0x10(%ebp),%edx
 808d71e:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d722:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d726:	8b 45 08             	mov    0x8(%ebp),%eax
 808d729:	89 04 24             	mov    %eax,(%esp)
 808d72c:	e8 0d fd ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d731:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d734:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d738:	b4 0c                	mov    $0xc,%ah
 808d73a:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d73e:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d741:	db 5d 80             	fistpl -0x80(%ebp)
 808d744:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d747:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d74a:	89 45 ac             	mov    %eax,-0x54(%ebp)
 808d74d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 808d750:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d754:	8b 45 14             	mov    0x14(%ebp),%eax
 808d757:	89 04 24             	mov    %eax,(%esp)
 808d75a:	e8 8f 0a 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d75f:	e9 13 05 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d764:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d767:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d76e:	00 
 808d76f:	8b 55 10             	mov    0x10(%ebp),%edx
 808d772:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d776:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d77a:	8b 45 08             	mov    0x8(%ebp),%eax
 808d77d:	89 04 24             	mov    %eax,(%esp)
 808d780:	e8 b9 fc ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d785:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d788:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d78c:	b4 0c                	mov    $0xc,%ah
 808d78e:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d792:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d795:	db 5d 80             	fistpl -0x80(%ebp)
 808d798:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d79b:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d79e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 808d7a1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 808d7a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d7a8:	8b 45 14             	mov    0x14(%ebp),%eax
 808d7ab:	89 04 24             	mov    %eax,(%esp)
 808d7ae:	e8 3b 0a 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d7b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d7b6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 808d7bd:	00 
 808d7be:	8b 55 10             	mov    0x10(%ebp),%edx
 808d7c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d7c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d7c9:	8b 45 08             	mov    0x8(%ebp),%eax
 808d7cc:	89 04 24             	mov    %eax,(%esp)
 808d7cf:	e8 6a fc ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d7d4:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d7d7:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d7db:	b4 0c                	mov    $0xc,%ah
 808d7dd:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d7e1:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d7e4:	db 5d 80             	fistpl -0x80(%ebp)
 808d7e7:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d7ea:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d7ed:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 808d7f0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 808d7f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d7f7:	8b 45 14             	mov    0x14(%ebp),%eax
 808d7fa:	89 04 24             	mov    %eax,(%esp)
 808d7fd:	e8 ec 09 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d802:	e9 70 04 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d807:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d80a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d811:	00 
 808d812:	8b 55 10             	mov    0x10(%ebp),%edx
 808d815:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d819:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d81d:	8b 45 08             	mov    0x8(%ebp),%eax
 808d820:	89 04 24             	mov    %eax,(%esp)
 808d823:	e8 16 fc ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d828:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d82b:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d82f:	b4 0c                	mov    $0xc,%ah
 808d831:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d835:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d838:	db 5d 80             	fistpl -0x80(%ebp)
 808d83b:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d83e:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d841:	89 45 b8             	mov    %eax,-0x48(%ebp)
 808d844:	8d 45 b8             	lea    -0x48(%ebp),%eax
 808d847:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d84b:	8b 45 14             	mov    0x14(%ebp),%eax
 808d84e:	89 04 24             	mov    %eax,(%esp)
 808d851:	e8 98 09 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d856:	e9 1c 04 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d85b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d85e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d865:	00 
 808d866:	8b 55 10             	mov    0x10(%ebp),%edx
 808d869:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d86d:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d871:	8b 45 08             	mov    0x8(%ebp),%eax
 808d874:	89 04 24             	mov    %eax,(%esp)
 808d877:	e8 c2 fb ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d87c:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d87f:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d883:	b4 0c                	mov    $0xc,%ah
 808d885:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d889:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d88c:	db 5d 80             	fistpl -0x80(%ebp)
 808d88f:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d892:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d895:	89 45 bc             	mov    %eax,-0x44(%ebp)
 808d898:	8d 45 bc             	lea    -0x44(%ebp),%eax
 808d89b:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d89f:	8b 45 14             	mov    0x14(%ebp),%eax
 808d8a2:	89 04 24             	mov    %eax,(%esp)
 808d8a5:	e8 44 09 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d8aa:	e9 c8 03 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d8af:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d8b2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d8b9:	00 
 808d8ba:	8b 55 10             	mov    0x10(%ebp),%edx
 808d8bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d8c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d8c5:	8b 45 08             	mov    0x8(%ebp),%eax
 808d8c8:	89 04 24             	mov    %eax,(%esp)
 808d8cb:	e8 6e fb ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d8d0:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d8d3:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d8d7:	b4 0c                	mov    $0xc,%ah
 808d8d9:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d8dd:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d8e0:	db 5d 80             	fistpl -0x80(%ebp)
 808d8e3:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d8e6:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d8e9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 808d8ec:	8d 45 c0             	lea    -0x40(%ebp),%eax
 808d8ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d8f3:	8b 45 14             	mov    0x14(%ebp),%eax
 808d8f6:	89 04 24             	mov    %eax,(%esp)
 808d8f9:	e8 f0 08 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d8fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d901:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 808d908:	00 
 808d909:	8b 55 10             	mov    0x10(%ebp),%edx
 808d90c:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d910:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d914:	8b 45 08             	mov    0x8(%ebp),%eax
 808d917:	89 04 24             	mov    %eax,(%esp)
 808d91a:	e8 1f fb ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d91f:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d922:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d926:	b4 0c                	mov    $0xc,%ah
 808d928:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d92c:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d92f:	db 5d 80             	fistpl -0x80(%ebp)
 808d932:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d935:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d938:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 808d93b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 808d93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d942:	8b 45 14             	mov    0x14(%ebp),%eax
 808d945:	89 04 24             	mov    %eax,(%esp)
 808d948:	e8 a1 08 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d94d:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 808d954:	8d 45 c8             	lea    -0x38(%ebp),%eax
 808d957:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d95b:	8b 45 14             	mov    0x14(%ebp),%eax
 808d95e:	89 04 24             	mov    %eax,(%esp)
 808d961:	e8 88 08 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d966:	c7 45 cc b8 0b 00 00 	movl   $0xbb8,-0x34(%ebp)
 808d96d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 808d970:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d974:	8b 45 14             	mov    0x14(%ebp),%eax
 808d977:	89 04 24             	mov    %eax,(%esp)
 808d97a:	e8 6f 08 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d97f:	e9 f3 02 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d984:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d987:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d98e:	00 
 808d98f:	8b 55 10             	mov    0x10(%ebp),%edx
 808d992:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d996:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d99a:	8b 45 08             	mov    0x8(%ebp),%eax
 808d99d:	89 04 24             	mov    %eax,(%esp)
 808d9a0:	e8 99 fa ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d9a5:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d9a8:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808d9ac:	b4 0c                	mov    $0xc,%ah
 808d9ae:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808d9b2:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808d9b5:	db 5d 80             	fistpl -0x80(%ebp)
 808d9b8:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808d9bb:	8b 45 80             	mov    -0x80(%ebp),%eax
 808d9be:	89 45 d0             	mov    %eax,-0x30(%ebp)
 808d9c1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 808d9c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d9c8:	8b 45 14             	mov    0x14(%ebp),%eax
 808d9cb:	89 04 24             	mov    %eax,(%esp)
 808d9ce:	e8 1b 08 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808d9d3:	e9 9f 02 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808d9d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 808d9db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808d9e2:	00 
 808d9e3:	8b 55 10             	mov    0x10(%ebp),%edx
 808d9e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 808d9ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 808d9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 808d9f1:	89 04 24             	mov    %eax,(%esp)
 808d9f4:	e8 45 fa ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808d9f9:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808d9fc:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808da00:	b4 0c                	mov    $0xc,%ah
 808da02:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808da06:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808da09:	db 5d 80             	fistpl -0x80(%ebp)
 808da0c:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808da0f:	8b 45 80             	mov    -0x80(%ebp),%eax
 808da12:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 808da15:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 808da18:	89 44 24 04          	mov    %eax,0x4(%esp)
 808da1c:	8b 45 14             	mov    0x14(%ebp),%eax
 808da1f:	89 04 24             	mov    %eax,(%esp)
 808da22:	e8 c7 07 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808da27:	e9 4b 02 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808da2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 808da2f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808da36:	00 
 808da37:	8b 55 10             	mov    0x10(%ebp),%edx
 808da3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 808da3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 808da42:	8b 45 08             	mov    0x8(%ebp),%eax
 808da45:	89 04 24             	mov    %eax,(%esp)
 808da48:	e8 f1 f9 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808da4d:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808da50:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808da54:	b4 0c                	mov    $0xc,%ah
 808da56:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808da5a:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808da5d:	db 5d 80             	fistpl -0x80(%ebp)
 808da60:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808da63:	8b 45 80             	mov    -0x80(%ebp),%eax
 808da66:	89 45 d8             	mov    %eax,-0x28(%ebp)
 808da69:	8d 45 d8             	lea    -0x28(%ebp),%eax
 808da6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 808da70:	8b 45 14             	mov    0x14(%ebp),%eax
 808da73:	89 04 24             	mov    %eax,(%esp)
 808da76:	e8 73 07 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808da7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808da7e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 808da85:	00 
 808da86:	8b 55 10             	mov    0x10(%ebp),%edx
 808da89:	89 54 24 08          	mov    %edx,0x8(%esp)
 808da8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 808da91:	8b 45 08             	mov    0x8(%ebp),%eax
 808da94:	89 04 24             	mov    %eax,(%esp)
 808da97:	e8 a2 f9 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808da9c:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808da9f:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808daa3:	b4 0c                	mov    $0xc,%ah
 808daa5:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808daa9:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808daac:	db 5d 80             	fistpl -0x80(%ebp)
 808daaf:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808dab2:	8b 45 80             	mov    -0x80(%ebp),%eax
 808dab5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 808dab8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 808dabb:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dabf:	8b 45 14             	mov    0x14(%ebp),%eax
 808dac2:	89 04 24             	mov    %eax,(%esp)
 808dac5:	e8 24 07 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808daca:	e9 a8 01 00 00       	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808dacf:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dad2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808dad9:	00 
 808dada:	8b 55 10             	mov    0x10(%ebp),%edx
 808dadd:	89 54 24 08          	mov    %edx,0x8(%esp)
 808dae1:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dae5:	8b 45 08             	mov    0x8(%ebp),%eax
 808dae8:	89 04 24             	mov    %eax,(%esp)
 808daeb:	e8 4e f9 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808daf0:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808daf3:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808daf7:	b4 0c                	mov    $0xc,%ah
 808daf9:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808dafd:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808db00:	db 5d 80             	fistpl -0x80(%ebp)
 808db03:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808db06:	8b 45 80             	mov    -0x80(%ebp),%eax
 808db09:	89 45 e0             	mov    %eax,-0x20(%ebp)
 808db0c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 808db0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 808db13:	8b 45 14             	mov    0x14(%ebp),%eax
 808db16:	89 04 24             	mov    %eax,(%esp)
 808db19:	e8 d0 06 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808db1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 808db21:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 808db28:	00 
 808db29:	8b 55 10             	mov    0x10(%ebp),%edx
 808db2c:	89 54 24 08          	mov    %edx,0x8(%esp)
 808db30:	89 44 24 04          	mov    %eax,0x4(%esp)
 808db34:	8b 45 08             	mov    0x8(%ebp),%eax
 808db37:	89 04 24             	mov    %eax,(%esp)
 808db3a:	e8 ff f8 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808db3f:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808db42:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808db46:	b4 0c                	mov    $0xc,%ah
 808db48:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808db4c:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808db4f:	db 5d 80             	fistpl -0x80(%ebp)
 808db52:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808db55:	8b 45 80             	mov    -0x80(%ebp),%eax
 808db58:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 808db5b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 808db5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 808db62:	8b 45 14             	mov    0x14(%ebp),%eax
 808db65:	89 04 24             	mov    %eax,(%esp)
 808db68:	e8 81 06 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808db6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 808db70:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 808db77:	00 
 808db78:	8b 55 10             	mov    0x10(%ebp),%edx
 808db7b:	89 54 24 08          	mov    %edx,0x8(%esp)
 808db7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 808db83:	8b 45 08             	mov    0x8(%ebp),%eax
 808db86:	89 04 24             	mov    %eax,(%esp)
 808db89:	e8 b0 f8 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808db8e:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808db91:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808db95:	b4 0c                	mov    $0xc,%ah
 808db97:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808db9b:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808db9e:	db 5d 80             	fistpl -0x80(%ebp)
 808dba1:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808dba4:	8b 45 80             	mov    -0x80(%ebp),%eax
 808dba7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 808dbaa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 808dbad:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dbb1:	8b 45 14             	mov    0x14(%ebp),%eax
 808dbb4:	89 04 24             	mov    %eax,(%esp)
 808dbb7:	e8 32 06 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808dbbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dbbf:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 808dbc6:	00 
 808dbc7:	8b 55 10             	mov    0x10(%ebp),%edx
 808dbca:	89 54 24 08          	mov    %edx,0x8(%esp)
 808dbce:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dbd2:	8b 45 08             	mov    0x8(%ebp),%eax
 808dbd5:	89 04 24             	mov    %eax,(%esp)
 808dbd8:	e8 61 f8 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808dbdd:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808dbe0:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808dbe4:	b4 0c                	mov    $0xc,%ah
 808dbe6:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808dbea:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808dbed:	db 5d 80             	fistpl -0x80(%ebp)
 808dbf0:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808dbf3:	8b 45 80             	mov    -0x80(%ebp),%eax
 808dbf6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808dbf9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808dbfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dc00:	8b 45 14             	mov    0x14(%ebp),%eax
 808dc03:	89 04 24             	mov    %eax,(%esp)
 808dc06:	e8 e3 05 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808dc0b:	eb 6a                	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808dc0d:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 808dc14:	8d 45 f0             	lea    -0x10(%ebp),%eax
 808dc17:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dc1b:	8b 45 14             	mov    0x14(%ebp),%eax
 808dc1e:	89 04 24             	mov    %eax,(%esp)
 808dc21:	e8 c8 05 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808dc26:	eb 4f                	jmp    808dc77 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE+0x769>
 808dc28:	8b 45 0c             	mov    0xc(%ebp),%eax
 808dc2b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 808dc32:	00 
 808dc33:	8b 55 10             	mov    0x10(%ebp),%edx
 808dc36:	89 54 24 08          	mov    %edx,0x8(%esp)
 808dc3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dc3e:	8b 45 08             	mov    0x8(%ebp),%eax
 808dc41:	89 04 24             	mov    %eax,(%esp)
 808dc44:	e8 f5 f7 ff ff       	call   808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>
 808dc49:	d9 7d 86             	fnstcw -0x7a(%ebp)
 808dc4c:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 808dc50:	b4 0c                	mov    $0xc,%ah
 808dc52:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 808dc56:	d9 6d 84             	fldcw  -0x7c(%ebp)
 808dc59:	db 5d 80             	fistpl -0x80(%ebp)
 808dc5c:	d9 6d 86             	fldcw  -0x7a(%ebp)
 808dc5f:	8b 45 80             	mov    -0x80(%ebp),%eax
 808dc62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808dc65:	8d 45 f4             	lea    -0xc(%ebp),%eax
 808dc68:	89 44 24 04          	mov    %eax,0x4(%esp)
 808dc6c:	8b 45 14             	mov    0x14(%ebp),%eax
 808dc6f:	89 04 24             	mov    %eax,(%esp)
 808dc72:	e8 77 05 00 00       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 808dc77:	c9                   	leave
 808dc78:	c3                   	ret
 808dc79:	90                   	nop

```

```c
// SDCActiveStatusSyncCommon::makeEtcParameters @ 0x808d50e

/* SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, std::vector<int,
   std::allocator<int> >&) */

void __thiscall
SDCActiveStatusSyncCommon::makeEtcParameters
          (SDCActiveStatusSyncCommon *this,int param_2,int param_3,
          vector<int,std::allocator<int>> *param_4)

{
  longdouble lVar1;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [5];
  
  switch(param_2) {
  case 0:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_70 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_70);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_6c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_6c);
    break;
  case 2:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_68 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_68);
    break;
  case 4:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_64 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_64);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_60 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_60);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,2);
    local_5c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_5c);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,3);
    local_58 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_58);
    break;
  case 5:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_54 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_54);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_50 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_50);
    break;
  case 6:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_4c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_4c);
    break;
  case 7:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_48 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_48);
    break;
  case 9:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_44 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_44);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_40[0] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40);
    local_40[1] = 1;
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40 + 1);
    local_40[2] = 3000;
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40 + 2);
    break;
  case 10:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_40[3] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40 + 3);
    break;
  case 0xb:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_30 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_30);
    break;
  case 0xc:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_2c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_2c);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_28 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_28);
    break;
  case 0xd:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_24 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_24);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_20 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_20);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,2);
    local_1c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_1c);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,3);
    local_18[0] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_18);
    break;
  case 0xf:
    local_18[1] = 1;
    std::vector<int,std::allocator<int>>::push_back(param_4,local_18 + 1);
    break;
  case 0x11:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_18[2] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_18 + 2);
  }
  return;
}

```

