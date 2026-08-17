# CBlowFish

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CBlowFish

```asm
// === 080a956c CBlowFish::CBlowFish  [0x080a956c-0x80a97a3] ===
 80a956c:	55                   	push   %ebp
 80a956d:	89 e5                	mov    %esp,%ebp
 80a956f:	53                   	push   %ebx
 80a9570:	83 ec 74             	sub    $0x74,%esp
 80a9573:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9576:	8b 55 14             	mov    0x14(%ebp),%edx
 80a9579:	89 54 24 04          	mov    %edx,0x4(%esp)
 80a957d:	89 04 24             	mov    %eax,(%esp)
 80a9580:	e8 73 0d 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a9585:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9588:	8d 50 08             	lea    0x8(%eax),%edx
 80a958b:	8b 45 14             	mov    0x14(%ebp),%eax
 80a958e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9592:	89 14 24             	mov    %edx,(%esp)
 80a9595:	e8 5e 0d 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a959a:	8b 45 08             	mov    0x8(%ebp),%eax
 80a959d:	83 c0 10             	add    $0x10,%eax
 80a95a0:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 80a95a7:	00 
 80a95a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a95af:	00 
 80a95b0:	89 04 24             	mov    %eax,(%esp)
 80a95b3:	e8 08 47 fd ff       	call   807dcc0 <memset@plt>
 80a95b8:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80a95bc:	0f 84 db 01 00 00    	je     80a979d <_ZN9CBlowFishC1EPhjRK6SBlock+0x231>
 80a95c2:	83 7d 10 38          	cmpl   $0x38,0x10(%ebp)
 80a95c6:	76 07                	jbe    80a95cf <_ZN9CBlowFishC1EPhjRK6SBlock+0x63>
 80a95c8:	c7 45 10 38 00 00 00 	movl   $0x38,0x10(%ebp)
 80a95cf:	8b 45 10             	mov    0x10(%ebp),%eax
 80a95d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80a95d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a95d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a95dd:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80a95e0:	89 04 24             	mov    %eax,(%esp)
 80a95e3:	e8 b8 42 fd ff       	call   807d8a0 <memcpy@plt>
 80a95e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80a95eb:	83 c0 10             	add    $0x10,%eax
 80a95ee:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 80a95f5:	00 
 80a95f6:	c7 44 24 04 40 65 b1 	movl   $0x8b16540,0x4(%esp)
 80a95fd:	08 
 80a95fe:	89 04 24             	mov    %eax,(%esp)
 80a9601:	e8 9a 42 fd ff       	call   807d8a0 <memcpy@plt>
 80a9606:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9609:	83 c0 58             	add    $0x58,%eax
 80a960c:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 80a9613:	00 
 80a9614:	c7 44 24 04 a0 65 b1 	movl   $0x8b165a0,0x4(%esp)
 80a961b:	08 
 80a961c:	89 04 24             	mov    %eax,(%esp)
 80a961f:	e8 7c 42 fd ff       	call   807d8a0 <memcpy@plt>
 80a9624:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80a9627:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80a962a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80a9631:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80a9638:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 80a963f:	eb 6d                	jmp    80a96ae <_ZN9CBlowFishC1EPhjRK6SBlock+0x142>
 80a9641:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80a9648:	c7 45 f0 04 00 00 00 	movl   $0x4,-0x10(%ebp)
 80a964f:	eb 2d                	jmp    80a967e <_ZN9CBlowFishC1EPhjRK6SBlock+0x112>
 80a9651:	c1 65 e8 08          	shll   $0x8,-0x18(%ebp)
 80a9655:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80a9658:	0f b6 00             	movzbl (%eax),%eax
 80a965b:	0f b6 c0             	movzbl %al,%eax
 80a965e:	09 45 e8             	or     %eax,-0x18(%ebp)
 80a9661:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80a9665:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80a9669:	8b 45 10             	mov    0x10(%ebp),%eax
 80a966c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80a966f:	75 0d                	jne    80a967e <_ZN9CBlowFishC1EPhjRK6SBlock+0x112>
 80a9671:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80a9678:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80a967b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80a967e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80a9682:	0f 95 c0             	setne  %al
 80a9685:	83 6d f0 01          	subl   $0x1,-0x10(%ebp)
 80a9689:	84 c0                	test   %al,%al
 80a968b:	75 c4                	jne    80a9651 <_ZN9CBlowFishC1EPhjRK6SBlock+0xe5>
 80a968d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 80a9690:	8b 55 dc             	mov    -0x24(%ebp),%edx
 80a9693:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9696:	83 c2 04             	add    $0x4,%edx
 80a9699:	8b 04 90             	mov    (%eax,%edx,4),%eax
 80a969c:	89 c2                	mov    %eax,%edx
 80a969e:	33 55 e8             	xor    -0x18(%ebp),%edx
 80a96a1:	8b 45 08             	mov    0x8(%ebp),%eax
 80a96a4:	83 c1 04             	add    $0x4,%ecx
 80a96a7:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 80a96aa:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 80a96ae:	83 7d dc 11          	cmpl   $0x11,-0x24(%ebp)
 80a96b2:	0f 96 c0             	setbe  %al
 80a96b5:	84 c0                	test   %al,%al
 80a96b7:	75 88                	jne    80a9641 <_ZN9CBlowFishC1EPhjRK6SBlock+0xd5>
 80a96b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80a96c0:	00 
 80a96c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a96c8:	00 
 80a96c9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80a96cc:	89 04 24             	mov    %eax,(%esp)
 80a96cf:	e8 22 08 ff ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80a96d4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 80a96db:	eb 38                	jmp    80a9715 <_ZN9CBlowFishC1EPhjRK6SBlock+0x1a9>
 80a96dd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80a96e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a96e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80a96e7:	89 04 24             	mov    %eax,(%esp)
 80a96ea:	e8 b5 00 00 00       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a96ef:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 80a96f2:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80a96f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80a96f8:	83 c1 04             	add    $0x4,%ecx
 80a96fb:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 80a96fe:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 80a9702:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 80a9705:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80a9708:	8b 45 08             	mov    0x8(%ebp),%eax
 80a970b:	83 c1 04             	add    $0x4,%ecx
 80a970e:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 80a9711:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 80a9715:	83 7d dc 11          	cmpl   $0x11,-0x24(%ebp)
 80a9719:	0f 96 c0             	setbe  %al
 80a971c:	84 c0                	test   %al,%al
 80a971e:	75 bd                	jne    80a96dd <_ZN9CBlowFishC1EPhjRK6SBlock+0x171>
 80a9720:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80a9727:	eb 67                	jmp    80a9790 <_ZN9CBlowFishC1EPhjRK6SBlock+0x224>
 80a9729:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80a9730:	eb 4c                	jmp    80a977e <_ZN9CBlowFishC1EPhjRK6SBlock+0x212>
 80a9732:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80a9735:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9739:	8b 45 08             	mov    0x8(%ebp),%eax
 80a973c:	89 04 24             	mov    %eax,(%esp)
 80a973f:	e8 60 00 00 00       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a9744:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 80a9747:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 80a974a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80a974d:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9750:	c1 e3 08             	shl    $0x8,%ebx
 80a9753:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 80a9756:	83 c1 14             	add    $0x14,%ecx
 80a9759:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80a975d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80a9761:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 80a9764:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 80a9767:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80a976a:	8b 45 08             	mov    0x8(%ebp),%eax
 80a976d:	c1 e3 08             	shl    $0x8,%ebx
 80a9770:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 80a9773:	83 c1 14             	add    $0x14,%ecx
 80a9776:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80a977a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80a977e:	81 7d f4 ff 00 00 00 	cmpl   $0xff,-0xc(%ebp)
 80a9785:	0f 9e c0             	setle  %al
 80a9788:	84 c0                	test   %al,%al
 80a978a:	75 a6                	jne    80a9732 <_ZN9CBlowFishC1EPhjRK6SBlock+0x1c6>
 80a978c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 80a9790:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 80a9794:	0f 96 c0             	setbe  %al
 80a9797:	84 c0                	test   %al,%al
 80a9799:	75 8e                	jne    80a9729 <_ZN9CBlowFishC1EPhjRK6SBlock+0x1bd>
 80a979b:	eb 01                	jmp    80a979e <_ZN9CBlowFishC1EPhjRK6SBlock+0x232>
 80a979d:	90                   	nop
 80a979e:	83 c4 74             	add    $0x74,%esp
 80a97a1:	5b                   	pop    %ebx
 80a97a2:	5d                   	pop    %ebp
 80a97a3:	c3                   	ret

```

```c
// CBlowFish::CBlowFish @ 0x80a956c

/* CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&) */

void __thiscall CBlowFish::CBlowFish(CBlowFish *this,uchar *param_1,uint param_2,SBlock *param_3)

{
  bool bVar1;
  byte local_68 [56];
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  byte *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  SBlock::SBlock((SBlock *)this,param_3);
  SBlock::SBlock((SBlock *)(this + 8),param_3);
  memset(this + 0x10,0,0x48);
  if (param_2 != 0) {
    if (0x38 < param_2) {
      param_2 = 0x38;
    }
    memcpy(local_68,param_1,param_2);
    memcpy(this + 0x10,scm_auiInitP,0x48);
    memcpy(this + 0x58,scm_auiInitS,0x1000);
    local_20 = local_68;
    local_1c = 0;
    local_18 = 0;
    for (local_28 = 0; local_28 < 0x12; local_28 = local_28 + 1) {
      local_1c = 0;
      local_14 = 4;
      while (bVar1 = local_14 != 0, local_14 = local_14 + -1, bVar1) {
        local_1c = local_1c << 8 | (uint)*local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
        if (param_2 == local_18) {
          local_18 = 0;
          local_20 = local_68;
        }
      }
      *(uint *)(this + (local_28 + 4) * 4) = *(uint *)(this + (local_28 + 4) * 4) ^ local_1c;
      local_14 = 0xffffffff;
    }
    SBlock::SBlock((SBlock *)&local_30,0,0);
    for (local_28 = 0; local_28 < 0x12; local_28 = local_28 + 2) {
      Encrypt(this,(SBlock *)&local_30);
      *(undefined4 *)(this + (local_28 + 4) * 4) = local_30;
      *(undefined4 *)(this + (local_28 + 5) * 4) = local_2c;
    }
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      for (local_10 = 0; local_10 < 0x100; local_10 = local_10 + 2) {
        Encrypt(this,(SBlock *)&local_30);
        *(undefined4 *)(this + (local_24 * 0x100 + local_10 + 0x14) * 4 + 8) = local_30;
        *(undefined4 *)(this + (local_24 * 0x100 + local_10 + 0x15) * 4 + 8) = local_2c;
      }
    }
  }
  return;
}

```

---

## Decrypt

```asm
// === 080a99b0 CBlowFish::Decrypt  [0x080a99b0-0x80a9bbb] ===
 80a99b0:	55                   	push   %ebp
 80a99b1:	89 e5                	mov    %esp,%ebp
 80a99b3:	83 ec 28             	sub    $0x28,%esp
 80a99b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a99b9:	8b 00                	mov    (%eax),%eax
 80a99bb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80a99be:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a99c1:	8b 40 04             	mov    0x4(%eax),%eax
 80a99c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80a99c7:	8b 45 08             	mov    0x8(%ebp),%eax
 80a99ca:	8b 40 54             	mov    0x54(%eax),%eax
 80a99cd:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a99d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a99d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a99d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80a99da:	89 04 24             	mov    %eax,(%esp)
 80a99dd:	e8 68 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a99e2:	8b 55 08             	mov    0x8(%ebp),%edx
 80a99e5:	8b 52 50             	mov    0x50(%edx),%edx
 80a99e8:	31 d0                	xor    %edx,%eax
 80a99ea:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a99ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a99f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a99f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80a99f7:	89 04 24             	mov    %eax,(%esp)
 80a99fa:	e8 4b 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a99ff:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9a02:	8b 52 4c             	mov    0x4c(%edx),%edx
 80a9a05:	31 d0                	xor    %edx,%eax
 80a9a07:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9a0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9a0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9a11:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9a14:	89 04 24             	mov    %eax,(%esp)
 80a9a17:	e8 2e 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9a1c:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9a1f:	8b 52 48             	mov    0x48(%edx),%edx
 80a9a22:	31 d0                	xor    %edx,%eax
 80a9a24:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9a27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9a2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9a2e:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9a31:	89 04 24             	mov    %eax,(%esp)
 80a9a34:	e8 11 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9a39:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9a3c:	8b 52 44             	mov    0x44(%edx),%edx
 80a9a3f:	31 d0                	xor    %edx,%eax
 80a9a41:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9a44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9a47:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9a4b:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9a4e:	89 04 24             	mov    %eax,(%esp)
 80a9a51:	e8 f4 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9a56:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9a59:	8b 52 40             	mov    0x40(%edx),%edx
 80a9a5c:	31 d0                	xor    %edx,%eax
 80a9a5e:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9a61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9a64:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9a68:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9a6b:	89 04 24             	mov    %eax,(%esp)
 80a9a6e:	e8 d7 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9a73:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9a76:	8b 52 3c             	mov    0x3c(%edx),%edx
 80a9a79:	31 d0                	xor    %edx,%eax
 80a9a7b:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9a7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9a81:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9a85:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9a88:	89 04 24             	mov    %eax,(%esp)
 80a9a8b:	e8 ba 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9a90:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9a93:	8b 52 38             	mov    0x38(%edx),%edx
 80a9a96:	31 d0                	xor    %edx,%eax
 80a9a98:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9a9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9a9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9aa5:	89 04 24             	mov    %eax,(%esp)
 80a9aa8:	e8 9d 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9aad:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9ab0:	8b 52 34             	mov    0x34(%edx),%edx
 80a9ab3:	31 d0                	xor    %edx,%eax
 80a9ab5:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9ab8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9abb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9abf:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9ac2:	89 04 24             	mov    %eax,(%esp)
 80a9ac5:	e8 80 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9aca:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9acd:	8b 52 30             	mov    0x30(%edx),%edx
 80a9ad0:	31 d0                	xor    %edx,%eax
 80a9ad2:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9ad5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9ad8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9adc:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9adf:	89 04 24             	mov    %eax,(%esp)
 80a9ae2:	e8 63 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9ae7:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9aea:	8b 52 2c             	mov    0x2c(%edx),%edx
 80a9aed:	31 d0                	xor    %edx,%eax
 80a9aef:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9af2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9af5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9af9:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9afc:	89 04 24             	mov    %eax,(%esp)
 80a9aff:	e8 46 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9b04:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9b07:	8b 52 28             	mov    0x28(%edx),%edx
 80a9b0a:	31 d0                	xor    %edx,%eax
 80a9b0c:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9b0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9b12:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9b16:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9b19:	89 04 24             	mov    %eax,(%esp)
 80a9b1c:	e8 29 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9b21:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9b24:	8b 52 24             	mov    0x24(%edx),%edx
 80a9b27:	31 d0                	xor    %edx,%eax
 80a9b29:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9b2c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9b2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9b33:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9b36:	89 04 24             	mov    %eax,(%esp)
 80a9b39:	e8 0c 08 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9b3e:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9b41:	8b 52 20             	mov    0x20(%edx),%edx
 80a9b44:	31 d0                	xor    %edx,%eax
 80a9b46:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9b49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9b4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9b50:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9b53:	89 04 24             	mov    %eax,(%esp)
 80a9b56:	e8 ef 07 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9b5b:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9b5e:	8b 52 1c             	mov    0x1c(%edx),%edx
 80a9b61:	31 d0                	xor    %edx,%eax
 80a9b63:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9b66:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9b69:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9b6d:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9b70:	89 04 24             	mov    %eax,(%esp)
 80a9b73:	e8 d2 07 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9b78:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9b7b:	8b 52 18             	mov    0x18(%edx),%edx
 80a9b7e:	31 d0                	xor    %edx,%eax
 80a9b80:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9b83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9b86:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9b8a:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9b8d:	89 04 24             	mov    %eax,(%esp)
 80a9b90:	e8 b5 07 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9b95:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9b98:	8b 52 14             	mov    0x14(%edx),%edx
 80a9b9b:	31 d0                	xor    %edx,%eax
 80a9b9d:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9ba0:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9ba3:	8b 40 10             	mov    0x10(%eax),%eax
 80a9ba6:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9ba9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9bac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80a9baf:	89 10                	mov    %edx,(%eax)
 80a9bb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9bb4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80a9bb7:	89 50 04             	mov    %edx,0x4(%eax)
 80a9bba:	c9                   	leave
 80a9bbb:	c3                   	ret

```

```c
// CBlowFish::Decrypt @ 0x80a99b0

/* CBlowFish::Decrypt(SBlock&) */

void __thiscall CBlowFish::Decrypt(CBlowFish *this,SBlock *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(this + 0x54);
  uVar3 = F(this,uVar1 ^ uVar4);
  uVar2 = uVar2 ^ uVar3 ^ *(uint *)(this + 0x50);
  uVar3 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ uVar3 ^ *(uint *)(this + 0x4c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x48);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x44);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x40);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x3c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x38);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x34);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x30);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x2c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x28);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x24);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x20);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x1c);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x18);
  uVar3 = F(this,uVar2);
  uVar4 = *(uint *)(this + 0x14);
  *(uint *)param_1 = uVar2 ^ *(uint *)(this + 0x10);
  *(uint *)(param_1 + 4) = uVar1 ^ uVar3 ^ uVar4;
  return;
}

```

---

## Decrypt_080a9d5e

```asm
// === 080a9d5e CBlowFish::Decrypt  [0x080a9d5e-0x80a9f4d] ===
 80a9d5e:	55                   	push   %ebp
 80a9d5f:	89 e5                	mov    %esp,%ebp
 80a9d61:	83 ec 48             	sub    $0x48,%esp
 80a9d64:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80a9d68:	74 0a                	je     80a9d74 <_ZN9CBlowFish7DecryptEPhji+0x16>
 80a9d6a:	8b 45 10             	mov    0x10(%ebp),%eax
 80a9d6d:	83 e0 07             	and    $0x7,%eax
 80a9d70:	85 c0                	test   %eax,%eax
 80a9d72:	74 0a                	je     80a9d7e <_ZN9CBlowFish7DecryptEPhji+0x20>
 80a9d74:	b8 06 00 00 70       	mov    $0x70000006,%eax
 80a9d79:	e9 ce 01 00 00       	jmp    80a9f4c <_ZN9CBlowFish7DecryptEPhji+0x1ee>
 80a9d7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80a9d85:	00 
 80a9d86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a9d8d:	00 
 80a9d8e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9d91:	89 04 24             	mov    %eax,(%esp)
 80a9d94:	e8 5d 01 ff ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80a9d99:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 80a9d9d:	0f 85 aa 00 00 00    	jne    80a9e4d <_ZN9CBlowFish7DecryptEPhji+0xef>
 80a9da3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80a9daa:	00 
 80a9dab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a9db2:	00 
 80a9db3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80a9db6:	89 04 24             	mov    %eax,(%esp)
 80a9db9:	e8 38 01 ff ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80a9dbe:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9dc1:	83 c0 08             	add    $0x8,%eax
 80a9dc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9dc8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80a9dcb:	89 04 24             	mov    %eax,(%esp)
 80a9dce:	e8 25 05 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a9dd3:	eb 68                	jmp    80a9e3d <_ZN9CBlowFish7DecryptEPhji+0xdf>
 80a9dd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9ddc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9ddf:	89 04 24             	mov    %eax,(%esp)
 80a9de2:	e8 e9 05 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9de7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9dea:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80a9ded:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9df0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80a9df3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9df6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9dfa:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9dfd:	89 04 24             	mov    %eax,(%esp)
 80a9e00:	e8 ab fb ff ff       	call   80a99b0 <_ZN9CBlowFish7DecryptER6SBlock>
 80a9e05:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80a9e08:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9e0c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9e0f:	89 04 24             	mov    %eax,(%esp)
 80a9e12:	e8 fd 04 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80a9e17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80a9e1a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80a9e1d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a9e20:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80a9e23:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80a9e27:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9e2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9e2e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9e31:	89 04 24             	mov    %eax,(%esp)
 80a9e34:	e8 ca 06 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80a9e39:	83 6d 10 08          	subl   $0x8,0x10(%ebp)
 80a9e3d:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 80a9e41:	0f 97 c0             	seta   %al
 80a9e44:	84 c0                	test   %al,%al
 80a9e46:	75 8d                	jne    80a9dd5 <_ZN9CBlowFish7DecryptEPhji+0x77>
 80a9e48:	e9 fa 00 00 00       	jmp    80a9f47 <_ZN9CBlowFish7DecryptEPhji+0x1e9>
 80a9e4d:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 80a9e51:	0f 85 e5 00 00 00    	jne    80a9f3c <_ZN9CBlowFish7DecryptEPhji+0x1de>
 80a9e57:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80a9e5e:	00 
 80a9e5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a9e66:	00 
 80a9e67:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80a9e6a:	89 04 24             	mov    %eax,(%esp)
 80a9e6d:	e8 84 00 ff ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80a9e72:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9e75:	83 c0 08             	add    $0x8,%eax
 80a9e78:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9e7c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80a9e7f:	89 04 24             	mov    %eax,(%esp)
 80a9e82:	e8 71 04 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a9e87:	eb 68                	jmp    80a9ef1 <_ZN9CBlowFish7DecryptEPhji+0x193>
 80a9e89:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9e8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9e90:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9e93:	89 04 24             	mov    %eax,(%esp)
 80a9e96:	e8 35 05 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9e9b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80a9e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9ea2:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9ea5:	89 04 24             	mov    %eax,(%esp)
 80a9ea8:	e8 f7 f8 ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a9ead:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9eb0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80a9eb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9eb6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80a9eb9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80a9ebc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9ec0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9ec3:	89 04 24             	mov    %eax,(%esp)
 80a9ec6:	e8 49 04 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80a9ecb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9ece:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80a9ed1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9ed4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80a9ed7:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80a9edb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9ede:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9ee2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9ee5:	89 04 24             	mov    %eax,(%esp)
 80a9ee8:	e8 16 06 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80a9eed:	83 6d 10 08          	subl   $0x8,0x10(%ebp)
 80a9ef1:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 80a9ef5:	0f 97 c0             	seta   %al
 80a9ef8:	84 c0                	test   %al,%al
 80a9efa:	75 8d                	jne    80a9e89 <_ZN9CBlowFish7DecryptEPhji+0x12b>
 80a9efc:	eb 49                	jmp    80a9f47 <_ZN9CBlowFish7DecryptEPhji+0x1e9>
 80a9efe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9f01:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9f05:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9f08:	89 04 24             	mov    %eax,(%esp)
 80a9f0b:	e8 c0 04 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9f10:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9f13:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9f17:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9f1a:	89 04 24             	mov    %eax,(%esp)
 80a9f1d:	e8 8e fa ff ff       	call   80a99b0 <_ZN9CBlowFish7DecryptER6SBlock>
 80a9f22:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80a9f26:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9f29:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9f2d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9f30:	89 04 24             	mov    %eax,(%esp)
 80a9f33:	e8 cb 05 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80a9f38:	83 6d 10 08          	subl   $0x8,0x10(%ebp)
 80a9f3c:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 80a9f40:	0f 97 c0             	seta   %al
 80a9f43:	84 c0                	test   %al,%al
 80a9f45:	75 b7                	jne    80a9efe <_ZN9CBlowFish7DecryptEPhji+0x1a0>
 80a9f47:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80a9f4c:	c9                   	leave
 80a9f4d:	c3                   	ret

```

```c
// CBlowFish::Decrypt @ 0x80a9d5e

/* CBlowFish::Decrypt(unsigned char*, unsigned int, int) */

undefined4 __thiscall CBlowFish::Decrypt(CBlowFish *this,uchar *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_2 == 0) || ((param_2 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_3 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,0,0);
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        Decrypt(this,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_1c;
        local_20 = local_18;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else if (param_3 == 2) {
      SBlock::SBlock((SBlock *)&local_2c,0,0);
      SBlock::SBlock((SBlock *)&local_34,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_34);
        local_2c = local_14;
        local_28 = local_10;
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_34);
        local_34 = local_2c;
        local_30 = local_28;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else {
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Decrypt(this,(SBlock *)&local_14);
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## Decrypt_080aa0fc

```asm
// === 080aa0fc CBlowFish::Decrypt  [0x080aa0fc-0x80aa603] ===
 80aa0fc:	55                   	push   %ebp
 80aa0fd:	89 e5                	mov    %esp,%ebp
 80aa0ff:	83 ec 48             	sub    $0x48,%esp
 80aa102:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80aa106:	74 0a                	je     80aa112 <_ZN9CBlowFish7DecryptEPKhPhji+0x16>
 80aa108:	8b 45 14             	mov    0x14(%ebp),%eax
 80aa10b:	83 e0 07             	and    $0x7,%eax
 80aa10e:	85 c0                	test   %eax,%eax
 80aa110:	74 0a                	je     80aa11c <_ZN9CBlowFish7DecryptEPKhPhji+0x20>
 80aa112:	b8 06 00 00 70       	mov    $0x70000006,%eax
 80aa117:	e9 da 01 00 00       	jmp    80aa2f6 <_ZN9CBlowFish7DecryptEPKhPhji+0x1fa>
 80aa11c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80aa123:	00 
 80aa124:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80aa12b:	00 
 80aa12c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa12f:	89 04 24             	mov    %eax,(%esp)
 80aa132:	e8 bf fd fe ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80aa137:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 80aa13b:	0f 85 ae 00 00 00    	jne    80aa1ef <_ZN9CBlowFish7DecryptEPKhPhji+0xf3>
 80aa141:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80aa148:	00 
 80aa149:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80aa150:	00 
 80aa151:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80aa154:	89 04 24             	mov    %eax,(%esp)
 80aa157:	e8 9a fd fe ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80aa15c:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa15f:	83 c0 08             	add    $0x8,%eax
 80aa162:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa166:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80aa169:	89 04 24             	mov    %eax,(%esp)
 80aa16c:	e8 87 01 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80aa171:	eb 6c                	jmp    80aa1df <_ZN9CBlowFish7DecryptEPKhPhji+0xe3>
 80aa173:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa176:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa17a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa17d:	89 04 24             	mov    %eax,(%esp)
 80aa180:	e8 4b 02 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80aa185:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80aa188:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80aa18b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa18e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80aa191:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa194:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa198:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa19b:	89 04 24             	mov    %eax,(%esp)
 80aa19e:	e8 0d f8 ff ff       	call   80a99b0 <_ZN9CBlowFish7DecryptER6SBlock>
 80aa1a3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80aa1a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa1aa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa1ad:	89 04 24             	mov    %eax,(%esp)
 80aa1b0:	e8 5f 01 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80aa1b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80aa1b8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80aa1bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80aa1be:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80aa1c1:	83 45 10 08          	addl   $0x8,0x10(%ebp)
 80aa1c5:	8b 45 10             	mov    0x10(%ebp),%eax
 80aa1c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa1cc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa1cf:	89 04 24             	mov    %eax,(%esp)
 80aa1d2:	e8 2c 03 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80aa1d7:	83 6d 14 08          	subl   $0x8,0x14(%ebp)
 80aa1db:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80aa1df:	83 7d 14 07          	cmpl   $0x7,0x14(%ebp)
 80aa1e3:	0f 97 c0             	seta   %al
 80aa1e6:	84 c0                	test   %al,%al
 80aa1e8:	75 89                	jne    80aa173 <_ZN9CBlowFish7DecryptEPKhPhji+0x77>
 80aa1ea:	e9 02 01 00 00       	jmp    80aa2f1 <_ZN9CBlowFish7DecryptEPKhPhji+0x1f5>
 80aa1ef:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 80aa1f3:	0f 85 ed 00 00 00    	jne    80aa2e6 <_ZN9CBlowFish7DecryptEPKhPhji+0x1ea>
 80aa1f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80aa200:	00 
 80aa201:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80aa208:	00 
 80aa209:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80aa20c:	89 04 24             	mov    %eax,(%esp)
 80aa20f:	e8 e2 fc fe ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80aa214:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa217:	83 c0 08             	add    $0x8,%eax
 80aa21a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa21e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80aa221:	89 04 24             	mov    %eax,(%esp)
 80aa224:	e8 cf 00 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80aa229:	eb 6c                	jmp    80aa297 <_ZN9CBlowFish7DecryptEPKhPhji+0x19b>
 80aa22b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa22e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa232:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa235:	89 04 24             	mov    %eax,(%esp)
 80aa238:	e8 93 01 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80aa23d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80aa240:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa244:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa247:	89 04 24             	mov    %eax,(%esp)
 80aa24a:	e8 55 f5 ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80aa24f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80aa252:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80aa255:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa258:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80aa25b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80aa25e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa262:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa265:	89 04 24             	mov    %eax,(%esp)
 80aa268:	e8 a7 00 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80aa26d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80aa270:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80aa273:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80aa276:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80aa279:	83 45 10 08          	addl   $0x8,0x10(%ebp)
 80aa27d:	8b 45 10             	mov    0x10(%ebp),%eax
 80aa280:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa284:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa287:	89 04 24             	mov    %eax,(%esp)
 80aa28a:	e8 74 02 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80aa28f:	83 6d 14 08          	subl   $0x8,0x14(%ebp)
 80aa293:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80aa297:	83 7d 14 07          	cmpl   $0x7,0x14(%ebp)
 80aa29b:	0f 97 c0             	seta   %al
 80aa29e:	84 c0                	test   %al,%al
 80aa2a0:	75 89                	jne    80aa22b <_ZN9CBlowFish7DecryptEPKhPhji+0x12f>
 80aa2a2:	eb 4d                	jmp    80aa2f1 <_ZN9CBlowFish7DecryptEPKhPhji+0x1f5>
 80aa2a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa2a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa2ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa2ae:	89 04 24             	mov    %eax,(%esp)
 80aa2b1:	e8 1a 01 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80aa2b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa2b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa2bd:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa2c0:	89 04 24             	mov    %eax,(%esp)
 80aa2c3:	e8 e8 f6 ff ff       	call   80a99b0 <_ZN9CBlowFish7DecryptER6SBlock>
 80aa2c8:	83 45 10 08          	addl   $0x8,0x10(%ebp)
 80aa2cc:	8b 45 10             	mov    0x10(%ebp),%eax
 80aa2cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa2d3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa2d6:	89 04 24             	mov    %eax,(%esp)
 80aa2d9:	e8 25 02 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80aa2de:	83 6d 14 08          	subl   $0x8,0x14(%ebp)
 80aa2e2:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80aa2e6:	83 7d 14 07          	cmpl   $0x7,0x14(%ebp)
 80aa2ea:	0f 97 c0             	seta   %al
 80aa2ed:	84 c0                	test   %al,%al
 80aa2ef:	75 b3                	jne    80aa2a4 <_ZN9CBlowFish7DecryptEPKhPhji+0x1a8>
 80aa2f1:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80aa2f6:	c9                   	leave
 80aa2f7:	c3                   	ret

080aa2f8 <_ZN6SBlockC1ERKS_>:
 80aa2f8:	55                   	push   %ebp
 80aa2f9:	89 e5                	mov    %esp,%ebp
 80aa2fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa2fe:	8b 10                	mov    (%eax),%edx
 80aa300:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa303:	89 10                	mov    %edx,(%eax)
 80aa305:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa308:	8b 50 04             	mov    0x4(%eax),%edx
 80aa30b:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa30e:	89 50 04             	mov    %edx,0x4(%eax)
 80aa311:	5d                   	pop    %ebp
 80aa312:	c3                   	ret
 80aa313:	90                   	nop

080aa314 <_ZN6SBlockeOERS_>:
 80aa314:	55                   	push   %ebp
 80aa315:	89 e5                	mov    %esp,%ebp
 80aa317:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa31a:	8b 10                	mov    (%eax),%edx
 80aa31c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa31f:	8b 00                	mov    (%eax),%eax
 80aa321:	31 c2                	xor    %eax,%edx
 80aa323:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa326:	89 10                	mov    %edx,(%eax)
 80aa328:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa32b:	8b 50 04             	mov    0x4(%eax),%edx
 80aa32e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa331:	8b 40 04             	mov    0x4(%eax),%eax
 80aa334:	31 c2                	xor    %eax,%edx
 80aa336:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa339:	89 50 04             	mov    %edx,0x4(%eax)
 80aa33c:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa33f:	5d                   	pop    %ebp
 80aa340:	c3                   	ret

080aa341 <_Z4Bytej>:
 80aa341:	55                   	push   %ebp
 80aa342:	89 e5                	mov    %esp,%ebp
 80aa344:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa347:	5d                   	pop    %ebp
 80aa348:	c3                   	ret
 80aa349:	90                   	nop

080aa34a <_ZN9CBlowFish1FEj>:
 80aa34a:	55                   	push   %ebp
 80aa34b:	89 e5                	mov    %esp,%ebp
 80aa34d:	53                   	push   %ebx
 80aa34e:	83 ec 14             	sub    $0x14,%esp
 80aa351:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa354:	c1 e8 18             	shr    $0x18,%eax
 80aa357:	89 04 24             	mov    %eax,(%esp)
 80aa35a:	e8 e2 ff ff ff       	call   80aa341 <_Z4Bytej>
 80aa35f:	0f b6 d0             	movzbl %al,%edx
 80aa362:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa365:	83 c2 14             	add    $0x14,%edx
 80aa368:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 80aa36c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa36f:	c1 e8 10             	shr    $0x10,%eax
 80aa372:	89 04 24             	mov    %eax,(%esp)
 80aa375:	e8 c7 ff ff ff       	call   80aa341 <_Z4Bytej>
 80aa37a:	0f b6 d0             	movzbl %al,%edx
 80aa37d:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa380:	81 c2 14 01 00 00    	add    $0x114,%edx
 80aa386:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80aa38a:	01 c3                	add    %eax,%ebx
 80aa38c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa38f:	c1 e8 08             	shr    $0x8,%eax
 80aa392:	89 04 24             	mov    %eax,(%esp)
 80aa395:	e8 a7 ff ff ff       	call   80aa341 <_Z4Bytej>
 80aa39a:	0f b6 d0             	movzbl %al,%edx
 80aa39d:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa3a0:	81 c2 14 02 00 00    	add    $0x214,%edx
 80aa3a6:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80aa3aa:	31 c3                	xor    %eax,%ebx
 80aa3ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa3af:	89 04 24             	mov    %eax,(%esp)
 80aa3b2:	e8 8a ff ff ff       	call   80aa341 <_Z4Bytej>
 80aa3b7:	0f b6 d0             	movzbl %al,%edx
 80aa3ba:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa3bd:	81 c2 14 03 00 00    	add    $0x314,%edx
 80aa3c3:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80aa3c7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80aa3ca:	83 c4 14             	add    $0x14,%esp
 80aa3cd:	5b                   	pop    %ebx
 80aa3ce:	5d                   	pop    %ebp
 80aa3cf:	c3                   	ret

080aa3d0 <_Z12BytesToBlockPKhR6SBlock>:
 80aa3d0:	55                   	push   %ebp
 80aa3d1:	89 e5                	mov    %esp,%ebp
 80aa3d3:	83 ec 10             	sub    $0x10,%esp
 80aa3d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa3d9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80aa3df:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa3e2:	0f b6 00             	movzbl (%eax),%eax
 80aa3e5:	0f b6 c0             	movzbl %al,%eax
 80aa3e8:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa3eb:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa3ef:	c1 65 fc 18          	shll   $0x18,-0x4(%ebp)
 80aa3f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa3f6:	8b 00                	mov    (%eax),%eax
 80aa3f8:	89 c2                	mov    %eax,%edx
 80aa3fa:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa3fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa400:	89 10                	mov    %edx,(%eax)
 80aa402:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa405:	0f b6 00             	movzbl (%eax),%eax
 80aa408:	0f b6 c0             	movzbl %al,%eax
 80aa40b:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa40e:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa412:	c1 65 fc 10          	shll   $0x10,-0x4(%ebp)
 80aa416:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa419:	8b 00                	mov    (%eax),%eax
 80aa41b:	89 c2                	mov    %eax,%edx
 80aa41d:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa420:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa423:	89 10                	mov    %edx,(%eax)
 80aa425:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa428:	0f b6 00             	movzbl (%eax),%eax
 80aa42b:	0f b6 c0             	movzbl %al,%eax
 80aa42e:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa431:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa435:	c1 65 fc 08          	shll   $0x8,-0x4(%ebp)
 80aa439:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa43c:	8b 00                	mov    (%eax),%eax
 80aa43e:	89 c2                	mov    %eax,%edx
 80aa440:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa443:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa446:	89 10                	mov    %edx,(%eax)
 80aa448:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa44b:	0f b6 00             	movzbl (%eax),%eax
 80aa44e:	0f b6 c0             	movzbl %al,%eax
 80aa451:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa454:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa458:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa45b:	8b 00                	mov    (%eax),%eax
 80aa45d:	89 c2                	mov    %eax,%edx
 80aa45f:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa462:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa465:	89 10                	mov    %edx,(%eax)
 80aa467:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa46a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80aa471:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa474:	0f b6 00             	movzbl (%eax),%eax
 80aa477:	0f b6 c0             	movzbl %al,%eax
 80aa47a:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa47d:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa481:	c1 65 fc 18          	shll   $0x18,-0x4(%ebp)
 80aa485:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa488:	8b 40 04             	mov    0x4(%eax),%eax
 80aa48b:	89 c2                	mov    %eax,%edx
 80aa48d:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa490:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa493:	89 50 04             	mov    %edx,0x4(%eax)
 80aa496:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa499:	0f b6 00             	movzbl (%eax),%eax
 80aa49c:	0f b6 c0             	movzbl %al,%eax
 80aa49f:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa4a2:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa4a6:	c1 65 fc 10          	shll   $0x10,-0x4(%ebp)
 80aa4aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa4ad:	8b 40 04             	mov    0x4(%eax),%eax
 80aa4b0:	89 c2                	mov    %eax,%edx
 80aa4b2:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa4b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa4b8:	89 50 04             	mov    %edx,0x4(%eax)
 80aa4bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa4be:	0f b6 00             	movzbl (%eax),%eax
 80aa4c1:	0f b6 c0             	movzbl %al,%eax
 80aa4c4:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa4c7:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa4cb:	c1 65 fc 08          	shll   $0x8,-0x4(%ebp)
 80aa4cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa4d2:	8b 40 04             	mov    0x4(%eax),%eax
 80aa4d5:	89 c2                	mov    %eax,%edx
 80aa4d7:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa4da:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa4dd:	89 50 04             	mov    %edx,0x4(%eax)
 80aa4e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa4e3:	0f b6 00             	movzbl (%eax),%eax
 80aa4e6:	0f b6 c0             	movzbl %al,%eax
 80aa4e9:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80aa4ec:	83 45 08 01          	addl   $0x1,0x8(%ebp)
 80aa4f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa4f3:	8b 40 04             	mov    0x4(%eax),%eax
 80aa4f6:	89 c2                	mov    %eax,%edx
 80aa4f8:	0b 55 fc             	or     -0x4(%ebp),%edx
 80aa4fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa4fe:	89 50 04             	mov    %edx,0x4(%eax)
 80aa501:	c9                   	leave
 80aa502:	c3                   	ret

080aa503 <_Z12BlockToBytesRK6SBlockPh>:
 80aa503:	55                   	push   %ebp
 80aa504:	89 e5                	mov    %esp,%ebp
 80aa506:	83 ec 28             	sub    $0x28,%esp
 80aa509:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa50c:	8b 40 04             	mov    0x4(%eax),%eax
 80aa50f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa512:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa516:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa519:	89 04 24             	mov    %eax,(%esp)
 80aa51c:	e8 20 fe ff ff       	call   80aa341 <_Z4Bytej>
 80aa521:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa524:	88 02                	mov    %al,(%edx)
 80aa526:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa529:	8b 40 04             	mov    0x4(%eax),%eax
 80aa52c:	c1 e8 08             	shr    $0x8,%eax
 80aa52f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa532:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa536:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa539:	89 04 24             	mov    %eax,(%esp)
 80aa53c:	e8 00 fe ff ff       	call   80aa341 <_Z4Bytej>
 80aa541:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa544:	88 02                	mov    %al,(%edx)
 80aa546:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa549:	8b 40 04             	mov    0x4(%eax),%eax
 80aa54c:	c1 e8 10             	shr    $0x10,%eax
 80aa54f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa552:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa556:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa559:	89 04 24             	mov    %eax,(%esp)
 80aa55c:	e8 e0 fd ff ff       	call   80aa341 <_Z4Bytej>
 80aa561:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa564:	88 02                	mov    %al,(%edx)
 80aa566:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa569:	8b 40 04             	mov    0x4(%eax),%eax
 80aa56c:	c1 e8 18             	shr    $0x18,%eax
 80aa56f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa572:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa576:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa579:	89 04 24             	mov    %eax,(%esp)
 80aa57c:	e8 c0 fd ff ff       	call   80aa341 <_Z4Bytej>
 80aa581:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa584:	88 02                	mov    %al,(%edx)
 80aa586:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa589:	8b 00                	mov    (%eax),%eax
 80aa58b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa58e:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa592:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa595:	89 04 24             	mov    %eax,(%esp)
 80aa598:	e8 a4 fd ff ff       	call   80aa341 <_Z4Bytej>
 80aa59d:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa5a0:	88 02                	mov    %al,(%edx)
 80aa5a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa5a5:	8b 00                	mov    (%eax),%eax
 80aa5a7:	c1 e8 08             	shr    $0x8,%eax
 80aa5aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa5ad:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa5b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa5b4:	89 04 24             	mov    %eax,(%esp)
 80aa5b7:	e8 85 fd ff ff       	call   80aa341 <_Z4Bytej>
 80aa5bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa5bf:	88 02                	mov    %al,(%edx)
 80aa5c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa5c4:	8b 00                	mov    (%eax),%eax
 80aa5c6:	c1 e8 10             	shr    $0x10,%eax
 80aa5c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa5cc:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa5d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa5d3:	89 04 24             	mov    %eax,(%esp)
 80aa5d6:	e8 66 fd ff ff       	call   80aa341 <_Z4Bytej>
 80aa5db:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa5de:	88 02                	mov    %al,(%edx)
 80aa5e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa5e3:	8b 00                	mov    (%eax),%eax
 80aa5e5:	c1 e8 18             	shr    $0x18,%eax
 80aa5e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80aa5eb:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 80aa5ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa5f2:	89 04 24             	mov    %eax,(%esp)
 80aa5f5:	e8 47 fd ff ff       	call   80aa341 <_Z4Bytej>
 80aa5fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 80aa5fd:	88 02                	mov    %al,(%edx)
 80aa5ff:	c9                   	leave
 80aa600:	c3                   	ret
 80aa601:	90                   	nop
 80aa602:	90                   	nop
 80aa603:	90                   	nop

```

```c
// CBlowFish::Decrypt @ 0x80aa0fc

/* CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int) */

undefined4 __thiscall
CBlowFish::Decrypt(CBlowFish *this,uchar *param_1,uchar *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_3 == 0) || ((param_3 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_4 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,0,0);
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        Decrypt(this,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_1c;
        local_20 = local_18;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else if (param_4 == 2) {
      SBlock::SBlock((SBlock *)&local_2c,0,0);
      SBlock::SBlock((SBlock *)&local_34,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_34);
        local_2c = local_14;
        local_28 = local_10;
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_34);
        local_34 = local_2c;
        local_30 = local_28;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else {
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Decrypt(this,(SBlock *)&local_14);
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## Encrypt

```asm
// === 080a97a4 CBlowFish::Encrypt  [0x080a97a4-0x80a99af] ===
 80a97a4:	55                   	push   %ebp
 80a97a5:	89 e5                	mov    %esp,%ebp
 80a97a7:	83 ec 28             	sub    $0x28,%esp
 80a97aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a97ad:	8b 00                	mov    (%eax),%eax
 80a97af:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80a97b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a97b5:	8b 40 04             	mov    0x4(%eax),%eax
 80a97b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80a97bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80a97be:	8b 40 10             	mov    0x10(%eax),%eax
 80a97c1:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a97c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a97c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a97cb:	8b 45 08             	mov    0x8(%ebp),%eax
 80a97ce:	89 04 24             	mov    %eax,(%esp)
 80a97d1:	e8 74 0b 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a97d6:	8b 55 08             	mov    0x8(%ebp),%edx
 80a97d9:	8b 52 14             	mov    0x14(%edx),%edx
 80a97dc:	31 d0                	xor    %edx,%eax
 80a97de:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a97e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a97e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a97e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80a97eb:	89 04 24             	mov    %eax,(%esp)
 80a97ee:	e8 57 0b 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a97f3:	8b 55 08             	mov    0x8(%ebp),%edx
 80a97f6:	8b 52 18             	mov    0x18(%edx),%edx
 80a97f9:	31 d0                	xor    %edx,%eax
 80a97fb:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a97fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9801:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9805:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9808:	89 04 24             	mov    %eax,(%esp)
 80a980b:	e8 3a 0b 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9810:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9813:	8b 52 1c             	mov    0x1c(%edx),%edx
 80a9816:	31 d0                	xor    %edx,%eax
 80a9818:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a981b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a981e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9822:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9825:	89 04 24             	mov    %eax,(%esp)
 80a9828:	e8 1d 0b 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a982d:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9830:	8b 52 20             	mov    0x20(%edx),%edx
 80a9833:	31 d0                	xor    %edx,%eax
 80a9835:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9838:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a983b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a983f:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9842:	89 04 24             	mov    %eax,(%esp)
 80a9845:	e8 00 0b 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a984a:	8b 55 08             	mov    0x8(%ebp),%edx
 80a984d:	8b 52 24             	mov    0x24(%edx),%edx
 80a9850:	31 d0                	xor    %edx,%eax
 80a9852:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9855:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9858:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a985c:	8b 45 08             	mov    0x8(%ebp),%eax
 80a985f:	89 04 24             	mov    %eax,(%esp)
 80a9862:	e8 e3 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9867:	8b 55 08             	mov    0x8(%ebp),%edx
 80a986a:	8b 52 28             	mov    0x28(%edx),%edx
 80a986d:	31 d0                	xor    %edx,%eax
 80a986f:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9872:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9875:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9879:	8b 45 08             	mov    0x8(%ebp),%eax
 80a987c:	89 04 24             	mov    %eax,(%esp)
 80a987f:	e8 c6 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9884:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9887:	8b 52 2c             	mov    0x2c(%edx),%edx
 80a988a:	31 d0                	xor    %edx,%eax
 80a988c:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a988f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9892:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9896:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9899:	89 04 24             	mov    %eax,(%esp)
 80a989c:	e8 a9 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a98a1:	8b 55 08             	mov    0x8(%ebp),%edx
 80a98a4:	8b 52 30             	mov    0x30(%edx),%edx
 80a98a7:	31 d0                	xor    %edx,%eax
 80a98a9:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a98ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a98af:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a98b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80a98b6:	89 04 24             	mov    %eax,(%esp)
 80a98b9:	e8 8c 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a98be:	8b 55 08             	mov    0x8(%ebp),%edx
 80a98c1:	8b 52 34             	mov    0x34(%edx),%edx
 80a98c4:	31 d0                	xor    %edx,%eax
 80a98c6:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a98c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a98cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a98d0:	8b 45 08             	mov    0x8(%ebp),%eax
 80a98d3:	89 04 24             	mov    %eax,(%esp)
 80a98d6:	e8 6f 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a98db:	8b 55 08             	mov    0x8(%ebp),%edx
 80a98de:	8b 52 38             	mov    0x38(%edx),%edx
 80a98e1:	31 d0                	xor    %edx,%eax
 80a98e3:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a98e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a98e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a98ed:	8b 45 08             	mov    0x8(%ebp),%eax
 80a98f0:	89 04 24             	mov    %eax,(%esp)
 80a98f3:	e8 52 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a98f8:	8b 55 08             	mov    0x8(%ebp),%edx
 80a98fb:	8b 52 3c             	mov    0x3c(%edx),%edx
 80a98fe:	31 d0                	xor    %edx,%eax
 80a9900:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9903:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9906:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a990a:	8b 45 08             	mov    0x8(%ebp),%eax
 80a990d:	89 04 24             	mov    %eax,(%esp)
 80a9910:	e8 35 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9915:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9918:	8b 52 40             	mov    0x40(%edx),%edx
 80a991b:	31 d0                	xor    %edx,%eax
 80a991d:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9920:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9923:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9927:	8b 45 08             	mov    0x8(%ebp),%eax
 80a992a:	89 04 24             	mov    %eax,(%esp)
 80a992d:	e8 18 0a 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9932:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9935:	8b 52 44             	mov    0x44(%edx),%edx
 80a9938:	31 d0                	xor    %edx,%eax
 80a993a:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a993d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9940:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9944:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9947:	89 04 24             	mov    %eax,(%esp)
 80a994a:	e8 fb 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a994f:	8b 55 08             	mov    0x8(%ebp),%edx
 80a9952:	8b 52 48             	mov    0x48(%edx),%edx
 80a9955:	31 d0                	xor    %edx,%eax
 80a9957:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a995a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a995d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9961:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9964:	89 04 24             	mov    %eax,(%esp)
 80a9967:	e8 de 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a996c:	8b 55 08             	mov    0x8(%ebp),%edx
 80a996f:	8b 52 4c             	mov    0x4c(%edx),%edx
 80a9972:	31 d0                	xor    %edx,%eax
 80a9974:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a9977:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a997a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a997e:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9981:	89 04 24             	mov    %eax,(%esp)
 80a9984:	e8 c1 09 00 00       	call   80aa34a <_ZN9CBlowFish1FEj>
 80a9989:	8b 55 08             	mov    0x8(%ebp),%edx
 80a998c:	8b 52 50             	mov    0x50(%edx),%edx
 80a998f:	31 d0                	xor    %edx,%eax
 80a9991:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a9994:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9997:	8b 40 54             	mov    0x54(%eax),%eax
 80a999a:	31 45 f4             	xor    %eax,-0xc(%ebp)
 80a999d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a99a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80a99a3:	89 10                	mov    %edx,(%eax)
 80a99a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a99a8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80a99ab:	89 50 04             	mov    %edx,0x4(%eax)
 80a99ae:	c9                   	leave
 80a99af:	c3                   	ret

```

```c
// CBlowFish::Encrypt @ 0x80a97a4

/* CBlowFish::Encrypt(SBlock&) */

void __thiscall CBlowFish::Encrypt(CBlowFish *this,SBlock *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(this + 0x10);
  uVar3 = F(this,uVar1 ^ uVar4);
  uVar2 = uVar2 ^ uVar3 ^ *(uint *)(this + 0x14);
  uVar3 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ uVar3 ^ *(uint *)(this + 0x18);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x1c);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x20);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x24);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x28);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x2c);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x30);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x34);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x38);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x3c);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x40);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x44);
  uVar4 = F(this,uVar2);
  uVar1 = uVar1 ^ uVar4 ^ *(uint *)(this + 0x48);
  uVar4 = F(this,uVar1);
  uVar2 = uVar2 ^ uVar4 ^ *(uint *)(this + 0x4c);
  uVar3 = F(this,uVar2);
  uVar4 = *(uint *)(this + 0x50);
  *(uint *)param_1 = uVar2 ^ *(uint *)(this + 0x54);
  *(uint *)(param_1 + 4) = uVar1 ^ uVar3 ^ uVar4;
  return;
}

```

---

## Encrypt_080a9bbc

```asm
// === 080a9bbc CBlowFish::Encrypt  [0x080a9bbc-0x80a9d5d] ===
 80a9bbc:	55                   	push   %ebp
 80a9bbd:	89 e5                	mov    %esp,%ebp
 80a9bbf:	83 ec 38             	sub    $0x38,%esp
 80a9bc2:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80a9bc6:	74 0a                	je     80a9bd2 <_ZN9CBlowFish7EncryptEPhji+0x16>
 80a9bc8:	8b 45 10             	mov    0x10(%ebp),%eax
 80a9bcb:	83 e0 07             	and    $0x7,%eax
 80a9bce:	85 c0                	test   %eax,%eax
 80a9bd0:	74 0a                	je     80a9bdc <_ZN9CBlowFish7EncryptEPhji+0x20>
 80a9bd2:	b8 06 00 00 70       	mov    $0x70000006,%eax
 80a9bd7:	e9 80 01 00 00       	jmp    80a9d5c <_ZN9CBlowFish7EncryptEPhji+0x1a0>
 80a9bdc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80a9be3:	00 
 80a9be4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a9beb:	00 
 80a9bec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9bef:	89 04 24             	mov    %eax,(%esp)
 80a9bf2:	e8 ff 02 ff ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80a9bf7:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 80a9bfb:	0f 85 83 00 00 00    	jne    80a9c84 <_ZN9CBlowFish7EncryptEPhji+0xc8>
 80a9c01:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9c04:	83 c0 08             	add    $0x8,%eax
 80a9c07:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9c0b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80a9c0e:	89 04 24             	mov    %eax,(%esp)
 80a9c11:	e8 e2 06 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a9c16:	eb 5c                	jmp    80a9c74 <_ZN9CBlowFish7EncryptEPhji+0xb8>
 80a9c18:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9c1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9c1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9c22:	89 04 24             	mov    %eax,(%esp)
 80a9c25:	e8 a6 07 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9c2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80a9c2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9c31:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9c34:	89 04 24             	mov    %eax,(%esp)
 80a9c37:	e8 d8 06 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80a9c3c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9c3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9c43:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9c46:	89 04 24             	mov    %eax,(%esp)
 80a9c49:	e8 56 fb ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a9c4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9c51:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80a9c54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9c57:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80a9c5a:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80a9c5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9c61:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9c65:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9c68:	89 04 24             	mov    %eax,(%esp)
 80a9c6b:	e8 93 08 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80a9c70:	83 6d 10 08          	subl   $0x8,0x10(%ebp)
 80a9c74:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 80a9c78:	0f 97 c0             	seta   %al
 80a9c7b:	84 c0                	test   %al,%al
 80a9c7d:	75 99                	jne    80a9c18 <_ZN9CBlowFish7EncryptEPhji+0x5c>
 80a9c7f:	e9 d3 00 00 00       	jmp    80a9d57 <_ZN9CBlowFish7EncryptEPhji+0x19b>
 80a9c84:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 80a9c88:	0f 85 be 00 00 00    	jne    80a9d4c <_ZN9CBlowFish7EncryptEPhji+0x190>
 80a9c8e:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9c91:	83 c0 08             	add    $0x8,%eax
 80a9c94:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9c98:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80a9c9b:	89 04 24             	mov    %eax,(%esp)
 80a9c9e:	e8 55 06 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a9ca3:	eb 5c                	jmp    80a9d01 <_ZN9CBlowFish7EncryptEPhji+0x145>
 80a9ca5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80a9ca8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9cac:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9caf:	89 04 24             	mov    %eax,(%esp)
 80a9cb2:	e8 ed fa ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a9cb7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9cba:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9cbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9cc1:	89 04 24             	mov    %eax,(%esp)
 80a9cc4:	e8 07 07 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9cc9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80a9ccc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9cd0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9cd3:	89 04 24             	mov    %eax,(%esp)
 80a9cd6:	e8 39 06 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80a9cdb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9cde:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80a9ce1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9ce4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80a9ce7:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80a9ceb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9cee:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9cf2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9cf5:	89 04 24             	mov    %eax,(%esp)
 80a9cf8:	e8 06 08 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80a9cfd:	83 6d 10 08          	subl   $0x8,0x10(%ebp)
 80a9d01:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 80a9d05:	0f 97 c0             	seta   %al
 80a9d08:	84 c0                	test   %al,%al
 80a9d0a:	75 99                	jne    80a9ca5 <_ZN9CBlowFish7EncryptEPhji+0xe9>
 80a9d0c:	eb 49                	jmp    80a9d57 <_ZN9CBlowFish7EncryptEPhji+0x19b>
 80a9d0e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9d11:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9d15:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9d18:	89 04 24             	mov    %eax,(%esp)
 80a9d1b:	e8 b0 06 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9d20:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9d23:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9d27:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9d2a:	89 04 24             	mov    %eax,(%esp)
 80a9d2d:	e8 72 fa ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a9d32:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80a9d36:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9d39:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9d3d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9d40:	89 04 24             	mov    %eax,(%esp)
 80a9d43:	e8 bb 07 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80a9d48:	83 6d 10 08          	subl   $0x8,0x10(%ebp)
 80a9d4c:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 80a9d50:	0f 97 c0             	seta   %al
 80a9d53:	84 c0                	test   %al,%al
 80a9d55:	75 b7                	jne    80a9d0e <_ZN9CBlowFish7EncryptEPhji+0x152>
 80a9d57:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80a9d5c:	c9                   	leave
 80a9d5d:	c3                   	ret

```

```c
// CBlowFish::Encrypt @ 0x80a9bbc

/* CBlowFish::Encrypt(unsigned char*, unsigned int, int) */

undefined4 __thiscall CBlowFish::Encrypt(CBlowFish *this,uchar *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_2 == 0) || ((param_2 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_3 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_1c);
        Encrypt(this,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else if (param_3 == 2) {
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_2; param_2 = param_2 - 8) {
        Encrypt(this,(SBlock *)&local_24);
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_14;
        local_20 = local_10;
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    else {
      for (; 7 < param_2; param_2 = param_2 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_14);
        param_1 = param_1 + 8;
        BlockToBytes((SBlock *)&local_14,param_1);
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## Encrypt_080a9f4e

```asm
// === 080a9f4e CBlowFish::Encrypt  [0x080a9f4e-0x80aa0fb] ===
 80a9f4e:	55                   	push   %ebp
 80a9f4f:	89 e5                	mov    %esp,%ebp
 80a9f51:	83 ec 38             	sub    $0x38,%esp
 80a9f54:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80a9f58:	74 0a                	je     80a9f64 <_ZN9CBlowFish7EncryptEPKhPhji+0x16>
 80a9f5a:	8b 45 14             	mov    0x14(%ebp),%eax
 80a9f5d:	83 e0 07             	and    $0x7,%eax
 80a9f60:	85 c0                	test   %eax,%eax
 80a9f62:	74 0a                	je     80a9f6e <_ZN9CBlowFish7EncryptEPKhPhji+0x20>
 80a9f64:	b8 06 00 00 70       	mov    $0x70000006,%eax
 80a9f69:	e9 8c 01 00 00       	jmp    80aa0fa <_ZN9CBlowFish7EncryptEPKhPhji+0x1ac>
 80a9f6e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80a9f75:	00 
 80a9f76:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80a9f7d:	00 
 80a9f7e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9f81:	89 04 24             	mov    %eax,(%esp)
 80a9f84:	e8 6d ff fe ff       	call   8099ef6 <_ZN6SBlockC1Ejj>
 80a9f89:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 80a9f8d:	0f 85 87 00 00 00    	jne    80aa01a <_ZN9CBlowFish7EncryptEPKhPhji+0xcc>
 80a9f93:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9f96:	83 c0 08             	add    $0x8,%eax
 80a9f99:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9f9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80a9fa0:	89 04 24             	mov    %eax,(%esp)
 80a9fa3:	e8 50 03 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80a9fa8:	eb 60                	jmp    80aa00a <_ZN9CBlowFish7EncryptEPKhPhji+0xbc>
 80a9faa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9fb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a9fb4:	89 04 24             	mov    %eax,(%esp)
 80a9fb7:	e8 14 04 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80a9fbc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80a9fbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9fc3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9fc6:	89 04 24             	mov    %eax,(%esp)
 80a9fc9:	e8 46 03 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80a9fce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9fd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9fd5:	8b 45 08             	mov    0x8(%ebp),%eax
 80a9fd8:	89 04 24             	mov    %eax,(%esp)
 80a9fdb:	e8 c4 f7 ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80a9fe0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9fe3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80a9fe6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80a9fe9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80a9fec:	83 45 10 08          	addl   $0x8,0x10(%ebp)
 80a9ff0:	8b 45 10             	mov    0x10(%ebp),%eax
 80a9ff3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a9ff7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80a9ffa:	89 04 24             	mov    %eax,(%esp)
 80a9ffd:	e8 01 05 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80aa002:	83 6d 14 08          	subl   $0x8,0x14(%ebp)
 80aa006:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80aa00a:	83 7d 14 07          	cmpl   $0x7,0x14(%ebp)
 80aa00e:	0f 97 c0             	seta   %al
 80aa011:	84 c0                	test   %al,%al
 80aa013:	75 95                	jne    80a9faa <_ZN9CBlowFish7EncryptEPKhPhji+0x5c>
 80aa015:	e9 db 00 00 00       	jmp    80aa0f5 <_ZN9CBlowFish7EncryptEPKhPhji+0x1a7>
 80aa01a:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 80aa01e:	0f 85 c6 00 00 00    	jne    80aa0ea <_ZN9CBlowFish7EncryptEPKhPhji+0x19c>
 80aa024:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa027:	83 c0 08             	add    $0x8,%eax
 80aa02a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa02e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80aa031:	89 04 24             	mov    %eax,(%esp)
 80aa034:	e8 bf 02 00 00       	call   80aa2f8 <_ZN6SBlockC1ERKS_>
 80aa039:	eb 60                	jmp    80aa09b <_ZN9CBlowFish7EncryptEPKhPhji+0x14d>
 80aa03b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80aa03e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa042:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa045:	89 04 24             	mov    %eax,(%esp)
 80aa048:	e8 57 f7 ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80aa04d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa050:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa054:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa057:	89 04 24             	mov    %eax,(%esp)
 80aa05a:	e8 71 03 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80aa05f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80aa062:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa066:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa069:	89 04 24             	mov    %eax,(%esp)
 80aa06c:	e8 a3 02 00 00       	call   80aa314 <_ZN6SBlockeOERS_>
 80aa071:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80aa074:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80aa077:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80aa07a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80aa07d:	83 45 10 08          	addl   $0x8,0x10(%ebp)
 80aa081:	8b 45 10             	mov    0x10(%ebp),%eax
 80aa084:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa088:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa08b:	89 04 24             	mov    %eax,(%esp)
 80aa08e:	e8 70 04 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80aa093:	83 6d 14 08          	subl   $0x8,0x14(%ebp)
 80aa097:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80aa09b:	83 7d 14 07          	cmpl   $0x7,0x14(%ebp)
 80aa09f:	0f 97 c0             	seta   %al
 80aa0a2:	84 c0                	test   %al,%al
 80aa0a4:	75 95                	jne    80aa03b <_ZN9CBlowFish7EncryptEPKhPhji+0xed>
 80aa0a6:	eb 4d                	jmp    80aa0f5 <_ZN9CBlowFish7EncryptEPKhPhji+0x1a7>
 80aa0a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa0ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa0af:	8b 45 0c             	mov    0xc(%ebp),%eax
 80aa0b2:	89 04 24             	mov    %eax,(%esp)
 80aa0b5:	e8 16 03 00 00       	call   80aa3d0 <_Z12BytesToBlockPKhR6SBlock>
 80aa0ba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa0bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa0c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80aa0c4:	89 04 24             	mov    %eax,(%esp)
 80aa0c7:	e8 d8 f6 ff ff       	call   80a97a4 <_ZN9CBlowFish7EncryptER6SBlock>
 80aa0cc:	83 45 10 08          	addl   $0x8,0x10(%ebp)
 80aa0d0:	8b 45 10             	mov    0x10(%ebp),%eax
 80aa0d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80aa0d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80aa0da:	89 04 24             	mov    %eax,(%esp)
 80aa0dd:	e8 21 04 00 00       	call   80aa503 <_Z12BlockToBytesRK6SBlockPh>
 80aa0e2:	83 6d 14 08          	subl   $0x8,0x14(%ebp)
 80aa0e6:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 80aa0ea:	83 7d 14 07          	cmpl   $0x7,0x14(%ebp)
 80aa0ee:	0f 97 c0             	seta   %al
 80aa0f1:	84 c0                	test   %al,%al
 80aa0f3:	75 b3                	jne    80aa0a8 <_ZN9CBlowFish7EncryptEPKhPhji+0x15a>
 80aa0f5:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80aa0fa:	c9                   	leave
 80aa0fb:	c3                   	ret

```

```c
// CBlowFish::Encrypt @ 0x80a9f4e

/* CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int) */

undefined4 __thiscall
CBlowFish::Encrypt(CBlowFish *this,uchar *param_1,uchar *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((param_3 == 0) || ((param_3 & 7) != 0)) {
    uVar1 = 0x70000006;
  }
  else {
    SBlock::SBlock((SBlock *)&local_14,0,0);
    if (param_4 == 1) {
      SBlock::SBlock((SBlock *)&local_1c,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_1c);
        Encrypt(this,(SBlock *)&local_14);
        local_1c = local_14;
        local_18 = local_10;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else if (param_4 == 2) {
      SBlock::SBlock((SBlock *)&local_24,(SBlock *)(this + 8));
      for (; 7 < param_3; param_3 = param_3 - 8) {
        Encrypt(this,(SBlock *)&local_24);
        BytesToBlock(param_1,(SBlock *)&local_14);
        SBlock::operator^=((SBlock *)&local_14,(SBlock *)&local_24);
        local_24 = local_14;
        local_20 = local_10;
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    else {
      for (; 7 < param_3; param_3 = param_3 - 8) {
        BytesToBlock(param_1,(SBlock *)&local_14);
        Encrypt(this,(SBlock *)&local_14);
        param_2 = param_2 + 8;
        BlockToBytes((SBlock *)&local_14,param_2);
        param_1 = param_1 + 8;
      }
    }
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

