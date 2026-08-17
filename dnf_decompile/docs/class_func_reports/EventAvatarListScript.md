# EventAvatarListScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## isfindEventAvatar

```asm
// === 0895e17c EventAvatarListScript::isfindEventAvatar  [0x0895e17c-0x895e1ec] ===
 895e17c:	55                   	push   %ebp
 895e17d:	89 e5                	mov    %esp,%ebp
 895e17f:	83 ec 28             	sub    $0x28,%esp
 895e182:	8b 45 08             	mov    0x8(%ebp),%eax
 895e185:	89 04 24             	mov    %eax,(%esp)
 895e188:	e8 15 8e 8d ff       	call   8236fa2 <_ZNKSt3setIiSt4lessIiESaIiEE5emptyEv>
 895e18d:	84 c0                	test   %al,%al
 895e18f:	74 07                	je     895e198 <_ZN21EventAvatarListScript17isfindEventAvatarEi+0x1c>
 895e191:	b8 00 00 00 00       	mov    $0x0,%eax
 895e196:	eb 53                	jmp    895e1eb <_ZN21EventAvatarListScript17isfindEventAvatarEi+0x6f>
 895e198:	8b 55 08             	mov    0x8(%ebp),%edx
 895e19b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 895e19e:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 895e1a1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 895e1a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 895e1a9:	89 04 24             	mov    %eax,(%esp)
 895e1ac:	e8 c3 c3 77 ff       	call   80da574 <_ZNSt3setIiSt4lessIiESaIiEE4findERKi>
 895e1b1:	83 ec 04             	sub    $0x4,%esp
 895e1b4:	8b 55 08             	mov    0x8(%ebp),%edx
 895e1b7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 895e1ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 895e1be:	89 04 24             	mov    %eax,(%esp)
 895e1c1:	e8 d0 c2 77 ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 895e1c6:	83 ec 04             	sub    $0x4,%esp
 895e1c9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 895e1cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 895e1d0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 895e1d3:	89 04 24             	mov    %eax,(%esp)
 895e1d6:	e8 77 7f 78 ff       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 895e1db:	84 c0                	test   %al,%al
 895e1dd:	74 07                	je     895e1e6 <_ZN21EventAvatarListScript17isfindEventAvatarEi+0x6a>
 895e1df:	b8 01 00 00 00       	mov    $0x1,%eax
 895e1e4:	eb 05                	jmp    895e1eb <_ZN21EventAvatarListScript17isfindEventAvatarEi+0x6f>
 895e1e6:	b8 00 00 00 00       	mov    $0x0,%eax
 895e1eb:	c9                   	leave
 895e1ec:	c3                   	ret

```

```c
// EventAvatarListScript::isfindEventAvatar @ 0x895e17c

/* EventAvatarListScript::isfindEventAvatar(int) */

undefined4 EventAvatarListScript::isfindEventAvatar(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree_const_iterator<int> local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  cVar1 = std::set<int,std::less<int>,std::allocator<int>>::empty
                    ((set<int,std::less<int>,std::allocator<int>> *)param_1);
  if (cVar1 == '\0') {
    std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
    std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

