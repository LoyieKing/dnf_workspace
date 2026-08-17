# MissionParameterScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## clear

```asm
// === 08a5bca2 MissionParameterScript::clear  [0x08a5bca2-0x8a5bce4] ===
 8a5bca2:	55                   	push   %ebp
 8a5bca3:	89 e5                	mov    %esp,%ebp
 8a5bca5:	83 ec 18             	sub    $0x18,%esp
 8a5bca8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bcab:	89 04 24             	mov    %eax,(%esp)
 8a5bcae:	e8 ff be af ff       	call   8557bb2 <_ZNSt6vectorIjSaIjEE5clearEv>
 8a5bcb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bcb6:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a5bcbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bcc0:	83 c0 10             	add    $0x10,%eax
 8a5bcc3:	89 04 24             	mov    %eax,(%esp)
 8a5bcc6:	e8 89 03 00 00       	call   8a5c054 <_ZNSt4listISt4pairIjjESaIS1_EE5clearEv>
 8a5bccb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bcce:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8a5bcd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bcd8:	83 c0 1c             	add    $0x1c,%eax
 8a5bcdb:	89 04 24             	mov    %eax,(%esp)
 8a5bcde:	e8 cf be af ff       	call   8557bb2 <_ZNSt6vectorIjSaIjEE5clearEv>
 8a5bce3:	c9                   	leave
 8a5bce4:	c3                   	ret

```

```c
// MissionParameterScript::clear @ 0x8a5bca2

/* MissionParameterScript::clear() */

void __thiscall MissionParameterScript::clear(MissionParameterScript *this)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  clear((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
         *)(this + 0x10));
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x1c));
  return;
}

```

