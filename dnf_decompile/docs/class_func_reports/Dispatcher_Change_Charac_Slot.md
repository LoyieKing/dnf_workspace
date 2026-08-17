# Dispatcher_Change_Charac_Slot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082251f4 Dispatcher_Change_Charac_Slot::dispatch_sig  [0x082251f4-0x82252fd] ===
 82251f4:	55                   	push   %ebp
 82251f5:	89 e5                	mov    %esp,%ebp
 82251f7:	83 ec 28             	sub    $0x28,%esp
 82251fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82251fd:	89 04 24             	mov    %eax,(%esp)
 8225200:	e8 87 51 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8225205:	83 f8 02             	cmp    $0x2,%eax
 8225208:	0f 95 c0             	setne  %al
 822520b:	84 c0                	test   %al,%al
 822520d:	74 0a                	je     8225219 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x25>
 822520f:	b8 00 00 00 00       	mov    $0x0,%eax
 8225214:	e9 e2 00 00 00       	jmp    82252fb <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x107>
 8225219:	8d 45 f0             	lea    -0x10(%ebp),%eax
 822521c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225220:	8b 45 10             	mov    0x10(%ebp),%eax
 8225223:	89 04 24             	mov    %eax,(%esp)
 8225226:	e8 15 80 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 822522b:	83 f0 01             	xor    $0x1,%eax
 822522e:	84 c0                	test   %al,%al
 8225230:	75 19                	jne    822524b <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x57>
 8225232:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8225235:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225239:	8b 45 10             	mov    0x10(%ebp),%eax
 822523c:	89 04 24             	mov    %eax,(%esp)
 822523f:	e8 fc 7f 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8225244:	83 f0 01             	xor    $0x1,%eax
 8225247:	84 c0                	test   %al,%al
 8225249:	74 07                	je     8225252 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x5e>
 822524b:	b8 01 00 00 00       	mov    $0x1,%eax
 8225250:	eb 05                	jmp    8225257 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x63>
 8225252:	b8 00 00 00 00       	mov    $0x0,%eax
 8225257:	84 c0                	test   %al,%al
 8225259:	74 26                	je     8225281 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x8d>
 822525b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8225262:	00 
 8225263:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822526a:	00 
 822526b:	c7 44 24 04 60 c5 bc 	movl   $0x8bcc560,0x4(%esp)
 8225272:	08 
 8225273:	c7 04 24 f5 df 00 00 	movl   $0xdff5,(%esp)
 822527a:	e8 58 b6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822527f:	eb 7a                	jmp    82252fb <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x107>
 8225281:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225284:	89 04 24             	mov    %eax,(%esp)
 8225287:	e8 7e 57 42 00       	call   864aa0a <_ZN5CUser17isLocked4DataLoadEv>
 822528c:	84 c0                	test   %al,%al
 822528e:	75 0f                	jne    822529f <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0xab>
 8225290:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225293:	89 04 24             	mov    %eax,(%esp)
 8225296:	e8 4b 58 42 00       	call   864aae6 <_ZN5CUser20isLockedCreateCharacEv>
 822529b:	84 c0                	test   %al,%al
 822529d:	74 07                	je     82252a6 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 822529f:	b8 01 00 00 00       	mov    $0x1,%eax
 82252a4:	eb 05                	jmp    82252ab <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 82252a6:	b8 00 00 00 00       	mov    $0x0,%eax
 82252ab:	88 45 f7             	mov    %al,-0x9(%ebp)
 82252ae:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 82252b2:	75 0f                	jne    82252c3 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0xcf>
 82252b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82252b7:	89 04 24             	mov    %eax,(%esp)
 82252ba:	e8 b9 57 42 00       	call   864aa78 <_ZN5CUser20isLockedDeleteCharacEv>
 82252bf:	84 c0                	test   %al,%al
 82252c1:	74 07                	je     82252ca <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0xd6>
 82252c3:	b8 01 00 00 00       	mov    $0x1,%eax
 82252c8:	eb 05                	jmp    82252cf <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0xdb>
 82252ca:	b8 00 00 00 00       	mov    $0x0,%eax
 82252cf:	88 45 f7             	mov    %al,-0x9(%ebp)
 82252d2:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 82252d6:	83 f0 01             	xor    $0x1,%eax
 82252d9:	84 c0                	test   %al,%al
 82252db:	74 19                	je     82252f6 <_ZN29Dispatcher_Change_Charac_Slot12dispatch_sigEP5CUserR9PacketBuf+0x102>
 82252dd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82252e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82252e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82252e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82252eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82252ee:	89 04 24             	mov    %eax,(%esp)
 82252f1:	e8 84 c8 42 00       	call   8651b7a <_ZN5CUser16ChangeCharacSlotEjj>
 82252f6:	b8 00 00 00 00       	mov    $0x0,%eax
 82252fb:	c9                   	leave
 82252fc:	c3                   	ret
 82252fd:	90                   	nop

```

```c
// Dispatcher_Change_Charac_Slot::dispatch_sig @ 0x82251f4

/* Dispatcher_Change_Charac_Slot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Change_Charac_Slot::dispatch_sig
          (Dispatcher_Change_Charac_Slot *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_18;
  uint local_14;
  char local_d;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 2) {
    return 0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_14);
  if ((cVar2 == '\x01') && (cVar2 = PacketBuf::get_int(param_2,&local_18), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar2 = CUser::isLocked4DataLoad(param_1);
    if ((cVar2 == '\0') && (cVar2 = CUser::isLockedCreateCharac(param_1), cVar2 == '\0')) {
      local_d = '\0';
    }
    else {
      local_d = '\x01';
    }
    if ((local_d == '\0') && (cVar2 = CUser::isLockedDeleteCharac(param_1), cVar2 == '\0')) {
      local_d = '\0';
    }
    else {
      local_d = '\x01';
    }
    if (local_d != '\x01') {
      CUser::ChangeCharacSlot(param_1,local_14,local_18);
    }
    return 0;
  }
  uVar4 = LineFunc(0xdff5,
                   "virtual int Dispatcher_Change_Charac_Slot::dispatch_sig(CUser*, PacketBuf&)",0,0
                  );
  return uVar4;
}

```

