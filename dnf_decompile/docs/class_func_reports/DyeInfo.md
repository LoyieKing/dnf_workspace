# DyeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## getDyeColorIndex

```asm
// === 0898d37c DyeInfo::getDyeColorIndex  [0x0898d37c-0x898d3c5] ===
 898d37c:	55                   	push   %ebp
 898d37d:	89 e5                	mov    %esp,%ebp
 898d37f:	83 ec 18             	sub    $0x18,%esp
 898d382:	8b 45 08             	mov    0x8(%ebp),%eax
 898d385:	8b 00                	mov    (%eax),%eax
 898d387:	83 f8 01             	cmp    $0x1,%eax
 898d38a:	75 33                	jne    898d3bf <_ZN7DyeInfo16getDyeColorIndexEv+0x43>
 898d38c:	8b 45 08             	mov    0x8(%ebp),%eax
 898d38f:	83 c0 04             	add    $0x4,%eax
 898d392:	89 04 24             	mov    %eax,(%esp)
 898d395:	e8 00 3e 78 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 898d39a:	84 c0                	test   %al,%al
 898d39c:	74 07                	je     898d3a5 <_ZN7DyeInfo16getDyeColorIndexEv+0x29>
 898d39e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 898d3a3:	eb 1f                	jmp    898d3c4 <_ZN7DyeInfo16getDyeColorIndexEv+0x48>
 898d3a5:	8b 45 08             	mov    0x8(%ebp),%eax
 898d3a8:	83 c0 04             	add    $0x4,%eax
 898d3ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 898d3b2:	00 
 898d3b3:	89 04 24             	mov    %eax,(%esp)
 898d3b6:	e8 e9 d4 75 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 898d3bb:	8b 00                	mov    (%eax),%eax
 898d3bd:	eb 05                	jmp    898d3c4 <_ZN7DyeInfo16getDyeColorIndexEv+0x48>
 898d3bf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 898d3c4:	c9                   	leave
 898d3c5:	c3                   	ret

```

```c
// DyeInfo::getDyeColorIndex @ 0x898d37c

/* DyeInfo::getDyeColorIndex() */

undefined4 __thiscall DyeInfo::getDyeColorIndex(DyeInfo *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)this == 1) {
    cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)
               std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                         ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                          (this + 4),0);
      uVar2 = *puVar3;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

