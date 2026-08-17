# TimerForbidChat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635f50 TimerForbidChat::dispatch_sig  [0x08635f50-0x86360a9] ===
 8635f50:	55                   	push   %ebp
 8635f51:	89 e5                	mov    %esp,%ebp
 8635f53:	53                   	push   %ebx
 8635f54:	83 ec 54             	sub    $0x54,%esp
 8635f57:	e8 32 62 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635f5c:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8635f63:	00 
 8635f64:	8b 55 0c             	mov    0xc(%ebp),%edx
 8635f67:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635f6b:	89 04 24             	mov    %eax,(%esp)
 8635f6e:	e8 31 e8 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8635f73:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8635f76:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8635f7a:	75 0a                	jne    8635f86 <_ZN15TimerForbidChat12dispatch_sigEiij+0x36>
 8635f7c:	b8 00 00 00 00       	mov    $0x0,%eax
 8635f81:	e9 1d 01 00 00       	jmp    86360a3 <_ZN15TimerForbidChat12dispatch_sigEiij+0x153>
 8635f86:	8b 45 14             	mov    0x14(%ebp),%eax
 8635f89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635f8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8635f90:	89 04 24             	mov    %eax,(%esp)
 8635f93:	e8 36 5f 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 8635f98:	89 c3                	mov    %eax,%ebx
 8635f9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8635fa1:	00 
 8635fa2:	c7 44 24 08 52 0a 00 	movl   $0xa52,0x8(%esp)
 8635fa9:	00 
 8635faa:	c7 44 24 04 c0 83 ce 	movl   $0x8ce83c0,0x4(%esp)
 8635fb1:	08 
 8635fb2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8635fb5:	89 04 24             	mov    %eax,(%esp)
 8635fb8:	e8 5b 97 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8635fbd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8635fc1:	c7 44 24 04 48 6e ce 	movl   $0x8ce6e48,0x4(%esp)
 8635fc8:	08 
 8635fc9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8635fcc:	89 04 24             	mov    %eax,(%esp)
 8635fcf:	e8 b4 97 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8635fd4:	8b 45 14             	mov    0x14(%ebp),%eax
 8635fd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635fdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8635fde:	89 04 24             	mov    %eax,(%esp)
 8635fe1:	e8 e8 5e 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 8635fe6:	89 c3                	mov    %eax,%ebx
 8635fe8:	e8 ba 43 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8635fed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8635ff1:	89 04 24             	mov    %eax,(%esp)
 8635ff4:	e8 67 7c 09 00       	call   86cdc60 <_ZN9GameWorld10EnableChatEPKc>
 8635ff9:	83 f0 01             	xor    $0x1,%eax
 8635ffc:	84 c0                	test   %al,%al
 8635ffe:	74 50                	je     8636050 <_ZN15TimerForbidChat12dispatch_sigEiij+0x100>
 8636000:	8b 45 14             	mov    0x14(%ebp),%eax
 8636003:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636007:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863600a:	89 04 24             	mov    %eax,(%esp)
 863600d:	e8 bc 5e 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 8636012:	89 c3                	mov    %eax,%ebx
 8636014:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863601b:	00 
 863601c:	c7 44 24 08 54 0a 00 	movl   $0xa54,0x8(%esp)
 8636023:	00 
 8636024:	c7 44 24 04 c0 83 ce 	movl   $0x8ce83c0,0x4(%esp)
 863602b:	08 
 863602c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863602f:	89 04 24             	mov    %eax,(%esp)
 8636032:	e8 e1 96 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8636037:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863603b:	c7 44 24 04 5c 6e ce 	movl   $0x8ce6e5c,0x4(%esp)
 8636042:	08 
 8636043:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8636046:	89 04 24             	mov    %eax,(%esp)
 8636049:	e8 3a 97 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863604e:	eb 4e                	jmp    863609e <_ZN15TimerForbidChat12dispatch_sigEiij+0x14e>
 8636050:	8b 45 14             	mov    0x14(%ebp),%eax
 8636053:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636057:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863605a:	89 04 24             	mov    %eax,(%esp)
 863605d:	e8 6c 5e 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 8636062:	89 c3                	mov    %eax,%ebx
 8636064:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863606b:	00 
 863606c:	c7 44 24 08 56 0a 00 	movl   $0xa56,0x8(%esp)
 8636073:	00 
 8636074:	c7 44 24 04 c0 83 ce 	movl   $0x8ce83c0,0x4(%esp)
 863607b:	08 
 863607c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863607f:	89 04 24             	mov    %eax,(%esp)
 8636082:	e8 91 96 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8636087:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863608b:	c7 44 24 04 7d 6e ce 	movl   $0x8ce6e7d,0x4(%esp)
 8636092:	08 
 8636093:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636096:	89 04 24             	mov    %eax,(%esp)
 8636099:	e8 ea 96 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863609e:	b8 01 00 00 00       	mov    $0x1,%eax
 86360a3:	83 c4 54             	add    $0x54,%esp
 86360a6:	5b                   	pop    %ebx
 86360a7:	5d                   	pop    %ebp
 86360a8:	c3                   	ret
 86360a9:	90                   	nop

```

```c
// TimerForbidChat::dispatch_sig @ 0x8635f50

/* TimerForbidChat::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerForbidChat::dispatch_sig(TimerForbidChat *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  GameWorld *this_00;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
    cMyTrace::cMyTrace(local_40,
                       "virtual bool TimerForbidChat::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0xa52,0);
    cMyTrace::operator()(local_40,"TimerForbidChat %s",uVar3);
    pcVar4 = (char *)CUser::get_charac_name_by_charac_no(local_10,param_3);
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::EnableChat(this_00,pcVar4);
    if (cVar1 == '\x01') {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_20,
                         "virtual bool TimerForbidChat::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa56,0);
      cMyTrace::operator()(local_20,"Enabled to chat for: %s",uVar3);
    }
    else {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool TimerForbidChat::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa54,0);
      cMyTrace::operator()(local_30,"Failed to enable to chat for: %s",uVar3);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

