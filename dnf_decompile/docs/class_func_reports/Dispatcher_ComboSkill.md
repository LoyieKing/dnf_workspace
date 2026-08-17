# Dispatcher_ComboSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## checkComboSkillIndex

```asm
// === 0825f292 Dispatcher_ComboSkill::checkComboSkillIndex  [0x0825f292-0x825f2fb] ===
 825f292:	55                   	push   %ebp
 825f293:	89 e5                	mov    %esp,%ebp
 825f295:	53                   	push   %ebx
 825f296:	83 ec 34             	sub    $0x34,%esp
 825f299:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f29c:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 825f2a0:	e8 f6 ce e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 825f2a5:	8b 40 14             	mov    0x14(%eax),%eax
 825f2a8:	05 fc 48 00 00       	add    $0x48fc,%eax
 825f2ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825f2b0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 825f2b7:	eb 2c                	jmp    825f2e5 <_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs+0x53>
 825f2b9:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 825f2bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f2c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f2c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f2c7:	89 04 24             	mov    %eax,(%esp)
 825f2ca:	e8 d5 b5 e8 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 825f2cf:	8b 00                	mov    (%eax),%eax
 825f2d1:	39 c3                	cmp    %eax,%ebx
 825f2d3:	0f 94 c0             	sete   %al
 825f2d6:	84 c0                	test   %al,%al
 825f2d8:	74 07                	je     825f2e1 <_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs+0x4f>
 825f2da:	b8 01 00 00 00       	mov    $0x1,%eax
 825f2df:	eb 14                	jmp    825f2f5 <_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs+0x63>
 825f2e1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 825f2e5:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 825f2e9:	0f 9e c0             	setle  %al
 825f2ec:	84 c0                	test   %al,%al
 825f2ee:	75 c9                	jne    825f2b9 <_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs+0x27>
 825f2f0:	b8 00 00 00 00       	mov    $0x0,%eax
 825f2f5:	83 c4 34             	add    $0x34,%esp
 825f2f8:	5b                   	pop    %ebx
 825f2f9:	5d                   	pop    %ebp
 825f2fa:	c3                   	ret
 825f2fb:	90                   	nop

```

```c
// Dispatcher_ComboSkill::checkComboSkillIndex @ 0x825f292

/* Dispatcher_ComboSkill::checkComboSkillIndex(short) */

undefined4 __thiscall
Dispatcher_ComboSkill::checkComboSkillIndex(Dispatcher_ComboSkill *this,short param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = G_CDataManager();
  iVar1 = *(int *)(iVar1 + 0x14);
  local_10 = 0;
  while( true ) {
    if (5 < (int)local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (iVar1 + 0x48fc),local_10);
    if ((int)param_1 == *piVar2) break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## check_error

```asm
// === 0825f3ce Dispatcher_ComboSkill::check_error  [0x0825f3ce-0x825f443] ===
 825f3ce:	55                   	push   %ebp
 825f3cf:	89 e5                	mov    %esp,%ebp
 825f3d1:	83 ec 28             	sub    $0x28,%esp
 825f3d4:	8b 45 10             	mov    0x10(%ebp),%eax
 825f3d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f3da:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825f3de:	75 07                	jne    825f3e7 <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x19>
 825f3e0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825f3e5:	eb 5a                	jmp    825f441 <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x73>
 825f3e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f3ea:	89 04 24             	mov    %eax,(%esp)
 825f3ed:	e8 9a af e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825f3f2:	83 f8 02             	cmp    $0x2,%eax
 825f3f5:	0f 9e c0             	setle  %al
 825f3f8:	84 c0                	test   %al,%al
 825f3fa:	74 07                	je     825f403 <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x35>
 825f3fc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825f401:	eb 3e                	jmp    825f441 <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x73>
 825f403:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f406:	89 04 24             	mov    %eax,(%esp)
 825f409:	e8 12 eb e9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 825f40e:	83 f8 09             	cmp    $0x9,%eax
 825f411:	0f 95 c0             	setne  %al
 825f414:	84 c0                	test   %al,%al
 825f416:	74 07                	je     825f41f <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x51>
 825f418:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825f41d:	eb 22                	jmp    825f441 <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x73>
 825f41f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f422:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f426:	84 c0                	test   %al,%al
 825f428:	74 12                	je     825f43c <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x6e>
 825f42a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f42d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f431:	3c 01                	cmp    $0x1,%al
 825f433:	74 07                	je     825f43c <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x6e>
 825f435:	b8 13 00 00 00       	mov    $0x13,%eax
 825f43a:	eb 05                	jmp    825f441 <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE+0x73>
 825f43c:	b8 00 00 00 00       	mov    $0x0,%eax
 825f441:	c9                   	leave
 825f442:	c3                   	ret
 825f443:	90                   	nop

```

```c
// Dispatcher_ComboSkill::check_error @ 0x825f3ce

/* Dispatcher_ComboSkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkill::check_error(Dispatcher_ComboSkill *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar2 == 9) {
        if ((param_2[0xd] == (MSG_BASE)0x0) || (param_2[0xd] == (MSG_BASE)0x1)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0x13;
        }
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 0825f2fc Dispatcher_ComboSkill::process  [0x0825f2fc-0x825f3cd] ===
 825f2fc:	55                   	push   %ebp
 825f2fd:	89 e5                	mov    %esp,%ebp
 825f2ff:	56                   	push   %esi
 825f300:	53                   	push   %ebx
 825f301:	83 ec 20             	sub    $0x20,%esp
 825f304:	8b 45 14             	mov    0x14(%ebp),%eax
 825f307:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825f30a:	8b 45 10             	mov    0x10(%ebp),%eax
 825f30d:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f311:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f314:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f318:	8b 45 08             	mov    0x8(%ebp),%eax
 825f31b:	89 04 24             	mov    %eax,(%esp)
 825f31e:	e8 ab 00 00 00       	call   825f3ce <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE>
 825f323:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825f326:	89 42 04             	mov    %eax,0x4(%edx)
 825f329:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f32c:	8b 40 04             	mov    0x4(%eax),%eax
 825f32f:	85 c0                	test   %eax,%eax
 825f331:	7e 0a                	jle    825f33d <_ZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 825f333:	b8 00 00 00 00       	mov    $0x0,%eax
 825f338:	e9 89 00 00 00       	jmp    825f3c6 <_ZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBase+0xca>
 825f33d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f340:	8b 40 04             	mov    0x4(%eax),%eax
 825f343:	85 c0                	test   %eax,%eax
 825f345:	79 28                	jns    825f36f <_ZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBase+0x73>
 825f347:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825f34a:	8b 40 04             	mov    0x4(%eax),%eax
 825f34d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f354:	00 
 825f355:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f359:	c7 44 24 04 c0 9e be 	movl   $0x8be9ec0,0x4(%esp)
 825f360:	08 
 825f361:	c7 04 24 3f 03 00 00 	movl   $0x33f,(%esp)
 825f368:	e8 6a 15 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f36d:	eb 57                	jmp    825f3c6 <_ZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBase+0xca>
 825f36f:	8b 45 10             	mov    0x10(%ebp),%eax
 825f372:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f375:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f378:	8d 70 0e             	lea    0xe(%eax),%esi
 825f37b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f37e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f382:	0f be d8             	movsbl %al,%ebx
 825f385:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f388:	89 04 24             	mov    %eax,(%esp)
 825f38b:	e8 b0 fd fc ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 825f390:	89 74 24 08          	mov    %esi,0x8(%esp)
 825f394:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825f398:	89 04 24             	mov    %eax,(%esp)
 825f39b:	e8 90 98 3a 00       	call   8608c30 <_ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE>
 825f3a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f3a3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 825f3a7:	0f be d8             	movsbl %al,%ebx
 825f3aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f3ad:	89 04 24             	mov    %eax,(%esp)
 825f3b0:	e8 8b fd fc ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 825f3b5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825f3b9:	89 04 24             	mov    %eax,(%esp)
 825f3bc:	e8 6b 9e 3a 00       	call   860922c <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND>
 825f3c1:	b8 00 00 00 00       	mov    $0x0,%eax
 825f3c6:	83 c4 20             	add    $0x20,%esp
 825f3c9:	5b                   	pop    %ebx
 825f3ca:	5e                   	pop    %esi
 825f3cb:	5d                   	pop    %ebp
 825f3cc:	c3                   	ret
 825f3cd:	90                   	nop

```

```c
// Dispatcher_ComboSkill::process @ 0x825f2fc

/* Dispatcher_ComboSkill::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ComboSkill::process
          (Dispatcher_ComboSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  SkillSlot *pSVar3;
  
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x33f,
                       "virtual int Dispatcher_ComboSkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      MVar1 = param_2[0xd];
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
      SkillSlot::setComboSkillInfo(pSVar3,(int)(char)MVar1,param_2 + 0xe);
      MVar1 = param_2[0xd];
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
      SkillSlot::verifyComboSkillTree(pSVar3,(int)(char)MVar1);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 0825ef78 Dispatcher_ComboSkill::read  [0x0825ef78-0x825f291] ===
 825ef78:	55                   	push   %ebp
 825ef79:	89 e5                	mov    %esp,%ebp
 825ef7b:	56                   	push   %esi
 825ef7c:	53                   	push   %ebx
 825ef7d:	83 ec 60             	sub    $0x60,%esp
 825ef80:	8b 45 10             	mov    0x10(%ebp),%eax
 825ef83:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825ef86:	66 c7 45 be 00 00    	movw   $0x0,-0x42(%ebp)
 825ef8c:	c6 45 bd 00          	movb   $0x0,-0x43(%ebp)
 825ef90:	c6 45 bc 00          	movb   $0x0,-0x44(%ebp)
 825ef94:	66 c7 45 ba 00 00    	movw   $0x0,-0x46(%ebp)
 825ef9a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 825ef9d:	89 04 24             	mov    %eax,(%esp)
 825efa0:	e8 07 f2 e2 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 825efa5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825efa8:	83 c0 0e             	add    $0xe,%eax
 825efab:	89 04 24             	mov    %eax,(%esp)
 825efae:	e8 e9 16 00 00       	call   826069c <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5clearEv>
 825efb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825efb6:	83 c0 0d             	add    $0xd,%eax
 825efb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 825efbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 825efc0:	89 04 24             	mov    %eax,(%esp)
 825efc3:	e8 5a df 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825efc8:	83 f0 01             	xor    $0x1,%eax
 825efcb:	84 c0                	test   %al,%al
 825efcd:	74 2b                	je     825effa <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x82>
 825efcf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825efd6:	00 
 825efd7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825efde:	00 
 825efdf:	c7 44 24 04 20 9f be 	movl   $0x8be9f20,0x4(%esp)
 825efe6:	08 
 825efe7:	c7 04 24 01 03 00 00 	movl   $0x301,(%esp)
 825efee:	e8 e4 18 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825eff3:	89 c3                	mov    %eax,%ebx
 825eff5:	e9 81 02 00 00       	jmp    825f27b <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x303>
 825effa:	8d 45 bd             	lea    -0x43(%ebp),%eax
 825effd:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f001:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f004:	89 04 24             	mov    %eax,(%esp)
 825f007:	e8 16 df 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825f00c:	83 f0 01             	xor    $0x1,%eax
 825f00f:	84 c0                	test   %al,%al
 825f011:	74 2b                	je     825f03e <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0xc6>
 825f013:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f01a:	00 
 825f01b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f022:	00 
 825f023:	c7 44 24 04 20 9f be 	movl   $0x8be9f20,0x4(%esp)
 825f02a:	08 
 825f02b:	c7 04 24 04 03 00 00 	movl   $0x304,(%esp)
 825f032:	e8 a0 18 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f037:	89 c3                	mov    %eax,%ebx
 825f039:	e9 3d 02 00 00       	jmp    825f27b <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x303>
 825f03e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 825f045:	e9 e9 01 00 00       	jmp    825f233 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2bb>
 825f04a:	66 c7 45 be 00 00    	movw   $0x0,-0x42(%ebp)
 825f050:	c6 45 bc 00          	movb   $0x0,-0x44(%ebp)
 825f054:	8d 45 be             	lea    -0x42(%ebp),%eax
 825f057:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f05b:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f05e:	89 04 24             	mov    %eax,(%esp)
 825f061:	e8 5a df 32 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 825f066:	83 f0 01             	xor    $0x1,%eax
 825f069:	84 c0                	test   %al,%al
 825f06b:	74 2b                	je     825f098 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x120>
 825f06d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f074:	00 
 825f075:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f07c:	00 
 825f07d:	c7 44 24 04 20 9f be 	movl   $0x8be9f20,0x4(%esp)
 825f084:	08 
 825f085:	c7 04 24 0c 03 00 00 	movl   $0x30c,(%esp)
 825f08c:	e8 46 18 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f091:	89 c3                	mov    %eax,%ebx
 825f093:	e9 e3 01 00 00       	jmp    825f27b <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x303>
 825f098:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 825f09c:	98                   	cwtl
 825f09d:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f0a1:	8b 45 08             	mov    0x8(%ebp),%eax
 825f0a4:	89 04 24             	mov    %eax,(%esp)
 825f0a7:	e8 e6 01 00 00       	call   825f292 <_ZN21Dispatcher_ComboSkill20checkComboSkillIndexEs>
 825f0ac:	83 f0 01             	xor    $0x1,%eax
 825f0af:	84 c0                	test   %al,%al
 825f0b1:	0f 85 77 01 00 00    	jne    825f22e <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2b6>
 825f0b7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 825f0ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f0be:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f0c1:	89 04 24             	mov    %eax,(%esp)
 825f0c4:	e8 59 de 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825f0c9:	83 f0 01             	xor    $0x1,%eax
 825f0cc:	84 c0                	test   %al,%al
 825f0ce:	74 2b                	je     825f0fb <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x183>
 825f0d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f0d7:	00 
 825f0d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f0df:	00 
 825f0e0:	c7 44 24 04 20 9f be 	movl   $0x8be9f20,0x4(%esp)
 825f0e7:	08 
 825f0e8:	c7 04 24 12 03 00 00 	movl   $0x312,(%esp)
 825f0ef:	e8 e3 17 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f0f4:	89 c3                	mov    %eax,%ebx
 825f0f6:	e9 80 01 00 00       	jmp    825f27b <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x303>
 825f0fb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 825f0fe:	89 04 24             	mov    %eax,(%esp)
 825f101:	e8 68 7a e3 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 825f106:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 825f10d:	eb 68                	jmp    825f177 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x1ff>
 825f10f:	66 c7 45 ba 00 00    	movw   $0x0,-0x46(%ebp)
 825f115:	8d 45 ba             	lea    -0x46(%ebp),%eax
 825f118:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f11c:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f11f:	89 04 24             	mov    %eax,(%esp)
 825f122:	e8 99 de 32 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 825f127:	83 f0 01             	xor    $0x1,%eax
 825f12a:	84 c0                	test   %al,%al
 825f12c:	74 2b                	je     825f159 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x1e1>
 825f12e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825f135:	00 
 825f136:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825f13d:	00 
 825f13e:	c7 44 24 04 20 9f be 	movl   $0x8be9f20,0x4(%esp)
 825f145:	08 
 825f146:	c7 04 24 19 03 00 00 	movl   $0x319,(%esp)
 825f14d:	e8 85 17 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825f152:	89 c3                	mov    %eax,%ebx
 825f154:	e9 22 01 00 00       	jmp    825f27b <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x303>
 825f159:	0f b7 45 ba          	movzwl -0x46(%ebp),%eax
 825f15d:	98                   	cwtl
 825f15e:	89 45 c0             	mov    %eax,-0x40(%ebp)
 825f161:	8d 45 c0             	lea    -0x40(%ebp),%eax
 825f164:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f168:	8d 45 ac             	lea    -0x54(%ebp),%eax
 825f16b:	89 04 24             	mov    %eax,(%esp)
 825f16e:	e8 7b f0 e2 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 825f173:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 825f177:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
 825f17b:	0f be c0             	movsbl %al,%eax
 825f17e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 825f181:	7e 0d                	jle    825f190 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x218>
 825f183:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 825f187:	7f 07                	jg     825f190 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x218>
 825f189:	b8 01 00 00 00       	mov    $0x1,%eax
 825f18e:	eb 05                	jmp    825f195 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x21d>
 825f190:	b8 00 00 00 00       	mov    $0x0,%eax
 825f195:	84 c0                	test   %al,%al
 825f197:	0f 85 72 ff ff ff    	jne    825f10f <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x197>
 825f19d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825f1a0:	8d 55 ac             	lea    -0x54(%ebp),%edx
 825f1a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 825f1a7:	8d 55 be             	lea    -0x42(%ebp),%edx
 825f1aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 825f1ae:	89 04 24             	mov    %eax,(%esp)
 825f1b1:	e8 48 15 00 00       	call   82606fe <_ZSt9make_pairIRsRSt6vectorIiSaIiEEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 825f1b6:	83 ec 04             	sub    $0x4,%esp
 825f1b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825f1bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 825f1c0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 825f1c3:	89 04 24             	mov    %eax,(%esp)
 825f1c6:	e8 77 15 00 00       	call   8260742 <_ZNSt4pairIKsSt6vectorIiSaIiEEEC1IsS3_EEOS_IT_T0_E>
 825f1cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825f1ce:	8d 48 0e             	lea    0xe(%eax),%ecx
 825f1d1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 825f1d4:	8d 55 cc             	lea    -0x34(%ebp),%edx
 825f1d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 825f1db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 825f1df:	89 04 24             	mov    %eax,(%esp)
 825f1e2:	e8 51 b7 e8 ff       	call   80ea938 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE6insertERKS7_>
 825f1e7:	83 ec 04             	sub    $0x4,%esp
 825f1ea:	8d 45 cc             	lea    -0x34(%ebp),%eax
 825f1ed:	89 04 24             	mov    %eax,(%esp)
 825f1f0:	e8 57 b2 e8 ff       	call   80ea44c <_ZNSt4pairIKsSt6vectorIiSaIiEEED1Ev>
 825f1f5:	eb 2a                	jmp    825f221 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2a9>
 825f1f7:	89 d3                	mov    %edx,%ebx
 825f1f9:	89 c6                	mov    %eax,%esi
 825f1fb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 825f1fe:	89 04 24             	mov    %eax,(%esp)
 825f201:	e8 46 b2 e8 ff       	call   80ea44c <_ZNSt4pairIKsSt6vectorIiSaIiEEED1Ev>
 825f206:	89 f0                	mov    %esi,%eax
 825f208:	89 da                	mov    %ebx,%edx
 825f20a:	eb 00                	jmp    825f20c <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x294>
 825f20c:	89 d3                	mov    %edx,%ebx
 825f20e:	89 c6                	mov    %eax,%esi
 825f210:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825f213:	89 04 24             	mov    %eax,(%esp)
 825f216:	e8 6b 14 00 00       	call   8260686 <_ZNSt4pairIsSt6vectorIiSaIiEEED1Ev>
 825f21b:	89 f0                	mov    %esi,%eax
 825f21d:	89 da                	mov    %ebx,%edx
 825f21f:	eb 3f                	jmp    825f260 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2e8>
 825f221:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825f224:	89 04 24             	mov    %eax,(%esp)
 825f227:	e8 5a 14 00 00       	call   8260686 <_ZNSt4pairIsSt6vectorIiSaIiEEED1Ev>
 825f22c:	eb 01                	jmp    825f22f <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2b7>
 825f22e:	90                   	nop
 825f22f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 825f233:	0f b6 45 bd          	movzbl -0x43(%ebp),%eax
 825f237:	0f be c0             	movsbl %al,%eax
 825f23a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 825f23d:	7e 0d                	jle    825f24c <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2d4>
 825f23f:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 825f243:	7f 07                	jg     825f24c <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2d4>
 825f245:	b8 01 00 00 00       	mov    $0x1,%eax
 825f24a:	eb 05                	jmp    825f251 <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x2d9>
 825f24c:	b8 00 00 00 00       	mov    $0x0,%eax
 825f251:	84 c0                	test   %al,%al
 825f253:	0f 85 f1 fd ff ff    	jne    825f04a <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0xd2>
 825f259:	bb 00 00 00 00       	mov    $0x0,%ebx
 825f25e:	eb 1b                	jmp    825f27b <_ZN21Dispatcher_ComboSkill4readER9PacketBufR8MSG_BASE+0x303>
 825f260:	89 d3                	mov    %edx,%ebx
 825f262:	89 c6                	mov    %eax,%esi
 825f264:	8d 45 ac             	lea    -0x54(%ebp),%eax
 825f267:	89 04 24             	mov    %eax,(%esp)
 825f26a:	e8 6b 4b e2 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 825f26f:	89 f0                	mov    %esi,%eax
 825f271:	89 da                	mov    %ebx,%edx
 825f273:	89 04 24             	mov    %eax,(%esp)
 825f276:	e8 d5 44 88 00       	call   8ae3750 <_Unwind_Resume>
 825f27b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 825f27e:	89 04 24             	mov    %eax,(%esp)
 825f281:	e8 54 4b e2 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 825f286:	89 d8                	mov    %ebx,%eax
 825f288:	8d 65 f8             	lea    -0x8(%ebp),%esp
 825f28b:	83 c4 00             	add    $0x0,%esp
 825f28e:	5b                   	pop    %ebx
 825f28f:	5e                   	pop    %esi
 825f290:	5d                   	pop    %ebp
 825f291:	c3                   	ret

```

```c
// Dispatcher_ComboSkill::read @ 0x825ef78

/* Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkill::read(Dispatcher_ComboSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  vector<int,std::allocator<int>> local_58 [14];
  short local_4a;
  char local_48;
  char local_47;
  short local_46;
  int local_44;
  pair local_40 [8];
  pair<short_const,std::vector<int,std::allocator<int>>> local_38 [16];
  pair<short,std::vector<int,std::allocator<int>>> local_28 [16];
  MSG_BASE *local_18;
  int local_14;
  int local_10;
  
  local_18 = param_2;
  local_46 = 0;
  local_47 = '\0';
  local_48 = '\0';
  local_4a = 0;
  std::vector<int,std::allocator<int>>::vector(local_58);
                    /* try { // try from 0825efae to 0825f1b5 has its CatchHandler @ 0825f260 */
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::clear((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
           *)(local_18 + 0xe));
  cVar2 = PacketBuf::get_byte(param_1,(char *)(local_18 + 0xd));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_byte(param_1,&local_47);
    if (cVar2 == '\x01') {
      local_14 = 0;
      while( true ) {
        if ((local_14 < local_47) && (local_14 < 6)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          uVar3 = 0;
          goto LAB_0825f27b;
        }
        local_46 = 0;
        local_48 = '\0';
        cVar2 = PacketBuf::get_short(param_1,&local_46);
        if (cVar2 != '\x01') break;
        cVar2 = checkComboSkillIndex(this,local_46);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_byte(param_1,&local_48);
          if (cVar2 != '\x01') {
            uVar3 = LineFunc(0x312,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",
                             0,0);
            goto LAB_0825f27b;
          }
          std::vector<int,std::allocator<int>>::clear(local_58);
          local_10 = 0;
          while( true ) {
            if ((local_10 < local_48) && (local_10 < 6)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) break;
            local_4a = 0;
            cVar2 = PacketBuf::get_short(param_1,&local_4a);
            if (cVar2 != '\x01') {
              uVar3 = LineFunc(0x319,
                               "virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0)
              ;
              goto LAB_0825f27b;
            }
            local_44 = (int)local_4a;
            std::vector<int,std::allocator<int>>::push_back(local_58,&local_44);
            local_10 = local_10 + 1;
          }
          std::make_pair<short&,std::vector<int,std::allocator<int>>&>
                    ((short *)local_28,(vector *)&local_46);
                    /* try { // try from 0825f1c6 to 0825f1ca has its CatchHandler @ 0825f20c */
          std::pair<short_const,std::vector<int,std::allocator<int>>>::
          pair<short,std::vector<int,std::allocator<int>>>(local_38,local_28);
                    /* try { // try from 0825f1e2 to 0825f1e6 has its CatchHandler @ 0825f1f7 */
          std::
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          ::insert(local_40);
                    /* try { // try from 0825f1f0 to 0825f1f4 has its CatchHandler @ 0825f20c */
          std::pair<short_const,std::vector<int,std::allocator<int>>>::~pair(local_38);
                    /* try { // try from 0825f227 to 0825f22b has its CatchHandler @ 0825f260 */
          std::pair<short,std::vector<int,std::allocator<int>>>::~pair(local_28);
        }
        local_14 = local_14 + 1;
      }
      uVar3 = LineFunc(0x30c,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
    else {
      uVar3 = LineFunc(0x304,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar3 = LineFunc(0x301,"virtual int Dispatcher_ComboSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
LAB_0825f27b:
  std::vector<int,std::allocator<int>>::~vector(local_58);
  return uVar3;
}

```

---

## send

```asm
// === 0825f444 Dispatcher_ComboSkill::send  [0x0825f444-0x825f491] ===
 825f444:	55                   	push   %ebp
 825f445:	89 e5                	mov    %esp,%ebp
 825f447:	83 ec 28             	sub    $0x28,%esp
 825f44a:	8b 45 10             	mov    0x10(%ebp),%eax
 825f44d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825f450:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f453:	8b 40 04             	mov    0x4(%eax),%eax
 825f456:	85 c0                	test   %eax,%eax
 825f458:	75 15                	jne    825f46f <_ZN21Dispatcher_ComboSkill4sendEP5CUserR9ParamBase+0x2b>
 825f45a:	c7 44 24 04 fd 01 00 	movl   $0x1fd,0x4(%esp)
 825f461:	00 
 825f462:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f465:	89 04 24             	mov    %eax,(%esp)
 825f468:	e8 33 ca 41 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 825f46d:	eb 20                	jmp    825f48f <_ZN21Dispatcher_ComboSkill4sendEP5CUserR9ParamBase+0x4b>
 825f46f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825f472:	8b 40 04             	mov    0x4(%eax),%eax
 825f475:	0f b6 c0             	movzbl %al,%eax
 825f478:	89 44 24 08          	mov    %eax,0x8(%esp)
 825f47c:	c7 44 24 04 fd 01 00 	movl   $0x1fd,0x4(%esp)
 825f483:	00 
 825f484:	8b 45 0c             	mov    0xc(%ebp),%eax
 825f487:	89 04 24             	mov    %eax,(%esp)
 825f48a:	e8 b3 ca 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 825f48f:	c9                   	leave
 825f490:	c3                   	ret
 825f491:	90                   	nop

```

```c
// Dispatcher_ComboSkill::send @ 0x825f444

/* Dispatcher_ComboSkill::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ComboSkill::send(Dispatcher_ComboSkill *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1fd);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fd,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

