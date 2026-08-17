# advancealtar__ProcStage__ProcSummonObjectMs

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## ProcSummonObjectMs

```asm
// === 0812d378 advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs  [0x0812d378-0x812d3ef] ===
 812d378:	55                   	push   %ebp
 812d379:	89 e5                	mov    %esp,%ebp
 812d37b:	56                   	push   %esi
 812d37c:	53                   	push   %ebx
 812d37d:	83 ec 10             	sub    $0x10,%esp
 812d380:	8b 45 08             	mov    0x8(%ebp),%eax
 812d383:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812d389:	8b 45 08             	mov    0x8(%ebp),%eax
 812d38c:	83 c0 04             	add    $0x4,%eax
 812d38f:	89 04 24             	mov    %eax,(%esp)
 812d392:	e8 d1 7b 00 00       	call   8134f68 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EEC1Ev>
 812d397:	8b 45 08             	mov    0x8(%ebp),%eax
 812d39a:	83 c0 10             	add    $0x10,%eax
 812d39d:	89 04 24             	mov    %eax,(%esp)
 812d3a0:	e8 35 7c 00 00       	call   8134fda <_ZNSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEEC1Ev>
 812d3a5:	8b 45 08             	mov    0x8(%ebp),%eax
 812d3a8:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 812d3af:	8b 45 08             	mov    0x8(%ebp),%eax
 812d3b2:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 812d3b9:	8b 45 08             	mov    0x8(%ebp),%eax
 812d3bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 812d3bf:	89 50 30             	mov    %edx,0x30(%eax)
 812d3c2:	8b 45 08             	mov    0x8(%ebp),%eax
 812d3c5:	8b 55 10             	mov    0x10(%ebp),%edx
 812d3c8:	89 50 34             	mov    %edx,0x34(%eax)
 812d3cb:	83 c4 10             	add    $0x10,%esp
 812d3ce:	5b                   	pop    %ebx
 812d3cf:	5e                   	pop    %esi
 812d3d0:	5d                   	pop    %ebp
 812d3d1:	c3                   	ret
 812d3d2:	89 d3                	mov    %edx,%ebx
 812d3d4:	89 c6                	mov    %eax,%esi
 812d3d6:	8b 45 08             	mov    0x8(%ebp),%eax
 812d3d9:	83 c0 04             	add    $0x4,%eax
 812d3dc:	89 04 24             	mov    %eax,(%esp)
 812d3df:	e8 98 7b 00 00       	call   8134f7c <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EED1Ev>
 812d3e4:	89 f0                	mov    %esi,%eax
 812d3e6:	89 da                	mov    %ebx,%edx
 812d3e8:	89 04 24             	mov    %eax,(%esp)
 812d3eb:	e8 60 63 9b 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs @ 0x812d378

/* advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs(advancealtar::CharacData&, int
   const&) */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs
          (ProcSummonObjectMs *this,CharacData *param_1,int *param_2)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::vector
            ((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              *)(this + 4));
                    /* try { // try from 0812d3a0 to 0812d3a4 has its CatchHandler @ 0812d3d2 */
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::map((map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
         *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(CharacData **)(this + 0x30) = param_1;
  *(int **)(this + 0x34) = param_2;
  return;
}

```

---

## compare

```asm
// === 0812daec advancealtar::ProcStage::ProcSummonObjectMs::compare  [0x0812daec-0x812daff] ===
 812daec:	55                   	push   %ebp
 812daed:	89 e5                	mov    %esp,%ebp
 812daef:	8b 45 08             	mov    0x8(%ebp),%eax
 812daf2:	8b 10                	mov    (%eax),%edx
 812daf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 812daf7:	8b 00                	mov    (%eax),%eax
 812daf9:	39 c2                	cmp    %eax,%edx
 812dafb:	0f 9c c0             	setl   %al
 812dafe:	5d                   	pop    %ebp
 812daff:	c3                   	ret

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::compare @ 0x812daec

/* advancealtar::ProcStage::ProcSummonObjectMs::compare(advancealtar::_SummonObjectMs const*,
   advancealtar::_SummonObjectMs const*) */

undefined4
advancealtar::ProcStage::ProcSummonObjectMs::compare
          (_SummonObjectMs *param_1,_SummonObjectMs *param_2)

{
  return CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)param_1 < *(int *)param_2);
}

```

---

## completePushSummonObject

```asm
// === 0812d5d0 advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject  [0x0812d5d0-0x812d657] ===
 812d5d0:	55                   	push   %ebp
 812d5d1:	89 e5                	mov    %esp,%ebp
 812d5d3:	53                   	push   %ebx
 812d5d4:	83 ec 14             	sub    $0x14,%esp
 812d5d7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 812d5db:	7e 13                	jle    812d5f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi+0x20>
 812d5dd:	8b 45 08             	mov    0x8(%ebp),%eax
 812d5e0:	83 c0 04             	add    $0x4,%eax
 812d5e3:	89 04 24             	mov    %eax,(%esp)
 812d5e6:	e8 67 7b 00 00       	call   8135152 <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE4sizeEv>
 812d5eb:	3b 45 0c             	cmp    0xc(%ebp),%eax
 812d5ee:	7f 07                	jg     812d5f7 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi+0x27>
 812d5f0:	b8 01 00 00 00       	mov    $0x1,%eax
 812d5f5:	eb 05                	jmp    812d5fc <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi+0x2c>
 812d5f7:	b8 00 00 00 00       	mov    $0x0,%eax
 812d5fc:	84 c0                	test   %al,%al
 812d5fe:	75 50                	jne    812d650 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi+0x80>
 812d600:	8b 45 08             	mov    0x8(%ebp),%eax
 812d603:	83 c0 04             	add    $0x4,%eax
 812d606:	89 04 24             	mov    %eax,(%esp)
 812d609:	e8 44 7b 00 00       	call   8135152 <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE4sizeEv>
 812d60e:	8d 50 ff             	lea    -0x1(%eax),%edx
 812d611:	8b 45 08             	mov    0x8(%ebp),%eax
 812d614:	83 c0 04             	add    $0x4,%eax
 812d617:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d61b:	89 04 24             	mov    %eax,(%esp)
 812d61e:	e8 15 7c 00 00       	call   8135238 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EEixEj>
 812d623:	89 c3                	mov    %eax,%ebx
 812d625:	8b 45 0c             	mov    0xc(%ebp),%eax
 812d628:	8b 55 08             	mov    0x8(%ebp),%edx
 812d62b:	83 c2 04             	add    $0x4,%edx
 812d62e:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d632:	89 14 24             	mov    %edx,(%esp)
 812d635:	e8 fe 7b 00 00       	call   8135238 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EEixEj>
 812d63a:	c7 44 24 08 ec da 12 	movl   $0x812daec,0x8(%esp)
 812d641:	08 
 812d642:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 812d646:	89 04 24             	mov    %eax,(%esp)
 812d649:	e8 fc 7b 00 00       	call   813524a <_ZSt4sortIPPN12advancealtar15_SummonObjectMsEPFbPKS1_S5_EEvT_S8_T0_>
 812d64e:	eb 01                	jmp    812d651 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi+0x81>
 812d650:	90                   	nop
 812d651:	83 c4 14             	add    $0x14,%esp
 812d654:	5b                   	pop    %ebx
 812d655:	5d                   	pop    %ebp
 812d656:	c3                   	ret
 812d657:	90                   	nop

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject @ 0x812d5d0

/* advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject(int) */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject
          (ProcSummonObjectMs *this,int param_1)

{
  bool bVar1;
  int iVar2;
  _SummonObjectMs **pp_Var3;
  _SummonObjectMs **pp_Var4;
  
  if (0 < param_1) {
    iVar2 = std::
            vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
            size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                  *)(this + 4));
    if (param_1 < iVar2) {
      bVar1 = false;
      goto LAB_0812d5fc;
    }
  }
  bVar1 = true;
LAB_0812d5fc:
  if (!bVar1) {
    iVar2 = std::
            vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
            size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                  *)(this + 4));
    pp_Var3 = (_SummonObjectMs **)
              std::
              vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                            *)(this + 4),iVar2 - 1);
    pp_Var4 = (_SummonObjectMs **)
              std::
              vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                            *)(this + 4),param_1);
    std::
    sort<advancealtar::_SummonObjectMs**,bool(*)(advancealtar::_SummonObjectMs_const*,advancealtar::_SummonObjectMs_const*)>
              (pp_Var4,pp_Var3,compare);
  }
  return;
}

```

---

## debugLog

```asm
// === 0812d804 advancealtar::ProcStage::ProcSummonObjectMs::debugLog  [0x0812d804-0x812daeb] ===
 812d804:	55                   	push   %ebp
 812d805:	89 e5                	mov    %esp,%ebp
 812d807:	57                   	push   %edi
 812d808:	56                   	push   %esi
 812d809:	53                   	push   %ebx
 812d80a:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 812d810:	8b 45 08             	mov    0x8(%ebp),%eax
 812d813:	8d 50 04             	lea    0x4(%eax),%edx
 812d816:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d819:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d81d:	89 04 24             	mov    %eax,(%esp)
 812d820:	e8 85 7a 00 00       	call   81352aa <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE5beginEv>
 812d825:	83 ec 04             	sub    $0x4,%esp
 812d828:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 812d82f:	e9 1d 01 00 00       	jmp    812d951 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv+0x14d>
 812d834:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d837:	89 04 24             	mov    %eax,(%esp)
 812d83a:	e8 d9 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d83f:	8b 00                	mov    (%eax),%eax
 812d841:	85 c0                	test   %eax,%eax
 812d843:	0f 94 c0             	sete   %al
 812d846:	84 c0                	test   %al,%al
 812d848:	0f 85 e1 00 00 00    	jne    812d92f <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv+0x12b>
 812d84e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d851:	89 04 24             	mov    %eax,(%esp)
 812d854:	e8 bf 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d859:	8b 00                	mov    (%eax),%eax
 812d85b:	8b 40 20             	mov    0x20(%eax),%eax
 812d85e:	89 45 88             	mov    %eax,-0x78(%ebp)
 812d861:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d864:	89 04 24             	mov    %eax,(%esp)
 812d867:	e8 ac 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d86c:	8b 00                	mov    (%eax),%eax
 812d86e:	8b 40 1c             	mov    0x1c(%eax),%eax
 812d871:	89 45 8c             	mov    %eax,-0x74(%ebp)
 812d874:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d877:	89 04 24             	mov    %eax,(%esp)
 812d87a:	e8 99 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d87f:	8b 00                	mov    (%eax),%eax
 812d881:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 812d885:	0f b6 c0             	movzbl %al,%eax
 812d888:	89 45 90             	mov    %eax,-0x70(%ebp)
 812d88b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d88e:	89 04 24             	mov    %eax,(%esp)
 812d891:	e8 82 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d896:	8b 00                	mov    (%eax),%eax
 812d898:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 812d89c:	98                   	cwtl
 812d89d:	89 45 94             	mov    %eax,-0x6c(%ebp)
 812d8a0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d8a3:	89 04 24             	mov    %eax,(%esp)
 812d8a6:	e8 6d 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d8ab:	8b 00                	mov    (%eax),%eax
 812d8ad:	8b 78 14             	mov    0x14(%eax),%edi
 812d8b0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d8b3:	89 04 24             	mov    %eax,(%esp)
 812d8b6:	e8 5d 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d8bb:	8b 00                	mov    (%eax),%eax
 812d8bd:	8b 70 08             	mov    0x8(%eax),%esi
 812d8c0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d8c3:	89 04 24             	mov    %eax,(%esp)
 812d8c6:	e8 4d 78 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d8cb:	8b 00                	mov    (%eax),%eax
 812d8cd:	8b 18                	mov    (%eax),%ebx
 812d8cf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812d8d6:	00 
 812d8d7:	c7 44 24 08 40 01 00 	movl   $0x140,0x8(%esp)
 812d8de:	00 
 812d8df:	c7 44 24 04 e0 d5 b6 	movl   $0x8b6d5e0,0x4(%esp)
 812d8e6:	08 
 812d8e7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 812d8ea:	89 04 24             	mov    %eax,(%esp)
 812d8ed:	e8 26 1e 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 812d8f2:	8b 45 88             	mov    -0x78(%ebp),%eax
 812d8f5:	89 44 24 20          	mov    %eax,0x20(%esp)
 812d8f9:	8b 45 8c             	mov    -0x74(%ebp),%eax
 812d8fc:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 812d900:	8b 45 90             	mov    -0x70(%ebp),%eax
 812d903:	89 44 24 18          	mov    %eax,0x18(%esp)
 812d907:	8b 45 94             	mov    -0x6c(%ebp),%eax
 812d90a:	89 44 24 14          	mov    %eax,0x14(%esp)
 812d90e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 812d912:	89 74 24 0c          	mov    %esi,0xc(%esp)
 812d916:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812d91a:	c7 44 24 04 18 c6 b6 	movl   $0x8b6c618,0x4(%esp)
 812d921:	08 
 812d922:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 812d925:	89 04 24             	mov    %eax,(%esp)
 812d928:	e8 5b 1e 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812d92d:	eb 01                	jmp    812d930 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv+0x12c>
 812d92f:	90                   	nop
 812d930:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 812d933:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812d93a:	00 
 812d93b:	8d 55 ac             	lea    -0x54(%ebp),%edx
 812d93e:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d942:	89 04 24             	mov    %eax,(%esp)
 812d945:	e8 9a 77 00 00       	call   81350e4 <_ZN9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEppEi>
 812d94a:	83 ec 04             	sub    $0x4,%esp
 812d94d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 812d951:	8b 45 08             	mov    0x8(%ebp),%eax
 812d954:	8d 50 04             	lea    0x4(%eax),%edx
 812d957:	8d 45 b0             	lea    -0x50(%ebp),%eax
 812d95a:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d95e:	89 04 24             	mov    %eax,(%esp)
 812d961:	e8 70 79 00 00       	call   81352d6 <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE3endEv>
 812d966:	83 ec 04             	sub    $0x4,%esp
 812d969:	8d 45 b0             	lea    -0x50(%ebp),%eax
 812d96c:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d970:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812d973:	89 04 24             	mov    %eax,(%esp)
 812d976:	e8 87 79 00 00       	call   8135302 <_ZN9__gnu_cxxneIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 812d97b:	84 c0                	test   %al,%al
 812d97d:	0f 85 b1 fe ff ff    	jne    812d834 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv+0x30>
 812d983:	8b 45 08             	mov    0x8(%ebp),%eax
 812d986:	8d 50 10             	lea    0x10(%eax),%edx
 812d989:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812d98c:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d990:	89 04 24             	mov    %eax,(%esp)
 812d993:	e8 96 79 00 00       	call   813532e <_ZNKSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEE5beginEv>
 812d998:	83 ec 04             	sub    $0x4,%esp
 812d99b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 812d9a2:	e9 07 01 00 00       	jmp    812daae <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv+0x2aa>
 812d9a7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812d9aa:	89 04 24             	mov    %eax,(%esp)
 812d9ad:	e8 1a 7a 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812d9b2:	8b 40 04             	mov    0x4(%eax),%eax
 812d9b5:	8b 40 20             	mov    0x20(%eax),%eax
 812d9b8:	89 45 98             	mov    %eax,-0x68(%ebp)
 812d9bb:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812d9be:	89 04 24             	mov    %eax,(%esp)
 812d9c1:	e8 06 7a 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812d9c6:	8b 40 04             	mov    0x4(%eax),%eax
 812d9c9:	8b 40 1c             	mov    0x1c(%eax),%eax
 812d9cc:	89 45 9c             	mov    %eax,-0x64(%ebp)
 812d9cf:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812d9d2:	89 04 24             	mov    %eax,(%esp)
 812d9d5:	e8 f2 79 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812d9da:	8b 40 04             	mov    0x4(%eax),%eax
 812d9dd:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 812d9e1:	0f b6 c0             	movzbl %al,%eax
 812d9e4:	89 45 a0             	mov    %eax,-0x60(%ebp)
 812d9e7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812d9ea:	89 04 24             	mov    %eax,(%esp)
 812d9ed:	e8 da 79 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812d9f2:	8b 40 04             	mov    0x4(%eax),%eax
 812d9f5:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 812d9f9:	98                   	cwtl
 812d9fa:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 812d9fd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812da00:	89 04 24             	mov    %eax,(%esp)
 812da03:	e8 c4 79 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812da08:	8b 40 04             	mov    0x4(%eax),%eax
 812da0b:	8b 78 14             	mov    0x14(%eax),%edi
 812da0e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812da11:	89 04 24             	mov    %eax,(%esp)
 812da14:	e8 b3 79 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812da19:	8b 40 04             	mov    0x4(%eax),%eax
 812da1c:	8b 70 08             	mov    0x8(%eax),%esi
 812da1f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812da22:	89 04 24             	mov    %eax,(%esp)
 812da25:	e8 a2 79 00 00       	call   81353cc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812da2a:	8b 40 04             	mov    0x4(%eax),%eax
 812da2d:	8b 18                	mov    (%eax),%ebx
 812da2f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812da36:	00 
 812da37:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 812da3e:	00 
 812da3f:	c7 44 24 04 e0 d5 b6 	movl   $0x8b6d5e0,0x4(%esp)
 812da46:	08 
 812da47:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812da4a:	89 04 24             	mov    %eax,(%esp)
 812da4d:	e8 c6 1c 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 812da52:	8b 45 98             	mov    -0x68(%ebp),%eax
 812da55:	89 44 24 20          	mov    %eax,0x20(%esp)
 812da59:	8b 45 9c             	mov    -0x64(%ebp),%eax
 812da5c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 812da60:	8b 45 a0             	mov    -0x60(%ebp),%eax
 812da63:	89 44 24 18          	mov    %eax,0x18(%esp)
 812da67:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 812da6a:	89 44 24 14          	mov    %eax,0x14(%esp)
 812da6e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 812da72:	89 74 24 0c          	mov    %esi,0xc(%esp)
 812da76:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812da7a:	c7 44 24 04 7c c6 b6 	movl   $0x8b6c67c,0x4(%esp)
 812da81:	08 
 812da82:	8d 45 cc             	lea    -0x34(%ebp),%eax
 812da85:	89 04 24             	mov    %eax,(%esp)
 812da88:	e8 fb 1c 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812da8d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812da90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812da97:	00 
 812da98:	8d 55 a8             	lea    -0x58(%ebp),%edx
 812da9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 812da9f:	89 04 24             	mov    %eax,(%esp)
 812daa2:	e8 e7 78 00 00       	call   813538e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEppEi>
 812daa7:	83 ec 04             	sub    $0x4,%esp
 812daaa:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 812daae:	8b 45 08             	mov    0x8(%ebp),%eax
 812dab1:	8d 50 10             	lea    0x10(%eax),%edx
 812dab4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 812dab7:	89 54 24 04          	mov    %edx,0x4(%esp)
 812dabb:	89 04 24             	mov    %eax,(%esp)
 812dabe:	e8 91 78 00 00       	call   8135354 <_ZNKSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 812dac3:	83 ec 04             	sub    $0x4,%esp
 812dac6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 812dac9:	89 44 24 04          	mov    %eax,0x4(%esp)
 812dacd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 812dad0:	89 04 24             	mov    %eax,(%esp)
 812dad3:	e8 a2 78 00 00       	call   813537a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEneERKS6_>
 812dad8:	84 c0                	test   %al,%al
 812dada:	0f 85 c7 fe ff ff    	jne    812d9a7 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv+0x1a3>
 812dae0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 812dae3:	83 c4 00             	add    $0x0,%esp
 812dae6:	5b                   	pop    %ebx
 812dae7:	5e                   	pop    %esi
 812dae8:	5f                   	pop    %edi
 812dae9:	5d                   	pop    %ebp
 812daea:	c3                   	ret
 812daeb:	90                   	nop

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::debugLog @ 0x812d804

/* advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const */

void advancealtar::ProcStage::ProcSummonObjectMs::debugLog(void)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  local_5c [4];
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_58 [4];
  __normal_iterator local_54 [4];
  cMyTrace local_50 [16];
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_40 [4];
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  local_3c [4];
  cMyTrace local_38 [16];
  _Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>> local_28 [4];
  int local_24;
  int local_20;
  
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::begin
            ();
  local_24 = 0;
  while( true ) {
    std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::end
              ();
    bVar8 = __gnu_cxx::operator!=(local_58,local_54);
    if (!bVar8) break;
    piVar10 = (int *)__gnu_cxx::
                     __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                     ::operator*(local_58);
    if (*piVar10 != 0) {
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar3 = *(undefined4 *)(*piVar10 + 0x20);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar4 = *(undefined4 *)(*piVar10 + 0x1c);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      bVar1 = *(byte *)(*piVar10 + 0xc);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      sVar2 = *(short *)(*piVar10 + 4);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar5 = *(undefined4 *)(*piVar10 + 0x14);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar6 = *(undefined4 *)(*piVar10 + 8);
      puVar11 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                ::operator*(local_58);
      uVar7 = *(undefined4 *)*puVar11;
      cMyTrace::cMyTrace(local_50,
                         "void advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const",0x140,
                         0);
      cMyTrace::operator()
                (local_50,
                 "\tVecotr Ms = %06d ActionDefineId=%d ObjectId=%d spawndId=%d isDead=%d ObjectType=%d ObjectIndex=%d\n"
                 ,uVar7,uVar6,uVar5,(int)sVar2,(uint)bVar1,uVar4,uVar3);
    }
    __gnu_cxx::
    __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
    ::operator++(local_40,(int)local_58);
    local_24 = local_24 + 1;
  }
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::begin(local_5c);
  local_20 = 0;
  while( true ) {
    std::
    map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
    ::end(local_3c);
    cVar9 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                        *)local_5c,(_Rb_tree_const_iterator *)local_3c);
    if (cVar9 == '\0') break;
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar3 = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x20);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar4 = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x1c);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    bVar1 = *(byte *)(*(int *)(iVar12 + 4) + 0xc);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    sVar2 = *(short *)(*(int *)(iVar12 + 4) + 4);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar5 = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x14);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar6 = *(undefined4 *)(*(int *)(iVar12 + 4) + 8);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar7 = **(undefined4 **)(iVar12 + 4);
    cMyTrace::cMyTrace(local_38,"void advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const"
                       ,0x14d,0);
    cMyTrace::operator()
              (local_38,
               "\tMap Ms = %06d ActionDefineId=%d ObjectId=%d spawndId=%d isDead=%d ObjectType=%d ObjectIndex=%d\n"
               ,uVar7,uVar6,uVar5,(int)sVar2,(uint)bVar1,uVar4,uVar3);
    std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::operator++
              (local_28,(int)local_5c);
    local_20 = local_20 + 1;
  }
  return;
}

```

---

## dieMob

```asm
// === 0812db00 advancealtar::ProcStage::ProcSummonObjectMs::dieMob  [0x0812db00-0x812dc17] ===
 812db00:	55                   	push   %ebp
 812db01:	89 e5                	mov    %esp,%ebp
 812db03:	83 ec 48             	sub    $0x48,%esp
 812db06:	8b 55 0c             	mov    0xc(%ebp),%edx
 812db09:	8b 45 10             	mov    0x10(%ebp),%eax
 812db0c:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 812db10:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 812db14:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 812db18:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 812db1c:	8b 45 08             	mov    0x8(%ebp),%eax
 812db1f:	8d 48 10             	lea    0x10(%eax),%ecx
 812db22:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812db25:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 812db28:	89 54 24 08          	mov    %edx,0x8(%esp)
 812db2c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812db30:	89 04 24             	mov    %eax,(%esp)
 812db33:	e8 a2 78 00 00       	call   81353da <_ZNSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEE4findERS6_>
 812db38:	83 ec 04             	sub    $0x4,%esp
 812db3b:	8b 45 08             	mov    0x8(%ebp),%eax
 812db3e:	8d 50 10             	lea    0x10(%eax),%edx
 812db41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812db44:	89 54 24 04          	mov    %edx,0x4(%esp)
 812db48:	89 04 24             	mov    %eax,(%esp)
 812db4b:	e8 b6 78 00 00       	call   8135406 <_ZNSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 812db50:	83 ec 04             	sub    $0x4,%esp
 812db53:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812db56:	89 44 24 04          	mov    %eax,0x4(%esp)
 812db5a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812db5d:	89 04 24             	mov    %eax,(%esp)
 812db60:	e8 c7 78 00 00       	call   813542c <_ZNKSt17_Rb_tree_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEneERKS6_>
 812db65:	84 c0                	test   %al,%al
 812db67:	0f 84 a4 00 00 00    	je     812dc11 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE+0x111>
 812db6d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812db70:	89 04 24             	mov    %eax,(%esp)
 812db73:	e8 c8 78 00 00       	call   8135440 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812db78:	8b 40 04             	mov    0x4(%eax),%eax
 812db7b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812db7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812db81:	89 04 24             	mov    %eax,(%esp)
 812db84:	e8 b7 78 00 00       	call   8135440 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812db89:	8b 40 04             	mov    0x4(%eax),%eax
 812db8c:	8b 40 10             	mov    0x10(%eax),%eax
 812db8f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812db92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812db95:	8b 40 10             	mov    0x10(%eax),%eax
 812db98:	83 f8 01             	cmp    $0x1,%eax
 812db9b:	75 74                	jne    812dc11 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE+0x111>
 812db9d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 812dba0:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 812dba4:	83 f0 01             	xor    $0x1,%eax
 812dba7:	84 c0                	test   %al,%al
 812dba9:	74 66                	je     812dc11 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE+0x111>
 812dbab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812dbae:	89 04 24             	mov    %eax,(%esp)
 812dbb1:	e8 8a 78 00 00       	call   8135440 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812dbb6:	8b 40 04             	mov    0x4(%eax),%eax
 812dbb9:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 812dbbd:	8b 45 08             	mov    0x8(%ebp),%eax
 812dbc0:	8b 40 28             	mov    0x28(%eax),%eax
 812dbc3:	8d 50 01             	lea    0x1(%eax),%edx
 812dbc6:	8b 45 08             	mov    0x8(%ebp),%eax
 812dbc9:	89 50 28             	mov    %edx,0x28(%eax)
 812dbcc:	8b 45 08             	mov    0x8(%ebp),%eax
 812dbcf:	8b 40 30             	mov    0x30(%eax),%eax
 812dbd2:	89 04 24             	mov    %eax,(%esp)
 812dbd5:	e8 3a 6c 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812dbda:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812dbdd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812dbe1:	74 27                	je     812dc0a <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE+0x10a>
 812dbe3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812dbe6:	89 04 24             	mov    %eax,(%esp)
 812dbe9:	e8 52 78 00 00       	call   8135440 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsPN12advancealtar15_SummonObjectMsEEEptEv>
 812dbee:	8b 40 04             	mov    0x4(%eax),%eax
 812dbf1:	8b 40 14             	mov    0x14(%eax),%eax
 812dbf4:	8b 55 14             	mov    0x14(%ebp),%edx
 812dbf7:	89 54 24 08          	mov    %edx,0x8(%esp)
 812dbfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 812dbff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812dc02:	89 04 24             	mov    %eax,(%esp)
 812dc05:	e8 36 5f 00 00       	call   8133b40 <_ZN12advancealtar10HistoryLog11killMonsterER5CUseriRK15MSG_MONSTER_DIE>
 812dc0a:	b8 01 00 00 00       	mov    $0x1,%eax
 812dc0f:	eb 05                	jmp    812dc16 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE+0x116>
 812dc11:	b8 00 00 00 00       	mov    $0x0,%eax
 812dc16:	c9                   	leave
 812dc17:	c3                   	ret

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::dieMob @ 0x812db00

/* advancealtar::ProcStage::ProcSummonObjectMs::dieMob(unsigned short, unsigned short,
   MSG_MONSTER_DIE const&) */

undefined4 __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::dieMob
          (ProcSummonObjectMs *this,ushort param_1,ushort param_2,MSG_MONSTER_DIE *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>> local_24 [6];
  ushort local_1e;
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  CUser *local_10;
  
  local_1e = param_1;
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::find((short *)local_24);
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
            operator->(local_24);
    local_18 = *(int *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
            operator->(local_24);
    local_14 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x10);
    if ((*(int *)(local_18 + 0x10) == 1) && (*(char *)(local_18 + 0xc) != '\x01')) {
      iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
              operator->(local_24);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0xc) = 1;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      local_10 = (CUser *)CharacData::getUser(*(CharacData **)(this + 0x30));
      if (local_10 != (CUser *)0x0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
                operator->(local_24);
        HistoryLog::killMonster(local_10,*(int *)(*(int *)(iVar2 + 4) + 0x14),param_3);
      }
      return 1;
    }
  }
  return 0;
}

```

---

## getLastInsertDataIndex

```asm
// === 0812d5ba advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex  [0x0812d5ba-0x812d5cf] ===
 812d5ba:	55                   	push   %ebp
 812d5bb:	89 e5                	mov    %esp,%ebp
 812d5bd:	83 ec 18             	sub    $0x18,%esp
 812d5c0:	8b 45 08             	mov    0x8(%ebp),%eax
 812d5c3:	83 c0 04             	add    $0x4,%eax
 812d5c6:	89 04 24             	mov    %eax,(%esp)
 812d5c9:	e8 84 7b 00 00       	call   8135152 <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE4sizeEv>
 812d5ce:	c9                   	leave
 812d5cf:	c3                   	ret

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex @ 0x812d5ba

/* advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex() */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::getLastInsertDataIndex(ProcSummonObjectMs *this)

{
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::size
            ((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              *)(this + 4));
  return;
}

```

---

## insertSummonObject

```asm
// === 0812d540 advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject  [0x0812d540-0x812d5b9] ===
 812d540:	55                   	push   %ebp
 812d541:	89 e5                	mov    %esp,%ebp
 812d543:	83 ec 38             	sub    $0x38,%esp
 812d546:	8b 45 0c             	mov    0xc(%ebp),%eax
 812d549:	89 45 d8             	mov    %eax,-0x28(%ebp)
 812d54c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d54f:	8d 50 04             	lea    0x4(%eax),%edx
 812d552:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812d555:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d559:	89 14 24             	mov    %edx,(%esp)
 812d55c:	e8 0d 7c 00 00       	call   813516e <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE9push_backEOS2_>
 812d561:	8b 45 0c             	mov    0xc(%ebp),%eax
 812d564:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812d567:	8b 45 0c             	mov    0xc(%ebp),%eax
 812d56a:	8d 48 04             	lea    0x4(%eax),%ecx
 812d56d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812d570:	8d 55 f4             	lea    -0xc(%ebp),%edx
 812d573:	89 54 24 08          	mov    %edx,0x8(%esp)
 812d577:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812d57b:	89 04 24             	mov    %eax,(%esp)
 812d57e:	e8 15 7c 00 00       	call   8135198 <_ZSt9make_pairIRsPN12advancealtar15_SummonObjectMsEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 812d583:	83 ec 04             	sub    $0x4,%esp
 812d586:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812d589:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d58d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d590:	89 04 24             	mov    %eax,(%esp)
 812d593:	e8 42 7c 00 00       	call   81351da <_ZNSt4pairIKsPN12advancealtar15_SummonObjectMsEEC1IsS3_EEOS_IT_T0_E>
 812d598:	8b 45 08             	mov    0x8(%ebp),%eax
 812d59b:	8d 48 10             	lea    0x10(%eax),%ecx
 812d59e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 812d5a1:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 812d5a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 812d5a8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812d5ac:	89 04 24             	mov    %eax,(%esp)
 812d5af:	e8 58 7c 00 00       	call   813520c <_ZNSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEE6insertERKS7_>
 812d5b4:	83 ec 04             	sub    $0x4,%esp
 812d5b7:	c9                   	leave
 812d5b8:	c3                   	ret
 812d5b9:	90                   	nop

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject @ 0x812d540

/* advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject(advancealtar::_SummonObjectMs&)
    */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject
          (ProcSummonObjectMs *this,_SummonObjectMs *param_1)

{
  _SummonObjectMs *local_2c;
  pair local_28 [8];
  pair<short_const,advancealtar::_SummonObjectMs*> local_20 [8];
  short local_18 [4];
  _SummonObjectMs *local_10;
  
  local_2c = param_1;
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
  push_back((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>> *
            )(this + 4),&local_2c);
  local_10 = param_1;
  std::make_pair<short&,advancealtar::_SummonObjectMs*>(local_18,(_SummonObjectMs **)(param_1 + 4));
  std::pair<short_const,advancealtar::_SummonObjectMs*>::pair<short,advancealtar::_SummonObjectMs*>
            (local_20,(pair *)local_18);
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::insert(local_28);
  return;
}

```

---

## isEndSummon

```asm
// === 0812d50a advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon  [0x0812d50a-0x812d53f] ===
 812d50a:	55                   	push   %ebp
 812d50b:	89 e5                	mov    %esp,%ebp
 812d50d:	53                   	push   %ebx
 812d50e:	83 ec 14             	sub    $0x14,%esp
 812d511:	8b 45 08             	mov    0x8(%ebp),%eax
 812d514:	8b 18                	mov    (%eax),%ebx
 812d516:	8b 45 08             	mov    0x8(%ebp),%eax
 812d519:	83 c0 04             	add    $0x4,%eax
 812d51c:	89 04 24             	mov    %eax,(%esp)
 812d51f:	e8 2e 7c 00 00       	call   8135152 <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE4sizeEv>
 812d524:	39 c3                	cmp    %eax,%ebx
 812d526:	0f 93 c0             	setae  %al
 812d529:	84 c0                	test   %al,%al
 812d52b:	74 07                	je     812d534 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv+0x2a>
 812d52d:	b8 01 00 00 00       	mov    $0x1,%eax
 812d532:	eb 05                	jmp    812d539 <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv+0x2f>
 812d534:	b8 00 00 00 00       	mov    $0x0,%eax
 812d539:	83 c4 14             	add    $0x14,%esp
 812d53c:	5b                   	pop    %ebx
 812d53d:	5d                   	pop    %ebp
 812d53e:	c3                   	ret
 812d53f:	90                   	nop

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon @ 0x812d50a

/* advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon() const */

bool __thiscall advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon(ProcSummonObjectMs *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)this;
  uVar2 = std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
          ::size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                  *)(this + 4));
  return uVar2 <= uVar1;
}

```

---

## reset

```asm
// === 0812d43c advancealtar::ProcStage::ProcSummonObjectMs::reset  [0x0812d43c-0x812d509] ===
 812d43c:	55                   	push   %ebp
 812d43d:	89 e5                	mov    %esp,%ebp
 812d43f:	83 ec 28             	sub    $0x28,%esp
 812d442:	8b 45 08             	mov    0x8(%ebp),%eax
 812d445:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812d44b:	8b 45 08             	mov    0x8(%ebp),%eax
 812d44e:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 812d455:	8b 45 08             	mov    0x8(%ebp),%eax
 812d458:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 812d45f:	8b 45 08             	mov    0x8(%ebp),%eax
 812d462:	8d 50 04             	lea    0x4(%eax),%edx
 812d465:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812d468:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d46c:	89 04 24             	mov    %eax,(%esp)
 812d46f:	e8 e0 7b 00 00       	call   8135054 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE5beginEv>
 812d474:	83 ec 04             	sub    $0x4,%esp
 812d477:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812d47a:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d47e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812d481:	89 04 24             	mov    %eax,(%esp)
 812d484:	e8 ef 7b 00 00       	call   8135078 <_ZN9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 812d489:	eb 32                	jmp    812d4bd <_ZN12advancealtar9ProcStage18ProcSummonObjectMs5resetEv+0x81>
 812d48b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812d48e:	89 04 24             	mov    %eax,(%esp)
 812d491:	e8 82 7c 00 00       	call   8135118 <_ZNK9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEdeEv>
 812d496:	8b 00                	mov    (%eax),%eax
 812d498:	89 04 24             	mov    %eax,(%esp)
 812d49b:	e8 50 70 5f 00       	call   87244f0 <_ZdlPv>
 812d4a0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 812d4a3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812d4aa:	00 
 812d4ab:	8d 55 e8             	lea    -0x18(%ebp),%edx
 812d4ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d4b2:	89 04 24             	mov    %eax,(%esp)
 812d4b5:	e8 2a 7c 00 00       	call   81350e4 <_ZN9__gnu_cxx17__normal_iteratorIPKPN12advancealtar15_SummonObjectMsESt6vectorIS3_SaIS3_EEEppEi>
 812d4ba:	83 ec 04             	sub    $0x4,%esp
 812d4bd:	8b 45 08             	mov    0x8(%ebp),%eax
 812d4c0:	8d 50 04             	lea    0x4(%eax),%edx
 812d4c3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 812d4c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d4ca:	89 04 24             	mov    %eax,(%esp)
 812d4cd:	e8 c0 7b 00 00       	call   8135092 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE3endEv>
 812d4d2:	83 ec 04             	sub    $0x4,%esp
 812d4d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 812d4d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d4dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812d4df:	89 04 24             	mov    %eax,(%esp)
 812d4e2:	e8 d1 7b 00 00       	call   81350b8 <_ZN9__gnu_cxxneIPKPN12advancealtar15_SummonObjectMsEPS3_St6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNSA_IT0_SC_EE>
 812d4e7:	84 c0                	test   %al,%al
 812d4e9:	75 a0                	jne    812d48b <_ZN12advancealtar9ProcStage18ProcSummonObjectMs5resetEv+0x4f>
 812d4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 812d4ee:	83 c0 10             	add    $0x10,%eax
 812d4f1:	89 04 24             	mov    %eax,(%esp)
 812d4f4:	e8 29 7c 00 00       	call   8135122 <_ZNSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEE5clearEv>
 812d4f9:	8b 45 08             	mov    0x8(%ebp),%eax
 812d4fc:	83 c0 04             	add    $0x4,%eax
 812d4ff:	89 04 24             	mov    %eax,(%esp)
 812d502:	e8 2f 7c 00 00       	call   8135136 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE5clearEv>
 812d507:	c9                   	leave
 812d508:	c3                   	ret
 812d509:	90                   	nop

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::reset @ 0x812d43c

/* advancealtar::ProcStage::ProcSummonObjectMs::reset() */

void __thiscall advancealtar::ProcStage::ProcSummonObjectMs::reset(ProcSummonObjectMs *this)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_10 [12];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::begin
            ();
  __gnu_cxx::
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  ::__normal_iterator<advancealtar::_SummonObjectMs**>(local_1c,local_18);
  while( true ) {
    std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::end
              ();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
             ::operator*(local_1c);
    operator_delete((void *)*puVar2);
    __gnu_cxx::
    __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
    ::operator++(local_10,(int)local_1c);
  }
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::clear((map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
           *)(this + 0x10));
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::clear
            ((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              *)(this + 4));
  return;
}

```

---

## summonObjectAndSendPacket

```asm
// === 0812d658 advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket  [0x0812d658-0x812d803] ===
 812d658:	55                   	push   %ebp
 812d659:	89 e5                	mov    %esp,%ebp
 812d65b:	56                   	push   %esi
 812d65c:	53                   	push   %ebx
 812d65d:	83 ec 50             	sub    $0x50,%esp
 812d660:	8b 45 08             	mov    0x8(%ebp),%eax
 812d663:	83 c0 04             	add    $0x4,%eax
 812d666:	89 04 24             	mov    %eax,(%esp)
 812d669:	e8 e4 7a 00 00       	call   8135152 <_ZNKSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EE4sizeEv>
 812d66e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812d671:	e9 71 01 00 00       	jmp    812d7e7 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x18f>
 812d676:	8b 45 08             	mov    0x8(%ebp),%eax
 812d679:	8b 00                	mov    (%eax),%eax
 812d67b:	8b 55 08             	mov    0x8(%ebp),%edx
 812d67e:	83 c2 04             	add    $0x4,%edx
 812d681:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d685:	89 14 24             	mov    %edx,(%esp)
 812d688:	e8 ab 7b 00 00       	call   8135238 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EEixEj>
 812d68d:	8b 00                	mov    (%eax),%eax
 812d68f:	85 c0                	test   %eax,%eax
 812d691:	0f 94 c0             	sete   %al
 812d694:	84 c0                	test   %al,%al
 812d696:	0f 85 3d 01 00 00    	jne    812d7d9 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x181>
 812d69c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d69f:	8b 00                	mov    (%eax),%eax
 812d6a1:	8b 55 08             	mov    0x8(%ebp),%edx
 812d6a4:	83 c2 04             	add    $0x4,%edx
 812d6a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d6ab:	89 14 24             	mov    %edx,(%esp)
 812d6ae:	e8 85 7b 00 00       	call   8135238 <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EEixEj>
 812d6b3:	8b 00                	mov    (%eax),%eax
 812d6b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812d6b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812d6bb:	8b 10                	mov    (%eax),%edx
 812d6bd:	8b 45 08             	mov    0x8(%ebp),%eax
 812d6c0:	8b 40 34             	mov    0x34(%eax),%eax
 812d6c3:	8b 00                	mov    (%eax),%eax
 812d6c5:	39 c2                	cmp    %eax,%edx
 812d6c7:	0f 8f 2f 01 00 00    	jg     812d7fc <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x1a4>
 812d6cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812d6d0:	8b 10                	mov    (%eax),%edx
 812d6d2:	8b 45 08             	mov    0x8(%ebp),%eax
 812d6d5:	8b 40 34             	mov    0x34(%eax),%eax
 812d6d8:	8b 00                	mov    (%eax),%eax
 812d6da:	39 c2                	cmp    %eax,%edx
 812d6dc:	0f 8f f8 00 00 00    	jg     812d7da <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x182>
 812d6e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812d6e5:	8b 40 10             	mov    0x10(%eax),%eax
 812d6e8:	85 c0                	test   %eax,%eax
 812d6ea:	0f 85 ea 00 00 00    	jne    812d7da <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x182>
 812d6f0:	8b 45 08             	mov    0x8(%ebp),%eax
 812d6f3:	8b 40 2c             	mov    0x2c(%eax),%eax
 812d6f6:	8d 50 01             	lea    0x1(%eax),%edx
 812d6f9:	8b 45 08             	mov    0x8(%ebp),%eax
 812d6fc:	89 50 2c             	mov    %edx,0x2c(%eax)
 812d6ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812d702:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
 812d709:	8d 45 bc             	lea    -0x44(%ebp),%eax
 812d70c:	89 04 24             	mov    %eax,(%esp)
 812d70f:	e8 92 6f 00 00       	call   81346a6 <_ZN16NOTIPacketStruct26_NotiAdvanceAltarSpawnUnitC1Ev>
 812d714:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812d717:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 812d71b:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 812d71f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812d722:	83 c0 14             	add    $0x14,%eax
 812d725:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 812d72c:	00 
 812d72d:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d731:	8d 45 bc             	lea    -0x44(%ebp),%eax
 812d734:	83 c0 04             	add    $0x4,%eax
 812d737:	89 04 24             	mov    %eax,(%esp)
 812d73a:	e8 61 01 f5 ff       	call   807d8a0 <memcpy@plt>
 812d73f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d742:	89 04 24             	mov    %eax,(%esp)
 812d745:	e8 02 06 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 812d74a:	c7 44 24 08 0b 02 00 	movl   $0x20b,0x8(%esp)
 812d751:	00 
 812d752:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812d759:	00 
 812d75a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d75d:	89 04 24             	mov    %eax,(%esp)
 812d760:	e8 97 e1 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 812d765:	8d 45 bc             	lea    -0x44(%ebp),%eax
 812d768:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 812d76f:	00 
 812d770:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d774:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d777:	89 04 24             	mov    %eax,(%esp)
 812d77a:	e8 89 07 ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812d77f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812d786:	00 
 812d787:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d78a:	89 04 24             	mov    %eax,(%esp)
 812d78d:	e8 c6 e1 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812d792:	8b 45 08             	mov    0x8(%ebp),%eax
 812d795:	8b 40 30             	mov    0x30(%eax),%eax
 812d798:	89 04 24             	mov    %eax,(%esp)
 812d79b:	e8 74 70 00 00       	call   8134814 <_ZNK12advancealtar10CharacData7getUserEv>
 812d7a0:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 812d7a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d7a7:	89 04 24             	mov    %eax,(%esp)
 812d7aa:	e8 0b ae 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 812d7af:	eb 1b                	jmp    812d7cc <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x174>
 812d7b1:	89 d3                	mov    %edx,%ebx
 812d7b3:	89 c6                	mov    %eax,%esi
 812d7b5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d7b8:	89 04 24             	mov    %eax,(%esp)
 812d7bb:	e8 c0 06 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812d7c0:	89 f0                	mov    %esi,%eax
 812d7c2:	89 da                	mov    %ebx,%edx
 812d7c4:	89 04 24             	mov    %eax,(%esp)
 812d7c7:	e8 84 5f 9b 00       	call   8ae3750 <_Unwind_Resume>
 812d7cc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d7cf:	89 04 24             	mov    %eax,(%esp)
 812d7d2:	e8 a9 06 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812d7d7:	eb 01                	jmp    812d7da <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x182>
 812d7d9:	90                   	nop
 812d7da:	8b 45 08             	mov    0x8(%ebp),%eax
 812d7dd:	8b 00                	mov    (%eax),%eax
 812d7df:	8d 50 01             	lea    0x1(%eax),%edx
 812d7e2:	8b 45 08             	mov    0x8(%ebp),%eax
 812d7e5:	89 10                	mov    %edx,(%eax)
 812d7e7:	8b 45 08             	mov    0x8(%ebp),%eax
 812d7ea:	8b 00                	mov    (%eax),%eax
 812d7ec:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 812d7ef:	0f 92 c0             	setb   %al
 812d7f2:	84 c0                	test   %al,%al
 812d7f4:	0f 85 7c fe ff ff    	jne    812d676 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x1e>
 812d7fa:	eb 01                	jmp    812d7fd <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv+0x1a5>
 812d7fc:	90                   	nop
 812d7fd:	83 c4 50             	add    $0x50,%esp
 812d800:	5b                   	pop    %ebx
 812d801:	5e                   	pop    %esi
 812d802:	5d                   	pop    %ebp
 812d803:	c3                   	ret

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket @ 0x812d658

/* advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket() */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket(ProcSummonObjectMs *this)

{
  int *piVar1;
  CUser *this_00;
  undefined2 local_48 [2];
  undefined1 auStack_44 [36];
  PacketGuard local_20 [12];
  uint local_14;
  int *local_10;
  
  local_14 = std::
             vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
             size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                   *)(this + 4));
  do {
    if (local_14 <= *(uint *)this) {
      return;
    }
    piVar1 = (int *)std::
                    vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                    ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                                  *)(this + 4),*(uint *)this);
    if (*piVar1 != 0) {
      local_10 = (int *)std::
                        vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                        ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                                      *)(this + 4),*(uint *)this);
      local_10 = (int *)*local_10;
      if (**(int **)(this + 0x34) < *local_10) {
        return;
      }
      if ((*local_10 <= **(int **)(this + 0x34)) && (local_10[4] == 0)) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        local_10[4] = 1;
        NOTIPacketStruct::_NotiAdvanceAltarSpawnUnit::_NotiAdvanceAltarSpawnUnit
                  ((_NotiAdvanceAltarSpawnUnit *)local_48);
        local_48[0] = (undefined2)local_10[1];
        memcpy(auStack_44,local_10 + 5,0x24);
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0812d760 to 0812d7ae has its CatchHandler @ 0812d7b1 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x20b);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)local_48,0x28);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        this_00 = (CUser *)CharacData::getUser(*(CharacData **)(this + 0x30));
        CUser::Send(this_00,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
    }
    *(int *)this = *(int *)this + 1;
  } while( true );
}

```

---

## ~ProcSummonObjectMs

```asm
// === 0812d3f0 advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs  [0x0812d3f0-0x812d43b] ===
 812d3f0:	55                   	push   %ebp
 812d3f1:	89 e5                	mov    %esp,%ebp
 812d3f3:	56                   	push   %esi
 812d3f4:	53                   	push   %ebx
 812d3f5:	83 ec 10             	sub    $0x10,%esp
 812d3f8:	8b 45 08             	mov    0x8(%ebp),%eax
 812d3fb:	83 c0 10             	add    $0x10,%eax
 812d3fe:	89 04 24             	mov    %eax,(%esp)
 812d401:	e8 a8 75 00 00       	call   81349ae <_ZNSt3mapIsPN12advancealtar15_SummonObjectMsESt4lessIsESaISt4pairIKsS2_EEED1Ev>
 812d406:	eb 1e                	jmp    812d426 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev+0x36>
 812d408:	89 d3                	mov    %edx,%ebx
 812d40a:	89 c6                	mov    %eax,%esi
 812d40c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d40f:	83 c0 04             	add    $0x4,%eax
 812d412:	89 04 24             	mov    %eax,(%esp)
 812d415:	e8 62 7b 00 00       	call   8134f7c <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EED1Ev>
 812d41a:	89 f0                	mov    %esi,%eax
 812d41c:	89 da                	mov    %ebx,%edx
 812d41e:	89 04 24             	mov    %eax,(%esp)
 812d421:	e8 2a 63 9b 00       	call   8ae3750 <_Unwind_Resume>
 812d426:	8b 45 08             	mov    0x8(%ebp),%eax
 812d429:	83 c0 04             	add    $0x4,%eax
 812d42c:	89 04 24             	mov    %eax,(%esp)
 812d42f:	e8 48 7b 00 00       	call   8134f7c <_ZNSt6vectorIPN12advancealtar15_SummonObjectMsESaIS2_EED1Ev>
 812d434:	83 c4 10             	add    $0x10,%esp
 812d437:	5b                   	pop    %ebx
 812d438:	5e                   	pop    %esi
 812d439:	5d                   	pop    %ebp
 812d43a:	c3                   	ret
 812d43b:	90                   	nop

```

```c
// advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs @ 0x812d3f0

/* advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs() */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs(ProcSummonObjectMs *this)

{
                    /* try { // try from 0812d401 to 0812d405 has its CatchHandler @ 0812d408 */
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::~map((map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
          *)(this + 0x10));
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
  ~vector((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>> *)
          (this + 4));
  return;
}

```

