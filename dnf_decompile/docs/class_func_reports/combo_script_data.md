# combo_script_data

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## clear

```asm
// === 08a5a7f4 combo_script_data::clear  [0x08a5a7f4-0x8a5a81b] ===
 8a5a7f4:	55                   	push   %ebp
 8a5a7f5:	89 e5                	mov    %esp,%ebp
 8a5a7f7:	83 ec 18             	sub    $0x18,%esp
 8a5a7fa:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a7fd:	89 04 24             	mov    %eax,(%esp)
 8a5a800:	e8 3d fb 71 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8a5a805:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a808:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a5a80f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a812:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8a5a819:	c9                   	leave
 8a5a81a:	c3                   	ret
 8a5a81b:	90                   	nop

```

```c
// combo_script_data::clear @ 0x8a5a7f4

/* combo_script_data::clear() */

void __thiscall combo_script_data::clear(combo_script_data *this)

{
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

```

