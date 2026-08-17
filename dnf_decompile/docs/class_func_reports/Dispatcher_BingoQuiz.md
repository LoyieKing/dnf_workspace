# Dispatcher_BingoQuiz

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0825eaca Dispatcher_BingoQuiz::check_error  [0x0825eaca-0x825eb91] ===
 825eaca:	55                   	push   %ebp
 825eacb:	89 e5                	mov    %esp,%ebp
 825eacd:	83 ec 18             	sub    $0x18,%esp
 825ead0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825ead4:	74 0f                	je     825eae5 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0x1b>
 825ead6:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ead9:	89 04 24             	mov    %eax,(%esp)
 825eadc:	e8 51 19 ec ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 825eae1:	85 c0                	test   %eax,%eax
 825eae3:	75 07                	jne    825eaec <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0x22>
 825eae5:	b8 01 00 00 00       	mov    $0x1,%eax
 825eaea:	eb 05                	jmp    825eaf1 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0x27>
 825eaec:	b8 00 00 00 00       	mov    $0x0,%eax
 825eaf1:	84 c0                	test   %al,%al
 825eaf3:	74 0a                	je     825eaff <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0x35>
 825eaf5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825eafa:	e9 91 00 00 00       	jmp    825eb90 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xc6>
 825eaff:	8b 45 0c             	mov    0xc(%ebp),%eax
 825eb02:	89 04 24             	mov    %eax,(%esp)
 825eb05:	e8 82 b8 e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825eb0a:	83 f8 03             	cmp    $0x3,%eax
 825eb0d:	0f 95 c0             	setne  %al
 825eb10:	84 c0                	test   %al,%al
 825eb12:	74 07                	je     825eb1b <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0x51>
 825eb14:	b8 1e 00 00 00       	mov    $0x1e,%eax
 825eb19:	eb 75                	jmp    825eb90 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xc6>
 825eb1b:	a1 30 f7 41 09       	mov    0x941f730,%eax
 825eb20:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 825eb27:	00 
 825eb28:	89 04 24             	mov    %eax,(%esp)
 825eb2b:	e8 68 6e eb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 825eb30:	8b 10                	mov    (%eax),%edx
 825eb32:	83 c2 34             	add    $0x34,%edx
 825eb35:	8b 12                	mov    (%edx),%edx
 825eb37:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825eb3e:	00 
 825eb3f:	89 04 24             	mov    %eax,(%esp)
 825eb42:	ff d2                	call   *%edx
 825eb44:	83 f0 01             	xor    $0x1,%eax
 825eb47:	84 c0                	test   %al,%al
 825eb49:	74 07                	je     825eb52 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0x88>
 825eb4b:	b8 13 00 00 00       	mov    $0x13,%eax
 825eb50:	eb 3e                	jmp    825eb90 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xc6>
 825eb52:	8b 45 0c             	mov    0xc(%ebp),%eax
 825eb55:	89 04 24             	mov    %eax,(%esp)
 825eb58:	e8 53 27 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825eb5d:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 825eb61:	84 c0                	test   %al,%al
 825eb63:	74 07                	je     825eb6c <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xa2>
 825eb65:	b8 12 00 00 00       	mov    $0x12,%eax
 825eb6a:	eb 24                	jmp    825eb90 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xc6>
 825eb6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 825eb6f:	89 04 24             	mov    %eax,(%esp)
 825eb72:	e8 39 27 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825eb77:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 825eb7b:	3c 02                	cmp    $0x2,%al
 825eb7d:	0f 9f c0             	setg   %al
 825eb80:	84 c0                	test   %al,%al
 825eb82:	74 07                	je     825eb8b <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xc1>
 825eb84:	b8 16 00 00 00       	mov    $0x16,%eax
 825eb89:	eb 05                	jmp    825eb90 <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE+0xc6>
 825eb8b:	b8 00 00 00 00       	mov    $0x0,%eax
 825eb90:	c9                   	leave
 825eb91:	c3                   	ret

```

```c
// Dispatcher_BingoQuiz::check_error @ 0x825eaca

/* Dispatcher_BingoQuiz::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_BingoQuiz::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != (MSG_BASE *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0825eaf1;
    }
  }
  bVar1 = true;
LAB_0825eaf1:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 3) {
      piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
      if (cVar2 == '\x01') {
        iVar3 = CUser::getBingoData((CUser *)param_2);
        if (*(char *)(iVar3 + 5) == '\0') {
          iVar3 = CUser::getBingoData((CUser *)param_2);
          if (*(char *)(iVar3 + 4) < '\x03') {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x16;
          }
        }
        else {
          uVar4 = 0x12;
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
    else {
      uVar4 = 0x1e;
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 0825e9b8 Dispatcher_BingoQuiz::process  [0x0825e9b8-0x825eac9] ===
 825e9b8:	55                   	push   %ebp
 825e9b9:	89 e5                	mov    %esp,%ebp
 825e9bb:	83 ec 38             	sub    $0x38,%esp
 825e9be:	8b 45 10             	mov    0x10(%ebp),%eax
 825e9c1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825e9c4:	8b 45 14             	mov    0x14(%ebp),%eax
 825e9c7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825e9ca:	8b 45 10             	mov    0x10(%ebp),%eax
 825e9cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 825e9d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e9d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e9d8:	8b 45 08             	mov    0x8(%ebp),%eax
 825e9db:	89 04 24             	mov    %eax,(%esp)
 825e9de:	e8 e7 00 00 00       	call   825eaca <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE>
 825e9e3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e9e6:	89 42 04             	mov    %eax,0x4(%edx)
 825e9e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e9ec:	8b 40 04             	mov    0x4(%eax),%eax
 825e9ef:	85 c0                	test   %eax,%eax
 825e9f1:	7e 0a                	jle    825e9fd <_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 825e9f3:	b8 00 00 00 00       	mov    $0x0,%eax
 825e9f8:	e9 ca 00 00 00       	jmp    825eac7 <_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase+0x10f>
 825e9fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825ea00:	8b 40 04             	mov    0x4(%eax),%eax
 825ea03:	85 c0                	test   %eax,%eax
 825ea05:	79 5c                	jns    825ea63 <_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase+0xab>
 825ea07:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825ea0a:	8b 40 04             	mov    0x4(%eax),%eax
 825ea0d:	89 44 24 14          	mov    %eax,0x14(%esp)
 825ea11:	c7 44 24 10 e0 85 be 	movl   $0x8be85e0,0x10(%esp)
 825ea18:	08 
 825ea19:	c7 44 24 0c f0 01 00 	movl   $0x1f0,0xc(%esp)
 825ea20:	00 
 825ea21:	c7 44 24 08 20 a0 be 	movl   $0x8bea020,0x8(%esp)
 825ea28:	08 
 825ea29:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825ea30:	08 
 825ea31:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825ea38:	e8 cd 51 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825ea3d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825ea44:	00 
 825ea45:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825ea4c:	00 
 825ea4d:	c7 44 24 04 20 a0 be 	movl   $0x8bea020,0x4(%esp)
 825ea54:	08 
 825ea55:	c7 04 24 f1 01 00 00 	movl   $0x1f1,(%esp)
 825ea5c:	e8 76 1e 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825ea61:	eb 64                	jmp    825eac7 <_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase+0x10f>
 825ea63:	a1 30 f7 41 09       	mov    0x941f730,%eax
 825ea68:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 825ea6f:	00 
 825ea70:	89 04 24             	mov    %eax,(%esp)
 825ea73:	e8 20 6f eb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 825ea78:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825ea7b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825ea7f:	74 24                	je     825eaa5 <_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase+0xed>
 825ea81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825ea84:	8b 40 0d             	mov    0xd(%eax),%eax
 825ea87:	89 44 24 08          	mov    %eax,0x8(%esp)
 825ea8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ea8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ea92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ea95:	89 04 24             	mov    %eax,(%esp)
 825ea98:	e8 c5 b7 e6 ff       	call   80ca262 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri>
 825ea9d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825eaa0:	89 42 04             	mov    %eax,0x4(%edx)
 825eaa3:	eb 0a                	jmp    825eaaf <_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase+0xf7>
 825eaa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825eaa8:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 825eaaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 825eab2:	89 04 24             	mov    %eax,(%esp)
 825eab5:	e8 f6 27 43 00       	call   86912b0 <_ZN5CUser12getBingoDataEv>
 825eaba:	8b 10                	mov    (%eax),%edx
 825eabc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825eabf:	89 50 08             	mov    %edx,0x8(%eax)
 825eac2:	b8 00 00 00 00       	mov    $0x0,%eax
 825eac7:	c9                   	leave
 825eac8:	c3                   	ret
 825eac9:	90                   	nop

```

```c
// Dispatcher_BingoQuiz::process @ 0x825e9b8

/* Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BingoQuiz::process
          (Dispatcher_BingoQuiz *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  BingoEvent *this_00;
  undefined4 *puVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&)",0x1f0,
                 "Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = LineFunc(0x1f1,
                       "virtual int Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&)",0,
                       0);
    }
    else {
      this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      if (this_00 == (BingoEvent *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x13;
      }
      else {
        uVar1 = BingoEvent::reqBingoQuizMark(this_00,param_1,*(int *)(param_2 + 0xd));
        *(undefined4 *)(param_3 + 4) = uVar1;
      }
      puVar2 = (undefined4 *)CUser::getBingoData(param_1);
      *(undefined4 *)(param_3 + 8) = *puVar2;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 0825e962 Dispatcher_BingoQuiz::read  [0x0825e962-0x825e9b7] ===
 825e962:	55                   	push   %ebp
 825e963:	89 e5                	mov    %esp,%ebp
 825e965:	83 ec 28             	sub    $0x28,%esp
 825e968:	8b 45 10             	mov    0x10(%ebp),%eax
 825e96b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825e96e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e971:	83 c0 0d             	add    $0xd,%eax
 825e974:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e978:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e97b:	89 04 24             	mov    %eax,(%esp)
 825e97e:	e8 6d e7 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 825e983:	83 f0 01             	xor    $0x1,%eax
 825e986:	84 c0                	test   %al,%al
 825e988:	74 26                	je     825e9b0 <_ZN20Dispatcher_BingoQuiz4readER9PacketBufR8MSG_BASE+0x4e>
 825e98a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e991:	00 
 825e992:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e999:	00 
 825e99a:	c7 44 24 04 80 a0 be 	movl   $0x8bea080,0x4(%esp)
 825e9a1:	08 
 825e9a2:	c7 04 24 de 01 00 00 	movl   $0x1de,(%esp)
 825e9a9:	e8 29 1f 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e9ae:	eb 05                	jmp    825e9b5 <_ZN20Dispatcher_BingoQuiz4readER9PacketBufR8MSG_BASE+0x53>
 825e9b0:	b8 00 00 00 00       	mov    $0x0,%eax
 825e9b5:	c9                   	leave
 825e9b6:	c3                   	ret
 825e9b7:	90                   	nop

```

```c
// Dispatcher_BingoQuiz::read @ 0x825e962

/* Dispatcher_BingoQuiz::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BingoQuiz::read(Dispatcher_BingoQuiz *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x1de,"virtual int Dispatcher_BingoQuiz::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 0825eb92 Dispatcher_BingoQuiz::send  [0x0825eb92-0x825ed05] ===
 825eb92:	55                   	push   %ebp
 825eb93:	89 e5                	mov    %esp,%ebp
 825eb95:	56                   	push   %esi
 825eb96:	53                   	push   %ebx
 825eb97:	83 ec 30             	sub    $0x30,%esp
 825eb9a:	8b 45 10             	mov    0x10(%ebp),%eax
 825eb9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825eba0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825eba3:	8b 40 04             	mov    0x4(%eax),%eax
 825eba6:	85 c0                	test   %eax,%eax
 825eba8:	0f 85 a0 00 00 00    	jne    825ec4e <_ZN20Dispatcher_BingoQuiz4sendEP5CUserR9ParamBase+0xbc>
 825ebae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ebb1:	89 04 24             	mov    %eax,(%esp)
 825ebb4:	e8 93 f1 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825ebb9:	c7 44 24 08 03 02 00 	movl   $0x203,0x8(%esp)
 825ebc0:	00 
 825ebc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825ebc8:	00 
 825ebc9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ebcc:	89 04 24             	mov    %eax,(%esp)
 825ebcf:	e8 28 cd e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825ebd4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825ebdb:	00 
 825ebdc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ebdf:	89 04 24             	mov    %eax,(%esp)
 825ebe2:	e8 39 cd e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825ebe7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ebea:	8b 40 08             	mov    0x8(%eax),%eax
 825ebed:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ebf1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ebf4:	89 04 24             	mov    %eax,(%esp)
 825ebf7:	e8 40 cd e6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 825ebfc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825ec03:	00 
 825ec04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ec07:	89 04 24             	mov    %eax,(%esp)
 825ec0a:	e8 49 cd e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825ec0f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ec12:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ec16:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ec19:	89 04 24             	mov    %eax,(%esp)
 825ec1c:	e8 99 99 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825ec21:	eb 1b                	jmp    825ec3e <_ZN20Dispatcher_BingoQuiz4sendEP5CUserR9ParamBase+0xac>
 825ec23:	89 d3                	mov    %edx,%ebx
 825ec25:	89 c6                	mov    %eax,%esi
 825ec27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ec2a:	89 04 24             	mov    %eax,(%esp)
 825ec2d:	e8 4e f2 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825ec32:	89 f0                	mov    %esi,%eax
 825ec34:	89 da                	mov    %ebx,%edx
 825ec36:	89 04 24             	mov    %eax,(%esp)
 825ec39:	e8 12 4b 88 00       	call   8ae3750 <_Unwind_Resume>
 825ec3e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825ec41:	89 04 24             	mov    %eax,(%esp)
 825ec44:	e8 37 f2 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825ec49:	e9 b0 00 00 00       	jmp    825ecfe <_ZN20Dispatcher_BingoQuiz4sendEP5CUserR9ParamBase+0x16c>
 825ec4e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ec51:	89 04 24             	mov    %eax,(%esp)
 825ec54:	e8 f3 f0 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825ec59:	c7 44 24 08 03 02 00 	movl   $0x203,0x8(%esp)
 825ec60:	00 
 825ec61:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825ec68:	00 
 825ec69:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ec6c:	89 04 24             	mov    %eax,(%esp)
 825ec6f:	e8 88 cc e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825ec74:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825ec7b:	00 
 825ec7c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ec7f:	89 04 24             	mov    %eax,(%esp)
 825ec82:	e8 99 cc e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825ec87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ec8a:	8b 40 04             	mov    0x4(%eax),%eax
 825ec8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 825ec91:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ec94:	89 04 24             	mov    %eax,(%esp)
 825ec97:	e8 84 cc e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825ec9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825ec9f:	8b 40 08             	mov    0x8(%eax),%eax
 825eca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 825eca6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825eca9:	89 04 24             	mov    %eax,(%esp)
 825ecac:	e8 8b cc e6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 825ecb1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825ecb8:	00 
 825ecb9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ecbc:	89 04 24             	mov    %eax,(%esp)
 825ecbf:	e8 94 cc e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825ecc4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ecc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 825eccb:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ecce:	89 04 24             	mov    %eax,(%esp)
 825ecd1:	e8 e4 98 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825ecd6:	eb 1b                	jmp    825ecf3 <_ZN20Dispatcher_BingoQuiz4sendEP5CUserR9ParamBase+0x161>
 825ecd8:	89 d3                	mov    %edx,%ebx
 825ecda:	89 c6                	mov    %eax,%esi
 825ecdc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ecdf:	89 04 24             	mov    %eax,(%esp)
 825ece2:	e8 99 f1 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825ece7:	89 f0                	mov    %esi,%eax
 825ece9:	89 da                	mov    %ebx,%edx
 825eceb:	89 04 24             	mov    %eax,(%esp)
 825ecee:	e8 5d 4a 88 00       	call   8ae3750 <_Unwind_Resume>
 825ecf3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825ecf6:	89 04 24             	mov    %eax,(%esp)
 825ecf9:	e8 82 f1 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825ecfe:	83 c4 30             	add    $0x30,%esp
 825ed01:	5b                   	pop    %ebx
 825ed02:	5e                   	pop    %esi
 825ed03:	5d                   	pop    %ebp
 825ed04:	c3                   	ret
 825ed05:	90                   	nop

```

```c
// Dispatcher_BingoQuiz::send @ 0x825eb92

/* Dispatcher_BingoQuiz::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BingoQuiz::send(Dispatcher_BingoQuiz *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825ebcf to 0825ec20 has its CatchHandler @ 0825ec23 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x203);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0825ec6f to 0825ecd5 has its CatchHandler @ 0825ecd8 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x203);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}

```

