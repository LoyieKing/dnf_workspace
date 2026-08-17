# upgrade_table_t__MachineFrameInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## MachineFrameInfo

```asm
// === 089003b4 upgrade_table_t::MachineFrameInfo::MachineFrameInfo  [0x089003b4-0x89003ed] ===
 89003b4:	55                   	push   %ebp
 89003b5:	89 e5                	mov    %esp,%ebp
 89003b7:	8b 45 08             	mov    0x8(%ebp),%eax
 89003ba:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89003bf:	89 10                	mov    %edx,(%eax)
 89003c1:	8b 45 08             	mov    0x8(%ebp),%eax
 89003c4:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89003c9:	89 50 04             	mov    %edx,0x4(%eax)
 89003cc:	8b 45 08             	mov    0x8(%ebp),%eax
 89003cf:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89003d4:	89 50 08             	mov    %edx,0x8(%eax)
 89003d7:	8b 45 08             	mov    0x8(%ebp),%eax
 89003da:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89003df:	89 50 0c             	mov    %edx,0xc(%eax)
 89003e2:	8b 45 08             	mov    0x8(%ebp),%eax
 89003e5:	c7 40 10 02 00 00 00 	movl   $0x2,0x10(%eax)
 89003ec:	5d                   	pop    %ebp
 89003ed:	c3                   	ret

```

```c
// upgrade_table_t::MachineFrameInfo::MachineFrameInfo @ 0x89003b4

/* upgrade_table_t::MachineFrameInfo::MachineFrameInfo() */

void __thiscall upgrade_table_t::MachineFrameInfo::MachineFrameInfo(MachineFrameInfo *this)

{
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 2;
  return;
}

```

