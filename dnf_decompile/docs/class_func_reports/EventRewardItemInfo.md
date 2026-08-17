# EventRewardItemInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## EventRewardItemInfo

```asm
// === 0891548a EventRewardItemInfo::EventRewardItemInfo  [0x0891548a-0x89154bb] ===
 891548a:	55                   	push   %ebp
 891548b:	89 e5                	mov    %esp,%ebp
 891548d:	83 ec 18             	sub    $0x18,%esp
 8915490:	8b 45 08             	mov    0x8(%ebp),%eax
 8915493:	83 c0 0c             	add    $0xc,%eax
 8915496:	89 04 24             	mov    %eax,(%esp)
 8915499:	e8 0e 8d 77 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 891549e:	8b 45 08             	mov    0x8(%ebp),%eax
 89154a1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 89154a7:	8b 45 08             	mov    0x8(%ebp),%eax
 89154aa:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 89154b1:	8b 45 08             	mov    0x8(%ebp),%eax
 89154b4:	66 c7 40 08 00 00    	movw   $0x0,0x8(%eax)
 89154ba:	c9                   	leave
 89154bb:	c3                   	ret

```

```c
// EventRewardItemInfo::EventRewardItemInfo @ 0x891548a

/* EventRewardItemInfo::EventRewardItemInfo() */

void __thiscall EventRewardItemInfo::EventRewardItemInfo(EventRewardItemInfo *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  return;
}

```

---

## clear

```asm
// === 089154bc EventRewardItemInfo::clear  [0x089154bc-0x89154ed] ===
 89154bc:	55                   	push   %ebp
 89154bd:	89 e5                	mov    %esp,%ebp
 89154bf:	83 ec 18             	sub    $0x18,%esp
 89154c2:	8b 45 08             	mov    0x8(%ebp),%eax
 89154c5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 89154cb:	8b 45 08             	mov    0x8(%ebp),%eax
 89154ce:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 89154d5:	8b 45 08             	mov    0x8(%ebp),%eax
 89154d8:	66 c7 40 08 00 00    	movw   $0x0,0x8(%eax)
 89154de:	8b 45 08             	mov    0x8(%ebp),%eax
 89154e1:	83 c0 0c             	add    $0xc,%eax
 89154e4:	89 04 24             	mov    %eax,(%esp)
 89154e7:	e8 82 16 78 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 89154ec:	c9                   	leave
 89154ed:	c3                   	ret

```

```c
// EventRewardItemInfo::clear @ 0x89154bc

/* EventRewardItemInfo::clear() */

void __thiscall EventRewardItemInfo::clear(EventRewardItemInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  return;
}

```

