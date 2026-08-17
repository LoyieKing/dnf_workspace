# IMethod

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## BytesToWord

```asm
// === 080b459e IMethod::BytesToWord  [0x080b459e-0x80b4615] ===
 80b459e:	55                   	push   %ebp
 80b459f:	89 e5                	mov    %esp,%ebp
 80b45a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45a4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80b45aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45ad:	8b 10                	mov    (%eax),%edx
 80b45af:	8b 45 08             	mov    0x8(%ebp),%eax
 80b45b2:	0f b6 00             	movzbl (%eax),%eax
 80b45b5:	0f b6 c0             	movzbl %al,%eax
 80b45b8:	c1 e0 18             	shl    $0x18,%eax
 80b45bb:	09 c2                	or     %eax,%edx
 80b45bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45c0:	89 10                	mov    %edx,(%eax)
 80b45c2:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80b45c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45c9:	8b 10                	mov    (%eax),%edx
 80b45cb:	8b 45 08             	mov    0x8(%ebp),%eax
 80b45ce:	0f b6 00             	movzbl (%eax),%eax
 80b45d1:	0f b6 c0             	movzbl %al,%eax
 80b45d4:	c1 e0 10             	shl    $0x10,%eax
 80b45d7:	09 c2                	or     %eax,%edx
 80b45d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45dc:	89 10                	mov    %edx,(%eax)
 80b45de:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80b45e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45e5:	8b 10                	mov    (%eax),%edx
 80b45e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80b45ea:	0f b6 00             	movzbl (%eax),%eax
 80b45ed:	0f b6 c0             	movzbl %al,%eax
 80b45f0:	c1 e0 08             	shl    $0x8,%eax
 80b45f3:	09 c2                	or     %eax,%edx
 80b45f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b45f8:	89 10                	mov    %edx,(%eax)
 80b45fa:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80b45fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4601:	8b 10                	mov    (%eax),%edx
 80b4603:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4606:	0f b6 00             	movzbl (%eax),%eax
 80b4609:	0f b6 c0             	movzbl %al,%eax
 80b460c:	09 c2                	or     %eax,%edx
 80b460e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4611:	89 10                	mov    %edx,(%eax)
 80b4613:	5d                   	pop    %ebp
 80b4614:	c3                   	ret
 80b4615:	90                   	nop

```

```c
// IMethod::BytesToWord @ 0x80b459e

/* IMethod::BytesToWord(unsigned char const*, unsigned int&) */

void IMethod::BytesToWord(uchar *param_1,uint *param_2)

{
  *param_2 = 0;
  *param_2 = *param_2 | (uint)*param_1 << 0x18;
  *param_2 = *param_2 | (uint)param_1[1] << 0x10;
  *param_2 = *param_2 | (uint)param_1[2] << 8;
  *param_2 = *param_2 | (uint)param_1[3];
  return;
}

```

---

## GetBlockSize

```asm
// === 080b4416 IMethod::GetBlockSize  [0x080b4416-0x80b4445] ===
 80b4416:	55                   	push   %ebp
 80b4417:	89 e5                	mov    %esp,%ebp
 80b4419:	8b 45 08             	mov    0x8(%ebp),%eax
 80b441c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b4420:	83 f0 01             	xor    $0x1,%eax
 80b4423:	84 c0                	test   %al,%al
 80b4425:	74 16                	je     80b443d <_ZN7IMethod12GetBlockSizeEPj+0x27>
 80b4427:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b442b:	74 09                	je     80b4436 <_ZN7IMethod12GetBlockSizeEPj+0x20>
 80b442d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4430:	c7 00 05 00 00 70    	movl   $0x70000005,(%eax)
 80b4436:	b8 00 00 00 00       	mov    $0x0,%eax
 80b443b:	eb 06                	jmp    80b4443 <_ZN7IMethod12GetBlockSizeEPj+0x2d>
 80b443d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4440:	8b 40 08             	mov    0x8(%eax),%eax
 80b4443:	5d                   	pop    %ebp
 80b4444:	c3                   	ret
 80b4445:	90                   	nop

```

```c
// IMethod::GetBlockSize @ 0x80b4416

/* IMethod::GetBlockSize(unsigned int*) */

undefined4 __thiscall IMethod::GetBlockSize(IMethod *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    uVar1 = *(undefined4 *)(this + 8);
  }
  else {
    if (param_1 != (uint *)0x0) {
      *param_1 = 0x70000005;
    }
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GetKeyLength

```asm
// === 080b43e6 IMethod::GetKeyLength  [0x080b43e6-0x80b4415] ===
 80b43e6:	55                   	push   %ebp
 80b43e7:	89 e5                	mov    %esp,%ebp
 80b43e9:	8b 45 08             	mov    0x8(%ebp),%eax
 80b43ec:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b43f0:	83 f0 01             	xor    $0x1,%eax
 80b43f3:	84 c0                	test   %al,%al
 80b43f5:	74 16                	je     80b440d <_ZN7IMethod12GetKeyLengthEPj+0x27>
 80b43f7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b43fb:	74 09                	je     80b4406 <_ZN7IMethod12GetKeyLengthEPj+0x20>
 80b43fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4400:	c7 00 05 00 00 70    	movl   $0x70000005,(%eax)
 80b4406:	b8 00 00 00 00       	mov    $0x0,%eax
 80b440b:	eb 06                	jmp    80b4413 <_ZN7IMethod12GetKeyLengthEPj+0x2d>
 80b440d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4410:	8b 40 0c             	mov    0xc(%eax),%eax
 80b4413:	5d                   	pop    %ebp
 80b4414:	c3                   	ret
 80b4415:	90                   	nop

```

```c
// IMethod::GetKeyLength @ 0x80b43e6

/* IMethod::GetKeyLength(unsigned int*) */

undefined4 __thiscall IMethod::GetKeyLength(IMethod *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  else {
    if (param_1 != (uint *)0x0) {
      *param_1 = 0x70000005;
    }
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GetMode

```asm
// === 080b4446 IMethod::GetMode  [0x080b4446-0x80b4475] ===
 80b4446:	55                   	push   %ebp
 80b4447:	89 e5                	mov    %esp,%ebp
 80b4449:	8b 45 08             	mov    0x8(%ebp),%eax
 80b444c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b4450:	83 f0 01             	xor    $0x1,%eax
 80b4453:	84 c0                	test   %al,%al
 80b4455:	74 16                	je     80b446d <_ZN7IMethod7GetModeEPj+0x27>
 80b4457:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b445b:	74 09                	je     80b4466 <_ZN7IMethod7GetModeEPj+0x20>
 80b445d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4460:	c7 00 05 00 00 70    	movl   $0x70000005,(%eax)
 80b4466:	b8 00 00 00 00       	mov    $0x0,%eax
 80b446b:	eb 06                	jmp    80b4473 <_ZN7IMethod7GetModeEPj+0x2d>
 80b446d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4470:	8b 40 10             	mov    0x10(%eax),%eax
 80b4473:	5d                   	pop    %ebp
 80b4474:	c3                   	ret
 80b4475:	90                   	nop

```

```c
// IMethod::GetMode @ 0x80b4446

/* IMethod::GetMode(unsigned int*) */

undefined4 __thiscall IMethod::GetMode(IMethod *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    uVar1 = *(undefined4 *)(this + 0x10);
  }
  else {
    if (param_1 != (uint *)0x0) {
      *param_1 = 0x70000005;
    }
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GetPadding

```asm
// === 080b4476 IMethod::GetPadding  [0x080b4476-0x80b44a5] ===
 80b4476:	55                   	push   %ebp
 80b4477:	89 e5                	mov    %esp,%ebp
 80b4479:	8b 45 08             	mov    0x8(%ebp),%eax
 80b447c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b4480:	83 f0 01             	xor    $0x1,%eax
 80b4483:	84 c0                	test   %al,%al
 80b4485:	74 16                	je     80b449d <_ZN7IMethod10GetPaddingEPj+0x27>
 80b4487:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b448b:	74 09                	je     80b4496 <_ZN7IMethod10GetPaddingEPj+0x20>
 80b448d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4490:	c7 00 05 00 00 70    	movl   $0x70000005,(%eax)
 80b4496:	b8 00 00 00 00       	mov    $0x0,%eax
 80b449b:	eb 06                	jmp    80b44a3 <_ZN7IMethod10GetPaddingEPj+0x2d>
 80b449d:	8b 45 08             	mov    0x8(%ebp),%eax
 80b44a0:	8b 40 14             	mov    0x14(%eax),%eax
 80b44a3:	5d                   	pop    %ebp
 80b44a4:	c3                   	ret
 80b44a5:	90                   	nop

```

```c
// IMethod::GetPadding @ 0x80b4476

/* IMethod::GetPadding(unsigned int*) */

undefined4 __thiscall IMethod::GetPadding(IMethod *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    uVar1 = *(undefined4 *)(this + 0x14);
  }
  else {
    if (param_1 != (uint *)0x0) {
      *param_1 = 0x70000005;
    }
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IMethod

```asm
// === 080b4294 IMethod::IMethod  [0x080b4294-0x80b42d1] ===
 80b4294:	55                   	push   %ebp
 80b4295:	89 e5                	mov    %esp,%ebp
 80b4297:	8b 45 08             	mov    0x8(%ebp),%eax
 80b429a:	c7 00 e8 f3 b1 08    	movl   $0x8b1f3e8,(%eax)
 80b42a0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42a3:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 80b42a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42aa:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80b42b1:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42b4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 80b42bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42be:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 80b42c5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42c8:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 80b42cf:	5d                   	pop    %ebp
 80b42d0:	c3                   	ret
 80b42d1:	90                   	nop

```

```c
// IMethod::IMethod @ 0x80b4294

/* IMethod::IMethod() */

void __thiscall IMethod::IMethod(IMethod *this)

{
  *(undefined ***)this = &PTR__IMethod_08b1f3e8;
  this[4] = (IMethod)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

```

---

## Pad

```asm
// === 080b44a6 IMethod::Pad  [0x080b44a6-0x80b459d] ===
 80b44a6:	55                   	push   %ebp
 80b44a7:	89 e5                	mov    %esp,%ebp
 80b44a9:	83 ec 20             	sub    $0x20,%esp
 80b44ac:	8b 45 08             	mov    0x8(%ebp),%eax
 80b44af:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b44b3:	83 f0 01             	xor    $0x1,%eax
 80b44b6:	84 c0                	test   %al,%al
 80b44b8:	74 19                	je     80b44d3 <_ZN7IMethod3PadEPciPj+0x2d>
 80b44ba:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80b44be:	74 09                	je     80b44c9 <_ZN7IMethod3PadEPciPj+0x23>
 80b44c0:	8b 45 14             	mov    0x14(%ebp),%eax
 80b44c3:	c7 00 05 00 00 70    	movl   $0x70000005,(%eax)
 80b44c9:	b8 00 00 00 00       	mov    $0x0,%eax
 80b44ce:	e9 c8 00 00 00       	jmp    80b459b <_ZN7IMethod3PadEPciPj+0xf5>
 80b44d3:	8b 45 08             	mov    0x8(%ebp),%eax
 80b44d6:	8b 48 08             	mov    0x8(%eax),%ecx
 80b44d9:	8b 45 10             	mov    0x10(%ebp),%eax
 80b44dc:	89 c2                	mov    %eax,%edx
 80b44de:	c1 fa 1f             	sar    $0x1f,%edx
 80b44e1:	f7 f9                	idiv   %ecx
 80b44e3:	89 55 e8             	mov    %edx,-0x18(%ebp)
 80b44e6:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80b44ea:	0f 84 a8 00 00 00    	je     80b4598 <_ZN7IMethod3PadEPciPj+0xf2>
 80b44f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80b44f3:	8b 40 08             	mov    0x8(%eax),%eax
 80b44f6:	2b 45 e8             	sub    -0x18(%ebp),%eax
 80b44f9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80b44fc:	8b 45 10             	mov    0x10(%ebp),%eax
 80b44ff:	03 45 0c             	add    0xc(%ebp),%eax
 80b4502:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80b4505:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4508:	8b 40 14             	mov    0x14(%eax),%eax
 80b450b:	83 f8 01             	cmp    $0x1,%eax
 80b450e:	74 2f                	je     80b453f <_ZN7IMethod3PadEPciPj+0x99>
 80b4510:	83 f8 02             	cmp    $0x2,%eax
 80b4513:	74 50                	je     80b4565 <_ZN7IMethod3PadEPciPj+0xbf>
 80b4515:	85 c0                	test   %eax,%eax
 80b4517:	75 74                	jne    80b458d <_ZN7IMethod3PadEPciPj+0xe7>
 80b4519:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80b4520:	eb 0e                	jmp    80b4530 <_ZN7IMethod3PadEPciPj+0x8a>
 80b4522:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b4525:	c6 00 00             	movb   $0x0,(%eax)
 80b4528:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80b452c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b4530:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80b4533:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b4536:	0f 9c c0             	setl   %al
 80b4539:	84 c0                	test   %al,%al
 80b453b:	75 e5                	jne    80b4522 <_ZN7IMethod3PadEPciPj+0x7c>
 80b453d:	eb 4e                	jmp    80b458d <_ZN7IMethod3PadEPciPj+0xe7>
 80b453f:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 80b4546:	eb 0e                	jmp    80b4556 <_ZN7IMethod3PadEPciPj+0xb0>
 80b4548:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b454b:	c6 00 20             	movb   $0x20,(%eax)
 80b454e:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 80b4552:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b4556:	8b 45 f8             	mov    -0x8(%ebp),%eax
 80b4559:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b455c:	0f 9c c0             	setl   %al
 80b455f:	84 c0                	test   %al,%al
 80b4561:	75 e5                	jne    80b4548 <_ZN7IMethod3PadEPciPj+0xa2>
 80b4563:	eb 28                	jmp    80b458d <_ZN7IMethod3PadEPciPj+0xe7>
 80b4565:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 80b456c:	eb 12                	jmp    80b4580 <_ZN7IMethod3PadEPciPj+0xda>
 80b456e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b4571:	89 c2                	mov    %eax,%edx
 80b4573:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80b4576:	88 10                	mov    %dl,(%eax)
 80b4578:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 80b457c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80b4580:	8b 45 fc             	mov    -0x4(%ebp),%eax
 80b4583:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80b4586:	0f 9c c0             	setl   %al
 80b4589:	84 c0                	test   %al,%al
 80b458b:	75 e1                	jne    80b456e <_ZN7IMethod3PadEPciPj+0xc8>
 80b458d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80b4590:	8b 55 10             	mov    0x10(%ebp),%edx
 80b4593:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80b4596:	eb 03                	jmp    80b459b <_ZN7IMethod3PadEPciPj+0xf5>
 80b4598:	8b 45 10             	mov    0x10(%ebp),%eax
 80b459b:	c9                   	leave
 80b459c:	c3                   	ret
 80b459d:	90                   	nop

```

```c
// IMethod::Pad @ 0x80b44a6

/* IMethod::Pad(char*, int, unsigned int*) */

int __thiscall IMethod::Pad(IMethod *this,char *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  char *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (this[4] == (IMethod)0x1) {
    if (param_2 % *(int *)(this + 8) != 0) {
      iVar2 = *(int *)(this + 8) - param_2 % *(int *)(this + 8);
      local_14 = param_1 + param_2;
      iVar1 = *(int *)(this + 0x14);
      if (iVar1 == 1) {
        for (local_c = 0; local_c < iVar2; local_c = local_c + 1) {
          *local_14 = ' ';
          local_14 = local_14 + 1;
        }
      }
      else if (iVar1 == 2) {
        for (local_8 = 0; local_8 < iVar2; local_8 = local_8 + 1) {
          *local_14 = (char)iVar2;
          local_14 = local_14 + 1;
        }
      }
      else if (iVar1 == 0) {
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          *local_14 = '\0';
          local_14 = local_14 + 1;
        }
      }
      param_2 = param_2 + iVar2;
    }
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0x70000005;
    }
    param_2 = 0;
  }
  return param_2;
}

```

---

## SetMode

```asm
// === 080b436e IMethod::SetMode  [0x080b436e-0x80b43a9] ===
 80b436e:	55                   	push   %ebp
 80b436f:	89 e5                	mov    %esp,%ebp
 80b4371:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4374:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b4378:	83 f0 01             	xor    $0x1,%eax
 80b437b:	84 c0                	test   %al,%al
 80b437d:	74 07                	je     80b4386 <_ZN7IMethod7SetModeEi+0x18>
 80b437f:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b4384:	eb 21                	jmp    80b43a7 <_ZN7IMethod7SetModeEi+0x39>
 80b4386:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b438a:	78 06                	js     80b4392 <_ZN7IMethod7SetModeEi+0x24>
 80b438c:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 80b4390:	7e 07                	jle    80b4399 <_ZN7IMethod7SetModeEi+0x2b>
 80b4392:	b8 03 00 00 70       	mov    $0x70000003,%eax
 80b4397:	eb 0e                	jmp    80b43a7 <_ZN7IMethod7SetModeEi+0x39>
 80b4399:	8b 45 08             	mov    0x8(%ebp),%eax
 80b439c:	8b 55 0c             	mov    0xc(%ebp),%edx
 80b439f:	89 50 10             	mov    %edx,0x10(%eax)
 80b43a2:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b43a7:	5d                   	pop    %ebp
 80b43a8:	c3                   	ret
 80b43a9:	90                   	nop

```

```c
// IMethod::SetMode @ 0x80b436e

/* IMethod::SetMode(int) */

undefined4 __thiscall IMethod::SetMode(IMethod *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    if ((param_1 < 0) || (2 < param_1)) {
      uVar1 = 0x70000003;
    }
    else {
      *(int *)(this + 0x10) = param_1;
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## SetPadding

```asm
// === 080b43aa IMethod::SetPadding  [0x080b43aa-0x80b43e5] ===
 80b43aa:	55                   	push   %ebp
 80b43ab:	89 e5                	mov    %esp,%ebp
 80b43ad:	8b 45 08             	mov    0x8(%ebp),%eax
 80b43b0:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b43b4:	83 f0 01             	xor    $0x1,%eax
 80b43b7:	84 c0                	test   %al,%al
 80b43b9:	74 07                	je     80b43c2 <_ZN7IMethod10SetPaddingEi+0x18>
 80b43bb:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b43c0:	eb 21                	jmp    80b43e3 <_ZN7IMethod10SetPaddingEi+0x39>
 80b43c2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80b43c6:	78 06                	js     80b43ce <_ZN7IMethod10SetPaddingEi+0x24>
 80b43c8:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 80b43cc:	7e 07                	jle    80b43d5 <_ZN7IMethod10SetPaddingEi+0x2b>
 80b43ce:	b8 04 00 00 70       	mov    $0x70000004,%eax
 80b43d3:	eb 0e                	jmp    80b43e3 <_ZN7IMethod10SetPaddingEi+0x39>
 80b43d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80b43d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 80b43db:	89 50 14             	mov    %edx,0x14(%eax)
 80b43de:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b43e3:	5d                   	pop    %ebp
 80b43e4:	c3                   	ret
 80b43e5:	90                   	nop

```

```c
// IMethod::SetPadding @ 0x80b43aa

/* IMethod::SetPadding(int) */

undefined4 __thiscall IMethod::SetPadding(IMethod *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    if ((param_1 < 0) || (2 < param_1)) {
      uVar1 = 0x70000004;
    }
    else {
      *(int *)(this + 0x14) = param_1;
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## WordToBytes

```asm
// === 080b4616 IMethod::WordToBytes  [0x080b4616-0x80b4657] ===
 80b4616:	55                   	push   %ebp
 80b4617:	89 e5                	mov    %esp,%ebp
 80b4619:	8b 45 08             	mov    0x8(%ebp),%eax
 80b461c:	c1 e8 18             	shr    $0x18,%eax
 80b461f:	89 c2                	mov    %eax,%edx
 80b4621:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4624:	88 10                	mov    %dl,(%eax)
 80b4626:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b462a:	8b 45 08             	mov    0x8(%ebp),%eax
 80b462d:	c1 e8 10             	shr    $0x10,%eax
 80b4630:	89 c2                	mov    %eax,%edx
 80b4632:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4635:	88 10                	mov    %dl,(%eax)
 80b4637:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b463b:	8b 45 08             	mov    0x8(%ebp),%eax
 80b463e:	c1 e8 08             	shr    $0x8,%eax
 80b4641:	89 c2                	mov    %eax,%edx
 80b4643:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4646:	88 10                	mov    %dl,(%eax)
 80b4648:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b464c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b464f:	89 c2                	mov    %eax,%edx
 80b4651:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b4654:	88 10                	mov    %dl,(%eax)
 80b4656:	5d                   	pop    %ebp
 80b4657:	c3                   	ret

```

```c
// IMethod::WordToBytes @ 0x80b4616

/* IMethod::WordToBytes(unsigned int, unsigned char*) */

void IMethod::WordToBytes(uint param_1,uchar *param_2)

{
  *param_2 = (uchar)(param_1 >> 0x18);
  param_2[1] = (uchar)(param_1 >> 0x10);
  param_2[2] = (uchar)(param_1 >> 8);
  param_2[3] = (uchar)param_1;
  return;
}

```

---

## Xor

```asm
// === 080b4316 IMethod::Xor  [0x080b4316-0x80b436d] ===
 80b4316:	55                   	push   %ebp
 80b4317:	89 e5                	mov    %esp,%ebp
 80b4319:	83 ec 10             	sub    $0x10,%esp
 80b431c:	8b 45 08             	mov    0x8(%ebp),%eax
 80b431f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80b4323:	83 f0 01             	xor    $0x1,%eax
 80b4326:	84 c0                	test   %al,%al
 80b4328:	74 07                	je     80b4331 <_ZN7IMethod3XorEPcPKc+0x1b>
 80b432a:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80b432f:	eb 3a                	jmp    80b436b <_ZN7IMethod3XorEPcPKc+0x55>
 80b4331:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 80b4338:	eb 1c                	jmp    80b4356 <_ZN7IMethod3XorEPcPKc+0x40>
 80b433a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80b433d:	0f b6 08             	movzbl (%eax),%ecx
 80b4340:	8b 55 10             	mov    0x10(%ebp),%edx
 80b4343:	0f b6 12             	movzbl (%edx),%edx
 80b4346:	31 ca                	xor    %ecx,%edx
 80b4348:	88 10                	mov    %dl,(%eax)
 80b434a:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 80b434e:	83 45 10 01          	addl   $0x1,0x10(%ebp)
 80b4352:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 80b4356:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4359:	8b 40 08             	mov    0x8(%eax),%eax
 80b435c:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 80b435f:	0f 9f c0             	setg   %al
 80b4362:	84 c0                	test   %al,%al
 80b4364:	75 d4                	jne    80b433a <_ZN7IMethod3XorEPcPKc+0x24>
 80b4366:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80b436b:	c9                   	leave
 80b436c:	c3                   	ret
 80b436d:	90                   	nop

```

```c
// IMethod::Xor @ 0x80b4316

/* IMethod::Xor(char*, char const*) */

undefined4 __thiscall IMethod::Xor(IMethod *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  int local_8;
  
  if (this[4] == (IMethod)0x1) {
    for (local_8 = 0; local_8 < *(int *)(this + 8); local_8 = local_8 + 1) {
      *param_1 = *param_2 ^ *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## ~IMethod

```asm
// === 080b42d2 IMethod::~IMethod  [0x080b42d2-0x80b42f7] ===
 80b42d2:	55                   	push   %ebp
 80b42d3:	89 e5                	mov    %esp,%ebp
 80b42d5:	83 ec 18             	sub    $0x18,%esp
 80b42d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42db:	c7 00 e8 f3 b1 08    	movl   $0x8b1f3e8,(%eax)
 80b42e1:	b8 00 00 00 00       	mov    $0x0,%eax
 80b42e6:	84 c0                	test   %al,%al
 80b42e8:	74 0b                	je     80b42f5 <_ZN7IMethodD1Ev+0x23>
 80b42ea:	8b 45 08             	mov    0x8(%ebp),%eax
 80b42ed:	89 04 24             	mov    %eax,(%esp)
 80b42f0:	e8 fb 01 67 00       	call   87244f0 <_ZdlPv>
 80b42f5:	c9                   	leave
 80b42f6:	c3                   	ret
 80b42f7:	90                   	nop

```

```c
// IMethod::~IMethod @ 0x80b42d2

/* WARNING: Removing unreachable block (ram,0x080b42ea) */
/* IMethod::~IMethod() */

void __thiscall IMethod::~IMethod(IMethod *this)

{
  *(undefined ***)this = &PTR__IMethod_08b1f3e8;
  return;
}

```

---

## ~IMethod_080b42f8

```asm
// === 080b42f8 IMethod::~IMethod  [0x080b42f8-0x80b4315] ===
 80b42f8:	55                   	push   %ebp
 80b42f9:	89 e5                	mov    %esp,%ebp
 80b42fb:	83 ec 18             	sub    $0x18,%esp
 80b42fe:	8b 45 08             	mov    0x8(%ebp),%eax
 80b4301:	89 04 24             	mov    %eax,(%esp)
 80b4304:	e8 c9 ff ff ff       	call   80b42d2 <_ZN7IMethodD1Ev>
 80b4309:	8b 45 08             	mov    0x8(%ebp),%eax
 80b430c:	89 04 24             	mov    %eax,(%esp)
 80b430f:	e8 dc 01 67 00       	call   87244f0 <_ZdlPv>
 80b4314:	c9                   	leave
 80b4315:	c3                   	ret

```

```c
// IMethod::~IMethod @ 0x80b42f8

/* IMethod::~IMethod() */

void __thiscall IMethod::~IMethod(IMethod *this)

{
  ~IMethod(this);
  operator_delete(this);
  return;
}

```

