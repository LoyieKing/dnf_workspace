# Inter_LoadPowerWarInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dcf4a Inter_LoadPowerWarInfo::dispatch_sig  [0x084dcf4a-0x84dcfeb] ===
 84dcf4a:	55                   	push   %ebp
 84dcf4b:	89 e5                	mov    %esp,%ebp
 84dcf4d:	57                   	push   %edi
 84dcf4e:	56                   	push   %esi
 84dcf4f:	53                   	push   %ebx
 84dcf50:	83 ec 4c             	sub    $0x4c,%esp
 84dcf53:	8b 45 10             	mov    0x10(%ebp),%eax
 84dcf56:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84dcf59:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dcf5c:	8b 78 04             	mov    0x4(%eax),%edi
 84dcf5f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dcf62:	8b 30                	mov    (%eax),%esi
 84dcf64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dcf67:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84dcf6b:	0f be d8             	movsbl %al,%ebx
 84dcf6e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84dcf75:	00 
 84dcf76:	c7 44 24 08 3a 48 00 	movl   $0x483a,0x8(%esp)
 84dcf7d:	00 
 84dcf7e:	c7 44 24 04 c0 bc c8 	movl   $0x8c8bcc0,0x4(%esp)
 84dcf85:	08 
 84dcf86:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dcf89:	89 04 24             	mov    %eax,(%esp)
 84dcf8c:	e8 87 27 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84dcf91:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84dcf95:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84dcf99:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84dcf9d:	c7 44 24 04 0c 99 c8 	movl   $0x8c8990c,0x4(%esp)
 84dcfa4:	08 
 84dcfa5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dcfa8:	89 04 24             	mov    %eax,(%esp)
 84dcfab:	e8 d8 27 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84dcfb0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dcfb3:	8b 58 04             	mov    0x4(%eax),%ebx
 84dcfb6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dcfb9:	8b 08                	mov    (%eax),%ecx
 84dcfbb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dcfbe:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84dcfc2:	0f be d0             	movsbl %al,%edx
 84dcfc5:	a1 50 be 40 09       	mov    0x940be50,%eax
 84dcfca:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84dcfce:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84dcfd2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dcfd6:	89 04 24             	mov    %eax,(%esp)
 84dcfd9:	e8 98 1b fa ff       	call   847eb76 <_ZN13CPowerManager12SetPowerInfoEcii>
 84dcfde:	b8 00 00 00 00       	mov    $0x0,%eax
 84dcfe3:	83 c4 4c             	add    $0x4c,%esp
 84dcfe6:	5b                   	pop    %ebx
 84dcfe7:	5e                   	pop    %esi
 84dcfe8:	5f                   	pop    %edi
 84dcfe9:	5d                   	pop    %ebp
 84dcfea:	c3                   	ret
 84dcfeb:	90                   	nop

```

```c
// Inter_LoadPowerWarInfo::dispatch_sig @ 0x84dcf4a

/* Inter_LoadPowerWarInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPowerWarInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_30 [16];
  int *local_20;
  
  local_20 = (int *)param_3;
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)param_3;
  cVar1 = *(char *)(param_3 + 8);
  cMyTrace::cMyTrace(local_30,"virtual int Inter_LoadPowerWarInfo::dispatch_sig(CUser*, char*, int)"
                     ,0x483a,0);
  cMyTrace::operator()
            (local_30,"Receive SIG_LOAD_POWER_WAR_INFO(Winner:%d, A:%d, B:%d)",(int)cVar1,uVar3,
             uVar2);
  CPowerManager::SetPowerInfo(GlobalData::s_power_manager,(char)local_20[2],*local_20,local_20[1]);
  return 0;
}

```

