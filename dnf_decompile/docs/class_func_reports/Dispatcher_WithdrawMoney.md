# Dispatcher_WithdrawMoney

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082250ec Dispatcher_WithdrawMoney::dispatch_sig  [0x082250ec-0x82251f3] ===
 82250ec:	55                   	push   %ebp
 82250ed:	89 e5                	mov    %esp,%ebp
 82250ef:	53                   	push   %ebx
 82250f0:	83 ec 74             	sub    $0x74,%esp
 82250f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82250f6:	89 04 24             	mov    %eax,(%esp)
 82250f9:	e8 8e 52 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82250fe:	83 f8 02             	cmp    $0x2,%eax
 8225101:	0f 9e c0             	setle  %al
 8225104:	84 c0                	test   %al,%al
 8225106:	74 0a                	je     8225112 <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0x26>
 8225108:	b8 00 00 00 00       	mov    $0x0,%eax
 822510d:	e9 db 00 00 00       	jmp    82251ed <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0x101>
 8225112:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8225119:	8d 45 f0             	lea    -0x10(%ebp),%eax
 822511c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225120:	8b 45 10             	mov    0x10(%ebp),%eax
 8225123:	89 04 24             	mov    %eax,(%esp)
 8225126:	e8 15 81 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 822512b:	83 f0 01             	xor    $0x1,%eax
 822512e:	84 c0                	test   %al,%al
 8225130:	74 29                	je     822515b <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0x6f>
 8225132:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8225139:	00 
 822513a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8225141:	00 
 8225142:	c7 44 24 04 c0 c5 bc 	movl   $0x8bcc5c0,0x4(%esp)
 8225149:	08 
 822514a:	c7 04 24 da df 00 00 	movl   $0xdfda,(%esp)
 8225151:	e8 81 b7 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8225156:	e9 92 00 00 00       	jmp    82251ed <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0x101>
 822515b:	8b 45 0c             	mov    0xc(%ebp),%eax
 822515e:	89 04 24             	mov    %eax,(%esp)
 8225161:	e8 ca aa 00 00       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 8225166:	83 f0 01             	xor    $0x1,%eax
 8225169:	84 c0                	test   %al,%al
 822516b:	74 07                	je     8225174 <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0x88>
 822516d:	b8 00 00 00 00       	mov    $0x0,%eax
 8225172:	eb 79                	jmp    82251ed <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0x101>
 8225174:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225177:	89 04 24             	mov    %eax,(%esp)
 822517a:	e8 a3 aa 00 00       	call   822fc22 <_ZN5CUser15GetAccountCargoEv>
 822517f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8225182:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8225185:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225189:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822518c:	89 04 24             	mov    %eax,(%esp)
 822518f:	e8 62 51 06 00       	call   828a2f6 <_ZN13CAccountCargo13WithdrawMoneyEj>
 8225194:	84 c0                	test   %al,%al
 8225196:	74 50                	je     82251e8 <_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf+0xfc>
 8225198:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 822519b:	89 04 24             	mov    %eax,(%esp)
 822519e:	e8 b1 66 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 82251a3:	c7 45 b5 00 00 00 00 	movl   $0x0,-0x4b(%ebp)
 82251aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82251ad:	89 04 24             	mov    %eax,(%esp)
 82251b0:	e8 6b 9e 00 00       	call   822f020 <_ZN13CAccountCargo8GetMoneyEv>
 82251b5:	89 45 ba             	mov    %eax,-0x46(%ebp)
 82251b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82251bb:	89 c1                	mov    %eax,%ecx
 82251bd:	8b 55 ba             	mov    -0x46(%ebp),%edx
 82251c0:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 82251c3:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 82251c6:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 82251cc:	c7 44 24 10 26 00 00 	movl   $0x26,0x10(%esp)
 82251d3:	00 
 82251d4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82251d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 82251dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 82251e0:	89 1c 24             	mov    %ebx,(%esp)
 82251e3:	e8 06 17 46 00       	call   86868ee <_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason>
 82251e8:	b8 00 00 00 00       	mov    $0x0,%eax
 82251ed:	83 c4 74             	add    $0x74,%esp
 82251f0:	5b                   	pop    %ebx
 82251f1:	5d                   	pop    %ebp
 82251f2:	c3                   	ret
 82251f3:	90                   	nop

```

```c
// Dispatcher_WithdrawMoney::dispatch_sig @ 0x82250ec

/* Dispatcher_WithdrawMoney::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_WithdrawMoney::dispatch_sig
          (Dispatcher_WithdrawMoney *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Inven_Item local_51 [2];
  undefined4 local_4f;
  undefined4 local_4a;
  uint local_14;
  CAccountCargo *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_14 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_14);
    if (cVar1 == '\x01') {
      cVar1 = CUser::IsExistAccountCargo(param_1);
      if (cVar1 == '\x01') {
        local_10 = (CAccountCargo *)CUser::GetAccountCargo(param_1);
        cVar1 = CAccountCargo::WithdrawMoney(local_10,local_14);
        if (cVar1 != '\0') {
          Inven_Item::Inven_Item(local_51);
          local_4f = 0;
          local_4a = CAccountCargo::GetMoney(local_10);
          cUserHistoryLog::AccountCargoDelItem
                    ((cUserHistoryLog *)(param_1 + 0x79700),local_4f,local_4a,local_14,0x26);
        }
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0xdfda,
                       "virtual int Dispatcher_WithdrawMoney::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  return uVar3;
}

```

