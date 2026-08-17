# GreyImage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## GreyImage

```asm
// === 080df4e8 GreyImage::GreyImage  [0x080df4e8-0x80df509] ===
 80df4e8:	55                   	push   %ebp
 80df4e9:	89 e5                	mov    %esp,%ebp
 80df4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 80df4ee:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80df4f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80df4f7:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80df4fe:	8b 45 08             	mov    0x8(%ebp),%eax
 80df501:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80df508:	5d                   	pop    %ebp
 80df509:	c3                   	ret

```

```c
// GreyImage::GreyImage @ 0x80df4e8

/* GreyImage::GreyImage() */

void __thiscall GreyImage::GreyImage(GreyImage *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## getAlpha

```asm
// === 080df5f0 GreyImage::getAlpha  [0x080df5f0-0x80df60d] ===
 80df5f0:	55                   	push   %ebp
 80df5f1:	89 e5                	mov    %esp,%ebp
 80df5f3:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5f6:	8b 50 08             	mov    0x8(%eax),%edx
 80df5f9:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5fc:	8b 00                	mov    (%eax),%eax
 80df5fe:	0f af 45 10          	imul   0x10(%ebp),%eax
 80df602:	03 45 0c             	add    0xc(%ebp),%eax
 80df605:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80df608:	0f b6 00             	movzbl (%eax),%eax
 80df60b:	5d                   	pop    %ebp
 80df60c:	c3                   	ret
 80df60d:	90                   	nop

```

```c
// GreyImage::getAlpha @ 0x80df5f0

/* GreyImage::getAlpha(int, int) */

undefined1 __thiscall GreyImage::getAlpha(GreyImage *this,int param_1,int param_2)

{
  return *(undefined1 *)(*(int *)(this + 8) + *(int *)this * param_2 + param_1);
}

```

---

## getHeight

```asm
// === 080df5cc GreyImage::getHeight  [0x080df5cc-0x80df5d7] ===
 80df5cc:	55                   	push   %ebp
 80df5cd:	89 e5                	mov    %esp,%ebp
 80df5cf:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5d2:	8b 40 04             	mov    0x4(%eax),%eax
 80df5d5:	5d                   	pop    %ebp
 80df5d6:	c3                   	ret
 80df5d7:	90                   	nop

```

```c
// GreyImage::getHeight @ 0x80df5cc

/* GreyImage::getHeight() const */

undefined4 __thiscall GreyImage::getHeight(GreyImage *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## getImage

```asm
// === 080df5d8 GreyImage::getImage  [0x080df5d8-0x80df5e3] ===
 80df5d8:	55                   	push   %ebp
 80df5d9:	89 e5                	mov    %esp,%ebp
 80df5db:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5de:	8b 40 08             	mov    0x8(%eax),%eax
 80df5e1:	5d                   	pop    %ebp
 80df5e2:	c3                   	ret
 80df5e3:	90                   	nop

```

```c
// GreyImage::getImage @ 0x80df5d8

/* GreyImage::getImage() const */

undefined4 __thiscall GreyImage::getImage(GreyImage *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## getImage_080df5e4

```asm
// === 080df5e4 GreyImage::getImage  [0x080df5e4-0x80df5ef] ===
 80df5e4:	55                   	push   %ebp
 80df5e5:	89 e5                	mov    %esp,%ebp
 80df5e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5ea:	8b 40 08             	mov    0x8(%eax),%eax
 80df5ed:	5d                   	pop    %ebp
 80df5ee:	c3                   	ret
 80df5ef:	90                   	nop

```

```c
// GreyImage::getImage @ 0x80df5e4

/* GreyImage::getImage() */

undefined4 __thiscall GreyImage::getImage(GreyImage *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## getWidth

```asm
// === 080df5c2 GreyImage::getWidth  [0x080df5c2-0x80df5cb] ===
 80df5c2:	55                   	push   %ebp
 80df5c3:	89 e5                	mov    %esp,%ebp
 80df5c5:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5c8:	8b 00                	mov    (%eax),%eax
 80df5ca:	5d                   	pop    %ebp
 80df5cb:	c3                   	ret

```

```c
// GreyImage::getWidth @ 0x80df5c2

/* GreyImage::getWidth() const */

undefined4 __thiscall GreyImage::getWidth(GreyImage *this)

{
  return *(undefined4 *)this;
}

```

---

## init

```asm
// === 080df51e GreyImage::init  [0x080df51e-0x80df581] ===
 80df51e:	55                   	push   %ebp
 80df51f:	89 e5                	mov    %esp,%ebp
 80df521:	83 ec 28             	sub    $0x28,%esp
 80df524:	8b 45 14             	mov    0x14(%ebp),%eax
 80df527:	88 45 f4             	mov    %al,-0xc(%ebp)
 80df52a:	8b 45 08             	mov    0x8(%ebp),%eax
 80df52d:	89 04 24             	mov    %eax,(%esp)
 80df530:	e8 4d 00 00 00       	call   80df582 <_ZN9GreyImage5resetEv>
 80df535:	8b 45 08             	mov    0x8(%ebp),%eax
 80df538:	8b 55 0c             	mov    0xc(%ebp),%edx
 80df53b:	89 10                	mov    %edx,(%eax)
 80df53d:	8b 45 08             	mov    0x8(%ebp),%eax
 80df540:	8b 55 10             	mov    0x10(%ebp),%edx
 80df543:	89 50 04             	mov    %edx,0x4(%eax)
 80df546:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df549:	0f af 45 10          	imul   0x10(%ebp),%eax
 80df54d:	89 04 24             	mov    %eax,(%esp)
 80df550:	e8 6b 38 64 00       	call   8722dc0 <_Znaj>
 80df555:	89 c2                	mov    %eax,%edx
 80df557:	8b 45 08             	mov    0x8(%ebp),%eax
 80df55a:	89 50 08             	mov    %edx,0x8(%eax)
 80df55d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df560:	0f af 45 10          	imul   0x10(%ebp),%eax
 80df564:	89 c1                	mov    %eax,%ecx
 80df566:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 80df56a:	8b 45 08             	mov    0x8(%ebp),%eax
 80df56d:	8b 40 08             	mov    0x8(%eax),%eax
 80df570:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80df574:	89 54 24 04          	mov    %edx,0x4(%esp)
 80df578:	89 04 24             	mov    %eax,(%esp)
 80df57b:	e8 40 e7 f9 ff       	call   807dcc0 <memset@plt>
 80df580:	c9                   	leave
 80df581:	c3                   	ret

```

```c
// GreyImage::init @ 0x80df51e

/* GreyImage::init(int, int, unsigned char) */

void __thiscall GreyImage::init(GreyImage *this,int param_1,int param_2,uchar param_3)

{
  void *pvVar1;
  
  reset(this);
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  pvVar1 = operator_new__(param_1 * param_2);
  *(void **)(this + 8) = pvVar1;
  memset(*(void **)(this + 8),(uint)param_3,param_1 * param_2);
  return;
}

```

---

## reset

```asm
// === 080df582 GreyImage::reset  [0x080df582-0x80df5c1] ===
 80df582:	55                   	push   %ebp
 80df583:	89 e5                	mov    %esp,%ebp
 80df585:	83 ec 18             	sub    $0x18,%esp
 80df588:	8b 45 08             	mov    0x8(%ebp),%eax
 80df58b:	8b 40 08             	mov    0x8(%eax),%eax
 80df58e:	85 c0                	test   %eax,%eax
 80df590:	74 2d                	je     80df5bf <_ZN9GreyImage5resetEv+0x3d>
 80df592:	8b 45 08             	mov    0x8(%ebp),%eax
 80df595:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80df59b:	8b 45 08             	mov    0x8(%ebp),%eax
 80df59e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80df5a5:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5a8:	8b 40 08             	mov    0x8(%eax),%eax
 80df5ab:	89 04 24             	mov    %eax,(%esp)
 80df5ae:	e8 3d 4f 64 00       	call   87244f0 <_ZdlPv>
 80df5b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80df5b6:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80df5bd:	eb 01                	jmp    80df5c0 <_ZN9GreyImage5resetEv+0x3e>
 80df5bf:	90                   	nop
 80df5c0:	c9                   	leave
 80df5c1:	c3                   	ret

```

```c
// GreyImage::reset @ 0x80df582

/* GreyImage::reset() */

void __thiscall GreyImage::reset(GreyImage *this)

{
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

```

---

## sampleAlpha

```asm
// === 080df676 GreyImage::sampleAlpha  [0x080df676-0x80df7a3] ===
 80df676:	55                   	push   %ebp
 80df677:	89 e5                	mov    %esp,%ebp
 80df679:	83 ec 2c             	sub    $0x2c,%esp
 80df67c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df67f:	c1 f8 10             	sar    $0x10,%eax
 80df682:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80df685:	8b 45 10             	mov    0x10(%ebp),%eax
 80df688:	c1 f8 10             	sar    $0x10,%eax
 80df68b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80df68e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 80df692:	78 21                	js     80df6b5 <_ZN9GreyImage11sampleAlphaEii+0x3f>
 80df694:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80df698:	78 1b                	js     80df6b5 <_ZN9GreyImage11sampleAlphaEii+0x3f>
 80df69a:	8b 45 08             	mov    0x8(%ebp),%eax
 80df69d:	8b 00                	mov    (%eax),%eax
 80df69f:	83 e8 01             	sub    $0x1,%eax
 80df6a2:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80df6a5:	7e 0e                	jle    80df6b5 <_ZN9GreyImage11sampleAlphaEii+0x3f>
 80df6a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80df6aa:	8b 40 04             	mov    0x4(%eax),%eax
 80df6ad:	83 e8 01             	sub    $0x1,%eax
 80df6b0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80df6b3:	7f 0a                	jg     80df6bf <_ZN9GreyImage11sampleAlphaEii+0x49>
 80df6b5:	b8 00 00 00 00       	mov    $0x0,%eax
 80df6ba:	e9 e3 00 00 00       	jmp    80df7a2 <_ZN9GreyImage11sampleAlphaEii+0x12c>
 80df6bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df6c2:	25 ff ff 00 00       	and    $0xffff,%eax
 80df6c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80df6ca:	8b 45 10             	mov    0x10(%ebp),%eax
 80df6cd:	25 ff ff 00 00       	and    $0xffff,%eax
 80df6d2:	89 45 f8             	mov    %eax,-0x8(%ebp)
 80df6d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80df6d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df6dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df6df:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df6e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80df6e6:	89 04 24             	mov    %eax,(%esp)
 80df6e9:	e8 02 ff ff ff       	call   80df5f0 <_ZN9GreyImage8getAlphaEii>
 80df6ee:	88 45 fc             	mov    %al,-0x4(%ebp)
 80df6f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df6f4:	8d 50 01             	lea    0x1(%eax),%edx
 80df6f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80df6fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df6fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 80df702:	8b 45 08             	mov    0x8(%ebp),%eax
 80df705:	89 04 24             	mov    %eax,(%esp)
 80df708:	e8 e3 fe ff ff       	call   80df5f0 <_ZN9GreyImage8getAlphaEii>
 80df70d:	88 45 fd             	mov    %al,-0x3(%ebp)
 80df710:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80df713:	83 c0 01             	add    $0x1,%eax
 80df716:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df71a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df71d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df721:	8b 45 08             	mov    0x8(%ebp),%eax
 80df724:	89 04 24             	mov    %eax,(%esp)
 80df727:	e8 c4 fe ff ff       	call   80df5f0 <_ZN9GreyImage8getAlphaEii>
 80df72c:	88 45 fe             	mov    %al,-0x2(%ebp)
 80df72f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80df732:	8d 50 01             	lea    0x1(%eax),%edx
 80df735:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df738:	83 c0 01             	add    $0x1,%eax
 80df73b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80df73f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df743:	8b 45 08             	mov    0x8(%ebp),%eax
 80df746:	89 04 24             	mov    %eax,(%esp)
 80df749:	e8 a2 fe ff ff       	call   80df5f0 <_ZN9GreyImage8getAlphaEii>
 80df74e:	88 45 ff             	mov    %al,-0x1(%ebp)
 80df751:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 80df755:	b8 00 00 01 00       	mov    $0x10000,%eax
 80df75a:	2b 45 f4             	sub    -0xc(%ebp),%eax
 80df75d:	0f af d0             	imul   %eax,%edx
 80df760:	0f b6 45 fd          	movzbl -0x3(%ebp),%eax
 80df764:	0f af 45 f4          	imul   -0xc(%ebp),%eax
 80df768:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80df76b:	89 c2                	mov    %eax,%edx
 80df76d:	c1 fa 10             	sar    $0x10,%edx
 80df770:	b8 00 00 01 00       	mov    $0x10000,%eax
 80df775:	2b 45 f8             	sub    -0x8(%ebp),%eax
 80df778:	0f af d0             	imul   %eax,%edx
 80df77b:	0f b6 4d fe          	movzbl -0x2(%ebp),%ecx
 80df77f:	b8 00 00 01 00       	mov    $0x10000,%eax
 80df784:	2b 45 f4             	sub    -0xc(%ebp),%eax
 80df787:	0f af c8             	imul   %eax,%ecx
 80df78a:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
 80df78e:	0f af 45 f4          	imul   -0xc(%ebp),%eax
 80df792:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 80df795:	c1 f8 10             	sar    $0x10,%eax
 80df798:	0f af 45 f8          	imul   -0x8(%ebp),%eax
 80df79c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80df79f:	c1 f8 10             	sar    $0x10,%eax
 80df7a2:	c9                   	leave
 80df7a3:	c3                   	ret

```

```c
// GreyImage::sampleAlpha @ 0x80df676

/* GreyImage::sampleAlpha(int, int) */

int __thiscall GreyImage::sampleAlpha(GreyImage *this,int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = param_1 >> 0x10;
  iVar6 = param_2 >> 0x10;
  if ((((iVar5 < 0) || (iVar6 < 0)) || (*(int *)this + -1 <= iVar5)) ||
     (*(int *)(this + 4) + -1 <= iVar6)) {
    iVar5 = 0;
  }
  else {
    uVar7 = param_1 & 0xffff;
    bVar1 = getAlpha(this,iVar5,iVar6);
    bVar2 = getAlpha(this,iVar5 + 1,iVar6);
    bVar3 = getAlpha(this,iVar5,iVar6 + 1);
    bVar4 = getAlpha(this,iVar5 + 1,iVar6 + 1);
    iVar5 = (int)(((int)((uint)bVar1 * (0x10000 - uVar7) + bVar2 * uVar7) >> 0x10) *
                  (0x10000 - (param_2 & 0xffffU)) +
                 ((int)((uint)bVar3 * (0x10000 - uVar7) + bVar4 * uVar7) >> 0x10) *
                 (param_2 & 0xffffU)) >> 0x10;
  }
  return iVar5;
}

```

---

## setAlpha

```asm
// === 080df60e GreyImage::setAlpha  [0x080df60e-0x80df635] ===
 80df60e:	55                   	push   %ebp
 80df60f:	89 e5                	mov    %esp,%ebp
 80df611:	83 ec 04             	sub    $0x4,%esp
 80df614:	8b 45 14             	mov    0x14(%ebp),%eax
 80df617:	88 45 fc             	mov    %al,-0x4(%ebp)
 80df61a:	8b 45 08             	mov    0x8(%ebp),%eax
 80df61d:	8b 50 08             	mov    0x8(%eax),%edx
 80df620:	8b 45 08             	mov    0x8(%ebp),%eax
 80df623:	8b 00                	mov    (%eax),%eax
 80df625:	0f af 45 10          	imul   0x10(%ebp),%eax
 80df629:	03 45 0c             	add    0xc(%ebp),%eax
 80df62c:	01 c2                	add    %eax,%edx
 80df62e:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 80df632:	88 02                	mov    %al,(%edx)
 80df634:	c9                   	leave
 80df635:	c3                   	ret

```

```c
// GreyImage::setAlpha @ 0x80df60e

/* GreyImage::setAlpha(int, int, unsigned char) */

void __thiscall GreyImage::setAlpha(GreyImage *this,int param_1,int param_2,uchar param_3)

{
  *(uchar *)(*(int *)(this + 8) + *(int *)this * param_2 + param_1) = param_3;
  return;
}

```

---

## setAlphaAsMax

```asm
// === 080df636 GreyImage::setAlphaAsMax  [0x080df636-0x80df675] ===
 80df636:	55                   	push   %ebp
 80df637:	89 e5                	mov    %esp,%ebp
 80df639:	83 ec 38             	sub    $0x38,%esp
 80df63c:	8b 45 14             	mov    0x14(%ebp),%eax
 80df63f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 80df642:	8b 45 08             	mov    0x8(%ebp),%eax
 80df645:	8b 50 08             	mov    0x8(%eax),%edx
 80df648:	8b 45 08             	mov    0x8(%ebp),%eax
 80df64b:	8b 00                	mov    (%eax),%eax
 80df64d:	0f af 45 10          	imul   0x10(%ebp),%eax
 80df651:	03 45 0c             	add    0xc(%ebp),%eax
 80df654:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80df657:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80df65a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80df65d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df661:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80df664:	89 04 24             	mov    %eax,(%esp)
 80df667:	e8 41 03 00 00       	call   80df9ad <_ZSt3maxIhERKT_S2_S2_>
 80df66c:	0f b6 10             	movzbl (%eax),%edx
 80df66f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80df672:	88 10                	mov    %dl,(%eax)
 80df674:	c9                   	leave
 80df675:	c3                   	ret

```

```c
// GreyImage::setAlphaAsMax @ 0x80df636

/* GreyImage::setAlphaAsMax(int, int, unsigned char) */

void __thiscall GreyImage::setAlphaAsMax(GreyImage *this,int param_1,int param_2,uchar param_3)

{
  uchar *puVar1;
  uchar local_20 [16];
  uchar *local_10;
  
  local_20[0] = param_3;
  local_10 = (uchar *)(*(int *)(this + 8) + *(int *)this * param_2 + param_1);
  puVar1 = std::max<unsigned_char>(local_10,local_20);
  *local_10 = *puVar1;
  return;
}

```

---

## ~GreyImage

```asm
// === 080df50a GreyImage::~GreyImage  [0x080df50a-0x80df51d] ===
 80df50a:	55                   	push   %ebp
 80df50b:	89 e5                	mov    %esp,%ebp
 80df50d:	83 ec 18             	sub    $0x18,%esp
 80df510:	8b 45 08             	mov    0x8(%ebp),%eax
 80df513:	89 04 24             	mov    %eax,(%esp)
 80df516:	e8 67 00 00 00       	call   80df582 <_ZN9GreyImage5resetEv>
 80df51b:	c9                   	leave
 80df51c:	c3                   	ret
 80df51d:	90                   	nop

```

```c
// GreyImage::~GreyImage @ 0x80df50a

/* GreyImage::~GreyImage() */

void __thiscall GreyImage::~GreyImage(GreyImage *this)

{
  reset(this);
  return;
}

```

