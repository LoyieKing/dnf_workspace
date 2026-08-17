# APSystem__Dispatcher_ClearAction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0812513c APSystem::Dispatcher_ClearAction::dispatch_sig  [0x0812513c-0x81251d9] ===
 812513c:	55                   	push   %ebp
 812513d:	89 e5                	mov    %esp,%ebp
 812513f:	83 ec 28             	sub    $0x28,%esp
 8125142:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8125146:	74 1f                	je     8125167 <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8125148:	8b 45 0c             	mov    0xc(%ebp),%eax
 812514b:	89 04 24             	mov    %eax,(%esp)
 812514e:	e8 39 52 fb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8125153:	83 f8 02             	cmp    $0x2,%eax
 8125156:	7e 0f                	jle    8125167 <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8125158:	8b 45 0c             	mov    0xc(%ebp),%eax
 812515b:	89 04 24             	mov    %eax,(%esp)
 812515e:	e8 cf b2 ff ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8125163:	85 c0                	test   %eax,%eax
 8125165:	75 07                	jne    812516e <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8125167:	b8 01 00 00 00       	mov    $0x1,%eax
 812516c:	eb 05                	jmp    8125173 <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x37>
 812516e:	b8 00 00 00 00       	mov    $0x0,%eax
 8125173:	84 c0                	test   %al,%al
 8125175:	74 07                	je     812517e <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x42>
 8125177:	b8 78 02 00 00       	mov    $0x278,%eax
 812517c:	eb 59                	jmp    81251d7 <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 812517e:	8d 45 ed             	lea    -0x13(%ebp),%eax
 8125181:	89 04 24             	mov    %eax,(%esp)
 8125184:	e8 21 d9 ff ff       	call   8122aaa <_ZN8APSystem30_MSG_ACTION_POINT_ACTION_CLEARC1Ev>
 8125189:	8d 45 ed             	lea    -0x13(%ebp),%eax
 812518c:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 8125193:	00 
 8125194:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125198:	8b 45 10             	mov    0x10(%ebp),%eax
 812519b:	89 04 24             	mov    %eax,(%esp)
 812519e:	e8 0f 82 46 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81251a3:	83 f0 01             	xor    $0x1,%eax
 81251a6:	84 c0                	test   %al,%al
 81251a8:	74 07                	je     81251b1 <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x75>
 81251aa:	b8 7c 02 00 00       	mov    $0x27c,%eax
 81251af:	eb 26                	jmp    81251d7 <_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 81251b1:	8b 55 f1             	mov    -0xf(%ebp),%edx
 81251b4:	8b 45 ed             	mov    -0x13(%ebp),%eax
 81251b7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81251be:	00 
 81251bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 81251c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81251c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81251ca:	89 04 24             	mov    %eax,(%esp)
 81251cd:	e8 be d1 ff ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81251d2:	b8 00 00 00 00       	mov    $0x0,%eax
 81251d7:	c9                   	leave
 81251d8:	c3                   	ret
 81251d9:	90                   	nop

```

```c
// APSystem::Dispatcher_ClearAction::dispatch_sig @ 0x812513c

/* APSystem::Dispatcher_ClearAction::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
APSystem::Dispatcher_ClearAction::dispatch_sig
          (Dispatcher_ClearAction *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_17;
  undefined4 local_13;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUser::get_state(param_1);
    if (2 < iVar3) {
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar3 != 0) {
        bVar1 = false;
        goto LAB_08125173;
      }
    }
  }
  bVar1 = true;
LAB_08125173:
  if (bVar1) {
    uVar4 = 0x278;
  }
  else {
    _MSG_ACTION_POINT_ACTION_CLEAR::_MSG_ACTION_POINT_ACTION_CLEAR
              ((_MSG_ACTION_POINT_ACTION_CLEAR *)&local_17);
    cVar2 = PacketBuf::get_binary(param_2,(char *)&local_17,0xb);
    if (cVar2 == '\x01') {
      CUserProc::ClearActionAndSendtoUser(param_1,local_17,local_13,1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x27c;
    }
  }
  return uVar4;
}

```

