# Arad_Mileage_Data

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## default_value

```asm
// === 081a36f0 Arad_Mileage_Data::default_value  [0x081a36f0-0x81a36fb] ===
 81a36f0:	55                   	push   %ebp
 81a36f1:	89 e5                	mov    %esp,%ebp
 81a36f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81a36f6:	8b 40 04             	mov    0x4(%eax),%eax
 81a36f9:	5d                   	pop    %ebp
 81a36fa:	c3                   	ret
 81a36fb:	90                   	nop

```

```c
// Arad_Mileage_Data::default_value @ 0x81a36f0

/* Arad_Mileage_Data::default_value() */

undefined4 __thiscall Arad_Mileage_Data::default_value(Arad_Mileage_Data *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## find

```asm
// === 081a3668 Arad_Mileage_Data::find  [0x081a3668-0x81a36ef] ===
 81a3668:	55                   	push   %ebp
 81a3669:	89 e5                	mov    %esp,%ebp
 81a366b:	83 ec 28             	sub    $0x28,%esp
 81a366e:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3671:	8d 50 08             	lea    0x8(%eax),%edx
 81a3674:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a3677:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a367b:	89 04 24             	mov    %eax,(%esp)
 81a367e:	e8 cd 12 00 00       	call   81a4950 <_ZNSt6vectorIN17Arad_Mileage_Data4DataESaIS1_EE5beginEv>
 81a3683:	83 ec 04             	sub    $0x4,%esp
 81a3686:	eb 32                	jmp    81a36ba <_ZN17Arad_Mileage_Data4findEi+0x52>
 81a3688:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a368b:	89 04 24             	mov    %eax,(%esp)
 81a368e:	e8 49 13 00 00       	call   81a49dc <_ZNK9__gnu_cxx17__normal_iteratorIPN17Arad_Mileage_Data4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a3693:	8b 00                	mov    (%eax),%eax
 81a3695:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81a3698:	0f 94 c0             	sete   %al
 81a369b:	84 c0                	test   %al,%al
 81a369d:	74 10                	je     81a36af <_ZN17Arad_Mileage_Data4findEi+0x47>
 81a369f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a36a2:	89 04 24             	mov    %eax,(%esp)
 81a36a5:	e8 32 13 00 00       	call   81a49dc <_ZNK9__gnu_cxx17__normal_iteratorIPN17Arad_Mileage_Data4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a36aa:	8b 40 04             	mov    0x4(%eax),%eax
 81a36ad:	eb 3e                	jmp    81a36ed <_ZN17Arad_Mileage_Data4findEi+0x85>
 81a36af:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a36b2:	89 04 24             	mov    %eax,(%esp)
 81a36b5:	e8 0c 13 00 00       	call   81a49c6 <_ZN9__gnu_cxx17__normal_iteratorIPN17Arad_Mileage_Data4DataESt6vectorIS2_SaIS2_EEEppEv>
 81a36ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81a36bd:	8d 50 08             	lea    0x8(%eax),%edx
 81a36c0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a36c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a36c7:	89 04 24             	mov    %eax,(%esp)
 81a36ca:	e8 a5 12 00 00       	call   81a4974 <_ZNSt6vectorIN17Arad_Mileage_Data4DataESaIS1_EE3endEv>
 81a36cf:	83 ec 04             	sub    $0x4,%esp
 81a36d2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a36d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a36d9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a36dc:	89 04 24             	mov    %eax,(%esp)
 81a36df:	e8 b6 12 00 00       	call   81a499a <_ZN9__gnu_cxxneIPN17Arad_Mileage_Data4DataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81a36e4:	84 c0                	test   %al,%al
 81a36e6:	75 a0                	jne    81a3688 <_ZN17Arad_Mileage_Data4findEi+0x20>
 81a36e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81a36ed:	c9                   	leave
 81a36ee:	c3                   	ret
 81a36ef:	90                   	nop

```

```c
// Arad_Mileage_Data::find @ 0x81a3668

/* Arad_Mileage_Data::find(int) */

undefined4 __thiscall Arad_Mileage_Data::find(Arad_Mileage_Data *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>::begin();
  while( true ) {
    std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) {
      return 0xffffffff;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
                    ::operator->(local_14);
    if (*piVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
    ::operator++(local_14);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
          ::operator->(local_14);
  return *(undefined4 *)(iVar3 + 4);
}

```

---

## parsing

```asm
// === 081a3416 Arad_Mileage_Data::parsing  [0x081a3416-0x81a3667] ===
 81a3416:	55                   	push   %ebp
 81a3417:	89 e5                	mov    %esp,%ebp
 81a3419:	56                   	push   %esi
 81a341a:	53                   	push   %ebx
 81a341b:	81 ec 90 00 00 00    	sub    $0x90,%esp
 81a3421:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a3424:	89 04 24             	mov    %eax,(%esp)
 81a3427:	e8 48 80 fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a342c:	c7 44 24 08 75 c8 ba 	movl   $0x8bac875,0x8(%esp)
 81a3433:	08 
 81a3434:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3437:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a343b:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a343e:	89 04 24             	mov    %eax,(%esp)
 81a3441:	e8 0a 85 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a3446:	83 f0 01             	xor    $0x1,%eax
 81a3449:	84 c0                	test   %al,%al
 81a344b:	74 0a                	je     81a3457 <_ZN17Arad_Mileage_Data7parsingEPc+0x41>
 81a344d:	bb 8c 01 00 00       	mov    $0x18c,%ebx
 81a3452:	e9 fa 01 00 00       	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a3457:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a345a:	89 04 24             	mov    %eax,(%esp)
 81a345d:	e8 1a 0e 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3462:	85 c0                	test   %eax,%eax
 81a3464:	0f 94 c0             	sete   %al
 81a3467:	84 c0                	test   %al,%al
 81a3469:	74 0a                	je     81a3475 <_ZN17Arad_Mileage_Data7parsingEPc+0x5f>
 81a346b:	bb 8f 01 00 00       	mov    $0x18f,%ebx
 81a3470:	e9 dc 01 00 00       	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a3475:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3478:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81a347f:	c7 44 24 08 7d c8 ba 	movl   $0x8bac87d,0x8(%esp)
 81a3486:	08 
 81a3487:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a348e:	00 
 81a348f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a3492:	89 04 24             	mov    %eax,(%esp)
 81a3495:	e8 e6 92 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a349a:	8b 55 08             	mov    0x8(%ebp),%edx
 81a349d:	89 42 04             	mov    %eax,0x4(%edx)
 81a34a0:	8b 45 08             	mov    0x8(%ebp),%eax
 81a34a3:	8b 40 04             	mov    0x4(%eax),%eax
 81a34a6:	85 c0                	test   %eax,%eax
 81a34a8:	78 0d                	js     81a34b7 <_ZN17Arad_Mileage_Data7parsingEPc+0xa1>
 81a34aa:	8b 45 08             	mov    0x8(%ebp),%eax
 81a34ad:	8b 40 04             	mov    0x4(%eax),%eax
 81a34b0:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 81a34b5:	7e 40                	jle    81a34f7 <_ZN17Arad_Mileage_Data7parsingEPc+0xe1>
 81a34b7:	8b 45 08             	mov    0x8(%ebp),%eax
 81a34ba:	8b 40 04             	mov    0x4(%eax),%eax
 81a34bd:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a34c1:	c7 44 24 10 88 c8 ba 	movl   $0x8bac888,0x10(%esp)
 81a34c8:	08 
 81a34c9:	c7 44 24 0c 97 01 00 	movl   $0x197,0xc(%esp)
 81a34d0:	00 
 81a34d1:	c7 44 24 08 a0 d6 ba 	movl   $0x8bad6a0,0x8(%esp)
 81a34d8:	08 
 81a34d9:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a34e0:	08 
 81a34e1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a34e8:	e8 1d 07 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a34ed:	bb 98 01 00 00       	mov    $0x198,%ebx
 81a34f2:	e9 5a 01 00 00       	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a34f7:	c7 44 24 08 b4 c8 ba 	movl   $0x8bac8b4,0x8(%esp)
 81a34fe:	08 
 81a34ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3502:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3506:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a3509:	89 04 24             	mov    %eax,(%esp)
 81a350c:	e8 3f 84 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a3511:	83 f0 01             	xor    $0x1,%eax
 81a3514:	84 c0                	test   %al,%al
 81a3516:	74 0a                	je     81a3522 <_ZN17Arad_Mileage_Data7parsingEPc+0x10c>
 81a3518:	bb 9e 01 00 00       	mov    $0x19e,%ebx
 81a351d:	e9 2f 01 00 00       	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a3522:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a3525:	89 04 24             	mov    %eax,(%esp)
 81a3528:	e8 4f 0d 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a352d:	85 c0                	test   %eax,%eax
 81a352f:	0f 94 c0             	sete   %al
 81a3532:	84 c0                	test   %al,%al
 81a3534:	74 0a                	je     81a3540 <_ZN17Arad_Mileage_Data7parsingEPc+0x12a>
 81a3536:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a353b:	e9 11 01 00 00       	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a3540:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81a3547:	e9 ca 00 00 00       	jmp    81a3616 <_ZN17Arad_Mileage_Data7parsingEPc+0x200>
 81a354c:	c7 44 24 08 b9 c8 ba 	movl   $0x8bac8b9,0x8(%esp)
 81a3553:	08 
 81a3554:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81a3557:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a355b:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a355e:	89 04 24             	mov    %eax,(%esp)
 81a3561:	e8 1a 92 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3566:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81a3569:	c7 44 24 08 7d c8 ba 	movl   $0x8bac87d,0x8(%esp)
 81a3570:	08 
 81a3571:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81a3574:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3578:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a357b:	89 04 24             	mov    %eax,(%esp)
 81a357e:	e8 fd 91 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a3583:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a3586:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a3589:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a358d:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3590:	89 04 24             	mov    %eax,(%esp)
 81a3593:	e8 d0 00 00 00       	call   81a3668 <_ZN17Arad_Mileage_Data4findEi>
 81a3598:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a359b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a359f:	79 30                	jns    81a35d1 <_ZN17Arad_Mileage_Data7parsingEPc+0x1bb>
 81a35a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a35a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a35a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a35ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a35af:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a35b2:	89 04 24             	mov    %eax,(%esp)
 81a35b5:	e8 18 0c 00 00       	call   81a41d2 <_ZN17Arad_Mileage_Data4DataC1Eii>
 81a35ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81a35bd:	8d 50 08             	lea    0x8(%eax),%edx
 81a35c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a35c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a35c7:	89 14 24             	mov    %edx,(%esp)
 81a35ca:	e8 5f 13 00 00       	call   81a492e <_ZNSt6vectorIN17Arad_Mileage_Data4DataESaIS1_EE9push_backEOS1_>
 81a35cf:	eb 41                	jmp    81a3612 <_ZN17Arad_Mileage_Data7parsingEPc+0x1fc>
 81a35d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a35d4:	89 44 24 18          	mov    %eax,0x18(%esp)
 81a35d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a35db:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a35df:	c7 44 24 10 c0 c8 ba 	movl   $0x8bac8c0,0x10(%esp)
 81a35e6:	08 
 81a35e7:	c7 44 24 0c b0 01 00 	movl   $0x1b0,0xc(%esp)
 81a35ee:	00 
 81a35ef:	c7 44 24 08 a0 d6 ba 	movl   $0x8bad6a0,0x8(%esp)
 81a35f6:	08 
 81a35f7:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a35fe:	08 
 81a35ff:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a3606:	e8 ff 05 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a360b:	bb b1 01 00 00       	mov    $0x1b1,%ebx
 81a3610:	eb 3f                	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a3612:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 81a3616:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a3619:	89 04 24             	mov    %eax,(%esp)
 81a361c:	e8 5b 0c 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3621:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81a3624:	0f 9f c0             	setg   %al
 81a3627:	84 c0                	test   %al,%al
 81a3629:	0f 85 1d ff ff ff    	jne    81a354c <_ZN17Arad_Mileage_Data7parsingEPc+0x136>
 81a362f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a3634:	eb 1b                	jmp    81a3651 <_ZN17Arad_Mileage_Data7parsingEPc+0x23b>
 81a3636:	89 d3                	mov    %edx,%ebx
 81a3638:	89 c6                	mov    %eax,%esi
 81a363a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a363d:	89 04 24             	mov    %eax,(%esp)
 81a3640:	e8 df 7f fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a3645:	89 f0                	mov    %esi,%eax
 81a3647:	89 da                	mov    %ebx,%edx
 81a3649:	89 04 24             	mov    %eax,(%esp)
 81a364c:	e8 ff 00 94 00       	call   8ae3750 <_Unwind_Resume>
 81a3651:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81a3654:	89 04 24             	mov    %eax,(%esp)
 81a3657:	e8 c8 7f fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a365c:	89 d8                	mov    %ebx,%eax
 81a365e:	81 c4 90 00 00 00    	add    $0x90,%esp
 81a3664:	5b                   	pop    %ebx
 81a3665:	5e                   	pop    %esi
 81a3666:	5d                   	pop    %ebp
 81a3667:	c3                   	ret

```

```c
// Arad_Mileage_Data::parsing @ 0x81a3416

/* Arad_Mileage_Data::parsing(char*) */

undefined4 __thiscall Arad_Mileage_Data::parsing(Arad_Mileage_Data *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_78 [84];
  Data local_24 [8];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  Arad_Script::Arad_Script(local_78);
                    /* try { // try from 081a3441 to 081a360a has its CatchHandler @ 081a3636 */
  cVar1 = Arad_Script::Load(local_78,param_1,"default");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_78);
    if (iVar2 == 0) {
      uVar3 = 399;
    }
    else {
      *(undefined4 *)(this + 4) = 0;
      uVar3 = Arad_Script::GetInt(local_78,0,"percent");
      *(undefined4 *)(this + 4) = uVar3;
      if ((*(int *)(this + 4) < 0) || (1000 < *(int *)(this + 4))) {
        LogManager::logFormat
                  (1,"localjapan/Arad_Script_Loader.cpp",
                   "virtual int Arad_Mileage_Data::parsing(char*)",0x197,
                   "[ERROR] invalid mileage default value. (%f)",*(undefined4 *)(this + 4));
        uVar3 = 0x198;
      }
      else {
        cVar1 = Arad_Script::Load(local_78,param_1,"item");
        if (cVar1 == '\x01') {
          iVar2 = Arad_Script::GetRowNum(local_78);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            local_1c = 0;
            while( true ) {
              iVar2 = Arad_Script::GetRowNum(local_78);
              if (iVar2 <= local_1c) break;
              local_18 = Arad_Script::GetInt(local_78,local_1c,"ipg_no");
              local_14 = Arad_Script::GetInt(local_78,local_1c,"percent");
              local_10 = find(this,local_18);
              if (-1 < local_10) {
                LogManager::logFormat
                          (1,"localjapan/Arad_Script_Loader.cpp",
                           "virtual int Arad_Mileage_Data::parsing(char*)",0x1b0,
                           "[ERROR] already exist item index (IPG:%d, percent:%d)",local_18,local_14
                          );
                uVar3 = 0x1b1;
                goto LAB_081a3651;
              }
              Data::Data(local_24,local_18,local_14);
              std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>::
              push_back((vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>> *)
                        (this + 8),local_24);
              local_1c = local_1c + 1;
            }
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0x19e;
        }
      }
    }
  }
  else {
    uVar3 = 0x18c;
  }
LAB_081a3651:
  Arad_Script::~Arad_Script(local_78);
  return uVar3;
}

```

