# DB_Login

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 48

---

## CheckLoginIP

```asm
// === 08415472 DB_Login::CheckLoginIP  [0x08415472-0x8415617] ===
 8415472:	55                   	push   %ebp
 8415473:	89 e5                	mov    %esp,%ebp
 8415475:	83 ec 58             	sub    $0x58,%esp
 8415478:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 841547c:	75 0a                	jne    8415488 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0x16>
 841547e:	b8 00 00 00 00       	mov    $0x0,%eax
 8415483:	e9 8d 01 00 00       	jmp    8415615 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0x1a3>
 8415488:	8b 45 0c             	mov    0xc(%ebp),%eax
 841548b:	c6 80 24 41 00 00 00 	movb   $0x0,0x4124(%eax)
 8415492:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8415499:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84154a0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84154a7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84154ae:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84154b5:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84154bc:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84154c3:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84154ca:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84154d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84154d4:	05 a1 00 00 00       	add    $0xa1,%eax
 84154d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84154dd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84154e0:	89 04 24             	mov    %eax,(%esp)
 84154e3:	e8 08 8a c6 ff       	call   807def0 <strcpy@plt>
 84154e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84154eb:	05 14 41 00 00       	add    $0x4114,%eax
 84154f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84154f4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84154f7:	89 04 24             	mov    %eax,(%esp)
 84154fa:	e8 f1 89 c6 ff       	call   807def0 <strcpy@plt>
 84154ff:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8415506:	00 
 8415507:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841550a:	89 04 24             	mov    %eax,(%esp)
 841550d:	e8 32 fd e4 ff       	call   8265244 <_ZSt7strrchrPci>
 8415512:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8415515:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8415519:	74 06                	je     8415521 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0xaf>
 841551b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841551e:	c6 00 00             	movb   $0x0,(%eax)
 8415521:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8415528:	00 
 8415529:	8d 45 d0             	lea    -0x30(%ebp),%eax
 841552c:	89 04 24             	mov    %eax,(%esp)
 841552f:	e8 10 fd e4 ff       	call   8265244 <_ZSt7strrchrPci>
 8415534:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8415537:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 841553b:	74 06                	je     8415543 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0xd1>
 841553d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8415540:	c6 00 00             	movb   $0x0,(%eax)
 8415543:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8415546:	89 44 24 04          	mov    %eax,0x4(%esp)
 841554a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841554d:	89 04 24             	mov    %eax,(%esp)
 8415550:	e8 8b 8f c6 ff       	call   807e4e0 <strcmp@plt>
 8415555:	85 c0                	test   %eax,%eax
 8415557:	0f 84 b3 00 00 00    	je     8415610 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0x19e>
 841555d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415560:	05 14 41 00 00       	add    $0x4114,%eax
 8415565:	0f b6 00             	movzbl (%eax),%eax
 8415568:	84 c0                	test   %al,%al
 841556a:	74 0a                	je     8415576 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0x104>
 841556c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841556f:	c6 80 24 41 00 00 01 	movb   $0x1,0x4124(%eax)
 8415576:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841557b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8415582:	00 
 8415583:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 841558a:	00 
 841558b:	89 04 24             	mov    %eax,(%esp)
 841558e:	e8 ab fc fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8415593:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8415596:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415599:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841559f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84155a2:	81 c2 a1 00 00 00    	add    $0xa1,%edx
 84155a8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84155ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 84155b0:	c7 44 24 04 44 8a c4 	movl   $0x8c48a44,0x4(%esp)
 84155b7:	08 
 84155b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84155bb:	89 04 24             	mov    %eax,(%esp)
 84155be:	e8 fd eb fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84155c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84155ca:	00 
 84155cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84155ce:	89 04 24             	mov    %eax,(%esp)
 84155d1:	e8 50 ed fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84155d6:	83 f0 01             	xor    $0x1,%eax
 84155d9:	84 c0                	test   %al,%al
 84155db:	74 33                	je     8415610 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0x19e>
 84155dd:	c7 44 24 10 78 8a c4 	movl   $0x8c48a78,0x10(%esp)
 84155e4:	08 
 84155e5:	c7 44 24 0c 63 3e 00 	movl   $0x3e63,0xc(%esp)
 84155ec:	00 
 84155ed:	c7 44 24 08 e0 cd c5 	movl   $0x8c5cde0,0x8(%esp)
 84155f4:	08 
 84155f5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84155fc:	08 
 84155fd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8415604:	e8 01 e6 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8415609:	b8 00 00 00 00       	mov    $0x0,%eax
 841560e:	eb 05                	jmp    8415615 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA+0x1a3>
 8415610:	b8 01 00 00 00       	mov    $0x1,%eax
 8415615:	c9                   	leave
 8415616:	c3                   	ret
 8415617:	90                   	nop

```

```c
// DB_Login::CheckLoginIP @ 0x8415472

/* DB_Login::CheckLoginIP(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::CheckLoginIP(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_34 [32];
  undefined1 *local_14;
  MySQL *local_10;
  
  if (param_1 == (SIG_LOGIN_DATA *)0x0) {
    uVar2 = 0;
  }
  else {
    param_1[0x4124] = (SIG_LOGIN_DATA)0x0;
    local_14 = (undefined1 *)0x0;
    local_34[0x10] = '\0';
    local_34[0x11] = '\0';
    local_34[0x12] = '\0';
    local_34[0x13] = '\0';
    local_34[0x14] = '\0';
    local_34[0x15] = '\0';
    local_34[0x16] = '\0';
    local_34[0x17] = '\0';
    local_34[0x18] = '\0';
    local_34[0x19] = '\0';
    local_34[0x1a] = '\0';
    local_34[0x1b] = '\0';
    local_34[0x1c] = '\0';
    local_34[0x1d] = '\0';
    local_34[0x1e] = '\0';
    local_34[0x1f] = '\0';
    local_34[0] = '\0';
    local_34[1] = '\0';
    local_34[2] = '\0';
    local_34[3] = '\0';
    local_34[4] = '\0';
    local_34[5] = '\0';
    local_34[6] = '\0';
    local_34[7] = '\0';
    local_34[8] = '\0';
    local_34[9] = '\0';
    local_34[10] = '\0';
    local_34[0xb] = '\0';
    local_34[0xc] = '\0';
    local_34[0xd] = '\0';
    local_34[0xe] = '\0';
    local_34[0xf] = '\0';
    strcpy(local_34 + 0x10,(char *)(param_1 + 0xa1));
    strcpy(local_34,(char *)(param_1 + 0x4114));
    local_14 = (undefined1 *)std::strrchr(local_34 + 0x10,0x2e);
    if (local_14 != (undefined1 *)0x0) {
      *local_14 = 0;
    }
    local_14 = (undefined1 *)std::strrchr(local_34,0x2e);
    if (local_14 != (undefined1 *)0x0) {
      *local_14 = 0;
    }
    iVar3 = strcmp(local_34 + 0x10,local_34);
    if (iVar3 != 0) {
      if (param_1[0x4114] != (SIG_LOGIN_DATA)0x0) {
        param_1[0x4124] = (SIG_LOGIN_DATA)0x1;
      }
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      MySQL::set_query(local_10,"upDate login_common set login_ip=\'%s\' where m_id=%u",
                       param_1 + 0xa1,*(undefined4 *)(param_1 + 0xc0));
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp","bool DB_Login::CheckLoginIP(SIG_LOGIN_DATA*)",0x3e63,
                   "LOGIN_IP : IP Address UDATE DB ERROR!!");
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## CreateAccount

```asm
// === 08412eb8 DB_Login::CreateAccount  [0x08412eb8-0x841300d] ===
 8412eb8:	55                   	push   %ebp
 8412eb9:	89 e5                	mov    %esp,%ebp
 8412ebb:	53                   	push   %ebx
 8412ebc:	83 ec 34             	sub    $0x34,%esp
 8412ebf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8412ec3:	74 06                	je     8412ecb <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x13>
 8412ec5:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8412ec9:	75 0a                	jne    8412ed5 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x1d>
 8412ecb:	b8 00 00 00 00       	mov    $0x0,%eax
 8412ed0:	e9 32 01 00 00       	jmp    8413007 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x14f>
 8412ed5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412ed8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412edc:	c7 44 24 04 1a 7e c4 	movl   $0x8c47e1a,0x4(%esp)
 8412ee3:	08 
 8412ee4:	8b 45 10             	mov    0x10(%ebp),%eax
 8412ee7:	89 04 24             	mov    %eax,(%esp)
 8412eea:	e8 d1 12 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412eef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412ef6:	00 
 8412ef7:	8b 45 10             	mov    0x10(%ebp),%eax
 8412efa:	89 04 24             	mov    %eax,(%esp)
 8412efd:	e8 24 14 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412f02:	83 f0 01             	xor    $0x1,%eax
 8412f05:	84 c0                	test   %al,%al
 8412f07:	74 3d                	je     8412f46 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x8e>
 8412f09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412f0c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8412f10:	c7 44 24 10 38 7e c4 	movl   $0x8c47e38,0x10(%esp)
 8412f17:	08 
 8412f18:	c7 44 24 0c e6 37 00 	movl   $0x37e6,0xc(%esp)
 8412f1f:	00 
 8412f20:	c7 44 24 08 c0 cf c5 	movl   $0x8c5cfc0,0x8(%esp)
 8412f27:	08 
 8412f28:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8412f2f:	08 
 8412f30:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8412f37:	e8 ce 0c 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8412f3c:	b8 00 00 00 00       	mov    $0x0,%eax
 8412f41:	e9 c1 00 00 00       	jmp    8413007 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x14f>
 8412f46:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8412f49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8412f50:	00 
 8412f51:	c7 44 24 08 ea 37 00 	movl   $0x37ea,0x8(%esp)
 8412f58:	00 
 8412f59:	c7 44 24 04 c0 cf c5 	movl   $0x8c5cfc0,0x4(%esp)
 8412f60:	08 
 8412f61:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412f64:	89 04 24             	mov    %eax,(%esp)
 8412f67:	e8 ac c7 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8412f6c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8412f70:	c7 44 24 04 68 7e c4 	movl   $0x8c47e68,0x4(%esp)
 8412f77:	08 
 8412f78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412f7b:	89 04 24             	mov    %eax,(%esp)
 8412f7e:	e8 05 c8 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8412f83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412f86:	0f b6 80 a0 00 00 00 	movzbl 0xa0(%eax),%eax
 8412f8d:	0f b6 d0             	movzbl %al,%edx
 8412f90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412f93:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8412f97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412f9b:	c7 44 24 04 98 7e c4 	movl   $0x8c47e98,0x4(%esp)
 8412fa2:	08 
 8412fa3:	8b 45 10             	mov    0x10(%ebp),%eax
 8412fa6:	89 04 24             	mov    %eax,(%esp)
 8412fa9:	e8 12 12 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412fae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412fb5:	00 
 8412fb6:	8b 45 10             	mov    0x10(%ebp),%eax
 8412fb9:	89 04 24             	mov    %eax,(%esp)
 8412fbc:	e8 65 13 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412fc1:	83 f0 01             	xor    $0x1,%eax
 8412fc4:	84 c0                	test   %al,%al
 8412fc6:	74 3a                	je     8413002 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x14a>
 8412fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412fcb:	89 44 24 14          	mov    %eax,0x14(%esp)
 8412fcf:	c7 44 24 10 54 7f c4 	movl   $0x8c47f54,0x10(%esp)
 8412fd6:	08 
 8412fd7:	c7 44 24 0c 04 38 00 	movl   $0x3804,0xc(%esp)
 8412fde:	00 
 8412fdf:	c7 44 24 08 c0 cf c5 	movl   $0x8c5cfc0,0x8(%esp)
 8412fe6:	08 
 8412fe7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8412fee:	08 
 8412fef:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8412ff6:	e8 0f 0c 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8412ffb:	b8 00 00 00 00       	mov    $0x0,%eax
 8413000:	eb 05                	jmp    8413007 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL+0x14f>
 8413002:	b8 01 00 00 00       	mov    $0x1,%eax
 8413007:	83 c4 34             	add    $0x34,%esp
 841300a:	5b                   	pop    %ebx
 841300b:	5d                   	pop    %ebp
 841300c:	c3                   	ret
 841300d:	90                   	nop

```

```c
// DB_Login::CreateAccount @ 0x8412eb8

/* DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*) */

undefined4 __thiscall DB_Login::CreateAccount(DB_Login *this,SIG_LOGIN_DATA *param_1,MySQL *param_2)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  if ((param_1 == (SIG_LOGIN_DATA *)0x0) || (param_2 == (MySQL *)0x0)) {
    uVar2 = 0;
  }
  else {
    MySQL::set_query(param_2,"call usp_create_account(\'%s\')",param_1);
    cVar1 = MySQL::exec(param_2,true);
    if (cVar1 == '\x01') {
      cMyTrace::cMyTrace(local_1c,"bool DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)",0x37ea,0);
      cMyTrace::operator()(local_1c,"[Taiwan, Account] Success create account. id=%s",param_1);
      MySQL::set_query(param_2,
                       "seLect m_id, passwd,first_ssn, second_ssn,DATE_FORMAT(from_unixtime(reg_date),\'%%Y%%m%%d%%H\'),user_name,email,hangame_flag,reg_date from member_info where user_id=\'%s\' and hangame_flag=%d"
                       ,param_1,(uint)(byte)param_1[0xa0]);
      cVar1 = MySQL::exec(param_2,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp","bool DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)",0x3804,
                   "[Taiwan, Account] Fail select member_info m_id=%s",param_1);
        uVar2 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)",0x37e6,
                 "[Taiwan, Account] Fail create account. id=%s",param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## DB_Login

```asm
// === 0840f48e DB_Login::DB_Login  [0x0840f48e-0x840f4a9] ===
 840f48e:	55                   	push   %ebp
 840f48f:	89 e5                	mov    %esp,%ebp
 840f491:	83 ec 18             	sub    $0x18,%esp
 840f494:	8b 45 08             	mov    0x8(%ebp),%eax
 840f497:	89 04 24             	mov    %eax,(%esp)
 840f49a:	e8 07 e3 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 840f49f:	8b 45 08             	mov    0x8(%ebp),%eax
 840f4a2:	c7 00 10 fb c5 08    	movl   $0x8c5fb10,(%eax)
 840f4a8:	c9                   	leave
 840f4a9:	c3                   	ret

```

```c
// DB_Login::DB_Login @ 0x840f48e

/* DB_Login::DB_Login() */

void __thiscall DB_Login::DB_Login(DB_Login *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fb10;
  return;
}

```

---

## GetAccountCharacterLevelUpOnceGift

```asm
// === 0844834e DB_Login::GetAccountCharacterLevelUpOnceGift  [0x0844834e-0x844852f] ===
 844834e:	55                   	push   %ebp
 844834f:	89 e5                	mov    %esp,%ebp
 8448351:	83 ec 38             	sub    $0x38,%esp
 8448354:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8448359:	c7 44 24 04 68 00 00 	movl   $0x68,0x4(%esp)
 8448360:	00 
 8448361:	89 04 24             	mov    %eax,(%esp)
 8448364:	e8 2f d6 cc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8448369:	8b 10                	mov    (%eax),%edx
 844836b:	83 c2 34             	add    $0x34,%edx
 844836e:	8b 12                	mov    (%edx),%edx
 8448370:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448377:	00 
 8448378:	89 04 24             	mov    %eax,(%esp)
 844837b:	ff d2                	call   *%edx
 844837d:	83 f0 01             	xor    $0x1,%eax
 8448380:	84 c0                	test   %al,%al
 8448382:	74 0a                	je     844838e <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x40>
 8448384:	b8 01 00 00 00       	mov    $0x1,%eax
 8448389:	e9 9f 01 00 00       	jmp    844852d <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1df>
 844838e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448393:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844839a:	00 
 844839b:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84483a2:	00 
 84483a3:	89 04 24             	mov    %eax,(%esp)
 84483a6:	e8 93 ce fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84483ab:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84483ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84483b1:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84483b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84483bb:	c7 44 24 04 ac 87 c5 	movl   $0x8c587ac,0x4(%esp)
 84483c2:	08 
 84483c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84483c6:	89 04 24             	mov    %eax,(%esp)
 84483c9:	e8 f2 bd fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84483ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84483d5:	00 
 84483d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84483d9:	89 04 24             	mov    %eax,(%esp)
 84483dc:	e8 45 bf fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84483e1:	88 45 eb             	mov    %al,-0x15(%ebp)
 84483e4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84483e8:	83 f0 01             	xor    $0x1,%eax
 84483eb:	84 c0                	test   %al,%al
 84483ed:	74 43                	je     8448432 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0xe4>
 84483ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84483f2:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84483f8:	89 44 24 14          	mov    %eax,0x14(%esp)
 84483fc:	c7 44 24 10 f4 87 c5 	movl   $0x8c587f4,0x10(%esp)
 8448403:	08 
 8448404:	c7 44 24 0c e8 b4 00 	movl   $0xb4e8,0xc(%esp)
 844840b:	00 
 844840c:	c7 44 24 08 a0 af c5 	movl   $0x8c5afa0,0x8(%esp)
 8448413:	08 
 8448414:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844841b:	08 
 844841c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8448423:	e8 e2 b7 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8448428:	b8 00 00 00 00       	mov    $0x0,%eax
 844842d:	e9 fb 00 00 00       	jmp    844852d <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1df>
 8448432:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448435:	89 04 24             	mov    %eax,(%esp)
 8448438:	e8 2f 9f c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844843d:	85 c0                	test   %eax,%eax
 844843f:	0f 95 c0             	setne  %al
 8448442:	84 c0                	test   %al,%al
 8448444:	0f 84 be 00 00 00    	je     8448508 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1ba>
 844844a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8448451:	e9 97 00 00 00       	jmp    84484ed <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x19f>
 8448456:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448459:	89 04 24             	mov    %eax,(%esp)
 844845c:	e8 5b c0 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8448461:	83 f0 01             	xor    $0x1,%eax
 8448464:	84 c0                	test   %al,%al
 8448466:	74 0a                	je     8448472 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x124>
 8448468:	b8 00 00 00 00       	mov    $0x0,%eax
 844846d:	e9 bb 00 00 00       	jmp    844852d <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1df>
 8448472:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8448476:	76 0a                	jbe    8448482 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x134>
 8448478:	b8 00 00 00 00       	mov    $0x0,%eax
 844847d:	e9 ab 00 00 00       	jmp    844852d <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1df>
 8448482:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448485:	05 66 08 00 00       	add    $0x866,%eax
 844848a:	c1 e0 03             	shl    $0x3,%eax
 844848d:	03 45 0c             	add    0xc(%ebp),%eax
 8448490:	83 c0 08             	add    $0x8,%eax
 8448493:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8448496:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448499:	89 44 24 08          	mov    %eax,0x8(%esp)
 844849d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84484a4:	00 
 84484a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84484a8:	89 04 24             	mov    %eax,(%esp)
 84484ab:	e8 6c 9b cf ff       	call   814201c <_ZN5MySQL9get_shortEiRi>
 84484b0:	83 f0 01             	xor    $0x1,%eax
 84484b3:	84 c0                	test   %al,%al
 84484b5:	74 07                	je     84484be <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x170>
 84484b7:	b8 00 00 00 00       	mov    $0x0,%eax
 84484bc:	eb 6f                	jmp    844852d <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1df>
 84484be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84484c1:	83 c0 04             	add    $0x4,%eax
 84484c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84484c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84484cf:	00 
 84484d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84484d3:	89 04 24             	mov    %eax,(%esp)
 84484d6:	e8 51 e4 cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84484db:	83 f0 01             	xor    $0x1,%eax
 84484de:	84 c0                	test   %al,%al
 84484e0:	74 07                	je     84484e9 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x19b>
 84484e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84484e7:	eb 44                	jmp    844852d <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1df>
 84484e9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84484ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84484f0:	89 04 24             	mov    %eax,(%esp)
 84484f3:	e8 74 9e c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84484f8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84484fb:	0f 97 c0             	seta   %al
 84484fe:	84 c0                	test   %al,%al
 8448500:	0f 85 50 ff ff ff    	jne    8448456 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x108>
 8448506:	eb 20                	jmp    8448528 <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA+0x1da>
 8448508:	8b 45 0c             	mov    0xc(%ebp),%eax
 844850b:	05 38 43 00 00       	add    $0x4338,%eax
 8448510:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8448517:	00 
 8448518:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844851f:	00 
 8448520:	89 04 24             	mov    %eax,(%esp)
 8448523:	e8 98 57 c3 ff       	call   807dcc0 <memset@plt>
 8448528:	b8 01 00 00 00       	mov    $0x1,%eax
 844852d:	c9                   	leave
 844852e:	c3                   	ret
 844852f:	90                   	nop

```

```c
// DB_Login::GetAccountCharacterLevelUpOnceGift @ 0x844834e

/* DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::GetAccountCharacterLevelUpOnceGift(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  uint uVar5;
  uint local_14;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x68);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,"seLect job_type, level from event_1208_level_achieve where m_id = %d",
                     *(undefined4 *)(param_1 + 0xc0));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        memset(param_1 + 0x4338,0,0x20);
      }
      else {
        for (local_14 = 0; uVar5 = MySQL::get_n_rows(this_00), local_14 < uVar5;
            local_14 = local_14 + 1) {
          cVar1 = MySQL::fetch(this_00);
          if (cVar1 != '\x01') {
            return 0;
          }
          if (3 < local_14) {
            return 0;
          }
          cVar1 = MySQL::get_short(this_00,0,(int *)(param_1 + (local_14 + 0x866) * 8 + 8));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + (local_14 + 0x866) * 8 + 0xc));
          if (cVar1 != '\x01') {
            return 0;
          }
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_Login::GetAccountCharacterLevelUpOnceGift(SIG_LOGIN_DATA*)",0xb4e8,
                 "LoadAccountCharacterLevelUpOnceGift Query Error : m_id(%d)",
                 *(undefined4 *)(param_1 + 0xc0));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## GetAccountInfo

```asm
// === 0841325e DB_Login::GetAccountInfo  [0x0841325e-0x84143ab] ===
 841325e:	55                   	push   %ebp
 841325f:	89 e5                	mov    %esp,%ebp
 8413261:	57                   	push   %edi
 8413262:	56                   	push   %esi
 8413263:	53                   	push   %ebx
 8413264:	81 ec fc 03 00 00    	sub    $0x3fc,%esp
 841326a:	8d 95 4e fc ff ff    	lea    -0x3b2(%ebp),%edx
 8413270:	bb 84 00 00 00       	mov    $0x84,%ebx
 8413275:	b8 00 00 00 00       	mov    $0x0,%eax
 841327a:	89 d1                	mov    %edx,%ecx
 841327c:	83 e1 02             	and    $0x2,%ecx
 841327f:	85 c9                	test   %ecx,%ecx
 8413281:	74 09                	je     841328c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x2e>
 8413283:	66 89 02             	mov    %ax,(%edx)
 8413286:	83 c2 02             	add    $0x2,%edx
 8413289:	83 eb 02             	sub    $0x2,%ebx
 841328c:	89 d9                	mov    %ebx,%ecx
 841328e:	c1 e9 02             	shr    $0x2,%ecx
 8413291:	89 d7                	mov    %edx,%edi
 8413293:	f3 ab                	rep stos %eax,%es:(%edi)
 8413295:	89 fa                	mov    %edi,%edx
 8413297:	89 d9                	mov    %ebx,%ecx
 8413299:	83 e1 02             	and    $0x2,%ecx
 841329c:	85 c9                	test   %ecx,%ecx
 841329e:	74 06                	je     84132a6 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x48>
 84132a0:	66 89 02             	mov    %ax,(%edx)
 84132a3:	83 c2 02             	add    $0x2,%edx
 84132a6:	89 d9                	mov    %ebx,%ecx
 84132a8:	83 e1 01             	and    $0x1,%ecx
 84132ab:	85 c9                	test   %ecx,%ecx
 84132ad:	74 05                	je     84132b4 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x56>
 84132af:	88 02                	mov    %al,(%edx)
 84132b1:	83 c2 01             	add    $0x1,%edx
 84132b4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84132b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84132c0:	00 
 84132c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84132c8:	00 
 84132c9:	89 04 24             	mov    %eax,(%esp)
 84132cc:	e8 6d 1f fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84132d1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84132d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84132d7:	0f b6 80 a0 00 00 00 	movzbl 0xa0(%eax),%eax
 84132de:	0f b6 d0             	movzbl %al,%edx
 84132e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84132e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84132e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84132ec:	c7 44 24 04 38 80 c4 	movl   $0x8c48038,0x4(%esp)
 84132f3:	08 
 84132f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84132f7:	89 04 24             	mov    %eax,(%esp)
 84132fa:	e8 c1 0e fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84132ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8413306:	00 
 8413307:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841330a:	89 04 24             	mov    %eax,(%esp)
 841330d:	e8 14 10 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8413312:	83 f0 01             	xor    $0x1,%eax
 8413315:	84 c0                	test   %al,%al
 8413317:	74 4d                	je     8413366 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x108>
 8413319:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 841331c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413323:	00 
 8413324:	c7 44 24 08 7f 39 00 	movl   $0x397f,0x8(%esp)
 841332b:	00 
 841332c:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413333:	08 
 8413334:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 841333a:	89 04 24             	mov    %eax,(%esp)
 841333d:	e8 d6 c3 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413342:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413346:	c7 44 24 04 f8 80 c4 	movl   $0x8c480f8,0x4(%esp)
 841334d:	08 
 841334e:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8413354:	89 04 24             	mov    %eax,(%esp)
 8413357:	e8 2c c4 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841335c:	b8 00 00 00 00       	mov    $0x0,%eax
 8413361:	e9 3b 10 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413366:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413369:	89 04 24             	mov    %eax,(%esp)
 841336c:	e8 fb ef cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8413371:	85 c0                	test   %eax,%eax
 8413373:	75 27                	jne    841339c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x13e>
 8413375:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413378:	89 44 24 08          	mov    %eax,0x8(%esp)
 841337c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841337f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8413383:	8b 45 08             	mov    0x8(%ebp),%eax
 8413386:	89 04 24             	mov    %eax,(%esp)
 8413389:	e8 2a fb ff ff       	call   8412eb8 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL>
 841338e:	83 f0 01             	xor    $0x1,%eax
 8413391:	84 c0                	test   %al,%al
 8413393:	74 07                	je     841339c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x13e>
 8413395:	b8 01 00 00 00       	mov    $0x1,%eax
 841339a:	eb 05                	jmp    84133a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x143>
 841339c:	b8 00 00 00 00       	mov    $0x0,%eax
 84133a1:	84 c0                	test   %al,%al
 84133a3:	74 4d                	je     84133f2 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x194>
 84133a5:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 84133a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84133af:	00 
 84133b0:	c7 44 24 08 86 39 00 	movl   $0x3986,0x8(%esp)
 84133b7:	00 
 84133b8:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 84133bf:	08 
 84133c0:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 84133c6:	89 04 24             	mov    %eax,(%esp)
 84133c9:	e8 4a c3 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84133ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84133d2:	c7 44 24 04 28 81 c4 	movl   $0x8c48128,0x4(%esp)
 84133d9:	08 
 84133da:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 84133e0:	89 04 24             	mov    %eax,(%esp)
 84133e3:	e8 a0 c3 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84133e8:	b8 00 00 00 00       	mov    $0x0,%eax
 84133ed:	e9 af 0f 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 84133f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84133f5:	89 04 24             	mov    %eax,(%esp)
 84133f8:	e8 bf 10 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84133fd:	83 f0 01             	xor    $0x1,%eax
 8413400:	84 c0                	test   %al,%al
 8413402:	74 4d                	je     8413451 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1f3>
 8413404:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413407:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841340e:	00 
 841340f:	c7 44 24 08 af 39 00 	movl   $0x39af,0x8(%esp)
 8413416:	00 
 8413417:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 841341e:	08 
 841341f:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8413425:	89 04 24             	mov    %eax,(%esp)
 8413428:	e8 eb c2 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841342d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413431:	c7 44 24 04 54 81 c4 	movl   $0x8c48154,0x4(%esp)
 8413438:	08 
 8413439:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 841343f:	89 04 24             	mov    %eax,(%esp)
 8413442:	e8 41 c3 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413447:	b8 00 00 00 00       	mov    $0x0,%eax
 841344c:	e9 50 0f 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413451:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413454:	05 c0 00 00 00       	add    $0xc0,%eax
 8413459:	89 44 24 08          	mov    %eax,0x8(%esp)
 841345d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8413464:	00 
 8413465:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413468:	89 04 24             	mov    %eax,(%esp)
 841346b:	e8 82 ee cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8413470:	83 f0 01             	xor    $0x1,%eax
 8413473:	84 c0                	test   %al,%al
 8413475:	74 4d                	je     84134c4 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x266>
 8413477:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 841347a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413481:	00 
 8413482:	c7 44 24 08 b5 39 00 	movl   $0x39b5,0x8(%esp)
 8413489:	00 
 841348a:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413491:	08 
 8413492:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8413498:	89 04 24             	mov    %eax,(%esp)
 841349b:	e8 78 c2 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84134a0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84134a4:	c7 44 24 04 84 81 c4 	movl   $0x8c48184,0x4(%esp)
 84134ab:	08 
 84134ac:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 84134b2:	89 04 24             	mov    %eax,(%esp)
 84134b5:	e8 ce c2 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84134ba:	b8 00 00 00 00       	mov    $0x0,%eax
 84134bf:	e9 dd 0e 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 84134c4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84134c7:	89 04 24             	mov    %eax,(%esp)
 84134ca:	e8 9d ee cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84134cf:	83 f8 01             	cmp    $0x1,%eax
 84134d2:	0f 95 c0             	setne  %al
 84134d5:	84 c0                	test   %al,%al
 84134d7:	0f 84 1d 01 00 00    	je     84135fa <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x39c>
 84134dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84134e0:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84134e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84134ed:	00 
 84134ee:	89 04 24             	mov    %eax,(%esp)
 84134f1:	e8 55 5b cf ff       	call   810904b <_Z14NumberToStringji>
 84134f6:	89 c3                	mov    %eax,%ebx
 84134f8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84134fb:	89 04 24             	mov    %eax,(%esp)
 84134fe:	e8 69 ee cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8413503:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8413507:	89 44 24 08          	mov    %eax,0x8(%esp)
 841350b:	c7 44 24 04 b4 81 c4 	movl   $0x8c481b4,0x4(%esp)
 8413512:	08 
 8413513:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413516:	89 04 24             	mov    %eax,(%esp)
 8413519:	e8 a2 0c fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841351e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8413525:	00 
 8413526:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413529:	89 04 24             	mov    %eax,(%esp)
 841352c:	e8 f5 0d fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8413531:	83 f0 01             	xor    $0x1,%eax
 8413534:	84 c0                	test   %al,%al
 8413536:	75 11                	jne    8413549 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x2eb>
 8413538:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841353b:	89 04 24             	mov    %eax,(%esp)
 841353e:	e8 cd 0d fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8413543:	09 d0                	or     %edx,%eax
 8413545:	85 c0                	test   %eax,%eax
 8413547:	75 07                	jne    8413550 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x2f2>
 8413549:	b8 01 00 00 00       	mov    $0x1,%eax
 841354e:	eb 05                	jmp    8413555 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x2f7>
 8413550:	b8 00 00 00 00       	mov    $0x0,%eax
 8413555:	84 c0                	test   %al,%al
 8413557:	74 54                	je     84135ad <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x34f>
 8413559:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841355c:	89 04 24             	mov    %eax,(%esp)
 841355f:	e8 08 ee cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8413564:	89 c3                	mov    %eax,%ebx
 8413566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413569:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841356f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8413576:	00 
 8413577:	89 04 24             	mov    %eax,(%esp)
 841357a:	e8 cc 5a cf ff       	call   810904b <_Z14NumberToStringji>
 841357f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8413583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413587:	c7 44 24 04 f0 81 c4 	movl   $0x8c481f0,0x4(%esp)
 841358e:	08 
 841358f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413592:	89 04 24             	mov    %eax,(%esp)
 8413595:	e8 26 0c fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841359a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84135a1:	00 
 84135a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84135a5:	89 04 24             	mov    %eax,(%esp)
 84135a8:	e8 79 0d fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84135ad:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 84135b0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84135b7:	00 
 84135b8:	c7 44 24 08 c2 39 00 	movl   $0x39c2,0x8(%esp)
 84135bf:	00 
 84135c0:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 84135c7:	08 
 84135c8:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84135ce:	89 04 24             	mov    %eax,(%esp)
 84135d1:	e8 42 c1 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84135d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84135da:	c7 44 24 04 34 82 c4 	movl   $0x8c48234,0x4(%esp)
 84135e1:	08 
 84135e2:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84135e8:	89 04 24             	mov    %eax,(%esp)
 84135eb:	e8 98 c1 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84135f0:	b8 00 00 00 00       	mov    $0x0,%eax
 84135f5:	e9 a7 0d 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 84135fa:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 8413601:	00 
 8413602:	8d 85 4e fc ff ff    	lea    -0x3b2(%ebp),%eax
 8413608:	89 44 24 08          	mov    %eax,0x8(%esp)
 841360c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8413613:	00 
 8413614:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413617:	89 04 24             	mov    %eax,(%esp)
 841361a:	e8 cb 97 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 841361f:	83 f0 01             	xor    $0x1,%eax
 8413622:	84 c0                	test   %al,%al
 8413624:	74 4d                	je     8413673 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x415>
 8413626:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413629:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413630:	00 
 8413631:	c7 44 24 08 c8 39 00 	movl   $0x39c8,0x8(%esp)
 8413638:	00 
 8413639:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413640:	08 
 8413641:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8413647:	89 04 24             	mov    %eax,(%esp)
 841364a:	e8 c9 c0 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841364f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413653:	c7 44 24 04 6c 82 c4 	movl   $0x8c4826c,0x4(%esp)
 841365a:	08 
 841365b:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8413661:	89 04 24             	mov    %eax,(%esp)
 8413664:	e8 1f c1 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413669:	b8 00 00 00 00       	mov    $0x0,%eax
 841366e:	e9 2e 0d 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413673:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 8413679:	89 04 24             	mov    %eax,(%esp)
 841367c:	e8 a7 c4 d7 ff       	call   818fb28 <_ZN8WongWork10CSimpleSSO14stOutputData_tC1Ev>
 8413681:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413684:	8d 58 18             	lea    0x18(%eax),%ebx
 8413687:	8b 45 0c             	mov    0xc(%ebp),%eax
 841368a:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 8413690:	a1 08 f7 41 09       	mov    0x941f708,%eax
 8413695:	8d 8d d4 fd ff ff    	lea    -0x22c(%ebp),%ecx
 841369b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841369f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84136a3:	8d 8d 4e fc ff ff    	lea    -0x3b2(%ebp),%ecx
 84136a9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84136ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84136b1:	89 04 24             	mov    %eax,(%esp)
 84136b4:	e8 0d f2 1e 00       	call   86028c6 <_ZN8WongWork10CSimpleSSO18checkValidPasswordEjPKcS2_RNS0_14stOutputData_tE>
 84136b9:	83 f0 01             	xor    $0x1,%eax
 84136bc:	84 c0                	test   %al,%al
 84136be:	74 53                	je     8413713 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x4b5>
 84136c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84136c3:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84136c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84136d0:	00 
 84136d1:	89 04 24             	mov    %eax,(%esp)
 84136d4:	e8 72 59 cf ff       	call   810904b <_Z14NumberToStringji>
 84136d9:	89 44 24 14          	mov    %eax,0x14(%esp)
 84136dd:	c7 44 24 10 9c 82 c4 	movl   $0x8c4829c,0x10(%esp)
 84136e4:	08 
 84136e5:	c7 44 24 0c da 39 00 	movl   $0x39da,0xc(%esp)
 84136ec:	00 
 84136ed:	c7 44 24 08 20 cf c5 	movl   $0x8c5cf20,0x8(%esp)
 84136f4:	08 
 84136f5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84136fc:	08 
 84136fd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8413704:	e8 01 05 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8413709:	b8 00 00 00 00       	mov    $0x0,%eax
 841370e:	e9 8e 0c 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413713:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
 8413719:	8b 45 0c             	mov    0xc(%ebp),%eax
 841371c:	89 90 58 39 00 00    	mov    %edx,0x3958(%eax)
 8413722:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
 8413728:	8b 45 0c             	mov    0xc(%ebp),%eax
 841372b:	89 90 50 39 00 00    	mov    %edx,0x3950(%eax)
 8413731:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
 8413737:	8b 45 0c             	mov    0xc(%ebp),%eax
 841373a:	89 90 54 39 00 00    	mov    %edx,0x3954(%eax)
 8413740:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
 8413746:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413749:	89 90 60 39 00 00    	mov    %edx,0x3960(%eax)
 841374f:	0f b6 95 e4 fd ff ff 	movzbl -0x21c(%ebp),%edx
 8413756:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413759:	88 90 64 39 00 00    	mov    %dl,0x3964(%eax)
 841375f:	8b 95 e8 fd ff ff    	mov    -0x218(%ebp),%edx
 8413765:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413768:	89 90 68 39 00 00    	mov    %edx,0x3968(%eax)
 841376e:	8b 85 08 fe ff ff    	mov    -0x1f8(%ebp),%eax
 8413774:	89 c2                	mov    %eax,%edx
 8413776:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413779:	89 90 6c 39 00 00    	mov    %edx,0x396c(%eax)
 841377f:	8b 95 0c fe ff ff    	mov    -0x1f4(%ebp),%edx
 8413785:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413788:	89 90 70 39 00 00    	mov    %edx,0x3970(%eax)
 841378e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413791:	05 74 39 00 00       	add    $0x3974,%eax
 8413796:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 841379d:	00 
 841379e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84137a5:	00 
 84137a6:	89 04 24             	mov    %eax,(%esp)
 84137a9:	e8 12 a5 c6 ff       	call   807dcc0 <memset@plt>
 84137ae:	e8 f4 6b cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 84137b3:	89 04 24             	mov    %eax,(%esp)
 84137b6:	e8 93 a4 03 00       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 84137bb:	84 c0                	test   %al,%al
 84137bd:	74 14                	je     84137d3 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x575>
 84137bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84137c2:	8b 80 6c 39 00 00    	mov    0x396c(%eax),%eax
 84137c8:	85 c0                	test   %eax,%eax
 84137ca:	74 07                	je     84137d3 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x575>
 84137cc:	b8 01 00 00 00       	mov    $0x1,%eax
 84137d1:	eb 05                	jmp    84137d8 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x57a>
 84137d3:	b8 00 00 00 00       	mov    $0x0,%eax
 84137d8:	84 c0                	test   %al,%al
 84137da:	74 37                	je     8413813 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x5b5>
 84137dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84137df:	8d 90 74 39 00 00    	lea    0x3974(%eax),%edx
 84137e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84137e8:	8b 80 6c 39 00 00    	mov    0x396c(%eax),%eax
 84137ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 84137f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84137f6:	8b 45 08             	mov    0x8(%ebp),%eax
 84137f9:	89 04 24             	mov    %eax,(%esp)
 84137fc:	e8 45 0c 00 00       	call   8414446 <_ZN8DB_Login13GetSchoolNameEiPc>
 8413801:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413804:	89 44 24 04          	mov    %eax,0x4(%esp)
 8413808:	8b 45 08             	mov    0x8(%ebp),%eax
 841380b:	89 04 24             	mov    %eax,(%esp)
 841380e:	e8 ff 0c 00 00       	call   8414512 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA>
 8413813:	0f b6 95 10 fe ff ff 	movzbl -0x1f0(%ebp),%edx
 841381a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841381d:	88 90 a2 39 00 00    	mov    %dl,0x39a2(%eax)
 8413823:	0f b6 95 00 fe ff ff 	movzbl -0x200(%ebp),%edx
 841382a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841382d:	88 90 dc 39 00 00    	mov    %dl,0x39dc(%eax)
 8413833:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413836:	05 3a 3a 00 00       	add    $0x3a3a,%eax
 841383b:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8413842:	00 
 8413843:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 8413849:	83 c2 18             	add    $0x18,%edx
 841384c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8413850:	89 04 24             	mov    %eax,(%esp)
 8413853:	e8 78 a0 c6 ff       	call   807d8d0 <strncpy@plt>
 8413858:	8b 95 04 fe ff ff    	mov    -0x1fc(%ebp),%edx
 841385e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413861:	89 90 5c 39 00 00    	mov    %edx,0x395c(%eax)
 8413867:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 841386e:	e8 2b 84 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8413873:	89 c3                	mov    %eax,%ebx
 8413875:	8b b5 d4 fd ff ff    	mov    -0x22c(%ebp),%esi
 841387b:	e8 01 89 cb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8413880:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8413886:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841388a:	89 74 24 04          	mov    %esi,0x4(%esp)
 841388e:	89 04 24             	mov    %eax,(%esp)
 8413891:	e8 12 88 05 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 8413896:	84 c0                	test   %al,%al
 8413898:	74 0d                	je     84138a7 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x649>
 841389a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841389d:	c7 80 5c 39 00 00 00 	movl   $0x0,0x395c(%eax)
 84138a4:	00 00 00 
 84138a7:	0f b6 95 11 fe ff ff 	movzbl -0x1ef(%ebp),%edx
 84138ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84138b1:	88 90 10 3f 00 00    	mov    %dl,0x3f10(%eax)
 84138b7:	8d 95 ab fe ff ff    	lea    -0x155(%ebp),%edx
 84138bd:	bb 21 00 00 00       	mov    $0x21,%ebx
 84138c2:	b8 00 00 00 00       	mov    $0x0,%eax
 84138c7:	89 d1                	mov    %edx,%ecx
 84138c9:	83 e1 01             	and    $0x1,%ecx
 84138cc:	85 c9                	test   %ecx,%ecx
 84138ce:	74 08                	je     84138d8 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x67a>
 84138d0:	88 02                	mov    %al,(%edx)
 84138d2:	83 c2 01             	add    $0x1,%edx
 84138d5:	83 eb 01             	sub    $0x1,%ebx
 84138d8:	89 d1                	mov    %edx,%ecx
 84138da:	83 e1 02             	and    $0x2,%ecx
 84138dd:	85 c9                	test   %ecx,%ecx
 84138df:	74 09                	je     84138ea <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x68c>
 84138e1:	66 89 02             	mov    %ax,(%edx)
 84138e4:	83 c2 02             	add    $0x2,%edx
 84138e7:	83 eb 02             	sub    $0x2,%ebx
 84138ea:	89 d9                	mov    %ebx,%ecx
 84138ec:	c1 e9 02             	shr    $0x2,%ecx
 84138ef:	89 d7                	mov    %edx,%edi
 84138f1:	f3 ab                	rep stos %eax,%es:(%edi)
 84138f3:	89 fa                	mov    %edi,%edx
 84138f5:	89 d9                	mov    %ebx,%ecx
 84138f7:	83 e1 02             	and    $0x2,%ecx
 84138fa:	85 c9                	test   %ecx,%ecx
 84138fc:	74 06                	je     8413904 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x6a6>
 84138fe:	66 89 02             	mov    %ax,(%edx)
 8413901:	83 c2 02             	add    $0x2,%edx
 8413904:	89 d9                	mov    %ebx,%ecx
 8413906:	83 e1 01             	and    $0x1,%ecx
 8413909:	85 c9                	test   %ecx,%ecx
 841390b:	74 05                	je     8413912 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x6b4>
 841390d:	88 02                	mov    %al,(%edx)
 841390f:	83 c2 01             	add    $0x1,%edx
 8413912:	8d 95 8a fe ff ff    	lea    -0x176(%ebp),%edx
 8413918:	bb 21 00 00 00       	mov    $0x21,%ebx
 841391d:	b8 00 00 00 00       	mov    $0x0,%eax
 8413922:	89 d1                	mov    %edx,%ecx
 8413924:	83 e1 02             	and    $0x2,%ecx
 8413927:	85 c9                	test   %ecx,%ecx
 8413929:	74 09                	je     8413934 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x6d6>
 841392b:	66 89 02             	mov    %ax,(%edx)
 841392e:	83 c2 02             	add    $0x2,%edx
 8413931:	83 eb 02             	sub    $0x2,%ebx
 8413934:	89 d9                	mov    %ebx,%ecx
 8413936:	c1 e9 02             	shr    $0x2,%ecx
 8413939:	89 d7                	mov    %edx,%edi
 841393b:	f3 ab                	rep stos %eax,%es:(%edi)
 841393d:	89 fa                	mov    %edi,%edx
 841393f:	89 d9                	mov    %ebx,%ecx
 8413941:	83 e1 02             	and    $0x2,%ecx
 8413944:	85 c9                	test   %ecx,%ecx
 8413946:	74 06                	je     841394e <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x6f0>
 8413948:	66 89 02             	mov    %ax,(%edx)
 841394b:	83 c2 02             	add    $0x2,%edx
 841394e:	89 d9                	mov    %ebx,%ecx
 8413950:	83 e1 01             	and    $0x1,%ecx
 8413953:	85 c9                	test   %ecx,%ecx
 8413955:	74 05                	je     841395c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x6fe>
 8413957:	88 02                	mov    %al,(%edx)
 8413959:	83 c2 01             	add    $0x1,%edx
 841395c:	8d 95 69 fe ff ff    	lea    -0x197(%ebp),%edx
 8413962:	bb 21 00 00 00       	mov    $0x21,%ebx
 8413967:	b8 00 00 00 00       	mov    $0x0,%eax
 841396c:	89 d1                	mov    %edx,%ecx
 841396e:	83 e1 01             	and    $0x1,%ecx
 8413971:	85 c9                	test   %ecx,%ecx
 8413973:	74 08                	je     841397d <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x71f>
 8413975:	88 02                	mov    %al,(%edx)
 8413977:	83 c2 01             	add    $0x1,%edx
 841397a:	83 eb 01             	sub    $0x1,%ebx
 841397d:	89 d1                	mov    %edx,%ecx
 841397f:	83 e1 02             	and    $0x2,%ecx
 8413982:	85 c9                	test   %ecx,%ecx
 8413984:	74 09                	je     841398f <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x731>
 8413986:	66 89 02             	mov    %ax,(%edx)
 8413989:	83 c2 02             	add    $0x2,%edx
 841398c:	83 eb 02             	sub    $0x2,%ebx
 841398f:	89 d9                	mov    %ebx,%ecx
 8413991:	c1 e9 02             	shr    $0x2,%ecx
 8413994:	89 d7                	mov    %edx,%edi
 8413996:	f3 ab                	rep stos %eax,%es:(%edi)
 8413998:	89 fa                	mov    %edi,%edx
 841399a:	89 d9                	mov    %ebx,%ecx
 841399c:	83 e1 02             	and    $0x2,%ecx
 841399f:	85 c9                	test   %ecx,%ecx
 84139a1:	74 06                	je     84139a9 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x74b>
 84139a3:	66 89 02             	mov    %ax,(%edx)
 84139a6:	83 c2 02             	add    $0x2,%edx
 84139a9:	89 d9                	mov    %ebx,%ecx
 84139ab:	83 e1 01             	and    $0x1,%ecx
 84139ae:	85 c9                	test   %ecx,%ecx
 84139b0:	74 05                	je     84139b7 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x759>
 84139b2:	88 02                	mov    %al,(%edx)
 84139b4:	83 c2 01             	add    $0x1,%edx
 84139b7:	8d 95 48 fe ff ff    	lea    -0x1b8(%ebp),%edx
 84139bd:	b8 00 00 00 00       	mov    $0x0,%eax
 84139c2:	b9 08 00 00 00       	mov    $0x8,%ecx
 84139c7:	89 d7                	mov    %edx,%edi
 84139c9:	f3 ab                	rep stos %eax,%es:(%edi)
 84139cb:	89 fa                	mov    %edi,%edx
 84139cd:	88 02                	mov    %al,(%edx)
 84139cf:	83 c2 01             	add    $0x1,%edx
 84139d2:	c7 44 24 0c 21 00 00 	movl   $0x21,0xc(%esp)
 84139d9:	00 
 84139da:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 84139e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84139e4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84139eb:	00 
 84139ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84139ef:	89 04 24             	mov    %eax,(%esp)
 84139f2:	e8 f3 93 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84139f7:	83 f0 01             	xor    $0x1,%eax
 84139fa:	84 c0                	test   %al,%al
 84139fc:	74 4d                	je     8413a4b <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x7ed>
 84139fe:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413a01:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413a08:	00 
 8413a09:	c7 44 24 08 3f 3a 00 	movl   $0x3a3f,0x8(%esp)
 8413a10:	00 
 8413a11:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413a18:	08 
 8413a19:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8413a1f:	89 04 24             	mov    %eax,(%esp)
 8413a22:	e8 f1 bc 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413a27:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413a2b:	c7 44 24 04 d0 82 c4 	movl   $0x8c482d0,0x4(%esp)
 8413a32:	08 
 8413a33:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8413a39:	89 04 24             	mov    %eax,(%esp)
 8413a3c:	e8 47 bd 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413a41:	b8 00 00 00 00       	mov    $0x0,%eax
 8413a46:	e9 56 09 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413a4b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8413a52:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 8413a58:	0f b6 00             	movzbl (%eax),%eax
 8413a5b:	84 c0                	test   %al,%al
 8413a5d:	0f 84 a9 00 00 00    	je     8413b0c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x8ae>
 8413a63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413a66:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413a6c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8413a70:	8d 85 8a fe ff ff    	lea    -0x176(%ebp),%eax
 8413a76:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413a7a:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 8413a80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8413a84:	8b 45 08             	mov    0x8(%ebp),%eax
 8413a87:	89 04 24             	mov    %eax,(%esp)
 8413a8a:	e8 7f f5 ff ff       	call   841300e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j>
 8413a8f:	83 f0 01             	xor    $0x1,%eax
 8413a92:	84 c0                	test   %al,%al
 8413a94:	74 65                	je     8413afb <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x89d>
 8413a96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413a99:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413a9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8413aa6:	00 
 8413aa7:	89 04 24             	mov    %eax,(%esp)
 8413aaa:	e8 9c 55 cf ff       	call   810904b <_Z14NumberToStringji>
 8413aaf:	89 c3                	mov    %eax,%ebx
 8413ab1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413ab8:	00 
 8413ab9:	c7 44 24 08 48 3a 00 	movl   $0x3a48,0x8(%esp)
 8413ac0:	00 
 8413ac1:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413ac8:	08 
 8413ac9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8413acf:	89 04 24             	mov    %eax,(%esp)
 8413ad2:	e8 41 bc 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413ad7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413adb:	c7 44 24 04 00 83 c4 	movl   $0x8c48300,0x4(%esp)
 8413ae2:	08 
 8413ae3:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8413ae9:	89 04 24             	mov    %eax,(%esp)
 8413aec:	e8 97 bc 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413af1:	b8 00 00 00 00       	mov    $0x0,%eax
 8413af6:	e9 a6 08 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413afb:	8d 85 8a fe ff ff    	lea    -0x176(%ebp),%eax
 8413b01:	89 04 24             	mov    %eax,(%esp)
 8413b04:	e8 e7 ab c6 ff       	call   807e6f0 <atoi@plt>
 8413b09:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8413b0c:	c7 44 24 0c 21 00 00 	movl   $0x21,0xc(%esp)
 8413b13:	00 
 8413b14:	8d 85 69 fe ff ff    	lea    -0x197(%ebp),%eax
 8413b1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413b1e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8413b25:	00 
 8413b26:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413b29:	89 04 24             	mov    %eax,(%esp)
 8413b2c:	e8 b9 92 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8413b31:	83 f0 01             	xor    $0x1,%eax
 8413b34:	84 c0                	test   %al,%al
 8413b36:	74 4d                	je     8413b85 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x927>
 8413b38:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413b3b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413b42:	00 
 8413b43:	c7 44 24 08 51 3a 00 	movl   $0x3a51,0x8(%esp)
 8413b4a:	00 
 8413b4b:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413b52:	08 
 8413b53:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8413b59:	89 04 24             	mov    %eax,(%esp)
 8413b5c:	e8 b7 bb 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413b61:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413b65:	c7 44 24 04 24 83 c4 	movl   $0x8c48324,0x4(%esp)
 8413b6c:	08 
 8413b6d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8413b73:	89 04 24             	mov    %eax,(%esp)
 8413b76:	e8 0d bc 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413b7b:	b8 00 00 00 00       	mov    $0x0,%eax
 8413b80:	e9 1c 08 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413b85:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8413b8c:	8d 85 69 fe ff ff    	lea    -0x197(%ebp),%eax
 8413b92:	0f b6 00             	movzbl (%eax),%eax
 8413b95:	84 c0                	test   %al,%al
 8413b97:	0f 84 a9 00 00 00    	je     8413c46 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x9e8>
 8413b9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413ba0:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413ba6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8413baa:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 8413bb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413bb4:	8d 85 69 fe ff ff    	lea    -0x197(%ebp),%eax
 8413bba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8413bbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8413bc1:	89 04 24             	mov    %eax,(%esp)
 8413bc4:	e8 45 f4 ff ff       	call   841300e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j>
 8413bc9:	83 f0 01             	xor    $0x1,%eax
 8413bcc:	84 c0                	test   %al,%al
 8413bce:	74 65                	je     8413c35 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x9d7>
 8413bd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413bd3:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413bd9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8413be0:	00 
 8413be1:	89 04 24             	mov    %eax,(%esp)
 8413be4:	e8 62 54 cf ff       	call   810904b <_Z14NumberToStringji>
 8413be9:	89 c3                	mov    %eax,%ebx
 8413beb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413bf2:	00 
 8413bf3:	c7 44 24 08 5a 3a 00 	movl   $0x3a5a,0x8(%esp)
 8413bfa:	00 
 8413bfb:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413c02:	08 
 8413c03:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8413c09:	89 04 24             	mov    %eax,(%esp)
 8413c0c:	e8 07 bb 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413c11:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413c15:	c7 44 24 04 54 83 c4 	movl   $0x8c48354,0x4(%esp)
 8413c1c:	08 
 8413c1d:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8413c23:	89 04 24             	mov    %eax,(%esp)
 8413c26:	e8 5d bb 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413c2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8413c30:	e9 6c 07 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413c35:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 8413c3b:	89 04 24             	mov    %eax,(%esp)
 8413c3e:	e8 ad aa c6 ff       	call   807e6f0 <atoi@plt>
 8413c43:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8413c46:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 8413c4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413c50:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8413c57:	00 
 8413c58:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413c5b:	89 04 24             	mov    %eax,(%esp)
 8413c5e:	e8 8f e6 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8413c63:	83 f0 01             	xor    $0x1,%eax
 8413c66:	84 c0                	test   %al,%al
 8413c68:	74 4d                	je     8413cb7 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xa59>
 8413c6a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413c6d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413c74:	00 
 8413c75:	c7 44 24 08 71 3a 00 	movl   $0x3a71,0x8(%esp)
 8413c7c:	00 
 8413c7d:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413c84:	08 
 8413c85:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8413c8b:	89 04 24             	mov    %eax,(%esp)
 8413c8e:	e8 85 ba 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413c93:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413c97:	c7 44 24 04 78 83 c4 	movl   $0x8c48378,0x4(%esp)
 8413c9e:	08 
 8413c9f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8413ca5:	89 04 24             	mov    %eax,(%esp)
 8413ca8:	e8 db ba 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413cad:	b8 00 00 00 00       	mov    $0x0,%eax
 8413cb2:	e9 ea 06 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413cb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413cba:	05 84 21 00 00       	add    $0x2184,%eax
 8413cbf:	c7 44 24 0c 80 00 00 	movl   $0x80,0xc(%esp)
 8413cc6:	00 
 8413cc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413ccb:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8413cd2:	00 
 8413cd3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413cd6:	89 04 24             	mov    %eax,(%esp)
 8413cd9:	e8 0c 91 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8413cde:	83 f0 01             	xor    $0x1,%eax
 8413ce1:	84 c0                	test   %al,%al
 8413ce3:	74 47                	je     8413d2c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xace>
 8413ce5:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413ce8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413cef:	00 
 8413cf0:	c7 44 24 08 93 3a 00 	movl   $0x3a93,0x8(%esp)
 8413cf7:	00 
 8413cf8:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413cff:	08 
 8413d00:	8d 45 88             	lea    -0x78(%ebp),%eax
 8413d03:	89 04 24             	mov    %eax,(%esp)
 8413d06:	e8 0d ba 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413d0b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413d0f:	c7 44 24 04 a8 83 c4 	movl   $0x8c483a8,0x4(%esp)
 8413d16:	08 
 8413d17:	8d 45 88             	lea    -0x78(%ebp),%eax
 8413d1a:	89 04 24             	mov    %eax,(%esp)
 8413d1d:	e8 66 ba 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413d22:	b8 00 00 00 00       	mov    $0x0,%eax
 8413d27:	e9 75 06 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413d2c:	8d 95 53 fd ff ff    	lea    -0x2ad(%ebp),%edx
 8413d32:	bb 81 00 00 00       	mov    $0x81,%ebx
 8413d37:	b8 00 00 00 00       	mov    $0x0,%eax
 8413d3c:	89 d1                	mov    %edx,%ecx
 8413d3e:	83 e1 01             	and    $0x1,%ecx
 8413d41:	85 c9                	test   %ecx,%ecx
 8413d43:	74 08                	je     8413d4d <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xaef>
 8413d45:	88 02                	mov    %al,(%edx)
 8413d47:	83 c2 01             	add    $0x1,%edx
 8413d4a:	83 eb 01             	sub    $0x1,%ebx
 8413d4d:	89 d1                	mov    %edx,%ecx
 8413d4f:	83 e1 02             	and    $0x2,%ecx
 8413d52:	85 c9                	test   %ecx,%ecx
 8413d54:	74 09                	je     8413d5f <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xb01>
 8413d56:	66 89 02             	mov    %ax,(%edx)
 8413d59:	83 c2 02             	add    $0x2,%edx
 8413d5c:	83 eb 02             	sub    $0x2,%ebx
 8413d5f:	89 d9                	mov    %ebx,%ecx
 8413d61:	c1 e9 02             	shr    $0x2,%ecx
 8413d64:	89 d7                	mov    %edx,%edi
 8413d66:	f3 ab                	rep stos %eax,%es:(%edi)
 8413d68:	89 fa                	mov    %edi,%edx
 8413d6a:	89 d9                	mov    %ebx,%ecx
 8413d6c:	83 e1 02             	and    $0x2,%ecx
 8413d6f:	85 c9                	test   %ecx,%ecx
 8413d71:	74 06                	je     8413d79 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xb1b>
 8413d73:	66 89 02             	mov    %ax,(%edx)
 8413d76:	83 c2 02             	add    $0x2,%edx
 8413d79:	89 d9                	mov    %ebx,%ecx
 8413d7b:	83 e1 01             	and    $0x1,%ecx
 8413d7e:	85 c9                	test   %ecx,%ecx
 8413d80:	74 05                	je     8413d87 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xb29>
 8413d82:	88 02                	mov    %al,(%edx)
 8413d84:	83 c2 01             	add    $0x1,%edx
 8413d87:	8d 95 d2 fc ff ff    	lea    -0x32e(%ebp),%edx
 8413d8d:	bb 81 00 00 00       	mov    $0x81,%ebx
 8413d92:	b8 00 00 00 00       	mov    $0x0,%eax
 8413d97:	89 d1                	mov    %edx,%ecx
 8413d99:	83 e1 02             	and    $0x2,%ecx
 8413d9c:	85 c9                	test   %ecx,%ecx
 8413d9e:	74 09                	je     8413da9 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xb4b>
 8413da0:	66 89 02             	mov    %ax,(%edx)
 8413da3:	83 c2 02             	add    $0x2,%edx
 8413da6:	83 eb 02             	sub    $0x2,%ebx
 8413da9:	89 d9                	mov    %ebx,%ecx
 8413dab:	c1 e9 02             	shr    $0x2,%ecx
 8413dae:	89 d7                	mov    %edx,%edi
 8413db0:	f3 ab                	rep stos %eax,%es:(%edi)
 8413db2:	89 fa                	mov    %edi,%edx
 8413db4:	89 d9                	mov    %ebx,%ecx
 8413db6:	83 e1 02             	and    $0x2,%ecx
 8413db9:	85 c9                	test   %ecx,%ecx
 8413dbb:	74 06                	je     8413dc3 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xb65>
 8413dbd:	66 89 02             	mov    %ax,(%edx)
 8413dc0:	83 c2 02             	add    $0x2,%edx
 8413dc3:	89 d9                	mov    %ebx,%ecx
 8413dc5:	83 e1 01             	and    $0x1,%ecx
 8413dc8:	85 c9                	test   %ecx,%ecx
 8413dca:	74 05                	je     8413dd1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xb73>
 8413dcc:	88 02                	mov    %al,(%edx)
 8413dce:	83 c2 01             	add    $0x1,%edx
 8413dd1:	c7 44 24 0c 81 00 00 	movl   $0x81,0xc(%esp)
 8413dd8:	00 
 8413dd9:	8d 85 53 fd ff ff    	lea    -0x2ad(%ebp),%eax
 8413ddf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413de3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8413dea:	00 
 8413deb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413dee:	89 04 24             	mov    %eax,(%esp)
 8413df1:	e8 f4 8f cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8413df6:	83 f0 01             	xor    $0x1,%eax
 8413df9:	84 c0                	test   %al,%al
 8413dfb:	74 47                	je     8413e44 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xbe6>
 8413dfd:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8413e00:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413e07:	00 
 8413e08:	c7 44 24 08 a6 3a 00 	movl   $0x3aa6,0x8(%esp)
 8413e0f:	00 
 8413e10:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413e17:	08 
 8413e18:	8d 45 98             	lea    -0x68(%ebp),%eax
 8413e1b:	89 04 24             	mov    %eax,(%esp)
 8413e1e:	e8 f5 b8 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413e23:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413e27:	c7 44 24 04 d8 83 c4 	movl   $0x8c483d8,0x4(%esp)
 8413e2e:	08 
 8413e2f:	8d 45 98             	lea    -0x68(%ebp),%eax
 8413e32:	89 04 24             	mov    %eax,(%esp)
 8413e35:	e8 4e b9 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413e3a:	b8 00 00 00 00       	mov    $0x0,%eax
 8413e3f:	e9 5d 05 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413e44:	8d 85 53 fd ff ff    	lea    -0x2ad(%ebp),%eax
 8413e4a:	0f b6 00             	movzbl (%eax),%eax
 8413e4d:	84 c0                	test   %al,%al
 8413e4f:	74 3d                	je     8413e8e <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xc30>
 8413e51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413e54:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413e5a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8413e5e:	8d 85 d2 fc ff ff    	lea    -0x32e(%ebp),%eax
 8413e64:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413e68:	8d 85 53 fd ff ff    	lea    -0x2ad(%ebp),%eax
 8413e6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8413e72:	8b 45 08             	mov    0x8(%ebp),%eax
 8413e75:	89 04 24             	mov    %eax,(%esp)
 8413e78:	e8 91 f1 ff ff       	call   841300e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j>
 8413e7d:	83 f0 01             	xor    $0x1,%eax
 8413e80:	84 c0                	test   %al,%al
 8413e82:	74 0a                	je     8413e8e <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xc30>
 8413e84:	b8 00 00 00 00       	mov    $0x0,%eax
 8413e89:	e9 13 05 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413e8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413e91:	8d 90 04 22 00 00    	lea    0x2204(%eax),%edx
 8413e97:	8d 85 d2 fc ff ff    	lea    -0x32e(%ebp),%eax
 8413e9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413ea1:	c7 44 24 04 7f 00 00 	movl   $0x7f,0x4(%esp)
 8413ea8:	00 
 8413ea9:	89 14 24             	mov    %edx,(%esp)
 8413eac:	e8 6b 89 17 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8413eb1:	c7 85 d0 fe ff ff 00 	movl   $0x0,-0x130(%ebp)
 8413eb8:	00 00 00 
 8413ebb:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8413ec1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413ec5:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8413ecc:	00 
 8413ecd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413ed0:	89 04 24             	mov    %eax,(%esp)
 8413ed3:	e8 1a e4 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8413ed8:	83 f0 01             	xor    $0x1,%eax
 8413edb:	84 c0                	test   %al,%al
 8413edd:	74 5f                	je     8413f3e <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xce0>
 8413edf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413ee2:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413ee8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8413eef:	00 
 8413ef0:	89 04 24             	mov    %eax,(%esp)
 8413ef3:	e8 53 51 cf ff       	call   810904b <_Z14NumberToStringji>
 8413ef8:	89 c3                	mov    %eax,%ebx
 8413efa:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413f01:	00 
 8413f02:	c7 44 24 08 c0 3a 00 	movl   $0x3ac0,0x8(%esp)
 8413f09:	00 
 8413f0a:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413f11:	08 
 8413f12:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8413f15:	89 04 24             	mov    %eax,(%esp)
 8413f18:	e8 fb b7 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413f1d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413f21:	c7 44 24 04 08 84 c4 	movl   $0x8c48408,0x4(%esp)
 8413f28:	08 
 8413f29:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8413f2c:	89 04 24             	mov    %eax,(%esp)
 8413f2f:	e8 54 b8 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413f34:	b8 00 00 00 00       	mov    $0x0,%eax
 8413f39:	e9 63 04 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8413f3e:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 8413f44:	85 c0                	test   %eax,%eax
 8413f46:	0f 95 c2             	setne  %dl
 8413f49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413f4c:	88 90 dd 38 00 00    	mov    %dl,0x38dd(%eax)
 8413f52:	c7 85 cc fe ff ff 00 	movl   $0x0,-0x134(%ebp)
 8413f59:	00 00 00 
 8413f5c:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8413f62:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413f66:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8413f6d:	00 
 8413f6e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8413f71:	89 04 24             	mov    %eax,(%esp)
 8413f74:	e8 79 e3 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8413f79:	83 f0 01             	xor    $0x1,%eax
 8413f7c:	84 c0                	test   %al,%al
 8413f7e:	74 55                	je     8413fd5 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xd77>
 8413f80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413f83:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8413f89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8413f90:	00 
 8413f91:	89 04 24             	mov    %eax,(%esp)
 8413f94:	e8 b2 50 cf ff       	call   810904b <_Z14NumberToStringji>
 8413f99:	89 c3                	mov    %eax,%ebx
 8413f9b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413fa2:	00 
 8413fa3:	c7 44 24 08 e6 3a 00 	movl   $0x3ae6,0x8(%esp)
 8413faa:	00 
 8413fab:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8413fb2:	08 
 8413fb3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8413fb6:	89 04 24             	mov    %eax,(%esp)
 8413fb9:	e8 5a b7 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8413fbe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413fc2:	c7 44 24 04 38 84 c4 	movl   $0x8c48438,0x4(%esp)
 8413fc9:	08 
 8413fca:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8413fcd:	89 04 24             	mov    %eax,(%esp)
 8413fd0:	e8 b3 b7 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413fd5:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 8413fdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413fde:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 8413fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413fe7:	8d 90 84 22 00 00    	lea    0x2284(%eax),%edx
 8413fed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8413ff0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8413ff4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8413ff7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8413ffb:	c7 44 24 08 67 84 c4 	movl   $0x8c48467,0x8(%esp)
 8414002:	08 
 8414003:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 841400a:	00 
 841400b:	89 14 24             	mov    %edx,(%esp)
 841400e:	e8 09 88 17 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8414013:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8414016:	89 85 34 fc ff ff    	mov    %eax,-0x3cc(%ebp)
 841401c:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 8414021:	8b 85 34 fc ff ff    	mov    -0x3cc(%ebp),%eax
 8414027:	f7 e2                	mul    %edx
 8414029:	89 d0                	mov    %edx,%eax
 841402b:	c1 e8 0d             	shr    $0xd,%eax
 841402e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8414031:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8414034:	89 95 34 fc ff ff    	mov    %edx,-0x3cc(%ebp)
 841403a:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 841403f:	8b 85 34 fc ff ff    	mov    -0x3cc(%ebp),%eax
 8414045:	f7 e2                	mul    %edx
 8414047:	89 d0                	mov    %edx,%eax
 8414049:	c1 e8 12             	shr    $0x12,%eax
 841404c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841404f:	83 7d dc 02          	cmpl   $0x2,-0x24(%ebp)
 8414053:	76 14                	jbe    8414069 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xe0b>
 8414055:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8414058:	8d 90 d0 07 00 00    	lea    0x7d0(%eax),%edx
 841405e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414061:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 8414067:	eb 12                	jmp    841407b <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0xe1d>
 8414069:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841406c:	8d 90 6c 07 00 00    	lea    0x76c(%eax),%edx
 8414072:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414075:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 841407b:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 8414081:	89 95 34 fc ff ff    	mov    %edx,-0x3cc(%ebp)
 8414087:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 841408c:	8b 85 34 fc ff ff    	mov    -0x3cc(%ebp),%eax
 8414092:	f7 e2                	mul    %edx
 8414094:	c1 ea 05             	shr    $0x5,%edx
 8414097:	8b 45 0c             	mov    0xc(%ebp),%eax
 841409a:	89 90 cc 00 00 00    	mov    %edx,0xcc(%eax)
 84140a0:	c7 85 3c fe ff ff ff 	movl   $0xffffffff,-0x1c4(%ebp)
 84140a7:	ff ff ff 
 84140aa:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 84140b0:	89 95 34 fc ff ff    	mov    %edx,-0x3cc(%ebp)
 84140b6:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 84140bb:	8b 85 34 fc ff ff    	mov    -0x3cc(%ebp),%eax
 84140c1:	f7 e2                	mul    %edx
 84140c3:	89 d0                	mov    %edx,%eax
 84140c5:	c1 e8 12             	shr    $0x12,%eax
 84140c8:	2d 6c 07 00 00       	sub    $0x76c,%eax
 84140cd:	89 85 30 fe ff ff    	mov    %eax,-0x1d0(%ebp)
 84140d3:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 84140d9:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 84140de:	89 c8                	mov    %ecx,%eax
 84140e0:	f7 e2                	mul    %edx
 84140e2:	89 d0                	mov    %edx,%eax
 84140e4:	c1 e8 12             	shr    $0x12,%eax
 84140e7:	69 c0 40 42 0f 00    	imul   $0xf4240,%eax,%eax
 84140ed:	89 ca                	mov    %ecx,%edx
 84140ef:	29 c2                	sub    %eax,%edx
 84140f1:	89 d0                	mov    %edx,%eax
 84140f3:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 84140f9:	8b bd d4 fe ff ff    	mov    -0x12c(%ebp),%edi
 84140ff:	89 bd 34 fc ff ff    	mov    %edi,-0x3cc(%ebp)
 8414105:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 841410a:	8b 85 34 fc ff ff    	mov    -0x3cc(%ebp),%eax
 8414110:	f7 e2                	mul    %edx
 8414112:	89 d0                	mov    %edx,%eax
 8414114:	c1 e8 0d             	shr    $0xd,%eax
 8414117:	83 e8 01             	sub    $0x1,%eax
 841411a:	89 85 2c fe ff ff    	mov    %eax,-0x1d4(%ebp)
 8414120:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 8414126:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 841412b:	89 c8                	mov    %ecx,%eax
 841412d:	f7 e2                	mul    %edx
 841412f:	89 d0                	mov    %edx,%eax
 8414131:	c1 e8 0d             	shr    $0xd,%eax
 8414134:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 841413a:	89 ca                	mov    %ecx,%edx
 841413c:	29 c2                	sub    %eax,%edx
 841413e:	89 d0                	mov    %edx,%eax
 8414140:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 8414146:	8b bd d4 fe ff ff    	mov    -0x12c(%ebp),%edi
 841414c:	89 bd 34 fc ff ff    	mov    %edi,-0x3cc(%ebp)
 8414152:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8414157:	8b 85 34 fc ff ff    	mov    -0x3cc(%ebp),%eax
 841415d:	f7 e2                	mul    %edx
 841415f:	89 d0                	mov    %edx,%eax
 8414161:	c1 e8 05             	shr    $0x5,%eax
 8414164:	89 85 28 fe ff ff    	mov    %eax,-0x1d8(%ebp)
 841416a:	8b 8d d4 fe ff ff    	mov    -0x12c(%ebp),%ecx
 8414170:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8414175:	89 c8                	mov    %ecx,%eax
 8414177:	f7 e2                	mul    %edx
 8414179:	89 d0                	mov    %edx,%eax
 841417b:	c1 e8 05             	shr    $0x5,%eax
 841417e:	6b c0 64             	imul   $0x64,%eax,%eax
 8414181:	89 ca                	mov    %ecx,%edx
 8414183:	29 c2                	sub    %eax,%edx
 8414185:	89 d0                	mov    %edx,%eax
 8414187:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 841418d:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 8414193:	89 85 24 fe ff ff    	mov    %eax,-0x1dc(%ebp)
 8414199:	c7 85 20 fe ff ff 00 	movl   $0x0,-0x1e0(%ebp)
 84141a0:	00 00 00 
 84141a3:	c7 85 1c fe ff ff 00 	movl   $0x0,-0x1e4(%ebp)
 84141aa:	00 00 00 
 84141ad:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 84141b3:	89 04 24             	mov    %eax,(%esp)
 84141b6:	e8 65 a6 c6 ff       	call   807e820 <mktime@plt>
 84141bb:	8b 55 0c             	mov    0xc(%ebp),%edx
 84141be:	89 82 d4 00 00 00    	mov    %eax,0xd4(%edx)
 84141c4:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84141cb:	e8 ce 7a cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84141d0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84141d3:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
 84141d9:	89 c1                	mov    %eax,%ecx
 84141db:	8b 95 14 fe ff ff    	mov    -0x1ec(%ebp),%edx
 84141e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84141e4:	8b 80 30 3a 00 00    	mov    0x3a30(%eax),%eax
 84141ea:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84141ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 84141f2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84141f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84141f9:	89 04 24             	mov    %eax,(%esp)
 84141fc:	e8 7f ee d5 ff       	call   8173080 <_ZN6Taiwan20GarenaCheckTimeStampEjjjj>
 8414201:	83 f0 01             	xor    $0x1,%eax
 8414204:	84 c0                	test   %al,%al
 8414206:	0f 84 07 01 00 00    	je     8414313 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x10b5>
 841420c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841420f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8414213:	8b 45 08             	mov    0x8(%ebp),%eax
 8414216:	89 04 24             	mov    %eax,(%esp)
 8414219:	e8 8e 01 00 00       	call   84143ac <_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA>
 841421e:	84 c0                	test   %al,%al
 8414220:	74 76                	je     8414298 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x103a>
 8414222:	8b bd d4 fd ff ff    	mov    -0x22c(%ebp),%edi
 8414228:	8b b5 14 fe ff ff    	mov    -0x1ec(%ebp),%esi
 841422e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414231:	8b 98 30 3a 00 00    	mov    0x3a30(%eax),%ebx
 8414237:	8b 45 0c             	mov    0xc(%ebp),%eax
 841423a:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8414240:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414247:	00 
 8414248:	89 04 24             	mov    %eax,(%esp)
 841424b:	e8 fb 4d cf ff       	call   810904b <_Z14NumberToStringji>
 8414250:	89 7c 24 24          	mov    %edi,0x24(%esp)
 8414254:	89 74 24 20          	mov    %esi,0x20(%esp)
 8414258:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841425b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 841425f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8414263:	89 44 24 14          	mov    %eax,0x14(%esp)
 8414267:	c7 44 24 10 6c 84 c4 	movl   $0x8c4846c,0x10(%esp)
 841426e:	08 
 841426f:	c7 44 24 0c 0f 3b 00 	movl   $0x3b0f,0xc(%esp)
 8414276:	00 
 8414277:	c7 44 24 08 20 cf c5 	movl   $0x8c5cf20,0x8(%esp)
 841427e:	08 
 841427f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8414286:	08 
 8414287:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 841428e:	e8 77 f9 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8414293:	e9 04 01 00 00       	jmp    841439c <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x113e>
 8414298:	8b bd d4 fd ff ff    	mov    -0x22c(%ebp),%edi
 841429e:	8b b5 14 fe ff ff    	mov    -0x1ec(%ebp),%esi
 84142a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84142a7:	8b 98 30 3a 00 00    	mov    0x3a30(%eax),%ebx
 84142ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84142b0:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84142b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84142bd:	00 
 84142be:	89 04 24             	mov    %eax,(%esp)
 84142c1:	e8 85 4d cf ff       	call   810904b <_Z14NumberToStringji>
 84142c6:	89 7c 24 24          	mov    %edi,0x24(%esp)
 84142ca:	89 74 24 20          	mov    %esi,0x20(%esp)
 84142ce:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84142d1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84142d5:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84142d9:	89 44 24 14          	mov    %eax,0x14(%esp)
 84142dd:	c7 44 24 10 f0 84 c4 	movl   $0x8c484f0,0x10(%esp)
 84142e4:	08 
 84142e5:	c7 44 24 0c 14 3b 00 	movl   $0x3b14,0xc(%esp)
 84142ec:	00 
 84142ed:	c7 44 24 08 20 cf c5 	movl   $0x8c5cf20,0x8(%esp)
 84142f4:	08 
 84142f5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84142fc:	08 
 84142fd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8414304:	e8 01 f9 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8414309:	b8 00 00 00 00       	mov    $0x0,%eax
 841430e:	e9 8e 00 00 00       	jmp    84143a1 <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA+0x1143>
 8414313:	8b bd d4 fd ff ff    	mov    -0x22c(%ebp),%edi
 8414319:	89 bd 44 fc ff ff    	mov    %edi,-0x3bc(%ebp)
 841431f:	8b bd 14 fe ff ff    	mov    -0x1ec(%ebp),%edi
 8414325:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414328:	8b b0 30 3a 00 00    	mov    0x3a30(%eax),%esi
 841432e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414331:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8414337:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841433e:	00 
 841433f:	89 04 24             	mov    %eax,(%esp)
 8414342:	e8 04 4d cf ff       	call   810904b <_Z14NumberToStringji>
 8414347:	89 c3                	mov    %eax,%ebx
 8414349:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8414350:	00 
 8414351:	c7 44 24 08 1b 3b 00 	movl   $0x3b1b,0x8(%esp)
 8414358:	00 
 8414359:	c7 44 24 04 20 cf c5 	movl   $0x8c5cf20,0x4(%esp)
 8414360:	08 
 8414361:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8414364:	89 04 24             	mov    %eax,(%esp)
 8414367:	e8 ac b3 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841436c:	8b 85 44 fc ff ff    	mov    -0x3bc(%ebp),%eax
 8414372:	89 44 24 18          	mov    %eax,0x18(%esp)
 8414376:	89 7c 24 14          	mov    %edi,0x14(%esp)
 841437a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841437d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8414381:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8414385:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8414389:	c7 44 24 04 64 85 c4 	movl   $0x8c48564,0x4(%esp)
 8414390:	08 
 8414391:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8414394:	89 04 24             	mov    %eax,(%esp)
 8414397:	e8 ec b3 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841439c:	b8 01 00 00 00       	mov    $0x1,%eax
 84143a1:	81 c4 fc 03 00 00    	add    $0x3fc,%esp
 84143a7:	5b                   	pop    %ebx
 84143a8:	5e                   	pop    %esi
 84143a9:	5f                   	pop    %edi
 84143aa:	5d                   	pop    %ebp
 84143ab:	c3                   	ret

```

```c
// DB_Login::GetAccountInfo @ 0x841325e

/* WARNING: Removing unreachable block (ram,0x084132af) */
/* DB_Login::GetAccountInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetAccountInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *this_00;
  long lVar5;
  time_t tVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  longlong lVar13;
  char acStackY_131a [3854];
  undefined1 local_3b6 [132];
  char local_332 [129];
  char local_2b1;
  char local_2b0 [128];
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  SIG_LOGIN_DATA local_220;
  undefined4 local_21c;
  char acStack_218 [20];
  SIG_LOGIN_DATA local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  SIG_LOGIN_DATA local_1f4;
  SIG_LOGIN_DATA local_1f3;
  uint local_1f0;
  tm local_1e8;
  char local_1bc [33];
  char local_19b;
  char local_19a [32];
  char local_17a [33];
  char local_159;
  char local_158 [32];
  uint local_138;
  uint local_134;
  uint local_130;
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  uint local_2c;
  uint local_28;
  MySQL *local_24;
  uint local_20;
  
  bVar12 = 0;
  puVar8 = (undefined4 *)local_3b6;
  uVar10 = 0x84;
  bVar11 = ((uint)puVar8 & 2) != 0;
  if (bVar11) {
    local_3b6._0_2_ = 0;
    puVar8 = (undefined4 *)(local_3b6 + 2);
    uVar10 = 0x82;
  }
  for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (bVar11) {
    *(undefined2 *)puVar8 = 0;
  }
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_24,
                   "seLect m_id, passwd,first_ssn, second_ssn,DATE_FORMAT(from_unixtime(reg_date),\'%%Y%%m%%d%%H\'),user_name,email,hangame_flag,reg_date from  member_info  where  user_id=\'%s\' and hangame_flag=%d"
                   ,param_1,(uint)(byte)param_1[0xa0]);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_24);
    if ((iVar3 == 0) && (cVar1 = CreateAccount(this,param_1,local_24), cVar1 != '\x01')) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      cMyTrace::cMyTrace(local_11c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3986,0);
      cMyTrace::operator()(local_11c,"[Taiwan, Auth] Fail create account. id=%s",param_1);
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_uint(local_24,0,(uint *)(param_1 + 0xc0));
        if (cVar1 == '\x01') {
          iVar3 = MySQL::get_n_rows(local_24);
          if (iVar3 == 1) {
            cVar1 = MySQL::get_str(local_24,1,local_3b6,0x84);
            if (cVar1 == '\x01') {
              WongWork::CSimpleSSO::stOutputData_t::stOutputData_t((stOutputData_t *)&local_230);
              cVar1 = WongWork::CSimpleSSO::checkValidPassword
                                (GlobalData::s_psimpleSSO,*(uint *)(param_1 + 0xc0),local_3b6,
                                 (char *)(param_1 + 0x18),(stOutputData_t *)&local_230);
              if (cVar1 == '\x01') {
                *(uint *)(param_1 + 0x3958) = local_230;
                *(undefined4 *)(param_1 + 0x3950) = local_22c;
                *(undefined4 *)(param_1 + 0x3954) = local_228;
                *(undefined4 *)(param_1 + 0x3960) = local_224;
                param_1[0x3964] = local_220;
                *(undefined4 *)(param_1 + 0x3968) = local_21c;
                *(undefined4 *)(param_1 + 0x396c) = local_1fc;
                *(undefined4 *)(param_1 + 0x3970) = local_1f8;
                memset(param_1 + 0x3974,0,0x28);
                this_00 = (GameWorld *)G_GameWorld();
                cVar1 = GameWorld::IsSchoolPvPChannel(this_00);
                if ((cVar1 == '\0') || (*(int *)(param_1 + 0x396c) == 0)) {
                  bVar11 = false;
                }
                else {
                  bVar11 = true;
                }
                if (bVar11) {
                  GetSchoolName(this,*(int *)(param_1 + 0x396c),(char *)(param_1 + 0x3974));
                  GetBadgeCount(this,param_1);
                }
                param_1[0x39a2] = local_1f4;
                param_1[0x39dc] = local_204;
                strncpy((char *)(param_1 + 0x3a3a),acStack_218,0x10);
                *(undefined4 *)(param_1 + 0x395c) = local_200;
                lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                uVar10 = local_230;
                iVar3 = G_CEnvironment();
                cVar1 = CheckDailyScheduleTime(*(int *)(iVar3 + 0x37c),uVar10,lVar5);
                if (cVar1 != '\0') {
                  *(undefined4 *)(param_1 + 0x395c) = 0;
                }
                param_1[0x3f10] = local_1f3;
                pcVar9 = &local_159;
                uVar10 = 0x21;
                bVar11 = ((uint)pcVar9 & 1) != 0;
                if (bVar11) {
                  local_159 = '\0';
                  pcVar9 = local_158;
                  uVar10 = 0x20;
                }
                if (((uint)pcVar9 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                  uVar10 = uVar10 - 2;
                }
                for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                if ((uVar10 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                }
                if (!bVar11) {
                  *pcVar9 = '\0';
                }
                pcVar9 = local_17a;
                uVar10 = 0x21;
                bVar11 = ((uint)pcVar9 & 2) != 0;
                if (bVar11) {
                  local_17a[0] = '\0';
                  local_17a[1] = '\0';
                  pcVar9 = local_17a + 2;
                  uVar10 = 0x1f;
                }
                for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                if (bVar11) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                }
                *pcVar9 = '\0';
                pcVar9 = &local_19b;
                uVar10 = 0x21;
                bVar11 = ((uint)pcVar9 & 1) != 0;
                if (bVar11) {
                  local_19b = '\0';
                  pcVar9 = local_19a;
                  uVar10 = 0x20;
                }
                if (((uint)pcVar9 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                  uVar10 = uVar10 - 2;
                }
                for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                if ((uVar10 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                }
                if (!bVar11) {
                  *pcVar9 = '\0';
                }
                pcVar9 = local_1bc;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                *pcVar9 = '\0';
                cVar1 = MySQL::get_str(local_24,2,&local_159,0x21);
                if (cVar1 == '\x01') {
                  local_2c = 0;
                  if (local_159 != '\0') {
                    cVar1 = _DecryptUserInfo(this,&local_159,local_17a,*(uint *)(param_1 + 0xc0));
                    if (cVar1 != '\x01') {
                      uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                      cMyTrace::cMyTrace(local_bc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                         0x3a48,5);
                      cMyTrace::operator()(local_bc,"_DecryptUserInfo(1) ERROR m_id=%s",uVar2);
                      return 0;
                    }
                    local_2c = atoi(local_17a);
                  }
                  cVar1 = MySQL::get_str(local_24,3,&local_19b,0x21);
                  if (cVar1 == '\x01') {
                    local_28 = 0;
                    if (local_19b != '\0') {
                      cVar1 = _DecryptUserInfo(this,&local_19b,local_1bc,*(uint *)(param_1 + 0xc0));
                      if (cVar1 != '\x01') {
                        uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                        cMyTrace::cMyTrace(local_9c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)"
                                           ,0x3a5a,5);
                        cMyTrace::operator()(local_9c,"_DecryptUserInfo(2) ERROR m_id=%s",uVar2);
                        return 0;
                      }
                      local_28 = atoi(local_1bc);
                    }
                    cVar1 = MySQL::get_uint(local_24,4,&local_130);
                    if (cVar1 == '\x01') {
                      cVar1 = MySQL::get_str(local_24,5,(char *)(param_1 + 0x2184),0x80);
                      if (cVar1 == '\x01') {
                        pcVar9 = &local_2b1;
                        uVar10 = 0x81;
                        bVar11 = ((uint)pcVar9 & 1) != 0;
                        if (bVar11) {
                          local_2b1 = '\0';
                          pcVar9 = local_2b0;
                          uVar10 = 0x80;
                        }
                        if (((uint)pcVar9 & 2) != 0) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9 = pcVar9 + 2;
                          uVar10 = uVar10 - 2;
                        }
                        for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9[2] = '\0';
                          pcVar9[3] = '\0';
                          pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                        }
                        if ((uVar10 & 2) != 0) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9 = pcVar9 + 2;
                        }
                        if (!bVar11) {
                          *pcVar9 = '\0';
                        }
                        pcVar9 = local_332;
                        uVar10 = 0x81;
                        bVar11 = ((uint)pcVar9 & 2) != 0;
                        if (bVar11) {
                          local_332[0] = '\0';
                          local_332[1] = '\0';
                          pcVar9 = local_332 + 2;
                          uVar10 = 0x7f;
                        }
                        for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9[2] = '\0';
                          pcVar9[3] = '\0';
                          pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                        }
                        if (bVar11) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9 = pcVar9 + 2;
                        }
                        *pcVar9 = '\0';
                        cVar1 = MySQL::get_str(local_24,6,&local_2b1,0x81);
                        if (cVar1 == '\x01') {
                          if ((local_2b1 == '\0') ||
                             (cVar1 = _DecryptUserInfo(this,&local_2b1,local_332,
                                                       *(uint *)(param_1 + 0xc0)), cVar1 == '\x01'))
                          {
                            OS_API::snprintf((char *)(param_1 + 0x2204),0x7f,local_332);
                            local_134 = 0;
                            cVar1 = MySQL::get_uint(local_24,7,&local_134);
                            if (cVar1 == '\x01') {
                              param_1[0x38dd] = (SIG_LOGIN_DATA)(local_134 != 0);
                              local_138 = 0;
                              cVar1 = MySQL::get_uint(local_24,8,&local_138);
                              if (cVar1 != '\x01') {
                                uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                cMyTrace::cMyTrace(local_4c,
                                                  "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                                  0x3ae6,5);
                                cMyTrace::operator()
                                          (local_4c,"DB_Login::GetAccountInfo, get(9) ERROR m_id=%s"
                                           ,uVar2);
                              }
                              *(uint *)(param_1 + 0xd0) = local_138;
                              OS_API::snprintf((char *)(param_1 + 0x2284),0x10,"%d%d",local_2c,
                                               local_28);
                              local_2c = local_2c / 10000;
                              local_28 = local_28 / 1000000;
                              if (local_28 < 3) {
                                *(uint *)(param_1 + 200) = local_2c + 0x76c;
                              }
                              else {
                                *(uint *)(param_1 + 200) = local_2c + 2000;
                              }
                              *(uint *)(param_1 + 0xcc) = local_130 / 100;
                              local_1e8.tm_isdst = -1;
                              local_1e8.tm_year = local_130 / 1000000 - 0x76c;
                              local_1e8.tm_mon = (local_130 % 1000000) / 10000 - 1;
                              local_1e8.tm_hour = (local_130 % 1000000) % 10000;
                              local_1e8.tm_mday = (uint)local_1e8.tm_hour / 100;
                              local_1e8.tm_hour = (uint)local_1e8.tm_hour % 100;
                              local_1e8.tm_min = 0;
                              local_1e8.tm_sec = 0;
                              local_130 = local_1e8.tm_hour;
                              tVar6 = mktime(&local_1e8);
                              *(time_t *)(param_1 + 0xd4) = tVar6;
                              local_20 = CSystemTime::getCurSec
                                                   ((CSystemTime *)GlobalData::s_systemTime_);
                              cVar1 = Taiwan::GarenaCheckTimeStamp
                                                (*(uint *)(param_1 + 0x3a30),local_20,local_1f0,
                                                 local_230);
                              if (cVar1 == '\x01') {
                                uVar2 = *(undefined4 *)(param_1 + 0x3a30);
                                uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                cMyTrace::cMyTrace(local_3c,
                                                  "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                                  0x3b1b,0);
                                cMyTrace::operator()
                                          (local_3c,
                                           "[Taiwan, Auth] Success Token reuse login. (mid:%s, token_time:%u, current_current:%u, login_time:%u, last_play_time:%u)"
                                           ,uVar4,uVar2,local_20,local_1f0,local_230);
                              }
                              else {
                                cVar1 = GetWhiteAccount(this,param_1);
                                if (cVar1 == '\0') {
                                  uVar2 = *(undefined4 *)(param_1 + 0x3a30);
                                  uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                  LogManager::logFormat
                                            (1,"DBThread.cpp",
                                             "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3b14
                                             ,
                                             "[Taiwan, Auth] Fail Token reuse login. (mid:%s, token_time:%u, current_time:%u, login_time:%u, last_play_time:%u)"
                                             ,uVar4,uVar2,local_20,local_1f0,local_230);
                                  return 0;
                                }
                                uVar2 = *(undefined4 *)(param_1 + 0x3a30);
                                uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                LogManager::logFormat
                                          (1,"DBThread.cpp",
                                           "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3b0f,
                                           "[Taiwan, Auth] White Account Success Token reuse login. (mid:%s, token_time:%u, current_time:%u, login_time:%u, last_play_time:%u)"
                                           ,uVar4,uVar2,local_20,local_1f0,local_230);
                              }
                              uVar2 = 1;
                            }
                            else {
                              uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                              cMyTrace::cMyTrace(local_5c,
                                                 "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                                 0x3ac0,5);
                              cMyTrace::operator()
                                        (local_5c,"DB_Login::GetAccountInfo, get(7) ERROR m_id=%s",
                                         uVar2);
                              uVar2 = 0;
                            }
                          }
                          else {
                            uVar2 = 0;
                          }
                        }
                        else {
                          cMyTrace::cMyTrace(local_6c,
                                             "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3aa6
                                             ,5);
                          cMyTrace::operator()
                                    (local_6c,"DB_Login::GetAccountInfo, get(6) ERROR m_id=%s",
                                     param_1);
                          uVar2 = 0;
                        }
                      }
                      else {
                        cMyTrace::cMyTrace(local_7c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)"
                                           ,0x3a93,5);
                        cMyTrace::operator()
                                  (local_7c,"DB_Login::GetAccountInfo, get(5) ERROR m_id=%s",param_1
                                  );
                        uVar2 = 0;
                      }
                    }
                    else {
                      cMyTrace::cMyTrace(local_8c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                         0x3a71,5);
                      cMyTrace::operator()
                                (local_8c,"DB_Login::GetAccountInfo, get(4) ERROR m_id=%s",param_1);
                      uVar2 = 0;
                    }
                  }
                  else {
                    cMyTrace::cMyTrace(local_ac,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                       0x3a51,5);
                    cMyTrace::operator()
                              (local_ac,"DB_Login::GetAccountInfo, get(3) ERROR m_id=%s",param_1);
                    uVar2 = 0;
                  }
                }
                else {
                  cMyTrace::cMyTrace(local_cc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                     0x3a3f,5);
                  cMyTrace::operator()
                            (local_cc,"DB_Login::GetAccountInfo, get(2) ERROR m_id=%s",param_1);
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                LogManager::logFormat
                          (1,"DBThread.cpp","bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39da,
                           "[Taiwan, Auth] Fail query member_login. (mid:%s)",uVar2);
                uVar2 = 0;
              }
            }
            else {
              cMyTrace::cMyTrace(local_dc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39c8,5)
              ;
              cMyTrace::operator()
                        (local_dc,"DB_Login::GetAccountInfo, get(1) ERROR m_id=%s",param_1);
              uVar2 = 0;
            }
          }
          else {
            uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
            uVar4 = MySQL::get_n_rows(local_24);
            MySQL::set_query(local_24,"upDate member_abnomal set overlab_count=%d where user_id=%s",
                             uVar4,uVar2);
            cVar1 = MySQL::exec(local_24,true);
            if ((cVar1 == '\x01') && (lVar13 = MySQL::getAffectedRowCount(local_24), lVar13 != 0)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              uVar2 = MySQL::get_n_rows(local_24);
              uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
              MySQL::set_query(local_24,
                               "inSert into member_abnomal(user_id, overlab_count) values(%s,%d)",
                               uVar4,uVar2);
              MySQL::exec(local_24,true);
            }
            cMyTrace::cMyTrace(local_ec,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39c2,5);
            cMyTrace::operator()
                      (local_ec,"DB_Login::GetAccountInfo, get_n_rows()!=1 ERROR m_id=%s",param_1);
            uVar2 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_fc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39b5,5);
          cMyTrace::operator()(local_fc,"DB_Login::GetAccountInfo, get(0) ERROR m_id=%s",param_1);
          uVar2 = 0;
        }
      }
      else {
        cMyTrace::cMyTrace(local_10c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39af,5);
        cMyTrace::operator()(local_10c,"DB_Login::GetAccountInfo, fetch() ERROR m_id=%s",param_1);
        uVar2 = 0;
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_12c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x397f,5);
    cMyTrace::operator()(local_12c,"DB_Login::GetAccountInfo, exec() ERROR m_id=%s",param_1);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetBadgeCount

```asm
// === 08414512 DB_Login::GetBadgeCount  [0x08414512-0x8414771] ===
 8414512:	55                   	push   %ebp
 8414513:	89 e5                	mov    %esp,%ebp
 8414515:	53                   	push   %ebx
 8414516:	83 ec 64             	sub    $0x64,%esp
 8414519:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841451e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8414525:	00 
 8414526:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 841452d:	00 
 841452e:	89 04 24             	mov    %eax,(%esp)
 8414531:	e8 08 0d fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8414536:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8414539:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8414540:	eb 17                	jmp    8414559 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x47>
 8414542:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8414545:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414548:	81 c2 c8 1c 00 00    	add    $0x1cc8,%edx
 841454e:	66 c7 44 50 0c 00 00 	movw   $0x0,0xc(%eax,%edx,2)
 8414555:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8414559:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 841455d:	0f 9e c0             	setle  %al
 8414560:	84 c0                	test   %al,%al
 8414562:	75 de                	jne    8414542 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x30>
 8414564:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841456b:	00 
 841456c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414573:	00 
 8414574:	c7 04 24 06 00 00 00 	movl   $0x6,(%esp)
 841457b:	e8 da d9 29 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 8414580:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8414583:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414586:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841458c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414593:	00 
 8414594:	89 04 24             	mov    %eax,(%esp)
 8414597:	e8 af 4a cf ff       	call   810904b <_Z14NumberToStringji>
 841459c:	8b 55 0c             	mov    0xc(%ebp),%edx
 841459f:	8b 92 6c 39 00 00    	mov    0x396c(%edx),%edx
 84145a5:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84145a8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84145ac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84145b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84145b4:	c7 44 24 04 48 86 c4 	movl   $0x8c48648,0x4(%esp)
 84145bb:	08 
 84145bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84145bf:	89 04 24             	mov    %eax,(%esp)
 84145c2:	e8 f9 fb fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84145c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84145ce:	00 
 84145cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84145d2:	89 04 24             	mov    %eax,(%esp)
 84145d5:	e8 4c fd fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84145da:	83 f0 01             	xor    $0x1,%eax
 84145dd:	84 c0                	test   %al,%al
 84145df:	74 0a                	je     84145eb <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0xd9>
 84145e1:	b8 00 00 00 00       	mov    $0x0,%eax
 84145e6:	e9 80 01 00 00       	jmp    841476b <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x259>
 84145eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84145ee:	89 04 24             	mov    %eax,(%esp)
 84145f1:	e8 76 dd cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84145f6:	85 c0                	test   %eax,%eax
 84145f8:	0f 94 c0             	sete   %al
 84145fb:	84 c0                	test   %al,%al
 84145fd:	74 0a                	je     8414609 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0xf7>
 84145ff:	b8 00 00 00 00       	mov    $0x0,%eax
 8414604:	e9 62 01 00 00       	jmp    841476b <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x259>
 8414609:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841460c:	89 04 24             	mov    %eax,(%esp)
 841460f:	e8 a8 fe fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8414614:	83 f0 01             	xor    $0x1,%eax
 8414617:	84 c0                	test   %al,%al
 8414619:	74 0a                	je     8414625 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x113>
 841461b:	b8 00 00 00 00       	mov    $0x0,%eax
 8414620:	e9 46 01 00 00       	jmp    841476b <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x259>
 8414625:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414628:	05 9c 39 00 00       	add    $0x399c,%eax
 841462d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414631:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414638:	00 
 8414639:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841463c:	89 04 24             	mov    %eax,(%esp)
 841463f:	e8 a8 97 ce ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8414644:	83 f0 01             	xor    $0x1,%eax
 8414647:	84 c0                	test   %al,%al
 8414649:	74 47                	je     8414692 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x180>
 841464b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 841464e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8414655:	00 
 8414656:	c7 44 24 08 60 3b 00 	movl   $0x3b60,0x8(%esp)
 841465d:	00 
 841465e:	c7 44 24 04 e0 ce c5 	movl   $0x8c5cee0,0x4(%esp)
 8414665:	08 
 8414666:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8414669:	89 04 24             	mov    %eax,(%esp)
 841466c:	e8 a7 b0 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8414671:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8414675:	c7 44 24 04 e4 86 c4 	movl   $0x8c486e4,0x4(%esp)
 841467c:	08 
 841467d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8414680:	89 04 24             	mov    %eax,(%esp)
 8414683:	e8 00 b1 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8414688:	b8 00 00 00 00       	mov    $0x0,%eax
 841468d:	e9 d9 00 00 00       	jmp    841476b <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x259>
 8414692:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414695:	05 9e 39 00 00       	add    $0x399e,%eax
 841469a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841469e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84146a5:	00 
 84146a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84146a9:	89 04 24             	mov    %eax,(%esp)
 84146ac:	e8 3b 97 ce ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 84146b1:	83 f0 01             	xor    $0x1,%eax
 84146b4:	84 c0                	test   %al,%al
 84146b6:	74 44                	je     84146fc <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x1ea>
 84146b8:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 84146bb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84146c2:	00 
 84146c3:	c7 44 24 08 66 3b 00 	movl   $0x3b66,0x8(%esp)
 84146ca:	00 
 84146cb:	c7 44 24 04 e0 ce c5 	movl   $0x8c5cee0,0x4(%esp)
 84146d2:	08 
 84146d3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84146d6:	89 04 24             	mov    %eax,(%esp)
 84146d9:	e8 3a b0 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84146de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84146e2:	c7 44 24 04 14 87 c4 	movl   $0x8c48714,0x4(%esp)
 84146e9:	08 
 84146ea:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84146ed:	89 04 24             	mov    %eax,(%esp)
 84146f0:	e8 93 b0 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84146f5:	b8 00 00 00 00       	mov    $0x0,%eax
 84146fa:	eb 6f                	jmp    841476b <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x259>
 84146fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84146ff:	05 a0 39 00 00       	add    $0x39a0,%eax
 8414704:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414708:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841470f:	00 
 8414710:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8414713:	89 04 24             	mov    %eax,(%esp)
 8414716:	e8 d1 96 ce ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841471b:	83 f0 01             	xor    $0x1,%eax
 841471e:	84 c0                	test   %al,%al
 8414720:	74 44                	je     8414766 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x254>
 8414722:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8414725:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841472c:	00 
 841472d:	c7 44 24 08 6b 3b 00 	movl   $0x3b6b,0x8(%esp)
 8414734:	00 
 8414735:	c7 44 24 04 e0 ce c5 	movl   $0x8c5cee0,0x4(%esp)
 841473c:	08 
 841473d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8414740:	89 04 24             	mov    %eax,(%esp)
 8414743:	e8 d0 af 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8414748:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841474c:	c7 44 24 04 44 87 c4 	movl   $0x8c48744,0x4(%esp)
 8414753:	08 
 8414754:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8414757:	89 04 24             	mov    %eax,(%esp)
 841475a:	e8 29 b0 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841475f:	b8 00 00 00 00       	mov    $0x0,%eax
 8414764:	eb 05                	jmp    841476b <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA+0x259>
 8414766:	b8 01 00 00 00       	mov    $0x1,%eax
 841476b:	83 c4 64             	add    $0x64,%esp
 841476e:	5b                   	pop    %ebx
 841476f:	5d                   	pop    %ebp
 8414770:	c3                   	ret
 8414771:	90                   	nop

```

```c
// DB_Login::GetBadgeCount @ 0x8414512

/* DB_Login::GetBadgeCount(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetBadgeCount(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined2 *)(param_1 + (local_10 + 0x1cc8) * 2 + 0xc) = 0;
  }
  local_14 = getDailyInitializeTime(6,0,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect daily_green_badge, daily_red_badge, daily_blue_badge from school_member where school_id=%d and m_id = %s and  last_play_time >= from_unixtime(%d)"
                   ,*(undefined4 *)(param_1 + 0x396c),uVar2,local_14);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_short(local_18,0,(short *)(param_1 + 0x399c));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_short(local_18,1,(short *)(param_1 + 0x399e));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_short(local_18,2,(short *)(param_1 + 0x39a0));
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              cMyTrace::cMyTrace(local_28,"bool DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)",0x3b6b,5);
              cMyTrace::operator()(local_28,"DB_Login::GetBadgeCount, get(2) ERROR m_id=%s",param_1)
              ;
              uVar2 = 0;
            }
          }
          else {
            cMyTrace::cMyTrace(local_38,"bool DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)",0x3b66,5);
            cMyTrace::operator()(local_38,"DB_Login::GetBadgeCount, get(1) ERROR m_id=%s",param_1);
            uVar2 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_48,"bool DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)",0x3b60,5);
          cMyTrace::operator()(local_48,"DB_Login::GetBadgeCount, get(0) ERROR m_id=%s",param_1);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetBingoEvent

```asm
// === 08448bee DB_Login::GetBingoEvent  [0x08448bee-0x8448eb7] ===
 8448bee:	55                   	push   %ebp
 8448bef:	89 e5                	mov    %esp,%ebp
 8448bf1:	53                   	push   %ebx
 8448bf2:	83 ec 64             	sub    $0x64,%esp
 8448bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448bf8:	05 38 41 00 00       	add    $0x4138,%eax
 8448bfd:	89 04 24             	mov    %eax,(%esp)
 8448c00:	e8 fb 49 00 00       	call   844d600 <_ZN15SIG_BINGO_EVENT5clearEv>
 8448c05:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8448c0a:	c7 44 24 04 6a 00 00 	movl   $0x6a,0x4(%esp)
 8448c11:	00 
 8448c12:	89 04 24             	mov    %eax,(%esp)
 8448c15:	e8 7e cd cc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8448c1a:	8b 10                	mov    (%eax),%edx
 8448c1c:	83 c2 34             	add    $0x34,%edx
 8448c1f:	8b 12                	mov    (%edx),%edx
 8448c21:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448c28:	00 
 8448c29:	89 04 24             	mov    %eax,(%esp)
 8448c2c:	ff d2                	call   *%edx
 8448c2e:	83 f0 01             	xor    $0x1,%eax
 8448c31:	84 c0                	test   %al,%al
 8448c33:	74 0a                	je     8448c3f <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x51>
 8448c35:	b8 01 00 00 00       	mov    $0x1,%eax
 8448c3a:	e9 72 02 00 00       	jmp    8448eb1 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2c3>
 8448c3f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448c44:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8448c4b:	00 
 8448c4c:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8448c53:	00 
 8448c54:	89 04 24             	mov    %eax,(%esp)
 8448c57:	e8 e2 c5 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8448c5c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8448c5f:	e8 1d 35 c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8448c64:	8b 98 7c 03 00 00    	mov    0x37c(%eax),%ebx
 8448c6a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8448c71:	e8 28 30 c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8448c76:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8448c7a:	89 04 24             	mov    %eax,(%esp)
 8448c7d:	e8 a8 04 cc ff       	call   810912a <_Z23GetCurrentResetBaseTimeli>
 8448c82:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8448c85:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448c88:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8448c8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448c95:	00 
 8448c96:	89 04 24             	mov    %eax,(%esp)
 8448c99:	e8 ad 03 cc ff       	call   810904b <_Z14NumberToStringji>
 8448c9e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8448ca1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8448ca5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448ca9:	c7 44 24 04 84 89 c5 	movl   $0x8c58984,0x4(%esp)
 8448cb0:	08 
 8448cb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8448cb4:	89 04 24             	mov    %eax,(%esp)
 8448cb7:	e8 04 b5 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8448cbc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8448cc3:	00 
 8448cc4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8448cc7:	89 04 24             	mov    %eax,(%esp)
 8448cca:	e8 57 b6 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8448ccf:	83 f0 01             	xor    $0x1,%eax
 8448cd2:	84 c0                	test   %al,%al
 8448cd4:	74 0a                	je     8448ce0 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0xf2>
 8448cd6:	b8 00 00 00 00       	mov    $0x0,%eax
 8448cdb:	e9 d1 01 00 00       	jmp    8448eb1 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2c3>
 8448ce0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8448ce3:	89 04 24             	mov    %eax,(%esp)
 8448ce6:	e8 81 96 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8448ceb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8448cee:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8448cf2:	75 0a                	jne    8448cfe <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x110>
 8448cf4:	b8 01 00 00 00       	mov    $0x1,%eax
 8448cf9:	e9 b3 01 00 00       	jmp    8448eb1 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2c3>
 8448cfe:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8448d02:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8448d05:	89 04 24             	mov    %eax,(%esp)
 8448d08:	e8 af b7 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8448d0d:	88 45 f3             	mov    %al,-0xd(%ebp)
 8448d10:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8448d14:	83 f0 01             	xor    $0x1,%eax
 8448d17:	84 c0                	test   %al,%al
 8448d19:	74 5f                	je     8448d7a <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x18c>
 8448d1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448d1e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8448d24:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448d2b:	00 
 8448d2c:	89 04 24             	mov    %eax,(%esp)
 8448d2f:	e8 17 03 cc ff       	call   810904b <_Z14NumberToStringji>
 8448d34:	89 c3                	mov    %eax,%ebx
 8448d36:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8448d3d:	00 
 8448d3e:	c7 44 24 08 1b b7 00 	movl   $0xb71b,0x8(%esp)
 8448d45:	00 
 8448d46:	c7 44 24 04 60 af c5 	movl   $0x8c5af60,0x4(%esp)
 8448d4d:	08 
 8448d4e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8448d51:	89 04 24             	mov    %eax,(%esp)
 8448d54:	e8 bf 69 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8448d59:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8448d5d:	c7 44 24 04 e0 89 c5 	movl   $0x8c589e0,0x4(%esp)
 8448d64:	08 
 8448d65:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8448d68:	89 04 24             	mov    %eax,(%esp)
 8448d6b:	e8 18 6a 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8448d70:	b8 00 00 00 00       	mov    $0x0,%eax
 8448d75:	e9 37 01 00 00       	jmp    8448eb1 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2c3>
 8448d7a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8448d81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448d84:	8d 90 3c 41 00 00    	lea    0x413c(%eax),%edx
 8448d8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448d8d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8448d91:	89 54 24 08          	mov    %edx,0x8(%esp)
 8448d95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448d99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8448d9c:	89 04 24             	mov    %eax,(%esp)
 8448d9f:	e8 88 db cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8448da4:	88 45 f3             	mov    %al,-0xd(%ebp)
 8448da7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8448dab:	83 f0 01             	xor    $0x1,%eax
 8448dae:	84 c0                	test   %al,%al
 8448db0:	74 66                	je     8448e18 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x22a>
 8448db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448db5:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8448dbb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448dc2:	00 
 8448dc3:	89 04 24             	mov    %eax,(%esp)
 8448dc6:	e8 80 02 cc ff       	call   810904b <_Z14NumberToStringji>
 8448dcb:	89 c3                	mov    %eax,%ebx
 8448dcd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8448dd4:	00 
 8448dd5:	c7 44 24 08 23 b7 00 	movl   $0xb723,0x8(%esp)
 8448ddc:	00 
 8448ddd:	c7 44 24 04 60 af c5 	movl   $0x8c5af60,0x4(%esp)
 8448de4:	08 
 8448de5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8448de8:	89 04 24             	mov    %eax,(%esp)
 8448deb:	e8 28 69 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8448df0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8448df4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448df7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448dfb:	c7 44 24 04 10 8a c5 	movl   $0x8c58a10,0x4(%esp)
 8448e02:	08 
 8448e03:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8448e06:	89 04 24             	mov    %eax,(%esp)
 8448e09:	e8 7a 69 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8448e0e:	b8 00 00 00 00       	mov    $0x0,%eax
 8448e13:	e9 99 00 00 00       	jmp    8448eb1 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2c3>
 8448e18:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448e1b:	8d 90 38 41 00 00    	lea    0x4138(%eax),%edx
 8448e21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448e24:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8448e28:	89 54 24 08          	mov    %edx,0x8(%esp)
 8448e2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448e30:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8448e33:	89 04 24             	mov    %eax,(%esp)
 8448e36:	e8 19 50 cb ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8448e3b:	88 45 f3             	mov    %al,-0xd(%ebp)
 8448e3e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8448e42:	83 f0 01             	xor    $0x1,%eax
 8448e45:	84 c0                	test   %al,%al
 8448e47:	74 63                	je     8448eac <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2be>
 8448e49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448e4c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8448e52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448e59:	00 
 8448e5a:	89 04 24             	mov    %eax,(%esp)
 8448e5d:	e8 e9 01 cc ff       	call   810904b <_Z14NumberToStringji>
 8448e62:	89 c3                	mov    %eax,%ebx
 8448e64:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8448e6b:	00 
 8448e6c:	c7 44 24 08 29 b7 00 	movl   $0xb729,0x8(%esp)
 8448e73:	00 
 8448e74:	c7 44 24 04 60 af c5 	movl   $0x8c5af60,0x4(%esp)
 8448e7b:	08 
 8448e7c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8448e7f:	89 04 24             	mov    %eax,(%esp)
 8448e82:	e8 91 68 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8448e87:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8448e8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8448e8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448e92:	c7 44 24 04 10 8a c5 	movl   $0x8c58a10,0x4(%esp)
 8448e99:	08 
 8448e9a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8448e9d:	89 04 24             	mov    %eax,(%esp)
 8448ea0:	e8 e3 68 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8448ea5:	b8 00 00 00 00       	mov    $0x0,%eax
 8448eaa:	eb 05                	jmp    8448eb1 <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA+0x2c3>
 8448eac:	b8 00 00 00 00       	mov    $0x0,%eax
 8448eb1:	83 c4 64             	add    $0x64,%esp
 8448eb4:	5b                   	pop    %ebx
 8448eb5:	5d                   	pop    %ebp
 8448eb6:	c3                   	ret
 8448eb7:	90                   	nop

```

```c
// DB_Login::GetBingoEvent @ 0x8448bee

/* DB_Login::GetBingoEvent(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetBingoEvent(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  MySQL *local_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  SIG_BINGO_EVENT::clear((SIG_BINGO_EVENT *)(param_1 + 0x4138));
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    iVar4 = G_CEnvironment();
    iVar4 = *(int *)(iVar4 + 0x37c);
    lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c = GetCurrentResetBaseTime(lVar5,iVar4);
    uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(local_20,
                     "seLect board,reward from event_1208_bingo where m_id = %s and occ_date > from_unixtime(%u)"
                     ,uVar3,local_1c);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      local_18 = MySQL::get_n_rows(local_20);
      if (local_18 == 0) {
        uVar3 = 1;
      }
      else {
        local_11 = 0;
        local_11 = MySQL::fetch(local_20);
        if (local_11 == '\x01') {
          local_10 = 1;
          local_11 = MySQL::get_int(local_20,0,(int *)(param_1 + 0x413c));
          iVar4 = local_10;
          if (local_11 == '\x01') {
            local_10 = local_10 + 1;
            local_11 = MySQL::get_byte(local_20,iVar4,(char *)(param_1 + 0x4138));
            if (local_11 == '\x01') {
              uVar3 = 0;
            }
            else {
              uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
              cMyTrace::cMyTrace(local_30,"bool DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)",0xb729,5);
              cMyTrace::operator()
                        (local_30,"DB_Login::GetBingoEvent, get(%d) ERROR m_id=%s",local_10,uVar3);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
            cMyTrace::cMyTrace(local_40,"bool DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)",0xb723,5);
            cMyTrace::operator()
                      (local_40,"DB_Login::GetBingoEvent, get(%d) ERROR m_id=%s",local_10,uVar3);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
          cMyTrace::cMyTrace(local_50,"bool DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)",0xb71b,5);
          cMyTrace::operator()(local_50,"DB_Login::GetBingoEvent, fetch() ERROR m_id=%s",uVar3);
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## GetCheckPickUpRandomOptionItem

```asm
// === 08414e7a DB_Login::GetCheckPickUpRandomOptionItem  [0x08414e7a-0x8414f5b] ===
 8414e7a:	55                   	push   %ebp
 8414e7b:	89 e5                	mov    %esp,%ebp
 8414e7d:	83 ec 28             	sub    $0x28,%esp
 8414e80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414e83:	c6 80 a8 3f 00 00 00 	movb   $0x0,0x3fa8(%eax)
 8414e8a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8414e8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8414e96:	00 
 8414e97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414e9e:	00 
 8414e9f:	89 04 24             	mov    %eax,(%esp)
 8414ea2:	e8 97 03 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8414ea7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8414eaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414ead:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8414eb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414eba:	00 
 8414ebb:	89 04 24             	mov    %eax,(%esp)
 8414ebe:	e8 88 41 cf ff       	call   810904b <_Z14NumberToStringji>
 8414ec3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414ec7:	c7 44 24 04 e0 88 c4 	movl   $0x8c488e0,0x4(%esp)
 8414ece:	08 
 8414ecf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414ed2:	89 04 24             	mov    %eax,(%esp)
 8414ed5:	e8 e6 f2 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8414eda:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414ee1:	00 
 8414ee2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414ee5:	89 04 24             	mov    %eax,(%esp)
 8414ee8:	e8 39 f4 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8414eed:	83 f0 01             	xor    $0x1,%eax
 8414ef0:	84 c0                	test   %al,%al
 8414ef2:	74 07                	je     8414efb <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0x81>
 8414ef4:	b8 00 00 00 00       	mov    $0x0,%eax
 8414ef9:	eb 5f                	jmp    8414f5a <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0xe0>
 8414efb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414efe:	89 04 24             	mov    %eax,(%esp)
 8414f01:	e8 66 d4 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8414f06:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8414f09:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8414f0d:	74 46                	je     8414f55 <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0xdb>
 8414f0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414f12:	89 04 24             	mov    %eax,(%esp)
 8414f15:	e8 a2 f5 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8414f1a:	83 f0 01             	xor    $0x1,%eax
 8414f1d:	84 c0                	test   %al,%al
 8414f1f:	74 07                	je     8414f28 <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0xae>
 8414f21:	b8 00 00 00 00       	mov    $0x0,%eax
 8414f26:	eb 32                	jmp    8414f5a <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0xe0>
 8414f28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414f2b:	05 a8 3f 00 00       	add    $0x3fa8,%eax
 8414f30:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414f34:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414f3b:	00 
 8414f3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414f3f:	89 04 24             	mov    %eax,(%esp)
 8414f42:	e8 73 8f ce ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8414f47:	83 f0 01             	xor    $0x1,%eax
 8414f4a:	84 c0                	test   %al,%al
 8414f4c:	74 07                	je     8414f55 <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0xdb>
 8414f4e:	b8 00 00 00 00       	mov    $0x0,%eax
 8414f53:	eb 05                	jmp    8414f5a <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA+0xe0>
 8414f55:	b8 01 00 00 00       	mov    $0x1,%eax
 8414f5a:	c9                   	leave
 8414f5b:	c3                   	ret

```

```c
// DB_Login::GetCheckPickUpRandomOptionItem @ 0x8414e7a

/* DB_Login::GetCheckPickUpRandomOptionItem(SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::GetCheckPickUpRandomOptionItem(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  param_1[0x3fa8] = (SIG_LOGIN_DATA)0x0;
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect check_count from check_pick_up_random_option_item where m_id = %s",uVar2)
  ;
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  iVar3 = MySQL::get_n_rows(this_00);
  if (iVar3 != 0) {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_ubyte(this_00,0,(uchar *)(param_1 + 0x3fa8));
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## GetDailyCleanPadPoint

```asm
// === 08410c12 DB_Login::GetDailyCleanPadPoint  [0x08410c12-0x8410cf5] ===
 8410c12:	55                   	push   %ebp
 8410c13:	89 e5                	mov    %esp,%ebp
 8410c15:	83 ec 28             	sub    $0x28,%esp
 8410c18:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8410c1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8410c24:	00 
 8410c25:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8410c2c:	00 
 8410c2d:	89 04 24             	mov    %eax,(%esp)
 8410c30:	e8 09 46 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8410c35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8410c38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410c3b:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8410c41:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410c48:	00 
 8410c49:	89 04 24             	mov    %eax,(%esp)
 8410c4c:	e8 fa 83 cf ff       	call   810904b <_Z14NumberToStringji>
 8410c51:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410c55:	c7 44 24 04 c8 75 c4 	movl   $0x8c475c8,0x4(%esp)
 8410c5c:	08 
 8410c5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410c60:	89 04 24             	mov    %eax,(%esp)
 8410c63:	e8 58 35 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410c68:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410c6f:	00 
 8410c70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410c73:	89 04 24             	mov    %eax,(%esp)
 8410c76:	e8 ab 36 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410c7b:	83 f0 01             	xor    $0x1,%eax
 8410c7e:	84 c0                	test   %al,%al
 8410c80:	75 0f                	jne    8410c91 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0x7f>
 8410c82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410c85:	89 04 24             	mov    %eax,(%esp)
 8410c88:	e8 df 16 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410c8d:	85 c0                	test   %eax,%eax
 8410c8f:	75 07                	jne    8410c98 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0x86>
 8410c91:	b8 01 00 00 00       	mov    $0x1,%eax
 8410c96:	eb 05                	jmp    8410c9d <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0x8b>
 8410c98:	b8 00 00 00 00       	mov    $0x0,%eax
 8410c9d:	84 c0                	test   %al,%al
 8410c9f:	74 07                	je     8410ca8 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0x96>
 8410ca1:	b8 00 00 00 00       	mov    $0x0,%eax
 8410ca6:	eb 4b                	jmp    8410cf3 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0xe1>
 8410ca8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410cab:	89 04 24             	mov    %eax,(%esp)
 8410cae:	e8 09 38 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8410cb3:	83 f0 01             	xor    $0x1,%eax
 8410cb6:	84 c0                	test   %al,%al
 8410cb8:	74 07                	je     8410cc1 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0xaf>
 8410cba:	b8 00 00 00 00       	mov    $0x0,%eax
 8410cbf:	eb 32                	jmp    8410cf3 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0xe1>
 8410cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410cc4:	05 4c 3a 00 00       	add    $0x3a4c,%eax
 8410cc9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410ccd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410cd4:	00 
 8410cd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410cd8:	89 04 24             	mov    %eax,(%esp)
 8410cdb:	e8 12 16 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8410ce0:	83 f0 01             	xor    $0x1,%eax
 8410ce3:	84 c0                	test   %al,%al
 8410ce5:	74 07                	je     8410cee <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0xdc>
 8410ce7:	b8 00 00 00 00       	mov    $0x0,%eax
 8410cec:	eb 05                	jmp    8410cf3 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA+0xe1>
 8410cee:	b8 01 00 00 00       	mov    $0x1,%eax
 8410cf3:	c9                   	leave
 8410cf4:	c3                   	ret
 8410cf5:	90                   	nop

```

```c
// DB_Login::GetDailyCleanPadPoint @ 0x8410c12

/* DB_Login::GetDailyCleanPadPoint(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetDailyCleanPadPoint(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,"seLect cleanpad_point from member_login where m_id=%s",uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(this_00);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_08410c9d;
    }
  }
  bVar1 = true;
LAB_08410c9d:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = MySQL::fetch(this_00);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_uint(this_00,0,(uint *)(param_1 + 0x3a4c));
      if (cVar2 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## GetGameDBInfo

```asm
// === 08414772 DB_Login::GetGameDBInfo  [0x08414772-0x84148a5] ===
 8414772:	55                   	push   %ebp
 8414773:	89 e5                	mov    %esp,%ebp
 8414775:	83 ec 28             	sub    $0x28,%esp
 8414778:	8b 45 0c             	mov    0xc(%ebp),%eax
 841477b:	89 44 24 04          	mov    %eax,0x4(%esp)
 841477f:	8b 45 08             	mov    0x8(%ebp),%eax
 8414782:	89 04 24             	mov    %eax,(%esp)
 8414785:	e8 44 02 00 00       	call   84149ce <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA>
 841478a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841478d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8414790:	83 f8 ff             	cmp    $0xffffffff,%eax
 8414793:	75 0a                	jne    841479f <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x2d>
 8414795:	b8 01 00 00 00       	mov    $0x1,%eax
 841479a:	e9 04 01 00 00       	jmp    84148a3 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x131>
 841479f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84147a2:	83 f8 01             	cmp    $0x1,%eax
 84147a5:	75 0a                	jne    84147b1 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x3f>
 84147a7:	b8 00 00 00 00       	mov    $0x0,%eax
 84147ac:	e9 f2 00 00 00       	jmp    84148a3 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x131>
 84147b1:	e8 f1 5b cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 84147b6:	89 04 24             	mov    %eax,(%esp)
 84147b9:	e8 62 23 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84147be:	83 f8 07             	cmp    $0x7,%eax
 84147c1:	0f 94 c0             	sete   %al
 84147c4:	84 c0                	test   %al,%al
 84147c6:	0f 84 d2 00 00 00    	je     841489e <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x12c>
 84147cc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84147d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84147d6:	8b 80 dc 00 00 00    	mov    0xdc(%eax),%eax
 84147dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84147df:	e9 9a 00 00 00       	jmp    841487e <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x10c>
 84147e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84147e7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84147ea:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 84147f0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84147f3:	05 e0 00 00 00       	add    $0xe0,%eax
 84147f8:	8b 00                	mov    (%eax),%eax
 84147fa:	89 c2                	mov    %eax,%edx
 84147fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84147ff:	8b 80 ac 39 00 00    	mov    0x39ac(%eax),%eax
 8414805:	39 c2                	cmp    %eax,%edx
 8414807:	75 71                	jne    841487a <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x108>
 8414809:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841480c:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8414812:	05 e0 00 00 00       	add    $0xe0,%eax
 8414817:	03 45 0c             	add    0xc(%ebp),%eax
 841481a:	8b 55 0c             	mov    0xc(%ebp),%edx
 841481d:	81 c2 e0 00 00 00    	add    $0xe0,%edx
 8414823:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 841482a:	00 
 841482b:	89 44 24 04          	mov    %eax,0x4(%esp)
 841482f:	89 14 24             	mov    %edx,(%esp)
 8414832:	e8 49 90 c6 ff       	call   807d880 <memmove@plt>
 8414837:	8b 45 0c             	mov    0xc(%ebp),%eax
 841483a:	05 b0 39 00 00       	add    $0x39b0,%eax
 841483f:	0f b6 00             	movzbl (%eax),%eax
 8414842:	84 c0                	test   %al,%al
 8414844:	74 25                	je     841486b <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0xf9>
 8414846:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414849:	8d 90 b0 39 00 00    	lea    0x39b0(%eax),%edx
 841484f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414852:	05 e4 00 00 00       	add    $0xe4,%eax
 8414857:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 841485e:	00 
 841485f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8414863:	89 04 24             	mov    %eax,(%esp)
 8414866:	e8 65 90 c6 ff       	call   807d8d0 <strncpy@plt>
 841486b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841486e:	c7 80 dc 00 00 00 01 	movl   $0x1,0xdc(%eax)
 8414875:	00 00 00 
 8414878:	eb 15                	jmp    841488f <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x11d>
 841487a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 841487e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414881:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8414884:	0f 9c c0             	setl   %al
 8414887:	84 c0                	test   %al,%al
 8414889:	0f 85 55 ff ff ff    	jne    84147e4 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x72>
 841488f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414892:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8414895:	75 07                	jne    841489e <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x12c>
 8414897:	b8 01 00 00 00       	mov    $0x1,%eax
 841489c:	eb 05                	jmp    84148a3 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA+0x131>
 841489e:	b8 00 00 00 00       	mov    $0x0,%eax
 84148a3:	c9                   	leave
 84148a4:	c3                   	ret
 84148a5:	90                   	nop

```

```c
// DB_Login::GetGameDBInfo @ 0x8414772

/* DB_Login::GetGameDBInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetGameDBInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  int iVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  int local_14;
  
  iVar1 = _getGameDBCharacView(this,param_1);
  if (iVar1 == -1) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    this_00 = (GameWorld *)G_GameWorld();
    iVar1 = GameWorld::GetChannelType(this_00);
    if (iVar1 == 7) {
      local_14 = 0;
      iVar1 = *(int *)(param_1 + 0xdc);
      for (; local_14 < iVar1; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + local_14 * 0x94 + 0xe0) == *(int *)(param_1 + 0x39ac)) {
          memmove(param_1 + 0xe0,param_1 + local_14 * 0x94 + 0xe0,0x94);
          if (param_1[0x39b0] != (SIG_LOGIN_DATA)0x0) {
            strncpy((char *)(param_1 + 0xe4),(char *)(param_1 + 0x39b0),0x1e);
          }
          *(undefined4 *)(param_1 + 0xdc) = 1;
          break;
        }
      }
      if (local_14 == iVar1) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetGrowthCreatureEvent

```asm
// === 08448102 DB_Login::GetGrowthCreatureEvent  [0x08448102-0x844834d] ===
 8448102:	55                   	push   %ebp
 8448103:	89 e5                	mov    %esp,%ebp
 8448105:	83 ec 48             	sub    $0x48,%esp
 8448108:	a1 30 f7 41 09       	mov    0x941f730,%eax
 844810d:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 8448114:	00 
 8448115:	89 04 24             	mov    %eax,(%esp)
 8448118:	e8 7b d8 cc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 844811d:	8b 10                	mov    (%eax),%edx
 844811f:	83 c2 34             	add    $0x34,%edx
 8448122:	8b 12                	mov    (%edx),%edx
 8448124:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844812b:	00 
 844812c:	89 04 24             	mov    %eax,(%esp)
 844812f:	ff d2                	call   *%edx
 8448131:	83 f0 01             	xor    $0x1,%eax
 8448134:	84 c0                	test   %al,%al
 8448136:	74 0a                	je     8448142 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x40>
 8448138:	b8 01 00 00 00       	mov    $0x1,%eax
 844813d:	e9 0a 02 00 00       	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 8448142:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448147:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844814e:	00 
 844814f:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8448156:	00 
 8448157:	89 04 24             	mov    %eax,(%esp)
 844815a:	e8 df d0 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844815f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8448162:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448165:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 844816b:	89 44 24 08          	mov    %eax,0x8(%esp)
 844816f:	c7 44 24 04 18 87 c5 	movl   $0x8c58718,0x4(%esp)
 8448176:	08 
 8448177:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844817a:	89 04 24             	mov    %eax,(%esp)
 844817d:	e8 3e c0 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8448182:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8448189:	00 
 844818a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844818d:	89 04 24             	mov    %eax,(%esp)
 8448190:	e8 91 c1 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8448195:	88 45 e7             	mov    %al,-0x19(%ebp)
 8448198:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 844819c:	83 f0 01             	xor    $0x1,%eax
 844819f:	84 c0                	test   %al,%al
 84481a1:	74 43                	je     84481e6 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0xe4>
 84481a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84481a6:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84481ac:	89 44 24 14          	mov    %eax,0x14(%esp)
 84481b0:	c7 44 24 10 7c 87 c5 	movl   $0x8c5877c,0x10(%esp)
 84481b7:	08 
 84481b8:	c7 44 24 0c b9 b4 00 	movl   $0xb4b9,0xc(%esp)
 84481bf:	00 
 84481c0:	c7 44 24 08 00 b0 c5 	movl   $0x8c5b000,0x8(%esp)
 84481c7:	08 
 84481c8:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84481cf:	08 
 84481d0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84481d7:	e8 2e ba 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84481dc:	b8 00 00 00 00       	mov    $0x0,%eax
 84481e1:	e9 66 01 00 00       	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 84481e6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84481e9:	89 04 24             	mov    %eax,(%esp)
 84481ec:	e8 7b a1 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84481f1:	85 c0                	test   %eax,%eax
 84481f3:	0f 95 c0             	setne  %al
 84481f6:	84 c0                	test   %al,%al
 84481f8:	0f 84 29 01 00 00    	je     8448327 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x225>
 84481fe:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8448205:	e9 02 01 00 00       	jmp    844830c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x20a>
 844820a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844820d:	89 04 24             	mov    %eax,(%esp)
 8448210:	e8 a7 c2 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8448215:	83 f0 01             	xor    $0x1,%eax
 8448218:	84 c0                	test   %al,%al
 844821a:	74 0a                	je     8448226 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x124>
 844821c:	b8 00 00 00 00       	mov    $0x0,%eax
 8448221:	e9 26 01 00 00       	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 8448226:	83 7d ec 0a          	cmpl   $0xa,-0x14(%ebp)
 844822a:	76 0a                	jbe    8448236 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x134>
 844822c:	b8 00 00 00 00       	mov    $0x0,%eax
 8448231:	e9 16 01 00 00       	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 8448236:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448239:	6b c0 2c             	imul   $0x2c,%eax,%eax
 844823c:	05 50 41 00 00       	add    $0x4150,%eax
 8448241:	03 45 0c             	add    0xc(%ebp),%eax
 8448244:	83 c0 04             	add    $0x4,%eax
 8448247:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844824a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8448251:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448254:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448258:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844825f:	00 
 8448260:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8448263:	89 04 24             	mov    %eax,(%esp)
 8448266:	e8 81 5b cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 844826b:	83 f0 01             	xor    $0x1,%eax
 844826e:	84 c0                	test   %al,%al
 8448270:	74 0a                	je     844827c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x17a>
 8448272:	b8 00 00 00 00       	mov    $0x0,%eax
 8448277:	e9 d0 00 00 00       	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 844827c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844827f:	83 c0 04             	add    $0x4,%eax
 8448282:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448286:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844828d:	00 
 844828e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8448291:	89 04 24             	mov    %eax,(%esp)
 8448294:	e8 93 e6 cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8448299:	83 f0 01             	xor    $0x1,%eax
 844829c:	84 c0                	test   %al,%al
 844829e:	74 0a                	je     84482aa <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x1a8>
 84482a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84482a5:	e9 a2 00 00 00       	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 84482aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84482ad:	83 c0 08             	add    $0x8,%eax
 84482b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84482b4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84482bb:	00 
 84482bc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84482bf:	89 04 24             	mov    %eax,(%esp)
 84482c2:	e8 55 9d cf ff       	call   814201c <_ZN5MySQL9get_shortEiRi>
 84482c7:	83 f0 01             	xor    $0x1,%eax
 84482ca:	84 c0                	test   %al,%al
 84482cc:	74 07                	je     84482d5 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x1d3>
 84482ce:	b8 00 00 00 00       	mov    $0x0,%eax
 84482d3:	eb 77                	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 84482d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84482d8:	83 c0 0c             	add    $0xc,%eax
 84482db:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 84482e2:	00 
 84482e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84482e7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84482ee:	00 
 84482ef:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84482f2:	89 04 24             	mov    %eax,(%esp)
 84482f5:	e8 f0 4a ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84482fa:	83 f0 01             	xor    $0x1,%eax
 84482fd:	84 c0                	test   %al,%al
 84482ff:	74 07                	je     8448308 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x206>
 8448301:	b8 00 00 00 00       	mov    $0x0,%eax
 8448306:	eb 44                	jmp    844834c <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x24a>
 8448308:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 844830c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844830f:	89 04 24             	mov    %eax,(%esp)
 8448312:	e8 55 a0 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8448317:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 844831a:	0f 97 c0             	seta   %al
 844831d:	84 c0                	test   %al,%al
 844831f:	0f 85 e5 fe ff ff    	jne    844820a <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x108>
 8448325:	eb 20                	jmp    8448347 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA+0x245>
 8448327:	8b 45 0c             	mov    0xc(%ebp),%eax
 844832a:	05 54 41 00 00       	add    $0x4154,%eax
 844832f:	c7 44 24 08 e4 01 00 	movl   $0x1e4,0x8(%esp)
 8448336:	00 
 8448337:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844833e:	00 
 844833f:	89 04 24             	mov    %eax,(%esp)
 8448342:	e8 79 59 c3 ff       	call   807dcc0 <memset@plt>
 8448347:	b8 01 00 00 00       	mov    $0x1,%eax
 844834c:	c9                   	leave
 844834d:	c3                   	ret

```

```c
// DB_Login::GetGrowthCreatureEvent @ 0x8448102

/* DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetGrowthCreatureEvent(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  uint uVar5;
  uint local_18;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,
                     "seLect server_id, charac_no, job_type, charac_name from event_1208_growthcreature where m_id = %d"
                     ,*(undefined4 *)(param_1 + 0xc0));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        memset(param_1 + 0x4154,0,0x1e4);
      }
      else {
        for (local_18 = 0; uVar5 = MySQL::get_n_rows(this_00), local_18 < uVar5;
            local_18 = local_18 + 1) {
          cVar1 = MySQL::fetch(this_00);
          if (cVar1 != '\x01') {
            return 0;
          }
          if (10 < local_18) {
            return 0;
          }
          cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + local_18 * 0x2c + 0x4154));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + local_18 * 0x2c + 0x4158));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_short(this_00,2,(int *)(param_1 + local_18 * 0x2c + 0x415c));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_str(this_00,3,(char *)(param_1 + local_18 * 0x2c + 0x4160),0x1d);
          if (cVar1 != '\x01') {
            return 0;
          }
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*)",0xb4b9,
                 "LoadGrowthCreatureEvent Query Error : m_id(%d)",*(undefined4 *)(param_1 + 0xc0));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## GetGrowthWeaponEvent

```asm
// === 08447ea6 DB_Login::GetGrowthWeaponEvent  [0x08447ea6-0x8448101] ===
 8447ea6:	55                   	push   %ebp
 8447ea7:	89 e5                	mov    %esp,%ebp
 8447ea9:	83 ec 38             	sub    $0x38,%esp
 8447eac:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8447eb1:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 8447eb8:	00 
 8447eb9:	89 04 24             	mov    %eax,(%esp)
 8447ebc:	e8 d7 da cc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8447ec1:	8b 10                	mov    (%eax),%edx
 8447ec3:	83 c2 34             	add    $0x34,%edx
 8447ec6:	8b 12                	mov    (%edx),%edx
 8447ec8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8447ecf:	00 
 8447ed0:	89 04 24             	mov    %eax,(%esp)
 8447ed3:	ff d2                	call   *%edx
 8447ed5:	83 f0 01             	xor    $0x1,%eax
 8447ed8:	84 c0                	test   %al,%al
 8447eda:	74 0a                	je     8447ee6 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x40>
 8447edc:	b8 01 00 00 00       	mov    $0x1,%eax
 8447ee1:	e9 1a 02 00 00       	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8447ee6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8447eeb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8447ef2:	00 
 8447ef3:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8447efa:	00 
 8447efb:	89 04 24             	mov    %eax,(%esp)
 8447efe:	e8 3b d3 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8447f03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8447f06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8447f09:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8447f0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447f13:	c7 44 24 04 70 86 c5 	movl   $0x8c58670,0x4(%esp)
 8447f1a:	08 
 8447f1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447f1e:	89 04 24             	mov    %eax,(%esp)
 8447f21:	e8 9a c2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447f26:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447f2d:	00 
 8447f2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447f31:	89 04 24             	mov    %eax,(%esp)
 8447f34:	e8 ed c3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8447f39:	88 45 f3             	mov    %al,-0xd(%ebp)
 8447f3c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8447f40:	83 f0 01             	xor    $0x1,%eax
 8447f43:	84 c0                	test   %al,%al
 8447f45:	74 43                	je     8447f8a <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0xe4>
 8447f47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8447f4a:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8447f50:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447f54:	c7 44 24 10 e8 86 c5 	movl   $0x8c586e8,0x10(%esp)
 8447f5b:	08 
 8447f5c:	c7 44 24 0c 87 b4 00 	movl   $0xb487,0xc(%esp)
 8447f63:	00 
 8447f64:	c7 44 24 08 40 b0 c5 	movl   $0x8c5b040,0x8(%esp)
 8447f6b:	08 
 8447f6c:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447f73:	08 
 8447f74:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447f7b:	e8 8a bc 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447f80:	b8 00 00 00 00       	mov    $0x0,%eax
 8447f85:	e9 76 01 00 00       	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8447f8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447f8d:	89 04 24             	mov    %eax,(%esp)
 8447f90:	e8 d7 a3 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8447f95:	85 c0                	test   %eax,%eax
 8447f97:	0f 95 c0             	setne  %al
 8447f9a:	84 c0                	test   %al,%al
 8447f9c:	0f 84 10 01 00 00    	je     84480b2 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x20c>
 8447fa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447fa5:	89 04 24             	mov    %eax,(%esp)
 8447fa8:	e8 0f c5 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8447fad:	83 f0 01             	xor    $0x1,%eax
 8447fb0:	84 c0                	test   %al,%al
 8447fb2:	74 0a                	je     8447fbe <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x118>
 8447fb4:	b8 00 00 00 00       	mov    $0x0,%eax
 8447fb9:	e9 42 01 00 00       	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8447fbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8447fc1:	c6 80 40 41 00 00 01 	movb   $0x1,0x4140(%eax)
 8447fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8447fcb:	05 52 41 00 00       	add    $0x4152,%eax
 8447fd0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447fd4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8447fdb:	00 
 8447fdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447fdf:	89 04 24             	mov    %eax,(%esp)
 8447fe2:	e8 05 5e cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8447fe7:	83 f0 01             	xor    $0x1,%eax
 8447fea:	84 c0                	test   %al,%al
 8447fec:	74 0a                	je     8447ff8 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x152>
 8447fee:	b8 00 00 00 00       	mov    $0x0,%eax
 8447ff3:	e9 08 01 00 00       	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8447ff8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8447ffb:	05 44 41 00 00       	add    $0x4144,%eax
 8448000:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448004:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844800b:	00 
 844800c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844800f:	89 04 24             	mov    %eax,(%esp)
 8448012:	e8 15 e9 cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8448017:	83 f0 01             	xor    $0x1,%eax
 844801a:	84 c0                	test   %al,%al
 844801c:	74 0a                	je     8448028 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x182>
 844801e:	b8 00 00 00 00       	mov    $0x0,%eax
 8448023:	e9 d8 00 00 00       	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8448028:	8b 45 0c             	mov    0xc(%ebp),%eax
 844802b:	05 48 41 00 00       	add    $0x4148,%eax
 8448030:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448034:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844803b:	00 
 844803c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844803f:	89 04 24             	mov    %eax,(%esp)
 8448042:	e8 e5 e8 cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8448047:	83 f0 01             	xor    $0x1,%eax
 844804a:	84 c0                	test   %al,%al
 844804c:	74 0a                	je     8448058 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x1b2>
 844804e:	b8 00 00 00 00       	mov    $0x0,%eax
 8448053:	e9 a8 00 00 00       	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8448058:	8b 45 0c             	mov    0xc(%ebp),%eax
 844805b:	05 50 41 00 00       	add    $0x4150,%eax
 8448060:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448064:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 844806b:	00 
 844806c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844806f:	89 04 24             	mov    %eax,(%esp)
 8448072:	e8 75 5d cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8448077:	83 f0 01             	xor    $0x1,%eax
 844807a:	84 c0                	test   %al,%al
 844807c:	74 07                	je     8448085 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x1df>
 844807e:	b8 00 00 00 00       	mov    $0x0,%eax
 8448083:	eb 7b                	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 8448085:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448088:	05 4c 41 00 00       	add    $0x414c,%eax
 844808d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448091:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8448098:	00 
 8448099:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844809c:	89 04 24             	mov    %eax,(%esp)
 844809f:	e8 88 e8 cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84480a4:	83 f0 01             	xor    $0x1,%eax
 84480a7:	84 c0                	test   %al,%al
 84480a9:	74 50                	je     84480fb <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x255>
 84480ab:	b8 00 00 00 00       	mov    $0x0,%eax
 84480b0:	eb 4e                	jmp    8448100 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA+0x25a>
 84480b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84480b5:	c6 80 40 41 00 00 00 	movb   $0x0,0x4140(%eax)
 84480bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84480bf:	66 c7 80 52 41 00 00 	movw   $0x0,0x4152(%eax)
 84480c6:	00 00 
 84480c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84480cb:	c7 80 44 41 00 00 00 	movl   $0x0,0x4144(%eax)
 84480d2:	00 00 00 
 84480d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84480d8:	c7 80 48 41 00 00 00 	movl   $0x0,0x4148(%eax)
 84480df:	00 00 00 
 84480e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84480e5:	66 c7 80 50 41 00 00 	movw   $0x0,0x4150(%eax)
 84480ec:	00 00 
 84480ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84480f1:	c7 80 4c 41 00 00 00 	movl   $0x0,0x414c(%eax)
 84480f8:	00 00 00 
 84480fb:	b8 01 00 00 00       	mov    $0x1,%eax
 8448100:	c9                   	leave
 8448101:	c3                   	ret

```

```c
// DB_Login::GetGrowthWeaponEvent @ 0x8447ea6

/* DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetGrowthWeaponEvent(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,
                     "seLect server_id, charac_no, growthweapon_id, timepiece, infinityweapon_id from event_1207_growthweapon where m_id = %d"
                     ,*(undefined4 *)(param_1 + 0xc0));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        param_1[0x4140] = (SIG_LOGIN_DATA)0x0;
        *(undefined2 *)(param_1 + 0x4152) = 0;
        *(undefined4 *)(param_1 + 0x4144) = 0;
        *(undefined4 *)(param_1 + 0x4148) = 0;
        *(undefined2 *)(param_1 + 0x4150) = 0;
        *(undefined4 *)(param_1 + 0x414c) = 0;
      }
      else {
        cVar1 = MySQL::fetch(this_00);
        if (cVar1 != '\x01') {
          return 0;
        }
        param_1[0x4140] = (SIG_LOGIN_DATA)0x1;
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x4152));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + 0x4144));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(this_00,2,(int *)(param_1 + 0x4148));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(this_00,3,(short *)(param_1 + 0x4150));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(this_00,4,(int *)(param_1 + 0x414c));
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::GetGrowthWeaponEvent(SIG_LOGIN_DATA*)",0xb487,
                 "LoadGrowthWeaponEvent Query Error : m_id(%d)",*(undefined4 *)(param_1 + 0xc0));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## GetLoginCommonData

```asm
// === 0841090c DB_Login::GetLoginCommonData  [0x0841090c-0x8410ad7] ===
 841090c:	55                   	push   %ebp
 841090d:	89 e5                	mov    %esp,%ebp
 841090f:	83 ec 38             	sub    $0x38,%esp
 8410912:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8410917:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841091e:	00 
 841091f:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8410926:	00 
 8410927:	89 04 24             	mov    %eax,(%esp)
 841092a:	e8 0f 49 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841092f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8410932:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410935:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841093b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410942:	00 
 8410943:	89 04 24             	mov    %eax,(%esp)
 8410946:	e8 00 87 cf ff       	call   810904b <_Z14NumberToStringji>
 841094b:	89 44 24 08          	mov    %eax,0x8(%esp)
 841094f:	c7 44 24 04 f8 74 c4 	movl   $0x8c474f8,0x4(%esp)
 8410956:	08 
 8410957:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841095a:	89 04 24             	mov    %eax,(%esp)
 841095d:	e8 5e 38 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410962:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410969:	00 
 841096a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841096d:	89 04 24             	mov    %eax,(%esp)
 8410970:	e8 b1 39 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410975:	83 f0 01             	xor    $0x1,%eax
 8410978:	84 c0                	test   %al,%al
 841097a:	74 0a                	je     8410986 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x7a>
 841097c:	b8 00 00 00 00       	mov    $0x0,%eax
 8410981:	e9 4f 01 00 00       	jmp    8410ad5 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c9>
 8410986:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410989:	89 04 24             	mov    %eax,(%esp)
 841098c:	e8 db 19 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410991:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8410994:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8410998:	75 56                	jne    84109f0 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0xe4>
 841099a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841099d:	66 c7 80 5e 3f 00 00 	movw   $0x0,0x3f5e(%eax)
 84109a4:	00 00 
 84109a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84109a9:	05 14 41 00 00       	add    $0x4114,%eax
 84109ae:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84109b5:	00 
 84109b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84109bd:	00 
 84109be:	89 04 24             	mov    %eax,(%esp)
 84109c1:	e8 fa d2 c6 ff       	call   807dcc0 <memset@plt>
 84109c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84109c9:	05 25 41 00 00       	add    $0x4125,%eax
 84109ce:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84109d5:	00 
 84109d6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84109dd:	00 
 84109de:	89 04 24             	mov    %eax,(%esp)
 84109e1:	e8 da d2 c6 ff       	call   807dcc0 <memset@plt>
 84109e6:	b8 01 00 00 00       	mov    $0x1,%eax
 84109eb:	e9 e5 00 00 00       	jmp    8410ad5 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c9>
 84109f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84109f3:	89 04 24             	mov    %eax,(%esp)
 84109f6:	e8 c1 3a fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84109fb:	83 f0 01             	xor    $0x1,%eax
 84109fe:	84 c0                	test   %al,%al
 8410a00:	74 0a                	je     8410a0c <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x100>
 8410a02:	b8 00 00 00 00       	mov    $0x0,%eax
 8410a07:	e9 c9 00 00 00       	jmp    8410ad5 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c9>
 8410a0c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8410a13:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8410a1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410a1d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8410a21:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8410a24:	89 54 24 08          	mov    %edx,0x8(%esp)
 8410a28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8410a2c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410a2f:	89 04 24             	mov    %eax,(%esp)
 8410a32:	e8 f5 5e d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410a37:	83 f0 01             	xor    $0x1,%eax
 8410a3a:	84 c0                	test   %al,%al
 8410a3c:	74 0a                	je     8410a48 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x13c>
 8410a3e:	b8 00 00 00 00       	mov    $0x0,%eax
 8410a43:	e9 8d 00 00 00       	jmp    8410ad5 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c9>
 8410a48:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8410a4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410a52:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8410a56:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8410a59:	89 54 24 08          	mov    %edx,0x8(%esp)
 8410a5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8410a61:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410a64:	89 04 24             	mov    %eax,(%esp)
 8410a67:	e8 c0 5e d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410a6c:	83 f0 01             	xor    $0x1,%eax
 8410a6f:	84 c0                	test   %al,%al
 8410a71:	74 07                	je     8410a7a <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x16e>
 8410a73:	b8 00 00 00 00       	mov    $0x0,%eax
 8410a78:	eb 5b                	jmp    8410ad5 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c9>
 8410a7a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8410a7d:	89 c2                	mov    %eax,%edx
 8410a7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410a82:	89 90 60 3f 00 00    	mov    %edx,0x3f60(%eax)
 8410a88:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8410a8b:	89 c2                	mov    %eax,%edx
 8410a8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410a90:	66 89 90 5e 3f 00 00 	mov    %dx,0x3f5e(%eax)
 8410a97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410a9a:	8d 90 14 41 00 00    	lea    0x4114(%eax),%edx
 8410aa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410aa3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8410aa7:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 8410aae:	00 
 8410aaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8410ab3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8410ab7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410aba:	89 04 24             	mov    %eax,(%esp)
 8410abd:	e8 28 c3 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8410ac2:	83 f0 01             	xor    $0x1,%eax
 8410ac5:	84 c0                	test   %al,%al
 8410ac7:	74 07                	je     8410ad0 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c4>
 8410ac9:	b8 00 00 00 00       	mov    $0x0,%eax
 8410ace:	eb 05                	jmp    8410ad5 <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA+0x1c9>
 8410ad0:	b8 01 00 00 00       	mov    $0x1,%eax
 8410ad5:	c9                   	leave
 8410ad6:	c3                   	ret
 8410ad7:	90                   	nop

```

```c
// DB_Login::GetLoginCommonData @ 0x841090c

/* DB_Login::GetLoginCommonData(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetLoginCommonData(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_20 [2];
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect  member_bonus_fatigue , update_time , login_ip , inform_notice  from login_common where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 == 0) {
      *(undefined2 *)(param_1 + 0x3f5e) = 0;
      memset(param_1 + 0x4114,0,0x10);
      memset(param_1 + 0x4125,0,0x10);
      uVar3 = 1;
    }
    else {
      cVar2 = MySQL::fetch(local_18);
      if (cVar2 == '\x01') {
        local_20[1] = 0;
        local_10 = 1;
        cVar2 = MySQL::get_int(local_18,0,local_20 + 1);
        iVar1 = local_10;
        if (cVar2 == '\x01') {
          local_20[0] = 0;
          local_10 = local_10 + 1;
          cVar2 = MySQL::get_int(local_18,iVar1,local_20);
          iVar1 = local_10;
          if (cVar2 == '\x01') {
            *(int *)(param_1 + 0x3f60) = local_20[0];
            *(short *)(param_1 + 0x3f5e) = (short)local_20[1];
            local_10 = local_10 + 1;
            cVar2 = MySQL::get_str(local_18,iVar1,(char *)(param_1 + 0x4114),0x10);
            if (cVar2 == '\x01') {
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
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

## GetMercenarySystemInfo

```asm
// === 08415618 DB_Login::GetMercenarySystemInfo  [0x08415618-0x8415c2d] ===
 8415618:	55                   	push   %ebp
 8415619:	89 e5                	mov    %esp,%ebp
 841561b:	56                   	push   %esi
 841561c:	53                   	push   %ebx
 841561d:	83 ec 60             	sub    $0x60,%esp
 8415620:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8415624:	75 0a                	jne    8415630 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x18>
 8415626:	b8 00 00 00 00       	mov    $0x0,%eax
 841562b:	e9 f6 05 00 00       	jmp    8415c26 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x60e>
 8415630:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8415635:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841563c:	00 
 841563d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8415644:	00 
 8415645:	89 04 24             	mov    %eax,(%esp)
 8415648:	e8 f1 fb fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841564d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8415650:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8415655:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841565c:	00 
 841565d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8415664:	00 
 8415665:	89 04 24             	mov    %eax,(%esp)
 8415668:	e8 d1 fb fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841566d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8415670:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8415677:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 841567e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8415685:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 841568c:	e9 68 05 00 00       	jmp    8415bf9 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5e1>
 8415691:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8415694:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415697:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 841569d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84156a0:	05 f0 00 00 00       	add    $0xf0,%eax
 84156a5:	0f b7 58 0a          	movzwl 0xa(%eax),%ebx
 84156a9:	e8 ed 6a cb ff       	call   80cc19b <_Z14G_CDataManagerv>
 84156ae:	0f b7 80 e0 a8 00 00 	movzwl 0xa8e0(%eax),%eax
 84156b5:	66 39 c3             	cmp    %ax,%bx
 84156b8:	0f 9c c0             	setl   %al
 84156bb:	84 c0                	test   %al,%al
 84156bd:	0f 85 1c 05 00 00    	jne    8415bdf <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5c7>
 84156c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84156c6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84156c9:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 84156cf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84156d2:	05 e0 00 00 00       	add    $0xe0,%eax
 84156d7:	8b 00                	mov    (%eax),%eax
 84156d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84156dd:	c7 44 24 04 a0 8a c4 	movl   $0x8c48aa0,0x4(%esp)
 84156e4:	08 
 84156e5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84156e8:	89 04 24             	mov    %eax,(%esp)
 84156eb:	e8 d0 ea fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84156f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84156f7:	00 
 84156f8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84156fb:	89 04 24             	mov    %eax,(%esp)
 84156fe:	e8 23 ec fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8415703:	83 f0 01             	xor    $0x1,%eax
 8415706:	84 c0                	test   %al,%al
 8415708:	74 0a                	je     8415714 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0xfc>
 841570a:	b8 00 00 00 00       	mov    $0x0,%eax
 841570f:	e9 12 05 00 00       	jmp    8415c26 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x60e>
 8415714:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415717:	6b c0 54             	imul   $0x54,%eax,%eax
 841571a:	05 b0 15 00 00       	add    $0x15b0,%eax
 841571f:	03 45 0c             	add    0xc(%ebp),%eax
 8415722:	83 c0 04             	add    $0x4,%eax
 8415725:	89 04 24             	mov    %eax,(%esp)
 8415728:	e8 dd e9 d9 ff       	call   81b410a <_ZN21CHARAC_LOAD_MERCENARY5ResetEv>
 841572d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8415730:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8415736:	05 e0 00 00 00       	add    $0xe0,%eax
 841573b:	03 45 0c             	add    0xc(%ebp),%eax
 841573e:	8d 50 04             	lea    0x4(%eax),%edx
 8415741:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415744:	6b c0 54             	imul   $0x54,%eax,%eax
 8415747:	05 b0 15 00 00       	add    $0x15b0,%eax
 841574c:	03 45 0c             	add    0xc(%ebp),%eax
 841574f:	83 c0 0a             	add    $0xa,%eax
 8415752:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8415759:	00 
 841575a:	89 54 24 04          	mov    %edx,0x4(%esp)
 841575e:	89 04 24             	mov    %eax,(%esp)
 8415761:	e8 6a 81 c6 ff       	call   807d8d0 <strncpy@plt>
 8415766:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8415769:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841576c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 841576f:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8415775:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8415778:	05 e0 00 00 00       	add    $0xe0,%eax
 841577d:	8b 00                	mov    (%eax),%eax
 841577f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8415782:	6b d2 54             	imul   $0x54,%edx,%edx
 8415785:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8415788:	81 c2 b4 15 00 00    	add    $0x15b4,%edx
 841578e:	89 02                	mov    %eax,(%edx)
 8415790:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8415793:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8415796:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8415799:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 841579f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84157a2:	05 f0 00 00 00       	add    $0xf0,%eax
 84157a7:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84157ab:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84157ae:	6b d2 54             	imul   $0x54,%edx,%edx
 84157b1:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84157b4:	81 c2 b0 15 00 00    	add    $0x15b0,%edx
 84157ba:	66 89 42 08          	mov    %ax,0x8(%edx)
 84157be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84157c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 84157c4:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 84157ca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84157cd:	05 e0 00 00 00       	add    $0xe0,%eax
 84157d2:	8b 00                	mov    (%eax),%eax
 84157d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84157d8:	c7 44 24 04 1c 8b c4 	movl   $0x8c48b1c,0x4(%esp)
 84157df:	08 
 84157e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84157e3:	89 04 24             	mov    %eax,(%esp)
 84157e6:	e8 d5 e9 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84157eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84157f2:	00 
 84157f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84157f6:	89 04 24             	mov    %eax,(%esp)
 84157f9:	e8 28 eb fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84157fe:	83 f0 01             	xor    $0x1,%eax
 8415801:	84 c0                	test   %al,%al
 8415803:	0f 85 d9 03 00 00    	jne    8415be2 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5ca>
 8415809:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841580c:	89 04 24             	mov    %eax,(%esp)
 841580f:	e8 58 cb cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8415814:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8415817:	83 7d f0 08          	cmpl   $0x8,-0x10(%ebp)
 841581b:	74 1a                	je     8415837 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x21f>
 841581d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415820:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415823:	6b c0 54             	imul   $0x54,%eax,%eax
 8415826:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415829:	05 e0 15 00 00       	add    $0x15e0,%eax
 841582e:	c6 40 06 00          	movb   $0x0,0x6(%eax)
 8415832:	e9 d8 01 00 00       	jmp    8415a0f <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x3f7>
 8415837:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 841583e:	e9 bb 01 00 00       	jmp    84159fe <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x3e6>
 8415843:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8415846:	89 04 24             	mov    %eax,(%esp)
 8415849:	e8 6e ec fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841584e:	83 f0 01             	xor    $0x1,%eax
 8415851:	84 c0                	test   %al,%al
 8415853:	74 5d                	je     84158b2 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x29a>
 8415855:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8415858:	8b 55 0c             	mov    0xc(%ebp),%edx
 841585b:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8415861:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415864:	05 e0 00 00 00       	add    $0xe0,%eax
 8415869:	8b 18                	mov    (%eax),%ebx
 841586b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8415872:	00 
 8415873:	c7 44 24 08 a2 3e 00 	movl   $0x3ea2,0x8(%esp)
 841587a:	00 
 841587b:	c7 44 24 04 a0 cd c5 	movl   $0x8c5cda0,0x4(%esp)
 8415882:	08 
 8415883:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8415886:	89 04 24             	mov    %eax,(%esp)
 8415889:	e8 8a 9e 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841588e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8415892:	c7 44 24 08 a2 3e 00 	movl   $0x3ea2,0x8(%esp)
 8415899:	00 
 841589a:	c7 44 24 04 88 8b c4 	movl   $0x8c48b88,0x4(%esp)
 84158a1:	08 
 84158a2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84158a5:	89 04 24             	mov    %eax,(%esp)
 84158a8:	e8 db 9e 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84158ad:	e9 5d 01 00 00       	jmp    8415a0f <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x3f7>
 84158b2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84158b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84158b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84158c0:	00 
 84158c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84158c4:	89 04 24             	mov    %eax,(%esp)
 84158c7:	e8 60 10 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84158cc:	83 f0 01             	xor    $0x1,%eax
 84158cf:	84 c0                	test   %al,%al
 84158d1:	74 62                	je     8415935 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x31d>
 84158d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84158d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84158d9:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 84158df:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84158e2:	05 e0 00 00 00       	add    $0xe0,%eax
 84158e7:	8b 18                	mov    (%eax),%ebx
 84158e9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84158f0:	00 
 84158f1:	c7 44 24 08 a8 3e 00 	movl   $0x3ea8,0x8(%esp)
 84158f8:	00 
 84158f9:	c7 44 24 04 a0 cd c5 	movl   $0x8c5cda0,0x4(%esp)
 8415900:	08 
 8415901:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8415904:	89 04 24             	mov    %eax,(%esp)
 8415907:	e8 0c 9e 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841590c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8415910:	c7 44 24 08 a8 3e 00 	movl   $0x3ea8,0x8(%esp)
 8415917:	00 
 8415918:	c7 44 24 04 88 8b c4 	movl   $0x8c48b88,0x4(%esp)
 841591f:	08 
 8415920:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8415923:	89 04 24             	mov    %eax,(%esp)
 8415926:	e8 5d 9e 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841592b:	b8 00 00 00 00       	mov    $0x0,%eax
 8415930:	e9 f1 02 00 00       	jmp    8415c26 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x60e>
 8415935:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8415938:	89 44 24 08          	mov    %eax,0x8(%esp)
 841593c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415943:	00 
 8415944:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8415947:	89 04 24             	mov    %eax,(%esp)
 841594a:	e8 dd 0f d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841594f:	83 f0 01             	xor    $0x1,%eax
 8415952:	84 c0                	test   %al,%al
 8415954:	74 62                	je     84159b8 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x3a0>
 8415956:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8415959:	8b 55 0c             	mov    0xc(%ebp),%edx
 841595c:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8415962:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415965:	05 e0 00 00 00       	add    $0xe0,%eax
 841596a:	8b 18                	mov    (%eax),%ebx
 841596c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8415973:	00 
 8415974:	c7 44 24 08 ae 3e 00 	movl   $0x3eae,0x8(%esp)
 841597b:	00 
 841597c:	c7 44 24 04 a0 cd c5 	movl   $0x8c5cda0,0x4(%esp)
 8415983:	08 
 8415984:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8415987:	89 04 24             	mov    %eax,(%esp)
 841598a:	e8 89 9d 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841598f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8415993:	c7 44 24 08 ae 3e 00 	movl   $0x3eae,0x8(%esp)
 841599a:	00 
 841599b:	c7 44 24 04 c0 8b c4 	movl   $0x8c48bc0,0x4(%esp)
 84159a2:	08 
 84159a3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84159a6:	89 04 24             	mov    %eax,(%esp)
 84159a9:	e8 da 9d 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84159ae:	b8 00 00 00 00       	mov    $0x0,%eax
 84159b3:	e9 6e 02 00 00       	jmp    8415c26 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x60e>
 84159b8:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84159bb:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84159be:	74 17                	je     84159d7 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x3bf>
 84159c0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84159c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84159c6:	6b c0 54             	imul   $0x54,%eax,%eax
 84159c9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84159cc:	05 e0 15 00 00       	add    $0x15e0,%eax
 84159d1:	c6 40 06 00          	movb   $0x0,0x6(%eax)
 84159d5:	eb 38                	jmp    8415a0f <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x3f7>
 84159d7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84159da:	8b 75 f4             	mov    -0xc(%ebp),%esi
 84159dd:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 84159e0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84159e3:	89 d0                	mov    %edx,%eax
 84159e5:	c1 e0 02             	shl    $0x2,%eax
 84159e8:	01 d0                	add    %edx,%eax
 84159ea:	c1 e0 02             	shl    $0x2,%eax
 84159ed:	01 d0                	add    %edx,%eax
 84159ef:	01 f0                	add    %esi,%eax
 84159f1:	05 78 05 00 00       	add    $0x578,%eax
 84159f6:	89 5c 81 08          	mov    %ebx,0x8(%ecx,%eax,4)
 84159fa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84159fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415a01:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8415a04:	0f 9c c0             	setl   %al
 8415a07:	84 c0                	test   %al,%al
 8415a09:	0f 85 34 fe ff ff    	jne    8415843 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x22b>
 8415a0f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415a12:	89 04 24             	mov    %eax,(%esp)
 8415a15:	e8 f6 e8 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8415a1a:	09 d0                	or     %edx,%eax
 8415a1c:	85 c0                	test   %eax,%eax
 8415a1e:	0f 94 c0             	sete   %al
 8415a21:	84 c0                	test   %al,%al
 8415a23:	0f 84 c1 00 00 00    	je     8415aea <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x4d2>
 8415a29:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8415a2c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415a2f:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8415a35:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415a38:	05 e0 00 00 00       	add    $0xe0,%eax
 8415a3d:	8b 00                	mov    (%eax),%eax
 8415a3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415a43:	c7 44 24 04 f8 8b c4 	movl   $0x8c48bf8,0x4(%esp)
 8415a4a:	08 
 8415a4b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415a4e:	89 04 24             	mov    %eax,(%esp)
 8415a51:	e8 6a e7 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8415a56:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415a5d:	00 
 8415a5e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415a61:	89 04 24             	mov    %eax,(%esp)
 8415a64:	e8 bd e8 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8415a69:	83 f0 01             	xor    $0x1,%eax
 8415a6c:	84 c0                	test   %al,%al
 8415a6e:	0f 85 71 01 00 00    	jne    8415be5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5cd>
 8415a74:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415a77:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415a7a:	6b c0 54             	imul   $0x54,%eax,%eax
 8415a7d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415a80:	05 dc 15 00 00       	add    $0x15dc,%eax
 8415a85:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8415a8b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415a8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415a91:	6b c0 54             	imul   $0x54,%eax,%eax
 8415a94:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415a97:	05 e0 15 00 00       	add    $0x15e0,%eax
 8415a9c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8415aa2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415aa5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415aa8:	6b c0 54             	imul   $0x54,%eax,%eax
 8415aab:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415aae:	05 e0 15 00 00       	add    $0x15e0,%eax
 8415ab3:	c6 40 04 ff          	movb   $0xff,0x4(%eax)
 8415ab7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415aba:	8b 55 0c             	mov    0xc(%ebp),%edx
 8415abd:	6b c0 54             	imul   $0x54,%eax,%eax
 8415ac0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8415ac3:	05 e0 15 00 00       	add    $0x15e0,%eax
 8415ac8:	c6 40 05 ff          	movb   $0xff,0x5(%eax)
 8415acc:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8415ad0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415ad3:	8b 80 b0 15 00 00    	mov    0x15b0(%eax),%eax
 8415ad9:	8d 50 01             	lea    0x1(%eax),%edx
 8415adc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415adf:	89 90 b0 15 00 00    	mov    %edx,0x15b0(%eax)
 8415ae5:	e9 0b 01 00 00       	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415aea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415aed:	89 04 24             	mov    %eax,(%esp)
 8415af0:	e8 c7 e9 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8415af5:	83 f0 01             	xor    $0x1,%eax
 8415af8:	84 c0                	test   %al,%al
 8415afa:	0f 85 e8 00 00 00    	jne    8415be8 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5d0>
 8415b00:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415b03:	6b c0 54             	imul   $0x54,%eax,%eax
 8415b06:	05 d0 15 00 00       	add    $0x15d0,%eax
 8415b0b:	03 45 0c             	add    0xc(%ebp),%eax
 8415b0e:	83 c0 0c             	add    $0xc,%eax
 8415b11:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415b15:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8415b1c:	00 
 8415b1d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415b20:	89 04 24             	mov    %eax,(%esp)
 8415b23:	e8 86 c7 cc ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8415b28:	83 f0 01             	xor    $0x1,%eax
 8415b2b:	84 c0                	test   %al,%al
 8415b2d:	0f 85 b8 00 00 00    	jne    8415beb <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5d3>
 8415b33:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415b36:	6b c0 54             	imul   $0x54,%eax,%eax
 8415b39:	05 d0 15 00 00       	add    $0x15d0,%eax
 8415b3e:	03 45 0c             	add    0xc(%ebp),%eax
 8415b41:	83 c0 10             	add    $0x10,%eax
 8415b44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415b48:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415b4f:	00 
 8415b50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415b53:	89 04 24             	mov    %eax,(%esp)
 8415b56:	e8 53 c7 cc ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8415b5b:	83 f0 01             	xor    $0x1,%eax
 8415b5e:	84 c0                	test   %al,%al
 8415b60:	0f 85 88 00 00 00    	jne    8415bee <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5d6>
 8415b66:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415b69:	6b c0 54             	imul   $0x54,%eax,%eax
 8415b6c:	05 e0 15 00 00       	add    $0x15e0,%eax
 8415b71:	03 45 0c             	add    0xc(%ebp),%eax
 8415b74:	83 c0 04             	add    $0x4,%eax
 8415b77:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415b7b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8415b82:	00 
 8415b83:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415b86:	89 04 24             	mov    %eax,(%esp)
 8415b89:	e8 c6 82 ce ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8415b8e:	83 f0 01             	xor    $0x1,%eax
 8415b91:	84 c0                	test   %al,%al
 8415b93:	75 5c                	jne    8415bf1 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5d9>
 8415b95:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415b98:	6b c0 54             	imul   $0x54,%eax,%eax
 8415b9b:	05 e0 15 00 00       	add    $0x15e0,%eax
 8415ba0:	03 45 0c             	add    0xc(%ebp),%eax
 8415ba3:	83 c0 05             	add    $0x5,%eax
 8415ba6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415baa:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8415bb1:	00 
 8415bb2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8415bb5:	89 04 24             	mov    %eax,(%esp)
 8415bb8:	e8 97 82 ce ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8415bbd:	83 f0 01             	xor    $0x1,%eax
 8415bc0:	84 c0                	test   %al,%al
 8415bc2:	75 30                	jne    8415bf4 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dc>
 8415bc4:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8415bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415bcb:	8b 80 b0 15 00 00    	mov    0x15b0(%eax),%eax
 8415bd1:	8d 50 01             	lea    0x1(%eax),%edx
 8415bd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415bd7:	89 90 b0 15 00 00    	mov    %edx,0x15b0(%eax)
 8415bdd:	eb 16                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415bdf:	90                   	nop
 8415be0:	eb 13                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415be2:	90                   	nop
 8415be3:	eb 10                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415be5:	90                   	nop
 8415be6:	eb 0d                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415be8:	90                   	nop
 8415be9:	eb 0a                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415beb:	90                   	nop
 8415bec:	eb 07                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415bee:	90                   	nop
 8415bef:	eb 04                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415bf1:	90                   	nop
 8415bf2:	eb 01                	jmp    8415bf5 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5dd>
 8415bf4:	90                   	nop
 8415bf5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8415bf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415bfc:	8b 80 dc 00 00 00    	mov    0xdc(%eax),%eax
 8415c02:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8415c05:	7e 0d                	jle    8415c14 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5fc>
 8415c07:	83 7d ec 23          	cmpl   $0x23,-0x14(%ebp)
 8415c0b:	7f 07                	jg     8415c14 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x5fc>
 8415c0d:	b8 01 00 00 00       	mov    $0x1,%eax
 8415c12:	eb 05                	jmp    8415c19 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x601>
 8415c14:	b8 00 00 00 00       	mov    $0x0,%eax
 8415c19:	84 c0                	test   %al,%al
 8415c1b:	0f 85 70 fa ff ff    	jne    8415691 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA+0x79>
 8415c21:	b8 01 00 00 00       	mov    $0x1,%eax
 8415c26:	83 c4 60             	add    $0x60,%esp
 8415c29:	5b                   	pop    %ebx
 8415c2a:	5e                   	pop    %esi
 8415c2b:	5d                   	pop    %ebp
 8415c2c:	c3                   	ret
 8415c2d:	90                   	nop

```

```c
// DB_Login::GetMercenarySystemInfo @ 0x8415618

/* DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetMercenarySystemInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int local_5c;
  int local_58;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  MySQL *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (SIG_LOGIN_DATA *)0x0) {
    uVar4 = 0;
  }
  else {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    local_58 = 0;
    local_5c = 0;
    local_1c = 0;
    local_18 = 0;
    while( true ) {
      if ((local_18 < *(int *)(param_1 + 0xdc)) && (local_18 < 0x24)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      sVar1 = *(short *)(param_1 + local_18 * 0x94 + 0xfa);
      iVar5 = G_CDataManager();
      if (*(short *)(iVar5 + 0xa8e0) <= sVar1) {
        MySQL::set_query(local_24,
                         "seLect mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period from charac_link_bonus where charac_no=%u"
                         ,*(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0));
        cVar3 = MySQL::exec(local_24,true);
        if (cVar3 != '\x01') {
          return 0;
        }
        CHARAC_LOAD_MERCENARY::Reset((CHARAC_LOAD_MERCENARY *)(param_1 + local_1c * 0x54 + 0x15b4));
        strncpy((char *)(param_1 + local_1c * 0x54 + 0x15ba),
                (char *)(param_1 + local_18 * 0x94 + 0xe4),0x1e);
        *(undefined4 *)(param_1 + local_1c * 0x54 + 0x15b4) =
             *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
        *(undefined2 *)(param_1 + local_1c * 0x54 + 0x15b8) =
             *(undefined2 *)(param_1 + local_18 * 0x94 + 0xfa);
        MySQL::set_query(local_20,
                         "seLect slot,it_id from user_items where charac_no=%u and expire_date>now() and stat=0 order by slot limit 8"
                         ,*(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0));
        cVar3 = MySQL::exec(local_20,true);
        if (cVar3 == '\x01') {
          local_14 = MySQL::get_n_rows(local_20);
          if (local_14 == 8) {
            for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
              cVar3 = MySQL::fetch(local_20);
              if (cVar3 != '\x01') {
                uVar4 = *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
                cMyTrace::cMyTrace(local_54,"bool DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)"
                                   ,0x3ea2,5);
                cMyTrace::operator()
                          (local_54,"DB_Login::GetMercenarySystemInfo %d ERROR Charac_no=%u",0x3ea2,
                           uVar4);
                break;
              }
              cVar3 = MySQL::get_int(local_20,0,&local_58);
              if (cVar3 != '\x01') {
                uVar4 = *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
                cMyTrace::cMyTrace(local_44,"bool DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)"
                                   ,0x3ea8,5);
                cMyTrace::operator()
                          (local_44,"DB_Login::GetMercenarySystemInfo %d ERROR Charac_no=%u",0x3ea8,
                           uVar4);
                return 0;
              }
              cVar3 = MySQL::get_int(local_20,1,&local_5c);
              if (cVar3 != '\x01') {
                uVar4 = *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
                cMyTrace::cMyTrace(local_34,"bool DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)"
                                   ,0x3eae,5);
                cMyTrace::operator()
                          (local_34,"DB_Login::GetMercenarySystemInfo %d ERROR charac_no=%u",0x3eae,
                           uVar4);
                return 0;
              }
              if (local_58 != local_10) {
                param_1[local_1c * 0x54 + 0x15e6] = (SIG_LOGIN_DATA)0x0;
                break;
              }
              *(int *)(param_1 + local_1c * 0x54 + local_10 * 4 + 0x15e8) = local_5c;
            }
          }
          else {
            param_1[local_1c * 0x54 + 0x15e6] = (SIG_LOGIN_DATA)0x0;
          }
          lVar6 = MySQL::getAffectedRowCount(local_24);
          if (lVar6 == 0) {
            MySQL::set_query(local_24,
                             "inSert into charac_link_bonus (charac_no,mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period) values(%u,0,0,-1,-1)"
                             ,*(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0));
            cVar3 = MySQL::exec(local_24,true);
            if (cVar3 == '\x01') {
              *(undefined4 *)(param_1 + local_1c * 0x54 + 0x15dc) = 0;
              *(undefined4 *)(param_1 + local_1c * 0x54 + 0x15e0) = 0;
              param_1[local_1c * 0x54 + 0x15e4] = (SIG_LOGIN_DATA)0xff;
              param_1[local_1c * 0x54 + 0x15e5] = (SIG_LOGIN_DATA)0xff;
              local_1c = local_1c + 1;
              *(int *)(param_1 + 0x15b0) = *(int *)(param_1 + 0x15b0) + 1;
            }
          }
          else {
            cVar3 = MySQL::fetch(local_24);
            if ((((cVar3 == '\x01') &&
                 (cVar3 = MySQL::get_int(local_24,0,(uint *)(param_1 + local_1c * 0x54 + 0x15dc)),
                 cVar3 == '\x01')) &&
                (cVar3 = MySQL::get_int(local_24,1,(uint *)(param_1 + local_1c * 0x54 + 0x15e0)),
                cVar3 == '\x01')) &&
               ((cVar3 = MySQL::get_byte(local_24,2,(char *)(param_1 + local_1c * 0x54 + 0x15e4)),
                cVar3 == '\x01' &&
                (cVar3 = MySQL::get_byte(local_24,3,(char *)(param_1 + local_1c * 0x54 + 0x15e5)),
                cVar3 == '\x01')))) {
              local_1c = local_1c + 1;
              *(int *)(param_1 + 0x15b0) = *(int *)(param_1 + 0x15b0) + 1;
            }
          }
        }
      }
      local_18 = local_18 + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## GetOntimeUserRecvIdx

```asm
// === 08414f5c DB_Login::GetOntimeUserRecvIdx  [0x08414f5c-0x84150e7] ===
 8414f5c:	55                   	push   %ebp
 8414f5d:	89 e5                	mov    %esp,%ebp
 8414f5f:	53                   	push   %ebx
 8414f60:	83 ec 34             	sub    $0x34,%esp
 8414f63:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8414f68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8414f6f:	00 
 8414f70:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 8414f77:	00 
 8414f78:	89 04 24             	mov    %eax,(%esp)
 8414f7b:	e8 be 02 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8414f80:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8414f83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414f86:	c7 80 a4 3f 00 00 00 	movl   $0x0,0x3fa4(%eax)
 8414f8d:	00 00 00 
 8414f90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414f93:	8b 88 c0 00 00 00    	mov    0xc0(%eax),%ecx
 8414f99:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 8414f9e:	89 c8                	mov    %ecx,%eax
 8414fa0:	f7 e2                	mul    %edx
 8414fa2:	c1 ea 03             	shr    $0x3,%edx
 8414fa5:	89 d0                	mov    %edx,%eax
 8414fa7:	c1 e0 02             	shl    $0x2,%eax
 8414faa:	01 d0                	add    %edx,%eax
 8414fac:	01 c0                	add    %eax,%eax
 8414fae:	89 ca                	mov    %ecx,%edx
 8414fb0:	29 c2                	sub    %eax,%edx
 8414fb2:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8414fb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414fb8:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8414fbe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414fc5:	00 
 8414fc6:	89 04 24             	mov    %eax,(%esp)
 8414fc9:	e8 7d 40 cf ff       	call   810904b <_Z14NumberToStringji>
 8414fce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8414fd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414fd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414fd9:	c7 44 24 04 2c 89 c4 	movl   $0x8c4892c,0x4(%esp)
 8414fe0:	08 
 8414fe1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414fe4:	89 04 24             	mov    %eax,(%esp)
 8414fe7:	e8 d4 f1 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8414fec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414ff3:	00 
 8414ff4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414ff7:	89 04 24             	mov    %eax,(%esp)
 8414ffa:	e8 27 f3 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8414fff:	83 f0 01             	xor    $0x1,%eax
 8415002:	84 c0                	test   %al,%al
 8415004:	74 0a                	je     8415010 <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0xb4>
 8415006:	b8 00 00 00 00       	mov    $0x0,%eax
 841500b:	e9 d1 00 00 00       	jmp    84150e1 <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x185>
 8415010:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8415013:	89 04 24             	mov    %eax,(%esp)
 8415016:	e8 51 d3 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841501b:	85 c0                	test   %eax,%eax
 841501d:	0f 94 c0             	sete   %al
 8415020:	84 c0                	test   %al,%al
 8415022:	74 72                	je     8415096 <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x13a>
 8415024:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415027:	c7 80 a4 3f 00 00 01 	movl   $0x1,0x3fa4(%eax)
 841502e:	00 00 00 
 8415031:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415034:	8b 98 a4 3f 00 00    	mov    0x3fa4(%eax),%ebx
 841503a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841503d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8415043:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841504a:	00 
 841504b:	89 04 24             	mov    %eax,(%esp)
 841504e:	e8 f8 3f cf ff       	call   810904b <_Z14NumberToStringji>
 8415053:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8415057:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841505b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841505e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415062:	c7 44 24 04 68 89 c4 	movl   $0x8c48968,0x4(%esp)
 8415069:	08 
 841506a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841506d:	89 04 24             	mov    %eax,(%esp)
 8415070:	e8 4b f1 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8415075:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841507c:	00 
 841507d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8415080:	89 04 24             	mov    %eax,(%esp)
 8415083:	e8 9e f2 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8415088:	83 f0 01             	xor    $0x1,%eax
 841508b:	84 c0                	test   %al,%al
 841508d:	74 4d                	je     84150dc <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x180>
 841508f:	b8 00 00 00 00       	mov    $0x0,%eax
 8415094:	eb 4b                	jmp    84150e1 <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x185>
 8415096:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8415099:	89 04 24             	mov    %eax,(%esp)
 841509c:	e8 1b f4 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84150a1:	83 f0 01             	xor    $0x1,%eax
 84150a4:	84 c0                	test   %al,%al
 84150a6:	74 07                	je     84150af <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x153>
 84150a8:	b8 00 00 00 00       	mov    $0x0,%eax
 84150ad:	eb 32                	jmp    84150e1 <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x185>
 84150af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84150b2:	05 a4 3f 00 00       	add    $0x3fa4,%eax
 84150b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84150bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84150c2:	00 
 84150c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84150c6:	89 04 24             	mov    %eax,(%esp)
 84150c9:	e8 5e 18 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84150ce:	83 f0 01             	xor    $0x1,%eax
 84150d1:	84 c0                	test   %al,%al
 84150d3:	74 07                	je     84150dc <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x180>
 84150d5:	b8 00 00 00 00       	mov    $0x0,%eax
 84150da:	eb 05                	jmp    84150e1 <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA+0x185>
 84150dc:	b8 01 00 00 00       	mov    $0x1,%eax
 84150e1:	83 c4 34             	add    $0x34,%esp
 84150e4:	5b                   	pop    %ebx
 84150e5:	5d                   	pop    %ebp
 84150e6:	c3                   	ret
 84150e7:	90                   	nop

```

```c
// DB_Login::GetOntimeUserRecvIdx @ 0x8414f5c

/* DB_Login::GetOntimeUserRecvIdx(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetOntimeUserRecvIdx(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  uint uVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  *(undefined4 *)(param_1 + 0x3fa4) = 0;
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,"seLect last_no from event_1112_ontime_user_%u where m_id=%s",uVar1 % 10,
                   uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar4 = MySQL::get_n_rows(this_00);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x3fa4) = 1;
    uVar3 = *(undefined4 *)(param_1 + 0x3fa4);
    uVar5 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(this_00,"inSert into event_1112_ontime_user_%u(m_id,last_no) values (%s,%u )",
                     uVar1 % 10,uVar5,uVar3);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  else {
    cVar2 = MySQL::fetch(this_00);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_int(this_00,0,(int *)(param_1 + 0x3fa4));
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## GetPremiumInfo

```asm
// === 08411ee8 DB_Login::GetPremiumInfo  [0x08411ee8-0x84128c3] ===
 8411ee8:	55                   	push   %ebp
 8411ee9:	89 e5                	mov    %esp,%ebp
 8411eeb:	56                   	push   %esi
 8411eec:	53                   	push   %ebx
 8411eed:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 8411ef3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8411ef8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8411eff:	00 
 8411f00:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8411f07:	00 
 8411f08:	89 04 24             	mov    %eax,(%esp)
 8411f0b:	e8 2e 33 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8411f10:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8411f13:	8b 45 08             	mov    0x8(%ebp),%eax
 8411f16:	89 04 24             	mov    %eax,(%esp)
 8411f19:	e8 90 fc ff ff       	call   8411bae <_ZN8DB_Login16_GetDNFAccountDBEv>
 8411f1e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8411f21:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8411f24:	89 04 24             	mov    %eax,(%esp)
 8411f27:	e8 80 c2 c7 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8411f2c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8411f2f:	89 04 24             	mov    %eax,(%esp)
 8411f32:	e8 75 c2 c7 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8411f37:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8411f3e:	8b 45 10             	mov    0x10(%ebp),%eax
 8411f41:	c7 80 94 22 00 00 00 	movl   $0x0,0x2294(%eax)
 8411f48:	00 00 00 
 8411f4b:	8b 45 10             	mov    0x10(%ebp),%eax
 8411f4e:	66 c7 80 3a 29 00 00 	movw   $0x0,0x293a(%eax)
 8411f55:	00 00 
 8411f57:	8b 45 10             	mov    0x10(%ebp),%eax
 8411f5a:	c7 80 4c 39 00 00 00 	movl   $0x0,0x394c(%eax)
 8411f61:	00 00 00 
 8411f64:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8411f67:	8b 55 14             	mov    0x14(%ebp),%edx
 8411f6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411f6e:	89 04 24             	mov    %eax,(%esp)
 8411f71:	e8 74 b8 d7 ff       	call   818d7ea <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE5beginEv>
 8411f76:	83 ec 04             	sub    $0x4,%esp
 8411f79:	8d 45 98             	lea    -0x68(%ebp),%eax
 8411f7c:	8b 55 14             	mov    0x14(%ebp),%edx
 8411f7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411f83:	89 04 24             	mov    %eax,(%esp)
 8411f86:	e8 cb b3 d7 ff       	call   818d356 <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE3endEv>
 8411f8b:	83 ec 04             	sub    $0x4,%esp
 8411f8e:	e9 95 08 00 00       	jmp    8412828 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x940>
 8411f93:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8411f96:	89 04 24             	mov    %eax,(%esp)
 8411f99:	e8 1e dd d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8411f9e:	8b 00                	mov    (%eax),%eax
 8411fa0:	3d 28 a0 00 00       	cmp    $0xa028,%eax
 8411fa5:	7e 1b                	jle    8411fc2 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0xda>
 8411fa7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8411faa:	89 04 24             	mov    %eax,(%esp)
 8411fad:	e8 0a dd d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8411fb2:	8b 00                	mov    (%eax),%eax
 8411fb4:	3d 2b a0 00 00       	cmp    $0xa02b,%eax
 8411fb9:	7f 07                	jg     8411fc2 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0xda>
 8411fbb:	b8 01 00 00 00       	mov    $0x1,%eax
 8411fc0:	eb 05                	jmp    8411fc7 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0xdf>
 8411fc2:	b8 00 00 00 00       	mov    $0x0,%eax
 8411fc7:	84 c0                	test   %al,%al
 8411fc9:	0f 84 39 03 00 00    	je     8412308 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x420>
 8411fcf:	8b 45 10             	mov    0x10(%ebp),%eax
 8411fd2:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411fd8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8411fdf:	00 
 8411fe0:	89 04 24             	mov    %eax,(%esp)
 8411fe3:	e8 63 70 cf ff       	call   810904b <_Z14NumberToStringji>
 8411fe8:	89 c3                	mov    %eax,%ebx
 8411fea:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8411fed:	89 04 24             	mov    %eax,(%esp)
 8411ff0:	e8 c7 dc d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8411ff5:	8b 00                	mov    (%eax),%eax
 8411ff7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8411ffb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411fff:	c7 44 24 04 14 7b c4 	movl   $0x8c47b14,0x4(%esp)
 8412006:	08 
 8412007:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841200a:	89 04 24             	mov    %eax,(%esp)
 841200d:	e8 ae 21 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412012:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412019:	00 
 841201a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841201d:	89 04 24             	mov    %eax,(%esp)
 8412020:	e8 01 23 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412025:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8412028:	89 04 24             	mov    %eax,(%esp)
 841202b:	e8 3c 03 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8412030:	85 c0                	test   %eax,%eax
 8412032:	0f 94 c0             	sete   %al
 8412035:	84 c0                	test   %al,%al
 8412037:	74 1f                	je     8412058 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x170>
 8412039:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841203c:	89 04 24             	mov    %eax,(%esp)
 841203f:	e8 78 dc d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412044:	89 44 24 04          	mov    %eax,0x4(%esp)
 8412048:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841204b:	89 04 24             	mov    %eax,(%esp)
 841204e:	e8 d3 f0 cf ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8412053:	e9 c5 07 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412058:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841205b:	89 04 24             	mov    %eax,(%esp)
 841205e:	e8 59 24 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8412063:	83 f0 01             	xor    $0x1,%eax
 8412066:	84 c0                	test   %al,%al
 8412068:	0f 85 d6 07 00 00    	jne    8412844 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x95c>
 841206e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8412071:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412075:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841207c:	00 
 841207d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8412080:	89 04 24             	mov    %eax,(%esp)
 8412083:	e8 6a 02 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8412088:	83 f0 01             	xor    $0x1,%eax
 841208b:	84 c0                	test   %al,%al
 841208d:	0f 85 6b 07 00 00    	jne    84127fe <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x916>
 8412093:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8412096:	83 c0 04             	add    $0x4,%eax
 8412099:	89 44 24 08          	mov    %eax,0x8(%esp)
 841209d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84120a4:	00 
 84120a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84120a8:	89 04 24             	mov    %eax,(%esp)
 84120ab:	e8 42 02 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84120b0:	83 f0 01             	xor    $0x1,%eax
 84120b3:	84 c0                	test   %al,%al
 84120b5:	0f 85 46 07 00 00    	jne    8412801 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x919>
 84120bb:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84120be:	83 c0 08             	add    $0x8,%eax
 84120c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84120c5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84120cc:	00 
 84120cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84120d0:	89 04 24             	mov    %eax,(%esp)
 84120d3:	e8 1a 02 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84120d8:	83 f0 01             	xor    $0x1,%eax
 84120db:	84 c0                	test   %al,%al
 84120dd:	0f 85 21 07 00 00    	jne    8412804 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x91c>
 84120e3:	8d 45 88             	lea    -0x78(%ebp),%eax
 84120e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84120ea:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84120f1:	00 
 84120f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84120f5:	89 04 24             	mov    %eax,(%esp)
 84120f8:	e8 f5 01 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84120fd:	83 f0 01             	xor    $0x1,%eax
 8412100:	84 c0                	test   %al,%al
 8412102:	0f 85 ff 06 00 00    	jne    8412807 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x91f>
 8412108:	e8 9a 82 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 841210d:	89 04 24             	mov    %eax,(%esp)
 8412110:	e8 0b 4a d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8412115:	83 f8 07             	cmp    $0x7,%eax
 8412118:	0f 94 c0             	sete   %al
 841211b:	84 c0                	test   %al,%al
 841211d:	74 50                	je     841216f <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x287>
 841211f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412122:	89 04 24             	mov    %eax,(%esp)
 8412125:	e8 92 db d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 841212a:	8b 00                	mov    (%eax),%eax
 841212c:	3d 29 a0 00 00       	cmp    $0xa029,%eax
 8412131:	0f 94 c0             	sete   %al
 8412134:	84 c0                	test   %al,%al
 8412136:	0f 84 ce 06 00 00    	je     841280a <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x922>
 841213c:	8b 45 10             	mov    0x10(%ebp),%eax
 841213f:	05 b0 39 00 00       	add    $0x39b0,%eax
 8412144:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 841214b:	00 
 841214c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412150:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8412157:	00 
 8412158:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841215b:	89 04 24             	mov    %eax,(%esp)
 841215e:	e8 87 ac cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8412163:	83 f0 01             	xor    $0x1,%eax
 8412166:	84 c0                	test   %al,%al
 8412168:	74 7a                	je     84121e4 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2fc>
 841216a:	e9 ae 06 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 841216f:	e8 33 82 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 8412174:	89 04 24             	mov    %eax,(%esp)
 8412177:	e8 a4 49 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 841217c:	83 f8 0e             	cmp    $0xe,%eax
 841217f:	0f 94 c0             	sete   %al
 8412182:	84 c0                	test   %al,%al
 8412184:	74 5e                	je     84121e4 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2fc>
 8412186:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412189:	89 04 24             	mov    %eax,(%esp)
 841218c:	e8 2b db d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412191:	8b 00                	mov    (%eax),%eax
 8412193:	3d 2a a0 00 00       	cmp    $0xa02a,%eax
 8412198:	75 10                	jne    84121aa <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2c2>
 841219a:	e8 49 dd 14 00       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 841219f:	3c 01                	cmp    $0x1,%al
 84121a1:	75 07                	jne    84121aa <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2c2>
 84121a3:	b8 01 00 00 00       	mov    $0x1,%eax
 84121a8:	eb 05                	jmp    84121af <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2c7>
 84121aa:	b8 00 00 00 00       	mov    $0x0,%eax
 84121af:	84 c0                	test   %al,%al
 84121b1:	75 31                	jne    84121e4 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2fc>
 84121b3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84121b6:	89 04 24             	mov    %eax,(%esp)
 84121b9:	e8 fe da d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 84121be:	8b 00                	mov    (%eax),%eax
 84121c0:	3d 2b a0 00 00       	cmp    $0xa02b,%eax
 84121c5:	75 10                	jne    84121d7 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2ef>
 84121c7:	e8 1c dd 14 00       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 84121cc:	3c 01                	cmp    $0x1,%al
 84121ce:	74 07                	je     84121d7 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2ef>
 84121d0:	b8 01 00 00 00       	mov    $0x1,%eax
 84121d5:	eb 05                	jmp    84121dc <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x2f4>
 84121d7:	b8 00 00 00 00       	mov    $0x0,%eax
 84121dc:	84 c0                	test   %al,%al
 84121de:	0f 84 29 06 00 00    	je     841280d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x925>
 84121e4:	8b 45 88             	mov    -0x78(%ebp),%eax
 84121e7:	89 c3                	mov    %eax,%ebx
 84121e9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84121f0:	e8 a9 9a cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84121f5:	39 c3                	cmp    %eax,%ebx
 84121f7:	0f 9f c0             	setg   %al
 84121fa:	84 c0                	test   %al,%al
 84121fc:	0f 85 0e 06 00 00    	jne    8412810 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x928>
 8412202:	e8 a0 81 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 8412207:	89 04 24             	mov    %eax,(%esp)
 841220a:	e8 11 49 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 841220f:	83 f8 07             	cmp    $0x7,%eax
 8412212:	74 12                	je     8412226 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x33e>
 8412214:	e8 8e 81 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 8412219:	89 04 24             	mov    %eax,(%esp)
 841221c:	e8 ff 48 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8412221:	83 f8 0e             	cmp    $0xe,%eax
 8412224:	75 07                	jne    841222d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x345>
 8412226:	b8 01 00 00 00       	mov    $0x1,%eax
 841222b:	eb 05                	jmp    8412232 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x34a>
 841222d:	b8 00 00 00 00       	mov    $0x0,%eax
 8412232:	84 c0                	test   %al,%al
 8412234:	74 1b                	je     8412251 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x369>
 8412236:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841223b:	8d 55 8c             	lea    -0x74(%ebp),%edx
 841223e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8412242:	8b 55 0c             	mov    0xc(%ebp),%edx
 8412245:	89 54 24 04          	mov    %edx,0x4(%esp)
 8412249:	89 04 24             	mov    %eax,(%esp)
 841224c:	e8 4d 2d fe ff       	call   83f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>
 8412251:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412254:	89 04 24             	mov    %eax,(%esp)
 8412257:	e8 60 da d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 841225c:	8b 00                	mov    (%eax),%eax
 841225e:	3d 2a a0 00 00       	cmp    $0xa02a,%eax
 8412263:	0f 94 c0             	sete   %al
 8412266:	84 c0                	test   %al,%al
 8412268:	74 34                	je     841229e <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x3b6>
 841226a:	8b 55 90             	mov    -0x70(%ebp),%edx
 841226d:	8b 45 10             	mov    0x10(%ebp),%eax
 8412270:	89 90 d4 39 00 00    	mov    %edx,0x39d4(%eax)
 8412276:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8412279:	8b 45 10             	mov    0x10(%ebp),%eax
 841227c:	89 90 d0 39 00 00    	mov    %edx,0x39d0(%eax)
 8412282:	8b 45 10             	mov    0x10(%ebp),%eax
 8412285:	8b 80 d8 39 00 00    	mov    0x39d8(%eax),%eax
 841228b:	89 c2                	mov    %eax,%edx
 841228d:	83 ca 01             	or     $0x1,%edx
 8412290:	8b 45 10             	mov    0x10(%ebp),%eax
 8412293:	89 90 d8 39 00 00    	mov    %edx,0x39d8(%eax)
 8412299:	e9 7f 05 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 841229e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84122a1:	89 04 24             	mov    %eax,(%esp)
 84122a4:	e8 13 da d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 84122a9:	8b 00                	mov    (%eax),%eax
 84122ab:	3d 2b a0 00 00       	cmp    $0xa02b,%eax
 84122b0:	0f 94 c0             	sete   %al
 84122b3:	84 c0                	test   %al,%al
 84122b5:	74 34                	je     84122eb <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x403>
 84122b7:	8b 55 90             	mov    -0x70(%ebp),%edx
 84122ba:	8b 45 10             	mov    0x10(%ebp),%eax
 84122bd:	89 90 d4 39 00 00    	mov    %edx,0x39d4(%eax)
 84122c3:	8b 55 94             	mov    -0x6c(%ebp),%edx
 84122c6:	8b 45 10             	mov    0x10(%ebp),%eax
 84122c9:	89 90 d0 39 00 00    	mov    %edx,0x39d0(%eax)
 84122cf:	8b 45 10             	mov    0x10(%ebp),%eax
 84122d2:	8b 80 d8 39 00 00    	mov    0x39d8(%eax),%eax
 84122d8:	89 c2                	mov    %eax,%edx
 84122da:	83 ca 02             	or     $0x2,%edx
 84122dd:	8b 45 10             	mov    0x10(%ebp),%eax
 84122e0:	89 90 d8 39 00 00    	mov    %edx,0x39d8(%eax)
 84122e6:	e9 32 05 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 84122eb:	8b 55 90             	mov    -0x70(%ebp),%edx
 84122ee:	8b 45 10             	mov    0x10(%ebp),%eax
 84122f1:	89 90 ac 39 00 00    	mov    %edx,0x39ac(%eax)
 84122f7:	8b 55 94             	mov    -0x6c(%ebp),%edx
 84122fa:	8b 45 10             	mov    0x10(%ebp),%eax
 84122fd:	89 90 a8 39 00 00    	mov    %edx,0x39a8(%eax)
 8412303:	e9 15 05 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412308:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841230b:	89 04 24             	mov    %eax,(%esp)
 841230e:	e8 a9 d9 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412313:	8b 00                	mov    (%eax),%eax
 8412315:	3d 4f c3 00 00       	cmp    $0xc34f,%eax
 841231a:	7e 14                	jle    8412330 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x448>
 841231c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841231f:	89 04 24             	mov    %eax,(%esp)
 8412322:	e8 95 d9 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412327:	8b 00                	mov    (%eax),%eax
 8412329:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 841232e:	7e 07                	jle    8412337 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x44f>
 8412330:	b8 01 00 00 00       	mov    $0x1,%eax
 8412335:	eb 05                	jmp    841233c <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x454>
 8412337:	b8 00 00 00 00       	mov    $0x0,%eax
 841233c:	84 c0                	test   %al,%al
 841233e:	0f 85 cf 04 00 00    	jne    8412813 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x92b>
 8412344:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412347:	89 04 24             	mov    %eax,(%esp)
 841234a:	e8 6d d9 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 841234f:	8b 00                	mov    (%eax),%eax
 8412351:	3d 6f 11 01 00       	cmp    $0x1116f,%eax
 8412356:	7e 1b                	jle    8412373 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x48b>
 8412358:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841235b:	89 04 24             	mov    %eax,(%esp)
 841235e:	e8 59 d9 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412363:	8b 00                	mov    (%eax),%eax
 8412365:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 841236a:	7f 07                	jg     8412373 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x48b>
 841236c:	b8 01 00 00 00       	mov    $0x1,%eax
 8412371:	eb 05                	jmp    8412378 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x490>
 8412373:	b8 00 00 00 00       	mov    $0x0,%eax
 8412378:	84 c0                	test   %al,%al
 841237a:	74 39                	je     84123b5 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x4cd>
 841237c:	8b 45 10             	mov    0x10(%ebp),%eax
 841237f:	0f b7 98 3a 29 00 00 	movzwl 0x293a(%eax),%ebx
 8412386:	0f b7 f3             	movzwl %bx,%esi
 8412389:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841238c:	89 04 24             	mov    %eax,(%esp)
 841238f:	e8 28 d9 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412394:	8b 10                	mov    (%eax),%edx
 8412396:	8b 45 10             	mov    0x10(%ebp),%eax
 8412399:	8d 8e 4c 0a 00 00    	lea    0xa4c(%esi),%ecx
 841239f:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 84123a3:	8d 53 01             	lea    0x1(%ebx),%edx
 84123a6:	8b 45 10             	mov    0x10(%ebp),%eax
 84123a9:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 84123b0:	e9 68 04 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 84123b5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84123b8:	89 04 24             	mov    %eax,(%esp)
 84123bb:	e8 fc d8 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 84123c0:	8b 00                	mov    (%eax),%eax
 84123c2:	3d 78 e6 00 00       	cmp    $0xe678,%eax
 84123c7:	0f 94 c0             	sete   %al
 84123ca:	84 c0                	test   %al,%al
 84123cc:	74 39                	je     8412407 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x51f>
 84123ce:	8b 45 10             	mov    0x10(%ebp),%eax
 84123d1:	0f b7 98 3a 29 00 00 	movzwl 0x293a(%eax),%ebx
 84123d8:	0f b7 f3             	movzwl %bx,%esi
 84123db:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84123de:	89 04 24             	mov    %eax,(%esp)
 84123e1:	e8 d6 d8 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 84123e6:	8b 10                	mov    (%eax),%edx
 84123e8:	8b 45 10             	mov    0x10(%ebp),%eax
 84123eb:	8d 8e 4c 0a 00 00    	lea    0xa4c(%esi),%ecx
 84123f1:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 84123f5:	8d 53 01             	lea    0x1(%ebx),%edx
 84123f8:	8b 45 10             	mov    0x10(%ebp),%eax
 84123fb:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 8412402:	e9 16 04 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412407:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841240a:	89 04 24             	mov    %eax,(%esp)
 841240d:	e8 aa d8 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412412:	8b 00                	mov    (%eax),%eax
 8412414:	89 04 24             	mov    %eax,(%esp)
 8412417:	e8 a8 d3 29 00       	call   86af7c4 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi>
 841241c:	84 c0                	test   %al,%al
 841241e:	74 39                	je     8412459 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x571>
 8412420:	8b 45 10             	mov    0x10(%ebp),%eax
 8412423:	0f b7 98 3a 29 00 00 	movzwl 0x293a(%eax),%ebx
 841242a:	0f b7 f3             	movzwl %bx,%esi
 841242d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412430:	89 04 24             	mov    %eax,(%esp)
 8412433:	e8 84 d8 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412438:	8b 10                	mov    (%eax),%edx
 841243a:	8b 45 10             	mov    0x10(%ebp),%eax
 841243d:	8d 8e 4c 0a 00 00    	lea    0xa4c(%esi),%ecx
 8412443:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 8412447:	8d 53 01             	lea    0x1(%ebx),%edx
 841244a:	8b 45 10             	mov    0x10(%ebp),%eax
 841244d:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 8412454:	e9 c4 03 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412459:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841245c:	89 04 24             	mov    %eax,(%esp)
 841245f:	e8 58 d8 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412464:	8b 70 0c             	mov    0xc(%eax),%esi
 8412467:	8d 45 9c             	lea    -0x64(%ebp),%eax
 841246a:	89 04 24             	mov    %eax,(%esp)
 841246d:	e8 4a d8 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8412472:	8b 18                	mov    (%eax),%ebx
 8412474:	8b 45 10             	mov    0x10(%ebp),%eax
 8412477:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841247d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412484:	00 
 8412485:	89 04 24             	mov    %eax,(%esp)
 8412488:	e8 be 6b cf ff       	call   810904b <_Z14NumberToStringji>
 841248d:	89 74 24 10          	mov    %esi,0x10(%esp)
 8412491:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8412495:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412499:	c7 44 24 04 ac 7b c4 	movl   $0x8c47bac,0x4(%esp)
 84124a0:	08 
 84124a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84124a4:	89 04 24             	mov    %eax,(%esp)
 84124a7:	e8 14 1d fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84124ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84124b3:	00 
 84124b4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84124b7:	89 04 24             	mov    %eax,(%esp)
 84124ba:	e8 67 1e fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84124bf:	83 f0 01             	xor    $0x1,%eax
 84124c2:	84 c0                	test   %al,%al
 84124c4:	0f 85 4c 03 00 00    	jne    8412816 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x92e>
 84124ca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84124cd:	89 04 24             	mov    %eax,(%esp)
 84124d0:	e8 97 fe cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84124d5:	85 c0                	test   %eax,%eax
 84124d7:	0f 94 c0             	sete   %al
 84124da:	84 c0                	test   %al,%al
 84124dc:	74 1f                	je     84124fd <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x615>
 84124de:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84124e1:	89 04 24             	mov    %eax,(%esp)
 84124e4:	e8 d3 d7 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 84124e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84124ed:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84124f0:	89 04 24             	mov    %eax,(%esp)
 84124f3:	e8 2e ec cf ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 84124f8:	e9 20 03 00 00       	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 84124fd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8412504:	e9 da 02 00 00       	jmp    84127e3 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x8fb>
 8412509:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841250c:	89 04 24             	mov    %eax,(%esp)
 841250f:	e8 a8 1f fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8412514:	83 f0 01             	xor    $0x1,%eax
 8412517:	84 c0                	test   %al,%al
 8412519:	0f 85 fa 02 00 00    	jne    8412819 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x931>
 841251f:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 8412526:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 841252d:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 8412534:	00 00 00 
 8412537:	8d 45 84             	lea    -0x7c(%ebp),%eax
 841253a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841253e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412545:	00 
 8412546:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8412549:	89 04 24             	mov    %eax,(%esp)
 841254c:	e8 db 43 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412551:	83 f0 01             	xor    $0x1,%eax
 8412554:	84 c0                	test   %al,%al
 8412556:	74 5f                	je     84125b7 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x6cf>
 8412558:	8b 45 10             	mov    0x10(%ebp),%eax
 841255b:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8412561:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412568:	00 
 8412569:	89 04 24             	mov    %eax,(%esp)
 841256c:	e8 da 6a cf ff       	call   810904b <_Z14NumberToStringji>
 8412571:	89 c3                	mov    %eax,%ebx
 8412573:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841257a:	00 
 841257b:	c7 44 24 08 28 36 00 	movl   $0x3628,0x8(%esp)
 8412582:	00 
 8412583:	c7 44 24 04 00 d0 c5 	movl   $0x8c5d000,0x4(%esp)
 841258a:	08 
 841258b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841258e:	89 04 24             	mov    %eax,(%esp)
 8412591:	e8 82 d1 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8412596:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841259a:	c7 44 24 04 78 7c c4 	movl   $0x8c47c78,0x4(%esp)
 84125a1:	08 
 84125a2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84125a5:	89 04 24             	mov    %eax,(%esp)
 84125a8:	e8 db d1 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84125ad:	bb 00 00 00 00       	mov    $0x0,%ebx
 84125b2:	e9 cf 02 00 00       	jmp    8412886 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x99e>
 84125b7:	8d 45 80             	lea    -0x80(%ebp),%eax
 84125ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 84125be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84125c5:	00 
 84125c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84125c9:	89 04 24             	mov    %eax,(%esp)
 84125cc:	e8 5b 43 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84125d1:	83 f0 01             	xor    $0x1,%eax
 84125d4:	84 c0                	test   %al,%al
 84125d6:	74 5f                	je     8412637 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x74f>
 84125d8:	8b 45 10             	mov    0x10(%ebp),%eax
 84125db:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84125e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84125e8:	00 
 84125e9:	89 04 24             	mov    %eax,(%esp)
 84125ec:	e8 5a 6a cf ff       	call   810904b <_Z14NumberToStringji>
 84125f1:	89 c3                	mov    %eax,%ebx
 84125f3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84125fa:	00 
 84125fb:	c7 44 24 08 2e 36 00 	movl   $0x362e,0x8(%esp)
 8412602:	00 
 8412603:	c7 44 24 04 00 d0 c5 	movl   $0x8c5d000,0x4(%esp)
 841260a:	08 
 841260b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841260e:	89 04 24             	mov    %eax,(%esp)
 8412611:	e8 02 d1 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8412616:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841261a:	c7 44 24 04 a8 7c c4 	movl   $0x8c47ca8,0x4(%esp)
 8412621:	08 
 8412622:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8412625:	89 04 24             	mov    %eax,(%esp)
 8412628:	e8 5b d1 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841262d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8412632:	e9 4f 02 00 00       	jmp    8412886 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x99e>
 8412637:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 841263d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412641:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8412648:	00 
 8412649:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841264c:	89 04 24             	mov    %eax,(%esp)
 841264f:	e8 d8 42 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412654:	83 f0 01             	xor    $0x1,%eax
 8412657:	84 c0                	test   %al,%al
 8412659:	74 5f                	je     84126ba <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x7d2>
 841265b:	8b 45 10             	mov    0x10(%ebp),%eax
 841265e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8412664:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841266b:	00 
 841266c:	89 04 24             	mov    %eax,(%esp)
 841266f:	e8 d7 69 cf ff       	call   810904b <_Z14NumberToStringji>
 8412674:	89 c3                	mov    %eax,%ebx
 8412676:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841267d:	00 
 841267e:	c7 44 24 08 34 36 00 	movl   $0x3634,0x8(%esp)
 8412685:	00 
 8412686:	c7 44 24 04 00 d0 c5 	movl   $0x8c5d000,0x4(%esp)
 841268d:	08 
 841268e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8412691:	89 04 24             	mov    %eax,(%esp)
 8412694:	e8 7f d0 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8412699:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841269d:	c7 44 24 04 d8 7c c4 	movl   $0x8c47cd8,0x4(%esp)
 84126a4:	08 
 84126a5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84126a8:	89 04 24             	mov    %eax,(%esp)
 84126ab:	e8 d8 d0 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84126b0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84126b5:	e9 cc 01 00 00       	jmp    8412886 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x99e>
 84126ba:	e8 e8 7c cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 84126bf:	89 04 24             	mov    %eax,(%esp)
 84126c2:	e8 59 44 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84126c7:	83 f8 07             	cmp    $0x7,%eax
 84126ca:	75 17                	jne    84126e3 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x7fb>
 84126cc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84126cf:	83 f8 16             	cmp    $0x16,%eax
 84126d2:	74 08                	je     84126dc <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x7f4>
 84126d4:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84126d7:	83 f8 1b             	cmp    $0x1b,%eax
 84126da:	75 07                	jne    84126e3 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x7fb>
 84126dc:	b8 01 00 00 00       	mov    $0x1,%eax
 84126e1:	eb 05                	jmp    84126e8 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x800>
 84126e3:	b8 00 00 00 00       	mov    $0x0,%eax
 84126e8:	84 c0                	test   %al,%al
 84126ea:	0f 85 eb 00 00 00    	jne    84127db <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x8f3>
 84126f0:	e8 b2 7c cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 84126f5:	89 04 24             	mov    %eax,(%esp)
 84126f8:	e8 23 44 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84126fd:	83 f8 0e             	cmp    $0xe,%eax
 8412700:	75 17                	jne    8412719 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x831>
 8412702:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8412705:	83 f8 16             	cmp    $0x16,%eax
 8412708:	74 08                	je     8412712 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x82a>
 841270a:	8b 45 84             	mov    -0x7c(%ebp),%eax
 841270d:	83 f8 1b             	cmp    $0x1b,%eax
 8412710:	75 07                	jne    8412719 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x831>
 8412712:	b8 01 00 00 00       	mov    $0x1,%eax
 8412717:	eb 05                	jmp    841271e <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x836>
 8412719:	b8 00 00 00 00       	mov    $0x0,%eax
 841271e:	84 c0                	test   %al,%al
 8412720:	0f 85 b8 00 00 00    	jne    84127de <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x8f6>
 8412726:	83 7d f0 69          	cmpl   $0x69,-0x10(%ebp)
 841272a:	0f 8f ec 00 00 00    	jg     841281c <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x934>
 8412730:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8412733:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412736:	89 04 24             	mov    %eax,(%esp)
 8412739:	e8 7e d5 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 841273e:	8b 00                	mov    (%eax),%eax
 8412740:	8b 55 10             	mov    0x10(%ebp),%edx
 8412743:	8d 8b 29 02 00 00    	lea    0x229(%ebx),%ecx
 8412749:	c1 e1 04             	shl    $0x4,%ecx
 841274c:	01 ca                	add    %ecx,%edx
 841274e:	83 c2 14             	add    $0x14,%edx
 8412751:	89 02                	mov    %eax,(%edx)
 8412753:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8412756:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8412759:	8b 55 10             	mov    0x10(%ebp),%edx
 841275c:	81 c1 29 02 00 00    	add    $0x229,%ecx
 8412762:	c1 e1 04             	shl    $0x4,%ecx
 8412765:	01 ca                	add    %ecx,%edx
 8412767:	83 c2 08             	add    $0x8,%edx
 841276a:	89 02                	mov    %eax,(%edx)
 841276c:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 841276f:	8b 45 80             	mov    -0x80(%ebp),%eax
 8412772:	8b 55 10             	mov    0x10(%ebp),%edx
 8412775:	81 c1 29 02 00 00    	add    $0x229,%ecx
 841277b:	c1 e1 04             	shl    $0x4,%ecx
 841277e:	01 ca                	add    %ecx,%edx
 8412780:	83 c2 0c             	add    $0xc,%edx
 8412783:	89 02                	mov    %eax,(%edx)
 8412785:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8412788:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 841278e:	8b 55 10             	mov    0x10(%ebp),%edx
 8412791:	81 c1 29 02 00 00    	add    $0x229,%ecx
 8412797:	c1 e1 04             	shl    $0x4,%ecx
 841279a:	01 ca                	add    %ecx,%edx
 841279c:	83 c2 10             	add    $0x10,%edx
 841279f:	89 02                	mov    %eax,(%edx)
 84127a1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84127a5:	8b 45 10             	mov    0x10(%ebp),%eax
 84127a8:	0f b7 98 3a 29 00 00 	movzwl 0x293a(%eax),%ebx
 84127af:	0f b7 f3             	movzwl %bx,%esi
 84127b2:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84127b5:	89 04 24             	mov    %eax,(%esp)
 84127b8:	e8 ff d4 d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 84127bd:	8b 10                	mov    (%eax),%edx
 84127bf:	8b 45 10             	mov    0x10(%ebp),%eax
 84127c2:	8d 8e 4c 0a 00 00    	lea    0xa4c(%esi),%ecx
 84127c8:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 84127cc:	8d 53 01             	lea    0x1(%ebx),%edx
 84127cf:	8b 45 10             	mov    0x10(%ebp),%eax
 84127d2:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 84127d9:	eb 04                	jmp    84127df <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x8f7>
 84127db:	90                   	nop
 84127dc:	eb 01                	jmp    84127df <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x8f7>
 84127de:	90                   	nop
 84127df:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84127e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84127e6:	89 04 24             	mov    %eax,(%esp)
 84127e9:	e8 7e fb cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84127ee:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84127f1:	0f 97 c0             	seta   %al
 84127f4:	84 c0                	test   %al,%al
 84127f6:	0f 85 0d fd ff ff    	jne    8412509 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x621>
 84127fc:	eb 1f                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 84127fe:	90                   	nop
 84127ff:	eb 1c                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412801:	90                   	nop
 8412802:	eb 19                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412804:	90                   	nop
 8412805:	eb 16                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412807:	90                   	nop
 8412808:	eb 13                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 841280a:	90                   	nop
 841280b:	eb 10                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 841280d:	90                   	nop
 841280e:	eb 0d                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412810:	90                   	nop
 8412811:	eb 0a                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412813:	90                   	nop
 8412814:	eb 07                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412816:	90                   	nop
 8412817:	eb 04                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 8412819:	90                   	nop
 841281a:	eb 01                	jmp    841281d <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x935>
 841281c:	90                   	nop
 841281d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412820:	89 04 24             	mov    %eax,(%esp)
 8412823:	e8 7e d4 d7 ff       	call   818fca6 <_ZN9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEppEv>
 8412828:	8d 45 98             	lea    -0x68(%ebp),%eax
 841282b:	89 44 24 04          	mov    %eax,0x4(%esp)
 841282f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8412832:	89 04 24             	mov    %eax,(%esp)
 8412835:	e8 3f d4 d7 ff       	call   818fc79 <_ZN9__gnu_cxxneIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 841283a:	84 c0                	test   %al,%al
 841283c:	0f 85 51 f7 ff ff    	jne    8411f93 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0xab>
 8412842:	eb 01                	jmp    8412845 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x95d>
 8412844:	90                   	nop
 8412845:	8b 45 10             	mov    0x10(%ebp),%eax
 8412848:	8b 55 f0             	mov    -0x10(%ebp),%edx
 841284b:	89 90 94 22 00 00    	mov    %edx,0x2294(%eax)
 8412851:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8412854:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412858:	8b 45 10             	mov    0x10(%ebp),%eax
 841285b:	89 44 24 04          	mov    %eax,0x4(%esp)
 841285f:	8b 45 08             	mov    0x8(%ebp),%eax
 8412862:	89 04 24             	mov    %eax,(%esp)
 8412865:	e8 5a 00 00 00       	call   84128c4 <_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE>
 841286a:	bb 01 00 00 00       	mov    $0x1,%ebx
 841286f:	eb 15                	jmp    8412886 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x99e>
 8412871:	89 d3                	mov    %edx,%ebx
 8412873:	89 c6                	mov    %eax,%esi
 8412875:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8412878:	89 04 24             	mov    %eax,(%esp)
 841287b:	e8 5a 15 c7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8412880:	89 f0                	mov    %esi,%eax
 8412882:	89 da                	mov    %ebx,%edx
 8412884:	eb 22                	jmp    84128a8 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x9c0>
 8412886:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8412889:	89 04 24             	mov    %eax,(%esp)
 841288c:	e8 49 15 c7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8412891:	85 db                	test   %ebx,%ebx
 8412893:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8412896:	89 04 24             	mov    %eax,(%esp)
 8412899:	e8 3c 15 c7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 841289e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84128a1:	83 c4 00             	add    $0x0,%esp
 84128a4:	5b                   	pop    %ebx
 84128a5:	5e                   	pop    %esi
 84128a6:	5d                   	pop    %ebp
 84128a7:	c3                   	ret
 84128a8:	89 d3                	mov    %edx,%ebx
 84128aa:	89 c6                	mov    %eax,%esi
 84128ac:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84128af:	89 04 24             	mov    %eax,(%esp)
 84128b2:	e8 23 15 c7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 84128b7:	89 f0                	mov    %esi,%eax
 84128b9:	89 da                	mov    %ebx,%edx
 84128bb:	89 04 24             	mov    %eax,(%esp)
 84128be:	e8 8d 0e 6d 00       	call   8ae3750 <_Unwind_Resume>
 84128c3:	90                   	nop

```

```c
// DB_Login::GetPremiumInfo @ 0x8411ee8

/* DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry,
   std::allocator<DB_Login::tagDNFEventEntry> >&) */

void DB_Login::GetPremiumInfo(int param_1,SIG_LOGIN_DATA *param_2,vector *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  stUserDBInfo_t local_78 [4];
  uint local_74;
  uint local_70;
  __normal_iterator local_6c [4];
  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
  local_68 [4];
  vector<int,std::allocator<int>> local_64 [12];
  vector<int,std::allocator<int>> local_58 [12];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  MySQL *local_18;
  int local_14;
  uint local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = (MySQL *)_GetDNFAccountDB();
  std::vector<int,std::allocator<int>>::vector(local_58);
                    /* try { // try from 08411f32 to 08411f36 has its CatchHandler @ 084128a8 */
  std::vector<int,std::allocator<int>>::vector(local_64);
  local_14 = 0;
  *(undefined4 *)(param_3 + 0x2294) = 0;
  *(undefined2 *)(param_3 + 0x293a) = 0;
  *(undefined4 *)(param_3 + 0x394c) = 0;
                    /* try { // try from 08411f71 to 08412869 has its CatchHandler @ 08412871 */
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::begin();
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::end();
  while (bVar4 = __gnu_cxx::operator!=(local_68,local_6c), bVar4) {
    piVar5 = (int *)__gnu_cxx::
                    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                    ::operator->(local_68);
    if ((*piVar5 < 0xa029) ||
       (piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_68), 0xa02b < *piVar5)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
      puVar7 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
               ::operator->(local_68);
      MySQL::set_query(local_18,
                       "seLect m_id,charac_no,server_id,unix_timestamp(start_time),charac_name from member_broadcast where event_id=%d and m_id=%s and end_time>now() limit 1"
                       ,*puVar7,uVar6);
      MySQL::exec(local_18,true);
      iVar8 = MySQL::get_n_rows(local_18);
      if (iVar8 == 0) {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_68);
        std::vector<int,std::allocator<int>>::push_back(local_64,piVar5);
      }
      else {
        cVar3 = MySQL::fetch(local_18);
        if (cVar3 != '\x01') break;
        cVar3 = MySQL::get_uint(local_18,0,(uint *)local_78);
        if ((((cVar3 == '\x01') && (cVar3 = MySQL::get_uint(local_18,1,&local_74), cVar3 == '\x01'))
            && (cVar3 = MySQL::get_uint(local_18,2,&local_70), cVar3 == '\x01')) &&
           (cVar3 = MySQL::get_uint(local_18,3,&local_7c), cVar3 == '\x01')) {
          pGVar9 = (GameWorld *)G_GameWorld();
          iVar8 = GameWorld::GetChannelType(pGVar9);
          if (iVar8 == 7) {
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68);
            if ((*piVar5 != 0xa029) ||
               (cVar3 = MySQL::get_str(local_18,4,(char *)(param_3 + 0x39b0),0x1e), cVar3 != '\x01')
               ) goto LAB_0841281d;
          }
          else {
            pGVar9 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::GetChannelType(pGVar9);
            if (iVar8 == 0xe) {
              piVar5 = (int *)__gnu_cxx::
                              __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                              ::operator->(local_68);
              if ((*piVar5 == 0xa02a) &&
                 (cVar3 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam(),
                 cVar3 == '\x01')) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if (!bVar4) {
                piVar5 = (int *)__gnu_cxx::
                                __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                ::operator->(local_68);
                if ((*piVar5 == 0xa02b) &&
                   (cVar3 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam(),
                   cVar3 != '\x01')) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if (!bVar4) goto LAB_0841281d;
              }
            }
          }
          uVar12 = local_7c;
          iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          if ((int)uVar12 <= iVar8) {
            pGVar9 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::GetChannelType(pGVar9);
            if (iVar8 == 7) {
LAB_08412226:
              bVar4 = true;
            }
            else {
              pGVar9 = (GameWorld *)G_GameWorld();
              iVar8 = GameWorld::GetChannelType(pGVar9);
              if (iVar8 == 0xe) goto LAB_08412226;
              bVar4 = false;
            }
            if (bVar4) {
              DBMgr::addUserDBInfo(GlobalData::s_db_mgr,(int)param_2,local_78);
            }
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68);
            if (*piVar5 == 0xa02a) {
              *(uint *)(param_3 + 0x39d4) = local_74;
              *(uint *)(param_3 + 0x39d0) = local_70;
              *(uint *)(param_3 + 0x39d8) = *(uint *)(param_3 + 0x39d8) | 1;
            }
            else {
              piVar5 = (int *)__gnu_cxx::
                              __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                              ::operator->(local_68);
              if (*piVar5 == 0xa02b) {
                *(uint *)(param_3 + 0x39d4) = local_74;
                *(uint *)(param_3 + 0x39d0) = local_70;
                *(uint *)(param_3 + 0x39d8) = *(uint *)(param_3 + 0x39d8) | 2;
              }
              else {
                *(uint *)(param_3 + 0x39ac) = local_74;
                *(uint *)(param_3 + 0x39a8) = local_70;
              }
            }
          }
        }
      }
    }
    else {
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_68);
      if ((*piVar5 < 50000) ||
         (piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                          ::operator->(local_68), 89999 < *piVar5)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_68);
        if ((*piVar5 < 70000) ||
           (piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68), 89999 < *piVar5)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar1 = *(ushort *)(param_3 + 0x293a);
          puVar7 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                   ::operator->(local_68);
          *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
          *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
        }
        else {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                          ::operator->(local_68);
          if (*piVar5 == 59000) {
            uVar1 = *(ushort *)(param_3 + 0x293a);
            puVar7 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                     ::operator->(local_68);
            *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
            *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
          }
          else {
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68);
            cVar3 = WongWork::CUserPremium::IsRestrictedPremium(*piVar5);
            if (cVar3 == '\0') {
              iVar8 = __gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_68);
              uVar6 = *(undefined4 *)(iVar8 + 0xc);
              puVar7 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                       ::operator->(local_68);
              uVar2 = *puVar7;
              uVar10 = NumberToString(*(uint *)(param_3 + 0xc0),0);
              MySQL::set_query(local_1c,
                               "seLect pre_type,unix_timestamp(service_start),unix_timestamp(service_end) from member_premium where m_id=%s and event_id=%d and service_end>now() and server_id in(0,%d) order by service_end desc limit 1"
                               ,uVar10,uVar2,uVar6);
              cVar3 = MySQL::exec(local_1c,true);
              if (cVar3 == '\x01') {
                iVar8 = MySQL::get_n_rows(local_1c);
                if (iVar8 == 0) {
                  piVar5 = (int *)__gnu_cxx::
                                  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                  ::operator->(local_68);
                  std::vector<int,std::allocator<int>>::push_back(local_64,piVar5);
                }
                else {
                  local_10 = 0;
                  while ((uVar12 = MySQL::get_n_rows(local_1c), local_10 < uVar12 &&
                         (cVar3 = MySQL::fetch(local_1c), cVar3 == '\x01'))) {
                    local_80 = 0;
                    local_84 = 0;
                    local_88 = 0;
                    cVar3 = MySQL::get_int(local_1c,0,&local_80);
                    if (cVar3 != '\x01') {
                      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
                      cMyTrace::cMyTrace(local_4c,
                                         "void DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
                                         ,0x3628,5);
                      cMyTrace::operator()
                                (local_4c,"DB_Login::GetPremiumInfo, get(1) ERROR m_id=%s",uVar6);
                      goto LAB_08412886;
                    }
                    cVar3 = MySQL::get_int(local_1c,1,&local_84);
                    if (cVar3 != '\x01') {
                      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
                      cMyTrace::cMyTrace(local_3c,
                                         "void DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
                                         ,0x362e,5);
                      cMyTrace::operator()
                                (local_3c,"DB_Login::GetPremiumInfo, get(2) ERROR m_id=%s",uVar6);
                      goto LAB_08412886;
                    }
                    cVar3 = MySQL::get_int(local_1c,2,&local_88);
                    if (cVar3 != '\x01') {
                      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
                      cMyTrace::cMyTrace(local_2c,
                                         "void DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
                                         ,0x3634,5);
                      cMyTrace::operator()
                                (local_2c,"DB_Login::GetPremiumInfo, get(3) ERROR m_id=%s",uVar6);
                      goto LAB_08412886;
                    }
                    pGVar9 = (GameWorld *)G_GameWorld();
                    iVar8 = GameWorld::GetChannelType(pGVar9);
                    if ((iVar8 == 7) && ((local_80 == 0x16 || (local_80 == 0x1b)))) {
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if (!bVar4) {
                      pGVar9 = (GameWorld *)G_GameWorld();
                      iVar11 = GameWorld::GetChannelType(pGVar9);
                      iVar8 = local_14;
                      if ((iVar11 == 0xe) && ((local_80 == 0x16 || (local_80 == 0x1b)))) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (!bVar4) {
                        if (0x69 < local_14) break;
                        puVar7 = (undefined4 *)
                                 __gnu_cxx::
                                 __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                 ::operator->(local_68);
                        *(undefined4 *)(param_3 + (iVar8 + 0x229) * 0x10 + 0x14) = *puVar7;
                        *(int *)(param_3 + (local_14 + 0x229) * 0x10 + 8) = local_80;
                        *(int *)(param_3 + (local_14 + 0x229) * 0x10 + 0xc) = local_84;
                        *(int *)(param_3 + (local_14 + 0x229) * 0x10 + 0x10) = local_88;
                        local_14 = local_14 + 1;
                        uVar1 = *(ushort *)(param_3 + 0x293a);
                        puVar7 = (undefined4 *)
                                 __gnu_cxx::
                                 __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                 ::operator->(local_68);
                        *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
                        *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
                      }
                    }
                    local_10 = local_10 + 1;
                  }
                }
              }
            }
            else {
              uVar1 = *(ushort *)(param_3 + 0x293a);
              puVar7 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                       ::operator->(local_68);
              *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
              *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
            }
          }
        }
      }
    }
LAB_0841281d:
    __gnu_cxx::
    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
    ::operator++(local_68);
  }
  *(int *)(param_3 + 0x2294) = local_14;
  RemovePreminuInfo((SIG_LOGIN_DATA *)param_1,param_3);
LAB_08412886:
                    /* try { // try from 0841288c to 08412890 has its CatchHandler @ 084128a8 */
  std::vector<int,std::allocator<int>>::~vector(local_64);
  std::vector<int,std::allocator<int>>::~vector(local_58);
  return;
}

```

---

## GetPunishUserInfo

```asm
// === 08410cf6 DB_Login::GetPunishUserInfo  [0x08410cf6-0x8410f73] ===
 8410cf6:	55                   	push   %ebp
 8410cf7:	89 e5                	mov    %esp,%ebp
 8410cf9:	83 ec 28             	sub    $0x28,%esp
 8410cfc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8410d01:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8410d08:	00 
 8410d09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410d10:	00 
 8410d11:	89 04 24             	mov    %eax,(%esp)
 8410d14:	e8 25 45 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8410d19:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8410d1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410d1f:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8410d25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410d2c:	00 
 8410d2d:	89 04 24             	mov    %eax,(%esp)
 8410d30:	e8 16 83 cf ff       	call   810904b <_Z14NumberToStringji>
 8410d35:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 8410d3c:	00 
 8410d3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410d41:	c7 44 24 04 00 76 c4 	movl   $0x8c47600,0x4(%esp)
 8410d48:	08 
 8410d49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410d4c:	89 04 24             	mov    %eax,(%esp)
 8410d4f:	e8 6c 34 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410d54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410d5b:	00 
 8410d5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410d5f:	89 04 24             	mov    %eax,(%esp)
 8410d62:	e8 bf 35 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410d67:	83 f0 01             	xor    $0x1,%eax
 8410d6a:	84 c0                	test   %al,%al
 8410d6c:	75 0f                	jne    8410d7d <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x87>
 8410d6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410d71:	89 04 24             	mov    %eax,(%esp)
 8410d74:	e8 f3 15 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410d79:	85 c0                	test   %eax,%eax
 8410d7b:	75 07                	jne    8410d84 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x8e>
 8410d7d:	b8 01 00 00 00       	mov    $0x1,%eax
 8410d82:	eb 05                	jmp    8410d89 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x93>
 8410d84:	b8 00 00 00 00       	mov    $0x0,%eax
 8410d89:	84 c0                	test   %al,%al
 8410d8b:	74 0a                	je     8410d97 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0xa1>
 8410d8d:	b8 01 00 00 00       	mov    $0x1,%eax
 8410d92:	e9 db 01 00 00       	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410d97:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8410d9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410da1:	89 04 24             	mov    %eax,(%esp)
 8410da4:	e8 c3 15 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410da9:	89 c2                	mov    %eax,%edx
 8410dab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410dae:	89 90 50 3a 00 00    	mov    %edx,0x3a50(%eax)
 8410db4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8410dbb:	e9 94 01 00 00       	jmp    8410f54 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x25e>
 8410dc0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410dc3:	89 04 24             	mov    %eax,(%esp)
 8410dc6:	e8 f1 36 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8410dcb:	83 f0 01             	xor    $0x1,%eax
 8410dce:	84 c0                	test   %al,%al
 8410dd0:	74 0a                	je     8410ddc <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0xe6>
 8410dd2:	b8 00 00 00 00       	mov    $0x0,%eax
 8410dd7:	e9 96 01 00 00       	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410ddc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8410ddf:	89 d0                	mov    %edx,%eax
 8410de1:	01 c0                	add    %eax,%eax
 8410de3:	01 d0                	add    %edx,%eax
 8410de5:	c1 e0 03             	shl    $0x3,%eax
 8410de8:	05 50 3a 00 00       	add    $0x3a50,%eax
 8410ded:	03 45 0c             	add    0xc(%ebp),%eax
 8410df0:	83 c0 04             	add    $0x4,%eax
 8410df3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410df7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410dfe:	00 
 8410dff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410e02:	89 04 24             	mov    %eax,(%esp)
 8410e05:	e8 22 5b d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410e0a:	83 f0 01             	xor    $0x1,%eax
 8410e0d:	84 c0                	test   %al,%al
 8410e0f:	74 0a                	je     8410e1b <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x125>
 8410e11:	b8 00 00 00 00       	mov    $0x0,%eax
 8410e16:	e9 57 01 00 00       	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410e1b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8410e1e:	89 d0                	mov    %edx,%eax
 8410e20:	01 c0                	add    %eax,%eax
 8410e22:	01 d0                	add    %edx,%eax
 8410e24:	c1 e0 03             	shl    $0x3,%eax
 8410e27:	05 50 3a 00 00       	add    $0x3a50,%eax
 8410e2c:	03 45 0c             	add    0xc(%ebp),%eax
 8410e2f:	83 c0 08             	add    $0x8,%eax
 8410e32:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410e36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410e3d:	00 
 8410e3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410e41:	89 04 24             	mov    %eax,(%esp)
 8410e44:	e8 a9 14 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8410e49:	83 f0 01             	xor    $0x1,%eax
 8410e4c:	84 c0                	test   %al,%al
 8410e4e:	74 0a                	je     8410e5a <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x164>
 8410e50:	b8 00 00 00 00       	mov    $0x0,%eax
 8410e55:	e9 18 01 00 00       	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410e5a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8410e5d:	89 d0                	mov    %edx,%eax
 8410e5f:	01 c0                	add    %eax,%eax
 8410e61:	01 d0                	add    %edx,%eax
 8410e63:	c1 e0 03             	shl    $0x3,%eax
 8410e66:	05 50 3a 00 00       	add    $0x3a50,%eax
 8410e6b:	03 45 0c             	add    0xc(%ebp),%eax
 8410e6e:	83 c0 0c             	add    $0xc,%eax
 8410e71:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410e75:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8410e7c:	00 
 8410e7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410e80:	89 04 24             	mov    %eax,(%esp)
 8410e83:	e8 a4 5a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410e88:	83 f0 01             	xor    $0x1,%eax
 8410e8b:	84 c0                	test   %al,%al
 8410e8d:	74 0a                	je     8410e99 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x1a3>
 8410e8f:	b8 00 00 00 00       	mov    $0x0,%eax
 8410e94:	e9 d9 00 00 00       	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410e99:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8410e9c:	89 d0                	mov    %edx,%eax
 8410e9e:	01 c0                	add    %eax,%eax
 8410ea0:	01 d0                	add    %edx,%eax
 8410ea2:	c1 e0 03             	shl    $0x3,%eax
 8410ea5:	05 50 3a 00 00       	add    $0x3a50,%eax
 8410eaa:	03 45 0c             	add    0xc(%ebp),%eax
 8410ead:	83 c0 10             	add    $0x10,%eax
 8410eb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410eb4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8410ebb:	00 
 8410ebc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410ebf:	89 04 24             	mov    %eax,(%esp)
 8410ec2:	e8 65 5a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410ec7:	83 f0 01             	xor    $0x1,%eax
 8410eca:	84 c0                	test   %al,%al
 8410ecc:	74 0a                	je     8410ed8 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x1e2>
 8410ece:	b8 00 00 00 00       	mov    $0x0,%eax
 8410ed3:	e9 9a 00 00 00       	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410ed8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8410edb:	89 d0                	mov    %edx,%eax
 8410edd:	01 c0                	add    %eax,%eax
 8410edf:	01 d0                	add    %edx,%eax
 8410ee1:	c1 e0 03             	shl    $0x3,%eax
 8410ee4:	05 60 3a 00 00       	add    $0x3a60,%eax
 8410ee9:	03 45 0c             	add    0xc(%ebp),%eax
 8410eec:	83 c0 04             	add    $0x4,%eax
 8410eef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410ef3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8410efa:	00 
 8410efb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410efe:	89 04 24             	mov    %eax,(%esp)
 8410f01:	e8 ec 13 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8410f06:	83 f0 01             	xor    $0x1,%eax
 8410f09:	84 c0                	test   %al,%al
 8410f0b:	74 07                	je     8410f14 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x21e>
 8410f0d:	b8 00 00 00 00       	mov    $0x0,%eax
 8410f12:	eb 5e                	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410f14:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8410f17:	89 d0                	mov    %edx,%eax
 8410f19:	01 c0                	add    %eax,%eax
 8410f1b:	01 d0                	add    %edx,%eax
 8410f1d:	c1 e0 03             	shl    $0x3,%eax
 8410f20:	05 60 3a 00 00       	add    $0x3a60,%eax
 8410f25:	03 45 0c             	add    0xc(%ebp),%eax
 8410f28:	83 c0 08             	add    $0x8,%eax
 8410f2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410f2f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8410f36:	00 
 8410f37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410f3a:	89 04 24             	mov    %eax,(%esp)
 8410f3d:	e8 b0 13 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8410f42:	83 f0 01             	xor    $0x1,%eax
 8410f45:	84 c0                	test   %al,%al
 8410f47:	74 07                	je     8410f50 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x25a>
 8410f49:	b8 00 00 00 00       	mov    $0x0,%eax
 8410f4e:	eb 22                	jmp    8410f72 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0x27c>
 8410f50:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8410f54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410f57:	89 04 24             	mov    %eax,(%esp)
 8410f5a:	e8 0d 14 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410f5f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8410f62:	0f 97 c0             	seta   %al
 8410f65:	84 c0                	test   %al,%al
 8410f67:	0f 85 53 fe ff ff    	jne    8410dc0 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA+0xca>
 8410f6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8410f72:	c9                   	leave
 8410f73:	c3                   	ret

```

```c
// DB_Login::GetPunishUserInfo @ 0x8410cf6

/* DB_Login::GetPunishUserInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetPunishUserInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_10;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect punish_type, unix_timestamp(occ_time), punish_value, apply_flag, unix_timestamp(start_time), unix_timestamp(end_time) from member_punish_info where m_id=%s and apply_flag>=1 LIMIT %d"
                   ,uVar3,0x32);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(this_00), iVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = MySQL::get_n_rows(this_00);
    *(undefined4 *)(param_1 + 0x3a50) = uVar3;
    for (local_10 = 0; uVar5 = MySQL::get_n_rows(this_00), local_10 < uVar5; local_10 = local_10 + 1
        ) {
      cVar2 = MySQL::fetch(this_00);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(this_00,0,(int *)(param_1 + local_10 * 0x18 + 0x3a54));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(this_00,1,(uint *)(param_1 + local_10 * 0x18 + 0x3a58));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(this_00,2,(int *)(param_1 + local_10 * 0x18 + 0x3a5c));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(this_00,3,(int *)(param_1 + local_10 * 0x18 + 0x3a60));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(this_00,4,(uint *)(param_1 + local_10 * 0x18 + 0x3a64));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(this_00,5,(uint *)(param_1 + local_10 * 0x18 + 0x3a68));
      if (cVar2 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}

```

---

## GetReturnUserInfo

```asm
// === 08410ad8 DB_Login::GetReturnUserInfo  [0x08410ad8-0x8410c11] ===
 8410ad8:	55                   	push   %ebp
 8410ad9:	89 e5                	mov    %esp,%ebp
 8410adb:	83 ec 28             	sub    $0x28,%esp
 8410ade:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8410ae3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8410aea:	00 
 8410aeb:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8410af2:	00 
 8410af3:	89 04 24             	mov    %eax,(%esp)
 8410af6:	e8 43 47 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8410afb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8410afe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410b01:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8410b07:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410b0e:	00 
 8410b0f:	89 04 24             	mov    %eax,(%esp)
 8410b12:	e8 34 85 cf ff       	call   810904b <_Z14NumberToStringji>
 8410b17:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410b1b:	c7 44 24 04 60 75 c4 	movl   $0x8c47560,0x4(%esp)
 8410b22:	08 
 8410b23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410b26:	89 04 24             	mov    %eax,(%esp)
 8410b29:	e8 92 36 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410b2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410b35:	00 
 8410b36:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410b39:	89 04 24             	mov    %eax,(%esp)
 8410b3c:	e8 e5 37 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410b41:	83 f0 01             	xor    $0x1,%eax
 8410b44:	84 c0                	test   %al,%al
 8410b46:	74 0a                	je     8410b52 <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x7a>
 8410b48:	b8 00 00 00 00       	mov    $0x0,%eax
 8410b4d:	e9 bd 00 00 00       	jmp    8410c0f <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x137>
 8410b52:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410b55:	89 04 24             	mov    %eax,(%esp)
 8410b58:	e8 0f 18 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410b5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8410b60:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8410b64:	75 14                	jne    8410b7a <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0xa2>
 8410b66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410b69:	c6 80 04 3f 00 00 00 	movb   $0x0,0x3f04(%eax)
 8410b70:	b8 01 00 00 00       	mov    $0x1,%eax
 8410b75:	e9 95 00 00 00       	jmp    8410c0f <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x137>
 8410b7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410b7d:	89 04 24             	mov    %eax,(%esp)
 8410b80:	e8 37 39 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8410b85:	83 f0 01             	xor    $0x1,%eax
 8410b88:	84 c0                	test   %al,%al
 8410b8a:	74 07                	je     8410b93 <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0xbb>
 8410b8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8410b91:	eb 7c                	jmp    8410c0f <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x137>
 8410b93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410b96:	05 08 3f 00 00       	add    $0x3f08,%eax
 8410b9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410b9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410ba6:	00 
 8410ba7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410baa:	89 04 24             	mov    %eax,(%esp)
 8410bad:	e8 7a 5d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410bb2:	83 f0 01             	xor    $0x1,%eax
 8410bb5:	84 c0                	test   %al,%al
 8410bb7:	74 07                	je     8410bc0 <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0xe8>
 8410bb9:	b8 00 00 00 00       	mov    $0x0,%eax
 8410bbe:	eb 4f                	jmp    8410c0f <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x137>
 8410bc0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8410bc7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8410bca:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410bce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410bd5:	00 
 8410bd6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8410bd9:	89 04 24             	mov    %eax,(%esp)
 8410bdc:	e8 4b 5d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410be1:	83 f0 01             	xor    $0x1,%eax
 8410be4:	84 c0                	test   %al,%al
 8410be6:	74 07                	je     8410bef <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x117>
 8410be8:	b8 00 00 00 00       	mov    $0x0,%eax
 8410bed:	eb 20                	jmp    8410c0f <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA+0x137>
 8410bef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410bf2:	85 c0                	test   %eax,%eax
 8410bf4:	0f 94 c2             	sete   %dl
 8410bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410bfa:	88 90 05 3f 00 00    	mov    %dl,0x3f05(%eax)
 8410c00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410c03:	c6 80 04 3f 00 00 01 	movb   $0x1,0x3f04(%eax)
 8410c0a:	b8 01 00 00 00       	mov    $0x1,%eax
 8410c0f:	c9                   	leave
 8410c10:	c3                   	ret
 8410c11:	90                   	nop

```

```c
// DB_Login::GetReturnUserInfo @ 0x8410ad8

/* DB_Login::GetReturnUserInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetReturnUserInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_14,
                   "seLect unix_timestamp(expire_time), first_login from return_user where m_id=%s and expire_time > now()"
                   ,uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    local_10 = MySQL::get_n_rows(local_14);
    if (local_10 == 0) {
      param_1[0x3f04] = (SIG_LOGIN_DATA)0x0;
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_int(local_14,0,(int *)(param_1 + 0x3f08));
        if (cVar1 == '\x01') {
          local_18 = 0;
          cVar1 = MySQL::get_int(local_14,1,&local_18);
          if (cVar1 == '\x01') {
            param_1[0x3f05] = (SIG_LOGIN_DATA)(local_18 == 0);
            param_1[0x3f04] = (SIG_LOGIN_DATA)0x1;
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetSchoolName

```asm
// === 08414446 DB_Login::GetSchoolName  [0x08414446-0x8414511] ===
 8414446:	55                   	push   %ebp
 8414447:	89 e5                	mov    %esp,%ebp
 8414449:	83 ec 28             	sub    $0x28,%esp
 841444c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8414451:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8414458:	00 
 8414459:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8414460:	00 
 8414461:	89 04 24             	mov    %eax,(%esp)
 8414464:	e8 d5 0d fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8414469:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841446c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841446f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414473:	c7 44 24 04 10 86 c4 	movl   $0x8c48610,0x4(%esp)
 841447a:	08 
 841447b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841447e:	89 04 24             	mov    %eax,(%esp)
 8414481:	e8 3a fd fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8414486:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841448d:	00 
 841448e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414491:	89 04 24             	mov    %eax,(%esp)
 8414494:	e8 8d fe fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8414499:	83 f0 01             	xor    $0x1,%eax
 841449c:	84 c0                	test   %al,%al
 841449e:	74 07                	je     84144a7 <_ZN8DB_Login13GetSchoolNameEiPc+0x61>
 84144a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84144a5:	eb 69                	jmp    8414510 <_ZN8DB_Login13GetSchoolNameEiPc+0xca>
 84144a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84144aa:	89 04 24             	mov    %eax,(%esp)
 84144ad:	e8 ba de cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84144b2:	85 c0                	test   %eax,%eax
 84144b4:	0f 94 c0             	sete   %al
 84144b7:	84 c0                	test   %al,%al
 84144b9:	74 07                	je     84144c2 <_ZN8DB_Login13GetSchoolNameEiPc+0x7c>
 84144bb:	b8 00 00 00 00       	mov    $0x0,%eax
 84144c0:	eb 4e                	jmp    8414510 <_ZN8DB_Login13GetSchoolNameEiPc+0xca>
 84144c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84144c5:	89 04 24             	mov    %eax,(%esp)
 84144c8:	e8 ef ff fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84144cd:	83 f0 01             	xor    $0x1,%eax
 84144d0:	84 c0                	test   %al,%al
 84144d2:	74 07                	je     84144db <_ZN8DB_Login13GetSchoolNameEiPc+0x95>
 84144d4:	b8 00 00 00 00       	mov    $0x0,%eax
 84144d9:	eb 35                	jmp    8414510 <_ZN8DB_Login13GetSchoolNameEiPc+0xca>
 84144db:	c7 44 24 0c 28 00 00 	movl   $0x28,0xc(%esp)
 84144e2:	00 
 84144e3:	8b 45 10             	mov    0x10(%ebp),%eax
 84144e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84144ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84144f1:	00 
 84144f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84144f5:	89 04 24             	mov    %eax,(%esp)
 84144f8:	e8 ed 88 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84144fd:	83 f0 01             	xor    $0x1,%eax
 8414500:	84 c0                	test   %al,%al
 8414502:	74 07                	je     841450b <_ZN8DB_Login13GetSchoolNameEiPc+0xc5>
 8414504:	b8 00 00 00 00       	mov    $0x0,%eax
 8414509:	eb 05                	jmp    8414510 <_ZN8DB_Login13GetSchoolNameEiPc+0xca>
 841450b:	b8 01 00 00 00       	mov    $0x1,%eax
 8414510:	c9                   	leave
 8414511:	c3                   	ret

```

```c
// DB_Login::GetSchoolName @ 0x8414446

/* DB_Login::GetSchoolName(int, char*) */

undefined4 __thiscall DB_Login::GetSchoolName(DB_Login *this,int param_1,char *param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  MySQL::set_query(this_00,"seLect school_name from school_info where school_id=%d",param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,param_2,0x28);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetUserFatigueCount

```asm
// === 084150e8 DB_Login::GetUserFatigueCount  [0x084150e8-0x84152af] ===
 84150e8:	55                   	push   %ebp
 84150e9:	89 e5                	mov    %esp,%ebp
 84150eb:	56                   	push   %esi
 84150ec:	53                   	push   %ebx
 84150ed:	83 ec 40             	sub    $0x40,%esp
 84150f0:	e8 a6 70 cb ff       	call   80cc19b <_Z14G_CDataManagerv>
 84150f5:	89 04 24             	mov    %eax,(%esp)
 84150f8:	e8 65 ba cf ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84150fd:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 8415104:	00 
 8415105:	89 04 24             	mov    %eax,(%esp)
 8415108:	e8 29 69 cf ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 841510d:	83 f0 01             	xor    $0x1,%eax
 8415110:	84 c0                	test   %al,%al
 8415112:	74 0a                	je     841511e <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x36>
 8415114:	b8 00 00 00 00       	mov    $0x0,%eax
 8415119:	e9 8a 01 00 00       	jmp    84152a8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1c0>
 841511e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8415123:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841512a:	00 
 841512b:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8415132:	00 
 8415133:	89 04 24             	mov    %eax,(%esp)
 8415136:	e8 03 01 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841513b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841513e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415141:	66 c7 80 aa 3f 00 00 	movw   $0x0,0x3faa(%eax)
 8415148:	00 00 
 841514a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841514d:	c6 80 a9 3f 00 00 00 	movb   $0x0,0x3fa9(%eax)
 8415154:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 841515b:	e8 3b 70 cb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8415160:	89 04 24             	mov    %eax,(%esp)
 8415163:	e8 fa b9 cf ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8415168:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 841516f:	00 
 8415170:	89 04 24             	mov    %eax,(%esp)
 8415173:	e8 f2 67 cf ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 8415178:	89 45 e8             	mov    %eax,-0x18(%ebp)
 841517b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 841517f:	75 0a                	jne    841518b <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0xa3>
 8415181:	b8 00 00 00 00       	mov    $0x0,%eax
 8415186:	e9 1d 01 00 00       	jmp    84152a8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1c0>
 841518b:	e8 0b 70 cb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8415190:	89 04 24             	mov    %eax,(%esp)
 8415193:	e8 ca b9 cf ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8415198:	89 04 24             	mov    %eax,(%esp)
 841519b:	e8 2a 75 cf ff       	call   810c6ca <_ZN13EventClassify15CEventScriptMng18get_today_time_dayEv>
 84151a0:	88 45 ef             	mov    %al,-0x11(%ebp)
 84151a3:	0f b6 75 ef          	movzbl -0x11(%ebp),%esi
 84151a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84151aa:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84151b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84151b7:	00 
 84151b8:	89 04 24             	mov    %eax,(%esp)
 84151bb:	e8 8b 3e cf ff       	call   810904b <_Z14NumberToStringji>
 84151c0:	89 c3                	mov    %eax,%ebx
 84151c2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84151c5:	8b 00                	mov    (%eax),%eax
 84151c7:	83 c0 20             	add    $0x20,%eax
 84151ca:	8b 10                	mov    (%eax),%edx
 84151cc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84151cf:	89 04 24             	mov    %eax,(%esp)
 84151d2:	ff d2                	call   *%edx
 84151d4:	89 04 24             	mov    %eax,(%esp)
 84151d7:	e8 d4 98 6c 00       	call   8adeab0 <_Z9toTStringRKSs>
 84151dc:	89 74 24 10          	mov    %esi,0x10(%esp)
 84151e0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84151e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84151e8:	c7 44 24 04 ac 89 c4 	movl   $0x8c489ac,0x4(%esp)
 84151ef:	08 
 84151f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84151f3:	89 04 24             	mov    %eax,(%esp)
 84151f6:	e8 c5 ef fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84151fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8415202:	00 
 8415203:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8415206:	89 04 24             	mov    %eax,(%esp)
 8415209:	e8 18 f1 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841520e:	83 f0 01             	xor    $0x1,%eax
 8415211:	84 c0                	test   %al,%al
 8415213:	74 0a                	je     841521f <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x137>
 8415215:	b8 00 00 00 00       	mov    $0x0,%eax
 841521a:	e9 89 00 00 00       	jmp    84152a8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1c0>
 841521f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8415222:	89 04 24             	mov    %eax,(%esp)
 8415225:	e8 42 d1 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841522a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841522d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8415231:	7e 70                	jle    84152a3 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1bb>
 8415233:	66 c7 45 e2 00 00    	movw   $0x0,-0x1e(%ebp)
 8415239:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841523c:	89 04 24             	mov    %eax,(%esp)
 841523f:	e8 78 f2 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8415244:	88 45 f7             	mov    %al,-0x9(%ebp)
 8415247:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841524b:	83 f0 01             	xor    $0x1,%eax
 841524e:	84 c0                	test   %al,%al
 8415250:	74 07                	je     8415259 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x171>
 8415252:	b8 00 00 00 00       	mov    $0x0,%eax
 8415257:	eb 4f                	jmp    84152a8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1c0>
 8415259:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 841525c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415260:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8415267:	00 
 8415268:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841526b:	89 04 24             	mov    %eax,(%esp)
 841526e:	e8 79 8b ce ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8415273:	88 45 f7             	mov    %al,-0x9(%ebp)
 8415276:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841527a:	83 f0 01             	xor    $0x1,%eax
 841527d:	84 c0                	test   %al,%al
 841527f:	74 07                	je     8415288 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1a0>
 8415281:	b8 00 00 00 00       	mov    $0x0,%eax
 8415286:	eb 20                	jmp    84152a8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA+0x1c0>
 8415288:	0f b7 55 e2          	movzwl -0x1e(%ebp),%edx
 841528c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841528f:	66 89 90 aa 3f 00 00 	mov    %dx,0x3faa(%eax)
 8415296:	8b 45 0c             	mov    0xc(%ebp),%eax
 8415299:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 841529d:	88 90 a9 3f 00 00    	mov    %dl,0x3fa9(%eax)
 84152a3:	b8 01 00 00 00       	mov    $0x1,%eax
 84152a8:	83 c4 40             	add    $0x40,%esp
 84152ab:	5b                   	pop    %ebx
 84152ac:	5e                   	pop    %esi
 84152ad:	5d                   	pop    %ebp
 84152ae:	c3                   	ret
 84152af:	90                   	nop

```

```c
// DB_Login::GetUserFatigueCount @ 0x84150e8

/* DB_Login::GetUserFatigueCount(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetUserFatigueCount(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  CDataManager *pCVar2;
  CEventScriptMng *pCVar3;
  undefined4 uVar4;
  int iVar5;
  string *sSrc;
  TCHAR *pTVar6;
  uint uVar7;
  short local_22;
  MySQL *local_20;
  int *local_1c;
  SIG_LOGIN_DATA local_15;
  int local_14;
  char local_d;
  
  pCVar2 = (CDataManager *)G_CDataManager();
  pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
  cVar1 = EventClassify::CEventScriptMng::is_eventing(pCVar3,0x56);
  if (cVar1 == '\x01') {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    *(undefined2 *)(param_1 + 0x3faa) = 0;
    param_1[0x3fa9] = (SIG_LOGIN_DATA)0x0;
    local_1c = (int *)0x0;
    pCVar2 = (CDataManager *)G_CDataManager();
    iVar5 = CDataManager::get_event_script_mng(pCVar2);
    local_1c = (int *)EventClassify::CEventScriptMng::get_event_entity(iVar5);
    if (local_1c == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      pCVar2 = (CDataManager *)G_CDataManager();
      pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
      local_15 = (SIG_LOGIN_DATA)EventClassify::CEventScriptMng::get_today_time_day(pCVar3);
      uVar7 = (uint)(byte)local_15;
      uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
      sSrc = (string *)(**(code **)(*local_1c + 0x20))(local_1c);
      pTVar6 = toTString(sSrc);
      MySQL::set_query(local_20,"seLect fatigue from %s where m_id=%s and occ_day = %d",pTVar6,uVar4
                       ,uVar7);
      cVar1 = MySQL::exec(local_20,true);
      if (cVar1 == '\x01') {
        local_14 = MySQL::get_n_rows(local_20);
        if (0 < local_14) {
          local_22 = 0;
          local_d = MySQL::fetch(local_20);
          if (local_d != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_short(local_20,0,&local_22);
          if (cVar1 != '\x01') {
            return 0;
          }
          *(short *)(param_1 + 0x3faa) = local_22;
          param_1[0x3fa9] = local_15;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## GetUserInGameEventHistory

```asm
// === 084152b0 DB_Login::GetUserInGameEventHistory  [0x084152b0-0x8415471] ===
 84152b0:	55                   	push   %ebp
 84152b1:	89 e5                	mov    %esp,%ebp
 84152b3:	83 ec 28             	sub    $0x28,%esp
 84152b6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84152bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84152c2:	00 
 84152c3:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84152ca:	00 
 84152cb:	89 04 24             	mov    %eax,(%esp)
 84152ce:	e8 6b ff fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84152d3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84152d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84152d9:	05 ac 3f 00 00       	add    $0x3fac,%eax
 84152de:	c7 44 24 08 68 01 00 	movl   $0x168,0x8(%esp)
 84152e5:	00 
 84152e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84152ed:	00 
 84152ee:	89 04 24             	mov    %eax,(%esp)
 84152f1:	e8 ca 89 c6 ff       	call   807dcc0 <memset@plt>
 84152f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84152f9:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84152ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8415306:	00 
 8415307:	89 04 24             	mov    %eax,(%esp)
 841530a:	e8 3c 3d cf ff       	call   810904b <_Z14NumberToStringji>
 841530f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415313:	c7 44 24 04 e4 89 c4 	movl   $0x8c489e4,0x4(%esp)
 841531a:	08 
 841531b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841531e:	89 04 24             	mov    %eax,(%esp)
 8415321:	e8 9a ee fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8415326:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841532d:	00 
 841532e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415331:	89 04 24             	mov    %eax,(%esp)
 8415334:	e8 ed ef fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8415339:	83 f0 01             	xor    $0x1,%eax
 841533c:	84 c0                	test   %al,%al
 841533e:	74 0a                	je     841534a <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x9a>
 8415340:	b8 00 00 00 00       	mov    $0x0,%eax
 8415345:	e9 25 01 00 00       	jmp    841546f <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1bf>
 841534a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841534d:	89 04 24             	mov    %eax,(%esp)
 8415350:	e8 17 d0 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8415355:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8415358:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 841535f:	e9 e9 00 00 00       	jmp    841544d <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x19d>
 8415364:	83 7d ec 1d          	cmpl   $0x1d,-0x14(%ebp)
 8415368:	7e 0a                	jle    8415374 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0xc4>
 841536a:	b8 01 00 00 00       	mov    $0x1,%eax
 841536f:	e9 fb 00 00 00       	jmp    841546f <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1bf>
 8415374:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415377:	89 04 24             	mov    %eax,(%esp)
 841537a:	e8 3d f1 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841537f:	88 45 f3             	mov    %al,-0xd(%ebp)
 8415382:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8415386:	83 f0 01             	xor    $0x1,%eax
 8415389:	84 c0                	test   %al,%al
 841538b:	0f 85 cf 00 00 00    	jne    8415460 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1b0>
 8415391:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8415394:	89 d0                	mov    %edx,%eax
 8415396:	01 c0                	add    %eax,%eax
 8415398:	01 d0                	add    %edx,%eax
 841539a:	c1 e0 02             	shl    $0x2,%eax
 841539d:	05 a0 3f 00 00       	add    $0x3fa0,%eax
 84153a2:	03 45 0c             	add    0xc(%ebp),%eax
 84153a5:	83 c0 0c             	add    $0xc,%eax
 84153a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84153ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84153b3:	00 
 84153b4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84153b7:	89 04 24             	mov    %eax,(%esp)
 84153ba:	e8 6d 15 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84153bf:	88 45 f3             	mov    %al,-0xd(%ebp)
 84153c2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84153c6:	83 f0 01             	xor    $0x1,%eax
 84153c9:	84 c0                	test   %al,%al
 84153cb:	0f 85 92 00 00 00    	jne    8415463 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1b3>
 84153d1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84153d4:	89 d0                	mov    %edx,%eax
 84153d6:	01 c0                	add    %eax,%eax
 84153d8:	01 d0                	add    %edx,%eax
 84153da:	c1 e0 02             	shl    $0x2,%eax
 84153dd:	05 a0 3f 00 00       	add    $0x3fa0,%eax
 84153e2:	03 45 0c             	add    0xc(%ebp),%eax
 84153e5:	83 c0 10             	add    $0x10,%eax
 84153e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84153ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84153f3:	00 
 84153f4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84153f7:	89 04 24             	mov    %eax,(%esp)
 84153fa:	e8 2d 15 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84153ff:	88 45 f3             	mov    %al,-0xd(%ebp)
 8415402:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8415406:	83 f0 01             	xor    $0x1,%eax
 8415409:	84 c0                	test   %al,%al
 841540b:	75 59                	jne    8415466 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1b6>
 841540d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8415410:	89 d0                	mov    %edx,%eax
 8415412:	01 c0                	add    %eax,%eax
 8415414:	01 d0                	add    %edx,%eax
 8415416:	c1 e0 02             	shl    $0x2,%eax
 8415419:	05 a0 3f 00 00       	add    $0x3fa0,%eax
 841541e:	03 45 0c             	add    0xc(%ebp),%eax
 8415421:	83 c0 14             	add    $0x14,%eax
 8415424:	89 44 24 08          	mov    %eax,0x8(%esp)
 8415428:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841542f:	00 
 8415430:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8415433:	89 04 24             	mov    %eax,(%esp)
 8415436:	e8 f1 14 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841543b:	88 45 f3             	mov    %al,-0xd(%ebp)
 841543e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8415442:	83 f0 01             	xor    $0x1,%eax
 8415445:	84 c0                	test   %al,%al
 8415447:	75 20                	jne    8415469 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1b9>
 8415449:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 841544d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8415450:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8415453:	0f 9c c0             	setl   %al
 8415456:	84 c0                	test   %al,%al
 8415458:	0f 85 06 ff ff ff    	jne    8415364 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0xb4>
 841545e:	eb 0a                	jmp    841546a <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1ba>
 8415460:	90                   	nop
 8415461:	eb 07                	jmp    841546a <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1ba>
 8415463:	90                   	nop
 8415464:	eb 04                	jmp    841546a <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1ba>
 8415466:	90                   	nop
 8415467:	eb 01                	jmp    841546a <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA+0x1ba>
 8415469:	90                   	nop
 841546a:	b8 01 00 00 00       	mov    $0x1,%eax
 841546f:	c9                   	leave
 8415470:	c3                   	ret
 8415471:	90                   	nop

```

```c
// DB_Login::GetUserInGameEventHistory @ 0x84152b0

/* DB_Login::GetUserInGameEventHistory(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetUserInGameEventHistory(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  memset(param_1 + 0x3fac,0,0x168);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect type , history_1 ,history_2 from event_ingame_history where m_id=%s order by type desc"
                   ,uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    for (local_10 = 0; local_10 < iVar3; local_10 = local_10 + 1) {
      if (0x1d < iVar3) {
        return 1;
      }
      cVar1 = MySQL::fetch(this_00);
      if ((((cVar1 != '\x01') ||
           (cVar1 = MySQL::get_int(this_00,0,(int *)(param_1 + local_10 * 0xc + 0x3fac)),
           cVar1 != '\x01')) ||
          (cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + local_10 * 0xc + 0x3fb0)),
          cVar1 != '\x01')) ||
         (cVar1 = MySQL::get_int(this_00,2,(int *)(param_1 + local_10 * 0xc + 0x3fb4)),
         cVar1 != '\x01')) break;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetWhiteAccount

```asm
// === 084143ac DB_Login::GetWhiteAccount  [0x084143ac-0x8414445] ===
 84143ac:	55                   	push   %ebp
 84143ad:	89 e5                	mov    %esp,%ebp
 84143af:	83 ec 28             	sub    $0x28,%esp
 84143b2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84143b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84143be:	00 
 84143bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84143c6:	00 
 84143c7:	89 04 24             	mov    %eax,(%esp)
 84143ca:	e8 6f 0e fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84143cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84143d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84143d5:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84143db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84143e2:	00 
 84143e3:	89 04 24             	mov    %eax,(%esp)
 84143e6:	e8 60 4c cf ff       	call   810904b <_Z14NumberToStringji>
 84143eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84143ef:	c7 44 24 04 dc 85 c4 	movl   $0x8c485dc,0x4(%esp)
 84143f6:	08 
 84143f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84143fa:	89 04 24             	mov    %eax,(%esp)
 84143fd:	e8 be fd fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8414402:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414409:	00 
 841440a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841440d:	89 04 24             	mov    %eax,(%esp)
 8414410:	e8 11 ff fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8414415:	83 f0 01             	xor    $0x1,%eax
 8414418:	84 c0                	test   %al,%al
 841441a:	74 07                	je     8414423 <_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA+0x77>
 841441c:	b8 00 00 00 00       	mov    $0x0,%eax
 8414421:	eb 20                	jmp    8414443 <_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA+0x97>
 8414423:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414426:	89 04 24             	mov    %eax,(%esp)
 8414429:	e8 3e df cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841442e:	85 c0                	test   %eax,%eax
 8414430:	0f 95 c0             	setne  %al
 8414433:	84 c0                	test   %al,%al
 8414435:	74 07                	je     841443e <_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA+0x92>
 8414437:	b8 01 00 00 00       	mov    $0x1,%eax
 841443c:	eb 05                	jmp    8414443 <_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA+0x97>
 841443e:	b8 00 00 00 00       	mov    $0x0,%eax
 8414443:	c9                   	leave
 8414444:	c3                   	ret
 8414445:	90                   	nop

```

```c
// DB_Login::GetWhiteAccount @ 0x84143ac

/* DB_Login::GetWhiteAccount(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetWhiteAccount(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,"seLect m_id from member_white_account where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## IsPCRoomIP

```asm
// === 08412c52 DB_Login::IsPCRoomIP  [0x08412c52-0x8412eb7] ===
 8412c52:	55                   	push   %ebp
 8412c53:	89 e5                	mov    %esp,%ebp
 8412c55:	56                   	push   %esi
 8412c56:	53                   	push   %ebx
 8412c57:	83 ec 40             	sub    $0x40,%esp
 8412c5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8412c5d:	89 04 24             	mov    %eax,(%esp)
 8412c60:	e8 49 ef ff ff       	call   8411bae <_ZN8DB_Login16_GetDNFAccountDBEv>
 8412c65:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8412c68:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8412c6c:	74 0a                	je     8412c78 <_ZN8DB_Login10IsPCRoomIPEPc+0x26>
 8412c6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412c71:	0f b6 00             	movzbl (%eax),%eax
 8412c74:	84 c0                	test   %al,%al
 8412c76:	75 0a                	jne    8412c82 <_ZN8DB_Login10IsPCRoomIPEPc+0x30>
 8412c78:	bb 00 00 00 00       	mov    $0x0,%ebx
 8412c7d:	e9 2d 02 00 00       	jmp    8412eaf <_ZN8DB_Login10IsPCRoomIPEPc+0x25d>
 8412c82:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8412c85:	89 04 24             	mov    %eax,(%esp)
 8412c88:	e8 43 d4 2c 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8412c8d:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8412c90:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412c94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412c97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8412c9b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412c9e:	89 04 24             	mov    %eax,(%esp)
 8412ca1:	e8 8a 49 2f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8412ca6:	eb 1b                	jmp    8412cc3 <_ZN8DB_Login10IsPCRoomIPEPc+0x71>
 8412ca8:	89 d3                	mov    %edx,%ebx
 8412caa:	89 c6                	mov    %eax,%esi
 8412cac:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8412caf:	89 04 24             	mov    %eax,(%esp)
 8412cb2:	e8 39 d4 2c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8412cb7:	89 f0                	mov    %esi,%eax
 8412cb9:	89 da                	mov    %ebx,%edx
 8412cbb:	89 04 24             	mov    %eax,(%esp)
 8412cbe:	e8 8d 0a 6d 00       	call   8ae3750 <_Unwind_Resume>
 8412cc3:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8412cc6:	89 04 24             	mov    %eax,(%esp)
 8412cc9:	e8 22 d4 2c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8412cce:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8412cd1:	89 04 24             	mov    %eax,(%esp)
 8412cd4:	e8 f7 d3 2c 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8412cd9:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8412cdc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412ce0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412ce3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8412ce7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412cea:	89 04 24             	mov    %eax,(%esp)
 8412ced:	e8 3e 49 2f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8412cf2:	eb 18                	jmp    8412d0c <_ZN8DB_Login10IsPCRoomIPEPc+0xba>
 8412cf4:	89 d3                	mov    %edx,%ebx
 8412cf6:	89 c6                	mov    %eax,%esi
 8412cf8:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8412cfb:	89 04 24             	mov    %eax,(%esp)
 8412cfe:	e8 ed d3 2c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8412d03:	89 f0                	mov    %esi,%eax
 8412d05:	89 da                	mov    %ebx,%edx
 8412d07:	e9 7d 01 00 00       	jmp    8412e89 <_ZN8DB_Login10IsPCRoomIPEPc+0x237>
 8412d0c:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8412d0f:	89 04 24             	mov    %eax,(%esp)
 8412d12:	e8 d9 d3 2c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8412d17:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8412d1e:	ff 
 8412d1f:	c7 44 24 04 c6 7d c4 	movl   $0x8c47dc6,0x4(%esp)
 8412d26:	08 
 8412d27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412d2a:	89 04 24             	mov    %eax,(%esp)
 8412d2d:	e8 8e 41 2f 00       	call   8706ec0 <_ZNKSs12find_last_ofEPKcj>
 8412d32:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8412d39:	ff 
 8412d3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8412d3e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412d41:	89 04 24             	mov    %eax,(%esp)
 8412d44:	e8 a7 5d 2f 00       	call   8708af0 <_ZNSs5eraseEjj>
 8412d49:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8412d50:	ff 
 8412d51:	c7 44 24 04 c6 7d c4 	movl   $0x8c47dc6,0x4(%esp)
 8412d58:	08 
 8412d59:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412d5c:	89 04 24             	mov    %eax,(%esp)
 8412d5f:	e8 5c 41 2f 00       	call   8706ec0 <_ZNKSs12find_last_ofEPKcj>
 8412d64:	83 c0 01             	add    $0x1,%eax
 8412d67:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412d6b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412d72:	00 
 8412d73:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412d76:	89 04 24             	mov    %eax,(%esp)
 8412d79:	e8 72 5d 2f 00       	call   8708af0 <_ZNSs5eraseEjj>
 8412d7e:	89 04 24             	mov    %eax,(%esp)
 8412d81:	e8 6a 37 2f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8412d86:	89 04 24             	mov    %eax,(%esp)
 8412d89:	e8 62 b9 c6 ff       	call   807e6f0 <atoi@plt>
 8412d8e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8412d91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412d94:	89 04 24             	mov    %eax,(%esp)
 8412d97:	e8 54 37 2f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8412d9c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8412d9f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8412da3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8412da6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8412daa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412dae:	c7 44 24 04 c8 7d c4 	movl   $0x8c47dc8,0x4(%esp)
 8412db5:	08 
 8412db6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412db9:	89 04 24             	mov    %eax,(%esp)
 8412dbc:	e8 ff 13 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412dc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412dc8:	00 
 8412dc9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412dcc:	89 04 24             	mov    %eax,(%esp)
 8412dcf:	e8 52 15 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412dd4:	83 f0 01             	xor    $0x1,%eax
 8412dd7:	84 c0                	test   %al,%al
 8412dd9:	75 0f                	jne    8412dea <_ZN8DB_Login10IsPCRoomIPEPc+0x198>
 8412ddb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412dde:	89 04 24             	mov    %eax,(%esp)
 8412de1:	e8 86 f5 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8412de6:	85 c0                	test   %eax,%eax
 8412de8:	75 07                	jne    8412df1 <_ZN8DB_Login10IsPCRoomIPEPc+0x19f>
 8412dea:	b8 01 00 00 00       	mov    $0x1,%eax
 8412def:	eb 05                	jmp    8412df6 <_ZN8DB_Login10IsPCRoomIPEPc+0x1a4>
 8412df1:	b8 00 00 00 00       	mov    $0x0,%eax
 8412df6:	84 c0                	test   %al,%al
 8412df8:	74 07                	je     8412e01 <_ZN8DB_Login10IsPCRoomIPEPc+0x1af>
 8412dfa:	bb 00 00 00 00       	mov    $0x0,%ebx
 8412dff:	eb 7b                	jmp    8412e7c <_ZN8DB_Login10IsPCRoomIPEPc+0x22a>
 8412e01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412e04:	89 04 24             	mov    %eax,(%esp)
 8412e07:	e8 b0 16 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8412e0c:	83 f0 01             	xor    $0x1,%eax
 8412e0f:	84 c0                	test   %al,%al
 8412e11:	74 07                	je     8412e1a <_ZN8DB_Login10IsPCRoomIPEPc+0x1c8>
 8412e13:	bb 00 00 00 00       	mov    $0x0,%ebx
 8412e18:	eb 62                	jmp    8412e7c <_ZN8DB_Login10IsPCRoomIPEPc+0x22a>
 8412e1a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8412e21:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8412e24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412e28:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412e2f:	00 
 8412e30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412e33:	89 04 24             	mov    %eax,(%esp)
 8412e36:	e8 f1 3a d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412e3b:	83 f0 01             	xor    $0x1,%eax
 8412e3e:	84 c0                	test   %al,%al
 8412e40:	75 07                	jne    8412e49 <_ZN8DB_Login10IsPCRoomIPEPc+0x1f7>
 8412e42:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8412e45:	85 c0                	test   %eax,%eax
 8412e47:	75 07                	jne    8412e50 <_ZN8DB_Login10IsPCRoomIPEPc+0x1fe>
 8412e49:	b8 01 00 00 00       	mov    $0x1,%eax
 8412e4e:	eb 05                	jmp    8412e55 <_ZN8DB_Login10IsPCRoomIPEPc+0x203>
 8412e50:	b8 00 00 00 00       	mov    $0x0,%eax
 8412e55:	84 c0                	test   %al,%al
 8412e57:	74 07                	je     8412e60 <_ZN8DB_Login10IsPCRoomIPEPc+0x20e>
 8412e59:	bb 00 00 00 00       	mov    $0x0,%ebx
 8412e5e:	eb 1c                	jmp    8412e7c <_ZN8DB_Login10IsPCRoomIPEPc+0x22a>
 8412e60:	bb 01 00 00 00       	mov    $0x1,%ebx
 8412e65:	eb 15                	jmp    8412e7c <_ZN8DB_Login10IsPCRoomIPEPc+0x22a>
 8412e67:	89 d3                	mov    %edx,%ebx
 8412e69:	89 c6                	mov    %eax,%esi
 8412e6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412e6e:	89 04 24             	mov    %eax,(%esp)
 8412e71:	e8 6a 4d 2f 00       	call   8707be0 <_ZNSsD1Ev>
 8412e76:	89 f0                	mov    %esi,%eax
 8412e78:	89 da                	mov    %ebx,%edx
 8412e7a:	eb 0d                	jmp    8412e89 <_ZN8DB_Login10IsPCRoomIPEPc+0x237>
 8412e7c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412e7f:	89 04 24             	mov    %eax,(%esp)
 8412e82:	e8 59 4d 2f 00       	call   8707be0 <_ZNSsD1Ev>
 8412e87:	eb 1b                	jmp    8412ea4 <_ZN8DB_Login10IsPCRoomIPEPc+0x252>
 8412e89:	89 d3                	mov    %edx,%ebx
 8412e8b:	89 c6                	mov    %eax,%esi
 8412e8d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412e90:	89 04 24             	mov    %eax,(%esp)
 8412e93:	e8 48 4d 2f 00       	call   8707be0 <_ZNSsD1Ev>
 8412e98:	89 f0                	mov    %esi,%eax
 8412e9a:	89 da                	mov    %ebx,%edx
 8412e9c:	89 04 24             	mov    %eax,(%esp)
 8412e9f:	e8 ac 08 6d 00       	call   8ae3750 <_Unwind_Resume>
 8412ea4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412ea7:	89 04 24             	mov    %eax,(%esp)
 8412eaa:	e8 31 4d 2f 00       	call   8707be0 <_ZNSsD1Ev>
 8412eaf:	89 d8                	mov    %ebx,%eax
 8412eb1:	83 c4 40             	add    $0x40,%esp
 8412eb4:	5b                   	pop    %ebx
 8412eb5:	5e                   	pop    %esi
 8412eb6:	5d                   	pop    %ebp
 8412eb7:	c3                   	ret

```

```c
// DB_Login::IsPCRoomIP @ 0x8412c52

/* DB_Login::IsPCRoomIP(char*) */

undefined4 __thiscall DB_Login::IsPCRoomIP(DB_Login *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  string *this_00;
  char *__nptr;
  undefined4 uVar5;
  int local_24;
  string local_20 [4];
  string local_1c [6];
  allocator<char> local_16;
  allocator<char> local_15;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)_GetDNFAccountDB();
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    std::allocator<char>::allocator();
                    /* try { // try from 08412ca1 to 08412ca5 has its CatchHandler @ 08412ca8 */
    std::string::string(local_1c,param_1,(allocator *)&local_16);
    std::allocator<char>::~allocator(&local_16);
    std::allocator<char>::allocator();
                    /* try { // try from 08412ced to 08412cf1 has its CatchHandler @ 08412cf4 */
    std::string::string(local_20,param_1,(allocator *)&local_15);
    std::allocator<char>::~allocator(&local_15);
                    /* try { // try from 08412d2d to 08412e0b has its CatchHandler @ 08412e67 */
    uVar3 = std::string::find_last_of(local_1c,".",0xffffffff);
    std::string::erase(local_1c,uVar3,0xffffffff);
    iVar4 = std::string::find_last_of(local_20,".",0xffffffff);
    this_00 = (string *)std::string::erase(local_20,0,iVar4 + 1);
    __nptr = (char *)std::string::c_str(this_00);
    local_10 = atoi(__nptr);
    uVar5 = std::string::c_str(local_1c);
    MySQL::set_query(local_14,
                     "seLect count(*) from dnf_pcroom where ip=\'%s\' and start_ip <= %d and end_ip >= %d"
                     ,uVar5,local_10,local_10);
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_14), iVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      cVar2 = MySQL::fetch(local_14);
      if (cVar2 == '\x01') {
        local_24 = 0;
        cVar2 = MySQL::get_int(local_14,0,&local_24);
        if ((cVar2 == '\x01') && (local_24 != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
    }
                    /* try { // try from 08412e82 to 08412e86 has its CatchHandler @ 08412e89 */
    std::string::~string(local_20);
    std::string::~string(local_1c);
    return uVar5;
  }
  return 0;
}

```

---

## IsThisIPLoginPermissionGranted

```asm
// === 0844b982 DB_Login::IsThisIPLoginPermissionGranted  [0x0844b982-0x844bb6f] ===
 844b982:	55                   	push   %ebp
 844b983:	89 e5                	mov    %esp,%ebp
 844b985:	83 ec 58             	sub    $0x58,%esp
 844b988:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844b98d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844b994:	00 
 844b995:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844b99c:	00 
 844b99d:	89 04 24             	mov    %eax,(%esp)
 844b9a0:	e8 99 98 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844b9a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844b9a8:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 844b9af:	8b 45 0c             	mov    0xc(%ebp),%eax
 844b9b2:	c6 80 b5 00 00 00 00 	movb   $0x0,0xb5(%eax)
 844b9b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 844b9bc:	05 a1 00 00 00       	add    $0xa1,%eax
 844b9c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 844b9c5:	c7 44 24 04 24 96 c5 	movl   $0x8c59624,0x4(%esp)
 844b9cc:	08 
 844b9cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b9d0:	89 04 24             	mov    %eax,(%esp)
 844b9d3:	e8 e8 87 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844b9d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844b9df:	00 
 844b9e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844b9e3:	89 04 24             	mov    %eax,(%esp)
 844b9e6:	e8 3b 89 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844b9eb:	83 f0 01             	xor    $0x1,%eax
 844b9ee:	84 c0                	test   %al,%al
 844b9f0:	74 40                	je     844ba32 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0xb0>
 844b9f2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844b9f9:	00 
 844b9fa:	c7 44 24 08 49 bc 00 	movl   $0xbc49,0x8(%esp)
 844ba01:	00 
 844ba02:	c7 44 24 04 80 aa c5 	movl   $0x8c5aa80,0x4(%esp)
 844ba09:	08 
 844ba0a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 844ba0d:	89 04 24             	mov    %eax,(%esp)
 844ba10:	e8 03 3d 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844ba15:	c7 44 24 04 5c 96 c5 	movl   $0x8c5965c,0x4(%esp)
 844ba1c:	08 
 844ba1d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 844ba20:	89 04 24             	mov    %eax,(%esp)
 844ba23:	e8 60 3d 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844ba28:	b8 00 00 00 00       	mov    $0x0,%eax
 844ba2d:	e9 3b 01 00 00       	jmp    844bb6d <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x1eb>
 844ba32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844ba35:	89 04 24             	mov    %eax,(%esp)
 844ba38:	e8 2f 69 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844ba3d:	85 c0                	test   %eax,%eax
 844ba3f:	0f 94 c0             	sete   %al
 844ba42:	84 c0                	test   %al,%al
 844ba44:	74 0a                	je     844ba50 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0xce>
 844ba46:	b8 01 00 00 00       	mov    $0x1,%eax
 844ba4b:	e9 1d 01 00 00       	jmp    844bb6d <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x1eb>
 844ba50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844ba53:	89 04 24             	mov    %eax,(%esp)
 844ba56:	e8 61 8a fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844ba5b:	83 f0 01             	xor    $0x1,%eax
 844ba5e:	84 c0                	test   %al,%al
 844ba60:	75 21                	jne    844ba83 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x101>
 844ba62:	8d 45 c0             	lea    -0x40(%ebp),%eax
 844ba65:	89 44 24 08          	mov    %eax,0x8(%esp)
 844ba69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844ba70:	00 
 844ba71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844ba74:	89 04 24             	mov    %eax,(%esp)
 844ba77:	e8 76 68 c9 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 844ba7c:	83 f0 01             	xor    $0x1,%eax
 844ba7f:	84 c0                	test   %al,%al
 844ba81:	74 07                	je     844ba8a <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x108>
 844ba83:	b8 01 00 00 00       	mov    $0x1,%eax
 844ba88:	eb 05                	jmp    844ba8f <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x10d>
 844ba8a:	b8 00 00 00 00       	mov    $0x0,%eax
 844ba8f:	84 c0                	test   %al,%al
 844ba91:	74 40                	je     844bad3 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x151>
 844ba93:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844ba9a:	00 
 844ba9b:	c7 44 24 08 52 bc 00 	movl   $0xbc52,0x8(%esp)
 844baa2:	00 
 844baa3:	c7 44 24 04 80 aa c5 	movl   $0x8c5aa80,0x4(%esp)
 844baaa:	08 
 844baab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844baae:	89 04 24             	mov    %eax,(%esp)
 844bab1:	e8 62 3c 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844bab6:	c7 44 24 04 84 96 c5 	movl   $0x8c59684,0x4(%esp)
 844babd:	08 
 844babe:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844bac1:	89 04 24             	mov    %eax,(%esp)
 844bac4:	e8 bf 3c 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844bac9:	b8 00 00 00 00       	mov    $0x0,%eax
 844bace:	e9 9a 00 00 00       	jmp    844bb6d <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x1eb>
 844bad3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 844bad6:	85 c0                	test   %eax,%eax
 844bad8:	74 0a                	je     844bae4 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x162>
 844bada:	8b 45 0c             	mov    0xc(%ebp),%eax
 844badd:	c6 80 b5 00 00 00 01 	movb   $0x1,0xb5(%eax)
 844bae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 844bae7:	8d 90 a1 00 00 00    	lea    0xa1(%eax),%edx
 844baed:	8b 45 0c             	mov    0xc(%ebp),%eax
 844baf0:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 844baf6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844bafa:	89 44 24 08          	mov    %eax,0x8(%esp)
 844bafe:	c7 44 24 04 a4 96 c5 	movl   $0x8c596a4,0x4(%esp)
 844bb05:	08 
 844bb06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bb09:	89 04 24             	mov    %eax,(%esp)
 844bb0c:	e8 af 86 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844bb11:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bb18:	00 
 844bb19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bb1c:	89 04 24             	mov    %eax,(%esp)
 844bb1f:	e8 02 88 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844bb24:	83 f0 01             	xor    $0x1,%eax
 844bb27:	84 c0                	test   %al,%al
 844bb29:	74 3d                	je     844bb68 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x1e6>
 844bb2b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844bb32:	00 
 844bb33:	c7 44 24 08 63 bc 00 	movl   $0xbc63,0x8(%esp)
 844bb3a:	00 
 844bb3b:	c7 44 24 04 80 aa c5 	movl   $0x8c5aa80,0x4(%esp)
 844bb42:	08 
 844bb43:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844bb46:	89 04 24             	mov    %eax,(%esp)
 844bb49:	e8 ca 3b 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844bb4e:	c7 44 24 04 f0 96 c5 	movl   $0x8c596f0,0x4(%esp)
 844bb55:	08 
 844bb56:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 844bb59:	89 04 24             	mov    %eax,(%esp)
 844bb5c:	e8 27 3c 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844bb61:	b8 00 00 00 00       	mov    $0x0,%eax
 844bb66:	eb 05                	jmp    844bb6d <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA+0x1eb>
 844bb68:	b8 01 00 00 00       	mov    $0x1,%eax
 844bb6d:	c9                   	leave
 844bb6e:	c3                   	ret
 844bb6f:	90                   	nop

```

```c
// DB_Login::IsThisIPLoginPermissionGranted @ 0x844b982

/* DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::IsThisIPLoginPermissionGranted(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_44;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_44 = 0;
  param_1[0xb5] = (SIG_LOGIN_DATA)0x0;
  MySQL::set_query(local_10,"seLect count(*) from geo_allow where allow_ip = \'%s\'",param_1 + 0xa1)
  ;
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 != '\x01') {
    cMyTrace::cMyTrace(local_40,"bool DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)",
                       0xbc49,5);
    cMyTrace::operator()(local_40,"[QUERY_ERROR] (select from geo_allow)");
    return 0;
  }
  iVar3 = MySQL::get_n_rows(local_10);
  if (iVar3 != 0) {
    cVar2 = MySQL::fetch(local_10);
    if ((cVar2 == '\x01') && (cVar2 = MySQL::get_uint(local_10,0,&local_44), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cMyTrace::cMyTrace(local_30,"bool DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)",
                         0xbc52,5);
      cMyTrace::operator()(local_30,"[QUERY_ERROR] (fetch get_uint)");
      uVar4 = 0;
    }
    else {
      if (local_44 != 0) {
        param_1[0xb5] = (SIG_LOGIN_DATA)0x1;
      }
      MySQL::set_query(local_10,
                       "insert into member_join_info(m_id, reg_date, ip) values(%d, now(), \'%s\')",
                       *(undefined4 *)(param_1 + 0xc0),param_1 + 0xa1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 == '\x01') {
        uVar4 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_20,"bool DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)"
                           ,0xbc63,5);
        cMyTrace::operator()(local_20,"[QUERY_ERROR] (insert into member_join_info)");
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 1;
}

```

---

## RemovePreminuInfo

```asm
// === 084128c4 DB_Login::RemovePreminuInfo  [0x084128c4-0x84129d5] ===
 84128c4:	55                   	push   %ebp
 84128c5:	89 e5                	mov    %esp,%ebp
 84128c7:	53                   	push   %ebx
 84128c8:	83 ec 34             	sub    $0x34,%esp
 84128cb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84128d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84128d7:	00 
 84128d8:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84128df:	00 
 84128e0:	89 04 24             	mov    %eax,(%esp)
 84128e3:	e8 56 29 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84128e8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84128eb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84128f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84128f5:	8b 55 10             	mov    0x10(%ebp),%edx
 84128f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84128fc:	89 04 24             	mov    %eax,(%esp)
 84128ff:	e8 44 b9 c7 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8412904:	83 ec 04             	sub    $0x4,%esp
 8412907:	8d 45 e8             	lea    -0x18(%ebp),%eax
 841290a:	89 44 24 04          	mov    %eax,0x4(%esp)
 841290e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412911:	89 04 24             	mov    %eax,(%esp)
 8412914:	e8 d3 70 ce ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8412919:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841291c:	8b 55 10             	mov    0x10(%ebp),%edx
 841291f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8412923:	89 04 24             	mov    %eax,(%esp)
 8412926:	e8 41 b9 c7 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 841292b:	83 ec 04             	sub    $0x4,%esp
 841292e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8412931:	89 44 24 04          	mov    %eax,0x4(%esp)
 8412935:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8412938:	89 04 24             	mov    %eax,(%esp)
 841293b:	e8 ac 70 ce ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8412940:	eb 75                	jmp    84129b7 <_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE+0xf3>
 8412942:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412945:	89 04 24             	mov    %eax,(%esp)
 8412948:	e8 cf 70 ce ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 841294d:	8b 18                	mov    (%eax),%ebx
 841294f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412952:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8412958:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841295f:	00 
 8412960:	89 04 24             	mov    %eax,(%esp)
 8412963:	e8 e3 66 cf ff       	call   810904b <_Z14NumberToStringji>
 8412968:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 841296c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412970:	c7 44 24 04 08 7d c4 	movl   $0x8c47d08,0x4(%esp)
 8412977:	08 
 8412978:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841297b:	89 04 24             	mov    %eax,(%esp)
 841297e:	e8 3d 18 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412983:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841298a:	00 
 841298b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841298e:	89 04 24             	mov    %eax,(%esp)
 8412991:	e8 90 19 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412996:	83 f0 01             	xor    $0x1,%eax
 8412999:	84 c0                	test   %al,%al
 841299b:	75 0e                	jne    84129ab <_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE+0xe7>
 841299d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84129a0:	0f b6 80 38 29 00 00 	movzbl 0x2938(%eax),%eax
 84129a7:	84 c0                	test   %al,%al
 84129a9:	eb 01                	jmp    84129ac <_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE+0xe8>
 84129ab:	90                   	nop
 84129ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84129af:	89 04 24             	mov    %eax,(%esp)
 84129b2:	e8 4f 70 ce ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 84129b7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84129ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 84129be:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84129c1:	89 04 24             	mov    %eax,(%esp)
 84129c4:	e8 5d 70 ce ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 84129c9:	84 c0                	test   %al,%al
 84129cb:	0f 85 71 ff ff ff    	jne    8412942 <_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE+0x7e>
 84129d1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84129d4:	c9                   	leave
 84129d5:	c3                   	ret

```

```c
// DB_Login::RemovePreminuInfo @ 0x84128c4

/* DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA*, std::vector<int, std::allocator<int> >&) */

void DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA *param_1,vector *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_24 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  MySQL *local_14;
  undefined4 local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = 0;
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_20,local_1c);
  std::vector<int,std::allocator<int>>::end();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_24,local_18);
  while (bVar2 = __gnu_cxx::operator!=(local_20,local_24), bVar2) {
    puVar3 = (undefined4 *)
             __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
             operator*(local_20);
    uVar1 = *puVar3;
    uVar4 = NumberToString(*(uint *)(param_2 + 0xc0),0);
    MySQL::set_query(local_14,"deLete from dnf_event_entry where m_id=%s and event_id=%d",uVar4,
                     uVar1);
    MySQL::exec(local_14,true);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_20);
  }
  return;
}

```

---

## SaveLoginTime

```asm
// === 084148a6 DB_Login::SaveLoginTime  [0x084148a6-0x84149cd] ===
 84148a6:	55                   	push   %ebp
 84148a7:	89 e5                	mov    %esp,%ebp
 84148a9:	53                   	push   %ebx
 84148aa:	83 ec 54             	sub    $0x54,%esp
 84148ad:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84148b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84148b9:	00 
 84148ba:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84148c1:	00 
 84148c2:	89 04 24             	mov    %eax,(%esp)
 84148c5:	e8 74 09 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84148ca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84148cd:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84148d4:	00 
 84148d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84148dc:	00 
 84148dd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84148e0:	89 04 24             	mov    %eax,(%esp)
 84148e3:	e8 d8 93 c6 ff       	call   807dcc0 <memset@plt>
 84148e8:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 84148ef:	00 
 84148f0:	c7 44 24 04 72 87 c4 	movl   $0x8c48772,0x4(%esp)
 84148f7:	08 
 84148f8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84148fb:	89 04 24             	mov    %eax,(%esp)
 84148fe:	e8 9d 8f c6 ff       	call   807d8a0 <memcpy@plt>
 8414903:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841490a:	00 
 841490b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841490e:	89 04 24             	mov    %eax,(%esp)
 8414911:	e8 35 47 cf ff       	call   810904b <_Z14NumberToStringji>
 8414916:	8b 55 14             	mov    0x14(%ebp),%edx
 8414919:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 841491d:	8b 55 10             	mov    0x10(%ebp),%edx
 8414920:	89 54 24 18          	mov    %edx,0x18(%esp)
 8414924:	8b 55 14             	mov    0x14(%ebp),%edx
 8414927:	89 54 24 14          	mov    %edx,0x14(%esp)
 841492b:	8b 55 10             	mov    0x10(%ebp),%edx
 841492e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8414932:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8414936:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8414939:	89 44 24 08          	mov    %eax,0x8(%esp)
 841493d:	c7 44 24 04 80 87 c4 	movl   $0x8c48780,0x4(%esp)
 8414944:	08 
 8414945:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414948:	89 04 24             	mov    %eax,(%esp)
 841494b:	e8 70 f8 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8414950:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414957:	00 
 8414958:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841495b:	89 04 24             	mov    %eax,(%esp)
 841495e:	e8 c3 f9 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8414963:	83 f0 01             	xor    $0x1,%eax
 8414966:	84 c0                	test   %al,%al
 8414968:	74 5d                	je     84149c7 <_ZN8DB_Login13SaveLoginTimeEjiPc+0x121>
 841496a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414971:	00 
 8414972:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414975:	89 04 24             	mov    %eax,(%esp)
 8414978:	e8 ce 46 cf ff       	call   810904b <_Z14NumberToStringji>
 841497d:	89 c3                	mov    %eax,%ebx
 841497f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8414986:	00 
 8414987:	c7 44 24 08 d1 3b 00 	movl   $0x3bd1,0x8(%esp)
 841498e:	00 
 841498f:	c7 44 24 04 80 ce c5 	movl   $0x8c5ce80,0x4(%esp)
 8414996:	08 
 8414997:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 841499a:	89 04 24             	mov    %eax,(%esp)
 841499d:	e8 76 ad 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84149a2:	8b 45 14             	mov    0x14(%ebp),%eax
 84149a5:	89 44 24 10          	mov    %eax,0x10(%esp)
 84149a9:	8b 45 10             	mov    0x10(%ebp),%eax
 84149ac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84149b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84149b4:	c7 44 24 04 f8 87 c4 	movl   $0x8c487f8,0x4(%esp)
 84149bb:	08 
 84149bc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84149bf:	89 04 24             	mov    %eax,(%esp)
 84149c2:	e8 c1 ad 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84149c7:	83 c4 54             	add    $0x54,%esp
 84149ca:	5b                   	pop    %ebx
 84149cb:	5d                   	pop    %ebp
 84149cc:	c3                   	ret
 84149cd:	90                   	nop

```

```c
// DB_Login::SaveLoginTime @ 0x84148a6

/* DB_Login::SaveLoginTime(unsigned int, int, char*) */

void __thiscall DB_Login::SaveLoginTime(DB_Login *this,uint param_1,int param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_34 [20];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  memset(local_34,0,0x14);
  memcpy(local_34,"member_login",0xd);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "inSert into %s(m_id, login_time, login_ip) values(%s, %d, \'%s\') on duplicate key upDate login_time=%d, login_ip=\'%s\'"
                   ,local_34,uVar2,param_2,param_3,param_2,param_3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_20,
                       "void DB_Login::SaveLoginTime(memberIdentificationNumber_t, int, char*)",
                       0x3bd1,0);
    cMyTrace::operator()
              (local_20,"DB_Login::SaveLoginTime, inSert ERROR m_id=%s, logintime=%d, ip=%s",uVar2,
               param_2,param_3);
  }
  return;
}

```

---

## SendResult

```asm
// === 08414c6e DB_Login::SendResult  [0x08414c6e-0x8414d4f] ===
 8414c6e:	55                   	push   %ebp
 8414c6f:	89 e5                	mov    %esp,%ebp
 8414c71:	56                   	push   %esi
 8414c72:	53                   	push   %ebx
 8414c73:	83 ec 20             	sub    $0x20,%esp
 8414c76:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 8414c7b:	c7 44 24 08 49 3c 00 	movl   $0x3c49,0x8(%esp)
 8414c82:	00 
 8414c83:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8414c8a:	08 
 8414c8b:	89 04 24             	mov    %eax,(%esp)
 8414c8e:	e8 cf b5 e7 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 8414c93:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8414c9a:	00 
 8414c9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8414c9f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8414ca2:	89 04 24             	mov    %eax,(%esp)
 8414ca5:	e8 7c 3f cb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8414caa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8414cad:	89 04 24             	mov    %eax,(%esp)
 8414cb0:	e8 91 3f cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8414cb5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8414cb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8414cbc:	89 04 24             	mov    %eax,(%esp)
 8414cbf:	e8 92 3f cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8414cc4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8414cc7:	89 04 24             	mov    %eax,(%esp)
 8414cca:	e8 77 3f cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8414ccf:	8b 55 10             	mov    0x10(%ebp),%edx
 8414cd2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8414cd6:	89 04 24             	mov    %eax,(%esp)
 8414cd9:	e8 78 3f cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8414cde:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8414ce1:	89 04 24             	mov    %eax,(%esp)
 8414ce4:	e8 65 3f cb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8414ce9:	c7 44 24 08 58 43 00 	movl   $0x4358,0x8(%esp)
 8414cf0:	00 
 8414cf1:	8b 55 14             	mov    0x14(%ebp),%edx
 8414cf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8414cf8:	89 04 24             	mov    %eax,(%esp)
 8414cfb:	e8 52 99 cc ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8414d00:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8414d05:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8414d08:	89 54 24 08          	mov    %edx,0x8(%esp)
 8414d0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414d13:	00 
 8414d14:	89 04 24             	mov    %eax,(%esp)
 8414d17:	e8 c2 c2 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8414d1c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8414d21:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8414d24:	89 04 24             	mov    %eax,(%esp)
 8414d27:	e8 a6 7b 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8414d2c:	89 d8                	mov    %ebx,%eax
 8414d2e:	83 c4 20             	add    $0x20,%esp
 8414d31:	5b                   	pop    %ebx
 8414d32:	5e                   	pop    %esi
 8414d33:	5d                   	pop    %ebp
 8414d34:	c3                   	ret
 8414d35:	89 d3                	mov    %edx,%ebx
 8414d37:	89 c6                	mov    %eax,%esi
 8414d39:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8414d3c:	89 04 24             	mov    %eax,(%esp)
 8414d3f:	e8 8e 7b 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8414d44:	89 f0                	mov    %esi,%eax
 8414d46:	89 da                	mov    %ebx,%edx
 8414d48:	89 04 24             	mov    %eax,(%esp)
 8414d4b:	e8 00 ea 6c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_Login::SendResult @ 0x8414c6e

/* DB_Login::SendResult(int, int, SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::SendResult(DB_Login *this,int param_1,int param_2,SIG_LOGIN_DATA *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x3c49);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08414cbf to 08414d1b has its CatchHandler @ 08414d35 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x4358);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## UpdateLoginStat

```asm
// === 08414d50 DB_Login::UpdateLoginStat  [0x08414d50-0x8414e79] ===
 8414d50:	55                   	push   %ebp
 8414d51:	89 e5                	mov    %esp,%ebp
 8414d53:	56                   	push   %esi
 8414d54:	53                   	push   %ebx
 8414d55:	83 ec 20             	sub    $0x20,%esp
 8414d58:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8414d5d:	c7 44 24 08 5d 3c 00 	movl   $0x3c5d,0x8(%esp)
 8414d64:	00 
 8414d65:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8414d6c:	08 
 8414d6d:	89 04 24             	mov    %eax,(%esp)
 8414d70:	e8 11 ad e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8414d75:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8414d7c:	00 
 8414d7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8414d81:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8414d84:	89 04 24             	mov    %eax,(%esp)
 8414d87:	e8 9a 3e cb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8414d8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8414d8f:	89 04 24             	mov    %eax,(%esp)
 8414d92:	e8 af 3e cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8414d97:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 8414d9e:	00 
 8414d9f:	89 04 24             	mov    %eax,(%esp)
 8414da2:	e8 af 3e cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8414da7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8414daa:	89 04 24             	mov    %eax,(%esp)
 8414dad:	e8 94 3e cb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8414db2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8414db5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8414db9:	89 04 24             	mov    %eax,(%esp)
 8414dbc:	e8 95 3e cb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8414dc1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8414dc4:	89 04 24             	mov    %eax,(%esp)
 8414dc7:	e8 82 3e cb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8414dcc:	89 04 24             	mov    %eax,(%esp)
 8414dcf:	e8 4a bc 03 00       	call   8450a1e <_ZN12CStreamGuard11GetInBufferI16SIG_UPDATE_LOGINEEPT_v>
 8414dd4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8414dd7:	8b 45 10             	mov    0x10(%ebp),%eax
 8414dda:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 8414de0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414de3:	89 10                	mov    %edx,(%eax)
 8414de5:	8b 45 10             	mov    0x10(%ebp),%eax
 8414de8:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 8414def:	0f bf d0             	movswl %ax,%edx
 8414df2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414df5:	89 50 08             	mov    %edx,0x8(%eax)
 8414df8:	8b 45 10             	mov    0x10(%ebp),%eax
 8414dfb:	8b 90 9c 00 00 00    	mov    0x9c(%eax),%edx
 8414e01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414e04:	89 50 04             	mov    %edx,0x4(%eax)
 8414e07:	8b 45 10             	mov    0x10(%ebp),%eax
 8414e0a:	8d 90 a1 00 00 00    	lea    0xa1(%eax),%edx
 8414e10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414e13:	83 c0 0c             	add    $0xc,%eax
 8414e16:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8414e1d:	00 
 8414e1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8414e22:	89 04 24             	mov    %eax,(%esp)
 8414e25:	e8 a6 8a c6 ff       	call   807d8d0 <strncpy@plt>
 8414e2a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8414e2f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8414e32:	89 54 24 08          	mov    %edx,0x8(%esp)
 8414e36:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8414e3d:	00 
 8414e3e:	89 04 24             	mov    %eax,(%esp)
 8414e41:	e8 98 c1 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8414e46:	bb 01 00 00 00       	mov    $0x1,%ebx
 8414e4b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8414e4e:	89 04 24             	mov    %eax,(%esp)
 8414e51:	e8 7c 7a 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8414e56:	89 d8                	mov    %ebx,%eax
 8414e58:	83 c4 20             	add    $0x20,%esp
 8414e5b:	5b                   	pop    %ebx
 8414e5c:	5e                   	pop    %esi
 8414e5d:	5d                   	pop    %ebp
 8414e5e:	c3                   	ret
 8414e5f:	89 d3                	mov    %edx,%ebx
 8414e61:	89 c6                	mov    %eax,%esi
 8414e63:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8414e66:	89 04 24             	mov    %eax,(%esp)
 8414e69:	e8 64 7a 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8414e6e:	89 f0                	mov    %esi,%eax
 8414e70:	89 da                	mov    %ebx,%edx
 8414e72:	89 04 24             	mov    %eax,(%esp)
 8414e75:	e8 d6 e8 6c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_Login::UpdateLoginStat @ 0x8414d50

/* DB_Login::UpdateLoginStat(int, SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::UpdateLoginStat(DB_Login *this,int param_1,SIG_LOGIN_DATA *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_LOGIN *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x3c5d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08414da2 to 08414e45 has its CatchHandler @ 08414e5f */
  CStreamGuard::operator<<(pCVar2,0x2b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_LOGIN>(pCVar2);
  *(undefined4 *)local_10 = *(undefined4 *)(param_2 + 0xc0);
  *(int *)(local_10 + 8) = (int)*(short *)(param_2 + 0x3a38);
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(param_2 + 0x9c);
  strncpy((char *)(local_10 + 0xc),(char *)(param_2 + 0xa1),0x14);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## _DecryptUserInfo

```asm
// === 0841300e DB_Login::_DecryptUserInfo  [0x0841300e-0x841325d] ===
 841300e:	55                   	push   %ebp
 841300f:	89 e5                	mov    %esp,%ebp
 8413011:	57                   	push   %edi
 8413012:	56                   	push   %esi
 8413013:	53                   	push   %ebx
 8413014:	81 ec 5c 05 00 00    	sub    $0x55c,%esp
 841301a:	c7 45 e4 ff ff ff 6f 	movl   $0x6fffffff,-0x1c(%ebp)
 8413021:	8d 85 b8 fa ff ff    	lea    -0x548(%ebp),%eax
 8413027:	89 04 24             	mov    %eax,(%esp)
 841302a:	e8 7d 30 ca ff       	call   80b60ac <_ZN9CRijndaelC1Ev>
 841302f:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8413036:	00 
 8413037:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 841303e:	00 
 841303f:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 8413046:	00 
 8413047:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 841304e:	00 
 841304f:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 8413056:	08 
 8413057:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 841305e:	00 
 841305f:	c7 44 24 04 86 7f c4 	movl   $0x8c47f86,0x4(%esp)
 8413066:	08 
 8413067:	8d 85 b8 fa ff ff    	lea    -0x548(%ebp),%eax
 841306d:	89 04 24             	mov    %eax,(%esp)
 8413070:	e8 ab 31 ca ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 8413075:	8d 9d 34 ff ff ff    	lea    -0xcc(%ebp),%ebx
 841307b:	b8 00 00 00 00       	mov    $0x0,%eax
 8413080:	ba 20 00 00 00       	mov    $0x20,%edx
 8413085:	89 df                	mov    %ebx,%edi
 8413087:	89 d1                	mov    %edx,%ecx
 8413089:	f3 ab                	rep stos %eax,%es:(%edi)
 841308b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841308e:	89 04 24             	mov    %eax,(%esp)
 8413091:	e8 1a b3 c6 ff       	call   807e3b0 <strlen@plt>
 8413096:	d1 e8                	shr    $1,%eax
 8413098:	3d 80 00 00 00       	cmp    $0x80,%eax
 841309d:	76 59                	jbe    84130f8 <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0xea>
 841309f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84130a6:	00 
 84130a7:	8b 45 14             	mov    0x14(%ebp),%eax
 84130aa:	89 04 24             	mov    %eax,(%esp)
 84130ad:	e8 99 5f cf ff       	call   810904b <_Z14NumberToStringji>
 84130b2:	89 c3                	mov    %eax,%ebx
 84130b4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84130bb:	00 
 84130bc:	c7 44 24 08 15 38 00 	movl   $0x3815,0x8(%esp)
 84130c3:	00 
 84130c4:	c7 44 24 04 60 cf c5 	movl   $0x8c5cf60,0x4(%esp)
 84130cb:	08 
 84130cc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84130cf:	89 04 24             	mov    %eax,(%esp)
 84130d2:	e8 41 c6 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84130d7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84130db:	c7 44 24 04 98 7f c4 	movl   $0x8c47f98,0x4(%esp)
 84130e2:	08 
 84130e3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84130e6:	89 04 24             	mov    %eax,(%esp)
 84130e9:	e8 9a c6 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84130ee:	bb 00 00 00 00       	mov    $0x0,%ebx
 84130f3:	e9 4b 01 00 00       	jmp    8413243 <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0x235>
 84130f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84130fb:	89 04 24             	mov    %eax,(%esp)
 84130fe:	e8 ad b2 c6 ff       	call   807e3b0 <strlen@plt>
 8413103:	d1 e8                	shr    $1,%eax
 8413105:	89 c2                	mov    %eax,%edx
 8413107:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 841310d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8413111:	89 44 24 04          	mov    %eax,0x4(%esp)
 8413115:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413118:	89 04 24             	mov    %eax,(%esp)
 841311b:	e8 af 57 cf ff       	call   81088cf <_ZN7DNFFLib10Hex2BinaryEPKcPhi>
 8413120:	83 f0 01             	xor    $0x1,%eax
 8413123:	84 c0                	test   %al,%al
 8413125:	74 59                	je     8413180 <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0x172>
 8413127:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841312e:	00 
 841312f:	8b 45 14             	mov    0x14(%ebp),%eax
 8413132:	89 04 24             	mov    %eax,(%esp)
 8413135:	e8 11 5f cf ff       	call   810904b <_Z14NumberToStringji>
 841313a:	89 c3                	mov    %eax,%ebx
 841313c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8413143:	00 
 8413144:	c7 44 24 08 1b 38 00 	movl   $0x381b,0x8(%esp)
 841314b:	00 
 841314c:	c7 44 24 04 60 cf c5 	movl   $0x8c5cf60,0x4(%esp)
 8413153:	08 
 8413154:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8413157:	89 04 24             	mov    %eax,(%esp)
 841315a:	e8 b9 c5 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841315f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413163:	c7 44 24 04 c4 7f c4 	movl   $0x8c47fc4,0x4(%esp)
 841316a:	08 
 841316b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 841316e:	89 04 24             	mov    %eax,(%esp)
 8413171:	e8 12 c6 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413176:	bb 00 00 00 00       	mov    $0x0,%ebx
 841317b:	e9 c3 00 00 00       	jmp    8413243 <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0x235>
 8413180:	8b 45 0c             	mov    0xc(%ebp),%eax
 8413183:	89 04 24             	mov    %eax,(%esp)
 8413186:	e8 25 b2 c6 ff       	call   807e3b0 <strlen@plt>
 841318b:	d1 e8                	shr    $1,%eax
 841318d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8413191:	8b 45 10             	mov    0x10(%ebp),%eax
 8413194:	89 44 24 08          	mov    %eax,0x8(%esp)
 8413198:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 841319e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84131a2:	8d 85 b8 fa ff ff    	lea    -0x548(%ebp),%eax
 84131a8:	89 04 24             	mov    %eax,(%esp)
 84131ab:	e8 78 4e ca ff       	call   80b8028 <_ZN9CRijndael7DecryptEPKcPcj>
 84131b0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84131b3:	81 7d e4 ff ff ff 6f 	cmpl   $0x6fffffff,-0x1c(%ebp)
 84131ba:	0f 95 c0             	setne  %al
 84131bd:	84 c0                	test   %al,%al
 84131bf:	74 5d                	je     841321e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0x210>
 84131c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84131c8:	00 
 84131c9:	8b 45 14             	mov    0x14(%ebp),%eax
 84131cc:	89 04 24             	mov    %eax,(%esp)
 84131cf:	e8 77 5e cf ff       	call   810904b <_Z14NumberToStringji>
 84131d4:	89 c3                	mov    %eax,%ebx
 84131d6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84131dd:	00 
 84131de:	c7 44 24 08 20 38 00 	movl   $0x3820,0x8(%esp)
 84131e5:	00 
 84131e6:	c7 44 24 04 60 cf c5 	movl   $0x8c5cf60,0x4(%esp)
 84131ed:	08 
 84131ee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84131f1:	89 04 24             	mov    %eax,(%esp)
 84131f4:	e8 1f c5 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84131f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84131fc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8413200:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8413204:	c7 44 24 04 fc 7f c4 	movl   $0x8c47ffc,0x4(%esp)
 841320b:	08 
 841320c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841320f:	89 04 24             	mov    %eax,(%esp)
 8413212:	e8 71 c5 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8413217:	bb 00 00 00 00       	mov    $0x0,%ebx
 841321c:	eb 25                	jmp    8413243 <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0x235>
 841321e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8413223:	eb 1e                	jmp    8413243 <_ZN8DB_Login16_DecryptUserInfoEPcS0_j+0x235>
 8413225:	89 d3                	mov    %edx,%ebx
 8413227:	89 c6                	mov    %eax,%esi
 8413229:	8d 85 b8 fa ff ff    	lea    -0x548(%ebp),%eax
 841322f:	89 04 24             	mov    %eax,(%esp)
 8413232:	e8 9b 2f ca ff       	call   80b61d2 <_ZN9CRijndaelD1Ev>
 8413237:	89 f0                	mov    %esi,%eax
 8413239:	89 da                	mov    %ebx,%edx
 841323b:	89 04 24             	mov    %eax,(%esp)
 841323e:	e8 0d 05 6d 00       	call   8ae3750 <_Unwind_Resume>
 8413243:	8d 85 b8 fa ff ff    	lea    -0x548(%ebp),%eax
 8413249:	89 04 24             	mov    %eax,(%esp)
 841324c:	e8 81 2f ca ff       	call   80b61d2 <_ZN9CRijndaelD1Ev>
 8413251:	89 d8                	mov    %ebx,%eax
 8413253:	81 c4 5c 05 00 00    	add    $0x55c,%esp
 8413259:	5b                   	pop    %ebx
 841325a:	5e                   	pop    %esi
 841325b:	5f                   	pop    %edi
 841325c:	5d                   	pop    %ebp
 841325d:	c3                   	ret

```

```c
// DB_Login::_DecryptUserInfo @ 0x841300e

/* DB_Login::_DecryptUserInfo(char*, char*, unsigned int) */

undefined4 __thiscall
DB_Login::_DecryptUserInfo(DB_Login *this,char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  uchar *puVar5;
  byte bVar6;
  CRijndael local_54c [1148];
  uchar local_d0 [128];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  bVar6 = 0;
  local_20 = 0x6fffffff;
  CRijndael::CRijndael(local_54c);
                    /* try { // try from 08413070 to 08413216 has its CatchHandler @ 08413225 */
  CRijndael::Initialize(local_54c,"sbTgiYsfxpfg5fox",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  puVar5 = local_d0;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  sVar2 = strlen(param_1);
  if (sVar2 >> 1 < 0x81) {
    sVar2 = strlen(param_1);
    cVar1 = DNFFLib::Hex2Binary(param_1,local_d0,sVar2 >> 1);
    if (cVar1 == '\x01') {
      sVar2 = strlen(param_1);
      local_20 = CRijndael::Decrypt(local_54c,(char *)local_d0,param_2,sVar2 >> 1);
      if (local_20 == 0x6fffffff) {
        uVar3 = 1;
      }
      else {
        uVar3 = NumberToString(param_3,0);
        cMyTrace::cMyTrace(local_30,
                           "bool DB_Login::_DecryptUserInfo(char*, char*, memberIdentificationNumber_t)"
                           ,0x3820,5);
        cMyTrace::operator()
                  (local_30,"DB_Login::_DecryptUserInfo::Decrypt ERROR m_id=%s ret=%u",uVar3,
                   local_20);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = NumberToString(param_3,0);
      cMyTrace::cMyTrace(local_40,
                         "bool DB_Login::_DecryptUserInfo(char*, char*, memberIdentificationNumber_t)"
                         ,0x381b,5);
      cMyTrace::operator()(local_40,"DB_Login::_DecryptUserInfo::Hex2Binary ERROR m_id=%s",uVar3);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = NumberToString(param_3,0);
    cMyTrace::cMyTrace(local_50,
                       "bool DB_Login::_DecryptUserInfo(char*, char*, memberIdentificationNumber_t)"
                       ,0x3815,5);
    cMyTrace::operator()(local_50,"DB_Login::_DecryptUserInfo ERROR m_id=%s",uVar3);
    uVar3 = 0;
  }
  CRijndael::~CRijndael(local_54c);
  return uVar3;
}

```

---

## _GetDNFAccountDB

```asm
// === 08411bae DB_Login::_GetDNFAccountDB  [0x08411bae-0x8411bd9] ===
 8411bae:	55                   	push   %ebp
 8411baf:	89 e5                	mov    %esp,%ebp
 8411bb1:	83 ec 28             	sub    $0x28,%esp
 8411bb4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8411bb9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8411bc0:	00 
 8411bc1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411bc8:	00 
 8411bc9:	89 04 24             	mov    %eax,(%esp)
 8411bcc:	e8 6d 36 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8411bd1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8411bd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411bd7:	c9                   	leave
 8411bd8:	c3                   	ret
 8411bd9:	90                   	nop

```

```c
// DB_Login::_GetDNFAccountDB @ 0x8411bae

/* DB_Login::_GetDNFAccountDB() */

undefined4 DB_Login::_GetDNFAccountDB(void)

{
  undefined4 uVar1;
  
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  return uVar1;
}

```

---

## _IsPunishedUser

```asm
// === 084129d6 DB_Login::_IsPunishedUser  [0x084129d6-0x8412ac7] ===
 84129d6:	55                   	push   %ebp
 84129d7:	89 e5                	mov    %esp,%ebp
 84129d9:	83 ec 28             	sub    $0x28,%esp
 84129dc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84129e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84129e8:	00 
 84129e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84129f0:	00 
 84129f1:	89 04 24             	mov    %eax,(%esp)
 84129f4:	e8 45 28 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84129f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84129fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412a03:	00 
 8412a04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412a07:	89 04 24             	mov    %eax,(%esp)
 8412a0a:	e8 3c 66 cf ff       	call   810904b <_Z14NumberToStringji>
 8412a0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412a13:	c7 44 24 04 44 7d c4 	movl   $0x8c47d44,0x4(%esp)
 8412a1a:	08 
 8412a1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8412a1e:	89 04 24             	mov    %eax,(%esp)
 8412a21:	e8 9a 17 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412a26:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412a2d:	00 
 8412a2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8412a31:	89 04 24             	mov    %eax,(%esp)
 8412a34:	e8 ed 18 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412a39:	83 f0 01             	xor    $0x1,%eax
 8412a3c:	84 c0                	test   %al,%al
 8412a3e:	74 07                	je     8412a47 <_ZN8DB_Login15_IsPunishedUserEj+0x71>
 8412a40:	b8 00 00 00 00       	mov    $0x0,%eax
 8412a45:	eb 7f                	jmp    8412ac6 <_ZN8DB_Login15_IsPunishedUserEj+0xf0>
 8412a47:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8412a4a:	89 04 24             	mov    %eax,(%esp)
 8412a4d:	e8 1a f9 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8412a52:	85 c0                	test   %eax,%eax
 8412a54:	0f 94 c0             	sete   %al
 8412a57:	84 c0                	test   %al,%al
 8412a59:	74 07                	je     8412a62 <_ZN8DB_Login15_IsPunishedUserEj+0x8c>
 8412a5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8412a60:	eb 64                	jmp    8412ac6 <_ZN8DB_Login15_IsPunishedUserEj+0xf0>
 8412a62:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8412a65:	89 04 24             	mov    %eax,(%esp)
 8412a68:	e8 4f 1a fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8412a6d:	83 f0 01             	xor    $0x1,%eax
 8412a70:	84 c0                	test   %al,%al
 8412a72:	74 07                	je     8412a7b <_ZN8DB_Login15_IsPunishedUserEj+0xa5>
 8412a74:	b8 00 00 00 00       	mov    $0x0,%eax
 8412a79:	eb 4b                	jmp    8412ac6 <_ZN8DB_Login15_IsPunishedUserEj+0xf0>
 8412a7b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8412a82:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8412a85:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412a89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412a90:	00 
 8412a91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8412a94:	89 04 24             	mov    %eax,(%esp)
 8412a97:	e8 90 3e d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412a9c:	83 f0 01             	xor    $0x1,%eax
 8412a9f:	84 c0                	test   %al,%al
 8412aa1:	75 07                	jne    8412aaa <_ZN8DB_Login15_IsPunishedUserEj+0xd4>
 8412aa3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412aa6:	85 c0                	test   %eax,%eax
 8412aa8:	75 07                	jne    8412ab1 <_ZN8DB_Login15_IsPunishedUserEj+0xdb>
 8412aaa:	b8 01 00 00 00       	mov    $0x1,%eax
 8412aaf:	eb 05                	jmp    8412ab6 <_ZN8DB_Login15_IsPunishedUserEj+0xe0>
 8412ab1:	b8 00 00 00 00       	mov    $0x0,%eax
 8412ab6:	84 c0                	test   %al,%al
 8412ab8:	74 07                	je     8412ac1 <_ZN8DB_Login15_IsPunishedUserEj+0xeb>
 8412aba:	b8 00 00 00 00       	mov    $0x0,%eax
 8412abf:	eb 05                	jmp    8412ac6 <_ZN8DB_Login15_IsPunishedUserEj+0xf0>
 8412ac1:	b8 01 00 00 00       	mov    $0x1,%eax
 8412ac6:	c9                   	leave
 8412ac7:	c3                   	ret

```

```c
// DB_Login::_IsPunishedUser @ 0x84129d6

/* DB_Login::_IsPunishedUser(unsigned int) */

undefined4 __thiscall DB_Login::_IsPunishedUser(DB_Login *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect count(*) from user_ban where m_id=%s and status=1",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_10);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = MySQL::fetch(local_10);
      if (cVar2 == '\x01') {
        local_14 = 0;
        cVar2 = MySQL::get_int(local_10,0,&local_14);
        if ((cVar2 == '\x01') && (local_14 != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
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

## _LoadDNFEventEntry

```asm
// === 08411bda DB_Login::_LoadDNFEventEntry  [0x08411bda-0x8411d7d] ===
 8411bda:	55                   	push   %ebp
 8411bdb:	89 e5                	mov    %esp,%ebp
 8411bdd:	53                   	push   %ebx
 8411bde:	83 ec 34             	sub    $0x34,%esp
 8411be1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8411be6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8411bed:	00 
 8411bee:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8411bf5:	00 
 8411bf6:	89 04 24             	mov    %eax,(%esp)
 8411bf9:	e8 40 36 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8411bfe:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8411c01:	e8 7b a5 cb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8411c06:	8b 98 78 03 00 00    	mov    0x378(%eax),%ebx
 8411c0c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8411c13:	00 
 8411c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411c17:	89 04 24             	mov    %eax,(%esp)
 8411c1a:	e8 2c 74 cf ff       	call   810904b <_Z14NumberToStringji>
 8411c1f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8411c23:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411c27:	c7 44 24 04 60 7a c4 	movl   $0x8c47a60,0x4(%esp)
 8411c2e:	08 
 8411c2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411c32:	89 04 24             	mov    %eax,(%esp)
 8411c35:	e8 86 25 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8411c3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411c41:	00 
 8411c42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411c45:	89 04 24             	mov    %eax,(%esp)
 8411c48:	e8 d9 26 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8411c4d:	83 f0 01             	xor    $0x1,%eax
 8411c50:	84 c0                	test   %al,%al
 8411c52:	0f 85 1b 01 00 00    	jne    8411d73 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x199>
 8411c58:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8411c5f:	e9 f4 00 00 00       	jmp    8411d58 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x17e>
 8411c64:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411c67:	89 04 24             	mov    %eax,(%esp)
 8411c6a:	e8 4d 28 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8411c6f:	83 f0 01             	xor    $0x1,%eax
 8411c72:	84 c0                	test   %al,%al
 8411c74:	0f 85 fc 00 00 00    	jne    8411d76 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x19c>
 8411c7a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8411c7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411c81:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8411c88:	00 
 8411c89:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411c8c:	89 04 24             	mov    %eax,(%esp)
 8411c8f:	e8 98 4c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8411c94:	83 f0 01             	xor    $0x1,%eax
 8411c97:	84 c0                	test   %al,%al
 8411c99:	0f 85 a8 00 00 00    	jne    8411d47 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x16d>
 8411c9f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8411ca2:	83 c0 08             	add    $0x8,%eax
 8411ca5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411ca9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411cb0:	00 
 8411cb1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411cb4:	89 04 24             	mov    %eax,(%esp)
 8411cb7:	e8 70 4c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8411cbc:	83 f0 01             	xor    $0x1,%eax
 8411cbf:	84 c0                	test   %al,%al
 8411cc1:	0f 85 83 00 00 00    	jne    8411d4a <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x170>
 8411cc7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8411cca:	83 c0 0c             	add    $0xc,%eax
 8411ccd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411cd1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8411cd8:	00 
 8411cd9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411cdc:	89 04 24             	mov    %eax,(%esp)
 8411cdf:	e8 48 4c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8411ce4:	83 f0 01             	xor    $0x1,%eax
 8411ce7:	84 c0                	test   %al,%al
 8411ce9:	75 62                	jne    8411d4d <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x173>
 8411ceb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8411cee:	83 c0 10             	add    $0x10,%eax
 8411cf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411cf5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8411cfc:	00 
 8411cfd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411d00:	89 04 24             	mov    %eax,(%esp)
 8411d03:	e8 24 4c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8411d08:	83 f0 01             	xor    $0x1,%eax
 8411d0b:	84 c0                	test   %al,%al
 8411d0d:	75 41                	jne    8411d50 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x176>
 8411d0f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8411d12:	83 c0 14             	add    $0x14,%eax
 8411d15:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411d19:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8411d20:	00 
 8411d21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411d24:	89 04 24             	mov    %eax,(%esp)
 8411d27:	e8 00 4c d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8411d2c:	83 f0 01             	xor    $0x1,%eax
 8411d2f:	84 c0                	test   %al,%al
 8411d31:	75 20                	jne    8411d53 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x179>
 8411d33:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8411d36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8411d3a:	8b 45 10             	mov    0x10(%ebp),%eax
 8411d3d:	89 04 24             	mov    %eax,(%esp)
 8411d40:	e8 57 b5 d7 ff       	call   818d29c <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE9push_backERKS1_>
 8411d45:	eb 0d                	jmp    8411d54 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x17a>
 8411d47:	90                   	nop
 8411d48:	eb 0a                	jmp    8411d54 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x17a>
 8411d4a:	90                   	nop
 8411d4b:	eb 07                	jmp    8411d54 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x17a>
 8411d4d:	90                   	nop
 8411d4e:	eb 04                	jmp    8411d54 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x17a>
 8411d50:	90                   	nop
 8411d51:	eb 01                	jmp    8411d54 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x17a>
 8411d53:	90                   	nop
 8411d54:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8411d58:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411d5b:	89 04 24             	mov    %eax,(%esp)
 8411d5e:	e8 09 06 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8411d63:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8411d66:	0f 97 c0             	seta   %al
 8411d69:	84 c0                	test   %al,%al
 8411d6b:	0f 85 f3 fe ff ff    	jne    8411c64 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x8a>
 8411d71:	eb 04                	jmp    8411d77 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x19d>
 8411d73:	90                   	nop
 8411d74:	eb 01                	jmp    8411d77 <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE+0x19d>
 8411d76:	90                   	nop
 8411d77:	83 c4 34             	add    $0x34,%esp
 8411d7a:	5b                   	pop    %ebx
 8411d7b:	5d                   	pop    %ebp
 8411d7c:	c3                   	ret
 8411d7d:	90                   	nop

```

```c
// DB_Login::_LoadDNFEventEntry @ 0x8411bda

/* DB_Login::_LoadDNFEventEntry(unsigned int, std::vector<DB_Login::tagDNFEventEntry,
   std::allocator<DB_Login::tagDNFEventEntry> >&) */

void __thiscall DB_Login::_LoadDNFEventEntry(DB_Login *this,uint param_1,vector *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  tagDNFEventEntry local_2c [8];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  iVar3 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar3 + 0x378);
  uVar4 = NumberToString(param_1,0);
  MySQL::set_query(local_14,
                   "seLect event_id,unix_timestamp(occ_date),server_id,charac_no,unix_timestamp(obtain_date) from dnf_event_entry where m_id=%s and server_id in(0,%d)"
                   ,uVar4,uVar1);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 == '\x01') {
    local_10 = 0;
    while ((uVar5 = MySQL::get_n_rows(local_14), local_10 < uVar5 &&
           (cVar2 = MySQL::fetch(local_14), cVar2 == '\x01'))) {
      cVar2 = MySQL::get_int(local_14,0,(int *)local_2c);
      if ((((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_14,1,&iStack_24), cVar2 == '\x01'))
          && (cVar2 = MySQL::get_int(local_14,2,&iStack_20), cVar2 == '\x01')) &&
         ((cVar2 = MySQL::get_int(local_14,3,&iStack_1c), cVar2 == '\x01' &&
          (cVar2 = MySQL::get_int(local_14,4,&iStack_18), cVar2 == '\x01')))) {
        std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::
        push_back((vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> *)
                  param_2,local_2c);
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}

```

---

## _LoadEventItem

```asm
// === 08411d7e DB_Login::_LoadEventItem  [0x08411d7e-0x8411ee7] ===
 8411d7e:	55                   	push   %ebp
 8411d7f:	89 e5                	mov    %esp,%ebp
 8411d81:	57                   	push   %edi
 8411d82:	53                   	push   %ebx
 8411d83:	83 ec 50             	sub    $0x50,%esp
 8411d86:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 8411d89:	b8 00 00 00 00       	mov    $0x0,%eax
 8411d8e:	ba 0a 00 00 00       	mov    $0xa,%edx
 8411d93:	89 df                	mov    %ebx,%edi
 8411d95:	89 d1                	mov    %edx,%ecx
 8411d97:	f3 ab                	rep stos %eax,%es:(%edi)
 8411d99:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8411d9c:	8b 55 14             	mov    0x14(%ebp),%edx
 8411d9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411da3:	89 04 24             	mov    %eax,(%esp)
 8411da6:	e8 3f ba d7 ff       	call   818d7ea <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE5beginEv>
 8411dab:	83 ec 04             	sub    $0x4,%esp
 8411dae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8411db1:	8b 55 14             	mov    0x14(%ebp),%edx
 8411db4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411db8:	89 04 24             	mov    %eax,(%esp)
 8411dbb:	e8 96 b5 d7 ff       	call   818d356 <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE3endEv>
 8411dc0:	83 ec 04             	sub    $0x4,%esp
 8411dc3:	eb 3a                	jmp    8411dff <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x81>
 8411dc5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8411dc8:	89 04 24             	mov    %eax,(%esp)
 8411dcb:	e8 ec de d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8411dd0:	8b 00                	mov    (%eax),%eax
 8411dd2:	83 f8 09             	cmp    $0x9,%eax
 8411dd5:	0f 9f c0             	setg   %al
 8411dd8:	84 c0                	test   %al,%al
 8411dda:	75 17                	jne    8411df3 <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x75>
 8411ddc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8411ddf:	89 04 24             	mov    %eax,(%esp)
 8411de2:	e8 d5 de d7 ff       	call   818fcbc <_ZNK9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEptEv>
 8411de7:	8b 00                	mov    (%eax),%eax
 8411de9:	c7 44 85 c4 01 00 00 	movl   $0x1,-0x3c(%ebp,%eax,4)
 8411df0:	00 
 8411df1:	eb 01                	jmp    8411df4 <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x76>
 8411df3:	90                   	nop
 8411df4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8411df7:	89 04 24             	mov    %eax,(%esp)
 8411dfa:	e8 a7 de d7 ff       	call   818fca6 <_ZN9__gnu_cxx17__normal_iteratorIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEppEv>
 8411dff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8411e02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8411e06:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8411e09:	89 04 24             	mov    %eax,(%esp)
 8411e0c:	e8 68 de d7 ff       	call   818fc79 <_ZN9__gnu_cxxneIPN8DB_Login16tagDNFEventEntryESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8411e11:	84 c0                	test   %al,%al
 8411e13:	75 b0                	jne    8411dc5 <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x47>
 8411e15:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8411e1c:	e9 ae 00 00 00       	jmp    8411ecf <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x151>
 8411e21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411e24:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 8411e28:	85 c0                	test   %eax,%eax
 8411e2a:	0f 84 9a 00 00 00    	je     8411eca <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14c>
 8411e30:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 8411e34:	0f 87 91 00 00 00    	ja     8411ecb <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14d>
 8411e3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411e3d:	c1 e0 02             	shl    $0x2,%eax
 8411e40:	8b 80 f4 7a c4 08    	mov    0x8c47af4(%eax),%eax
 8411e46:	ff e0                	jmp    *%eax
 8411e48:	8b 55 10             	mov    0x10(%ebp),%edx
 8411e4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411e4e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411e54:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411e58:	89 04 24             	mov    %eax,(%esp)
 8411e5b:	e8 73 83 fe ff       	call   83fa1d3 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj>
 8411e60:	eb 69                	jmp    8411ecb <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14d>
 8411e62:	8b 55 10             	mov    0x10(%ebp),%edx
 8411e65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411e68:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411e6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411e72:	89 04 24             	mov    %eax,(%esp)
 8411e75:	e8 db 89 fe ff       	call   83fa855 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj>
 8411e7a:	eb 4f                	jmp    8411ecb <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14d>
 8411e7c:	8b 55 10             	mov    0x10(%ebp),%edx
 8411e7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411e82:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411e88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411e8c:	89 04 24             	mov    %eax,(%esp)
 8411e8f:	e8 d6 92 fe ff       	call   83fb16a <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj>
 8411e94:	eb 35                	jmp    8411ecb <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14d>
 8411e96:	8b 55 10             	mov    0x10(%ebp),%edx
 8411e99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411e9c:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411ea2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411ea6:	89 04 24             	mov    %eax,(%esp)
 8411ea9:	e8 e7 96 fe ff       	call   83fb595 <_ZN8WongWork11EventAlttle22ArrangeAlttleEventItemEjj>
 8411eae:	eb 1b                	jmp    8411ecb <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14d>
 8411eb0:	8b 55 10             	mov    0x10(%ebp),%edx
 8411eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411eb6:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411ebc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411ec0:	89 04 24             	mov    %eax,(%esp)
 8411ec3:	e8 ae 9a fe ff       	call   83fb976 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj>
 8411ec8:	eb 01                	jmp    8411ecb <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0x14d>
 8411eca:	90                   	nop
 8411ecb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8411ecf:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8411ed3:	0f 9e c0             	setle  %al
 8411ed6:	84 c0                	test   %al,%al
 8411ed8:	0f 85 43 ff ff ff    	jne    8411e21 <_ZN8DB_Login14_LoadEventItemEP14SIG_LOGIN_DATAiRSt6vectorINS_16tagDNFEventEntryESaIS3_EE+0xa3>
 8411ede:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8411ee1:	83 c4 00             	add    $0x0,%esp
 8411ee4:	5b                   	pop    %ebx
 8411ee5:	5f                   	pop    %edi
 8411ee6:	5d                   	pop    %ebp
 8411ee7:	c3                   	ret

```

```c
// DB_Login::_LoadEventItem @ 0x8411d7e

/* DB_Login::_LoadEventItem(SIG_LOGIN_DATA*, int, std::vector<DB_Login::tagDNFEventEntry,
   std::allocator<DB_Login::tagDNFEventEntry> >&) */

void DB_Login::_LoadEventItem(SIG_LOGIN_DATA *param_1,int param_2,vector *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_40 [10];
  __normal_iterator local_18 [4];
  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
  local_14 [4];
  int local_10;
  
  piVar2 = local_40;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::begin();
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::end();
  while (bVar1 = __gnu_cxx::operator!=(local_14,local_18), bVar1) {
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                    ::operator->(local_14);
    if (*piVar2 < 10) {
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_14);
      local_40[*piVar2] = 1;
    }
    __gnu_cxx::
    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
    ::operator++(local_14);
  }
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    if (local_40[local_10] != 0) {
      switch(local_10) {
      case 2:
        WongWork::EventATI::ArrangeATIEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 3:
        WongWork::EventSigong::ArrangeSigongEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 5:
        WongWork::EventMuz::ArrangeMuzEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 6:
        WongWork::EventAlttle::ArrangeAlttleEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
        break;
      case 7:
        WongWork::EventFCCombo::ArrangeFCComboEventItem(*(uint *)(param_2 + 0xc0),(uint)param_3);
      }
    }
  }
  return;
}

```

---

## _convertPassPadInfo

```asm
// === 08411af0 DB_Login::_convertPassPadInfo  [0x08411af0-0x8411bad] ===
 8411af0:	55                   	push   %ebp
 8411af1:	89 e5                	mov    %esp,%ebp
 8411af3:	57                   	push   %edi
 8411af4:	56                   	push   %esi
 8411af5:	53                   	push   %ebx
 8411af6:	83 ec 5c             	sub    $0x5c,%esp
 8411af9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411afc:	8d 98 0d 39 00 00    	lea    0x390d(%eax),%ebx
 8411b02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b05:	8d b8 10 39 00 00    	lea    0x3910(%eax),%edi
 8411b0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b0e:	05 3a 3a 00 00       	add    $0x3a3a,%eax
 8411b13:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8411b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b19:	05 0e 39 00 00       	add    $0x390e,%eax
 8411b1e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8411b21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b24:	05 e1 38 00 00       	add    $0x38e1,%eax
 8411b29:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8411b2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b2f:	05 e0 38 00 00       	add    $0x38e0,%eax
 8411b34:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8411b37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b3a:	05 18 39 00 00       	add    $0x3918,%eax
 8411b3f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8411b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b45:	8d b0 0c 39 00 00    	lea    0x390c(%eax),%esi
 8411b4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b4e:	8d 88 14 39 00 00    	lea    0x3914(%eax),%ecx
 8411b54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b57:	8d 90 05 39 00 00    	lea    0x3905(%eax),%edx
 8411b5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411b60:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411b66:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 8411b6a:	89 7c 24 24          	mov    %edi,0x24(%esp)
 8411b6e:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8411b71:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8411b75:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8411b78:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8411b7c:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8411b7f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8411b83:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8411b86:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8411b8a:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8411b8d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8411b91:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8411b95:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8411b99:	89 54 24 04          	mov    %edx,0x4(%esp)
 8411b9d:	89 04 24             	mov    %eax,(%esp)
 8411ba0:	e8 c5 12 01 00       	call   8422e6a <_ZN16DB_MouseRegister18convertPassPadInfoEjPcRiRcS1_RbS0_S3_S0_RlS3_>
 8411ba5:	83 c4 5c             	add    $0x5c,%esp
 8411ba8:	5b                   	pop    %ebx
 8411ba9:	5e                   	pop    %esi
 8411baa:	5f                   	pop    %edi
 8411bab:	5d                   	pop    %ebp
 8411bac:	c3                   	ret
 8411bad:	90                   	nop

```

```c
// DB_Login::_convertPassPadInfo @ 0x8411af0

/* DB_Login::_convertPassPadInfo(SIG_LOGIN_DATA*) */

void __thiscall DB_Login::_convertPassPadInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  DB_MouseRegister::convertPassPadInfo
            (*(uint *)(param_1 + 0xc0),(char *)(param_1 + 0x3905),(int *)(param_1 + 0x3914),
             (char *)(param_1 + 0x390c),(int *)(param_1 + 0x3918),(bool *)(param_1 + 0x38e0),
             (char *)(param_1 + 0x38e1),(bool *)(param_1 + 0x390e),(char *)(param_1 + 0x3a3a),
             (long *)(param_1 + 0x3910),(bool *)(param_1 + 0x390d));
  return;
}

```

---

## _getAutoPunishedSecondUserData

```asm
// === 084110c6 DB_Login::_getAutoPunishedSecondUserData  [0x084110c6-0x84111e1] ===
 84110c6:	55                   	push   %ebp
 84110c7:	89 e5                	mov    %esp,%ebp
 84110c9:	83 ec 28             	sub    $0x28,%esp
 84110cc:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 84110d0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84110d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84110dc:	00 
 84110dd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84110e4:	00 
 84110e5:	89 04 24             	mov    %eax,(%esp)
 84110e8:	e8 51 41 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84110ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84110f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84110f7:	00 
 84110f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84110fb:	89 04 24             	mov    %eax,(%esp)
 84110fe:	e8 48 7f cf ff       	call   810904b <_Z14NumberToStringji>
 8411103:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411107:	c7 44 24 04 48 77 c4 	movl   $0x8c47748,0x4(%esp)
 841110e:	08 
 841110f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411112:	89 04 24             	mov    %eax,(%esp)
 8411115:	e8 a6 30 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841111a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411121:	00 
 8411122:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411125:	89 04 24             	mov    %eax,(%esp)
 8411128:	e8 f9 31 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 841112d:	83 f0 01             	xor    $0x1,%eax
 8411130:	84 c0                	test   %al,%al
 8411132:	75 0f                	jne    8411143 <_ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy+0x7d>
 8411134:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411137:	89 04 24             	mov    %eax,(%esp)
 841113a:	e8 2d 12 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841113f:	85 c0                	test   %eax,%eax
 8411141:	75 07                	jne    841114a <_ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy+0x84>
 8411143:	b8 01 00 00 00       	mov    $0x1,%eax
 8411148:	eb 05                	jmp    841114f <_ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy+0x89>
 841114a:	b8 00 00 00 00       	mov    $0x0,%eax
 841114f:	84 c0                	test   %al,%al
 8411151:	74 0a                	je     841115d <_ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy+0x97>
 8411153:	b8 00 00 00 00       	mov    $0x0,%eax
 8411158:	e9 83 00 00 00       	jmp    84111e0 <_ZN8DB_Login30_getAutoPunishedSecondUserDataEjRjRy+0x11a>
 841115d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411160:	89 04 24             	mov    %eax,(%esp)
 8411163:	e8 54 33 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8411168:	8b 45 10             	mov    0x10(%ebp),%eax
 841116b:	89 44 24 08          	mov    %eax,0x8(%esp)
 841116f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8411176:	00 
 8411177:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841117a:	89 04 24             	mov    %eax,(%esp)
 841117d:	e8 70 11 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8411182:	8b 45 14             	mov    0x14(%ebp),%eax
 8411185:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411189:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411190:	00 
 8411191:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411194:	89 04 24             	mov    %eax,(%esp)
 8411197:	e8 2c 43 d6 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 841119c:	8d 45 f3             	lea    -0xd(%ebp),%eax
 841119f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84111a3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84111aa:	00 
 84111ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84111ae:	89 04 24             	mov    %eax,(%esp)
 84111b1:	e8 9e cc ce ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84111b6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84111bd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84111c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84111c4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84111cb:	00 
 84111cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84111cf:	89 04 24             	mov    %eax,(%esp)
 84111d2:	e8 55 57 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84111d7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84111db:	84 c0                	test   %al,%al
 84111dd:	0f 95 c0             	setne  %al
 84111e0:	c9                   	leave
 84111e1:	c3                   	ret

```

```c
// DB_Login::_getAutoPunishedSecondUserData @ 0x84110c6

/* DB_Login::_getAutoPunishedSecondUserData(unsigned int, unsigned int&, unsigned long long&) */

bool __thiscall
DB_Login::_getAutoPunishedSecondUserData
          (DB_Login *this,uint param_1,uint *param_2,ulonglong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int local_18;
  char local_11;
  MySQL *local_10;
  
  local_11 = '\0';
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,
                   "seLect trade_cnt,trade_gold,punish_flag,unix_timestamp(occ_time) from auto_punish_second_user where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 != 0) {
      bVar4 = false;
      goto LAB_0841114f;
    }
  }
  bVar4 = true;
LAB_0841114f:
  if (bVar4) {
    bVar4 = false;
  }
  else {
    MySQL::fetch(local_10);
    MySQL::get_uint(local_10,0,param_2);
    MySQL::get_ulonglong(local_10,1,param_3);
    MySQL::get_byte(local_10,2,&local_11);
    local_18 = 0;
    MySQL::get_int(local_10,3,&local_18);
    bVar4 = local_11 != '\0';
  }
  return bVar4;
}

```

---

## _getGameDB

```asm
// === 0840f4f8 DB_Login::_getGameDB  [0x0840f4f8-0x840f51b] ===
 840f4f8:	55                   	push   %ebp
 840f4f9:	89 e5                	mov    %esp,%ebp
 840f4fb:	83 ec 18             	sub    $0x18,%esp
 840f4fe:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840f503:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840f50a:	00 
 840f50b:	8b 55 0c             	mov    0xc(%ebp),%edx
 840f50e:	89 54 24 04          	mov    %edx,0x4(%esp)
 840f512:	89 04 24             	mov    %eax,(%esp)
 840f515:	e8 24 5d fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840f51a:	c9                   	leave
 840f51b:	c3                   	ret

```

```c
// DB_Login::_getGameDB @ 0x840f4f8

/* DB_Login::_getGameDB(ENUM_DB_HANDLE_IDX) */

void __thiscall DB_Login::_getGameDB(undefined4 this,undefined4 param_2)

{
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,param_2,0);
  return;
}

```

---

## _getGameDBCharacView

```asm
// === 084149ce DB_Login::_getGameDBCharacView  [0x084149ce-0x8414c6d] ===
 84149ce:	55                   	push   %ebp
 84149cf:	89 e5                	mov    %esp,%ebp
 84149d1:	57                   	push   %edi
 84149d2:	53                   	push   %ebx
 84149d3:	81 ec d0 01 00 00    	sub    $0x1d0,%esp
 84149d9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84149e0:	00 
 84149e1:	8b 45 08             	mov    0x8(%ebp),%eax
 84149e4:	89 04 24             	mov    %eax,(%esp)
 84149e7:	e8 0c ab ff ff       	call   840f4f8 <_ZN8DB_Login10_getGameDBE18ENUM_DB_HANDLE_IDX>
 84149ec:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84149ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84149f2:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84149f8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84149ff:	00 
 8414a00:	89 04 24             	mov    %eax,(%esp)
 8414a03:	e8 43 46 cf ff       	call   810904b <_Z14NumberToStringji>
 8414a08:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414a0c:	c7 44 24 04 3c 88 c4 	movl   $0x8c4883c,0x4(%esp)
 8414a13:	08 
 8414a14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414a17:	89 04 24             	mov    %eax,(%esp)
 8414a1a:	e8 a1 f7 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8414a1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414a26:	00 
 8414a27:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414a2a:	89 04 24             	mov    %eax,(%esp)
 8414a2d:	e8 f4 f8 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8414a32:	83 f0 01             	xor    $0x1,%eax
 8414a35:	84 c0                	test   %al,%al
 8414a37:	74 0a                	je     8414a43 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x75>
 8414a39:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414a3e:	e9 21 02 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414a43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414a46:	89 04 24             	mov    %eax,(%esp)
 8414a49:	e8 1e d9 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8414a4e:	85 c0                	test   %eax,%eax
 8414a50:	0f 94 c0             	sete   %al
 8414a53:	84 c0                	test   %al,%al
 8414a55:	74 0a                	je     8414a61 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x93>
 8414a57:	b8 01 00 00 00       	mov    $0x1,%eax
 8414a5c:	e9 03 02 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414a61:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414a64:	89 04 24             	mov    %eax,(%esp)
 8414a67:	e8 50 fa fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8414a6c:	83 f0 01             	xor    $0x1,%eax
 8414a6f:	84 c0                	test   %al,%al
 8414a71:	74 0a                	je     8414a7d <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0xaf>
 8414a73:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414a78:	e9 e7 01 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414a7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414a80:	05 e0 00 00 00       	add    $0xe0,%eax
 8414a85:	c7 44 24 10 94 00 00 	movl   $0x94,0x10(%esp)
 8414a8c:	00 
 8414a8d:	c7 44 24 0c d0 14 00 	movl   $0x14d0,0xc(%esp)
 8414a94:	00 
 8414a95:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414a99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8414aa0:	00 
 8414aa1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414aa4:	89 04 24             	mov    %eax,(%esp)
 8414aa7:	e8 cd 71 fe ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8414aac:	83 f0 01             	xor    $0x1,%eax
 8414aaf:	84 c0                	test   %al,%al
 8414ab1:	74 4d                	je     8414b00 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x132>
 8414ab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414ab6:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 8414abc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8414ac3:	00 
 8414ac4:	c7 44 24 08 eb 3b 00 	movl   $0x3beb,0x8(%esp)
 8414acb:	00 
 8414acc:	c7 44 24 04 20 ce c5 	movl   $0x8c5ce20,0x4(%esp)
 8414ad3:	08 
 8414ad4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8414ad7:	89 04 24             	mov    %eax,(%esp)
 8414ada:	e8 39 ac 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8414adf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8414ae3:	c7 44 24 04 a4 88 c4 	movl   $0x8c488a4,0x4(%esp)
 8414aea:	08 
 8414aeb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8414aee:	89 04 24             	mov    %eax,(%esp)
 8414af1:	e8 92 ac 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8414af6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414afb:	e9 64 01 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414b00:	8d 9d 5c ff ff ff    	lea    -0xa4(%ebp),%ebx
 8414b06:	b8 00 00 00 00       	mov    $0x0,%eax
 8414b0b:	ba 21 00 00 00       	mov    $0x21,%edx
 8414b10:	89 df                	mov    %ebx,%edi
 8414b12:	89 d1                	mov    %edx,%ecx
 8414b14:	f3 ab                	rep stos %eax,%es:(%edi)
 8414b16:	8d 9d d8 fe ff ff    	lea    -0x128(%ebp),%ebx
 8414b1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8414b21:	ba 21 00 00 00       	mov    $0x21,%edx
 8414b26:	89 df                	mov    %ebx,%edi
 8414b28:	89 d1                	mov    %edx,%ecx
 8414b2a:	f3 ab                	rep stos %eax,%es:(%edi)
 8414b2c:	8d 9d 54 fe ff ff    	lea    -0x1ac(%ebp),%ebx
 8414b32:	b8 00 00 00 00       	mov    $0x0,%eax
 8414b37:	ba 21 00 00 00       	mov    $0x21,%edx
 8414b3c:	89 df                	mov    %ebx,%edi
 8414b3e:	89 d1                	mov    %edx,%ecx
 8414b40:	f3 ab                	rep stos %eax,%es:(%edi)
 8414b42:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 8414b49:	00 
 8414b4a:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8414b50:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414b54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8414b5b:	00 
 8414b5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414b5f:	89 04 24             	mov    %eax,(%esp)
 8414b62:	e8 b3 07 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8414b67:	83 f0 01             	xor    $0x1,%eax
 8414b6a:	84 c0                	test   %al,%al
 8414b6c:	74 0a                	je     8414b78 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x1aa>
 8414b6e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414b73:	e9 ec 00 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414b78:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 8414b7f:	00 
 8414b80:	8d 85 54 fe ff ff    	lea    -0x1ac(%ebp),%eax
 8414b86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414b8a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8414b91:	00 
 8414b92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414b95:	89 04 24             	mov    %eax,(%esp)
 8414b98:	e8 7d 07 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8414b9d:	83 f0 01             	xor    $0x1,%eax
 8414ba0:	84 c0                	test   %al,%al
 8414ba2:	74 0a                	je     8414bae <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x1e0>
 8414ba4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414ba9:	e9 b6 00 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414bae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414bb1:	05 a0 3f 00 00       	add    $0x3fa0,%eax
 8414bb6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414bba:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8414bc1:	00 
 8414bc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414bc5:	89 04 24             	mov    %eax,(%esp)
 8414bc8:	e8 ed 92 ce ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8414bcd:	83 f0 01             	xor    $0x1,%eax
 8414bd0:	84 c0                	test   %al,%al
 8414bd2:	74 0a                	je     8414bde <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x210>
 8414bd4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414bd9:	e9 86 00 00 00       	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414bde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414be1:	05 a1 3f 00 00       	add    $0x3fa1,%eax
 8414be6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8414bea:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8414bf1:	00 
 8414bf2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8414bf5:	89 04 24             	mov    %eax,(%esp)
 8414bf8:	e8 bd 92 ce ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8414bfd:	83 f0 01             	xor    $0x1,%eax
 8414c00:	84 c0                	test   %al,%al
 8414c02:	74 07                	je     8414c0b <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x23d>
 8414c04:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8414c09:	eb 59                	jmp    8414c64 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x296>
 8414c0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414c0e:	c7 80 dc 00 00 00 00 	movl   $0x0,0xdc(%eax)
 8414c15:	00 00 00 
 8414c18:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8414c1f:	eb 33                	jmp    8414c54 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x286>
 8414c21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8414c24:	8b 55 0c             	mov    0xc(%ebp),%edx
 8414c27:	69 c0 94 00 00 00    	imul   $0x94,%eax,%eax
 8414c2d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8414c30:	05 e0 00 00 00       	add    $0xe0,%eax
 8414c35:	8b 00                	mov    (%eax),%eax
 8414c37:	85 c0                	test   %eax,%eax
 8414c39:	74 15                	je     8414c50 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x282>
 8414c3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414c3e:	8b 80 dc 00 00 00    	mov    0xdc(%eax),%eax
 8414c44:	8d 50 01             	lea    0x1(%eax),%edx
 8414c47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8414c4a:	89 90 dc 00 00 00    	mov    %edx,0xdc(%eax)
 8414c50:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8414c54:	83 7d f4 23          	cmpl   $0x23,-0xc(%ebp)
 8414c58:	0f 9e c0             	setle  %al
 8414c5b:	84 c0                	test   %al,%al
 8414c5d:	75 c2                	jne    8414c21 <_ZN8DB_Login20_getGameDBCharacViewEP14SIG_LOGIN_DATA+0x253>
 8414c5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8414c64:	81 c4 d0 01 00 00    	add    $0x1d0,%esp
 8414c6a:	5b                   	pop    %ebx
 8414c6b:	5f                   	pop    %edi
 8414c6c:	5d                   	pop    %ebp
 8414c6d:	c3                   	ret

```

```c
// DB_Login::_getGameDBCharacView @ 0x84149ce

/* DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::_getGameDBCharacView(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_1b0 [33];
  undefined4 local_12c [33];
  undefined4 local_a8 [33];
  cMyTrace local_24 [16];
  MySQL *local_14;
  int local_10;
  
  bVar5 = 0;
  local_14 = (MySQL *)_getGameDB(this,2);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_14,
                   "seLect info,hash_key,password(info),slot_effect_count,charac_slot_limit from charac_view where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_14);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        cVar1 = get_compressed_blob_data(local_14,0,(char *)(param_1 + 0xe0),0x14d0,0x94);
        if (cVar1 == '\x01') {
          puVar4 = local_a8;
          for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          puVar4 = local_12c;
          for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          puVar4 = local_1b0;
          for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
          }
          cVar1 = MySQL::get_binary(local_14,1,local_12c,0x84);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_binary(local_14,2,local_1b0,0x84);
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_ubyte(local_14,3,(uchar *)(param_1 + 0x3fa0));
              if (cVar1 == '\x01') {
                cVar1 = MySQL::get_ubyte(local_14,4,(uchar *)(param_1 + 0x3fa1));
                if (cVar1 == '\x01') {
                  *(undefined4 *)(param_1 + 0xdc) = 0;
                  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
                    if (*(int *)(param_1 + local_10 * 0x94 + 0xe0) != 0) {
                      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
                    }
                  }
                  uVar2 = 0;
                }
                else {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0xc0);
          cMyTrace::cMyTrace(local_24,
                             "DB_Login::RV_GetGameDBCharacInfo DB_Login::_getGameDBCharacView(SIG_LOGIN_DATA*)"
                             ,0x3beb,5);
          cMyTrace::operator()
                    (local_24,"DB_Login::_getGameDBCharacView uncompress fail, m_id(%d)",uVar2);
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## _getPassPadInfo

```asm
// === 0841144a DB_Login::_getPassPadInfo  [0x0841144a-0x84115f7] ===
 841144a:	55                   	push   %ebp
 841144b:	89 e5                	mov    %esp,%ebp
 841144d:	83 ec 28             	sub    $0x28,%esp
 8411450:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8411455:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841145c:	00 
 841145d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8411464:	00 
 8411465:	89 04 24             	mov    %eax,(%esp)
 8411468:	e8 d1 3d fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841146d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8411470:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411473:	c6 80 e0 38 00 00 00 	movb   $0x0,0x38e0(%eax)
 841147a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841147d:	c7 80 18 39 00 00 00 	movl   $0x0,0x3918(%eax)
 8411484:	00 00 00 
 8411487:	8b 45 0c             	mov    0xc(%ebp),%eax
 841148a:	c7 80 14 39 00 00 00 	movl   $0x0,0x3914(%eax)
 8411491:	00 00 00 
 8411494:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411497:	05 e1 38 00 00       	add    $0x38e1,%eax
 841149c:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 84114a3:	00 
 84114a4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84114ab:	00 
 84114ac:	89 04 24             	mov    %eax,(%esp)
 84114af:	e8 0c c8 c6 ff       	call   807dcc0 <memset@plt>
 84114b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84114b7:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84114bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84114c4:	00 
 84114c5:	89 04 24             	mov    %eax,(%esp)
 84114c8:	e8 7e 7b cf ff       	call   810904b <_Z14NumberToStringji>
 84114cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84114d1:	c7 44 24 04 80 78 c4 	movl   $0x8c47880,0x4(%esp)
 84114d8:	08 
 84114d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84114dc:	89 04 24             	mov    %eax,(%esp)
 84114df:	e8 dc 2c fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84114e4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84114eb:	00 
 84114ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84114ef:	89 04 24             	mov    %eax,(%esp)
 84114f2:	e8 2f 2e fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84114f7:	83 f0 01             	xor    $0x1,%eax
 84114fa:	84 c0                	test   %al,%al
 84114fc:	74 0a                	je     8411508 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0xbe>
 84114fe:	b8 01 00 00 00       	mov    $0x1,%eax
 8411503:	e9 ed 00 00 00       	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 8411508:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841150b:	89 04 24             	mov    %eax,(%esp)
 841150e:	e8 59 0e cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8411513:	85 c0                	test   %eax,%eax
 8411515:	0f 94 c0             	sete   %al
 8411518:	84 c0                	test   %al,%al
 841151a:	74 0a                	je     8411526 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0xdc>
 841151c:	b8 00 00 00 00       	mov    $0x0,%eax
 8411521:	e9 cf 00 00 00       	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 8411526:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411529:	89 04 24             	mov    %eax,(%esp)
 841152c:	e8 8b 2f fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8411531:	83 f0 01             	xor    $0x1,%eax
 8411534:	84 c0                	test   %al,%al
 8411536:	74 0a                	je     8411542 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0xf8>
 8411538:	b8 01 00 00 00       	mov    $0x1,%eax
 841153d:	e9 b3 00 00 00       	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 8411542:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411545:	05 e1 38 00 00       	add    $0x38e1,%eax
 841154a:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 8411551:	00 
 8411552:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411556:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841155d:	00 
 841155e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411561:	89 04 24             	mov    %eax,(%esp)
 8411564:	e8 81 b8 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8411569:	83 f0 01             	xor    $0x1,%eax
 841156c:	84 c0                	test   %al,%al
 841156e:	74 07                	je     8411577 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x12d>
 8411570:	b8 01 00 00 00       	mov    $0x1,%eax
 8411575:	eb 7e                	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 8411577:	8b 45 0c             	mov    0xc(%ebp),%eax
 841157a:	05 14 39 00 00       	add    $0x3914,%eax
 841157f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411583:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841158a:	00 
 841158b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841158e:	89 04 24             	mov    %eax,(%esp)
 8411591:	e8 96 53 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8411596:	83 f0 01             	xor    $0x1,%eax
 8411599:	84 c0                	test   %al,%al
 841159b:	74 07                	je     84115a4 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x15a>
 841159d:	b8 01 00 00 00       	mov    $0x1,%eax
 84115a2:	eb 51                	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 84115a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84115a7:	05 18 39 00 00       	add    $0x3918,%eax
 84115ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 84115b0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84115b7:	00 
 84115b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84115bb:	89 04 24             	mov    %eax,(%esp)
 84115be:	e8 69 53 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84115c3:	83 f0 01             	xor    $0x1,%eax
 84115c6:	84 c0                	test   %al,%al
 84115c8:	74 07                	je     84115d1 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x187>
 84115ca:	b8 01 00 00 00       	mov    $0x1,%eax
 84115cf:	eb 24                	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 84115d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84115d4:	c6 80 e0 38 00 00 01 	movb   $0x1,0x38e0(%eax)
 84115db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84115de:	8b 80 14 39 00 00    	mov    0x3914(%eax),%eax
 84115e4:	83 f8 02             	cmp    $0x2,%eax
 84115e7:	7e 07                	jle    84115f0 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1a6>
 84115e9:	b8 49 00 00 00       	mov    $0x49,%eax
 84115ee:	eb 05                	jmp    84115f5 <_ZN8DB_Login15_getPassPadInfoEP14SIG_LOGIN_DATA+0x1ab>
 84115f0:	b8 00 00 00 00       	mov    $0x0,%eax
 84115f5:	c9                   	leave
 84115f6:	c3                   	ret
 84115f7:	90                   	nop

```

```c
// DB_Login::_getPassPadInfo @ 0x841144a

/* DB_Login::_getPassPadInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::_getPassPadInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  param_1[0x38e0] = (SIG_LOGIN_DATA)0x0;
  *(undefined4 *)(param_1 + 0x3918) = 0;
  *(undefined4 *)(param_1 + 0x3914) = 0;
  memset(param_1 + 0x38e1,0,0x24);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect mousepass,fail_cnt,cancel_cnt from member_mousepass where m_id=%s and enable_flag = \'1\'"
                   ,uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_str(this_00,0,(char *)(param_1 + 0x38e1),0x24);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + 0x3914));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(this_00,2,(int *)(param_1 + 0x3918));
            if (cVar1 == '\x01') {
              param_1[0x38e0] = (SIG_LOGIN_DATA)0x1;
              if (*(int *)(param_1 + 0x3914) < 3) {
                uVar2 = 0;
              }
              else {
                uVar2 = 0x49;
              }
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## _getRewardInfo

```asm
// === 084115f8 DB_Login::_getRewardInfo  [0x084115f8-0x8411aef] ===
 84115f8:	55                   	push   %ebp
 84115f9:	89 e5                	mov    %esp,%ebp
 84115fb:	53                   	push   %ebx
 84115fc:	83 ec 64             	sub    $0x64,%esp
 84115ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411602:	c6 80 0d 3f 00 00 00 	movb   $0x0,0x3f0d(%eax)
 8411609:	8b 45 0c             	mov    0xc(%ebp),%eax
 841160c:	c6 80 0e 3f 00 00 00 	movb   $0x0,0x3f0e(%eax)
 8411613:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411616:	c6 80 0f 3f 00 00 00 	movb   $0x0,0x3f0f(%eax)
 841161d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411620:	c6 80 e0 38 00 00 00 	movb   $0x0,0x38e0(%eax)
 8411627:	8b 45 0c             	mov    0xc(%ebp),%eax
 841162a:	c6 80 0e 39 00 00 00 	movb   $0x0,0x390e(%eax)
 8411631:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411634:	c6 80 e0 39 00 00 00 	movb   $0x0,0x39e0(%eax)
 841163b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841163e:	c6 80 e1 39 00 00 00 	movb   $0x0,0x39e1(%eax)
 8411645:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841164a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8411651:	00 
 8411652:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411659:	00 
 841165a:	89 04 24             	mov    %eax,(%esp)
 841165d:	e8 dc 3b fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8411662:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8411665:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411668:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841166e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8411675:	00 
 8411676:	89 04 24             	mov    %eax,(%esp)
 8411679:	e8 cd 79 cf ff       	call   810904b <_Z14NumberToStringji>
 841167e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411682:	c7 44 24 04 e0 78 c4 	movl   $0x8c478e0,0x4(%esp)
 8411689:	08 
 841168a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841168d:	89 04 24             	mov    %eax,(%esp)
 8411690:	e8 2b 2b fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8411695:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841169c:	00 
 841169d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84116a0:	89 04 24             	mov    %eax,(%esp)
 84116a3:	e8 7e 2c fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84116a8:	83 f0 01             	xor    $0x1,%eax
 84116ab:	84 c0                	test   %al,%al
 84116ad:	74 0a                	je     84116b9 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0xc1>
 84116af:	b8 00 00 00 00       	mov    $0x0,%eax
 84116b4:	e9 30 04 00 00       	jmp    8411ae9 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4f1>
 84116b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84116bc:	89 04 24             	mov    %eax,(%esp)
 84116bf:	e8 a8 0c cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84116c4:	85 c0                	test   %eax,%eax
 84116c6:	0f 95 c0             	setne  %al
 84116c9:	84 c0                	test   %al,%al
 84116cb:	0f 84 13 04 00 00    	je     8411ae4 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4ec>
 84116d1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84116d4:	89 04 24             	mov    %eax,(%esp)
 84116d7:	e8 74 c0 c6 ff       	call   807d750 <time@plt>
 84116dc:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 84116df:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 84116e4:	89 c8                	mov    %ecx,%eax
 84116e6:	f7 ea                	imul   %edx
 84116e8:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 84116eb:	89 c2                	mov    %eax,%edx
 84116ed:	c1 fa 10             	sar    $0x10,%edx
 84116f0:	89 c8                	mov    %ecx,%eax
 84116f2:	c1 f8 1f             	sar    $0x1f,%eax
 84116f5:	89 d3                	mov    %edx,%ebx
 84116f7:	29 c3                	sub    %eax,%ebx
 84116f9:	89 d8                	mov    %ebx,%eax
 84116fb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84116fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411701:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8411707:	89 ca                	mov    %ecx,%edx
 8411709:	29 c2                	sub    %eax,%edx
 841170b:	89 d0                	mov    %edx,%eax
 841170d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8411710:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8411713:	2b 45 f0             	sub    -0x10(%ebp),%eax
 8411716:	2d 30 2a 00 00       	sub    $0x2a30,%eax
 841171b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 841171e:	81 7d f0 4f 27 01 00 	cmpl   $0x1274f,-0x10(%ebp)
 8411725:	7e 0b                	jle    8411732 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x13a>
 8411727:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841172a:	05 80 51 01 00       	add    $0x15180,%eax
 841172f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8411732:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8411739:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8411740:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8411747:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 841174e:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8411755:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 841175c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8411763:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 841176a:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8411771:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8411774:	89 04 24             	mov    %eax,(%esp)
 8411777:	e8 40 2d fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841177c:	83 f0 01             	xor    $0x1,%eax
 841177f:	84 c0                	test   %al,%al
 8411781:	74 0a                	je     841178d <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x195>
 8411783:	b8 00 00 00 00       	mov    $0x0,%eax
 8411788:	e9 5c 03 00 00       	jmp    8411ae9 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4f1>
 841178d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8411790:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411794:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841179b:	00 
 841179c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841179f:	89 04 24             	mov    %eax,(%esp)
 84117a2:	e8 4b 0b cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84117a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84117aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84117ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84117b5:	00 
 84117b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84117b9:	89 04 24             	mov    %eax,(%esp)
 84117bc:	e8 31 0b cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84117c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84117c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84117c8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84117cf:	00 
 84117d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84117d3:	89 04 24             	mov    %eax,(%esp)
 84117d6:	e8 17 0b cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84117db:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84117de:	89 44 24 08          	mov    %eax,0x8(%esp)
 84117e2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84117e9:	00 
 84117ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84117ed:	89 04 24             	mov    %eax,(%esp)
 84117f0:	e8 fd 0a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84117f5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84117f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84117fc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8411803:	00 
 8411804:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8411807:	89 04 24             	mov    %eax,(%esp)
 841180a:	e8 e3 0a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841180f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8411812:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411816:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 841181d:	00 
 841181e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8411821:	89 04 24             	mov    %eax,(%esp)
 8411824:	e8 c9 0a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8411829:	8d 45 cc             	lea    -0x34(%ebp),%eax
 841182c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411830:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8411837:	00 
 8411838:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841183b:	89 04 24             	mov    %eax,(%esp)
 841183e:	e8 af 0a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8411843:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8411846:	89 44 24 08          	mov    %eax,0x8(%esp)
 841184a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8411851:	00 
 8411852:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8411855:	89 04 24             	mov    %eax,(%esp)
 8411858:	e8 95 0a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841185d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8411860:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411864:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 841186b:	00 
 841186c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841186f:	89 04 24             	mov    %eax,(%esp)
 8411872:	e8 7b 0a cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8411877:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 841187e:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8411885:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 841188c:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8411893:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8411897:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 841189e:	00 
 841189f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84118a2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84118a6:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84118ad:	00 
 84118ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84118b1:	89 04 24             	mov    %eax,(%esp)
 84118b4:	e8 31 b5 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84118b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84118bc:	05 a1 00 00 00       	add    $0xa1,%eax
 84118c1:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84118c8:	00 
 84118c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84118cd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84118d0:	89 04 24             	mov    %eax,(%esp)
 84118d3:	e8 e8 cf c6 ff       	call   807e8c0 <strncmp@plt>
 84118d8:	85 c0                	test   %eax,%eax
 84118da:	74 04                	je     84118e0 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x2e8>
 84118dc:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 84118e0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84118e3:	85 c0                	test   %eax,%eax
 84118e5:	74 0a                	je     84118f1 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x2f9>
 84118e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84118ea:	c6 80 e0 38 00 00 01 	movb   $0x1,0x38e0(%eax)
 84118f1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84118f4:	85 c0                	test   %eax,%eax
 84118f6:	74 1a                	je     8411912 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x31a>
 84118f8:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 84118fc:	74 14                	je     8411912 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x31a>
 84118fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411901:	c6 80 0e 39 00 00 01 	movb   $0x1,0x390e(%eax)
 8411908:	8b 45 0c             	mov    0xc(%ebp),%eax
 841190b:	c6 80 0c 39 00 00 02 	movb   $0x2,0x390c(%eax)
 8411912:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8411915:	85 c0                	test   %eax,%eax
 8411917:	74 0a                	je     8411923 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x32b>
 8411919:	8b 45 0c             	mov    0xc(%ebp),%eax
 841191c:	c6 80 e0 39 00 00 01 	movb   $0x1,0x39e0(%eax)
 8411923:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8411926:	85 c0                	test   %eax,%eax
 8411928:	74 10                	je     841193a <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x342>
 841192a:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 841192e:	74 0a                	je     841193a <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x342>
 8411930:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411933:	c6 80 e1 39 00 00 01 	movb   $0x1,0x39e1(%eax)
 841193a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841193d:	c6 80 0d 3f 00 00 00 	movb   $0x0,0x3f0d(%eax)
 8411944:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8411947:	85 c0                	test   %eax,%eax
 8411949:	74 18                	je     8411963 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x36b>
 841194b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841194e:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 8411955:	89 c2                	mov    %eax,%edx
 8411957:	83 ca 01             	or     $0x1,%edx
 841195a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841195d:	88 90 0d 3f 00 00    	mov    %dl,0x3f0d(%eax)
 8411963:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8411966:	85 c0                	test   %eax,%eax
 8411968:	74 18                	je     8411982 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x38a>
 841196a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841196d:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 8411974:	89 c2                	mov    %eax,%edx
 8411976:	83 ca 02             	or     $0x2,%edx
 8411979:	8b 45 0c             	mov    0xc(%ebp),%eax
 841197c:	88 90 0d 3f 00 00    	mov    %dl,0x3f0d(%eax)
 8411982:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8411985:	85 c0                	test   %eax,%eax
 8411987:	74 18                	je     84119a1 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x3a9>
 8411989:	8b 45 0c             	mov    0xc(%ebp),%eax
 841198c:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 8411993:	89 c2                	mov    %eax,%edx
 8411995:	83 ca 08             	or     $0x8,%edx
 8411998:	8b 45 0c             	mov    0xc(%ebp),%eax
 841199b:	88 90 0d 3f 00 00    	mov    %dl,0x3f0d(%eax)
 84119a1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84119a4:	85 c0                	test   %eax,%eax
 84119a6:	74 18                	je     84119c0 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x3c8>
 84119a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84119ab:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 84119b2:	89 c2                	mov    %eax,%edx
 84119b4:	83 ca 10             	or     $0x10,%edx
 84119b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84119ba:	88 90 0d 3f 00 00    	mov    %dl,0x3f0d(%eax)
 84119c0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84119c3:	85 c0                	test   %eax,%eax
 84119c5:	74 18                	je     84119df <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x3e7>
 84119c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84119ca:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 84119d1:	89 c2                	mov    %eax,%edx
 84119d3:	83 ca 04             	or     $0x4,%edx
 84119d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84119d9:	88 90 0d 3f 00 00    	mov    %dl,0x3f0d(%eax)
 84119df:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84119e2:	85 c0                	test   %eax,%eax
 84119e4:	74 18                	je     84119fe <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x406>
 84119e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84119e9:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 84119f0:	89 c2                	mov    %eax,%edx
 84119f2:	83 ca 20             	or     $0x20,%edx
 84119f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84119f8:	88 90 0d 3f 00 00    	mov    %dl,0x3f0d(%eax)
 84119fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8411a01:	85 c0                	test   %eax,%eax
 8411a03:	74 1a                	je     8411a1f <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x427>
 8411a05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a08:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 8411a0f:	89 c2                	mov    %eax,%edx
 8411a11:	83 ca 01             	or     $0x1,%edx
 8411a14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a17:	88 90 0f 3f 00 00    	mov    %dl,0x3f0f(%eax)
 8411a1d:	eb 61                	jmp    8411a80 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x488>
 8411a1f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8411a22:	85 c0                	test   %eax,%eax
 8411a24:	74 1a                	je     8411a40 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x448>
 8411a26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a29:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 8411a30:	89 c2                	mov    %eax,%edx
 8411a32:	83 ca 02             	or     $0x2,%edx
 8411a35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a38:	88 90 0f 3f 00 00    	mov    %dl,0x3f0f(%eax)
 8411a3e:	eb 40                	jmp    8411a80 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x488>
 8411a40:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8411a43:	85 c0                	test   %eax,%eax
 8411a45:	74 1a                	je     8411a61 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x469>
 8411a47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a4a:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 8411a51:	89 c2                	mov    %eax,%edx
 8411a53:	83 ca 04             	or     $0x4,%edx
 8411a56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a59:	88 90 0f 3f 00 00    	mov    %dl,0x3f0f(%eax)
 8411a5f:	eb 1f                	jmp    8411a80 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x488>
 8411a61:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8411a64:	85 c0                	test   %eax,%eax
 8411a66:	74 18                	je     8411a80 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x488>
 8411a68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a6b:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 8411a72:	89 c2                	mov    %eax,%edx
 8411a74:	83 ca 20             	or     $0x20,%edx
 8411a77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a7a:	88 90 0f 3f 00 00    	mov    %dl,0x3f0f(%eax)
 8411a80:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8411a83:	85 c0                	test   %eax,%eax
 8411a85:	74 1a                	je     8411aa1 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4a9>
 8411a87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a8a:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 8411a91:	89 c2                	mov    %eax,%edx
 8411a93:	83 ca 08             	or     $0x8,%edx
 8411a96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411a99:	88 90 0f 3f 00 00    	mov    %dl,0x3f0f(%eax)
 8411a9f:	eb 1f                	jmp    8411ac0 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4c8>
 8411aa1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8411aa4:	85 c0                	test   %eax,%eax
 8411aa6:	74 18                	je     8411ac0 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4c8>
 8411aa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411aab:	0f b6 80 0f 3f 00 00 	movzbl 0x3f0f(%eax),%eax
 8411ab2:	89 c2                	mov    %eax,%edx
 8411ab4:	83 ca 10             	or     $0x10,%edx
 8411ab7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411aba:	88 90 0f 3f 00 00    	mov    %dl,0x3f0f(%eax)
 8411ac0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411ac3:	0f b6 80 0d 3f 00 00 	movzbl 0x3f0d(%eax),%eax
 8411aca:	84 c0                	test   %al,%al
 8411acc:	74 16                	je     8411ae4 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4ec>
 8411ace:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8411ad1:	89 c2                	mov    %eax,%edx
 8411ad3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8411ad6:	39 c2                	cmp    %eax,%edx
 8411ad8:	7d 0a                	jge    8411ae4 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA+0x4ec>
 8411ada:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411add:	c6 80 0e 3f 00 00 01 	movb   $0x1,0x3f0e(%eax)
 8411ae4:	b8 00 00 00 00       	mov    $0x0,%eax
 8411ae9:	83 c4 64             	add    $0x64,%esp
 8411aec:	5b                   	pop    %ebx
 8411aed:	5d                   	pop    %ebp
 8411aee:	c3                   	ret
 8411aef:	90                   	nop

```

```c
// DB_Login::_getRewardInfo @ 0x84115f8

/* DB_Login::_getRewardInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::_getRewardInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_50 [16];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  MySQL *local_18;
  int local_14;
  char local_d;
  
  param_1[0x3f0d] = (SIG_LOGIN_DATA)0x0;
  param_1[0x3f0e] = (SIG_LOGIN_DATA)0x0;
  param_1[0x3f0f] = (SIG_LOGIN_DATA)0x0;
  param_1[0x38e0] = (SIG_LOGIN_DATA)0x0;
  param_1[0x390e] = (SIG_LOGIN_DATA)0x0;
  param_1[0x39e0] = (SIG_LOGIN_DATA)0x0;
  param_1[0x39e1] = (SIG_LOGIN_DATA)0x0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect unix_timestamp(last_check_time), unix_timestamp(m_opt_reg), unix_timestamp(pc_opt_reg), unix_timestamp(security_card_reg), unix_timestamp(goblin_pass_mod), unix_timestamp(member_pc_reg), unix_timestamp(gatekeeper_otp_reg), goblin_validity_time>unix_timestamp(now()), security_card_validity_time>unix_timestamp(now()), validity_ip from member_security_grade where m_id = %s "
                   ,uVar2);
  cVar1 = MySQL::exec(local_18,true);
  if ((cVar1 == '\x01') && (iVar3 = MySQL::get_n_rows(local_18), iVar3 != 0)) {
    time(&local_1c);
    local_14 = local_1c % 0x15180;
    iVar3 = local_1c - local_14;
    local_1c = iVar3 + -0x2a30;
    if (0x1274f < local_14) {
      local_1c = iVar3 + 0x12750;
    }
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 == '\x01') {
      MySQL::get_uint(local_18,0,&local_20);
      MySQL::get_uint(local_18,1,&local_24);
      MySQL::get_uint(local_18,2,&local_28);
      MySQL::get_uint(local_18,3,&local_2c);
      MySQL::get_uint(local_18,4,&local_30);
      MySQL::get_uint(local_18,5,&local_34);
      MySQL::get_uint(local_18,6,&local_38);
      MySQL::get_uint(local_18,7,&local_3c);
      MySQL::get_uint(local_18,8,&local_40);
      local_50[0] = '\0';
      local_50[1] = '\0';
      local_50[2] = '\0';
      local_50[3] = '\0';
      local_50[4] = '\0';
      local_50[5] = '\0';
      local_50[6] = '\0';
      local_50[7] = '\0';
      local_50[8] = '\0';
      local_50[9] = '\0';
      local_50[10] = '\0';
      local_50[0xb] = '\0';
      local_50[0xc] = '\0';
      local_50[0xd] = '\0';
      local_50[0xe] = '\0';
      local_50[0xf] = '\0';
      local_d = '\x01';
      MySQL::get_str(local_18,9,local_50,0x10);
      iVar3 = strncmp(local_50,(char *)(param_1 + 0xa1),0x10);
      if (iVar3 != 0) {
        local_d = '\0';
      }
      if (local_30 != 0) {
        param_1[0x38e0] = (SIG_LOGIN_DATA)0x1;
      }
      if ((local_3c != 0) && (local_d != '\0')) {
        param_1[0x390e] = (SIG_LOGIN_DATA)0x1;
        param_1[0x390c] = (SIG_LOGIN_DATA)0x2;
      }
      if (local_2c != 0) {
        param_1[0x39e0] = (SIG_LOGIN_DATA)0x1;
      }
      if ((local_40 != 0) && (local_d != '\0')) {
        param_1[0x39e1] = (SIG_LOGIN_DATA)0x1;
      }
      param_1[0x3f0d] = (SIG_LOGIN_DATA)0x0;
      if (local_24 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 1);
      }
      if (local_28 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 2);
      }
      if (local_2c != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 8);
      }
      if (local_30 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 0x10);
      }
      if (local_34 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 4);
      }
      if (local_38 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 0x20);
      }
      if (local_24 == 0) {
        if (local_28 == 0) {
          if (local_34 == 0) {
            if (local_38 != 0) {
              param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 0x20);
            }
          }
          else {
            param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 4);
          }
        }
        else {
          param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 2);
        }
      }
      else {
        param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 1);
      }
      if (local_2c == 0) {
        if (local_30 != 0) {
          param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 0x10);
        }
      }
      else {
        param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 8);
      }
      if ((param_1[0x3f0d] != (SIG_LOGIN_DATA)0x0) && ((int)local_20 < local_1c)) {
        param_1[0x3f0e] = (SIG_LOGIN_DATA)0x1;
      }
    }
  }
  return 0;
}

```

---

## _getSecurityCardInfo

```asm
// === 084111e2 DB_Login::_getSecurityCardInfo  [0x084111e2-0x8411449] ===
 84111e2:	55                   	push   %ebp
 84111e3:	89 e5                	mov    %esp,%ebp
 84111e5:	56                   	push   %esi
 84111e6:	53                   	push   %ebx
 84111e7:	83 ec 20             	sub    $0x20,%esp
 84111ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84111ed:	0f b6 80 dc 39 00 00 	movzbl 0x39dc(%eax),%eax
 84111f4:	84 c0                	test   %al,%al
 84111f6:	75 0f                	jne    8411207 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x25>
 84111f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84111fb:	c6 80 e0 39 00 00 00 	movb   $0x0,0x39e0(%eax)
 8411202:	e9 3b 02 00 00       	jmp    8411442 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x260>
 8411207:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841120c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8411213:	00 
 8411214:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 841121b:	00 
 841121c:	89 04 24             	mov    %eax,(%esp)
 841121f:	e8 1a 40 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8411224:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8411227:	8b 45 0c             	mov    0xc(%ebp),%eax
 841122a:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411230:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8411237:	00 
 8411238:	89 04 24             	mov    %eax,(%esp)
 841123b:	e8 0b 7e cf ff       	call   810904b <_Z14NumberToStringji>
 8411240:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411244:	c7 44 24 04 b4 77 c4 	movl   $0x8c477b4,0x4(%esp)
 841124b:	08 
 841124c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841124f:	89 04 24             	mov    %eax,(%esp)
 8411252:	e8 69 2f fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8411257:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841125e:	00 
 841125f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411262:	89 04 24             	mov    %eax,(%esp)
 8411265:	e8 bc 30 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 841126a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841126d:	89 04 24             	mov    %eax,(%esp)
 8411270:	e8 f7 10 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8411275:	85 c0                	test   %eax,%eax
 8411277:	0f 94 c0             	sete   %al
 841127a:	84 c0                	test   %al,%al
 841127c:	74 0f                	je     841128d <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0xab>
 841127e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411281:	c6 80 e0 39 00 00 00 	movb   $0x0,0x39e0(%eax)
 8411288:	e9 b5 01 00 00       	jmp    8411442 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x260>
 841128d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8411294:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411297:	89 04 24             	mov    %eax,(%esp)
 841129a:	e8 1d 32 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841129f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84112a2:	05 ed 39 00 00       	add    $0x39ed,%eax
 84112a7:	c7 44 24 0c 27 00 00 	movl   $0x27,0xc(%esp)
 84112ae:	00 
 84112af:	89 44 24 08          	mov    %eax,0x8(%esp)
 84112b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84112ba:	00 
 84112bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84112be:	89 04 24             	mov    %eax,(%esp)
 84112c1:	e8 24 bb cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84112c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84112c9:	05 e4 39 00 00       	add    $0x39e4,%eax
 84112ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84112d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84112d9:	00 
 84112da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84112dd:	89 04 24             	mov    %eax,(%esp)
 84112e0:	e8 47 56 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84112e5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84112e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84112ec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84112f3:	00 
 84112f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84112f7:	89 04 24             	mov    %eax,(%esp)
 84112fa:	e8 f3 0f cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84112ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411302:	05 e8 39 00 00       	add    $0x39e8,%eax
 8411307:	89 44 24 08          	mov    %eax,0x8(%esp)
 841130b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8411312:	00 
 8411313:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411316:	89 04 24             	mov    %eax,(%esp)
 8411319:	e8 d4 0f cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841131e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411321:	05 ec 39 00 00       	add    $0x39ec,%eax
 8411326:	89 44 24 08          	mov    %eax,0x8(%esp)
 841132a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8411331:	00 
 8411332:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411335:	89 04 24             	mov    %eax,(%esp)
 8411338:	e8 17 cb ce ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 841133d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411340:	05 14 3a 00 00       	add    $0x3a14,%eax
 8411345:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411349:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8411350:	00 
 8411351:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411354:	89 04 24             	mov    %eax,(%esp)
 8411357:	e8 c0 0c d3 ff       	call   814201c <_ZN5MySQL9get_shortEiRi>
 841135c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841135f:	05 18 3a 00 00       	add    $0x3a18,%eax
 8411364:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841136b:	00 
 841136c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8411370:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8411377:	00 
 8411378:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841137b:	89 04 24             	mov    %eax,(%esp)
 841137e:	e8 67 ba cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8411383:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8411386:	83 f8 01             	cmp    $0x1,%eax
 8411389:	75 0a                	jne    8411395 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x1b3>
 841138b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841138e:	c6 80 e1 39 00 00 01 	movb   $0x1,0x39e1(%eax)
 8411395:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411398:	c6 80 e0 39 00 00 01 	movb   $0x1,0x39e0(%eax)
 841139f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84113a2:	8b 80 e8 39 00 00    	mov    0x39e8(%eax),%eax
 84113a8:	85 c0                	test   %eax,%eax
 84113aa:	74 3d                	je     84113e9 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x207>
 84113ac:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84113b3:	e8 e6 a8 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84113b8:	89 c3                	mov    %eax,%ebx
 84113ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84113bd:	8b b0 58 39 00 00    	mov    0x3958(%eax),%esi
 84113c3:	e8 b9 ad cb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84113c8:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84113ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84113d2:	89 74 24 04          	mov    %esi,0x4(%esp)
 84113d6:	89 04 24             	mov    %eax,(%esp)
 84113d9:	e8 ca ac 05 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84113de:	84 c0                	test   %al,%al
 84113e0:	74 07                	je     84113e9 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x207>
 84113e2:	b8 01 00 00 00       	mov    $0x1,%eax
 84113e7:	eb 05                	jmp    84113ee <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x20c>
 84113e9:	b8 00 00 00 00       	mov    $0x0,%eax
 84113ee:	84 c0                	test   %al,%al
 84113f0:	74 50                	je     8411442 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA+0x260>
 84113f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84113f5:	c7 80 e8 39 00 00 00 	movl   $0x0,0x39e8(%eax)
 84113fc:	00 00 00 
 84113ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8411402:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8411408:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841140f:	00 
 8411410:	89 04 24             	mov    %eax,(%esp)
 8411413:	e8 33 7c cf ff       	call   810904b <_Z14NumberToStringji>
 8411418:	89 44 24 08          	mov    %eax,0x8(%esp)
 841141c:	c7 44 24 04 44 78 c4 	movl   $0x8c47844,0x4(%esp)
 8411423:	08 
 8411424:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411427:	89 04 24             	mov    %eax,(%esp)
 841142a:	e8 91 2d fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841142f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411436:	00 
 8411437:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841143a:	89 04 24             	mov    %eax,(%esp)
 841143d:	e8 e4 2e fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8411442:	83 c4 20             	add    $0x20,%esp
 8411445:	5b                   	pop    %ebx
 8411446:	5e                   	pop    %esi
 8411447:	5d                   	pop    %ebp
 8411448:	c3                   	ret
 8411449:	90                   	nop

```

```c
// DB_Login::_getSecurityCardInfo @ 0x84111e2

/* DB_Login::_getSecurityCardInfo(SIG_LOGIN_DATA*) */

void __thiscall DB_Login::_getSecurityCardInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint local_14;
  MySQL *local_10;
  
  if (param_1[0x39dc] == (SIG_LOGIN_DATA)0x0) {
    param_1[0x39e0] = (SIG_LOGIN_DATA)0x0;
    return;
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_10,
                   "seLect card,fail_cnt,validity_time>unix_timestamp(now()),cert_flag, cert_cnt, q_pos from member_security_card where m_id=%s and apply_flag=1"
                   ,uVar4);
  MySQL::exec(local_10,true);
  iVar5 = MySQL::get_n_rows(local_10);
  if (iVar5 == 0) {
    param_1[0x39e0] = (SIG_LOGIN_DATA)0x0;
    return;
  }
  local_14 = 0;
  MySQL::fetch(local_10);
  MySQL::get_str(local_10,0,(char *)(param_1 + 0x39ed),0x27);
  MySQL::get_int(local_10,1,(int *)(param_1 + 0x39e4));
  MySQL::get_uint(local_10,2,&local_14);
  MySQL::get_uint(local_10,3,(uint *)(param_1 + 0x39e8));
  MySQL::get_byte(local_10,4,(char *)(param_1 + 0x39ec));
  MySQL::get_short(local_10,5,(int *)(param_1 + 0x3a14));
  MySQL::get_str(local_10,5,(char *)(param_1 + 0x3a18),5);
  if (local_14 == 1) {
    param_1[0x39e1] = (SIG_LOGIN_DATA)0x1;
  }
  param_1[0x39e0] = (SIG_LOGIN_DATA)0x1;
  if (*(int *)(param_1 + 0x39e8) != 0) {
    lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar1 = *(long *)(param_1 + 0x3958);
    iVar5 = G_CEnvironment();
    cVar3 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar1,lVar6);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_084113ee;
    }
  }
  bVar2 = false;
LAB_084113ee:
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x39e8) = 0;
    uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(local_10,"upDate member_security_card set cancel_cnt=0 where m_id=%s",uVar4);
    MySQL::exec(local_10,true);
  }
  return;
}

```

---

## _isAutoPunishedFirstUser

```asm
// === 0841102e DB_Login::_isAutoPunishedFirstUser  [0x0841102e-0x84110c5] ===
 841102e:	55                   	push   %ebp
 841102f:	89 e5                	mov    %esp,%ebp
 8411031:	83 ec 28             	sub    $0x28,%esp
 8411034:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8411039:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8411040:	00 
 8411041:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8411048:	00 
 8411049:	89 04 24             	mov    %eax,(%esp)
 841104c:	e8 ed 41 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8411051:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8411054:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841105b:	00 
 841105c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841105f:	89 04 24             	mov    %eax,(%esp)
 8411062:	e8 e4 7f cf ff       	call   810904b <_Z14NumberToStringji>
 8411067:	89 44 24 08          	mov    %eax,0x8(%esp)
 841106b:	c7 44 24 04 f8 76 c4 	movl   $0x8c476f8,0x4(%esp)
 8411072:	08 
 8411073:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411076:	89 04 24             	mov    %eax,(%esp)
 8411079:	e8 42 31 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841107e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8411085:	00 
 8411086:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411089:	89 04 24             	mov    %eax,(%esp)
 841108c:	e8 95 32 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8411091:	83 f0 01             	xor    $0x1,%eax
 8411094:	84 c0                	test   %al,%al
 8411096:	75 0f                	jne    84110a7 <_ZN8DB_Login24_isAutoPunishedFirstUserEj+0x79>
 8411098:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841109b:	89 04 24             	mov    %eax,(%esp)
 841109e:	e8 c9 12 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84110a3:	85 c0                	test   %eax,%eax
 84110a5:	75 07                	jne    84110ae <_ZN8DB_Login24_isAutoPunishedFirstUserEj+0x80>
 84110a7:	b8 01 00 00 00       	mov    $0x1,%eax
 84110ac:	eb 05                	jmp    84110b3 <_ZN8DB_Login24_isAutoPunishedFirstUserEj+0x85>
 84110ae:	b8 00 00 00 00       	mov    $0x0,%eax
 84110b3:	84 c0                	test   %al,%al
 84110b5:	74 07                	je     84110be <_ZN8DB_Login24_isAutoPunishedFirstUserEj+0x90>
 84110b7:	b8 00 00 00 00       	mov    $0x0,%eax
 84110bc:	eb 05                	jmp    84110c3 <_ZN8DB_Login24_isAutoPunishedFirstUserEj+0x95>
 84110be:	b8 01 00 00 00       	mov    $0x1,%eax
 84110c3:	c9                   	leave
 84110c4:	c3                   	ret
 84110c5:	90                   	nop

```

```c
// DB_Login::_isAutoPunishedFirstUser @ 0x841102e

/* DB_Login::_isAutoPunishedFirstUser(unsigned int) */

bool __thiscall DB_Login::_isAutoPunishedFirstUser(DB_Login *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(this_00,
                   "seLect punish_flag from auto_punish_first_user where m_id=%s and punish_flag=1",
                   uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(this_00), iVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}

```

---

## _isJoinedSchoolPointEvent

```asm
// === 08410f74 DB_Login::_isJoinedSchoolPointEvent  [0x08410f74-0x841102d] ===
 8410f74:	55                   	push   %ebp
 8410f75:	89 e5                	mov    %esp,%ebp
 8410f77:	83 ec 28             	sub    $0x28,%esp
 8410f7a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8410f81:	e8 18 ad cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8410f86:	3d 70 a9 34 48       	cmp    $0x4834a970,%eax
 8410f8b:	0f 9f c0             	setg   %al
 8410f8e:	84 c0                	test   %al,%al
 8410f90:	74 0a                	je     8410f9c <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0x28>
 8410f92:	b8 00 00 00 00       	mov    $0x0,%eax
 8410f97:	e9 8f 00 00 00       	jmp    841102b <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0xb7>
 8410f9c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8410fa1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8410fa8:	00 
 8410fa9:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8410fb0:	00 
 8410fb1:	89 04 24             	mov    %eax,(%esp)
 8410fb4:	e8 85 42 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8410fb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8410fbc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410fc3:	00 
 8410fc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410fc7:	89 04 24             	mov    %eax,(%esp)
 8410fca:	e8 7c 80 cf ff       	call   810904b <_Z14NumberToStringji>
 8410fcf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410fd3:	c7 44 24 04 c0 76 c4 	movl   $0x8c476c0,0x4(%esp)
 8410fda:	08 
 8410fdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410fde:	89 04 24             	mov    %eax,(%esp)
 8410fe1:	e8 da 31 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410fe6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410fed:	00 
 8410fee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410ff1:	89 04 24             	mov    %eax,(%esp)
 8410ff4:	e8 2d 33 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410ff9:	83 f0 01             	xor    $0x1,%eax
 8410ffc:	84 c0                	test   %al,%al
 8410ffe:	75 0f                	jne    841100f <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0x9b>
 8411000:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8411003:	89 04 24             	mov    %eax,(%esp)
 8411006:	e8 61 13 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841100b:	85 c0                	test   %eax,%eax
 841100d:	75 07                	jne    8411016 <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0xa2>
 841100f:	b8 01 00 00 00       	mov    $0x1,%eax
 8411014:	eb 05                	jmp    841101b <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0xa7>
 8411016:	b8 00 00 00 00       	mov    $0x0,%eax
 841101b:	84 c0                	test   %al,%al
 841101d:	74 07                	je     8411026 <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0xb2>
 841101f:	b8 00 00 00 00       	mov    $0x0,%eax
 8411024:	eb 05                	jmp    841102b <_ZN8DB_Login25_isJoinedSchoolPointEventEj+0xb7>
 8411026:	b8 01 00 00 00       	mov    $0x1,%eax
 841102b:	c9                   	leave
 841102c:	c3                   	ret
 841102d:	90                   	nop

```

```c
// DB_Login::_isJoinedSchoolPointEvent @ 0x8410f74

/* DB_Login::_isJoinedSchoolPointEvent(unsigned int) */

bool __thiscall DB_Login::_isJoinedSchoolPointEvent(DB_Login *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  MySQL *this_00;
  undefined4 uVar4;
  
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar3 < 0x4834a971) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(this_00,"seLect school_id from event_school_point where m_id=%s",uVar4);
    cVar2 = MySQL::exec(this_00,true);
    if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(this_00), iVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    return !bVar1;
  }
  return false;
}

```

---

## _isPunishedHackUser

```asm
// === 08412ac8 DB_Login::_isPunishedHackUser  [0x08412ac8-0x8412c51] ===
 8412ac8:	55                   	push   %ebp
 8412ac9:	89 e5                	mov    %esp,%ebp
 8412acb:	83 ec 38             	sub    $0x38,%esp
 8412ace:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8412ad3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8412ada:	00 
 8412adb:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8412ae2:	00 
 8412ae3:	89 04 24             	mov    %eax,(%esp)
 8412ae6:	e8 53 27 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8412aeb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8412aee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412af5:	00 
 8412af6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8412af9:	89 04 24             	mov    %eax,(%esp)
 8412afc:	e8 4a 65 cf ff       	call   810904b <_Z14NumberToStringji>
 8412b01:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412b05:	c7 44 24 04 80 7d c4 	movl   $0x8c47d80,0x4(%esp)
 8412b0c:	08 
 8412b0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412b10:	89 04 24             	mov    %eax,(%esp)
 8412b13:	e8 a8 16 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8412b18:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412b1f:	00 
 8412b20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412b23:	89 04 24             	mov    %eax,(%esp)
 8412b26:	e8 fb 17 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8412b2b:	83 f0 01             	xor    $0x1,%eax
 8412b2e:	84 c0                	test   %al,%al
 8412b30:	74 0a                	je     8412b3c <_ZN8DB_Login19_isPunishedHackUserEj+0x74>
 8412b32:	b8 00 00 00 00       	mov    $0x0,%eax
 8412b37:	e9 13 01 00 00       	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412b3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412b3f:	89 04 24             	mov    %eax,(%esp)
 8412b42:	e8 25 f8 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8412b47:	85 c0                	test   %eax,%eax
 8412b49:	0f 94 c0             	sete   %al
 8412b4c:	84 c0                	test   %al,%al
 8412b4e:	74 0a                	je     8412b5a <_ZN8DB_Login19_isPunishedHackUserEj+0x92>
 8412b50:	b8 00 00 00 00       	mov    $0x0,%eax
 8412b55:	e9 f5 00 00 00       	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412b5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412b5d:	89 04 24             	mov    %eax,(%esp)
 8412b60:	e8 57 19 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8412b65:	83 f0 01             	xor    $0x1,%eax
 8412b68:	84 c0                	test   %al,%al
 8412b6a:	74 0a                	je     8412b76 <_ZN8DB_Login19_isPunishedHackUserEj+0xae>
 8412b6c:	b8 00 00 00 00       	mov    $0x0,%eax
 8412b71:	e9 d9 00 00 00       	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412b76:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8412b7d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8412b84:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8412b8b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8412b8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412b92:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8412b99:	00 
 8412b9a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412b9d:	89 04 24             	mov    %eax,(%esp)
 8412ba0:	e8 87 3d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412ba5:	83 f0 01             	xor    $0x1,%eax
 8412ba8:	84 c0                	test   %al,%al
 8412baa:	74 0a                	je     8412bb6 <_ZN8DB_Login19_isPunishedHackUserEj+0xee>
 8412bac:	b8 00 00 00 00       	mov    $0x0,%eax
 8412bb1:	e9 99 00 00 00       	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412bb6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8412bb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412bbd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8412bc4:	00 
 8412bc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412bc8:	89 04 24             	mov    %eax,(%esp)
 8412bcb:	e8 5c 3d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412bd0:	83 f0 01             	xor    $0x1,%eax
 8412bd3:	84 c0                	test   %al,%al
 8412bd5:	74 07                	je     8412bde <_ZN8DB_Login19_isPunishedHackUserEj+0x116>
 8412bd7:	b8 00 00 00 00       	mov    $0x0,%eax
 8412bdc:	eb 71                	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412bde:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8412be1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8412be5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8412bec:	00 
 8412bed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8412bf0:	89 04 24             	mov    %eax,(%esp)
 8412bf3:	e8 34 3d d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8412bf8:	83 f0 01             	xor    $0x1,%eax
 8412bfb:	84 c0                	test   %al,%al
 8412bfd:	74 07                	je     8412c06 <_ZN8DB_Login19_isPunishedHackUserEj+0x13e>
 8412bff:	b8 00 00 00 00       	mov    $0x0,%eax
 8412c04:	eb 49                	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412c06:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8412c09:	85 c0                	test   %eax,%eax
 8412c0b:	74 2f                	je     8412c3c <_ZN8DB_Login19_isPunishedHackUserEj+0x174>
 8412c0d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8412c10:	69 d0 10 0e 00 00    	imul   $0xe10,%eax,%edx
 8412c16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8412c19:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8412c1c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8412c1f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8412c26:	e8 73 90 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8412c2b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8412c2e:	0f 9f c0             	setg   %al
 8412c31:	84 c0                	test   %al,%al
 8412c33:	74 07                	je     8412c3c <_ZN8DB_Login19_isPunishedHackUserEj+0x174>
 8412c35:	b8 00 00 00 00       	mov    $0x0,%eax
 8412c3a:	eb 13                	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412c3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8412c3f:	85 c0                	test   %eax,%eax
 8412c41:	75 07                	jne    8412c4a <_ZN8DB_Login19_isPunishedHackUserEj+0x182>
 8412c43:	b8 00 00 00 00       	mov    $0x0,%eax
 8412c48:	eb 05                	jmp    8412c4f <_ZN8DB_Login19_isPunishedHackUserEj+0x187>
 8412c4a:	b8 01 00 00 00       	mov    $0x1,%eax
 8412c4f:	c9                   	leave
 8412c50:	c3                   	ret
 8412c51:	90                   	nop

```

```c
// DB_Login::_isPunishedHackUser @ 0x8412ac8

/* DB_Login::_isPunishedHackUser(unsigned int) */

undefined4 __thiscall DB_Login::_isPunishedHackUser(DB_Login *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_14,"seLect occ_time,period,now_flag from member_punish_hack where m_id=%s",
                   uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_14);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_14);
      if (cVar1 == '\x01') {
        local_18 = 0;
        local_1c = 0;
        local_20 = 0;
        cVar1 = MySQL::get_int(local_14,0,&local_18);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_14,1,&local_1c);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_14,2,&local_20);
            if (cVar1 == '\x01') {
              if (local_1c != 0) {
                local_10 = local_1c * 0xe10 + local_18;
                iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                if (local_10 < iVar3) {
                  return 0;
                }
              }
              if (local_20 == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = 1;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 0840f51c DB_Login::dispatch  [0x0840f51c-0x840ffc9] ===
 840f51c:	55                   	push   %ebp
 840f51d:	89 e5                	mov    %esp,%ebp
 840f51f:	56                   	push   %esi
 840f520:	53                   	push   %ebx
 840f521:	83 ec 40             	sub    $0x40,%esp
 840f524:	8b 45 08             	mov    0x8(%ebp),%eax
 840f527:	8b 55 14             	mov    0x14(%ebp),%edx
 840f52a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840f52e:	8b 55 10             	mov    0x10(%ebp),%edx
 840f531:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f535:	8b 55 0c             	mov    0xc(%ebp),%edx
 840f538:	89 54 24 04          	mov    %edx,0x4(%esp)
 840f53c:	89 04 24             	mov    %eax,(%esp)
 840f53f:	e8 38 ca fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 840f544:	83 f0 01             	xor    $0x1,%eax
 840f547:	84 c0                	test   %al,%al
 840f549:	74 0a                	je     840f555 <_ZN8DB_Login8dispatchEiiP6Stream+0x39>
 840f54b:	bb 00 00 00 00       	mov    $0x0,%ebx
 840f550:	e9 6c 0a 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840f555:	8b 45 14             	mov    0x14(%ebp),%eax
 840f558:	89 04 24             	mov    %eax,(%esp)
 840f55b:	e8 54 06 d8 ff       	call   818fbb4 <_ZN6Stream12GetOutBufferI14SIG_LOGIN_DATAEEPT_v>
 840f560:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840f563:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 840f567:	75 0a                	jne    840f573 <_ZN8DB_Login8dispatchEiiP6Stream+0x57>
 840f569:	bb 00 00 00 00       	mov    $0x0,%ebx
 840f56e:	e9 4e 0a 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840f573:	e8 2f ae cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 840f578:	89 04 24             	mov    %eax,(%esp)
 840f57b:	e8 9e 1d ce ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 840f580:	84 c0                	test   %al,%al
 840f582:	74 19                	je     840f59d <_ZN8DB_Login8dispatchEiiP6Stream+0x81>
 840f584:	e8 1e ae cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 840f589:	89 04 24             	mov    %eax,(%esp)
 840f58c:	e8 8f 75 d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 840f591:	83 f8 0e             	cmp    $0xe,%eax
 840f594:	74 07                	je     840f59d <_ZN8DB_Login8dispatchEiiP6Stream+0x81>
 840f596:	b8 01 00 00 00       	mov    $0x1,%eax
 840f59b:	eb 05                	jmp    840f5a2 <_ZN8DB_Login8dispatchEiiP6Stream+0x86>
 840f59d:	b8 00 00 00 00       	mov    $0x0,%eax
 840f5a2:	84 c0                	test   %al,%al
 840f5a4:	74 4b                	je     840f5f1 <_ZN8DB_Login8dispatchEiiP6Stream+0xd5>
 840f5a6:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 840f5ad:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 840f5b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f5b7:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 840f5be:	98                   	cwtl
 840f5bf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 840f5c2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840f5c7:	8d 55 cc             	lea    -0x34(%ebp),%edx
 840f5ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f5ce:	8b 55 10             	mov    0x10(%ebp),%edx
 840f5d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 840f5d5:	89 04 24             	mov    %eax,(%esp)
 840f5d8:	e8 c1 59 fe ff       	call   83f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>
 840f5dd:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840f5e2:	8b 55 10             	mov    0x10(%ebp),%edx
 840f5e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 840f5e9:	89 04 24             	mov    %eax,(%esp)
 840f5ec:	e8 29 05 d8 ff       	call   818fb1a <_ZN5DBMgr10setUserIdxEi>
 840f5f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f5f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f5f8:	8b 45 08             	mov    0x8(%ebp),%eax
 840f5fb:	89 04 24             	mov    %eax,(%esp)
 840f5fe:	e8 5b 3c 00 00       	call   841325e <_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA>
 840f603:	83 f0 01             	xor    $0x1,%eax
 840f606:	84 c0                	test   %al,%al
 840f608:	74 34                	je     840f63e <_ZN8DB_Login8dispatchEiiP6Stream+0x122>
 840f60a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f60d:	c7 80 b8 00 00 00 01 	movl   $0x1,0xb8(%eax)
 840f614:	00 00 00 
 840f617:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f61a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840f61e:	8b 45 10             	mov    0x10(%ebp),%eax
 840f621:	89 44 24 08          	mov    %eax,0x8(%esp)
 840f625:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f628:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f62c:	8b 45 08             	mov    0x8(%ebp),%eax
 840f62f:	89 04 24             	mov    %eax,(%esp)
 840f632:	e8 37 56 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840f637:	89 c3                	mov    %eax,%ebx
 840f639:	e9 83 09 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840f63e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f641:	8d 88 a1 00 00 00    	lea    0xa1(%eax),%ecx
 840f647:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f64a:	8b 80 30 3a 00 00    	mov    0x3a30(%eax),%eax
 840f650:	89 c2                	mov    %eax,%edx
 840f652:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f655:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 840f65b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 840f65f:	89 54 24 08          	mov    %edx,0x8(%esp)
 840f663:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f667:	8b 45 08             	mov    0x8(%ebp),%eax
 840f66a:	89 04 24             	mov    %eax,(%esp)
 840f66d:	e8 34 52 00 00       	call   84148a6 <_ZN8DB_Login13SaveLoginTimeEjiPc>
 840f672:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f675:	66 c7 80 de 38 00 00 	movw   $0x0,0x38de(%eax)
 840f67c:	00 00 
 840f67e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f681:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f685:	8b 45 08             	mov    0x8(%ebp),%eax
 840f688:	89 04 24             	mov    %eax,(%esp)
 840f68b:	e8 66 16 00 00       	call   8410cf6 <_ZN8DB_Login17GetPunishUserInfoEP14SIG_LOGIN_DATA>
 840f690:	83 f0 01             	xor    $0x1,%eax
 840f693:	84 c0                	test   %al,%al
 840f695:	74 34                	je     840f6cb <_ZN8DB_Login8dispatchEiiP6Stream+0x1af>
 840f697:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f69a:	c7 80 b8 00 00 00 0f 	movl   $0xf,0xb8(%eax)
 840f6a1:	00 00 00 
 840f6a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f6a7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840f6ab:	8b 45 10             	mov    0x10(%ebp),%eax
 840f6ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 840f6b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f6b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f6b9:	8b 45 08             	mov    0x8(%ebp),%eax
 840f6bc:	89 04 24             	mov    %eax,(%esp)
 840f6bf:	e8 aa 55 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840f6c4:	89 c3                	mov    %eax,%ebx
 840f6c6:	e9 f6 08 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840f6cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f6ce:	c6 80 0c 3f 00 00 00 	movb   $0x0,0x3f0c(%eax)
 840f6d5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f6d8:	c7 80 24 3a 00 00 00 	movl   $0x0,0x3a24(%eax)
 840f6df:	00 00 00 
 840f6e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f6e5:	c7 80 28 3a 00 00 00 	movl   $0x0,0x3a28(%eax)
 840f6ec:	00 00 00 
 840f6ef:	c7 80 2c 3a 00 00 00 	movl   $0x0,0x3a2c(%eax)
 840f6f6:	00 00 00 
 840f6f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f6fc:	8b 80 50 3a 00 00    	mov    0x3a50(%eax),%eax
 840f702:	85 c0                	test   %eax,%eax
 840f704:	0f 84 8a 04 00 00    	je     840fb94 <_ZN8DB_Login8dispatchEiiP6Stream+0x678>
 840f70a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840f711:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840f718:	e9 60 04 00 00       	jmp    840fb7d <_ZN8DB_Login8dispatchEiiP6Stream+0x661>
 840f71d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f720:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f723:	89 d0                	mov    %edx,%eax
 840f725:	01 c0                	add    %eax,%eax
 840f727:	01 d0                	add    %edx,%eax
 840f729:	c1 e0 03             	shl    $0x3,%eax
 840f72c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f72f:	05 54 3a 00 00       	add    $0x3a54,%eax
 840f734:	8b 00                	mov    (%eax),%eax
 840f736:	83 f8 01             	cmp    $0x1,%eax
 840f739:	0f 85 26 01 00 00    	jne    840f865 <_ZN8DB_Login8dispatchEiiP6Stream+0x349>
 840f73f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f742:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f745:	89 d0                	mov    %edx,%eax
 840f747:	01 c0                	add    %eax,%eax
 840f749:	01 d0                	add    %edx,%eax
 840f74b:	c1 e0 03             	shl    $0x3,%eax
 840f74e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f751:	05 68 3a 00 00       	add    $0x3a68,%eax
 840f756:	8b 18                	mov    (%eax),%ebx
 840f758:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 840f75f:	e8 3a c5 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 840f764:	39 c3                	cmp    %eax,%ebx
 840f766:	7d 1d                	jge    840f785 <_ZN8DB_Login8dispatchEiiP6Stream+0x269>
 840f768:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f76b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f76e:	89 d0                	mov    %edx,%eax
 840f770:	01 c0                	add    %eax,%eax
 840f772:	01 d0                	add    %edx,%eax
 840f774:	c1 e0 03             	shl    $0x3,%eax
 840f777:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f77a:	05 68 3a 00 00       	add    $0x3a68,%eax
 840f77f:	8b 00                	mov    (%eax),%eax
 840f781:	85 c0                	test   %eax,%eax
 840f783:	75 07                	jne    840f78c <_ZN8DB_Login8dispatchEiiP6Stream+0x270>
 840f785:	b8 01 00 00 00       	mov    $0x1,%eax
 840f78a:	eb 05                	jmp    840f791 <_ZN8DB_Login8dispatchEiiP6Stream+0x275>
 840f78c:	b8 00 00 00 00       	mov    $0x0,%eax
 840f791:	84 c0                	test   %al,%al
 840f793:	0f 84 cc 00 00 00    	je     840f865 <_ZN8DB_Login8dispatchEiiP6Stream+0x349>
 840f799:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f79c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f79f:	89 d0                	mov    %edx,%eax
 840f7a1:	01 c0                	add    %eax,%eax
 840f7a3:	01 d0                	add    %edx,%eax
 840f7a5:	c1 e0 03             	shl    $0x3,%eax
 840f7a8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f7ab:	05 68 3a 00 00       	add    $0x3a68,%eax
 840f7b0:	8b 00                	mov    (%eax),%eax
 840f7b2:	85 c0                	test   %eax,%eax
 840f7b4:	74 30                	je     840f7e6 <_ZN8DB_Login8dispatchEiiP6Stream+0x2ca>
 840f7b6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f7b9:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f7bc:	89 d0                	mov    %edx,%eax
 840f7be:	01 c0                	add    %eax,%eax
 840f7c0:	01 d0                	add    %edx,%eax
 840f7c2:	c1 e0 03             	shl    $0x3,%eax
 840f7c5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f7c8:	05 5c 3a 00 00       	add    $0x3a5c,%eax
 840f7cd:	8b 00                	mov    (%eax),%eax
 840f7cf:	83 f8 19             	cmp    $0x19,%eax
 840f7d2:	7e 05                	jle    840f7d9 <_ZN8DB_Login8dispatchEiiP6Stream+0x2bd>
 840f7d4:	b8 19 00 00 00       	mov    $0x19,%eax
 840f7d9:	89 c2                	mov    %eax,%edx
 840f7db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f7de:	89 90 d8 00 00 00    	mov    %edx,0xd8(%eax)
 840f7e4:	eb 58                	jmp    840f83e <_ZN8DB_Login8dispatchEiiP6Stream+0x322>
 840f7e6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f7e9:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f7ec:	89 d0                	mov    %edx,%eax
 840f7ee:	01 c0                	add    %eax,%eax
 840f7f0:	01 d0                	add    %edx,%eax
 840f7f2:	c1 e0 03             	shl    $0x3,%eax
 840f7f5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f7f8:	05 60 3a 00 00       	add    $0x3a60,%eax
 840f7fd:	8b 00                	mov    (%eax),%eax
 840f7ff:	83 f8 01             	cmp    $0x1,%eax
 840f802:	75 0f                	jne    840f813 <_ZN8DB_Login8dispatchEiiP6Stream+0x2f7>
 840f804:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f807:	c7 80 b8 00 00 00 0a 	movl   $0xa,0xb8(%eax)
 840f80e:	00 00 00 
 840f811:	eb 2b                	jmp    840f83e <_ZN8DB_Login8dispatchEiiP6Stream+0x322>
 840f813:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f816:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f819:	89 d0                	mov    %edx,%eax
 840f81b:	01 c0                	add    %eax,%eax
 840f81d:	01 d0                	add    %edx,%eax
 840f81f:	c1 e0 03             	shl    $0x3,%eax
 840f822:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f825:	05 60 3a 00 00       	add    $0x3a60,%eax
 840f82a:	8b 00                	mov    (%eax),%eax
 840f82c:	83 f8 02             	cmp    $0x2,%eax
 840f82f:	75 0d                	jne    840f83e <_ZN8DB_Login8dispatchEiiP6Stream+0x322>
 840f831:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f834:	c7 80 b8 00 00 00 0b 	movl   $0xb,0xb8(%eax)
 840f83b:	00 00 00 
 840f83e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f841:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840f845:	8b 45 10             	mov    0x10(%ebp),%eax
 840f848:	89 44 24 08          	mov    %eax,0x8(%esp)
 840f84c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f853:	8b 45 08             	mov    0x8(%ebp),%eax
 840f856:	89 04 24             	mov    %eax,(%esp)
 840f859:	e8 10 54 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840f85e:	89 c3                	mov    %eax,%ebx
 840f860:	e9 5c 07 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840f865:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f868:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f86b:	89 d0                	mov    %edx,%eax
 840f86d:	01 c0                	add    %eax,%eax
 840f86f:	01 d0                	add    %edx,%eax
 840f871:	c1 e0 03             	shl    $0x3,%eax
 840f874:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f877:	05 54 3a 00 00       	add    $0x3a54,%eax
 840f87c:	8b 00                	mov    (%eax),%eax
 840f87e:	83 f8 02             	cmp    $0x2,%eax
 840f881:	74 24                	je     840f8a7 <_ZN8DB_Login8dispatchEiiP6Stream+0x38b>
 840f883:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f886:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f889:	89 d0                	mov    %edx,%eax
 840f88b:	01 c0                	add    %eax,%eax
 840f88d:	01 d0                	add    %edx,%eax
 840f88f:	c1 e0 03             	shl    $0x3,%eax
 840f892:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f895:	05 54 3a 00 00       	add    $0x3a54,%eax
 840f89a:	8b 00                	mov    (%eax),%eax
 840f89c:	3d ea 03 00 00       	cmp    $0x3ea,%eax
 840f8a1:	0f 85 27 01 00 00    	jne    840f9ce <_ZN8DB_Login8dispatchEiiP6Stream+0x4b2>
 840f8a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f8aa:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f8ad:	89 d0                	mov    %edx,%eax
 840f8af:	01 c0                	add    %eax,%eax
 840f8b1:	01 d0                	add    %edx,%eax
 840f8b3:	c1 e0 03             	shl    $0x3,%eax
 840f8b6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f8b9:	05 68 3a 00 00       	add    $0x3a68,%eax
 840f8be:	8b 18                	mov    (%eax),%ebx
 840f8c0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 840f8c7:	e8 d2 c3 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 840f8cc:	39 c3                	cmp    %eax,%ebx
 840f8ce:	7d 1d                	jge    840f8ed <_ZN8DB_Login8dispatchEiiP6Stream+0x3d1>
 840f8d0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f8d3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f8d6:	89 d0                	mov    %edx,%eax
 840f8d8:	01 c0                	add    %eax,%eax
 840f8da:	01 d0                	add    %edx,%eax
 840f8dc:	c1 e0 03             	shl    $0x3,%eax
 840f8df:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f8e2:	05 68 3a 00 00       	add    $0x3a68,%eax
 840f8e7:	8b 00                	mov    (%eax),%eax
 840f8e9:	85 c0                	test   %eax,%eax
 840f8eb:	75 07                	jne    840f8f4 <_ZN8DB_Login8dispatchEiiP6Stream+0x3d8>
 840f8ed:	b8 01 00 00 00       	mov    $0x1,%eax
 840f8f2:	eb 05                	jmp    840f8f9 <_ZN8DB_Login8dispatchEiiP6Stream+0x3dd>
 840f8f4:	b8 00 00 00 00       	mov    $0x0,%eax
 840f8f9:	84 c0                	test   %al,%al
 840f8fb:	0f 84 cd 00 00 00    	je     840f9ce <_ZN8DB_Login8dispatchEiiP6Stream+0x4b2>
 840f901:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f904:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f907:	89 d0                	mov    %edx,%eax
 840f909:	01 c0                	add    %eax,%eax
 840f90b:	01 d0                	add    %edx,%eax
 840f90d:	c1 e0 03             	shl    $0x3,%eax
 840f910:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f913:	05 68 3a 00 00       	add    $0x3a68,%eax
 840f918:	8b 00                	mov    (%eax),%eax
 840f91a:	85 c0                	test   %eax,%eax
 840f91c:	74 31                	je     840f94f <_ZN8DB_Login8dispatchEiiP6Stream+0x433>
 840f91e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f921:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f924:	89 d0                	mov    %edx,%eax
 840f926:	01 c0                	add    %eax,%eax
 840f928:	01 d0                	add    %edx,%eax
 840f92a:	c1 e0 03             	shl    $0x3,%eax
 840f92d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f930:	05 5c 3a 00 00       	add    $0x3a5c,%eax
 840f935:	8b 00                	mov    (%eax),%eax
 840f937:	83 f8 19             	cmp    $0x19,%eax
 840f93a:	7e 05                	jle    840f941 <_ZN8DB_Login8dispatchEiiP6Stream+0x425>
 840f93c:	b8 19 00 00 00       	mov    $0x19,%eax
 840f941:	8d 50 0c             	lea    0xc(%eax),%edx
 840f944:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f947:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 840f94d:	eb 58                	jmp    840f9a7 <_ZN8DB_Login8dispatchEiiP6Stream+0x48b>
 840f94f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f952:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f955:	89 d0                	mov    %edx,%eax
 840f957:	01 c0                	add    %eax,%eax
 840f959:	01 d0                	add    %edx,%eax
 840f95b:	c1 e0 03             	shl    $0x3,%eax
 840f95e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f961:	05 60 3a 00 00       	add    $0x3a60,%eax
 840f966:	8b 00                	mov    (%eax),%eax
 840f968:	83 f8 01             	cmp    $0x1,%eax
 840f96b:	75 0f                	jne    840f97c <_ZN8DB_Login8dispatchEiiP6Stream+0x460>
 840f96d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f970:	c7 80 b8 00 00 00 0a 	movl   $0xa,0xb8(%eax)
 840f977:	00 00 00 
 840f97a:	eb 2b                	jmp    840f9a7 <_ZN8DB_Login8dispatchEiiP6Stream+0x48b>
 840f97c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f97f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f982:	89 d0                	mov    %edx,%eax
 840f984:	01 c0                	add    %eax,%eax
 840f986:	01 d0                	add    %edx,%eax
 840f988:	c1 e0 03             	shl    $0x3,%eax
 840f98b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f98e:	05 60 3a 00 00       	add    $0x3a60,%eax
 840f993:	8b 00                	mov    (%eax),%eax
 840f995:	83 f8 02             	cmp    $0x2,%eax
 840f998:	75 0d                	jne    840f9a7 <_ZN8DB_Login8dispatchEiiP6Stream+0x48b>
 840f99a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f99d:	c7 80 b8 00 00 00 0b 	movl   $0xb,0xb8(%eax)
 840f9a4:	00 00 00 
 840f9a7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840f9aa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840f9ae:	8b 45 10             	mov    0x10(%ebp),%eax
 840f9b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 840f9b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 840f9b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 840f9bc:	8b 45 08             	mov    0x8(%ebp),%eax
 840f9bf:	89 04 24             	mov    %eax,(%esp)
 840f9c2:	e8 a7 52 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840f9c7:	89 c3                	mov    %eax,%ebx
 840f9c9:	e9 f3 05 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840f9ce:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f9d1:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f9d4:	89 d0                	mov    %edx,%eax
 840f9d6:	01 c0                	add    %eax,%eax
 840f9d8:	01 d0                	add    %edx,%eax
 840f9da:	c1 e0 03             	shl    $0x3,%eax
 840f9dd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f9e0:	05 54 3a 00 00       	add    $0x3a54,%eax
 840f9e5:	8b 00                	mov    (%eax),%eax
 840f9e7:	83 f8 03             	cmp    $0x3,%eax
 840f9ea:	74 24                	je     840fa10 <_ZN8DB_Login8dispatchEiiP6Stream+0x4f4>
 840f9ec:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840f9ef:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840f9f2:	89 d0                	mov    %edx,%eax
 840f9f4:	01 c0                	add    %eax,%eax
 840f9f6:	01 d0                	add    %edx,%eax
 840f9f8:	c1 e0 03             	shl    $0x3,%eax
 840f9fb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840f9fe:	05 54 3a 00 00       	add    $0x3a54,%eax
 840fa03:	8b 00                	mov    (%eax),%eax
 840fa05:	3d eb 03 00 00       	cmp    $0x3eb,%eax
 840fa0a:	0f 85 cd 00 00 00    	jne    840fadd <_ZN8DB_Login8dispatchEiiP6Stream+0x5c1>
 840fa10:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fa13:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fa16:	89 d0                	mov    %edx,%eax
 840fa18:	01 c0                	add    %eax,%eax
 840fa1a:	01 d0                	add    %edx,%eax
 840fa1c:	c1 e0 03             	shl    $0x3,%eax
 840fa1f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fa22:	05 68 3a 00 00       	add    $0x3a68,%eax
 840fa27:	8b 00                	mov    (%eax),%eax
 840fa29:	85 c0                	test   %eax,%eax
 840fa2b:	74 31                	je     840fa5e <_ZN8DB_Login8dispatchEiiP6Stream+0x542>
 840fa2d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fa30:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fa33:	89 d0                	mov    %edx,%eax
 840fa35:	01 c0                	add    %eax,%eax
 840fa37:	01 d0                	add    %edx,%eax
 840fa39:	c1 e0 03             	shl    $0x3,%eax
 840fa3c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fa3f:	05 5c 3a 00 00       	add    $0x3a5c,%eax
 840fa44:	8b 00                	mov    (%eax),%eax
 840fa46:	83 f8 19             	cmp    $0x19,%eax
 840fa49:	7e 05                	jle    840fa50 <_ZN8DB_Login8dispatchEiiP6Stream+0x534>
 840fa4b:	b8 19 00 00 00       	mov    $0x19,%eax
 840fa50:	8d 50 0c             	lea    0xc(%eax),%edx
 840fa53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fa56:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 840fa5c:	eb 58                	jmp    840fab6 <_ZN8DB_Login8dispatchEiiP6Stream+0x59a>
 840fa5e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fa61:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fa64:	89 d0                	mov    %edx,%eax
 840fa66:	01 c0                	add    %eax,%eax
 840fa68:	01 d0                	add    %edx,%eax
 840fa6a:	c1 e0 03             	shl    $0x3,%eax
 840fa6d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fa70:	05 60 3a 00 00       	add    $0x3a60,%eax
 840fa75:	8b 00                	mov    (%eax),%eax
 840fa77:	83 f8 01             	cmp    $0x1,%eax
 840fa7a:	75 0f                	jne    840fa8b <_ZN8DB_Login8dispatchEiiP6Stream+0x56f>
 840fa7c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fa7f:	c7 80 b8 00 00 00 0a 	movl   $0xa,0xb8(%eax)
 840fa86:	00 00 00 
 840fa89:	eb 2b                	jmp    840fab6 <_ZN8DB_Login8dispatchEiiP6Stream+0x59a>
 840fa8b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fa8e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fa91:	89 d0                	mov    %edx,%eax
 840fa93:	01 c0                	add    %eax,%eax
 840fa95:	01 d0                	add    %edx,%eax
 840fa97:	c1 e0 03             	shl    $0x3,%eax
 840fa9a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fa9d:	05 60 3a 00 00       	add    $0x3a60,%eax
 840faa2:	8b 00                	mov    (%eax),%eax
 840faa4:	83 f8 02             	cmp    $0x2,%eax
 840faa7:	75 0d                	jne    840fab6 <_ZN8DB_Login8dispatchEiiP6Stream+0x59a>
 840faa9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840faac:	c7 80 b8 00 00 00 0b 	movl   $0xb,0xb8(%eax)
 840fab3:	00 00 00 
 840fab6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fab9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840fabd:	8b 45 10             	mov    0x10(%ebp),%eax
 840fac0:	89 44 24 08          	mov    %eax,0x8(%esp)
 840fac4:	8b 45 0c             	mov    0xc(%ebp),%eax
 840fac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 840facb:	8b 45 08             	mov    0x8(%ebp),%eax
 840face:	89 04 24             	mov    %eax,(%esp)
 840fad1:	e8 98 51 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840fad6:	89 c3                	mov    %eax,%ebx
 840fad8:	e9 e4 04 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840fadd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fae0:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fae3:	89 d0                	mov    %edx,%eax
 840fae5:	01 c0                	add    %eax,%eax
 840fae7:	01 d0                	add    %edx,%eax
 840fae9:	c1 e0 03             	shl    $0x3,%eax
 840faec:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840faef:	05 54 3a 00 00       	add    $0x3a54,%eax
 840faf4:	8b 00                	mov    (%eax),%eax
 840faf6:	83 f8 04             	cmp    $0x4,%eax
 840faf9:	75 56                	jne    840fb51 <_ZN8DB_Login8dispatchEiiP6Stream+0x635>
 840fafb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fafe:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fb01:	89 d0                	mov    %edx,%eax
 840fb03:	01 c0                	add    %eax,%eax
 840fb05:	01 d0                	add    %edx,%eax
 840fb07:	c1 e0 03             	shl    $0x3,%eax
 840fb0a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fb0d:	05 60 3a 00 00       	add    $0x3a60,%eax
 840fb12:	8b 00                	mov    (%eax),%eax
 840fb14:	83 f8 01             	cmp    $0x1,%eax
 840fb17:	75 0e                	jne    840fb27 <_ZN8DB_Login8dispatchEiiP6Stream+0x60b>
 840fb19:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fb1c:	66 c7 80 de 38 00 00 	movw   $0xd,0x38de(%eax)
 840fb23:	0d 00 
 840fb25:	eb 2a                	jmp    840fb51 <_ZN8DB_Login8dispatchEiiP6Stream+0x635>
 840fb27:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fb2a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fb2d:	89 d0                	mov    %edx,%eax
 840fb2f:	01 c0                	add    %eax,%eax
 840fb31:	01 d0                	add    %edx,%eax
 840fb33:	c1 e0 03             	shl    $0x3,%eax
 840fb36:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fb39:	05 60 3a 00 00       	add    $0x3a60,%eax
 840fb3e:	8b 00                	mov    (%eax),%eax
 840fb40:	83 f8 02             	cmp    $0x2,%eax
 840fb43:	75 0c                	jne    840fb51 <_ZN8DB_Login8dispatchEiiP6Stream+0x635>
 840fb45:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fb48:	66 c7 80 de 38 00 00 	movw   $0xe,0x38de(%eax)
 840fb4f:	0e 00 
 840fb51:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840fb54:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 840fb57:	89 d0                	mov    %edx,%eax
 840fb59:	01 c0                	add    %eax,%eax
 840fb5b:	01 d0                	add    %edx,%eax
 840fb5d:	c1 e0 03             	shl    $0x3,%eax
 840fb60:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840fb63:	05 54 3a 00 00       	add    $0x3a54,%eax
 840fb68:	8b 00                	mov    (%eax),%eax
 840fb6a:	83 f8 0a             	cmp    $0xa,%eax
 840fb6d:	75 0a                	jne    840fb79 <_ZN8DB_Login8dispatchEiiP6Stream+0x65d>
 840fb6f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fb72:	c6 80 0c 3f 00 00 01 	movb   $0x1,0x3f0c(%eax)
 840fb79:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840fb7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fb80:	8b 80 50 3a 00 00    	mov    0x3a50(%eax),%eax
 840fb86:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 840fb89:	0f 9f c0             	setg   %al
 840fb8c:	84 c0                	test   %al,%al
 840fb8e:	0f 85 89 fb ff ff    	jne    840f71d <_ZN8DB_Login8dispatchEiiP6Stream+0x201>
 840fb94:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fb97:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fb9b:	8b 45 08             	mov    0x8(%ebp),%eax
 840fb9e:	89 04 24             	mov    %eax,(%esp)
 840fba1:	e8 52 1a 00 00       	call   84115f8 <_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA>
 840fba6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 840fbad:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 840fbb4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 840fbbb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fbbe:	0f b6 80 e0 38 00 00 	movzbl 0x38e0(%eax),%eax
 840fbc5:	84 c0                	test   %al,%al
 840fbc7:	74 26                	je     840fbef <_ZN8DB_Login8dispatchEiiP6Stream+0x6d3>
 840fbc9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fbcc:	0f b6 80 0e 39 00 00 	movzbl 0x390e(%eax),%eax
 840fbd3:	83 f0 01             	xor    $0x1,%eax
 840fbd6:	84 c0                	test   %al,%al
 840fbd8:	74 15                	je     840fbef <_ZN8DB_Login8dispatchEiiP6Stream+0x6d3>
 840fbda:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fbdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fbe1:	8b 45 08             	mov    0x8(%ebp),%eax
 840fbe4:	89 04 24             	mov    %eax,(%esp)
 840fbe7:	e8 04 1f 00 00       	call   8411af0 <_ZN8DB_Login19_convertPassPadInfoEP14SIG_LOGIN_DATA>
 840fbec:	89 45 ec             	mov    %eax,-0x14(%ebp)
 840fbef:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 840fbf3:	74 61                	je     840fc56 <_ZN8DB_Login8dispatchEiiP6Stream+0x73a>
 840fbf5:	83 7d ec 48          	cmpl   $0x48,-0x14(%ebp)
 840fbf9:	75 0f                	jne    840fc0a <_ZN8DB_Login8dispatchEiiP6Stream+0x6ee>
 840fbfb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fbfe:	c7 80 b8 00 00 00 05 	movl   $0x5,0xb8(%eax)
 840fc05:	00 00 00 
 840fc08:	eb 25                	jmp    840fc2f <_ZN8DB_Login8dispatchEiiP6Stream+0x713>
 840fc0a:	81 7d ec a6 00 00 00 	cmpl   $0xa6,-0x14(%ebp)
 840fc11:	75 0f                	jne    840fc22 <_ZN8DB_Login8dispatchEiiP6Stream+0x706>
 840fc13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fc16:	c7 80 b8 00 00 00 09 	movl   $0x9,0xb8(%eax)
 840fc1d:	00 00 00 
 840fc20:	eb 0d                	jmp    840fc2f <_ZN8DB_Login8dispatchEiiP6Stream+0x713>
 840fc22:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fc25:	c7 80 b8 00 00 00 06 	movl   $0x6,0xb8(%eax)
 840fc2c:	00 00 00 
 840fc2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fc32:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840fc36:	8b 45 10             	mov    0x10(%ebp),%eax
 840fc39:	89 44 24 08          	mov    %eax,0x8(%esp)
 840fc3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 840fc40:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fc44:	8b 45 08             	mov    0x8(%ebp),%eax
 840fc47:	89 04 24             	mov    %eax,(%esp)
 840fc4a:	e8 1f 50 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840fc4f:	89 c3                	mov    %eax,%ebx
 840fc51:	e9 6b 03 00 00       	jmp    840ffc1 <_ZN8DB_Login8dispatchEiiP6Stream+0xaa5>
 840fc56:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fc59:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 840fc60:	00 00 00 
 840fc63:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840fc66:	89 04 24             	mov    %eax,(%esp)
 840fc69:	e8 9a ff d7 ff       	call   818fc08 <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EEC1Ev>
 840fc6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fc71:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 840fc77:	8d 55 d8             	lea    -0x28(%ebp),%edx
 840fc7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840fc7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fc82:	8b 45 08             	mov    0x8(%ebp),%eax
 840fc85:	89 04 24             	mov    %eax,(%esp)
 840fc88:	e8 4d 1f 00 00       	call   8411bda <_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE>
 840fc8d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840fc90:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840fc94:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fc97:	89 44 24 08          	mov    %eax,0x8(%esp)
 840fc9b:	8b 45 10             	mov    0x10(%ebp),%eax
 840fc9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fca2:	8b 45 08             	mov    0x8(%ebp),%eax
 840fca5:	89 04 24             	mov    %eax,(%esp)
 840fca8:	e8 3b 22 00 00       	call   8411ee8 <_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE>
 840fcad:	e8 f5 a6 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 840fcb2:	89 04 24             	mov    %eax,(%esp)
 840fcb5:	e8 66 6e d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 840fcba:	83 f8 07             	cmp    $0x7,%eax
 840fcbd:	0f 94 c0             	sete   %al
 840fcc0:	84 c0                	test   %al,%al
 840fcc2:	74 4e                	je     840fd12 <_ZN8DB_Login8dispatchEiiP6Stream+0x7f6>
 840fcc4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fcc7:	8b 80 ac 39 00 00    	mov    0x39ac(%eax),%eax
 840fccd:	85 c0                	test   %eax,%eax
 840fccf:	74 0d                	je     840fcde <_ZN8DB_Login8dispatchEiiP6Stream+0x7c2>
 840fcd1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fcd4:	8b 80 a8 39 00 00    	mov    0x39a8(%eax),%eax
 840fcda:	85 c0                	test   %eax,%eax
 840fcdc:	75 34                	jne    840fd12 <_ZN8DB_Login8dispatchEiiP6Stream+0x7f6>
 840fcde:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fce1:	c7 80 b8 00 00 00 08 	movl   $0x8,0xb8(%eax)
 840fce8:	00 00 00 
 840fceb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fcee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840fcf2:	8b 45 10             	mov    0x10(%ebp),%eax
 840fcf5:	89 44 24 08          	mov    %eax,0x8(%esp)
 840fcf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 840fcfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fd00:	8b 45 08             	mov    0x8(%ebp),%eax
 840fd03:	89 04 24             	mov    %eax,(%esp)
 840fd06:	e8 63 4f 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840fd0b:	89 c3                	mov    %eax,%ebx
 840fd0d:	e9 a4 02 00 00       	jmp    840ffb6 <_ZN8DB_Login8dispatchEiiP6Stream+0xa9a>
 840fd12:	e8 90 a6 cc ff       	call   80da3a7 <_Z11G_GameWorldv>
 840fd17:	89 04 24             	mov    %eax,(%esp)
 840fd1a:	e8 01 6e d0 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 840fd1f:	83 f8 0e             	cmp    $0xe,%eax
 840fd22:	0f 94 c0             	sete   %al
 840fd25:	84 c0                	test   %al,%al
 840fd27:	74 7b                	je     840fda4 <_ZN8DB_Login8dispatchEiiP6Stream+0x888>
 840fd29:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fd2c:	8b 80 d4 39 00 00    	mov    0x39d4(%eax),%eax
 840fd32:	85 c0                	test   %eax,%eax
 840fd34:	74 2a                	je     840fd60 <_ZN8DB_Login8dispatchEiiP6Stream+0x844>
 840fd36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fd39:	8b 80 d0 39 00 00    	mov    0x39d0(%eax),%eax
 840fd3f:	85 c0                	test   %eax,%eax
 840fd41:	74 1d                	je     840fd60 <_ZN8DB_Login8dispatchEiiP6Stream+0x844>
 840fd43:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fd46:	8b 98 d8 39 00 00    	mov    0x39d8(%eax),%ebx
 840fd4c:	e8 4a c4 cb ff       	call   80cc19b <_Z14G_CDataManagerv>
 840fd51:	89 04 24             	mov    %eax,(%esp)
 840fd54:	e8 55 d7 03 00       	call   844d4ae <_ZN12CDataManager10GetPvPModeEv>
 840fd59:	21 d8                	and    %ebx,%eax
 840fd5b:	83 f8 01             	cmp    $0x1,%eax
 840fd5e:	75 07                	jne    840fd67 <_ZN8DB_Login8dispatchEiiP6Stream+0x84b>
 840fd60:	b8 01 00 00 00       	mov    $0x1,%eax
 840fd65:	eb 05                	jmp    840fd6c <_ZN8DB_Login8dispatchEiiP6Stream+0x850>
 840fd67:	b8 00 00 00 00       	mov    $0x0,%eax
 840fd6c:	84 c0                	test   %al,%al
 840fd6e:	74 34                	je     840fda4 <_ZN8DB_Login8dispatchEiiP6Stream+0x888>
 840fd70:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fd73:	c7 80 b8 00 00 00 08 	movl   $0x8,0xb8(%eax)
 840fd7a:	00 00 00 
 840fd7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fd80:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840fd84:	8b 45 10             	mov    0x10(%ebp),%eax
 840fd87:	89 44 24 08          	mov    %eax,0x8(%esp)
 840fd8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840fd8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fd92:	8b 45 08             	mov    0x8(%ebp),%eax
 840fd95:	89 04 24             	mov    %eax,(%esp)
 840fd98:	e8 d1 4e 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840fd9d:	89 c3                	mov    %eax,%ebx
 840fd9f:	e9 12 02 00 00       	jmp    840ffb6 <_ZN8DB_Login8dispatchEiiP6Stream+0xa9a>
 840fda4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fda7:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fdab:	8b 45 08             	mov    0x8(%ebp),%eax
 840fdae:	89 04 24             	mov    %eax,(%esp)
 840fdb1:	e8 bc 49 00 00       	call   8414772 <_ZN8DB_Login13GetGameDBInfoEP14SIG_LOGIN_DATA>
 840fdb6:	83 f8 01             	cmp    $0x1,%eax
 840fdb9:	0f 95 c0             	setne  %al
 840fdbc:	84 c0                	test   %al,%al
 840fdbe:	74 1b                	je     840fddb <_ZN8DB_Login8dispatchEiiP6Stream+0x8bf>
 840fdc0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fdc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 840fdc7:	8b 45 10             	mov    0x10(%ebp),%eax
 840fdca:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fdce:	8b 45 08             	mov    0x8(%ebp),%eax
 840fdd1:	89 04 24             	mov    %eax,(%esp)
 840fdd4:	e8 77 4f 00 00       	call   8414d50 <_ZN8DB_Login15UpdateLoginStatEiP14SIG_LOGIN_DATA>
 840fdd9:	eb 0d                	jmp    840fde8 <_ZN8DB_Login8dispatchEiiP6Stream+0x8cc>
 840fddb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fdde:	c7 80 b8 00 00 00 0f 	movl   $0xf,0xb8(%eax)
 840fde5:	00 00 00 
 840fde8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fdeb:	0f b6 80 e0 39 00 00 	movzbl 0x39e0(%eax),%eax
 840fdf2:	84 c0                	test   %al,%al
 840fdf4:	74 23                	je     840fe19 <_ZN8DB_Login8dispatchEiiP6Stream+0x8fd>
 840fdf6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fdf9:	0f b6 80 e1 39 00 00 	movzbl 0x39e1(%eax),%eax
 840fe00:	83 f0 01             	xor    $0x1,%eax
 840fe03:	84 c0                	test   %al,%al
 840fe05:	74 12                	je     840fe19 <_ZN8DB_Login8dispatchEiiP6Stream+0x8fd>
 840fe07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fe0e:	8b 45 08             	mov    0x8(%ebp),%eax
 840fe11:	89 04 24             	mov    %eax,(%esp)
 840fe14:	e8 c9 13 00 00       	call   84111e2 <_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA>
 840fe19:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fe20:	8b 45 08             	mov    0x8(%ebp),%eax
 840fe23:	89 04 24             	mov    %eax,(%esp)
 840fe26:	e8 9f 01 00 00       	call   840ffca <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA>
 840fe2b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fe32:	8b 45 08             	mov    0x8(%ebp),%eax
 840fe35:	89 04 24             	mov    %eax,(%esp)
 840fe38:	e8 71 03 00 00       	call   84101ae <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA>
 840fe3d:	83 f0 01             	xor    $0x1,%eax
 840fe40:	84 c0                	test   %al,%al
 840fe42:	74 0c                	je     840fe50 <_ZN8DB_Login8dispatchEiiP6Stream+0x934>
 840fe44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe47:	c6 80 58 3f 00 00 00 	movb   $0x0,0x3f58(%eax)
 840fe4e:	eb 0a                	jmp    840fe5a <_ZN8DB_Login8dispatchEiiP6Stream+0x93e>
 840fe50:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe53:	c6 80 58 3f 00 00 01 	movb   $0x1,0x3f58(%eax)
 840fe5a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe5d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 840fe63:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fe67:	8b 45 08             	mov    0x8(%ebp),%eax
 840fe6a:	89 04 24             	mov    %eax,(%esp)
 840fe6d:	e8 02 11 00 00       	call   8410f74 <_ZN8DB_Login25_isJoinedSchoolPointEventEj>
 840fe72:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 840fe75:	88 82 4a 3a 00 00    	mov    %al,0x3a4a(%edx)
 840fe7b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fe82:	8b 45 08             	mov    0x8(%ebp),%eax
 840fe85:	89 04 24             	mov    %eax,(%esp)
 840fe88:	e8 85 0d 00 00       	call   8410c12 <_ZN8DB_Login21GetDailyCleanPadPointEP14SIG_LOGIN_DATA>
 840fe8d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fe90:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fe94:	8b 45 08             	mov    0x8(%ebp),%eax
 840fe97:	89 04 24             	mov    %eax,(%esp)
 840fe9a:	e8 e3 ba 03 00       	call   844b982 <_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA>
 840fe9f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fea2:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fea6:	8b 45 08             	mov    0x8(%ebp),%eax
 840fea9:	89 04 24             	mov    %eax,(%esp)
 840feac:	e8 27 0c 00 00       	call   8410ad8 <_ZN8DB_Login17GetReturnUserInfoEP14SIG_LOGIN_DATA>
 840feb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840feb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 840feb8:	8b 45 08             	mov    0x8(%ebp),%eax
 840febb:	89 04 24             	mov    %eax,(%esp)
 840febe:	e8 49 0a 00 00       	call   841090c <_ZN8DB_Login18GetLoginCommonDataEP14SIG_LOGIN_DATA>
 840fec3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fec6:	89 44 24 04          	mov    %eax,0x4(%esp)
 840feca:	8b 45 08             	mov    0x8(%ebp),%eax
 840fecd:	89 04 24             	mov    %eax,(%esp)
 840fed0:	e8 a5 4f 00 00       	call   8414e7a <_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA>
 840fed5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fed8:	89 44 24 04          	mov    %eax,0x4(%esp)
 840fedc:	8b 45 08             	mov    0x8(%ebp),%eax
 840fedf:	89 04 24             	mov    %eax,(%esp)
 840fee2:	e8 75 50 00 00       	call   8414f5c <_ZN8DB_Login20GetOntimeUserRecvIdxEP14SIG_LOGIN_DATA>
 840fee7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840feea:	89 44 24 04          	mov    %eax,0x4(%esp)
 840feee:	8b 45 08             	mov    0x8(%ebp),%eax
 840fef1:	89 04 24             	mov    %eax,(%esp)
 840fef4:	e8 ef 51 00 00       	call   84150e8 <_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA>
 840fef9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840fefc:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff00:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff03:	89 04 24             	mov    %eax,(%esp)
 840ff06:	e8 a5 53 00 00       	call   84152b0 <_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA>
 840ff0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff12:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff15:	89 04 24             	mov    %eax,(%esp)
 840ff18:	e8 55 55 00 00       	call   8415472 <_ZN8DB_Login12CheckLoginIPEP14SIG_LOGIN_DATA>
 840ff1d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff20:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff24:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff27:	89 04 24             	mov    %eax,(%esp)
 840ff2a:	e8 e9 56 00 00       	call   8415618 <_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA>
 840ff2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff32:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff36:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff39:	89 04 24             	mov    %eax,(%esp)
 840ff3c:	e8 ad 8c 03 00       	call   8448bee <_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA>
 840ff41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff44:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff48:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff4b:	89 04 24             	mov    %eax,(%esp)
 840ff4e:	e8 53 7f 03 00       	call   8447ea6 <_ZN8DB_Login20GetGrowthWeaponEventEP14SIG_LOGIN_DATA>
 840ff53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff56:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff5a:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff5d:	89 04 24             	mov    %eax,(%esp)
 840ff60:	e8 9d 81 03 00       	call   8448102 <_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA>
 840ff65:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff68:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff6c:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff6f:	89 04 24             	mov    %eax,(%esp)
 840ff72:	e8 d7 83 03 00       	call   844834e <_ZN8DB_Login34GetAccountCharacterLevelUpOnceGiftEP14SIG_LOGIN_DATA>
 840ff77:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ff7a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840ff7e:	8b 45 10             	mov    0x10(%ebp),%eax
 840ff81:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ff85:	8b 45 0c             	mov    0xc(%ebp),%eax
 840ff88:	89 44 24 04          	mov    %eax,0x4(%esp)
 840ff8c:	8b 45 08             	mov    0x8(%ebp),%eax
 840ff8f:	89 04 24             	mov    %eax,(%esp)
 840ff92:	e8 d7 4c 00 00       	call   8414c6e <_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA>
 840ff97:	89 c3                	mov    %eax,%ebx
 840ff99:	eb 1b                	jmp    840ffb6 <_ZN8DB_Login8dispatchEiiP6Stream+0xa9a>
 840ff9b:	89 d3                	mov    %edx,%ebx
 840ff9d:	89 c6                	mov    %eax,%esi
 840ff9f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840ffa2:	89 04 24             	mov    %eax,(%esp)
 840ffa5:	e8 72 fc d7 ff       	call   818fc1c <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EED1Ev>
 840ffaa:	89 f0                	mov    %esi,%eax
 840ffac:	89 da                	mov    %ebx,%edx
 840ffae:	89 04 24             	mov    %eax,(%esp)
 840ffb1:	e8 9a 37 6d 00       	call   8ae3750 <_Unwind_Resume>
 840ffb6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840ffb9:	89 04 24             	mov    %eax,(%esp)
 840ffbc:	e8 5b fc d7 ff       	call   818fc1c <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EED1Ev>
 840ffc1:	89 d8                	mov    %ebx,%eax
 840ffc3:	83 c4 40             	add    $0x40,%esp
 840ffc6:	5b                   	pop    %ebx
 840ffc7:	5e                   	pop    %esi
 840ffc8:	5d                   	pop    %ebp
 840ffc9:	c3                   	ret

```

```c
// DB_Login::dispatch @ 0x840f51c

/* DB_Login::dispatch(int, int, Stream*) */

undefined4 __thiscall DB_Login::dispatch(DB_Login *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  SIG_LOGIN_DATA SVar4;
  GameWorld *pGVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  CDataManager *this_00;
  uint uVar9;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> local_2c [12];
  SIG_LOGIN_DATA *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  cVar3 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar3 != '\x01') {
    return 0;
  }
  local_20 = Stream::GetOutBuffer<SIG_LOGIN_DATA>(param_3);
  if (local_20 == (SIG_LOGIN_DATA *)0x0) {
    return 0;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar3 == '\0') {
LAB_0840f59d:
    bVar2 = false;
  }
  else {
    pGVar5 = (GameWorld *)G_GameWorld();
    iVar6 = GameWorld::GetChannelType(pGVar5);
    if (iVar6 == 0xe) goto LAB_0840f59d;
    bVar2 = true;
  }
  if (bVar2) {
    local_38 = 0;
    local_34 = 0;
    local_30 = (int)*(short *)(local_20 + 0x3a38);
    DBMgr::addUserDBInfo(GlobalData::s_db_mgr,param_2,(stUserDBInfo_t *)&local_38);
    DBMgr::setUserIdx(GlobalData::s_db_mgr,param_2);
  }
  cVar3 = GetAccountInfo(this,local_20);
  if (cVar3 != '\x01') {
    *(undefined4 *)(local_20 + 0xb8) = 1;
    uVar7 = SendResult(this,param_1,param_2,local_20);
    return uVar7;
  }
  SaveLoginTime(this,*(uint *)(local_20 + 0xc0),*(int *)(local_20 + 0x3a30),
                (char *)(local_20 + 0xa1));
  *(undefined2 *)(local_20 + 0x38de) = 0;
  cVar3 = GetPunishUserInfo(this,local_20);
  if (cVar3 != '\x01') {
    *(undefined4 *)(local_20 + 0xb8) = 0xf;
    uVar7 = SendResult(this,param_1,param_2,local_20);
    return uVar7;
  }
  local_20[0x3f0c] = (SIG_LOGIN_DATA)0x0;
  *(undefined4 *)(local_20 + 0x3a24) = 0;
  *(undefined4 *)(local_20 + 0x3a28) = 0;
  *(undefined4 *)(local_20 + 0x3a2c) = 0;
  if (*(int *)(local_20 + 0x3a50) != 0) {
    for (local_10 = 0; local_10 < *(int *)(local_20 + 0x3a50); local_10 = local_10 + 1) {
      if (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 1) {
        iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a68);
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if ((iVar6 < iVar8) && (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) == 0) {
            if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
              *(undefined4 *)(local_20 + 0xb8) = 10;
            }
            else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
              *(undefined4 *)(local_20 + 0xb8) = 0xb;
            }
          }
          else {
            iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a5c);
            if (0x19 < iVar6) {
              iVar6 = 0x19;
            }
            *(int *)(local_20 + 0xd8) = iVar6;
          }
          uVar7 = SendResult(this,param_1,param_2,local_20);
          return uVar7;
        }
      }
      if ((*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 2) ||
         (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 0x3ea)) {
        iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a68);
        iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if ((iVar6 < iVar8) && (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) == 0) {
            if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
              *(undefined4 *)(local_20 + 0xb8) = 10;
            }
            else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
              *(undefined4 *)(local_20 + 0xb8) = 0xb;
            }
          }
          else {
            iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a5c);
            if (0x19 < iVar6) {
              iVar6 = 0x19;
            }
            *(int *)(local_20 + 0xb8) = iVar6 + 0xc;
          }
          uVar7 = SendResult(this,param_1,param_2,local_20);
          return uVar7;
        }
      }
      if ((*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 3) ||
         (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 0x3eb)) {
        if (*(int *)(local_20 + local_10 * 0x18 + 0x3a68) == 0) {
          if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
            *(undefined4 *)(local_20 + 0xb8) = 10;
          }
          else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
            *(undefined4 *)(local_20 + 0xb8) = 0xb;
          }
        }
        else {
          iVar6 = *(int *)(local_20 + local_10 * 0x18 + 0x3a5c);
          if (0x19 < iVar6) {
            iVar6 = 0x19;
          }
          *(int *)(local_20 + 0xb8) = iVar6 + 0xc;
        }
        uVar7 = SendResult(this,param_1,param_2,local_20);
        return uVar7;
      }
      if (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 4) {
        if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 1) {
          *(undefined2 *)(local_20 + 0x38de) = 0xd;
        }
        else if (*(int *)(local_20 + local_10 * 0x18 + 0x3a60) == 2) {
          *(undefined2 *)(local_20 + 0x38de) = 0xe;
        }
      }
      if (*(int *)(local_20 + local_10 * 0x18 + 0x3a54) == 10) {
        local_20[0x3f0c] = (SIG_LOGIN_DATA)0x1;
      }
    }
  }
  _getRewardInfo(this,local_20);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((local_20[0x38e0] != (SIG_LOGIN_DATA)0x0) && (local_20[0x390e] != (SIG_LOGIN_DATA)0x1)) {
    local_18 = _convertPassPadInfo(this,local_20);
  }
  if (local_18 != 0) {
    if (local_18 == 0x48) {
      *(undefined4 *)(local_20 + 0xb8) = 5;
    }
    else if (local_18 == 0xa6) {
      *(undefined4 *)(local_20 + 0xb8) = 9;
    }
    else {
      *(undefined4 *)(local_20 + 0xb8) = 6;
    }
    uVar7 = SendResult(this,param_1,param_2,local_20);
    return uVar7;
  }
  *(undefined4 *)(local_20 + 0xb8) = 0;
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::vector
            (local_2c);
                    /* try { // try from 0840fc88 to 0840ff96 has its CatchHandler @ 0840ff9b */
  _LoadDNFEventEntry(this,*(uint *)(local_20 + 0xc0),(vector *)local_2c);
  GetPremiumInfo((int)this,(SIG_LOGIN_DATA *)param_2,(vector *)local_20);
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar5);
  if ((iVar6 == 7) && ((*(int *)(local_20 + 0x39ac) == 0 || (*(int *)(local_20 + 0x39a8) == 0)))) {
    *(undefined4 *)(local_20 + 0xb8) = 8;
    uVar7 = SendResult(this,param_1,param_2,local_20);
    goto LAB_0840ffb6;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar5);
  if (iVar6 == 0xe) {
    if ((*(int *)(local_20 + 0x39d4) == 0) || (*(int *)(local_20 + 0x39d0) == 0)) {
LAB_0840fd60:
      bVar2 = true;
    }
    else {
      uVar1 = *(uint *)(local_20 + 0x39d8);
      this_00 = (CDataManager *)G_CDataManager();
      uVar9 = CDataManager::GetPvPMode(this_00);
      if ((uVar9 & uVar1) == 1) goto LAB_0840fd60;
      bVar2 = false;
    }
    if (bVar2) {
      *(undefined4 *)(local_20 + 0xb8) = 8;
      uVar7 = SendResult(this,param_1,param_2,local_20);
      goto LAB_0840ffb6;
    }
  }
  iVar6 = GetGameDBInfo(this,local_20);
  if (iVar6 == 1) {
    *(undefined4 *)(local_20 + 0xb8) = 0xf;
  }
  else {
    UpdateLoginStat(this,param_2,local_20);
  }
  if ((local_20[0x39e0] != (SIG_LOGIN_DATA)0x0) && (local_20[0x39e1] != (SIG_LOGIN_DATA)0x1)) {
    _getSecurityCardInfo(this,local_20);
  }
  getCharacLinkSystemData(this,local_20);
  cVar3 = getBreakAwayMemberData(this,local_20);
  if (cVar3 == '\x01') {
    local_20[0x3f58] = (SIG_LOGIN_DATA)0x1;
  }
  else {
    local_20[0x3f58] = (SIG_LOGIN_DATA)0x0;
  }
  SVar4 = (SIG_LOGIN_DATA)_isJoinedSchoolPointEvent(this,*(uint *)(local_20 + 0xc0));
  local_20[0x3a4a] = SVar4;
  GetDailyCleanPadPoint(this,local_20);
  IsThisIPLoginPermissionGranted(this,local_20);
  GetReturnUserInfo(this,local_20);
  GetLoginCommonData(this,local_20);
  GetCheckPickUpRandomOptionItem(this,local_20);
  GetOntimeUserRecvIdx(this,local_20);
  GetUserFatigueCount(this,local_20);
  GetUserInGameEventHistory(this,local_20);
  CheckLoginIP(this,local_20);
  GetMercenarySystemInfo(this,local_20);
  GetBingoEvent(this,local_20);
  GetGrowthWeaponEvent(this,local_20);
  GetGrowthCreatureEvent(this,local_20);
  GetAccountCharacterLevelUpOnceGift(this,local_20);
  uVar7 = SendResult(this,param_1,param_2,local_20);
LAB_0840ffb6:
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::~vector
            (local_2c);
  return uVar7;
}

```

---

## getBreakAwayMemberData

```asm
// === 084101ae DB_Login::getBreakAwayMemberData  [0x084101ae-0x841090b] ===
 84101ae:	55                   	push   %ebp
 84101af:	89 e5                	mov    %esp,%ebp
 84101b1:	56                   	push   %esi
 84101b2:	53                   	push   %ebx
 84101b3:	83 c4 80             	add    $0xffffff80,%esp
 84101b6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84101bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84101c2:	00 
 84101c3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84101ca:	00 
 84101cb:	89 04 24             	mov    %eax,(%esp)
 84101ce:	e8 6b 50 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84101d3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84101d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84101d9:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84101df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84101e6:	00 
 84101e7:	89 04 24             	mov    %eax,(%esp)
 84101ea:	e8 5c 8e cf ff       	call   810904b <_Z14NumberToStringji>
 84101ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 84101f3:	c7 44 24 04 9c 71 c4 	movl   $0x8c4719c,0x4(%esp)
 84101fa:	08 
 84101fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84101fe:	89 04 24             	mov    %eax,(%esp)
 8410201:	e8 ba 3f fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410206:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841020d:	00 
 841020e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410211:	89 04 24             	mov    %eax,(%esp)
 8410214:	e8 0d 41 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410219:	83 f0 01             	xor    $0x1,%eax
 841021c:	84 c0                	test   %al,%al
 841021e:	74 36                	je     8410256 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0xa8>
 8410220:	c7 44 24 10 4c 72 c4 	movl   $0x8c4724c,0x10(%esp)
 8410227:	08 
 8410228:	c7 44 24 0c 7b 30 00 	movl   $0x307b,0xc(%esp)
 841022f:	00 
 8410230:	c7 44 24 08 60 d0 c5 	movl   $0x8c5d060,0x8(%esp)
 8410237:	08 
 8410238:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841023f:	08 
 8410240:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8410247:	e8 be 39 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 841024c:	b8 00 00 00 00       	mov    $0x0,%eax
 8410251:	e9 ae 06 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 8410256:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410259:	89 04 24             	mov    %eax,(%esp)
 841025c:	e8 0b 21 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410261:	85 c0                	test   %eax,%eax
 8410263:	0f 94 c0             	sete   %al
 8410266:	84 c0                	test   %al,%al
 8410268:	0f 84 96 01 00 00    	je     8410404 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x256>
 841026e:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 8410271:	ba 1f 00 00 00       	mov    $0x1f,%edx
 8410276:	b9 00 00 00 00       	mov    $0x0,%ecx
 841027b:	89 c3                	mov    %eax,%ebx
 841027d:	83 e3 01             	and    $0x1,%ebx
 8410280:	85 db                	test   %ebx,%ebx
 8410282:	74 08                	je     841028c <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0xde>
 8410284:	88 08                	mov    %cl,(%eax)
 8410286:	83 c0 01             	add    $0x1,%eax
 8410289:	83 ea 01             	sub    $0x1,%edx
 841028c:	89 c3                	mov    %eax,%ebx
 841028e:	83 e3 02             	and    $0x2,%ebx
 8410291:	85 db                	test   %ebx,%ebx
 8410293:	74 09                	je     841029e <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0xf0>
 8410295:	66 89 08             	mov    %cx,(%eax)
 8410298:	83 c0 02             	add    $0x2,%eax
 841029b:	83 ea 02             	sub    $0x2,%edx
 841029e:	89 d6                	mov    %edx,%esi
 84102a0:	83 e6 fc             	and    $0xfffffffc,%esi
 84102a3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84102a8:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84102ab:	83 c3 04             	add    $0x4,%ebx
 84102ae:	39 f3                	cmp    %esi,%ebx
 84102b0:	72 f6                	jb     84102a8 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0xfa>
 84102b2:	01 d8                	add    %ebx,%eax
 84102b4:	89 d3                	mov    %edx,%ebx
 84102b6:	83 e3 02             	and    $0x2,%ebx
 84102b9:	85 db                	test   %ebx,%ebx
 84102bb:	74 06                	je     84102c3 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x115>
 84102bd:	66 89 08             	mov    %cx,(%eax)
 84102c0:	83 c0 02             	add    $0x2,%eax
 84102c3:	83 e2 01             	and    $0x1,%edx
 84102c6:	85 d2                	test   %edx,%edx
 84102c8:	74 05                	je     84102cf <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x121>
 84102ca:	88 08                	mov    %cl,(%eax)
 84102cc:	83 c0 01             	add    $0x1,%eax
 84102cf:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 84102d6:	00 
 84102d7:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 84102de:	00 
 84102df:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84102e2:	89 04 24             	mov    %eax,(%esp)
 84102e5:	e8 d6 d9 c6 ff       	call   807dcc0 <memset@plt>
 84102ea:	c6 45 c2 31          	movb   $0x31,-0x3e(%ebp)
 84102ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84102f1:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84102f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84102fe:	00 
 84102ff:	89 04 24             	mov    %eax,(%esp)
 8410302:	e8 44 8d cf ff       	call   810904b <_Z14NumberToStringji>
 8410307:	8d 55 a5             	lea    -0x5b(%ebp),%edx
 841030a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841030e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410312:	c7 44 24 04 78 72 c4 	movl   $0x8c47278,0x4(%esp)
 8410319:	08 
 841031a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841031d:	89 04 24             	mov    %eax,(%esp)
 8410320:	e8 9b 3e fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410325:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841032c:	00 
 841032d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410330:	89 04 24             	mov    %eax,(%esp)
 8410333:	e8 ee 3f fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410338:	83 f0 01             	xor    $0x1,%eax
 841033b:	84 c0                	test   %al,%al
 841033d:	74 36                	je     8410375 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x1c7>
 841033f:	c7 44 24 10 50 73 c4 	movl   $0x8c47350,0x10(%esp)
 8410346:	08 
 8410347:	c7 44 24 0c 8c 30 00 	movl   $0x308c,0xc(%esp)
 841034e:	00 
 841034f:	c7 44 24 08 60 d0 c5 	movl   $0x8c5d060,0x8(%esp)
 8410356:	08 
 8410357:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841035e:	08 
 841035f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8410366:	e8 9f 38 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 841036b:	b8 00 00 00 00       	mov    $0x0,%eax
 8410370:	e9 8f 05 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 8410375:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410378:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841037e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410385:	00 
 8410386:	89 04 24             	mov    %eax,(%esp)
 8410389:	e8 bd 8c cf ff       	call   810904b <_Z14NumberToStringji>
 841038e:	89 c3                	mov    %eax,%ebx
 8410390:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8410397:	00 
 8410398:	c7 44 24 08 8f 30 00 	movl   $0x308f,0x8(%esp)
 841039f:	00 
 84103a0:	c7 44 24 04 60 d0 c5 	movl   $0x8c5d060,0x4(%esp)
 84103a7:	08 
 84103a8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84103ab:	89 04 24             	mov    %eax,(%esp)
 84103ae:	e8 65 f3 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84103b3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84103b7:	c7 44 24 04 80 73 c4 	movl   $0x8c47380,0x4(%esp)
 84103be:	08 
 84103bf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84103c2:	89 04 24             	mov    %eax,(%esp)
 84103c5:	e8 be f3 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84103ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84103cd:	05 18 3f 00 00       	add    $0x3f18,%eax
 84103d2:	89 04 24             	mov    %eax,(%esp)
 84103d5:	e8 aa d1 03 00       	call   844d584 <_ZN21STBreakAwayMemberData5clearEv>
 84103da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84103dd:	8d 90 1c 3f 00 00    	lea    0x3f1c(%eax),%edx
 84103e3:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 84103ea:	00 
 84103eb:	8d 45 a5             	lea    -0x5b(%ebp),%eax
 84103ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84103f2:	89 14 24             	mov    %edx,(%esp)
 84103f5:	e8 a6 d4 c6 ff       	call   807d8a0 <memcpy@plt>
 84103fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84103ff:	e9 00 05 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 8410404:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410407:	89 04 24             	mov    %eax,(%esp)
 841040a:	e8 ad 40 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841040f:	83 f0 01             	xor    $0x1,%eax
 8410412:	84 c0                	test   %al,%al
 8410414:	74 5f                	je     8410475 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x2c7>
 8410416:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410419:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841041f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410426:	00 
 8410427:	89 04 24             	mov    %eax,(%esp)
 841042a:	e8 1c 8c cf ff       	call   810904b <_Z14NumberToStringji>
 841042f:	89 c3                	mov    %eax,%ebx
 8410431:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8410438:	00 
 8410439:	c7 44 24 08 9a 30 00 	movl   $0x309a,0x8(%esp)
 8410440:	00 
 8410441:	c7 44 24 04 60 d0 c5 	movl   $0x8c5d060,0x4(%esp)
 8410448:	08 
 8410449:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841044c:	89 04 24             	mov    %eax,(%esp)
 841044f:	e8 c4 f2 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8410454:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8410458:	c7 44 24 04 b8 73 c4 	movl   $0x8c473b8,0x4(%esp)
 841045f:	08 
 8410460:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8410463:	89 04 24             	mov    %eax,(%esp)
 8410466:	e8 1d f3 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841046b:	b8 00 00 00 00       	mov    $0x0,%eax
 8410470:	e9 8f 04 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 8410475:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410478:	05 18 3f 00 00       	add    $0x3f18,%eax
 841047d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8410481:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410488:	00 
 8410489:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841048c:	89 04 24             	mov    %eax,(%esp)
 841048f:	e8 98 64 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8410494:	83 f0 01             	xor    $0x1,%eax
 8410497:	84 c0                	test   %al,%al
 8410499:	74 0a                	je     84104a5 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x2f7>
 841049b:	b8 00 00 00 00       	mov    $0x0,%eax
 84104a0:	e9 5f 04 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 84104a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84104a8:	05 1c 3f 00 00       	add    $0x3f1c,%eax
 84104ad:	c7 44 24 0c 1f 00 00 	movl   $0x1f,0xc(%esp)
 84104b4:	00 
 84104b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84104b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84104c0:	00 
 84104c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84104c4:	89 04 24             	mov    %eax,(%esp)
 84104c7:	e8 1e c9 cd ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84104cc:	83 f0 01             	xor    $0x1,%eax
 84104cf:	84 c0                	test   %al,%al
 84104d1:	74 0a                	je     84104dd <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x32f>
 84104d3:	b8 00 00 00 00       	mov    $0x0,%eax
 84104d8:	e9 27 04 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 84104dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84104e0:	05 1c 3f 00 00       	add    $0x3f1c,%eax
 84104e5:	0f b6 00             	movzbl (%eax),%eax
 84104e8:	84 c0                	test   %al,%al
 84104ea:	75 53                	jne    841053f <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x391>
 84104ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84104ef:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 84104f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84104fc:	00 
 84104fd:	89 04 24             	mov    %eax,(%esp)
 8410500:	e8 46 8b cf ff       	call   810904b <_Z14NumberToStringji>
 8410505:	89 44 24 14          	mov    %eax,0x14(%esp)
 8410509:	c7 44 24 10 f4 73 c4 	movl   $0x8c473f4,0x10(%esp)
 8410510:	08 
 8410511:	c7 44 24 0c ab 30 00 	movl   $0x30ab,0xc(%esp)
 8410518:	00 
 8410519:	c7 44 24 08 60 d0 c5 	movl   $0x8c5d060,0x8(%esp)
 8410520:	08 
 8410521:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8410528:	08 
 8410529:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8410530:	e8 d5 36 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8410535:	b8 00 00 00 00       	mov    $0x0,%eax
 841053a:	e9 c5 03 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 841053f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410542:	05 3c 3f 00 00       	add    $0x3f3c,%eax
 8410547:	89 44 24 08          	mov    %eax,0x8(%esp)
 841054b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8410552:	00 
 8410553:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410556:	89 04 24             	mov    %eax,(%esp)
 8410559:	e8 94 1d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841055e:	83 f0 01             	xor    $0x1,%eax
 8410561:	84 c0                	test   %al,%al
 8410563:	74 0a                	je     841056f <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x3c1>
 8410565:	b8 00 00 00 00       	mov    $0x0,%eax
 841056a:	e9 95 03 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 841056f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410572:	05 40 3f 00 00       	add    $0x3f40,%eax
 8410577:	89 44 24 08          	mov    %eax,0x8(%esp)
 841057b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8410582:	00 
 8410583:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410586:	89 04 24             	mov    %eax,(%esp)
 8410589:	e8 64 1d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841058e:	83 f0 01             	xor    $0x1,%eax
 8410591:	84 c0                	test   %al,%al
 8410593:	74 0a                	je     841059f <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x3f1>
 8410595:	b8 00 00 00 00       	mov    $0x0,%eax
 841059a:	e9 65 03 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 841059f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84105a2:	05 54 3f 00 00       	add    $0x3f54,%eax
 84105a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84105ab:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84105b2:	00 
 84105b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84105b6:	89 04 24             	mov    %eax,(%esp)
 84105b9:	e8 6e 63 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84105be:	83 f0 01             	xor    $0x1,%eax
 84105c1:	84 c0                	test   %al,%al
 84105c3:	74 0a                	je     84105cf <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x421>
 84105c5:	b8 00 00 00 00       	mov    $0x0,%eax
 84105ca:	e9 35 03 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 84105cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84105d2:	05 50 3f 00 00       	add    $0x3f50,%eax
 84105d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84105db:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84105e2:	00 
 84105e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84105e6:	89 04 24             	mov    %eax,(%esp)
 84105e9:	e8 04 1d cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84105ee:	83 f0 01             	xor    $0x1,%eax
 84105f1:	84 c0                	test   %al,%al
 84105f3:	74 0a                	je     84105ff <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x451>
 84105f5:	b8 00 00 00 00       	mov    $0x0,%eax
 84105fa:	e9 05 03 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 84105ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410602:	05 48 3f 00 00       	add    $0x3f48,%eax
 8410607:	89 44 24 08          	mov    %eax,0x8(%esp)
 841060b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8410612:	00 
 8410613:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410616:	89 04 24             	mov    %eax,(%esp)
 8410619:	e8 0e 63 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841061e:	83 f0 01             	xor    $0x1,%eax
 8410621:	84 c0                	test   %al,%al
 8410623:	74 0a                	je     841062f <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x481>
 8410625:	b8 00 00 00 00       	mov    $0x0,%eax
 841062a:	e9 d5 02 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 841062f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410632:	05 44 3f 00 00       	add    $0x3f44,%eax
 8410637:	89 44 24 08          	mov    %eax,0x8(%esp)
 841063b:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8410642:	00 
 8410643:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410646:	89 04 24             	mov    %eax,(%esp)
 8410649:	e8 a4 1c cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841064e:	83 f0 01             	xor    $0x1,%eax
 8410651:	84 c0                	test   %al,%al
 8410653:	74 0a                	je     841065f <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x4b1>
 8410655:	b8 00 00 00 00       	mov    $0x0,%eax
 841065a:	e9 a5 02 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 841065f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410662:	05 4c 3f 00 00       	add    $0x3f4c,%eax
 8410667:	89 44 24 08          	mov    %eax,0x8(%esp)
 841066b:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8410672:	00 
 8410673:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410676:	89 04 24             	mov    %eax,(%esp)
 8410679:	e8 74 1c cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841067e:	83 f0 01             	xor    $0x1,%eax
 8410681:	84 c0                	test   %al,%al
 8410683:	74 0a                	je     841068f <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x4e1>
 8410685:	b8 00 00 00 00       	mov    $0x0,%eax
 841068a:	e9 75 02 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 841068f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410692:	8b 80 3c 3f 00 00    	mov    0x3f3c(%eax),%eax
 8410698:	85 c0                	test   %eax,%eax
 841069a:	0f 84 40 01 00 00    	je     84107e0 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x632>
 84106a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84106a3:	8b 80 3c 3f 00 00    	mov    0x3f3c(%eax),%eax
 84106a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84106ad:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84106b4:	e8 30 bc 05 00       	call   846c2e9 <_Z19getPrevScheduleTimeil>
 84106b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84106bc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84106c3:	e8 d6 b5 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84106c8:	89 c1                	mov    %eax,%ecx
 84106ca:	2b 4d f0             	sub    -0x10(%ebp),%ecx
 84106cd:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 84106d2:	89 c8                	mov    %ecx,%eax
 84106d4:	f7 ea                	imul   %edx
 84106d6:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 84106d9:	89 c2                	mov    %eax,%edx
 84106db:	c1 fa 10             	sar    $0x10,%edx
 84106de:	89 c8                	mov    %ecx,%eax
 84106e0:	c1 f8 1f             	sar    $0x1f,%eax
 84106e3:	89 d1                	mov    %edx,%ecx
 84106e5:	29 c1                	sub    %eax,%ecx
 84106e7:	89 c8                	mov    %ecx,%eax
 84106e9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84106ec:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84106f3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84106f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84106fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84106fd:	89 04 24             	mov    %eax,(%esp)
 8410700:	e8 2c ee c6 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 8410705:	8b 00                	mov    (%eax),%eax
 8410707:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841070a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 841070e:	0f 84 cc 00 00 00    	je     84107e0 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x632>
 8410714:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410717:	8b 80 54 3f 00 00    	mov    0x3f54(%eax),%eax
 841071d:	85 c0                	test   %eax,%eax
 841071f:	0f 84 bb 00 00 00    	je     84107e0 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x632>
 8410725:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410728:	c7 80 54 3f 00 00 00 	movl   $0x0,0x3f54(%eax)
 841072f:	00 00 00 
 8410732:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410735:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 841073b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410742:	00 
 8410743:	89 04 24             	mov    %eax,(%esp)
 8410746:	e8 00 89 cf ff       	call   810904b <_Z14NumberToStringji>
 841074b:	8b 55 0c             	mov    0xc(%ebp),%edx
 841074e:	8b 92 54 3f 00 00    	mov    0x3f54(%edx),%edx
 8410754:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8410758:	89 54 24 08          	mov    %edx,0x8(%esp)
 841075c:	c7 44 24 04 24 74 c4 	movl   $0x8c47424,0x4(%esp)
 8410763:	08 
 8410764:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410767:	89 04 24             	mov    %eax,(%esp)
 841076a:	e8 51 3a fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841076f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410776:	00 
 8410777:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841077a:	89 04 24             	mov    %eax,(%esp)
 841077d:	e8 a4 3b fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410782:	83 f0 01             	xor    $0x1,%eax
 8410785:	84 c0                	test   %al,%al
 8410787:	75 11                	jne    841079a <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x5ec>
 8410789:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841078c:	89 04 24             	mov    %eax,(%esp)
 841078f:	e8 7c 3b fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8410794:	09 d0                	or     %edx,%eax
 8410796:	85 c0                	test   %eax,%eax
 8410798:	75 07                	jne    84107a1 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x5f3>
 841079a:	b8 01 00 00 00       	mov    $0x1,%eax
 841079f:	eb 05                	jmp    84107a6 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x5f8>
 84107a1:	b8 00 00 00 00       	mov    $0x0,%eax
 84107a6:	84 c0                	test   %al,%al
 84107a8:	74 36                	je     84107e0 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x632>
 84107aa:	c7 44 24 10 60 74 c4 	movl   $0x8c47460,0x10(%esp)
 84107b1:	08 
 84107b2:	c7 44 24 0c d1 30 00 	movl   $0x30d1,0xc(%esp)
 84107b9:	00 
 84107ba:	c7 44 24 08 60 d0 c5 	movl   $0x8c5d060,0x8(%esp)
 84107c1:	08 
 84107c2:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84107c9:	08 
 84107ca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84107d1:	e8 34 34 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84107d6:	b8 00 00 00 00       	mov    $0x0,%eax
 84107db:	e9 24 01 00 00       	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 84107e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84107e3:	8b 80 4c 3f 00 00    	mov    0x3f4c(%eax),%eax
 84107e9:	85 c0                	test   %eax,%eax
 84107eb:	0f 84 0e 01 00 00    	je     84108ff <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x751>
 84107f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84107f4:	8b 98 4c 3f 00 00    	mov    0x3f4c(%eax),%ebx
 84107fa:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8410801:	e8 98 b4 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8410806:	39 c3                	cmp    %eax,%ebx
 8410808:	73 33                	jae    841083d <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x68f>
 841080a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841080d:	8b 90 3c 3f 00 00    	mov    0x3f3c(%eax),%edx
 8410813:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410816:	8b 80 40 3f 00 00    	mov    0x3f40(%eax),%eax
 841081c:	39 c2                	cmp    %eax,%edx
 841081e:	74 16                	je     8410836 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x688>
 8410820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410823:	8b 90 3c 3f 00 00    	mov    0x3f3c(%eax),%edx
 8410829:	8b 45 0c             	mov    0xc(%ebp),%eax
 841082c:	8b 80 44 3f 00 00    	mov    0x3f44(%eax),%eax
 8410832:	39 c2                	cmp    %eax,%edx
 8410834:	75 07                	jne    841083d <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x68f>
 8410836:	b8 01 00 00 00       	mov    $0x1,%eax
 841083b:	eb 05                	jmp    8410842 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x694>
 841083d:	b8 00 00 00 00       	mov    $0x0,%eax
 8410842:	84 c0                	test   %al,%al
 8410844:	0f 84 b5 00 00 00    	je     84108ff <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x751>
 841084a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841084d:	c7 80 48 3f 00 00 ff 	movl   $0xffffffff,0x3f48(%eax)
 8410854:	ff ff ff 
 8410857:	8b 45 0c             	mov    0xc(%ebp),%eax
 841085a:	c7 80 4c 3f 00 00 00 	movl   $0x0,0x3f4c(%eax)
 8410861:	00 00 00 
 8410864:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410867:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 841086d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410870:	8b 80 48 3f 00 00    	mov    0x3f48(%eax),%eax
 8410876:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841087a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841087e:	c7 44 24 04 88 74 c4 	movl   $0x8c47488,0x4(%esp)
 8410885:	08 
 8410886:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8410889:	89 04 24             	mov    %eax,(%esp)
 841088c:	e8 2f 39 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410891:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410898:	00 
 8410899:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841089c:	89 04 24             	mov    %eax,(%esp)
 841089f:	e8 82 3a fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84108a4:	83 f0 01             	xor    $0x1,%eax
 84108a7:	84 c0                	test   %al,%al
 84108a9:	75 11                	jne    84108bc <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x70e>
 84108ab:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84108ae:	89 04 24             	mov    %eax,(%esp)
 84108b1:	e8 5a 3a fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84108b6:	09 d0                	or     %edx,%eax
 84108b8:	85 c0                	test   %eax,%eax
 84108ba:	75 07                	jne    84108c3 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x715>
 84108bc:	b8 01 00 00 00       	mov    $0x1,%eax
 84108c1:	eb 05                	jmp    84108c8 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x71a>
 84108c3:	b8 00 00 00 00       	mov    $0x0,%eax
 84108c8:	84 c0                	test   %al,%al
 84108ca:	74 33                	je     84108ff <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x751>
 84108cc:	c7 44 24 10 d0 74 c4 	movl   $0x8c474d0,0x10(%esp)
 84108d3:	08 
 84108d4:	c7 44 24 0c e6 30 00 	movl   $0x30e6,0xc(%esp)
 84108db:	00 
 84108dc:	c7 44 24 08 60 d0 c5 	movl   $0x8c5d060,0x8(%esp)
 84108e3:	08 
 84108e4:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84108eb:	08 
 84108ec:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84108f3:	e8 12 33 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84108f8:	b8 00 00 00 00       	mov    $0x0,%eax
 84108fd:	eb 05                	jmp    8410904 <_ZN8DB_Login22getBreakAwayMemberDataEP14SIG_LOGIN_DATA+0x756>
 84108ff:	b8 01 00 00 00       	mov    $0x1,%eax
 8410904:	83 ec 80             	sub    $0xffffff80,%esp
 8410907:	5b                   	pop    %ebx
 8410908:	5e                   	pop    %esi
 8410909:	5d                   	pop    %ebp
 841090a:	c3                   	ret
 841090b:	90                   	nop

```

```c
// DB_Login::getBreakAwayMemberData @ 0x84101ae

/* DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::getBreakAwayMemberData(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  size_t *psVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 local_5f [29];
  undefined1 local_42;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  size_t local_20 [2];
  MySQL *local_18;
  int local_14;
  size_t local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect accrue_cera, play_info, last_reward_time, first_reward_time, luck_point, last_update_time, add_info, second_reward_time, quest_time from churn_member_info where m_id=%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x307b,
               "BREAK_AWAY : churn_member_info DB ERROR!!");
    return 0;
  }
  iVar3 = MySQL::get_n_rows(local_18);
  if (iVar3 == 0) {
    puVar4 = (undefined2 *)local_5f;
    uVar6 = 0x1f;
    bVar8 = ((uint)puVar4 & 1) != 0;
    if (bVar8) {
      local_5f[0] = 0;
      puVar4 = (undefined2 *)(local_5f + 1);
      uVar6 = 0x1e;
    }
    if (((uint)puVar4 & 2) != 0) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 2;
    }
    uVar7 = 0;
    do {
      *(undefined4 *)((int)puVar4 + uVar7) = 0;
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar6 & 0xfffffffc));
    puVar4 = (undefined2 *)((int)puVar4 + uVar7);
    if ((uVar6 & 2) != 0) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (!bVar8) {
      *(undefined1 *)puVar4 = 0;
    }
    memset(local_5f,0x30,0x1e);
    local_42 = 0x31;
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(local_18,
                     "inSert into churn_member_info(m_id,accrue_cera,play_info,last_reward_time,first_reward_time,server_id,charac_no,item_id,add_info,luck_point,last_update_time,second_reward_time) values(%s,0,\'%s\',0,0,0,0,0,0,0,0,0)"
                     ,uVar2,local_5f);
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x308c,
                 "BREAK_AWAY : churn_member_info DB INSERT FAIL!!");
      return 0;
    }
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    cMyTrace::cMyTrace(local_40,"bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x308f,0);
    cMyTrace::operator()(local_40,"BREAK_AWAY : churn_member_info MEMBER INSERT!! M_ID(%s)",uVar2);
    STBreakAwayMemberData::clear((STBreakAwayMemberData *)(param_1 + 0x3f18));
    memcpy(param_1 + 0x3f1c,local_5f,0x1f);
    return 1;
  }
  cVar1 = MySQL::fetch(local_18);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    cMyTrace::cMyTrace(local_30,"bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x309a,5);
    cMyTrace::operator()(local_30,"BREAK_AWAY : churn_member_info NO MEMBER USER!! M_ID(%s)",uVar2);
    return 0;
  }
  cVar1 = MySQL::get_int(local_18,0,(int *)(param_1 + 0x3f18));
  if (cVar1 != '\x01') {
    return 0;
  }
  cVar1 = MySQL::get_str(local_18,1,(char *)(param_1 + 0x3f1c),0x1f);
  if (cVar1 != '\x01') {
    return 0;
  }
  if (param_1[0x3f1c] == (SIG_LOGIN_DATA)0x0) {
    uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    LogManager::logFormat
              (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",0x30ab,
               "BREAK_AWAY : ABNOMAL PLAY_INFO DATA!! M_ID(%s)",uVar2);
    return 0;
  }
  cVar1 = MySQL::get_uint(local_18,2,(uint *)(param_1 + 0x3f3c));
  if (cVar1 != '\x01') {
    return 0;
  }
  cVar1 = MySQL::get_uint(local_18,3,(uint *)(param_1 + 0x3f40));
  if (cVar1 == '\x01') {
    cVar1 = MySQL::get_int(local_18,4,(int *)(param_1 + 0x3f54));
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_18,5,(uint *)(param_1 + 0x3f50));
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(local_18,6,(int *)(param_1 + 0x3f48));
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_uint(local_18,7,(uint *)(param_1 + 0x3f44));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::get_uint(local_18,8,(uint *)(param_1 + 0x3f4c));
      if (cVar1 != '\x01') {
        return 0;
      }
      if (*(int *)(param_1 + 0x3f3c) != 0) {
        local_14 = getPrevScheduleTime(0,*(long *)(param_1 + 0x3f3c));
        iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20[0] = (iVar3 - local_14) / 0x15180;
        local_20[1] = 0;
        psVar5 = std::max<size_t>(local_20 + 1,local_20);
        local_10 = *psVar5;
        if ((local_10 != 0) && (*(int *)(param_1 + 0x3f54) != 0)) {
          *(undefined4 *)(param_1 + 0x3f54) = 0;
          uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
          MySQL::set_query(local_18,"upDate churn_member_info set luck_point=%d where m_id=%s",
                           *(undefined4 *)(param_1 + 0x3f54),uVar2);
          cVar1 = MySQL::exec(local_18,true);
          if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_18), lVar9 != 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            LogManager::logFormat
                      (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",
                       0x30d1,"BREAK_AWAY : LUCK POINT UPDATE ERROR!!");
            return 0;
          }
        }
      }
      if (*(int *)(param_1 + 0x3f4c) != 0) {
        uVar6 = *(uint *)(param_1 + 0x3f4c);
        uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if ((uVar6 < uVar7) &&
           ((*(int *)(param_1 + 0x3f3c) == *(int *)(param_1 + 0x3f40) ||
            (*(int *)(param_1 + 0x3f3c) == *(int *)(param_1 + 0x3f44))))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          *(undefined4 *)(param_1 + 0x3f48) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x3f4c) = 0;
          MySQL::set_query(local_18,
                           "upDate churn_member_info set add_info=%d, quest_time=0 where m_id=%u",
                           *(undefined4 *)(param_1 + 0x3f48),*(undefined4 *)(param_1 + 0xc0));
          cVar1 = MySQL::exec(local_18,true);
          if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_18), lVar9 != 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            LogManager::logFormat
                      (1,"DBThread.cpp","bool DB_Login::getBreakAwayMemberData(SIG_LOGIN_DATA*)",
                       0x30e6,"BREAK_AWAY : ADD INFO UPDATE ERROR!!");
            return 0;
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

```

---

## getCharacLinkSystemData

```asm
// === 0840ffca DB_Login::getCharacLinkSystemData  [0x0840ffca-0x84101ad] ===
 840ffca:	55                   	push   %ebp
 840ffcb:	89 e5                	mov    %esp,%ebp
 840ffcd:	53                   	push   %ebx
 840ffce:	83 ec 44             	sub    $0x44,%esp
 840ffd1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840ffd6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840ffdd:	00 
 840ffde:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840ffe5:	00 
 840ffe6:	89 04 24             	mov    %eax,(%esp)
 840ffe9:	e8 50 52 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840ffee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840fff1:	8b 45 0c             	mov    0xc(%ebp),%eax
 840fff4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 840fffa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410001:	00 
 8410002:	89 04 24             	mov    %eax,(%esp)
 8410005:	e8 41 90 cf ff       	call   810904b <_Z14NumberToStringji>
 841000a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841000e:	c7 44 24 04 90 70 c4 	movl   $0x8c47090,0x4(%esp)
 8410015:	08 
 8410016:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410019:	89 04 24             	mov    %eax,(%esp)
 841001c:	e8 9f 41 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8410021:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8410028:	00 
 8410029:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841002c:	89 04 24             	mov    %eax,(%esp)
 841002f:	e8 f2 42 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8410034:	83 f0 01             	xor    $0x1,%eax
 8410037:	84 c0                	test   %al,%al
 8410039:	74 31                	je     841006c <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0xa2>
 841003b:	c7 44 24 10 cc 70 c4 	movl   $0x8c470cc,0x10(%esp)
 8410042:	08 
 8410043:	c7 44 24 0c 54 2f 00 	movl   $0x2f54,0xc(%esp)
 841004a:	00 
 841004b:	c7 44 24 08 a0 d0 c5 	movl   $0x8c5d0a0,0x8(%esp)
 8410052:	08 
 8410053:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841005a:	08 
 841005b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8410062:	e8 a3 3b 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8410067:	e9 3c 01 00 00       	jmp    84101a8 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1de>
 841006c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841006f:	89 04 24             	mov    %eax,(%esp)
 8410072:	e8 f5 22 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8410077:	85 c0                	test   %eax,%eax
 8410079:	0f 94 c0             	sete   %al
 841007c:	84 c0                	test   %al,%al
 841007e:	74 7f                	je     84100ff <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x135>
 8410080:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410083:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8410089:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410090:	00 
 8410091:	89 04 24             	mov    %eax,(%esp)
 8410094:	e8 b2 8f cf ff       	call   810904b <_Z14NumberToStringji>
 8410099:	89 44 24 08          	mov    %eax,0x8(%esp)
 841009d:	c7 44 24 04 f8 70 c4 	movl   $0x8c470f8,0x4(%esp)
 84100a4:	08 
 84100a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84100a8:	89 04 24             	mov    %eax,(%esp)
 84100ab:	e8 10 41 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84100b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84100b7:	00 
 84100b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84100bb:	89 04 24             	mov    %eax,(%esp)
 84100be:	e8 63 42 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84100c3:	83 f0 01             	xor    $0x1,%eax
 84100c6:	84 c0                	test   %al,%al
 84100c8:	0f 84 da 00 00 00    	je     84101a8 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1de>
 84100ce:	c7 44 24 10 38 71 c4 	movl   $0x8c47138,0x10(%esp)
 84100d5:	08 
 84100d6:	c7 44 24 0c 5d 2f 00 	movl   $0x2f5d,0xc(%esp)
 84100dd:	00 
 84100de:	c7 44 24 08 a0 d0 c5 	movl   $0x8c5d0a0,0x8(%esp)
 84100e5:	08 
 84100e6:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84100ed:	08 
 84100ee:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84100f5:	e8 10 3b 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84100fa:	e9 a9 00 00 00       	jmp    84101a8 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1de>
 84100ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410102:	89 04 24             	mov    %eax,(%esp)
 8410105:	e8 62 22 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841010a:	83 f8 01             	cmp    $0x1,%eax
 841010d:	0f 94 c0             	sete   %al
 8410110:	84 c0                	test   %al,%al
 8410112:	0f 84 8f 00 00 00    	je     84101a7 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1dd>
 8410118:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841011b:	89 04 24             	mov    %eax,(%esp)
 841011e:	e8 99 43 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8410123:	83 f0 01             	xor    $0x1,%eax
 8410126:	84 c0                	test   %al,%al
 8410128:	74 57                	je     8410181 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1b7>
 841012a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841012d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 8410133:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841013a:	00 
 841013b:	89 04 24             	mov    %eax,(%esp)
 841013e:	e8 08 8f cf ff       	call   810904b <_Z14NumberToStringji>
 8410143:	89 c3                	mov    %eax,%ebx
 8410145:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841014c:	00 
 841014d:	c7 44 24 08 65 2f 00 	movl   $0x2f65,0x8(%esp)
 8410154:	00 
 8410155:	c7 44 24 04 a0 d0 c5 	movl   $0x8c5d0a0,0x4(%esp)
 841015c:	08 
 841015d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8410160:	89 04 24             	mov    %eax,(%esp)
 8410163:	e8 b0 f5 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8410168:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841016c:	c7 44 24 04 68 71 c4 	movl   $0x8c47168,0x4(%esp)
 8410173:	08 
 8410174:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8410177:	89 04 24             	mov    %eax,(%esp)
 841017a:	e8 09 f6 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841017f:	eb 27                	jmp    84101a8 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1de>
 8410181:	8b 45 0c             	mov    0xc(%ebp),%eax
 8410184:	05 5c 3f 00 00       	add    $0x3f5c,%eax
 8410189:	89 44 24 08          	mov    %eax,0x8(%esp)
 841018d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8410194:	00 
 8410195:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8410198:	89 04 24             	mov    %eax,(%esp)
 841019b:	e8 b4 dc ce ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84101a0:	83 f0 01             	xor    $0x1,%eax
 84101a3:	84 c0                	test   %al,%al
 84101a5:	eb 01                	jmp    84101a8 <_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA+0x1de>
 84101a7:	90                   	nop
 84101a8:	83 c4 44             	add    $0x44,%esp
 84101ab:	5b                   	pop    %ebx
 84101ac:	5d                   	pop    %ebp
 84101ad:	c3                   	ret

```

```c
// DB_Login::getCharacLinkSystemData @ 0x840ffca

/* DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*) */

byte __thiscall DB_Login::getCharacLinkSystemData(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_10,"seLect message_flag from charac_link_message where m_id=%s",uVar3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_10);
    if (iVar4 == 0) {
      uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
      MySQL::set_query(local_10,"inSert into charac_link_message(m_id,message_flag) values(%s,0)",
                       uVar3);
      cVar1 = MySQL::exec(local_10,true);
      bVar2 = 0;
      if (cVar1 != '\x01') {
        bVar2 = LogManager::logFormat
                          (1,"DBThread.cpp",
                           "void DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)",0x2f5d,
                           "LINK_LOG : charac_link_message DB INSERT FAIL!!");
      }
    }
    else {
      iVar4 = MySQL::get_n_rows(local_10);
      bVar2 = 0;
      if (iVar4 == 1) {
        cVar1 = MySQL::fetch(local_10);
        if (cVar1 == '\x01') {
          bVar2 = MySQL::get_byte(local_10,0,(char *)(param_1 + 0x3f5c));
          bVar2 = bVar2 ^ 1;
        }
        else {
          uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
          cMyTrace::cMyTrace(local_20,"void DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)",
                             0x2f65,5);
          bVar2 = cMyTrace::operator()
                            (local_20,"LINK_LOG : charac_link_message DB ERROR!! M_ID(%s)",uVar3);
        }
      }
    }
  }
  else {
    bVar2 = LogManager::logFormat
                      (1,"DBThread.cpp","void DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)",
                       0x2f54,"LINK_LOG : charac_link_message DB ERROR!!");
  }
  return bVar2;
}

```

---

## ~DB_Login

```asm
// === 0840f4aa DB_Login::~DB_Login  [0x0840f4aa-0x840f4d9] ===
 840f4aa:	55                   	push   %ebp
 840f4ab:	89 e5                	mov    %esp,%ebp
 840f4ad:	83 ec 18             	sub    $0x18,%esp
 840f4b0:	8b 45 08             	mov    0x8(%ebp),%eax
 840f4b3:	c7 00 10 fb c5 08    	movl   $0x8c5fb10,(%eax)
 840f4b9:	8b 45 08             	mov    0x8(%ebp),%eax
 840f4bc:	89 04 24             	mov    %eax,(%esp)
 840f4bf:	e8 b4 2e cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 840f4c4:	b8 00 00 00 00       	mov    $0x0,%eax
 840f4c9:	84 c0                	test   %al,%al
 840f4cb:	74 0b                	je     840f4d8 <_ZN8DB_LoginD1Ev+0x2e>
 840f4cd:	8b 45 08             	mov    0x8(%ebp),%eax
 840f4d0:	89 04 24             	mov    %eax,(%esp)
 840f4d3:	e8 18 50 31 00       	call   87244f0 <_ZdlPv>
 840f4d8:	c9                   	leave
 840f4d9:	c3                   	ret

```

```c
// DB_Login::~DB_Login @ 0x840f4aa

/* WARNING: Removing unreachable block (ram,0x0840f4cd) */
/* DB_Login::~DB_Login() */

void __thiscall DB_Login::~DB_Login(DB_Login *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fb10;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_Login_0840f4da

```asm
// === 0840f4da DB_Login::~DB_Login  [0x0840f4da-0x840f4f7] ===
 840f4da:	55                   	push   %ebp
 840f4db:	89 e5                	mov    %esp,%ebp
 840f4dd:	83 ec 18             	sub    $0x18,%esp
 840f4e0:	8b 45 08             	mov    0x8(%ebp),%eax
 840f4e3:	89 04 24             	mov    %eax,(%esp)
 840f4e6:	e8 bf ff ff ff       	call   840f4aa <_ZN8DB_LoginD1Ev>
 840f4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 840f4ee:	89 04 24             	mov    %eax,(%esp)
 840f4f1:	e8 fa 4f 31 00       	call   87244f0 <_ZdlPv>
 840f4f6:	c9                   	leave
 840f4f7:	c3                   	ret

```

```c
// DB_Login::~DB_Login @ 0x840f4da

/* DB_Login::~DB_Login() */

void __thiscall DB_Login::~DB_Login(DB_Login *this)

{
  ~DB_Login(this);
  operator_delete(this);
  return;
}

```

