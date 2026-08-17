# tagCompoundAvatarTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## getCompoundAvatarInfo

```asm
// === 08903fcc tagCompoundAvatarTable::getCompoundAvatarInfo  [0x08903fcc-0x8904029] ===
 8903fcc:	55                   	push   %ebp
 8903fcd:	89 e5                	mov    %esp,%ebp
 8903fcf:	83 ec 28             	sub    $0x28,%esp
 8903fd2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8903fd6:	7e 10                	jle    8903fe8 <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x1c>
 8903fd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8903fdb:	89 04 24             	mov    %eax,(%esp)
 8903fde:	e8 2f 04 a3 ff       	call   8334412 <_ZNKSt6vectorI17tagCompoundAvatarSaIS0_EE4sizeEv>
 8903fe3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8903fe6:	7f 07                	jg     8903fef <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x23>
 8903fe8:	b8 01 00 00 00       	mov    $0x1,%eax
 8903fed:	eb 05                	jmp    8903ff4 <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x28>
 8903fef:	b8 00 00 00 00       	mov    $0x0,%eax
 8903ff4:	84 c0                	test   %al,%al
 8903ff6:	74 07                	je     8903fff <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x33>
 8903ff8:	b8 00 00 00 00       	mov    $0x0,%eax
 8903ffd:	eb 29                	jmp    8904028 <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x5c>
 8903fff:	8b 55 0c             	mov    0xc(%ebp),%edx
 8904002:	8b 45 08             	mov    0x8(%ebp),%eax
 8904005:	89 54 24 04          	mov    %edx,0x4(%esp)
 8904009:	89 04 24             	mov    %eax,(%esp)
 890400c:	e8 a9 a5 01 00       	call   891e5ba <_ZNKSt6vectorI17tagCompoundAvatarSaIS0_EE2atEj>
 8904011:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8904014:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8904017:	8b 00                	mov    (%eax),%eax
 8904019:	3b 45 0c             	cmp    0xc(%ebp),%eax
 890401c:	74 07                	je     8904025 <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x59>
 890401e:	b8 00 00 00 00       	mov    $0x0,%eax
 8904023:	eb 03                	jmp    8904028 <_ZNK22tagCompoundAvatarTable21getCompoundAvatarInfoEi+0x5c>
 8904025:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8904028:	c9                   	leave
 8904029:	c3                   	ret

```

```c
// tagCompoundAvatarTable::getCompoundAvatarInfo @ 0x8903fcc

/* tagCompoundAvatarTable::getCompoundAvatarInfo(int) const */

int * __thiscall
tagCompoundAvatarTable::getCompoundAvatarInfo(tagCompoundAvatarTable *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 < 1) ||
     (iVar2 = std::vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>>::size
                        ((vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>> *)this),
     iVar2 <= param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)std::vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>>::at
                              ((vector<tagCompoundAvatar,std::allocator<tagCompoundAvatar>> *)this,
                               param_1);
    if (*piVar3 != param_1) {
      piVar3 = (int *)0x0;
    }
  }
  return piVar3;
}

```

