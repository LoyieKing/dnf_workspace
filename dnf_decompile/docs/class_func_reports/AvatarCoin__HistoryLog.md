# AvatarCoin__HistoryLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## AddLog

```asm
// === 0817ff9c AvatarCoin::HistoryLog::AddLog  [0x0817ff9c-0x817ffe3] ===
 817ff9c:	55                   	push   %ebp
 817ff9d:	89 e5                	mov    %esp,%ebp
 817ff9f:	83 ec 18             	sub    $0x18,%esp
 817ffa2:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 817ffa6:	74 38                	je     817ffe0 <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj+0x44>
 817ffa8:	8b 45 08             	mov    0x8(%ebp),%eax
 817ffab:	89 04 24             	mov    %eax,(%esp)
 817ffae:	e8 17 04 00 00       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 817ffb3:	05 58 06 00 00       	add    $0x658,%eax
 817ffb8:	89 04 24             	mov    %eax,(%esp)
 817ffbb:	e8 30 ff ff ff       	call   817fef0 <_ZNK10AvatarCoin3GetEv>
 817ffc0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817ffc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ffc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 817ffcb:	c7 44 24 04 27 bb b8 	movl   $0x8b8bb27,0x4(%esp)
 817ffd2:	08 
 817ffd3:	8b 45 08             	mov    0x8(%ebp),%eax
 817ffd6:	89 04 24             	mov    %eax,(%esp)
 817ffd9:	e8 20 c9 4f 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 817ffde:	eb 01                	jmp    817ffe1 <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj+0x45>
 817ffe0:	90                   	nop
 817ffe1:	c9                   	leave
 817ffe2:	c3                   	ret
 817ffe3:	90                   	nop

```

```c
// AvatarCoin::HistoryLog::AddLog @ 0x817ff9c

/* AvatarCoin::HistoryLog::AddLog(CUser*, unsigned int) */

void AvatarCoin::HistoryLog::AddLog(CUser *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
    uVar2 = AvatarCoin::Get((AvatarCoin *)(iVar1 + 0x658));
    CUser::LogHistory(param_1,"AvatarCoin+,%d,%d",param_2,uVar2);
  }
  return;
}

```

---

## SubLog

```asm
// === 0817ff54 AvatarCoin::HistoryLog::SubLog  [0x0817ff54-0x817ff9b] ===
 817ff54:	55                   	push   %ebp
 817ff55:	89 e5                	mov    %esp,%ebp
 817ff57:	83 ec 18             	sub    $0x18,%esp
 817ff5a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 817ff5e:	74 38                	je     817ff98 <_ZN10AvatarCoin10HistoryLog6SubLogEP5CUserj+0x44>
 817ff60:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff63:	89 04 24             	mov    %eax,(%esp)
 817ff66:	e8 5f 04 00 00       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 817ff6b:	05 58 06 00 00       	add    $0x658,%eax
 817ff70:	89 04 24             	mov    %eax,(%esp)
 817ff73:	e8 78 ff ff ff       	call   817fef0 <_ZNK10AvatarCoin3GetEv>
 817ff78:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817ff7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ff7f:	89 44 24 08          	mov    %eax,0x8(%esp)
 817ff83:	c7 44 24 04 15 bb b8 	movl   $0x8b8bb15,0x4(%esp)
 817ff8a:	08 
 817ff8b:	8b 45 08             	mov    0x8(%ebp),%eax
 817ff8e:	89 04 24             	mov    %eax,(%esp)
 817ff91:	e8 68 c9 4f 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 817ff96:	eb 01                	jmp    817ff99 <_ZN10AvatarCoin10HistoryLog6SubLogEP5CUserj+0x45>
 817ff98:	90                   	nop
 817ff99:	c9                   	leave
 817ff9a:	c3                   	ret
 817ff9b:	90                   	nop

```

```c
// AvatarCoin::HistoryLog::SubLog @ 0x817ff54

/* AvatarCoin::HistoryLog::SubLog(CUser*, unsigned int) */

void AvatarCoin::HistoryLog::SubLog(CUser *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
    uVar2 = AvatarCoin::Get((AvatarCoin *)(iVar1 + 0x658));
    CUser::LogHistory(param_1,"AvatarCoin-,%d,%d",param_2,uVar2);
  }
  return;
}

```

