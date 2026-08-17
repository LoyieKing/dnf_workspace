# ChattingEmoticon_byLevel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GetEndArrayIndex

```asm
// === 080e5e76 ChattingEmoticon_byLevel::GetEndArrayIndex  [0x080e5e76-0x80e5e7f] ===
 80e5e76:	55                   	push   %ebp
 80e5e77:	89 e5                	mov    %esp,%ebp
 80e5e79:	b8 17 00 00 00       	mov    $0x17,%eax
 80e5e7e:	5d                   	pop    %ebp
 80e5e7f:	c3                   	ret

```

```c
// ChattingEmoticon_byLevel::GetEndArrayIndex @ 0x80e5e76

/* ChattingEmoticon_byLevel::GetEndArrayIndex() const */

undefined4 ChattingEmoticon_byLevel::GetEndArrayIndex(void)

{
  return 0x17;
}

```

---

## GetStartArrayIndex

```asm
// === 080e5e6c ChattingEmoticon_byLevel::GetStartArrayIndex  [0x080e5e6c-0x80e5e75] ===
 80e5e6c:	55                   	push   %ebp
 80e5e6d:	89 e5                	mov    %esp,%ebp
 80e5e6f:	b8 12 00 00 00       	mov    $0x12,%eax
 80e5e74:	5d                   	pop    %ebp
 80e5e75:	c3                   	ret

```

```c
// ChattingEmoticon_byLevel::GetStartArrayIndex @ 0x80e5e6c

/* ChattingEmoticon_byLevel::GetStartArrayIndex() const */

undefined4 ChattingEmoticon_byLevel::GetStartArrayIndex(void)

{
  return 0x12;
}

```

---

## isCommonEmoticon

```asm
// === 080e5e80 ChattingEmoticon_byLevel::isCommonEmoticon  [0x080e5e80-0x80e5e89] ===
 80e5e80:	55                   	push   %ebp
 80e5e81:	89 e5                	mov    %esp,%ebp
 80e5e83:	b8 01 00 00 00       	mov    $0x1,%eax
 80e5e88:	5d                   	pop    %ebp
 80e5e89:	c3                   	ret

```

```c
// ChattingEmoticon_byLevel::isCommonEmoticon @ 0x80e5e80

/* ChattingEmoticon_byLevel::isCommonEmoticon(CUser const&) const */

undefined4 ChattingEmoticon_byLevel::isCommonEmoticon(CUser *param_1)

{
  return 1;
}

```

---

## isUsable

```asm
// === 080e5e4e ChattingEmoticon_byLevel::isUsable  [0x080e5e4e-0x80e5e6b] ===
 80e5e4e:	55                   	push   %ebp
 80e5e4f:	89 e5                	mov    %esp,%ebp
 80e5e51:	83 ec 18             	sub    $0x18,%esp
 80e5e54:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e5e57:	89 04 24             	mov    %eax,(%esp)
 80e5e5a:	e8 59 44 ff ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80e5e5f:	8b 55 08             	mov    0x8(%ebp),%edx
 80e5e62:	8b 52 20             	mov    0x20(%edx),%edx
 80e5e65:	39 d0                	cmp    %edx,%eax
 80e5e67:	0f 9d c0             	setge  %al
 80e5e6a:	c9                   	leave
 80e5e6b:	c3                   	ret

```

```c
// ChattingEmoticon_byLevel::isUsable @ 0x80e5e4e

/* ChattingEmoticon_byLevel::isUsable(CUser const&) const */

bool __thiscall ChattingEmoticon_byLevel::isUsable(ChattingEmoticon_byLevel *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  return *(int *)(this + 0x20) <= iVar1;
}

```

