# TaoCrypt__HASH64withTransform

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddLength

```asm
// === 08758c40 TaoCrypt::HASH64withTransform::AddLength  [0x08758c40-0x8758c6f] ===
 8758c40:	55                   	push   %ebp
 8758c41:	89 e5                	mov    %esp,%ebp
 8758c43:	8b 45 08             	mov    0x8(%ebp),%eax
 8758c46:	8b 55 0c             	mov    0xc(%ebp),%edx
 8758c49:	8b 48 08             	mov    0x8(%eax),%ecx
 8758c4c:	01 ca                	add    %ecx,%edx
 8758c4e:	39 d1                	cmp    %edx,%ecx
 8758c50:	89 50 08             	mov    %edx,0x8(%eax)
 8758c53:	76 13                	jbe    8758c68 <_ZN8TaoCrypt19HASH64withTransform9AddLengthEj+0x28>
 8758c55:	8b 50 0c             	mov    0xc(%eax),%edx
 8758c58:	83 c2 01             	add    $0x1,%edx
 8758c5b:	89 50 0c             	mov    %edx,0xc(%eax)
 8758c5e:	89 50 0c             	mov    %edx,0xc(%eax)
 8758c61:	5d                   	pop    %ebp
 8758c62:	c3                   	ret
 8758c63:	90                   	nop
 8758c64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8758c68:	8b 50 0c             	mov    0xc(%eax),%edx
 8758c6b:	89 50 0c             	mov    %edx,0xc(%eax)
 8758c6e:	5d                   	pop    %ebp
 8758c6f:	c3                   	ret

```

```c
// TaoCrypt::HASH64withTransform::AddLength @ 0x8758c40

/* TaoCrypt::HASH64withTransform::AddLength(unsigned int) */

void __thiscall TaoCrypt::HASH64withTransform::AddLength(HASH64withTransform *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 8);
  uVar3 = param_1 + uVar1;
  *(uint *)(this + 8) = uVar3;
  if (uVar3 < uVar1) {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + 1;
    *(int *)(this + 0xc) = iVar2 + 1;
    return;
  }
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0xc);
  return;
}

```

---

## Final

```asm
// === 087590c0 TaoCrypt::HASH64withTransform::Final  [0x087590c0-0x87593ef] ===
 87590c0:	55                   	push   %ebp
 87590c1:	89 e5                	mov    %esp,%ebp
 87590c3:	57                   	push   %edi
 87590c4:	56                   	push   %esi
 87590c5:	53                   	push   %ebx
 87590c6:	83 ec 3c             	sub    $0x3c,%esp
 87590c9:	8b 7d 08             	mov    0x8(%ebp),%edi
 87590cc:	e8 27 9d fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87590d1:	81 c3 c7 3a c1 00    	add    $0xc13ac7,%ebx
 87590d7:	8b 07                	mov    (%edi),%eax
 87590d9:	8d 77 50             	lea    0x50(%edi),%esi
 87590dc:	89 3c 24             	mov    %edi,(%esp)
 87590df:	ff 50 14             	call   *0x14(%eax)
 87590e2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87590e5:	8b 07                	mov    (%edi),%eax
 87590e7:	89 3c 24             	mov    %edi,(%esp)
 87590ea:	ff 50 18             	call   *0x18(%eax)
 87590ed:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87590f0:	8b 07                	mov    (%edi),%eax
 87590f2:	89 3c 24             	mov    %edi,(%esp)
 87590f5:	ff 50 20             	call   *0x20(%eax)
 87590f8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87590fb:	8b 07                	mov    (%edi),%eax
 87590fd:	89 3c 24             	mov    %edi,(%esp)
 8759100:	ff 50 1c             	call   *0x1c(%eax)
 8759103:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8759106:	8b 47 04             	mov    0x4(%edi),%eax
 8759109:	89 3c 24             	mov    %edi,(%esp)
 875910c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8759110:	e8 2b fb ff ff       	call   8758c40 <_ZN8TaoCrypt19HASH64withTransform9AddLengthEj>
 8759115:	8b 47 08             	mov    0x8(%edi),%eax
 8759118:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 875911f:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8759122:	8b 57 0c             	mov    0xc(%edi),%edx
 8759125:	c1 e8 1d             	shr    $0x1d,%eax
 8759128:	8d 04 d0             	lea    (%eax,%edx,8),%eax
 875912b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875912e:	8b 47 04             	mov    0x4(%edi),%eax
 8759131:	c6 44 07 50 80       	movb   $0x80,0x50(%edi,%eax,1)
 8759136:	83 c0 01             	add    $0x1,%eax
 8759139:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 875913c:	89 47 04             	mov    %eax,0x4(%edi)
 875913f:	0f 82 7b 01 00 00    	jb     87592c0 <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x200>
 8759145:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8759148:	c1 ea 03             	shr    $0x3,%edx
 875914b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875914e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8759151:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8759158:	00 
 8759159:	29 c2                	sub    %eax,%edx
 875915b:	8d 04 06             	lea    (%esi,%eax,1),%eax
 875915e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8759162:	89 04 24             	mov    %eax,(%esp)
 8759165:	e8 56 4b 92 ff       	call   807dcc0 <memset@plt>
 875916a:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875916d:	85 c9                	test   %ecx,%ecx
 875916f:	0f 84 13 01 00 00    	je     8759288 <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x1c8>
 8759175:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8759178:	c1 e8 03             	shr    $0x3,%eax
 875917b:	85 c0                	test   %eax,%eax
 875917d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8759180:	74 4b                	je     87591cd <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x10d>
 8759182:	31 c0                	xor    %eax,%eax
 8759184:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8759187:	90                   	nop
 8759188:	8b 54 c6 04          	mov    0x4(%esi,%eax,8),%edx
 875918c:	8b 3c c6             	mov    (%esi,%eax,8),%edi
 875918f:	89 d1                	mov    %edx,%ecx
 8759191:	c1 c9 18             	ror    $0x18,%ecx
 8759194:	c1 ca 08             	ror    $0x8,%edx
 8759197:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 875919d:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 87591a3:	09 d1                	or     %edx,%ecx
 87591a5:	89 fa                	mov    %edi,%edx
 87591a7:	c1 ca 18             	ror    $0x18,%edx
 87591aa:	c1 cf 08             	ror    $0x8,%edi
 87591ad:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 87591b3:	81 e7 00 ff 00 ff    	and    $0xff00ff00,%edi
 87591b9:	09 fa                	or     %edi,%edx
 87591bb:	89 0c c6             	mov    %ecx,(%esi,%eax,8)
 87591be:	89 54 c6 04          	mov    %edx,0x4(%esi,%eax,8)
 87591c2:	83 c0 01             	add    $0x1,%eax
 87591c5:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 87591c8:	77 be                	ja     8759188 <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0xc8>
 87591ca:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87591cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87591d0:	8d 77 10             	lea    0x10(%edi),%esi
 87591d3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87591d6:	83 c0 08             	add    $0x8,%eax
 87591d9:	89 14 c7             	mov    %edx,(%edi,%eax,8)
 87591dc:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87591df:	c7 44 c7 04 00 00 00 	movl   $0x0,0x4(%edi,%eax,8)
 87591e6:	00 
 87591e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87591ea:	83 c0 09             	add    $0x9,%eax
 87591ed:	89 14 c7             	mov    %edx,(%edi,%eax,8)
 87591f0:	c7 44 c7 04 00 00 00 	movl   $0x0,0x4(%edi,%eax,8)
 87591f7:	00 
 87591f8:	8b 07                	mov    (%edi),%eax
 87591fa:	89 3c 24             	mov    %edi,(%esp)
 87591fd:	ff 50 24             	call   *0x24(%eax)
 8759200:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8759203:	c1 e8 03             	shr    $0x3,%eax
 8759206:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8759209:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875920c:	31 c0                	xor    %eax,%eax
 875920e:	85 d2                	test   %edx,%edx
 8759210:	74 4b                	je     875925d <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x19d>
 8759212:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8759215:	8d 76 00             	lea    0x0(%esi),%esi
 8759218:	8b 54 c6 04          	mov    0x4(%esi,%eax,8),%edx
 875921c:	8b 3c c6             	mov    (%esi,%eax,8),%edi
 875921f:	89 d1                	mov    %edx,%ecx
 8759221:	c1 c9 18             	ror    $0x18,%ecx
 8759224:	c1 ca 08             	ror    $0x8,%edx
 8759227:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 875922d:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 8759233:	09 d1                	or     %edx,%ecx
 8759235:	89 fa                	mov    %edi,%edx
 8759237:	c1 ca 18             	ror    $0x18,%edx
 875923a:	c1 cf 08             	ror    $0x8,%edi
 875923d:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8759243:	81 e7 00 ff 00 ff    	and    $0xff00ff00,%edi
 8759249:	09 fa                	or     %edi,%edx
 875924b:	89 0c c6             	mov    %ecx,(%esi,%eax,8)
 875924e:	89 54 c6 04          	mov    %edx,0x4(%esi,%eax,8)
 8759252:	83 c0 01             	add    $0x1,%eax
 8759255:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8759258:	77 be                	ja     8759218 <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x158>
 875925a:	8b 7d e0             	mov    -0x20(%ebp),%edi
 875925d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8759260:	89 74 24 04          	mov    %esi,0x4(%esp)
 8759264:	89 44 24 08          	mov    %eax,0x8(%esp)
 8759268:	8b 45 0c             	mov    0xc(%ebp),%eax
 875926b:	89 04 24             	mov    %eax,(%esp)
 875926e:	e8 2d 46 92 ff       	call   807d8a0 <memcpy@plt>
 8759273:	8b 07                	mov    (%edi),%eax
 8759275:	89 3c 24             	mov    %edi,(%esp)
 8759278:	ff 50 10             	call   *0x10(%eax)
 875927b:	83 c4 3c             	add    $0x3c,%esp
 875927e:	5b                   	pop    %ebx
 875927f:	5e                   	pop    %esi
 8759280:	5f                   	pop    %edi
 8759281:	5d                   	pop    %ebp
 8759282:	c3                   	ret
 8759283:	90                   	nop
 8759284:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8759288:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875928b:	8d 77 10             	lea    0x10(%edi),%esi
 875928e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8759291:	83 c0 08             	add    $0x8,%eax
 8759294:	89 14 c7             	mov    %edx,(%edi,%eax,8)
 8759297:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875929a:	c7 44 c7 04 00 00 00 	movl   $0x0,0x4(%edi,%eax,8)
 87592a1:	00 
 87592a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87592a5:	83 c0 09             	add    $0x9,%eax
 87592a8:	89 14 c7             	mov    %edx,(%edi,%eax,8)
 87592ab:	c7 44 c7 04 00 00 00 	movl   $0x0,0x4(%edi,%eax,8)
 87592b2:	00 
 87592b3:	8b 07                	mov    (%edi),%eax
 87592b5:	89 3c 24             	mov    %edi,(%esp)
 87592b8:	ff 50 24             	call   *0x24(%eax)
 87592bb:	eb a0                	jmp    875925d <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x19d>
 87592bd:	8d 76 00             	lea    0x0(%esi),%esi
 87592c0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87592c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87592ca:	00 
 87592cb:	29 c2                	sub    %eax,%edx
 87592cd:	8d 04 06             	lea    (%esi,%eax,1),%eax
 87592d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 87592d4:	89 04 24             	mov    %eax,(%esp)
 87592d7:	e8 e4 49 92 ff       	call   807dcc0 <memset@plt>
 87592dc:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87592df:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87592e2:	85 d2                	test   %edx,%edx
 87592e4:	89 47 04             	mov    %eax,0x4(%edi)
 87592e7:	74 5f                	je     8759348 <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x288>
 87592e9:	89 c2                	mov    %eax,%edx
 87592eb:	c1 ea 03             	shr    $0x3,%edx
 87592ee:	85 d2                	test   %edx,%edx
 87592f0:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87592f3:	74 59                	je     875934e <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x28e>
 87592f5:	31 c0                	xor    %eax,%eax
 87592f7:	89 7d cc             	mov    %edi,-0x34(%ebp)
 87592fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8759300:	8b 54 c6 04          	mov    0x4(%esi,%eax,8),%edx
 8759304:	8b 3c c6             	mov    (%esi,%eax,8),%edi
 8759307:	89 d1                	mov    %edx,%ecx
 8759309:	c1 c9 18             	ror    $0x18,%ecx
 875930c:	c1 ca 08             	ror    $0x8,%edx
 875930f:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 8759315:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 875931b:	09 d1                	or     %edx,%ecx
 875931d:	89 fa                	mov    %edi,%edx
 875931f:	c1 ca 18             	ror    $0x18,%edx
 8759322:	c1 cf 08             	ror    $0x8,%edi
 8759325:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 875932b:	81 e7 00 ff 00 ff    	and    $0xff00ff00,%edi
 8759331:	09 fa                	or     %edi,%edx
 8759333:	89 0c c6             	mov    %ecx,(%esi,%eax,8)
 8759336:	89 54 c6 04          	mov    %edx,0x4(%esi,%eax,8)
 875933a:	83 c0 01             	add    $0x1,%eax
 875933d:	39 45 e0             	cmp    %eax,-0x20(%ebp)
 8759340:	77 be                	ja     8759300 <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x240>
 8759342:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8759345:	eb 07                	jmp    875934e <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x28e>
 8759347:	90                   	nop
 8759348:	c1 e8 03             	shr    $0x3,%eax
 875934b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875934e:	8b 07                	mov    (%edi),%eax
 8759350:	89 3c 24             	mov    %edi,(%esp)
 8759353:	ff 50 24             	call   *0x24(%eax)
 8759356:	31 c0                	xor    %eax,%eax
 8759358:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%edi)
 875935f:	e9 ea fd ff ff       	jmp    875914e <_ZN8TaoCrypt19HASH64withTransform5FinalEPh+0x8e>
 8759364:	90                   	nop
 8759365:	90                   	nop
 8759366:	90                   	nop
 8759367:	90                   	nop
 8759368:	90                   	nop
 8759369:	90                   	nop
 875936a:	90                   	nop
 875936b:	90                   	nop
 875936c:	90                   	nop
 875936d:	90                   	nop
 875936e:	90                   	nop
 875936f:	90                   	nop

08759370 <_ZN8TaoCrypt17HASHwithTransformD1Ev>:
 8759370:	e8 4f b2 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8759375:	81 c1 23 38 c1 00    	add    $0xc13823,%ecx
 875937b:	55                   	push   %ebp
 875937c:	89 e5                	mov    %esp,%ebp
 875937e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 8759384:	8d 50 08             	lea    0x8(%eax),%edx
 8759387:	8b 45 08             	mov    0x8(%ebp),%eax
 875938a:	89 10                	mov    %edx,(%eax)
 875938c:	5d                   	pop    %ebp
 875938d:	c3                   	ret
 875938e:	90                   	nop
 875938f:	90                   	nop

08759390 <_ZN8TaoCrypt17HASHwithTransformD0Ev>:
 8759390:	e8 2f b2 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8759395:	81 c1 03 38 c1 00    	add    $0xc13803,%ecx
 875939b:	55                   	push   %ebp
 875939c:	89 e5                	mov    %esp,%ebp
 875939e:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87593a4:	8d 50 08             	lea    0x8(%eax),%edx
 87593a7:	8b 45 08             	mov    0x8(%ebp),%eax
 87593aa:	89 10                	mov    %edx,(%eax)
 87593ac:	5d                   	pop    %ebp
 87593ad:	c3                   	ret
 87593ae:	90                   	nop
 87593af:	90                   	nop

087593b0 <_ZN8TaoCrypt19HASH64withTransformD1Ev>:
 87593b0:	e8 0f b2 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87593b5:	81 c1 e3 37 c1 00    	add    $0xc137e3,%ecx
 87593bb:	55                   	push   %ebp
 87593bc:	89 e5                	mov    %esp,%ebp
 87593be:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87593c4:	8d 50 08             	lea    0x8(%eax),%edx
 87593c7:	8b 45 08             	mov    0x8(%ebp),%eax
 87593ca:	89 10                	mov    %edx,(%eax)
 87593cc:	5d                   	pop    %ebp
 87593cd:	c3                   	ret
 87593ce:	90                   	nop
 87593cf:	90                   	nop

087593d0 <_ZN8TaoCrypt19HASH64withTransformD0Ev>:
 87593d0:	e8 ef b1 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87593d5:	81 c1 c3 37 c1 00    	add    $0xc137c3,%ecx
 87593db:	55                   	push   %ebp
 87593dc:	89 e5                	mov    %esp,%ebp
 87593de:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87593e4:	8d 50 08             	lea    0x8(%eax),%edx
 87593e7:	8b 45 08             	mov    0x8(%ebp),%eax
 87593ea:	89 10                	mov    %edx,(%eax)
 87593ec:	5d                   	pop    %ebp
 87593ed:	c3                   	ret
 87593ee:	90                   	nop
 87593ef:	90                   	nop

```

```c
// TaoCrypt::HASH64withTransform::Final @ 0x87590c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASH64withTransform::Final(unsigned char*) */

void __thiscall TaoCrypt::HASH64withTransform::Final(HASH64withTransform *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint __n;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_24;
  
  local_24 = (**(code **)(*(int *)this + 0x14))(this);
  __n = (**(code **)(*(int *)this + 0x18))(this);
  uVar6 = (**(code **)(*(int *)this + 0x20))(this);
  iVar7 = (**(code **)(*(int *)this + 0x1c))(this);
  AddLength(this,*(uint *)(this + 4));
  iVar2 = *(uint *)(this + 8) * 8;
  iVar1 = (*(uint *)(this + 8) >> 0x1d) + *(int *)(this + 0xc) * 8;
  iVar3 = *(int *)(this + 4);
  this[iVar3 + 0x50] = (HASH64withTransform)0x80;
  uVar8 = iVar3 + 1;
  *(uint *)(this + 4) = uVar8;
  if (uVar6 < uVar8) {
    memset(this + iVar3 + 0x51,0,local_24 - uVar8);
    *(uint *)(this + 4) = local_24;
    if ((iVar7 != 0) && (local_24 >> 3 != 0)) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 8 + 0x54);
        uVar5 = *(uint *)(this + uVar8 * 8 + 0x50);
        *(uint *)(this + uVar8 * 8 + 0x50) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        *(uint *)(this + uVar8 * 8 + 0x54) =
             uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00ff00 | uVar5 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_24 >> 3);
    }
    (**(code **)(*(int *)this + 0x24))(this);
    uVar8 = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  local_24 = local_24 >> 3;
  memset(this + uVar8 + 0x50,0,uVar6 - uVar8);
  if (iVar7 == 0) {
    *(int *)(this + (local_24 + 8) * 8) = iVar2;
    *(undefined4 *)(this + (local_24 + 8) * 8 + 4) = 0;
    *(int *)(this + (local_24 + 9) * 8) = iVar1;
    *(undefined4 *)(this + (local_24 + 9) * 8 + 4) = 0;
    (**(code **)(*(int *)this + 0x24))(this);
  }
  else {
    if (uVar6 >> 3 != 0) {
      uVar8 = 0;
      do {
        uVar4 = *(uint *)(this + uVar8 * 8 + 0x54);
        uVar5 = *(uint *)(this + uVar8 * 8 + 0x50);
        *(uint *)(this + uVar8 * 8 + 0x50) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        *(uint *)(this + uVar8 * 8 + 0x54) =
             uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00ff00 | uVar5 << 0x18;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6 >> 3);
    }
    *(int *)(this + (local_24 + 8) * 8) = iVar1;
    *(undefined4 *)(this + (local_24 + 8) * 8 + 4) = 0;
    *(int *)(this + (local_24 + 9) * 8) = iVar2;
    *(undefined4 *)(this + (local_24 + 9) * 8 + 4) = 0;
    (**(code **)(*(int *)this + 0x24))(this);
    uVar6 = 0;
    if (__n >> 3 != 0) {
      do {
        uVar8 = *(uint *)(this + uVar6 * 8 + 0x14);
        uVar4 = *(uint *)(this + uVar6 * 8 + 0x10);
        *(uint *)(this + uVar6 * 8 + 0x10) =
             uVar8 >> 0x18 | (uVar8 & 0xff00) << 8 | uVar8 >> 8 & 0xff00ff00 | uVar8 << 0x18;
        *(uint *)(this + uVar6 * 8 + 0x14) =
             uVar4 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar4 << 0x18;
        uVar6 = uVar6 + 1;
      } while (uVar6 < __n >> 3);
    }
  }
  memcpy(param_1,this + 0x10,__n);
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}

```

---

## HASH64withTransform

```asm
// === 08758c20 TaoCrypt::HASH64withTransform::HASH64withTransform  [0x08758c20-0x8758c3f] ===
 8758c20:	e8 9f b9 fc ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8758c25:	81 c1 73 3f c1 00    	add    $0xc13f73,%ecx
 8758c2b:	55                   	push   %ebp
 8758c2c:	89 e5                	mov    %esp,%ebp
 8758c2e:	8b 81 04 fe ff ff    	mov    -0x1fc(%ecx),%eax
 8758c34:	8d 50 08             	lea    0x8(%eax),%edx
 8758c37:	8b 45 08             	mov    0x8(%ebp),%eax
 8758c3a:	89 10                	mov    %edx,(%eax)
 8758c3c:	5d                   	pop    %ebp
 8758c3d:	c3                   	ret
 8758c3e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::HASH64withTransform::HASH64withTransform @ 0x8758c20

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* TaoCrypt::HASH64withTransform::HASH64withTransform(unsigned int, unsigned int) */

void __thiscall
TaoCrypt::HASH64withTransform::HASH64withTransform
          (HASH64withTransform *this,uint param_1,uint param_2)

{
  *(undefined **)this = PTR_vtable_0936c99c + 8;
  return;
}

```

---

## Update

```asm
// === 08758f90 TaoCrypt::HASH64withTransform::Update  [0x08758f90-0x87590bf] ===
 8758f90:	55                   	push   %ebp
 8758f91:	89 e5                	mov    %esp,%ebp
 8758f93:	57                   	push   %edi
 8758f94:	56                   	push   %esi
 8758f95:	53                   	push   %ebx
 8758f96:	83 ec 2c             	sub    $0x2c,%esp
 8758f99:	8b 55 08             	mov    0x8(%ebp),%edx
 8758f9c:	e8 57 9e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8758fa1:	81 c3 f7 3b c1 00    	add    $0xc13bf7,%ebx
 8758fa7:	8b 75 10             	mov    0x10(%ebp),%esi
 8758faa:	8b 02                	mov    (%edx),%eax
 8758fac:	89 14 24             	mov    %edx,(%esp)
 8758faf:	ff 50 14             	call   *0x14(%eax)
 8758fb2:	8b 55 08             	mov    0x8(%ebp),%edx
 8758fb5:	83 c2 50             	add    $0x50,%edx
 8758fb8:	85 f6                	test   %esi,%esi
 8758fba:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8758fbd:	0f 84 ed 00 00 00    	je     87590b0 <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0x120>
 8758fc3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8758fc6:	89 d7                	mov    %edx,%edi
 8758fc8:	8b 41 04             	mov    0x4(%ecx),%eax
 8758fcb:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8758fce:	c1 e9 03             	shr    $0x3,%ecx
 8758fd1:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8758fd4:	eb 0a                	jmp    8758fe0 <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0x50>
 8758fd6:	66 90                	xchg   %ax,%ax
 8758fd8:	85 f6                	test   %esi,%esi
 8758fda:	0f 84 d0 00 00 00    	je     87590b0 <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0x120>
 8758fe0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8758fe3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8758fe6:	29 c2                	sub    %eax,%edx
 8758fe8:	39 f2                	cmp    %esi,%edx
 8758fea:	0f 47 d6             	cmova  %esi,%edx
 8758fed:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8758ff0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8758ff4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8758ff8:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8758ffb:	89 04 24             	mov    %eax,(%esp)
 8758ffe:	e8 9d 48 92 ff       	call   807d8a0 <memcpy@plt>
 8759003:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8759006:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8759009:	01 55 0c             	add    %edx,0xc(%ebp)
 875900c:	89 d0                	mov    %edx,%eax
 875900e:	29 d6                	sub    %edx,%esi
 8759010:	03 41 04             	add    0x4(%ecx),%eax
 8759013:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8759016:	89 41 04             	mov    %eax,0x4(%ecx)
 8759019:	75 bd                	jne    8758fd8 <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0x48>
 875901b:	8b 01                	mov    (%ecx),%eax
 875901d:	89 0c 24             	mov    %ecx,(%esp)
 8759020:	ff 50 1c             	call   *0x1c(%eax)
 8759023:	85 c0                	test   %eax,%eax
 8759025:	74 56                	je     875907d <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0xed>
 8759027:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875902a:	85 c0                	test   %eax,%eax
 875902c:	74 4f                	je     875907d <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0xed>
 875902e:	31 c0                	xor    %eax,%eax
 8759030:	89 75 dc             	mov    %esi,-0x24(%ebp)
 8759033:	90                   	nop
 8759034:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8759038:	8b 54 c7 04          	mov    0x4(%edi,%eax,8),%edx
 875903c:	8b 34 c7             	mov    (%edi,%eax,8),%esi
 875903f:	89 d1                	mov    %edx,%ecx
 8759041:	c1 c9 18             	ror    $0x18,%ecx
 8759044:	c1 ca 08             	ror    $0x8,%edx
 8759047:	81 e1 ff 00 ff 00    	and    $0xff00ff,%ecx
 875904d:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 8759053:	09 d1                	or     %edx,%ecx
 8759055:	89 f2                	mov    %esi,%edx
 8759057:	c1 ca 18             	ror    $0x18,%edx
 875905a:	c1 ce 08             	ror    $0x8,%esi
 875905d:	81 e2 ff 00 ff 00    	and    $0xff00ff,%edx
 8759063:	81 e6 00 ff 00 ff    	and    $0xff00ff00,%esi
 8759069:	09 f2                	or     %esi,%edx
 875906b:	89 0c c7             	mov    %ecx,(%edi,%eax,8)
 875906e:	89 54 c7 04          	mov    %edx,0x4(%edi,%eax,8)
 8759072:	83 c0 01             	add    $0x1,%eax
 8759075:	39 45 e0             	cmp    %eax,-0x20(%ebp)
 8759078:	77 be                	ja     8759038 <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0xa8>
 875907a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875907d:	8b 55 08             	mov    0x8(%ebp),%edx
 8759080:	8b 02                	mov    (%edx),%eax
 8759082:	89 14 24             	mov    %edx,(%esp)
 8759085:	ff 50 24             	call   *0x24(%eax)
 8759088:	8b 45 08             	mov    0x8(%ebp),%eax
 875908b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875908e:	89 04 24             	mov    %eax,(%esp)
 8759091:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8759095:	e8 a6 fb ff ff       	call   8758c40 <_ZN8TaoCrypt19HASH64withTransform9AddLengthEj>
 875909a:	8b 55 08             	mov    0x8(%ebp),%edx
 875909d:	31 c0                	xor    %eax,%eax
 875909f:	85 f6                	test   %esi,%esi
 87590a1:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 87590a8:	0f 85 32 ff ff ff    	jne    8758fe0 <_ZN8TaoCrypt19HASH64withTransform6UpdateEPKhj+0x50>
 87590ae:	66 90                	xchg   %ax,%ax
 87590b0:	83 c4 2c             	add    $0x2c,%esp
 87590b3:	5b                   	pop    %ebx
 87590b4:	5e                   	pop    %esi
 87590b5:	5f                   	pop    %edi
 87590b6:	5d                   	pop    %ebp
 87590b7:	c3                   	ret
 87590b8:	90                   	nop
 87590b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::HASH64withTransform::Update @ 0x8758f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HASH64withTransform::Update(unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::HASH64withTransform::Update(HASH64withTransform *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (**(code **)(*(int *)this + 0x14))(this);
  if (param_2 != 0) {
    uVar3 = *(uint *)(this + 4);
    do {
      while( true ) {
        uVar5 = uVar2 - uVar3;
        if (param_2 < uVar2 - uVar3) {
          uVar5 = param_2;
        }
        memcpy(this + uVar3 + 0x50,param_1,uVar5);
        param_1 = param_1 + uVar5;
        param_2 = param_2 - uVar5;
        uVar3 = uVar5 + *(int *)(this + 4);
        *(uint *)(this + 4) = uVar3;
        if (uVar2 != uVar3) break;
        iVar4 = (**(code **)(*(int *)this + 0x1c))(this);
        if ((iVar4 != 0) && (uVar2 >> 3 != 0)) {
          uVar3 = 0;
          do {
            uVar5 = *(uint *)(this + uVar3 * 8 + 0x54);
            uVar1 = *(uint *)(this + uVar3 * 8 + 0x50);
            *(uint *)(this + uVar3 * 8 + 0x50) =
                 uVar5 >> 0x18 | (uVar5 & 0xff00) << 8 | uVar5 >> 8 & 0xff00ff00 | uVar5 << 0x18;
            *(uint *)(this + uVar3 * 8 + 0x54) =
                 uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2 >> 3);
        }
        (**(code **)(*(int *)this + 0x24))(this);
        AddLength(this,uVar2);
        uVar3 = 0;
        *(undefined4 *)(this + 4) = 0;
        if (param_2 == 0) {
          return;
        }
      }
    } while (param_2 != 0);
  }
  return;
}

```

