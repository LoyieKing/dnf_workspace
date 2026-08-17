# game_master__CBillingRechargeCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b3ad4 game_master::CBillingRechargeCommand::execute  [0x084b3ad4-0x84b3bdb] ===
 84b3ad4:	55                   	push   %ebp
 84b3ad5:	89 e5                	mov    %esp,%ebp
 84b3ad7:	83 ec 48             	sub    $0x48,%esp
 84b3ada:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3add:	89 04 24             	mov    %eax,(%esp)
 84b3ae0:	e8 d5 04 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b3ae5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3ae8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3aeb:	83 c0 08             	add    $0x8,%eax
 84b3aee:	c7 44 24 04 60 04 c8 	movl   $0x8c80460,0x4(%esp)
 84b3af5:	08 
 84b3af6:	89 04 24             	mov    %eax,(%esp)
 84b3af9:	e8 a3 ce bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3afe:	84 c0                	test   %al,%al
 84b3b00:	74 61                	je     84b3b63 <_ZN11game_master23CBillingRechargeCommand7executeEv+0x8f>
 84b3b02:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84b3b07:	8b 00                	mov    (%eax),%eax
 84b3b09:	83 c0 04             	add    $0x4,%eax
 84b3b0c:	8b 08                	mov    (%eax),%ecx
 84b3b0e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3b11:	8b 50 0c             	mov    0xc(%eax),%edx
 84b3b14:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84b3b19:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84b3b20:	00 
 84b3b21:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84b3b28:	00 
 84b3b29:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84b3b30:	00 
 84b3b31:	c7 44 24 18 65 04 c8 	movl   $0x8c80465,0x18(%esp)
 84b3b38:	08 
 84b3b39:	c7 44 24 14 20 fa c7 	movl   $0x8c7fa20,0x14(%esp)
 84b3b40:	08 
 84b3b41:	c7 44 24 10 20 fa c7 	movl   $0x8c7fa20,0x10(%esp)
 84b3b48:	08 
 84b3b49:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b3b4d:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 84b3b54:	00 
 84b3b55:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b3b58:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3b5c:	89 04 24             	mov    %eax,(%esp)
 84b3b5f:	ff d1                	call   *%ecx
 84b3b61:	eb 59                	jmp    84b3bbc <_ZN11game_master23CBillingRechargeCommand7executeEv+0xe8>
 84b3b63:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3b66:	83 c0 08             	add    $0x8,%eax
 84b3b69:	c7 44 24 04 68 04 c8 	movl   $0x8c80468,0x4(%esp)
 84b3b70:	08 
 84b3b71:	89 04 24             	mov    %eax,(%esp)
 84b3b74:	e8 28 ce bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3b79:	84 c0                	test   %al,%al
 84b3b7b:	74 3f                	je     84b3bbc <_ZN11game_master23CBillingRechargeCommand7executeEv+0xe8>
 84b3b7d:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84b3b82:	8b 00                	mov    (%eax),%eax
 84b3b84:	83 c0 0c             	add    $0xc,%eax
 84b3b87:	8b 08                	mov    (%eax),%ecx
 84b3b89:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3b8c:	8b 50 0c             	mov    0xc(%eax),%edx
 84b3b8f:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84b3b94:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84b3b9b:	00 
 84b3b9c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84b3ba3:	00 
 84b3ba4:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 84b3bab:	00 
 84b3bac:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b3bb0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b3bb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3bb7:	89 04 24             	mov    %eax,(%esp)
 84b3bba:	ff d1                	call   *%ecx
 84b3bbc:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84b3bc1:	8b 00                	mov    (%eax),%eax
 84b3bc3:	83 c0 2c             	add    $0x2c,%eax
 84b3bc6:	8b 08                	mov    (%eax),%ecx
 84b3bc8:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84b3bcd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b3bd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3bd4:	89 04 24             	mov    %eax,(%esp)
 84b3bd7:	ff d1                	call   *%ecx
 84b3bd9:	c9                   	leave
 84b3bda:	c3                   	ret
 84b3bdb:	90                   	nop

```

```c
// game_master::CBillingRechargeCommand::execute @ 0x84b3ad4

/* game_master::CBillingRechargeCommand::execute() */

void __thiscall game_master::CBillingRechargeCommand::execute(CBillingRechargeCommand *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = CCommand::GetUser((CCommand *)this);
  bVar1 = std::operator==((string *)(this + 8),"cera");
  if (bVar1) {
    (**(code **)(*GlobalData::s_pIPGHelper + 4))
              (GlobalData::s_pIPGHelper,uVar2,5,*(undefined4 *)(this + 0xc),&DAT_08c7fa20,
               &DAT_08c7fa20,&DAT_08c80465,0,0,0);
  }
  else {
    bVar1 = std::operator==((string *)(this + 8),"point");
    if (bVar1) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0xc))
                (GlobalData::s_pIPGHelper,uVar2,*(undefined4 *)(this + 0xc),4,0,0);
    }
  }
  (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,uVar2);
  return;
}

```

---

## parse

```asm
// === 084b3a60 game_master::CBillingRechargeCommand::parse  [0x084b3a60-0x84b3ad3] ===
 84b3a60:	55                   	push   %ebp
 84b3a61:	89 e5                	mov    %esp,%ebp
 84b3a63:	83 ec 18             	sub    $0x18,%esp
 84b3a66:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3a69:	8b 40 04             	mov    0x4(%eax),%eax
 84b3a6c:	85 c0                	test   %eax,%eax
 84b3a6e:	74 60                	je     84b3ad0 <_ZN11game_master23CBillingRechargeCommand5parseEv+0x70>
 84b3a70:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3a73:	8b 40 04             	mov    0x4(%eax),%eax
 84b3a76:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3a7b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b3a82:	00 
 84b3a83:	89 04 24             	mov    %eax,(%esp)
 84b3a86:	e8 43 40 d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3a8b:	8b 55 08             	mov    0x8(%ebp),%edx
 84b3a8e:	83 c2 08             	add    $0x8,%edx
 84b3a91:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3a95:	89 14 24             	mov    %edx,(%esp)
 84b3a98:	e8 63 42 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84b3a9d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3aa0:	8b 40 04             	mov    0x4(%eax),%eax
 84b3aa3:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3aa8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84b3aaf:	00 
 84b3ab0:	89 04 24             	mov    %eax,(%esp)
 84b3ab3:	e8 16 40 d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3ab8:	89 04 24             	mov    %eax,(%esp)
 84b3abb:	e8 30 2a 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b3ac0:	89 04 24             	mov    %eax,(%esp)
 84b3ac3:	e8 32 56 c5 ff       	call   81090fa <_Z14StringToNumberPKc>
 84b3ac8:	8b 55 08             	mov    0x8(%ebp),%edx
 84b3acb:	89 42 0c             	mov    %eax,0xc(%edx)
 84b3ace:	eb 01                	jmp    84b3ad1 <_ZN11game_master23CBillingRechargeCommand5parseEv+0x71>
 84b3ad0:	90                   	nop
 84b3ad1:	c9                   	leave
 84b3ad2:	c3                   	ret
 84b3ad3:	90                   	nop

```

```c
// game_master::CBillingRechargeCommand::parse @ 0x84b3a60

/* game_master::CBillingRechargeCommand::parse() */

void __thiscall game_master::CBillingRechargeCommand::parse(CBillingRechargeCommand *this)

{
  string *psVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 4) != 0) {
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),1);
    std::string::operator=((string *)(this + 8),psVar1);
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),2);
    pcVar2 = (char *)std::string::c_str(psVar1);
    uVar3 = StringToNumber(pcVar2);
    *(undefined4 *)(this + 0xc) = uVar3;
  }
  return;
}

```

