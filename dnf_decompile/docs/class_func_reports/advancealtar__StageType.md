# advancealtar__StageType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## getStageType

```asm
// === 088990ba advancealtar::StageType::getStageType  [0x088990ba-0x889911d] ===
 88990ba:	55                   	push   %ebp
 88990bb:	89 e5                	mov    %esp,%ebp
 88990bd:	83 ec 18             	sub    $0x18,%esp
 88990c0:	c7 44 24 04 b1 52 e0 	movl   $0x8e052b1,0x4(%esp)
 88990c7:	08 
 88990c8:	8b 45 08             	mov    0x8(%ebp),%eax
 88990cb:	89 04 24             	mov    %eax,(%esp)
 88990ce:	e8 ce 78 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88990d3:	84 c0                	test   %al,%al
 88990d5:	74 10                	je     88990e7 <_ZN12advancealtar9StageType12getStageTypeERKSsRNS0_1TE+0x2d>
 88990d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 88990da:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88990e0:	b8 01 00 00 00       	mov    $0x1,%eax
 88990e5:	eb 35                	jmp    889911c <_ZN12advancealtar9StageType12getStageTypeERKSsRNS0_1TE+0x62>
 88990e7:	c7 44 24 04 b8 52 e0 	movl   $0x8e052b8,0x4(%esp)
 88990ee:	08 
 88990ef:	8b 45 08             	mov    0x8(%ebp),%eax
 88990f2:	89 04 24             	mov    %eax,(%esp)
 88990f5:	e8 a7 78 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88990fa:	84 c0                	test   %al,%al
 88990fc:	74 10                	je     889910e <_ZN12advancealtar9StageType12getStageTypeERKSsRNS0_1TE+0x54>
 88990fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899101:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8899107:	b8 01 00 00 00       	mov    $0x1,%eax
 889910c:	eb 0e                	jmp    889911c <_ZN12advancealtar9StageType12getStageTypeERKSsRNS0_1TE+0x62>
 889910e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8899111:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899117:	b8 01 00 00 00       	mov    $0x1,%eax
 889911c:	c9                   	leave
 889911d:	c3                   	ret

```

```c
// advancealtar::StageType::getStageType @ 0x88990ba

/* advancealtar::StageType::getStageType(std::string const&, advancealtar::StageType::T&) */

undefined4 advancealtar::StageType::getStageType(string *param_1,T *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==((string *)param_1,"normal");
  if (bVar1) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"survival");
    if (bVar1) {
      *(undefined4 *)param_2 = 1;
    }
    else {
      *(undefined4 *)param_2 = 0;
    }
  }
  return 1;
}

```

