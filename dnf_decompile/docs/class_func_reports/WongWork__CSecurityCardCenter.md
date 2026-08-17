# WongWork__CSecurityCardCenter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## _updateTimeCount

```asm
// === 085fe026 WongWork::CSecurityCardCenter::_updateTimeCount  [0x085fe026-0x85fe05d] ===
 85fe026:	55                   	push   %ebp
 85fe027:	89 e5                	mov    %esp,%ebp
 85fe029:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe02c:	0f b7 80 84 04 00 00 	movzwl 0x484(%eax),%eax
 85fe033:	8d 50 01             	lea    0x1(%eax),%edx
 85fe036:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe039:	66 89 90 84 04 00 00 	mov    %dx,0x484(%eax)
 85fe040:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe043:	0f b7 80 84 04 00 00 	movzwl 0x484(%eax),%eax
 85fe04a:	66 3d 4f c3          	cmp    $0xc34f,%ax
 85fe04e:	76 0c                	jbe    85fe05c <_ZN8WongWork19CSecurityCardCenter16_updateTimeCountEv+0x36>
 85fe050:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe053:	66 c7 80 84 04 00 00 	movw   $0x1,0x484(%eax)
 85fe05a:	01 00 
 85fe05c:	5d                   	pop    %ebp
 85fe05d:	c3                   	ret

```

```c
// WongWork::CSecurityCardCenter::_updateTimeCount @ 0x85fe026

/* WongWork::CSecurityCardCenter::_updateTimeCount() */

void __thiscall WongWork::CSecurityCardCenter::_updateTimeCount(CSecurityCardCenter *this)

{
  *(short *)(this + 0x484) = *(short *)(this + 0x484) + 1;
  if (49999 < *(ushort *)(this + 0x484)) {
    *(undefined2 *)(this + 0x484) = 1;
  }
  return;
}

```

---

## checkPhoneNumber

```asm
// === 085fe444 WongWork::CSecurityCardCenter::checkPhoneNumber  [0x085fe444-0x85fe495] ===
 85fe444:	55                   	push   %ebp
 85fe445:	89 e5                	mov    %esp,%ebp
 85fe447:	83 ec 10             	sub    $0x10,%esp
 85fe44a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85fe451:	eb 2c                	jmp    85fe47f <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc+0x3b>
 85fe453:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85fe456:	03 45 0c             	add    0xc(%ebp),%eax
 85fe459:	0f b6 00             	movzbl (%eax),%eax
 85fe45c:	84 c0                	test   %al,%al
 85fe45e:	74 2e                	je     85fe48e <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc+0x4a>
 85fe460:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85fe463:	03 45 0c             	add    0xc(%ebp),%eax
 85fe466:	0f b6 00             	movzbl (%eax),%eax
 85fe469:	0f be c0             	movsbl %al,%eax
 85fe46c:	83 e8 30             	sub    $0x30,%eax
 85fe46f:	83 f8 09             	cmp    $0x9,%eax
 85fe472:	76 07                	jbe    85fe47b <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc+0x37>
 85fe474:	b8 00 00 00 00       	mov    $0x0,%eax
 85fe479:	eb 19                	jmp    85fe494 <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc+0x50>
 85fe47b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85fe47f:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85fe482:	83 f8 0b             	cmp    $0xb,%eax
 85fe485:	0f 96 c0             	setbe  %al
 85fe488:	84 c0                	test   %al,%al
 85fe48a:	75 c7                	jne    85fe453 <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc+0xf>
 85fe48c:	eb 01                	jmp    85fe48f <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc+0x4b>
 85fe48e:	90                   	nop
 85fe48f:	b8 01 00 00 00       	mov    $0x1,%eax
 85fe494:	c9                   	leave
 85fe495:	c3                   	ret

```

```c
// WongWork::CSecurityCardCenter::checkPhoneNumber @ 0x85fe444

/* WongWork::CSecurityCardCenter::checkPhoneNumber(char const*) const */

undefined4 __thiscall
WongWork::CSecurityCardCenter::checkPhoneNumber(CSecurityCardCenter *this,char *param_1)

{
  uint local_8;
  
  for (local_8 = 0; (local_8 < 0xc && (param_1[local_8] != '\0')); local_8 = local_8 + 1) {
    if (9 < (int)param_1[local_8] - 0x30U) {
      return 0;
    }
  }
  return 1;
}

```

---

## encryptString

```asm
// === 085fe2e2 WongWork::CSecurityCardCenter::encryptString  [0x085fe2e2-0x85fe443] ===
 85fe2e2:	55                   	push   %ebp
 85fe2e3:	89 e5                	mov    %esp,%ebp
 85fe2e5:	57                   	push   %edi
 85fe2e6:	53                   	push   %ebx
 85fe2e7:	81 ec 20 02 00 00    	sub    $0x220,%esp
 85fe2ed:	8d 9d ec fe ff ff    	lea    -0x114(%ebp),%ebx
 85fe2f3:	b8 00 00 00 00       	mov    $0x0,%eax
 85fe2f8:	ba 40 00 00 00       	mov    $0x40,%edx
 85fe2fd:	89 df                	mov    %ebx,%edi
 85fe2ff:	89 d1                	mov    %edx,%ecx
 85fe301:	f3 ab                	rep stos %eax,%es:(%edi)
 85fe303:	8d 9d ec fd ff ff    	lea    -0x214(%ebp),%ebx
 85fe309:	b8 00 00 00 00       	mov    $0x0,%eax
 85fe30e:	ba 40 00 00 00       	mov    $0x40,%edx
 85fe313:	89 df                	mov    %ebx,%edi
 85fe315:	89 d1                	mov    %edx,%ecx
 85fe317:	f3 ab                	rep stos %eax,%es:(%edi)
 85fe319:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 85fe320:	00 
 85fe321:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe324:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe328:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 85fe32e:	89 04 24             	mov    %eax,(%esp)
 85fe331:	e8 9a f5 a7 ff       	call   807d8d0 <strncpy@plt>
 85fe336:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 85fe33c:	89 04 24             	mov    %eax,(%esp)
 85fe33f:	e8 6c 00 a8 ff       	call   807e3b0 <strlen@plt>
 85fe344:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85fe347:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85fe34e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe351:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fe358:	00 
 85fe359:	89 04 24             	mov    %eax,(%esp)
 85fe35c:	e8 b5 60 ab ff       	call   80b4416 <_ZN7IMethod12GetBlockSizeEPj>
 85fe361:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fe364:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85fe368:	78 30                	js     85fe39a <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc+0xb8>
 85fe36a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe36d:	89 c2                	mov    %eax,%edx
 85fe36f:	c1 fa 1f             	sar    $0x1f,%edx
 85fe372:	f7 7d f4             	idivl  -0xc(%ebp)
 85fe375:	89 d0                	mov    %edx,%eax
 85fe377:	85 c0                	test   %eax,%eax
 85fe379:	74 17                	je     85fe392 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc+0xb0>
 85fe37b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe37e:	89 c2                	mov    %eax,%edx
 85fe380:	c1 fa 1f             	sar    $0x1f,%edx
 85fe383:	f7 7d f4             	idivl  -0xc(%ebp)
 85fe386:	83 c0 01             	add    $0x1,%eax
 85fe389:	0f af 45 f4          	imul   -0xc(%ebp),%eax
 85fe38d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fe390:	eb 0e                	jmp    85fe3a0 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc+0xbe>
 85fe392:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe395:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fe398:	eb 06                	jmp    85fe3a0 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc+0xbe>
 85fe39a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe39d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fe3a0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85fe3a4:	78 24                	js     85fe3ca <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc+0xe8>
 85fe3a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe3a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85fe3b0:	00 
 85fe3b1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85fe3b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fe3b8:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 85fe3be:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe3c2:	89 04 24             	mov    %eax,(%esp)
 85fe3c5:	e8 dc 60 ab ff       	call   80b44a6 <_ZN7IMethod3PadEPciPj>
 85fe3ca:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85fe3cd:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe3d0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fe3d4:	8d 95 ec fd ff ff    	lea    -0x214(%ebp),%edx
 85fe3da:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fe3de:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 85fe3e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe3e8:	89 04 24             	mov    %eax,(%esp)
 85fe3eb:	e8 10 9a ab ff       	call   80b7e00 <_ZN9CRijndael7EncryptEPKcPcj>
 85fe3f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fe3f3:	01 c0                	add    %eax,%eax
 85fe3f5:	83 c0 01             	add    $0x1,%eax
 85fe3f8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85fe3fb:	8d 85 ec fd ff ff    	lea    -0x214(%ebp),%eax
 85fe401:	8b 55 10             	mov    0x10(%ebp),%edx
 85fe404:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fe408:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85fe40b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe40f:	89 04 24             	mov    %eax,(%esp)
 85fe412:	e8 5c a4 b0 ff       	call   8108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>
 85fe417:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe41a:	03 45 10             	add    0x10(%ebp),%eax
 85fe41d:	c6 00 00             	movb   $0x0,(%eax)
 85fe420:	8b 5d 10             	mov    0x10(%ebp),%ebx
 85fe423:	eb 12                	jmp    85fe437 <_ZN8WongWork19CSecurityCardCenter13encryptStringEPKcPc+0x155>
 85fe425:	89 04 24             	mov    %eax,(%esp)
 85fe428:	e8 b3 78 12 00       	call   8725ce0 <__cxa_begin_catch>
 85fe42d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85fe432:	e8 f9 77 12 00       	call   8725c30 <__cxa_end_catch>
 85fe437:	89 d8                	mov    %ebx,%eax
 85fe439:	81 c4 20 02 00 00    	add    $0x220,%esp
 85fe43f:	5b                   	pop    %ebx
 85fe440:	5f                   	pop    %edi
 85fe441:	5d                   	pop    %ebp
 85fe442:	c3                   	ret
 85fe443:	90                   	nop

```

```c
// WongWork::CSecurityCardCenter::encryptString @ 0x85fe2e2

/* WongWork::CSecurityCardCenter::encryptString(char const*, char*) */

char * __thiscall
WongWork::CSecurityCardCenter::encryptString(CSecurityCardCenter *this,char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uchar *puVar3;
  uchar local_218 [256];
  char local_118 [256];
  size_t local_18;
  size_t local_14;
  int local_10;
  
  pcVar2 = local_118;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  puVar3 = local_218;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar3[0] = '\0';
    puVar3[1] = '\0';
    puVar3[2] = '\0';
    puVar3[3] = '\0';
    puVar3 = puVar3 + 4;
  }
  strncpy(local_118,param_1,0x100);
  local_18 = strlen(local_118);
  local_14 = 0;
                    /* try { // try from 085fe35c to 085fe416 has its CatchHandler @ 085fe425 */
  local_10 = IMethod::GetBlockSize((IMethod *)this,(uint *)0x0);
  if (local_10 < 0) {
    local_14 = local_18;
  }
  else if ((int)local_18 % local_10 == 0) {
    local_14 = local_18;
  }
  else {
    local_14 = ((int)local_18 / local_10 + 1) * local_10;
  }
  if (-1 < local_10) {
    IMethod::Pad((IMethod *)this,local_118,local_18,(uint *)0x0);
  }
  CRijndael::Encrypt((CRijndael *)this,local_118,(char *)local_218,local_14);
  local_18 = local_14 * 2 + 1;
  DNFFLib::Binary2Hex(local_218,local_14,param_2);
  param_2[local_18] = '\0';
  return param_2;
}

```

---

## generateCardData

```asm
// === 085fe1ba WongWork::CSecurityCardCenter::generateCardData  [0x085fe1ba-0x85fe2e1] ===
 85fe1ba:	55                   	push   %ebp
 85fe1bb:	89 e5                	mov    %esp,%ebp
 85fe1bd:	56                   	push   %esi
 85fe1be:	53                   	push   %ebx
 85fe1bf:	83 ec 40             	sub    $0x40,%esp
 85fe1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe1c5:	05 7c 04 00 00       	add    $0x47c,%eax
 85fe1ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe1ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fe1d1:	89 04 24             	mov    %eax,(%esp)
 85fe1d4:	e8 19 03 00 00       	call   85fe4f2 <_ZNSt4listIhSaIhEEC1ERKS1_>
 85fe1d9:	c7 45 e8 26 00 00 00 	movl   $0x26,-0x18(%ebp)
 85fe1e0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85fe1e7:	e9 b0 00 00 00       	jmp    85fe29c <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc+0xe2>
 85fe1ec:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85fe1f3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fe1f6:	89 04 24             	mov    %eax,(%esp)
 85fe1f9:	e8 36 87 ea ff       	call   84a6934 <_ZNKSt4listIhSaIhEE4sizeEv>
 85fe1fe:	89 04 24             	mov    %eax,(%esp)
 85fe201:	e8 81 39 0b 00       	call   86b1b87 <_Z12get_rand_inti>
 85fe206:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fe209:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85fe20c:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85fe20f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe213:	89 04 24             	mov    %eax,(%esp)
 85fe216:	e8 01 8f ea ff       	call   84a711c <_ZNSt4listIhSaIhEE5beginEv>
 85fe21b:	83 ec 04             	sub    $0x4,%esp
 85fe21e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85fe221:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85fe224:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe228:	89 04 24             	mov    %eax,(%esp)
 85fe22b:	e8 b2 8b ea ff       	call   84a6de2 <_ZNSt4listIhSaIhEE3endEv>
 85fe230:	83 ec 04             	sub    $0x4,%esp
 85fe233:	eb 4d                	jmp    85fe282 <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc+0xc8>
 85fe235:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fe238:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85fe23b:	75 36                	jne    85fe273 <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc+0xb9>
 85fe23d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe240:	89 c3                	mov    %eax,%ebx
 85fe242:	03 5d 0c             	add    0xc(%ebp),%ebx
 85fe245:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85fe248:	89 04 24             	mov    %eax,(%esp)
 85fe24b:	e8 94 03 00 00       	call   85fe5e4 <_ZNKSt14_List_iteratorIhEdeEv>
 85fe250:	0f b6 00             	movzbl (%eax),%eax
 85fe253:	88 03                	mov    %al,(%ebx)
 85fe255:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fe258:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85fe25b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fe25f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85fe262:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe266:	89 04 24             	mov    %eax,(%esp)
 85fe269:	e8 84 03 00 00       	call   85fe5f2 <_ZNSt4listIhSaIhEE5eraseESt14_List_iteratorIhE>
 85fe26e:	83 ec 04             	sub    $0x4,%esp
 85fe271:	eb 25                	jmp    85fe298 <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc+0xde>
 85fe273:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85fe277:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85fe27a:	89 04 24             	mov    %eax,(%esp)
 85fe27d:	e8 4e 03 00 00       	call   85fe5d0 <_ZNSt14_List_iteratorIhEppEv>
 85fe282:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85fe285:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fe289:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85fe28c:	89 04 24             	mov    %eax,(%esp)
 85fe28f:	e8 28 03 00 00       	call   85fe5bc <_ZNKSt14_List_iteratorIhEneERKS0_>
 85fe294:	84 c0                	test   %al,%al
 85fe296:	75 9d                	jne    85fe235 <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc+0x7b>
 85fe298:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85fe29c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fe29f:	83 f8 25             	cmp    $0x25,%eax
 85fe2a2:	0f 96 c0             	setbe  %al
 85fe2a5:	84 c0                	test   %al,%al
 85fe2a7:	0f 85 3f ff ff ff    	jne    85fe1ec <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc+0x32>
 85fe2ad:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85fe2b0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fe2b3:	89 04 24             	mov    %eax,(%esp)
 85fe2b6:	e8 af 81 ea ff       	call   84a646a <_ZNSt4listIhSaIhEED1Ev>
 85fe2bb:	89 d8                	mov    %ebx,%eax
 85fe2bd:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85fe2c0:	83 c4 00             	add    $0x0,%esp
 85fe2c3:	5b                   	pop    %ebx
 85fe2c4:	5e                   	pop    %esi
 85fe2c5:	5d                   	pop    %ebp
 85fe2c6:	c3                   	ret
 85fe2c7:	89 d3                	mov    %edx,%ebx
 85fe2c9:	89 c6                	mov    %eax,%esi
 85fe2cb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fe2ce:	89 04 24             	mov    %eax,(%esp)
 85fe2d1:	e8 94 81 ea ff       	call   84a646a <_ZNSt4listIhSaIhEED1Ev>
 85fe2d6:	89 f0                	mov    %esi,%eax
 85fe2d8:	89 da                	mov    %ebx,%edx
 85fe2da:	89 04 24             	mov    %eax,(%esp)
 85fe2dd:	e8 6e 54 4e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WongWork::CSecurityCardCenter::generateCardData @ 0x85fe1ba

/* WongWork::CSecurityCardCenter::generateCardData(char*) const */

char * __thiscall
WongWork::CSecurityCardCenter::generateCardData(CSecurityCardCenter *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  _List_iterator local_30 [4];
  undefined4 local_2c;
  list<unsigned_char,std::allocator<unsigned_char>> local_28 [8];
  undefined1 local_20 [4];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  std::list<unsigned_char,std::allocator<unsigned_char>>::list(local_28,(list *)(this + 0x47c));
  local_1c = 0x26;
  local_18 = 0;
  do {
    if (0x25 < local_18) {
      std::list<unsigned_char,std::allocator<unsigned_char>>::~list(local_28);
      return param_1;
    }
    local_14 = 0;
                    /* try { // try from 085fe1f9 to 085fe26d has its CatchHandler @ 085fe2c7 */
    iVar2 = std::list<unsigned_char,std::allocator<unsigned_char>>::size();
    local_10 = get_rand_int(iVar2);
    std::list<unsigned_char,std::allocator<unsigned_char>>::begin();
    std::list<unsigned_char,std::allocator<unsigned_char>>::end();
    while( true ) {
      cVar1 = std::_List_iterator<unsigned_char>::operator!=
                        ((_List_iterator<unsigned_char> *)&local_2c,local_30);
      if (cVar1 == '\0') break;
      if (local_14 == local_10) {
        pcVar4 = param_1 + local_18;
        pcVar3 = (char *)std::_List_iterator<unsigned_char>::operator*
                                   ((_List_iterator<unsigned_char> *)&local_2c);
        *pcVar4 = *pcVar3;
        std::list<unsigned_char,std::allocator<unsigned_char>>::erase(local_20,local_28,local_2c);
        break;
      }
      local_14 = local_14 + 1;
      std::_List_iterator<unsigned_char>::operator++((_List_iterator<unsigned_char> *)&local_2c);
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## generateCertKey

```asm
// === 085fe17e WongWork::CSecurityCardCenter::generateCertKey  [0x085fe17e-0x85fe1b9] ===
 85fe17e:	55                   	push   %ebp
 85fe17f:	89 e5                	mov    %esp,%ebp
 85fe181:	83 ec 18             	sub    $0x18,%esp
 85fe184:	c7 04 24 8f 5f 01 00 	movl   $0x15f8f,(%esp)
 85fe18b:	e8 f7 39 0b 00       	call   86b1b87 <_Z12get_rand_inti>
 85fe190:	05 10 27 00 00       	add    $0x2710,%eax
 85fe195:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fe199:	c7 44 24 08 8a 57 cd 	movl   $0x8cd578a,0x8(%esp)
 85fe1a0:	08 
 85fe1a1:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 85fe1a8:	00 
 85fe1a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe1ac:	89 04 24             	mov    %eax,(%esp)
 85fe1af:	e8 68 e6 f8 ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 85fe1b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe1b7:	c9                   	leave
 85fe1b8:	c3                   	ret
 85fe1b9:	90                   	nop

```

```c
// WongWork::CSecurityCardCenter::generateCertKey @ 0x85fe17e

/* WongWork::CSecurityCardCenter::generateCertKey(char*) */

char * __thiscall
WongWork::CSecurityCardCenter::generateCertKey(CSecurityCardCenter *this,char *param_1)

{
  int iVar1;
  
  iVar1 = get_rand_int(89999);
  OS_API::snprintf(param_1,6,"%d",iVar1 + 10000);
  return param_1;
}

```

---

## generateServerKey

```asm
// === 085fe0ec WongWork::CSecurityCardCenter::generateServerKey  [0x085fe0ec-0x85fe17d] ===
 85fe0ec:	55                   	push   %ebp
 85fe0ed:	89 e5                	mov    %esp,%ebp
 85fe0ef:	57                   	push   %edi
 85fe0f0:	56                   	push   %esi
 85fe0f1:	53                   	push   %ebx
 85fe0f2:	83 ec 3c             	sub    $0x3c,%esp
 85fe0f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe0f8:	89 04 24             	mov    %eax,(%esp)
 85fe0fb:	e8 26 ff ff ff       	call   85fe026 <_ZN8WongWork19CSecurityCardCenter16_updateTimeCountEv>
 85fe100:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85fe107:	e8 92 db ac ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85fe10c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85fe10f:	c7 04 24 9f 86 01 00 	movl   $0x1869f,(%esp)
 85fe116:	e8 6c 3a 0b 00       	call   86b1b87 <_Z12get_rand_inti>
 85fe11b:	89 c3                	mov    %eax,%ebx
 85fe11d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe120:	0f b7 80 84 04 00 00 	movzwl 0x484(%eax),%eax
 85fe127:	0f b7 f8             	movzwl %ax,%edi
 85fe12a:	e8 52 e0 ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 85fe12f:	8b b0 b0 01 00 00    	mov    0x1b0(%eax),%esi
 85fe135:	e8 47 e0 ac ff       	call   80cc181 <_Z14G_CEnvironmentv>
 85fe13a:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 85fe140:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 85fe144:	89 7c 24 18          	mov    %edi,0x18(%esp)
 85fe148:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85fe14b:	89 54 24 14          	mov    %edx,0x14(%esp)
 85fe14f:	89 74 24 10          	mov    %esi,0x10(%esp)
 85fe153:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fe157:	c7 44 24 08 74 57 cd 	movl   $0x8cd5774,0x8(%esp)
 85fe15e:	08 
 85fe15f:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 85fe166:	00 
 85fe167:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe16a:	89 04 24             	mov    %eax,(%esp)
 85fe16d:	e8 aa e6 f8 ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 85fe172:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fe175:	83 c4 3c             	add    $0x3c,%esp
 85fe178:	5b                   	pop    %ebx
 85fe179:	5e                   	pop    %esi
 85fe17a:	5f                   	pop    %edi
 85fe17b:	5d                   	pop    %ebp
 85fe17c:	c3                   	ret
 85fe17d:	90                   	nop

```

```c
// WongWork::CSecurityCardCenter::generateServerKey @ 0x85fe0ec

/* WongWork::CSecurityCardCenter::generateServerKey(char*) */

char * __thiscall
WongWork::CSecurityCardCenter::generateServerKey(CSecurityCardCenter *this,char *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  _updateTimeCount(this);
  uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  uVar4 = get_rand_int(99999);
  uVar1 = *(ushort *)(this + 0x484);
  iVar5 = G_CEnvironment();
  uVar2 = *(undefined4 *)(iVar5 + 0x1b0);
  iVar5 = G_CEnvironment();
  OS_API::snprintf(param_1,0x21,"%02d%02d%010d%05d%05d",*(undefined4 *)(iVar5 + 0x378),uVar2,uVar3,
                   (uint)uVar1,uVar4);
  return param_1;
}

```

---

## init

```asm
// === 085fe05e WongWork::CSecurityCardCenter::init  [0x085fe05e-0x85fe0eb] ===
 85fe05e:	55                   	push   %ebp
 85fe05f:	89 e5                	mov    %esp,%ebp
 85fe061:	83 ec 38             	sub    $0x38,%esp
 85fe064:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe067:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85fe06e:	00 
 85fe06f:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85fe076:	00 
 85fe077:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 85fe07e:	00 
 85fe07f:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 85fe086:	00 
 85fe087:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 85fe08e:	08 
 85fe08f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 85fe096:	00 
 85fe097:	c7 44 24 04 63 57 cd 	movl   $0x8cd5763,0x4(%esp)
 85fe09e:	08 
 85fe09f:	89 04 24             	mov    %eax,(%esp)
 85fe0a2:	e8 79 81 ab ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 85fe0a7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85fe0ae:	eb 21                	jmp    85fe0d1 <_ZN8WongWork19CSecurityCardCenter4initEv+0x73>
 85fe0b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fe0b3:	8d 90 e0 c1 3a 09    	lea    0x93ac1e0(%eax),%edx
 85fe0b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe0bc:	05 7c 04 00 00       	add    $0x47c,%eax
 85fe0c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fe0c5:	89 04 24             	mov    %eax,(%esp)
 85fe0c8:	e8 e3 85 ea ff       	call   84a66b0 <_ZNSt4listIhSaIhEE9push_backERKh>
 85fe0cd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85fe0d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fe0d4:	83 f8 29             	cmp    $0x29,%eax
 85fe0d7:	0f 96 c0             	setbe  %al
 85fe0da:	84 c0                	test   %al,%al
 85fe0dc:	75 d2                	jne    85fe0b0 <_ZN8WongWork19CSecurityCardCenter4initEv+0x52>
 85fe0de:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe0e1:	66 c7 80 84 04 00 00 	movw   $0x1,0x484(%eax)
 85fe0e8:	01 00 
 85fe0ea:	c9                   	leave
 85fe0eb:	c3                   	ret

```

```c
// WongWork::CSecurityCardCenter::init @ 0x85fe05e

/* WongWork::CSecurityCardCenter::init() */

void __thiscall WongWork::CSecurityCardCenter::init(CSecurityCardCenter *this)

{
  uint local_10;
  
  CRijndael::Initialize
            ((CRijndael *)this,"n6;fw;vjfs0fuguf",0x10,CRijndael::sm_chain0,0x10,0x10,0,0);
  for (local_10 = 0; local_10 < 0x2a; local_10 = local_10 + 1) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::push_back
              ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x47c),
               (uchar *)(init()::characterSet + local_10));
  }
  *(undefined2 *)(this + 0x484) = 1;
  return;
}

```

