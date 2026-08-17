# Inter_MailBox_Req_List

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cf7fa Inter_MailBox_Req_List::dispatch_sig  [0x084cf7fa-0x84cf959] ===
 84cf7fa:	55                   	push   %ebp
 84cf7fb:	89 e5                	mov    %esp,%ebp
 84cf7fd:	57                   	push   %edi
 84cf7fe:	56                   	push   %esi
 84cf7ff:	53                   	push   %ebx
 84cf800:	83 ec 5c             	sub    $0x5c,%esp
 84cf803:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf806:	89 04 24             	mov    %eax,(%esp)
 84cf809:	e8 7e ab c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cf80e:	83 f8 01             	cmp    $0x1,%eax
 84cf811:	7e 0f                	jle    84cf822 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x28>
 84cf813:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf816:	89 04 24             	mov    %eax,(%esp)
 84cf819:	e8 14 0c c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84cf81e:	85 c0                	test   %eax,%eax
 84cf820:	75 07                	jne    84cf829 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x2f>
 84cf822:	b8 01 00 00 00       	mov    $0x1,%eax
 84cf827:	eb 05                	jmp    84cf82e <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x34>
 84cf829:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf82e:	84 c0                	test   %al,%al
 84cf830:	74 0a                	je     84cf83c <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x42>
 84cf832:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf837:	e9 16 01 00 00       	jmp    84cf952 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x158>
 84cf83c:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf83f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84cf842:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cf845:	8b 98 32 33 00 00    	mov    0x3332(%eax),%ebx
 84cf84b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf84e:	89 04 24             	mov    %eax,(%esp)
 84cf851:	e8 f8 c3 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84cf856:	39 c3                	cmp    %eax,%ebx
 84cf858:	0f 95 c0             	setne  %al
 84cf85b:	84 c0                	test   %al,%al
 84cf85d:	74 0a                	je     84cf869 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x6f>
 84cf85f:	b8 a0 2c 00 00       	mov    $0x2ca0,%eax
 84cf864:	e9 e9 00 00 00       	jmp    84cf952 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x158>
 84cf869:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf86c:	89 04 24             	mov    %eax,(%esp)
 84cf86f:	e8 98 09 d6 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84cf874:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cf877:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84cf87b:	75 0a                	jne    84cf887 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x8d>
 84cf87d:	b8 a4 2c 00 00       	mov    $0x2ca4,%eax
 84cf882:	e9 cb 00 00 00       	jmp    84cf952 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x158>
 84cf887:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cf88a:	8b 98 36 33 00 00    	mov    0x3336(%eax),%ebx
 84cf890:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf893:	89 04 24             	mov    %eax,(%esp)
 84cf896:	e8 7b d9 01 00       	call   84ed216 <_ZNK8WongWork8CMailBox16getMailLoadCountEv>
 84cf89b:	39 c3                	cmp    %eax,%ebx
 84cf89d:	0f 95 c0             	setne  %al
 84cf8a0:	84 c0                	test   %al,%al
 84cf8a2:	0f 84 93 00 00 00    	je     84cf93b <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x141>
 84cf8a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cf8ab:	8b 80 36 33 00 00    	mov    0x3336(%eax),%eax
 84cf8b1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84cf8b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf8b7:	89 04 24             	mov    %eax,(%esp)
 84cf8ba:	e8 57 d9 01 00       	call   84ed216 <_ZNK8WongWork8CMailBox16getMailLoadCountEv>
 84cf8bf:	89 c7                	mov    %eax,%edi
 84cf8c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf8c4:	89 04 24             	mov    %eax,(%esp)
 84cf8c7:	e8 82 c3 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84cf8cc:	89 c6                	mov    %eax,%esi
 84cf8ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf8d1:	89 04 24             	mov    %eax,(%esp)
 84cf8d4:	e8 95 aa c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84cf8d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cf8e0:	00 
 84cf8e1:	89 04 24             	mov    %eax,(%esp)
 84cf8e4:	e8 62 97 c3 ff       	call   810904b <_Z14NumberToStringji>
 84cf8e9:	89 c3                	mov    %eax,%ebx
 84cf8eb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84cf8f2:	00 
 84cf8f3:	c7 44 24 08 a9 2c 00 	movl   $0x2ca9,0x8(%esp)
 84cf8fa:	00 
 84cf8fb:	c7 44 24 04 80 ce c8 	movl   $0x8c8ce80,0x4(%esp)
 84cf902:	08 
 84cf903:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cf906:	89 04 24             	mov    %eax,(%esp)
 84cf909:	e8 0a fe 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cf90e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84cf911:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cf915:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84cf919:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84cf91d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84cf921:	c7 44 24 04 e8 8a c8 	movl   $0x8c88ae8,0x4(%esp)
 84cf928:	08 
 84cf929:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cf92c:	89 04 24             	mov    %eax,(%esp)
 84cf92f:	e8 54 fe 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cf934:	b8 aa 2c 00 00       	mov    $0x2caa,%eax
 84cf939:	eb 17                	jmp    84cf952 <_ZN22Inter_MailBox_Req_List12dispatch_sigEP5CUserPci+0x158>
 84cf93b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cf93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf942:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf945:	89 04 24             	mov    %eax,(%esp)
 84cf948:	e8 59 2c 08 00       	call   85525a6 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST>
 84cf94d:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf952:	83 c4 5c             	add    $0x5c,%esp
 84cf955:	5b                   	pop    %ebx
 84cf956:	5e                   	pop    %esi
 84cf957:	5f                   	pop    %edi
 84cf958:	5d                   	pop    %ebp
 84cf959:	c3                   	ret

```

```c
// Inter_MailBox_Req_List::dispatch_sig @ 0x84cf7fa

/* Inter_MailBox_Req_List::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MailBox_Req_List::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  cMyTrace local_34 [16];
  SIG_MAILBOX_LIST *local_24;
  CMailBox *local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (1 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_084cf82e;
    }
  }
  bVar1 = true;
LAB_084cf82e:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    local_24 = (SIG_MAILBOX_LIST *)param_3;
    iVar2 = *(int *)(param_3 + 0x3332);
    iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar2 == iVar4) {
      local_20 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
      if (local_20 == (CMailBox *)0x0) {
        uVar3 = 0x2ca4;
      }
      else {
        iVar2 = *(int *)(local_24 + 0x3336);
        iVar4 = WongWork::CMailBox::getMailLoadCount(local_20);
        if (iVar2 == iVar4) {
          WongWork::CMailBoxHelper::SetMailBoxInfo((CUser *)param_2,local_24);
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(local_24 + 0x3336);
          uVar5 = WongWork::CMailBox::getMailLoadCount(local_20);
          uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          uVar7 = CUser::get_acc_id((CUser *)param_2);
          uVar8 = NumberToString(uVar7,0);
          cMyTrace::cMyTrace(local_34,
                             "virtual int Inter_MailBox_Req_List::dispatch_sig(CUser*, char*, int)",
                             0x2ca9,5);
          cMyTrace::operator()
                    (local_34,"Postal loaded twice. %s(%d)(%d->%d)",uVar8,uVar6,uVar5,uVar3);
          uVar3 = 0x2caa;
        }
      }
    }
    else {
      uVar3 = 0x2ca0;
    }
  }
  return uVar3;
}

```

