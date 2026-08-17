# CLevelRewardTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetProperJobIndex

```asm
// === 08687e78 CLevelRewardTable::GetProperJobIndex  [0x08687e78-0x8687efb] ===
 8687e78:	55                   	push   %ebp
 8687e79:	89 e5                	mov    %esp,%ebp
 8687e7b:	83 ec 28             	sub    $0x28,%esp
 8687e7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687e81:	88 45 f4             	mov    %al,-0xc(%ebp)
 8687e84:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8687e88:	79 07                	jns    8687e91 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x19>
 8687e8a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8687e8f:	eb 68                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687e91:	8b 45 08             	mov    0x8(%ebp),%eax
 8687e94:	89 04 24             	mov    %eax,(%esp)
 8687e97:	e8 e6 f8 00 00       	call   8697782 <_ZN17CLevelRewardTable15GetJobAffectionEv>
 8687e9c:	83 f0 01             	xor    $0x1,%eax
 8687e9f:	84 c0                	test   %al,%al
 8687ea1:	74 07                	je     8687eaa <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x32>
 8687ea3:	b8 00 00 00 00       	mov    $0x0,%eax
 8687ea8:	eb 4f                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687eaa:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 8687eae:	83 f8 07             	cmp    $0x7,%eax
 8687eb1:	77 41                	ja     8687ef4 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x7c>
 8687eb3:	8b 04 85 cc 10 cf 08 	mov    0x8cf10cc(,%eax,4),%eax
 8687eba:	ff e0                	jmp    *%eax
 8687ebc:	b8 01 00 00 00       	mov    $0x1,%eax
 8687ec1:	eb 36                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687ec3:	b8 02 00 00 00       	mov    $0x2,%eax
 8687ec8:	eb 2f                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687eca:	b8 03 00 00 00       	mov    $0x3,%eax
 8687ecf:	eb 28                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687ed1:	b8 04 00 00 00       	mov    $0x4,%eax
 8687ed6:	eb 21                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687ed8:	b8 05 00 00 00       	mov    $0x5,%eax
 8687edd:	eb 1a                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687edf:	b8 06 00 00 00       	mov    $0x6,%eax
 8687ee4:	eb 13                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687ee6:	b8 07 00 00 00       	mov    $0x7,%eax
 8687eeb:	eb 0c                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687eed:	b8 08 00 00 00       	mov    $0x8,%eax
 8687ef2:	eb 05                	jmp    8687ef9 <_ZN17CLevelRewardTable17GetProperJobIndexEc+0x81>
 8687ef4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8687ef9:	c9                   	leave
 8687efa:	c3                   	ret
 8687efb:	90                   	nop

```

```c
// CLevelRewardTable::GetProperJobIndex @ 0x8687e78

/* CLevelRewardTable::GetProperJobIndex(char) */

undefined4 __thiscall CLevelRewardTable::GetProperJobIndex(CLevelRewardTable *this,char param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 < '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = GetJobAffection(this);
    if (cVar1 == '\x01') {
      switch(param_1) {
      case '\0':
        uVar2 = 1;
        break;
      case '\x01':
        uVar2 = 2;
        break;
      case '\x02':
        uVar2 = 3;
        break;
      case '\x03':
        uVar2 = 4;
        break;
      case '\x04':
        uVar2 = 5;
        break;
      case '\x05':
        uVar2 = 6;
        break;
      case '\x06':
        uVar2 = 7;
        break;
      case '\a':
        uVar2 = 8;
        break;
      default:
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## GetProperLevelIndex

```asm
// === 086876c8 CLevelRewardTable::GetProperLevelIndex  [0x086876c8-0x868770f] ===
 86876c8:	55                   	push   %ebp
 86876c9:	89 e5                	mov    %esp,%ebp
 86876cb:	83 ec 10             	sub    $0x10,%esp
 86876ce:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86876d5:	eb 24                	jmp    86876fb <_ZN17CLevelRewardTable19GetProperLevelIndexEj+0x33>
 86876d7:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86876da:	8b 45 08             	mov    0x8(%ebp),%eax
 86876dd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86876e0:	85 c0                	test   %eax,%eax
 86876e2:	74 24                	je     8687708 <_ZN17CLevelRewardTable19GetProperLevelIndexEj+0x40>
 86876e4:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86876e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86876ea:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86876ed:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86876f0:	75 05                	jne    86876f7 <_ZN17CLevelRewardTable19GetProperLevelIndexEj+0x2f>
 86876f2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86876f5:	eb 17                	jmp    868770e <_ZN17CLevelRewardTable19GetProperLevelIndexEj+0x46>
 86876f7:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86876fb:	83 7d fc 45          	cmpl   $0x45,-0x4(%ebp)
 86876ff:	0f 9e c0             	setle  %al
 8687702:	84 c0                	test   %al,%al
 8687704:	75 d1                	jne    86876d7 <_ZN17CLevelRewardTable19GetProperLevelIndexEj+0xf>
 8687706:	eb 01                	jmp    8687709 <_ZN17CLevelRewardTable19GetProperLevelIndexEj+0x41>
 8687708:	90                   	nop
 8687709:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 868770e:	c9                   	leave
 868770f:	c3                   	ret

```

```c
// CLevelRewardTable::GetProperLevelIndex @ 0x86876c8

/* CLevelRewardTable::GetProperLevelIndex(unsigned int) */

int __thiscall CLevelRewardTable::GetProperLevelIndex(CLevelRewardTable *this,uint param_1)

{
  int local_8;
  
  for (local_8 = 0; (local_8 < 0x46 && (*(int *)(this + local_8 * 4) != 0)); local_8 = local_8 + 1)
  {
    if (*(uint *)(this + local_8 * 4) == param_1) {
      return local_8;
    }
  }
  return -1;
}

```

