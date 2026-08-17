# Dispatcher_DepositMoney

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08224fe4 Dispatcher_DepositMoney::dispatch_sig  [0x08224fe4-0x82250eb] ===
 8224fe4:	55                   	push   %ebp
 8224fe5:	89 e5                	mov    %esp,%ebp
 8224fe7:	53                   	push   %ebx
 8224fe8:	83 ec 74             	sub    $0x74,%esp
 8224feb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224fee:	89 04 24             	mov    %eax,(%esp)
 8224ff1:	e8 96 53 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8224ff6:	83 f8 02             	cmp    $0x2,%eax
 8224ff9:	0f 9e c0             	setle  %al
 8224ffc:	84 c0                	test   %al,%al
 8224ffe:	74 0a                	je     822500a <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0x26>
 8225000:	b8 00 00 00 00       	mov    $0x0,%eax
 8225005:	e9 db 00 00 00       	jmp    82250e5 <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0x101>
 822500a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8225011:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8225014:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225018:	8b 45 10             	mov    0x10(%ebp),%eax
 822501b:	89 04 24             	mov    %eax,(%esp)
 822501e:	e8 1d 82 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8225023:	83 f0 01             	xor    $0x1,%eax
 8225026:	84 c0                	test   %al,%al
 8225028:	74 29                	je     8225053 <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0x6f>
 822502a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8225031:	00 
 8225032:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8225039:	00 
 822503a:	c7 44 24 04 20 c6 bc 	movl   $0x8bcc620,0x4(%esp)
 8225041:	08 
 8225042:	c7 04 24 c2 df 00 00 	movl   $0xdfc2,(%esp)
 8225049:	e8 89 b8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822504e:	e9 92 00 00 00       	jmp    82250e5 <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0x101>
 8225053:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225056:	89 04 24             	mov    %eax,(%esp)
 8225059:	e8 d2 ab 00 00       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 822505e:	83 f0 01             	xor    $0x1,%eax
 8225061:	84 c0                	test   %al,%al
 8225063:	74 07                	je     822506c <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0x88>
 8225065:	b8 00 00 00 00       	mov    $0x0,%eax
 822506a:	eb 79                	jmp    82250e5 <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0x101>
 822506c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822506f:	89 04 24             	mov    %eax,(%esp)
 8225072:	e8 ab ab 00 00       	call   822fc22 <_ZN5CUser15GetAccountCargoEv>
 8225077:	89 45 f4             	mov    %eax,-0xc(%ebp)
 822507a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822507d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225081:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8225084:	89 04 24             	mov    %eax,(%esp)
 8225087:	e8 9e 50 06 00       	call   828a12a <_ZN13CAccountCargo12DepositMoneyEj>
 822508c:	84 c0                	test   %al,%al
 822508e:	74 50                	je     82250e0 <_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf+0xfc>
 8225090:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 8225093:	89 04 24             	mov    %eax,(%esp)
 8225096:	e8 b9 67 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 822509b:	c7 45 b5 00 00 00 00 	movl   $0x0,-0x4b(%ebp)
 82250a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82250a5:	89 04 24             	mov    %eax,(%esp)
 82250a8:	e8 73 9f 00 00       	call   822f020 <_ZN13CAccountCargo8GetMoneyEv>
 82250ad:	89 45 ba             	mov    %eax,-0x46(%ebp)
 82250b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82250b3:	89 c1                	mov    %eax,%ecx
 82250b5:	8b 55 ba             	mov    -0x46(%ebp),%edx
 82250b8:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 82250bb:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 82250be:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 82250c4:	c7 44 24 10 2d 00 00 	movl   $0x2d,0x10(%esp)
 82250cb:	00 
 82250cc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82250d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82250d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82250d8:	89 1c 24             	mov    %ebx,(%esp)
 82250db:	e8 d4 17 46 00       	call   86868b4 <_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason>
 82250e0:	b8 00 00 00 00       	mov    $0x0,%eax
 82250e5:	83 c4 74             	add    $0x74,%esp
 82250e8:	5b                   	pop    %ebx
 82250e9:	5d                   	pop    %ebp
 82250ea:	c3                   	ret
 82250eb:	90                   	nop

```

```c
// Dispatcher_DepositMoney::dispatch_sig @ 0x8224fe4

/* Dispatcher_DepositMoney::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DepositMoney::dispatch_sig
          (Dispatcher_DepositMoney *this,CUser *param_1,PacketBuf *param_2)

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
        cVar1 = CAccountCargo::DepositMoney(local_10,local_14);
        if (cVar1 != '\0') {
          Inven_Item::Inven_Item(local_51);
          local_4f = 0;
          local_4a = CAccountCargo::GetMoney(local_10);
          cUserHistoryLog::AccountCargoAddItem
                    ((cUserHistoryLog *)(param_1 + 0x79700),local_4f,local_4a,local_14,0x2d);
        }
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0xdfc2,
                       "virtual int Dispatcher_DepositMoney::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  return uVar3;
}

```

