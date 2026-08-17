# SpeedCtrlPassiveObjInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SpeedCtrlPassiveObjInfo

```asm
// === 08a3ad5a SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo  [0x08a3ad5a-0x8a3ad6f] ===
 8a3ad5a:	55                   	push   %ebp
 8a3ad5b:	89 e5                	mov    %esp,%ebp
 8a3ad5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad60:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 8a3ad66:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad69:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8a3ad6d:	5d                   	pop    %ebp
 8a3ad6e:	c3                   	ret
 8a3ad6f:	90                   	nop

```

```c
// SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo @ 0x8a3ad5a

/* SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo() */

void __thiscall SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo(SpeedCtrlPassiveObjInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  this[4] = (SpeedCtrlPassiveObjInfo)0x0;
  return;
}

```

