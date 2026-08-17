# ARAD__Arad_Dispatcher_Manager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Arad_Dispatcher_Manager

```asm
// === 0818fdd4 ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager  [0x0818fdd4-0x818fe31] ===
 818fdd4:	55                   	push   %ebp
 818fdd5:	89 e5                	mov    %esp,%ebp
 818fdd7:	83 ec 10             	sub    $0x10,%esp
 818fdda:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 818fde1:	eb 11                	jmp    818fdf4 <_ZN4ARAD23Arad_Dispatcher_ManagerC1Ev+0x20>
 818fde3:	8b 55 f8             	mov    -0x8(%ebp),%edx
 818fde6:	8b 45 08             	mov    0x8(%ebp),%eax
 818fde9:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 818fdf0:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 818fdf4:	81 7d f8 53 03 00 00 	cmpl   $0x353,-0x8(%ebp)
 818fdfb:	0f 9e c0             	setle  %al
 818fdfe:	84 c0                	test   %al,%al
 818fe00:	75 e1                	jne    818fde3 <_ZN4ARAD23Arad_Dispatcher_ManagerC1Ev+0xf>
 818fe02:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 818fe09:	eb 17                	jmp    818fe22 <_ZN4ARAD23Arad_Dispatcher_ManagerC1Ev+0x4e>
 818fe0b:	8b 55 fc             	mov    -0x4(%ebp),%edx
 818fe0e:	8b 45 08             	mov    0x8(%ebp),%eax
 818fe11:	81 c2 54 03 00 00    	add    $0x354,%edx
 818fe17:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 818fe1e:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 818fe22:	81 7d fc 53 03 00 00 	cmpl   $0x353,-0x4(%ebp)
 818fe29:	0f 9e c0             	setle  %al
 818fe2c:	84 c0                	test   %al,%al
 818fe2e:	75 db                	jne    818fe0b <_ZN4ARAD23Arad_Dispatcher_ManagerC1Ev+0x37>
 818fe30:	c9                   	leave
 818fe31:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager @ 0x818fdd4

/* ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager() */

void __thiscall
ARAD::Arad_Dispatcher_Manager::Arad_Dispatcher_Manager(Arad_Dispatcher_Manager *this)

{
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 0x354; local_c = local_c + 1) {
    *(undefined4 *)(this + local_c * 4) = 0;
  }
  for (local_8 = 0; local_8 < 0x354; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x354) * 4) = 0;
  }
  return;
}

```

---

## db_dispatch

```asm
// === 08190080 ARAD::Arad_Dispatcher_Manager::db_dispatch  [0x08190080-0x819011c] ===
 8190080:	55                   	push   %ebp
 8190081:	89 e5                	mov    %esp,%ebp
 8190083:	83 ec 38             	sub    $0x38,%esp
 8190086:	8b 55 0c             	mov    0xc(%ebp),%edx
 8190089:	8b 45 08             	mov    0x8(%ebp),%eax
 819008c:	81 c2 54 03 00 00    	add    $0x354,%edx
 8190092:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8190095:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8190098:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 819009c:	75 07                	jne    81900a5 <_ZN4ARAD23Arad_Dispatcher_Manager11db_dispatchEiiP6Stream+0x25>
 819009e:	b8 00 00 00 00       	mov    $0x0,%eax
 81900a3:	eb 76                	jmp    819011b <_ZN4ARAD23Arad_Dispatcher_Manager11db_dispatchEiiP6Stream+0x9b>
 81900a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81900a8:	8b 00                	mov    (%eax),%eax
 81900aa:	83 c0 08             	add    $0x8,%eax
 81900ad:	8b 10                	mov    (%eax),%edx
 81900af:	8b 45 14             	mov    0x14(%ebp),%eax
 81900b2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81900b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81900b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81900bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81900c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81900c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81900c7:	89 04 24             	mov    %eax,(%esp)
 81900ca:	ff d2                	call   *%edx
 81900cc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81900cf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81900d3:	74 41                	je     8190116 <_ZN4ARAD23Arad_Dispatcher_Manager11db_dispatchEiiP6Stream+0x96>
 81900d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81900d8:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81900dc:	8b 45 10             	mov    0x10(%ebp),%eax
 81900df:	89 44 24 18          	mov    %eax,0x18(%esp)
 81900e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81900e6:	89 44 24 14          	mov    %eax,0x14(%esp)
 81900ea:	c7 44 24 10 d0 90 b9 	movl   $0x8b990d0,0x10(%esp)
 81900f1:	08 
 81900f2:	c7 44 24 0c ab 00 00 	movl   $0xab,0xc(%esp)
 81900f9:	00 
 81900fa:	c7 44 24 08 20 9d b9 	movl   $0x8b99d20,0x8(%esp)
 8190101:	08 
 8190102:	c7 44 24 04 64 90 b9 	movl   $0x8b99064,0x4(%esp)
 8190109:	08 
 819010a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8190111:	e8 f4 3a 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8190116:	b8 01 00 00 00       	mov    $0x1,%eax
 819011b:	c9                   	leave
 819011c:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Manager::db_dispatch @ 0x8190080

/* ARAD::Arad_Dispatcher_Manager::db_dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::db_dispatch
          (Arad_Dispatcher_Manager *this,int param_1,int param_2,Stream *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + (param_1 + 0x354) * 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3);
    if (iVar3 != 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_Dispatch_Manager.cpp",
                 "bool ARAD::Arad_Dispatcher_Manager::db_dispatch(int, int, Stream*)",0xab,
                 "[ERROR] DB Dispatch Result dipCode[%d] uid[%d], ErrLine(%d)",param_1,param_2,iVar3
                );
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## inter_dispatch

```asm
// === 0818ff6c ARAD::Arad_Dispatcher_Manager::inter_dispatch  [0x0818ff6c-0x819007f] ===
 818ff6c:	55                   	push   %ebp
 818ff6d:	89 e5                	mov    %esp,%ebp
 818ff6f:	83 ec 38             	sub    $0x38,%esp
 818ff72:	8b 55 0c             	mov    0xc(%ebp),%edx
 818ff75:	8b 45 08             	mov    0x8(%ebp),%eax
 818ff78:	8b 04 90             	mov    (%eax,%edx,4),%eax
 818ff7b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 818ff7e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 818ff82:	75 3d                	jne    818ffc1 <_ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci+0x55>
 818ff84:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ff87:	89 44 24 14          	mov    %eax,0x14(%esp)
 818ff8b:	c7 44 24 10 40 90 b9 	movl   $0x8b99040,0x10(%esp)
 818ff92:	08 
 818ff93:	c7 44 24 0c 7d 00 00 	movl   $0x7d,0xc(%esp)
 818ff9a:	00 
 818ff9b:	c7 44 24 08 80 9d b9 	movl   $0x8b99d80,0x8(%esp)
 818ffa2:	08 
 818ffa3:	c7 44 24 04 64 90 b9 	movl   $0x8b99064,0x4(%esp)
 818ffaa:	08 
 818ffab:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ffb2:	e8 53 3c 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ffb7:	b8 00 00 00 00       	mov    $0x0,%eax
 818ffbc:	e9 bc 00 00 00       	jmp    819007d <_ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci+0x111>
 818ffc1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818ffc4:	8b 00                	mov    (%eax),%eax
 818ffc6:	83 c0 0c             	add    $0xc,%eax
 818ffc9:	8b 10                	mov    (%eax),%edx
 818ffcb:	8b 45 18             	mov    0x18(%ebp),%eax
 818ffce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818ffd2:	8b 45 14             	mov    0x14(%ebp),%eax
 818ffd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ffd9:	8b 45 10             	mov    0x10(%ebp),%eax
 818ffdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 818ffe0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818ffe3:	89 04 24             	mov    %eax,(%esp)
 818ffe6:	ff d2                	call   *%edx
 818ffe8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818ffeb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818ffef:	0f 84 83 00 00 00    	je     8190078 <_ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci+0x10c>
 818fff5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818fffc:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8190000:	74 35                	je     8190037 <_ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci+0xcb>
 8190002:	8b 45 10             	mov    0x10(%ebp),%eax
 8190005:	89 04 24             	mov    %eax,(%esp)
 8190008:	e8 61 a3 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 819000d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8190010:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8190013:	05 40 42 0f 00       	add    $0xf4240,%eax
 8190018:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819001c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8190023:	00 
 8190024:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 819002b:	00 
 819002c:	8b 45 10             	mov    0x10(%ebp),%eax
 819002f:	89 04 24             	mov    %eax,(%esp)
 8190032:	e8 bd 89 4b 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 8190037:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819003a:	89 44 24 18          	mov    %eax,0x18(%esp)
 819003e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8190041:	89 44 24 14          	mov    %eax,0x14(%esp)
 8190045:	c7 44 24 10 8c 90 b9 	movl   $0x8b9908c,0x10(%esp)
 819004c:	08 
 819004d:	c7 44 24 0c 8d 00 00 	movl   $0x8d,0xc(%esp)
 8190054:	00 
 8190055:	c7 44 24 08 80 9d b9 	movl   $0x8b99d80,0x8(%esp)
 819005c:	08 
 819005d:	c7 44 24 04 64 90 b9 	movl   $0x8b99064,0x4(%esp)
 8190064:	08 
 8190065:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819006c:	e8 99 3b 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8190071:	b8 00 00 00 00       	mov    $0x0,%eax
 8190076:	eb 05                	jmp    819007d <_ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci+0x111>
 8190078:	b8 01 00 00 00       	mov    $0x1,%eax
 819007d:	c9                   	leave
 819007e:	c3                   	ret
 819007f:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Manager::inter_dispatch @ 0x818ff6c

/* ARAD::Arad_Dispatcher_Manager::inter_dispatch(int, CUser*, char*, int) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::inter_dispatch
          (Arad_Dispatcher_Manager *this,int param_1,CUser *param_2,char *param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  
  piVar1 = *(int **)(this + param_1 * 4);
  if (piVar1 == (int *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Dispatch_Manager.cpp",
               "bool ARAD::Arad_Dispatcher_Manager::inter_dispatch(ARAD::Arad_Dispatcher_Manager::INTERNAL_PACKET_CODE, CUser*, char*, int)"
               ,0x7d,"Not found Inter_Dispatch_Code[%d]",param_1);
    uVar2 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      local_10 = 0;
      if (param_2 != (CUser *)0x0) {
        local_10 = CUser::get_acc_id(param_2);
        CUser::DisConnSig(param_2,2,1,iVar3 + 1000000);
      }
      LogManager::logFormat
                (1,"localjapan/Arad_Dispatch_Manager.cpp",
                 "bool ARAD::Arad_Dispatcher_Manager::inter_dispatch(ARAD::Arad_Dispatcher_Manager::INTERNAL_PACKET_CODE, CUser*, char*, int)"
                 ,0x8d,"Inter Dispatch Result Error Inter_Dispatch_Code[%d] user_acc_id[%d]",param_1
                 ,local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## open

```asm
// === 0818fe38 ARAD::Arad_Dispatcher_Manager::open  [0x0818fe38-0x818fe97] ===
 818fe38:	55                   	push   %ebp
 818fe39:	89 e5                	mov    %esp,%ebp
 818fe3b:	57                   	push   %edi
 818fe3c:	56                   	push   %esi
 818fe3d:	53                   	push   %ebx
 818fe3e:	83 ec 2c             	sub    $0x2c,%esp
 818fe41:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 818fe48:	e8 03 46 59 00       	call   8724450 <_Znwj>
 818fe4d:	89 c3                	mov    %eax,%ebx
 818fe4f:	89 d8                	mov    %ebx,%eax
 818fe51:	89 04 24             	mov    %eax,(%esp)
 818fe54:	e8 73 eb ff ff       	call   818e9cc <_ZN4ARAD33Arad_Dispatcher_BuyItemCheck_ImplC1Ev>
 818fe59:	eb 18                	jmp    818fe73 <_ZN4ARAD23Arad_Dispatcher_Manager4openEv+0x3b>
 818fe5b:	89 d6                	mov    %edx,%esi
 818fe5d:	89 c7                	mov    %eax,%edi
 818fe5f:	89 1c 24             	mov    %ebx,(%esp)
 818fe62:	e8 89 46 59 00       	call   87244f0 <_ZdlPv>
 818fe67:	89 f8                	mov    %edi,%eax
 818fe69:	89 f2                	mov    %esi,%edx
 818fe6b:	89 04 24             	mov    %eax,(%esp)
 818fe6e:	e8 dd 38 95 00       	call   8ae3750 <_Unwind_Resume>
 818fe73:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 818fe76:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 818fe79:	e8 c6 ea ff ff       	call   818e944 <_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE4instEv>
 818fe7e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 818fe82:	89 04 24             	mov    %eax,(%esp)
 818fe85:	e8 0e 00 00 00       	call   818fe98 <_ZN4ARAD23Arad_Dispatcher_Manager19register_dispatcherEPNS_15Arad_DispatcherE>
 818fe8a:	b8 00 00 00 00       	mov    $0x0,%eax
 818fe8f:	83 c4 2c             	add    $0x2c,%esp
 818fe92:	5b                   	pop    %ebx
 818fe93:	5e                   	pop    %esi
 818fe94:	5f                   	pop    %edi
 818fe95:	5d                   	pop    %ebp
 818fe96:	c3                   	ret
 818fe97:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Manager::open @ 0x818fe38

/* ARAD::Arad_Dispatcher_Manager::open() */

undefined4 ARAD::Arad_Dispatcher_Manager::open(void)

{
  Arad_Dispatcher_BuyItemCheck_Impl *this;
  Arad_Dispatcher_Manager *this_00;
  
  this = operator_new(8);
                    /* try { // try from 0818fe54 to 0818fe58 has its CatchHandler @ 0818fe5b */
  Arad_Dispatcher_BuyItemCheck_Impl::Arad_Dispatcher_BuyItemCheck_Impl(this);
  this_00 = (Arad_Dispatcher_Manager *)GlobalInstance<ARAD::Arad_Dispatcher_Manager>::inst();
  register_dispatcher(this_00,(Arad_Dispatcher *)this);
  return 0;
}

```

---

## register_dispatcher

```asm
// === 0818fe98 ARAD::Arad_Dispatcher_Manager::register_dispatcher  [0x0818fe98-0x818fed5] ===
 818fe98:	55                   	push   %ebp
 818fe99:	89 e5                	mov    %esp,%ebp
 818fe9b:	83 ec 18             	sub    $0x18,%esp
 818fe9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fea1:	89 04 24             	mov    %eax,(%esp)
 818fea4:	e8 ef e9 ff ff       	call   818e898 <_ZN4ARAD15Arad_Dispatcher13dispathc_codeEv>
 818fea9:	8b 55 08             	mov    0x8(%ebp),%edx
 818feac:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 818feaf:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 818feb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 818feb5:	89 04 24             	mov    %eax,(%esp)
 818feb8:	e8 db e9 ff ff       	call   818e898 <_ZN4ARAD15Arad_Dispatcher13dispathc_codeEv>
 818febd:	89 c2                	mov    %eax,%edx
 818febf:	8b 45 08             	mov    0x8(%ebp),%eax
 818fec2:	8d 8a 54 03 00 00    	lea    0x354(%edx),%ecx
 818fec8:	8b 55 0c             	mov    0xc(%ebp),%edx
 818fecb:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 818fece:	b8 00 00 00 00       	mov    $0x0,%eax
 818fed3:	c9                   	leave
 818fed4:	c3                   	ret
 818fed5:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Manager::register_dispatcher @ 0x818fe98

/* ARAD::Arad_Dispatcher_Manager::register_dispatcher(ARAD::Arad_Dispatcher*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::register_dispatcher
          (Arad_Dispatcher_Manager *this,Arad_Dispatcher *param_1)

{
  int iVar1;
  
  iVar1 = Arad_Dispatcher::dispathc_code(param_1);
  *(Arad_Dispatcher **)(this + iVar1 * 4) = param_1;
  iVar1 = Arad_Dispatcher::dispathc_code(param_1);
  *(Arad_Dispatcher **)(this + (iVar1 + 0x354) * 4) = param_1;
  return 0;
}

```

---

## unregister_dispatcher

```asm
// === 0818fed6 ARAD::Arad_Dispatcher_Manager::unregister_dispatcher  [0x0818fed6-0x818ff6b] ===
 818fed6:	55                   	push   %ebp
 818fed7:	89 e5                	mov    %esp,%ebp
 818fed9:	83 ec 28             	sub    $0x28,%esp
 818fedc:	8b 55 0c             	mov    0xc(%ebp),%edx
 818fedf:	8b 45 08             	mov    0x8(%ebp),%eax
 818fee2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 818fee5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818fee8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818feec:	75 2c                	jne    818ff1a <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi+0x44>
 818feee:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818fef2:	74 12                	je     818ff06 <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi+0x30>
 818fef4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818fef7:	8b 00                	mov    (%eax),%eax
 818fef9:	83 c0 04             	add    $0x4,%eax
 818fefc:	8b 10                	mov    (%eax),%edx
 818fefe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818ff01:	89 04 24             	mov    %eax,(%esp)
 818ff04:	ff d2                	call   *%edx
 818ff06:	8b 55 0c             	mov    0xc(%ebp),%edx
 818ff09:	8b 45 08             	mov    0x8(%ebp),%eax
 818ff0c:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 818ff13:	b8 00 00 00 00       	mov    $0x0,%eax
 818ff18:	eb 4f                	jmp    818ff69 <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi+0x93>
 818ff1a:	8b 55 0c             	mov    0xc(%ebp),%edx
 818ff1d:	8b 45 08             	mov    0x8(%ebp),%eax
 818ff20:	81 c2 54 03 00 00    	add    $0x354,%edx
 818ff26:	8b 04 90             	mov    (%eax,%edx,4),%eax
 818ff29:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818ff2c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818ff30:	75 32                	jne    818ff64 <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi+0x8e>
 818ff32:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818ff36:	74 12                	je     818ff4a <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi+0x74>
 818ff38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818ff3b:	8b 00                	mov    (%eax),%eax
 818ff3d:	83 c0 04             	add    $0x4,%eax
 818ff40:	8b 10                	mov    (%eax),%edx
 818ff42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818ff45:	89 04 24             	mov    %eax,(%esp)
 818ff48:	ff d2                	call   *%edx
 818ff4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 818ff4d:	8b 45 08             	mov    0x8(%ebp),%eax
 818ff50:	81 c2 54 03 00 00    	add    $0x354,%edx
 818ff56:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 818ff5d:	b8 00 00 00 00       	mov    $0x0,%eax
 818ff62:	eb 05                	jmp    818ff69 <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi+0x93>
 818ff64:	b8 01 00 00 00       	mov    $0x1,%eax
 818ff69:	c9                   	leave
 818ff6a:	c3                   	ret
 818ff6b:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Manager::unregister_dispatcher @ 0x818fed6

/* WARNING: Removing unreachable block (ram,0x0818fef4) */
/* WARNING: Removing unreachable block (ram,0x0818ff38) */
/* ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(int) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::unregister_dispatcher(Arad_Dispatcher_Manager *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + param_1 * 4) == 0) {
    *(undefined4 *)(this + param_1 * 4) = 0;
    uVar1 = 0;
  }
  else if (*(int *)(this + (param_1 + 0x354) * 4) == 0) {
    *(undefined4 *)(this + (param_1 + 0x354) * 4) = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## ~Arad_Dispatcher_Manager

```asm
// === 0818fe32 ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager  [0x0818fe32-0x818fe37] ===
 818fe32:	55                   	push   %ebp
 818fe33:	89 e5                	mov    %esp,%ebp
 818fe35:	5d                   	pop    %ebp
 818fe36:	c3                   	ret
 818fe37:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager @ 0x818fe32

/* ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager() */

void __thiscall
ARAD::Arad_Dispatcher_Manager::~Arad_Dispatcher_Manager(Arad_Dispatcher_Manager *this)

{
  return;
}

```

