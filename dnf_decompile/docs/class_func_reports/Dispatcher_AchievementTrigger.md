# Dispatcher_AchievementTrigger

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d7f1e Dispatcher_AchievementTrigger::process  [0x081d7f1e-0x81d7fab] ===
 81d7f1e:	55                   	push   %ebp
 81d7f1f:	89 e5                	mov    %esp,%ebp
 81d7f21:	57                   	push   %edi
 81d7f22:	56                   	push   %esi
 81d7f23:	53                   	push   %ebx
 81d7f24:	83 ec 4c             	sub    $0x4c,%esp
 81d7f27:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7f2a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d7f2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7f30:	89 04 24             	mov    %eax,(%esp)
 81d7f33:	e8 54 24 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7f38:	83 f8 02             	cmp    $0x2,%eax
 81d7f3b:	0f 9e c0             	setle  %al
 81d7f3e:	84 c0                	test   %al,%al
 81d7f40:	74 07                	je     81d7f49 <_ZN29Dispatcher_AchievementTrigger7processEP5CUserR8MSG_BASER9ParamBase+0x2b>
 81d7f42:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7f47:	eb 5a                	jmp    81d7fa3 <_ZN29Dispatcher_AchievementTrigger7processEP5CUserR8MSG_BASER9ParamBase+0x85>
 81d7f49:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d7f4c:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 81d7f50:	0f b7 c0             	movzwl %ax,%eax
 81d7f53:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81d7f56:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d7f59:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81d7f5d:	0f b7 f8             	movzwl %ax,%edi
 81d7f60:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d7f63:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81d7f67:	0f b7 f0             	movzwl %ax,%esi
 81d7f6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d7f6d:	8b 58 0d             	mov    0xd(%eax),%ebx
 81d7f70:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 81d7f77:	00 
 81d7f78:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7f7b:	89 04 24             	mov    %eax,(%esp)
 81d7f7e:	e8 01 56 f0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81d7f83:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81d7f86:	89 54 24 10          	mov    %edx,0x10(%esp)
 81d7f8a:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81d7f8e:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d7f92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d7f96:	89 04 24             	mov    %eax,(%esp)
 81d7f99:	e8 da 36 0b 00       	call   828b678 <_ZN12CAchievement10setTriggerEjttt>
 81d7f9e:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7fa3:	83 c4 4c             	add    $0x4c,%esp
 81d7fa6:	5b                   	pop    %ebx
 81d7fa7:	5e                   	pop    %esi
 81d7fa8:	5f                   	pop    %edi
 81d7fa9:	5d                   	pop    %ebp
 81d7faa:	c3                   	ret
 81d7fab:	90                   	nop

```

```c
// Dispatcher_AchievementTrigger::process @ 0x81d7f1e

/* Dispatcher_AchievementTrigger::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_AchievementTrigger::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  CAchievement *this;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (2 < iVar5) {
    uVar1 = *(ushort *)(param_3 + 0x15);
    uVar2 = *(ushort *)(param_3 + 0x13);
    uVar3 = *(ushort *)(param_3 + 0x11);
    uVar4 = *(uint *)(param_3 + 0xd);
    this = (CAchievement *)CUser::GetCharacExpandData((CUser *)param_2,0xf);
    CAchievement::setTrigger(this,uVar4,uVar3,uVar2,uVar1);
  }
  return 0;
}

```

---

## read

```asm
// === 081d7dfc Dispatcher_AchievementTrigger::read  [0x081d7dfc-0x81d7f1d] ===
 81d7dfc:	55                   	push   %ebp
 81d7dfd:	89 e5                	mov    %esp,%ebp
 81d7dff:	83 ec 28             	sub    $0x28,%esp
 81d7e02:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7e05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7e08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7e0b:	83 c0 0d             	add    $0xd,%eax
 81d7e0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7e12:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7e15:	89 04 24             	mov    %eax,(%esp)
 81d7e18:	e8 23 54 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d7e1d:	83 f0 01             	xor    $0x1,%eax
 81d7e20:	84 c0                	test   %al,%al
 81d7e22:	74 29                	je     81d7e4d <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x51>
 81d7e24:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7e2b:	00 
 81d7e2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7e33:	00 
 81d7e34:	c7 44 24 04 40 27 bd 	movl   $0x8bd2740,0x4(%esp)
 81d7e3b:	08 
 81d7e3c:	c7 04 24 65 42 00 00 	movl   $0x4265,(%esp)
 81d7e43:	e8 8f 8a 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7e48:	e9 ce 00 00 00       	jmp    81d7f1b <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x11f>
 81d7e4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7e50:	83 c0 11             	add    $0x11,%eax
 81d7e53:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7e57:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7e5a:	89 04 24             	mov    %eax,(%esp)
 81d7e5d:	e8 4e 52 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d7e62:	83 f0 01             	xor    $0x1,%eax
 81d7e65:	84 c0                	test   %al,%al
 81d7e67:	74 29                	je     81d7e92 <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x96>
 81d7e69:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7e70:	00 
 81d7e71:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7e78:	00 
 81d7e79:	c7 44 24 04 40 27 bd 	movl   $0x8bd2740,0x4(%esp)
 81d7e80:	08 
 81d7e81:	c7 04 24 67 42 00 00 	movl   $0x4267,(%esp)
 81d7e88:	e8 4a 8a 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7e8d:	e9 89 00 00 00       	jmp    81d7f1b <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x11f>
 81d7e92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7e95:	83 c0 13             	add    $0x13,%eax
 81d7e98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7e9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7e9f:	89 04 24             	mov    %eax,(%esp)
 81d7ea2:	e8 09 52 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d7ea7:	83 f0 01             	xor    $0x1,%eax
 81d7eaa:	84 c0                	test   %al,%al
 81d7eac:	74 26                	je     81d7ed4 <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0xd8>
 81d7eae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7eb5:	00 
 81d7eb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7ebd:	00 
 81d7ebe:	c7 44 24 04 40 27 bd 	movl   $0x8bd2740,0x4(%esp)
 81d7ec5:	08 
 81d7ec6:	c7 04 24 69 42 00 00 	movl   $0x4269,(%esp)
 81d7ecd:	e8 05 8a 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7ed2:	eb 47                	jmp    81d7f1b <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x11f>
 81d7ed4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7ed7:	83 c0 15             	add    $0x15,%eax
 81d7eda:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7ede:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7ee1:	89 04 24             	mov    %eax,(%esp)
 81d7ee4:	e8 c7 51 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d7ee9:	83 f0 01             	xor    $0x1,%eax
 81d7eec:	84 c0                	test   %al,%al
 81d7eee:	74 26                	je     81d7f16 <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x11a>
 81d7ef0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7ef7:	00 
 81d7ef8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7eff:	00 
 81d7f00:	c7 44 24 04 40 27 bd 	movl   $0x8bd2740,0x4(%esp)
 81d7f07:	08 
 81d7f08:	c7 04 24 6b 42 00 00 	movl   $0x426b,(%esp)
 81d7f0f:	e8 c3 89 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7f14:	eb 05                	jmp    81d7f1b <_ZN29Dispatcher_AchievementTrigger4readER9PacketBufR8MSG_BASE+0x11f>
 81d7f16:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7f1b:	c9                   	leave
 81d7f1c:	c3                   	ret
 81d7f1d:	90                   	nop

```

```c
// Dispatcher_AchievementTrigger::read @ 0x81d7dfc

/* Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_AchievementTrigger::read
          (Dispatcher_AchievementTrigger *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x426b,
                           "virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x4269,
                         "virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(16999,
                       "virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x4265,"virtual int Dispatcher_AchievementTrigger::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

