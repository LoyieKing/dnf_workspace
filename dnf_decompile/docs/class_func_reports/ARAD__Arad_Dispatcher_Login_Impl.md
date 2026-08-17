# ARAD__Arad_Dispatcher_Login_Impl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## Arad_Dispatcher_Login_Impl

```asm
// === 0818eed0 ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl  [0x0818eed0-0x818eef3] ===
 818eed0:	55                   	push   %ebp
 818eed1:	89 e5                	mov    %esp,%ebp
 818eed3:	83 ec 18             	sub    $0x18,%esp
 818eed6:	8b 45 08             	mov    0x8(%ebp),%eax
 818eed9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818eee0:	00 
 818eee1:	89 04 24             	mov    %eax,(%esp)
 818eee4:	e8 e7 fe ff ff       	call   818edd0 <_ZN4ARAD15Arad_DispatcherC1Ei>
 818eee9:	8b 45 08             	mov    0x8(%ebp),%eax
 818eeec:	c7 00 d8 8f b9 08    	movl   $0x8b98fd8,(%eax)
 818eef2:	c9                   	leave
 818eef3:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl @ 0x818eed0

/* ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl(Arad_Dispatcher_Login_Impl *this)

{
  Arad_Dispatcher::Arad_Dispatcher((Arad_Dispatcher *)this,1);
  *(undefined ***)this = &PTR__Arad_Dispatcher_Login_Impl_08b98fd8;
  return;
}

```

---

## account_password_check

```asm
// === 0818f746 ARAD::Arad_Dispatcher_Login_Impl::account_password_check  [0x0818f746-0x818f96f] ===
 818f746:	55                   	push   %ebp
 818f747:	89 e5                	mov    %esp,%ebp
 818f749:	56                   	push   %esi
 818f74a:	53                   	push   %ebx
 818f74b:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 818f751:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 818f758:	e8 f3 df ee ff       	call   807d750 <time@plt>
 818f75d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818f760:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 818f767:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 818f76e:	8d 45 84             	lea    -0x7c(%ebp),%eax
 818f771:	89 04 24             	mov    %eax,(%esp)
 818f774:	e8 af 03 00 00       	call   818fb28 <_ZN8WongWork10CSimpleSSO14stOutputData_tC1Ev>
 818f779:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f77c:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 818f782:	a1 08 f7 41 09       	mov    0x941f708,%eax
 818f787:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 818f78a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 818f78e:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 818f791:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 818f795:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 818f798:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 818f79c:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f7a0:	89 04 24             	mov    %eax,(%esp)
 818f7a3:	e8 4e 3a 47 00       	call   86031f6 <_ZN8WongWork10CSimpleSSO16getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>
 818f7a8:	83 f0 01             	xor    $0x1,%eax
 818f7ab:	84 c0                	test   %al,%al
 818f7ad:	74 4d                	je     818f7fc <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0xb6>
 818f7af:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f7b2:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818f7b8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818f7bf:	00 
 818f7c0:	c7 44 24 08 6a 01 00 	movl   $0x16a,0x8(%esp)
 818f7c7:	00 
 818f7c8:	c7 44 24 04 c0 8e b9 	movl   $0x8b98ec0,0x4(%esp)
 818f7cf:	08 
 818f7d0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f7d3:	89 04 24             	mov    %eax,(%esp)
 818f7d6:	e8 3d ff 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818f7db:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818f7df:	c7 44 24 04 38 82 b9 	movl   $0x8b98238,0x4(%esp)
 818f7e6:	08 
 818f7e7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f7ea:	89 04 24             	mov    %eax,(%esp)
 818f7ed:	e8 96 ff 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818f7f2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818f7f7:	e9 69 01 00 00       	jmp    818f965 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0x21f>
 818f7fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f7ff:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 818f805:	a1 5c f7 41 09       	mov    0x941f75c,%eax
 818f80a:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f80e:	89 04 24             	mov    %eax,(%esp)
 818f811:	e8 76 9c 10 00       	call   829948c <_ZN11CGM_Manager4IsGmEj>
 818f816:	84 c0                	test   %al,%al
 818f818:	74 78                	je     818f892 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0x14c>
 818f81a:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f81d:	83 c0 18             	add    $0x18,%eax
 818f820:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 818f827:	00 
 818f828:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f82c:	8b 45 10             	mov    0x10(%ebp),%eax
 818f82f:	89 04 24             	mov    %eax,(%esp)
 818f832:	e8 89 f0 ee ff       	call   807e8c0 <strncmp@plt>
 818f837:	85 c0                	test   %eax,%eax
 818f839:	75 0a                	jne    818f845 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0xff>
 818f83b:	b8 00 00 00 00       	mov    $0x0,%eax
 818f840:	e9 20 01 00 00       	jmp    818f965 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0x21f>
 818f845:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f848:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818f84e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818f855:	00 
 818f856:	c7 44 24 08 76 01 00 	movl   $0x176,0x8(%esp)
 818f85d:	00 
 818f85e:	c7 44 24 04 c0 8e b9 	movl   $0x8b98ec0,0x4(%esp)
 818f865:	08 
 818f866:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818f869:	89 04 24             	mov    %eax,(%esp)
 818f86c:	e8 a7 fe 3b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818f871:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818f875:	c7 44 24 04 64 82 b9 	movl   $0x8b98264,0x4(%esp)
 818f87c:	08 
 818f87d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818f880:	89 04 24             	mov    %eax,(%esp)
 818f883:	e8 00 ff 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818f888:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818f88d:	e9 d3 00 00 00       	jmp    818f965 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0x21f>
 818f892:	8b 55 8c             	mov    -0x74(%ebp),%edx
 818f895:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f898:	89 90 54 39 00 00    	mov    %edx,0x3954(%eax)
 818f89e:	8b 55 90             	mov    -0x70(%ebp),%edx
 818f8a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8a4:	89 90 60 39 00 00    	mov    %edx,0x3960(%eax)
 818f8aa:	8b 55 88             	mov    -0x78(%ebp),%edx
 818f8ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8b0:	89 90 50 39 00 00    	mov    %edx,0x3950(%eax)
 818f8b6:	8b 55 84             	mov    -0x7c(%ebp),%edx
 818f8b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8bc:	89 90 58 39 00 00    	mov    %edx,0x3958(%eax)
 818f8c2:	8b 55 98             	mov    -0x68(%ebp),%edx
 818f8c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8c8:	89 90 68 39 00 00    	mov    %edx,0x3968(%eax)
 818f8ce:	0f b6 55 94          	movzbl -0x6c(%ebp),%edx
 818f8d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8d5:	88 90 64 39 00 00    	mov    %dl,0x3964(%eax)
 818f8db:	0f b6 55 c0          	movzbl -0x40(%ebp),%edx
 818f8df:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8e2:	88 90 a2 39 00 00    	mov    %dl,0x39a2(%eax)
 818f8e8:	0f b6 55 b0          	movzbl -0x50(%ebp),%edx
 818f8ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8ef:	88 90 dc 39 00 00    	mov    %dl,0x39dc(%eax)
 818f8f5:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 818f8f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f8fb:	89 90 5c 39 00 00    	mov    %edx,0x395c(%eax)
 818f901:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 818f908:	e8 91 c3 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 818f90d:	89 c3                	mov    %eax,%ebx
 818f90f:	8b 75 84             	mov    -0x7c(%ebp),%esi
 818f912:	e8 6a c8 f3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 818f917:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 818f91d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818f921:	89 74 24 04          	mov    %esi,0x4(%esp)
 818f925:	89 04 24             	mov    %eax,(%esp)
 818f928:	e8 7b c7 2d 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 818f92d:	84 c0                	test   %al,%al
 818f92f:	74 0d                	je     818f93e <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc+0x1f8>
 818f931:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f934:	c7 80 5c 39 00 00 00 	movl   $0x0,0x395c(%eax)
 818f93b:	00 00 00 
 818f93e:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f941:	05 3a 3a 00 00       	add    $0x3a3a,%eax
 818f946:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 818f94d:	00 
 818f94e:	8d 55 84             	lea    -0x7c(%ebp),%edx
 818f951:	83 c2 18             	add    $0x18,%edx
 818f954:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f958:	89 04 24             	mov    %eax,(%esp)
 818f95b:	e8 70 df ee ff       	call   807d8d0 <strncpy@plt>
 818f960:	b8 00 00 00 00       	mov    $0x0,%eax
 818f965:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 818f96b:	5b                   	pop    %ebx
 818f96c:	5e                   	pop    %esi
 818f96d:	5d                   	pop    %ebp
 818f96e:	c3                   	ret
 818f96f:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::account_password_check @ 0x818f746

/* ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::account_password_check
          (Arad_Dispatcher_Login_Impl *this,SIG_LOGIN_DATA *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  SIG_LOGIN_DATA local_70;
  undefined4 local_6c;
  char acStack_68 [20];
  SIG_LOGIN_DATA local_54;
  undefined4 local_50;
  SIG_LOGIN_DATA local_44;
  long local_38 [2];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  time_t local_10;
  
  local_10 = time((time_t *)0x0);
  local_38[1] = 0;
  local_38[0] = 0;
  WongWork::CSimpleSSO::stOutputData_t::stOutputData_t((stOutputData_t *)&local_80);
  cVar1 = WongWork::CSimpleSSO::getGameStartTime
                    (GlobalData::s_psimpleSSO,*(uint *)(param_1 + 0xc0),local_38 + 1,local_38,
                     (stOutputData_t *)&local_80);
  if (cVar1 == '\x01') {
    cVar1 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x3954) = local_78;
      *(undefined4 *)(param_1 + 0x3960) = local_74;
      *(undefined4 *)(param_1 + 0x3950) = local_7c;
      *(long *)(param_1 + 0x3958) = local_80;
      *(undefined4 *)(param_1 + 0x3968) = local_6c;
      param_1[0x3964] = local_70;
      param_1[0x39a2] = local_44;
      param_1[0x39dc] = local_54;
      *(undefined4 *)(param_1 + 0x395c) = local_50;
      lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar3 = G_CEnvironment();
      cVar1 = CheckDailyScheduleTime(*(int *)(iVar3 + 0x37c),local_80,lVar4);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x395c) = 0;
      }
      strncpy((char *)(param_1 + 0x3a3a),acStack_68,0x10);
      uVar2 = 0;
    }
    else {
      iVar3 = strncmp(param_2,(char *)(param_1 + 0x18),0x84);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xc0);
        cMyTrace::cMyTrace(local_20,
                           "int ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)"
                           ,0x176,5);
        cMyTrace::operator()(local_20,"gm user password error user_id[%d]",uVar2);
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    cMyTrace::cMyTrace(local_30,
                       "int ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)"
                       ,0x16a,5);
    cMyTrace::operator()(local_30,"get game start time error : user_idx[%d]",uVar2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## db_dispatch

```asm
// === 0818ef4c ARAD::Arad_Dispatcher_Login_Impl::db_dispatch  [0x0818ef4c-0x818f1c9] ===
 818ef4c:	55                   	push   %ebp
 818ef4d:	89 e5                	mov    %esp,%ebp
 818ef4f:	57                   	push   %edi
 818ef50:	56                   	push   %esi
 818ef51:	53                   	push   %ebx
 818ef52:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 818ef58:	8b 45 14             	mov    0x14(%ebp),%eax
 818ef5b:	89 04 24             	mov    %eax,(%esp)
 818ef5e:	e8 51 0c 00 00       	call   818fbb4 <_ZN6Stream12GetOutBufferI14SIG_LOGIN_DATAEEPT_v>
 818ef63:	89 45 e0             	mov    %eax,-0x20(%ebp)
 818ef66:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 818ef6a:	75 3e                	jne    818efaa <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x5e>
 818ef6c:	c7 44 24 14 c3 81 b9 	movl   $0x8b981c3,0x14(%esp)
 818ef73:	08 
 818ef74:	c7 44 24 10 dd 81 b9 	movl   $0x8b981dd,0x10(%esp)
 818ef7b:	08 
 818ef7c:	c7 44 24 0c 39 00 00 	movl   $0x39,0xc(%esp)
 818ef83:	00 
 818ef84:	c7 44 24 08 80 8f b9 	movl   $0x8b98f80,0x8(%esp)
 818ef8b:	08 
 818ef8c:	c7 44 24 04 e0 81 b9 	movl   $0x8b981e0,0x4(%esp)
 818ef93:	08 
 818ef94:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ef9b:	e8 6a 4c 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818efa0:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 818efa5:	e9 12 02 00 00       	jmp    818f1bc <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x270>
 818efaa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818efad:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 818efb4:	00 00 00 
 818efb7:	e8 eb b3 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 818efbc:	89 04 24             	mov    %eax,(%esp)
 818efbf:	e8 5c 7b f8 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 818efc4:	83 f8 08             	cmp    $0x8,%eax
 818efc7:	0f 94 c0             	sete   %al
 818efca:	84 c0                	test   %al,%al
 818efcc:	74 4b                	je     818f019 <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0xcd>
 818efce:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 818efd5:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 818efdc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818efdf:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 818efe6:	98                   	cwtl
 818efe7:	89 45 d0             	mov    %eax,-0x30(%ebp)
 818efea:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818efef:	8d 55 c8             	lea    -0x38(%ebp),%edx
 818eff2:	89 54 24 08          	mov    %edx,0x8(%esp)
 818eff6:	8b 55 10             	mov    0x10(%ebp),%edx
 818eff9:	89 54 24 04          	mov    %edx,0x4(%esp)
 818effd:	89 04 24             	mov    %eax,(%esp)
 818f000:	e8 99 5f 26 00       	call   83f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>
 818f005:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818f00a:	8b 55 10             	mov    0x10(%ebp),%edx
 818f00d:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f011:	89 04 24             	mov    %eax,(%esp)
 818f014:	e8 01 0b 00 00       	call   818fb1a <_ZN5DBMgr10setUserIdxEi>
 818f019:	8d 9d 44 ff ff ff    	lea    -0xbc(%ebp),%ebx
 818f01f:	b8 00 00 00 00       	mov    $0x0,%eax
 818f024:	ba 21 00 00 00       	mov    $0x21,%edx
 818f029:	89 df                	mov    %ebx,%edi
 818f02b:	89 d1                	mov    %edx,%ecx
 818f02d:	f3 ab                	rep stos %eax,%es:(%edi)
 818f02f:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 818f035:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f039:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f03c:	89 04 24             	mov    %eax,(%esp)
 818f03f:	e8 c2 c6 ff ff       	call   818b706 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc>
 818f044:	85 c0                	test   %eax,%eax
 818f046:	0f 95 c0             	setne  %al
 818f049:	84 c0                	test   %al,%al
 818f04b:	74 0d                	je     818f05a <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x10e>
 818f04d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f050:	c7 80 b8 00 00 00 04 	movl   $0x4,0xb8(%eax)
 818f057:	00 00 00 
 818f05a:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 818f060:	89 44 24 08          	mov    %eax,0x8(%esp)
 818f064:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f067:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f06b:	8b 45 08             	mov    0x8(%ebp),%eax
 818f06e:	89 04 24             	mov    %eax,(%esp)
 818f071:	e8 d0 06 00 00       	call   818f746 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc>
 818f076:	85 c0                	test   %eax,%eax
 818f078:	0f 95 c0             	setne  %al
 818f07b:	84 c0                	test   %al,%al
 818f07d:	74 0d                	je     818f08c <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x140>
 818f07f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f082:	c7 80 b8 00 00 00 01 	movl   $0x1,0xb8(%eax)
 818f089:	00 00 00 
 818f08c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f08f:	8b 80 50 39 00 00    	mov    0x3950(%eax),%eax
 818f095:	83 f8 02             	cmp    $0x2,%eax
 818f098:	7f 0e                	jg     818f0a8 <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x15c>
 818f09a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f09d:	8b 80 54 39 00 00    	mov    0x3954(%eax),%eax
 818f0a3:	83 f8 09             	cmp    $0x9,%eax
 818f0a6:	7e 0d                	jle    818f0b5 <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x169>
 818f0a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f0ab:	c7 80 b8 00 00 00 07 	movl   $0x7,0xb8(%eax)
 818f0b2:	00 00 00 
 818f0b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f0b8:	89 04 24             	mov    %eax,(%esp)
 818f0bb:	e8 a7 cc ff ff       	call   818bd67 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA>
 818f0c0:	85 c0                	test   %eax,%eax
 818f0c2:	0f 95 c0             	setne  %al
 818f0c5:	84 c0                	test   %al,%al
 818f0c7:	74 0d                	je     818f0d6 <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x18a>
 818f0c9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f0cc:	c7 80 b8 00 00 00 0f 	movl   $0xf,0xb8(%eax)
 818f0d3:	00 00 00 
 818f0d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f0d9:	89 04 24             	mov    %eax,(%esp)
 818f0dc:	e8 cf ce ff ff       	call   818bfb0 <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA>
 818f0e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f0e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f0e8:	8b 45 08             	mov    0x8(%ebp),%eax
 818f0eb:	89 04 24             	mov    %eax,(%esp)
 818f0ee:	e8 7d 08 00 00       	call   818f970 <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA>
 818f0f3:	85 c0                	test   %eax,%eax
 818f0f5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 818f0fc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f0ff:	89 04 24             	mov    %eax,(%esp)
 818f102:	e8 d9 cf ff ff       	call   818c0e0 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA>
 818f107:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f10a:	89 04 24             	mov    %eax,(%esp)
 818f10d:	e8 94 03 00 00       	call   818f4a6 <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA>
 818f112:	85 c0                	test   %eax,%eax
 818f114:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f117:	89 04 24             	mov    %eax,(%esp)
 818f11a:	e8 e9 0a 00 00       	call   818fc08 <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EEC1Ev>
 818f11f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f122:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f126:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f129:	89 04 24             	mov    %eax,(%esp)
 818f12c:	e8 87 d7 ff ff       	call   818c8b8 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE>
 818f131:	8b 45 10             	mov    0x10(%ebp),%eax
 818f134:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818f138:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f13b:	89 44 24 08          	mov    %eax,0x8(%esp)
 818f13f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f142:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f146:	8b 45 08             	mov    0x8(%ebp),%eax
 818f149:	89 04 24             	mov    %eax,(%esp)
 818f14c:	e8 79 00 00 00       	call   818f1ca <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi>
 818f151:	e8 51 b2 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 818f156:	89 04 24             	mov    %eax,(%esp)
 818f159:	e8 c2 79 f8 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 818f15e:	83 f8 07             	cmp    $0x7,%eax
 818f161:	0f 94 c0             	sete   %al
 818f164:	84 c0                	test   %al,%al
 818f166:	74 27                	je     818f18f <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x243>
 818f168:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f16b:	8b 80 ac 39 00 00    	mov    0x39ac(%eax),%eax
 818f171:	85 c0                	test   %eax,%eax
 818f173:	74 0d                	je     818f182 <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x236>
 818f175:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f178:	8b 80 a8 39 00 00    	mov    0x39a8(%eax),%eax
 818f17e:	85 c0                	test   %eax,%eax
 818f180:	75 0d                	jne    818f18f <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x243>
 818f182:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818f185:	c7 80 b8 00 00 00 08 	movl   $0x8,0xb8(%eax)
 818f18c:	00 00 00 
 818f18f:	bb 00 00 00 00       	mov    $0x0,%ebx
 818f194:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f197:	89 04 24             	mov    %eax,(%esp)
 818f19a:	e8 7d 0a 00 00       	call   818fc1c <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EED1Ev>
 818f19f:	eb 1b                	jmp    818f1bc <_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream+0x270>
 818f1a1:	89 d3                	mov    %edx,%ebx
 818f1a3:	89 c6                	mov    %eax,%esi
 818f1a5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 818f1a8:	89 04 24             	mov    %eax,(%esp)
 818f1ab:	e8 6c 0a 00 00       	call   818fc1c <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EED1Ev>
 818f1b0:	89 f0                	mov    %esi,%eax
 818f1b2:	89 da                	mov    %ebx,%edx
 818f1b4:	89 04 24             	mov    %eax,(%esp)
 818f1b7:	e8 94 45 95 00       	call   8ae3750 <_Unwind_Resume>
 818f1bc:	89 d8                	mov    %ebx,%eax
 818f1be:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 818f1c4:	5b                   	pop    %ebx
 818f1c5:	5e                   	pop    %esi
 818f1c6:	5f                   	pop    %edi
 818f1c7:	5d                   	pop    %ebp
 818f1c8:	c3                   	ret
 818f1c9:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::db_dispatch @ 0x818ef4c

/* ARAD::Arad_Dispatcher_Login_Impl::db_dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::db_dispatch
          (Arad_Dispatcher_Login_Impl *this,int param_1,int param_2,Stream *param_3)

{
  GameWorld *pGVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte bVar5;
  char local_c0 [132];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> local_30 [12];
  SIG_LOGIN_DATA *local_24;
  undefined4 local_20;
  
  bVar5 = 0;
  local_24 = Stream::GetOutBuffer<SIG_LOGIN_DATA>(param_3);
  if (local_24 == (SIG_LOGIN_DATA *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Dispatcher_Login_Impl.cpp",
               "virtual int ARAD::Arad_Dispatcher_Login_Impl::db_dispatch(int, int, Stream*)",0x39,
               "%s","recv stream buffer null!!");
    uVar3 = 0xffffffff;
  }
  else {
    *(undefined4 *)(local_24 + 0xb8) = 0;
    pGVar1 = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(pGVar1);
    if (iVar2 == 8) {
      local_3c = 0;
      local_38 = 0;
      local_34 = (int)*(short *)(local_24 + 0x3a38);
      DBMgr::addUserDBInfo(GlobalData::s_db_mgr,param_2,(stUserDBInfo_t *)&local_3c);
      DBMgr::setUserIdx(GlobalData::s_db_mgr,param_2);
    }
    pcVar4 = local_c0;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
    }
    iVar2 = DATABASE::LOGIN_QUERY::arad_sp_select_account_info(local_24,local_c0);
    if (iVar2 != 0) {
      *(undefined4 *)(local_24 + 0xb8) = 4;
    }
    iVar2 = account_password_check(this,local_24,local_c0);
    if (iVar2 != 0) {
      *(undefined4 *)(local_24 + 0xb8) = 1;
    }
    if ((2 < *(int *)(local_24 + 0x3950)) || (9 < *(int *)(local_24 + 0x3954))) {
      *(undefined4 *)(local_24 + 0xb8) = 7;
    }
    iVar2 = DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(local_24);
    if (iVar2 != 0) {
      *(undefined4 *)(local_24 + 0xb8) = 0xf;
    }
    DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(local_24);
    punish_user_check(this,local_24);
    local_20 = 0;
    DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(local_24);
    pad_certifiaction_check(local_24);
    std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::vector
              (local_30);
                    /* try { // try from 0818f12c to 0818f155 has its CatchHandler @ 0818f1a1 */
    DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(local_24,(vector *)local_30);
    premium_info_set(this,local_24,(vector *)local_30,param_2);
    pGVar1 = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(pGVar1);
    if ((iVar2 == 7) && ((*(int *)(local_24 + 0x39ac) == 0 || (*(int *)(local_24 + 0x39a8) == 0))))
    {
      *(undefined4 *)(local_24 + 0xb8) = 8;
    }
    uVar3 = 0;
    std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::~vector
              (local_30);
  }
  return uVar3;
}

```

---

## inter_dispatch

```asm
// === 0818ef42 ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch  [0x0818ef42-0x818ef4b] ===
 818ef42:	55                   	push   %ebp
 818ef43:	89 e5                	mov    %esp,%ebp
 818ef45:	b8 00 00 00 00       	mov    $0x0,%eax
 818ef4a:	5d                   	pop    %ebp
 818ef4b:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch @ 0x818ef42

/* ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch(CUser*, char*, int) */

undefined4
ARAD::Arad_Dispatcher_Login_Impl::inter_dispatch(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}

```

---

## pad_certifiaction_check

```asm
// === 0818f4a6 ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check  [0x0818f4a6-0x818f745] ===
 818f4a6:	55                   	push   %ebp
 818f4a7:	89 e5                	mov    %esp,%ebp
 818f4a9:	57                   	push   %edi
 818f4aa:	53                   	push   %ebx
 818f4ab:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 818f4b1:	8b 45 08             	mov    0x8(%ebp),%eax
 818f4b4:	0f b6 80 0c 39 00 00 	movzbl 0x390c(%eax),%eax
 818f4bb:	3c 02                	cmp    $0x2,%al
 818f4bd:	0f 85 00 01 00 00    	jne    818f5c3 <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x11d>
 818f4c3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 818f4ca:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 818f4d1:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 818f4d8:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 818f4df:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 818f4e6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 818f4ed:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 818f4f4:	e8 a5 c7 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 818f4f9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 818f4fc:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 818f502:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f506:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 818f509:	89 04 24             	mov    %eax,(%esp)
 818f50c:	e8 4f ee ee ff       	call   807e360 <localtime_r@plt>
 818f511:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 818f517:	83 f8 05             	cmp    $0x5,%eax
 818f51a:	7f 07                	jg     818f523 <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x7d>
 818f51c:	c7 45 ec 80 51 01 00 	movl   $0x15180,-0x14(%ebp)
 818f523:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 818f52a:	e8 6f c7 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 818f52f:	2b 45 ec             	sub    -0x14(%ebp),%eax
 818f532:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 818f535:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 818f53b:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f53f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 818f542:	89 04 24             	mov    %eax,(%esp)
 818f545:	e8 16 ee ee ff       	call   807e360 <localtime_r@plt>
 818f54a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 818f550:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818f554:	c7 44 24 08 0a 82 b9 	movl   $0x8b9820a,0x8(%esp)
 818f55b:	08 
 818f55c:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 818f563:	00 
 818f564:	8d 45 c8             	lea    -0x38(%ebp),%eax
 818f567:	89 04 24             	mov    %eax,(%esp)
 818f56a:	e8 51 e6 ee ff       	call   807dbc0 <strftime@plt>
 818f56f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 818f576:	00 
 818f577:	c7 44 24 08 1a 01 00 	movl   $0x11a,0x8(%esp)
 818f57e:	00 
 818f57f:	c7 44 24 04 20 8f b9 	movl   $0x8b98f20,0x4(%esp)
 818f586:	08 
 818f587:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818f58a:	89 04 24             	mov    %eax,(%esp)
 818f58d:	e8 86 01 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818f592:	8d 45 c8             	lea    -0x38(%ebp),%eax
 818f595:	89 44 24 08          	mov    %eax,0x8(%esp)
 818f599:	c7 44 24 04 1c 82 b9 	movl   $0x8b9821c,0x4(%esp)
 818f5a0:	08 
 818f5a1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818f5a4:	89 04 24             	mov    %eax,(%esp)
 818f5a7:	e8 dc 01 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818f5ac:	8d 45 c8             	lea    -0x38(%ebp),%eax
 818f5af:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f5b3:	8b 45 08             	mov    0x8(%ebp),%eax
 818f5b6:	89 04 24             	mov    %eax,(%esp)
 818f5b9:	e8 35 cf ff ff       	call   818c4f3 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc>
 818f5be:	e9 78 01 00 00       	jmp    818f73b <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x295>
 818f5c3:	8b 45 08             	mov    0x8(%ebp),%eax
 818f5c6:	c6 80 0c 39 00 00 01 	movb   $0x1,0x390c(%eax)
 818f5cd:	8d 5d a0             	lea    -0x60(%ebp),%ebx
 818f5d0:	b8 00 00 00 00       	mov    $0x0,%eax
 818f5d5:	ba 09 00 00 00       	mov    $0x9,%edx
 818f5da:	89 df                	mov    %ebx,%edi
 818f5dc:	89 d1                	mov    %edx,%ecx
 818f5de:	f3 ab                	rep stos %eax,%es:(%edi)
 818f5e0:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 818f5e6:	b8 00 00 00 00       	mov    $0x0,%eax
 818f5eb:	ba 09 00 00 00       	mov    $0x9,%edx
 818f5f0:	89 df                	mov    %ebx,%edi
 818f5f2:	89 d1                	mov    %edx,%ecx
 818f5f4:	f3 ab                	rep stos %eax,%es:(%edi)
 818f5f6:	8b 45 08             	mov    0x8(%ebp),%eax
 818f5f9:	05 05 39 00 00       	add    $0x3905,%eax
 818f5fe:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 818f605:	00 
 818f606:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f60a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 818f60d:	89 04 24             	mov    %eax,(%esp)
 818f610:	e8 bb e2 ee ff       	call   807d8d0 <strncpy@plt>
 818f615:	a1 68 be 40 09       	mov    0x940be68,%eax
 818f61a:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 818f620:	89 54 24 08          	mov    %edx,0x8(%esp)
 818f624:	8d 55 a0             	lea    -0x60(%ebp),%edx
 818f627:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f62b:	89 04 24             	mov    %eax,(%esp)
 818f62e:	e8 89 54 ff ff       	call   8184abc <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_>
 818f633:	8b 45 08             	mov    0x8(%ebp),%eax
 818f636:	05 e1 38 00 00       	add    $0x38e1,%eax
 818f63b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818f63e:	8b 45 08             	mov    0x8(%ebp),%eax
 818f641:	05 14 39 00 00       	add    $0x3914,%eax
 818f646:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818f649:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 818f650:	00 
 818f651:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 818f657:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f65b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818f65e:	89 04 24             	mov    %eax,(%esp)
 818f661:	e8 5a f2 ee ff       	call   807e8c0 <strncmp@plt>
 818f666:	85 c0                	test   %eax,%eax
 818f668:	74 50                	je     818f6ba <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x214>
 818f66a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818f66d:	8b 00                	mov    (%eax),%eax
 818f66f:	8d 50 01             	lea    0x1(%eax),%edx
 818f672:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818f675:	89 10                	mov    %edx,(%eax)
 818f677:	8b 45 08             	mov    0x8(%ebp),%eax
 818f67a:	89 04 24             	mov    %eax,(%esp)
 818f67d:	e8 42 d0 ff ff       	call   818c6c4 <_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA>
 818f682:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818f685:	8b 00                	mov    (%eax),%eax
 818f687:	83 f8 09             	cmp    $0x9,%eax
 818f68a:	7e 17                	jle    818f6a3 <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x1fd>
 818f68c:	8b 45 08             	mov    0x8(%ebp),%eax
 818f68f:	c7 80 b8 00 00 00 06 	movl   $0x6,0xb8(%eax)
 818f696:	00 00 00 
 818f699:	b8 49 00 00 00       	mov    $0x49,%eax
 818f69e:	e9 98 00 00 00       	jmp    818f73b <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x295>
 818f6a3:	8b 45 08             	mov    0x8(%ebp),%eax
 818f6a6:	c7 80 b8 00 00 00 05 	movl   $0x5,0xb8(%eax)
 818f6ad:	00 00 00 
 818f6b0:	b8 48 00 00 00       	mov    $0x48,%eax
 818f6b5:	e9 81 00 00 00       	jmp    818f73b <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x295>
 818f6ba:	8b 45 08             	mov    0x8(%ebp),%eax
 818f6bd:	c7 80 14 39 00 00 00 	movl   $0x0,0x3914(%eax)
 818f6c4:	00 00 00 
 818f6c7:	8b 45 08             	mov    0x8(%ebp),%eax
 818f6ca:	c7 80 18 39 00 00 00 	movl   $0x0,0x3918(%eax)
 818f6d1:	00 00 00 
 818f6d4:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 818f6db:	00 
 818f6dc:	8b 45 08             	mov    0x8(%ebp),%eax
 818f6df:	89 04 24             	mov    %eax,(%esp)
 818f6e2:	e8 88 d0 ff ff       	call   818c76f <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi>
 818f6e7:	85 c0                	test   %eax,%eax
 818f6e9:	0f 95 c0             	setne  %al
 818f6ec:	84 c0                	test   %al,%al
 818f6ee:	74 14                	je     818f704 <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x25e>
 818f6f0:	8b 45 08             	mov    0x8(%ebp),%eax
 818f6f3:	c7 80 b8 00 00 00 06 	movl   $0x6,0xb8(%eax)
 818f6fa:	00 00 00 
 818f6fd:	b8 01 00 00 00       	mov    $0x1,%eax
 818f702:	eb 37                	jmp    818f73b <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x295>
 818f704:	8b 45 08             	mov    0x8(%ebp),%eax
 818f707:	89 04 24             	mov    %eax,(%esp)
 818f70a:	e8 fa ce ff ff       	call   818c609 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA>
 818f70f:	85 c0                	test   %eax,%eax
 818f711:	0f 95 c0             	setne  %al
 818f714:	84 c0                	test   %al,%al
 818f716:	74 14                	je     818f72c <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x286>
 818f718:	8b 45 08             	mov    0x8(%ebp),%eax
 818f71b:	c7 80 b8 00 00 00 06 	movl   $0x6,0xb8(%eax)
 818f722:	00 00 00 
 818f725:	b8 01 00 00 00       	mov    $0x1,%eax
 818f72a:	eb 0f                	jmp    818f73b <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA+0x295>
 818f72c:	8b 45 08             	mov    0x8(%ebp),%eax
 818f72f:	c6 80 e0 38 00 00 00 	movb   $0x0,0x38e0(%eax)
 818f736:	b8 00 00 00 00       	mov    $0x0,%eax
 818f73b:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 818f741:	5b                   	pop    %ebx
 818f742:	5f                   	pop    %edi
 818f743:	5d                   	pop    %ebp
 818f744:	c3                   	ret
 818f745:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check @ 0x818f4a6

/* ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*) */

undefined4 ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  tm *ptVar4;
  tm local_90;
  char local_64 [36];
  time_t local_40;
  char local_3c [20];
  cMyTrace local_28 [16];
  int local_18;
  SIG_LOGIN_DATA *local_14;
  SIG_LOGIN_DATA *local_10;
  
  if (param_1[0x390c] == (SIG_LOGIN_DATA)0x2) {
    local_3c[0] = '\0';
    local_3c[1] = '\0';
    local_3c[2] = '\0';
    local_3c[3] = '\0';
    local_3c[4] = '\0';
    local_3c[5] = '\0';
    local_3c[6] = '\0';
    local_3c[7] = '\0';
    local_3c[8] = '\0';
    local_3c[9] = '\0';
    local_3c[10] = '\0';
    local_3c[0xb] = '\0';
    local_3c[0xc] = '\0';
    local_3c[0xd] = '\0';
    local_3c[0xe] = '\0';
    local_3c[0xf] = '\0';
    local_3c[0x10] = '\0';
    local_3c[0x11] = '\0';
    local_3c[0x12] = '\0';
    local_3c[0x13] = '\0';
    local_18 = 0;
    local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_40,&local_90);
    if (local_90.tm_hour < 6) {
      local_18 = 0x15180;
    }
    local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_40 = local_40 - local_18;
    localtime_r(&local_40,&local_90);
    strftime(local_3c,0x14,"%Y-%m-%d 06:00:00",&local_90);
    cMyTrace::cMyTrace(local_28,
                       "static int ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*)"
                       ,0x11a,0);
    cMyTrace::operator()(local_28,"[Goblin Check Time(%s)]]",local_3c);
    uVar1 = DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(param_1,local_3c);
  }
  else {
    param_1[0x390c] = (SIG_LOGIN_DATA)0x1;
    pcVar3 = local_64;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    ptVar4 = &local_90;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar4->tm_sec = 0;
      ptVar4 = (tm *)&ptVar4->tm_min;
    }
    strncpy(local_64,(char *)(param_1 + 0x3905),0x24);
    ARAD_CRYPT::encryptAES(GlobalData::s_pcryptRijndael_MousePassword_,local_64,(char *)&local_90);
    local_14 = param_1 + 0x38e1;
    local_10 = param_1 + 0x3914;
    iVar2 = strncmp((char *)local_14,(char *)&local_90,0x24);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3914) = 0;
      *(undefined4 *)(param_1 + 0x3918) = 0;
      iVar2 = DATABASE::LOGIN_QUERY::arad_sp_update_history(param_1,7);
      if (iVar2 == 0) {
        iVar2 = DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(param_1);
        if (iVar2 == 0) {
          param_1[0x38e0] = (SIG_LOGIN_DATA)0x0;
          uVar1 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0xb8) = 6;
          uVar1 = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xb8) = 6;
        uVar1 = 1;
      }
    }
    else {
      *(int *)local_10 = *(int *)local_10 + 1;
      DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(param_1);
      if (*(int *)local_10 < 10) {
        *(undefined4 *)(param_1 + 0xb8) = 5;
        uVar1 = 0x48;
      }
      else {
        *(undefined4 *)(param_1 + 0xb8) = 6;
        uVar1 = 0x49;
      }
    }
  }
  return uVar1;
}

```

---

## premium_info_set

```asm
// === 0818f1ca ARAD::Arad_Dispatcher_Login_Impl::premium_info_set  [0x0818f1ca-0x818f4a5] ===
 818f1ca:	55                   	push   %ebp
 818f1cb:	89 e5                	mov    %esp,%ebp
 818f1cd:	56                   	push   %esi
 818f1ce:	53                   	push   %ebx
 818f1cf:	83 ec 60             	sub    $0x60,%esp
 818f1d2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818f1d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f1dc:	c7 80 94 22 00 00 00 	movl   $0x0,0x2294(%eax)
 818f1e3:	00 00 00 
 818f1e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f1e9:	66 c7 80 3a 29 00 00 	movw   $0x0,0x293a(%eax)
 818f1f0:	00 00 
 818f1f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f1f5:	c7 80 4c 39 00 00 00 	movl   $0x0,0x394c(%eax)
 818f1fc:	00 00 00 
 818f1ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818f202:	89 04 24             	mov    %eax,(%esp)
 818f205:	e8 a2 ef ef ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 818f20a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818f20d:	89 04 24             	mov    %eax,(%esp)
 818f210:	e8 97 ef ef ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 818f215:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f218:	8b 55 10             	mov    0x10(%ebp),%edx
 818f21b:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f21f:	89 04 24             	mov    %eax,(%esp)
 818f222:	e8 c3 e5 ff ff       	call   818d7ea <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE5beginEv>
 818f227:	83 ec 04             	sub    $0x4,%esp
 818f22a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 818f22d:	8b 55 10             	mov    0x10(%ebp),%edx
 818f230:	89 54 24 04          	mov    %edx,0x4(%esp)
 818f234:	89 04 24             	mov    %eax,(%esp)
 818f237:	e8 1a e1 ff ff       	call   818d356 <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE3endEv>
 818f23c:	83 ec 04             	sub    $0x4,%esp
 818f23f:	e9 e2 01 00 00       	jmp    818f426 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x25c>
 818f244:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f247:	89 04 24             	mov    %eax,(%esp)
 818f24a:	e8 eb e4 ff ff       	call   818d73a <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEdeEv>
 818f24f:	8b 10                	mov    (%eax),%edx
 818f251:	89 55 b0             	mov    %edx,-0x50(%ebp)
 818f254:	8b 50 04             	mov    0x4(%eax),%edx
 818f257:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 818f25a:	8b 50 08             	mov    0x8(%eax),%edx
 818f25d:	89 55 b8             	mov    %edx,-0x48(%ebp)
 818f260:	8b 50 0c             	mov    0xc(%eax),%edx
 818f263:	89 55 bc             	mov    %edx,-0x44(%ebp)
 818f266:	8b 50 10             	mov    0x10(%eax),%edx
 818f269:	89 55 c0             	mov    %edx,-0x40(%ebp)
 818f26c:	8b 40 14             	mov    0x14(%eax),%eax
 818f26f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 818f272:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f275:	89 04 24             	mov    %eax,(%esp)
 818f278:	e8 3f 0a 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f27d:	8b 00                	mov    (%eax),%eax
 818f27f:	3d 4f c3 00 00       	cmp    $0xc34f,%eax
 818f284:	7e 14                	jle    818f29a <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0xd0>
 818f286:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f289:	89 04 24             	mov    %eax,(%esp)
 818f28c:	e8 2b 0a 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f291:	8b 00                	mov    (%eax),%eax
 818f293:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 818f298:	7e 07                	jle    818f2a1 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0xd7>
 818f29a:	b8 01 00 00 00       	mov    $0x1,%eax
 818f29f:	eb 05                	jmp    818f2a6 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0xdc>
 818f2a1:	b8 00 00 00 00       	mov    $0x0,%eax
 818f2a6:	84 c0                	test   %al,%al
 818f2a8:	0f 85 6c 01 00 00    	jne    818f41a <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x250>
 818f2ae:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f2b1:	89 04 24             	mov    %eax,(%esp)
 818f2b4:	e8 03 0a 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f2b9:	8b 00                	mov    (%eax),%eax
 818f2bb:	3d 6f 11 01 00       	cmp    $0x1116f,%eax
 818f2c0:	7e 1b                	jle    818f2dd <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x113>
 818f2c2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f2c5:	89 04 24             	mov    %eax,(%esp)
 818f2c8:	e8 ef 09 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f2cd:	8b 00                	mov    (%eax),%eax
 818f2cf:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 818f2d4:	7f 07                	jg     818f2dd <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x113>
 818f2d6:	b8 01 00 00 00       	mov    $0x1,%eax
 818f2db:	eb 05                	jmp    818f2e2 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x118>
 818f2dd:	b8 00 00 00 00       	mov    $0x0,%eax
 818f2e2:	84 c0                	test   %al,%al
 818f2e4:	74 39                	je     818f31f <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x155>
 818f2e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f2e9:	0f b7 98 3a 29 00 00 	movzwl 0x293a(%eax),%ebx
 818f2f0:	0f b7 f3             	movzwl %bx,%esi
 818f2f3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f2f6:	89 04 24             	mov    %eax,(%esp)
 818f2f9:	e8 be 09 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f2fe:	8b 10                	mov    (%eax),%edx
 818f300:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f303:	8d 8e 4c 0a 00 00    	lea    0xa4c(%esi),%ecx
 818f309:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 818f30d:	8d 53 01             	lea    0x1(%ebx),%edx
 818f310:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f313:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 818f31a:	e9 fc 00 00 00       	jmp    818f41b <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x251>
 818f31f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f322:	89 04 24             	mov    %eax,(%esp)
 818f325:	e8 92 09 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f32a:	8b 00                	mov    (%eax),%eax
 818f32c:	89 04 24             	mov    %eax,(%esp)
 818f32f:	e8 90 04 52 00       	call   86af7c4 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi>
 818f334:	84 c0                	test   %al,%al
 818f336:	74 39                	je     818f371 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x1a7>
 818f338:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f33b:	0f b7 98 3a 29 00 00 	movzwl 0x293a(%eax),%ebx
 818f342:	0f b7 f3             	movzwl %bx,%esi
 818f345:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f348:	89 04 24             	mov    %eax,(%esp)
 818f34b:	e8 6c 09 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f350:	8b 10                	mov    (%eax),%edx
 818f352:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f355:	8d 8e 4c 0a 00 00    	lea    0xa4c(%esi),%ecx
 818f35b:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 818f35f:	8d 53 01             	lea    0x1(%ebx),%edx
 818f362:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f365:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 818f36c:	e9 aa 00 00 00       	jmp    818f41b <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x251>
 818f371:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f374:	89 04 24             	mov    %eax,(%esp)
 818f377:	e8 40 09 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f37c:	8b 00                	mov    (%eax),%eax
 818f37e:	3d 28 a0 00 00       	cmp    $0xa028,%eax
 818f383:	7e 1b                	jle    818f3a0 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x1d6>
 818f385:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f388:	89 04 24             	mov    %eax,(%esp)
 818f38b:	e8 2c 09 00 00       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 818f390:	8b 00                	mov    (%eax),%eax
 818f392:	3d 2b a0 00 00       	cmp    $0xa02b,%eax
 818f397:	7f 07                	jg     818f3a0 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x1d6>
 818f399:	b8 01 00 00 00       	mov    $0x1,%eax
 818f39e:	eb 05                	jmp    818f3a5 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x1db>
 818f3a0:	b8 00 00 00 00       	mov    $0x0,%eax
 818f3a5:	84 c0                	test   %al,%al
 818f3a7:	74 1b                	je     818f3c4 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x1fa>
 818f3a9:	8b 45 14             	mov    0x14(%ebp),%eax
 818f3ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 818f3b0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 818f3b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f3b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f3ba:	89 04 24             	mov    %eax,(%esp)
 818f3bd:	e8 a7 d6 ff ff       	call   818ca69 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi>
 818f3c2:	eb 57                	jmp    818f41b <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x251>
 818f3c4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818f3c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f3cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818f3ce:	89 04 24             	mov    %eax,(%esp)
 818f3d1:	e8 60 b6 f5 ff       	call   80eaa36 <_ZNSt6vectorIiSaIiEEC1ERKS1_>
 818f3d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818f3d9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818f3dd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818f3e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 818f3e4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 818f3e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f3eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f3ee:	89 04 24             	mov    %eax,(%esp)
 818f3f1:	e8 7e d8 ff ff       	call   818cc74 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_>
 818f3f6:	eb 15                	jmp    818f40d <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x243>
 818f3f8:	89 d3                	mov    %edx,%ebx
 818f3fa:	89 c6                	mov    %eax,%esi
 818f3fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818f3ff:	89 04 24             	mov    %eax,(%esp)
 818f402:	e8 d3 49 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 818f407:	89 f0                	mov    %esi,%eax
 818f409:	89 da                	mov    %ebx,%edx
 818f40b:	eb 51                	jmp    818f45e <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x294>
 818f40d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818f410:	89 04 24             	mov    %eax,(%esp)
 818f413:	e8 c2 49 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 818f418:	eb 01                	jmp    818f41b <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x251>
 818f41a:	90                   	nop
 818f41b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f41e:	89 04 24             	mov    %eax,(%esp)
 818f421:	e8 80 08 00 00       	call   818fca6 <_ZN9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEppEv>
 818f426:	8d 45 c8             	lea    -0x38(%ebp),%eax
 818f429:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f42d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818f430:	89 04 24             	mov    %eax,(%esp)
 818f433:	e8 41 08 00 00       	call   818fc79 <_ZN9__gnu_cxxneIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 818f438:	84 c0                	test   %al,%al
 818f43a:	0f 85 04 fe ff ff    	jne    818f244 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x7a>
 818f440:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f443:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818f446:	89 90 94 22 00 00    	mov    %edx,0x2294(%eax)
 818f44c:	bb 00 00 00 00       	mov    $0x0,%ebx
 818f451:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818f454:	89 04 24             	mov    %eax,(%esp)
 818f457:	e8 7e 49 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 818f45c:	eb 30                	jmp    818f48e <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x2c4>
 818f45e:	89 d3                	mov    %edx,%ebx
 818f460:	89 c6                	mov    %eax,%esi
 818f462:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818f465:	89 04 24             	mov    %eax,(%esp)
 818f468:	e8 6d 49 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 818f46d:	89 f0                	mov    %esi,%eax
 818f46f:	89 da                	mov    %ebx,%edx
 818f471:	eb 00                	jmp    818f473 <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi+0x2a9>
 818f473:	89 d3                	mov    %edx,%ebx
 818f475:	89 c6                	mov    %eax,%esi
 818f477:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818f47a:	89 04 24             	mov    %eax,(%esp)
 818f47d:	e8 58 49 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 818f482:	89 f0                	mov    %esi,%eax
 818f484:	89 da                	mov    %ebx,%edx
 818f486:	89 04 24             	mov    %eax,(%esp)
 818f489:	e8 c2 42 95 00       	call   8ae3750 <_Unwind_Resume>
 818f48e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818f491:	89 04 24             	mov    %eax,(%esp)
 818f494:	e8 41 49 ef ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 818f499:	89 d8                	mov    %ebx,%eax
 818f49b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 818f49e:	83 c4 00             	add    $0x0,%esp
 818f4a1:	5b                   	pop    %ebx
 818f4a2:	5e                   	pop    %esi
 818f4a3:	5d                   	pop    %ebp
 818f4a4:	c3                   	ret
 818f4a5:	90                   	nop

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::premium_info_set @ 0x818f1ca

/* ARAD::Arad_Dispatcher_Login_Impl::premium_info_set(SIG_LOGIN_DATA*,
   std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&, int) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::premium_info_set
          (Arad_Dispatcher_Login_Impl *this,SIG_LOGIN_DATA *param_1,vector *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  __normal_iterator local_3c [4];
  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
  local_38 [4];
  vector<int,std::allocator<int>> local_34 [12];
  vector<int,std::allocator<int>> local_28 [12];
  vector<int,std::allocator<int>> local_1c [12];
  undefined4 local_10;
  
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x2294) = 0;
  *(undefined2 *)(param_1 + 0x293a) = 0;
  *(undefined4 *)(param_1 + 0x394c) = 0;
  std::vector<int,std::allocator<int>>::vector(local_28);
                    /* try { // try from 0818f210 to 0818f214 has its CatchHandler @ 0818f473 */
  std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 0818f222 to 0818f3d5 has its CatchHandler @ 0818f45e */
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::begin();
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::end();
  do {
    bVar3 = __gnu_cxx::operator!=(local_38,local_3c);
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x2294) = local_10;
                    /* try { // try from 0818f457 to 0818f45b has its CatchHandler @ 0818f473 */
      std::vector<int,std::allocator<int>>::~vector(local_34);
      std::vector<int,std::allocator<int>>::~vector(local_28);
      return 0;
    }
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
             ::operator*(local_38);
    local_54 = *puVar4;
    local_50 = puVar4[1];
    local_4c = puVar4[2];
    local_48 = puVar4[3];
    local_44 = puVar4[4];
    local_40 = puVar4[5];
    piVar5 = (int *)__gnu_cxx::
                    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                    ::operator->(local_38);
    if (*piVar5 < 50000) {
LAB_0818f29a:
      bVar3 = true;
    }
    else {
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_38);
      if (89999 < *piVar5) goto LAB_0818f29a;
      bVar3 = false;
    }
    if (!bVar3) {
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_38);
      if (*piVar5 < 70000) {
LAB_0818f2dd:
        bVar3 = false;
      }
      else {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_38);
        if (89999 < *piVar5) goto LAB_0818f2dd;
        bVar3 = true;
      }
      if (bVar3) {
        uVar1 = *(ushort *)(param_1 + 0x293a);
        puVar4 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                 ::operator->(local_38);
        *(undefined4 *)(param_1 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar4;
        *(ushort *)(param_1 + 0x293a) = uVar1 + 1;
      }
      else {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_38);
        cVar2 = WongWork::CUserPremium::IsRestrictedPremium(*piVar5);
        if (cVar2 == '\0') {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                          ::operator->(local_38);
          if (*piVar5 < 0xa029) {
LAB_0818f3a0:
            bVar3 = false;
          }
          else {
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_38);
            if (0xa02b < *piVar5) goto LAB_0818f3a0;
            bVar3 = true;
          }
          if (bVar3) {
            DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast
                      (param_1,(tagDNFEventEntry *)&local_54,param_3);
          }
          else {
            std::vector<int,std::allocator<int>>::vector(local_1c,(vector *)local_34);
                    /* try { // try from 0818f3f1 to 0818f3f5 has its CatchHandler @ 0818f3f8 */
            DATABASE::LOGIN_QUERY::arad_sp_select_member_premium
                      (param_1,&local_54,local_28,local_1c);
                    /* try { // try from 0818f413 to 0818f437 has its CatchHandler @ 0818f45e */
            std::vector<int,std::allocator<int>>::~vector(local_1c);
          }
        }
        else {
          uVar1 = *(ushort *)(param_1 + 0x293a);
          puVar4 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                   ::operator->(local_38);
          *(undefined4 *)(param_1 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar4;
          *(ushort *)(param_1 + 0x293a) = uVar1 + 1;
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
    ::operator++(local_38);
  } while( true );
}

```

---

## punish_user_check

```asm
// === 0818f970 ARAD::Arad_Dispatcher_Login_Impl::punish_user_check  [0x0818f970-0x818fabd] ===
 818f970:	55                   	push   %ebp
 818f971:	89 e5                	mov    %esp,%ebp
 818f973:	83 ec 28             	sub    $0x28,%esp
 818f976:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 818f97d:	e8 1c c3 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 818f982:	89 45 e8             	mov    %eax,-0x18(%ebp)
 818f985:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 818f98c:	e9 0f 01 00 00       	jmp    818faa0 <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x130>
 818f991:	8b 55 ec             	mov    -0x14(%ebp),%edx
 818f994:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 818f997:	89 d0                	mov    %edx,%eax
 818f999:	01 c0                	add    %eax,%eax
 818f99b:	01 d0                	add    %edx,%eax
 818f99d:	c1 e0 03             	shl    $0x3,%eax
 818f9a0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 818f9a3:	05 68 3a 00 00       	add    $0x3a68,%eax
 818f9a8:	8b 00                	mov    (%eax),%eax
 818f9aa:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818f9ad:	8b 55 ec             	mov    -0x14(%ebp),%edx
 818f9b0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 818f9b3:	89 d0                	mov    %edx,%eax
 818f9b5:	01 c0                	add    %eax,%eax
 818f9b7:	01 d0                	add    %edx,%eax
 818f9b9:	c1 e0 03             	shl    $0x3,%eax
 818f9bc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 818f9bf:	05 54 3a 00 00       	add    $0x3a54,%eax
 818f9c4:	8b 00                	mov    (%eax),%eax
 818f9c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818f9c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818f9cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f9d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f9d3:	89 04 24             	mov    %eax,(%esp)
 818f9d6:	e8 e4 73 00 00       	call   8196dbf <_ZN4ARAD12PUNISH_CHECK19punish_check_by_HUBEP14SIG_LOGIN_DATAi>
 818f9db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818f9de:	89 44 24 04          	mov    %eax,0x4(%esp)
 818f9e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 818f9e5:	89 04 24             	mov    %eax,(%esp)
 818f9e8:	e8 e1 73 00 00       	call   8196dce <_ZN4ARAD12PUNISH_CHECK19punish_check_by_RESEP14SIG_LOGIN_DATAi>
 818f9ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 818f9f0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 818f9f3:	0f 8f a2 00 00 00    	jg     818fa9b <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x12b>
 818f9f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818f9fc:	89 44 24 08          	mov    %eax,0x8(%esp)
 818fa00:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818fa03:	89 44 24 04          	mov    %eax,0x4(%esp)
 818fa07:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fa0a:	89 04 24             	mov    %eax,(%esp)
 818fa0d:	e8 08 73 00 00       	call   8196d1a <_ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli>
 818fa12:	85 c0                	test   %eax,%eax
 818fa14:	0f 94 c0             	sete   %al
 818fa17:	84 c0                	test   %al,%al
 818fa19:	74 16                	je     818fa31 <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0xc1>
 818fa1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fa1e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 818fa21:	89 90 50 3a 00 00    	mov    %edx,0x3a50(%eax)
 818fa27:	b8 00 00 00 00       	mov    $0x0,%eax
 818fa2c:	e9 8b 00 00 00       	jmp    818fabc <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x14c>
 818fa31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818fa34:	89 44 24 08          	mov    %eax,0x8(%esp)
 818fa38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818fa3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 818fa3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fa42:	89 04 24             	mov    %eax,(%esp)
 818fa45:	e8 3e 73 00 00       	call   8196d88 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_SYSEP14SIG_LOGIN_DATAli>
 818fa4a:	85 c0                	test   %eax,%eax
 818fa4c:	0f 94 c0             	sete   %al
 818fa4f:	84 c0                	test   %al,%al
 818fa51:	74 13                	je     818fa66 <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0xf6>
 818fa53:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fa56:	8b 55 ec             	mov    -0x14(%ebp),%edx
 818fa59:	89 90 50 3a 00 00    	mov    %edx,0x3a50(%eax)
 818fa5f:	b8 00 00 00 00       	mov    $0x0,%eax
 818fa64:	eb 56                	jmp    818fabc <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x14c>
 818fa66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818fa69:	89 44 24 08          	mov    %eax,0x8(%esp)
 818fa6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818fa70:	89 44 24 04          	mov    %eax,0x4(%esp)
 818fa74:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fa77:	89 04 24             	mov    %eax,(%esp)
 818fa7a:	e8 d2 72 00 00       	call   8196d51 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli>
 818fa7f:	85 c0                	test   %eax,%eax
 818fa81:	0f 94 c0             	sete   %al
 818fa84:	84 c0                	test   %al,%al
 818fa86:	74 14                	je     818fa9c <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x12c>
 818fa88:	8b 45 0c             	mov    0xc(%ebp),%eax
 818fa8b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 818fa8e:	89 90 50 3a 00 00    	mov    %edx,0x3a50(%eax)
 818fa94:	b8 00 00 00 00       	mov    $0x0,%eax
 818fa99:	eb 21                	jmp    818fabc <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x14c>
 818fa9b:	90                   	nop
 818fa9c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 818faa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 818faa3:	8b 80 50 3a 00 00    	mov    0x3a50(%eax),%eax
 818faa9:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 818faac:	0f 9f c0             	setg   %al
 818faaf:	84 c0                	test   %al,%al
 818fab1:	0f 85 da fe ff ff    	jne    818f991 <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA+0x21>
 818fab7:	b8 01 00 00 00       	mov    $0x1,%eax
 818fabc:	c9                   	leave
 818fabd:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::punish_user_check @ 0x818f970

/* ARAD::Arad_Dispatcher_Login_Impl::punish_user_check(SIG_LOGIN_DATA*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::punish_user_check
          (Arad_Dispatcher_Login_Impl *this,SIG_LOGIN_DATA *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_18 = 0;
  do {
    if (*(int *)(param_1 + 0x3a50) <= local_18) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + local_18 * 0x18 + 0x3a68);
    iVar1 = *(int *)(param_1 + local_18 * 0x18 + 0x3a54);
    PUNISH_CHECK::punish_check_by_HUB(param_1,iVar1);
    PUNISH_CHECK::punish_check_by_RES(param_1,iVar1);
    if (iVar2 <= iVar4) {
      iVar3 = PUNISH_CHECK::punish_check_by_WEB(param_1,iVar4,iVar1);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x3a50) = local_18;
        return 0;
      }
      iVar3 = PUNISH_CHECK::punish_check_by_SYS(param_1,iVar4,iVar1);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x3a50) = local_18;
        return 0;
      }
      iVar4 = PUNISH_CHECK::punish_check_by_ARS(param_1,iVar4,iVar1);
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x3a50) = local_18;
        return 0;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## ~Arad_Dispatcher_Login_Impl

```asm
// === 0818eef4 ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl  [0x0818eef4-0x818ef23] ===
 818eef4:	55                   	push   %ebp
 818eef5:	89 e5                	mov    %esp,%ebp
 818eef7:	83 ec 18             	sub    $0x18,%esp
 818eefa:	8b 45 08             	mov    0x8(%ebp),%eax
 818eefd:	c7 00 d8 8f b9 08    	movl   $0x8b98fd8,(%eax)
 818ef03:	8b 45 08             	mov    0x8(%ebp),%eax
 818ef06:	89 04 24             	mov    %eax,(%esp)
 818ef09:	e8 f2 f9 ff ff       	call   818e900 <_ZN4ARAD15Arad_DispatcherD1Ev>
 818ef0e:	b8 00 00 00 00       	mov    $0x0,%eax
 818ef13:	84 c0                	test   %al,%al
 818ef15:	74 0b                	je     818ef22 <_ZN4ARAD26Arad_Dispatcher_Login_ImplD1Ev+0x2e>
 818ef17:	8b 45 08             	mov    0x8(%ebp),%eax
 818ef1a:	89 04 24             	mov    %eax,(%esp)
 818ef1d:	e8 ce 55 59 00       	call   87244f0 <_ZdlPv>
 818ef22:	c9                   	leave
 818ef23:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl @ 0x818eef4

/* WARNING: Removing unreachable block (ram,0x0818ef17) */
/* ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl(Arad_Dispatcher_Login_Impl *this)

{
  *(undefined ***)this = &PTR__Arad_Dispatcher_Login_Impl_08b98fd8;
  Arad_Dispatcher::~Arad_Dispatcher((Arad_Dispatcher *)this);
  return;
}

```

---

## ~Arad_Dispatcher_Login_Impl_0818ef24

```asm
// === 0818ef24 ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl  [0x0818ef24-0x818ef41] ===
 818ef24:	55                   	push   %ebp
 818ef25:	89 e5                	mov    %esp,%ebp
 818ef27:	83 ec 18             	sub    $0x18,%esp
 818ef2a:	8b 45 08             	mov    0x8(%ebp),%eax
 818ef2d:	89 04 24             	mov    %eax,(%esp)
 818ef30:	e8 bf ff ff ff       	call   818eef4 <_ZN4ARAD26Arad_Dispatcher_Login_ImplD1Ev>
 818ef35:	8b 45 08             	mov    0x8(%ebp),%eax
 818ef38:	89 04 24             	mov    %eax,(%esp)
 818ef3b:	e8 b0 55 59 00       	call   87244f0 <_ZdlPv>
 818ef40:	c9                   	leave
 818ef41:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl @ 0x818ef24

/* ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl() */

void __thiscall
ARAD::Arad_Dispatcher_Login_Impl::~Arad_Dispatcher_Login_Impl(Arad_Dispatcher_Login_Impl *this)

{
  ~Arad_Dispatcher_Login_Impl(this);
  operator_delete(this);
  return;
}

```

