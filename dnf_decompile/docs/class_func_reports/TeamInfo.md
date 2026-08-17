# TeamInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## add

```asm
// === 0855cb54 TeamInfo::add  [0x0855cb54-0x855cc9b] ===
 855cb54:	55                   	push   %ebp
 855cb55:	89 e5                	mov    %esp,%ebp
 855cb57:	56                   	push   %esi
 855cb58:	53                   	push   %ebx
 855cb59:	83 ec 20             	sub    $0x20,%esp
 855cb5c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855cb63:	e9 18 01 00 00       	jmp    855cc80 <_ZN8TeamInfo3addEP5CUser+0x12c>
 855cb68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cb6b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855cb6e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cb75:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cb7c:	29 d0                	sub    %edx,%eax
 855cb7e:	0f b6 44 08 0c       	movzbl 0xc(%eax,%ecx,1),%eax
 855cb83:	83 f0 01             	xor    $0x1,%eax
 855cb86:	84 c0                	test   %al,%al
 855cb88:	0f 84 ee 00 00 00    	je     855cc7c <_ZN8TeamInfo3addEP5CUser+0x128>
 855cb8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cb91:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855cb94:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cb9b:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cba2:	29 d0                	sub    %edx,%eax
 855cba4:	c6 44 08 0c 01       	movb   $0x1,0xc(%eax,%ecx,1)
 855cba9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cbac:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855cbaf:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cbb6:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cbbd:	29 d0                	sub    %edx,%eax
 855cbbf:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855cbc2:	8d 50 08             	lea    0x8(%eax),%edx
 855cbc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cbc8:	89 02                	mov    %eax,(%edx)
 855cbca:	8b 75 f4             	mov    -0xc(%ebp),%esi
 855cbcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cbd0:	89 04 24             	mov    %eax,(%esp)
 855cbd3:	e8 96 d7 b7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 855cbd8:	89 c1                	mov    %eax,%ecx
 855cbda:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855cbdd:	89 f0                	mov    %esi,%eax
 855cbdf:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cbe6:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cbed:	29 d0                	sub    %edx,%eax
 855cbef:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 855cbf2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 855cbf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cbf8:	89 04 24             	mov    %eax,(%esp)
 855cbfb:	e8 84 c2 00 00       	call   8568e84 <_ZN5CUser9GetRatingEv>
 855cc00:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855cc03:	89 d8                	mov    %ebx,%eax
 855cc05:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cc0c:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cc13:	29 d0                	sub    %edx,%eax
 855cc15:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855cc18:	83 c0 04             	add    $0x4,%eax
 855cc1b:	d9 18                	fstps  (%eax)
 855cc1d:	8b 75 f4             	mov    -0xc(%ebp),%esi
 855cc20:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cc23:	89 04 24             	mov    %eax,(%esp)
 855cc26:	e8 d7 31 cd ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 855cc2b:	89 c1                	mov    %eax,%ecx
 855cc2d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855cc30:	89 f0                	mov    %esi,%eax
 855cc32:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cc39:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cc40:	29 d0                	sub    %edx,%eax
 855cc42:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855cc45:	83 c0 10             	add    $0x10,%eax
 855cc48:	89 08                	mov    %ecx,(%eax)
 855cc4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cc4d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cc54:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cc5b:	29 d0                	sub    %edx,%eax
 855cc5d:	83 c0 10             	add    $0x10,%eax
 855cc60:	03 45 08             	add    0x8(%ebp),%eax
 855cc63:	83 c0 04             	add    $0x4,%eax
 855cc66:	89 44 24 04          	mov    %eax,0x4(%esp)
 855cc6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 855cc6d:	89 04 24             	mov    %eax,(%esp)
 855cc70:	e8 97 c1 00 00       	call   8568e0c <_ZN5CUser13GetDailyBadgeEPs>
 855cc75:	b8 01 00 00 00       	mov    $0x1,%eax
 855cc7a:	eb 18                	jmp    855cc94 <_ZN8TeamInfo3addEP5CUser+0x140>
 855cc7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855cc80:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855cc84:	0f 9e c0             	setle  %al
 855cc87:	84 c0                	test   %al,%al
 855cc89:	0f 85 d9 fe ff ff    	jne    855cb68 <_ZN8TeamInfo3addEP5CUser+0x14>
 855cc8f:	b8 00 00 00 00       	mov    $0x0,%eax
 855cc94:	83 c4 20             	add    $0x20,%esp
 855cc97:	5b                   	pop    %ebx
 855cc98:	5e                   	pop    %esi
 855cc99:	5d                   	pop    %ebp
 855cc9a:	c3                   	ret
 855cc9b:	90                   	nop

```

```c
// TeamInfo::add @ 0x855cb54

/* TeamInfo::add(CUser*) */

undefined4 __thiscall TeamInfo::add(TeamInfo *this,CUser *param_1)

{
  undefined4 uVar1;
  longdouble lVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    if (this[local_10 * 0x1c + 0xc] != (TeamInfo)0x1) break;
    local_10 = local_10 + 1;
  }
  this[local_10 * 0x1c + 0xc] = (TeamInfo)0x1;
  *(CUser **)(this + local_10 * 0x1c + 8) = param_1;
  uVar1 = CUser::get_acc_id(param_1);
  *(undefined4 *)(this + local_10 * 0x1c) = uVar1;
  lVar2 = (longdouble)CUser::GetRating(param_1);
  *(float *)(this + local_10 * 0x1c + 4) = (float)lVar2;
  uVar1 = CUser::GetSchoolNo(param_1);
  *(undefined4 *)(this + local_10 * 0x1c + 0x10) = uVar1;
  CUser::GetDailyBadge(param_1,(short *)(this + local_10 * 0x1c + 0x14));
  return 1;
}

```

---

## del

```asm
// === 0855cc9c TeamInfo::del  [0x0855cc9c-0x855cd25] ===
 855cc9c:	55                   	push   %ebp
 855cc9d:	89 e5                	mov    %esp,%ebp
 855cc9f:	83 ec 10             	sub    $0x10,%esp
 855cca2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855cca9:	eb 68                	jmp    855cd13 <_ZN8TeamInfo3delEP5CUser+0x77>
 855ccab:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855ccae:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855ccb1:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ccb8:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ccbf:	29 d0                	sub    %edx,%eax
 855ccc1:	0f b6 44 08 0c       	movzbl 0xc(%eax,%ecx,1),%eax
 855ccc6:	84 c0                	test   %al,%al
 855ccc8:	74 45                	je     855cd0f <_ZN8TeamInfo3delEP5CUser+0x73>
 855ccca:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855cccd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855ccd0:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ccd7:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ccde:	29 d0                	sub    %edx,%eax
 855cce0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855cce3:	83 c0 08             	add    $0x8,%eax
 855cce6:	8b 00                	mov    (%eax),%eax
 855cce8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 855cceb:	75 22                	jne    855cd0f <_ZN8TeamInfo3delEP5CUser+0x73>
 855cced:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855ccf0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855ccf3:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ccfa:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cd01:	29 d0                	sub    %edx,%eax
 855cd03:	c6 44 08 0c 00       	movb   $0x0,0xc(%eax,%ecx,1)
 855cd08:	b8 01 00 00 00       	mov    $0x1,%eax
 855cd0d:	eb 14                	jmp    855cd23 <_ZN8TeamInfo3delEP5CUser+0x87>
 855cd0f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855cd13:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 855cd17:	0f 9e c0             	setle  %al
 855cd1a:	84 c0                	test   %al,%al
 855cd1c:	75 8d                	jne    855ccab <_ZN8TeamInfo3delEP5CUser+0xf>
 855cd1e:	b8 00 00 00 00       	mov    $0x0,%eax
 855cd23:	c9                   	leave
 855cd24:	c3                   	ret
 855cd25:	90                   	nop

```

```c
// TeamInfo::del @ 0x855cc9c

/* TeamInfo::del(CUser*) */

undefined4 __thiscall TeamInfo::del(TeamInfo *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((this[local_8 * 0x1c + 0xc] != (TeamInfo)0x0) &&
       (*(CUser **)(this + local_8 * 0x1c + 8) == param_1)) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 0x1c + 0xc] = (TeamInfo)0x0;
  return 1;
}

```

---

## refresh

```asm
// === 0855c9ae TeamInfo::refresh  [0x0855c9ae-0x855cb15] ===
 855c9ae:	55                   	push   %ebp
 855c9af:	89 e5                	mov    %esp,%ebp
 855c9b1:	56                   	push   %esi
 855c9b2:	53                   	push   %ebx
 855c9b3:	83 ec 20             	sub    $0x20,%esp
 855c9b6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855c9bd:	e9 3e 01 00 00       	jmp    855cb00 <_ZN8TeamInfo7refreshEv+0x152>
 855c9c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855c9c5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855c9c8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855c9cf:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855c9d6:	29 d0                	sub    %edx,%eax
 855c9d8:	0f b6 44 08 0c       	movzbl 0xc(%eax,%ecx,1),%eax
 855c9dd:	84 c0                	test   %al,%al
 855c9df:	0f 84 17 01 00 00    	je     855cafc <_ZN8TeamInfo7refreshEv+0x14e>
 855c9e5:	8b 75 f4             	mov    -0xc(%ebp),%esi
 855c9e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855c9eb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855c9ee:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855c9f5:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855c9fc:	29 d0                	sub    %edx,%eax
 855c9fe:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ca01:	83 c0 08             	add    $0x8,%eax
 855ca04:	8b 00                	mov    (%eax),%eax
 855ca06:	89 04 24             	mov    %eax,(%esp)
 855ca09:	e8 60 d9 b7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 855ca0e:	89 c1                	mov    %eax,%ecx
 855ca10:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855ca13:	89 f0                	mov    %esi,%eax
 855ca15:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ca1c:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ca23:	29 d0                	sub    %edx,%eax
 855ca25:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 855ca28:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 855ca2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855ca2e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855ca31:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ca38:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ca3f:	29 d0                	sub    %edx,%eax
 855ca41:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ca44:	83 c0 08             	add    $0x8,%eax
 855ca47:	8b 00                	mov    (%eax),%eax
 855ca49:	89 04 24             	mov    %eax,(%esp)
 855ca4c:	e8 33 c4 00 00       	call   8568e84 <_ZN5CUser9GetRatingEv>
 855ca51:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855ca54:	89 d8                	mov    %ebx,%eax
 855ca56:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ca5d:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ca64:	29 d0                	sub    %edx,%eax
 855ca66:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ca69:	83 c0 04             	add    $0x4,%eax
 855ca6c:	d9 18                	fstps  (%eax)
 855ca6e:	8b 75 f4             	mov    -0xc(%ebp),%esi
 855ca71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855ca74:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855ca77:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855ca7e:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855ca85:	29 d0                	sub    %edx,%eax
 855ca87:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 855ca8a:	83 c0 08             	add    $0x8,%eax
 855ca8d:	8b 00                	mov    (%eax),%eax
 855ca8f:	89 04 24             	mov    %eax,(%esp)
 855ca92:	e8 6b 33 cd ff       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 855ca97:	89 c1                	mov    %eax,%ecx
 855ca99:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855ca9c:	89 f0                	mov    %esi,%eax
 855ca9e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855caa5:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855caac:	29 d0                	sub    %edx,%eax
 855caae:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855cab1:	83 c0 10             	add    $0x10,%eax
 855cab4:	89 08                	mov    %ecx,(%eax)
 855cab6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cab9:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cac0:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cac7:	29 d0                	sub    %edx,%eax
 855cac9:	83 c0 10             	add    $0x10,%eax
 855cacc:	03 45 08             	add    0x8(%ebp),%eax
 855cacf:	8d 48 04             	lea    0x4(%eax),%ecx
 855cad2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cad5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 855cad8:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cadf:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cae6:	29 d0                	sub    %edx,%eax
 855cae8:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 855caeb:	83 c0 08             	add    $0x8,%eax
 855caee:	8b 00                	mov    (%eax),%eax
 855caf0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 855caf4:	89 04 24             	mov    %eax,(%esp)
 855caf7:	e8 10 c3 00 00       	call   8568e0c <_ZN5CUser13GetDailyBadgeEPs>
 855cafc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855cb00:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855cb04:	0f 9e c0             	setle  %al
 855cb07:	84 c0                	test   %al,%al
 855cb09:	0f 85 b3 fe ff ff    	jne    855c9c2 <_ZN8TeamInfo7refreshEv+0x14>
 855cb0f:	83 c4 20             	add    $0x20,%esp
 855cb12:	5b                   	pop    %ebx
 855cb13:	5e                   	pop    %esi
 855cb14:	5d                   	pop    %ebp
 855cb15:	c3                   	ret

```

```c
// TeamInfo::refresh @ 0x855c9ae

/* TeamInfo::refresh() */

void __thiscall TeamInfo::refresh(TeamInfo *this)

{
  undefined4 uVar1;
  longdouble lVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if (this[local_10 * 0x1c + 0xc] != (TeamInfo)0x0) {
      uVar1 = CUser::get_acc_id(*(CUser **)(this + local_10 * 0x1c + 8));
      *(undefined4 *)(this + local_10 * 0x1c) = uVar1;
      lVar2 = (longdouble)CUser::GetRating(*(CUser **)(this + local_10 * 0x1c + 8));
      *(float *)(this + local_10 * 0x1c + 4) = (float)lVar2;
      uVar1 = CUser::GetSchoolNo(*(CUser **)(this + local_10 * 0x1c + 8));
      *(undefined4 *)(this + local_10 * 0x1c + 0x10) = uVar1;
      CUser::GetDailyBadge
                (*(CUser **)(this + local_10 * 0x1c + 8),(short *)(this + local_10 * 0x1c + 0x14));
    }
  }
  return;
}

```

---

## reset

```asm
// === 0855cb16 TeamInfo::reset  [0x0855cb16-0x855cb53] ===
 855cb16:	55                   	push   %ebp
 855cb17:	89 e5                	mov    %esp,%ebp
 855cb19:	83 ec 28             	sub    $0x28,%esp
 855cb1c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 855cb23:	eb 22                	jmp    855cb47 <_ZN8TeamInfo5resetEv+0x31>
 855cb25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855cb28:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cb2f:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cb36:	29 d0                	sub    %edx,%eax
 855cb38:	03 45 08             	add    0x8(%ebp),%eax
 855cb3b:	89 04 24             	mov    %eax,(%esp)
 855cb3e:	e8 91 bc 00 00       	call   85687d4 <_ZN10PlayerInfo5resetEv>
 855cb43:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 855cb47:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 855cb4b:	0f 9e c0             	setle  %al
 855cb4e:	84 c0                	test   %al,%al
 855cb50:	75 d3                	jne    855cb25 <_ZN8TeamInfo5resetEv+0xf>
 855cb52:	c9                   	leave
 855cb53:	c3                   	ret

```

```c
// TeamInfo::reset @ 0x855cb16

/* TeamInfo::reset() */

void __thiscall TeamInfo::reset(TeamInfo *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    PlayerInfo::reset((PlayerInfo *)(this + local_10 * 0x1c));
  }
  return;
}

```

---

## size

```asm
// === 0855cd26 TeamInfo::size  [0x0855cd26-0x855cd73] ===
 855cd26:	55                   	push   %ebp
 855cd27:	89 e5                	mov    %esp,%ebp
 855cd29:	83 ec 10             	sub    $0x10,%esp
 855cd2c:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 855cd33:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 855cd3a:	eb 27                	jmp    855cd63 <_ZNK8TeamInfo4sizeEv+0x3d>
 855cd3c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 855cd3f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 855cd42:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 855cd49:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 855cd50:	29 d0                	sub    %edx,%eax
 855cd52:	0f b6 44 08 0c       	movzbl 0xc(%eax,%ecx,1),%eax
 855cd57:	84 c0                	test   %al,%al
 855cd59:	74 04                	je     855cd5f <_ZNK8TeamInfo4sizeEv+0x39>
 855cd5b:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 855cd5f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 855cd63:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 855cd67:	0f 9e c0             	setle  %al
 855cd6a:	84 c0                	test   %al,%al
 855cd6c:	75 ce                	jne    855cd3c <_ZNK8TeamInfo4sizeEv+0x16>
 855cd6e:	8b 45 f8             	mov    -0x8(%ebp),%eax
 855cd71:	c9                   	leave
 855cd72:	c3                   	ret
 855cd73:	90                   	nop

```

```c
// TeamInfo::size @ 0x855cd26

/* TeamInfo::size() const */

int __thiscall TeamInfo::size(TeamInfo *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 * 0x1c + 0xc] != (TeamInfo)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

