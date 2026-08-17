# ConditionLevelChkDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## isApplyLevel

```asm
// === 08913a62 ConditionLevelChkDungeon::isApplyLevel  [0x08913a62-0x8913a7d] ===
 8913a62:	55                   	push   %ebp
 8913a63:	89 e5                	mov    %esp,%ebp
 8913a65:	8b 45 08             	mov    0x8(%ebp),%eax
 8913a68:	8b 40 0c             	mov    0xc(%eax),%eax
 8913a6b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8913a6e:	7f 07                	jg     8913a77 <_ZN24ConditionLevelChkDungeon12isApplyLevelEi+0x15>
 8913a70:	b8 01 00 00 00       	mov    $0x1,%eax
 8913a75:	eb 05                	jmp    8913a7c <_ZN24ConditionLevelChkDungeon12isApplyLevelEi+0x1a>
 8913a77:	b8 00 00 00 00       	mov    $0x0,%eax
 8913a7c:	5d                   	pop    %ebp
 8913a7d:	c3                   	ret

```

```c
// ConditionLevelChkDungeon::isApplyLevel @ 0x8913a62

/* ConditionLevelChkDungeon::isApplyLevel(int) */

bool __thiscall ConditionLevelChkDungeon::isApplyLevel(ConditionLevelChkDungeon *this,int param_1)

{
  return *(int *)(this + 0xc) <= param_1;
}

```

---

## isEventDungeon

```asm
// === 089139d4 ConditionLevelChkDungeon::isEventDungeon  [0x089139d4-0x8913a61] ===
 89139d4:	55                   	push   %ebp
 89139d5:	89 e5                	mov    %esp,%ebp
 89139d7:	83 ec 28             	sub    $0x28,%esp
 89139da:	8b 45 08             	mov    0x8(%ebp),%eax
 89139dd:	89 04 24             	mov    %eax,(%esp)
 89139e0:	e8 7b 8f 80 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 89139e5:	84 c0                	test   %al,%al
 89139e7:	74 07                	je     89139f0 <_ZN24ConditionLevelChkDungeon14isEventDungeonEi+0x1c>
 89139e9:	b8 01 00 00 00       	mov    $0x1,%eax
 89139ee:	eb 70                	jmp    8913a60 <_ZN24ConditionLevelChkDungeon14isEventDungeonEi+0x8c>
 89139f0:	8b 55 08             	mov    0x8(%ebp),%edx
 89139f3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 89139f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 89139fa:	89 04 24             	mov    %eax,(%esp)
 89139fd:	e8 46 a8 77 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8913a02:	83 ec 04             	sub    $0x4,%esp
 8913a05:	8b 55 08             	mov    0x8(%ebp),%edx
 8913a08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8913a0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8913a0f:	89 04 24             	mov    %eax,(%esp)
 8913a12:	e8 55 a8 77 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8913a17:	83 ec 04             	sub    $0x4,%esp
 8913a1a:	eb 29                	jmp    8913a45 <_ZN24ConditionLevelChkDungeon14isEventDungeonEi+0x71>
 8913a1c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8913a1f:	89 04 24             	mov    %eax,(%esp)
 8913a22:	e8 a5 ad 77 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 8913a27:	8b 00                	mov    (%eax),%eax
 8913a29:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8913a2c:	0f 94 c0             	sete   %al
 8913a2f:	84 c0                	test   %al,%al
 8913a31:	74 07                	je     8913a3a <_ZN24ConditionLevelChkDungeon14isEventDungeonEi+0x66>
 8913a33:	b8 00 00 00 00       	mov    $0x0,%eax
 8913a38:	eb 26                	jmp    8913a60 <_ZN24ConditionLevelChkDungeon14isEventDungeonEi+0x8c>
 8913a3a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8913a3d:	89 04 24             	mov    %eax,(%esp)
 8913a40:	e8 47 6f 7d ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 8913a45:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8913a48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8913a4c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8913a4f:	89 04 24             	mov    %eax,(%esp)
 8913a52:	e8 0b 6a 7d ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8913a57:	84 c0                	test   %al,%al
 8913a59:	75 c1                	jne    8913a1c <_ZN24ConditionLevelChkDungeon14isEventDungeonEi+0x48>
 8913a5b:	b8 01 00 00 00       	mov    $0x1,%eax
 8913a60:	c9                   	leave
 8913a61:	c3                   	ret

```

```c
// ConditionLevelChkDungeon::isEventDungeon @ 0x89139d4

/* ConditionLevelChkDungeon::isEventDungeon(int) */

undefined4 __thiscall
ConditionLevelChkDungeon::isEventDungeon(ConditionLevelChkDungeon *this,int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_10 [12];
  
  cVar1 = std::vector<int,std::allocator<int>>::empty();
  if (cVar1 == '\0') {
    std::vector<int,std::allocator<int>>::begin();
    std::vector<int,std::allocator<int>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_10,local_14), bVar2) {
      piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_10);
      if (*piVar3 == param_1) {
        return 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_10);
    }
  }
  return 1;
}

```

