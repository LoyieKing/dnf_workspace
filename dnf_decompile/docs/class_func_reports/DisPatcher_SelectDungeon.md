# DisPatcher_SelectDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## checkBlueMarble

```asm
// === 081c9172 DisPatcher_SelectDungeon::checkBlueMarble  [0x081c9172-0x81c91e5] ===
 81c9172:	55                   	push   %ebp
 81c9173:	89 e5                	mov    %esp,%ebp
 81c9175:	83 ec 18             	sub    $0x18,%esp
 81c9178:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81c917c:	75 07                	jne    81c9185 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x13>
 81c917e:	b8 00 00 00 00       	mov    $0x0,%eax
 81c9183:	eb 5e                	jmp    81c91e3 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x71>
 81c9185:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9188:	89 04 24             	mov    %eax,(%esp)
 81c918b:	e8 f0 c5 f7 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81c9190:	85 c0                	test   %eax,%eax
 81c9192:	0f 94 c0             	sete   %al
 81c9195:	84 c0                	test   %al,%al
 81c9197:	74 07                	je     81c91a0 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x2e>
 81c9199:	b8 00 00 00 00       	mov    $0x0,%eax
 81c919e:	eb 43                	jmp    81c91e3 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x71>
 81c91a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c91a3:	89 04 24             	mov    %eax,(%esp)
 81c91a6:	e8 67 46 06 00       	call   822d812 <_ZN6CParty12IsSinglePlayEv>
 81c91ab:	84 c0                	test   %al,%al
 81c91ad:	74 1f                	je     81c91ce <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x5c>
 81c91af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c91b2:	89 04 24             	mov    %eax,(%esp)
 81c91b5:	e8 c6 c5 f7 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81c91ba:	89 04 24             	mov    %eax,(%esp)
 81c91bd:	e8 08 7d 4c 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81c91c2:	83 f8 01             	cmp    $0x1,%eax
 81c91c5:	75 07                	jne    81c91ce <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x5c>
 81c91c7:	b8 01 00 00 00       	mov    $0x1,%eax
 81c91cc:	eb 05                	jmp    81c91d3 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x61>
 81c91ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81c91d3:	84 c0                	test   %al,%al
 81c91d5:	74 07                	je     81c91de <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x6c>
 81c91d7:	b8 01 00 00 00       	mov    $0x1,%eax
 81c91dc:	eb 05                	jmp    81c91e3 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty+0x71>
 81c91de:	b8 00 00 00 00       	mov    $0x0,%eax
 81c91e3:	c9                   	leave
 81c91e4:	c3                   	ret
 81c91e5:	90                   	nop

```

```c
// DisPatcher_SelectDungeon::checkBlueMarble @ 0x81c9172

/* DisPatcher_SelectDungeon::checkBlueMarble(CParty*) */

undefined1 __thiscall
DisPatcher_SelectDungeon::checkBlueMarble(DisPatcher_SelectDungeon *this,CParty *param_1)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  
  if (param_1 == (CParty *)0x0) {
    return 0;
  }
  iVar2 = CParty::getManager(param_1);
  if (iVar2 != 0) {
    cVar1 = CParty::IsSinglePlay(param_1);
    if (cVar1 != '\0') {
      this_00 = (CUser *)CParty::getManager(param_1);
      iVar2 = CUser::getMoveSpace(this_00);
      if (iVar2 == 1) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

```

---

## check_error

```asm
// === 081c7f32 DisPatcher_SelectDungeon::check_error  [0x081c7f32-0x81c8101] ===
 81c7f32:	55                   	push   %ebp
 81c7f33:	89 e5                	mov    %esp,%ebp
 81c7f35:	83 ec 28             	sub    $0x28,%esp
 81c7f38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7f3b:	89 04 24             	mov    %eax,(%esp)
 81c7f3e:	e8 49 24 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c7f43:	83 f8 05             	cmp    $0x5,%eax
 81c7f46:	74 17                	je     81c7f5f <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81c7f48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7f4b:	89 04 24             	mov    %eax,(%esp)
 81c7f4e:	e8 39 24 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c7f53:	83 f8 0d             	cmp    $0xd,%eax
 81c7f56:	74 07                	je     81c7f5f <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81c7f58:	b8 01 00 00 00       	mov    $0x1,%eax
 81c7f5d:	eb 05                	jmp    81c7f64 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32>
 81c7f5f:	b8 00 00 00 00       	mov    $0x0,%eax
 81c7f64:	84 c0                	test   %al,%al
 81c7f66:	74 0a                	je     81c7f72 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x40>
 81c7f68:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c7f6d:	e9 8e 01 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c7f72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7f75:	89 04 24             	mov    %eax,(%esp)
 81c7f78:	e8 a1 f8 47 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81c7f7d:	84 c0                	test   %al,%al
 81c7f7f:	74 0a                	je     81c7f8b <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x59>
 81c7f81:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c7f86:	e9 75 01 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c7f8b:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7f8e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c7f91:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7f94:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c7f98:	84 c0                	test   %al,%al
 81c7f9a:	78 16                	js     81c7fb2 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x80>
 81c7f9c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7f9f:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c7fa3:	3c 02                	cmp    $0x2,%al
 81c7fa5:	7f 0b                	jg     81c7fb2 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x80>
 81c7fa7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7faa:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c7fae:	84 c0                	test   %al,%al
 81c7fb0:	79 0a                	jns    81c7fbc <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x8a>
 81c7fb2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c7fb7:	e9 44 01 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c7fbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7fbf:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c7fc3:	84 c0                	test   %al,%al
 81c7fc5:	78 0b                	js     81c7fd2 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa0>
 81c7fc7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7fca:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c7fce:	3c 01                	cmp    $0x1,%al
 81c7fd0:	7e 0a                	jle    81c7fdc <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81c7fd2:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81c7fd7:	e9 24 01 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c7fdc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7fdf:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c7fe3:	84 c0                	test   %al,%al
 81c7fe5:	7e 15                	jle    81c7ffc <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0xca>
 81c7fe7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7fea:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c7fee:	84 c0                	test   %al,%al
 81c7ff0:	7e 0a                	jle    81c7ffc <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0xca>
 81c7ff2:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c7ff7:	e9 04 01 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c7ffc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c7fff:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c8003:	3c 02                	cmp    $0x2,%al
 81c8005:	0f 84 8c 00 00 00    	je     81c8097 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x165>
 81c800b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c800e:	89 04 24             	mov    %eax,(%esp)
 81c8011:	e8 36 d1 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c8016:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c8019:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c801d:	75 0a                	jne    81c8029 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0xf7>
 81c801f:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c8024:	e9 d7 00 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c8029:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c802c:	89 04 24             	mov    %eax,(%esp)
 81c802f:	e8 4c d7 f7 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81c8034:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81c8037:	0f 95 c0             	setne  %al
 81c803a:	84 c0                	test   %al,%al
 81c803c:	74 0a                	je     81c8048 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x116>
 81c803e:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c8043:	e9 b8 00 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c8048:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c804b:	89 04 24             	mov    %eax,(%esp)
 81c804e:	e8 e7 57 06 00       	call   822d83a <_ZN6CParty9get_stateEv>
 81c8053:	3c 01                	cmp    $0x1,%al
 81c8055:	0f 95 c0             	setne  %al
 81c8058:	84 c0                	test   %al,%al
 81c805a:	74 0a                	je     81c8066 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x134>
 81c805c:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c8061:	e9 9a 00 00 00       	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c8066:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c8069:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c806d:	3c 01                	cmp    $0x1,%al
 81c806f:	75 16                	jne    81c8087 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x155>
 81c8071:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c8074:	89 04 24             	mov    %eax,(%esp)
 81c8077:	e8 d6 58 06 00       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 81c807c:	84 c0                	test   %al,%al
 81c807e:	74 07                	je     81c8087 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x155>
 81c8080:	b8 01 00 00 00       	mov    $0x1,%eax
 81c8085:	eb 05                	jmp    81c808c <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x15a>
 81c8087:	b8 00 00 00 00       	mov    $0x0,%eax
 81c808c:	84 c0                	test   %al,%al
 81c808e:	74 07                	je     81c8097 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x165>
 81c8090:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c8095:	eb 69                	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c8097:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c809a:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c809e:	3c 02                	cmp    $0x2,%al
 81c80a0:	75 07                	jne    81c80a9 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x177>
 81c80a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81c80a7:	eb 57                	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c80a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c80ac:	89 04 24             	mov    %eax,(%esp)
 81c80af:	e8 98 d0 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c80b4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c80b7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c80bb:	75 07                	jne    81c80c4 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x192>
 81c80bd:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c80c2:	eb 3c                	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c80c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c80c7:	89 04 24             	mov    %eax,(%esp)
 81c80ca:	e8 b1 d6 f7 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81c80cf:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81c80d2:	0f 95 c0             	setne  %al
 81c80d5:	84 c0                	test   %al,%al
 81c80d7:	74 07                	je     81c80e0 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ae>
 81c80d9:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c80de:	eb 20                	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c80e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c80e3:	89 04 24             	mov    %eax,(%esp)
 81c80e6:	e8 4f 57 06 00       	call   822d83a <_ZN6CParty9get_stateEv>
 81c80eb:	3c 01                	cmp    $0x1,%al
 81c80ed:	0f 95 c0             	setne  %al
 81c80f0:	84 c0                	test   %al,%al
 81c80f2:	74 07                	je     81c80fb <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1c9>
 81c80f4:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81c80f9:	eb 05                	jmp    81c8100 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81c80fb:	b8 00 00 00 00       	mov    $0x0,%eax
 81c8100:	c9                   	leave
 81c8101:	c3                   	ret

```

```c
// DisPatcher_SelectDungeon::check_error @ 0x81c7f32

/* DisPatcher_SelectDungeon::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
DisPatcher_SelectDungeon::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *pCVar4;
  MSG_BASE *pMVar5;
  undefined4 uVar6;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 5) || (iVar3 = CUser::get_state((CUser *)param_2), iVar3 == 0xd)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x7fffffff;
  }
  cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_2);
  if (cVar2 != '\0') {
    return 0x7fffffff;
  }
  if ((((char)param_3[0x10] < '\0') || ('\x02' < (char)param_3[0x10])) ||
     ((char)param_3[0xf] < '\0')) {
    return 0xffffffff;
  }
  if (((char)param_3[0x11] < '\0') || ('\x01' < (char)param_3[0x11])) {
    return 0xfffffffe;
  }
  if (('\0' < (char)param_3[0x10]) && ('\0' < (char)param_3[0x11])) {
    return 0x7fffffff;
  }
  if (param_3[0x10] != (ParamBase)0x2) {
    pCVar4 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (pCVar4 == (CParty *)0x0) {
      return 0x7fffffff;
    }
    pMVar5 = (MSG_BASE *)CParty::getManager(pCVar4);
    if (pMVar5 != param_2) {
      return 0x7fffffff;
    }
    cVar2 = CParty::get_state(pCVar4);
    if (cVar2 != '\x01') {
      return 0x7fffffff;
    }
    if ((param_3[0x11] == (ParamBase)0x1) && (cVar2 = CParty::is_quick_party(pCVar4), cVar2 != '\0')
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0x7fffffff;
    }
  }
  if (param_3[0x10] == (ParamBase)0x2) {
    uVar6 = 0;
  }
  else {
    pCVar4 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (pCVar4 == (CParty *)0x0) {
      uVar6 = 0x7fffffff;
    }
    else {
      pMVar5 = (MSG_BASE *)CParty::getManager(pCVar4);
      if (pMVar5 == param_2) {
        cVar2 = CParty::get_state(pCVar4);
        if (cVar2 == '\x01') {
          uVar6 = 0;
        }
        else {
          uVar6 = 0x7fffffff;
        }
      }
      else {
        uVar6 = 0x7fffffff;
      }
    }
  }
  return uVar6;
}

```

---

## process

```asm
// === 081c8102 DisPatcher_SelectDungeon::process  [0x081c8102-0x81c8e9b] ===
 81c8102:	55                   	push   %ebp
 81c8103:	89 e5                	mov    %esp,%ebp
 81c8105:	56                   	push   %esi
 81c8106:	53                   	push   %ebx
 81c8107:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 81c810d:	8b 45 14             	mov    0x14(%ebp),%eax
 81c8110:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 81c8116:	8b 45 14             	mov    0x14(%ebp),%eax
 81c8119:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c811d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c8120:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c8124:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8127:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c812b:	8b 45 08             	mov    0x8(%ebp),%eax
 81c812e:	89 04 24             	mov    %eax,(%esp)
 81c8131:	e8 fc fd ff ff       	call   81c7f32 <_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81c8136:	89 c2                	mov    %eax,%edx
 81c8138:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c813e:	89 50 04             	mov    %edx,0x4(%eax)
 81c8141:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8147:	8b 40 04             	mov    0x4(%eax),%eax
 81c814a:	85 c0                	test   %eax,%eax
 81c814c:	7e 0a                	jle    81c8158 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x56>
 81c814e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8153:	e9 37 0d 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8158:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c815e:	8b 40 04             	mov    0x4(%eax),%eax
 81c8161:	85 c0                	test   %eax,%eax
 81c8163:	79 37                	jns    81c819c <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x9a>
 81c8165:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8168:	89 04 24             	mov    %eax,(%esp)
 81c816b:	e8 fe 21 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c8170:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 81c8176:	8b 52 04             	mov    0x4(%edx),%edx
 81c8179:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c817d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c8181:	c7 44 24 04 00 56 bd 	movl   $0x8bd5600,0x4(%esp)
 81c8188:	08 
 81c8189:	c7 04 24 70 19 00 00 	movl   $0x1970,(%esp)
 81c8190:	e8 42 87 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c8195:	89 c3                	mov    %eax,%ebx
 81c8197:	e9 f3 0c 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c819c:	e8 a3 2b 06 00       	call   822ad44 <_Z13IsLightServerv>
 81c81a1:	8b 45 10             	mov    0x10(%ebp),%eax
 81c81a4:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 81c81aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c81ad:	89 04 24             	mov    %eax,(%esp)
 81c81b0:	e8 97 cf 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c81b5:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 81c81bb:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c81c2:	74 1a                	je     81c81de <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xdc>
 81c81c4:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c81ca:	89 04 24             	mov    %eax,(%esp)
 81c81cd:	e8 ae d5 f7 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81c81d2:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81c81d5:	74 07                	je     81c81de <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xdc>
 81c81d7:	b8 01 00 00 00       	mov    $0x1,%eax
 81c81dc:	eb 05                	jmp    81c81e3 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xe1>
 81c81de:	b8 00 00 00 00       	mov    $0x0,%eax
 81c81e3:	84 c0                	test   %al,%al
 81c81e5:	74 17                	je     81c81fe <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xfc>
 81c81e7:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c81ed:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c81f4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c81f9:	e9 91 0c 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c81fe:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8204:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c8208:	3c 01                	cmp    $0x1,%al
 81c820a:	e9 c6 00 00 00       	jmp    81c82d5 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x1d3>
 81c820f:	90                   	nop
 81c8210:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 81c8217:	e9 a0 00 00 00       	jmp    81c82bc <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x1ba>
 81c821c:	8b 45 88             	mov    -0x78(%ebp),%eax
 81c821f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8223:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8229:	89 04 24             	mov    %eax,(%esp)
 81c822c:	e8 33 d5 f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c8231:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81c8234:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 81c8238:	74 7d                	je     81c82b7 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x1b5>
 81c823a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81c823d:	89 04 24             	mov    %eax,(%esp)
 81c8240:	e8 29 21 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c8245:	89 44 24 14          	mov    %eax,0x14(%esp)
 81c8249:	c7 44 24 10 70 16 bc 	movl   $0x8bc1670,0x10(%esp)
 81c8250:	08 
 81c8251:	c7 44 24 0c 8a 19 00 	movl   $0x198a,0xc(%esp)
 81c8258:	00 
 81c8259:	c7 44 24 08 00 56 bd 	movl   $0x8bd5600,0x8(%esp)
 81c8260:	08 
 81c8261:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c8268:	08 
 81c8269:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81c8270:	e8 95 b9 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81c8275:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81c827c:	00 
 81c827d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81c8280:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8284:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c828a:	89 04 24             	mov    %eax,(%esp)
 81c828d:	e8 82 3e 3d 00       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 81c8292:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c8299:	00 
 81c829a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c82a1:	00 
 81c82a2:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81c82a9:	00 
 81c82aa:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81c82ad:	89 04 24             	mov    %eax,(%esp)
 81c82b0:	e8 3f 07 48 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81c82b5:	eb 01                	jmp    81c82b8 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x1b6>
 81c82b7:	90                   	nop
 81c82b8:	83 45 88 01          	addl   $0x1,-0x78(%ebp)
 81c82bc:	83 7d 88 03          	cmpl   $0x3,-0x78(%ebp)
 81c82c0:	0f 9e c0             	setle  %al
 81c82c3:	84 c0                	test   %al,%al
 81c82c5:	0f 85 51 ff ff ff    	jne    81c821c <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x11a>
 81c82cb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c82d0:	e9 ba 0b 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c82d5:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c82dc:	74 19                	je     81c82f7 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81c82de:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c82e4:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c82e8:	0f be d0             	movsbl %al,%edx
 81c82eb:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c82f1:	89 90 d8 0c 00 00    	mov    %edx,0xcd8(%eax)
 81c82f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c82fa:	89 04 24             	mov    %eax,(%esp)
 81c82fd:	e8 f4 75 06 00       	call   822f8f6 <_ZN15CUserCharacInfo16isDisguiseCharacEv>
 81c8302:	84 c0                	test   %al,%al
 81c8304:	74 23                	je     81c8329 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x227>
 81c8306:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8309:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c8310:	00 
 81c8311:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c8318:	00 
 81c8319:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c8320:	00 
 81c8321:	89 04 24             	mov    %eax,(%esp)
 81c8324:	e8 f1 75 06 00       	call   822f91a <_ZN15CUserCharacInfo17setDisguiseCharacEbht>
 81c8329:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c8330:	0f 84 99 02 00 00    	je     81c85cf <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x4cd>
 81c8336:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c833c:	89 04 24             	mov    %eax,(%esp)
 81c833f:	e8 26 1e 3d 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 81c8344:	89 45 90             	mov    %eax,-0x70(%ebp)
 81c8347:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c834e:	00 
 81c834f:	c7 44 24 08 bf 19 00 	movl   $0x19bf,0x8(%esp)
 81c8356:	00 
 81c8357:	c7 44 24 04 00 56 bd 	movl   $0x8bd5600,0x4(%esp)
 81c835e:	08 
 81c835f:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81c8365:	89 04 24             	mov    %eax,(%esp)
 81c8368:	e8 ab 73 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81c836d:	8b 45 90             	mov    -0x70(%ebp),%eax
 81c8370:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c8374:	c7 44 24 04 98 16 bc 	movl   $0x8bc1698,0x4(%esp)
 81c837b:	08 
 81c837c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81c8382:	89 04 24             	mov    %eax,(%esp)
 81c8385:	e8 fe 73 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81c838a:	c6 45 96 00          	movb   $0x0,-0x6a(%ebp)
 81c838e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8391:	89 04 24             	mov    %eax,(%esp)
 81c8394:	e8 cb d1 47 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81c8399:	88 45 97             	mov    %al,-0x69(%ebp)
 81c839c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c83a3:	00 
 81c83a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c83a7:	89 04 24             	mov    %eax,(%esp)
 81c83aa:	e8 0f 90 4b 00       	call   86813be <_ZN5CUser8get_areaEb>
 81c83af:	89 45 98             	mov    %eax,-0x68(%ebp)
 81c83b2:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 81c83b9:	e9 25 01 00 00       	jmp    81c84e3 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x3e1>
 81c83be:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81c83c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c83c5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c83cb:	89 04 24             	mov    %eax,(%esp)
 81c83ce:	e8 91 d3 f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c83d3:	89 45 a0             	mov    %eax,-0x60(%ebp)
 81c83d6:	83 7d a0 00          	cmpl   $0x0,-0x60(%ebp)
 81c83da:	0f 84 ff 00 00 00    	je     81c84df <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x3dd>
 81c83e0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81c83e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c83ea:	00 
 81c83eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c83f2:	00 
 81c83f3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c83fa:	00 
 81c83fb:	89 04 24             	mov    %eax,(%esp)
 81c83fe:	e8 17 75 06 00       	call   822f91a <_ZN15CUserCharacInfo17setDisguiseCharacEbht>
 81c8403:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81c8406:	89 04 24             	mov    %eax,(%esp)
 81c8409:	e8 56 d1 47 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81c840e:	88 45 a7             	mov    %al,-0x59(%ebp)
 81c8411:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c8418:	00 
 81c8419:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81c841c:	89 04 24             	mov    %eax,(%esp)
 81c841f:	e8 9a 8f 4b 00       	call   86813be <_ZN5CUser8get_areaEb>
 81c8424:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81c8427:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 81c842b:	3a 45 a7             	cmp    -0x59(%ebp),%al
 81c842e:	75 08                	jne    81c8438 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x336>
 81c8430:	8b 45 98             	mov    -0x68(%ebp),%eax
 81c8433:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 81c8436:	74 1c                	je     81c8454 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x352>
 81c8438:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c843e:	89 04 24             	mov    %eax,(%esp)
 81c8441:	e8 0c 55 06 00       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 81c8446:	83 f0 01             	xor    $0x1,%eax
 81c8449:	84 c0                	test   %al,%al
 81c844b:	74 07                	je     81c8454 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x352>
 81c844d:	b8 01 00 00 00       	mov    $0x1,%eax
 81c8452:	eb 05                	jmp    81c8459 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x357>
 81c8454:	b8 00 00 00 00       	mov    $0x0,%eax
 81c8459:	84 c0                	test   %al,%al
 81c845b:	74 6f                	je     81c84cc <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x3ca>
 81c845d:	0f be 75 a7          	movsbl -0x59(%ebp),%esi
 81c8461:	0f be 5d 97          	movsbl -0x69(%ebp),%ebx
 81c8465:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81c8468:	89 04 24             	mov    %eax,(%esp)
 81c846b:	e8 fe 1e f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c8470:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c8477:	00 
 81c8478:	89 04 24             	mov    %eax,(%esp)
 81c847b:	e8 cb 0b f4 ff       	call   810904b <_Z14NumberToStringji>
 81c8480:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81c8483:	89 54 24 24          	mov    %edx,0x24(%esp)
 81c8487:	8b 55 98             	mov    -0x68(%ebp),%edx
 81c848a:	89 54 24 20          	mov    %edx,0x20(%esp)
 81c848e:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81c8492:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81c8496:	89 44 24 14          	mov    %eax,0x14(%esp)
 81c849a:	c7 44 24 10 c4 16 bc 	movl   $0x8bc16c4,0x10(%esp)
 81c84a1:	08 
 81c84a2:	c7 44 24 0c df 19 00 	movl   $0x19df,0xc(%esp)
 81c84a9:	00 
 81c84aa:	c7 44 24 08 00 56 bd 	movl   $0x8bd5600,0x8(%esp)
 81c84b1:	08 
 81c84b2:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c84b9:	08 
 81c84ba:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81c84c1:	e8 44 b7 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81c84c6:	c6 45 96 01          	movb   $0x1,-0x6a(%ebp)
 81c84ca:	eb 28                	jmp    81c84f4 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x3f2>
 81c84cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c84d3:	00 
 81c84d4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81c84d7:	89 04 24             	mov    %eax,(%esp)
 81c84da:	e8 65 83 06 00       	call   8230844 <_ZN5CUser31SetDeleteEventDungeonInvitationEb>
 81c84df:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 81c84e3:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81c84e6:	3b 45 90             	cmp    -0x70(%ebp),%eax
 81c84e9:	0f 9c c0             	setl   %al
 81c84ec:	84 c0                	test   %al,%al
 81c84ee:	0f 85 ca fe ff ff    	jne    81c83be <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x2bc>
 81c84f4:	80 7d 96 00          	cmpb   $0x0,-0x6a(%ebp)
 81c84f8:	0f 84 d1 00 00 00    	je     81c85cf <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x4cd>
 81c84fe:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 81c8505:	e9 9f 00 00 00       	jmp    81c85a9 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x4a7>
 81c850a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81c850d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8511:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8517:	89 04 24             	mov    %eax,(%esp)
 81c851a:	e8 45 d2 f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c851f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81c8522:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 81c8526:	74 7d                	je     81c85a5 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x4a3>
 81c8528:	0f be 5d 97          	movsbl -0x69(%ebp),%ebx
 81c852c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81c852f:	89 04 24             	mov    %eax,(%esp)
 81c8532:	e8 37 1e f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c8537:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c853e:	00 
 81c853f:	89 04 24             	mov    %eax,(%esp)
 81c8542:	e8 04 0b f4 ff       	call   810904b <_Z14NumberToStringji>
 81c8547:	8b 55 98             	mov    -0x68(%ebp),%edx
 81c854a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81c854e:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81c8552:	89 44 24 14          	mov    %eax,0x14(%esp)
 81c8556:	c7 44 24 10 fc 16 bc 	movl   $0x8bc16fc,0x10(%esp)
 81c855d:	08 
 81c855e:	c7 44 24 0c fa 19 00 	movl   $0x19fa,0xc(%esp)
 81c8565:	00 
 81c8566:	c7 44 24 08 00 56 bd 	movl   $0x8bd5600,0x8(%esp)
 81c856d:	08 
 81c856e:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c8575:	08 
 81c8576:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81c857d:	e8 88 b6 90 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81c8582:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c8589:	00 
 81c858a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c8591:	00 
 81c8592:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81c8599:	00 
 81c859a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81c859d:	89 04 24             	mov    %eax,(%esp)
 81c85a0:	e8 4f 04 48 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81c85a5:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 81c85a9:	83 7d ac 03          	cmpl   $0x3,-0x54(%ebp)
 81c85ad:	0f 9e c0             	setle  %al
 81c85b0:	84 c0                	test   %al,%al
 81c85b2:	0f 85 52 ff ff ff    	jne    81c850a <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x408>
 81c85b8:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c85be:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c85c5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c85ca:	e9 c0 08 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c85cf:	c6 85 7e ff ff ff 01 	movb   $0x1,-0x82(%ebp)
 81c85d6:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c85dc:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c85e0:	98                   	cwtl
 81c85e1:	3d 10 27 00 00       	cmp    $0x2710,%eax
 81c85e6:	75 07                	jne    81c85ef <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x4ed>
 81c85e8:	c6 85 7e ff ff ff 00 	movb   $0x0,-0x82(%ebp)
 81c85ef:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c85f5:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c85f9:	0f bf d8             	movswl %ax,%ebx
 81c85fc:	e8 9a 3b f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c8601:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c8605:	89 04 24             	mov    %eax,(%esp)
 81c8608:	e8 eb 73 19 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 81c860d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81c8610:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 81c8614:	74 15                	je     81c862b <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x529>
 81c8616:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81c8619:	0f b6 80 00 08 00 00 	movzbl 0x800(%eax),%eax
 81c8620:	84 c0                	test   %al,%al
 81c8622:	74 07                	je     81c862b <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x529>
 81c8624:	c6 85 7e ff ff ff 00 	movb   $0x0,-0x82(%ebp)
 81c862b:	80 bd 7e ff ff ff 00 	cmpb   $0x0,-0x82(%ebp)
 81c8632:	0f 84 46 01 00 00    	je     81c877e <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x67c>
 81c8638:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c863f:	0f 84 39 01 00 00    	je     81c877e <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x67c>
 81c8645:	e8 5d 1d f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c864a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c864d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c8651:	89 04 24             	mov    %eax,(%esp)
 81c8654:	e8 87 65 50 00       	call   86cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>
 81c8659:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81c865c:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81c8660:	0f 8e 0b 01 00 00    	jle    81c8771 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x66f>
 81c8666:	e8 30 3b f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c866b:	8d 90 80 87 00 00    	lea    0x8780(%eax),%edx
 81c8671:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81c8674:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8678:	89 14 24             	mov    %edx,(%esp)
 81c867b:	e8 22 c1 19 00       	call   83647a2 <_ZNK13CWorldMapList14find_world_mapEi>
 81c8680:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81c8683:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 81c8687:	75 17                	jne    81c86a0 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x59e>
 81c8689:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c868f:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c8696:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c869b:	e9 ef 07 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c86a0:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c86a6:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c86aa:	98                   	cwtl
 81c86ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c86af:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81c86b2:	89 04 24             	mov    %eax,(%esp)
 81c86b5:	e8 72 2e 06 00       	call   822b52c <_ZNK9CWorldMap10hasDungeonEj>
 81c86ba:	83 f0 01             	xor    $0x1,%eax
 81c86bd:	84 c0                	test   %al,%al
 81c86bf:	0f 84 b9 00 00 00    	je     81c877e <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x67c>
 81c86c5:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81c86cc:	eb 7d                	jmp    81c874b <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x649>
 81c86ce:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81c86d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c86d5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c86db:	89 04 24             	mov    %eax,(%esp)
 81c86de:	e8 85 d1 f7 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81c86e3:	84 c0                	test   %al,%al
 81c86e5:	74 60                	je     81c8747 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x645>
 81c86e7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81c86ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c86ee:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c86f4:	89 04 24             	mov    %eax,(%esp)
 81c86f7:	e8 68 d0 f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c86fc:	89 c3                	mov    %eax,%ebx
 81c86fe:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81c8701:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8705:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c870b:	89 04 24             	mov    %eax,(%esp)
 81c870e:	e8 51 d0 f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c8713:	89 04 24             	mov    %eax,(%esp)
 81c8716:	e8 3f 12 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c871b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c8722:	00 
 81c8723:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c872a:	00 
 81c872b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c8732:	00 
 81c8733:	c7 44 24 08 f8 01 00 	movl   $0x1f8,0x8(%esp)
 81c873a:	00 
 81c873b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c873f:	89 04 24             	mov    %eax,(%esp)
 81c8742:	e8 37 05 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c8747:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 81c874b:	83 7d c0 03          	cmpl   $0x3,-0x40(%ebp)
 81c874f:	0f 9e c0             	setle  %al
 81c8752:	84 c0                	test   %al,%al
 81c8754:	0f 85 74 ff ff ff    	jne    81c86ce <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x5cc>
 81c875a:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8760:	c7 40 08 08 00 00 00 	movl   $0x8,0x8(%eax)
 81c8767:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c876c:	e9 1e 07 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8771:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8777:	c7 40 08 08 00 00 00 	movl   $0x8,0x8(%eax)
 81c877e:	c6 85 7f ff ff ff 00 	movb   $0x0,-0x81(%ebp)
 81c8785:	e8 1d 1c f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c878a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c878d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c8791:	89 04 24             	mov    %eax,(%esp)
 81c8794:	e8 47 64 50 00       	call   86cebe0 <_ZN9GameWorld16GetWorldMapIndexEP5CUser>
 81c8799:	89 45 80             	mov    %eax,-0x80(%ebp)
 81c879c:	83 7d 80 00          	cmpl   $0x0,-0x80(%ebp)
 81c87a0:	7e 34                	jle    81c87d6 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x6d4>
 81c87a2:	e8 f4 39 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c87a7:	8d 90 80 87 00 00    	lea    0x8780(%eax),%edx
 81c87ad:	8b 45 80             	mov    -0x80(%ebp),%eax
 81c87b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c87b4:	89 14 24             	mov    %edx,(%esp)
 81c87b7:	e8 e6 bf 19 00       	call   83647a2 <_ZNK13CWorldMapList14find_world_mapEi>
 81c87bc:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81c87bf:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81c87c3:	74 11                	je     81c87d6 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x6d4>
 81c87c5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c87c8:	89 04 24             	mov    %eax,(%esp)
 81c87cb:	e8 50 2d 06 00       	call   822b520 <_ZNK9CWorldMap13hasDeathTowerEv>
 81c87d0:	88 85 7f ff ff ff    	mov    %al,-0x81(%ebp)
 81c87d6:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c87dc:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c87e0:	0f bf d8             	movswl %ax,%ebx
 81c87e3:	e8 b3 39 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c87e8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c87ec:	89 04 24             	mov    %eax,(%esp)
 81c87ef:	e8 04 72 19 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 81c87f4:	89 45 84             	mov    %eax,-0x7c(%ebp)
 81c87f7:	83 7d 84 00          	cmpl   $0x0,-0x7c(%ebp)
 81c87fb:	75 17                	jne    81c8814 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c87fd:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8803:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c880a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c880f:	e9 7b 06 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8814:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8817:	89 04 24             	mov    %eax,(%esp)
 81c881a:	e8 a1 2c 06 00       	call   822b4c0 <_ZNK8CDungeon14getDungeonKindEv>
 81c881f:	83 f8 01             	cmp    $0x1,%eax
 81c8822:	0f 94 c0             	sete   %al
 81c8825:	84 c0                	test   %al,%al
 81c8827:	0f 84 18 01 00 00    	je     81c8945 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x843>
 81c882d:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c8834:	75 17                	jne    81c884d <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x74b>
 81c8836:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c883c:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c8843:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8848:	e9 42 06 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c884d:	e8 3c 39 f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c8852:	89 04 24             	mov    %eax,(%esp)
 81c8855:	e8 6e ce 0c 00       	call   82956c8 <_ZN12CGameManager13getDeathTowerEv>
 81c885a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81c885d:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81c8861:	75 17                	jne    81c887a <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x778>
 81c8863:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8869:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c8870:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8875:	e9 15 06 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c887a:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c887d:	89 04 24             	mov    %eax,(%esp)
 81c8880:	e8 15 cd f7 ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 81c8885:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81c8888:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81c888f:	eb 41                	jmp    81c88d2 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x7d0>
 81c8891:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c8894:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8898:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c889e:	89 04 24             	mov    %eax,(%esp)
 81c88a1:	e8 be ce f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c88a6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c88a9:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81c88ad:	74 1f                	je     81c88ce <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x7cc>
 81c88af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81c88b2:	89 04 24             	mov    %eax,(%esp)
 81c88b5:	e8 fe 19 f1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81c88ba:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 81c88bd:	0f 9c c0             	setl   %al
 81c88c0:	84 c0                	test   %al,%al
 81c88c2:	74 0a                	je     81c88ce <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x7cc>
 81c88c4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c88c9:	e9 c1 05 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c88ce:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 81c88d2:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 81c88d6:	0f 9e c0             	setle  %al
 81c88d9:	84 c0                	test   %al,%al
 81c88db:	75 b4                	jne    81c8891 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x78f>
 81c88dd:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c88e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c88e7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81c88ea:	89 04 24             	mov    %eax,(%esp)
 81c88ed:	e8 34 a1 29 00       	call   8462a26 <_ZN8WongWork11CDeathTower11attachPartyEP6CParty>
 81c88f2:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c88f8:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c88fc:	0f be c8             	movsbl %al,%ecx
 81c88ff:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8905:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c8909:	0f be d0             	movsbl %al,%edx
 81c890c:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8912:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c8916:	98                   	cwtl
 81c8917:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81c891b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c891f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8923:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81c8926:	89 04 24             	mov    %eax,(%esp)
 81c8929:	e8 60 b0 29 00       	call   846398e <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE>
 81c892e:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8934:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c893b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8940:	e9 4a 05 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8945:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8948:	89 04 24             	mov    %eax,(%esp)
 81c894b:	e8 70 2b 06 00       	call   822b4c0 <_ZNK8CDungeon14getDungeonKindEv>
 81c8950:	83 f8 03             	cmp    $0x3,%eax
 81c8953:	0f 94 c0             	sete   %al
 81c8956:	84 c0                	test   %al,%al
 81c8958:	0f 84 2f 01 00 00    	je     81c8a8d <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x98b>
 81c895e:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8964:	89 04 24             	mov    %eax,(%esp)
 81c8967:	e8 fe 17 3d 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 81c896c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81c896f:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8972:	89 04 24             	mov    %eax,(%esp)
 81c8975:	e8 3a 2b 06 00       	call   822b4b4 <_ZNK8CDungeon21get_limit_party_countEv>
 81c897a:	0f be c0             	movsbl %al,%eax
 81c897d:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81c8980:	0f 9c c0             	setl   %al
 81c8983:	84 c0                	test   %al,%al
 81c8985:	0f 84 ca 00 00 00    	je     81c8a55 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x953>
 81c898b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c8991:	89 04 24             	mov    %eax,(%esp)
 81c8994:	e8 b3 53 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c8999:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c899f:	89 04 24             	mov    %eax,(%esp)
 81c89a2:	e8 3f 2f f0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81c89a7:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81c89ae:	00 
 81c89af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c89b6:	00 
 81c89b7:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c89bd:	89 04 24             	mov    %eax,(%esp)
 81c89c0:	e8 37 2f f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c89c5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c89cc:	00 
 81c89cd:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c89d3:	89 04 24             	mov    %eax,(%esp)
 81c89d6:	e8 45 2f f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c89db:	c7 44 24 04 f3 00 00 	movl   $0xf3,0x4(%esp)
 81c89e2:	00 
 81c89e3:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c89e9:	89 04 24             	mov    %eax,(%esp)
 81c89ec:	e8 4b 2f f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c89f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c89f8:	00 
 81c89f9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c89ff:	89 04 24             	mov    %eax,(%esp)
 81c8a02:	e8 51 2f f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c8a07:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c8a0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8a11:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8a17:	89 04 24             	mov    %eax,(%esp)
 81c8a1a:	e8 2f 47 3d 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81c8a1f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8a24:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c8a2a:	89 04 24             	mov    %eax,(%esp)
 81c8a2d:	e8 4e 54 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c8a32:	e9 58 04 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8a37:	89 d3                	mov    %edx,%ebx
 81c8a39:	89 c6                	mov    %eax,%esi
 81c8a3b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81c8a41:	89 04 24             	mov    %eax,(%esp)
 81c8a44:	e8 37 54 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c8a49:	89 f0                	mov    %esi,%eax
 81c8a4b:	89 da                	mov    %ebx,%edx
 81c8a4d:	89 04 24             	mov    %eax,(%esp)
 81c8a50:	e8 fb ac 91 00       	call   8ae3750 <_Unwind_Resume>
 81c8a55:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8a5b:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c8a5f:	0f be d0             	movsbl %al,%edx
 81c8a62:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8a68:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c8a6c:	98                   	cwtl
 81c8a6d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c8a71:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8a75:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8a7b:	89 04 24             	mov    %eax,(%esp)
 81c8a7e:	e8 9f dc f7 ff       	call   8146722 <_ZN6Global14CBossTowerFunc13SelectDungeonEP6CPartys17ENUM_DUNGEON_TYPE>
 81c8a83:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8a88:	e9 02 04 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8a8d:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8a90:	0f b6 80 00 08 00 00 	movzbl 0x800(%eax),%eax
 81c8a97:	84 c0                	test   %al,%al
 81c8a99:	74 4a                	je     81c8ae5 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x9e3>
 81c8a9b:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8aa1:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c8aa5:	0f be d0             	movsbl %al,%edx
 81c8aa8:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8aae:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c8ab2:	98                   	cwtl
 81c8ab3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c8ab7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8abb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8abe:	89 04 24             	mov    %eax,(%esp)
 81c8ac1:	e8 48 7e f6 ff       	call   813090e <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE>
 81c8ac6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c8ac9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c8acc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8ad0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8ad3:	89 04 24             	mov    %eax,(%esp)
 81c8ad6:	e8 15 7f f6 ff       	call   81309f0 <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR>
 81c8adb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8ae0:	e9 aa 03 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8ae5:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8ae8:	0f b6 80 5c 08 00 00 	movzbl 0x85c(%eax),%eax
 81c8aef:	84 c0                	test   %al,%al
 81c8af1:	0f 84 80 00 00 00    	je     81c8b77 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xa75>
 81c8af7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81c8afe:	eb 67                	jmp    81c8b67 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xa65>
 81c8b00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c8b03:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8b07:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8b0d:	89 04 24             	mov    %eax,(%esp)
 81c8b10:	e8 53 cd f7 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81c8b15:	84 c0                	test   %al,%al
 81c8b17:	74 4a                	je     81c8b63 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xa61>
 81c8b19:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c8b1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8b20:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8b26:	89 04 24             	mov    %eax,(%esp)
 81c8b29:	e8 36 cc f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c8b2e:	89 04 24             	mov    %eax,(%esp)
 81c8b31:	e8 82 17 f1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81c8b36:	89 c3                	mov    %eax,%ebx
 81c8b38:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8b3b:	89 04 24             	mov    %eax,(%esp)
 81c8b3e:	e8 57 ca f7 ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 81c8b43:	39 c3                	cmp    %eax,%ebx
 81c8b45:	0f 9c c0             	setl   %al
 81c8b48:	84 c0                	test   %al,%al
 81c8b4a:	74 17                	je     81c8b63 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xa61>
 81c8b4c:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8b52:	c7 40 0c 0e 00 00 00 	movl   $0xe,0xc(%eax)
 81c8b59:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8b5e:	e9 2c 03 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8b63:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81c8b67:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 81c8b6b:	0f 9e c0             	setle  %al
 81c8b6e:	84 c0                	test   %al,%al
 81c8b70:	75 8e                	jne    81c8b00 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0x9fe>
 81c8b72:	e9 aa 01 00 00       	jmp    81c8d21 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc1f>
 81c8b77:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8b7a:	0f b6 80 7a 08 00 00 	movzbl 0x87a(%eax),%eax
 81c8b81:	84 c0                	test   %al,%al
 81c8b83:	0f 84 98 01 00 00    	je     81c8d21 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc1f>
 81c8b89:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8b8f:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c8b93:	84 c0                	test   %al,%al
 81c8b95:	74 51                	je     81c8be8 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xae6>
 81c8b97:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8b9a:	89 04 24             	mov    %eax,(%esp)
 81c8b9d:	e8 b8 0d f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c8ba2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c8ba9:	00 
 81c8baa:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c8bb1:	00 
 81c8bb2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c8bb9:	00 
 81c8bba:	c7 44 24 08 f8 01 00 	movl   $0x1f8,0x8(%esp)
 81c8bc1:	00 
 81c8bc2:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c8bc5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c8bc9:	89 04 24             	mov    %eax,(%esp)
 81c8bcc:	e8 ad 00 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c8bd1:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8bd7:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c8bde:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8be3:	e9 a7 02 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8be8:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c8bef:	0f 84 2c 01 00 00    	je     81c8d21 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc1f>
 81c8bf5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8bfb:	89 04 24             	mov    %eax,(%esp)
 81c8bfe:	e8 67 15 3d 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 81c8c03:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c8c06:	a1 80 f7 41 09       	mov    0x941f780,%eax
 81c8c0b:	89 04 24             	mov    %eax,(%esp)
 81c8c0e:	e8 e3 c3 06 00       	call   8234ff6 <_ZN16village_attacked15CRevengeDungeon20IsOpenRevengeDungeonEv>
 81c8c13:	83 f0 01             	xor    $0x1,%eax
 81c8c16:	84 c0                	test   %al,%al
 81c8c18:	74 17                	je     81c8c31 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xb2f>
 81c8c1a:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8c20:	c7 40 0c 15 00 00 00 	movl   $0x15,0xc(%eax)
 81c8c27:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8c2c:	e9 5e 02 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8c31:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8c34:	0f b6 80 79 08 00 00 	movzbl 0x879(%eax),%eax
 81c8c3b:	0f be c0             	movsbl %al,%eax
 81c8c3e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81c8c41:	7c 12                	jl     81c8c55 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xb53>
 81c8c43:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8c46:	0f b6 80 78 08 00 00 	movzbl 0x878(%eax),%eax
 81c8c4d:	0f be c0             	movsbl %al,%eax
 81c8c50:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81c8c53:	7e 17                	jle    81c8c6c <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xb6a>
 81c8c55:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8c5b:	c7 40 0c ab 00 00 00 	movl   $0xab,0xc(%eax)
 81c8c62:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8c67:	e9 23 02 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8c6c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81c8c73:	e9 9a 00 00 00       	jmp    81c8d12 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc10>
 81c8c78:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c8c7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8c7f:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8c85:	89 04 24             	mov    %eax,(%esp)
 81c8c88:	e8 db cb f7 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81c8c8d:	84 c0                	test   %al,%al
 81c8c8f:	74 7d                	je     81c8d0e <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc0c>
 81c8c91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c8c94:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8c98:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8c9e:	89 04 24             	mov    %eax,(%esp)
 81c8ca1:	e8 be ca f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c8ca6:	89 04 24             	mov    %eax,(%esp)
 81c8ca9:	e8 dc 6a 06 00       	call   822f78a <_ZNK15CUserCharacInfo25GetCurRevengeDungeonCountEv>
 81c8cae:	88 45 ef             	mov    %al,-0x11(%ebp)
 81c8cb1:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 81c8cb5:	74 0f                	je     81c8cc6 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xbc4>
 81c8cb7:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8cba:	0f b6 80 7b 08 00 00 	movzbl 0x87b(%eax),%eax
 81c8cc1:	3a 45 ef             	cmp    -0x11(%ebp),%al
 81c8cc4:	73 48                	jae    81c8d0e <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc0c>
 81c8cc6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c8cc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8ccd:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8cd3:	89 04 24             	mov    %eax,(%esp)
 81c8cd6:	e8 89 ca f7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81c8cdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c8ce2:	00 
 81c8ce3:	89 04 24             	mov    %eax,(%esp)
 81c8ce6:	e8 77 6a 06 00       	call   822f762 <_ZN15CUserCharacInfo25SetCurRevengeDungeonCountEh>
 81c8ceb:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8cf1:	c7 40 0c ad 00 00 00 	movl   $0xad,0xc(%eax)
 81c8cf8:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8cfe:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c8d01:	89 50 14             	mov    %edx,0x14(%eax)
 81c8d04:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8d09:	e9 81 01 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8d0e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 81c8d12:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 81c8d16:	0f 9e c0             	setle  %al
 81c8d19:	84 c0                	test   %al,%al
 81c8d1b:	0f 85 57 ff ff ff    	jne    81c8c78 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xb76>
 81c8d21:	83 bd 78 ff ff ff 00 	cmpl   $0x0,-0x88(%ebp)
 81c8d28:	0f 84 5c 01 00 00    	je     81c8e8a <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd88>
 81c8d2e:	0f b6 85 7f ff ff ff 	movzbl -0x81(%ebp),%eax
 81c8d35:	83 f0 01             	xor    $0x1,%eax
 81c8d38:	84 c0                	test   %al,%al
 81c8d3a:	74 46                	je     81c8d82 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc80>
 81c8d3c:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8d42:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81c8d48:	83 f8 01             	cmp    $0x1,%eax
 81c8d4b:	74 35                	je     81c8d82 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc80>
 81c8d4d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8d53:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8d57:	8b 45 08             	mov    0x8(%ebp),%eax
 81c8d5a:	89 04 24             	mov    %eax,(%esp)
 81c8d5d:	e8 10 04 00 00       	call   81c9172 <_ZN24DisPatcher_SelectDungeon15checkBlueMarbleEP6CParty>
 81c8d62:	83 f0 01             	xor    $0x1,%eax
 81c8d65:	84 c0                	test   %al,%al
 81c8d67:	74 19                	je     81c8d82 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc80>
 81c8d69:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81c8d6c:	89 04 24             	mov    %eax,(%esp)
 81c8d6f:	e8 6a 27 06 00       	call   822b4de <_ZNK8CDungeon18isNoFatigueDungeonEv>
 81c8d74:	83 f0 01             	xor    $0x1,%eax
 81c8d77:	84 c0                	test   %al,%al
 81c8d79:	74 07                	je     81c8d82 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc80>
 81c8d7b:	b8 01 00 00 00       	mov    $0x1,%eax
 81c8d80:	eb 05                	jmp    81c8d87 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xc85>
 81c8d82:	b8 00 00 00 00       	mov    $0x0,%eax
 81c8d87:	84 c0                	test   %al,%al
 81c8d89:	74 4a                	je     81c8dd5 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xcd3>
 81c8d8b:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8d91:	89 04 24             	mov    %eax,(%esp)
 81c8d94:	e8 4f 48 3d 00       	call   859d5e8 <_ZN6CParty18CheckMemberFatigueEv>
 81c8d99:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c8d9c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c8da0:	7e 33                	jle    81c8dd5 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xcd3>
 81c8da2:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8da8:	c7 40 0c 16 00 00 00 	movl   $0x16,0xc(%eax)
 81c8daf:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8db5:	c7 40 08 16 00 00 00 	movl   $0x16,0x8(%eax)
 81c8dbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c8dbf:	8d 50 ff             	lea    -0x1(%eax),%edx
 81c8dc2:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8dc8:	89 50 14             	mov    %edx,0x14(%eax)
 81c8dcb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8dd0:	e9 ba 00 00 00       	jmp    81c8e8f <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd8d>
 81c8dd5:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8ddb:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c8ddf:	0f be c8             	movsbl %al,%ecx
 81c8de2:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8de8:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c8dec:	0f be d0             	movsbl %al,%edx
 81c8def:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81c8df5:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c8df9:	98                   	cwtl
 81c8dfa:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81c8dfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c8e02:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8e06:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81c8e0c:	89 04 24             	mov    %eax,(%esp)
 81c8e0f:	e8 40 7b 3d 00       	call   85a0954 <_ZN6CParty13dungeon_startEic17ENUM_DUNGEON_TYPE>
 81c8e14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c8e17:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c8e1b:	7e 1a                	jle    81c8e37 <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd35>
 81c8e1d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c8e20:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8e26:	89 50 0c             	mov    %edx,0xc(%eax)
 81c8e29:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81c8e2c:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81c8e32:	89 50 08             	mov    %edx,0x8(%eax)
 81c8e35:	eb 53                	jmp    81c8e8a <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd88>
 81c8e37:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8e3a:	05 e0 00 00 00       	add    $0xe0,%eax
 81c8e3f:	89 04 24             	mov    %eax,(%esp)
 81c8e42:	e8 99 df 06 00       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 81c8e47:	84 c0                	test   %al,%al
 81c8e49:	0f 94 c0             	sete   %al
 81c8e4c:	84 c0                	test   %al,%al
 81c8e4e:	74 3a                	je     81c8e8a <_ZN24DisPatcher_SelectDungeon7processEP5CUserR8MSG_BASER9ParamBase+0xd88>
 81c8e50:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8e53:	89 04 24             	mov    %eax,(%esp)
 81c8e56:	e8 ff 0a f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c8e5b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c8e62:	00 
 81c8e63:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c8e6a:	00 
 81c8e6b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c8e72:	00 
 81c8e73:	c7 44 24 08 26 03 00 	movl   $0x326,0x8(%esp)
 81c8e7a:	00 
 81c8e7b:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c8e7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c8e82:	89 04 24             	mov    %eax,(%esp)
 81c8e85:	e8 f4 fd f2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c8e8a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81c8e8f:	89 d8                	mov    %ebx,%eax
 81c8e91:	81 c4 e0 00 00 00    	add    $0xe0,%esp
 81c8e97:	5b                   	pop    %ebx
 81c8e98:	5e                   	pop    %esi
 81c8e99:	5d                   	pop    %ebp
 81c8e9a:	c3                   	ret
 81c8e9b:	90                   	nop

```

```c
// DisPatcher_SelectDungeon::process @ 0x81c8102

/* DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SelectDungeon::process
          (DisPatcher_SelectDungeon *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  CUser *pCVar5;
  GameWorld *pGVar6;
  CHackAnalyzer *pCVar7;
  CGameManager *this_00;
  CUserCharacInfo *pCVar8;
  int iVar9;
  int iVar10;
  PacketGuard local_b0 [12];
  cMyTrace local_a4 [16];
  ParamBase *local_94;
  MSG_BASE *local_90;
  CParty *local_8c;
  char local_86;
  char local_85;
  int local_84;
  CDungeon *local_80;
  int local_74;
  char local_6e;
  char local_6d;
  int local_6c;
  int local_68;
  CUserCharacInfo *local_64;
  char local_5d;
  int local_5c;
  int local_58;
  CUser *local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  CWorldMap *local_40;
  CDeathTower *local_3c;
  int local_38;
  int local_34;
  CUserCharacInfo *local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDungeon local_15;
  int local_14;
  int local_10;
  
  local_94 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_94 + 4) = uVar3;
  if (*(int *)(local_94 + 4) < 1) {
    if (*(int *)(local_94 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x1970,
                       "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_94 + 4),uVar4);
    }
    else {
      IsLightServer();
      local_90 = param_2;
      local_8c = (CParty *)CUser::GetParty(param_1);
      if ((local_8c == (CParty *)0x0) ||
         (pCVar5 = (CUser *)CParty::getManager(local_8c), pCVar5 == param_1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(local_94 + 4) = 0x7fffffff;
        uVar3 = 0;
      }
      else {
        if (local_8c != (CParty *)0x0) {
          *(int *)(local_8c + 0xcd8) = (int)(char)local_90[0x11];
        }
        cVar2 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_1);
        if (cVar2 != '\0') {
          CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_1,false,'\0',0);
        }
        if (local_8c != (CParty *)0x0) {
          local_74 = CParty::get_member_count(local_8c);
          cMyTrace::cMyTrace(local_a4,
                             "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0x19bf,0);
          cMyTrace::operator()(local_a4,"[DisPatcher_SelectDungeon] partyCount : %d",local_74);
          local_6e = '\0';
          local_6d = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
          local_6c = CUser::get_area(param_1,false);
          for (local_68 = 0; local_68 < local_74; local_68 = local_68 + 1) {
            local_64 = (CUserCharacInfo *)CParty::get_user(local_8c,local_68);
            if (local_64 != (CUserCharacInfo *)0x0) {
              CUserCharacInfo::setDisguiseCharac(local_64,false,'\0',0);
              local_5d = CUserCharacInfo::getCurCharacVill(local_64);
              local_5c = CUser::get_area((CUser *)local_64,false);
              if (((local_6d == local_5d) && (local_6c == local_5c)) ||
                 (cVar2 = CParty::is_quick_party(local_8c), cVar2 == '\x01')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                iVar9 = (int)local_5d;
                iVar10 = (int)local_6d;
                uVar4 = CUser::get_acc_id((CUser *)local_64);
                uVar3 = NumberToString(uVar4,0);
                LogManager::logFormat
                          (1,"PacketDispatcher_Impl_1.cpp",
                           "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,0x19df,"[HACK_VILL_AREA] m_id : %s, Vill(%d,%d), Area(%d,%d)",uVar3,
                           iVar10,iVar9,local_6c,local_5c);
                local_6e = '\x01';
                break;
              }
              CUser::SetDeleteEventDungeonInvitation((CUser *)local_64,false);
            }
          }
          if (local_6e != '\0') {
            for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
              local_54 = (CUser *)CParty::get_user(local_8c,local_58);
              if (local_54 != (CUser *)0x0) {
                iVar10 = (int)local_6d;
                uVar4 = CUser::get_acc_id(local_54);
                uVar3 = NumberToString(uVar4,0);
                LogManager::logFormat
                          (1,"PacketDispatcher_Impl_1.cpp",
                           "virtual int DisPatcher_SelectDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                           ,0x19fa,"[HACK_VILL_AREA] m_id : %s, Vill(%d), Area(%d)",uVar3,iVar10,
                           local_6c);
                CUser::DisConnSig(local_54,0x18,1,0);
              }
            }
            *(undefined4 *)(local_94 + 4) = 0x7fffffff;
            return 0;
          }
        }
        local_86 = *(short *)(local_90 + 0xd) != 10000;
        iVar10 = G_CDataManager();
        local_50 = CDataManager::find_dungeon(iVar10);
        if ((local_50 != 0) && (*(char *)(local_50 + 0x800) != '\0')) {
          local_86 = '\0';
        }
        if ((local_86 != '\0') && (local_8c != (CParty *)0x0)) {
          pGVar6 = (GameWorld *)G_GameWorld();
          local_4c = GameWorld::GetWorldMapIndex(pGVar6,param_1);
          if (local_4c < 1) {
            *(undefined4 *)(local_94 + 8) = 8;
          }
          else {
            iVar10 = G_CDataManager();
            local_48 = CWorldMapList::find_world_map(iVar10 + 0x8780);
            if (local_48 == 0) {
              *(undefined4 *)(local_94 + 4) = 0x7fffffff;
              return 0;
            }
            cVar2 = CWorldMap::hasDungeon(local_48);
            if (cVar2 != '\x01') {
              for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
                cVar2 = CParty::checkValidUser(local_8c,local_44);
                if (cVar2 != '\0') {
                  uVar3 = CParty::get_user(local_8c,local_44);
                  pCVar5 = (CUser *)CParty::get_user(local_8c,local_44);
                  pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar5);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,uVar3,0x1f8,1,0,0);
                }
              }
              *(undefined4 *)(local_94 + 8) = 8;
              return 0;
            }
          }
        }
        local_85 = '\0';
        pGVar6 = (GameWorld *)G_GameWorld();
        local_84 = GameWorld::GetWorldMapIndex(pGVar6,param_1);
        if (0 < local_84) {
          iVar10 = G_CDataManager();
          local_40 = (CWorldMap *)CWorldMapList::find_world_map(iVar10 + 0x8780);
          if (local_40 != (CWorldMap *)0x0) {
            local_85 = CWorldMap::hasDeathTower(local_40);
          }
        }
        iVar10 = G_CDataManager();
        local_80 = (CDungeon *)CDataManager::find_dungeon(iVar10);
        if (local_80 == (CDungeon *)0x0) {
          *(undefined4 *)(local_94 + 4) = 0x7fffffff;
          uVar3 = 0;
        }
        else {
          iVar10 = CDungeon::getDungeonKind(local_80);
          if (iVar10 == 1) {
            if (local_8c == (CParty *)0x0) {
              *(undefined4 *)(local_94 + 4) = 0x7fffffff;
              uVar3 = 0;
            }
            else {
              this_00 = (CGameManager *)G_CGameManager();
              local_3c = (CDeathTower *)CGameManager::getDeathTower(this_00);
              if (local_3c == (CDeathTower *)0x0) {
                *(undefined4 *)(local_94 + 4) = 0x7fffffff;
                uVar3 = 0;
              }
              else {
                local_38 = CDungeon::get_min_level(local_80);
                for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
                  local_30 = (CUserCharacInfo *)CParty::get_user(local_8c,local_34);
                  if ((local_30 != (CUserCharacInfo *)0x0) &&
                     (iVar10 = CUserCharacInfo::get_charac_level(local_30), iVar10 < local_38)) {
                    return 0;
                  }
                }
                WongWork::CDeathTower::attachParty(local_3c,local_8c);
                WongWork::CDeathTower::handleStartGame
                          (local_3c,(int)*(short *)(local_90 + 0xd),(int)(char)local_90[0xf],
                           (int)(char)local_90[0x10]);
                *(undefined4 *)(local_94 + 4) = 0x7fffffff;
                uVar3 = 0;
              }
            }
          }
          else {
            iVar10 = CDungeon::getDungeonKind(local_80);
            if (iVar10 == 3) {
              local_2c = CParty::get_member_count(local_8c);
              cVar2 = CDungeon::get_limit_party_count(local_80);
              if (cVar2 < local_2c) {
                PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 081c89a2 to 081c8a1e has its CatchHandler @ 081c8a37 */
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_b0);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0x10);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,0xf3);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
                CParty::send_to_party(local_8c,local_b0);
                uVar3 = 0;
                PacketGuard::~PacketGuard(local_b0);
              }
              else {
                Global::CBossTowerFunc::SelectDungeon
                          (local_8c,(int)*(short *)(local_90 + 0xd),(int)(char)local_90[0x10]);
                uVar3 = 0;
              }
            }
            else if (local_80[0x800] == (CDungeon)0x0) {
              if (local_80[0x85c] == (CDungeon)0x0) {
                if (local_80[0x87a] != (CDungeon)0x0) {
                  if (local_90[0xf] != (MSG_BASE)0x0) {
                    pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x1f8,1,0,0);
                    *(undefined4 *)(local_94 + 4) = 0x7fffffff;
                    return 0;
                  }
                  if (local_8c != (CParty *)0x0) {
                    local_20 = CParty::get_member_count(local_8c);
                    cVar2 = village_attacked::CRevengeDungeon::IsOpenRevengeDungeon
                                      (GlobalData::s_revengeDungeonMgr);
                    if (cVar2 != '\x01') {
                      *(undefined4 *)(local_94 + 0xc) = 0x15;
                      return 0;
                    }
                    if (((char)local_80[0x879] < local_20) || (local_20 < (char)local_80[0x878])) {
                      *(undefined4 *)(local_94 + 0xc) = 0xab;
                      return 0;
                    }
                    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
                      cVar2 = CParty::checkValidUser(local_8c,local_1c);
                      if (cVar2 != '\0') {
                        pCVar8 = (CUserCharacInfo *)CParty::get_user(local_8c,local_1c);
                        local_15 = (CDungeon)CUserCharacInfo::GetCurRevengeDungeonCount(pCVar8);
                        if ((local_15 == (CDungeon)0x0) || ((byte)local_80[0x87b] < (byte)local_15))
                        {
                          pCVar8 = (CUserCharacInfo *)CParty::get_user(local_8c,local_1c);
                          CUserCharacInfo::SetCurRevengeDungeonCount(pCVar8,'\0');
                          *(undefined4 *)(local_94 + 0xc) = 0xad;
                          *(int *)(local_94 + 0x14) = local_1c;
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
              else {
                for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
                  cVar2 = CParty::checkValidUser(local_8c,local_24);
                  if (cVar2 != '\0') {
                    pCVar8 = (CUserCharacInfo *)CParty::get_user(local_8c,local_24);
                    iVar10 = CUserCharacInfo::get_charac_level(pCVar8);
                    iVar9 = CDungeon::get_min_level(local_80);
                    if (iVar10 < iVar9) {
                      *(undefined4 *)(local_94 + 0xc) = 0xe;
                      return 0;
                    }
                  }
                }
              }
              if (local_8c != (CParty *)0x0) {
                if ((((local_85 == '\x01') || (*(int *)(local_8c + 0xcd8) == 1)) ||
                    (cVar2 = checkBlueMarble(this,local_8c), cVar2 == '\x01')) ||
                   (cVar2 = CDungeon::isNoFatigueDungeon(local_80), cVar2 == '\x01')) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((bVar1) && (local_10 = CParty::CheckMemberFatigue(local_8c), 0 < local_10)) {
                  *(undefined4 *)(local_94 + 0xc) = 0x16;
                  *(undefined4 *)(local_94 + 8) = 0x16;
                  *(int *)(local_94 + 0x14) = local_10 + -1;
                  return 0;
                }
                local_14 = CParty::dungeon_start
                                     (local_8c,(int)*(short *)(local_90 + 0xd),
                                      (int)(char)local_90[0xf],(int)(char)local_90[0x10]);
                if (local_14 < 1) {
                  cVar2 = CNetwork<4096,450000>::get_nat_type
                                    ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                  if (cVar2 == '\0') {
                    pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                    WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x326,1,0,0);
                  }
                }
                else {
                  *(int *)(local_94 + 0xc) = local_14;
                  *(int *)(local_94 + 8) = local_14;
                }
              }
              uVar3 = 0;
            }
            else {
              local_28 = advancealtar::Manager::selectStage
                                   (param_1,(int)*(short *)(local_90 + 0xd),(int)(char)local_90[0xf]
                                   );
              advancealtar::Manager::procErrorSelectStage(param_1,local_28);
              uVar3 = 0;
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081c7e10 DisPatcher_SelectDungeon::read  [0x081c7e10-0x81c7f31] ===
 81c7e10:	55                   	push   %ebp
 81c7e11:	89 e5                	mov    %esp,%ebp
 81c7e13:	83 ec 28             	sub    $0x28,%esp
 81c7e16:	8b 45 10             	mov    0x10(%ebp),%eax
 81c7e19:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c7e1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7e1f:	83 c0 0d             	add    $0xd,%eax
 81c7e22:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7e26:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7e29:	89 04 24             	mov    %eax,(%esp)
 81c7e2c:	e8 8f 51 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c7e31:	83 f0 01             	xor    $0x1,%eax
 81c7e34:	84 c0                	test   %al,%al
 81c7e36:	74 29                	je     81c7e61 <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x51>
 81c7e38:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c7e3f:	00 
 81c7e40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c7e47:	00 
 81c7e48:	c7 44 24 04 60 56 bd 	movl   $0x8bd5660,0x4(%esp)
 81c7e4f:	08 
 81c7e50:	c7 04 24 da 18 00 00 	movl   $0x18da,(%esp)
 81c7e57:	e8 7b 8a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c7e5c:	e9 ce 00 00 00       	jmp    81c7f2f <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x11f>
 81c7e61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7e64:	83 c0 0f             	add    $0xf,%eax
 81c7e67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7e6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7e6e:	89 04 24             	mov    %eax,(%esp)
 81c7e71:	e8 ac 50 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c7e76:	83 f0 01             	xor    $0x1,%eax
 81c7e79:	84 c0                	test   %al,%al
 81c7e7b:	74 29                	je     81c7ea6 <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x96>
 81c7e7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c7e84:	00 
 81c7e85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c7e8c:	00 
 81c7e8d:	c7 44 24 04 60 56 bd 	movl   $0x8bd5660,0x4(%esp)
 81c7e94:	08 
 81c7e95:	c7 04 24 db 18 00 00 	movl   $0x18db,(%esp)
 81c7e9c:	e8 36 8a 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c7ea1:	e9 89 00 00 00       	jmp    81c7f2f <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x11f>
 81c7ea6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7ea9:	83 c0 10             	add    $0x10,%eax
 81c7eac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7eb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7eb3:	89 04 24             	mov    %eax,(%esp)
 81c7eb6:	e8 67 50 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c7ebb:	83 f0 01             	xor    $0x1,%eax
 81c7ebe:	84 c0                	test   %al,%al
 81c7ec0:	74 26                	je     81c7ee8 <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0xd8>
 81c7ec2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c7ec9:	00 
 81c7eca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c7ed1:	00 
 81c7ed2:	c7 44 24 04 60 56 bd 	movl   $0x8bd5660,0x4(%esp)
 81c7ed9:	08 
 81c7eda:	c7 04 24 e2 18 00 00 	movl   $0x18e2,(%esp)
 81c7ee1:	e8 f1 89 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c7ee6:	eb 47                	jmp    81c7f2f <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x11f>
 81c7ee8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c7eeb:	83 c0 11             	add    $0x11,%eax
 81c7eee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c7ef2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c7ef5:	89 04 24             	mov    %eax,(%esp)
 81c7ef8:	e8 25 50 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c7efd:	83 f0 01             	xor    $0x1,%eax
 81c7f00:	84 c0                	test   %al,%al
 81c7f02:	74 26                	je     81c7f2a <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x11a>
 81c7f04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c7f0b:	00 
 81c7f0c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c7f13:	00 
 81c7f14:	c7 44 24 04 60 56 bd 	movl   $0x8bd5660,0x4(%esp)
 81c7f1b:	08 
 81c7f1c:	c7 04 24 e4 18 00 00 	movl   $0x18e4,(%esp)
 81c7f23:	e8 af 89 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c7f28:	eb 05                	jmp    81c7f2f <_ZN24DisPatcher_SelectDungeon4readER9PacketBufR8MSG_BASE+0x11f>
 81c7f2a:	b8 00 00 00 00       	mov    $0x0,%eax
 81c7f2f:	c9                   	leave
 81c7f30:	c3                   	ret
 81c7f31:	90                   	nop

```

```c
// DisPatcher_SelectDungeon::read @ 0x81c7e10

/* DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SelectDungeon::read(DisPatcher_SelectDungeon *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x18e4,
                           "virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x18e2,"virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x18db,"virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x18da,"virtual int DisPatcher_SelectDungeon::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c8e9c DisPatcher_SelectDungeon::send  [0x081c8e9c-0x81c9171] ===
 81c8e9c:	55                   	push   %ebp
 81c8e9d:	89 e5                	mov    %esp,%ebp
 81c8e9f:	56                   	push   %esi
 81c8ea0:	53                   	push   %ebx
 81c8ea1:	83 ec 40             	sub    $0x40,%esp
 81c8ea4:	8b 45 10             	mov    0x10(%ebp),%eax
 81c8ea7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c8eaa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8ead:	8b 40 04             	mov    0x4(%eax),%eax
 81c8eb0:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c8eb5:	0f 84 a9 02 00 00    	je     81c9164 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2c8>
 81c8ebb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8ebe:	8b 40 04             	mov    0x4(%eax),%eax
 81c8ec1:	85 c0                	test   %eax,%eax
 81c8ec3:	74 20                	je     81c8ee5 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x49>
 81c8ec5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8ec8:	8b 40 04             	mov    0x4(%eax),%eax
 81c8ecb:	0f b6 c0             	movzbl %al,%eax
 81c8ece:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c8ed2:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 81c8ed9:	00 
 81c8eda:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8edd:	89 04 24             	mov    %eax,(%esp)
 81c8ee0:	e8 5d 30 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c8ee5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8ee8:	8b 40 0c             	mov    0xc(%eax),%eax
 81c8eeb:	85 c0                	test   %eax,%eax
 81c8eed:	75 0e                	jne    81c8efd <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x61>
 81c8eef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8ef2:	8b 40 08             	mov    0x8(%eax),%eax
 81c8ef5:	85 c0                	test   %eax,%eax
 81c8ef7:	0f 84 6a 02 00 00    	je     81c9167 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cb>
 81c8efd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c8f00:	89 04 24             	mov    %eax,(%esp)
 81c8f03:	e8 44 c2 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c8f08:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c8f0b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c8f0f:	0f 84 55 02 00 00    	je     81c916a <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2ce>
 81c8f15:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8f18:	8b 50 08             	mov    0x8(%eax),%edx
 81c8f1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8f1e:	8b 40 0c             	mov    0xc(%eax),%eax
 81c8f21:	39 c2                	cmp    %eax,%edx
 81c8f23:	0f 85 c0 00 00 00    	jne    81c8fe9 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x14d>
 81c8f29:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8f2c:	89 04 24             	mov    %eax,(%esp)
 81c8f2f:	e8 18 4e 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c8f34:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81c8f3b:	00 
 81c8f3c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c8f43:	00 
 81c8f44:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8f47:	89 04 24             	mov    %eax,(%esp)
 81c8f4a:	e8 ad 29 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c8f4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c8f56:	00 
 81c8f57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8f5a:	89 04 24             	mov    %eax,(%esp)
 81c8f5d:	e8 be 29 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c8f62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8f65:	8b 40 08             	mov    0x8(%eax),%eax
 81c8f68:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8f6c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8f6f:	89 04 24             	mov    %eax,(%esp)
 81c8f72:	e8 a9 29 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c8f77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8f7a:	8b 40 08             	mov    0x8(%eax),%eax
 81c8f7d:	83 f8 16             	cmp    $0x16,%eax
 81c8f80:	75 15                	jne    81c8f97 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0xfb>
 81c8f82:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8f85:	8b 40 14             	mov    0x14(%eax),%eax
 81c8f88:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8f8c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8f8f:	89 04 24             	mov    %eax,(%esp)
 81c8f92:	e8 89 29 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c8f97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c8f9e:	00 
 81c8f9f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8fa2:	89 04 24             	mov    %eax,(%esp)
 81c8fa5:	e8 ae 29 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c8faa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c8fb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c8fb4:	89 04 24             	mov    %eax,(%esp)
 81c8fb7:	e8 92 41 3d 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81c8fbc:	eb 1b                	jmp    81c8fd9 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x13d>
 81c8fbe:	89 d3                	mov    %edx,%ebx
 81c8fc0:	89 c6                	mov    %eax,%esi
 81c8fc2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8fc5:	89 04 24             	mov    %eax,(%esp)
 81c8fc8:	e8 b3 4e 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c8fcd:	89 f0                	mov    %esi,%eax
 81c8fcf:	89 da                	mov    %ebx,%edx
 81c8fd1:	89 04 24             	mov    %eax,(%esp)
 81c8fd4:	e8 77 a7 91 00       	call   8ae3750 <_Unwind_Resume>
 81c8fd9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81c8fdc:	89 04 24             	mov    %eax,(%esp)
 81c8fdf:	e8 9c 4e 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c8fe4:	e9 82 01 00 00       	jmp    81c916b <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cf>
 81c8fe9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c8fec:	8b 40 08             	mov    0x8(%eax),%eax
 81c8fef:	85 c0                	test   %eax,%eax
 81c8ff1:	0f 84 a0 00 00 00    	je     81c9097 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x1fb>
 81c8ff7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c8ffa:	89 04 24             	mov    %eax,(%esp)
 81c8ffd:	e8 4a 4d 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c9002:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81c9009:	00 
 81c900a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c9011:	00 
 81c9012:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c9015:	89 04 24             	mov    %eax,(%esp)
 81c9018:	e8 df 28 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c901d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c9024:	00 
 81c9025:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c9028:	89 04 24             	mov    %eax,(%esp)
 81c902b:	e8 f0 28 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9030:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9033:	8b 40 08             	mov    0x8(%eax),%eax
 81c9036:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c903a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c903d:	89 04 24             	mov    %eax,(%esp)
 81c9040:	e8 db 28 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9045:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c904c:	00 
 81c904d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c9050:	89 04 24             	mov    %eax,(%esp)
 81c9053:	e8 00 29 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c9058:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c905b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c905f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9062:	89 04 24             	mov    %eax,(%esp)
 81c9065:	e8 50 f5 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c906a:	eb 1b                	jmp    81c9087 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x1eb>
 81c906c:	89 d3                	mov    %edx,%ebx
 81c906e:	89 c6                	mov    %eax,%esi
 81c9070:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c9073:	89 04 24             	mov    %eax,(%esp)
 81c9076:	e8 05 4e 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c907b:	89 f0                	mov    %esi,%eax
 81c907d:	89 da                	mov    %ebx,%edx
 81c907f:	89 04 24             	mov    %eax,(%esp)
 81c9082:	e8 c9 a6 91 00       	call   8ae3750 <_Unwind_Resume>
 81c9087:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c908a:	89 04 24             	mov    %eax,(%esp)
 81c908d:	e8 ee 4d 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9092:	e9 d4 00 00 00       	jmp    81c916b <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cf>
 81c9097:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c909a:	8b 40 0c             	mov    0xc(%eax),%eax
 81c909d:	85 c0                	test   %eax,%eax
 81c909f:	0f 84 c6 00 00 00    	je     81c916b <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cf>
 81c90a5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c90a8:	89 04 24             	mov    %eax,(%esp)
 81c90ab:	e8 9c 4c 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c90b0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81c90b7:	00 
 81c90b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c90bf:	00 
 81c90c0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c90c3:	89 04 24             	mov    %eax,(%esp)
 81c90c6:	e8 31 28 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c90cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c90d2:	00 
 81c90d3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c90d6:	89 04 24             	mov    %eax,(%esp)
 81c90d9:	e8 42 28 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c90de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c90e1:	8b 40 08             	mov    0x8(%eax),%eax
 81c90e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c90e8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c90eb:	89 04 24             	mov    %eax,(%esp)
 81c90ee:	e8 2d 28 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c90f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c90f6:	8b 40 0c             	mov    0xc(%eax),%eax
 81c90f9:	3d ad 00 00 00       	cmp    $0xad,%eax
 81c90fe:	75 15                	jne    81c9115 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x279>
 81c9100:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c9103:	8b 40 14             	mov    0x14(%eax),%eax
 81c9106:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c910a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c910d:	89 04 24             	mov    %eax,(%esp)
 81c9110:	e8 0b 28 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c9115:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c911c:	00 
 81c911d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c9120:	89 04 24             	mov    %eax,(%esp)
 81c9123:	e8 30 28 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c9128:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c912b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c912f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9132:	89 04 24             	mov    %eax,(%esp)
 81c9135:	e8 14 40 3d 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81c913a:	eb 1b                	jmp    81c9157 <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2bb>
 81c913c:	89 d3                	mov    %edx,%ebx
 81c913e:	89 c6                	mov    %eax,%esi
 81c9140:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c9143:	89 04 24             	mov    %eax,(%esp)
 81c9146:	e8 35 4d 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c914b:	89 f0                	mov    %esi,%eax
 81c914d:	89 da                	mov    %ebx,%edx
 81c914f:	89 04 24             	mov    %eax,(%esp)
 81c9152:	e8 f9 a5 91 00       	call   8ae3750 <_Unwind_Resume>
 81c9157:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81c915a:	89 04 24             	mov    %eax,(%esp)
 81c915d:	e8 1e 4d 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c9162:	eb 07                	jmp    81c916b <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cf>
 81c9164:	90                   	nop
 81c9165:	eb 04                	jmp    81c916b <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cf>
 81c9167:	90                   	nop
 81c9168:	eb 01                	jmp    81c916b <_ZN24DisPatcher_SelectDungeon4sendEP5CUserR9ParamBase+0x2cf>
 81c916a:	90                   	nop
 81c916b:	83 c4 40             	add    $0x40,%esp
 81c916e:	5b                   	pop    %ebx
 81c916f:	5e                   	pop    %esi
 81c9170:	5d                   	pop    %ebp
 81c9171:	c3                   	ret

```

```c
// DisPatcher_SelectDungeon::send @ 0x81c8e9c

/* DisPatcher_SelectDungeon::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SelectDungeon::send(DisPatcher_SelectDungeon *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_38 [12];
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CParty *local_10;
  
  local_14 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) != 0) {
      CUser::SendCmdErrorPacket(param_1,0x10,*(uint *)(param_2 + 4) & 0xff);
    }
    if (((*(int *)(local_14 + 0xc) != 0) || (*(int *)(local_14 + 8) != 0)) &&
       (local_10 = (CParty *)CUser::GetParty(param_1), local_10 != (CParty *)0x0)) {
      if (*(int *)(local_14 + 8) == *(int *)(local_14 + 0xc)) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081c8f4a to 081c8fbb has its CatchHandler @ 081c8fbe */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 8));
        if (*(int *)(local_14 + 8) == 0x16) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x14));
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CParty::send_to_party(local_10,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else if (*(int *)(local_14 + 8) == 0) {
        if (*(int *)(local_14 + 0xc) != 0) {
          PacketGuard::PacketGuard(local_38);
                    /* try { // try from 081c90c6 to 081c9139 has its CatchHandler @ 081c913c */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(int *)(local_14 + 8));
          if (*(int *)(local_14 + 0xc) == 0xad) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(int *)(local_14 + 0x14));
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
          CParty::send_to_party(local_10,local_38);
          PacketGuard::~PacketGuard(local_38);
        }
      }
      else {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081c9018 to 081c9069 has its CatchHandler @ 081c906c */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 8));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(param_1,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
    }
  }
  return;
}

```

