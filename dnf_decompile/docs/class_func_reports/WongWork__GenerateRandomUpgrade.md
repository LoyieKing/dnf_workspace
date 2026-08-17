# WongWork__GenerateRandomUpgrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GenerateRandomUpgrade

```asm
// === 085335ee WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade  [0x085335ee-0x853364d] ===
 85335ee:	55                   	push   %ebp
 85335ef:	89 e5                	mov    %esp,%ebp
 85335f1:	57                   	push   %edi
 85335f2:	56                   	push   %esi
 85335f3:	53                   	push   %ebx
 85335f4:	83 ec 2c             	sub    $0x2c,%esp
 85335f7:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 85335fe:	e8 4d a1 b4 ff       	call   807d750 <time@plt>
 8533603:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8533606:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 8533609:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 8533610:	e8 3b 0e 1f 00       	call   8724450 <_Znwj>
 8533615:	89 c3                	mov    %eax,%ebx
 8533617:	89 d8                	mov    %ebx,%eax
 8533619:	89 74 24 04          	mov    %esi,0x4(%esp)
 853361d:	89 04 24             	mov    %eax,(%esp)
 8533620:	e8 05 84 b9 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 8533625:	eb 18                	jmp    853363f <_ZN8WongWork21GenerateRandomUpgradeC1Ev+0x51>
 8533627:	89 d6                	mov    %edx,%esi
 8533629:	89 c7                	mov    %eax,%edi
 853362b:	89 1c 24             	mov    %ebx,(%esp)
 853362e:	e8 bd 0e 1f 00       	call   87244f0 <_ZdlPv>
 8533633:	89 f8                	mov    %edi,%eax
 8533635:	89 f2                	mov    %esi,%edx
 8533637:	89 04 24             	mov    %eax,(%esp)
 853363a:	e8 11 01 5b 00       	call   8ae3750 <_Unwind_Resume>
 853363f:	89 da                	mov    %ebx,%edx
 8533641:	8b 45 08             	mov    0x8(%ebp),%eax
 8533644:	89 10                	mov    %edx,(%eax)
 8533646:	83 c4 2c             	add    $0x2c,%esp
 8533649:	5b                   	pop    %ebx
 853364a:	5e                   	pop    %esi
 853364b:	5f                   	pop    %edi
 853364c:	5d                   	pop    %ebp
 853364d:	c3                   	ret

```

```c
// WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade @ 0x85335ee

/* WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade() */

void __thiscall WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade(GenerateRandomUpgrade *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08533620 to 08533624 has its CatchHandler @ 08533627 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)this = this_00;
  return;
}

```

---

## generateEquipGrade

```asm
// === 08533932 WongWork::GenerateRandomUpgrade::generateEquipGrade  [0x08533932-0x8533b3d] ===
 8533932:	55                   	push   %ebp
 8533933:	89 e5                	mov    %esp,%ebp
 8533935:	83 ec 78             	sub    $0x78,%esp
 8533938:	c7 45 bc a7 5a 00 00 	movl   $0x5aa7,-0x44(%ebp)
 853393f:	c7 45 c0 a6 0f 00 00 	movl   $0xfa6,-0x40(%ebp)
 8533946:	c7 45 c4 23 6a 00 00 	movl   $0x6a23,-0x3c(%ebp)
 853394d:	c7 45 c8 f0 5d 00 00 	movl   $0x5df0,-0x38(%ebp)
 8533954:	c7 45 cc 70 72 00 00 	movl   $0x7270,-0x34(%ebp)
 853395b:	c7 45 a8 e8 03 00 00 	movl   $0x3e8,-0x58(%ebp)
 8533962:	c7 45 ac e8 03 00 00 	movl   $0x3e8,-0x54(%ebp)
 8533969:	c7 45 b0 e8 03 00 00 	movl   $0x3e8,-0x50(%ebp)
 8533970:	c7 45 b4 e8 03 00 00 	movl   $0x3e8,-0x4c(%ebp)
 8533977:	c7 45 b8 e8 03 00 00 	movl   $0x3e8,-0x48(%ebp)
 853397e:	c7 45 d4 88 13 00 00 	movl   $0x1388,-0x2c(%ebp)
 8533985:	e8 11 88 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853398a:	05 40 05 00 00       	add    $0x540,%eax
 853398f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8533992:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8533995:	89 04 24             	mov    %eax,(%esp)
 8533998:	e8 0f 0f c8 ff       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 853399d:	85 c0                	test   %eax,%eax
 853399f:	0f 94 c0             	sete   %al
 85339a2:	84 c0                	test   %al,%al
 85339a4:	74 0a                	je     85339b0 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x7e>
 85339a6:	b8 a7 5a 00 00       	mov    $0x5aa7,%eax
 85339ab:	e9 8b 01 00 00       	jmp    8533b3b <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x209>
 85339b0:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 85339b5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85339b8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85339bb:	89 04 24             	mov    %eax,(%esp)
 85339be:	e8 e9 0e c8 ff       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 85339c3:	85 c0                	test   %eax,%eax
 85339c5:	0f 95 c0             	setne  %al
 85339c8:	84 c0                	test   %al,%al
 85339ca:	0f 84 d6 00 00 00    	je     8533aa6 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x174>
 85339d0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85339d3:	89 04 24             	mov    %eax,(%esp)
 85339d6:	e8 d1 0e c8 ff       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 85339db:	83 e8 01             	sub    $0x1,%eax
 85339de:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85339e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85339e8:	00 
 85339e9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85339ec:	89 04 24             	mov    %eax,(%esp)
 85339ef:	e8 24 10 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 85339f4:	8b 00                	mov    (%eax),%eax
 85339f6:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85339f9:	0f 9c c0             	setl   %al
 85339fc:	84 c0                	test   %al,%al
 85339fe:	74 1e                	je     8533a1e <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0xec>
 8533a00:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8533a07:	00 
 8533a08:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8533a0b:	89 04 24             	mov    %eax,(%esp)
 8533a0e:	e8 05 10 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533a13:	8b 40 04             	mov    0x4(%eax),%eax
 8533a16:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533a19:	e9 88 00 00 00       	jmp    8533aa6 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x174>
 8533a1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8533a21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8533a25:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8533a28:	89 04 24             	mov    %eax,(%esp)
 8533a2b:	e8 e8 0f c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533a30:	8b 00                	mov    (%eax),%eax
 8533a32:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8533a35:	0f 9f c0             	setg   %al
 8533a38:	84 c0                	test   %al,%al
 8533a3a:	74 1a                	je     8533a56 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x124>
 8533a3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8533a3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8533a43:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8533a46:	89 04 24             	mov    %eax,(%esp)
 8533a49:	e8 ca 0f c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533a4e:	8b 40 04             	mov    0x4(%eax),%eax
 8533a51:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533a54:	eb 50                	jmp    8533aa6 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x174>
 8533a56:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8533a5d:	eb 3a                	jmp    8533a99 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x167>
 8533a5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8533a62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8533a66:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8533a69:	89 04 24             	mov    %eax,(%esp)
 8533a6c:	e8 a7 0f c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533a71:	8b 00                	mov    (%eax),%eax
 8533a73:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8533a76:	0f 94 c0             	sete   %al
 8533a79:	84 c0                	test   %al,%al
 8533a7b:	74 18                	je     8533a95 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x163>
 8533a7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8533a80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8533a84:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8533a87:	89 04 24             	mov    %eax,(%esp)
 8533a8a:	e8 89 0f c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533a8f:	8b 40 04             	mov    0x4(%eax),%eax
 8533a92:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533a95:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8533a99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8533a9c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8533a9f:	0f 9e c0             	setle  %al
 8533aa2:	84 c0                	test   %al,%al
 8533aa4:	75 b9                	jne    8533a5f <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x12d>
 8533aa6:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8533aa9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8533aac:	db 45 e0             	fildl  -0x20(%ebp)
 8533aaf:	d8 4d dc             	fmuls  -0x24(%ebp)
 8533ab2:	d9 7d a6             	fnstcw -0x5a(%ebp)
 8533ab5:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 8533ab9:	b4 0c                	mov    $0xc,%ah
 8533abb:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8533abf:	d9 6d a4             	fldcw  -0x5c(%ebp)
 8533ac2:	db 5d a0             	fistpl -0x60(%ebp)
 8533ac5:	d9 6d a6             	fldcw  -0x5a(%ebp)
 8533ac8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8533acb:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8533ace:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8533ad1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8533ad4:	29 c2                	sub    %eax,%edx
 8533ad6:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8533ad9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8533adc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8533adf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8533ae2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8533ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 8533ae8:	8b 00                	mov    (%eax),%eax
 8533aea:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8533aed:	89 54 24 04          	mov    %edx,0x4(%esp)
 8533af1:	89 04 24             	mov    %eax,(%esp)
 8533af4:	e8 c5 7f b9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8533af9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8533afc:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8533b03:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8533b0a:	eb 1f                	jmp    8533b2b <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x1f9>
 8533b0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8533b0f:	8b 44 85 a8          	mov    -0x58(%ebp,%eax,4),%eax
 8533b13:	01 45 e8             	add    %eax,-0x18(%ebp)
 8533b16:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8533b19:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8533b1c:	7c 09                	jl     8533b27 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x1f5>
 8533b1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8533b21:	8b 44 85 bc          	mov    -0x44(%ebp,%eax,4),%eax
 8533b25:	eb 14                	jmp    8533b3b <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x209>
 8533b27:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8533b2b:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8533b2f:	0f 9e c0             	setle  %al
 8533b32:	84 c0                	test   %al,%al
 8533b34:	75 d6                	jne    8533b0c <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi+0x1da>
 8533b36:	b8 a7 5a 00 00       	mov    $0x5aa7,%eax
 8533b3b:	c9                   	leave
 8533b3c:	c3                   	ret
 8533b3d:	90                   	nop

```

```c
// WongWork::GenerateRandomUpgrade::generateEquipGrade @ 0x8533932

/* WongWork::GenerateRandomUpgrade::generateEquipGrade(int) */

int __thiscall
WongWork::GenerateRandomUpgrade::generateEquipGrade(GenerateRandomUpgrade *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int local_5c [11];
  int local_30;
  vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *local_2c;
  float local_28;
  int local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_5c[5] = 0x5aa7;
  local_5c[6] = 0xfa6;
  local_5c[7] = 0x6a23;
  local_5c[8] = 0x5df0;
  local_5c[9] = 0x7270;
  local_5c[0] = 1000;
  local_5c[1] = 1000;
  local_5c[2] = 1000;
  local_5c[3] = 1000;
  local_5c[4] = 1000;
  local_30 = 5000;
  iVar1 = G_CDataManager();
  local_2c = (vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)(iVar1 + 0x540);
  iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_2c);
  if (iVar1 != 0) {
    local_28 = 1.0;
    iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_2c);
    if (iVar1 != 0) {
      iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_2c)
      ;
      local_18 = iVar1 - 1;
      piVar2 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                      operator[](local_2c,0);
      if (*piVar2 < param_1) {
        iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                          (local_2c,0);
        local_28 = *(float *)(iVar1 + 4);
      }
      else {
        piVar2 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                        operator[](local_2c,local_18);
        if (param_1 < *piVar2) {
          iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                            (local_2c,local_18);
          local_28 = *(float *)(iVar1 + 4);
        }
        else {
          for (local_14 = 0; (int)local_14 <= (int)local_18; local_14 = local_14 + 1) {
            piVar2 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                            operator[](local_2c,local_14);
            if (*piVar2 == param_1) {
              iVar1 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                      operator[](local_2c,local_14);
              local_28 = *(float *)(iVar1 + 4);
            }
          }
        }
      }
    }
    local_24 = local_5c[0];
    local_5c[10] = (local_30 - local_5c[0]) + (int)ROUND((float)local_5c[0] * local_28);
    local_5c[0] = (int)ROUND((float)local_5c[0] * local_28);
    local_30 = local_5c[10];
    iVar1 = CMTRand::randInt(*(CMTRand **)this,(ulong *)(local_5c + 10));
    local_1c = 0;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      local_1c = local_1c + local_5c[local_10];
      if (iVar1 <= local_1c) {
        return local_5c[local_10 + 5];
      }
    }
  }
  return 0x5aa7;
}

```

---

## generateUpgrade

```asm
// === 08533676 WongWork::GenerateRandomUpgrade::generateUpgrade  [0x08533676-0x8533931] ===
 8533676:	55                   	push   %ebp
 8533677:	89 e5                	mov    %esp,%ebp
 8533679:	53                   	push   %ebx
 853367a:	83 ec 74             	sub    $0x74,%esp
 853367d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8533680:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8533683:	e8 13 8b b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8533688:	8d 88 28 05 00 00    	lea    0x528(%eax),%ecx
 853368e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8533691:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8533694:	89 54 24 08          	mov    %edx,0x8(%esp)
 8533698:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 853369c:	89 04 24             	mov    %eax,(%esp)
 853369f:	e8 ce 77 00 00       	call   853ae72 <_ZNSt3mapIi15ItemFarmingDataSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85336a4:	83 ec 04             	sub    $0x4,%esp
 85336a7:	e8 ef 8a b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85336ac:	8d 90 28 05 00 00    	lea    0x528(%eax),%edx
 85336b2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85336b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85336b9:	89 04 24             	mov    %eax,(%esp)
 85336bc:	e8 dd 77 00 00       	call   853ae9e <_ZNSt3mapIi15ItemFarmingDataSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85336c1:	83 ec 04             	sub    $0x4,%esp
 85336c4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85336c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85336cb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85336ce:	89 04 24             	mov    %eax,(%esp)
 85336d1:	e8 ee 77 00 00       	call   853aec4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15ItemFarmingDataEEeqERKS4_>
 85336d6:	84 c0                	test   %al,%al
 85336d8:	74 0a                	je     85336e4 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x6e>
 85336da:	bb 00 00 00 00       	mov    $0x0,%ebx
 85336df:	e9 47 02 00 00       	jmp    853392b <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x2b5>
 85336e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85336e7:	89 04 24             	mov    %eax,(%esp)
 85336ea:	e8 e9 77 00 00       	call   853aed8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15ItemFarmingDataEEptEv>
 85336ef:	8b 40 10             	mov    0x10(%eax),%eax
 85336f2:	85 c0                	test   %eax,%eax
 85336f4:	0f 94 c0             	sete   %al
 85336f7:	84 c0                	test   %al,%al
 85336f9:	74 0a                	je     8533705 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x8f>
 85336fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8533700:	e9 26 02 00 00       	jmp    853392b <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x2b5>
 8533705:	e8 91 8a b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853370a:	05 40 05 00 00       	add    $0x540,%eax
 853370f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8533712:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8533717:	89 45 d8             	mov    %eax,-0x28(%ebp)
 853371a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853371d:	89 04 24             	mov    %eax,(%esp)
 8533720:	e8 87 11 c8 ff       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 8533725:	85 c0                	test   %eax,%eax
 8533727:	0f 95 c0             	setne  %al
 853372a:	84 c0                	test   %al,%al
 853372c:	0f 84 d6 00 00 00    	je     8533808 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x192>
 8533732:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8533735:	89 04 24             	mov    %eax,(%esp)
 8533738:	e8 6f 11 c8 ff       	call   81b48ac <_ZNKSt6vectorISt4pairIifESaIS1_EE4sizeEv>
 853373d:	83 e8 01             	sub    $0x1,%eax
 8533740:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8533743:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 853374a:	00 
 853374b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853374e:	89 04 24             	mov    %eax,(%esp)
 8533751:	e8 c2 12 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533756:	8b 00                	mov    (%eax),%eax
 8533758:	3b 45 10             	cmp    0x10(%ebp),%eax
 853375b:	0f 9c c0             	setl   %al
 853375e:	84 c0                	test   %al,%al
 8533760:	74 1e                	je     8533780 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x10a>
 8533762:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8533769:	00 
 853376a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853376d:	89 04 24             	mov    %eax,(%esp)
 8533770:	e8 a3 12 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533775:	8b 40 04             	mov    0x4(%eax),%eax
 8533778:	89 45 d8             	mov    %eax,-0x28(%ebp)
 853377b:	e9 88 00 00 00       	jmp    8533808 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x192>
 8533780:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8533783:	89 44 24 04          	mov    %eax,0x4(%esp)
 8533787:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853378a:	89 04 24             	mov    %eax,(%esp)
 853378d:	e8 86 12 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 8533792:	8b 00                	mov    (%eax),%eax
 8533794:	3b 45 10             	cmp    0x10(%ebp),%eax
 8533797:	0f 9f c0             	setg   %al
 853379a:	84 c0                	test   %al,%al
 853379c:	74 1a                	je     85337b8 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x142>
 853379e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85337a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85337a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85337a8:	89 04 24             	mov    %eax,(%esp)
 85337ab:	e8 68 12 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 85337b0:	8b 40 04             	mov    0x4(%eax),%eax
 85337b3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85337b6:	eb 50                	jmp    8533808 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x192>
 85337b8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85337bf:	eb 3a                	jmp    85337fb <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x185>
 85337c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85337c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85337c8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85337cb:	89 04 24             	mov    %eax,(%esp)
 85337ce:	e8 45 12 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 85337d3:	8b 00                	mov    (%eax),%eax
 85337d5:	3b 45 10             	cmp    0x10(%ebp),%eax
 85337d8:	0f 94 c0             	sete   %al
 85337db:	84 c0                	test   %al,%al
 85337dd:	74 18                	je     85337f7 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x181>
 85337df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85337e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85337e6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85337e9:	89 04 24             	mov    %eax,(%esp)
 85337ec:	e8 27 12 c8 ff       	call   81b4a18 <_ZNSt6vectorISt4pairIifESaIS1_EEixEj>
 85337f1:	8b 40 04             	mov    0x4(%eax),%eax
 85337f4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85337f7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85337fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85337fe:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8533801:	0f 9e c0             	setle  %al
 8533804:	84 c0                	test   %al,%al
 8533806:	75 b9                	jne    85337c1 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x14b>
 8533808:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 853380b:	89 04 24             	mov    %eax,(%esp)
 853380e:	e8 c5 76 00 00       	call   853aed8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15ItemFarmingDataEEptEv>
 8533813:	83 c0 04             	add    $0x4,%eax
 8533816:	89 44 24 04          	mov    %eax,0x4(%esp)
 853381a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 853381d:	89 04 24             	mov    %eax,(%esp)
 8533820:	e8 ed 73 00 00       	call   853ac12 <_ZN15ItemFarmingDataC1ERKS_>
 8533825:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 853382c:	00 
 853382d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8533830:	89 04 24             	mov    %eax,(%esp)
 8533833:	e8 6c 70 bb ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8533838:	8b 40 04             	mov    0x4(%eax),%eax
 853383b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 853383e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8533845:	00 
 8533846:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8533849:	89 04 24             	mov    %eax,(%esp)
 853384c:	e8 53 70 bb ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8533851:	89 c2                	mov    %eax,%edx
 8533853:	db 45 dc             	fildl  -0x24(%ebp)
 8533856:	d8 4d d8             	fmuls  -0x28(%ebp)
 8533859:	d9 7d a6             	fnstcw -0x5a(%ebp)
 853385c:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 8533860:	b4 0c                	mov    $0xc,%ah
 8533862:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8533866:	d9 6d a4             	fldcw  -0x5c(%ebp)
 8533869:	db 5d a0             	fistpl -0x60(%ebp)
 853386c:	d9 6d a6             	fldcw  -0x5a(%ebp)
 853386f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8533872:	89 42 04             	mov    %eax,0x4(%edx)
 8533875:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8533878:	89 c3                	mov    %eax,%ebx
 853387a:	2b 5d dc             	sub    -0x24(%ebp),%ebx
 853387d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8533884:	00 
 8533885:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8533888:	89 04 24             	mov    %eax,(%esp)
 853388b:	e8 14 70 bb ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8533890:	8b 40 04             	mov    0x4(%eax),%eax
 8533893:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8533896:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8533899:	8b 45 c0             	mov    -0x40(%ebp),%eax
 853389c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 853389f:	8b 45 08             	mov    0x8(%ebp),%eax
 85338a2:	8b 00                	mov    (%eax),%eax
 85338a4:	8d 55 d0             	lea    -0x30(%ebp),%edx
 85338a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85338ab:	89 04 24             	mov    %eax,(%esp)
 85338ae:	e8 0b 82 b9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85338b3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85338b6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85338b9:	89 04 24             	mov    %eax,(%esp)
 85338bc:	e8 53 9f ba ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 85338c1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85338c4:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85338cb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85338d2:	eb 3a                	jmp    853390e <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x298>
 85338d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85338d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85338db:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85338de:	89 04 24             	mov    %eax,(%esp)
 85338e1:	e8 be 6f bb ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 85338e6:	8b 40 04             	mov    0x4(%eax),%eax
 85338e9:	01 45 e8             	add    %eax,-0x18(%ebp)
 85338ec:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85338ef:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85338f2:	7c 16                	jl     853390a <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x294>
 85338f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85338f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85338fb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85338fe:	89 04 24             	mov    %eax,(%esp)
 8533901:	e8 9e 6f bb ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8533906:	8b 18                	mov    (%eax),%ebx
 8533908:	eb 16                	jmp    8533920 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x2aa>
 853390a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 853390e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8533911:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8533914:	0f 9c c0             	setl   %al
 8533917:	84 c0                	test   %al,%al
 8533919:	75 b9                	jne    85338d4 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi+0x25e>
 853391b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8533920:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8533923:	89 04 24             	mov    %eax,(%esp)
 8533926:	e8 8f 97 e9 ff       	call   83cd0ba <_ZN15ItemFarmingDataD1Ev>
 853392b:	89 d8                	mov    %ebx,%eax
 853392d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8533930:	c9                   	leave
 8533931:	c3                   	ret

```

```c
// WongWork::GenerateRandomUpgrade::generateUpgrade @ 0x8533676

/* WongWork::GenerateRandomUpgrade::generateUpgrade(ENUM_RARITY, int) */

undefined4 __thiscall
WongWork::GenerateRandomUpgrade::generateUpgrade
          (GenerateRandomUpgrade *this,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  ItemFarmingData local_50 [12];
  ulong local_44;
  _Rb_tree_iterator<std::pair<int_const,ItemFarmingData>> local_40 [4];
  undefined4 local_3c;
  map<int,ItemFarmingData,std::less<int>,std::allocator<std::pair<int_const,ItemFarmingData>>>
  local_38 [4];
  ulong local_34;
  vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_3c = param_2;
  G_CDataManager();
  std::map<int,ItemFarmingData,std::less<int>,std::allocator<std::pair<int_const,ItemFarmingData>>>
  ::find((int *)local_40);
  G_CDataManager();
  std::map<int,ItemFarmingData,std::less<int>,std::allocator<std::pair<int_const,ItemFarmingData>>>
  ::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ItemFarmingData>>::operator==
                    (local_40,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ItemFarmingData>>::operator->(local_40);
    if (*(int *)(iVar2 + 0x10) == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = G_CDataManager();
      local_30 = (vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)
                 (iVar2 + 0x540);
      local_2c = 1.0;
      iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size(local_30)
      ;
      if (iVar2 != 0) {
        iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                          (local_30);
        local_18 = iVar2 - 1;
        piVar3 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                        operator[](local_30,0);
        if (*piVar3 < param_3) {
          iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::operator[]
                            (local_30,0);
          local_2c = *(float *)(iVar2 + 4);
        }
        else {
          piVar3 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                          operator[](local_30,local_18);
          if (param_3 < *piVar3) {
            iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                    operator[](local_30,local_18);
            local_2c = *(float *)(iVar2 + 4);
          }
          else {
            for (local_14 = 0; (int)local_14 <= (int)local_18; local_14 = local_14 + 1) {
              piVar3 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>
                              ::operator[](local_30,local_14);
              if (*piVar3 == param_3) {
                iVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                        operator[](local_30,local_14);
                local_2c = *(float *)(iVar2 + 4);
              }
            }
          }
        }
      }
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ItemFarmingData>>::operator->(local_40);
      ItemFarmingData::ItemFarmingData(local_50,(ItemFarmingData *)(iVar2 + 4));
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,0
                        );
      local_28 = *(int *)(iVar2 + 4);
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,0
                        );
      *(int *)(iVar2 + 4) = (int)ROUND((float)local_28 * local_2c);
      iVar6 = local_44 - local_28;
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,0
                        );
      local_44 = iVar6 + *(int *)(iVar2 + 4);
      local_34 = local_44;
      local_24 = CMTRand::randInt(*(CMTRand **)this,&local_34);
      local_20 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            local_50);
      local_1c = 0;
      for (local_10 = 0; (int)local_10 < local_20; local_10 = local_10 + 1) {
        iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50
                           ,local_10);
        local_1c = local_1c + *(int *)(iVar2 + 4);
        if (local_24 <= local_1c) {
          puVar4 = (undefined4 *)
                   std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              local_50,local_10);
          uVar5 = *puVar4;
          goto LAB_08533920;
        }
      }
      uVar5 = 0;
LAB_08533920:
      ItemFarmingData::~ItemFarmingData(local_50);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## ~GenerateRandomUpgrade

```asm
// === 0853364e WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade  [0x0853364e-0x8533675] ===
 853364e:	55                   	push   %ebp
 853364f:	89 e5                	mov    %esp,%ebp
 8533651:	83 ec 18             	sub    $0x18,%esp
 8533654:	8b 45 08             	mov    0x8(%ebp),%eax
 8533657:	8b 00                	mov    (%eax),%eax
 8533659:	85 c0                	test   %eax,%eax
 853365b:	74 0d                	je     853366a <_ZN8WongWork21GenerateRandomUpgradeD1Ev+0x1c>
 853365d:	8b 45 08             	mov    0x8(%ebp),%eax
 8533660:	8b 00                	mov    (%eax),%eax
 8533662:	89 04 24             	mov    %eax,(%esp)
 8533665:	e8 86 0e 1f 00       	call   87244f0 <_ZdlPv>
 853366a:	8b 45 08             	mov    0x8(%ebp),%eax
 853366d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8533673:	c9                   	leave
 8533674:	c3                   	ret
 8533675:	90                   	nop

```

```c
// WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade @ 0x853364e

/* WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade() */

void __thiscall WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade(GenerateRandomUpgrade *this)

{
  if (*(int *)this != 0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  return;
}

```

