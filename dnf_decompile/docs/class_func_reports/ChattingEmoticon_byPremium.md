# ChattingEmoticon_byPremium

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetEndArrayIndex

```asm
// === 080e5dd4 ChattingEmoticon_byPremium::GetEndArrayIndex  [0x080e5dd4-0x80e5ddd] ===
 80e5dd4:	55                   	push   %ebp
 80e5dd5:	89 e5                	mov    %esp,%ebp
 80e5dd7:	b8 11 00 00 00       	mov    $0x11,%eax
 80e5ddc:	5d                   	pop    %ebp
 80e5ddd:	c3                   	ret

```

```c
// ChattingEmoticon_byPremium::GetEndArrayIndex @ 0x80e5dd4

/* ChattingEmoticon_byPremium::GetEndArrayIndex() const */

undefined4 ChattingEmoticon_byPremium::GetEndArrayIndex(void)

{
  return 0x11;
}

```

---

## GetStartArrayIndex

```asm
// === 080e5dca ChattingEmoticon_byPremium::GetStartArrayIndex  [0x080e5dca-0x80e5dd3] ===
 80e5dca:	55                   	push   %ebp
 80e5dcb:	89 e5                	mov    %esp,%ebp
 80e5dcd:	b8 06 00 00 00       	mov    $0x6,%eax
 80e5dd2:	5d                   	pop    %ebp
 80e5dd3:	c3                   	ret

```

```c
// ChattingEmoticon_byPremium::GetStartArrayIndex @ 0x80e5dca

/* ChattingEmoticon_byPremium::GetStartArrayIndex() const */

undefined4 ChattingEmoticon_byPremium::GetStartArrayIndex(void)

{
  return 6;
}

```

---

## isUsable

```asm
// === 080e5d42 ChattingEmoticon_byPremium::isUsable  [0x080e5d42-0x80e5dc9] ===
 80e5d42:	55                   	push   %ebp
 80e5d43:	89 e5                	mov    %esp,%ebp
 80e5d45:	83 ec 28             	sub    $0x28,%esp
 80e5d48:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5d4b:	8d 50 08             	lea    0x8(%eax),%edx
 80e5d4e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5d51:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5d55:	89 04 24             	mov    %eax,(%esp)
 80e5d58:	e8 09 04 00 00       	call   80e6166 <_ZNKSt3setIiSt4lessIiESaIiEE5beginEv>
 80e5d5d:	83 ec 04             	sub    $0x4,%esp
 80e5d60:	eb 32                	jmp    80e5d94 <_ZNK26ChattingEmoticon_byPremium8isUsableERK5CUser+0x52>
 80e5d62:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5d65:	89 04 24             	mov    %eax,(%esp)
 80e5d68:	e8 3d 04 00 00       	call   80e61aa <_ZNKSt23_Rb_tree_const_iteratorIiEdeEv>
 80e5d6d:	8b 00                	mov    (%eax),%eax
 80e5d6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5d73:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e5d76:	89 04 24             	mov    %eax,(%esp)
 80e5d79:	e8 90 02 00 00       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 80e5d7e:	84 c0                	test   %al,%al
 80e5d80:	74 07                	je     80e5d89 <_ZNK26ChattingEmoticon_byPremium8isUsableERK5CUser+0x47>
 80e5d82:	b8 01 00 00 00       	mov    $0x1,%eax
 80e5d87:	eb 3e                	jmp    80e5dc7 <_ZNK26ChattingEmoticon_byPremium8isUsableERK5CUser+0x85>
 80e5d89:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5d8c:	89 04 24             	mov    %eax,(%esp)
 80e5d8f:	e8 f8 03 00 00       	call   80e618c <_ZNSt23_Rb_tree_const_iteratorIiEppEv>
 80e5d94:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5d97:	8d 50 08             	lea    0x8(%eax),%edx
 80e5d9a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80e5d9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5da1:	89 04 24             	mov    %eax,(%esp)
 80e5da4:	e8 ed 46 ff ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 80e5da9:	83 ec 04             	sub    $0x4,%esp
 80e5dac:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80e5daf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5db3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5db6:	89 04 24             	mov    %eax,(%esp)
 80e5db9:	e8 94 03 00 00       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 80e5dbe:	84 c0                	test   %al,%al
 80e5dc0:	75 a0                	jne    80e5d62 <_ZNK26ChattingEmoticon_byPremium8isUsableERK5CUser+0x20>
 80e5dc2:	b8 00 00 00 00       	mov    $0x0,%eax
 80e5dc7:	c9                   	leave
 80e5dc8:	c3                   	ret
 80e5dc9:	90                   	nop

```

```c
// ChattingEmoticon_byPremium::isUsable @ 0x80e5d42

/* ChattingEmoticon_byPremium::isUsable(CUser const&) const */

undefined4 __thiscall
ChattingEmoticon_byPremium::isUsable(ChattingEmoticon_byPremium *this,CUser *param_1)

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

