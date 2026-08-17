# DisPatcher_EventDungeon_DestoryObject

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0812bd82 DisPatcher_EventDungeon_DestoryObject::check_error  [0x0812bd82-0x812bd8b] ===
 812bd82:	55                   	push   %ebp
 812bd83:	89 e5                	mov    %esp,%ebp
 812bd85:	b8 00 00 00 00       	mov    $0x0,%eax
 812bd8a:	5d                   	pop    %ebp
 812bd8b:	c3                   	ret

```

```c
// DisPatcher_EventDungeon_DestoryObject::check_error @ 0x812bd82

/* DisPatcher_EventDungeon_DestoryObject::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_EventDungeon_DestoryObject::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 0812bd8c DisPatcher_EventDungeon_DestoryObject::process  [0x0812bd8c-0x812bdcb] ===
 812bd8c:	55                   	push   %ebp
 812bd8d:	89 e5                	mov    %esp,%ebp
 812bd8f:	83 ec 1c             	sub    $0x1c,%esp
 812bd92:	8b 45 10             	mov    0x10(%ebp),%eax
 812bd95:	89 45 f8             	mov    %eax,-0x8(%ebp)
 812bd98:	8b 45 14             	mov    0x14(%ebp),%eax
 812bd9b:	89 45 fc             	mov    %eax,-0x4(%ebp)
 812bd9e:	8b 45 f8             	mov    -0x8(%ebp),%eax
 812bda1:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 812bda5:	8b 45 fc             	mov    -0x4(%ebp),%eax
 812bda8:	66 89 50 04          	mov    %dx,0x4(%eax)
 812bdac:	8b 45 f8             	mov    -0x8(%ebp),%eax
 812bdaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 812bdb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 812bdb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 812bdba:	8b 45 08             	mov    0x8(%ebp),%eax
 812bdbd:	89 04 24             	mov    %eax,(%esp)
 812bdc0:	e8 bd ff ff ff       	call   812bd82 <_ZN37DisPatcher_EventDungeon_DestoryObject11check_errorEP5CUserR8MSG_BASE>
 812bdc5:	b8 00 00 00 00       	mov    $0x0,%eax
 812bdca:	c9                   	leave
 812bdcb:	c3                   	ret

```

```c
// DisPatcher_EventDungeon_DestoryObject::process @ 0x812bd8c

/* DisPatcher_EventDungeon_DestoryObject::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_EventDungeon_DestoryObject::process
          (DisPatcher_EventDungeon_DestoryObject *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 0xe);
  check_error((CUser *)this,(MSG_BASE *)param_1);
  return 0;
}

```

---

## read

```asm
// === 0812bd54 DisPatcher_EventDungeon_DestoryObject::read  [0x0812bd54-0x812bd81] ===
 812bd54:	55                   	push   %ebp
 812bd55:	89 e5                	mov    %esp,%ebp
 812bd57:	83 ec 28             	sub    $0x28,%esp
 812bd5a:	8b 45 10             	mov    0x10(%ebp),%eax
 812bd5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812bd60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812bd63:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 812bd6a:	00 
 812bd6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812bd6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 812bd72:	89 04 24             	mov    %eax,(%esp)
 812bd75:	e8 38 16 46 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 812bd7a:	b8 00 00 00 00       	mov    $0x0,%eax
 812bd7f:	c9                   	leave
 812bd80:	c3                   	ret
 812bd81:	90                   	nop

```

```c
// DisPatcher_EventDungeon_DestoryObject::read @ 0x812bd54

/* DisPatcher_EventDungeon_DestoryObject::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_EventDungeon_DestoryObject::read
          (DisPatcher_EventDungeon_DestoryObject *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x18);
  return 0;
}

```

---

## send

```asm
// === 0812bdcc DisPatcher_EventDungeon_DestoryObject::send  [0x0812bdcc-0x812be81] ===
 812bdcc:	55                   	push   %ebp
 812bdcd:	89 e5                	mov    %esp,%ebp
 812bdcf:	56                   	push   %esi
 812bdd0:	53                   	push   %ebx
 812bdd1:	83 ec 20             	sub    $0x20,%esp
 812bdd4:	8b 45 10             	mov    0x10(%ebp),%eax
 812bdd7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812bdda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bddd:	89 04 24             	mov    %eax,(%esp)
 812bde0:	e8 67 1f 46 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 812bde5:	c7 44 24 08 1b 02 00 	movl   $0x21b,0x8(%esp)
 812bdec:	00 
 812bded:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812bdf4:	00 
 812bdf5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812bdf8:	89 04 24             	mov    %eax,(%esp)
 812bdfb:	e8 fc fa f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 812be00:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812be07:	00 
 812be08:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812be0b:	89 04 24             	mov    %eax,(%esp)
 812be0e:	e8 0d fb f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 812be13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812be16:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 812be1d:	00 
 812be1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 812be22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812be25:	89 04 24             	mov    %eax,(%esp)
 812be28:	e8 db 20 ff ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 812be2d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812be34:	00 
 812be35:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812be38:	89 04 24             	mov    %eax,(%esp)
 812be3b:	e8 18 fb f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 812be40:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812be43:	89 44 24 04          	mov    %eax,0x4(%esp)
 812be47:	8b 45 0c             	mov    0xc(%ebp),%eax
 812be4a:	89 04 24             	mov    %eax,(%esp)
 812be4d:	e8 68 c7 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 812be52:	eb 1b                	jmp    812be6f <_ZN37DisPatcher_EventDungeon_DestoryObject4sendEP5CUserR9ParamBase+0xa3>
 812be54:	89 d3                	mov    %edx,%ebx
 812be56:	89 c6                	mov    %eax,%esi
 812be58:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812be5b:	89 04 24             	mov    %eax,(%esp)
 812be5e:	e8 1d 20 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812be63:	89 f0                	mov    %esi,%eax
 812be65:	89 da                	mov    %ebx,%edx
 812be67:	89 04 24             	mov    %eax,(%esp)
 812be6a:	e8 e1 78 9b 00       	call   8ae3750 <_Unwind_Resume>
 812be6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812be72:	89 04 24             	mov    %eax,(%esp)
 812be75:	e8 06 20 46 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 812be7a:	83 c4 20             	add    $0x20,%esp
 812be7d:	5b                   	pop    %ebx
 812be7e:	5e                   	pop    %esi
 812be7f:	5d                   	pop    %ebp
 812be80:	c3                   	ret
 812be81:	90                   	nop

```

```c
// DisPatcher_EventDungeon_DestoryObject::send @ 0x812bdcc

/* DisPatcher_EventDungeon_DestoryObject::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_EventDungeon_DestoryObject::send
          (DisPatcher_EventDungeon_DestoryObject *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0812bdfb to 0812be51 has its CatchHandler @ 0812be54 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x21b);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,6);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

