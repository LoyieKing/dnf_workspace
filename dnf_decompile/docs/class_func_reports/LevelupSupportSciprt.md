# LevelupSupportSciprt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## LevelupSupportSciprt

```asm
// === 08ab5124 LevelupSupportSciprt::LevelupSupportSciprt  [0x08ab5124-0x8ab5137] ===
 8ab5124:	55                   	push   %ebp
 8ab5125:	89 e5                	mov    %esp,%ebp
 8ab5127:	83 ec 18             	sub    $0x18,%esp
 8ab512a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab512d:	89 04 24             	mov    %eax,(%esp)
 8ab5130:	e8 6b 09 00 00       	call   8ab5aa0 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEEC1Ev>
 8ab5135:	c9                   	leave
 8ab5136:	c3                   	ret
 8ab5137:	90                   	nop

```

```c
// LevelupSupportSciprt::LevelupSupportSciprt @ 0x8ab5124

/* LevelupSupportSciprt::LevelupSupportSciprt() */

void __thiscall LevelupSupportSciprt::LevelupSupportSciprt(LevelupSupportSciprt *this)

{
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::map((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
         *)this);
  return;
}

```

---

## clearScript

```asm
// === 08ab5442 LevelupSupportSciprt::clearScript  [0x08ab5442-0x8ab54bd] ===
 8ab5442:	55                   	push   %ebp
 8ab5443:	89 e5                	mov    %esp,%ebp
 8ab5445:	53                   	push   %ebx
 8ab5446:	83 ec 24             	sub    $0x24,%esp
 8ab5449:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab544c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab544f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab5453:	89 04 24             	mov    %eax,(%esp)
 8ab5456:	e8 a3 27 69 ff       	call   8147bfe <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 8ab545b:	83 ec 04             	sub    $0x4,%esp
 8ab545e:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab5461:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab5464:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab5468:	89 04 24             	mov    %eax,(%esp)
 8ab546b:	e8 b4 27 69 ff       	call   8147c24 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab5470:	83 ec 04             	sub    $0x4,%esp
 8ab5473:	eb 22                	jmp    8ab5497 <_ZN20LevelupSupportSciprt11clearScriptEv+0x55>
 8ab5475:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab5478:	89 04 24             	mov    %eax,(%esp)
 8ab547b:	e8 de 27 69 ff       	call   8147c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEptEv>
 8ab5480:	8b 58 04             	mov    0x4(%eax),%ebx
 8ab5483:	85 db                	test   %ebx,%ebx
 8ab5485:	74 10                	je     8ab5497 <_ZN20LevelupSupportSciprt11clearScriptEv+0x55>
 8ab5487:	89 1c 24             	mov    %ebx,(%esp)
 8ab548a:	e8 9f 06 00 00       	call   8ab5b2e <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EED1Ev>
 8ab548f:	89 1c 24             	mov    %ebx,(%esp)
 8ab5492:	e8 59 f0 c6 ff       	call   87244f0 <_ZdlPv>
 8ab5497:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab549a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab549e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab54a1:	89 04 24             	mov    %eax,(%esp)
 8ab54a4:	e8 a1 27 69 ff       	call   8147c4a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8ab54a9:	84 c0                	test   %al,%al
 8ab54ab:	75 c8                	jne    8ab5475 <_ZN20LevelupSupportSciprt11clearScriptEv+0x33>
 8ab54ad:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab54b0:	89 04 24             	mov    %eax,(%esp)
 8ab54b3:	e8 16 27 69 ff       	call   8147bce <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5clearEv>
 8ab54b8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ab54bb:	c9                   	leave
 8ab54bc:	c3                   	ret
 8ab54bd:	90                   	nop

```

```c
// LevelupSupportSciprt::clearScript @ 0x8ab5442

/* LevelupSupportSciprt::clearScript() */

void __thiscall LevelupSupportSciprt::clearScript(LevelupSupportSciprt *this)

{
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *this_00;
  char cVar1;
  int iVar2;
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_14 [4];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_10 [8];
  
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::begin(local_10);
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                          *)local_10);
    this_00 = *(vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
                **)(iVar2 + 4);
    if (this_00 !=
        (vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *)0x0
       ) {
      std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
      ~vector(this_00);
      operator_delete(this_00);
    }
  }
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
           *)this);
  return;
}

```

---

## loadScript

```asm
// === 08ab514c LevelupSupportSciprt::loadScript  [0x08ab514c-0x8ab5441] ===
 8ab514c:	55                   	push   %ebp
 8ab514d:	89 e5                	mov    %esp,%ebp
 8ab514f:	57                   	push   %edi
 8ab5150:	56                   	push   %esi
 8ab5151:	53                   	push   %ebx
 8ab5152:	83 ec 6c             	sub    $0x6c,%esp
 8ab5155:	c7 44 24 04 80 ca e2 	movl   $0x8e2ca80,0x4(%esp)
 8ab515c:	08 
 8ab515d:	c7 04 24 96 ca e2 08 	movl   $0x8e2ca96,(%esp)
 8ab5164:	e8 c0 6b e0 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8ab5169:	83 f0 01             	xor    $0x1,%eax
 8ab516c:	84 c0                	test   %al,%al
 8ab516e:	74 0a                	je     8ab517a <_ZN20LevelupSupportSciprt10loadScriptEv+0x2e>
 8ab5170:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8ab5175:	e9 ba 02 00 00       	jmp    8ab5434 <_ZN20LevelupSupportSciprt10loadScriptEv+0x2e8>
 8ab517a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab517d:	89 04 24             	mov    %eax,(%esp)
 8ab5180:	e8 4b 14 c5 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab5185:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8ab5189:	c6 45 ba 00          	movb   $0x0,-0x46(%ebp)
 8ab518d:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8ab5194:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab5197:	89 04 24             	mov    %eax,(%esp)
 8ab519a:	e8 7b 09 00 00       	call   8ab5b1a <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EEC1Ev>
 8ab519f:	eb 04                	jmp    8ab51a5 <_ZN20LevelupSupportSciprt10loadScriptEv+0x59>
 8ab51a1:	90                   	nop
 8ab51a2:	eb 01                	jmp    8ab51a5 <_ZN20LevelupSupportSciprt10loadScriptEv+0x59>
 8ab51a4:	90                   	nop
 8ab51a5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab51ac:	00 
 8ab51ad:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab51b0:	89 04 24             	mov    %eax,(%esp)
 8ab51b3:	e8 a7 76 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab51b8:	83 f0 01             	xor    $0x1,%eax
 8ab51bb:	84 c0                	test   %al,%al
 8ab51bd:	0f 85 13 02 00 00    	jne    8ab53d6 <_ZN20LevelupSupportSciprt10loadScriptEv+0x28a>
 8ab51c3:	c7 44 24 04 9d ca e2 	movl   $0x8e2ca9d,0x4(%esp)
 8ab51ca:	08 
 8ab51cb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab51ce:	89 04 24             	mov    %eax,(%esp)
 8ab51d1:	e8 cb b7 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab51d6:	84 c0                	test   %al,%al
 8ab51d8:	74 c7                	je     8ab51a1 <_ZN20LevelupSupportSciprt10loadScriptEv+0x55>
 8ab51da:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab51e1:	00 
 8ab51e2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab51e5:	89 04 24             	mov    %eax,(%esp)
 8ab51e8:	e8 72 76 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab51ed:	83 f0 01             	xor    $0x1,%eax
 8ab51f0:	84 c0                	test   %al,%al
 8ab51f2:	0f 85 e1 01 00 00    	jne    8ab53d9 <_ZN20LevelupSupportSciprt10loadScriptEv+0x28d>
 8ab51f8:	c7 44 24 04 a4 ca e2 	movl   $0x8e2caa4,0x4(%esp)
 8ab51ff:	08 
 8ab5200:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5203:	89 04 24             	mov    %eax,(%esp)
 8ab5206:	e8 96 b7 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab520b:	84 c0                	test   %al,%al
 8ab520d:	74 0f                	je     8ab521e <_ZN20LevelupSupportSciprt10loadScriptEv+0xd2>
 8ab520f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ab5216:	e8 60 71 e0 ff       	call   88bc37b <_Z7ScanIntPb>
 8ab521b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ab521e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab5225:	00 
 8ab5226:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5229:	89 04 24             	mov    %eax,(%esp)
 8ab522c:	e8 2e 76 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab5231:	83 f0 01             	xor    $0x1,%eax
 8ab5234:	84 c0                	test   %al,%al
 8ab5236:	0f 85 a0 01 00 00    	jne    8ab53dc <_ZN20LevelupSupportSciprt10loadScriptEv+0x290>
 8ab523c:	c7 44 24 04 ac ca e2 	movl   $0x8e2caac,0x4(%esp)
 8ab5243:	08 
 8ab5244:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5247:	89 04 24             	mov    %eax,(%esp)
 8ab524a:	e8 52 b7 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab524f:	84 c0                	test   %al,%al
 8ab5251:	74 69                	je     8ab52bc <_ZN20LevelupSupportSciprt10loadScriptEv+0x170>
 8ab5253:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8ab525a:	00 
 8ab525b:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8ab525e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab5262:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5265:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab5269:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8ab526c:	89 04 24             	mov    %eax,(%esp)
 8ab526f:	e8 3b 7c e0 ff       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 8ab5274:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ab5277:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8ab527b:	84 c0                	test   %al,%al
 8ab527d:	75 3c                	jne    8ab52bb <_ZN20LevelupSupportSciprt10loadScriptEv+0x16f>
 8ab527f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ab5286:	e8 f0 70 e0 ff       	call   88bc37b <_Z7ScanIntPb>
 8ab528b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ab528e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ab5291:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab5295:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ab5298:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab529c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ab529f:	89 04 24             	mov    %eax,(%esp)
 8ab52a2:	e8 9d 07 00 00       	call   8ab5a44 <_ZN20LevelupSupportSciprt8ItemInfoC1Eii>
 8ab52a7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ab52aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab52ae:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab52b1:	89 04 24             	mov    %eax,(%esp)
 8ab52b4:	e8 d3 08 00 00       	call   8ab5b8c <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EE9push_backEOS1_>
 8ab52b9:	eb 98                	jmp    8ab5253 <_ZN20LevelupSupportSciprt10loadScriptEv+0x107>
 8ab52bb:	90                   	nop
 8ab52bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab52c3:	00 
 8ab52c4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab52c7:	89 04 24             	mov    %eax,(%esp)
 8ab52ca:	e8 90 75 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab52cf:	83 f0 01             	xor    $0x1,%eax
 8ab52d2:	84 c0                	test   %al,%al
 8ab52d4:	0f 85 05 01 00 00    	jne    8ab53df <_ZN20LevelupSupportSciprt10loadScriptEv+0x293>
 8ab52da:	c7 44 24 04 b5 ca e2 	movl   $0x8e2cab5,0x4(%esp)
 8ab52e1:	08 
 8ab52e2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab52e5:	89 04 24             	mov    %eax,(%esp)
 8ab52e8:	e8 b4 b6 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab52ed:	84 c0                	test   %al,%al
 8ab52ef:	0f 84 af fe ff ff    	je     8ab51a4 <_ZN20LevelupSupportSciprt10loadScriptEv+0x58>
 8ab52f5:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab52f8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab52fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab52ff:	89 04 24             	mov    %eax,(%esp)
 8ab5302:	e8 1d 29 69 ff       	call   8147c24 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab5307:	83 ec 04             	sub    $0x4,%esp
 8ab530a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab530d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ab5310:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8ab5313:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab5317:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab531b:	89 04 24             	mov    %eax,(%esp)
 8ab531e:	e8 05 2a 69 ff       	call   8147d28 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab5323:	83 ec 04             	sub    $0x4,%esp
 8ab5326:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab5329:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab532d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ab5330:	89 04 24             	mov    %eax,(%esp)
 8ab5333:	e8 12 29 69 ff       	call   8147c4a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8ab5338:	84 c0                	test   %al,%al
 8ab533a:	74 1d                	je     8ab5359 <_ZN20LevelupSupportSciprt10loadScriptEv+0x20d>
 8ab533c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab533f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab5343:	c7 04 24 bd ca e2 08 	movl   $0x8e2cabd,(%esp)
 8ab534a:	e8 11 88 5c ff       	call   807db60 <printf@plt>
 8ab534f:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8ab5354:	e9 a8 00 00 00       	jmp    8ab5401 <_ZN20LevelupSupportSciprt10loadScriptEv+0x2b5>
 8ab5359:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8ab5360:	e8 eb f0 c6 ff       	call   8724450 <_Znwj>
 8ab5365:	89 c3                	mov    %eax,%ebx
 8ab5367:	89 d8                	mov    %ebx,%eax
 8ab5369:	89 04 24             	mov    %eax,(%esp)
 8ab536c:	e8 a9 07 00 00       	call   8ab5b1a <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EEC1Ev>
 8ab5371:	eb 12                	jmp    8ab5385 <_ZN20LevelupSupportSciprt10loadScriptEv+0x239>
 8ab5373:	89 d6                	mov    %edx,%esi
 8ab5375:	89 c7                	mov    %eax,%edi
 8ab5377:	89 1c 24             	mov    %ebx,(%esp)
 8ab537a:	e8 71 f1 c6 ff       	call   87244f0 <_ZdlPv>
 8ab537f:	89 f8                	mov    %edi,%eax
 8ab5381:	89 f2                	mov    %esi,%edx
 8ab5383:	eb 67                	jmp    8ab53ec <_ZN20LevelupSupportSciprt10loadScriptEv+0x2a0>
 8ab5385:	89 d8                	mov    %ebx,%eax
 8ab5387:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8ab538a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ab538d:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8ab5390:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab5394:	89 04 24             	mov    %eax,(%esp)
 8ab5397:	e8 12 08 00 00       	call   8ab5bae <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EE4swapEOS3_>
 8ab539c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ab539f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab53a3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ab53a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab53aa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab53ad:	89 04 24             	mov    %eax,(%esp)
 8ab53b0:	e8 6d 08 00 00       	call   8ab5c22 <_ZNSt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS3_EEEC1IRiRS6_EEOT_OT0_>
 8ab53b5:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab53b8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ab53bb:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8ab53be:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ab53c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab53c6:	89 04 24             	mov    %eax,(%esp)
 8ab53c9:	e8 82 08 00 00       	call   8ab5c50 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE6insertERKSA_>
 8ab53ce:	83 ec 04             	sub    $0x4,%esp
 8ab53d1:	e9 cf fd ff ff       	jmp    8ab51a5 <_ZN20LevelupSupportSciprt10loadScriptEv+0x59>
 8ab53d6:	90                   	nop
 8ab53d7:	eb 07                	jmp    8ab53e0 <_ZN20LevelupSupportSciprt10loadScriptEv+0x294>
 8ab53d9:	90                   	nop
 8ab53da:	eb 04                	jmp    8ab53e0 <_ZN20LevelupSupportSciprt10loadScriptEv+0x294>
 8ab53dc:	90                   	nop
 8ab53dd:	eb 01                	jmp    8ab53e0 <_ZN20LevelupSupportSciprt10loadScriptEv+0x294>
 8ab53df:	90                   	nop
 8ab53e0:	e8 6f 6c e0 ff       	call   88bc054 <_Z20unloadRDARScriptFilev>
 8ab53e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab53ea:	eb 15                	jmp    8ab5401 <_ZN20LevelupSupportSciprt10loadScriptEv+0x2b5>
 8ab53ec:	89 d3                	mov    %edx,%ebx
 8ab53ee:	89 c6                	mov    %eax,%esi
 8ab53f0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab53f3:	89 04 24             	mov    %eax,(%esp)
 8ab53f6:	e8 33 07 00 00       	call   8ab5b2e <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EED1Ev>
 8ab53fb:	89 f0                	mov    %esi,%eax
 8ab53fd:	89 da                	mov    %ebx,%edx
 8ab53ff:	eb 0d                	jmp    8ab540e <_ZN20LevelupSupportSciprt10loadScriptEv+0x2c2>
 8ab5401:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab5404:	89 04 24             	mov    %eax,(%esp)
 8ab5407:	e8 22 07 00 00       	call   8ab5b2e <_ZNSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EED1Ev>
 8ab540c:	eb 1b                	jmp    8ab5429 <_ZN20LevelupSupportSciprt10loadScriptEv+0x2dd>
 8ab540e:	89 d3                	mov    %edx,%ebx
 8ab5410:	89 c6                	mov    %eax,%esi
 8ab5412:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5415:	89 04 24             	mov    %eax,(%esp)
 8ab5418:	e8 c3 27 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab541d:	89 f0                	mov    %esi,%eax
 8ab541f:	89 da                	mov    %ebx,%edx
 8ab5421:	89 04 24             	mov    %eax,(%esp)
 8ab5424:	e8 27 e3 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab5429:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab542c:	89 04 24             	mov    %eax,(%esp)
 8ab542f:	e8 ac 27 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab5434:	89 d8                	mov    %ebx,%eax
 8ab5436:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ab5439:	83 c4 00             	add    $0x0,%esp
 8ab543c:	5b                   	pop    %ebx
 8ab543d:	5e                   	pop    %esi
 8ab543e:	5f                   	pop    %edi
 8ab543f:	5d                   	pop    %ebp
 8ab5440:	c3                   	ret
 8ab5441:	90                   	nop

```

```c
// LevelupSupportSciprt::loadScript @ 0x8ab514c

/* LevelupSupportSciprt::loadScript() */

undefined4 LevelupSupportSciprt::loadScript(void)

{
  char cVar1;
  bool bVar2;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *this;
  undefined4 uVar3;
  int *piVar4;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *local_60;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
  local_5c [12];
  int local_50;
  bool local_4a;
  bool local_49;
  string local_48;
  ItemInfo local_44 [8];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>
  local_2c [8];
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("Event/","tw_LevelupSupport.evt");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_48);
    local_49 = false;
    local_4a = false;
    local_50 = 0;
                    /* try { // try from 08ab519a to 08ab519e has its CatchHandler @ 08ab540e */
    std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
    vector(local_5c);
                    /* try { // try from 08ab51b3 to 08ab5364 has its CatchHandler @ 08ab53ec */
    while (cVar1 = ScanType((string *)&local_48,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_48,"[step]");
      if (bVar2) {
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[level]");
        if (bVar2) {
          local_50 = ScanInt((bool *)0x0);
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[reward]");
        if (bVar2) {
          while (local_24 = ScanTypeOrInt(&local_49,(string *)&local_48,&local_4a,true),
                local_49 == false) {
            local_20 = ScanInt((bool *)0x0);
            ItemInfo::ItemInfo(local_44,local_24,local_20);
            std::
            vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
            push_back(local_5c,local_44);
          }
        }
        cVar1 = ScanType((string *)&local_48,true);
        if (cVar1 != '\x01') break;
        bVar2 = std::operator==(&local_48,"[/step]");
        if (bVar2) {
          std::
          map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          ::end(local_3c);
          piVar4 = &local_50;
          std::
          map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          ::find((int *)local_38);
          cVar1 = std::
                  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                  ::operator!=(local_38,(_Rb_tree_iterator *)local_3c);
          if (cVar1 != '\0') {
            printf("duplicate [level] %d",local_50,piVar4);
            uVar3 = 0xffffffff;
            goto LAB_08ab5401;
          }
          this = operator_new(0xc);
                    /* try { // try from 08ab536c to 08ab5370 has its CatchHandler @ 08ab5373 */
          std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
          ::vector(this);
          local_60 = this;
                    /* try { // try from 08ab5397 to 08ab53e4 has its CatchHandler @ 08ab53ec */
          std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
          ::swap(this,(vector *)local_5c);
          std::
          pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>
          ::
          pair<int&,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*&>
                    (local_2c,&local_50,(vector **)&local_60);
          std::
          map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          ::insert(local_34);
        }
      }
    }
    unloadRDARScriptFile();
    uVar3 = 0;
LAB_08ab5401:
                    /* try { // try from 08ab5407 to 08ab540b has its CatchHandler @ 08ab540e */
    std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
    ~vector(local_5c);
    std::string::~string((string *)&local_48);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## ~LevelupSupportSciprt

```asm
// === 08ab5138 LevelupSupportSciprt::~LevelupSupportSciprt  [0x08ab5138-0x8ab514b] ===
 8ab5138:	55                   	push   %ebp
 8ab5139:	89 e5                	mov    %esp,%ebp
 8ab513b:	83 ec 18             	sub    $0x18,%esp
 8ab513e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab5141:	89 04 24             	mov    %eax,(%esp)
 8ab5144:	e8 2f 09 00 00       	call   8ab5a78 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab5149:	c9                   	leave
 8ab514a:	c3                   	ret
 8ab514b:	90                   	nop

```

```c
// LevelupSupportSciprt::~LevelupSupportSciprt @ 0x8ab5138

/* LevelupSupportSciprt::~LevelupSupportSciprt() */

void __thiscall LevelupSupportSciprt::~LevelupSupportSciprt(LevelupSupportSciprt *this)

{
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::~map((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
          *)this);
  return;
}

```

