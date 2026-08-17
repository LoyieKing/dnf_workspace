# TeamInfoSecond

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## add

```asm
// === 0855fdfe TeamInfoSecond::add  [0x0855fdfe-0x855fe53] ===
 855fdfe:	55                   	push   %ebp
 855fdff:	89 e5                	mov    %esp,%ebp
 855fe01:	83 ec 10             	sub    $0x10,%esp
 855fe04:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855fe0b:	eb 35                	jmp    855fe42 <_ZN14TeamInfoSecond3addEP5CUser+0x44>
 855fe0d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fe10:	8b 45 08             	mov    0x8(%ebp),%eax
 855fe13:	0f b6 44 d0 0c       	movzbl 0xc(%eax,%edx,8),%eax
 855fe18:	83 f0 01             	xor    $0x1,%eax
 855fe1b:	84 c0                	test   %al,%al
 855fe1d:	74 1f                	je     855fe3e <_ZN14TeamInfoSecond3addEP5CUser+0x40>
 855fe1f:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fe22:	8b 45 08             	mov    0x8(%ebp),%eax
 855fe25:	c6 44 d0 0c 01       	movb   $0x1,0xc(%eax,%edx,8)
 855fe2a:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fe2d:	8b 45 08             	mov    0x8(%ebp),%eax
 855fe30:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 855fe33:	89 4c d0 08          	mov    %ecx,0x8(%eax,%edx,8)
 855fe37:	b8 01 00 00 00       	mov    $0x1,%eax
 855fe3c:	eb 14                	jmp    855fe52 <_ZN14TeamInfoSecond3addEP5CUser+0x54>
 855fe3e:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855fe42:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 855fe46:	0f 9e c0             	setle  %al
 855fe49:	84 c0                	test   %al,%al
 855fe4b:	75 c0                	jne    855fe0d <_ZN14TeamInfoSecond3addEP5CUser+0xf>
 855fe4d:	b8 00 00 00 00       	mov    $0x0,%eax
 855fe52:	c9                   	leave
 855fe53:	c3                   	ret

```

```c
// TeamInfoSecond::add @ 0x855fdfe

/* TeamInfoSecond::add(CUser*) */

undefined4 __thiscall TeamInfoSecond::add(TeamInfoSecond *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (this[local_8 * 8 + 0xc] != (TeamInfoSecond)0x1) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 8 + 0xc] = (TeamInfoSecond)0x1;
  *(CUser **)(this + local_8 * 8 + 8) = param_1;
  return 1;
}

```

---

## del

```asm
// === 0855fe54 TeamInfoSecond::del  [0x0855fe54-0x855fea9] ===
 855fe54:	55                   	push   %ebp
 855fe55:	89 e5                	mov    %esp,%ebp
 855fe57:	83 ec 10             	sub    $0x10,%esp
 855fe5a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855fe61:	eb 34                	jmp    855fe97 <_ZN14TeamInfoSecond3delEP5CUser+0x43>
 855fe63:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fe66:	8b 45 08             	mov    0x8(%ebp),%eax
 855fe69:	0f b6 44 d0 0c       	movzbl 0xc(%eax,%edx,8),%eax
 855fe6e:	84 c0                	test   %al,%al
 855fe70:	74 21                	je     855fe93 <_ZN14TeamInfoSecond3delEP5CUser+0x3f>
 855fe72:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fe75:	8b 45 08             	mov    0x8(%ebp),%eax
 855fe78:	8b 44 d0 08          	mov    0x8(%eax,%edx,8),%eax
 855fe7c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 855fe7f:	75 12                	jne    855fe93 <_ZN14TeamInfoSecond3delEP5CUser+0x3f>
 855fe81:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fe84:	8b 45 08             	mov    0x8(%ebp),%eax
 855fe87:	c6 44 d0 0c 00       	movb   $0x0,0xc(%eax,%edx,8)
 855fe8c:	b8 01 00 00 00       	mov    $0x1,%eax
 855fe91:	eb 14                	jmp    855fea7 <_ZN14TeamInfoSecond3delEP5CUser+0x53>
 855fe93:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855fe97:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 855fe9b:	0f 9e c0             	setle  %al
 855fe9e:	84 c0                	test   %al,%al
 855fea0:	75 c1                	jne    855fe63 <_ZN14TeamInfoSecond3delEP5CUser+0xf>
 855fea2:	b8 00 00 00 00       	mov    $0x0,%eax
 855fea7:	c9                   	leave
 855fea8:	c3                   	ret
 855fea9:	90                   	nop

```

```c
// TeamInfoSecond::del @ 0x855fe54

/* TeamInfoSecond::del(CUser*) */

undefined4 __thiscall TeamInfoSecond::del(TeamInfoSecond *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((this[local_8 * 8 + 0xc] != (TeamInfoSecond)0x0) &&
       (*(CUser **)(this + local_8 * 8 + 8) == param_1)) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 8 + 0xc] = (TeamInfoSecond)0x0;
  return 1;
}

```

---

## refresh

```asm
// === 0855fcf6 TeamInfoSecond::refresh  [0x0855fcf6-0x855fdbf] ===
 855fcf6:	55                   	push   %ebp
 855fcf7:	89 e5                	mov    %esp,%ebp
 855fcf9:	83 ec 28             	sub    $0x28,%esp
 855fcfc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 855fd03:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855fd0a:	eb 30                	jmp    855fd3c <_ZN14TeamInfoSecond7refreshEv+0x46>
 855fd0c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 855fd0f:	8b 45 08             	mov    0x8(%ebp),%eax
 855fd12:	0f b6 44 d0 0c       	movzbl 0xc(%eax,%edx,8),%eax
 855fd17:	84 c0                	test   %al,%al
 855fd19:	74 1d                	je     855fd38 <_ZN14TeamInfoSecond7refreshEv+0x42>
 855fd1b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 855fd1e:	8b 45 08             	mov    0x8(%ebp),%eax
 855fd21:	8b 44 d0 08          	mov    0x8(%eax,%edx,8),%eax
 855fd25:	85 c0                	test   %eax,%eax
 855fd27:	74 0f                	je     855fd38 <_ZN14TeamInfoSecond7refreshEv+0x42>
 855fd29:	8b 55 f4             	mov    -0xc(%ebp),%edx
 855fd2c:	8b 45 08             	mov    0x8(%ebp),%eax
 855fd2f:	8b 44 d0 08          	mov    0x8(%eax,%edx,8),%eax
 855fd33:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855fd36:	eb 0f                	jmp    855fd47 <_ZN14TeamInfoSecond7refreshEv+0x51>
 855fd38:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855fd3c:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855fd40:	0f 9e c0             	setle  %al
 855fd43:	84 c0                	test   %al,%al
 855fd45:	75 c5                	jne    855fd0c <_ZN14TeamInfoSecond7refreshEv+0x16>
 855fd47:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 855fd4b:	74 70                	je     855fdbd <_ZN14TeamInfoSecond7refreshEv+0xc7>
 855fd4d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855fd50:	89 04 24             	mov    %eax,(%esp)
 855fd53:	e8 8a 60 0e 00       	call   8645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>
 855fd58:	8b 55 08             	mov    0x8(%ebp),%edx
 855fd5b:	89 02                	mov    %eax,(%edx)
 855fd5d:	e8 86 01 00 00       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 855fd62:	3c 01                	cmp    $0x1,%al
 855fd64:	0f 94 c0             	sete   %al
 855fd67:	84 c0                	test   %al,%al
 855fd69:	74 23                	je     855fd8e <_ZN14TeamInfoSecond7refreshEv+0x98>
 855fd6b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 855fd72:	00 
 855fd73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855fd76:	89 04 24             	mov    %eax,(%esp)
 855fd79:	e8 06 d8 b7 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 855fd7e:	89 04 24             	mov    %eax,(%esp)
 855fd81:	e8 7c 91 00 00       	call   8568f02 <_ZNK18online_preliminary24COnlinePreliminaryMember9GetRatingEv>
 855fd86:	8b 45 08             	mov    0x8(%ebp),%eax
 855fd89:	d9 58 04             	fstps  0x4(%eax)
 855fd8c:	eb 30                	jmp    855fdbe <_ZN14TeamInfoSecond7refreshEv+0xc8>
 855fd8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855fd91:	89 04 24             	mov    %eax,(%esp)
 855fd94:	e8 51 90 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 855fd99:	85 c0                	test   %eax,%eax
 855fd9b:	0f 95 c0             	setne  %al
 855fd9e:	84 c0                	test   %al,%al
 855fda0:	74 1c                	je     855fdbe <_ZN14TeamInfoSecond7refreshEv+0xc8>
 855fda2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855fda5:	89 04 24             	mov    %eax,(%esp)
 855fda8:	e8 3d 90 00 00       	call   8568dea <_ZN15CUserCharacInfo33GetCurCharacOnlinePreliminaryTeamEv>
 855fdad:	89 04 24             	mov    %eax,(%esp)
 855fdb0:	e8 39 91 00 00       	call   8568eee <_ZNK18online_preliminary22COnlinePreliminaryTeam9GetRatingEv>
 855fdb5:	8b 45 08             	mov    0x8(%ebp),%eax
 855fdb8:	d9 58 04             	fstps  0x4(%eax)
 855fdbb:	eb 01                	jmp    855fdbe <_ZN14TeamInfoSecond7refreshEv+0xc8>
 855fdbd:	90                   	nop
 855fdbe:	c9                   	leave
 855fdbf:	c3                   	ret

```

```c
// TeamInfoSecond::refresh @ 0x855fcf6

/* TeamInfoSecond::refresh() */

void __thiscall TeamInfoSecond::refresh(TeamInfoSecond *this)

{
  char cVar1;
  undefined4 uVar2;
  COnlinePreliminaryMember *this_00;
  int iVar3;
  COnlinePreliminaryTeam *this_01;
  longdouble lVar4;
  CUser *local_14;
  int local_10;
  
  local_14 = (CUser *)0x0;
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_0855fd47:
      if (local_14 != (CUser *)0x0) {
        uVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)local_14);
        *(undefined4 *)this = uVar2;
        cVar1 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
        if (cVar1 == '\x01') {
          this_00 = (COnlinePreliminaryMember *)CUser::GetCharacExpandData(local_14,4);
          lVar4 = (longdouble)online_preliminary::COnlinePreliminaryMember::GetRating(this_00);
          *(float *)(this + 4) = (float)lVar4;
        }
        else {
          iVar3 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam((CUserCharacInfo *)local_14);
          if (iVar3 != 0) {
            this_01 = (COnlinePreliminaryTeam *)
                      CUserCharacInfo::GetCurCharacOnlinePreliminaryTeam
                                ((CUserCharacInfo *)local_14);
            lVar4 = (longdouble)online_preliminary::COnlinePreliminaryTeam::GetRating(this_01);
            *(float *)(this + 4) = (float)lVar4;
          }
        }
      }
      return;
    }
    if ((this[local_10 * 8 + 0xc] != (TeamInfoSecond)0x0) &&
       (*(int *)(this + local_10 * 8 + 8) != 0)) {
      local_14 = *(CUser **)(this + local_10 * 8 + 8);
      goto LAB_0855fd47;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## reset

```asm
// === 0855fdc0 TeamInfoSecond::reset  [0x0855fdc0-0x855fdfd] ===
 855fdc0:	55                   	push   %ebp
 855fdc1:	89 e5                	mov    %esp,%ebp
 855fdc3:	83 ec 28             	sub    $0x28,%esp
 855fdc6:	8b 45 08             	mov    0x8(%ebp),%eax
 855fdc9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 855fdcf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855fdd6:	eb 18                	jmp    855fdf0 <_ZN14TeamInfoSecond5resetEv+0x30>
 855fdd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855fddb:	c1 e0 03             	shl    $0x3,%eax
 855fdde:	03 45 08             	add    0x8(%ebp),%eax
 855fde1:	83 c0 08             	add    $0x8,%eax
 855fde4:	89 04 24             	mov    %eax,(%esp)
 855fde7:	e8 64 8a 00 00       	call   8568850 <_ZN16PlayerInfoSecond5resetEv>
 855fdec:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855fdf0:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855fdf4:	0f 9e c0             	setle  %al
 855fdf7:	84 c0                	test   %al,%al
 855fdf9:	75 dd                	jne    855fdd8 <_ZN14TeamInfoSecond5resetEv+0x18>
 855fdfb:	c9                   	leave
 855fdfc:	c3                   	ret
 855fdfd:	90                   	nop

```

```c
// TeamInfoSecond::reset @ 0x855fdc0

/* TeamInfoSecond::reset() */

void __thiscall TeamInfoSecond::reset(TeamInfoSecond *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    PlayerInfoSecond::reset((PlayerInfoSecond *)(this + local_10 * 8 + 8));
  }
  return;
}

```

---

## size

```asm
// === 0855feaa TeamInfoSecond::size  [0x0855feaa-0x855fee7] ===
 855feaa:	55                   	push   %ebp
 855feab:	89 e5                	mov    %esp,%ebp
 855fead:	83 ec 10             	sub    $0x10,%esp
 855feb0:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 855feb7:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855febe:	eb 17                	jmp    855fed7 <_ZNK14TeamInfoSecond4sizeEv+0x2d>
 855fec0:	8b 55 fc             	mov    -0x4(%ebp),%edx
 855fec3:	8b 45 08             	mov    0x8(%ebp),%eax
 855fec6:	0f b6 44 d0 0c       	movzbl 0xc(%eax,%edx,8),%eax
 855fecb:	84 c0                	test   %al,%al
 855fecd:	74 04                	je     855fed3 <_ZNK14TeamInfoSecond4sizeEv+0x29>
 855fecf:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 855fed3:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855fed7:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 855fedb:	0f 9e c0             	setle  %al
 855fede:	84 c0                	test   %al,%al
 855fee0:	75 de                	jne    855fec0 <_ZNK14TeamInfoSecond4sizeEv+0x16>
 855fee2:	8b 45 f8             	mov    -0x8(%ebp),%eax
 855fee5:	c9                   	leave
 855fee6:	c3                   	ret
 855fee7:	90                   	nop

```

```c
// TeamInfoSecond::size @ 0x855feaa

/* TeamInfoSecond::size() const */

int __thiscall TeamInfoSecond::size(TeamInfoSecond *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 * 8 + 0xc] != (TeamInfoSecond)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

