# CNChecksumMd5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CNChecksumMd5

```asm
// === 0809830c CNChecksumMd5::CNChecksumMd5  [0x0809830c-0x809836f] ===
 809830c:	55                   	push   %ebp
 809830d:	89 e5                	mov    %esp,%ebp
 809830f:	56                   	push   %esi
 8098310:	53                   	push   %ebx
 8098311:	83 ec 10             	sub    $0x10,%esp
 8098314:	8b 45 08             	mov    0x8(%ebp),%eax
 8098317:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 809831e:	00 
 809831f:	89 04 24             	mov    %eax,(%esp)
 8098322:	e8 49 5b 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 8098327:	8b 45 08             	mov    0x8(%ebp),%eax
 809832a:	c7 00 08 35 b1 08    	movl   $0x8b13508,(%eax)
 8098330:	8b 45 08             	mov    0x8(%ebp),%eax
 8098333:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809833a:	c7 04 24 d8 00 00 00 	movl   $0xd8,(%esp)
 8098341:	e8 0a c1 68 00       	call   8724450 <_Znwj>
 8098346:	89 c2                	mov    %eax,%edx
 8098348:	8b 45 08             	mov    0x8(%ebp),%eax
 809834b:	89 50 08             	mov    %edx,0x8(%eax)
 809834e:	83 c4 10             	add    $0x10,%esp
 8098351:	5b                   	pop    %ebx
 8098352:	5e                   	pop    %esi
 8098353:	5d                   	pop    %ebp
 8098354:	c3                   	ret
 8098355:	89 d3                	mov    %edx,%ebx
 8098357:	89 c6                	mov    %eax,%esi
 8098359:	8b 45 08             	mov    0x8(%ebp),%eax
 809835c:	89 04 24             	mov    %eax,(%esp)
 809835f:	e8 24 5b 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098364:	89 f0                	mov    %esi,%eax
 8098366:	89 da                	mov    %ebx,%edx
 8098368:	89 04 24             	mov    %eax,(%esp)
 809836b:	e8 e0 b3 a4 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CNChecksumMd5::CNChecksumMd5 @ 0x809830c

/* CNChecksumMd5::CNChecksumMd5() */

void __thiscall CNChecksumMd5::CNChecksumMd5(CNChecksumMd5 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,0);
  *(undefined ***)this = &PTR__CNChecksumMd5_08b13508;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08098341 to 08098345 has its CatchHandler @ 08098355 */
  pvVar1 = operator_new(0xd8);
  *(void **)(this + 8) = pvVar1;
  return;
}

```

---

## ChecksumFinish

```asm
// === 08098656 CNChecksumMd5::ChecksumFinish  [0x08098656-0x80986ab] ===
 8098656:	55                   	push   %ebp
 8098657:	89 e5                	mov    %esp,%ebp
 8098659:	83 ec 18             	sub    $0x18,%esp
 809865c:	8b 45 08             	mov    0x8(%ebp),%eax
 809865f:	8b 40 08             	mov    0x8(%eax),%eax
 8098662:	85 c0                	test   %eax,%eax
 8098664:	75 07                	jne    809866d <_ZN13CNChecksumMd514ChecksumFinishEPhi+0x17>
 8098666:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809866b:	eb 3d                	jmp    80986aa <_ZN13CNChecksumMd514ChecksumFinishEPhi+0x54>
 809866d:	8b 45 08             	mov    0x8(%ebp),%eax
 8098670:	8b 00                	mov    (%eax),%eax
 8098672:	83 c0 20             	add    $0x20,%eax
 8098675:	8b 10                	mov    (%eax),%edx
 8098677:	8b 45 08             	mov    0x8(%ebp),%eax
 809867a:	89 04 24             	mov    %eax,(%esp)
 809867d:	ff d2                	call   *%edx
 809867f:	3b 45 10             	cmp    0x10(%ebp),%eax
 8098682:	0f 9f c0             	setg   %al
 8098685:	84 c0                	test   %al,%al
 8098687:	74 07                	je     8098690 <_ZN13CNChecksumMd514ChecksumFinishEPhi+0x3a>
 8098689:	b8 01 00 00 70       	mov    $0x70000001,%eax
 809868e:	eb 1a                	jmp    80986aa <_ZN13CNChecksumMd514ChecksumFinishEPhi+0x54>
 8098690:	8b 45 08             	mov    0x8(%ebp),%eax
 8098693:	8b 40 08             	mov    0x8(%eax),%eax
 8098696:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098699:	89 54 24 04          	mov    %edx,0x4(%esp)
 809869d:	89 04 24             	mov    %eax,(%esp)
 80986a0:	e8 e8 b4 01 00       	call   80b3b8d <_Z10md5_finishP11md5_contextPh>
 80986a5:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80986aa:	c9                   	leave
 80986ab:	c3                   	ret

```

```c
// CNChecksumMd5::ChecksumFinish @ 0x8098656

/* CNChecksumMd5::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall CNChecksumMd5::ChecksumFinish(CNChecksumMd5 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      md5_finish(*(md5_context **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## ChecksumStart

```asm
// === 080985f0 CNChecksumMd5::ChecksumStart  [0x080985f0-0x809861b] ===
 80985f0:	55                   	push   %ebp
 80985f1:	89 e5                	mov    %esp,%ebp
 80985f3:	83 ec 18             	sub    $0x18,%esp
 80985f6:	8b 45 08             	mov    0x8(%ebp),%eax
 80985f9:	8b 40 08             	mov    0x8(%eax),%eax
 80985fc:	85 c0                	test   %eax,%eax
 80985fe:	75 07                	jne    8098607 <_ZN13CNChecksumMd513ChecksumStartEv+0x17>
 8098600:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098605:	eb 13                	jmp    809861a <_ZN13CNChecksumMd513ChecksumStartEv+0x2a>
 8098607:	8b 45 08             	mov    0x8(%ebp),%eax
 809860a:	8b 40 08             	mov    0x8(%eax),%eax
 809860d:	89 04 24             	mov    %eax,(%esp)
 8098610:	e8 cb a4 01 00       	call   80b2ae0 <_Z10md5_startsP11md5_context>
 8098615:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809861a:	c9                   	leave
 809861b:	c3                   	ret

```

```c
// CNChecksumMd5::ChecksumStart @ 0x80985f0

/* CNChecksumMd5::ChecksumStart() */

undefined4 __thiscall CNChecksumMd5::ChecksumStart(CNChecksumMd5 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    md5_starts(*(md5_context **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## ChecksumUpdate

```asm
// === 0809861c CNChecksumMd5::ChecksumUpdate  [0x0809861c-0x8098655] ===
 809861c:	55                   	push   %ebp
 809861d:	89 e5                	mov    %esp,%ebp
 809861f:	83 ec 18             	sub    $0x18,%esp
 8098622:	8b 45 08             	mov    0x8(%ebp),%eax
 8098625:	8b 40 08             	mov    0x8(%eax),%eax
 8098628:	85 c0                	test   %eax,%eax
 809862a:	75 07                	jne    8098633 <_ZN13CNChecksumMd514ChecksumUpdateEPKhi+0x17>
 809862c:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098631:	eb 21                	jmp    8098654 <_ZN13CNChecksumMd514ChecksumUpdateEPKhi+0x38>
 8098633:	8b 45 08             	mov    0x8(%ebp),%eax
 8098636:	8b 40 08             	mov    0x8(%eax),%eax
 8098639:	8b 55 10             	mov    0x10(%ebp),%edx
 809863c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098640:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098643:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098647:	89 04 24             	mov    %eax,(%esp)
 809864a:	e8 3e b4 01 00       	call   80b3a8d <_Z10md5_updateP11md5_contextPhi>
 809864f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098654:	c9                   	leave
 8098655:	c3                   	ret

```

```c
// CNChecksumMd5::ChecksumUpdate @ 0x809861c

/* CNChecksumMd5::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall CNChecksumMd5::ChecksumUpdate(CNChecksumMd5 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    md5_update(*(md5_context **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## GetChecksumSize

```asm
// === 080986ac CNChecksumMd5::GetChecksumSize  [0x080986ac-0x80986b7] ===
 80986ac:	55                   	push   %ebp
 80986ad:	89 e5                	mov    %esp,%ebp
 80986af:	b8 10 00 00 00       	mov    $0x10,%eax
 80986b4:	5d                   	pop    %ebp
 80986b5:	c3                   	ret
 80986b6:	90                   	nop
 80986b7:	90                   	nop

```

```c
// CNChecksumMd5::GetChecksumSize @ 0x80986ac

/* CNChecksumMd5::GetChecksumSize() const */

undefined4 CNChecksumMd5::GetChecksumSize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 080983e0 CNChecksumMd5::Initialize  [0x080983e0-0x80983e9] ===
 80983e0:	55                   	push   %ebp
 80983e1:	89 e5                	mov    %esp,%ebp
 80983e3:	b8 17 00 00 70       	mov    $0x70000017,%eax
 80983e8:	5d                   	pop    %ebp
 80983e9:	c3                   	ret

```

```c
// CNChecksumMd5::Initialize @ 0x80983e0

/* CNChecksumMd5::Initialize(unsigned char const*, int) */

undefined4 CNChecksumMd5::Initialize(uchar *param_1,int param_2)

{
  return 0x70000017;
}

```

---

## MakeChecksumFromFile

```asm
// === 0809846a CNChecksumMd5::MakeChecksumFromFile  [0x0809846a-0x80985ef] ===
 809846a:	55                   	push   %ebp
 809846b:	89 e5                	mov    %esp,%ebp
 809846d:	81 ec 28 04 00 00    	sub    $0x428,%esp
 8098473:	8b 45 08             	mov    0x8(%ebp),%eax
 8098476:	8b 40 08             	mov    0x8(%eax),%eax
 8098479:	85 c0                	test   %eax,%eax
 809847b:	75 0a                	jne    8098487 <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x1d>
 809847d:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098482:	e9 66 01 00 00       	jmp    80985ed <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x183>
 8098487:	8b 45 08             	mov    0x8(%ebp),%eax
 809848a:	8b 00                	mov    (%eax),%eax
 809848c:	83 c0 20             	add    $0x20,%eax
 809848f:	8b 10                	mov    (%eax),%edx
 8098491:	8b 45 08             	mov    0x8(%ebp),%eax
 8098494:	89 04 24             	mov    %eax,(%esp)
 8098497:	ff d2                	call   *%edx
 8098499:	3b 45 14             	cmp    0x14(%ebp),%eax
 809849c:	0f 9f c0             	setg   %al
 809849f:	84 c0                	test   %al,%al
 80984a1:	74 0a                	je     80984ad <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x43>
 80984a3:	b8 01 00 00 70       	mov    $0x70000001,%eax
 80984a8:	e9 40 01 00 00       	jmp    80985ed <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x183>
 80984ad:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80984b1:	75 0a                	jne    80984bd <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x53>
 80984b3:	b8 03 00 00 70       	mov    $0x70000003,%eax
 80984b8:	e9 30 01 00 00       	jmp    80985ed <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x183>
 80984bd:	c7 44 24 04 f0 34 b1 	movl   $0x8b134f0,0x4(%esp)
 80984c4:	08 
 80984c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80984c8:	89 04 24             	mov    %eax,(%esp)
 80984cb:	e8 a0 62 fe ff       	call   807e770 <fopen@plt>
 80984d0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80984d3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80984d7:	75 0a                	jne    80984e3 <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x79>
 80984d9:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80984de:	e9 0a 01 00 00       	jmp    80985ed <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x183>
 80984e3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 80984ea:	00 
 80984eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80984f2:	00 
 80984f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80984f6:	89 04 24             	mov    %eax,(%esp)
 80984f9:	e8 b2 5b fe ff       	call   807e0b0 <fseek@plt>
 80984fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098501:	89 04 24             	mov    %eax,(%esp)
 8098504:	e8 c7 54 fe ff       	call   807d9d0 <ftell@plt>
 8098509:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809850c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8098510:	79 15                	jns    8098527 <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0xbd>
 8098512:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098515:	89 04 24             	mov    %eax,(%esp)
 8098518:	e8 83 59 fe ff       	call   807dea0 <fclose@plt>
 809851d:	b8 03 00 00 70       	mov    $0x70000003,%eax
 8098522:	e9 c6 00 00 00       	jmp    80985ed <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x183>
 8098527:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 809852e:	00 
 809852f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8098536:	00 
 8098537:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809853a:	89 04 24             	mov    %eax,(%esp)
 809853d:	e8 6e 5b fe ff       	call   807e0b0 <fseek@plt>
 8098542:	8b 45 08             	mov    0x8(%ebp),%eax
 8098545:	8b 40 08             	mov    0x8(%eax),%eax
 8098548:	89 04 24             	mov    %eax,(%esp)
 809854b:	e8 90 a5 01 00       	call   80b2ae0 <_Z10md5_startsP11md5_context>
 8098550:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8098557:	eb 62                	jmp    80985bb <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x151>
 8098559:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809855c:	2b 45 f4             	sub    -0xc(%ebp),%eax
 809855f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8098562:	81 7d f0 00 04 00 00 	cmpl   $0x400,-0x10(%ebp)
 8098569:	76 07                	jbe    8098572 <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0x108>
 809856b:	c7 45 f0 00 04 00 00 	movl   $0x400,-0x10(%ebp)
 8098572:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098575:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8098579:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8098580:	00 
 8098581:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8098584:	89 44 24 04          	mov    %eax,0x4(%esp)
 8098588:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 809858e:	89 04 24             	mov    %eax,(%esp)
 8098591:	e8 ba 57 fe ff       	call   807dd50 <fread@plt>
 8098596:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8098599:	8b 45 08             	mov    0x8(%ebp),%eax
 809859c:	8b 40 08             	mov    0x8(%eax),%eax
 809859f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80985a3:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 80985a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80985ad:	89 04 24             	mov    %eax,(%esp)
 80985b0:	e8 d8 b4 01 00       	call   80b3a8d <_Z10md5_updateP11md5_contextPhi>
 80985b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80985b8:	01 45 f4             	add    %eax,-0xc(%ebp)
 80985bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80985be:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80985c1:	0f 97 c0             	seta   %al
 80985c4:	84 c0                	test   %al,%al
 80985c6:	75 91                	jne    8098559 <_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi+0xef>
 80985c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80985cb:	8b 40 08             	mov    0x8(%eax),%eax
 80985ce:	8b 55 10             	mov    0x10(%ebp),%edx
 80985d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80985d5:	89 04 24             	mov    %eax,(%esp)
 80985d8:	e8 b0 b5 01 00       	call   80b3b8d <_Z10md5_finishP11md5_contextPh>
 80985dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80985e0:	89 04 24             	mov    %eax,(%esp)
 80985e3:	e8 b8 58 fe ff       	call   807dea0 <fclose@plt>
 80985e8:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80985ed:	c9                   	leave
 80985ee:	c3                   	ret
 80985ef:	90                   	nop

```

```c
// CNChecksumMd5::MakeChecksumFromFile @ 0x809846a

/* CNChecksumMd5::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumMd5::MakeChecksumFromFile(CNChecksumMd5 *this,char *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_41c [1024];
  FILE *local_1c;
  uint local_18;
  size_t local_14;
  uint local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_3 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_1 == (char *)0x0) {
      uVar1 = 0x70000003;
    }
    else {
      local_1c = fopen(param_1,"rb");
      if (local_1c == (FILE *)0x0) {
        uVar1 = 0x70000002;
      }
      else {
        fseek(local_1c,0,2);
        local_18 = ftell(local_1c);
        if ((int)local_18 < 0) {
          fclose(local_1c);
          uVar1 = 0x70000003;
        }
        else {
          fseek(local_1c,0,0);
          md5_starts(*(md5_context **)(this + 8));
          for (local_10 = 0; local_10 < local_18; local_10 = local_10 + local_14) {
            local_14 = local_18 - local_10;
            if (0x400 < local_14) {
              local_14 = 0x400;
            }
            fread(local_41c,local_14,1,local_1c);
            md5_update(*(md5_context **)(this + 8),local_41c,local_14);
          }
          md5_finish(*(md5_context **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}

```

---

## MakeChecksumFromMemory

```asm
// === 080983ea CNChecksumMd5::MakeChecksumFromMemory  [0x080983ea-0x8098469] ===
 80983ea:	55                   	push   %ebp
 80983eb:	89 e5                	mov    %esp,%ebp
 80983ed:	83 ec 18             	sub    $0x18,%esp
 80983f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80983f3:	8b 40 08             	mov    0x8(%eax),%eax
 80983f6:	85 c0                	test   %eax,%eax
 80983f8:	75 07                	jne    8098401 <_ZN13CNChecksumMd522MakeChecksumFromMemoryEPKhiPhi+0x17>
 80983fa:	b8 00 00 00 70       	mov    $0x70000000,%eax
 80983ff:	eb 67                	jmp    8098468 <_ZN13CNChecksumMd522MakeChecksumFromMemoryEPKhiPhi+0x7e>
 8098401:	8b 45 08             	mov    0x8(%ebp),%eax
 8098404:	8b 00                	mov    (%eax),%eax
 8098406:	83 c0 20             	add    $0x20,%eax
 8098409:	8b 10                	mov    (%eax),%edx
 809840b:	8b 45 08             	mov    0x8(%ebp),%eax
 809840e:	89 04 24             	mov    %eax,(%esp)
 8098411:	ff d2                	call   *%edx
 8098413:	3b 45 18             	cmp    0x18(%ebp),%eax
 8098416:	0f 9f c0             	setg   %al
 8098419:	84 c0                	test   %al,%al
 809841b:	74 07                	je     8098424 <_ZN13CNChecksumMd522MakeChecksumFromMemoryEPKhiPhi+0x3a>
 809841d:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8098422:	eb 44                	jmp    8098468 <_ZN13CNChecksumMd522MakeChecksumFromMemoryEPKhiPhi+0x7e>
 8098424:	8b 45 08             	mov    0x8(%ebp),%eax
 8098427:	8b 40 08             	mov    0x8(%eax),%eax
 809842a:	89 04 24             	mov    %eax,(%esp)
 809842d:	e8 ae a6 01 00       	call   80b2ae0 <_Z10md5_startsP11md5_context>
 8098432:	8b 45 08             	mov    0x8(%ebp),%eax
 8098435:	8b 40 08             	mov    0x8(%eax),%eax
 8098438:	8b 55 10             	mov    0x10(%ebp),%edx
 809843b:	89 54 24 08          	mov    %edx,0x8(%esp)
 809843f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098442:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098446:	89 04 24             	mov    %eax,(%esp)
 8098449:	e8 3f b6 01 00       	call   80b3a8d <_Z10md5_updateP11md5_contextPhi>
 809844e:	8b 45 08             	mov    0x8(%ebp),%eax
 8098451:	8b 40 08             	mov    0x8(%eax),%eax
 8098454:	8b 55 14             	mov    0x14(%ebp),%edx
 8098457:	89 54 24 04          	mov    %edx,0x4(%esp)
 809845b:	89 04 24             	mov    %eax,(%esp)
 809845e:	e8 2a b7 01 00       	call   80b3b8d <_Z10md5_finishP11md5_contextPh>
 8098463:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098468:	c9                   	leave
 8098469:	c3                   	ret

```

```c
// CNChecksumMd5::MakeChecksumFromMemory @ 0x80983ea

/* CNChecksumMd5::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumMd5::MakeChecksumFromMemory
          (CNChecksumMd5 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_4 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      md5_starts(*(md5_context **)(this + 8));
      md5_update(*(md5_context **)(this + 8),param_1,param_2);
      md5_finish(*(md5_context **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## ~CNChecksumMd5

```asm
// === 08098370 CNChecksumMd5::~CNChecksumMd5  [0x08098370-0x80983c1] ===
 8098370:	55                   	push   %ebp
 8098371:	89 e5                	mov    %esp,%ebp
 8098373:	83 ec 18             	sub    $0x18,%esp
 8098376:	8b 45 08             	mov    0x8(%ebp),%eax
 8098379:	c7 00 08 35 b1 08    	movl   $0x8b13508,(%eax)
 809837f:	8b 45 08             	mov    0x8(%ebp),%eax
 8098382:	8b 40 08             	mov    0x8(%eax),%eax
 8098385:	85 c0                	test   %eax,%eax
 8098387:	74 18                	je     80983a1 <_ZN13CNChecksumMd5D1Ev+0x31>
 8098389:	8b 45 08             	mov    0x8(%ebp),%eax
 809838c:	8b 40 08             	mov    0x8(%eax),%eax
 809838f:	89 04 24             	mov    %eax,(%esp)
 8098392:	e8 59 c1 68 00       	call   87244f0 <_ZdlPv>
 8098397:	8b 45 08             	mov    0x8(%ebp),%eax
 809839a:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80983a1:	8b 45 08             	mov    0x8(%ebp),%eax
 80983a4:	89 04 24             	mov    %eax,(%esp)
 80983a7:	e8 dc 5a 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 80983ac:	b8 00 00 00 00       	mov    $0x0,%eax
 80983b1:	84 c0                	test   %al,%al
 80983b3:	74 0b                	je     80983c0 <_ZN13CNChecksumMd5D1Ev+0x50>
 80983b5:	8b 45 08             	mov    0x8(%ebp),%eax
 80983b8:	89 04 24             	mov    %eax,(%esp)
 80983bb:	e8 30 c1 68 00       	call   87244f0 <_ZdlPv>
 80983c0:	c9                   	leave
 80983c1:	c3                   	ret

```

```c
// CNChecksumMd5::~CNChecksumMd5 @ 0x8098370

/* WARNING: Removing unreachable block (ram,0x080983b5) */
/* CNChecksumMd5::~CNChecksumMd5() */

void __thiscall CNChecksumMd5::~CNChecksumMd5(CNChecksumMd5 *this)

{
  *(undefined ***)this = &PTR__CNChecksumMd5_08b13508;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}

```

---

## ~CNChecksumMd5_080983c2

```asm
// === 080983c2 CNChecksumMd5::~CNChecksumMd5  [0x080983c2-0x80983df] ===
 80983c2:	55                   	push   %ebp
 80983c3:	89 e5                	mov    %esp,%ebp
 80983c5:	83 ec 18             	sub    $0x18,%esp
 80983c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80983cb:	89 04 24             	mov    %eax,(%esp)
 80983ce:	e8 9d ff ff ff       	call   8098370 <_ZN13CNChecksumMd5D1Ev>
 80983d3:	8b 45 08             	mov    0x8(%ebp),%eax
 80983d6:	89 04 24             	mov    %eax,(%esp)
 80983d9:	e8 12 c1 68 00       	call   87244f0 <_ZdlPv>
 80983de:	c9                   	leave
 80983df:	c3                   	ret

```

```c
// CNChecksumMd5::~CNChecksumMd5 @ 0x80983c2

/* CNChecksumMd5::~CNChecksumMd5() */

void __thiscall CNChecksumMd5::~CNChecksumMd5(CNChecksumMd5 *this)

{
  ~CNChecksumMd5(this);
  operator_delete(this);
  return;
}

```

