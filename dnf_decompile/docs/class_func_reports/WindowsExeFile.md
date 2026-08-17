# WindowsExeFile

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GenerateChecksum

```asm
// === 085743d4 WindowsExeFile::GenerateChecksum  [0x085743d4-0x8574469] ===
 85743d4:	55                   	push   %ebp
 85743d5:	89 e5                	mov    %esp,%ebp
 85743d7:	83 ec 28             	sub    $0x28,%esp
 85743da:	8b 45 08             	mov    0x8(%ebp),%eax
 85743dd:	83 c0 14             	add    $0x14,%eax
 85743e0:	89 04 24             	mov    %eax,(%esp)
 85743e3:	e8 1e 22 00 00       	call   8576606 <_ZNKSt6vectorIP25WindowsExeConstantSectionSaIS1_EE4sizeEv>
 85743e8:	3b 45 10             	cmp    0x10(%ebp),%eax
 85743eb:	0f 9e c0             	setle  %al
 85743ee:	84 c0                	test   %al,%al
 85743f0:	74 07                	je     85743f9 <_ZN14WindowsExeFile16GenerateChecksumEP16CodeHackChecksumlmm+0x25>
 85743f2:	b8 00 00 00 00       	mov    $0x0,%eax
 85743f7:	eb 6f                	jmp    8574468 <_ZN14WindowsExeFile16GenerateChecksumEP16CodeHackChecksumlmm+0x94>
 85743f9:	8b 45 10             	mov    0x10(%ebp),%eax
 85743fc:	8b 55 08             	mov    0x8(%ebp),%edx
 85743ff:	83 c2 14             	add    $0x14,%edx
 8574402:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574406:	89 14 24             	mov    %edx,(%esp)
 8574409:	e8 14 22 00 00       	call   8576622 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EEixEj>
 857440e:	8b 00                	mov    (%eax),%eax
 8574410:	8b 00                	mov    (%eax),%eax
 8574412:	8b 55 14             	mov    0x14(%ebp),%edx
 8574415:	89 d1                	mov    %edx,%ecx
 8574417:	29 c1                	sub    %eax,%ecx
 8574419:	89 c8                	mov    %ecx,%eax
 857441b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 857441e:	8b 45 10             	mov    0x10(%ebp),%eax
 8574421:	8b 55 08             	mov    0x8(%ebp),%edx
 8574424:	83 c2 14             	add    $0x14,%edx
 8574427:	89 44 24 04          	mov    %eax,0x4(%esp)
 857442b:	89 14 24             	mov    %edx,(%esp)
 857442e:	e8 ef 21 00 00       	call   8576622 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EEixEj>
 8574433:	8b 00                	mov    (%eax),%eax
 8574435:	8b 40 04             	mov    0x4(%eax),%eax
 8574438:	03 45 f0             	add    -0x10(%ebp),%eax
 857443b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 857443e:	8b 45 08             	mov    0x8(%ebp),%eax
 8574441:	8b 40 04             	mov    0x4(%eax),%eax
 8574444:	03 45 f4             	add    -0xc(%ebp),%eax
 8574447:	89 45 ec             	mov    %eax,-0x14(%ebp)
 857444a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 857444d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8574451:	8b 45 18             	mov    0x18(%ebp),%eax
 8574454:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574458:	8b 45 0c             	mov    0xc(%ebp),%eax
 857445b:	89 04 24             	mov    %eax,(%esp)
 857445e:	e8 61 60 b1 ff       	call   808a4c4 <_Z23CalculateMemoryChecksumP16CodeHackChecksummPv>
 8574463:	b8 01 00 00 00       	mov    $0x1,%eax
 8574468:	c9                   	leave
 8574469:	c3                   	ret

```

```c
// WindowsExeFile::GenerateChecksum @ 0x85743d4

/* WindowsExeFile::GenerateChecksum(CodeHackChecksum*, long, unsigned long, unsigned long) */

bool __thiscall
WindowsExeFile::GenerateChecksum
          (WindowsExeFile *this,CodeHackChecksum *param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
                    ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                      *)(this + 0x14));
  if (param_2 < iVar2) {
    puVar3 = (undefined4 *)
             std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
             operator[]((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                         *)(this + 0x14),param_2);
    iVar1 = *(int *)*puVar3;
    piVar4 = (int *)std::
                    vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
                    operator[]((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                                *)(this + 0x14),param_2);
    CalculateMemoryChecksum
              (param_1,param_4,
               (void *)(*(int *)(this + 4) + *(int *)(*piVar4 + 4) + (param_3 - iVar1)));
  }
  return param_2 < iVar2;
}

```

---

## LoadWindowsExeFile

```asm
// === 085740de WindowsExeFile::LoadWindowsExeFile  [0x085740de-0x857415b] ===
 85740de:	55                   	push   %ebp
 85740df:	89 e5                	mov    %esp,%ebp
 85740e1:	83 ec 18             	sub    $0x18,%esp
 85740e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85740e7:	83 c0 04             	add    $0x4,%eax
 85740ea:	89 c2                	mov    %eax,%edx
 85740ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85740ef:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85740f2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85740f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85740fa:	89 04 24             	mov    %eax,(%esp)
 85740fd:	e8 38 ee ff ff       	call   8572f3a <_Z14LoadClientFilePmPPvPKc>
 8574102:	83 f0 01             	xor    $0x1,%eax
 8574105:	84 c0                	test   %al,%al
 8574107:	74 07                	je     8574110 <_ZN14WindowsExeFile18LoadWindowsExeFileEPKc+0x32>
 8574109:	b8 00 00 00 00       	mov    $0x0,%eax
 857410e:	eb 4a                	jmp    857415a <_ZN14WindowsExeFile18LoadWindowsExeFileEPKc+0x7c>
 8574110:	8b 45 08             	mov    0x8(%ebp),%eax
 8574113:	89 04 24             	mov    %eax,(%esp)
 8574116:	e8 db f7 ff ff       	call   85738f6 <_ZN14WindowsExeFile12ReadPeHeaderEv>
 857411b:	83 f0 01             	xor    $0x1,%eax
 857411e:	84 c0                	test   %al,%al
 8574120:	74 28                	je     857414a <_ZN14WindowsExeFile18LoadWindowsExeFileEPKc+0x6c>
 8574122:	8b 45 08             	mov    0x8(%ebp),%eax
 8574125:	8b 40 04             	mov    0x4(%eax),%eax
 8574128:	89 04 24             	mov    %eax,(%esp)
 857412b:	e8 c0 03 1b 00       	call   87244f0 <_ZdlPv>
 8574130:	8b 45 08             	mov    0x8(%ebp),%eax
 8574133:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 857413a:	8b 45 08             	mov    0x8(%ebp),%eax
 857413d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8574143:	b8 00 00 00 00       	mov    $0x0,%eax
 8574148:	eb 10                	jmp    857415a <_ZN14WindowsExeFile18LoadWindowsExeFileEPKc+0x7c>
 857414a:	8b 45 08             	mov    0x8(%ebp),%eax
 857414d:	89 04 24             	mov    %eax,(%esp)
 8574150:	e8 07 00 00 00       	call   857415c <_ZN14WindowsExeFile4SortEv>
 8574155:	b8 01 00 00 00       	mov    $0x1,%eax
 857415a:	c9                   	leave
 857415b:	c3                   	ret

```

```c
// WindowsExeFile::LoadWindowsExeFile @ 0x85740de

/* WindowsExeFile::LoadWindowsExeFile(char const*) */

undefined4 __thiscall WindowsExeFile::LoadWindowsExeFile(WindowsExeFile *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = LoadClientFile((ulong *)this,(void **)(this + 4),param_1);
  if (cVar1 == '\x01') {
    cVar1 = ReadPeHeader(this);
    if (cVar1 == '\x01') {
      Sort(this);
      uVar2 = 1;
    }
    else {
      operator_delete(*(void **)(this + 4));
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)this = 0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## MakeCommonWindowsExeConstantSections

```asm
// === 085741c6 WindowsExeFile::MakeCommonWindowsExeConstantSections  [0x085741c6-0x85743d3] ===
 85741c6:	55                   	push   %ebp
 85741c7:	89 e5                	mov    %esp,%ebp
 85741c9:	56                   	push   %esi
 85741ca:	53                   	push   %ebx
 85741cb:	83 ec 60             	sub    $0x60,%esp
 85741ce:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85741d1:	89 04 24             	mov    %eax,(%esp)
 85741d4:	e8 87 22 00 00       	call   8576460 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEC1Ev>
 85741d9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85741dc:	89 04 24             	mov    %eax,(%esp)
 85741df:	e8 ae 1d 00 00       	call   8575f92 <_ZN9__gnu_cxx17__normal_iteratorIPK8IntervalSt6vectorIS1_SaIS1_EEEC1Ev>
 85741e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85741e7:	89 04 24             	mov    %eax,(%esp)
 85741ea:	e8 69 1c 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 85741ef:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85741f2:	89 04 24             	mov    %eax,(%esp)
 85741f5:	e8 5e 1c 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 85741fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85741fd:	83 c0 14             	add    $0x14,%eax
 8574200:	89 04 24             	mov    %eax,(%esp)
 8574203:	e8 fc 22 00 00       	call   8576504 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5clearEv>
 8574208:	8b 45 0c             	mov    0xc(%ebp),%eax
 857420b:	89 04 24             	mov    %eax,(%esp)
 857420e:	e8 ad 21 00 00       	call   85763c0 <_ZNKSt6vectorI8IntervalSaIS0_EE4sizeEv>
 8574213:	85 c0                	test   %eax,%eax
 8574215:	74 12                	je     8574229 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x63>
 8574217:	8b 45 08             	mov    0x8(%ebp),%eax
 857421a:	83 c0 08             	add    $0x8,%eax
 857421d:	89 04 24             	mov    %eax,(%esp)
 8574220:	e8 e1 23 00 00       	call   8576606 <_ZNKSt6vectorIP25WindowsExeConstantSectionSaIS1_EE4sizeEv>
 8574225:	85 c0                	test   %eax,%eax
 8574227:	75 07                	jne    8574230 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x6a>
 8574229:	b8 01 00 00 00       	mov    $0x1,%eax
 857422e:	eb 05                	jmp    8574235 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x6f>
 8574230:	b8 00 00 00 00       	mov    $0x0,%eax
 8574235:	84 c0                	test   %al,%al
 8574237:	74 0a                	je     8574243 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x7d>
 8574239:	b8 00 00 00 00       	mov    $0x0,%eax
 857423e:	e9 87 01 00 00       	jmp    85743ca <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x204>
 8574243:	8b 55 0c             	mov    0xc(%ebp),%edx
 8574246:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8574249:	89 54 24 04          	mov    %edx,0x4(%esp)
 857424d:	89 04 24             	mov    %eax,(%esp)
 8574250:	e8 4b 1d 00 00       	call   8575fa0 <_ZNKSt6vectorI8IntervalSaIS0_EE5beginEv>
 8574255:	83 ec 04             	sub    $0x4,%esp
 8574258:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 857425b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857425e:	e9 22 01 00 00       	jmp    8574385 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x1bf>
 8574263:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8574266:	89 04 24             	mov    %eax,(%esp)
 8574269:	e8 cc 1d 00 00       	call   857603a <_ZNK9__gnu_cxx17__normal_iteratorIPK8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 857426e:	8b 50 04             	mov    0x4(%eax),%edx
 8574271:	8b 00                	mov    (%eax),%eax
 8574273:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8574276:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8574279:	8b 45 08             	mov    0x8(%ebp),%eax
 857427c:	8d 50 08             	lea    0x8(%eax),%edx
 857427f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8574282:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574286:	89 04 24             	mov    %eax,(%esp)
 8574289:	e8 e0 21 00 00       	call   857646e <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5beginEv>
 857428e:	83 ec 04             	sub    $0x4,%esp
 8574291:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8574294:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8574297:	e9 ac 00 00 00       	jmp    8574348 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x182>
 857429c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 857429f:	89 04 24             	mov    %eax,(%esp)
 85742a2:	e8 53 22 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 85742a7:	8b 00                	mov    (%eax),%eax
 85742a9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85742ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85742af:	8b 10                	mov    (%eax),%edx
 85742b1:	89 55 cc             	mov    %edx,-0x34(%ebp)
 85742b4:	8b 50 04             	mov    0x4(%eax),%edx
 85742b7:	89 55 d0             	mov    %edx,-0x30(%ebp)
 85742ba:	8b 50 08             	mov    0x8(%eax),%edx
 85742bd:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 85742c0:	8b 40 0c             	mov    0xc(%eax),%eax
 85742c3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85742c6:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85742c9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85742cc:	39 c2                	cmp    %eax,%edx
 85742ce:	77 6d                	ja     857433d <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x177>
 85742d0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85742d3:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 85742d6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85742d9:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85742dc:	39 d0                	cmp    %edx,%eax
 85742de:	73 5d                	jae    857433d <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x177>
 85742e0:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 85742e7:	e8 64 01 1b 00       	call   8724450 <_Znwj>
 85742ec:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85742ef:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85742f2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85742f5:	89 10                	mov    %edx,(%eax)
 85742f7:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85742fa:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85742fd:	89 50 08             	mov    %edx,0x8(%eax)
 8574300:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8574303:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8574306:	89 50 0c             	mov    %edx,0xc(%eax)
 8574309:	8b 45 b8             	mov    -0x48(%ebp),%eax
 857430c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 857430f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8574312:	89 cb                	mov    %ecx,%ebx
 8574314:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8574317:	89 de                	mov    %ebx,%esi
 8574319:	29 ce                	sub    %ecx,%esi
 857431b:	89 f1                	mov    %esi,%ecx
 857431d:	01 ca                	add    %ecx,%edx
 857431f:	89 50 04             	mov    %edx,0x4(%eax)
 8574322:	8b 45 08             	mov    0x8(%ebp),%eax
 8574325:	8d 50 14             	lea    0x14(%eax),%edx
 8574328:	8d 45 b8             	lea    -0x48(%ebp),%eax
 857432b:	89 44 24 04          	mov    %eax,0x4(%esp)
 857432f:	89 14 24             	mov    %edx,(%esp)
 8574332:	e8 5b 22 00 00       	call   8576592 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE9push_backERKS1_>
 8574337:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 857433b:	eb 3d                	jmp    857437a <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x1b4>
 857433d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8574340:	89 04 24             	mov    %eax,(%esp)
 8574343:	e8 9c 21 00 00       	call   85764e4 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEppEv>
 8574348:	8b 45 08             	mov    0x8(%ebp),%eax
 857434b:	8d 50 08             	lea    0x8(%eax),%edx
 857434e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8574351:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574355:	89 04 24             	mov    %eax,(%esp)
 8574358:	e8 35 21 00 00       	call   8576492 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE3endEv>
 857435d:	83 ec 04             	sub    $0x4,%esp
 8574360:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8574363:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574367:	8d 45 e0             	lea    -0x20(%ebp),%eax
 857436a:	89 04 24             	mov    %eax,(%esp)
 857436d:	e8 46 21 00 00       	call   85764b8 <_ZN9__gnu_cxxneIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8574372:	84 c0                	test   %al,%al
 8574374:	0f 85 22 ff ff ff    	jne    857429c <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0xd6>
 857437a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 857437d:	89 04 24             	mov    %eax,(%esp)
 8574380:	e8 9f 1c 00 00       	call   8576024 <_ZN9__gnu_cxx17__normal_iteratorIPK8IntervalSt6vectorIS1_SaIS1_EEEppEv>
 8574385:	8b 55 0c             	mov    0xc(%ebp),%edx
 8574388:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857438b:	89 54 24 04          	mov    %edx,0x4(%esp)
 857438f:	89 04 24             	mov    %eax,(%esp)
 8574392:	e8 35 1c 00 00       	call   8575fcc <_ZNKSt6vectorI8IntervalSaIS0_EE3endEv>
 8574397:	83 ec 04             	sub    $0x4,%esp
 857439a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857439d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85743a1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85743a4:	89 04 24             	mov    %eax,(%esp)
 85743a7:	e8 4c 1c 00 00       	call   8575ff8 <_ZN9__gnu_cxxneIPK8IntervalSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85743ac:	84 c0                	test   %al,%al
 85743ae:	0f 85 af fe ff ff    	jne    8574263 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet+0x9d>
 85743b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85743b7:	83 c0 14             	add    $0x14,%eax
 85743ba:	89 04 24             	mov    %eax,(%esp)
 85743bd:	e8 44 22 00 00       	call   8576606 <_ZNKSt6vectorIP25WindowsExeConstantSectionSaIS1_EE4sizeEv>
 85743c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85743c5:	b8 01 00 00 00       	mov    $0x1,%eax
 85743ca:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85743cd:	83 c4 00             	add    $0x0,%esp
 85743d0:	5b                   	pop    %ebx
 85743d1:	5e                   	pop    %esi
 85743d2:	5d                   	pop    %ebp
 85743d3:	c3                   	ret

```

```c
// WindowsExeFile::MakeCommonWindowsExeConstantSections @ 0x85741c6

/* WindowsExeFile::MakeCommonWindowsExeConstantSections(IntervalSet const&) */

undefined4 __thiscall
WindowsExeFile::MakeCommonWindowsExeConstantSections(WindowsExeFile *this,IntervalSet *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  WindowsExeConstantSection *local_4c;
  Interval local_48 [8];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  __normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>> local_28 [4];
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator local_1c [4];
  uint *local_18;
  undefined1 local_11;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  ::__normal_iterator(local_24);
  __gnu_cxx::__normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>>::
  __normal_iterator(local_28);
  Interval::Interval((Interval *)&local_40);
  Interval::Interval(local_48);
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::clear
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
  iVar2 = std::vector<Interval,std::allocator<Interval>>::size
                    ((vector<Interval,std::allocator<Interval>> *)param_1);
  if (iVar2 != 0) {
    iVar2 = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
                      ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                        *)(this + 8));
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08574235;
    }
  }
  bVar1 = true;
LAB_08574235:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    std::vector<Interval,std::allocator<Interval>>::begin();
    while( true ) {
      std::vector<Interval,std::allocator<Interval>>::end();
      bVar1 = __gnu_cxx::operator!=(local_28,local_20);
      if (!bVar1) break;
      puVar4 = (uint *)__gnu_cxx::
                       __normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>>
                       ::operator*(local_28);
      local_3c = puVar4[1];
      local_40 = *puVar4;
      std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
      while( true ) {
        std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
        bVar1 = __gnu_cxx::operator!=(local_24,local_1c);
        if (!bVar1) break;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                        ::operator*(local_24);
        local_18 = (uint *)*piVar5;
        local_38 = *local_18;
        local_34 = local_18[1];
        local_30 = local_18[2];
        local_2c = local_18[3];
        if ((local_38 <= local_40) && (local_40 < local_38 + local_30)) {
          local_4c = operator_new(0x10);
          *(uint *)local_4c = local_40;
          *(uint *)(local_4c + 8) = local_3c;
          *(uint *)(local_4c + 0xc) = local_2c;
          *(uint *)(local_4c + 4) = local_34 + (local_40 - local_38);
          std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
          push_back((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *
                    )(this + 0x14),&local_4c);
          local_11 = 1;
          break;
        }
        __gnu_cxx::
        __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
        ::operator++(local_24);
      }
      __gnu_cxx::__normal_iterator<Interval_const*,std::vector<Interval,std::allocator<Interval>>>::
      operator++(local_28);
    }
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
              ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
               (this + 0x14));
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## ReadPeHeader

```asm
// === 085738f6 WindowsExeFile::ReadPeHeader  [0x085738f6-0x85740dd] ===
 85738f6:	55                   	push   %ebp
 85738f7:	89 e5                	mov    %esp,%ebp
 85738f9:	56                   	push   %esi
 85738fa:	53                   	push   %ebx
 85738fb:	81 ec 00 01 00 00    	sub    $0x100,%esp
 8573901:	8b 45 08             	mov    0x8(%ebp),%eax
 8573904:	8b 40 04             	mov    0x4(%eax),%eax
 8573907:	85 c0                	test   %eax,%eax
 8573909:	75 0a                	jne    8573915 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x1f>
 857390b:	b8 00 00 00 00       	mov    $0x0,%eax
 8573910:	e9 bf 07 00 00       	jmp    85740d4 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x7de>
 8573915:	8b 45 08             	mov    0x8(%ebp),%eax
 8573918:	8b 40 04             	mov    0x4(%eax),%eax
 857391b:	89 45 98             	mov    %eax,-0x68(%ebp)
 857391e:	8b 45 98             	mov    -0x68(%ebp),%eax
 8573921:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8573924:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8573927:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 857392a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 857392d:	8b 40 3c             	mov    0x3c(%eax),%eax
 8573930:	03 45 98             	add    -0x68(%ebp),%eax
 8573933:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8573936:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8573939:	8b 00                	mov    (%eax),%eax
 857393b:	89 45 9c             	mov    %eax,-0x64(%ebp)
 857393e:	83 45 a0 04          	addl   $0x4,-0x60(%ebp)
 8573942:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8573945:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8573948:	83 45 a0 14          	addl   $0x14,-0x60(%ebp)
 857394c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 857394f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8573952:	81 45 a0 e0 00 00 00 	addl   $0xe0,-0x60(%ebp)
 8573959:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8573960:	e9 52 07 00 00       	jmp    85740b7 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x7c1>
 8573965:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8573968:	89 45 b0             	mov    %eax,-0x50(%ebp)
 857396b:	83 45 a0 28          	addl   $0x28,-0x60(%ebp)
 857396f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573972:	8b 50 14             	mov    0x14(%eax),%edx
 8573975:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573978:	8b 40 0c             	mov    0xc(%eax),%eax
 857397b:	89 d1                	mov    %edx,%ecx
 857397d:	29 c1                	sub    %eax,%ecx
 857397f:	89 c8                	mov    %ecx,%eax
 8573981:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8573984:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573987:	8b 40 24             	mov    0x24(%eax),%eax
 857398a:	85 c0                	test   %eax,%eax
 857398c:	0f 88 21 07 00 00    	js     85740b3 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x7bd>
 8573992:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573995:	8b 40 24             	mov    0x24(%eax),%eax
 8573998:	25 00 00 00 40       	and    $0x40000000,%eax
 857399d:	85 c0                	test   %eax,%eax
 857399f:	0f 84 0e 07 00 00    	je     85740b3 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x7bd>
 85739a5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85739a8:	8b 50 08             	mov    0x8(%eax),%edx
 85739ab:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85739ae:	8b 40 10             	mov    0x10(%eax),%eax
 85739b1:	39 c2                	cmp    %eax,%edx
 85739b3:	73 0b                	jae    85739c0 <_ZN14WindowsExeFile12ReadPeHeaderEv+0xca>
 85739b5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85739b8:	8b 40 08             	mov    0x8(%eax),%eax
 85739bb:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85739be:	eb 09                	jmp    85739c9 <_ZN14WindowsExeFile12ReadPeHeaderEv+0xd3>
 85739c0:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85739c3:	8b 40 10             	mov    0x10(%eax),%eax
 85739c6:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85739c9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85739cc:	8b 40 24             	mov    0x24(%eax),%eax
 85739cf:	25 00 00 00 20       	and    $0x20000000,%eax
 85739d4:	85 c0                	test   %eax,%eax
 85739d6:	0f 84 c8 01 00 00    	je     8573ba4 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x2ae>
 85739dc:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 85739e2:	89 04 24             	mov    %eax,(%esp)
 85739e5:	e8 b2 24 00 00       	call   8575e9c <_ZN11IntervalSetC1Ev>
 85739ea:	8b 55 b8             	mov    -0x48(%ebp),%edx
 85739ed:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85739f0:	8b 40 0c             	mov    0xc(%eax),%eax
 85739f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85739f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85739fb:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8573a01:	89 04 24             	mov    %eax,(%esp)
 8573a04:	e8 55 24 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573a09:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8573a0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573a13:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8573a19:	89 04 24             	mov    %eax,(%esp)
 8573a1c:	e8 59 f9 ff ff       	call   857337a <_ZN11IntervalSet11AddIntervalERK8Interval>
 8573a21:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573a24:	8b 40 10             	mov    0x10(%eax),%eax
 8573a27:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8573a2e:	00 
 8573a2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573a33:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8573a39:	89 04 24             	mov    %eax,(%esp)
 8573a3c:	e8 1d 24 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573a41:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8573a47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573a4b:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8573a51:	89 04 24             	mov    %eax,(%esp)
 8573a54:	e8 3b f9 ff ff       	call   8573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>
 8573a59:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8573a5f:	89 04 24             	mov    %eax,(%esp)
 8573a62:	e8 6d 26 00 00       	call   85760d4 <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEC1Ev>
 8573a67:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8573a6d:	89 04 24             	mov    %eax,(%esp)
 8573a70:	e8 e3 23 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 8573a75:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8573a7b:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 8573a81:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573a85:	89 04 24             	mov    %eax,(%esp)
 8573a88:	e8 55 26 00 00       	call   85760e2 <_ZNSt6vectorI8IntervalSaIS0_EE5beginEv>
 8573a8d:	83 ec 04             	sub    $0x4,%esp
 8573a90:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8573a96:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8573a9c:	e9 95 00 00 00       	jmp    8573b36 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x240>
 8573aa1:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8573aa7:	89 04 24             	mov    %eax,(%esp)
 8573aaa:	e8 a9 26 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 8573aaf:	8b 50 04             	mov    0x4(%eax),%edx
 8573ab2:	8b 00                	mov    (%eax),%eax
 8573ab4:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8573aba:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
 8573ac0:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8573ac7:	e8 84 09 1b 00       	call   8724450 <_Znwj>
 8573acc:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8573ad2:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8573ad8:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8573ade:	89 10                	mov    %edx,(%eax)
 8573ae0:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8573ae6:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8573aec:	03 55 b4             	add    -0x4c(%ebp),%edx
 8573aef:	89 50 04             	mov    %edx,0x4(%eax)
 8573af2:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8573af8:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 8573afe:	89 50 08             	mov    %edx,0x8(%eax)
 8573b01:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8573b07:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8573b0a:	8b 52 24             	mov    0x24(%edx),%edx
 8573b0d:	89 50 0c             	mov    %edx,0xc(%eax)
 8573b10:	8b 45 08             	mov    0x8(%ebp),%eax
 8573b13:	8d 50 08             	lea    0x8(%eax),%edx
 8573b16:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8573b1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573b20:	89 14 24             	mov    %edx,(%esp)
 8573b23:	e8 6a 2a 00 00       	call   8576592 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE9push_backERKS1_>
 8573b28:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8573b2e:	89 04 24             	mov    %eax,(%esp)
 8573b31:	e8 74 28 00 00       	call   85763aa <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEppEv>
 8573b36:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8573b3c:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 8573b42:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573b46:	89 04 24             	mov    %eax,(%esp)
 8573b49:	e8 b8 25 00 00       	call   8576106 <_ZNSt6vectorI8IntervalSaIS0_EE3endEv>
 8573b4e:	83 ec 04             	sub    $0x4,%esp
 8573b51:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8573b57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573b5b:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8573b61:	89 04 24             	mov    %eax,(%esp)
 8573b64:	e8 c3 25 00 00       	call   857612c <_ZN9__gnu_cxxneIP8IntervalSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8573b69:	84 c0                	test   %al,%al
 8573b6b:	0f 85 30 ff ff ff    	jne    8573aa1 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x1ab>
 8573b71:	eb 1e                	jmp    8573b91 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x29b>
 8573b73:	89 d3                	mov    %edx,%ebx
 8573b75:	89 c6                	mov    %eax,%esi
 8573b77:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8573b7d:	89 04 24             	mov    %eax,(%esp)
 8573b80:	e8 2b 23 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 8573b85:	89 f0                	mov    %esi,%eax
 8573b87:	89 da                	mov    %ebx,%edx
 8573b89:	89 04 24             	mov    %eax,(%esp)
 8573b8c:	e8 bf fb 56 00       	call   8ae3750 <_Unwind_Resume>
 8573b91:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8573b97:	89 04 24             	mov    %eax,(%esp)
 8573b9a:	e8 11 23 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 8573b9f:	e9 0f 05 00 00       	jmp    85740b3 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x7bd>
 8573ba4:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8573baa:	89 04 24             	mov    %eax,(%esp)
 8573bad:	e8 ea 22 00 00       	call   8575e9c <_ZN11IntervalSetC1Ev>
 8573bb2:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8573bb5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573bb8:	8b 40 0c             	mov    0xc(%eax),%eax
 8573bbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8573bbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573bc3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8573bc9:	89 04 24             	mov    %eax,(%esp)
 8573bcc:	e8 8d 22 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573bd1:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8573bd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573bdb:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8573be1:	89 04 24             	mov    %eax,(%esp)
 8573be4:	e8 91 f7 ff ff       	call   857337a <_ZN11IntervalSet11AddIntervalERK8Interval>
 8573be9:	c7 45 bc 02 00 00 00 	movl   $0x2,-0x44(%ebp)
 8573bf0:	c7 45 c0 06 00 00 00 	movl   $0x6,-0x40(%ebp)
 8573bf7:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8573bfe:	e9 9c 00 00 00       	jmp    8573c9f <_ZN14WindowsExeFile12ReadPeHeaderEv+0x3a9>
 8573c03:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573c06:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573c09:	83 c2 0c             	add    $0xc,%edx
 8573c0c:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 8573c10:	89 c3                	mov    %eax,%ebx
 8573c12:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573c15:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573c18:	83 c2 0c             	add    $0xc,%edx
 8573c1b:	8b 04 d0             	mov    (%eax,%edx,8),%eax
 8573c1e:	89 c1                	mov    %eax,%ecx
 8573c20:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573c23:	8b 40 08             	mov    0x8(%eax),%eax
 8573c26:	89 c2                	mov    %eax,%edx
 8573c28:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573c2b:	8b 40 0c             	mov    0xc(%eax),%eax
 8573c2e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8573c32:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8573c36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573c3a:	89 04 24             	mov    %eax,(%esp)
 8573c3d:	e8 ea f3 ff ff       	call   857302c <_Z20IsOverlappedIntervalllll>
 8573c42:	84 c0                	test   %al,%al
 8573c44:	74 55                	je     8573c9b <_ZN14WindowsExeFile12ReadPeHeaderEv+0x3a5>
 8573c46:	83 7d 94 02          	cmpl   $0x2,-0x6c(%ebp)
 8573c4a:	74 4f                	je     8573c9b <_ZN14WindowsExeFile12ReadPeHeaderEv+0x3a5>
 8573c4c:	83 7d 94 06          	cmpl   $0x6,-0x6c(%ebp)
 8573c50:	74 49                	je     8573c9b <_ZN14WindowsExeFile12ReadPeHeaderEv+0x3a5>
 8573c52:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573c55:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573c58:	83 c2 0c             	add    $0xc,%edx
 8573c5b:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 8573c5f:	89 c2                	mov    %eax,%edx
 8573c61:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 8573c64:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573c67:	83 c1 0c             	add    $0xc,%ecx
 8573c6a:	8b 04 c8             	mov    (%eax,%ecx,8),%eax
 8573c6d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8573c71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573c75:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8573c7b:	89 04 24             	mov    %eax,(%esp)
 8573c7e:	e8 db 21 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573c83:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8573c89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573c8d:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8573c93:	89 04 24             	mov    %eax,(%esp)
 8573c96:	e8 f9 f6 ff ff       	call   8573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>
 8573c9b:	83 45 94 01          	addl   $0x1,-0x6c(%ebp)
 8573c9f:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573ca2:	8b 40 5c             	mov    0x5c(%eax),%eax
 8573ca5:	3b 45 94             	cmp    -0x6c(%ebp),%eax
 8573ca8:	0f 9f c0             	setg   %al
 8573cab:	84 c0                	test   %al,%al
 8573cad:	0f 85 50 ff ff ff    	jne    8573c03 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x30d>
 8573cb3:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 8573cba:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573cbd:	8b 40 5c             	mov    0x5c(%eax),%eax
 8573cc0:	83 f8 01             	cmp    $0x1,%eax
 8573cc3:	76 3d                	jbe    8573d02 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x40c>
 8573cc5:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573cc8:	8b 40 6c             	mov    0x6c(%eax),%eax
 8573ccb:	89 c3                	mov    %eax,%ebx
 8573ccd:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573cd0:	8b 40 68             	mov    0x68(%eax),%eax
 8573cd3:	89 c1                	mov    %eax,%ecx
 8573cd5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573cd8:	8b 40 08             	mov    0x8(%eax),%eax
 8573cdb:	89 c2                	mov    %eax,%edx
 8573cdd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8573ce0:	8b 40 0c             	mov    0xc(%eax),%eax
 8573ce3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8573ce7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8573ceb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573cef:	89 04 24             	mov    %eax,(%esp)
 8573cf2:	e8 35 f3 ff ff       	call   857302c <_Z20IsOverlappedIntervalllll>
 8573cf7:	84 c0                	test   %al,%al
 8573cf9:	74 07                	je     8573d02 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x40c>
 8573cfb:	b8 01 00 00 00       	mov    $0x1,%eax
 8573d00:	eb 05                	jmp    8573d07 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x411>
 8573d02:	b8 00 00 00 00       	mov    $0x0,%eax
 8573d07:	84 c0                	test   %al,%al
 8573d09:	0f 84 64 02 00 00    	je     8573f73 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x67d>
 8573d0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8573d12:	8b 40 04             	mov    0x4(%eax),%eax
 8573d15:	89 c2                	mov    %eax,%edx
 8573d17:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8573d1a:	8b 40 68             	mov    0x68(%eax),%eax
 8573d1d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8573d20:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8573d23:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8573d2a:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573d2d:	89 d0                	mov    %edx,%eax
 8573d2f:	c1 e0 02             	shl    $0x2,%eax
 8573d32:	01 d0                	add    %edx,%eax
 8573d34:	c1 e0 02             	shl    $0x2,%eax
 8573d37:	03 45 c8             	add    -0x38(%ebp),%eax
 8573d3a:	8b 00                	mov    (%eax),%eax
 8573d3c:	85 c0                	test   %eax,%eax
 8573d3e:	75 1b                	jne    8573d5b <_ZN14WindowsExeFile12ReadPeHeaderEv+0x465>
 8573d40:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573d43:	89 d0                	mov    %edx,%eax
 8573d45:	c1 e0 02             	shl    $0x2,%eax
 8573d48:	01 d0                	add    %edx,%eax
 8573d4a:	c1 e0 02             	shl    $0x2,%eax
 8573d4d:	03 45 c8             	add    -0x38(%ebp),%eax
 8573d50:	8b 40 10             	mov    0x10(%eax),%eax
 8573d53:	85 c0                	test   %eax,%eax
 8573d55:	0f 84 17 02 00 00    	je     8573f72 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x67c>
 8573d5b:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573d5e:	89 d0                	mov    %edx,%eax
 8573d60:	c1 e0 02             	shl    $0x2,%eax
 8573d63:	01 d0                	add    %edx,%eax
 8573d65:	c1 e0 02             	shl    $0x2,%eax
 8573d68:	03 45 c8             	add    -0x38(%ebp),%eax
 8573d6b:	8b 10                	mov    (%eax),%edx
 8573d6d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8573d70:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8573d73:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8573d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8573d79:	8b 40 04             	mov    0x4(%eax),%eax
 8573d7c:	03 45 cc             	add    -0x34(%ebp),%eax
 8573d7f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8573d82:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8573d89:	e9 d2 00 00 00       	jmp    8573e60 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x56a>
 8573d8e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573d91:	c1 e0 02             	shl    $0x2,%eax
 8573d94:	03 45 d0             	add    -0x30(%ebp),%eax
 8573d97:	8b 00                	mov    (%eax),%eax
 8573d99:	85 c0                	test   %eax,%eax
 8573d9b:	79 14                	jns    8573db1 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x4bb>
 8573d9d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573da0:	c1 e0 02             	shl    $0x2,%eax
 8573da3:	03 45 d0             	add    -0x30(%ebp),%eax
 8573da6:	8b 00                	mov    (%eax),%eax
 8573da8:	66 89 45 da          	mov    %ax,-0x26(%ebp)
 8573dac:	e9 ab 00 00 00       	jmp    8573e5c <_ZN14WindowsExeFile12ReadPeHeaderEv+0x566>
 8573db1:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8573db8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573dbb:	c1 e0 02             	shl    $0x2,%eax
 8573dbe:	03 45 d0             	add    -0x30(%ebp),%eax
 8573dc1:	8b 10                	mov    (%eax),%edx
 8573dc3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8573dc6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8573dc9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8573dcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8573dcf:	8b 40 04             	mov    0x4(%eax),%eax
 8573dd2:	03 45 dc             	add    -0x24(%ebp),%eax
 8573dd5:	0f b7 00             	movzwl (%eax),%eax
 8573dd8:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 8573ddc:	83 45 e0 02          	addl   $0x2,-0x20(%ebp)
 8573de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8573de3:	8b 40 04             	mov    0x4(%eax),%eax
 8573de6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8573de9:	83 c2 02             	add    $0x2,%edx
 8573dec:	01 d0                	add    %edx,%eax
 8573dee:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8573df1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8573df5:	74 65                	je     8573e5c <_ZN14WindowsExeFile12ReadPeHeaderEv+0x566>
 8573df7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8573dfa:	89 04 24             	mov    %eax,(%esp)
 8573dfd:	e8 ae a5 b0 ff       	call   807e3b0 <strlen@plt>
 8573e02:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8573e05:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8573e09:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8573e0c:	03 45 dc             	add    -0x24(%ebp),%eax
 8573e0f:	83 e0 01             	and    $0x1,%eax
 8573e12:	84 c0                	test   %al,%al
 8573e14:	74 04                	je     8573e1a <_ZN14WindowsExeFile12ReadPeHeaderEv+0x524>
 8573e16:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8573e1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8573e1d:	01 45 e0             	add    %eax,-0x20(%ebp)
 8573e20:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8573e23:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573e26:	c1 e0 02             	shl    $0x2,%eax
 8573e29:	03 45 d0             	add    -0x30(%ebp),%eax
 8573e2c:	8b 00                	mov    (%eax),%eax
 8573e2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8573e32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573e36:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8573e3c:	89 04 24             	mov    %eax,(%esp)
 8573e3f:	e8 1a 20 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573e44:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8573e4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573e4e:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8573e54:	89 04 24             	mov    %eax,(%esp)
 8573e57:	e8 38 f5 ff ff       	call   8573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>
 8573e5c:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8573e60:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573e63:	c1 e0 02             	shl    $0x2,%eax
 8573e66:	03 45 d0             	add    -0x30(%ebp),%eax
 8573e69:	8b 00                	mov    (%eax),%eax
 8573e6b:	85 c0                	test   %eax,%eax
 8573e6d:	0f 95 c0             	setne  %al
 8573e70:	84 c0                	test   %al,%al
 8573e72:	0f 85 16 ff ff ff    	jne    8573d8e <_ZN14WindowsExeFile12ReadPeHeaderEv+0x498>
 8573e78:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573e7b:	89 d0                	mov    %edx,%eax
 8573e7d:	c1 e0 02             	shl    $0x2,%eax
 8573e80:	01 d0                	add    %edx,%eax
 8573e82:	c1 e0 02             	shl    $0x2,%eax
 8573e85:	03 45 c8             	add    -0x38(%ebp),%eax
 8573e88:	8b 40 0c             	mov    0xc(%eax),%eax
 8573e8b:	85 c0                	test   %eax,%eax
 8573e8d:	0f 84 8f 00 00 00    	je     8573f22 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x62c>
 8573e93:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8573e9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8573e9d:	8b 40 04             	mov    0x4(%eax),%eax
 8573ea0:	89 c1                	mov    %eax,%ecx
 8573ea2:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573ea5:	89 d0                	mov    %edx,%eax
 8573ea7:	c1 e0 02             	shl    $0x2,%eax
 8573eaa:	01 d0                	add    %edx,%eax
 8573eac:	c1 e0 02             	shl    $0x2,%eax
 8573eaf:	03 45 c8             	add    -0x38(%ebp),%eax
 8573eb2:	8b 40 0c             	mov    0xc(%eax),%eax
 8573eb5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8573eb8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8573ebb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8573ebe:	89 04 24             	mov    %eax,(%esp)
 8573ec1:	e8 ea a4 b0 ff       	call   807e3b0 <strlen@plt>
 8573ec6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8573ec9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8573ecd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8573ed0:	03 45 cc             	add    -0x34(%ebp),%eax
 8573ed3:	83 e0 01             	and    $0x1,%eax
 8573ed6:	84 c0                	test   %al,%al
 8573ed8:	74 04                	je     8573ede <_ZN14WindowsExeFile12ReadPeHeaderEv+0x5e8>
 8573eda:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8573ede:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573ee1:	89 d0                	mov    %edx,%eax
 8573ee3:	c1 e0 02             	shl    $0x2,%eax
 8573ee6:	01 d0                	add    %edx,%eax
 8573ee8:	c1 e0 02             	shl    $0x2,%eax
 8573eeb:	03 45 c8             	add    -0x38(%ebp),%eax
 8573eee:	8b 40 0c             	mov    0xc(%eax),%eax
 8573ef1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8573ef4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8573ef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573efc:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8573f02:	89 04 24             	mov    %eax,(%esp)
 8573f05:	e8 54 1f 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573f0a:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8573f10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573f14:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8573f1a:	89 04 24             	mov    %eax,(%esp)
 8573f1d:	e8 72 f4 ff ff       	call   8573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>
 8573f22:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8573f25:	83 c0 01             	add    $0x1,%eax
 8573f28:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 8573f2f:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8573f32:	89 d0                	mov    %edx,%eax
 8573f34:	c1 e0 02             	shl    $0x2,%eax
 8573f37:	01 d0                	add    %edx,%eax
 8573f39:	c1 e0 02             	shl    $0x2,%eax
 8573f3c:	03 45 c8             	add    -0x38(%ebp),%eax
 8573f3f:	8b 00                	mov    (%eax),%eax
 8573f41:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8573f45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573f49:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8573f4c:	89 04 24             	mov    %eax,(%esp)
 8573f4f:	e8 0a 1f 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 8573f54:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8573f57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573f5b:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8573f61:	89 04 24             	mov    %eax,(%esp)
 8573f64:	e8 2b f4 ff ff       	call   8573394 <_ZN11IntervalSet13MinusIntervalERK8Interval>
 8573f69:	83 45 94 01          	addl   $0x1,-0x6c(%ebp)
 8573f6d:	e9 b8 fd ff ff       	jmp    8573d2a <_ZN14WindowsExeFile12ReadPeHeaderEv+0x434>
 8573f72:	90                   	nop
 8573f73:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8573f79:	89 04 24             	mov    %eax,(%esp)
 8573f7c:	e8 53 21 00 00       	call   85760d4 <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEC1Ev>
 8573f81:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8573f87:	89 04 24             	mov    %eax,(%esp)
 8573f8a:	e8 c9 1e 00 00       	call   8575e58 <_ZN8IntervalC1Ev>
 8573f8f:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8573f95:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 8573f9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573f9f:	89 04 24             	mov    %eax,(%esp)
 8573fa2:	e8 3b 21 00 00       	call   85760e2 <_ZNSt6vectorI8IntervalSaIS0_EE5beginEv>
 8573fa7:	83 ec 04             	sub    $0x4,%esp
 8573faa:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8573fb0:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8573fb6:	e9 95 00 00 00       	jmp    8574050 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x75a>
 8573fbb:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8573fc1:	89 04 24             	mov    %eax,(%esp)
 8573fc4:	e8 8f 21 00 00       	call   8576158 <_ZNK9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEdeEv>
 8573fc9:	8b 50 04             	mov    0x4(%eax),%edx
 8573fcc:	8b 00                	mov    (%eax),%eax
 8573fce:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8573fd4:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 8573fda:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8573fe1:	e8 6a 04 1b 00       	call   8724450 <_Znwj>
 8573fe6:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8573fec:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8573ff2:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 8573ff8:	89 10                	mov    %edx,(%eax)
 8573ffa:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8574000:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 8574006:	03 55 b4             	add    -0x4c(%ebp),%edx
 8574009:	89 50 04             	mov    %edx,0x4(%eax)
 857400c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8574012:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8574018:	89 50 08             	mov    %edx,0x8(%eax)
 857401b:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8574021:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8574024:	8b 52 24             	mov    0x24(%edx),%edx
 8574027:	89 50 0c             	mov    %edx,0xc(%eax)
 857402a:	8b 45 08             	mov    0x8(%ebp),%eax
 857402d:	8d 50 08             	lea    0x8(%eax),%edx
 8574030:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8574036:	89 44 24 04          	mov    %eax,0x4(%esp)
 857403a:	89 14 24             	mov    %edx,(%esp)
 857403d:	e8 50 25 00 00       	call   8576592 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE9push_backERKS1_>
 8574042:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8574048:	89 04 24             	mov    %eax,(%esp)
 857404b:	e8 5a 23 00 00       	call   85763aa <_ZN9__gnu_cxx17__normal_iteratorIP8IntervalSt6vectorIS1_SaIS1_EEEppEv>
 8574050:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8574053:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 8574059:	89 54 24 04          	mov    %edx,0x4(%esp)
 857405d:	89 04 24             	mov    %eax,(%esp)
 8574060:	e8 a1 20 00 00       	call   8576106 <_ZNSt6vectorI8IntervalSaIS0_EE3endEv>
 8574065:	83 ec 04             	sub    $0x4,%esp
 8574068:	8d 45 8c             	lea    -0x74(%ebp),%eax
 857406b:	89 44 24 04          	mov    %eax,0x4(%esp)
 857406f:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8574075:	89 04 24             	mov    %eax,(%esp)
 8574078:	e8 af 20 00 00       	call   857612c <_ZN9__gnu_cxxneIP8IntervalSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 857407d:	84 c0                	test   %al,%al
 857407f:	0f 85 36 ff ff ff    	jne    8573fbb <_ZN14WindowsExeFile12ReadPeHeaderEv+0x6c5>
 8574085:	eb 1e                	jmp    85740a5 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x7af>
 8574087:	89 d3                	mov    %edx,%ebx
 8574089:	89 c6                	mov    %eax,%esi
 857408b:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8574091:	89 04 24             	mov    %eax,(%esp)
 8574094:	e8 17 1e 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 8574099:	89 f0                	mov    %esi,%eax
 857409b:	89 da                	mov    %ebx,%edx
 857409d:	89 04 24             	mov    %eax,(%esp)
 85740a0:	e8 ab f6 56 00       	call   8ae3750 <_Unwind_Resume>
 85740a5:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 85740ab:	89 04 24             	mov    %eax,(%esp)
 85740ae:	e8 fd 1d 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 85740b3:	83 45 90 01          	addl   $0x1,-0x70(%ebp)
 85740b7:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85740ba:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85740be:	0f b7 c0             	movzwl %ax,%eax
 85740c1:	3b 45 90             	cmp    -0x70(%ebp),%eax
 85740c4:	0f 9f c0             	setg   %al
 85740c7:	84 c0                	test   %al,%al
 85740c9:	0f 85 96 f8 ff ff    	jne    8573965 <_ZN14WindowsExeFile12ReadPeHeaderEv+0x6f>
 85740cf:	b8 01 00 00 00       	mov    $0x1,%eax
 85740d4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85740d7:	83 c4 00             	add    $0x0,%esp
 85740da:	5b                   	pop    %ebx
 85740db:	5e                   	pop    %esi
 85740dc:	5d                   	pop    %ebp
 85740dd:	c3                   	ret

```

```c
// WindowsExeFile::ReadPeHeader @ 0x85738f6

/* WindowsExeFile::ReadPeHeader() */

undefined4 __thiscall WindowsExeFile::ReadPeHeader(WindowsExeFile *this)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  size_t sVar6;
  int local_e8;
  int local_e4;
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_e0 [4];
  IntervalSet local_dc [12];
  int local_d0;
  int local_cc;
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_c8 [4];
  IntervalSet local_c4 [12];
  WindowsExeConstantSection *local_b8;
  Interval local_b4 [8];
  Interval local_ac [8];
  __normal_iterator local_a4 [4];
  Interval local_a0 [8];
  Interval local_98 [8];
  Interval local_90 [8];
  Interval local_88 [8];
  Interval local_80 [8];
  __normal_iterator local_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  long local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined2 local_2a;
  int local_28;
  int local_24;
  undefined2 local_1e;
  char *local_1c;
  int local_18;
  long local_14;
  char *local_10;
  
  if (*(int *)(this + 4) == 0) {
    uVar4 = 0;
  }
  else {
    local_6c = *(int *)(this + 4);
    local_64 = (undefined4 *)(*(int *)(local_6c + 0x3c) + local_6c);
    local_68 = *local_64;
    local_5c = local_64 + 1;
    local_58 = local_64 + 6;
    local_64 = local_64 + 0x3e;
    local_60 = local_6c;
    for (local_74 = 0; local_74 < (int)(uint)*(ushort *)((int)local_5c + 2); local_74 = local_74 + 1
        ) {
      local_54 = local_64;
      puVar1 = local_64 + 10;
      local_50 = local_64[5] - local_64[3];
      if ((-1 < (int)local_64[9]) && ((local_64[9] & 0x40000000) != 0)) {
        if ((uint)local_64[2] < (uint)local_64[4]) {
          local_4c = local_64[2];
        }
        else {
          local_4c = local_64[4];
        }
        if ((local_64[9] & 0x20000000) == 0) {
          local_64 = puVar1;
          IntervalSet::IntervalSet(local_dc);
          Interval::Interval(local_a0,local_54[3],local_4c);
                    /* try { // try from 08573be4 to 0857407c has its CatchHandler @ 08574087 */
          IntervalSet::AddInterval(local_dc,local_a0);
          local_48 = 2;
          local_44 = 6;
          for (local_70 = 0; local_70 < (int)local_58[0x17]; local_70 = local_70 + 1) {
            cVar3 = IsOverlappedInterval
                              (local_54[3],local_54[2],local_58[(local_70 + 0xc) * 2],
                               local_58[(local_70 + 0xc) * 2 + 1]);
            if (((cVar3 != '\0') && (local_70 != 2)) && (local_70 != 6)) {
              Interval::Interval(local_98,local_58[(local_70 + 0xc) * 2],
                                 local_58[(local_70 + 0xc) * 2 + 1]);
              IntervalSet::MinusInterval(local_dc,local_98);
            }
          }
          local_40 = 1;
          if ((uint)local_58[0x17] < 2) {
LAB_08573d02:
            bVar2 = false;
          }
          else {
            cVar3 = IsOverlappedInterval(local_54[3],local_54[2],local_58[0x1a],local_58[0x1b]);
            if (cVar3 == '\0') goto LAB_08573d02;
            bVar2 = true;
          }
          if (bVar2) {
            local_3c = *(int *)(this + 4) + local_58[0x1a];
            local_70 = 0;
            while ((*(int *)(local_70 * 0x14 + local_3c) != 0 ||
                   (*(int *)(local_70 * 0x14 + local_3c + 0x10) != 0))) {
              local_38 = *(int *)(local_70 * 0x14 + local_3c) + local_50;
              local_34 = *(int *)(this + 4) + local_38;
              for (local_30 = 0; *(int *)(local_30 * 4 + local_34) != 0; local_30 = local_30 + 1) {
                if (*(int *)(local_30 * 4 + local_34) < 0) {
                  local_2a = (undefined2)*(undefined4 *)(local_30 * 4 + local_34);
                }
                else {
                  local_28 = *(int *)(local_30 * 4 + local_34) + local_50;
                  local_1e = *(undefined2 *)(*(int *)(this + 4) + local_28);
                  local_24 = 2;
                  local_1c = (char *)(*(int *)(this + 4) + local_28 + 2);
                  if (local_1c != (char *)0x0) {
                    sVar6 = strlen(local_1c);
                    local_18 = sVar6 + 1;
                    if (((char)local_18 + (char)local_28 & 1U) != 0) {
                      local_18 = sVar6 + 2;
                    }
                    local_24 = local_24 + local_18;
                    Interval::Interval(local_90,*(long *)(local_30 * 4 + local_34),local_24);
                    IntervalSet::MinusInterval(local_dc,local_90);
                  }
                }
              }
              if (*(int *)(local_70 * 0x14 + local_3c + 0xc) != 0) {
                local_14 = 0;
                local_10 = (char *)(*(int *)(this + 4) + *(int *)(local_70 * 0x14 + local_3c + 0xc))
                ;
                sVar6 = strlen(local_10);
                local_14 = sVar6 + 1;
                if (((char)local_14 + (char)local_38 & 1U) != 0) {
                  local_14 = sVar6 + 2;
                }
                Interval::Interval(local_88,*(long *)(local_70 * 0x14 + local_3c + 0xc),local_14);
                IntervalSet::MinusInterval(local_dc,local_88);
              }
              Interval::Interval(local_80,*(long *)(local_70 * 0x14 + local_3c),(local_30 + 1) * 4);
              IntervalSet::MinusInterval(local_dc,local_80);
              local_70 = local_70 + 1;
            }
          }
          __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
          __normal_iterator(local_e0);
          Interval::Interval((Interval *)&local_e8);
          std::vector<Interval,std::allocator<Interval>>::begin();
          while( true ) {
            std::vector<Interval,std::allocator<Interval>>::end();
            bVar2 = __gnu_cxx::operator!=(local_e0,local_78);
            if (!bVar2) break;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                            ::operator*(local_e0);
            local_e4 = piVar5[1];
            local_e8 = *piVar5;
            local_b8 = operator_new(0x10);
            *(int *)local_b8 = local_e8;
            *(int *)(local_b8 + 4) = local_e8 + local_50;
            *(int *)(local_b8 + 8) = local_e4;
            *(undefined4 *)(local_b8 + 0xc) = local_54[9];
            std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
            push_back((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                       *)(this + 8),&local_b8);
            __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator++(local_e0);
          }
          IntervalSet::~IntervalSet(local_dc);
          puVar1 = local_64;
        }
        else {
          local_64 = puVar1;
          IntervalSet::IntervalSet(local_c4);
          Interval::Interval(local_b4,local_54[3],local_4c);
                    /* try { // try from 08573a1c to 08573b68 has its CatchHandler @ 08573b73 */
          IntervalSet::AddInterval(local_c4,local_b4);
          Interval::Interval(local_ac,local_58[4],10);
          IntervalSet::MinusInterval(local_c4,local_ac);
          __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
          __normal_iterator(local_c8);
          Interval::Interval((Interval *)&local_d0);
          std::vector<Interval,std::allocator<Interval>>::begin();
          while( true ) {
            std::vector<Interval,std::allocator<Interval>>::end();
            bVar2 = __gnu_cxx::operator!=(local_c8,local_a4);
            if (!bVar2) break;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                            ::operator*(local_c8);
            local_cc = piVar5[1];
            local_d0 = *piVar5;
            local_b8 = operator_new(0x10);
            *(int *)local_b8 = local_d0;
            *(int *)(local_b8 + 4) = local_d0 + local_50;
            *(int *)(local_b8 + 8) = local_cc;
            *(undefined4 *)(local_b8 + 0xc) = local_54[9];
            std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
            push_back((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                       *)(this + 8),&local_b8);
            __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator++(local_c8);
          }
          IntervalSet::~IntervalSet(local_c4);
          puVar1 = local_64;
        }
      }
      local_64 = puVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## Sort

```asm
// === 0857415c WindowsExeFile::Sort  [0x0857415c-0x85741c5] ===
 857415c:	55                   	push   %ebp
 857415d:	89 e5                	mov    %esp,%ebp
 857415f:	53                   	push   %ebx
 8574160:	83 ec 14             	sub    $0x14,%esp
 8574163:	8b 45 08             	mov    0x8(%ebp),%eax
 8574166:	83 c0 14             	add    $0x14,%eax
 8574169:	89 04 24             	mov    %eax,(%esp)
 857416c:	e8 95 24 00 00       	call   8576606 <_ZNKSt6vectorIP25WindowsExeConstantSectionSaIS1_EE4sizeEv>
 8574171:	85 c0                	test   %eax,%eax
 8574173:	0f 94 c0             	sete   %al
 8574176:	84 c0                	test   %al,%al
 8574178:	75 44                	jne    85741be <_ZN14WindowsExeFile4SortEv+0x62>
 857417a:	8b 45 08             	mov    0x8(%ebp),%eax
 857417d:	83 c0 14             	add    $0x14,%eax
 8574180:	89 04 24             	mov    %eax,(%esp)
 8574183:	e8 7e 24 00 00       	call   8576606 <_ZNKSt6vectorIP25WindowsExeConstantSectionSaIS1_EE4sizeEv>
 8574188:	89 c3                	mov    %eax,%ebx
 857418a:	8b 45 08             	mov    0x8(%ebp),%eax
 857418d:	83 c0 14             	add    $0x14,%eax
 8574190:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8574197:	00 
 8574198:	89 04 24             	mov    %eax,(%esp)
 857419b:	e8 82 24 00 00       	call   8576622 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EEixEj>
 85741a0:	c7 44 24 0c ef 2e 57 	movl   $0x8572eef,0xc(%esp)
 85741a7:	08 
 85741a8:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85741af:	00 
 85741b0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85741b4:	89 04 24             	mov    %eax,(%esp)
 85741b7:	e8 b4 a6 b0 ff       	call   807e870 <qsort@plt>
 85741bc:	eb 01                	jmp    85741bf <_ZN14WindowsExeFile4SortEv+0x63>
 85741be:	90                   	nop
 85741bf:	83 c4 14             	add    $0x14,%esp
 85741c2:	5b                   	pop    %ebx
 85741c3:	5d                   	pop    %ebp
 85741c4:	c3                   	ret
 85741c5:	90                   	nop

```

```c
// WindowsExeFile::Sort @ 0x857415c

/* WindowsExeFile::Sort() */

void __thiscall WindowsExeFile::Sort(WindowsExeFile *this)

{
  int iVar1;
  size_t __nmemb;
  void *__base;
  
  iVar1 = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::size
                    ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                      *)(this + 0x14));
  if (iVar1 != 0) {
    __nmemb = std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
              size((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
                   (this + 0x14));
    __base = (void *)std::
                     vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::
                     operator[]((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>
                                 *)(this + 0x14),0);
    qsort(__base,__nmemb,4,CompareWindowsExeConstantSectionsForSort);
  }
  return;
}

```

---

## WindowsExeFile

```asm
// === 085736be WindowsExeFile::WindowsExeFile  [0x085736be-0x8573719] ===
 85736be:	55                   	push   %ebp
 85736bf:	89 e5                	mov    %esp,%ebp
 85736c1:	56                   	push   %esi
 85736c2:	53                   	push   %ebx
 85736c3:	83 ec 10             	sub    $0x10,%esp
 85736c6:	8b 45 08             	mov    0x8(%ebp),%eax
 85736c9:	83 c0 08             	add    $0x8,%eax
 85736cc:	89 04 24             	mov    %eax,(%esp)
 85736cf:	e8 1a 2d 00 00       	call   85763ee <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EEC1Ev>
 85736d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85736d7:	83 c0 14             	add    $0x14,%eax
 85736da:	89 04 24             	mov    %eax,(%esp)
 85736dd:	e8 0c 2d 00 00       	call   85763ee <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EEC1Ev>
 85736e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85736e5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85736eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85736ee:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85736f5:	83 c4 10             	add    $0x10,%esp
 85736f8:	5b                   	pop    %ebx
 85736f9:	5e                   	pop    %esi
 85736fa:	5d                   	pop    %ebp
 85736fb:	c3                   	ret
 85736fc:	89 d3                	mov    %edx,%ebx
 85736fe:	89 c6                	mov    %eax,%esi
 8573700:	8b 45 08             	mov    0x8(%ebp),%eax
 8573703:	83 c0 08             	add    $0x8,%eax
 8573706:	89 04 24             	mov    %eax,(%esp)
 8573709:	e8 f4 2c 00 00       	call   8576402 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EED1Ev>
 857370e:	89 f0                	mov    %esi,%eax
 8573710:	89 da                	mov    %ebx,%edx
 8573712:	89 04 24             	mov    %eax,(%esp)
 8573715:	e8 36 00 57 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WindowsExeFile::WindowsExeFile @ 0x85736be

/* WindowsExeFile::WindowsExeFile() */

void __thiscall WindowsExeFile::WindowsExeFile(WindowsExeFile *this)

{
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 8));
                    /* try { // try from 085736dd to 085736e1 has its CatchHandler @ 085736fc */
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## ~WindowsExeFile

```asm
// === 0857371a WindowsExeFile::~WindowsExeFile  [0x0857371a-0x85738f5] ===
 857371a:	55                   	push   %ebp
 857371b:	89 e5                	mov    %esp,%ebp
 857371d:	56                   	push   %esi
 857371e:	53                   	push   %ebx
 857371f:	83 ec 30             	sub    $0x30,%esp
 8573722:	8b 45 08             	mov    0x8(%ebp),%eax
 8573725:	8b 40 04             	mov    0x4(%eax),%eax
 8573728:	85 c0                	test   %eax,%eax
 857372a:	74 18                	je     8573744 <_ZN14WindowsExeFileD1Ev+0x2a>
 857372c:	8b 45 08             	mov    0x8(%ebp),%eax
 857372f:	8b 40 04             	mov    0x4(%eax),%eax
 8573732:	89 04 24             	mov    %eax,(%esp)
 8573735:	e8 b6 0d 1b 00       	call   87244f0 <_ZdlPv>
 857373a:	8b 45 08             	mov    0x8(%ebp),%eax
 857373d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8573744:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573747:	89 04 24             	mov    %eax,(%esp)
 857374a:	e8 11 2d 00 00       	call   8576460 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEC1Ev>
 857374f:	8b 45 08             	mov    0x8(%ebp),%eax
 8573752:	8d 50 08             	lea    0x8(%eax),%edx
 8573755:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8573758:	89 54 24 04          	mov    %edx,0x4(%esp)
 857375c:	89 04 24             	mov    %eax,(%esp)
 857375f:	e8 0a 2d 00 00       	call   857646e <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5beginEv>
 8573764:	83 ec 04             	sub    $0x4,%esp
 8573767:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857376a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 857376d:	eb 47                	jmp    85737b6 <_ZN14WindowsExeFileD1Ev+0x9c>
 857376f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573772:	89 04 24             	mov    %eax,(%esp)
 8573775:	e8 80 2d 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 857377a:	8b 00                	mov    (%eax),%eax
 857377c:	85 c0                	test   %eax,%eax
 857377e:	0f 95 c0             	setne  %al
 8573781:	84 c0                	test   %al,%al
 8573783:	74 26                	je     85737ab <_ZN14WindowsExeFileD1Ev+0x91>
 8573785:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573788:	89 04 24             	mov    %eax,(%esp)
 857378b:	e8 6a 2d 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 8573790:	8b 00                	mov    (%eax),%eax
 8573792:	89 04 24             	mov    %eax,(%esp)
 8573795:	e8 56 0d 1b 00       	call   87244f0 <_ZdlPv>
 857379a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857379d:	89 04 24             	mov    %eax,(%esp)
 85737a0:	e8 55 2d 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 85737a5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85737ab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85737ae:	89 04 24             	mov    %eax,(%esp)
 85737b1:	e8 2e 2d 00 00       	call   85764e4 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEppEv>
 85737b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85737b9:	8d 50 08             	lea    0x8(%eax),%edx
 85737bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85737bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 85737c3:	89 04 24             	mov    %eax,(%esp)
 85737c6:	e8 c7 2c 00 00       	call   8576492 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE3endEv>
 85737cb:	83 ec 04             	sub    $0x4,%esp
 85737ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85737d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85737d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85737d8:	89 04 24             	mov    %eax,(%esp)
 85737db:	e8 d8 2c 00 00       	call   85764b8 <_ZN9__gnu_cxxneIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85737e0:	84 c0                	test   %al,%al
 85737e2:	75 8b                	jne    857376f <_ZN14WindowsExeFileD1Ev+0x55>
 85737e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85737e7:	83 c0 08             	add    $0x8,%eax
 85737ea:	89 04 24             	mov    %eax,(%esp)
 85737ed:	e8 12 2d 00 00       	call   8576504 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5clearEv>
 85737f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85737f5:	8d 50 14             	lea    0x14(%eax),%edx
 85737f8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85737fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85737ff:	89 04 24             	mov    %eax,(%esp)
 8573802:	e8 67 2c 00 00       	call   857646e <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5beginEv>
 8573807:	83 ec 04             	sub    $0x4,%esp
 857380a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857380d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8573810:	eb 47                	jmp    8573859 <_ZN14WindowsExeFileD1Ev+0x13f>
 8573812:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573815:	89 04 24             	mov    %eax,(%esp)
 8573818:	e8 dd 2c 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 857381d:	8b 00                	mov    (%eax),%eax
 857381f:	85 c0                	test   %eax,%eax
 8573821:	0f 95 c0             	setne  %al
 8573824:	84 c0                	test   %al,%al
 8573826:	74 26                	je     857384e <_ZN14WindowsExeFileD1Ev+0x134>
 8573828:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857382b:	89 04 24             	mov    %eax,(%esp)
 857382e:	e8 c7 2c 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 8573833:	8b 00                	mov    (%eax),%eax
 8573835:	89 04 24             	mov    %eax,(%esp)
 8573838:	e8 b3 0c 1b 00       	call   87244f0 <_ZdlPv>
 857383d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573840:	89 04 24             	mov    %eax,(%esp)
 8573843:	e8 b2 2c 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 8573848:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 857384e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8573851:	89 04 24             	mov    %eax,(%esp)
 8573854:	e8 8b 2c 00 00       	call   85764e4 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEppEv>
 8573859:	8b 45 08             	mov    0x8(%ebp),%eax
 857385c:	8d 50 14             	lea    0x14(%eax),%edx
 857385f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8573862:	89 54 24 04          	mov    %edx,0x4(%esp)
 8573866:	89 04 24             	mov    %eax,(%esp)
 8573869:	e8 24 2c 00 00       	call   8576492 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE3endEv>
 857386e:	83 ec 04             	sub    $0x4,%esp
 8573871:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8573874:	89 44 24 04          	mov    %eax,0x4(%esp)
 8573878:	8d 45 ec             	lea    -0x14(%ebp),%eax
 857387b:	89 04 24             	mov    %eax,(%esp)
 857387e:	e8 35 2c 00 00       	call   85764b8 <_ZN9__gnu_cxxneIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8573883:	84 c0                	test   %al,%al
 8573885:	75 8b                	jne    8573812 <_ZN14WindowsExeFileD1Ev+0xf8>
 8573887:	8b 45 08             	mov    0x8(%ebp),%eax
 857388a:	83 c0 14             	add    $0x14,%eax
 857388d:	89 04 24             	mov    %eax,(%esp)
 8573890:	e8 6f 2c 00 00       	call   8576504 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5clearEv>
 8573895:	eb 18                	jmp    85738af <_ZN14WindowsExeFileD1Ev+0x195>
 8573897:	89 d3                	mov    %edx,%ebx
 8573899:	89 c6                	mov    %eax,%esi
 857389b:	8b 45 08             	mov    0x8(%ebp),%eax
 857389e:	83 c0 14             	add    $0x14,%eax
 85738a1:	89 04 24             	mov    %eax,(%esp)
 85738a4:	e8 59 2b 00 00       	call   8576402 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EED1Ev>
 85738a9:	89 f0                	mov    %esi,%eax
 85738ab:	89 da                	mov    %ebx,%edx
 85738ad:	eb 10                	jmp    85738bf <_ZN14WindowsExeFileD1Ev+0x1a5>
 85738af:	8b 45 08             	mov    0x8(%ebp),%eax
 85738b2:	83 c0 14             	add    $0x14,%eax
 85738b5:	89 04 24             	mov    %eax,(%esp)
 85738b8:	e8 45 2b 00 00       	call   8576402 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EED1Ev>
 85738bd:	eb 1e                	jmp    85738dd <_ZN14WindowsExeFileD1Ev+0x1c3>
 85738bf:	89 d3                	mov    %edx,%ebx
 85738c1:	89 c6                	mov    %eax,%esi
 85738c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85738c6:	83 c0 08             	add    $0x8,%eax
 85738c9:	89 04 24             	mov    %eax,(%esp)
 85738cc:	e8 31 2b 00 00       	call   8576402 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EED1Ev>
 85738d1:	89 f0                	mov    %esi,%eax
 85738d3:	89 da                	mov    %ebx,%edx
 85738d5:	89 04 24             	mov    %eax,(%esp)
 85738d8:	e8 73 fe 56 00       	call   8ae3750 <_Unwind_Resume>
 85738dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85738e0:	83 c0 08             	add    $0x8,%eax
 85738e3:	89 04 24             	mov    %eax,(%esp)
 85738e6:	e8 17 2b 00 00       	call   8576402 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EED1Ev>
 85738eb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85738ee:	83 c4 00             	add    $0x0,%esp
 85738f1:	5b                   	pop    %ebx
 85738f2:	5e                   	pop    %esi
 85738f3:	5d                   	pop    %ebp
 85738f4:	c3                   	ret
 85738f5:	90                   	nop

```

```c
// WindowsExeFile::~WindowsExeFile @ 0x857371a

/* WindowsExeFile::~WindowsExeFile() */

void __thiscall WindowsExeFile::~WindowsExeFile(WindowsExeFile *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [4];
  
  if (*(int *)(this + 4) != 0) {
    operator_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  __gnu_cxx::
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  ::__normal_iterator(local_18);
                    /* try { // try from 0857375f to 08573894 has its CatchHandler @ 08573897 */
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
  while( true ) {
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                    ::operator*(local_18);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      operator_delete((void *)*puVar3);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
    ::operator++(local_18);
  }
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::clear
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 8));
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
  while( true ) {
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                    ::operator*(local_18);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      operator_delete((void *)*puVar3);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
               ::operator*(local_18);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
    ::operator++(local_18);
  }
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::clear
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
                    /* try { // try from 085738b8 to 085738bc has its CatchHandler @ 085738bf */
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::~vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 0x14));
  std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::~vector
            ((vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>> *)
             (this + 8));
  return;
}

```

