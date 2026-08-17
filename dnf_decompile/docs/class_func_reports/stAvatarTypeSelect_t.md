# stAvatarTypeSelect_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## init

```asm
// === 0898d1fc stAvatarTypeSelect_t::init  [0x0898d1fc-0x898d25d] ===
 898d1fc:	55                   	push   %ebp
 898d1fd:	89 e5                	mov    %esp,%ebp
 898d1ff:	83 ec 10             	sub    $0x10,%esp
 898d202:	8b 45 08             	mov    0x8(%ebp),%eax
 898d205:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 898d20b:	8b 45 08             	mov    0x8(%ebp),%eax
 898d20e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 898d215:	8b 45 08             	mov    0x8(%ebp),%eax
 898d218:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 898d21f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d222:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 898d229:	8b 45 08             	mov    0x8(%ebp),%eax
 898d22c:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 898d233:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 898d23a:	eb 14                	jmp    898d250 <_ZN20stAvatarTypeSelect_t4initEv+0x54>
 898d23c:	8b 55 fc             	mov    -0x4(%ebp),%edx
 898d23f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d242:	83 c2 08             	add    $0x8,%edx
 898d245:	66 c7 44 50 04 00 00 	movw   $0x0,0x4(%eax,%edx,2)
 898d24c:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 898d250:	83 7d fc 04          	cmpl   $0x4,-0x4(%ebp)
 898d254:	0f 9e c0             	setle  %al
 898d257:	84 c0                	test   %al,%al
 898d259:	75 e1                	jne    898d23c <_ZN20stAvatarTypeSelect_t4initEv+0x40>
 898d25b:	c9                   	leave
 898d25c:	c3                   	ret
 898d25d:	90                   	nop

```

```c
// stAvatarTypeSelect_t::init @ 0x898d1fc

/* stAvatarTypeSelect_t::init() */

void __thiscall stAvatarTypeSelect_t::init(stAvatarTypeSelect_t *this)

{
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(this + (local_8 + 8) * 2 + 4) = 0;
  }
  return;
}

```

