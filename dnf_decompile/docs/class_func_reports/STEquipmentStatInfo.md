# STEquipmentStatInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## STEquipmentStatInfo

```asm
// === 0898d25e STEquipmentStatInfo::STEquipmentStatInfo  [0x0898d25e-0x898d271] ===
 898d25e:	55                   	push   %ebp
 898d25f:	89 e5                	mov    %esp,%ebp
 898d261:	83 ec 18             	sub    $0x18,%esp
 898d264:	8b 45 08             	mov    0x8(%ebp),%eax
 898d267:	89 04 24             	mov    %eax,(%esp)
 898d26a:	e8 03 00 00 00       	call   898d272 <_ZN19STEquipmentStatInfo5clearEv>
 898d26f:	c9                   	leave
 898d270:	c3                   	ret
 898d271:	90                   	nop

```

```c
// STEquipmentStatInfo::STEquipmentStatInfo @ 0x898d25e

/* STEquipmentStatInfo::STEquipmentStatInfo() */

void __thiscall STEquipmentStatInfo::STEquipmentStatInfo(STEquipmentStatInfo *this)

{
  clear(this);
  return;
}

```

---

## clear

```asm
// === 0898d272 STEquipmentStatInfo::clear  [0x0898d272-0x898d37b] ===
 898d272:	55                   	push   %ebp
 898d273:	89 e5                	mov    %esp,%ebp
 898d275:	83 ec 10             	sub    $0x10,%esp
 898d278:	8b 45 08             	mov    0x8(%ebp),%eax
 898d27b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 898d281:	8b 45 08             	mov    0x8(%ebp),%eax
 898d284:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 898d28b:	8b 45 08             	mov    0x8(%ebp),%eax
 898d28e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 898d295:	8b 45 08             	mov    0x8(%ebp),%eax
 898d298:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 898d29f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2a2:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 898d2a9:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2ac:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 898d2b3:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2b6:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 898d2bd:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2c0:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 898d2c7:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2ca:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 898d2d1:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2d4:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 898d2db:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 898d2e2:	eb 15                	jmp    898d2f9 <_ZN19STEquipmentStatInfo5clearEv+0x87>
 898d2e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 898d2e7:	8b 45 08             	mov    0x8(%ebp),%eax
 898d2ea:	83 c2 08             	add    $0x8,%edx
 898d2ed:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 898d2f4:	00 
 898d2f5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 898d2f9:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 898d2fd:	0f 9e c0             	setle  %al
 898d300:	84 c0                	test   %al,%al
 898d302:	75 e0                	jne    898d2e4 <_ZN19STEquipmentStatInfo5clearEv+0x72>
 898d304:	8b 45 08             	mov    0x8(%ebp),%eax
 898d307:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 898d30e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 898d315:	eb 15                	jmp    898d32c <_ZN19STEquipmentStatInfo5clearEv+0xba>
 898d317:	8b 55 f8             	mov    -0x8(%ebp),%edx
 898d31a:	8b 45 08             	mov    0x8(%ebp),%eax
 898d31d:	83 c2 0c             	add    $0xc,%edx
 898d320:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 898d327:	00 
 898d328:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 898d32c:	83 7d f8 10          	cmpl   $0x10,-0x8(%ebp)
 898d330:	0f 9e c0             	setle  %al
 898d333:	84 c0                	test   %al,%al
 898d335:	75 e0                	jne    898d317 <_ZN19STEquipmentStatInfo5clearEv+0xa5>
 898d337:	8b 45 08             	mov    0x8(%ebp),%eax
 898d33a:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 898d341:	00 00 00 
 898d344:	8b 45 08             	mov    0x8(%ebp),%eax
 898d347:	c7 80 84 00 00 00 00 	movl   $0x0,0x84(%eax)
 898d34e:	00 00 00 
 898d351:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 898d358:	eb 15                	jmp    898d36f <_ZN19STEquipmentStatInfo5clearEv+0xfd>
 898d35a:	8b 55 fc             	mov    -0x4(%ebp),%edx
 898d35d:	8b 45 08             	mov    0x8(%ebp),%eax
 898d360:	83 c2 20             	add    $0x20,%edx
 898d363:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 898d36a:	00 
 898d36b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 898d36f:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 898d373:	0f 9e c0             	setle  %al
 898d376:	84 c0                	test   %al,%al
 898d378:	75 e0                	jne    898d35a <_ZN19STEquipmentStatInfo5clearEv+0xe8>
 898d37a:	c9                   	leave
 898d37b:	c3                   	ret

```

```c
// STEquipmentStatInfo::clear @ 0x898d272

/* STEquipmentStatInfo::clear() */

void __thiscall STEquipmentStatInfo::clear(STEquipmentStatInfo *this)

{
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 8) * 4 + 8) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  for (local_c = 0; local_c < 0x11; local_c = local_c + 1) {
    *(undefined4 *)(this + (local_c + 0xc) * 4 + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x20) * 4 + 8) = 0;
  }
  return;
}

```

