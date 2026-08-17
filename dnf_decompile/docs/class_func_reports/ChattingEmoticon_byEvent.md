# ChattingEmoticon_byEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetEndArrayIndex

```asm
// === 080e5d38 ChattingEmoticon_byEvent::GetEndArrayIndex  [0x080e5d38-0x80e5d41] ===
 80e5d38:	55                   	push   %ebp
 80e5d39:	89 e5                	mov    %esp,%ebp
 80e5d3b:	b8 05 00 00 00       	mov    $0x5,%eax
 80e5d40:	5d                   	pop    %ebp
 80e5d41:	c3                   	ret

```

```c
// ChattingEmoticon_byEvent::GetEndArrayIndex @ 0x80e5d38

/* ChattingEmoticon_byEvent::GetEndArrayIndex() const */

undefined4 ChattingEmoticon_byEvent::GetEndArrayIndex(void)

{
  return 5;
}

```

---

## GetStartArrayIndex

```asm
// === 080e5d2e ChattingEmoticon_byEvent::GetStartArrayIndex  [0x080e5d2e-0x80e5d37] ===
 80e5d2e:	55                   	push   %ebp
 80e5d2f:	89 e5                	mov    %esp,%ebp
 80e5d31:	b8 00 00 00 00       	mov    $0x0,%eax
 80e5d36:	5d                   	pop    %ebp
 80e5d37:	c3                   	ret

```

```c
// ChattingEmoticon_byEvent::GetStartArrayIndex @ 0x80e5d2e

/* ChattingEmoticon_byEvent::GetStartArrayIndex() const */

undefined4 ChattingEmoticon_byEvent::GetStartArrayIndex(void)

{
  return 0;
}

```

---

## isUsable

```asm
// === 080e5ca6 ChattingEmoticon_byEvent::isUsable  [0x080e5ca6-0x80e5d2d] ===
 80e5ca6:	55                   	push   %ebp
 80e5ca7:	89 e5                	mov    %esp,%ebp
 80e5ca9:	83 ec 28             	sub    $0x28,%esp
 80e5cac:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5caf:	8d 50 08             	lea    0x8(%eax),%edx
 80e5cb2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5cb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5cb9:	89 04 24             	mov    %eax,(%esp)
 80e5cbc:	e8 a5 04 00 00       	call   80e6166 <_ZNKSt3setIiSt4lessIiESaIiEE5beginEv>
 80e5cc1:	83 ec 04             	sub    $0x4,%esp
 80e5cc4:	eb 32                	jmp    80e5cf8 <_ZNK24ChattingEmoticon_byEvent8isUsableERK5CUser+0x52>
 80e5cc6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5cc9:	89 04 24             	mov    %eax,(%esp)
 80e5ccc:	e8 d9 04 00 00       	call   80e61aa <_ZNKSt23_Rb_tree_const_iteratorIiEdeEv>
 80e5cd1:	8b 00                	mov    (%eax),%eax
 80e5cd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5cd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e5cda:	89 04 24             	mov    %eax,(%esp)
 80e5cdd:	e8 2c 03 00 00       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 80e5ce2:	84 c0                	test   %al,%al
 80e5ce4:	74 07                	je     80e5ced <_ZNK24ChattingEmoticon_byEvent8isUsableERK5CUser+0x47>
 80e5ce6:	b8 01 00 00 00       	mov    $0x1,%eax
 80e5ceb:	eb 3e                	jmp    80e5d2b <_ZNK24ChattingEmoticon_byEvent8isUsableERK5CUser+0x85>
 80e5ced:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5cf0:	89 04 24             	mov    %eax,(%esp)
 80e5cf3:	e8 94 04 00 00       	call   80e618c <_ZNSt23_Rb_tree_const_iteratorIiEppEv>
 80e5cf8:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5cfb:	8d 50 08             	lea    0x8(%eax),%edx
 80e5cfe:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80e5d01:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5d05:	89 04 24             	mov    %eax,(%esp)
 80e5d08:	e8 89 47 ff ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 80e5d0d:	83 ec 04             	sub    $0x4,%esp
 80e5d10:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80e5d13:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5d17:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5d1a:	89 04 24             	mov    %eax,(%esp)
 80e5d1d:	e8 30 04 00 00       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 80e5d22:	84 c0                	test   %al,%al
 80e5d24:	75 a0                	jne    80e5cc6 <_ZNK24ChattingEmoticon_byEvent8isUsableERK5CUser+0x20>
 80e5d26:	b8 00 00 00 00       	mov    $0x0,%eax
 80e5d2b:	c9                   	leave
 80e5d2c:	c3                   	ret
 80e5d2d:	90                   	nop

```

```c
// ChattingEmoticon_byEvent::isUsable @ 0x80e5ca6

/* ChattingEmoticon_byEvent::isUsable(CUser const&) const */

undefined4 __thiscall
ChattingEmoticon_byEvent::isUsable(ChattingEmoticon_byEvent *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  set<int,std::less<int>,std::allocator<int>> local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::begin(local_14);
  while( true ) {
    std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                      ((_Rb_tree_const_iterator<int> *)local_14,(_Rb_tree_const_iterator *)local_10)
    ;
    if (cVar1 == '\0') {
      return 0;
    }
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<int>::operator*((_Rb_tree_const_iterator<int> *)local_14);
    cVar1 = CUser::isAffectedPremium(param_1,*puVar2);
    if (cVar1 != '\0') break;
    std::_Rb_tree_const_iterator<int>::operator++((_Rb_tree_const_iterator<int> *)local_14);
  }
  return 1;
}

```

