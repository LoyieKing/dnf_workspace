# game_master__CSetMultiboxFailCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b34f8 game_master::CSetMultiboxFailCnt::execute  [0x084b34f8-0x84b35c3] ===
 84b34f8:	55                   	push   %ebp
 84b34f9:	89 e5                	mov    %esp,%ebp
 84b34fb:	56                   	push   %esi
 84b34fc:	53                   	push   %ebx
 84b34fd:	83 ec 20             	sub    $0x20,%esp
 84b3500:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3503:	89 04 24             	mov    %eax,(%esp)
 84b3506:	e8 af 0a 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b350b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b350e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b3512:	0f 84 a4 00 00 00    	je     84b35bc <_ZN11game_master19CSetMultiboxFailCnt7executeEv+0xc4>
 84b3518:	8b 45 08             	mov    0x8(%ebp),%eax
 84b351b:	8b 40 08             	mov    0x8(%eax),%eax
 84b351e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3522:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3525:	89 04 24             	mov    %eax,(%esp)
 84b3528:	e8 17 aa c4 ff       	call   80fdf44 <_ZN5CUser30set_multiboxLotteryItemFailCntEi>
 84b352d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3530:	8b 40 08             	mov    0x8(%eax),%eax
 84b3533:	83 f8 02             	cmp    $0x2,%eax
 84b3536:	0f 8e 81 00 00 00    	jle    84b35bd <_ZN11game_master19CSetMultiboxFailCnt7executeEv+0xc5>
 84b353c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b353f:	89 04 24             	mov    %eax,(%esp)
 84b3542:	e8 05 a8 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b3547:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b354a:	89 04 24             	mov    %eax,(%esp)
 84b354d:	e8 94 83 c1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84b3552:	c7 44 24 08 c6 01 00 	movl   $0x1c6,0x8(%esp)
 84b3559:	00 
 84b355a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b3561:	00 
 84b3562:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b3565:	89 04 24             	mov    %eax,(%esp)
 84b3568:	e8 8f 83 c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84b356d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b3574:	00 
 84b3575:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b3578:	89 04 24             	mov    %eax,(%esp)
 84b357b:	e8 d8 83 c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84b3580:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b3583:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3587:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b358a:	89 04 24             	mov    %eax,(%esp)
 84b358d:	e8 28 50 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b3592:	eb 1b                	jmp    84b35af <_ZN11game_master19CSetMultiboxFailCnt7executeEv+0xb7>
 84b3594:	89 d3                	mov    %edx,%ebx
 84b3596:	89 c6                	mov    %eax,%esi
 84b3598:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b359b:	89 04 24             	mov    %eax,(%esp)
 84b359e:	e8 dd a8 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b35a3:	89 f0                	mov    %esi,%eax
 84b35a5:	89 da                	mov    %ebx,%edx
 84b35a7:	89 04 24             	mov    %eax,(%esp)
 84b35aa:	e8 a1 01 63 00       	call   8ae3750 <_Unwind_Resume>
 84b35af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b35b2:	89 04 24             	mov    %eax,(%esp)
 84b35b5:	e8 c6 a8 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b35ba:	eb 01                	jmp    84b35bd <_ZN11game_master19CSetMultiboxFailCnt7executeEv+0xc5>
 84b35bc:	90                   	nop
 84b35bd:	83 c4 20             	add    $0x20,%esp
 84b35c0:	5b                   	pop    %ebx
 84b35c1:	5e                   	pop    %esi
 84b35c2:	5d                   	pop    %ebp
 84b35c3:	c3                   	ret

```

```c
// game_master::CSetMultiboxFailCnt::execute @ 0x84b34f8

/* game_master::CSetMultiboxFailCnt::execute() */

void __thiscall game_master::CSetMultiboxFailCnt::execute(CSetMultiboxFailCnt *this)

{
  PacketGuard local_1c [12];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    CUser::set_multiboxLotteryItemFailCnt(local_10,*(int *)(this + 8));
    if (2 < *(int *)(this + 8)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084b354d to 084b3591 has its CatchHandler @ 084b3594 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1c6);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(local_10,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084b34a4 game_master::CSetMultiboxFailCnt::parse  [0x084b34a4-0x84b34f7] ===
 84b34a4:	55                   	push   %ebp
 84b34a5:	89 e5                	mov    %esp,%ebp
 84b34a7:	83 ec 18             	sub    $0x18,%esp
 84b34aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84b34ad:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 84b34b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b34b7:	8b 40 04             	mov    0x4(%eax),%eax
 84b34ba:	83 c0 0c             	add    $0xc,%eax
 84b34bd:	89 04 24             	mov    %eax,(%esp)
 84b34c0:	e8 a3 bb de ff       	call   829f068 <_Z4trimRSs>
 84b34c5:	8b 45 08             	mov    0x8(%ebp),%eax
 84b34c8:	8b 40 04             	mov    0x4(%eax),%eax
 84b34cb:	05 1c 01 00 00       	add    $0x11c,%eax
 84b34d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b34d7:	00 
 84b34d8:	89 04 24             	mov    %eax,(%esp)
 84b34db:	e8 ee 45 d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b34e0:	89 04 24             	mov    %eax,(%esp)
 84b34e3:	e8 08 30 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b34e8:	89 04 24             	mov    %eax,(%esp)
 84b34eb:	e8 00 b2 bc ff       	call   807e6f0 <atoi@plt>
 84b34f0:	8b 55 08             	mov    0x8(%ebp),%edx
 84b34f3:	89 42 08             	mov    %eax,0x8(%edx)
 84b34f6:	c9                   	leave
 84b34f7:	c3                   	ret

```

```c
// game_master::CSetMultiboxFailCnt::parse @ 0x84b34a4

/* game_master::CSetMultiboxFailCnt::parse() */

void __thiscall game_master::CSetMultiboxFailCnt::parse(CSetMultiboxFailCnt *this)

{
  string *this_00;
  char *__nptr;
  int iVar1;
  
  *(undefined4 *)(this + 8) = 0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  this_00 = (string *)
            std::vector<std::string,std::allocator<std::string>>::operator[]
                      ((vector<std::string,std::allocator<std::string>> *)
                       (*(int *)(this + 4) + 0x11c),1);
  __nptr = (char *)std::string::c_str(this_00);
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

