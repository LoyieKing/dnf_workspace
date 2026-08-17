# Dispatcher_ChangeAnotherSkillTree

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d2094 Dispatcher_ChangeAnotherSkillTree::check_error  [0x081d2094-0x81d2133] ===
 81d2094:	55                   	push   %ebp
 81d2095:	89 e5                	mov    %esp,%ebp
 81d2097:	53                   	push   %ebx
 81d2098:	83 ec 24             	sub    $0x24,%esp
 81d209b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d209f:	75 0a                	jne    81d20ab <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x17>
 81d20a1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d20a6:	e9 83 00 00 00       	jmp    81d212e <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x9a>
 81d20ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d20ae:	89 04 24             	mov    %eax,(%esp)
 81d20b1:	e8 d6 82 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d20b6:	83 f8 03             	cmp    $0x3,%eax
 81d20b9:	74 17                	je     81d20d2 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x3e>
 81d20bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d20be:	89 04 24             	mov    %eax,(%esp)
 81d20c1:	e8 c6 82 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d20c6:	83 f8 06             	cmp    $0x6,%eax
 81d20c9:	74 07                	je     81d20d2 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x3e>
 81d20cb:	b8 01 00 00 00       	mov    $0x1,%eax
 81d20d0:	eb 05                	jmp    81d20d7 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x43>
 81d20d2:	b8 00 00 00 00       	mov    $0x0,%eax
 81d20d7:	84 c0                	test   %al,%al
 81d20d9:	74 07                	je     81d20e2 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x4e>
 81d20db:	b8 13 00 00 00       	mov    $0x13,%eax
 81d20e0:	eb 4c                	jmp    81d212e <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x9a>
 81d20e2:	8b 45 10             	mov    0x10(%ebp),%eax
 81d20e5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d20e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d20eb:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d20ef:	0f be d8             	movsbl %al,%ebx
 81d20f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d20f5:	89 04 24             	mov    %eax,(%esp)
 81d20f8:	e8 3f d2 05 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81d20fd:	39 c3                	cmp    %eax,%ebx
 81d20ff:	0f 95 c0             	setne  %al
 81d2102:	84 c0                	test   %al,%al
 81d2104:	74 07                	je     81d210d <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x79>
 81d2106:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81d210b:	eb 21                	jmp    81d212e <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x9a>
 81d210d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2110:	89 04 24             	mov    %eax,(%esp)
 81d2113:	e8 24 d2 05 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81d2118:	83 f8 ff             	cmp    $0xffffffff,%eax
 81d211b:	0f 94 c0             	sete   %al
 81d211e:	84 c0                	test   %al,%al
 81d2120:	74 07                	je     81d2129 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x95>
 81d2122:	b8 fd ff ff ff       	mov    $0xfffffffd,%eax
 81d2127:	eb 05                	jmp    81d212e <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE+0x9a>
 81d2129:	b8 00 00 00 00       	mov    $0x0,%eax
 81d212e:	83 c4 24             	add    $0x24,%esp
 81d2131:	5b                   	pop    %ebx
 81d2132:	5d                   	pop    %ebp
 81d2133:	c3                   	ret

```

```c
// Dispatcher_ChangeAnotherSkillTree::check_error @ 0x81d2094

/* Dispatcher_ChangeAnotherSkillTree::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeAnotherSkillTree::check_error
          (Dispatcher_ChangeAnotherSkillTree *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUser::get_state(param_1);
    if ((iVar3 == 3) || (iVar3 = CUser::get_state(param_1), iVar3 == 6)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = 0x13;
    }
    else {
      MVar1 = param_2[0xd];
      iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      if ((char)MVar1 == iVar3) {
        iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
        if (iVar3 == -1) {
          uVar4 = 0xfffffffd;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0xfffffffe;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}

```

---

## process

```asm
// === 081d1fca Dispatcher_ChangeAnotherSkillTree::process  [0x081d1fca-0x81d2093] ===
 81d1fca:	55                   	push   %ebp
 81d1fcb:	89 e5                	mov    %esp,%ebp
 81d1fcd:	83 ec 28             	sub    $0x28,%esp
 81d1fd0:	8b 45 14             	mov    0x14(%ebp),%eax
 81d1fd3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d1fd6:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1fd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1fdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1fe0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1fe4:	8b 45 08             	mov    0x8(%ebp),%eax
 81d1fe7:	89 04 24             	mov    %eax,(%esp)
 81d1fea:	e8 a5 00 00 00       	call   81d2094 <_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE>
 81d1fef:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d1ff2:	89 42 04             	mov    %eax,0x4(%edx)
 81d1ff5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1ff8:	8b 40 04             	mov    0x4(%eax),%eax
 81d1ffb:	85 c0                	test   %eax,%eax
 81d1ffd:	7e 0a                	jle    81d2009 <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81d1fff:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2004:	e9 89 00 00 00       	jmp    81d2092 <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0xc8>
 81d2009:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d200c:	8b 40 04             	mov    0x4(%eax),%eax
 81d200f:	85 c0                	test   %eax,%eax
 81d2011:	79 28                	jns    81d203b <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0x71>
 81d2013:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2016:	8b 40 04             	mov    0x4(%eax),%eax
 81d2019:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2020:	00 
 81d2021:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d2025:	c7 44 24 04 c0 38 bd 	movl   $0x8bd38c0,0x4(%esp)
 81d202c:	08 
 81d202d:	c7 04 24 cf 2e 00 00 	movl   $0x2ecf,(%esp)
 81d2034:	e8 9e e8 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2039:	eb 57                	jmp    81d2092 <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0xc8>
 81d203b:	8b 45 10             	mov    0x10(%ebp),%eax
 81d203e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2041:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2044:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d2048:	84 c0                	test   %al,%al
 81d204a:	75 1c                	jne    81d2068 <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0x9e>
 81d204c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d204f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d2056:	00 
 81d2057:	89 04 24             	mov    %eax,(%esp)
 81d205a:	e8 a9 d2 05 00       	call   822f308 <_ZN15CUserCharacInfo26SetCurCharacSkillTreeIndexEc>
 81d205f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2062:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 81d2066:	eb 25                	jmp    81d208d <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0xc3>
 81d2068:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d206b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d206f:	3c 01                	cmp    $0x1,%al
 81d2071:	75 1a                	jne    81d208d <_ZN33Dispatcher_ChangeAnotherSkillTree7processEP5CUserR8MSG_BASER9ParamBase+0xc3>
 81d2073:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2076:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d207d:	00 
 81d207e:	89 04 24             	mov    %eax,(%esp)
 81d2081:	e8 82 d2 05 00       	call   822f308 <_ZN15CUserCharacInfo26SetCurCharacSkillTreeIndexEc>
 81d2086:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2089:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 81d208d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2092:	c9                   	leave
 81d2093:	c3                   	ret

```

```c
// Dispatcher_ChangeAnotherSkillTree::process @ 0x81d1fca

/* Dispatcher_ChangeAnotherSkillTree::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ChangeAnotherSkillTree::process
          (Dispatcher_ChangeAnotherSkillTree *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x2ecf,
                       "virtual int Dispatcher_ChangeAnotherSkillTree::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      if (param_2[0xd] == (MSG_BASE)0x0) {
        CUserCharacInfo::SetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1,'\x01');
        param_3[8] = (ParamBase)0x1;
      }
      else if (param_2[0xd] == (MSG_BASE)0x1) {
        CUserCharacInfo::SetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1,'\0');
        param_3[8] = (ParamBase)0x0;
      }
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
// === 081d1f74 Dispatcher_ChangeAnotherSkillTree::read  [0x081d1f74-0x81d1fc9] ===
 81d1f74:	55                   	push   %ebp
 81d1f75:	89 e5                	mov    %esp,%ebp
 81d1f77:	83 ec 28             	sub    $0x28,%esp
 81d1f7a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1f7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1f80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1f83:	83 c0 0d             	add    $0xd,%eax
 81d1f86:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1f8d:	89 04 24             	mov    %eax,(%esp)
 81d1f90:	e8 8d af 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d1f95:	83 f0 01             	xor    $0x1,%eax
 81d1f98:	84 c0                	test   %al,%al
 81d1f9a:	74 26                	je     81d1fc2 <_ZN33Dispatcher_ChangeAnotherSkillTree4readER9PacketBufR8MSG_BASE+0x4e>
 81d1f9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1fa3:	00 
 81d1fa4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1fab:	00 
 81d1fac:	c7 44 24 04 20 39 bd 	movl   $0x8bd3920,0x4(%esp)
 81d1fb3:	08 
 81d1fb4:	c7 04 24 c2 2e 00 00 	movl   $0x2ec2,(%esp)
 81d1fbb:	e8 17 e9 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1fc0:	eb 05                	jmp    81d1fc7 <_ZN33Dispatcher_ChangeAnotherSkillTree4readER9PacketBufR8MSG_BASE+0x53>
 81d1fc2:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1fc7:	c9                   	leave
 81d1fc8:	c3                   	ret
 81d1fc9:	90                   	nop

```

```c
// Dispatcher_ChangeAnotherSkillTree::read @ 0x81d1f74

/* Dispatcher_ChangeAnotherSkillTree::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeAnotherSkillTree::read
          (Dispatcher_ChangeAnotherSkillTree *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2ec2,
                     "virtual int Dispatcher_ChangeAnotherSkillTree::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d2134 Dispatcher_ChangeAnotherSkillTree::send  [0x081d2134-0x81d2217] ===
 81d2134:	55                   	push   %ebp
 81d2135:	89 e5                	mov    %esp,%ebp
 81d2137:	56                   	push   %esi
 81d2138:	53                   	push   %ebx
 81d2139:	83 ec 20             	sub    $0x20,%esp
 81d213c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d213f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2142:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2145:	8b 40 04             	mov    0x4(%eax),%eax
 81d2148:	85 c0                	test   %eax,%eax
 81d214a:	0f 85 a1 00 00 00    	jne    81d21f1 <_ZN33Dispatcher_ChangeAnotherSkillTree4sendEP5CUserR9ParamBase+0xbd>
 81d2150:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2153:	89 04 24             	mov    %eax,(%esp)
 81d2156:	e8 f1 bb 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d215b:	c7 44 24 08 08 01 00 	movl   $0x108,0x8(%esp)
 81d2162:	00 
 81d2163:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d216a:	00 
 81d216b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d216e:	89 04 24             	mov    %eax,(%esp)
 81d2171:	e8 86 97 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d2176:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d217d:	00 
 81d217e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d2181:	89 04 24             	mov    %eax,(%esp)
 81d2184:	e8 97 97 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d2189:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d218c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81d2190:	0f be c0             	movsbl %al,%eax
 81d2193:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2197:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d219a:	89 04 24             	mov    %eax,(%esp)
 81d219d:	e8 7e 97 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d21a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d21a9:	00 
 81d21aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d21ad:	89 04 24             	mov    %eax,(%esp)
 81d21b0:	e8 a3 97 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d21b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d21b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d21bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d21bf:	89 04 24             	mov    %eax,(%esp)
 81d21c2:	e8 f3 63 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d21c7:	eb 1b                	jmp    81d21e4 <_ZN33Dispatcher_ChangeAnotherSkillTree4sendEP5CUserR9ParamBase+0xb0>
 81d21c9:	89 d3                	mov    %edx,%ebx
 81d21cb:	89 c6                	mov    %eax,%esi
 81d21cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d21d0:	89 04 24             	mov    %eax,(%esp)
 81d21d3:	e8 a8 bc 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d21d8:	89 f0                	mov    %esi,%eax
 81d21da:	89 da                	mov    %ebx,%edx
 81d21dc:	89 04 24             	mov    %eax,(%esp)
 81d21df:	e8 6c 15 91 00       	call   8ae3750 <_Unwind_Resume>
 81d21e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d21e7:	89 04 24             	mov    %eax,(%esp)
 81d21ea:	e8 91 bc 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d21ef:	eb 20                	jmp    81d2211 <_ZN33Dispatcher_ChangeAnotherSkillTree4sendEP5CUserR9ParamBase+0xdd>
 81d21f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d21f4:	8b 40 04             	mov    0x4(%eax),%eax
 81d21f7:	0f b6 c0             	movzbl %al,%eax
 81d21fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d21fe:	c7 44 24 04 08 01 00 	movl   $0x108,0x4(%esp)
 81d2205:	00 
 81d2206:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2209:	89 04 24             	mov    %eax,(%esp)
 81d220c:	e8 31 9d 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d2211:	83 c4 20             	add    $0x20,%esp
 81d2214:	5b                   	pop    %ebx
 81d2215:	5e                   	pop    %esi
 81d2216:	5d                   	pop    %ebp
 81d2217:	c3                   	ret

```

```c
// Dispatcher_ChangeAnotherSkillTree::send @ 0x81d2134

/* Dispatcher_ChangeAnotherSkillTree::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeAnotherSkillTree::send
          (Dispatcher_ChangeAnotherSkillTree *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d2171 to 081d21c6 has its CatchHandler @ 081d21c9 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x108);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x108,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

