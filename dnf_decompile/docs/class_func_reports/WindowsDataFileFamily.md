# WindowsDataFileFamily

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## GenerateChecksum

```asm
// === 08575302 WindowsDataFileFamily::GenerateChecksum  [0x08575302-0x8575443] ===
 8575302:	55                   	push   %ebp
 8575303:	89 e5                	mov    %esp,%ebp
 8575305:	83 ec 68             	sub    $0x68,%esp
 8575308:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857530b:	89 04 24             	mov    %eax,(%esp)
 857530e:	e8 a3 18 00 00       	call   8576bb6 <_ZN9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEC1Ev>
 8575313:	8b 45 0c             	mov    0xc(%ebp),%eax
 8575316:	89 04 24             	mov    %eax,(%esp)
 8575319:	e8 fc 52 b1 ff       	call   808a61a <_ZN20CodeHackChecksumData5ClearEv>
 857531e:	8b 45 08             	mov    0x8(%ebp),%eax
 8575321:	83 c0 0c             	add    $0xc,%eax
 8575324:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575328:	8b 45 0c             	mov    0xc(%ebp),%eax
 857532b:	89 04 24             	mov    %eax,(%esp)
 857532e:	e8 7b 54 b1 ff       	call   808a7ae <_ZN18CodeHackChecksumEx11SetFileNameEPKc>
 8575333:	8b 45 08             	mov    0x8(%ebp),%eax
 8575336:	83 c0 0c             	add    $0xc,%eax
 8575339:	89 44 24 04          	mov    %eax,0x4(%esp)
 857533d:	8b 45 10             	mov    0x10(%ebp),%eax
 8575340:	89 04 24             	mov    %eax,(%esp)
 8575343:	e8 62 56 b1 ff       	call   808a9aa <_ZN20CodeHackCheckRangeEx11SetFileNameEPKc>
 8575348:	8d 45 e8             	lea    -0x18(%ebp),%eax
 857534b:	89 44 24 08          	mov    %eax,0x8(%esp)
 857534f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8575352:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575356:	8b 45 08             	mov    0x8(%ebp),%eax
 8575359:	89 04 24             	mov    %eax,(%esp)
 857535c:	e8 cf fe ff ff       	call   8575230 <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_>
 8575361:	84 c0                	test   %al,%al
 8575363:	0f 84 d3 00 00 00    	je     857543c <_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x13a>
 8575369:	8b 45 ec             	mov    -0x14(%ebp),%eax
 857536c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857536f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8575372:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8575375:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8575378:	8b 45 dc             	mov    -0x24(%ebp),%eax
 857537b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 857537e:	89 81 04 01 00 00    	mov    %eax,0x104(%ecx)
 8575384:	89 91 08 01 00 00    	mov    %edx,0x108(%ecx)
 857538a:	8b 55 08             	mov    0x8(%ebp),%edx
 857538d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8575390:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575394:	89 04 24             	mov    %eax,(%esp)
 8575397:	e8 28 18 00 00       	call   8576bc4 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE5beginEv>
 857539c:	83 ec 04             	sub    $0x4,%esp
 857539f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85753a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85753a5:	eb 5f                	jmp    8575406 <_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x104>
 85753a7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85753aa:	89 04 24             	mov    %eax,(%esp)
 85753ad:	e8 9e 18 00 00       	call   8576c50 <_ZNK9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEdeEv>
 85753b2:	8b 00                	mov    (%eax),%eax
 85753b4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85753b7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85753ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85753bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85753c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85753c5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85753c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85753cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85753cf:	89 04 24             	mov    %eax,(%esp)
 85753d2:	e8 e3 fa ff ff       	call   8574eba <_ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm>
 85753d7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85753da:	89 44 24 04          	mov    %eax,0x4(%esp)
 85753de:	8b 45 0c             	mov    0xc(%ebp),%eax
 85753e1:	89 04 24             	mov    %eax,(%esp)
 85753e4:	e8 ef 53 b1 ff       	call   808a7d8 <_ZN18CodeHackChecksumEx21SetCodeHackCheckRangeERK18CodeHackCheckRange>
 85753e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85753ec:	8d 55 bc             	lea    -0x44(%ebp),%edx
 85753ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 85753f3:	89 04 24             	mov    %eax,(%esp)
 85753f6:	e8 4d 52 b1 ff       	call   808a648 <_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum>
 85753fb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85753fe:	89 04 24             	mov    %eax,(%esp)
 8575401:	e8 34 18 00 00       	call   8576c3a <_ZN9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEppEv>
 8575406:	8b 55 08             	mov    0x8(%ebp),%edx
 8575409:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857540c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575410:	89 04 24             	mov    %eax,(%esp)
 8575413:	e8 d0 17 00 00       	call   8576be8 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE3endEv>
 8575418:	83 ec 04             	sub    $0x4,%esp
 857541b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857541e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575422:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8575425:	89 04 24             	mov    %eax,(%esp)
 8575428:	e8 e1 17 00 00       	call   8576c0e <_ZN9__gnu_cxxneIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 857542d:	84 c0                	test   %al,%al
 857542f:	0f 85 72 ff ff ff    	jne    85753a7 <_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xa5>
 8575435:	b8 01 00 00 00       	mov    $0x1,%eax
 857543a:	eb 05                	jmp    8575441 <_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x13f>
 857543c:	b8 00 00 00 00       	mov    $0x0,%eax
 8575441:	c9                   	leave
 8575442:	c3                   	ret
 8575443:	90                   	nop

```

```c
// WindowsDataFileFamily::GenerateChecksum @ 0x8575302

/* WindowsDataFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*) */

undefined4 __thiscall
WindowsDataFileFamily::GenerateChecksum
          (WindowsDataFileFamily *this,CodeHackChecksumEx *param_1,CodeHackCheckRangeEx *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CodeHackChecksum local_48 [32];
  ulong local_28;
  ulong local_24;
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  local_20 [4];
  ulong local_1c;
  ulong local_18;
  __normal_iterator local_14 [4];
  WindowsDataFile *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  ::__normal_iterator(local_20);
  CodeHackChecksumData::Clear((CodeHackChecksumData *)param_1);
  CodeHackChecksumEx::SetFileName(param_1,(char *)(this + 0xc));
  CodeHackCheckRangeEx::SetFileName(param_2,(char *)(this + 0xc));
  cVar1 = GenerateRange(this,&local_18,&local_1c);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    local_28 = local_18;
    local_24 = local_1c;
    *(ulong *)(param_2 + 0x104) = local_18;
    *(ulong *)(param_2 + 0x108) = local_1c;
    std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::begin();
    while( true ) {
      std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::end();
      bVar2 = __gnu_cxx::operator!=(local_20,local_14);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
               ::operator*(local_20);
      local_10 = (WindowsDataFile *)*puVar3;
      WindowsDataFile::GenerateChecksum(local_10,local_48,local_18,local_1c);
      CodeHackChecksumEx::SetCodeHackCheckRange(param_1,(CodeHackCheckRange *)&local_28);
      CodeHackChecksumData::AddCodeHackChecksum((CodeHackChecksumData *)param_1,local_48);
      __gnu_cxx::
      __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
      ::operator++(local_20);
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## GenerateRange

```asm
// === 08575230 WindowsDataFileFamily::GenerateRange  [0x08575230-0x8575301] ===
 8575230:	55                   	push   %ebp
 8575231:	89 e5                	mov    %esp,%ebp
 8575233:	53                   	push   %ebx
 8575234:	83 ec 24             	sub    $0x24,%esp
 8575237:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 857523b:	8b 45 08             	mov    0x8(%ebp),%eax
 857523e:	89 04 24             	mov    %eax,(%esp)
 8575241:	e8 30 1a 00 00       	call   8576c76 <_ZNKSt6vectorIP15WindowsDataFileSaIS1_EE5emptyEv>
 8575246:	84 c0                	test   %al,%al
 8575248:	74 0a                	je     8575254 <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_+0x24>
 857524a:	b8 00 00 00 00       	mov    $0x0,%eax
 857524f:	e9 a8 00 00 00       	jmp    85752fc <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_+0xcc>
 8575254:	8b 45 08             	mov    0x8(%ebp),%eax
 8575257:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 857525d:	e8 3e 8a b0 ff       	call   807dca0 <rand@plt>
 8575262:	8b 55 08             	mov    0x8(%ebp),%edx
 8575265:	8b 92 1c 01 00 00    	mov    0x11c(%edx),%edx
 857526b:	8d 4a 01             	lea    0x1(%edx),%ecx
 857526e:	ba 00 00 00 00       	mov    $0x0,%edx
 8575273:	f7 f1                	div    %ecx
 8575275:	89 d0                	mov    %edx,%eax
 8575277:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 857527a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 857527d:	8b 45 08             	mov    0x8(%ebp),%eax
 8575280:	8b 90 14 01 00 00    	mov    0x114(%eax),%edx
 8575286:	8b 45 08             	mov    0x8(%ebp),%eax
 8575289:	8b 80 10 01 00 00    	mov    0x110(%eax),%eax
 857528f:	03 45 f0             	add    -0x10(%ebp),%eax
 8575292:	39 c2                	cmp    %eax,%edx
 8575294:	77 1f                	ja     85752b5 <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_+0x85>
 8575296:	8b 45 08             	mov    0x8(%ebp),%eax
 8575299:	8b 90 14 01 00 00    	mov    0x114(%eax),%edx
 857529f:	8b 45 08             	mov    0x8(%ebp),%eax
 85752a2:	8b 80 10 01 00 00    	mov    0x110(%eax),%eax
 85752a8:	89 d1                	mov    %edx,%ecx
 85752aa:	29 c1                	sub    %eax,%ecx
 85752ac:	89 c8                	mov    %ecx,%eax
 85752ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85752b1:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 85752b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85752b8:	8b 90 10 01 00 00    	mov    0x110(%eax),%edx
 85752be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85752c1:	89 10                	mov    %edx,(%eax)
 85752c3:	8b 45 10             	mov    0x10(%ebp),%eax
 85752c6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85752c9:	89 10                	mov    %edx,(%eax)
 85752cb:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 85752cf:	74 0f                	je     85752e0 <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_+0xb0>
 85752d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85752d4:	c7 80 10 01 00 00 00 	movl   $0x0,0x110(%eax)
 85752db:	00 00 00 
 85752de:	eb 17                	jmp    85752f7 <_ZN21WindowsDataFileFamily13GenerateRangeEPmS0_+0xc7>
 85752e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85752e3:	8b 80 10 01 00 00    	mov    0x110(%eax),%eax
 85752e9:	89 c2                	mov    %eax,%edx
 85752eb:	03 55 f0             	add    -0x10(%ebp),%edx
 85752ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85752f1:	89 90 10 01 00 00    	mov    %edx,0x110(%eax)
 85752f7:	b8 01 00 00 00       	mov    $0x1,%eax
 85752fc:	83 c4 24             	add    $0x24,%esp
 85752ff:	5b                   	pop    %ebx
 8575300:	5d                   	pop    %ebp
 8575301:	c3                   	ret

```

```c
// WindowsDataFileFamily::GenerateRange @ 0x8575230

/* WindowsDataFileFamily::GenerateRange(unsigned long*, unsigned long*) */

undefined4 __thiscall
WindowsDataFileFamily::GenerateRange(WindowsDataFileFamily *this,ulong *param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong local_14;
  
  cVar3 = std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::empty();
  if (cVar3 == '\0') {
    iVar1 = *(int *)(this + 0x118);
    uVar5 = rand();
    local_14 = iVar1 + uVar5 % (*(int *)(this + 0x11c) + 1U);
    bVar2 = *(uint *)(this + 0x114) <= *(int *)(this + 0x110) + local_14;
    if (bVar2) {
      local_14 = *(int *)(this + 0x114) - *(int *)(this + 0x110);
    }
    *param_1 = *(ulong *)(this + 0x110);
    *param_2 = local_14;
    if (bVar2) {
      *(undefined4 *)(this + 0x110) = 0;
    }
    else {
      *(ulong *)(this + 0x110) = *(int *)(this + 0x110) + local_14;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## IsDifferentFileData

```asm
// === 08575068 WindowsDataFileFamily::IsDifferentFileData  [0x08575068-0x857511d] ===
 8575068:	55                   	push   %ebp
 8575069:	89 e5                	mov    %esp,%ebp
 857506b:	83 ec 38             	sub    $0x38,%esp
 857506e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8575071:	89 04 24             	mov    %eax,(%esp)
 8575074:	e8 3d 1b 00 00       	call   8576bb6 <_ZN9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEC1Ev>
 8575079:	8b 55 08             	mov    0x8(%ebp),%edx
 857507c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857507f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575083:	89 04 24             	mov    %eax,(%esp)
 8575086:	e8 39 1b 00 00       	call   8576bc4 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE5beginEv>
 857508b:	83 ec 04             	sub    $0x4,%esp
 857508e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8575091:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8575094:	eb 55                	jmp    85750eb <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile+0x83>
 8575096:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8575099:	89 04 24             	mov    %eax,(%esp)
 857509c:	e8 af 1b 00 00       	call   8576c50 <_ZNK9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEdeEv>
 85750a1:	8b 00                	mov    (%eax),%eax
 85750a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85750a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85750a9:	8b 10                	mov    (%eax),%edx
 85750ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 85750ae:	8b 00                	mov    (%eax),%eax
 85750b0:	39 c2                	cmp    %eax,%edx
 85750b2:	75 2c                	jne    85750e0 <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile+0x78>
 85750b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85750b7:	8b 08                	mov    (%eax),%ecx
 85750b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85750bc:	8b 50 04             	mov    0x4(%eax),%edx
 85750bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85750c2:	8b 40 04             	mov    0x4(%eax),%eax
 85750c5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85750c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85750cd:	89 04 24             	mov    %eax,(%esp)
 85750d0:	e8 bb 8b b0 ff       	call   807dc90 <memcmp@plt>
 85750d5:	85 c0                	test   %eax,%eax
 85750d7:	75 07                	jne    85750e0 <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile+0x78>
 85750d9:	b8 00 00 00 00       	mov    $0x0,%eax
 85750de:	eb 3b                	jmp    857511b <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile+0xb3>
 85750e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85750e3:	89 04 24             	mov    %eax,(%esp)
 85750e6:	e8 4f 1b 00 00       	call   8576c3a <_ZN9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEppEv>
 85750eb:	8b 55 08             	mov    0x8(%ebp),%edx
 85750ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85750f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85750f5:	89 04 24             	mov    %eax,(%esp)
 85750f8:	e8 eb 1a 00 00       	call   8576be8 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE3endEv>
 85750fd:	83 ec 04             	sub    $0x4,%esp
 8575100:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8575103:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575107:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857510a:	89 04 24             	mov    %eax,(%esp)
 857510d:	e8 fc 1a 00 00       	call   8576c0e <_ZN9__gnu_cxxneIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8575112:	84 c0                	test   %al,%al
 8575114:	75 80                	jne    8575096 <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile+0x2e>
 8575116:	b8 01 00 00 00       	mov    $0x1,%eax
 857511b:	c9                   	leave
 857511c:	c3                   	ret
 857511d:	90                   	nop

```

```c
// WindowsDataFileFamily::IsDifferentFileData @ 0x8575068

/* WindowsDataFileFamily::IsDifferentFileData(WindowsDataFile*) */

undefined4 __thiscall
WindowsDataFileFamily::IsDifferentFileData(WindowsDataFileFamily *this,WindowsDataFile *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  ::__normal_iterator(local_18);
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::begin();
  while( true ) {
    std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 1;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
                      ::operator*(local_18);
    local_10 = (int *)*local_10;
    if ((*local_10 == *(int *)param_1) &&
       (iVar2 = memcmp((void *)local_10[1],*(void **)(param_1 + 4),*(size_t *)param_1), iVar2 == 0))
    break;
    __gnu_cxx::
    __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
    ::operator++(local_18);
  }
  return 0;
}

```

---

## IsScanningAddressReset

```asm
// === 08575444 WindowsDataFileFamily::IsScanningAddressReset  [0x08575444-0x8575461] ===
 8575444:	55                   	push   %ebp
 8575445:	89 e5                	mov    %esp,%ebp
 8575447:	8b 45 08             	mov    0x8(%ebp),%eax
 857544a:	8b 80 10 01 00 00    	mov    0x110(%eax),%eax
 8575450:	85 c0                	test   %eax,%eax
 8575452:	75 07                	jne    857545b <_ZN21WindowsDataFileFamily22IsScanningAddressResetEv+0x17>
 8575454:	b8 01 00 00 00       	mov    $0x1,%eax
 8575459:	eb 05                	jmp    8575460 <_ZN21WindowsDataFileFamily22IsScanningAddressResetEv+0x1c>
 857545b:	b8 00 00 00 00       	mov    $0x0,%eax
 8575460:	5d                   	pop    %ebp
 8575461:	c3                   	ret

```

```c
// WindowsDataFileFamily::IsScanningAddressReset @ 0x8575444

/* WindowsDataFileFamily::IsScanningAddressReset() */

bool __thiscall WindowsDataFileFamily::IsScanningAddressReset(WindowsDataFileFamily *this)

{
  return *(int *)(this + 0x110) == 0;
}

```

---

## LoadWindowsDataFile

```asm
// === 0857513c WindowsDataFileFamily::LoadWindowsDataFile  [0x0857513c-0x857522f] ===
 857513c:	55                   	push   %ebp
 857513d:	89 e5                	mov    %esp,%ebp
 857513f:	53                   	push   %ebx
 8575140:	83 ec 24             	sub    $0x24,%esp
 8575143:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 857514a:	e8 01 f3 1a 00       	call   8724450 <_Znwj>
 857514f:	89 c3                	mov    %eax,%ebx
 8575151:	89 d8                	mov    %ebx,%eax
 8575153:	89 04 24             	mov    %eax,(%esp)
 8575156:	e8 e3 fc ff ff       	call   8574e3e <_ZN15WindowsDataFileC1Ev>
 857515b:	89 d8                	mov    %ebx,%eax
 857515d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8575160:	8b 45 08             	mov    0x8(%ebp),%eax
 8575163:	89 04 24             	mov    %eax,(%esp)
 8575166:	e8 0b 1b 00 00       	call   8576c76 <_ZNKSt6vectorIP15WindowsDataFileSaIS1_EE5emptyEv>
 857516b:	84 c0                	test   %al,%al
 857516d:	74 15                	je     8575184 <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0x48>
 857516f:	8b 45 08             	mov    0x8(%ebp),%eax
 8575172:	8d 50 0c             	lea    0xc(%eax),%edx
 8575175:	8b 45 10             	mov    0x10(%ebp),%eax
 8575178:	89 44 24 04          	mov    %eax,0x4(%esp)
 857517c:	89 14 24             	mov    %edx,(%esp)
 857517f:	e8 59 54 b1 ff       	call   808a5dd <_Z13StrCpyMaxPathPcPKc>
 8575184:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8575187:	8b 55 0c             	mov    0xc(%ebp),%edx
 857518a:	89 54 24 04          	mov    %edx,0x4(%esp)
 857518e:	89 04 24             	mov    %eax,(%esp)
 8575191:	e8 ea fc ff ff       	call   8574e80 <_ZN15WindowsDataFile19LoadWindowsDataFileEPKc>
 8575196:	83 f0 01             	xor    $0x1,%eax
 8575199:	84 c0                	test   %al,%al
 857519b:	74 1e                	je     85751bb <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0x7f>
 857519d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85751a0:	85 db                	test   %ebx,%ebx
 85751a2:	74 10                	je     85751b4 <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0x78>
 85751a4:	89 1c 24             	mov    %ebx,(%esp)
 85751a7:	e8 aa fc ff ff       	call   8574e56 <_ZN15WindowsDataFileD1Ev>
 85751ac:	89 1c 24             	mov    %ebx,(%esp)
 85751af:	e8 3c f3 1a 00       	call   87244f0 <_ZdlPv>
 85751b4:	b8 00 00 00 00       	mov    $0x0,%eax
 85751b9:	eb 6e                	jmp    8575229 <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0xed>
 85751bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85751be:	89 44 24 04          	mov    %eax,0x4(%esp)
 85751c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85751c5:	89 04 24             	mov    %eax,(%esp)
 85751c8:	e8 9b fe ff ff       	call   8575068 <_ZN21WindowsDataFileFamily19IsDifferentFileDataEP15WindowsDataFile>
 85751cd:	83 f0 01             	xor    $0x1,%eax
 85751d0:	84 c0                	test   %al,%al
 85751d2:	74 1e                	je     85751f2 <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0xb6>
 85751d4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85751d7:	85 db                	test   %ebx,%ebx
 85751d9:	74 10                	je     85751eb <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0xaf>
 85751db:	89 1c 24             	mov    %ebx,(%esp)
 85751de:	e8 73 fc ff ff       	call   8574e56 <_ZN15WindowsDataFileD1Ev>
 85751e3:	89 1c 24             	mov    %ebx,(%esp)
 85751e6:	e8 05 f3 1a 00       	call   87244f0 <_ZdlPv>
 85751eb:	b8 01 00 00 00       	mov    $0x1,%eax
 85751f0:	eb 37                	jmp    8575229 <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0xed>
 85751f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85751f5:	8b 90 14 01 00 00    	mov    0x114(%eax),%edx
 85751fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85751fe:	8b 00                	mov    (%eax),%eax
 8575200:	39 c2                	cmp    %eax,%edx
 8575202:	73 0e                	jae    8575212 <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_+0xd6>
 8575204:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8575207:	8b 10                	mov    (%eax),%edx
 8575209:	8b 45 08             	mov    0x8(%ebp),%eax
 857520c:	89 90 14 01 00 00    	mov    %edx,0x114(%eax)
 8575212:	8b 45 08             	mov    0x8(%ebp),%eax
 8575215:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8575218:	89 54 24 04          	mov    %edx,0x4(%esp)
 857521c:	89 04 24             	mov    %eax,(%esp)
 857521f:	e8 96 1a 00 00       	call   8576cba <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE9push_backERKS1_>
 8575224:	b8 01 00 00 00       	mov    $0x1,%eax
 8575229:	83 c4 24             	add    $0x24,%esp
 857522c:	5b                   	pop    %ebx
 857522d:	5d                   	pop    %ebp
 857522e:	c3                   	ret
 857522f:	90                   	nop

```

```c
// WindowsDataFileFamily::LoadWindowsDataFile @ 0x857513c

/* WindowsDataFileFamily::LoadWindowsDataFile(char const*, char const*) */

undefined4 __thiscall
WindowsDataFileFamily::LoadWindowsDataFile(WindowsDataFileFamily *this,char *param_1,char *param_2)

{
  char cVar1;
  WindowsDataFile *pWVar2;
  undefined4 uVar3;
  WindowsDataFile *local_10 [2];
  
  pWVar2 = operator_new(8);
  WindowsDataFile::WindowsDataFile(pWVar2);
  local_10[0] = pWVar2;
  cVar1 = std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::empty();
  if (cVar1 != '\0') {
    StrCpyMaxPath((char *)(this + 0xc),param_2);
  }
  cVar1 = WindowsDataFile::LoadWindowsDataFile(local_10[0],param_1);
  pWVar2 = local_10[0];
  if (cVar1 == '\x01') {
    cVar1 = IsDifferentFileData(this,local_10[0]);
    pWVar2 = local_10[0];
    if (cVar1 == '\x01') {
      if (*(uint *)(this + 0x114) < *(uint *)local_10[0]) {
        *(undefined4 *)(this + 0x114) = *(undefined4 *)local_10[0];
      }
      std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::push_back
                ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this,local_10);
      uVar3 = 1;
    }
    else {
      if (local_10[0] != (WindowsDataFile *)0x0) {
        WindowsDataFile::~WindowsDataFile(local_10[0]);
        operator_delete(pWVar2);
      }
      uVar3 = 1;
    }
  }
  else {
    if (local_10[0] != (WindowsDataFile *)0x0) {
      WindowsDataFile::~WindowsDataFile(local_10[0]);
      operator_delete(pWVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## SetCheckingOption

```asm
// === 0857511e WindowsDataFileFamily::SetCheckingOption  [0x0857511e-0x857513b] ===
 857511e:	55                   	push   %ebp
 857511f:	89 e5                	mov    %esp,%ebp
 8575121:	8b 45 08             	mov    0x8(%ebp),%eax
 8575124:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575127:	89 90 18 01 00 00    	mov    %edx,0x118(%eax)
 857512d:	8b 45 08             	mov    0x8(%ebp),%eax
 8575130:	8b 55 10             	mov    0x10(%ebp),%edx
 8575133:	89 90 1c 01 00 00    	mov    %edx,0x11c(%eax)
 8575139:	5d                   	pop    %ebp
 857513a:	c3                   	ret
 857513b:	90                   	nop

```

```c
// WindowsDataFileFamily::SetCheckingOption @ 0x857511e

/* WindowsDataFileFamily::SetCheckingOption(unsigned long, unsigned long) */

void __thiscall
WindowsDataFileFamily::SetCheckingOption(WindowsDataFileFamily *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x118) = param_1;
  *(ulong *)(this + 0x11c) = param_2;
  return;
}

```

---

## WindowsDataFileFamily

```asm
// === 08574f16 WindowsDataFileFamily::WindowsDataFileFamily  [0x08574f16-0x8574f7b] ===
 8574f16:	55                   	push   %ebp
 8574f17:	89 e5                	mov    %esp,%ebp
 8574f19:	83 ec 18             	sub    $0x18,%esp
 8574f1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8574f1f:	89 04 24             	mov    %eax,(%esp)
 8574f22:	e8 1d 1c 00 00       	call   8576b44 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EEC1Ev>
 8574f27:	8b 45 08             	mov    0x8(%ebp),%eax
 8574f2a:	83 c0 0c             	add    $0xc,%eax
 8574f2d:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8574f34:	00 
 8574f35:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8574f3c:	00 
 8574f3d:	89 04 24             	mov    %eax,(%esp)
 8574f40:	e8 7b 8d b0 ff       	call   807dcc0 <memset@plt>
 8574f45:	8b 45 08             	mov    0x8(%ebp),%eax
 8574f48:	c7 80 10 01 00 00 00 	movl   $0x0,0x110(%eax)
 8574f4f:	00 00 00 
 8574f52:	8b 45 08             	mov    0x8(%ebp),%eax
 8574f55:	c7 80 14 01 00 00 00 	movl   $0x0,0x114(%eax)
 8574f5c:	00 00 00 
 8574f5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8574f62:	c7 80 18 01 00 00 00 	movl   $0x0,0x118(%eax)
 8574f69:	00 00 00 
 8574f6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8574f6f:	c7 80 1c 01 00 00 00 	movl   $0x0,0x11c(%eax)
 8574f76:	00 00 00 
 8574f79:	c9                   	leave
 8574f7a:	c3                   	ret
 8574f7b:	90                   	nop

```

```c
// WindowsDataFileFamily::WindowsDataFileFamily @ 0x8574f16

/* WindowsDataFileFamily::WindowsDataFileFamily() */

void __thiscall WindowsDataFileFamily::WindowsDataFileFamily(WindowsDataFileFamily *this)

{
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::vector
            ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this);
  memset(this + 0xc,0,0x104);
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}

```

---

## ~WindowsDataFileFamily

```asm
// === 08574f7c WindowsDataFileFamily::~WindowsDataFileFamily  [0x08574f7c-0x8575067] ===
 8574f7c:	55                   	push   %ebp
 8574f7d:	89 e5                	mov    %esp,%ebp
 8574f7f:	56                   	push   %esi
 8574f80:	53                   	push   %ebx
 8574f81:	83 ec 30             	sub    $0x30,%esp
 8574f84:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574f87:	89 04 24             	mov    %eax,(%esp)
 8574f8a:	e8 27 1c 00 00       	call   8576bb6 <_ZN9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEC1Ev>
 8574f8f:	8b 55 08             	mov    0x8(%ebp),%edx
 8574f92:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8574f95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574f99:	89 04 24             	mov    %eax,(%esp)
 8574f9c:	e8 23 1c 00 00       	call   8576bc4 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE5beginEv>
 8574fa1:	83 ec 04             	sub    $0x4,%esp
 8574fa4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8574fa7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8574faa:	eb 53                	jmp    8574fff <_ZN21WindowsDataFileFamilyD1Ev+0x83>
 8574fac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574faf:	89 04 24             	mov    %eax,(%esp)
 8574fb2:	e8 99 1c 00 00       	call   8576c50 <_ZNK9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574fb7:	8b 00                	mov    (%eax),%eax
 8574fb9:	85 c0                	test   %eax,%eax
 8574fbb:	0f 95 c0             	setne  %al
 8574fbe:	84 c0                	test   %al,%al
 8574fc0:	74 32                	je     8574ff4 <_ZN21WindowsDataFileFamilyD1Ev+0x78>
 8574fc2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574fc5:	89 04 24             	mov    %eax,(%esp)
 8574fc8:	e8 83 1c 00 00       	call   8576c50 <_ZNK9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574fcd:	8b 18                	mov    (%eax),%ebx
 8574fcf:	85 db                	test   %ebx,%ebx
 8574fd1:	74 10                	je     8574fe3 <_ZN21WindowsDataFileFamilyD1Ev+0x67>
 8574fd3:	89 1c 24             	mov    %ebx,(%esp)
 8574fd6:	e8 7b fe ff ff       	call   8574e56 <_ZN15WindowsDataFileD1Ev>
 8574fdb:	89 1c 24             	mov    %ebx,(%esp)
 8574fde:	e8 0d f5 1a 00       	call   87244f0 <_ZdlPv>
 8574fe3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574fe6:	89 04 24             	mov    %eax,(%esp)
 8574fe9:	e8 62 1c 00 00       	call   8576c50 <_ZNK9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574fee:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8574ff4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574ff7:	89 04 24             	mov    %eax,(%esp)
 8574ffa:	e8 3b 1c 00 00       	call   8576c3a <_ZN9__gnu_cxx17__normal_iteratorIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEppEv>
 8574fff:	8b 55 08             	mov    0x8(%ebp),%edx
 8575002:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8575005:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575009:	89 04 24             	mov    %eax,(%esp)
 857500c:	e8 d7 1b 00 00       	call   8576be8 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE3endEv>
 8575011:	83 ec 04             	sub    $0x4,%esp
 8575014:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8575017:	89 44 24 04          	mov    %eax,0x4(%esp)
 857501b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857501e:	89 04 24             	mov    %eax,(%esp)
 8575021:	e8 e8 1b 00 00       	call   8576c0e <_ZN9__gnu_cxxneIPP15WindowsDataFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8575026:	84 c0                	test   %al,%al
 8575028:	75 82                	jne    8574fac <_ZN21WindowsDataFileFamilyD1Ev+0x30>
 857502a:	8b 45 08             	mov    0x8(%ebp),%eax
 857502d:	89 04 24             	mov    %eax,(%esp)
 8575030:	e8 25 1c 00 00       	call   8576c5a <_ZNSt6vectorIP15WindowsDataFileSaIS1_EE5clearEv>
 8575035:	eb 1b                	jmp    8575052 <_ZN21WindowsDataFileFamilyD1Ev+0xd6>
 8575037:	89 d3                	mov    %edx,%ebx
 8575039:	89 c6                	mov    %eax,%esi
 857503b:	8b 45 08             	mov    0x8(%ebp),%eax
 857503e:	89 04 24             	mov    %eax,(%esp)
 8575041:	e8 12 1b 00 00       	call   8576b58 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EED1Ev>
 8575046:	89 f0                	mov    %esi,%eax
 8575048:	89 da                	mov    %ebx,%edx
 857504a:	89 04 24             	mov    %eax,(%esp)
 857504d:	e8 fe e6 56 00       	call   8ae3750 <_Unwind_Resume>
 8575052:	8b 45 08             	mov    0x8(%ebp),%eax
 8575055:	89 04 24             	mov    %eax,(%esp)
 8575058:	e8 fb 1a 00 00       	call   8576b58 <_ZNSt6vectorIP15WindowsDataFileSaIS1_EED1Ev>
 857505d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8575060:	83 c4 00             	add    $0x0,%esp
 8575063:	5b                   	pop    %ebx
 8575064:	5e                   	pop    %esi
 8575065:	5d                   	pop    %ebp
 8575066:	c3                   	ret
 8575067:	90                   	nop

```

```c
// WindowsDataFileFamily::~WindowsDataFileFamily @ 0x8574f7c

/* WindowsDataFileFamily::~WindowsDataFileFamily() */

void __thiscall WindowsDataFileFamily::~WindowsDataFileFamily(WindowsDataFileFamily *this)

{
  WindowsDataFile *this_00;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  local_14 [4];
  __normal_iterator local_10 [4];
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
  ::__normal_iterator(local_14);
                    /* try { // try from 08574f9c to 08575034 has its CatchHandler @ 08575037 */
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::begin();
  while( true ) {
    std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
                    ::operator*(local_14);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
               ::operator*(local_14);
      this_00 = (WindowsDataFile *)*puVar3;
      if (this_00 != (WindowsDataFile *)0x0) {
        WindowsDataFile::~WindowsDataFile(this_00);
        operator_delete(this_00);
      }
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
               ::operator*(local_14);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsDataFile**,std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>>
    ::operator++(local_14);
  }
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::clear
            ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this);
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::~vector
            ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this);
  return;
}

```

