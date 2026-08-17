# EventRewardSection

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## EventRewardSection

```asm
// === 089154ee EventRewardSection::EventRewardSection  [0x089154ee-0x8915517] ===
 89154ee:	55                   	push   %ebp
 89154ef:	89 e5                	mov    %esp,%ebp
 89154f1:	83 ec 18             	sub    $0x18,%esp
 89154f4:	8b 45 08             	mov    0x8(%ebp),%eax
 89154f7:	83 c0 04             	add    $0x4,%eax
 89154fa:	89 04 24             	mov    %eax,(%esp)
 89154fd:	e8 10 f8 7c ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 8915502:	8b 45 08             	mov    0x8(%ebp),%eax
 8915505:	c6 00 00             	movb   $0x0,(%eax)
 8915508:	8b 45 08             	mov    0x8(%ebp),%eax
 891550b:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 891550f:	8b 45 08             	mov    0x8(%ebp),%eax
 8915512:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 8915516:	c9                   	leave
 8915517:	c3                   	ret

```

```c
// EventRewardSection::EventRewardSection @ 0x89154ee

/* EventRewardSection::EventRewardSection() */

void __thiscall EventRewardSection::EventRewardSection(EventRewardSection *this)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
  *this = (EventRewardSection)0x0;
  this[1] = (EventRewardSection)0x0;
  this[2] = (EventRewardSection)0x0;
  return;
}

```

