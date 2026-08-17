# TaoCrypt__HexDecoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Decode

```asm
// === 08757200 TaoCrypt::HexDecoder::Decode  [0x08757200-0x87573bf] ===
 8757200:	55                   	push   %ebp
 8757201:	89 e5                	mov    %esp,%ebp
 8757203:	57                   	push   %edi
 8757204:	56                   	push   %esi
 8757205:	53                   	push   %ebx
 8757206:	83 ec 5c             	sub    $0x5c,%esp
 8757209:	8b 75 08             	mov    0x8(%ebp),%esi
 875720c:	e8 e7 bb fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8757211:	81 c3 87 59 c1 00    	add    $0xc15987,%ebx
 8757217:	8b 46 0c             	mov    0xc(%esi),%eax
 875721a:	8b 00                	mov    (%eax),%eax
 875721c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8757223:	00 
 8757224:	89 c7                	mov    %eax,%edi
 8757226:	d1 ef                	shr    $1,%edi
 8757228:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875722c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875722f:	8b 06                	mov    (%esi),%eax
 8757231:	89 44 24 08          	mov    %eax,0x8(%esp)
 8757235:	8b 46 04             	mov    0x4(%esi),%eax
 8757238:	89 44 24 04          	mov    %eax,0x4(%esp)
 875723c:	8d 46 08             	lea    0x8(%esi),%eax
 875723f:	89 04 24             	mov    %eax,(%esp)
 8757242:	e8 89 00 00 00       	call   87572d0 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b>
 8757247:	89 3e                	mov    %edi,(%esi)
 8757249:	8b 7d e0             	mov    -0x20(%ebp),%edi
 875724c:	85 ff                	test   %edi,%edi
 875724e:	89 46 04             	mov    %eax,0x4(%esi)
 8757251:	74 63                	je     87572b6 <_ZN8TaoCrypt10HexDecoder6DecodeEv+0xb6>
 8757253:	8d 83 08 87 99 ff    	lea    -0x6678f8(%ebx),%eax
 8757259:	31 ff                	xor    %edi,%edi
 875725b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875725e:	66 90                	xchg   %ax,%ax
 8757260:	8b 56 0c             	mov    0xc(%esi),%edx
 8757263:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 8757266:	8b 42 0c             	mov    0xc(%edx),%eax
 8757269:	8d 48 01             	lea    0x1(%eax),%ecx
 875726c:	89 4a 0c             	mov    %ecx,0xc(%edx)
 875726f:	8b 4a 04             	mov    0x4(%edx),%ecx
 8757272:	8d 78 02             	lea    0x2(%eax),%edi
 8757275:	0f b6 14 01          	movzbl (%ecx,%eax,1),%edx
 8757279:	83 ea 30             	sub    $0x30,%edx
 875727c:	88 55 e7             	mov    %dl,-0x19(%ebp)
 875727f:	8b 56 0c             	mov    0xc(%esi),%edx
 8757282:	89 7a 0c             	mov    %edi,0xc(%edx)
 8757285:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 8757289:	0f b6 44 01 01       	movzbl 0x1(%ecx,%eax,1),%eax
 875728e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8757291:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8757294:	83 e8 30             	sub    $0x30,%eax
 8757297:	0f b6 14 11          	movzbl (%ecx,%edx,1),%edx
 875729b:	0f b6 c0             	movzbl %al,%eax
 875729e:	83 c7 01             	add    $0x1,%edi
 87572a1:	c1 e2 04             	shl    $0x4,%edx
 87572a4:	0a 14 01             	or     (%ecx,%eax,1),%dl
 87572a7:	8b 4e 04             	mov    0x4(%esi),%ecx
 87572aa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87572ad:	88 14 01             	mov    %dl,(%ecx,%eax,1)
 87572b0:	83 6d e0 02          	subl   $0x2,-0x20(%ebp)
 87572b4:	75 aa                	jne    8757260 <_ZN8TaoCrypt10HexDecoder6DecodeEv+0x60>
 87572b6:	89 74 24 04          	mov    %esi,0x4(%esp)
 87572ba:	8b 46 0c             	mov    0xc(%esi),%eax
 87572bd:	89 04 24             	mov    %eax,(%esp)
 87572c0:	e8 6b 15 00 00       	call   8758830 <_ZN8TaoCrypt6Source5resetERNS_5BlockIhNS_20AllocatorWithCleanupIhEEEE>
 87572c5:	83 c4 5c             	add    $0x5c,%esp
 87572c8:	5b                   	pop    %ebx
 87572c9:	5e                   	pop    %esi
 87572ca:	5f                   	pop    %edi
 87572cb:	5d                   	pop    %ebp
 87572cc:	c3                   	ret
 87572cd:	90                   	nop
 87572ce:	90                   	nop
 87572cf:	90                   	nop

087572d0 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b>:
 87572d0:	55                   	push   %ebp
 87572d1:	89 e5                	mov    %esp,%ebp
 87572d3:	83 ec 38             	sub    $0x38,%esp
 87572d6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87572d9:	8b 55 10             	mov    0x10(%ebp),%edx
 87572dc:	8b 7d 14             	mov    0x14(%ebp),%edi
 87572df:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87572e2:	0f b6 45 18          	movzbl 0x18(%ebp),%eax
 87572e6:	e8 0d bb fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87572eb:	81 c3 ad 58 c1 00    	add    $0xc158ad,%ebx
 87572f1:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87572f4:	8b 75 0c             	mov    0xc(%ebp),%esi
 87572f7:	39 fa                	cmp    %edi,%edx
 87572f9:	74 52                	je     875734d <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b+0x7d>
 87572fb:	84 c0                	test   %al,%al
 87572fd:	74 61                	je     8757360 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b+0x90>
 87572ff:	31 c9                	xor    %ecx,%ecx
 8757301:	85 ff                	test   %edi,%edi
 8757303:	0f 85 8f 00 00 00    	jne    8757398 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b+0xc8>
 8757309:	39 d7                	cmp    %edx,%edi
 875730b:	0f 47 fa             	cmova  %edx,%edi
 875730e:	89 0c 24             	mov    %ecx,(%esp)
 8757311:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8757314:	89 74 24 04          	mov    %esi,0x4(%esp)
 8757318:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875731b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875731f:	e8 7c 65 92 ff       	call   807d8a0 <memcpy@plt>
 8757324:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8757327:	89 34 24             	mov    %esi,(%esp)
 875732a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8757331:	00 
 8757332:	89 54 24 08          	mov    %edx,0x8(%esp)
 8757336:	e8 85 69 92 ff       	call   807dcc0 <memset@plt>
 875733b:	89 34 24             	mov    %esi,(%esp)
 875733e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8757343:	e8 d8 03 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757348:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875734b:	89 ce                	mov    %ecx,%esi
 875734d:	89 f0                	mov    %esi,%eax
 875734f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8757352:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8757355:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8757358:	89 ec                	mov    %ebp,%esp
 875735a:	5d                   	pop    %ebp
 875735b:	c3                   	ret
 875735c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8757360:	89 54 24 08          	mov    %edx,0x8(%esp)
 8757364:	89 34 24             	mov    %esi,(%esp)
 8757367:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875736e:	00 
 875736f:	e8 4c 69 92 ff       	call   807dcc0 <memset@plt>
 8757374:	89 34 24             	mov    %esi,(%esp)
 8757377:	31 f6                	xor    %esi,%esi
 8757379:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875737e:	e8 9d 03 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8757383:	85 ff                	test   %edi,%edi
 8757385:	74 c6                	je     875734d <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b+0x7d>
 8757387:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875738c:	89 3c 24             	mov    %edi,(%esp)
 875738f:	e8 fc 03 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8757394:	89 c6                	mov    %eax,%esi
 8757396:	eb b5                	jmp    875734d <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b+0x7d>
 8757398:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875739b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87573a0:	89 3c 24             	mov    %edi,(%esp)
 87573a3:	e8 e8 03 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87573a8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87573ab:	89 c1                	mov    %eax,%ecx
 87573ad:	e9 57 ff ff ff       	jmp    8757309 <_ZN8TaoCrypt13StdReallocateIhNS_20AllocatorWithCleanupIhEEEENT0_7pointerERS3_PT_NS3_9size_typeES8_b+0x39>
 87573b2:	90                   	nop
 87573b3:	90                   	nop
 87573b4:	90                   	nop
 87573b5:	90                   	nop
 87573b6:	90                   	nop
 87573b7:	90                   	nop
 87573b8:	90                   	nop
 87573b9:	90                   	nop
 87573ba:	90                   	nop
 87573bb:	90                   	nop
 87573bc:	90                   	nop
 87573bd:	90                   	nop
 87573be:	90                   	nop
 87573bf:	90                   	nop

```

```c
// TaoCrypt::HexDecoder::Decode @ 0x8757200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::HexDecoder::Decode() */

void __thiscall TaoCrypt::HexDecoder::Decode(HexDecoder *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_24;
  
  local_24 = **(uint **)(this + 0xc);
  uVar4 = StdReallocate<unsigned_char,TaoCrypt::AllocatorWithCleanup<unsigned_char>>
                    (this + 8,*(undefined4 *)(this + 4),*(undefined4 *)this,local_24 >> 1,0);
  *(uint *)this = local_24 >> 1;
  *(undefined4 *)(this + 4) = uVar4;
  if (local_24 != 0) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(this + 0xc);
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int *)(iVar2 + 0xc) = iVar3 + 1;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + iVar3);
      *(int *)(*(int *)(this + 0xc) + 0xc) = iVar3 + 2;
      *(char *)(*(int *)(this + 4) + iVar5) =
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
           [(byte)(cVar1 - 0x30) + 0x40] << 4 |
           "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
           [(*(byte *)(iVar2 + 1 + iVar3) - 0x30 & 0xff) + 0x40];
      local_24 = local_24 - 2;
      iVar5 = iVar5 + 1;
    } while (local_24 != 0);
  }
  Source::reset(*(Source **)(this + 0xc),(Block *)this);
  return;
}

```

