# game_master__CChoiceItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b0a6e game_master::CChoiceItem::execute  [0x084b0a6e-0x84b0b07] ===
 84b0a6e:	55                   	push   %ebp
 84b0a6f:	89 e5                	mov    %esp,%ebp
 84b0a71:	53                   	push   %ebx
 84b0a72:	83 ec 24             	sub    $0x24,%esp
 84b0a75:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0a78:	8b 40 08             	mov    0x8(%eax),%eax
 84b0a7b:	85 c0                	test   %eax,%eax
 84b0a7d:	75 1f                	jne    84b0a9e <_ZN11game_master11CChoiceItem7executeEv+0x30>
 84b0a7f:	e8 17 b7 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b0a84:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 84b0a8b:	ff 
 84b0a8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b0a93:	00 
 84b0a94:	89 04 24             	mov    %eax,(%esp)
 84b0a97:	e8 14 49 eb ff       	call   83653b0 <_ZN12CDataManager13setChoiceItemEbj>
 84b0a9c:	eb 63                	jmp    84b0b01 <_ZN11game_master11CChoiceItem7executeEv+0x93>
 84b0a9e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0aa1:	8b 40 08             	mov    0x8(%eax),%eax
 84b0aa4:	89 c3                	mov    %eax,%ebx
 84b0aa6:	e8 f0 b6 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b0aab:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b0aaf:	89 04 24             	mov    %eax,(%esp)
 84b0ab2:	e8 7b ef ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84b0ab7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b0aba:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b0abe:	74 0f                	je     84b0acf <_ZN11game_master11CChoiceItem7executeEv+0x61>
 84b0ac0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b0ac3:	89 04 24             	mov    %eax,(%esp)
 84b0ac6:	e8 2f 08 c4 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84b0acb:	84 c0                	test   %al,%al
 84b0acd:	74 07                	je     84b0ad6 <_ZN11game_master11CChoiceItem7executeEv+0x68>
 84b0acf:	b8 01 00 00 00       	mov    $0x1,%eax
 84b0ad4:	eb 05                	jmp    84b0adb <_ZN11game_master11CChoiceItem7executeEv+0x6d>
 84b0ad6:	b8 00 00 00 00       	mov    $0x0,%eax
 84b0adb:	84 c0                	test   %al,%al
 84b0add:	75 21                	jne    84b0b00 <_ZN11game_master11CChoiceItem7executeEv+0x92>
 84b0adf:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0ae2:	8b 58 08             	mov    0x8(%eax),%ebx
 84b0ae5:	e8 b1 b6 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b0aea:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84b0aee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b0af5:	00 
 84b0af6:	89 04 24             	mov    %eax,(%esp)
 84b0af9:	e8 b2 48 eb ff       	call   83653b0 <_ZN12CDataManager13setChoiceItemEbj>
 84b0afe:	eb 01                	jmp    84b0b01 <_ZN11game_master11CChoiceItem7executeEv+0x93>
 84b0b00:	90                   	nop
 84b0b01:	83 c4 24             	add    $0x24,%esp
 84b0b04:	5b                   	pop    %ebx
 84b0b05:	5d                   	pop    %ebp
 84b0b06:	c3                   	ret
 84b0b07:	90                   	nop

```

```c
// game_master::CChoiceItem::execute @ 0x84b0a6e

/* game_master::CChoiceItem::execute() */

void __thiscall game_master::CChoiceItem::execute(CChoiceItem *this)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  CDataManager *pCVar5;
  CItem *this_00;
  
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(this + 8);
    pCVar5 = (CDataManager *)G_CDataManager();
    this_00 = (CItem *)CDataManager::find_item(pCVar5,iVar1);
    if ((this_00 == (CItem *)0x0) || (cVar4 = CItem::is_stackable(this_00), cVar4 != '\0')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      uVar2 = *(uint *)(this + 8);
      pCVar5 = (CDataManager *)G_CDataManager();
      CDataManager::setChoiceItem(pCVar5,true,uVar2);
    }
    return;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  CDataManager::setChoiceItem(pCVar5,false,0xffffffff);
  return;
}

```

---

## parse

```asm
// === 084b0a34 game_master::CChoiceItem::parse  [0x084b0a34-0x84b0a6d] ===
 84b0a34:	55                   	push   %ebp
 84b0a35:	89 e5                	mov    %esp,%ebp
 84b0a37:	83 ec 18             	sub    $0x18,%esp
 84b0a3a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0a3d:	8b 40 04             	mov    0x4(%eax),%eax
 84b0a40:	83 c0 0c             	add    $0xc,%eax
 84b0a43:	89 04 24             	mov    %eax,(%esp)
 84b0a46:	e8 1d e6 de ff       	call   829f068 <_Z4trimRSs>
 84b0a4b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0a4e:	8b 40 04             	mov    0x4(%eax),%eax
 84b0a51:	83 c0 0c             	add    $0xc,%eax
 84b0a54:	89 04 24             	mov    %eax,(%esp)
 84b0a57:	e8 94 5a 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b0a5c:	89 04 24             	mov    %eax,(%esp)
 84b0a5f:	e8 8c dc bc ff       	call   807e6f0 <atoi@plt>
 84b0a64:	89 c2                	mov    %eax,%edx
 84b0a66:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0a69:	89 50 08             	mov    %edx,0x8(%eax)
 84b0a6c:	c9                   	leave
 84b0a6d:	c3                   	ret

```

```c
// game_master::CChoiceItem::parse @ 0x84b0a34

/* game_master::CChoiceItem::parse() */

void __thiscall game_master::CChoiceItem::parse(CChoiceItem *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

