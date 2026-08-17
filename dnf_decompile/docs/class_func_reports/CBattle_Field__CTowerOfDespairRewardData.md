# CBattle_Field__CTowerOfDespairRewardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## reset_tod

```asm
// === 083071a6 CBattle_Field::CTowerOfDespairRewardData::reset_tod  [0x083071a6-0x83071b9] ===
 83071a6:	55                   	push   %ebp
 83071a7:	89 e5                	mov    %esp,%ebp
 83071a9:	83 ec 18             	sub    $0x18,%esp
 83071ac:	8b 45 08             	mov    0x8(%ebp),%eax
 83071af:	89 04 24             	mov    %eax,(%esp)
 83071b2:	e8 8b 31 e7 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 83071b7:	c9                   	leave
 83071b8:	c3                   	ret
 83071b9:	90                   	nop

```

```c
// CBattle_Field::CTowerOfDespairRewardData::reset_tod @ 0x83071a6

/* CBattle_Field::CTowerOfDespairRewardData::reset_tod() */

void __thiscall CBattle_Field::CTowerOfDespairRewardData::reset_tod(CTowerOfDespairRewardData *this)

{
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)this);
  return;
}

```

