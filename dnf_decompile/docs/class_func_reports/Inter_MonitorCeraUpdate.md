# Inter_MonitorCeraUpdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cea92 Inter_MonitorCeraUpdate::dispatch_sig  [0x084cea92-0x84ceaed] ===
 84cea92:	55                   	push   %ebp
 84cea93:	89 e5                	mov    %esp,%ebp
 84cea95:	53                   	push   %ebx
 84cea96:	83 ec 24             	sub    $0x24,%esp
 84cea99:	8b 45 10             	mov    0x10(%ebp),%eax
 84cea9c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cea9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ceaa2:	8b 58 0a             	mov    0xa(%eax),%ebx
 84ceaa5:	e8 e4 d6 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84ceaaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ceaae:	89 04 24             	mov    %eax,(%esp)
 84ceab1:	e8 10 5e dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84ceab6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ceab9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84ceabd:	75 07                	jne    84ceac6 <_ZN23Inter_MonitorCeraUpdate12dispatch_sigEP5CUserPci+0x34>
 84ceabf:	b8 00 00 00 00       	mov    $0x0,%eax
 84ceac4:	eb 22                	jmp    84ceae8 <_ZN23Inter_MonitorCeraUpdate12dispatch_sigEP5CUserPci+0x56>
 84ceac6:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84ceacb:	8b 00                	mov    (%eax),%eax
 84ceacd:	83 c0 2c             	add    $0x2c,%eax
 84cead0:	8b 08                	mov    (%eax),%ecx
 84cead2:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84cead7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84ceada:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ceade:	89 04 24             	mov    %eax,(%esp)
 84ceae1:	ff d1                	call   *%ecx
 84ceae3:	b8 00 00 00 00       	mov    $0x0,%eax
 84ceae8:	83 c4 24             	add    $0x24,%esp
 84ceaeb:	5b                   	pop    %ebx
 84ceaec:	5d                   	pop    %ebp
 84ceaed:	c3                   	ret

```

```c
// Inter_MonitorCeraUpdate::dispatch_sig @ 0x84cea92

/* Inter_MonitorCeraUpdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCeraUpdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CGameManager *this;
  int iVar2;
  
  uVar1 = *(uint *)(param_3 + 10);
  this = (CGameManager *)G_CGameManager();
  iVar2 = CGameManager::GetUserByAccId(this,uVar1);
  if (iVar2 != 0) {
    (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,iVar2);
  }
  return 0;
}

```

