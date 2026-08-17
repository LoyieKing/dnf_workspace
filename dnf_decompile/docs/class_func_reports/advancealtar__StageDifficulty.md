# advancealtar__StageDifficulty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getDifficulty

```asm
// === 08899038 advancealtar::StageDifficulty::getDifficulty  [0x08899038-0x88990b9] ===
 8899038:	55                   	push   %ebp
 8899039:	89 e5                	mov    %esp,%ebp
 889903b:	83 ec 18             	sub    $0x18,%esp
 889903e:	c7 44 24 04 a0 52 e0 	movl   $0x8e052a0,0x4(%esp)
 8899045:	08 
 8899046:	8b 45 08             	mov    0x8(%ebp),%eax
 8899049:	89 04 24             	mov    %eax,(%esp)
 889904c:	e8 50 79 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8899051:	84 c0                	test   %al,%al
 8899053:	74 10                	je     8899065 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE+0x2d>
 8899055:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899058:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 889905e:	b8 01 00 00 00       	mov    $0x1,%eax
 8899063:	eb 53                	jmp    88990b8 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE+0x80>
 8899065:	c7 44 24 04 a5 52 e0 	movl   $0x8e052a5,0x4(%esp)
 889906c:	08 
 889906d:	8b 45 08             	mov    0x8(%ebp),%eax
 8899070:	89 04 24             	mov    %eax,(%esp)
 8899073:	e8 29 79 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8899078:	84 c0                	test   %al,%al
 889907a:	74 10                	je     889908c <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE+0x54>
 889907c:	8b 45 0c             	mov    0xc(%ebp),%eax
 889907f:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8899085:	b8 01 00 00 00       	mov    $0x1,%eax
 889908a:	eb 2c                	jmp    88990b8 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE+0x80>
 889908c:	c7 44 24 04 ac 52 e0 	movl   $0x8e052ac,0x4(%esp)
 8899093:	08 
 8899094:	8b 45 08             	mov    0x8(%ebp),%eax
 8899097:	89 04 24             	mov    %eax,(%esp)
 889909a:	e8 02 79 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889909f:	84 c0                	test   %al,%al
 88990a1:	74 10                	je     88990b3 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE+0x7b>
 88990a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 88990a6:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 88990ac:	b8 01 00 00 00       	mov    $0x1,%eax
 88990b1:	eb 05                	jmp    88990b8 <_ZN12advancealtar15StageDifficulty13getDifficultyERKSsRNS0_1TE+0x80>
 88990b3:	b8 00 00 00 00       	mov    $0x0,%eax
 88990b8:	c9                   	leave
 88990b9:	c3                   	ret

```

```c
// advancealtar::StageDifficulty::getDifficulty @ 0x8899038

/* advancealtar::StageDifficulty::getDifficulty(std::string const&,
   advancealtar::StageDifficulty::T&) */

undefined4 advancealtar::StageDifficulty::getDifficulty(string *param_1,T *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==((string *)param_1,"easy");
  if (bVar1) {
    *(undefined4 *)param_2 = 0;
    uVar2 = 1;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"medium");
    if (bVar1) {
      *(undefined4 *)param_2 = 1;
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==((string *)param_1,"hard");
      if (bVar1) {
        *(undefined4 *)param_2 = 2;
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## getNextDifficulty

```asm
// === 0889900a advancealtar::StageDifficulty::getNextDifficulty  [0x0889900a-0x8899037] ===
 889900a:	55                   	push   %ebp
 889900b:	89 e5                	mov    %esp,%ebp
 889900d:	8b 45 08             	mov    0x8(%ebp),%eax
 8899010:	85 c0                	test   %eax,%eax
 8899012:	74 11                	je     8899025 <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE+0x1b>
 8899014:	83 f8 01             	cmp    $0x1,%eax
 8899017:	74 13                	je     889902c <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE+0x22>
 8899019:	83 f8 ff             	cmp    $0xffffffff,%eax
 889901c:	75 15                	jne    8899033 <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE+0x29>
 889901e:	b8 00 00 00 00       	mov    $0x0,%eax
 8899023:	eb 11                	jmp    8899036 <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE+0x2c>
 8899025:	b8 01 00 00 00       	mov    $0x1,%eax
 889902a:	eb 0a                	jmp    8899036 <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE+0x2c>
 889902c:	b8 02 00 00 00       	mov    $0x2,%eax
 8899031:	eb 03                	jmp    8899036 <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE+0x2c>
 8899033:	8b 45 08             	mov    0x8(%ebp),%eax
 8899036:	5d                   	pop    %ebp
 8899037:	c3                   	ret

```

```c
// advancealtar::StageDifficulty::getNextDifficulty @ 0x889900a

/* advancealtar::StageDifficulty::getNextDifficulty(advancealtar::StageDifficulty::T) */

int advancealtar::StageDifficulty::getNextDifficulty(int param_1)

{
  if (param_1 == 0) {
    param_1 = 1;
  }
  else if (param_1 == 1) {
    param_1 = 2;
  }
  else if (param_1 == -1) {
    param_1 = 0;
  }
  return param_1;
}

```

