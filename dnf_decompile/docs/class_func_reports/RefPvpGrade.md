# RefPvpGrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## Clear

```asm
// === 085d4722 RefPvpGrade::Clear  [0x085d4722-0x85d4767] ===
 85d4722:	55                   	push   %ebp
 85d4723:	89 e5                	mov    %esp,%ebp
 85d4725:	83 ec 10             	sub    $0x10,%esp
 85d4728:	8b 45 08             	mov    0x8(%ebp),%eax
 85d472b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85d4731:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d4738:	eb 20                	jmp    85d475a <_ZN11RefPvpGrade5ClearEv+0x38>
 85d473a:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d473d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4740:	c7 44 d0 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,8)
 85d4747:	00 
 85d4748:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d474b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d474e:	c7 44 d0 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,8)
 85d4755:	00 
 85d4756:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d475a:	83 7d fc 25          	cmpl   $0x25,-0x4(%ebp)
 85d475e:	0f 9e c0             	setle  %al
 85d4761:	84 c0                	test   %al,%al
 85d4763:	75 d5                	jne    85d473a <_ZN11RefPvpGrade5ClearEv+0x18>
 85d4765:	c9                   	leave
 85d4766:	c3                   	ret
 85d4767:	90                   	nop

```

```c
// RefPvpGrade::Clear @ 0x85d4722

/* RefPvpGrade::Clear() */

void __thiscall RefPvpGrade::Clear(RefPvpGrade *this)

{
  int local_8;
  
  *(undefined4 *)this = 0;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 8 + 4) = 0;
    *(undefined4 *)(this + local_8 * 8 + 8) = 0;
  }
  return;
}

```

---

## GetLastGrade

```asm
// === 085d478e RefPvpGrade::GetLastGrade  [0x085d478e-0x85d4797] ===
 85d478e:	55                   	push   %ebp
 85d478f:	89 e5                	mov    %esp,%ebp
 85d4791:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4794:	8b 00                	mov    (%eax),%eax
 85d4796:	5d                   	pop    %ebp
 85d4797:	c3                   	ret

```

```c
// RefPvpGrade::GetLastGrade @ 0x85d478e

/* RefPvpGrade::GetLastGrade() const */

undefined4 __thiscall RefPvpGrade::GetLastGrade(RefPvpGrade *this)

{
  return *(undefined4 *)this;
}

```

---

## GetPvpCurrRankPoint

```asm
// === 085d4880 RefPvpGrade::GetPvpCurrRankPoint  [0x085d4880-0x85d489f] ===
 85d4880:	55                   	push   %ebp
 85d4881:	89 e5                	mov    %esp,%ebp
 85d4883:	83 7d 0c 25          	cmpl   $0x25,0xc(%ebp)
 85d4887:	7e 0b                	jle    85d4894 <_ZNK11RefPvpGrade19GetPvpCurrRankPointEi+0x14>
 85d4889:	8b 45 08             	mov    0x8(%ebp),%eax
 85d488c:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 85d4892:	eb 0a                	jmp    85d489e <_ZNK11RefPvpGrade19GetPvpCurrRankPointEi+0x1e>
 85d4894:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4897:	8b 45 08             	mov    0x8(%ebp),%eax
 85d489a:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 85d489e:	5d                   	pop    %ebp
 85d489f:	c3                   	ret

```

```c
// RefPvpGrade::GetPvpCurrRankPoint @ 0x85d4880

/* RefPvpGrade::GetPvpCurrRankPoint(int) const */

undefined4 __thiscall RefPvpGrade::GetPvpCurrRankPoint(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x26) {
    uVar1 = *(undefined4 *)(this + param_1 * 8 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(this + 300);
  }
  return uVar1;
}

```

---

## GetPvpGrade

```asm
// === 085d47ce RefPvpGrade::GetPvpGrade  [0x085d47ce-0x85d4831] ===
 85d47ce:	55                   	push   %ebp
 85d47cf:	89 e5                	mov    %esp,%ebp
 85d47d1:	83 ec 14             	sub    $0x14,%esp
 85d47d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d47d7:	8b 40 0c             	mov    0xc(%eax),%eax
 85d47da:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d47dd:	7e 07                	jle    85d47e6 <_ZNK11RefPvpGrade11GetPvpGradeEi+0x18>
 85d47df:	b8 00 00 00 00       	mov    $0x0,%eax
 85d47e4:	eb 4a                	jmp    85d4830 <_ZNK11RefPvpGrade11GetPvpGradeEi+0x62>
 85d47e6:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 85d47ed:	eb 27                	jmp    85d4816 <_ZNK11RefPvpGrade11GetPvpGradeEi+0x48>
 85d47ef:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d47f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d47f5:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 85d47f9:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d47fc:	7d 14                	jge    85d4812 <_ZNK11RefPvpGrade11GetPvpGradeEi+0x44>
 85d47fe:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d4801:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4804:	8b 44 d0 08          	mov    0x8(%eax,%edx,8),%eax
 85d4808:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d480b:	7c 05                	jl     85d4812 <_ZNK11RefPvpGrade11GetPvpGradeEi+0x44>
 85d480d:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85d4810:	eb 1e                	jmp    85d4830 <_ZNK11RefPvpGrade11GetPvpGradeEi+0x62>
 85d4812:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d4816:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4819:	89 04 24             	mov    %eax,(%esp)
 85d481c:	e8 6d ff ff ff       	call   85d478e <_ZNK11RefPvpGrade12GetLastGradeEv>
 85d4821:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 85d4824:	0f 9f c0             	setg   %al
 85d4827:	84 c0                	test   %al,%al
 85d4829:	75 c4                	jne    85d47ef <_ZNK11RefPvpGrade11GetPvpGradeEi+0x21>
 85d482b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d4830:	c9                   	leave
 85d4831:	c3                   	ret

```

```c
// RefPvpGrade::GetPvpGrade @ 0x85d47ce

/* RefPvpGrade::GetPvpGrade(int) const */

int __thiscall RefPvpGrade::GetPvpGrade(RefPvpGrade *this,int param_1)

{
  int iVar1;
  int local_8;
  
  if (param_1 < *(int *)(this + 0xc)) {
    iVar1 = 0;
  }
  else {
    for (local_8 = 1; iVar1 = GetLastGrade(this), local_8 < iVar1; local_8 = local_8 + 1) {
      if ((*(int *)(this + local_8 * 8 + 4) < param_1) &&
         (param_1 <= *(int *)(this + local_8 * 8 + 8))) {
        return local_8;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}

```

---

## GetPvpNextRankPoint

```asm
// === 085d4860 RefPvpGrade::GetPvpNextRankPoint  [0x085d4860-0x85d487f] ===
 85d4860:	55                   	push   %ebp
 85d4861:	89 e5                	mov    %esp,%ebp
 85d4863:	83 7d 0c 25          	cmpl   $0x25,0xc(%ebp)
 85d4867:	7e 0b                	jle    85d4874 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi+0x14>
 85d4869:	8b 45 08             	mov    0x8(%ebp),%eax
 85d486c:	8b 80 30 01 00 00    	mov    0x130(%eax),%eax
 85d4872:	eb 0a                	jmp    85d487e <_ZNK11RefPvpGrade19GetPvpNextRankPointEi+0x1e>
 85d4874:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4877:	8b 45 08             	mov    0x8(%ebp),%eax
 85d487a:	8b 44 d0 08          	mov    0x8(%eax,%edx,8),%eax
 85d487e:	5d                   	pop    %ebp
 85d487f:	c3                   	ret

```

```c
// RefPvpGrade::GetPvpNextRankPoint @ 0x85d4860

/* RefPvpGrade::GetPvpNextRankPoint(int) const */

undefined4 __thiscall RefPvpGrade::GetPvpNextRankPoint(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x26) {
    uVar1 = *(undefined4 *)(this + param_1 * 8 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x130);
  }
  return uVar1;
}

```

---

## GetPvpPoint

```asm
// === 085d4832 RefPvpGrade::GetPvpPoint  [0x085d4832-0x85d485f] ===
 85d4832:	55                   	push   %ebp
 85d4833:	89 e5                	mov    %esp,%ebp
 85d4835:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d4839:	7f 07                	jg     85d4842 <_ZNK11RefPvpGrade11GetPvpPointEi+0x10>
 85d483b:	b8 00 00 00 00       	mov    $0x0,%eax
 85d4840:	eb 1b                	jmp    85d485d <_ZNK11RefPvpGrade11GetPvpPointEi+0x2b>
 85d4842:	83 7d 0c 25          	cmpl   $0x25,0xc(%ebp)
 85d4846:	7e 0b                	jle    85d4853 <_ZNK11RefPvpGrade11GetPvpPointEi+0x21>
 85d4848:	8b 45 08             	mov    0x8(%ebp),%eax
 85d484b:	8b 80 2c 01 00 00    	mov    0x12c(%eax),%eax
 85d4851:	eb 0a                	jmp    85d485d <_ZNK11RefPvpGrade11GetPvpPointEi+0x2b>
 85d4853:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4856:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4859:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 85d485d:	5d                   	pop    %ebp
 85d485e:	c3                   	ret
 85d485f:	90                   	nop

```

```c
// RefPvpGrade::GetPvpPoint @ 0x85d4832

/* RefPvpGrade::GetPvpPoint(int) const */

undefined4 __thiscall RefPvpGrade::GetPvpPoint(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else if (param_1 < 0x26) {
    uVar1 = *(undefined4 *)(this + param_1 * 8 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(this + 300);
  }
  return uVar1;
}

```

---

## RefPvpGrade

```asm
// === 085d46e6 RefPvpGrade::RefPvpGrade  [0x085d46e6-0x85d4709] ===
 85d46e6:	55                   	push   %ebp
 85d46e7:	89 e5                	mov    %esp,%ebp
 85d46e9:	83 ec 18             	sub    $0x18,%esp
 85d46ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85d46ef:	05 40 01 00 00       	add    $0x140,%eax
 85d46f4:	89 04 24             	mov    %eax,(%esp)
 85d46f7:	e8 b0 9a ab ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85d46fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d46ff:	89 04 24             	mov    %eax,(%esp)
 85d4702:	e8 1b 00 00 00       	call   85d4722 <_ZN11RefPvpGrade5ClearEv>
 85d4707:	c9                   	leave
 85d4708:	c3                   	ret
 85d4709:	90                   	nop

```

```c
// RefPvpGrade::RefPvpGrade @ 0x85d46e6

/* RefPvpGrade::RefPvpGrade() */

void __thiscall RefPvpGrade::RefPvpGrade(RefPvpGrade *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x140));
  Clear(this);
  return;
}

```

---

## SetLastGrade

```asm
// === 085d4768 RefPvpGrade::SetLastGrade  [0x085d4768-0x85d478d] ===
 85d4768:	55                   	push   %ebp
 85d4769:	89 e5                	mov    %esp,%ebp
 85d476b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d476f:	78 06                	js     85d4777 <_ZN11RefPvpGrade12SetLastGradeEi+0xf>
 85d4771:	83 7d 0c 26          	cmpl   $0x26,0xc(%ebp)
 85d4775:	7e 07                	jle    85d477e <_ZN11RefPvpGrade12SetLastGradeEi+0x16>
 85d4777:	b8 00 00 00 00       	mov    $0x0,%eax
 85d477c:	eb 0d                	jmp    85d478b <_ZN11RefPvpGrade12SetLastGradeEi+0x23>
 85d477e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4781:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d4784:	89 10                	mov    %edx,(%eax)
 85d4786:	b8 01 00 00 00       	mov    $0x1,%eax
 85d478b:	5d                   	pop    %ebp
 85d478c:	c3                   	ret
 85d478d:	90                   	nop

```

```c
// RefPvpGrade::SetLastGrade @ 0x85d4768

/* RefPvpGrade::SetLastGrade(int) */

undefined4 __thiscall RefPvpGrade::SetLastGrade(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x26 < param_1)) {
    uVar1 = 0;
  }
  else {
    *(int *)this = param_1;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## SetPvpGrade

```asm
// === 085d4798 RefPvpGrade::SetPvpGrade  [0x085d4798-0x85d47cd] ===
 85d4798:	55                   	push   %ebp
 85d4799:	89 e5                	mov    %esp,%ebp
 85d479b:	53                   	push   %ebx
 85d479c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d47a0:	78 06                	js     85d47a8 <_ZN11RefPvpGrade11SetPvpGradeEiRKNS_15RefPvpGradeDataE+0x10>
 85d47a2:	83 7d 0c 25          	cmpl   $0x25,0xc(%ebp)
 85d47a6:	7e 07                	jle    85d47af <_ZN11RefPvpGrade11SetPvpGradeEiRKNS_15RefPvpGradeDataE+0x17>
 85d47a8:	b8 00 00 00 00       	mov    $0x0,%eax
 85d47ad:	eb 1b                	jmp    85d47ca <_ZN11RefPvpGrade11SetPvpGradeEiRKNS_15RefPvpGradeDataE+0x32>
 85d47af:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85d47b2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85d47b5:	8b 45 10             	mov    0x10(%ebp),%eax
 85d47b8:	8b 50 04             	mov    0x4(%eax),%edx
 85d47bb:	8b 00                	mov    (%eax),%eax
 85d47bd:	89 44 d9 04          	mov    %eax,0x4(%ecx,%ebx,8)
 85d47c1:	89 54 d9 08          	mov    %edx,0x8(%ecx,%ebx,8)
 85d47c5:	b8 01 00 00 00       	mov    $0x1,%eax
 85d47ca:	5b                   	pop    %ebx
 85d47cb:	5d                   	pop    %ebp
 85d47cc:	c3                   	ret
 85d47cd:	90                   	nop

```

```c
// RefPvpGrade::SetPvpGrade @ 0x85d4798

/* RefPvpGrade::SetPvpGrade(int, RefPvpGrade::RefPvpGradeData const&) */

undefined4 __thiscall
RefPvpGrade::SetPvpGrade(RefPvpGrade *this,int param_1,RefPvpGradeData *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x25 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + param_1 * 8 + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + param_1 * 8 + 8) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## set

```asm
// === 085d48a0 RefPvpGrade::set  [0x085d48a0-0x85d48ef] ===
 85d48a0:	55                   	push   %ebp
 85d48a1:	89 e5                	mov    %esp,%ebp
 85d48a3:	83 ec 18             	sub    $0x18,%esp
 85d48a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d48a9:	8b 50 10             	mov    0x10(%eax),%edx
 85d48ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85d48af:	89 90 34 01 00 00    	mov    %edx,0x134(%eax)
 85d48b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d48b8:	8b 50 14             	mov    0x14(%eax),%edx
 85d48bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d48be:	89 90 38 01 00 00    	mov    %edx,0x138(%eax)
 85d48c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d48c7:	8b 50 18             	mov    0x18(%eax),%edx
 85d48ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85d48cd:	89 90 3c 01 00 00    	mov    %edx,0x13c(%eax)
 85d48d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d48d6:	8d 50 1c             	lea    0x1c(%eax),%edx
 85d48d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d48dc:	05 40 01 00 00       	add    $0x140,%eax
 85d48e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d48e5:	89 04 24             	mov    %eax,(%esp)
 85d48e8:	e8 e5 86 af ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 85d48ed:	c9                   	leave
 85d48ee:	c3                   	ret
 85d48ef:	90                   	nop

```

```c
// RefPvpGrade::set @ 0x85d48a0

/* RefPvpGrade::set(stPvpRefTable_t const&) */

void __thiscall RefPvpGrade::set(RefPvpGrade *this,stPvpRefTable_t *param_1)

{
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x18);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x140),(vector *)(param_1 + 0x1c));
  return;
}

```

---

## ~RefPvpGrade

```asm
// === 085d470a RefPvpGrade::~RefPvpGrade  [0x085d470a-0x85d4721] ===
 85d470a:	55                   	push   %ebp
 85d470b:	89 e5                	mov    %esp,%ebp
 85d470d:	83 ec 18             	sub    $0x18,%esp
 85d4710:	8b 45 08             	mov    0x8(%ebp),%eax
 85d4713:	05 40 01 00 00       	add    $0x140,%eax
 85d4718:	89 04 24             	mov    %eax,(%esp)
 85d471b:	e8 ba f6 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85d4720:	c9                   	leave
 85d4721:	c3                   	ret

```

```c
// RefPvpGrade::~RefPvpGrade @ 0x85d470a

/* RefPvpGrade::~RefPvpGrade() */

void __thiscall RefPvpGrade::~RefPvpGrade(RefPvpGrade *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x140));
  return;
}

```

