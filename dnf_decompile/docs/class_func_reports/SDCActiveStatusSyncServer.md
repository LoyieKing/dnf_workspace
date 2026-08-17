# SDCActiveStatusSyncServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## loadActiveStatusScript

```asm
// === 0808e13c SDCActiveStatusSyncServer::loadActiveStatusScript  [0x0808e13c-0x808e14f] ===
 808e13c:	55                   	push   %ebp
 808e13d:	89 e5                	mov    %esp,%ebp
 808e13f:	83 ec 18             	sub    $0x18,%esp
 808e142:	c7 04 24 60 46 af 08 	movl   $0x8af4660,(%esp)
 808e149:	e8 3a 8e 87 00       	call   8906f88 <_Z23importActiveStatusTablePKc>
 808e14e:	c9                   	leave
 808e14f:	c3                   	ret

```

```c
// SDCActiveStatusSyncServer::loadActiveStatusScript @ 0x808e13c

/* SDCActiveStatusSyncServer::loadActiveStatusScript() */

void SDCActiveStatusSyncServer::loadActiveStatusScript(void)

{
  importActiveStatusTable("Etc/ActiveStatusTable_ex.etc");
  return;
}

```

