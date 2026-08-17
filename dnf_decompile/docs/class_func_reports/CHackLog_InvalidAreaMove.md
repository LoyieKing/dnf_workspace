# CHackLog_InvalidAreaMove

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## IsInvalidMovableArea

```asm
// === 08285e2e CHackLog_InvalidAreaMove::IsInvalidMovableArea  [0x08285e2e-0x8285efd] ===
 8285e2e:	55                   	push   %ebp
 8285e2f:	89 e5                	mov    %esp,%ebp
 8285e31:	83 ec 18             	sub    $0x18,%esp
 8285e34:	8b 45 14             	mov    0x14(%ebp),%eax
 8285e37:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8285e3b:	8b 45 10             	mov    0x10(%ebp),%eax
 8285e3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8285e42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285e45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285e49:	8b 45 08             	mov    0x8(%ebp),%eax
 8285e4c:	89 04 24             	mov    %eax,(%esp)
 8285e4f:	e8 62 03 00 00       	call   82861b6 <_ZN24CHackLog_InvalidAreaMove31IsMovingBetweenWestCoastAndGentEiiii>
 8285e54:	83 f0 01             	xor    $0x1,%eax
 8285e57:	84 c0                	test   %al,%al
 8285e59:	0f 84 87 00 00 00    	je     8285ee6 <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xb8>
 8285e5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8285e62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285e66:	8b 45 08             	mov    0x8(%ebp),%eax
 8285e69:	89 04 24             	mov    %eax,(%esp)
 8285e6c:	e8 b1 03 00 00       	call   8286222 <_ZN24CHackLog_InvalidAreaMove21IsMovingAboutPowerWarEii>
 8285e71:	83 f0 01             	xor    $0x1,%eax
 8285e74:	84 c0                	test   %al,%al
 8285e76:	74 6e                	je     8285ee6 <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xb8>
 8285e78:	8b 45 10             	mov    0x10(%ebp),%eax
 8285e7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285e7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8285e82:	89 04 24             	mov    %eax,(%esp)
 8285e85:	e8 a6 04 00 00       	call   8286330 <_ZN24CHackLog_InvalidAreaMove19IsMovingInGuildAgitEii>
 8285e8a:	83 f0 01             	xor    $0x1,%eax
 8285e8d:	84 c0                	test   %al,%al
 8285e8f:	74 55                	je     8285ee6 <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xb8>
 8285e91:	8b 45 14             	mov    0x14(%ebp),%eax
 8285e94:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8285e98:	8b 45 10             	mov    0x10(%ebp),%eax
 8285e9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8285e9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285ea2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285ea6:	8b 45 08             	mov    0x8(%ebp),%eax
 8285ea9:	89 04 24             	mov    %eax,(%esp)
 8285eac:	e8 9f 04 00 00       	call   8286350 <_ZN24CHackLog_InvalidAreaMove15IsExceptionMoveEiiii>
 8285eb1:	83 f0 01             	xor    $0x1,%eax
 8285eb4:	84 c0                	test   %al,%al
 8285eb6:	74 2e                	je     8285ee6 <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xb8>
 8285eb8:	8b 45 14             	mov    0x14(%ebp),%eax
 8285ebb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8285ebf:	8b 45 10             	mov    0x10(%ebp),%eax
 8285ec2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8285ec6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285ec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285ecd:	8b 45 08             	mov    0x8(%ebp),%eax
 8285ed0:	89 04 24             	mov    %eax,(%esp)
 8285ed3:	e8 9a 03 00 00       	call   8286272 <_ZN24CHackLog_InvalidAreaMove36IsMovingBetweenSeriaRoomAndGuildAgitEiiii>
 8285ed8:	83 f0 01             	xor    $0x1,%eax
 8285edb:	84 c0                	test   %al,%al
 8285edd:	74 07                	je     8285ee6 <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xb8>
 8285edf:	b8 01 00 00 00       	mov    $0x1,%eax
 8285ee4:	eb 05                	jmp    8285eeb <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xbd>
 8285ee6:	b8 00 00 00 00       	mov    $0x0,%eax
 8285eeb:	84 c0                	test   %al,%al
 8285eed:	74 07                	je     8285ef6 <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xc8>
 8285eef:	b8 01 00 00 00       	mov    $0x1,%eax
 8285ef4:	eb 05                	jmp    8285efb <_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii+0xcd>
 8285ef6:	b8 00 00 00 00       	mov    $0x0,%eax
 8285efb:	c9                   	leave
 8285efc:	c3                   	ret
 8285efd:	90                   	nop

```

```c
// CHackLog_InvalidAreaMove::IsInvalidMovableArea @ 0x8285e2e

/* CHackLog_InvalidAreaMove::IsInvalidMovableArea(int, int, int, int) */

undefined1
CHackLog_InvalidAreaMove::IsInvalidMovableArea(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = IsMovingBetweenWestCoastAndGent(param_1,param_2,param_3,param_4);
  if ((((cVar2 == '\x01') || (cVar2 = IsMovingAboutPowerWar(param_1,param_3), cVar2 == '\x01')) ||
      (cVar2 = IsMovingInGuildAgit(param_1,param_3), cVar2 == '\x01')) ||
     ((cVar2 = IsExceptionMove(param_1,param_2,param_3,param_4), cVar2 == '\x01' ||
      (cVar2 = IsMovingBetweenSeriaRoomAndGuildAgit(param_1,param_2,param_3,param_4),
      cVar2 == '\x01')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## checkSeriaRoom

```asm
// === 08285e14 CHackLog_InvalidAreaMove::checkSeriaRoom  [0x08285e14-0x8285e2d] ===
 8285e14:	55                   	push   %ebp
 8285e15:	89 e5                	mov    %esp,%ebp
 8285e17:	83 ec 18             	sub    $0x18,%esp
 8285e1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8285e1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8285e21:	8b 45 08             	mov    0x8(%ebp),%eax
 8285e24:	89 04 24             	mov    %eax,(%esp)
 8285e27:	e8 36 06 00 00       	call   8286462 <_ZN24CHackLog_InvalidAreaMove11IsSeriaRoomEii>
 8285e2c:	c9                   	leave
 8285e2d:	c3                   	ret

```

```c
// CHackLog_InvalidAreaMove::checkSeriaRoom @ 0x8285e14

/* CHackLog_InvalidAreaMove::checkSeriaRoom(int, int) */

void CHackLog_InvalidAreaMove::checkSeriaRoom(int param_1,int param_2)

{
  IsSeriaRoom(param_1,param_2);
  return;
}

```

---

## isMovableRoute

```asm
// === 08285efe CHackLog_InvalidAreaMove::isMovableRoute  [0x08285efe-0x8286159] ===
 8285efe:	55                   	push   %ebp
 8285eff:	89 e5                	mov    %esp,%ebp
 8285f01:	83 ec 10             	sub    $0x10,%esp
 8285f04:	c6 45 ff 00          	movb   $0x0,-0x1(%ebp)
 8285f08:	83 7d 08 03          	cmpl   $0x3,0x8(%ebp)
 8285f0c:	75 22                	jne    8285f30 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x32>
 8285f0e:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8285f12:	75 1c                	jne    8285f30 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x32>
 8285f14:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8285f18:	75 16                	jne    8285f30 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x32>
 8285f1a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8285f1e:	75 10                	jne    8285f30 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x32>
 8285f20:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 8285f24:	75 0a                	jne    8285f30 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x32>
 8285f26:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 8285f2a:	0f 84 20 02 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8285f30:	83 7d 08 03          	cmpl   $0x3,0x8(%ebp)
 8285f34:	75 22                	jne    8285f58 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x5a>
 8285f36:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8285f3a:	75 1c                	jne    8285f58 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x5a>
 8285f3c:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8285f40:	75 16                	jne    8285f58 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x5a>
 8285f42:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8285f46:	75 10                	jne    8285f58 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x5a>
 8285f48:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 8285f4c:	75 0a                	jne    8285f58 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x5a>
 8285f4e:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 8285f52:	0f 84 f8 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8285f58:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
 8285f5c:	75 22                	jne    8285f80 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x82>
 8285f5e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8285f62:	75 1c                	jne    8285f80 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x82>
 8285f64:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8285f68:	75 16                	jne    8285f80 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x82>
 8285f6a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8285f6e:	75 10                	jne    8285f80 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x82>
 8285f70:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 8285f74:	75 0a                	jne    8285f80 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x82>
 8285f76:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 8285f7a:	0f 84 d0 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8285f80:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
 8285f84:	75 22                	jne    8285fa8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xaa>
 8285f86:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8285f8a:	75 1c                	jne    8285fa8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xaa>
 8285f8c:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8285f90:	75 16                	jne    8285fa8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xaa>
 8285f92:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8285f96:	75 10                	jne    8285fa8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xaa>
 8285f98:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 8285f9c:	75 0a                	jne    8285fa8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xaa>
 8285f9e:	83 7d 1c 02          	cmpl   $0x2,0x1c(%ebp)
 8285fa2:	0f 84 a8 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8285fa8:	83 7d 08 06          	cmpl   $0x6,0x8(%ebp)
 8285fac:	75 22                	jne    8285fd0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xd2>
 8285fae:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8285fb2:	75 1c                	jne    8285fd0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xd2>
 8285fb4:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8285fb8:	75 16                	jne    8285fd0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xd2>
 8285fba:	83 7d 14 06          	cmpl   $0x6,0x14(%ebp)
 8285fbe:	75 10                	jne    8285fd0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xd2>
 8285fc0:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 8285fc4:	75 0a                	jne    8285fd0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xd2>
 8285fc6:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 8285fca:	0f 84 80 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8285fd0:	83 7d 08 04          	cmpl   $0x4,0x8(%ebp)
 8285fd4:	75 22                	jne    8285ff8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xfa>
 8285fd6:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8285fda:	75 1c                	jne    8285ff8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xfa>
 8285fdc:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 8285fe0:	75 16                	jne    8285ff8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xfa>
 8285fe2:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8285fe6:	75 10                	jne    8285ff8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xfa>
 8285fe8:	83 7d 18 04          	cmpl   $0x4,0x18(%ebp)
 8285fec:	75 0a                	jne    8285ff8 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0xfa>
 8285fee:	83 7d 1c 03          	cmpl   $0x3,0x1c(%ebp)
 8285ff2:	0f 84 58 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8285ff8:	83 7d 08 04          	cmpl   $0x4,0x8(%ebp)
 8285ffc:	75 22                	jne    8286020 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x122>
 8285ffe:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8286002:	75 1c                	jne    8286020 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x122>
 8286004:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 8286008:	75 16                	jne    8286020 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x122>
 828600a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 828600e:	75 10                	jne    8286020 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x122>
 8286010:	83 7d 18 04          	cmpl   $0x4,0x18(%ebp)
 8286014:	75 0a                	jne    8286020 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x122>
 8286016:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 828601a:	0f 84 30 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8286020:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
 8286024:	75 22                	jne    8286048 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x14a>
 8286026:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 828602a:	75 1c                	jne    8286048 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x14a>
 828602c:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 8286030:	75 16                	jne    8286048 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x14a>
 8286032:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8286036:	75 10                	jne    8286048 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x14a>
 8286038:	83 7d 18 04          	cmpl   $0x4,0x18(%ebp)
 828603c:	75 0a                	jne    8286048 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x14a>
 828603e:	83 7d 1c 04          	cmpl   $0x4,0x1c(%ebp)
 8286042:	0f 84 08 01 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8286048:	83 7d 08 04          	cmpl   $0x4,0x8(%ebp)
 828604c:	75 22                	jne    8286070 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x172>
 828604e:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 8286052:	75 1c                	jne    8286070 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x172>
 8286054:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 8286058:	75 16                	jne    8286070 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x172>
 828605a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 828605e:	75 10                	jne    8286070 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x172>
 8286060:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 8286064:	75 0a                	jne    8286070 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x172>
 8286066:	83 7d 1c 03          	cmpl   $0x3,0x1c(%ebp)
 828606a:	0f 84 e0 00 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8286070:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
 8286074:	75 22                	jne    8286098 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x19a>
 8286076:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 828607a:	75 1c                	jne    8286098 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x19a>
 828607c:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8286080:	75 16                	jne    8286098 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x19a>
 8286082:	83 7d 14 08          	cmpl   $0x8,0x14(%ebp)
 8286086:	75 10                	jne    8286098 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x19a>
 8286088:	83 7d 18 05          	cmpl   $0x5,0x18(%ebp)
 828608c:	75 0a                	jne    8286098 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x19a>
 828608e:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 8286092:	0f 84 b8 00 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8286098:	83 7d 08 05          	cmpl   $0x5,0x8(%ebp)
 828609c:	75 22                	jne    82860c0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1c2>
 828609e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82860a2:	75 1c                	jne    82860c0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1c2>
 82860a4:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 82860a8:	75 16                	jne    82860c0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1c2>
 82860aa:	83 7d 14 08          	cmpl   $0x8,0x14(%ebp)
 82860ae:	75 10                	jne    82860c0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1c2>
 82860b0:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 82860b4:	75 0a                	jne    82860c0 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1c2>
 82860b6:	83 7d 1c 02          	cmpl   $0x2,0x1c(%ebp)
 82860ba:	0f 84 90 00 00 00    	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 82860c0:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
 82860c4:	75 1e                	jne    82860e4 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1e6>
 82860c6:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 82860ca:	75 18                	jne    82860e4 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1e6>
 82860cc:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 82860d0:	75 12                	jne    82860e4 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1e6>
 82860d2:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82860d6:	75 0c                	jne    82860e4 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1e6>
 82860d8:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 82860dc:	75 06                	jne    82860e4 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x1e6>
 82860de:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 82860e2:	74 6c                	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 82860e4:	83 7d 08 04          	cmpl   $0x4,0x8(%ebp)
 82860e8:	75 1e                	jne    8286108 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x20a>
 82860ea:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 82860ee:	75 18                	jne    8286108 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x20a>
 82860f0:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 82860f4:	75 12                	jne    8286108 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x20a>
 82860f6:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82860fa:	75 0c                	jne    8286108 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x20a>
 82860fc:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 8286100:	75 06                	jne    8286108 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x20a>
 8286102:	83 7d 1c 03          	cmpl   $0x3,0x1c(%ebp)
 8286106:	74 48                	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 8286108:	83 7d 08 04          	cmpl   $0x4,0x8(%ebp)
 828610c:	75 1e                	jne    828612c <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x22e>
 828610e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8286112:	75 18                	jne    828612c <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x22e>
 8286114:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 8286118:	75 12                	jne    828612c <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x22e>
 828611a:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 828611e:	75 0c                	jne    828612c <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x22e>
 8286120:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 8286124:	75 06                	jne    828612c <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x22e>
 8286126:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 828612a:	74 24                	je     8286150 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x252>
 828612c:	83 7d 08 03          	cmpl   $0x3,0x8(%ebp)
 8286130:	75 22                	jne    8286154 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x256>
 8286132:	83 7d 0c 06          	cmpl   $0x6,0xc(%ebp)
 8286136:	75 1c                	jne    8286154 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x256>
 8286138:	83 7d 10 06          	cmpl   $0x6,0x10(%ebp)
 828613c:	75 16                	jne    8286154 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x256>
 828613e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8286142:	75 10                	jne    8286154 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x256>
 8286144:	83 7d 18 06          	cmpl   $0x6,0x18(%ebp)
 8286148:	75 0a                	jne    8286154 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x256>
 828614a:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 828614e:	75 04                	jne    8286154 <_ZN24CHackLog_InvalidAreaMove14isMovableRouteEiiiiii+0x256>
 8286150:	c6 45 ff 01          	movb   $0x1,-0x1(%ebp)
 8286154:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
 8286158:	c9                   	leave
 8286159:	c3                   	ret

```

```c
// CHackLog_InvalidAreaMove::isMovableRoute @ 0x8285efe

/* CHackLog_InvalidAreaMove::isMovableRoute(int, int, int, int, int, int) */

undefined1
CHackLog_InvalidAreaMove::isMovableRoute
          (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 local_5;
  
  local_5 = 0;
  if (((((((((param_1 == 3) && (param_2 == 2)) && (param_3 == 3)) &&
          ((param_4 == 0 && (param_5 == 2)))) && (param_6 == 0)) ||
        (((param_1 == 3 && (param_2 == 1)) &&
         ((param_3 == 3 && (((param_4 == 0 && (param_5 == 2)) && (param_6 == 0)))))))) ||
       (((((param_1 == 2 && (param_2 == 0)) &&
          ((param_3 == 3 && (((param_4 == 0 && (param_5 == 3)) && (param_6 == 1)))))) ||
         ((((((param_1 == 2 && (param_2 == 0)) && (param_3 == 3)) &&
            ((param_4 == 0 && (param_5 == 3)))) && (param_6 == 2)) ||
          ((((param_1 == 6 && (param_2 == 0)) &&
            ((param_3 == 3 && (((param_4 == 6 && (param_5 == 3)) && (param_6 == 1)))))) ||
           (((((param_1 == 4 && (param_2 == 1)) && (param_3 == 4)) &&
             ((param_4 == 0 && (param_5 == 4)))) && (param_6 == 3)))))))) ||
        (((((param_1 == 4 && (param_2 == 3)) && (param_3 == 4)) &&
          ((param_4 == 0 && (param_5 == 4)))) && (param_6 == 1)))))) ||
      ((((param_1 == 1 && (param_2 == 3)) &&
        ((param_3 == 4 && (((param_4 == 0 && (param_5 == 4)) && (param_6 == 4)))))) ||
       ((((param_1 == 4 && (param_2 == 4)) && (param_3 == 4)) &&
        (((param_4 == 0 && (param_5 == 1)) && (param_6 == 3)))))))) ||
     ((((((((param_1 == 2 && (param_2 == 2)) && (param_3 == 2)) &&
          ((param_4 == 8 && (param_5 == 5)))) && (param_6 == 0)) ||
        ((((param_1 == 5 && (param_2 == 0)) &&
          ((param_3 == 2 && (((param_4 == 8 && (param_5 == 2)) && (param_6 == 2)))))) ||
         (((param_1 == 2 && (param_2 == 4)) &&
          ((param_3 == 2 && (((param_4 == 0 && (param_5 == 3)) && (param_6 == 0)))))))))) ||
       (((((param_1 == 4 && (param_2 == 1)) && (param_3 == 4)) && ((param_4 == 0 && (param_5 == 1)))
         ) && (param_6 == 3)))) ||
      ((((param_1 == 4 && (param_2 == 0)) &&
        ((param_3 == 1 && (((param_4 == 3 && (param_5 == 1)) && (param_6 == 0)))))) ||
       (((param_1 == 3 && (param_2 == 6)) &&
        ((param_3 == 6 && (((param_4 == 0 && (param_5 == 6)) && (param_6 == 1)))))))))))) {
    local_5 = 1;
  }
  return local_5;
}

```

