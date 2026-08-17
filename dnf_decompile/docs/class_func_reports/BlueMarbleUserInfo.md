# BlueMarbleUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 24

---

## BlueMarbleUserInfo

```asm
// === 080d6a90 BlueMarbleUserInfo::BlueMarbleUserInfo  [0x080d6a90-0x80d6b01] ===
 80d6a90:	55                   	push   %ebp
 80d6a91:	89 e5                	mov    %esp,%ebp
 80d6a93:	83 ec 18             	sub    $0x18,%esp
 80d6a96:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6a99:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80d6a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6aa2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80d6aa9:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6aac:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 80d6ab3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ab6:	c7 40 0c 04 00 00 00 	movl   $0x4,0xc(%eax)
 80d6abd:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ac0:	83 c0 10             	add    $0x10,%eax
 80d6ac3:	89 04 24             	mov    %eax,(%esp)
 80d6ac6:	e8 f5 33 00 00       	call   80d9ec0 <_ZN8BuffInfoC1Ev>
 80d6acb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ace:	83 c0 1c             	add    $0x1c,%eax
 80d6ad1:	89 04 24             	mov    %eax,(%esp)
 80d6ad4:	e8 2b 34 00 00       	call   80d9f04 <_ZN13TileIndexInfoC1Ev>
 80d6ad9:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6adc:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 80d6ae3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ae6:	83 c0 10             	add    $0x10,%eax
 80d6ae9:	89 04 24             	mov    %eax,(%esp)
 80d6aec:	e8 f1 33 00 00       	call   80d9ee2 <_ZN8BuffInfo5resetEv>
 80d6af1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6af4:	83 c0 1c             	add    $0x1c,%eax
 80d6af7:	89 04 24             	mov    %eax,(%esp)
 80d6afa:	e8 1d 34 00 00       	call   80d9f1c <_ZN13TileIndexInfo5resetEv>
 80d6aff:	c9                   	leave
 80d6b00:	c3                   	ret
 80d6b01:	90                   	nop

```

```c
// BlueMarbleUserInfo::BlueMarbleUserInfo @ 0x80d6a90

/* BlueMarbleUserInfo::BlueMarbleUserInfo() */

void __thiscall BlueMarbleUserInfo::BlueMarbleUserInfo(BlueMarbleUserInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 4;
  BuffInfo::BuffInfo((BuffInfo *)(this + 0x10));
  TileIndexInfo::TileIndexInfo((TileIndexInfo *)(this + 0x1c));
  *(undefined4 *)(this + 0x24) = 0;
  BuffInfo::reset((BuffInfo *)(this + 0x10));
  TileIndexInfo::reset((TileIndexInfo *)(this + 0x1c));
  return;
}

```

---

## getBoardZone

```asm
// === 080d6c04 BlueMarbleUserInfo::getBoardZone  [0x080d6c04-0x80d6c0f] ===
 80d6c04:	55                   	push   %ebp
 80d6c05:	89 e5                	mov    %esp,%ebp
 80d6c07:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c0a:	8b 40 08             	mov    0x8(%eax),%eax
 80d6c0d:	5d                   	pop    %ebp
 80d6c0e:	c3                   	ret
 80d6c0f:	90                   	nop

```

```c
// BlueMarbleUserInfo::getBoardZone @ 0x80d6c04

/* BlueMarbleUserInfo::getBoardZone() const */

undefined4 __thiscall BlueMarbleUserInfo::getBoardZone(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## getDrop

```asm
// === 080d6d3c BlueMarbleUserInfo::getDrop  [0x080d6d3c-0x80d6d47] ===
 80d6d3c:	55                   	push   %ebp
 80d6d3d:	89 e5                	mov    %esp,%ebp
 80d6d3f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d42:	8b 40 18             	mov    0x18(%eax),%eax
 80d6d45:	5d                   	pop    %ebp
 80d6d46:	c3                   	ret
 80d6d47:	90                   	nop

```

```c
// BlueMarbleUserInfo::getDrop @ 0x80d6d3c

/* BlueMarbleUserInfo::getDrop() const */

undefined4 __thiscall BlueMarbleUserInfo::getDrop(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x18);
}

```

---

## getDungeon

```asm
// === 080d6c38 BlueMarbleUserInfo::getDungeon  [0x080d6c38-0x80d6c43] ===
 80d6c38:	55                   	push   %ebp
 80d6c39:	89 e5                	mov    %esp,%ebp
 80d6c3b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c3e:	8b 40 1c             	mov    0x1c(%eax),%eax
 80d6c41:	5d                   	pop    %ebp
 80d6c42:	c3                   	ret
 80d6c43:	90                   	nop

```

```c
// BlueMarbleUserInfo::getDungeon @ 0x80d6c38

/* BlueMarbleUserInfo::getDungeon() const */

undefined4 __thiscall BlueMarbleUserInfo::getDungeon(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x1c);
}

```

---

## getExp

```asm
// === 080d6ca0 BlueMarbleUserInfo::getExp  [0x080d6ca0-0x80d6cab] ===
 80d6ca0:	55                   	push   %ebp
 80d6ca1:	89 e5                	mov    %esp,%ebp
 80d6ca3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ca6:	8b 40 10             	mov    0x10(%eax),%eax
 80d6ca9:	5d                   	pop    %ebp
 80d6caa:	c3                   	ret
 80d6cab:	90                   	nop

```

```c
// BlueMarbleUserInfo::getExp @ 0x80d6ca0

/* BlueMarbleUserInfo::getExp() const */

undefined4 __thiscall BlueMarbleUserInfo::getExp(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## getGold

```asm
// === 080d6cee BlueMarbleUserInfo::getGold  [0x080d6cee-0x80d6cf9] ===
 80d6cee:	55                   	push   %ebp
 80d6cef:	89 e5                	mov    %esp,%ebp
 80d6cf1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6cf4:	8b 40 14             	mov    0x14(%eax),%eax
 80d6cf7:	5d                   	pop    %ebp
 80d6cf8:	c3                   	ret
 80d6cf9:	90                   	nop

```

```c
// BlueMarbleUserInfo::getGold @ 0x80d6cee

/* BlueMarbleUserInfo::getGold() const */

undefined4 __thiscall BlueMarbleUserInfo::getGold(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x14);
}

```

---

## getGrade

```asm
// === 080d6c1e BlueMarbleUserInfo::getGrade  [0x080d6c1e-0x80d6c29] ===
 80d6c1e:	55                   	push   %ebp
 80d6c1f:	89 e5                	mov    %esp,%ebp
 80d6c21:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c24:	8b 40 0c             	mov    0xc(%eax),%eax
 80d6c27:	5d                   	pop    %ebp
 80d6c28:	c3                   	ret
 80d6c29:	90                   	nop

```

```c
// BlueMarbleUserInfo::getGrade @ 0x80d6c1e

/* BlueMarbleUserInfo::getGrade() const */

undefined4 __thiscall BlueMarbleUserInfo::getGrade(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## getItem

```asm
// === 080d6c52 BlueMarbleUserInfo::getItem  [0x080d6c52-0x80d6c5d] ===
 80d6c52:	55                   	push   %ebp
 80d6c53:	89 e5                	mov    %esp,%ebp
 80d6c55:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c58:	8b 40 20             	mov    0x20(%eax),%eax
 80d6c5b:	5d                   	pop    %ebp
 80d6c5c:	c3                   	ret
 80d6c5d:	90                   	nop

```

```c
// BlueMarbleUserInfo::getItem @ 0x80d6c52

/* BlueMarbleUserInfo::getItem() const */

undefined4 __thiscall BlueMarbleUserInfo::getItem(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x20);
}

```

---

## getUser

```asm
// === 080d6b88 BlueMarbleUserInfo::getUser  [0x080d6b88-0x80d6b91] ===
 80d6b88:	55                   	push   %ebp
 80d6b89:	89 e5                	mov    %esp,%ebp
 80d6b8b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b8e:	8b 00                	mov    (%eax),%eax
 80d6b90:	5d                   	pop    %ebp
 80d6b91:	c3                   	ret

```

```c
// BlueMarbleUserInfo::getUser @ 0x80d6b88

/* BlueMarbleUserInfo::getUser() const */

undefined4 __thiscall BlueMarbleUserInfo::getUser(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)this;
}

```

---

## getUserState

```asm
// === 080d6bae BlueMarbleUserInfo::getUserState  [0x080d6bae-0x80d6bb9] ===
 80d6bae:	55                   	push   %ebp
 80d6baf:	89 e5                	mov    %esp,%ebp
 80d6bb1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6bb4:	8b 40 04             	mov    0x4(%eax),%eax
 80d6bb7:	5d                   	pop    %ebp
 80d6bb8:	c3                   	ret
 80d6bb9:	90                   	nop

```

```c
// BlueMarbleUserInfo::getUserState @ 0x80d6bae

/* BlueMarbleUserInfo::getUserState() const */

undefined4 __thiscall BlueMarbleUserInfo::getUserState(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## resetBlueMarbleUserInfo

```asm
// === 080d6b08 BlueMarbleUserInfo::resetBlueMarbleUserInfo  [0x080d6b08-0x80d6b4d] ===
 80d6b08:	55                   	push   %ebp
 80d6b09:	89 e5                	mov    %esp,%ebp
 80d6b0b:	83 ec 18             	sub    $0x18,%esp
 80d6b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b11:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80d6b17:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b1a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80d6b21:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b24:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 80d6b2b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b2e:	c7 40 0c 04 00 00 00 	movl   $0x4,0xc(%eax)
 80d6b35:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b38:	89 04 24             	mov    %eax,(%esp)
 80d6b3b:	e8 0e 00 00 00       	call   80d6b4e <_ZN18BlueMarbleUserInfo9resetBuffEv>
 80d6b40:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b43:	89 04 24             	mov    %eax,(%esp)
 80d6b46:	e8 19 00 00 00       	call   80d6b64 <_ZN18BlueMarbleUserInfo10resetIndexEv>
 80d6b4b:	c9                   	leave
 80d6b4c:	c3                   	ret
 80d6b4d:	90                   	nop

```

```c
// BlueMarbleUserInfo::resetBlueMarbleUserInfo @ 0x80d6b08

/* BlueMarbleUserInfo::resetBlueMarbleUserInfo() */

void __thiscall BlueMarbleUserInfo::resetBlueMarbleUserInfo(BlueMarbleUserInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 4;
  resetBuff(this);
  resetIndex(this);
  return;
}

```

---

## resetBuff

```asm
// === 080d6b4e BlueMarbleUserInfo::resetBuff  [0x080d6b4e-0x80d6b63] ===
 80d6b4e:	55                   	push   %ebp
 80d6b4f:	89 e5                	mov    %esp,%ebp
 80d6b51:	83 ec 18             	sub    $0x18,%esp
 80d6b54:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b57:	83 c0 10             	add    $0x10,%eax
 80d6b5a:	89 04 24             	mov    %eax,(%esp)
 80d6b5d:	e8 80 33 00 00       	call   80d9ee2 <_ZN8BuffInfo5resetEv>
 80d6b62:	c9                   	leave
 80d6b63:	c3                   	ret

```

```c
// BlueMarbleUserInfo::resetBuff @ 0x80d6b4e

/* BlueMarbleUserInfo::resetBuff() */

void __thiscall BlueMarbleUserInfo::resetBuff(BlueMarbleUserInfo *this)

{
  BuffInfo::reset((BuffInfo *)(this + 0x10));
  return;
}

```

---

## resetIndex

```asm
// === 080d6b64 BlueMarbleUserInfo::resetIndex  [0x080d6b64-0x80d6b79] ===
 80d6b64:	55                   	push   %ebp
 80d6b65:	89 e5                	mov    %esp,%ebp
 80d6b67:	83 ec 18             	sub    $0x18,%esp
 80d6b6a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b6d:	83 c0 1c             	add    $0x1c,%eax
 80d6b70:	89 04 24             	mov    %eax,(%esp)
 80d6b73:	e8 a4 33 00 00       	call   80d9f1c <_ZN13TileIndexInfo5resetEv>
 80d6b78:	c9                   	leave
 80d6b79:	c3                   	ret

```

```c
// BlueMarbleUserInfo::resetIndex @ 0x80d6b64

/* BlueMarbleUserInfo::resetIndex() */

void __thiscall BlueMarbleUserInfo::resetIndex(BlueMarbleUserInfo *this)

{
  TileIndexInfo::reset((TileIndexInfo *)(this + 0x1c));
  return;
}

```

---

## setBoardZone

```asm
// === 080d6bba BlueMarbleUserInfo::setBoardZone  [0x080d6bba-0x80d6c03] ===
 80d6bba:	55                   	push   %ebp
 80d6bbb:	89 e5                	mov    %esp,%ebp
 80d6bbd:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6bc0:	8b 40 08             	mov    0x8(%eax),%eax
 80d6bc3:	03 45 0c             	add    0xc(%ebp),%eax
 80d6bc6:	3b 45 10             	cmp    0x10(%ebp),%eax
 80d6bc9:	7c 0b                	jl     80d6bd6 <_ZN18BlueMarbleUserInfo12setBoardZoneEii+0x1c>
 80d6bcb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6bce:	8b 55 10             	mov    0x10(%ebp),%edx
 80d6bd1:	89 50 08             	mov    %edx,0x8(%eax)
 80d6bd4:	eb 2b                	jmp    80d6c01 <_ZN18BlueMarbleUserInfo12setBoardZoneEii+0x47>
 80d6bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6bd9:	8b 40 08             	mov    0x8(%eax),%eax
 80d6bdc:	03 45 0c             	add    0xc(%ebp),%eax
 80d6bdf:	83 f8 01             	cmp    $0x1,%eax
 80d6be2:	7f 0c                	jg     80d6bf0 <_ZN18BlueMarbleUserInfo12setBoardZoneEii+0x36>
 80d6be4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6be7:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 80d6bee:	eb 11                	jmp    80d6c01 <_ZN18BlueMarbleUserInfo12setBoardZoneEii+0x47>
 80d6bf0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6bf3:	8b 40 08             	mov    0x8(%eax),%eax
 80d6bf6:	89 c2                	mov    %eax,%edx
 80d6bf8:	03 55 0c             	add    0xc(%ebp),%edx
 80d6bfb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6bfe:	89 50 08             	mov    %edx,0x8(%eax)
 80d6c01:	5d                   	pop    %ebp
 80d6c02:	c3                   	ret
 80d6c03:	90                   	nop

```

```c
// BlueMarbleUserInfo::setBoardZone @ 0x80d6bba

/* BlueMarbleUserInfo::setBoardZone(int, int) */

void __thiscall BlueMarbleUserInfo::setBoardZone(BlueMarbleUserInfo *this,int param_1,int param_2)

{
  if (*(int *)(this + 8) + param_1 < param_2) {
    if (*(int *)(this + 8) + param_1 < 2) {
      *(undefined4 *)(this + 8) = 1;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + param_1;
    }
  }
  else {
    *(int *)(this + 8) = param_2;
  }
  return;
}

```

---

## setDrop

```asm
// === 080d6cfa BlueMarbleUserInfo::setDrop  [0x080d6cfa-0x80d6d3b] ===
 80d6cfa:	55                   	push   %ebp
 80d6cfb:	89 e5                	mov    %esp,%ebp
 80d6cfd:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d00:	8b 40 18             	mov    0x18(%eax),%eax
 80d6d03:	89 c2                	mov    %eax,%edx
 80d6d05:	0f af 55 0c          	imul   0xc(%ebp),%edx
 80d6d09:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d0c:	8b 40 24             	mov    0x24(%eax),%eax
 80d6d0f:	8b 40 64             	mov    0x64(%eax),%eax
 80d6d12:	39 c2                	cmp    %eax,%edx
 80d6d14:	7c 11                	jl     80d6d27 <_ZN18BlueMarbleUserInfo7setDropEi+0x2d>
 80d6d16:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d19:	8b 40 24             	mov    0x24(%eax),%eax
 80d6d1c:	8b 50 64             	mov    0x64(%eax),%edx
 80d6d1f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d22:	89 50 18             	mov    %edx,0x18(%eax)
 80d6d25:	eb 12                	jmp    80d6d39 <_ZN18BlueMarbleUserInfo7setDropEi+0x3f>
 80d6d27:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d2a:	8b 40 18             	mov    0x18(%eax),%eax
 80d6d2d:	89 c2                	mov    %eax,%edx
 80d6d2f:	0f af 55 0c          	imul   0xc(%ebp),%edx
 80d6d33:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d36:	89 50 18             	mov    %edx,0x18(%eax)
 80d6d39:	5d                   	pop    %ebp
 80d6d3a:	c3                   	ret
 80d6d3b:	90                   	nop

```

```c
// BlueMarbleUserInfo::setDrop @ 0x80d6cfa

/* BlueMarbleUserInfo::setDrop(int) */

void __thiscall BlueMarbleUserInfo::setDrop(BlueMarbleUserInfo *this,int param_1)

{
  if (*(int *)(this + 0x18) * param_1 < *(int *)(*(int *)(this + 0x24) + 100)) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) * param_1;
  }
  else {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(*(int *)(this + 0x24) + 100);
  }
  return;
}

```

---

## setDungeon

```asm
// === 080d6c2a BlueMarbleUserInfo::setDungeon  [0x080d6c2a-0x80d6c37] ===
 80d6c2a:	55                   	push   %ebp
 80d6c2b:	89 e5                	mov    %esp,%ebp
 80d6c2d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c30:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d6c33:	89 50 1c             	mov    %edx,0x1c(%eax)
 80d6c36:	5d                   	pop    %ebp
 80d6c37:	c3                   	ret

```

```c
// BlueMarbleUserInfo::setDungeon @ 0x80d6c2a

/* BlueMarbleUserInfo::setDungeon(int) */

void __thiscall BlueMarbleUserInfo::setDungeon(BlueMarbleUserInfo *this,int param_1)

{
  *(int *)(this + 0x1c) = param_1;
  return;
}

```

---

## setExp

```asm
// === 080d6c5e BlueMarbleUserInfo::setExp  [0x080d6c5e-0x80d6c9f] ===
 80d6c5e:	55                   	push   %ebp
 80d6c5f:	89 e5                	mov    %esp,%ebp
 80d6c61:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c64:	8b 40 10             	mov    0x10(%eax),%eax
 80d6c67:	89 c2                	mov    %eax,%edx
 80d6c69:	0f af 55 0c          	imul   0xc(%ebp),%edx
 80d6c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c70:	8b 40 24             	mov    0x24(%eax),%eax
 80d6c73:	8b 40 64             	mov    0x64(%eax),%eax
 80d6c76:	39 c2                	cmp    %eax,%edx
 80d6c78:	7c 11                	jl     80d6c8b <_ZN18BlueMarbleUserInfo6setExpEi+0x2d>
 80d6c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c7d:	8b 40 24             	mov    0x24(%eax),%eax
 80d6c80:	8b 50 64             	mov    0x64(%eax),%edx
 80d6c83:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c86:	89 50 10             	mov    %edx,0x10(%eax)
 80d6c89:	eb 12                	jmp    80d6c9d <_ZN18BlueMarbleUserInfo6setExpEi+0x3f>
 80d6c8b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c8e:	8b 40 10             	mov    0x10(%eax),%eax
 80d6c91:	89 c2                	mov    %eax,%edx
 80d6c93:	0f af 55 0c          	imul   0xc(%ebp),%edx
 80d6c97:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c9a:	89 50 10             	mov    %edx,0x10(%eax)
 80d6c9d:	5d                   	pop    %ebp
 80d6c9e:	c3                   	ret
 80d6c9f:	90                   	nop

```

```c
// BlueMarbleUserInfo::setExp @ 0x80d6c5e

/* BlueMarbleUserInfo::setExp(int) */

void __thiscall BlueMarbleUserInfo::setExp(BlueMarbleUserInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) * param_1 < *(int *)(*(int *)(this + 0x24) + 100)) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) * param_1;
  }
  else {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)(this + 0x24) + 100);
  }
  return;
}

```

---

## setGold

```asm
// === 080d6cac BlueMarbleUserInfo::setGold  [0x080d6cac-0x80d6ced] ===
 80d6cac:	55                   	push   %ebp
 80d6cad:	89 e5                	mov    %esp,%ebp
 80d6caf:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6cb2:	8b 40 14             	mov    0x14(%eax),%eax
 80d6cb5:	89 c2                	mov    %eax,%edx
 80d6cb7:	0f af 55 0c          	imul   0xc(%ebp),%edx
 80d6cbb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6cbe:	8b 40 24             	mov    0x24(%eax),%eax
 80d6cc1:	8b 40 64             	mov    0x64(%eax),%eax
 80d6cc4:	39 c2                	cmp    %eax,%edx
 80d6cc6:	7c 11                	jl     80d6cd9 <_ZN18BlueMarbleUserInfo7setGoldEi+0x2d>
 80d6cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ccb:	8b 40 24             	mov    0x24(%eax),%eax
 80d6cce:	8b 50 64             	mov    0x64(%eax),%edx
 80d6cd1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6cd4:	89 50 14             	mov    %edx,0x14(%eax)
 80d6cd7:	eb 12                	jmp    80d6ceb <_ZN18BlueMarbleUserInfo7setGoldEi+0x3f>
 80d6cd9:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6cdc:	8b 40 14             	mov    0x14(%eax),%eax
 80d6cdf:	89 c2                	mov    %eax,%edx
 80d6ce1:	0f af 55 0c          	imul   0xc(%ebp),%edx
 80d6ce5:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ce8:	89 50 14             	mov    %edx,0x14(%eax)
 80d6ceb:	5d                   	pop    %ebp
 80d6cec:	c3                   	ret
 80d6ced:	90                   	nop

```

```c
// BlueMarbleUserInfo::setGold @ 0x80d6cac

/* BlueMarbleUserInfo::setGold(int) */

void __thiscall BlueMarbleUserInfo::setGold(BlueMarbleUserInfo *this,int param_1)

{
  if (*(int *)(this + 0x14) * param_1 < *(int *)(*(int *)(this + 0x24) + 100)) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) * param_1;
  }
  else {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(*(int *)(this + 0x24) + 100);
  }
  return;
}

```

---

## setGrade

```asm
// === 080d6c10 BlueMarbleUserInfo::setGrade  [0x080d6c10-0x80d6c1d] ===
 80d6c10:	55                   	push   %ebp
 80d6c11:	89 e5                	mov    %esp,%ebp
 80d6c13:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c16:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d6c19:	89 50 0c             	mov    %edx,0xc(%eax)
 80d6c1c:	5d                   	pop    %ebp
 80d6c1d:	c3                   	ret

```

```c
// BlueMarbleUserInfo::setGrade @ 0x80d6c10

/* BlueMarbleUserInfo::setGrade(BlueMarbleUserGrade::T) */

void __thiscall BlueMarbleUserInfo::setGrade(BlueMarbleUserInfo *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc) = param_2;
  return;
}

```

---

## setItem

```asm
// === 080d6c44 BlueMarbleUserInfo::setItem  [0x080d6c44-0x80d6c51] ===
 80d6c44:	55                   	push   %ebp
 80d6c45:	89 e5                	mov    %esp,%ebp
 80d6c47:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6c4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d6c4d:	89 50 20             	mov    %edx,0x20(%eax)
 80d6c50:	5d                   	pop    %ebp
 80d6c51:	c3                   	ret

```

```c
// BlueMarbleUserInfo::setItem @ 0x80d6c44

/* BlueMarbleUserInfo::setItem(unsigned int) */

void __thiscall BlueMarbleUserInfo::setItem(BlueMarbleUserInfo *this,uint param_1)

{
  *(uint *)(this + 0x20) = param_1;
  return;
}

```

---

## setScript

```asm
// === 080d6b92 BlueMarbleUserInfo::setScript  [0x080d6b92-0x80d6b9f] ===
 80d6b92:	55                   	push   %ebp
 80d6b93:	89 e5                	mov    %esp,%ebp
 80d6b95:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b98:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d6b9b:	89 50 24             	mov    %edx,0x24(%eax)
 80d6b9e:	5d                   	pop    %ebp
 80d6b9f:	c3                   	ret

```

```c
// BlueMarbleUserInfo::setScript @ 0x80d6b92

/* BlueMarbleUserInfo::setScript(BlueMarbleScriptManager*) */

void __thiscall
BlueMarbleUserInfo::setScript(BlueMarbleUserInfo *this,BlueMarbleScriptManager *param_1)

{
  *(BlueMarbleScriptManager **)(this + 0x24) = param_1;
  return;
}

```

---

## setUser

```asm
// === 080d6b7a BlueMarbleUserInfo::setUser  [0x080d6b7a-0x80d6b87] ===
 80d6b7a:	55                   	push   %ebp
 80d6b7b:	89 e5                	mov    %esp,%ebp
 80d6b7d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6b80:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d6b83:	89 10                	mov    %edx,(%eax)
 80d6b85:	5d                   	pop    %ebp
 80d6b86:	c3                   	ret
 80d6b87:	90                   	nop

```

```c
// BlueMarbleUserInfo::setUser @ 0x80d6b7a

/* BlueMarbleUserInfo::setUser(CUser*) */

void __thiscall BlueMarbleUserInfo::setUser(BlueMarbleUserInfo *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  return;
}

```

---

## setUserState

```asm
// === 080d6ba0 BlueMarbleUserInfo::setUserState  [0x080d6ba0-0x80d6bad] ===
 80d6ba0:	55                   	push   %ebp
 80d6ba1:	89 e5                	mov    %esp,%ebp
 80d6ba3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ba6:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d6ba9:	89 50 04             	mov    %edx,0x4(%eax)
 80d6bac:	5d                   	pop    %ebp
 80d6bad:	c3                   	ret

```

```c
// BlueMarbleUserInfo::setUserState @ 0x80d6ba0

/* BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T) */

void __thiscall BlueMarbleUserInfo::setUserState(BlueMarbleUserInfo *this,undefined4 param_2)

{
  *(undefined4 *)(this + 4) = param_2;
  return;
}

```

---

## ~BlueMarbleUserInfo

```asm
// === 080d6b02 BlueMarbleUserInfo::~BlueMarbleUserInfo  [0x080d6b02-0x80d6b07] ===
 80d6b02:	55                   	push   %ebp
 80d6b03:	89 e5                	mov    %esp,%ebp
 80d6b05:	5d                   	pop    %ebp
 80d6b06:	c3                   	ret
 80d6b07:	90                   	nop

```

```c
// BlueMarbleUserInfo::~BlueMarbleUserInfo @ 0x80d6b02

/* BlueMarbleUserInfo::~BlueMarbleUserInfo() */

void __thiscall BlueMarbleUserInfo::~BlueMarbleUserInfo(BlueMarbleUserInfo *this)

{
  return;
}

```

