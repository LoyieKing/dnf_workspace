# ARAD__FnRewardMomoji

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetMailString

```asm
// === 0819537c ARAD::FnRewardMomoji::GetMailString  [0x0819537c-0x81953f9] ===
 819537c:	55                   	push   %ebp
 819537d:	89 e5                	mov    %esp,%ebp
 819537f:	83 ec 18             	sub    $0x18,%esp
 8195382:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8195389:	00 
 819538a:	c7 44 24 08 7f bc b9 	movl   $0x8b9bc7f,0x8(%esp)
 8195391:	08 
 8195392:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8195399:	00 
 819539a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81953a1:	e8 58 04 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81953a6:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81953ad:	00 
 81953ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81953b2:	8b 45 10             	mov    0x10(%ebp),%eax
 81953b5:	89 04 24             	mov    %eax,(%esp)
 81953b8:	e8 13 85 ee ff       	call   807d8d0 <strncpy@plt>
 81953bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81953c4:	00 
 81953c5:	c7 44 24 08 92 bc b9 	movl   $0x8b9bc92,0x8(%esp)
 81953cc:	08 
 81953cd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81953d4:	00 
 81953d5:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81953dc:	e8 1d 04 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81953e1:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81953e8:	00 
 81953e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81953ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81953f0:	89 04 24             	mov    %eax,(%esp)
 81953f3:	e8 d8 84 ee ff       	call   807d8d0 <strncpy@plt>
 81953f8:	c9                   	leave
 81953f9:	c3                   	ret

```

```c
// ARAD::FnRewardMomoji::GetMailString @ 0x819537c

/* ARAD::FnRewardMomoji::GetMailString(char*, char*) */

void __thiscall
ARAD::FnRewardMomoji::GetMailString(FnRewardMomoji *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "momiji_event_title",(bool *)0x0);
  strncpy(param_2,pcVar1,0x14);
  pcVar1 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "momiji_event_mail",(bool *)0x0);
  strncpy(param_1,pcVar1,0xff);
  return;
}

```

