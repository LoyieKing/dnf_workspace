# WongWork__CMailBoxHelper

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 29

---

## CheckMailTimeout

```asm
// === 08554e90 WongWork::CMailBoxHelper::CheckMailTimeout  [0x08554e90-0x8555117] ===
 8554e90:	55                   	push   %ebp
 8554e91:	89 e5                	mov    %esp,%ebp
 8554e93:	57                   	push   %edi
 8554e94:	53                   	push   %ebx
 8554e95:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 8554e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8554e9e:	89 04 24             	mov    %eax,(%esp)
 8554ea1:	e8 66 b3 cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 8554ea6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8554ea9:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8554ead:	75 0a                	jne    8554eb9 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x29>
 8554eaf:	b8 00 00 00 00       	mov    $0x0,%eax
 8554eb4:	e9 55 02 00 00       	jmp    855510e <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x27e>
 8554eb9:	8d 5d 80             	lea    -0x80(%ebp),%ebx
 8554ebc:	b8 00 00 00 00       	mov    $0x0,%eax
 8554ec1:	ba 15 00 00 00       	mov    $0x15,%edx
 8554ec6:	89 df                	mov    %ebx,%edi
 8554ec8:	89 d1                	mov    %edx,%ecx
 8554eca:	f3 ab                	rep stos %eax,%es:(%edi)
 8554ecc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8554ed3:	e8 c6 6d b7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8554ed8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8554edb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8554ede:	8d 50 40             	lea    0x40(%eax),%edx
 8554ee1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554ee4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554ee8:	89 04 24             	mov    %eax,(%esp)
 8554eeb:	e8 dc 32 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 8554ef0:	83 ec 04             	sub    $0x4,%esp
 8554ef3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8554ef6:	8d 50 40             	lea    0x40(%eax),%edx
 8554ef9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8554efc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554f00:	89 04 24             	mov    %eax,(%esp)
 8554f03:	e8 9e 32 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8554f08:	83 ec 04             	sub    $0x4,%esp
 8554f0b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8554f0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554f12:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8554f15:	89 04 24             	mov    %eax,(%esp)
 8554f18:	e8 db 37 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 8554f1d:	e9 b5 01 00 00       	jmp    85550d7 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x247>
 8554f22:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554f25:	89 04 24             	mov    %eax,(%esp)
 8554f28:	e8 f7 32 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8554f2d:	8b 40 04             	mov    0x4(%eax),%eax
 8554f30:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8554f33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8554f36:	89 04 24             	mov    %eax,(%esp)
 8554f39:	e8 52 26 00 00       	call   8557590 <_ZNK8WongWork8CMailBox5CMail9isUnlimitEv>
 8554f3e:	83 f0 01             	xor    $0x1,%eax
 8554f41:	84 c0                	test   %al,%al
 8554f43:	74 1d                	je     8554f62 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0xd2>
 8554f45:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8554f48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554f4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8554f4f:	89 04 24             	mov    %eax,(%esp)
 8554f52:	e8 89 25 00 00       	call   85574e0 <_ZNK8WongWork8CMailBox5CMail10IsTimeOverEl>
 8554f57:	84 c0                	test   %al,%al
 8554f59:	74 07                	je     8554f62 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0xd2>
 8554f5b:	b8 01 00 00 00       	mov    $0x1,%eax
 8554f60:	eb 05                	jmp    8554f67 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0xd7>
 8554f62:	b8 00 00 00 00       	mov    $0x0,%eax
 8554f67:	84 c0                	test   %al,%al
 8554f69:	0f 84 5d 01 00 00    	je     85550cc <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x23c>
 8554f6f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554f72:	89 04 24             	mov    %eax,(%esp)
 8554f75:	e8 aa 32 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8554f7a:	8b 00                	mov    (%eax),%eax
 8554f7c:	89 c2                	mov    %eax,%edx
 8554f7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554f81:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554f85:	89 04 24             	mov    %eax,(%esp)
 8554f88:	e8 af 69 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8554f8d:	8b 45 80             	mov    -0x80(%ebp),%eax
 8554f90:	8d 58 01             	lea    0x1(%eax),%ebx
 8554f93:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554f96:	89 04 24             	mov    %eax,(%esp)
 8554f99:	e8 86 32 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8554f9e:	8b 00                	mov    (%eax),%eax
 8554fa0:	89 44 9d 80          	mov    %eax,-0x80(%ebp,%ebx,4)
 8554fa4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8554fa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8554fae:	00 
 8554faf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8554fb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554fb6:	89 04 24             	mov    %eax,(%esp)
 8554fb9:	e8 b8 3a 00 00       	call   8558a76 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEi>
 8554fbe:	83 ec 04             	sub    $0x4,%esp
 8554fc1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8554fc4:	8d 50 40             	lea    0x40(%eax),%edx
 8554fc7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8554fca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554fce:	89 14 24             	mov    %edx,(%esp)
 8554fd1:	e8 94 36 00 00       	call   855866a <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5eraseESt17_Rb_tree_iteratorIS8_E>
 8554fd6:	8b 45 80             	mov    -0x80(%ebp),%eax
 8554fd9:	83 c0 01             	add    $0x1,%eax
 8554fdc:	89 45 80             	mov    %eax,-0x80(%ebp)
 8554fdf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8554fe2:	89 04 24             	mov    %eax,(%esp)
 8554fe5:	e8 ea 24 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 8554fea:	85 c0                	test   %eax,%eax
 8554fec:	0f 95 c0             	setne  %al
 8554fef:	84 c0                	test   %al,%al
 8554ff1:	0f 84 b3 00 00 00    	je     85550aa <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x21a>
 8554ff7:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8554ffb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8554ffe:	8d 50 40             	lea    0x40(%eax),%edx
 8555001:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8555007:	89 54 24 04          	mov    %edx,0x4(%esp)
 855500b:	89 04 24             	mov    %eax,(%esp)
 855500e:	e8 b9 31 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 8555013:	83 ec 04             	sub    $0x4,%esp
 8555016:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 855501c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 855501f:	eb 3b                	jmp    855505c <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x1cc>
 8555021:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8555024:	89 04 24             	mov    %eax,(%esp)
 8555027:	e8 f8 31 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 855502c:	8b 40 04             	mov    0x4(%eax),%eax
 855502f:	89 04 24             	mov    %eax,(%esp)
 8555032:	e8 9d 24 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 8555037:	89 c3                	mov    %eax,%ebx
 8555039:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855503c:	89 04 24             	mov    %eax,(%esp)
 855503f:	e8 90 24 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 8555044:	39 c3                	cmp    %eax,%ebx
 8555046:	0f 94 c0             	sete   %al
 8555049:	84 c0                	test   %al,%al
 855504b:	74 04                	je     8555051 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x1c1>
 855504d:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8555051:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8555054:	89 04 24             	mov    %eax,(%esp)
 8555057:	e8 aa 31 00 00       	call   8558206 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 855505c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 855505f:	8d 50 40             	lea    0x40(%eax),%edx
 8555062:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8555065:	89 54 24 04          	mov    %edx,0x4(%esp)
 8555069:	89 04 24             	mov    %eax,(%esp)
 855506c:	e8 35 31 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8555071:	83 ec 04             	sub    $0x4,%esp
 8555074:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8555077:	89 44 24 04          	mov    %eax,0x4(%esp)
 855507b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 855507e:	89 04 24             	mov    %eax,(%esp)
 8555081:	e8 6c 31 00 00       	call   85581f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEneERKS7_>
 8555086:	84 c0                	test   %al,%al
 8555088:	75 97                	jne    8555021 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x191>
 855508a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 855508e:	83 f0 01             	xor    $0x1,%eax
 8555091:	84 c0                	test   %al,%al
 8555093:	74 15                	je     85550aa <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x21a>
 8555095:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8555098:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 855509e:	8d 50 01             	lea    0x1(%eax),%edx
 85550a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85550a4:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 85550aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85550ad:	89 04 24             	mov    %eax,(%esp)
 85550b0:	e8 49 c9 ff ff       	call   85519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>
 85550b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85550b8:	8d 50 10             	lea    0x10(%eax),%edx
 85550bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85550be:	89 44 24 04          	mov    %eax,0x4(%esp)
 85550c2:	89 14 24             	mov    %edx,(%esp)
 85550c5:	e8 68 31 00 00       	call   8558232 <_ZN10StaticPoolIN8WongWork8CMailBox5CMailELi20EE4FreeEPS2_>
 85550ca:	eb 0b                	jmp    85550d7 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x247>
 85550cc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85550cf:	89 04 24             	mov    %eax,(%esp)
 85550d2:	e8 2f 31 00 00       	call   8558206 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 85550d7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85550da:	89 44 24 04          	mov    %eax,0x4(%esp)
 85550de:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85550e1:	89 04 24             	mov    %eax,(%esp)
 85550e4:	e8 3c 36 00 00       	call   8558725 <_ZStneISt4pairIKjPN8WongWork8CMailBox5CMailEEEbRKSt17_Rb_tree_iteratorIT_ERKSt23_Rb_tree_const_iteratorIS8_E>
 85550e9:	84 c0                	test   %al,%al
 85550eb:	0f 85 31 fe ff ff    	jne    8554f22 <_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard+0x92>
 85550f1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85550f8:	00 
 85550f9:	8d 45 80             	lea    -0x80(%ebp),%eax
 85550fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555100:	8b 45 08             	mov    0x8(%ebp),%eax
 8555103:	89 04 24             	mov    %eax,(%esp)
 8555106:	e8 67 16 00 00       	call   8556772 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb>
 855510b:	8b 45 80             	mov    -0x80(%ebp),%eax
 855510e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8555111:	83 c4 00             	add    $0x0,%esp
 8555114:	5b                   	pop    %ebx
 8555115:	5f                   	pop    %edi
 8555116:	5d                   	pop    %ebp
 8555117:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::CheckMailTimeout @ 0x8554e90

/* WongWork::CMailBoxHelper::CheckMailTimeout(CUser*, PacketGuard*) */

uint WongWork::CMailBoxHelper::CheckMailTimeout(CUser *param_1,PacketGuard *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 local_90 [3];
  uint local_84 [21];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_30 [4];
  undefined4 local_2c;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_28 [4];
  undefined4 local_24;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_20 [4];
  int local_1c;
  long local_18;
  CMail *local_14;
  char local_d;
  
  bVar7 = 0;
  local_1c = CUser::GetMailBox(param_1);
  if (local_1c == 0) {
    local_84[0] = 0;
  }
  else {
    puVar4 = local_84;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    }
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)&local_2c);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_28);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_30,(_Rb_tree_iterator *)local_28);
    while( true ) {
      bVar2 = std::operator!=((_Rb_tree_iterator *)&local_2c,(_Rb_tree_const_iterator *)local_30);
      if (!bVar2) break;
      iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)&local_2c);
      local_14 = *(CMail **)(iVar6 + 4);
      cVar1 = CMailBox::CMail::isUnlimit(local_14);
      if (cVar1 == '\x01') {
LAB_08554f62:
        bVar2 = false;
      }
      else {
        cVar1 = CMailBox::CMail::IsTimeOver(local_14,local_18);
        if (cVar1 == '\0') goto LAB_08554f62;
        bVar2 = true;
      }
      if (bVar2) {
        piVar3 = (int *)std::
                        _Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                      *)&local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*piVar3);
        iVar6 = local_84[0] + 1;
        puVar4 = (uint *)std::
                         _Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                         ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                       *)&local_2c);
        local_84[iVar6] = *puVar4;
        uVar8 = 0;
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                   &local_24,(int)&local_2c);
        std::
        map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
        ::erase((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
                 *)(local_1c + 0x40),local_24,uVar8);
        local_84[0] = local_84[0] + 1;
        iVar6 = CMailBox::CMail::GetLetterId(local_14);
        if (iVar6 != 0) {
          local_d = '\0';
          std::
          map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
          ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
                   *)local_90);
          local_2c = local_90[0];
          while( true ) {
            std::
            map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
            ::end(local_20);
            cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                    ::operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                  *)&local_2c,(_Rb_tree_iterator *)local_20);
            if (cVar1 == '\0') break;
            iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                    ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                  *)&local_2c);
            iVar6 = CMailBox::CMail::GetLetterId(*(CMail **)(iVar6 + 4));
            iVar5 = CMailBox::CMail::GetLetterId(local_14);
            if (iVar6 == iVar5) {
              local_d = '\x01';
            }
            std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator++((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        *)&local_2c);
          }
          if (local_d != '\x01') {
            *(int *)(local_1c + 0x80) = *(int *)(local_1c + 0x80) + 1;
          }
        }
        CMailBox::CMail::ResetPackage(local_14);
        StaticPool<WongWork::CMailBox::CMail,20>::Free
                  ((StaticPool<WongWork::CMailBox::CMail,20> *)(local_1c + 0x10),local_14);
      }
      else {
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                   &local_2c);
      }
    }
    ReqDBRemoveMail(param_1,local_84,true);
  }
  return local_84[0];
}

```

---

## GetPackege

```asm
// === 085549de WongWork::CMailBoxHelper::GetPackege  [0x085549de-0x8554e8f] ===
 85549de:	55                   	push   %ebp
 85549df:	89 e5                	mov    %esp,%ebp
 85549e1:	57                   	push   %edi
 85549e2:	56                   	push   %esi
 85549e3:	53                   	push   %ebx
 85549e4:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 85549ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85549ed:	89 04 24             	mov    %eax,(%esp)
 85549f0:	e8 17 b8 cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 85549f5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85549f8:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85549fc:	75 20                	jne    8554a1e <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x40>
 85549fe:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8554a05:	00 
 8554a06:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 8554a0d:	00 
 8554a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8554a11:	89 04 24             	mov    %eax,(%esp)
 8554a14:	e8 29 75 12 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8554a19:	e9 66 04 00 00       	jmp    8554e84 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x4a6>
 8554a1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554a21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554a25:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8554a28:	89 04 24             	mov    %eax,(%esp)
 8554a2b:	e8 94 d8 ff ff       	call   85522c4 <_ZNK8WongWork8CMailBox7GetMailEj>
 8554a30:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8554a33:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8554a37:	75 20                	jne    8554a59 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x7b>
 8554a39:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8554a40:	00 
 8554a41:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 8554a48:	00 
 8554a49:	8b 45 08             	mov    0x8(%ebp),%eax
 8554a4c:	89 04 24             	mov    %eax,(%esp)
 8554a4f:	e8 ee 74 12 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8554a54:	e9 2b 04 00 00       	jmp    8554e84 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x4a6>
 8554a59:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8554a5c:	89 04 24             	mov    %eax,(%esp)
 8554a5f:	e8 72 ff bd ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8554a64:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8554a6b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8554a6e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8554a72:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8554a79:	00 
 8554a7a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8554a7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8554a81:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554a84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554a88:	8b 45 08             	mov    0x8(%ebp),%eax
 8554a8b:	89 04 24             	mov    %eax,(%esp)
 8554a8e:	e8 bd fb ff ff       	call   8554650 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>
 8554a93:	83 f0 01             	xor    $0x1,%eax
 8554a96:	84 c0                	test   %al,%al
 8554a98:	74 22                	je     8554abc <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0xde>
 8554a9a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8554a9d:	0f b6 c0             	movzbl %al,%eax
 8554aa0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8554aa4:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 8554aab:	00 
 8554aac:	8b 45 08             	mov    0x8(%ebp),%eax
 8554aaf:	89 04 24             	mov    %eax,(%esp)
 8554ab2:	e8 8b 74 12 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8554ab7:	e9 bd 03 00 00       	jmp    8554e79 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x49b>
 8554abc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8554abf:	89 44 24 10          	mov    %eax,0x10(%esp)
 8554ac3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8554aca:	00 
 8554acb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8554ace:	89 44 24 08          	mov    %eax,0x8(%esp)
 8554ad2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554ad5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554ad9:	8b 45 08             	mov    0x8(%ebp),%eax
 8554adc:	89 04 24             	mov    %eax,(%esp)
 8554adf:	e8 6c fb ff ff       	call   8554650 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>
 8554ae4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554ae7:	89 04 24             	mov    %eax,(%esp)
 8554aea:	e8 5d 92 03 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8554aef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554af2:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8554af5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554af9:	89 04 24             	mov    %eax,(%esp)
 8554afc:	e8 b1 8a b8 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8554b01:	83 ec 04             	sub    $0x4,%esp
 8554b04:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554b07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554b0b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554b0e:	89 04 24             	mov    %eax,(%esp)
 8554b11:	e8 0c 2e e3 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8554b16:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8554b19:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8554b1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554b20:	89 04 24             	mov    %eax,(%esp)
 8554b23:	e8 ae 8a b8 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8554b28:	83 ec 04             	sub    $0x4,%esp
 8554b2b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8554b2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554b32:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8554b35:	89 04 24             	mov    %eax,(%esp)
 8554b38:	e8 e5 2d e3 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8554b3d:	e9 4b 01 00 00       	jmp    8554c8d <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x2af>
 8554b42:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8554b49:	00 
 8554b4a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8554b51:	00 
 8554b52:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554b55:	89 04 24             	mov    %eax,(%esp)
 8554b58:	e8 9f 6d b7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8554b5d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554b60:	89 04 24             	mov    %eax,(%esp)
 8554b63:	e8 aa ed c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8554b68:	8b 00                	mov    (%eax),%eax
 8554b6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554b6e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554b71:	89 04 24             	mov    %eax,(%esp)
 8554b74:	e8 a7 6d b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8554b79:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8554b80:	00 
 8554b81:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554b84:	89 04 24             	mov    %eax,(%esp)
 8554b87:	e8 18 53 b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8554b8c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554b8f:	89 04 24             	mov    %eax,(%esp)
 8554b92:	e8 7b ed c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8554b97:	8b 00                	mov    (%eax),%eax
 8554b99:	83 f8 01             	cmp    $0x1,%eax
 8554b9c:	0f 94 c0             	sete   %al
 8554b9f:	84 c0                	test   %al,%al
 8554ba1:	74 39                	je     8554bdc <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x1fe>
 8554ba3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554ba6:	89 04 24             	mov    %eax,(%esp)
 8554ba9:	e8 64 ed c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8554bae:	8b 58 04             	mov    0x4(%eax),%ebx
 8554bb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8554bb4:	89 04 24             	mov    %eax,(%esp)
 8554bb7:	e8 c2 56 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8554bbc:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8554bbf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8554bc3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8554bc7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8554bce:	00 
 8554bcf:	89 04 24             	mov    %eax,(%esp)
 8554bd2:	e8 e5 7a fa ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8554bd7:	e9 81 00 00 00       	jmp    8554c5d <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x27f>
 8554bdc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554bdf:	89 04 24             	mov    %eax,(%esp)
 8554be2:	e8 2b ed c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8554be7:	8b 00                	mov    (%eax),%eax
 8554be9:	83 f8 07             	cmp    $0x7,%eax
 8554bec:	0f 94 c0             	sete   %al
 8554bef:	84 c0                	test   %al,%al
 8554bf1:	74 36                	je     8554c29 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x24b>
 8554bf3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554bf6:	89 04 24             	mov    %eax,(%esp)
 8554bf9:	e8 14 ed c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8554bfe:	8b 58 04             	mov    0x4(%eax),%ebx
 8554c01:	8b 45 08             	mov    0x8(%ebp),%eax
 8554c04:	89 04 24             	mov    %eax,(%esp)
 8554c07:	e8 72 56 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8554c0c:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8554c0f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8554c13:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8554c17:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8554c1e:	00 
 8554c1f:	89 04 24             	mov    %eax,(%esp)
 8554c22:	e8 95 7a fa ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8554c27:	eb 34                	jmp    8554c5d <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x27f>
 8554c29:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554c2c:	89 04 24             	mov    %eax,(%esp)
 8554c2f:	e8 de ec c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8554c34:	8b 58 04             	mov    0x4(%eax),%ebx
 8554c37:	8b 45 08             	mov    0x8(%ebp),%eax
 8554c3a:	89 04 24             	mov    %eax,(%esp)
 8554c3d:	e8 3c 56 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8554c42:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8554c45:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8554c49:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8554c4d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8554c54:	00 
 8554c55:	89 04 24             	mov    %eax,(%esp)
 8554c58:	e8 5f 7a fa ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8554c5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8554c64:	00 
 8554c65:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554c68:	89 04 24             	mov    %eax,(%esp)
 8554c6b:	e8 e8 6c b7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8554c70:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554c73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554c77:	8b 45 08             	mov    0x8(%ebp),%eax
 8554c7a:	89 04 24             	mov    %eax,(%esp)
 8554c7d:	e8 38 39 0f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8554c82:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554c85:	89 04 24             	mov    %eax,(%esp)
 8554c88:	e8 43 90 ce ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8554c8d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8554c90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554c94:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8554c97:	89 04 24             	mov    %eax,(%esp)
 8554c9a:	e8 46 ec c3 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8554c9f:	84 c0                	test   %al,%al
 8554ca1:	0f 85 9b fe ff ff    	jne    8554b42 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x164>
 8554ca7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554caa:	89 04 24             	mov    %eax,(%esp)
 8554cad:	e8 64 28 00 00       	call   8557516 <_ZNK8WongWork8CMailBox5CMail15GetPackageMoneyEv>
 8554cb2:	89 c1                	mov    %eax,%ecx
 8554cb4:	89 c8                	mov    %ecx,%eax
 8554cb6:	c1 e8 05             	shr    $0x5,%eax
 8554cb9:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8554cbc:	ba c5 5a 7c 0a       	mov    $0xa7c5ac5,%edx
 8554cc1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8554cc4:	f7 e2                	mul    %edx
 8554cc6:	89 d0                	mov    %edx,%eax
 8554cc8:	c1 e8 07             	shr    $0x7,%eax
 8554ccb:	69 c0 a0 86 01 00    	imul   $0x186a0,%eax,%eax
 8554cd1:	89 ca                	mov    %ecx,%edx
 8554cd3:	29 c2                	sub    %eax,%edx
 8554cd5:	89 d0                	mov    %edx,%eax
 8554cd7:	85 c0                	test   %eax,%eax
 8554cd9:	0f 95 c0             	setne  %al
 8554cdc:	84 c0                	test   %al,%al
 8554cde:	74 6b                	je     8554d4b <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x36d>
 8554ce0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554ce3:	89 04 24             	mov    %eax,(%esp)
 8554ce6:	e8 13 28 00 00       	call   85574fe <_ZNK8WongWork8CMailBox5CMail13GetSenderNameEv>
 8554ceb:	89 04 24             	mov    %eax,(%esp)
 8554cee:	e8 bd 96 b2 ff       	call   807e3b0 <strlen@plt>
 8554cf3:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8554cf6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554cf9:	89 04 24             	mov    %eax,(%esp)
 8554cfc:	e8 fd 27 00 00       	call   85574fe <_ZNK8WongWork8CMailBox5CMail13GetSenderNameEv>
 8554d01:	89 c7                	mov    %eax,%edi
 8554d03:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554d06:	89 04 24             	mov    %eax,(%esp)
 8554d09:	e8 08 28 00 00       	call   8557516 <_ZNK8WongWork8CMailBox5CMail15GetPackageMoneyEv>
 8554d0e:	89 c6                	mov    %eax,%esi
 8554d10:	8b 45 08             	mov    0x8(%ebp),%eax
 8554d13:	89 04 24             	mov    %eax,(%esp)
 8554d16:	e8 53 56 b8 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8554d1b:	89 c3                	mov    %eax,%ebx
 8554d1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8554d20:	89 04 24             	mov    %eax,(%esp)
 8554d23:	e8 6e 3f b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8554d28:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8554d2b:	89 54 24 14          	mov    %edx,0x14(%esp)
 8554d2f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8554d33:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8554d37:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8554d3e:	00 
 8554d3f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8554d43:	89 04 24             	mov    %eax,(%esp)
 8554d46:	e8 f3 53 ee ff       	call   843a13e <_ZN29DB_AccountHack_CheckMyAccount11makeRequestEjjjjPci>
 8554d4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8554d4e:	89 04 24             	mov    %eax,(%esp)
 8554d51:	e8 1c c3 ba ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8554d56:	89 c3                	mov    %eax,%ebx
 8554d58:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8554d5b:	89 04 24             	mov    %eax,(%esp)
 8554d5e:	e8 9b 27 00 00       	call   85574fe <_ZNK8WongWork8CMailBox5CMail13GetSenderNameEv>
 8554d63:	8b 55 08             	mov    0x8(%ebp),%edx
 8554d66:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8554d6c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8554d70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8554d74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554d77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554d7b:	89 14 24             	mov    %edx,(%esp)
 8554d7e:	e8 25 fb 12 00       	call   86848a8 <_ZN15cUserHistoryLog8RecvMailEjPKcS1_>
 8554d83:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554d86:	89 04 24             	mov    %eax,(%esp)
 8554d89:	e8 58 6b b7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8554d8e:	c7 44 24 08 62 00 00 	movl   $0x62,0x8(%esp)
 8554d95:	00 
 8554d96:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8554d9d:	00 
 8554d9e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554da1:	89 04 24             	mov    %eax,(%esp)
 8554da4:	e8 53 6b b7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8554da9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8554db0:	00 
 8554db1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554db4:	89 04 24             	mov    %eax,(%esp)
 8554db7:	e8 64 6b b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8554dbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554dbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554dc3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554dc6:	89 04 24             	mov    %eax,(%esp)
 8554dc9:	e8 6e 6b b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8554dce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8554dd5:	00 
 8554dd6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554dd9:	89 04 24             	mov    %eax,(%esp)
 8554ddc:	e8 77 6b b7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8554de1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554de4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554de8:	8b 45 08             	mov    0x8(%ebp),%eax
 8554deb:	89 04 24             	mov    %eax,(%esp)
 8554dee:	e8 c7 37 0f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8554df3:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8554dfa:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8554e01:	c7 45 ac 01 00 00 00 	movl   $0x1,-0x54(%ebp)
 8554e08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554e0b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8554e0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8554e15:	00 
 8554e16:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8554e19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554e1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8554e20:	89 04 24             	mov    %eax,(%esp)
 8554e23:	e8 4a 19 00 00       	call   8556772 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb>
 8554e28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554e2f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8554e32:	89 04 24             	mov    %eax,(%esp)
 8554e35:	e8 fe d2 ff ff       	call   8552138 <_ZN8WongWork8CMailBox10RemoveMailEj>
 8554e3a:	eb 15                	jmp    8554e51 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x473>
 8554e3c:	89 d3                	mov    %edx,%ebx
 8554e3e:	89 c6                	mov    %eax,%esi
 8554e40:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554e43:	89 04 24             	mov    %eax,(%esp)
 8554e46:	e8 35 90 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8554e4b:	89 f0                	mov    %esi,%eax
 8554e4d:	89 da                	mov    %ebx,%edx
 8554e4f:	eb 0d                	jmp    8554e5e <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x480>
 8554e51:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8554e54:	89 04 24             	mov    %eax,(%esp)
 8554e57:	e8 24 90 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8554e5c:	eb 1b                	jmp    8554e79 <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj+0x49b>
 8554e5e:	89 d3                	mov    %edx,%ebx
 8554e60:	89 c6                	mov    %eax,%esi
 8554e62:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8554e65:	89 04 24             	mov    %eax,(%esp)
 8554e68:	e8 7d fb bd ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8554e6d:	89 f0                	mov    %esi,%eax
 8554e6f:	89 da                	mov    %ebx,%edx
 8554e71:	89 04 24             	mov    %eax,(%esp)
 8554e74:	e8 d7 e8 58 00       	call   8ae3750 <_Unwind_Resume>
 8554e79:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8554e7c:	89 04 24             	mov    %eax,(%esp)
 8554e7f:	e8 66 fb bd ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8554e84:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8554e87:	83 c4 00             	add    $0x0,%esp
 8554e8a:	5b                   	pop    %ebx
 8554e8b:	5e                   	pop    %esi
 8554e8c:	5f                   	pop    %edi
 8554e8d:	5d                   	pop    %ebp
 8554e8e:	c3                   	ret
 8554e8f:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::GetPackege @ 0x85549de

/* WongWork::CMailBoxHelper::GetPackege(CUser*, unsigned int) */

void WongWork::CMailBoxHelper::GetPackege(CUser *param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  CInventory *pCVar6;
  uint uVar7;
  char *pcVar8;
  size_t sVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint local_58;
  uint local_54;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_50 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_4c [4];
  PacketGuard local_48 [12];
  uint local_3c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_38 [12];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  uint local_24;
  CMail *local_20;
  
  local_24 = CUser::GetMailBox(param_1);
  if (local_24 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x62,0x15);
  }
  else {
    local_20 = (CMail *)CMailBox::GetMail(local_24);
    if (local_20 == (CMail *)0x0) {
      CUser::SendCmdErrorPacket(param_1,0x62,0x15);
    }
    else {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_38);
      local_3c = 0;
                    /* try { // try from 08554a8e to 08554aee has its CatchHandler @ 08554e5e */
      cVar2 = _DoGetPackage(param_1,local_20,(vector *)local_38,true,(ENUM_ERROR *)&local_3c);
      if (cVar2 == '\x01') {
        _DoGetPackage(param_1,local_20,(vector *)local_38,false,(ENUM_ERROR *)&local_3c);
        PacketGuard::PacketGuard(local_48);
                    /* try { // try from 08554afc to 08554e39 has its CatchHandler @ 08554e3c */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_4c,local_2c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::__normal_iterator<std::pair<int,int>*>(local_50,local_28);
        while( true ) {
          bVar3 = __gnu_cxx::operator!=(local_4c,local_50);
          if (!bVar3) break;
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator->(local_4c);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,*piVar4);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,1);
          piVar4 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                          ::operator->(local_4c);
          if (*piVar4 == 1) {
            iVar5 = __gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_4c);
            uVar1 = *(undefined4 *)(iVar5 + 4);
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::MakeItemPacket(pCVar6,2,uVar1,local_48);
          }
          else {
            piVar4 = (int *)__gnu_cxx::
                            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                            ::operator->(local_4c);
            if (*piVar4 == 7) {
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_4c);
              uVar1 = *(undefined4 *)(iVar5 + 4);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::MakeItemPacket(pCVar6,3,uVar1,local_48);
            }
            else {
              iVar5 = __gnu_cxx::
                      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator->(local_4c);
              uVar1 = *(undefined4 *)(iVar5 + 4);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::MakeItemPacket(pCVar6,1,uVar1,local_48);
            }
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(param_1,local_48);
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_4c);
        }
        uVar7 = CMailBox::CMail::GetPackageMoney(local_20);
        if (uVar7 != (uVar7 / 100000) * 100000) {
          pcVar8 = (char *)CMailBox::CMail::GetSenderName(local_20);
          sVar9 = strlen(pcVar8);
          pcVar8 = (char *)CMailBox::CMail::GetSenderName(local_20);
          uVar7 = CMailBox::CMail::GetPackageMoney(local_20);
          uVar10 = CUser::get_acc_id(param_1);
          uVar11 = CUser::GetUID(param_1);
          DB_AccountHack_CheckMyAccount::makeRequest(uVar11,uVar10,0,uVar7,pcVar8,sVar9);
        }
        pcVar8 = (char *)CUser::get_acc_name(param_1);
        pcVar12 = (char *)CMailBox::CMail::GetSenderName(local_20);
        cUserHistoryLog::RecvMail((cUserHistoryLog *)(param_1 + 0x79700),param_2,pcVar12,pcVar8);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x62);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,param_2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
        CUser::Send(param_1,local_48);
        local_58 = 1;
        local_54 = param_2;
        ReqDBRemoveMail(param_1,&local_58,false);
        CMailBox::RemoveMail(local_24);
                    /* try { // try from 08554e57 to 08554e5b has its CatchHandler @ 08554e5e */
        PacketGuard::~PacketGuard(local_48);
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x62,local_3c & 0xff);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_38);
    }
  }
  return;
}

```

---

## IsCeraPointItem

```asm
// === 08553912 WongWork::CMailBoxHelper::IsCeraPointItem  [0x08553912-0x8553935] ===
 8553912:	55                   	push   %ebp
 8553913:	89 e5                	mov    %esp,%ebp
 8553915:	81 7d 08 a2 eb 28 00 	cmpl   $0x28eba2,0x8(%ebp)
 855391c:	74 09                	je     8553927 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm+0x15>
 855391e:	81 7d 08 3d ec 28 00 	cmpl   $0x28ec3d,0x8(%ebp)
 8553925:	75 07                	jne    855392e <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm+0x1c>
 8553927:	b8 01 00 00 00       	mov    $0x1,%eax
 855392c:	eb 05                	jmp    8553933 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm+0x21>
 855392e:	b8 00 00 00 00       	mov    $0x0,%eax
 8553933:	5d                   	pop    %ebp
 8553934:	c3                   	ret
 8553935:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::IsCeraPointItem @ 0x8553912

/* WongWork::CMailBoxHelper::IsCeraPointItem(unsigned long) */

undefined4 WongWork::CMailBoxHelper::IsCeraPointItem(ulong param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0x28eba2) || (param_1 == 0x28ec3d)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## MakeMailBoxListPacket

```asm
// === 08555118 WongWork::CMailBoxHelper::MakeMailBoxListPacket  [0x08555118-0x85552ab] ===
 8555118:	55                   	push   %ebp
 8555119:	89 e5                	mov    %esp,%ebp
 855511b:	83 ec 38             	sub    $0x38,%esp
 855511e:	8b 45 08             	mov    0x8(%ebp),%eax
 8555121:	89 04 24             	mov    %eax,(%esp)
 8555124:	e8 e3 b0 cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 8555129:	89 45 ec             	mov    %eax,-0x14(%ebp)
 855512c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8555130:	0f 84 73 01 00 00    	je     85552a9 <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard+0x191>
 8555136:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 855513d:	e8 5c 6b b7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8555142:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8555145:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555148:	c7 44 24 08 61 00 00 	movl   $0x61,0x8(%esp)
 855514f:	00 
 8555150:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8555157:	00 
 8555158:	89 04 24             	mov    %eax,(%esp)
 855515b:	e8 9c 67 b7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8555160:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8555167:	8b 45 0c             	mov    0xc(%ebp),%eax
 855516a:	89 04 24             	mov    %eax,(%esp)
 855516d:	e8 da b9 bb ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8555172:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8555175:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8555178:	89 04 24             	mov    %eax,(%esp)
 855517b:	e8 e6 f3 cd ff       	call   8234566 <_ZN8WongWork8CMailBox11GetRecvSizeEv>
 8555180:	8b 55 0c             	mov    0xc(%ebp),%edx
 8555183:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555187:	89 14 24             	mov    %edx,(%esp)
 855518a:	e8 91 67 b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 855518f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555192:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8555199:	00 
 855519a:	89 04 24             	mov    %eax,(%esp)
 855519d:	e8 7e 67 b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85551a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85551a5:	8d 50 40             	lea    0x40(%eax),%edx
 85551a8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85551ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 85551af:	89 04 24             	mov    %eax,(%esp)
 85551b2:	e8 15 30 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 85551b7:	83 ec 04             	sub    $0x4,%esp
 85551ba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85551bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85551c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85551c4:	89 04 24             	mov    %eax,(%esp)
 85551c7:	e8 2c 35 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 85551cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85551cf:	8d 50 40             	lea    0x40(%eax),%edx
 85551d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85551d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85551d9:	89 04 24             	mov    %eax,(%esp)
 85551dc:	e8 c5 2f 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 85551e1:	83 ec 04             	sub    $0x4,%esp
 85551e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85551e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85551eb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85551ee:	89 04 24             	mov    %eax,(%esp)
 85551f1:	e8 02 35 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 85551f6:	eb 66                	jmp    855525e <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard+0x146>
 85551f8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85551fb:	89 04 24             	mov    %eax,(%esp)
 85551fe:	e8 e7 34 00 00       	call   85586ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8555203:	8b 40 04             	mov    0x4(%eax),%eax
 8555206:	89 04 24             	mov    %eax,(%esp)
 8555209:	e8 c6 22 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 855520e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555212:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8555215:	89 04 24             	mov    %eax,(%esp)
 8555218:	e8 8f 25 00 00       	call   85577ac <_ZN8WongWork8CMailBox19FindPackageLoadLackEj>
 855521d:	84 c0                	test   %al,%al
 855521f:	75 31                	jne    8555252 <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard+0x13a>
 8555221:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8555225:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8555228:	89 04 24             	mov    %eax,(%esp)
 855522b:	e8 ba 34 00 00       	call   85586ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8555230:	8b 40 04             	mov    0x4(%eax),%eax
 8555233:	8b 55 08             	mov    0x8(%ebp),%edx
 8555236:	89 54 24 0c          	mov    %edx,0xc(%esp)
 855523a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 855523d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8555241:	8b 55 0c             	mov    0xc(%ebp),%edx
 8555244:	89 54 24 04          	mov    %edx,0x4(%esp)
 8555248:	89 04 24             	mov    %eax,(%esp)
 855524b:	e8 e6 c7 ff ff       	call   8551a36 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser>
 8555250:	eb 01                	jmp    8555253 <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard+0x13b>
 8555252:	90                   	nop
 8555253:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8555256:	89 04 24             	mov    %eax,(%esp)
 8555259:	e8 aa 34 00 00       	call   8558708 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 855525e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8555261:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555265:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8555268:	89 04 24             	mov    %eax,(%esp)
 855526b:	e8 e4 34 00 00       	call   8558754 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEneERKS7_>
 8555270:	84 c0                	test   %al,%al
 8555272:	75 84                	jne    85551f8 <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard+0xe0>
 8555274:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555277:	8b 55 f4             	mov    -0xc(%ebp),%edx
 855527a:	89 54 24 08          	mov    %edx,0x8(%esp)
 855527e:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8555281:	89 54 24 04          	mov    %edx,0x4(%esp)
 8555285:	89 04 24             	mov    %eax,(%esp)
 8555288:	e8 9b b8 bb ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 855528d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8555290:	89 04 24             	mov    %eax,(%esp)
 8555293:	e8 c2 f2 cd ff       	call   823455a <_ZN8WongWork8CMailBox21GetNotLoadedMailCountEv>
 8555298:	8b 55 0c             	mov    0xc(%ebp),%edx
 855529b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855529f:	89 14 24             	mov    %edx,(%esp)
 85552a2:	e8 fd 4b b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85552a7:	eb 01                	jmp    85552aa <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard+0x192>
 85552a9:	90                   	nop
 85552aa:	c9                   	leave
 85552ab:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::MakeMailBoxListPacket @ 0x8555118

/* WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser*, PacketGuard*) */

void WongWork::CMailBoxHelper::MakeMailBoxListPacket(CUser *param_1,PacketGuard *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_28 [4];
  int local_24;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_20 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_1c [4];
  CMailBox *local_18;
  long local_14;
  int local_10;
  
  local_18 = (CMailBox *)CUser::GetMailBox(param_1);
  if (local_18 != (CMailBox *)0x0) {
    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)param_2,0,0x61);
    local_10 = 0;
    local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_2);
    iVar2 = CMailBox::GetRecvSize(local_18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,iVar2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,0);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin(local_20);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_20);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_1c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_2c,(_Rb_tree_iterator *)local_1c);
    while( true ) {
      cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
              ::operator!=(local_28,(_Rb_tree_const_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
              ::operator->(local_28);
      uVar3 = CMailBox::CMail::GetLetterId(*(CMail **)(iVar2 + 4));
      cVar1 = CMailBox::FindPackageLoadLack(local_18,uVar3);
      if (cVar1 == '\0') {
        local_10 = local_10 + 1;
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->(local_28);
        CMailBox::CMail::MakePacket(*(CMail **)(iVar2 + 4),param_2,local_14,param_1);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
      operator++(local_28);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,&local_24,local_10);
    iVar2 = CMailBox::GetNotLoadedMailCount(local_18);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,iVar2);
  }
  return;
}

```

---

## MakeSystemMultiMailPostal

```asm
// === 08556a14 WongWork::CMailBoxHelper::MakeSystemMultiMailPostal  [0x08556a14-0x8556b67] ===
 8556a14:	55                   	push   %ebp
 8556a15:	89 e5                	mov    %esp,%ebp
 8556a17:	53                   	push   %ebx
 8556a18:	83 ec 74             	sub    $0x74,%esp
 8556a1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8556a1e:	89 04 24             	mov    %eax,(%esp)
 8556a21:	e8 ee 6d b8 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8556a26:	83 f8 0a             	cmp    $0xa,%eax
 8556a29:	77 0f                	ja     8556a3a <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x26>
 8556a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8556a2e:	89 04 24             	mov    %eax,(%esp)
 8556a31:	e8 de 6d b8 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8556a36:	85 c0                	test   %eax,%eax
 8556a38:	75 07                	jne    8556a41 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x2d>
 8556a3a:	b8 01 00 00 00       	mov    $0x1,%eax
 8556a3f:	eb 05                	jmp    8556a46 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x32>
 8556a41:	b8 00 00 00 00       	mov    $0x0,%eax
 8556a46:	84 c0                	test   %al,%al
 8556a48:	74 0a                	je     8556a54 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x40>
 8556a4a:	b8 00 00 00 00       	mov    $0x0,%eax
 8556a4f:	e9 0f 01 00 00       	jmp    8556b63 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x14f>
 8556a54:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8556a5b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556a5e:	8b 55 08             	mov    0x8(%ebp),%edx
 8556a61:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556a65:	89 04 24             	mov    %eax,(%esp)
 8556a68:	e8 45 6b b8 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8556a6d:	83 ec 04             	sub    $0x4,%esp
 8556a70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556a73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556a77:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556a7a:	89 04 24             	mov    %eax,(%esp)
 8556a7d:	e8 a0 0e e3 ff       	call   8387922 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 8556a82:	e9 90 00 00 00       	jmp    8556b17 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x103>
 8556a87:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8556a8a:	89 04 24             	mov    %eax,(%esp)
 8556a8d:	e8 c2 4d b7 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8556a92:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8556a95:	89 04 24             	mov    %eax,(%esp)
 8556a98:	e8 3b 4d b7 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8556a9d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556aa0:	89 04 24             	mov    %eax,(%esp)
 8556aa3:	e8 6a ce c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8556aa8:	8b 00                	mov    (%eax),%eax
 8556aaa:	89 45 a9             	mov    %eax,-0x57(%ebp)
 8556aad:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556ab0:	89 04 24             	mov    %eax,(%esp)
 8556ab3:	e8 5a ce c3 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8556ab8:	8b 58 04             	mov    0x4(%eax),%ebx
 8556abb:	e8 db 56 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8556ac0:	8b 40 0c             	mov    0xc(%eax),%eax
 8556ac3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8556ac7:	8d 55 a7             	lea    -0x59(%ebp),%edx
 8556aca:	89 54 24 08          	mov    %edx,0x8(%esp)
 8556ace:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8556ad5:	00 
 8556ad6:	89 04 24             	mov    %eax,(%esp)
 8556ad9:	e8 da b4 fb ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8556ade:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556ae1:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8556ae4:	03 45 0c             	add    0xc(%ebp),%eax
 8556ae7:	8d 55 a7             	lea    -0x59(%ebp),%edx
 8556aea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556aee:	89 04 24             	mov    %eax,(%esp)
 8556af1:	e8 38 3b bf ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8556af6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8556afa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8556afd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8556b04:	00 
 8556b05:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8556b08:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556b0c:	89 04 24             	mov    %eax,(%esp)
 8556b0f:	e8 5e c9 c3 ff       	call   8193472 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8556b14:	83 ec 04             	sub    $0x4,%esp
 8556b17:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8556b1a:	8b 55 08             	mov    0x8(%ebp),%edx
 8556b1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556b21:	89 04 24             	mov    %eax,(%esp)
 8556b24:	e8 ad 6a b8 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8556b29:	83 ec 04             	sub    $0x4,%esp
 8556b2c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8556b2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556b33:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556b36:	89 04 24             	mov    %eax,(%esp)
 8556b39:	e8 fe 0d e3 ff       	call   838793c <_ZN9__gnu_cxxneIPKSt4pairIiiEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 8556b3e:	84 c0                	test   %al,%al
 8556b40:	74 0f                	je     8556b51 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x13d>
 8556b42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556b45:	3b 45 10             	cmp    0x10(%ebp),%eax
 8556b48:	73 07                	jae    8556b51 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x13d>
 8556b4a:	b8 01 00 00 00       	mov    $0x1,%eax
 8556b4f:	eb 05                	jmp    8556b56 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x142>
 8556b51:	b8 00 00 00 00       	mov    $0x0,%eax
 8556b56:	84 c0                	test   %al,%al
 8556b58:	0f 85 29 ff ff ff    	jne    8556a87 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj+0x73>
 8556b5e:	b8 01 00 00 00       	mov    $0x1,%eax
 8556b63:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8556b66:	c9                   	leave
 8556b67:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::MakeSystemMultiMailPostal @ 0x8556a14

/* WongWork::CMailBoxHelper::MakeSystemMultiMailPostal(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, Inven_Item*, unsigned int) */

undefined4
WongWork::CMailBoxHelper::MakeSystemMultiMailPostal
          (vector *param_1,Inven_Item *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  Inven_Item local_5d [2];
  undefined4 local_5b;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  uint local_10;
  
  uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (uVar2 < 0xb) {
    iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08556a46;
    }
  }
  bVar1 = true;
LAB_08556a46:
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    local_10 = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_20,local_1c);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_18);
      if ((bVar1) && (local_10 < param_3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      Inven_Item::Inven_Item(local_5d);
      Inven_Item::reset(local_5d);
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator->(local_20);
      local_5b = *puVar5;
      iVar3 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_20);
      uVar4 = *(undefined4 *)(iVar3 + 4);
      iVar3 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar3 + 0xc),0,local_5d,uVar4);
      Inven_Item::setCopy(param_2 + local_10 * 0x3d,local_5d);
      local_10 = local_10 + 1;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14,(int)local_20);
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## ReqChangeLetterStat

```asm
// === 085568a6 WongWork::CMailBoxHelper::ReqChangeLetterStat  [0x085568a6-0x8556a13] ===
 85568a6:	55                   	push   %ebp
 85568a7:	89 e5                	mov    %esp,%ebp
 85568a9:	56                   	push   %esi
 85568aa:	53                   	push   %ebx
 85568ab:	83 ec 20             	sub    $0x20,%esp
 85568ae:	8b 45 10             	mov    0x10(%ebp),%eax
 85568b1:	83 f8 02             	cmp    $0x2,%eax
 85568b4:	74 55                	je     855690b <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x65>
 85568b6:	83 f8 03             	cmp    $0x3,%eax
 85568b9:	74 06                	je     85568c1 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x1b>
 85568bb:	85 c0                	test   %eax,%eax
 85568bd:	74 4f                	je     855690e <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x68>
 85568bf:	eb 40                	jmp    8556901 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x5b>
 85568c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85568c4:	89 04 24             	mov    %eax,(%esp)
 85568c7:	e8 40 99 cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 85568cc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85568cf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85568d3:	75 0a                	jne    85568df <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x39>
 85568d5:	bb 15 00 00 00       	mov    $0x15,%ebx
 85568da:	e9 2c 01 00 00       	jmp    8556a0b <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x165>
 85568df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85568e2:	89 04 24             	mov    %eax,(%esp)
 85568e5:	e8 9c 0f 00 00       	call   8557886 <_ZN8WongWork8CMailBox18GetLetterKeepCountEv>
 85568ea:	83 c0 01             	add    $0x1,%eax
 85568ed:	83 f8 0a             	cmp    $0xa,%eax
 85568f0:	0f 9f c0             	setg   %al
 85568f3:	84 c0                	test   %al,%al
 85568f5:	74 1a                	je     8556911 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x6b>
 85568f7:	bb 16 00 00 00       	mov    $0x16,%ebx
 85568fc:	e9 0a 01 00 00       	jmp    8556a0b <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x165>
 8556901:	bb 13 00 00 00       	mov    $0x13,%ebx
 8556906:	e9 00 01 00 00       	jmp    8556a0b <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x165>
 855690b:	90                   	nop
 855690c:	eb 04                	jmp    8556912 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x6c>
 855690e:	90                   	nop
 855690f:	eb 01                	jmp    8556912 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x6c>
 8556911:	90                   	nop
 8556912:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8556917:	c7 44 24 08 f0 08 00 	movl   $0x8f0,0x8(%esp)
 855691e:	00 
 855691f:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8556926:	08 
 8556927:	89 04 24             	mov    %eax,(%esp)
 855692a:	e8 57 91 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 855692f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8556936:	00 
 8556937:	89 44 24 04          	mov    %eax,0x4(%esp)
 855693b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855693e:	89 04 24             	mov    %eax,(%esp)
 8556941:	e8 e0 22 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8556946:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556949:	89 04 24             	mov    %eax,(%esp)
 855694c:	e8 f5 22 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556951:	c7 44 24 04 c2 00 00 	movl   $0xc2,0x4(%esp)
 8556958:	00 
 8556959:	89 04 24             	mov    %eax,(%esp)
 855695c:	e8 f5 22 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556961:	8b 45 08             	mov    0x8(%ebp),%eax
 8556964:	89 04 24             	mov    %eax,(%esp)
 8556967:	e8 2a 23 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 855696c:	89 c3                	mov    %eax,%ebx
 855696e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556971:	89 04 24             	mov    %eax,(%esp)
 8556974:	e8 cd 22 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556979:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 855697d:	89 04 24             	mov    %eax,(%esp)
 8556980:	e8 d1 22 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556985:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556988:	89 04 24             	mov    %eax,(%esp)
 855698b:	e8 be 22 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8556990:	89 04 24             	mov    %eax,(%esp)
 8556993:	e8 bc b6 ef ff       	call   8452054 <_ZN12CStreamGuard11GetInBufferI15SIG_LETTER_STATEEPT_v>
 8556998:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855699b:	8b 45 08             	mov    0x8(%ebp),%eax
 855699e:	89 04 24             	mov    %eax,(%esp)
 85569a1:	e8 a8 52 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85569a6:	89 c2                	mov    %eax,%edx
 85569a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85569ab:	89 10                	mov    %edx,(%eax)
 85569ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 85569b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85569b3:	89 50 04             	mov    %edx,0x4(%eax)
 85569b6:	8b 45 10             	mov    0x10(%ebp),%eax
 85569b9:	89 c2                	mov    %eax,%edx
 85569bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85569be:	66 89 50 08          	mov    %dx,0x8(%eax)
 85569c2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85569c7:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85569ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 85569ce:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85569d5:	00 
 85569d6:	89 04 24             	mov    %eax,(%esp)
 85569d9:	e8 00 a6 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85569de:	bb 00 00 00 00       	mov    $0x0,%ebx
 85569e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85569e6:	89 04 24             	mov    %eax,(%esp)
 85569e9:	e8 e4 5e 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85569ee:	eb 1b                	jmp    8556a0b <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii+0x165>
 85569f0:	89 d3                	mov    %edx,%ebx
 85569f2:	89 c6                	mov    %eax,%esi
 85569f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85569f7:	89 04 24             	mov    %eax,(%esp)
 85569fa:	e8 d3 5e 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85569ff:	89 f0                	mov    %esi,%eax
 8556a01:	89 da                	mov    %ebx,%edx
 8556a03:	89 04 24             	mov    %eax,(%esp)
 8556a06:	e8 45 cd 58 00       	call   8ae3750 <_Unwind_Resume>
 8556a0b:	89 d8                	mov    %ebx,%eax
 8556a0d:	83 c4 20             	add    $0x20,%esp
 8556a10:	5b                   	pop    %ebx
 8556a11:	5e                   	pop    %esi
 8556a12:	5d                   	pop    %ebp
 8556a13:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqChangeLetterStat @ 0x85568a6

/* WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser*, int, int) */

undefined4 WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser *param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  CMailBox *local_14;
  SIG_LETTER_STAT *local_10;
  
  if (param_3 != 2) {
    if (param_3 == 3) {
      local_14 = (CMailBox *)CUser::GetMailBox(param_1);
      if (local_14 == (CMailBox *)0x0) {
        return 0x15;
      }
      iVar3 = CMailBox::GetLetterKeepCount(local_14);
      if (10 < iVar3 + 1) {
        return 0x16;
      }
    }
    else if (param_3 != 0) {
      return 0x13;
    }
  }
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x8f0);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0855695c to 085569dd has its CatchHandler @ 085569f0 */
  CStreamGuard::operator<<(pCVar2,0xc2);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_10 = CStreamGuard::GetInBuffer<SIG_LETTER_STAT>(pCVar2);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)local_10 = uVar4;
  *(int *)(local_10 + 4) = param_2;
  *(short *)(local_10 + 8) = (short)param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return 0;
}

```

---

## ReqDBCheckReceiver

```asm
// === 08555464 WongWork::CMailBoxHelper::ReqDBCheckReceiver  [0x08555464-0x8555485] ===
 8555464:	55                   	push   %ebp
 8555465:	89 e5                	mov    %esp,%ebp
 8555467:	83 ec 28             	sub    $0x28,%esp
 855546a:	8b 45 10             	mov    0x10(%ebp),%eax
 855546d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8555471:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555474:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555478:	8b 45 08             	mov    0x8(%ebp),%eax
 855547b:	89 04 24             	mov    %eax,(%esp)
 855547e:	e8 03 00 00 00       	call   8555486 <_ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>
 8555483:	c9                   	leave
 8555484:	c3                   	ret
 8555485:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::ReqDBCheckReceiver @ 0x8555464

/* WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*) */

void WongWork::CMailBoxHelper::ReqDBCheckReceiver
               (CUser *param_1,char *param_2,MSG_CHECK_MAIL_RECEIVER *param_3)

{
  ReqDBCheckReceiver_forchina(param_1,param_2,param_3);
  return;
}

```

---

## ReqDBCheckReceiver_forchina

```asm
// === 08555486 WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina  [0x08555486-0x85555e7] ===
 8555486:	55                   	push   %ebp
 8555487:	89 e5                	mov    %esp,%ebp
 8555489:	56                   	push   %esi
 855548a:	53                   	push   %ebx
 855548b:	83 ec 20             	sub    $0x20,%esp
 855548e:	8b 45 08             	mov    0x8(%ebp),%eax
 8555491:	89 04 24             	mov    %eax,(%esp)
 8555494:	e8 8f bb ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8555499:	8b 55 0c             	mov    0xc(%ebp),%edx
 855549c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85554a0:	89 04 24             	mov    %eax,(%esp)
 85554a3:	e8 38 90 b2 ff       	call   807e4e0 <strcmp@plt>
 85554a8:	85 c0                	test   %eax,%eax
 85554aa:	0f 94 c0             	sete   %al
 85554ad:	84 c0                	test   %al,%al
 85554af:	74 0a                	je     85554bb <_ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER+0x35>
 85554b1:	bb 07 00 00 00       	mov    $0x7,%ebx
 85554b6:	e9 24 01 00 00       	jmp    85555df <_ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER+0x159>
 85554bb:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 85554c0:	c7 44 24 08 2e 05 00 	movl   $0x52e,0x8(%esp)
 85554c7:	00 
 85554c8:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 85554cf:	08 
 85554d0:	89 04 24             	mov    %eax,(%esp)
 85554d3:	e8 8a ad d3 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 85554d8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85554df:	00 
 85554e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85554e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85554e7:	89 04 24             	mov    %eax,(%esp)
 85554ea:	e8 37 37 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85554ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85554f2:	89 04 24             	mov    %eax,(%esp)
 85554f5:	e8 4c 37 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85554fa:	c7 44 24 04 7e 00 00 	movl   $0x7e,0x4(%esp)
 8555501:	00 
 8555502:	89 04 24             	mov    %eax,(%esp)
 8555505:	e8 4c 37 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855550a:	8b 45 08             	mov    0x8(%ebp),%eax
 855550d:	89 04 24             	mov    %eax,(%esp)
 8555510:	e8 81 37 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8555515:	89 c3                	mov    %eax,%ebx
 8555517:	8d 45 ec             	lea    -0x14(%ebp),%eax
 855551a:	89 04 24             	mov    %eax,(%esp)
 855551d:	e8 24 37 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8555522:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8555526:	89 04 24             	mov    %eax,(%esp)
 8555529:	e8 28 37 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855552e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8555531:	89 04 24             	mov    %eax,(%esp)
 8555534:	e8 15 37 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8555539:	89 04 24             	mov    %eax,(%esp)
 855553c:	e8 6d c0 ef ff       	call   84515ae <_ZN12CStreamGuard11GetInBufferI26SIG_MAILBOX_CHECK_RECEIVEREEPT_v>
 8555541:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8555544:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555547:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 855554e:	00 
 855554f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8555552:	89 54 24 04          	mov    %edx,0x4(%esp)
 8555556:	89 04 24             	mov    %eax,(%esp)
 8555559:	e8 72 83 b2 ff       	call   807d8d0 <strncpy@plt>
 855555e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555561:	8d 50 31             	lea    0x31(%eax),%edx
 8555564:	c7 44 24 08 88 3f 00 	movl   $0x3f88,0x8(%esp)
 855556b:	00 
 855556c:	8b 45 10             	mov    0x10(%ebp),%eax
 855556f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555573:	89 14 24             	mov    %edx,(%esp)
 8555576:	e8 25 83 b2 ff       	call   807d8a0 <memcpy@plt>
 855557b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8555582:	ff 
 8555583:	8b 45 08             	mov    0x8(%ebp),%eax
 8555586:	89 04 24             	mov    %eax,(%esp)
 8555589:	e8 12 8a 0f 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 855558e:	89 c2                	mov    %eax,%edx
 8555590:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555593:	89 50 2d             	mov    %edx,0x2d(%eax)
 8555596:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 855559b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 855559e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85555a2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85555a9:	00 
 85555aa:	89 04 24             	mov    %eax,(%esp)
 85555ad:	e8 2c ba 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85555b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 85555b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85555ba:	89 04 24             	mov    %eax,(%esp)
 85555bd:	e8 10 73 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85555c2:	eb 1b                	jmp    85555df <_ZN8WongWork14CMailBoxHelper27ReqDBCheckReceiver_forchinaEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER+0x159>
 85555c4:	89 d3                	mov    %edx,%ebx
 85555c6:	89 c6                	mov    %eax,%esi
 85555c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85555cb:	89 04 24             	mov    %eax,(%esp)
 85555ce:	e8 ff 72 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85555d3:	89 f0                	mov    %esi,%eax
 85555d5:	89 da                	mov    %ebx,%edx
 85555d7:	89 04 24             	mov    %eax,(%esp)
 85555da:	e8 71 e1 58 00       	call   8ae3750 <_Unwind_Resume>
 85555df:	89 d8                	mov    %ebx,%eax
 85555e1:	83 c4 20             	add    $0x20,%esp
 85555e4:	5b                   	pop    %ebx
 85555e5:	5e                   	pop    %esi
 85555e6:	5d                   	pop    %ebp
 85555e7:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina @ 0x8555486

/* WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina(CUser*, char const*,
   MSG_CHECK_MAIL_RECEIVER*) */

undefined4
WongWork::CMailBoxHelper::ReqDBCheckReceiver_forchina
          (CUser *param_1,char *param_2,MSG_CHECK_MAIL_RECEIVER *param_3)

{
  char *__s1;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_CHECK_RECEIVER *local_10;
  
  __s1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  iVar1 = strcmp(__s1,param_2);
  if (iVar1 == 0) {
    uVar4 = 7;
  }
  else {
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"MailBox.cpp",0x52e);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08555505 to 085555b1 has its CatchHandler @ 085555c4 */
    CStreamGuard::operator<<(pCVar3,0x7e);
    iVar1 = CUser::GetUID(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar3);
    strncpy((char *)local_10,param_2,0x1d);
    memcpy(local_10 + 0x31,param_3,0x3f88);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 0x2d) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    uVar4 = 0;
    CStreamGuard::~CStreamGuard(local_18);
  }
  return uVar4;
}

```

---

## ReqDBLoadMail

```asm
// === 085552ac WongWork::CMailBoxHelper::ReqDBLoadMail  [0x085552ac-0x8555463] ===
 85552ac:	55                   	push   %ebp
 85552ad:	89 e5                	mov    %esp,%ebp
 85552af:	56                   	push   %esi
 85552b0:	53                   	push   %ebx
 85552b1:	83 ec 20             	sub    $0x20,%esp
 85552b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85552b7:	89 04 24             	mov    %eax,(%esp)
 85552ba:	e8 4d af cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 85552bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85552c2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85552c6:	0f 84 90 01 00 00    	je     855545c <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj+0x1b0>
 85552cc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85552d1:	c7 44 24 08 e0 04 00 	movl   $0x4e0,0x8(%esp)
 85552d8:	00 
 85552d9:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 85552e0:	08 
 85552e1:	89 04 24             	mov    %eax,(%esp)
 85552e4:	e8 9d a7 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85552e9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85552f0:	00 
 85552f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85552f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85552f8:	89 04 24             	mov    %eax,(%esp)
 85552fb:	e8 26 39 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8555300:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555303:	89 04 24             	mov    %eax,(%esp)
 8555306:	e8 3b 39 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855530b:	c7 44 24 04 7f 00 00 	movl   $0x7f,0x4(%esp)
 8555312:	00 
 8555313:	89 04 24             	mov    %eax,(%esp)
 8555316:	e8 3b 39 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855531b:	8b 45 08             	mov    0x8(%ebp),%eax
 855531e:	89 04 24             	mov    %eax,(%esp)
 8555321:	e8 70 39 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8555326:	89 c3                	mov    %eax,%ebx
 8555328:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855532b:	89 04 24             	mov    %eax,(%esp)
 855532e:	e8 13 39 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8555333:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8555337:	89 04 24             	mov    %eax,(%esp)
 855533a:	e8 17 39 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855533f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555342:	89 04 24             	mov    %eax,(%esp)
 8555345:	e8 04 39 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 855534a:	89 04 24             	mov    %eax,(%esp)
 855534d:	e8 62 37 00 00       	call   8558ab4 <_ZN12CStreamGuard11GetInBufferI16SIG_MAILBOX_LISTEEPT_v>
 8555352:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8555355:	c7 44 24 08 8a 33 00 	movl   $0x338a,0x8(%esp)
 855535c:	00 
 855535d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8555364:	00 
 8555365:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555368:	89 04 24             	mov    %eax,(%esp)
 855536b:	e8 50 89 b2 ff       	call   807dcc0 <memset@plt>
 8555370:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555373:	8b 55 0c             	mov    0xc(%ebp),%edx
 8555376:	89 10                	mov    %edx,(%eax)
 8555378:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855537b:	89 04 24             	mov    %eax,(%esp)
 855537e:	e8 c1 25 00 00       	call   8557944 <_ZN8WongWork8CMailBox14GetLastLoadIdxEv>
 8555383:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8555386:	89 42 04             	mov    %eax,0x4(%edx)
 8555389:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855538c:	89 04 24             	mov    %eax,(%esp)
 855538f:	e8 b8 f1 cd ff       	call   823454c <_ZN8WongWork8CMailBox20GetLoadedLetterCountEv>
 8555394:	83 f8 14             	cmp    $0x14,%eax
 8555397:	0f 9f c0             	setg   %al
 855539a:	84 c0                	test   %al,%al
 855539c:	74 13                	je     85553b1 <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj+0x105>
 855539e:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 85553a5:	00 
 85553a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85553a9:	89 04 24             	mov    %eax,(%esp)
 85553ac:	e8 eb 24 00 00       	call   855789c <_ZN8WongWork8CMailBox20SetLoadedLetterCountEi>
 85553b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85553b4:	89 04 24             	mov    %eax,(%esp)
 85553b7:	e8 66 25 00 00       	call   8557922 <_ZN8WongWork8CMailBox13GetRemainSizeEv>
 85553bc:	89 c3                	mov    %eax,%ebx
 85553be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85553c1:	89 04 24             	mov    %eax,(%esp)
 85553c4:	e8 83 f1 cd ff       	call   823454c <_ZN8WongWork8CMailBox20GetLoadedLetterCountEv>
 85553c9:	89 da                	mov    %ebx,%edx
 85553cb:	29 c2                	sub    %eax,%edx
 85553cd:	89 d0                	mov    %edx,%eax
 85553cf:	89 c2                	mov    %eax,%edx
 85553d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85553d4:	89 50 08             	mov    %edx,0x8(%eax)
 85553d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85553da:	89 04 24             	mov    %eax,(%esp)
 85553dd:	e8 6a 24 00 00       	call   855784c <_ZN8WongWork8CMailBox20GetLastLoadLetterIdxEv>
 85553e2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85553e5:	89 42 0c             	mov    %eax,0xc(%edx)
 85553e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85553eb:	89 04 24             	mov    %eax,(%esp)
 85553ee:	e8 23 7e f9 ff       	call   84ed216 <_ZNK8WongWork8CMailBox16getMailLoadCountEv>
 85553f3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85553f6:	89 42 10             	mov    %eax,0x10(%edx)
 85553f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85553fc:	83 c0 14             	add    $0x14,%eax
 85553ff:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8555406:	00 
 8555407:	89 44 24 04          	mov    %eax,0x4(%esp)
 855540b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855540e:	89 04 24             	mov    %eax,(%esp)
 8555411:	e8 f2 21 00 00       	call   8557608 <_ZN8WongWork8CMailBox18GetPackageLoadLackEPjj>
 8555416:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 855541b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855541e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8555422:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8555429:	00 
 855542a:	89 04 24             	mov    %eax,(%esp)
 855542d:	e8 ac bb 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8555432:	eb 1b                	jmp    855544f <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj+0x1a3>
 8555434:	89 d3                	mov    %edx,%ebx
 8555436:	89 c6                	mov    %eax,%esi
 8555438:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855543b:	89 04 24             	mov    %eax,(%esp)
 855543e:	e8 8f 74 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8555443:	89 f0                	mov    %esi,%eax
 8555445:	89 da                	mov    %ebx,%edx
 8555447:	89 04 24             	mov    %eax,(%esp)
 855544a:	e8 01 e3 58 00       	call   8ae3750 <_Unwind_Resume>
 855544f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555452:	89 04 24             	mov    %eax,(%esp)
 8555455:	e8 78 74 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855545a:	eb 01                	jmp    855545d <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj+0x1b1>
 855545c:	90                   	nop
 855545d:	83 c4 20             	add    $0x20,%esp
 8555460:	5b                   	pop    %ebx
 8555461:	5e                   	pop    %esi
 8555462:	5d                   	pop    %ebp
 8555463:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBLoadMail @ 0x85552ac

/* WongWork::CMailBoxHelper::ReqDBLoadMail(CUser*, unsigned int) */

void WongWork::CMailBoxHelper::ReqDBLoadMail(CUser *param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CStreamGuard local_1c [8];
  CMailBox *local_14;
  SIG_MAILBOX_LIST *local_10;
  
  local_14 = (CMailBox *)CUser::GetMailBox(param_1);
  if (local_14 != (CMailBox *)0x0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x4e0);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08555316 to 08555431 has its CatchHandler @ 08555434 */
    CStreamGuard::operator<<(pCVar2,0x7f);
    iVar3 = CUser::GetUID(param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,iVar3);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_LIST>(pCVar2);
    memset(local_10,0,0x338a);
    *(uint *)local_10 = param_2;
    uVar4 = CMailBox::GetLastLoadIdx(local_14);
    *(undefined4 *)(local_10 + 4) = uVar4;
    iVar3 = CMailBox::GetLoadedLetterCount(local_14);
    if (0x14 < iVar3) {
      CMailBox::SetLoadedLetterCount(local_14,0x14);
    }
    iVar3 = CMailBox::GetRemainSize(local_14);
    iVar5 = CMailBox::GetLoadedLetterCount(local_14);
    *(int *)(local_10 + 8) = iVar3 - iVar5;
    uVar4 = CMailBox::GetLastLoadLetterIdx(local_14);
    *(undefined4 *)(local_10 + 0xc) = uVar4;
    uVar4 = CMailBox::getMailLoadCount(local_14);
    *(undefined4 *)(local_10 + 0x10) = uVar4;
    CMailBox::GetPackageLoadLack(local_14,(uint *)(local_10 + 0x14),0x14);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return;
}

```

---

## ReqDBRemoveMail

```asm
// === 08556772 WongWork::CMailBoxHelper::ReqDBRemoveMail  [0x08556772-0x85568a5] ===
 8556772:	55                   	push   %ebp
 8556773:	89 e5                	mov    %esp,%ebp
 8556775:	56                   	push   %esi
 8556776:	53                   	push   %ebx
 8556777:	83 ec 30             	sub    $0x30,%esp
 855677a:	8b 45 10             	mov    0x10(%ebp),%eax
 855677d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8556780:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8556785:	c7 44 24 08 ce 08 00 	movl   $0x8ce,0x8(%esp)
 855678c:	00 
 855678d:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8556794:	08 
 8556795:	89 04 24             	mov    %eax,(%esp)
 8556798:	e8 e9 92 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 855679d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85567a4:	00 
 85567a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85567a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85567ac:	89 04 24             	mov    %eax,(%esp)
 85567af:	e8 72 24 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85567b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85567b7:	89 04 24             	mov    %eax,(%esp)
 85567ba:	e8 87 24 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85567bf:	c7 44 24 04 81 00 00 	movl   $0x81,0x4(%esp)
 85567c6:	00 
 85567c7:	89 04 24             	mov    %eax,(%esp)
 85567ca:	e8 87 24 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85567cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85567d2:	89 04 24             	mov    %eax,(%esp)
 85567d5:	e8 bc 24 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85567da:	89 c3                	mov    %eax,%ebx
 85567dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85567df:	89 04 24             	mov    %eax,(%esp)
 85567e2:	e8 5f 24 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85567e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85567eb:	89 04 24             	mov    %eax,(%esp)
 85567ee:	e8 63 24 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85567f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85567f6:	89 04 24             	mov    %eax,(%esp)
 85567f9:	e8 50 24 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85567fe:	89 04 24             	mov    %eax,(%esp)
 8556801:	e8 20 23 00 00       	call   8558b26 <_ZN12CStreamGuard11GetInBufferI20SIG_MAILBOX_DEL_MAILEEPT_v>
 8556806:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8556809:	8b 45 0c             	mov    0xc(%ebp),%eax
 855680c:	8b 10                	mov    (%eax),%edx
 855680e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556811:	89 10                	mov    %edx,(%eax)
 8556813:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 855681a:	eb 18                	jmp    8556834 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb+0xc2>
 855681c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 855681f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556822:	c1 e0 02             	shl    $0x2,%eax
 8556825:	03 45 0c             	add    0xc(%ebp),%eax
 8556828:	8b 08                	mov    (%eax),%ecx
 855682a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855682d:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 8556830:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8556834:	8b 45 0c             	mov    0xc(%ebp),%eax
 8556837:	8b 00                	mov    (%eax),%eax
 8556839:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 855683c:	0f 93 c0             	setae  %al
 855683f:	84 c0                	test   %al,%al
 8556841:	75 d9                	jne    855681c <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb+0xaa>
 8556843:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8556847:	74 07                	je     8556850 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb+0xde>
 8556849:	b8 02 00 00 00       	mov    $0x2,%eax
 855684e:	eb 05                	jmp    8556855 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb+0xe3>
 8556850:	b8 01 00 00 00       	mov    $0x1,%eax
 8556855:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8556858:	89 42 54             	mov    %eax,0x54(%edx)
 855685b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8556860:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8556863:	89 54 24 08          	mov    %edx,0x8(%esp)
 8556867:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 855686e:	00 
 855686f:	89 04 24             	mov    %eax,(%esp)
 8556872:	e8 67 a7 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8556877:	eb 1b                	jmp    8556894 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb+0x122>
 8556879:	89 d3                	mov    %edx,%ebx
 855687b:	89 c6                	mov    %eax,%esi
 855687d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556880:	89 04 24             	mov    %eax,(%esp)
 8556883:	e8 4a 60 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556888:	89 f0                	mov    %esi,%eax
 855688a:	89 da                	mov    %ebx,%edx
 855688c:	89 04 24             	mov    %eax,(%esp)
 855688f:	e8 bc ce 58 00       	call   8ae3750 <_Unwind_Resume>
 8556894:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556897:	89 04 24             	mov    %eax,(%esp)
 855689a:	e8 33 60 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855689f:	83 c4 30             	add    $0x30,%esp
 85568a2:	5b                   	pop    %ebx
 85568a3:	5e                   	pop    %esi
 85568a4:	5d                   	pop    %ebp
 85568a5:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBRemoveMail @ 0x8556772

/* WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool) */

void WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser *param_1,uint *param_2,bool param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  SIG_MAILBOX_DEL_MAIL *local_14;
  uint local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x8ce);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 085567ca to 08556876 has its CatchHandler @ 08556879 */
  CStreamGuard::operator<<(pCVar2,0x81);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_DEL_MAIL>(pCVar2);
  *(uint *)local_14 = *param_2;
  for (local_10 = 1; local_10 <= *param_2; local_10 = local_10 + 1) {
    *(uint *)(local_14 + local_10 * 4) = param_2[local_10];
  }
  if (param_3) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(local_14 + 0x54) = uVar4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}

```

---

## ReqDBSendNewAvatarMail

```asm
// === 085561b0 WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail  [0x085561b0-0x8556421] ===
 85561b0:	55                   	push   %ebp
 85561b1:	89 e5                	mov    %esp,%ebp
 85561b3:	56                   	push   %esi
 85561b4:	53                   	push   %ebx
 85561b5:	83 ec 70             	sub    $0x70,%esp
 85561b8:	8b 55 18             	mov    0x18(%ebp),%edx
 85561bb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85561be:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 85561c1:	88 45 c0             	mov    %al,-0x40(%ebp)
 85561c4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85561c9:	c7 44 24 08 dd 07 00 	movl   $0x7dd,0x8(%esp)
 85561d0:	00 
 85561d1:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 85561d8:	08 
 85561d9:	89 04 24             	mov    %eax,(%esp)
 85561dc:	e8 a5 98 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85561e1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85561e8:	00 
 85561e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85561ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85561f0:	89 04 24             	mov    %eax,(%esp)
 85561f3:	e8 2e 2a b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85561f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85561fb:	89 04 24             	mov    %eax,(%esp)
 85561fe:	e8 43 2a b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556203:	c7 44 24 04 c5 00 00 	movl   $0xc5,0x4(%esp)
 855620a:	00 
 855620b:	89 04 24             	mov    %eax,(%esp)
 855620e:	e8 43 2a b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556213:	8b 45 08             	mov    0x8(%ebp),%eax
 8556216:	89 04 24             	mov    %eax,(%esp)
 8556219:	e8 78 2a b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 855621e:	89 c3                	mov    %eax,%ebx
 8556220:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556223:	89 04 24             	mov    %eax,(%esp)
 8556226:	e8 1b 2a b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855622b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 855622f:	89 04 24             	mov    %eax,(%esp)
 8556232:	e8 1f 2a b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556237:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855623a:	89 04 24             	mov    %eax,(%esp)
 855623d:	e8 0c 2a b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8556242:	89 04 24             	mov    %eax,(%esp)
 8556245:	e8 c6 28 00 00       	call   8558b10 <_ZN12CStreamGuard11GetInBufferI37SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORKEEPT_v>
 855624a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855624d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556250:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8556256:	8b 45 08             	mov    0x8(%ebp),%eax
 8556259:	89 04 24             	mov    %eax,(%esp)
 855625c:	e8 c7 ad ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8556261:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8556264:	83 c2 04             	add    $0x4,%edx
 8556267:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 855626e:	00 
 855626f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556273:	89 14 24             	mov    %edx,(%esp)
 8556276:	e8 55 76 b2 ff       	call   807d8d0 <strncpy@plt>
 855627b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855627e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8556281:	89 50 24             	mov    %edx,0x24(%eax)
 8556284:	8b 45 08             	mov    0x8(%ebp),%eax
 8556287:	89 04 24             	mov    %eax,(%esp)
 855628a:	e8 bf 59 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 855628f:	89 c2                	mov    %eax,%edx
 8556291:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556294:	89 50 28             	mov    %edx,0x28(%eax)
 8556297:	0f be 55 c4          	movsbl -0x3c(%ebp),%edx
 855629b:	8b 45 10             	mov    0x10(%ebp),%eax
 855629e:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85562a1:	8d 59 2c             	lea    0x2c(%ecx),%ebx
 85562a4:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 85562ab:	00 
 85562ac:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 85562b3:	00 
 85562b4:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85562b7:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85562bb:	89 54 24 18          	mov    %edx,0x18(%esp)
 85562bf:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85562c6:	00 
 85562c7:	8b 55 14             	mov    0x14(%ebp),%edx
 85562ca:	89 54 24 10          	mov    %edx,0x10(%esp)
 85562ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85562d5:	00 
 85562d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85562da:	8b 45 0c             	mov    0xc(%ebp),%eax
 85562dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85562e1:	89 1c 24             	mov    %ebx,(%esp)
 85562e4:	e8 df 70 fb ff       	call   850d3c8 <_ZN17SIG_AVATAR_INSERT3setEijiibcPKcim>
 85562e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85562ec:	66 c7 80 a0 00 00 00 	movw   $0x0,0xa0(%eax)
 85562f3:	00 00 
 85562f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85562f8:	05 a2 00 00 00       	add    $0xa2,%eax
 85562fd:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8556304:	00 
 8556305:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855630c:	00 
 855630d:	89 04 24             	mov    %eax,(%esp)
 8556310:	e8 ab 79 b2 ff       	call   807dcc0 <memset@plt>
 8556315:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 8556319:	74 3e                	je     8556359 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x1a9>
 855631b:	83 7d 28 00          	cmpl   $0x0,0x28(%ebp)
 855631f:	74 38                	je     8556359 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x1a9>
 8556321:	8b 45 28             	mov    0x28(%ebp),%eax
 8556324:	89 c2                	mov    %eax,%edx
 8556326:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556329:	66 89 90 a0 00 00 00 	mov    %dx,0xa0(%eax)
 8556330:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556333:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 855633a:	0f b7 c0             	movzwl %ax,%eax
 855633d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8556340:	81 c2 a2 00 00 00    	add    $0xa2,%edx
 8556346:	89 44 24 08          	mov    %eax,0x8(%esp)
 855634a:	8b 45 24             	mov    0x24(%ebp),%eax
 855634d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556351:	89 14 24             	mov    %edx,(%esp)
 8556354:	e8 77 75 b2 ff       	call   807d8d0 <strncpy@plt>
 8556359:	8d 45 ca             	lea    -0x36(%ebp),%eax
 855635c:	89 04 24             	mov    %eax,(%esp)
 855635f:	e8 84 a3 bf ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 8556364:	e8 32 5e b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8556369:	8b 55 10             	mov    0x10(%ebp),%edx
 855636c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556370:	89 04 24             	mov    %eax,(%esp)
 8556373:	e8 ba 96 e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8556378:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855637b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 855637f:	74 1d                	je     855639e <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x1ee>
 8556381:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556384:	8b 00                	mov    (%eax),%eax
 8556386:	83 c0 10             	add    $0x10,%eax
 8556389:	8b 10                	mov    (%eax),%edx
 855638b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855638e:	89 04 24             	mov    %eax,(%esp)
 8556391:	ff d2                	call   *%edx
 8556393:	84 c0                	test   %al,%al
 8556395:	74 07                	je     855639e <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x1ee>
 8556397:	b8 01 00 00 00       	mov    $0x1,%eax
 855639c:	eb 05                	jmp    85563a3 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x1f3>
 855639e:	b8 00 00 00 00       	mov    $0x0,%eax
 85563a3:	84 c0                	test   %al,%al
 85563a5:	74 1a                	je     85563c1 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x211>
 85563a7:	0f be 55 c0          	movsbl -0x40(%ebp),%edx
 85563ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85563ae:	8d 4d ca             	lea    -0x36(%ebp),%ecx
 85563b1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85563b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85563b9:	89 04 24             	mov    %eax,(%esp)
 85563bc:	e8 75 ab bf ff       	call   8150f36 <_ZNK10CEquipItem15getAvatarSocketEiR20stAvatarEmblemInfo_t>
 85563c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85563c4:	8d 50 2c             	lea    0x2c(%eax),%edx
 85563c7:	8d 45 ca             	lea    -0x36(%ebp),%eax
 85563ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85563ce:	89 14 24             	mov    %edx,(%esp)
 85563d1:	e8 76 70 fb ff       	call   850d44c <_ZN17SIG_AVATAR_INSERT14setJewelSocketERK20stAvatarEmblemInfo_t>
 85563d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85563db:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85563de:	89 54 24 08          	mov    %edx,0x8(%esp)
 85563e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85563e9:	00 
 85563ea:	89 04 24             	mov    %eax,(%esp)
 85563ed:	e8 ec ab 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85563f2:	eb 1b                	jmp    855640f <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i+0x25f>
 85563f4:	89 d3                	mov    %edx,%ebx
 85563f6:	89 c6                	mov    %eax,%esi
 85563f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85563fb:	89 04 24             	mov    %eax,(%esp)
 85563fe:	e8 cf 64 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556403:	89 f0                	mov    %esi,%eax
 8556405:	89 da                	mov    %ebx,%edx
 8556407:	89 04 24             	mov    %eax,(%esp)
 855640a:	e8 41 d3 58 00       	call   8ae3750 <_Unwind_Resume>
 855640f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556412:	89 04 24             	mov    %eax,(%esp)
 8556415:	e8 b8 64 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855641a:	83 c4 70             	add    $0x70,%esp
 855641d:	5b                   	pop    %ebx
 855641e:	5e                   	pop    %esi
 855641f:	5d                   	pop    %ebp
 8556420:	c3                   	ret
 8556421:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail @ 0x85561b0

/* WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*,
   char const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail
               (CUser *param_1,int param_2,int param_3,int param_4,char param_5,char param_6,
               char *param_7,char *param_8,int param_9)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  char *__src;
  undefined4 uVar6;
  CDataManager *this;
  stAvatarEmblemInfo_t local_3a [30];
  CStreamGuard local_1c [8];
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_14;
  CEquipItem *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x7dd);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0855620e to 085563f1 has its CatchHandler @ 085563f4 */
  CStreamGuard::operator<<(pCVar4,0xc5);
  iVar5 = CUser::GetUID(param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(pCVar4);
  *(undefined4 *)local_14 = 0;
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_14 + 4),__src,0x1d);
  *(int *)(local_14 + 0x24) = param_2;
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_14 + 0x28) = uVar6;
  SIG_AVATAR_INSERT::set
            ((SIG_AVATAR_INSERT *)(local_14 + 0x2c),param_2,param_3,0,param_4,true,param_5,param_7,2
             ,0);
  *(undefined2 *)(local_14 + 0xa0) = 0;
  memset(local_14 + 0xa2,0,0x100);
  if ((param_8 != (char *)0x0) && (param_9 != 0)) {
    *(short *)(local_14 + 0xa0) = (short)param_9;
    strncpy((char *)(local_14 + 0xa2),param_8,(uint)*(ushort *)(local_14 + 0xa0));
  }
  stAvatarEmblemInfo_t::init(local_3a);
  this = (CDataManager *)G_CDataManager();
  local_10 = (CEquipItem *)CDataManager::find_item(this,param_3);
  if (local_10 != (CEquipItem *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x10))(local_10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_085563a3;
    }
  }
  bVar1 = false;
LAB_085563a3:
  if (bVar1) {
    CEquipItem::getAvatarSocket(local_10,(int)param_6,local_3a);
  }
  SIG_AVATAR_INSERT::setJewelSocket((SIG_AVATAR_INSERT *)(local_14 + 0x2c),local_3a);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}

```

---

## ReqDBSendNewAvatarMailCashShop

```asm
// === 08556f16 WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop  [0x08556f16-0x855719f] ===
 8556f16:	55                   	push   %ebp
 8556f17:	89 e5                	mov    %esp,%ebp
 8556f19:	56                   	push   %esi
 8556f1a:	53                   	push   %ebx
 8556f1b:	83 ec 70             	sub    $0x70,%esp
 8556f1e:	8b 55 18             	mov    0x18(%ebp),%edx
 8556f21:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8556f24:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 8556f27:	88 45 c0             	mov    %al,-0x40(%ebp)
 8556f2a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8556f2f:	c7 44 24 08 76 09 00 	movl   $0x976,0x8(%esp)
 8556f36:	00 
 8556f37:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8556f3e:	08 
 8556f3f:	89 04 24             	mov    %eax,(%esp)
 8556f42:	e8 3f 8b d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8556f47:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8556f4e:	00 
 8556f4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556f53:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556f56:	89 04 24             	mov    %eax,(%esp)
 8556f59:	e8 c8 1c b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8556f5e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556f61:	89 04 24             	mov    %eax,(%esp)
 8556f64:	e8 dd 1c b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556f69:	c7 44 24 04 c5 00 00 	movl   $0xc5,0x4(%esp)
 8556f70:	00 
 8556f71:	89 04 24             	mov    %eax,(%esp)
 8556f74:	e8 dd 1c b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556f79:	8b 45 08             	mov    0x8(%ebp),%eax
 8556f7c:	89 04 24             	mov    %eax,(%esp)
 8556f7f:	e8 12 1d b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8556f84:	89 c3                	mov    %eax,%ebx
 8556f86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556f89:	89 04 24             	mov    %eax,(%esp)
 8556f8c:	e8 b5 1c b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556f91:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8556f95:	89 04 24             	mov    %eax,(%esp)
 8556f98:	e8 b9 1c b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556f9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556fa0:	89 04 24             	mov    %eax,(%esp)
 8556fa3:	e8 a6 1c b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8556fa8:	89 04 24             	mov    %eax,(%esp)
 8556fab:	e8 60 1b 00 00       	call   8558b10 <_ZN12CStreamGuard11GetInBufferI37SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORKEEPT_v>
 8556fb0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8556fb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556fb6:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8556fbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8556fbf:	89 04 24             	mov    %eax,(%esp)
 8556fc2:	e8 61 a0 ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8556fc7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8556fca:	83 c2 04             	add    $0x4,%edx
 8556fcd:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8556fd4:	00 
 8556fd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556fd9:	89 14 24             	mov    %edx,(%esp)
 8556fdc:	e8 ef 68 b2 ff       	call   807d8d0 <strncpy@plt>
 8556fe1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556fe4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8556fe7:	89 50 24             	mov    %edx,0x24(%eax)
 8556fea:	8b 45 08             	mov    0x8(%ebp),%eax
 8556fed:	89 04 24             	mov    %eax,(%esp)
 8556ff0:	e8 59 4c b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8556ff5:	89 c2                	mov    %eax,%edx
 8556ff7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556ffa:	89 50 28             	mov    %edx,0x28(%eax)
 8556ffd:	0f be 55 c4          	movsbl -0x3c(%ebp),%edx
 8557001:	8b 45 10             	mov    0x10(%ebp),%eax
 8557004:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8557007:	8d 59 2c             	lea    0x2c(%ecx),%ebx
 855700a:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8557011:	00 
 8557012:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 8557019:	00 
 855701a:	8b 4d 20             	mov    0x20(%ebp),%ecx
 855701d:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8557021:	89 54 24 18          	mov    %edx,0x18(%esp)
 8557025:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 855702c:	00 
 855702d:	8b 55 14             	mov    0x14(%ebp),%edx
 8557030:	89 54 24 10          	mov    %edx,0x10(%esp)
 8557034:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855703b:	00 
 855703c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8557040:	8b 45 0c             	mov    0xc(%ebp),%eax
 8557043:	89 44 24 04          	mov    %eax,0x4(%esp)
 8557047:	89 1c 24             	mov    %ebx,(%esp)
 855704a:	e8 79 63 fb ff       	call   850d3c8 <_ZN17SIG_AVATAR_INSERT3setEijiibcPKcim>
 855704f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8557052:	c6 80 a2 01 00 00 01 	movb   $0x1,0x1a2(%eax)
 8557059:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855705c:	66 c7 80 a0 00 00 00 	movw   $0x0,0xa0(%eax)
 8557063:	00 00 
 8557065:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8557068:	05 a2 00 00 00       	add    $0xa2,%eax
 855706d:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8557074:	00 
 8557075:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855707c:	00 
 855707d:	89 04 24             	mov    %eax,(%esp)
 8557080:	e8 3b 6c b2 ff       	call   807dcc0 <memset@plt>
 8557085:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 8557089:	74 3e                	je     85570c9 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x1b3>
 855708b:	83 7d 28 00          	cmpl   $0x0,0x28(%ebp)
 855708f:	74 38                	je     85570c9 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x1b3>
 8557091:	8b 45 28             	mov    0x28(%ebp),%eax
 8557094:	89 c2                	mov    %eax,%edx
 8557096:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8557099:	66 89 90 a0 00 00 00 	mov    %dx,0xa0(%eax)
 85570a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85570a3:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 85570aa:	0f b7 c0             	movzwl %ax,%eax
 85570ad:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85570b0:	81 c2 a2 00 00 00    	add    $0xa2,%edx
 85570b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85570ba:	8b 45 24             	mov    0x24(%ebp),%eax
 85570bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85570c1:	89 14 24             	mov    %edx,(%esp)
 85570c4:	e8 07 68 b2 ff       	call   807d8d0 <strncpy@plt>
 85570c9:	8d 45 ca             	lea    -0x36(%ebp),%eax
 85570cc:	89 04 24             	mov    %eax,(%esp)
 85570cf:	e8 14 96 bf ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 85570d4:	e8 c2 50 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85570d9:	8b 55 10             	mov    0x10(%ebp),%edx
 85570dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85570e0:	89 04 24             	mov    %eax,(%esp)
 85570e3:	e8 4a 89 e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85570e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85570eb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85570ef:	74 1d                	je     855710e <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x1f8>
 85570f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85570f4:	8b 00                	mov    (%eax),%eax
 85570f6:	83 c0 10             	add    $0x10,%eax
 85570f9:	8b 10                	mov    (%eax),%edx
 85570fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85570fe:	89 04 24             	mov    %eax,(%esp)
 8557101:	ff d2                	call   *%edx
 8557103:	84 c0                	test   %al,%al
 8557105:	74 07                	je     855710e <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x1f8>
 8557107:	b8 01 00 00 00       	mov    $0x1,%eax
 855710c:	eb 05                	jmp    8557113 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x1fd>
 855710e:	b8 00 00 00 00       	mov    $0x0,%eax
 8557113:	84 c0                	test   %al,%al
 8557115:	74 1a                	je     8557131 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x21b>
 8557117:	0f be 55 c0          	movsbl -0x40(%ebp),%edx
 855711b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855711e:	8d 4d ca             	lea    -0x36(%ebp),%ecx
 8557121:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8557125:	89 54 24 04          	mov    %edx,0x4(%esp)
 8557129:	89 04 24             	mov    %eax,(%esp)
 855712c:	e8 05 9e bf ff       	call   8150f36 <_ZNK10CEquipItem15getAvatarSocketEiR20stAvatarEmblemInfo_t>
 8557131:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8557134:	8d 50 2c             	lea    0x2c(%eax),%edx
 8557137:	8d 45 ca             	lea    -0x36(%ebp),%eax
 855713a:	89 44 24 04          	mov    %eax,0x4(%esp)
 855713e:	89 14 24             	mov    %edx,(%esp)
 8557141:	e8 06 63 fb ff       	call   850d44c <_ZN17SIG_AVATAR_INSERT14setJewelSocketERK20stAvatarEmblemInfo_t>
 8557146:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8557149:	83 c0 7b             	add    $0x7b,%eax
 855714c:	89 04 24             	mov    %eax,(%esp)
 855714f:	e8 ca d0 dd ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 8557154:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8557159:	8d 55 e8             	lea    -0x18(%ebp),%edx
 855715c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8557160:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8557167:	00 
 8557168:	89 04 24             	mov    %eax,(%esp)
 855716b:	e8 6e 9e 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8557170:	eb 1b                	jmp    855718d <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i+0x277>
 8557172:	89 d3                	mov    %edx,%ebx
 8557174:	89 c6                	mov    %eax,%esi
 8557176:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8557179:	89 04 24             	mov    %eax,(%esp)
 855717c:	e8 51 57 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8557181:	89 f0                	mov    %esi,%eax
 8557183:	89 da                	mov    %ebx,%edx
 8557185:	89 04 24             	mov    %eax,(%esp)
 8557188:	e8 c3 c5 58 00       	call   8ae3750 <_Unwind_Resume>
 855718d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8557190:	89 04 24             	mov    %eax,(%esp)
 8557193:	e8 3a 57 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8557198:	83 c4 70             	add    $0x70,%esp
 855719b:	5b                   	pop    %ebx
 855719c:	5e                   	pop    %esi
 855719d:	5d                   	pop    %ebp
 855719e:	c3                   	ret
 855719f:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop @ 0x8556f16

/* WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char
   const*, char const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
               (CUser *param_1,int param_2,int param_3,int param_4,char param_5,char param_6,
               char *param_7,char *param_8,int param_9)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  char *__src;
  undefined4 uVar6;
  CDataManager *this;
  stAvatarEmblemInfo_t local_3a [30];
  CStreamGuard local_1c [8];
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_14;
  CEquipItem *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x976);
  CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08556f74 to 0855716f has its CatchHandler @ 08557172 */
  CStreamGuard::operator<<(pCVar4,0xc5);
  iVar5 = CUser::GetUID(param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(pCVar4);
  *(undefined4 *)local_14 = 0;
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_14 + 4),__src,0x1d);
  *(int *)(local_14 + 0x24) = param_2;
  uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_14 + 0x28) = uVar6;
  SIG_AVATAR_INSERT::set
            ((SIG_AVATAR_INSERT *)(local_14 + 0x2c),param_2,param_3,0,param_4,true,param_5,param_7,2
             ,0);
  local_14[0x1a2] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
  *(undefined2 *)(local_14 + 0xa0) = 0;
  memset(local_14 + 0xa2,0,0x100);
  if ((param_8 != (char *)0x0) && (param_9 != 0)) {
    *(short *)(local_14 + 0xa0) = (short)param_9;
    strncpy((char *)(local_14 + 0xa2),param_8,(uint)*(ushort *)(local_14 + 0xa0));
  }
  stAvatarEmblemInfo_t::init(local_3a);
  this = (CDataManager *)G_CDataManager();
  local_10 = (CEquipItem *)CDataManager::find_item(this,param_3);
  if (local_10 != (CEquipItem *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x10))(local_10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08557113;
    }
  }
  bVar1 = false;
LAB_08557113:
  if (bVar1) {
    CEquipItem::getAvatarSocket(local_10,(int)param_6,local_3a);
  }
  SIG_AVATAR_INSERT::setJewelSocket((SIG_AVATAR_INSERT *)(local_14 + 0x2c),local_3a);
  stAvatarExpansionInfo_t::init((stAvatarExpansionInfo_t *)(local_14 + 0x7b));
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}

```

---

## ReqDBSendNewCreatureMail

```asm
// === 08556422 WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail  [0x08556422-0x85566ad] ===
 8556422:	55                   	push   %ebp
 8556423:	89 e5                	mov    %esp,%ebp
 8556425:	56                   	push   %esi
 8556426:	53                   	push   %ebx
 8556427:	83 ec 30             	sub    $0x30,%esp
 855642a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 855642f:	c7 44 24 08 3f 08 00 	movl   $0x83f,0x8(%esp)
 8556436:	00 
 8556437:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 855643e:	08 
 855643f:	89 04 24             	mov    %eax,(%esp)
 8556442:	e8 3f 96 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8556447:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 855644e:	00 
 855644f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556453:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556456:	89 04 24             	mov    %eax,(%esp)
 8556459:	e8 c8 27 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 855645e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556461:	89 04 24             	mov    %eax,(%esp)
 8556464:	e8 dd 27 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556469:	c7 44 24 04 c5 00 00 	movl   $0xc5,0x4(%esp)
 8556470:	00 
 8556471:	89 04 24             	mov    %eax,(%esp)
 8556474:	e8 dd 27 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556479:	8b 45 08             	mov    0x8(%ebp),%eax
 855647c:	89 04 24             	mov    %eax,(%esp)
 855647f:	e8 12 28 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8556484:	89 c3                	mov    %eax,%ebx
 8556486:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556489:	89 04 24             	mov    %eax,(%esp)
 855648c:	e8 b5 27 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556491:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8556495:	89 04 24             	mov    %eax,(%esp)
 8556498:	e8 b9 27 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855649d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85564a0:	89 04 24             	mov    %eax,(%esp)
 85564a3:	e8 a6 27 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85564a8:	89 04 24             	mov    %eax,(%esp)
 85564ab:	e8 60 26 00 00       	call   8558b10 <_ZN12CStreamGuard11GetInBufferI37SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORKEEPT_v>
 85564b0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85564b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85564b6:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 85564bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85564bf:	89 04 24             	mov    %eax,(%esp)
 85564c2:	e8 61 ab ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85564c7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85564ca:	83 c2 04             	add    $0x4,%edx
 85564cd:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 85564d4:	00 
 85564d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85564d9:	89 14 24             	mov    %edx,(%esp)
 85564dc:	e8 ef 73 b2 ff       	call   807d8d0 <strncpy@plt>
 85564e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85564e4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85564e7:	89 50 24             	mov    %edx,0x24(%eax)
 85564ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85564ed:	89 04 24             	mov    %eax,(%esp)
 85564f0:	e8 59 57 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85564f5:	89 c2                	mov    %eax,%edx
 85564f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85564fa:	89 50 28             	mov    %edx,0x28(%eax)
 85564fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8556500:	83 c0 2c             	add    $0x2c,%eax
 8556503:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 855650a:	00 
 855650b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8556512:	00 
 8556513:	89 04 24             	mov    %eax,(%esp)
 8556516:	e8 a5 77 b2 ff       	call   807dcc0 <memset@plt>
 855651b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855651e:	8d 50 30             	lea    0x30(%eax),%edx
 8556521:	8b 45 10             	mov    0x10(%ebp),%eax
 8556524:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556528:	89 14 24             	mov    %edx,(%esp)
 855652b:	e8 5e 8e de ff       	call   833f38e <_ZN21Inven_Item_Compatible7setCopyERK10Inven_Item>
 8556530:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8556533:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 855653a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855653d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8556540:	89 50 74             	mov    %edx,0x74(%eax)
 8556543:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8556546:	c7 40 70 64 00 00 00 	movl   $0x64,0x70(%eax)
 855654d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8556550:	c6 40 7d 20          	movb   $0x20,0x7d(%eax)
 8556554:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8556557:	c6 40 7f 01          	movb   $0x1,0x7f(%eax)
 855655b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855655e:	c7 80 94 00 00 00 00 	movl   $0x0,0x94(%eax)
 8556565:	00 00 00 
 8556568:	8b 45 10             	mov    0x10(%ebp),%eax
 855656b:	8b 40 02             	mov    0x2(%eax),%eax
 855656e:	89 c3                	mov    %eax,%ebx
 8556570:	e8 26 5c b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8556575:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8556579:	89 04 24             	mov    %eax,(%esp)
 855657c:	e8 b1 94 e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8556581:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8556584:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8556588:	0f 84 0e 01 00 00    	je     855669c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x27a>
 855658e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556591:	89 04 24             	mov    %eax,(%esp)
 8556594:	e8 61 ad b9 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8556599:	84 c0                	test   %al,%al
 855659b:	0f 85 fb 00 00 00    	jne    855669c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x27a>
 85565a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85565a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85565a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85565aa:	89 04 24             	mov    %eax,(%esp)
 85565ad:	e8 1a 89 de ff       	call   833eecc <_ZNK10CEquipItem12get_sub_typeEv>
 85565b2:	85 c0                	test   %eax,%eax
 85565b4:	0f 94 c0             	sete   %al
 85565b7:	84 c0                	test   %al,%al
 85565b9:	74 09                	je     85565c4 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x1a2>
 85565bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85565be:	c6 40 7c 01          	movb   $0x1,0x7c(%eax)
 85565c2:	eb 07                	jmp    85565cb <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x1a9>
 85565c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85565c7:	c6 40 7c 00          	movb   $0x0,0x7c(%eax)
 85565cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85565ce:	66 c7 80 a0 00 00 00 	movw   $0x0,0xa0(%eax)
 85565d5:	00 00 
 85565d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85565da:	05 a2 00 00 00       	add    $0xa2,%eax
 85565df:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 85565e6:	00 
 85565e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85565ee:	00 
 85565ef:	89 04 24             	mov    %eax,(%esp)
 85565f2:	e8 c9 76 b2 ff       	call   807dcc0 <memset@plt>
 85565f7:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85565fb:	74 3e                	je     855663b <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x219>
 85565fd:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8556601:	74 38                	je     855663b <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x219>
 8556603:	8b 45 18             	mov    0x18(%ebp),%eax
 8556606:	89 c2                	mov    %eax,%edx
 8556608:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855660b:	66 89 90 a0 00 00 00 	mov    %dx,0xa0(%eax)
 8556612:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8556615:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 855661c:	0f b7 c0             	movzwl %ax,%eax
 855661f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8556622:	81 c2 a2 00 00 00    	add    $0xa2,%edx
 8556628:	89 44 24 08          	mov    %eax,0x8(%esp)
 855662c:	8b 45 14             	mov    0x14(%ebp),%eax
 855662f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556633:	89 14 24             	mov    %edx,(%esp)
 8556636:	e8 95 72 b2 ff       	call   807d8d0 <strncpy@plt>
 855663b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855663e:	89 04 24             	mov    %eax,(%esp)
 8556641:	e8 1a a6 bb ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8556646:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8556649:	89 82 80 00 00 00    	mov    %eax,0x80(%edx)
 855664f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556652:	89 04 24             	mov    %eax,(%esp)
 8556655:	e8 ac ac b9 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 855665a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 855665d:	89 82 84 00 00 00    	mov    %eax,0x84(%edx)
 8556663:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8556668:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 855666b:	89 54 24 08          	mov    %edx,0x8(%esp)
 855666f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8556676:	00 
 8556677:	89 04 24             	mov    %eax,(%esp)
 855667a:	e8 5f a9 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 855667f:	eb 1b                	jmp    855669c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci+0x27a>
 8556681:	89 d3                	mov    %edx,%ebx
 8556683:	89 c6                	mov    %eax,%esi
 8556685:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556688:	89 04 24             	mov    %eax,(%esp)
 855668b:	e8 42 62 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556690:	89 f0                	mov    %esi,%eax
 8556692:	89 da                	mov    %ebx,%edx
 8556694:	89 04 24             	mov    %eax,(%esp)
 8556697:	e8 b4 d0 58 00       	call   8ae3750 <_Unwind_Resume>
 855669c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 855669f:	89 04 24             	mov    %eax,(%esp)
 85566a2:	e8 2b 62 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85566a7:	83 c4 30             	add    $0x30,%esp
 85566aa:	5b                   	pop    %ebx
 85566ab:	5e                   	pop    %esi
 85566ac:	5d                   	pop    %ebp
 85566ad:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail @ 0x8556422

/* WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*,
   int) */

void WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail
               (CUser *param_1,int param_2,Inven_Item *param_3,char *param_4,int param_5)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  char *__src;
  undefined4 uVar5;
  CDataManager *this;
  CStreamGuard local_20 [8];
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_18;
  CEquipItem *local_14;
  CEquipItem *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x83f);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08556474 to 0855667e has its CatchHandler @ 08556681 */
  CStreamGuard::operator<<(pCVar3,0xc5);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(pCVar3);
  *(undefined4 *)local_18 = 1;
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_18 + 4),__src,0x1d);
  *(int *)(local_18 + 0x24) = param_2;
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_18 + 0x28) = uVar5;
  memset(local_18 + 0x2c,0,0x74);
  Inven_Item_Compatible::setCopy((Inven_Item_Compatible *)(local_18 + 0x30),param_3);
  *(undefined4 *)(local_18 + 0x58) = 0;
  *(int *)(local_18 + 0x74) = param_2;
  *(undefined4 *)(local_18 + 0x70) = 100;
  local_18[0x7d] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x20;
  local_18[0x7f] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
  *(undefined4 *)(local_18 + 0x94) = 0;
  iVar4 = *(int *)(param_3 + 2);
  this = (CDataManager *)G_CDataManager();
  local_14 = (CEquipItem *)CDataManager::find_item(this,iVar4);
  if (local_14 != (CEquipItem *)0x0) {
    cVar1 = CItem::is_stackable((CItem *)local_14);
    if (cVar1 == '\0') {
      local_10 = local_14;
      iVar4 = CEquipItem::get_sub_type(local_14);
      if (iVar4 == 0) {
        local_18[0x7c] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
      }
      else {
        local_18[0x7c] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x0;
      }
      *(undefined2 *)(local_18 + 0xa0) = 0;
      memset(local_18 + 0xa2,0,0x100);
      if ((param_4 != (char *)0x0) && (param_5 != 0)) {
        *(short *)(local_18 + 0xa0) = (short)param_5;
        strncpy((char *)(local_18 + 0xa2),param_4,(uint)*(ushort *)(local_18 + 0xa0));
      }
      uVar5 = CItem::getUsablePeriod((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x80) = uVar5;
      uVar5 = CItem::getExpirationDate((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x84) = uVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    }
  }
  CStreamGuard::~CStreamGuard(local_20);
  return;
}

```

---

## ReqDBSendNewCreatureMailCashShop

```asm
// === 085571a0 WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop  [0x085571a0-0x8557435] ===
 85571a0:	55                   	push   %ebp
 85571a1:	89 e5                	mov    %esp,%ebp
 85571a3:	56                   	push   %esi
 85571a4:	53                   	push   %ebx
 85571a5:	83 ec 30             	sub    $0x30,%esp
 85571a8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85571ad:	c7 44 24 08 9c 09 00 	movl   $0x99c,0x8(%esp)
 85571b4:	00 
 85571b5:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 85571bc:	08 
 85571bd:	89 04 24             	mov    %eax,(%esp)
 85571c0:	e8 c1 88 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85571c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85571cc:	00 
 85571cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85571d1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85571d4:	89 04 24             	mov    %eax,(%esp)
 85571d7:	e8 4a 1a b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85571dc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85571df:	89 04 24             	mov    %eax,(%esp)
 85571e2:	e8 5f 1a b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85571e7:	c7 44 24 04 c5 00 00 	movl   $0xc5,0x4(%esp)
 85571ee:	00 
 85571ef:	89 04 24             	mov    %eax,(%esp)
 85571f2:	e8 5f 1a b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85571f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85571fa:	89 04 24             	mov    %eax,(%esp)
 85571fd:	e8 94 1a b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8557202:	89 c3                	mov    %eax,%ebx
 8557204:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8557207:	89 04 24             	mov    %eax,(%esp)
 855720a:	e8 37 1a b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855720f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8557213:	89 04 24             	mov    %eax,(%esp)
 8557216:	e8 3b 1a b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855721b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 855721e:	89 04 24             	mov    %eax,(%esp)
 8557221:	e8 28 1a b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8557226:	89 04 24             	mov    %eax,(%esp)
 8557229:	e8 e2 18 00 00       	call   8558b10 <_ZN12CStreamGuard11GetInBufferI37SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORKEEPT_v>
 855722e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8557231:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8557234:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 855723a:	8b 45 08             	mov    0x8(%ebp),%eax
 855723d:	89 04 24             	mov    %eax,(%esp)
 8557240:	e8 e3 9d ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8557245:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8557248:	83 c2 04             	add    $0x4,%edx
 855724b:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8557252:	00 
 8557253:	89 44 24 04          	mov    %eax,0x4(%esp)
 8557257:	89 14 24             	mov    %edx,(%esp)
 855725a:	e8 71 66 b2 ff       	call   807d8d0 <strncpy@plt>
 855725f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8557262:	8b 55 0c             	mov    0xc(%ebp),%edx
 8557265:	89 50 24             	mov    %edx,0x24(%eax)
 8557268:	8b 45 08             	mov    0x8(%ebp),%eax
 855726b:	89 04 24             	mov    %eax,(%esp)
 855726e:	e8 db 49 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8557273:	89 c2                	mov    %eax,%edx
 8557275:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8557278:	89 50 28             	mov    %edx,0x28(%eax)
 855727b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855727e:	83 c0 2c             	add    $0x2c,%eax
 8557281:	c7 44 24 08 74 00 00 	movl   $0x74,0x8(%esp)
 8557288:	00 
 8557289:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8557290:	00 
 8557291:	89 04 24             	mov    %eax,(%esp)
 8557294:	e8 27 6a b2 ff       	call   807dcc0 <memset@plt>
 8557299:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855729c:	8d 50 30             	lea    0x30(%eax),%edx
 855729f:	8b 45 10             	mov    0x10(%ebp),%eax
 85572a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85572a6:	89 14 24             	mov    %edx,(%esp)
 85572a9:	e8 e0 80 de ff       	call   833f38e <_ZN21Inven_Item_Compatible7setCopyERK10Inven_Item>
 85572ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572b1:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 85572b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572bb:	8b 55 0c             	mov    0xc(%ebp),%edx
 85572be:	89 50 74             	mov    %edx,0x74(%eax)
 85572c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572c4:	c7 40 70 64 00 00 00 	movl   $0x64,0x70(%eax)
 85572cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572ce:	c6 40 7d 20          	movb   $0x20,0x7d(%eax)
 85572d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572d5:	c6 40 7f 01          	movb   $0x1,0x7f(%eax)
 85572d9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572dc:	c7 80 94 00 00 00 00 	movl   $0x0,0x94(%eax)
 85572e3:	00 00 00 
 85572e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85572e9:	c6 80 a2 01 00 00 01 	movb   $0x1,0x1a2(%eax)
 85572f0:	8b 45 10             	mov    0x10(%ebp),%eax
 85572f3:	8b 40 02             	mov    0x2(%eax),%eax
 85572f6:	89 c3                	mov    %eax,%ebx
 85572f8:	e8 9e 4e b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85572fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8557301:	89 04 24             	mov    %eax,(%esp)
 8557304:	e8 29 87 e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8557309:	89 45 f0             	mov    %eax,-0x10(%ebp)
 855730c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8557310:	0f 84 0e 01 00 00    	je     8557424 <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x284>
 8557316:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8557319:	89 04 24             	mov    %eax,(%esp)
 855731c:	e8 d9 9f b9 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8557321:	84 c0                	test   %al,%al
 8557323:	0f 85 fb 00 00 00    	jne    8557424 <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x284>
 8557329:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855732c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855732f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8557332:	89 04 24             	mov    %eax,(%esp)
 8557335:	e8 92 7b de ff       	call   833eecc <_ZNK10CEquipItem12get_sub_typeEv>
 855733a:	85 c0                	test   %eax,%eax
 855733c:	0f 94 c0             	sete   %al
 855733f:	84 c0                	test   %al,%al
 8557341:	74 09                	je     855734c <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x1ac>
 8557343:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8557346:	c6 40 7c 01          	movb   $0x1,0x7c(%eax)
 855734a:	eb 07                	jmp    8557353 <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x1b3>
 855734c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855734f:	c6 40 7c 00          	movb   $0x0,0x7c(%eax)
 8557353:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8557356:	89 04 24             	mov    %eax,(%esp)
 8557359:	e8 02 99 bb ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 855735e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8557361:	89 82 80 00 00 00    	mov    %eax,0x80(%edx)
 8557367:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855736a:	89 04 24             	mov    %eax,(%esp)
 855736d:	e8 94 9f b9 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 8557372:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8557375:	89 82 84 00 00 00    	mov    %eax,0x84(%edx)
 855737b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855737e:	66 c7 80 a0 00 00 00 	movw   $0x0,0xa0(%eax)
 8557385:	00 00 
 8557387:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855738a:	05 a2 00 00 00       	add    $0xa2,%eax
 855738f:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8557396:	00 
 8557397:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855739e:	00 
 855739f:	89 04 24             	mov    %eax,(%esp)
 85573a2:	e8 19 69 b2 ff       	call   807dcc0 <memset@plt>
 85573a7:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85573ab:	74 3e                	je     85573eb <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x24b>
 85573ad:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 85573b1:	74 38                	je     85573eb <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x24b>
 85573b3:	8b 45 18             	mov    0x18(%ebp),%eax
 85573b6:	89 c2                	mov    %eax,%edx
 85573b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85573bb:	66 89 90 a0 00 00 00 	mov    %dx,0xa0(%eax)
 85573c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85573c5:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 85573cc:	0f b7 c0             	movzwl %ax,%eax
 85573cf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85573d2:	81 c2 a2 00 00 00    	add    $0xa2,%edx
 85573d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85573dc:	8b 45 14             	mov    0x14(%ebp),%eax
 85573df:	89 44 24 04          	mov    %eax,0x4(%esp)
 85573e3:	89 14 24             	mov    %edx,(%esp)
 85573e6:	e8 e5 64 b2 ff       	call   807d8d0 <strncpy@plt>
 85573eb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85573f0:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85573f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85573f7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85573fe:	00 
 85573ff:	89 04 24             	mov    %eax,(%esp)
 8557402:	e8 d7 9b 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8557407:	eb 1b                	jmp    8557424 <_ZN8WongWork14CMailBoxHelper32ReqDBSendNewCreatureMailCashShopEP5CUseriRK10Inven_ItemPKci+0x284>
 8557409:	89 d3                	mov    %edx,%ebx
 855740b:	89 c6                	mov    %eax,%esi
 855740d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8557410:	89 04 24             	mov    %eax,(%esp)
 8557413:	e8 ba 54 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8557418:	89 f0                	mov    %esi,%eax
 855741a:	89 da                	mov    %ebx,%edx
 855741c:	89 04 24             	mov    %eax,(%esp)
 855741f:	e8 2c c3 58 00       	call   8ae3750 <_Unwind_Resume>
 8557424:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8557427:	89 04 24             	mov    %eax,(%esp)
 855742a:	e8 a3 54 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855742f:	83 c4 30             	add    $0x30,%esp
 8557432:	5b                   	pop    %ebx
 8557433:	5e                   	pop    %esi
 8557434:	5d                   	pop    %ebp
 8557435:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop @ 0x85571a0

/* WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop(CUser*, int, Inven_Item const&, char
   const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewCreatureMailCashShop
               (CUser *param_1,int param_2,Inven_Item *param_3,char *param_4,int param_5)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  char *__src;
  undefined4 uVar5;
  CDataManager *this;
  CStreamGuard local_20 [8];
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_18;
  CEquipItem *local_14;
  CEquipItem *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x99c);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085571f2 to 08557406 has its CatchHandler @ 08557409 */
  CStreamGuard::operator<<(pCVar3,0xc5);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(pCVar3);
  *(undefined4 *)local_18 = 1;
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_18 + 4),__src,0x1d);
  *(int *)(local_18 + 0x24) = param_2;
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_18 + 0x28) = uVar5;
  memset(local_18 + 0x2c,0,0x74);
  Inven_Item_Compatible::setCopy((Inven_Item_Compatible *)(local_18 + 0x30),param_3);
  *(undefined4 *)(local_18 + 0x58) = 0;
  *(int *)(local_18 + 0x74) = param_2;
  *(undefined4 *)(local_18 + 0x70) = 100;
  local_18[0x7d] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x20;
  local_18[0x7f] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
  *(undefined4 *)(local_18 + 0x94) = 0;
  local_18[0x1a2] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
  iVar4 = *(int *)(param_3 + 2);
  this = (CDataManager *)G_CDataManager();
  local_14 = (CEquipItem *)CDataManager::find_item(this,iVar4);
  if (local_14 != (CEquipItem *)0x0) {
    cVar1 = CItem::is_stackable((CItem *)local_14);
    if (cVar1 == '\0') {
      local_10 = local_14;
      iVar4 = CEquipItem::get_sub_type(local_14);
      if (iVar4 == 0) {
        local_18[0x7c] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x1;
      }
      else {
        local_18[0x7c] = (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK)0x0;
      }
      uVar5 = CItem::getUsablePeriod((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x80) = uVar5;
      uVar5 = CItem::getExpirationDate((CItem *)local_10);
      *(undefined4 *)(local_18 + 0x84) = uVar5;
      *(undefined2 *)(local_18 + 0xa0) = 0;
      memset(local_18 + 0xa2,0,0x100);
      if ((param_4 != (char *)0x0) && (param_5 != 0)) {
        *(short *)(local_18 + 0xa0) = (short)param_5;
        strncpy((char *)(local_18 + 0xa2),param_4,(uint)*(ushort *)(local_18 + 0xa0));
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    }
  }
  CStreamGuard::~CStreamGuard(local_20);
  return;
}

```

---

## ReqDBSendNewMail

```asm
// === 08555ac8 WongWork::CMailBoxHelper::ReqDBSendNewMail  [0x08555ac8-0x8555b13] ===
 8555ac8:	55                   	push   %ebp
 8555ac9:	89 e5                	mov    %esp,%ebp
 8555acb:	83 ec 38             	sub    $0x38,%esp
 8555ace:	8b 45 18             	mov    0x18(%ebp),%eax
 8555ad1:	88 45 f4             	mov    %al,-0xc(%ebp)
 8555ad4:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 8555ad8:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8555adf:	00 
 8555ae0:	8b 55 20             	mov    0x20(%ebp),%edx
 8555ae3:	89 54 24 18          	mov    %edx,0x18(%esp)
 8555ae7:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8555aea:	89 54 24 14          	mov    %edx,0x14(%esp)
 8555aee:	89 44 24 10          	mov    %eax,0x10(%esp)
 8555af2:	8b 45 14             	mov    0x14(%ebp),%eax
 8555af5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8555af9:	8b 45 10             	mov    0x10(%ebp),%eax
 8555afc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8555b00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555b03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555b07:	8b 45 08             	mov    0x8(%ebp),%eax
 8555b0a:	89 04 24             	mov    %eax,(%esp)
 8555b0d:	e8 04 fe ff ff       	call   8555916 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii>
 8555b12:	c9                   	leave
 8555b13:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewMail @ 0x8555ac8

/* WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int,
   bool, char const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewMail
               (CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4,bool param_5,
               char *param_6,int param_7)

{
  _DoSendNewMail(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}

```

---

## ReqDBSendNewMailCashShop

```asm
// === 08556d5c WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop  [0x08556d5c-0x8556f15] ===
 8556d5c:	55                   	push   %ebp
 8556d5d:	89 e5                	mov    %esp,%ebp
 8556d5f:	56                   	push   %esi
 8556d60:	53                   	push   %ebx
 8556d61:	83 ec 50             	sub    $0x50,%esp
 8556d64:	8b 45 18             	mov    0x18(%ebp),%eax
 8556d67:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8556d6a:	e8 38 36 b8 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8556d6f:	89 04 24             	mov    %eax,(%esp)
 8556d72:	e8 a9 fd bb ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8556d77:	83 f8 07             	cmp    $0x7,%eax
 8556d7a:	0f 94 c0             	sete   %al
 8556d7d:	84 c0                	test   %al,%al
 8556d7f:	74 0a                	je     8556d8b <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci+0x2f>
 8556d81:	bb 00 00 00 00       	mov    $0x0,%ebx
 8556d86:	e9 81 01 00 00       	jmp    8556f0c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci+0x1b0>
 8556d8b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8556d90:	c7 44 24 08 5d 09 00 	movl   $0x95d,0x8(%esp)
 8556d97:	00 
 8556d98:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8556d9f:	08 
 8556da0:	89 04 24             	mov    %eax,(%esp)
 8556da3:	e8 de 8c d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8556da8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8556daf:	00 
 8556db0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556db4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556db7:	89 04 24             	mov    %eax,(%esp)
 8556dba:	e8 67 1e b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8556dbf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556dc2:	89 04 24             	mov    %eax,(%esp)
 8556dc5:	e8 7c 1e b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556dca:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 8556dd1:	00 
 8556dd2:	89 04 24             	mov    %eax,(%esp)
 8556dd5:	e8 7c 1e b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556dda:	8b 45 08             	mov    0x8(%ebp),%eax
 8556ddd:	89 04 24             	mov    %eax,(%esp)
 8556de0:	e8 b1 1e b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8556de5:	89 c3                	mov    %eax,%ebx
 8556de7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556dea:	89 04 24             	mov    %eax,(%esp)
 8556ded:	e8 54 1e b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556df2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8556df6:	89 04 24             	mov    %eax,(%esp)
 8556df9:	e8 58 1e b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556dfe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556e01:	89 04 24             	mov    %eax,(%esp)
 8556e04:	e8 45 1e b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8556e09:	89 04 24             	mov    %eax,(%esp)
 8556e0c:	e8 7d 11 c4 ff       	call   8197f8e <_ZN12CStreamGuard11GetInBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 8556e11:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8556e14:	8b 45 08             	mov    0x8(%ebp),%eax
 8556e17:	89 04 24             	mov    %eax,(%esp)
 8556e1a:	e8 2f 4e b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8556e1f:	89 c3                	mov    %eax,%ebx
 8556e21:	8b 45 08             	mov    0x8(%ebp),%eax
 8556e24:	89 04 24             	mov    %eax,(%esp)
 8556e27:	e8 fc a1 ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8556e2c:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8556e33:	00 
 8556e34:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8556e3b:	00 
 8556e3c:	8b 55 20             	mov    0x20(%ebp),%edx
 8556e3f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8556e43:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8556e46:	89 54 24 18          	mov    %edx,0x18(%esp)
 8556e4a:	8b 55 14             	mov    0x14(%ebp),%edx
 8556e4d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8556e51:	8b 55 10             	mov    0x10(%ebp),%edx
 8556e54:	89 54 24 10          	mov    %edx,0x10(%esp)
 8556e58:	8b 55 0c             	mov    0xc(%ebp),%edx
 8556e5b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8556e5f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8556e63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556e67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556e6a:	89 04 24             	mov    %eax,(%esp)
 8556e6d:	e8 e4 e8 ff ff       	call   8555756 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji>
 8556e72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556e75:	c7 80 5f 01 00 00 00 	movl   $0x0,0x15f(%eax)
 8556e7c:	00 00 00 
 8556e7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556e82:	c6 40 57 01          	movb   $0x1,0x57(%eax)
 8556e86:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8556e8a:	83 f0 01             	xor    $0x1,%eax
 8556e8d:	84 c0                	test   %al,%al
 8556e8f:	74 32                	je     8556ec3 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci+0x167>
 8556e91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556e94:	89 04 24             	mov    %eax,(%esp)
 8556e97:	e8 5e a1 ba ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 8556e9c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8556e9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8556ea2:	89 04 24             	mov    %eax,(%esp)
 8556ea5:	e8 62 93 cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 8556eaa:	8d 50 58             	lea    0x58(%eax),%edx
 8556ead:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8556eb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556eb4:	89 14 24             	mov    %edx,(%esp)
 8556eb7:	e8 0e 1c 00 00       	call   8558aca <_ZNSt4listIP6StreamSaIS1_EE9push_backEOS1_>
 8556ebc:	bb 00 00 00 00       	mov    $0x0,%ebx
 8556ec1:	eb 3e                	jmp    8556f01 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci+0x1a5>
 8556ec3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8556ec8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8556ecb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8556ecf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8556ed6:	00 
 8556ed7:	89 04 24             	mov    %eax,(%esp)
 8556eda:	e8 ff a0 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8556edf:	bb 00 00 00 00       	mov    $0x0,%ebx
 8556ee4:	eb 1b                	jmp    8556f01 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci+0x1a5>
 8556ee6:	89 d3                	mov    %edx,%ebx
 8556ee8:	89 c6                	mov    %eax,%esi
 8556eea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556eed:	89 04 24             	mov    %eax,(%esp)
 8556ef0:	e8 dd 59 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556ef5:	89 f0                	mov    %esi,%eax
 8556ef7:	89 da                	mov    %ebx,%edx
 8556ef9:	89 04 24             	mov    %eax,(%esp)
 8556efc:	e8 4f c8 58 00       	call   8ae3750 <_Unwind_Resume>
 8556f01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556f04:	89 04 24             	mov    %eax,(%esp)
 8556f07:	e8 c6 59 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556f0c:	89 d8                	mov    %ebx,%eax
 8556f0e:	83 c4 50             	add    $0x50,%esp
 8556f11:	5b                   	pop    %ebx
 8556f12:	5e                   	pop    %esi
 8556f13:	5d                   	pop    %ebp
 8556f14:	c3                   	ret
 8556f15:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop @ 0x8556d5c

/* WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int,
   unsigned int, bool, char const*, int) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop
          (CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4,bool param_5,char *param_6,
          int param_7)

{
  GameWorld *this;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  char *pcVar4;
  CStreamGuard local_1c [8];
  Stream *local_14;
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if (iVar1 != 7) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x95d);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08556dd5 to 08556ede has its CatchHandler @ 08556ee6 */
    CStreamGuard::operator<<(pCVar3,0x80);
    iVar1 = CUser::GetUID(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar3);
    iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    _makeSendMailData(local_10,pcVar4,iVar1,param_2,param_3,param_4,param_6,param_7,0,0);
    *(undefined4 *)(local_10 + 0x15f) = 0;
    local_10[0x57] = (SIG_MAILBOX_SEND_NEW_MAIL)0x1;
    if (param_5) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    }
    else {
      local_14 = (Stream *)CStreamGuard::Get(local_1c);
      iVar1 = CUser::GetMailBox(param_1);
      std::list<Stream*,std::allocator<Stream*>>::push_back
                ((list<Stream*,std::allocator<Stream*>> *)(iVar1 + 0x58),&local_14);
    }
    CStreamGuard::~CStreamGuard(local_1c);
  }
  return 0;
}

```

---

## ReqDBSendNewMail_08555b14

```asm
// === 08555b14 WongWork::CMailBoxHelper::ReqDBSendNewMail  [0x08555b14-0x85561af] ===
 8555b14:	55                   	push   %ebp
 8555b15:	89 e5                	mov    %esp,%ebp
 8555b17:	56                   	push   %esi
 8555b18:	53                   	push   %ebx
 8555b19:	81 ec 20 01 00 00    	sub    $0x120,%esp
 8555b1f:	8b 45 14             	mov    0x14(%ebp),%eax
 8555b22:	88 85 54 ff ff ff    	mov    %al,-0xac(%ebp)
 8555b28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555b2b:	8b 40 3d             	mov    0x3d(%eax),%eax
 8555b2e:	85 c0                	test   %eax,%eax
 8555b30:	79 0a                	jns    8555b3c <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x28>
 8555b32:	b8 11 00 00 00       	mov    $0x11,%eax
 8555b37:	e9 6a 06 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555b3c:	c7 45 d8 e8 03 00 00 	movl   $0x3e8,-0x28(%ebp)
 8555b43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555b46:	8b 40 39             	mov    0x39(%eax),%eax
 8555b49:	85 c0                	test   %eax,%eax
 8555b4b:	75 07                	jne    8555b54 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x40>
 8555b4d:	c7 45 d8 64 00 00 00 	movl   $0x64,-0x28(%ebp)
 8555b54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555b57:	8b 40 2e             	mov    0x2e(%eax),%eax
 8555b5a:	85 c0                	test   %eax,%eax
 8555b5c:	74 74                	je     8555bd2 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0xbe>
 8555b5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555b61:	8b 50 2e             	mov    0x2e(%eax),%edx
 8555b64:	89 d0                	mov    %edx,%eax
 8555b66:	c1 e0 02             	shl    $0x2,%eax
 8555b69:	01 d0                	add    %edx,%eax
 8555b6b:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8555b71:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8555b76:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 8555b7c:	f7 e2                	mul    %edx
 8555b7e:	c1 ea 05             	shr    $0x5,%edx
 8555b81:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8555b84:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8555b87:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8555b8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555b8d:	8b 40 39             	mov    0x39(%eax),%eax
 8555b90:	85 c0                	test   %eax,%eax
 8555b92:	75 20                	jne    8555bb4 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0xa0>
 8555b94:	c7 45 dc 74 27 00 00 	movl   $0x2774,-0x24(%ebp)
 8555b9b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8555b9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555ba2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8555ba5:	89 04 24             	mov    %eax,(%esp)
 8555ba8:	e8 61 9d b8 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8555bad:	8b 00                	mov    (%eax),%eax
 8555baf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8555bb2:	eb 1e                	jmp    8555bd2 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0xbe>
 8555bb4:	c7 45 e0 f8 2a 00 00 	movl   $0x2af8,-0x20(%ebp)
 8555bbb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8555bbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555bc2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8555bc5:	89 04 24             	mov    %eax,(%esp)
 8555bc8:	e8 41 9d b8 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8555bcd:	8b 00                	mov    (%eax),%eax
 8555bcf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8555bd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8555bd5:	89 04 24             	mov    %eax,(%esp)
 8555bd8:	e8 ab 45 c2 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8555bdd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8555be0:	8b 52 2e             	mov    0x2e(%edx),%edx
 8555be3:	89 d1                	mov    %edx,%ecx
 8555be5:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8555be8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8555beb:	39 d0                	cmp    %edx,%eax
 8555bed:	0f 9c c0             	setl   %al
 8555bf0:	84 c0                	test   %al,%al
 8555bf2:	74 0a                	je     8555bfe <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0xea>
 8555bf4:	b8 0a 00 00 00       	mov    $0xa,%eax
 8555bf9:	e9 a8 05 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8555c01:	89 04 24             	mov    %eax,(%esp)
 8555c04:	e8 85 46 b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8555c09:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8555c0c:	c7 45 e8 06 00 00 00 	movl   $0x6,-0x18(%ebp)
 8555c13:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8555c1a:	8d 45 9b             	lea    -0x65(%ebp),%eax
 8555c1d:	89 04 24             	mov    %eax,(%esp)
 8555c20:	e8 2f 5c b7 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8555c25:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 8555c2b:	89 04 24             	mov    %eax,(%esp)
 8555c2e:	e8 21 5c b7 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8555c33:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555c36:	8b 40 39             	mov    0x39(%eax),%eax
 8555c39:	85 c0                	test   %eax,%eax
 8555c3b:	0f 84 fc 02 00 00    	je     8555f3d <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x429>
 8555c41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555c44:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8555c48:	0f b6 c0             	movzbl %al,%eax
 8555c4b:	83 f8 01             	cmp    $0x1,%eax
 8555c4e:	74 12                	je     8555c62 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x14e>
 8555c50:	83 f8 07             	cmp    $0x7,%eax
 8555c53:	74 16                	je     8555c6b <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x157>
 8555c55:	85 c0                	test   %eax,%eax
 8555c57:	75 1b                	jne    8555c74 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x160>
 8555c59:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 8555c60:	eb 1c                	jmp    8555c7e <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x16a>
 8555c62:	c7 45 e8 02 00 00 00 	movl   $0x2,-0x18(%ebp)
 8555c69:	eb 13                	jmp    8555c7e <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x16a>
 8555c6b:	c7 45 e8 03 00 00 00 	movl   $0x3,-0x18(%ebp)
 8555c72:	eb 0a                	jmp    8555c7e <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x16a>
 8555c74:	b8 17 00 00 00       	mov    $0x17,%eax
 8555c79:	e9 28 05 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555c7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555c81:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8555c85:	0f b7 d0             	movzwl %ax,%edx
 8555c88:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8555c8e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8555c92:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8555c95:	89 54 24 08          	mov    %edx,0x8(%esp)
 8555c99:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8555c9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8555ca0:	89 04 24             	mov    %eax,(%esp)
 8555ca3:	e8 70 5c fa ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8555ca8:	83 ec 04             	sub    $0x4,%esp
 8555cab:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8555cb1:	89 45 9b             	mov    %eax,-0x65(%ebp)
 8555cb4:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8555cba:	89 45 9f             	mov    %eax,-0x61(%ebp)
 8555cbd:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8555cc3:	89 45 a3             	mov    %eax,-0x5d(%ebp)
 8555cc6:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8555ccc:	89 45 a7             	mov    %eax,-0x59(%ebp)
 8555ccf:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8555cd5:	89 45 ab             	mov    %eax,-0x55(%ebp)
 8555cd8:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8555cde:	89 45 af             	mov    %eax,-0x51(%ebp)
 8555ce1:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8555ce7:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 8555cea:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8555cf0:	89 45 b7             	mov    %eax,-0x49(%ebp)
 8555cf3:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8555cf9:	89 45 bb             	mov    %eax,-0x45(%ebp)
 8555cfc:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8555d02:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8555d05:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8555d0b:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8555d0e:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8555d14:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8555d17:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8555d1d:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8555d20:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 8555d26:	89 45 cf             	mov    %eax,-0x31(%ebp)
 8555d29:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8555d2f:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8555d32:	0f b6 85 44 ff ff ff 	movzbl -0xbc(%ebp),%eax
 8555d39:	88 45 d7             	mov    %al,-0x29(%ebp)
 8555d3c:	8b 55 9d             	mov    -0x63(%ebp),%edx
 8555d3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555d42:	8b 40 39             	mov    0x39(%eax),%eax
 8555d45:	39 c2                	cmp    %eax,%edx
 8555d47:	74 0a                	je     8555d53 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x23f>
 8555d49:	b8 11 00 00 00       	mov    $0x11,%eax
 8555d4e:	e9 53 04 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555d53:	0f b6 45 9c          	movzbl -0x64(%ebp),%eax
 8555d57:	3c 04                	cmp    $0x4,%al
 8555d59:	75 0a                	jne    8555d65 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x251>
 8555d5b:	b8 17 00 00 00       	mov    $0x17,%eax
 8555d60:	e9 41 04 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555d65:	8d 45 9b             	lea    -0x65(%ebp),%eax
 8555d68:	89 04 24             	mov    %eax,(%esp)
 8555d6b:	e8 a2 aa bf ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8555d70:	83 f0 01             	xor    $0x1,%eax
 8555d73:	84 c0                	test   %al,%al
 8555d75:	74 17                	je     8555d8e <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x27a>
 8555d77:	8b 55 a2             	mov    -0x5e(%ebp),%edx
 8555d7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555d7d:	8b 40 3d             	mov    0x3d(%eax),%eax
 8555d80:	39 c2                	cmp    %eax,%edx
 8555d82:	7d 0a                	jge    8555d8e <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x27a>
 8555d84:	b8 11 00 00 00       	mov    $0x11,%eax
 8555d89:	e9 18 04 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555d8e:	8b 45 9d             	mov    -0x63(%ebp),%eax
 8555d91:	89 c3                	mov    %eax,%ebx
 8555d93:	e8 03 64 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8555d98:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8555d9c:	89 04 24             	mov    %eax,(%esp)
 8555d9f:	e8 8e 9c e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8555da4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8555da7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8555dab:	75 0a                	jne    8555db7 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x2a3>
 8555dad:	b8 01 00 00 00       	mov    $0x1,%eax
 8555db2:	e9 ef 03 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555db7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8555dba:	89 04 24             	mov    %eax,(%esp)
 8555dbd:	e8 f2 57 d3 ff       	call   828b5b4 <_ZNK5CItem12isPackagableEv>
 8555dc2:	83 f0 01             	xor    $0x1,%eax
 8555dc5:	84 c0                	test   %al,%al
 8555dc7:	74 0a                	je     8555dd3 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x2bf>
 8555dc9:	b8 17 00 00 00       	mov    $0x17,%eax
 8555dce:	e9 d3 03 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555dd3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8555dd6:	89 04 24             	mov    %eax,(%esp)
 8555dd9:	e8 04 b5 b9 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 8555dde:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8555de1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555de4:	83 f8 07             	cmp    $0x7,%eax
 8555de7:	0f 87 86 00 00 00    	ja     8555e73 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x35f>
 8555ded:	8b 04 85 bc 13 ca 08 	mov    0x8ca13bc(,%eax,4),%eax
 8555df4:	ff e0                	jmp    *%eax
 8555df6:	b8 17 00 00 00       	mov    $0x17,%eax
 8555dfb:	e9 a6 03 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555e00:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 8555e04:	83 f0 01             	xor    $0x1,%eax
 8555e07:	84 c0                	test   %al,%al
 8555e09:	74 67                	je     8555e72 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x35e>
 8555e0b:	b8 17 00 00 00       	mov    $0x17,%eax
 8555e10:	e9 91 03 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555e15:	8d 45 9b             	lea    -0x65(%ebp),%eax
 8555e18:	89 04 24             	mov    %eax,(%esp)
 8555e1b:	e8 1c a3 bc ff       	call   812013c <_Z23DecreaseTradeLimitCountR10Inven_Item>
 8555e20:	83 f0 01             	xor    $0x1,%eax
 8555e23:	84 c0                	test   %al,%al
 8555e25:	74 0a                	je     8555e31 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x31d>
 8555e27:	b8 17 00 00 00       	mov    $0x17,%eax
 8555e2c:	e9 75 03 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555e31:	8b 45 9d             	mov    -0x63(%ebp),%eax
 8555e34:	89 c2                	mov    %eax,%edx
 8555e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555e39:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8555e3d:	0f b7 c0             	movzwl %ax,%eax
 8555e40:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8555e43:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8555e49:	c7 44 24 14 03 00 00 	movl   $0x3,0x14(%esp)
 8555e50:	00 
 8555e51:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8555e58:	ff 
 8555e59:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8555e5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8555e61:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8555e64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555e68:	89 0c 24             	mov    %ecx,(%esp)
 8555e6b:	e8 e4 0e 13 00       	call   8686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>
 8555e70:	eb 01                	jmp    8555e73 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x35f>
 8555e72:	90                   	nop
 8555e73:	8d 45 9b             	lea    -0x65(%ebp),%eax
 8555e76:	83 c0 33             	add    $0x33,%eax
 8555e79:	89 04 24             	mov    %eax,(%esp)
 8555e7c:	e8 89 ac bb ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 8555e81:	84 c0                	test   %al,%al
 8555e83:	0f 95 c0             	setne  %al
 8555e86:	84 c0                	test   %al,%al
 8555e88:	74 0a                	je     8555e94 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x380>
 8555e8a:	b8 17 00 00 00       	mov    $0x17,%eax
 8555e8f:	e9 12 03 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555e94:	8d 45 9b             	lea    -0x65(%ebp),%eax
 8555e97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555e9b:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 8555ea1:	89 04 24             	mov    %eax,(%esp)
 8555ea4:	e8 85 47 bf ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8555ea9:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 8555eaf:	89 04 24             	mov    %eax,(%esp)
 8555eb2:	e8 5b a9 bf ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8555eb7:	83 f0 01             	xor    $0x1,%eax
 8555eba:	84 c0                	test   %al,%al
 8555ebc:	74 18                	je     8555ed6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x3c2>
 8555ebe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555ec1:	8b 40 3d             	mov    0x3d(%eax),%eax
 8555ec4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555ec8:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 8555ece:	89 04 24             	mov    %eax,(%esp)
 8555ed1:	e8 ae 59 b7 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8555ed6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8555ed9:	8b 00                	mov    (%eax),%eax
 8555edb:	83 c0 10             	add    $0x10,%eax
 8555ede:	8b 10                	mov    (%eax),%edx
 8555ee0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8555ee3:	89 04 24             	mov    %eax,(%esp)
 8555ee6:	ff d2                	call   *%edx
 8555ee8:	84 c0                	test   %al,%al
 8555eea:	74 51                	je     8555f3d <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x429>
 8555eec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8555eef:	89 04 24             	mov    %eax,(%esp)
 8555ef2:	e8 7f 76 b8 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8555ef7:	8b 45 a2             	mov    -0x5e(%ebp),%eax
 8555efa:	89 04 24             	mov    %eax,(%esp)
 8555efd:	e8 0b 73 cd ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 8555f02:	84 c0                	test   %al,%al
 8555f04:	74 0a                	je     8555f10 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x3fc>
 8555f06:	b8 11 00 00 00       	mov    $0x11,%eax
 8555f0b:	e9 96 02 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555f10:	8b 5d a2             	mov    -0x5e(%ebp),%ebx
 8555f13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8555f16:	89 04 24             	mov    %eax,(%esp)
 8555f19:	e8 58 76 b8 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8555f1e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8555f22:	89 04 24             	mov    %eax,(%esp)
 8555f25:	e8 f0 38 da ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 8555f2a:	85 c0                	test   %eax,%eax
 8555f2c:	0f 95 c0             	setne  %al
 8555f2f:	84 c0                	test   %al,%al
 8555f31:	74 0a                	je     8555f3d <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x429>
 8555f33:	b8 11 00 00 00       	mov    $0x11,%eax
 8555f38:	e9 69 02 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555f3d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8555f40:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8555f47:	00 
 8555f48:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8555f4f:	00 
 8555f50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555f54:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8555f57:	89 04 24             	mov    %eax,(%esp)
 8555f5a:	e8 ed 95 fa ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8555f5f:	83 f0 01             	xor    $0x1,%eax
 8555f62:	84 c0                	test   %al,%al
 8555f64:	74 0a                	je     8555f70 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x45c>
 8555f66:	b8 0a 00 00 00       	mov    $0xa,%eax
 8555f6b:	e9 36 02 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555f70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555f73:	8b 40 2e             	mov    0x2e(%eax),%eax
 8555f76:	85 c0                	test   %eax,%eax
 8555f78:	74 53                	je     8555fcd <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x4b9>
 8555f7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555f7d:	8d 58 11             	lea    0x11(%eax),%ebx
 8555f80:	8b 45 08             	mov    0x8(%ebp),%eax
 8555f83:	89 04 24             	mov    %eax,(%esp)
 8555f86:	e8 7d 70 f9 ff       	call   84ed008 <_ZN5CUser14GetGoldControlEv>
 8555f8b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8555f8f:	89 04 24             	mov    %eax,(%esp)
 8555f92:	e8 49 1f d3 ff       	call   8287ee0 <_ZN16Secu_GoldControl15SetMailCharNameEPKc>
 8555f97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555f9a:	8b 40 2e             	mov    0x2e(%eax),%eax
 8555f9d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8555fa4:	00 
 8555fa5:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8555fac:	00 
 8555fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555fb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8555fb4:	89 04 24             	mov    %eax,(%esp)
 8555fb7:	e8 90 95 fa ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8555fbc:	83 f0 01             	xor    $0x1,%eax
 8555fbf:	84 c0                	test   %al,%al
 8555fc1:	74 0a                	je     8555fcd <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x4b9>
 8555fc3:	b8 0a 00 00 00       	mov    $0xa,%eax
 8555fc8:	e9 d9 01 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8555fcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555fd0:	8b 40 39             	mov    0x39(%eax),%eax
 8555fd3:	85 c0                	test   %eax,%eax
 8555fd5:	0f 84 60 01 00 00    	je     855613b <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x627>
 8555fdb:	0f b6 45 9c          	movzbl -0x64(%ebp),%eax
 8555fdf:	3c 08                	cmp    $0x8,%al
 8555fe1:	0f 85 ca 00 00 00    	jne    85560b1 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x59d>
 8555fe7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8555fea:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8555fee:	0f b7 c0             	movzwl %ax,%eax
 8555ff1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8555ff8:	00 
 8555ff9:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8556000:	00 
 8556001:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8556008:	00 
 8556009:	89 44 24 08          	mov    %eax,0x8(%esp)
 855600d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8556014:	00 
 8556015:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8556018:	89 04 24             	mov    %eax,(%esp)
 855601b:	e8 ec df fa ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8556020:	83 f0 01             	xor    $0x1,%eax
 8556023:	84 c0                	test   %al,%al
 8556025:	74 0a                	je     8556031 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x51d>
 8556027:	b8 11 00 00 00       	mov    $0x11,%eax
 855602c:	e9 75 01 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 8556031:	8b 45 0c             	mov    0xc(%ebp),%eax
 8556034:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8556038:	0f b7 c0             	movzwl %ax,%eax
 855603b:	8d 50 0a             	lea    0xa(%eax),%edx
 855603e:	8b 45 a2             	mov    -0x5e(%ebp),%eax
 8556041:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8556048:	00 
 8556049:	89 54 24 10          	mov    %edx,0x10(%esp)
 855604d:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8556054:	00 
 8556055:	89 44 24 08          	mov    %eax,0x8(%esp)
 8556059:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 8556060:	00 
 8556061:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8556064:	89 04 24             	mov    %eax,(%esp)
 8556067:	e8 c2 2b fb ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 855606c:	8b 45 08             	mov    0x8(%ebp),%eax
 855606f:	89 04 24             	mov    %eax,(%esp)
 8556072:	e8 d7 5b b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8556077:	8b 55 a2             	mov    -0x5e(%ebp),%edx
 855607a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8556081:	00 
 8556082:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8556085:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8556089:	89 44 24 04          	mov    %eax,0x4(%esp)
 855608d:	89 14 24             	mov    %edx,(%esp)
 8556090:	e8 c7 a4 ea ff       	call   840055c <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh>
 8556095:	8b 5d a2             	mov    -0x5e(%ebp),%ebx
 8556098:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855609b:	89 04 24             	mov    %eax,(%esp)
 855609e:	e8 c9 ab bb ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 85560a3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85560a7:	89 04 24             	mov    %eax,(%esp)
 85560aa:	e8 53 33 da ff       	call   82f9402 <_ZN8WongWork14CAvatarItemMgr12UnRegistItemEi>
 85560af:	eb 4b                	jmp    85560fc <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x5e8>
 85560b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85560b4:	8b 48 3d             	mov    0x3d(%eax),%ecx
 85560b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85560ba:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 85560be:	0f b7 d0             	movzwl %ax,%edx
 85560c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85560c4:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85560cb:	00 
 85560cc:	c7 44 24 10 0f 00 00 	movl   $0xf,0x10(%esp)
 85560d3:	00 
 85560d4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85560d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 85560dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85560e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85560e3:	89 04 24             	mov    %eax,(%esp)
 85560e6:	e8 21 df fa ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85560eb:	83 f0 01             	xor    $0x1,%eax
 85560ee:	84 c0                	test   %al,%al
 85560f0:	74 0a                	je     85560fc <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x5e8>
 85560f2:	b8 11 00 00 00       	mov    $0x11,%eax
 85560f7:	e9 aa 00 00 00       	jmp    85561a6 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x692>
 85560fc:	8d 45 9b             	lea    -0x65(%ebp),%eax
 85560ff:	89 04 24             	mov    %eax,(%esp)
 8556102:	e8 6f fa dd ff       	call   8335b76 <_ZNK10Inven_Item18IsCreatureItemTypeEv>
 8556107:	84 c0                	test   %al,%al
 8556109:	74 30                	je     855613b <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji+0x627>
 855610b:	8b 45 0c             	mov    0xc(%ebp),%eax
 855610e:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8556112:	0f b7 d8             	movzwl %ax,%ebx
 8556115:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8556118:	89 04 24             	mov    %eax,(%esp)
 855611b:	e8 48 74 b8 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8556120:	c7 44 24 0c 0f 00 00 	movl   $0xf,0xc(%esp)
 8556127:	00 
 8556128:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855612c:	8d 55 9b             	lea    -0x65(%ebp),%edx
 855612f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556133:	89 04 24             	mov    %eax,(%esp)
 8556136:	e8 f7 48 de ff       	call   833aa32 <_ZN13user_creature12CCreatureMgr8SendMailEP10Inven_Itemii>
 855613b:	8b 45 08             	mov    0x8(%ebp),%eax
 855613e:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 8556144:	8b 45 18             	mov    0x18(%ebp),%eax
 8556147:	89 44 24 08          	mov    %eax,0x8(%esp)
 855614b:	8b 45 0c             	mov    0xc(%ebp),%eax
 855614e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556152:	89 14 24             	mov    %edx,(%esp)
 8556155:	e8 90 e6 12 00       	call   86847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>
 855615a:	8b 45 0c             	mov    0xc(%ebp),%eax
 855615d:	8b 48 41             	mov    0x41(%eax),%ecx
 8556160:	8b 45 0c             	mov    0xc(%ebp),%eax
 8556163:	8d 70 45             	lea    0x45(%eax),%esi
 8556166:	0f b6 95 54 ff ff ff 	movzbl -0xac(%ebp),%edx
 855616d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8556170:	8b 40 2e             	mov    0x2e(%eax),%eax
 8556173:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 8556176:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 855617a:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 855617e:	89 74 24 14          	mov    %esi,0x14(%esp)
 8556182:	89 54 24 10          	mov    %edx,0x10(%esp)
 8556186:	8b 55 10             	mov    0x10(%ebp),%edx
 8556189:	89 54 24 0c          	mov    %edx,0xc(%esp)
 855618d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8556191:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 8556197:	89 44 24 04          	mov    %eax,0x4(%esp)
 855619b:	8b 45 08             	mov    0x8(%ebp),%eax
 855619e:	89 04 24             	mov    %eax,(%esp)
 85561a1:	e8 70 f7 ff ff       	call   8555916 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii>
 85561a6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85561a9:	83 c4 00             	add    $0x0,%esp
 85561ac:	5b                   	pop    %ebx
 85561ad:	5e                   	pop    %esi
 85561ae:	5d                   	pop    %ebp
 85561af:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewMail @ 0x8555b14

/* WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, MSG_MAILBOX_SEND*, unsigned int, bool,
   unsigned int, int) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewMail
          (CUser *param_1,MSG_MAILBOX_SEND *param_2,uint param_3,bool param_4,uint param_5,
          int param_6)

{
  MSG_MAILBOX_SEND MVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  CDataManager *this;
  CAvatarItemMgr *this_00;
  Secu_GoldControl *this_01;
  uint uVar7;
  CCreatureMgr *this_02;
  undefined1 local_fc [12];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  bool local_b0;
  Inven_Item local_a6 [61];
  Inven_Item local_69;
  char cStack_68;
  undefined2 uStack_67;
  undefined2 local_65;
  undefined1 uStack_63;
  uint uStack_62;
  undefined1 uStack_5e;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined1 local_2d;
  int local_2c [3];
  CInventory *local_20;
  int local_1c;
  undefined4 local_18;
  CItem *local_14;
  undefined4 local_10;
  
  local_b0 = param_4;
  if (*(int *)(param_2 + 0x3d) < 0) {
    uVar4 = 0x11;
  }
  else {
    local_2c[0] = 1000;
    if (*(int *)(param_2 + 0x39) == 0) {
      local_2c[0] = 100;
    }
    if (*(int *)(param_2 + 0x2e) != 0) {
      local_2c[0] = (uint)(*(int *)(param_2 + 0x2e) * 5) / 100 + local_2c[0];
      if (*(int *)(param_2 + 0x39) == 0) {
        local_2c[1] = 0x2774;
        piVar5 = std::min<int>(local_2c + 1,local_2c);
        local_2c[0] = *piVar5;
      }
      else {
        local_2c[2] = 11000;
        piVar5 = std::min<int>(local_2c + 2,local_2c);
        local_2c[0] = *piVar5;
      }
    }
    iVar6 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    if (iVar6 < *(int *)(param_2 + 0x2e) + local_2c[0]) {
      uVar4 = 10;
    }
    else {
      local_20 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_1c = 6;
      local_18 = 0;
      Inven_Item::Inven_Item(&local_69);
      Inven_Item::Inven_Item(local_a6);
      if (*(int *)(param_2 + 0x39) != 0) {
        MVar1 = param_2[0x36];
        if (MVar1 == (MSG_MAILBOX_SEND)0x1) {
          local_1c = 2;
        }
        else if (MVar1 == (MSG_MAILBOX_SEND)0x7) {
          local_1c = 3;
        }
        else {
          if (MVar1 != (MSG_MAILBOX_SEND)0x0) {
            return 0x17;
          }
          local_1c = 1;
        }
        CInventory::GetInvenSlot((int)local_fc,(int)local_20);
        local_69 = SUB41(local_fc._0_4_,0);
        cStack_68 = SUB41(local_fc._0_4_,1);
        uStack_67 = SUB42(local_fc._0_4_,2);
        local_65 = (undefined2)local_fc._4_4_;
        uStack_63 = SUB41(local_fc._4_4_,2);
        uStack_62._1_3_ = (undefined3)local_fc._8_4_;
        uStack_62 = CONCAT31(uStack_62._1_3_,SUB41(local_fc._4_4_,3));
        uStack_5e = SUB41(local_fc._8_4_,3);
        local_5d = local_f0;
        local_59 = local_ec;
        local_55 = local_e8;
        local_51 = local_e4;
        local_4d = local_e0;
        local_49 = local_dc;
        local_45 = local_d8;
        local_41 = local_d4;
        local_3d = local_d0;
        local_39 = local_cc;
        local_35 = local_c8;
        local_31 = local_c4;
        local_2d = local_c0;
        if (CONCAT22(local_65,uStack_67) != *(int *)(param_2 + 0x39)) {
          return 0x11;
        }
        if (cStack_68 == '\x04') {
          return 0x17;
        }
        cVar3 = Inven_Item::isEquipableItemType(&local_69);
        if ((cVar3 != '\x01') && ((int)uStack_62 < *(int *)(param_2 + 0x3d))) {
          return 0x11;
        }
        iVar6 = CONCAT22(local_65,uStack_67);
        this = (CDataManager *)G_CDataManager();
        local_14 = (CItem *)CDataManager::find_item(this,iVar6);
        if (local_14 == (CItem *)0x0) {
          return 1;
        }
        cVar3 = CItem::isPackagable(local_14);
        if (cVar3 != '\x01') {
          return 0x17;
        }
        local_10 = CItem::GetAttachType(local_14);
        switch(local_10) {
        case 1:
        case 2:
          return 0x17;
        case 3:
          if (local_69 != (Inven_Item)0x1) {
            return 0x17;
          }
          break;
        case 7:
          cVar3 = DecreaseTradeLimitCount(&local_69);
          if (cVar3 != '\x01') {
            return 0x17;
          }
          cUserHistoryLog::ChangeItemLimitCount
                    ((cUserHistoryLog *)(param_1 + 0x79700),local_1c,
                     (uint)*(ushort *)(param_2 + 0x37),CONCAT22(local_65,uStack_67),-1,3);
        }
        cVar3 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)((int)&local_39 + 3))
        ;
        if (cVar3 != '\0') {
          return 0x17;
        }
        Inven_Item::setCopy(local_a6,&local_69);
        cVar3 = Inven_Item::isEquipableItemType(local_a6);
        if (cVar3 != '\x01') {
          Inven_Item::set_add_info(local_a6,*(int *)(param_2 + 0x3d));
        }
        cVar3 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
        if (cVar3 != '\0') {
          CInventory::GetAvatarItemMgrR(local_20);
          cVar3 = CAvatarItemMgr::IsTempKey(uStack_62);
          uVar7 = uStack_62;
          if (cVar3 != '\0') {
            return 0x11;
          }
          this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_20);
          iVar6 = CAvatarItemMgr::GetExpireDate(this_00,uVar7);
          if (iVar6 != 0) {
            return 0x11;
          }
        }
      }
      cVar3 = CInventory::use_money(local_20,local_2c[0],0x10,1);
      if (cVar3 == '\x01') {
        if (*(int *)(param_2 + 0x2e) != 0) {
          this_01 = (Secu_GoldControl *)CUser::GetGoldControl(param_1);
          Secu_GoldControl::SetMailCharName(this_01,(char *)(param_2 + 0x11));
          cVar3 = CInventory::use_money(local_20,*(undefined4 *)(param_2 + 0x2e),0x11,1);
          if (cVar3 != '\x01') {
            return 10;
          }
        }
        if (*(int *)(param_2 + 0x39) != 0) {
          if (cStack_68 == '\b') {
            cVar3 = CInventory::delete_item(local_20,2,*(undefined2 *)(param_2 + 0x37),1,2,1);
            if (cVar3 != '\x01') {
              return 0x11;
            }
            CInventory::SendAvatarEvent
                      (local_20,0x36,uStack_62,2,*(ushort *)(param_2 + 0x37) + 10,0);
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            DB_AvatarChangeOwner::makeRequest(uStack_62,uVar7,param_3,'\0');
            iVar6 = CInventory::GetAvatarItemMgrW(local_20);
            CAvatarItemMgr::UnRegistItem(iVar6);
          }
          else {
            cVar3 = CInventory::delete_item
                              (local_20,local_1c,*(undefined2 *)(param_2 + 0x37),
                               *(undefined4 *)(param_2 + 0x3d),0xf,1);
            if (cVar3 != '\x01') {
              return 0x11;
            }
          }
          cVar3 = Inven_Item::IsCreatureItemType(&local_69);
          if (cVar3 != '\0') {
            uVar2 = *(ushort *)(param_2 + 0x37);
            this_02 = (CCreatureMgr *)CInventory::GetCreatureMgrW(local_20);
            user_creature::CCreatureMgr::SendMail(this_02,&local_69,(uint)uVar2,0xf);
          }
        }
        cUserHistoryLog::SendMail((cUserHistoryLog *)(param_1 + 0x79700),param_2,param_5);
        uVar4 = _DoSendNewMail(param_1,local_a6,*(uint *)(param_2 + 0x2e),param_3,local_b0,
                               (char *)(param_2 + 0x45),*(int *)(param_2 + 0x41),param_6);
      }
      else {
        uVar4 = 10;
      }
    }
  }
  return uVar4;
}

```

---

## ReqDBSendNewSystemMail

```asm
// === 085555e8 WongWork::CMailBoxHelper::ReqDBSendNewSystemMail  [0x085555e8-0x8555755] ===
 85555e8:	55                   	push   %ebp
 85555e9:	89 e5                	mov    %esp,%ebp
 85555eb:	56                   	push   %esi
 85555ec:	53                   	push   %ebx
 85555ed:	83 ec 50             	sub    $0x50,%esp
 85555f0:	8b 55 28             	mov    0x28(%ebp),%edx
 85555f3:	8b 45 2c             	mov    0x2c(%ebp),%eax
 85555f6:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 85555f9:	88 45 e0             	mov    %al,-0x20(%ebp)
 85555fc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8555601:	c7 44 24 08 4f 05 00 	movl   $0x54f,0x8(%esp)
 8555608:	00 
 8555609:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8555610:	08 
 8555611:	89 04 24             	mov    %eax,(%esp)
 8555614:	e8 6d a4 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8555619:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8555620:	00 
 8555621:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555625:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8555628:	89 04 24             	mov    %eax,(%esp)
 855562b:	e8 f6 35 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8555630:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8555633:	89 04 24             	mov    %eax,(%esp)
 8555636:	e8 0b 36 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855563b:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 8555642:	00 
 8555643:	89 04 24             	mov    %eax,(%esp)
 8555646:	e8 0b 36 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 855564b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 855564e:	89 04 24             	mov    %eax,(%esp)
 8555651:	e8 f0 35 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8555656:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 855565d:	ff 
 855565e:	89 04 24             	mov    %eax,(%esp)
 8555661:	e8 f0 35 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8555666:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8555669:	89 04 24             	mov    %eax,(%esp)
 855566c:	e8 dd 35 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8555671:	89 04 24             	mov    %eax,(%esp)
 8555674:	e8 15 29 c4 ff       	call   8197f8e <_ZN12CStreamGuard11GetInBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 8555679:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855567c:	c7 44 24 08 68 01 00 	movl   $0x168,0x8(%esp)
 8555683:	00 
 8555684:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 855568b:	00 
 855568c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855568f:	89 04 24             	mov    %eax,(%esp)
 8555692:	e8 29 86 b2 ff       	call   807dcc0 <memset@plt>
 8555697:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 855569e:	00 
 855569f:	8b 45 20             	mov    0x20(%ebp),%eax
 85556a2:	89 44 24 20          	mov    %eax,0x20(%esp)
 85556a6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85556a9:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85556ad:	8b 45 18             	mov    0x18(%ebp),%eax
 85556b0:	89 44 24 18          	mov    %eax,0x18(%esp)
 85556b4:	8b 45 14             	mov    0x14(%ebp),%eax
 85556b7:	89 44 24 14          	mov    %eax,0x14(%esp)
 85556bb:	8b 45 10             	mov    0x10(%ebp),%eax
 85556be:	89 44 24 10          	mov    %eax,0x10(%esp)
 85556c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85556c5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85556c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85556d0:	00 
 85556d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85556d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85556d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85556db:	89 04 24             	mov    %eax,(%esp)
 85556de:	e8 73 00 00 00       	call   8555756 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji>
 85556e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85556e6:	8b 55 24             	mov    0x24(%ebp),%edx
 85556e9:	89 90 5f 01 00 00    	mov    %edx,0x15f(%eax)
 85556ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85556f2:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 85556f6:	88 50 57             	mov    %dl,0x57(%eax)
 85556f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85556fc:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 8555700:	88 90 67 01 00 00    	mov    %dl,0x167(%eax)
 8555706:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 855570b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 855570e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8555712:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8555719:	00 
 855571a:	89 04 24             	mov    %eax,(%esp)
 855571d:	e8 bc b8 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8555722:	bb 00 00 00 00       	mov    $0x0,%ebx
 8555727:	8d 45 ec             	lea    -0x14(%ebp),%eax
 855572a:	89 04 24             	mov    %eax,(%esp)
 855572d:	e8 a0 71 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8555732:	89 d8                	mov    %ebx,%eax
 8555734:	83 c4 50             	add    $0x50,%esp
 8555737:	5b                   	pop    %ebx
 8555738:	5e                   	pop    %esi
 8555739:	5d                   	pop    %ebp
 855573a:	c3                   	ret
 855573b:	89 d3                	mov    %edx,%ebx
 855573d:	89 c6                	mov    %eax,%esi
 855573f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8555742:	89 04 24             	mov    %eax,(%esp)
 8555745:	e8 88 71 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 855574a:	89 f0                	mov    %esi,%eax
 855574c:	89 da                	mov    %ebx,%edx
 855574e:	89 04 24             	mov    %eax,(%esp)
 8555751:	e8 fa df 58 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewSystemMail @ 0x85555e8

/* WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int,
   unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
          (char *param_1,Inven_Item *param_2,uint param_3,uint param_4,char *param_5,int param_6,
          uint param_7,undefined4 param_8,SIG_MAILBOX_SEND_NEW_MAIL param_9,
          SIG_MAILBOX_SEND_NEW_MAIL param_10)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x54f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08555646 to 08555721 has its CatchHandler @ 0855573b */
  CStreamGuard::operator<<(pCVar2,0x80);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  memset(local_10,0,0x168);
  _makeSendMailData(local_10,param_1,0,param_2,param_3,param_4,param_5,param_6,param_7,0);
  *(undefined4 *)(local_10 + 0x15f) = param_8;
  local_10[0x57] = param_9;
  local_10[0x167] = param_10;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 0;
}

```

---

## ReqDBSendNewSystemMultiMail

```asm
// === 08556b68 WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail  [0x08556b68-0x8556d5b] ===
 8556b68:	55                   	push   %ebp
 8556b69:	89 e5                	mov    %esp,%ebp
 8556b6b:	56                   	push   %esi
 8556b6c:	53                   	push   %ebx
 8556b6d:	83 ec 40             	sub    $0x40,%esp
 8556b70:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8556b73:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8556b76:	83 7d 10 0a          	cmpl   $0xa,0x10(%ebp)
 8556b7a:	77 06                	ja     8556b82 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb+0x1a>
 8556b7c:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8556b80:	75 0a                	jne    8556b8c <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb+0x24>
 8556b82:	bb 11 00 00 00       	mov    $0x11,%ebx
 8556b87:	e9 c6 01 00 00       	jmp    8556d52 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb+0x1ea>
 8556b8c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8556b91:	c7 44 24 08 17 09 00 	movl   $0x917,0x8(%esp)
 8556b98:	00 
 8556b99:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8556ba0:	08 
 8556ba1:	89 04 24             	mov    %eax,(%esp)
 8556ba4:	e8 dd 8e d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8556ba9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8556bb0:	00 
 8556bb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556bb5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556bb8:	89 04 24             	mov    %eax,(%esp)
 8556bbb:	e8 66 20 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8556bc0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556bc3:	89 04 24             	mov    %eax,(%esp)
 8556bc6:	e8 7b 20 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556bcb:	c7 44 24 04 a4 02 00 	movl   $0x2a4,0x4(%esp)
 8556bd2:	00 
 8556bd3:	89 04 24             	mov    %eax,(%esp)
 8556bd6:	e8 7b 20 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556bdb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556bde:	89 04 24             	mov    %eax,(%esp)
 8556be1:	e8 60 20 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8556be6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8556bed:	ff 
 8556bee:	89 04 24             	mov    %eax,(%esp)
 8556bf1:	e8 60 20 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8556bf6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556bf9:	89 04 24             	mov    %eax,(%esp)
 8556bfc:	e8 4d 20 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8556c01:	89 04 24             	mov    %eax,(%esp)
 8556c04:	e8 33 1f 00 00       	call   8558b3c <_ZN12CStreamGuard11GetInBufferI34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAILEEPT_v>
 8556c09:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8556c0c:	c7 44 24 08 a9 03 00 	movl   $0x3a9,0x8(%esp)
 8556c13:	00 
 8556c14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8556c1b:	00 
 8556c1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556c1f:	89 04 24             	mov    %eax,(%esp)
 8556c22:	e8 99 70 b2 ff       	call   807dcc0 <memset@plt>
 8556c27:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556c2a:	c7 80 22 01 00 00 00 	movl   $0x0,0x122(%eax)
 8556c31:	00 00 00 
 8556c34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556c37:	8b 55 08             	mov    0x8(%ebp),%edx
 8556c3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556c3e:	89 04 24             	mov    %eax,(%esp)
 8556c41:	e8 aa 72 b2 ff       	call   807def0 <strcpy@plt>
 8556c46:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8556c49:	89 04 24             	mov    %eax,(%esp)
 8556c4c:	e8 e3 d7 dd ff       	call   8334434 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEC1Ev>
 8556c51:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8556c58:	eb 2b                	jmp    8556c85 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb+0x11d>
 8556c5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556c5d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8556c60:	03 45 0c             	add    0xc(%ebp),%eax
 8556c63:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8556c66:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8556c69:	81 c2 20 01 00 00    	add    $0x120,%edx
 8556c6f:	03 55 f0             	add    -0x10(%ebp),%edx
 8556c72:	83 c2 06             	add    $0x6,%edx
 8556c75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556c79:	89 14 24             	mov    %edx,(%esp)
 8556c7c:	e8 ad 39 bf ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8556c81:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8556c85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8556c88:	3b 45 10             	cmp    0x10(%ebp),%eax
 8556c8b:	0f 92 c0             	setb   %al
 8556c8e:	84 c0                	test   %al,%al
 8556c90:	75 c8                	jne    8556c5a <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb+0xf2>
 8556c92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556c95:	8b 55 10             	mov    0x10(%ebp),%edx
 8556c98:	89 90 88 03 00 00    	mov    %edx,0x388(%eax)
 8556c9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556ca1:	8b 55 14             	mov    0x14(%ebp),%edx
 8556ca4:	89 90 8c 03 00 00    	mov    %edx,0x38c(%eax)
 8556caa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556cad:	8b 55 18             	mov    0x18(%ebp),%edx
 8556cb0:	89 90 1e 01 00 00    	mov    %edx,0x11e(%eax)
 8556cb6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556cb9:	8d 50 1e             	lea    0x1e(%eax),%edx
 8556cbc:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8556cbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8556cc3:	89 14 24             	mov    %edx,(%esp)
 8556cc6:	e8 25 72 b2 ff       	call   807def0 <strcpy@plt>
 8556ccb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556cce:	8b 55 20             	mov    0x20(%ebp),%edx
 8556cd1:	89 90 99 03 00 00    	mov    %edx,0x399(%eax)
 8556cd7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556cda:	8b 55 24             	mov    0x24(%ebp),%edx
 8556cdd:	89 90 90 03 00 00    	mov    %edx,0x390(%eax)
 8556ce3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556ce6:	8b 55 28             	mov    0x28(%ebp),%edx
 8556ce9:	89 90 95 03 00 00    	mov    %edx,0x395(%eax)
 8556cef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556cf2:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 8556cf6:	88 90 94 03 00 00    	mov    %dl,0x394(%eax)
 8556cfc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8556cff:	c7 80 a5 03 00 00 01 	movl   $0x1,0x3a5(%eax)
 8556d06:	00 00 00 
 8556d09:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8556d0e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8556d11:	89 54 24 08          	mov    %edx,0x8(%esp)
 8556d15:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8556d1c:	00 
 8556d1d:	89 04 24             	mov    %eax,(%esp)
 8556d20:	e8 b9 a2 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8556d25:	bb 00 00 00 00       	mov    $0x0,%ebx
 8556d2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556d2d:	89 04 24             	mov    %eax,(%esp)
 8556d30:	e8 9d 5b 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556d35:	eb 1b                	jmp    8556d52 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb+0x1ea>
 8556d37:	89 d3                	mov    %edx,%ebx
 8556d39:	89 c6                	mov    %eax,%esi
 8556d3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8556d3e:	89 04 24             	mov    %eax,(%esp)
 8556d41:	e8 8c 5b 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8556d46:	89 f0                	mov    %esi,%eax
 8556d48:	89 da                	mov    %ebx,%edx
 8556d4a:	89 04 24             	mov    %eax,(%esp)
 8556d4d:	e8 fe c9 58 00       	call   8ae3750 <_Unwind_Resume>
 8556d52:	89 d8                	mov    %ebx,%eax
 8556d54:	83 c4 40             	add    $0x40,%esp
 8556d57:	5b                   	pop    %ebx
 8556d58:	5e                   	pop    %esi
 8556d59:	5d                   	pop    %ebp
 8556d5a:	c3                   	ret
 8556d5b:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail @ 0x8556b68

/* WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned
   int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
          (char *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
          char *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL param_10)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  CStreamGuard local_1c [8];
  SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *local_14;
  uint local_10;
  
  if ((param_3 < 0xb) && (param_3 != 0)) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x917);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08556bd6 to 08556d24 has its CatchHandler @ 08556d37 */
    CStreamGuard::operator<<(pCVar2,0x2a4);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>(pCVar2);
    memset(local_14,0,0x3a9);
    *(undefined4 *)(local_14 + 0x122) = 0;
    strcpy((char *)local_14,param_1);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_20);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      Inven_Item::setCopy((Inven_Item *)(local_14 + local_10 * 0x3d + 0x126),
                          (Inven_Item *)(local_10 * 0x3d + param_2));
    }
    *(uint *)(local_14 + 0x388) = param_3;
    *(undefined4 *)(local_14 + 0x38c) = param_4;
    *(undefined4 *)(local_14 + 0x11e) = param_5;
    strcpy((char *)(local_14 + 0x1e),param_6);
    *(undefined4 *)(local_14 + 0x399) = param_7;
    *(undefined4 *)(local_14 + 0x390) = param_8;
    *(undefined4 *)(local_14 + 0x395) = param_9;
    local_14[0x394] = param_10;
    *(undefined4 *)(local_14 + 0x3a5) = 1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    uVar3 = 0;
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    uVar3 = 0x11;
  }
  return uVar3;
}

```

---

## ReqDBSendStoredMail

```asm
// === 085566ae WongWork::CMailBoxHelper::ReqDBSendStoredMail  [0x085566ae-0x8556771] ===
 85566ae:	55                   	push   %ebp
 85566af:	89 e5                	mov    %esp,%ebp
 85566b1:	83 ec 28             	sub    $0x28,%esp
 85566b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85566b7:	89 04 24             	mov    %eax,(%esp)
 85566ba:	e8 4d 9b cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 85566bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85566c2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85566c6:	0f 84 9f 00 00 00    	je     855676b <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser+0xbd>
 85566cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85566cf:	83 c0 58             	add    $0x58,%eax
 85566d2:	89 04 24             	mov    %eax,(%esp)
 85566d5:	e8 c4 1c 00 00       	call   855839e <_ZNKSt4listIP6StreamSaIS1_EE5emptyEv>
 85566da:	84 c0                	test   %al,%al
 85566dc:	0f 85 8c 00 00 00    	jne    855676e <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser+0xc0>
 85566e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85566e5:	8d 50 58             	lea    0x58(%eax),%edx
 85566e8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85566eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85566ef:	89 04 24             	mov    %eax,(%esp)
 85566f2:	e8 b9 1c 00 00       	call   85583b0 <_ZNSt4listIP6StreamSaIS1_EE5beginEv>
 85566f7:	83 ec 04             	sub    $0x4,%esp
 85566fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85566fd:	8d 50 58             	lea    0x58(%eax),%edx
 8556700:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8556703:	89 54 24 04          	mov    %edx,0x4(%esp)
 8556707:	89 04 24             	mov    %eax,(%esp)
 855670a:	e8 c7 1c 00 00       	call   85583d6 <_ZNSt4listIP6StreamSaIS1_EE3endEv>
 855670f:	83 ec 04             	sub    $0x4,%esp
 8556712:	eb 31                	jmp    8556745 <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser+0x97>
 8556714:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8556717:	89 04 24             	mov    %eax,(%esp)
 855671a:	e8 03 1d 00 00       	call   8558422 <_ZNKSt14_List_iteratorIP6StreamEdeEv>
 855671f:	8b 10                	mov    (%eax),%edx
 8556721:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8556726:	89 54 24 08          	mov    %edx,0x8(%esp)
 855672a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8556731:	00 
 8556732:	89 04 24             	mov    %eax,(%esp)
 8556735:	e8 ce a8 01 00       	call   8571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>
 855673a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 855673d:	89 04 24             	mov    %eax,(%esp)
 8556740:	e8 c9 1c 00 00       	call   855840e <_ZNSt14_List_iteratorIP6StreamEppEv>
 8556745:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8556748:	89 44 24 04          	mov    %eax,0x4(%esp)
 855674c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 855674f:	89 04 24             	mov    %eax,(%esp)
 8556752:	e8 a3 1c 00 00       	call   85583fa <_ZNKSt14_List_iteratorIP6StreamEneERKS2_>
 8556757:	84 c0                	test   %al,%al
 8556759:	75 b9                	jne    8556714 <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser+0x66>
 855675b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855675e:	83 c0 58             	add    $0x58,%eax
 8556761:	89 04 24             	mov    %eax,(%esp)
 8556764:	e8 c7 1c 00 00       	call   8558430 <_ZNSt4listIP6StreamSaIS1_EE5clearEv>
 8556769:	eb 04                	jmp    855676f <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser+0xc1>
 855676b:	90                   	nop
 855676c:	eb 01                	jmp    855676f <_ZN8WongWork14CMailBoxHelper19ReqDBSendStoredMailEP5CUser+0xc1>
 855676e:	90                   	nop
 855676f:	c9                   	leave
 8556770:	c3                   	ret
 8556771:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::ReqDBSendStoredMail @ 0x85566ae

/* WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser*) */

void WongWork::CMailBoxHelper::ReqDBSendStoredMail(CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  _List_iterator local_18 [4];
  _List_iterator<Stream*> local_14 [4];
  int local_10;
  
  local_10 = CUser::GetMailBox(param_1);
  if ((local_10 != 0) &&
     (cVar1 = std::list<Stream*,std::allocator<Stream*>>::empty
                        ((list<Stream*,std::allocator<Stream*>> *)(local_10 + 0x58)), cVar1 == '\0')
     ) {
    std::list<Stream*,std::allocator<Stream*>>::begin();
    std::list<Stream*,std::allocator<Stream*>>::end();
    while (cVar1 = std::_List_iterator<Stream*>::operator!=(local_14,local_18), cVar1 != '\0') {
      puVar2 = (undefined4 *)std::_List_iterator<Stream*>::operator*(local_14);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,*puVar2);
      std::_List_iterator<Stream*>::operator++(local_14);
    }
    std::list<Stream*,std::allocator<Stream*>>::clear
              ((list<Stream*,std::allocator<Stream*>> *)(local_10 + 0x58));
  }
  return;
}

```

---

## SetMailBoxInfo

```asm
// === 085525a6 WongWork::CMailBoxHelper::SetMailBoxInfo  [0x085525a6-0x8553671] ===
 85525a6:	55                   	push   %ebp
 85525a7:	89 e5                	mov    %esp,%ebp
 85525a9:	57                   	push   %edi
 85525aa:	56                   	push   %esi
 85525ab:	53                   	push   %ebx
 85525ac:	81 ec 9c 03 00 00    	sub    $0x39c,%esp
 85525b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85525b5:	89 04 24             	mov    %eax,(%esp)
 85525b8:	e8 4f dc cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 85525bd:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85525c0:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 85525c4:	75 0a                	jne    85525d0 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x2a>
 85525c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 85525cb:	e9 95 10 00 00       	jmp    8553665 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x10bf>
 85525d0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85525d3:	89 04 24             	mov    %eax,(%esp)
 85525d6:	e8 01 50 00 00       	call   85575dc <_ZN8WongWork8CMailBox16incMailLoadCountEv>
 85525db:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85525de:	89 04 24             	mov    %eax,(%esp)
 85525e1:	e8 52 53 00 00       	call   8557938 <_ZN8WongWork8CMailBox8IsLoadedEv>
 85525e6:	83 f0 01             	xor    $0x1,%eax
 85525e9:	88 45 bb             	mov    %al,-0x45(%ebp)
 85525ec:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85525f2:	89 04 24             	mov    %eax,(%esp)
 85525f5:	e8 52 b7 03 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85525fa:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8552601:	e8 98 96 b7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8552606:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8552609:	8d 85 04 fd ff ff    	lea    -0x2fc(%ebp),%eax
 855260f:	89 04 24             	mov    %eax,(%esp)
 8552612:	e8 c7 90 c5 ff       	call   81ab6de <_ZNSt3setIjSt4lessIjESaIjEEC1Ev>
 8552617:	8b 45 0c             	mov    0xc(%ebp),%eax
 855261a:	8d 90 3a 33 00 00    	lea    0x333a(%eax),%edx
 8552620:	8d 85 04 fd ff ff    	lea    -0x2fc(%ebp),%eax
 8552626:	89 44 24 0c          	mov    %eax,0xc(%esp)
 855262a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8552631:	00 
 8552632:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552636:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552639:	89 04 24             	mov    %eax,(%esp)
 855263c:	e8 35 50 00 00       	call   8557676 <_ZN8WongWork8CMailBox18SetPackageLoadLackEPKjiRSt3setIjSt4lessIjESaIjEE>
 8552641:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8552648:	c7 85 00 fd ff ff 00 	movl   $0x0,-0x300(%ebp)
 855264f:	00 00 00 
 8552652:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8552656:	83 f0 01             	xor    $0x1,%eax
 8552659:	84 c0                	test   %al,%al
 855265b:	0f 84 af 01 00 00    	je     8552810 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x26a>
 8552661:	c7 44 24 08 61 00 00 	movl   $0x61,0x8(%esp)
 8552668:	00 
 8552669:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8552670:	00 
 8552671:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552677:	89 04 24             	mov    %eax,(%esp)
 855267a:	e8 7d 92 b7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 855267f:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552685:	89 04 24             	mov    %eax,(%esp)
 8552688:	e8 bf e4 bb ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 855268d:	89 85 00 fd ff ff    	mov    %eax,-0x300(%ebp)
 8552693:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552696:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 855269c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85526a0:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85526a6:	89 04 24             	mov    %eax,(%esp)
 85526a9:	e8 72 92 b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85526ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85526b5:	00 
 85526b6:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85526bc:	89 04 24             	mov    %eax,(%esp)
 85526bf:	e8 5c 92 b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85526c4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85526c7:	8d 50 40             	lea    0x40(%eax),%edx
 85526ca:	8d 85 28 fd ff ff    	lea    -0x2d8(%ebp),%eax
 85526d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85526d4:	89 04 24             	mov    %eax,(%esp)
 85526d7:	e8 f0 5a 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 85526dc:	83 ec 04             	sub    $0x4,%esp
 85526df:	8d 85 28 fd ff ff    	lea    -0x2d8(%ebp),%eax
 85526e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85526e9:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 85526ef:	89 04 24             	mov    %eax,(%esp)
 85526f2:	e8 01 60 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 85526f7:	e9 c1 00 00 00       	jmp    85527bd <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x217>
 85526fc:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 8552702:	8d 95 04 fd ff ff    	lea    -0x2fc(%ebp),%edx
 8552708:	89 54 24 04          	mov    %edx,0x4(%esp)
 855270c:	89 04 24             	mov    %eax,(%esp)
 855270f:	e8 64 eb bb ff       	call   8111278 <_ZNKSt3setIjSt4lessIjESaIjEE3endEv>
 8552714:	83 ec 04             	sub    $0x4,%esp
 8552717:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 855271d:	89 04 24             	mov    %eax,(%esp)
 8552720:	e8 c5 5f 00 00       	call   85586ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8552725:	8b 40 04             	mov    0x4(%eax),%eax
 8552728:	89 04 24             	mov    %eax,(%esp)
 855272b:	e8 a4 4d 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 8552730:	89 85 3c fd ff ff    	mov    %eax,-0x2c4(%ebp)
 8552736:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 855273c:	8d 95 3c fd ff ff    	lea    -0x2c4(%ebp),%edx
 8552742:	89 54 24 08          	mov    %edx,0x8(%esp)
 8552746:	8d 95 04 fd ff ff    	lea    -0x2fc(%ebp),%edx
 855274c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552750:	89 04 24             	mov    %eax,(%esp)
 8552753:	e8 da eb bb ff       	call   8111332 <_ZNSt3setIjSt4lessIjESaIjEE4findERKj>
 8552758:	83 ec 04             	sub    $0x4,%esp
 855275b:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 8552761:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552765:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 855276b:	89 04 24             	mov    %eax,(%esp)
 855276e:	e8 f9 8f c5 ff       	call   81ab76c <_ZNKSt23_Rb_tree_const_iteratorIjEeqERKS0_>
 8552773:	84 c0                	test   %al,%al
 8552775:	75 37                	jne    85527ae <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x208>
 8552777:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 855277d:	89 04 24             	mov    %eax,(%esp)
 8552780:	e8 65 5f 00 00       	call   85586ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8552785:	8b 40 04             	mov    0x4(%eax),%eax
 8552788:	8b 55 08             	mov    0x8(%ebp),%edx
 855278b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 855278f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8552792:	89 54 24 08          	mov    %edx,0x8(%esp)
 8552796:	8d 95 1c fd ff ff    	lea    -0x2e4(%ebp),%edx
 855279c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85527a0:	89 04 24             	mov    %eax,(%esp)
 85527a3:	e8 8e f2 ff ff       	call   8551a36 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser>
 85527a8:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 85527ac:	eb 01                	jmp    85527af <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x209>
 85527ae:	90                   	nop
 85527af:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 85527b5:	89 04 24             	mov    %eax,(%esp)
 85527b8:	e8 4b 5f 00 00       	call   8558708 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 85527bd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85527c0:	8d 50 40             	lea    0x40(%eax),%edx
 85527c3:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 85527c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85527cd:	89 04 24             	mov    %eax,(%esp)
 85527d0:	e8 d1 59 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 85527d5:	83 ec 04             	sub    $0x4,%esp
 85527d8:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 85527de:	89 44 24 04          	mov    %eax,0x4(%esp)
 85527e2:	8d 85 2c fd ff ff    	lea    -0x2d4(%ebp),%eax
 85527e8:	89 04 24             	mov    %eax,(%esp)
 85527eb:	e8 08 5f 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 85527f0:	8d 85 2c fd ff ff    	lea    -0x2d4(%ebp),%eax
 85527f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85527fa:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8552800:	89 04 24             	mov    %eax,(%esp)
 8552803:	e8 4c 5f 00 00       	call   8558754 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEneERKS7_>
 8552808:	84 c0                	test   %al,%al
 855280a:	0f 85 ec fe ff ff    	jne    85526fc <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x156>
 8552810:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8552817:	e9 d2 00 00 00       	jmp    85528ee <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x348>
 855281c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 855281f:	6b c0 47             	imul   $0x47,%eax,%eax
 8552822:	05 e0 07 00 00       	add    $0x7e0,%eax
 8552827:	03 45 0c             	add    0xc(%ebp),%eax
 855282a:	83 c0 07             	add    $0x7,%eax
 855282d:	89 85 7c fc ff ff    	mov    %eax,-0x384(%ebp)
 8552833:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8552836:	6b c0 47             	imul   $0x47,%eax,%eax
 8552839:	05 c0 07 00 00       	add    $0x7c0,%eax
 855283e:	03 45 0c             	add    0xc(%ebp),%eax
 8552841:	83 c0 09             	add    $0x9,%eax
 8552844:	89 85 80 fc ff ff    	mov    %eax,-0x380(%ebp)
 855284a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 855284d:	6b c0 47             	imul   $0x47,%eax,%eax
 8552850:	05 a0 07 00 00       	add    $0x7a0,%eax
 8552855:	03 45 0c             	add    0xc(%ebp),%eax
 8552858:	83 c0 10             	add    $0x10,%eax
 855285b:	89 85 84 fc ff ff    	mov    %eax,-0x37c(%ebp)
 8552861:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8552864:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552867:	6b c0 47             	imul   $0x47,%eax,%eax
 855286a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855286d:	05 a0 07 00 00       	add    $0x7a0,%eax
 8552872:	8b 78 0c             	mov    0xc(%eax),%edi
 8552875:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8552878:	8b 55 0c             	mov    0xc(%ebp),%edx
 855287b:	6b c0 47             	imul   $0x47,%eax,%eax
 855287e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552881:	05 a0 07 00 00       	add    $0x7a0,%eax
 8552886:	8b 70 08             	mov    0x8(%eax),%esi
 8552889:	8b 45 c8             	mov    -0x38(%ebp),%eax
 855288c:	8b 55 0c             	mov    0xc(%ebp),%edx
 855288f:	6b c0 47             	imul   $0x47,%eax,%eax
 8552892:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552895:	05 a0 07 00 00       	add    $0x7a0,%eax
 855289a:	8b 58 04             	mov    0x4(%eax),%ebx
 855289d:	8b 45 08             	mov    0x8(%ebp),%eax
 85528a0:	89 04 24             	mov    %eax,(%esp)
 85528a3:	e8 e6 79 b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85528a8:	89 04 24             	mov    %eax,(%esp)
 85528ab:	e8 bc e3 bb ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 85528b0:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85528b7:	00 
 85528b8:	8b 95 7c fc ff ff    	mov    -0x384(%ebp),%edx
 85528be:	89 54 24 18          	mov    %edx,0x18(%esp)
 85528c2:	8b 95 80 fc ff ff    	mov    -0x380(%ebp),%edx
 85528c8:	89 54 24 14          	mov    %edx,0x14(%esp)
 85528cc:	8b 95 84 fc ff ff    	mov    -0x37c(%ebp),%edx
 85528d2:	89 54 24 10          	mov    %edx,0x10(%esp)
 85528d6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85528da:	89 74 24 08          	mov    %esi,0x8(%esp)
 85528de:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85528e2:	89 04 24             	mov    %eax,(%esp)
 85528e5:	e8 32 67 da ff       	call   82f901c <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb>
 85528ea:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 85528ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85528f1:	8b 80 a0 07 00 00    	mov    0x7a0(%eax),%eax
 85528f7:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 85528fa:	0f 9f c0             	setg   %al
 85528fd:	84 c0                	test   %al,%al
 85528ff:	0f 85 17 ff ff ff    	jne    855281c <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x276>
 8552905:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 855290c:	e9 82 00 00 00       	jmp    8552993 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x3ed>
 8552911:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8552914:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8552917:	89 d0                	mov    %edx,%eax
 8552919:	c1 e0 03             	shl    $0x3,%eax
 855291c:	01 d0                	add    %edx,%eax
 855291e:	c1 e0 02             	shl    $0x2,%eax
 8552921:	01 d0                	add    %edx,%eax
 8552923:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8552926:	05 30 0d 00 00       	add    $0xd30,%eax
 855292b:	8b 78 0c             	mov    0xc(%eax),%edi
 855292e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8552931:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8552934:	89 d0                	mov    %edx,%eax
 8552936:	c1 e0 03             	shl    $0x3,%eax
 8552939:	01 d0                	add    %edx,%eax
 855293b:	c1 e0 02             	shl    $0x2,%eax
 855293e:	01 d0                	add    %edx,%eax
 8552940:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8552943:	05 30 0d 00 00       	add    $0xd30,%eax
 8552948:	8b 70 08             	mov    0x8(%eax),%esi
 855294b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 855294e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8552951:	89 d0                	mov    %edx,%eax
 8552953:	c1 e0 03             	shl    $0x3,%eax
 8552956:	01 d0                	add    %edx,%eax
 8552958:	c1 e0 02             	shl    $0x2,%eax
 855295b:	01 d0                	add    %edx,%eax
 855295d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8552960:	05 30 0d 00 00       	add    $0xd30,%eax
 8552965:	8b 58 04             	mov    0x4(%eax),%ebx
 8552968:	8b 45 08             	mov    0x8(%ebp),%eax
 855296b:	89 04 24             	mov    %eax,(%esp)
 855296e:	e8 1b 79 b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8552973:	89 04 24             	mov    %eax,(%esp)
 8552976:	e8 ed ab b8 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 855297b:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 855297f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8552983:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8552987:	89 04 24             	mov    %eax,(%esp)
 855298a:	e8 4f ae de ff       	call   833d7de <_ZN13user_creature12CCreatureMgr16RegistTempPeriodEiii>
 855298f:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8552993:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552996:	8b 80 30 0d 00 00    	mov    0xd30(%eax),%eax
 855299c:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 855299f:	0f 9f c0             	setg   %al
 85529a2:	84 c0                	test   %al,%al
 85529a4:	0f 85 67 ff ff ff    	jne    8552911 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x36b>
 85529aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85529ad:	8b 80 9c 07 00 00    	mov    0x79c(%eax),%eax
 85529b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85529b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85529be:	00 
 85529bf:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85529c2:	89 04 24             	mov    %eax,(%esp)
 85529c5:	e8 86 4f 00 00       	call   8557950 <_ZN8WongWork8CMailBox12SetLoadStateEbl>
 85529ca:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 85529d1:	e9 83 04 00 00       	jmp    8552e59 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x8b3>
 85529d6:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 85529dc:	89 04 24             	mov    %eax,(%esp)
 85529df:	e8 70 8e b7 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85529e4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85529e7:	8b 55 0c             	mov    0xc(%ebp),%edx
 85529ea:	6b c0 61             	imul   $0x61,%eax,%eax
 85529ed:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85529f0:	83 c0 20             	add    $0x20,%eax
 85529f3:	8b 40 0a             	mov    0xa(%eax),%eax
 85529f6:	85 c0                	test   %eax,%eax
 85529f8:	0f 84 c4 02 00 00    	je     8552cc2 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x71c>
 85529fe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552a01:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552a04:	6b c0 61             	imul   $0x61,%eax,%eax
 8552a07:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552a0a:	83 c0 20             	add    $0x20,%eax
 8552a0d:	8b 40 0a             	mov    0xa(%eax),%eax
 8552a10:	83 f8 01             	cmp    $0x1,%eax
 8552a13:	75 4f                	jne    8552a64 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x4be>
 8552a15:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552a18:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552a1b:	6b c0 61             	imul   $0x61,%eax,%eax
 8552a1e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552a21:	83 c0 20             	add    $0x20,%eax
 8552a24:	8b 40 0a             	mov    0xa(%eax),%eax
 8552a27:	89 85 91 fc ff ff    	mov    %eax,-0x36f(%ebp)
 8552a2d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552a30:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552a33:	6b c0 61             	imul   $0x61,%eax,%eax
 8552a36:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552a39:	83 c0 20             	add    $0x20,%eax
 8552a3c:	8b 40 0e             	mov    0xe(%eax),%eax
 8552a3f:	89 85 96 fc ff ff    	mov    %eax,-0x36a(%ebp)
 8552a45:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552a48:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552a4b:	6b c0 61             	imul   $0x61,%eax,%eax
 8552a4e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552a51:	83 c0 20             	add    $0x20,%eax
 8552a54:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 8552a58:	66 89 85 9a fc ff ff 	mov    %ax,-0x366(%ebp)
 8552a5f:	e9 5e 02 00 00       	jmp    8552cc2 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x71c>
 8552a64:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552a67:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552a6a:	6b c0 61             	imul   $0x61,%eax,%eax
 8552a6d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552a70:	83 c0 20             	add    $0x20,%eax
 8552a73:	8b 40 0a             	mov    0xa(%eax),%eax
 8552a76:	89 c3                	mov    %eax,%ebx
 8552a78:	e8 1e 97 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8552a7d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8552a81:	89 04 24             	mov    %eax,(%esp)
 8552a84:	e8 a9 cf e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8552a89:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8552a8c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8552a90:	0f 84 2c 02 00 00    	je     8552cc2 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x71c>
 8552a96:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8552a99:	8b 00                	mov    (%eax),%eax
 8552a9b:	83 c0 08             	add    $0x8,%eax
 8552a9e:	8b 10                	mov    (%eax),%edx
 8552aa0:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552aa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552aaa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8552aad:	89 04 24             	mov    %eax,(%esp)
 8552ab0:	ff d2                	call   *%edx
 8552ab2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552ab5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552ab8:	6b c0 61             	imul   $0x61,%eax,%eax
 8552abb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552abe:	83 c0 29             	add    $0x29,%eax
 8552ac1:	0f b6 00             	movzbl (%eax),%eax
 8552ac4:	88 85 8f fc ff ff    	mov    %al,-0x371(%ebp)
 8552aca:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552acd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552ad0:	6b c0 61             	imul   $0x61,%eax,%eax
 8552ad3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552ad6:	83 c0 20             	add    $0x20,%eax
 8552ad9:	8b 40 0a             	mov    0xa(%eax),%eax
 8552adc:	89 85 91 fc ff ff    	mov    %eax,-0x36f(%ebp)
 8552ae2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552ae5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552ae8:	6b c0 61             	imul   $0x61,%eax,%eax
 8552aeb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552aee:	83 c0 20             	add    $0x20,%eax
 8552af1:	8b 40 0e             	mov    0xe(%eax),%eax
 8552af4:	89 85 96 fc ff ff    	mov    %eax,-0x36a(%ebp)
 8552afa:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552afd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552b00:	6b c0 61             	imul   $0x61,%eax,%eax
 8552b03:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552b06:	83 c0 32             	add    $0x32,%eax
 8552b09:	0f b6 00             	movzbl (%eax),%eax
 8552b0c:	0f b6 c0             	movzbl %al,%eax
 8552b0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552b13:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552b19:	89 04 24             	mov    %eax,(%esp)
 8552b1c:	e8 c7 dc bf ff       	call   81507e8 <_ZN10Inven_Item11SetItemAttrEh>
 8552b21:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552b24:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552b27:	6b c0 61             	imul   $0x61,%eax,%eax
 8552b2a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552b2d:	83 c0 20             	add    $0x20,%eax
 8552b30:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 8552b34:	66 89 85 9a fc ff ff 	mov    %ax,-0x366(%ebp)
 8552b3b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552b3e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552b41:	6b c0 61             	imul   $0x61,%eax,%eax
 8552b44:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552b47:	83 c0 20             	add    $0x20,%eax
 8552b4a:	8b 40 15             	mov    0x15(%eax),%eax
 8552b4d:	89 85 9c fc ff ff    	mov    %eax,-0x364(%ebp)
 8552b53:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552b56:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552b59:	6b c0 61             	imul   $0x61,%eax,%eax
 8552b5c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552b5f:	83 c0 30             	add    $0x30,%eax
 8552b62:	8b 50 09             	mov    0x9(%eax),%edx
 8552b65:	89 95 a4 fc ff ff    	mov    %edx,-0x35c(%ebp)
 8552b6b:	8b 50 0d             	mov    0xd(%eax),%edx
 8552b6e:	89 95 a8 fc ff ff    	mov    %edx,-0x358(%ebp)
 8552b74:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 8552b78:	66 89 85 ac fc ff ff 	mov    %ax,-0x354(%ebp)
 8552b7f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552b82:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552b85:	6b c0 61             	imul   $0x61,%eax,%eax
 8552b88:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552b8b:	83 c0 30             	add    $0x30,%eax
 8552b8e:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 8552b92:	0f b7 d0             	movzwl %ax,%edx
 8552b95:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552b98:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8552b9b:	6b c0 61             	imul   $0x61,%eax,%eax
 8552b9e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8552ba1:	83 c0 43             	add    $0x43,%eax
 8552ba4:	0f b6 00             	movzbl (%eax),%eax
 8552ba7:	0f b6 c0             	movzbl %al,%eax
 8552baa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8552bae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552bb2:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552bb8:	83 c0 11             	add    $0x11,%eax
 8552bbb:	89 04 24             	mov    %eax,(%esp)
 8552bbe:	e8 21 15 f6 ff       	call   84b40e4 <_ZN17stAmplifyOption_t6assignEht>
 8552bc3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552bc6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552bc9:	6b c0 61             	imul   $0x61,%eax,%eax
 8552bcc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552bcf:	83 c0 30             	add    $0x30,%eax
 8552bd2:	8b 50 16             	mov    0x16(%eax),%edx
 8552bd5:	89 95 b4 fc ff ff    	mov    %edx,-0x34c(%ebp)
 8552bdb:	8b 50 1a             	mov    0x1a(%eax),%edx
 8552bde:	89 95 b8 fc ff ff    	mov    %edx,-0x348(%ebp)
 8552be4:	8b 50 1e             	mov    0x1e(%eax),%edx
 8552be7:	89 95 bc fc ff ff    	mov    %edx,-0x344(%ebp)
 8552bed:	0f b7 40 22          	movzwl 0x22(%eax),%eax
 8552bf1:	66 89 85 c0 fc ff ff 	mov    %ax,-0x340(%ebp)
 8552bf8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552bfb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552bfe:	6b c0 61             	imul   $0x61,%eax,%eax
 8552c01:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552c04:	83 c0 54             	add    $0x54,%eax
 8552c07:	0f b6 00             	movzbl (%eax),%eax
 8552c0a:	0f b6 c0             	movzbl %al,%eax
 8552c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552c11:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552c17:	83 c0 33             	add    $0x33,%eax
 8552c1a:	89 04 24             	mov    %eax,(%esp)
 8552c1d:	e8 9a 48 00 00       	call   85574bc <_ZN19UpgradeSeparateInfo37SetUpgradeSeparateAndTradeRestrictionEh>
 8552c22:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552c25:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552c28:	6b c0 61             	imul   $0x61,%eax,%eax
 8552c2b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552c2e:	83 c0 60             	add    $0x60,%eax
 8552c31:	0f b6 00             	movzbl (%eax),%eax
 8552c34:	3c 04                	cmp    $0x4,%al
 8552c36:	75 19                	jne    8552c51 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x6ab>
 8552c38:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552c3e:	89 04 24             	mov    %eax,(%esp)
 8552c41:	e8 96 d5 bc ff       	call   81201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>
 8552c46:	84 c0                	test   %al,%al
 8552c48:	74 07                	je     8552c51 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x6ab>
 8552c4a:	b8 01 00 00 00       	mov    $0x1,%eax
 8552c4f:	eb 05                	jmp    8552c56 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x6b0>
 8552c51:	b8 00 00 00 00       	mov    $0x0,%eax
 8552c56:	84 c0                	test   %al,%al
 8552c58:	74 68                	je     8552cc2 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x71c>
 8552c5a:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552c60:	89 04 24             	mov    %eax,(%esp)
 8552c63:	e8 ba d7 bc ff       	call   8120422 <_ZNK10Inven_Item18GetTradeLimitCountEv>
 8552c68:	88 45 e3             	mov    %al,-0x1d(%ebp)
 8552c6b:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8552c6f:	83 e8 01             	sub    $0x1,%eax
 8552c72:	0f b6 c0             	movzbl %al,%eax
 8552c75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552c79:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552c7f:	89 04 24             	mov    %eax,(%esp)
 8552c82:	e8 6f d7 bc ff       	call   81203f6 <_ZN10Inven_Item18SetTradeLimitCountEh>
 8552c87:	8b 85 91 fc ff ff    	mov    -0x36f(%ebp),%eax
 8552c8d:	8b 55 08             	mov    0x8(%ebp),%edx
 8552c90:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8552c96:	c7 44 24 14 04 00 00 	movl   $0x4,0x14(%esp)
 8552c9d:	00 
 8552c9e:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 8552ca5:	ff 
 8552ca6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8552caa:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8552cb1:	ff 
 8552cb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8552cb9:	00 
 8552cba:	89 14 24             	mov    %edx,(%esp)
 8552cbd:	e8 92 40 13 00       	call   8686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>
 8552cc2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8552cc9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552ccc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552ccf:	6b c0 61             	imul   $0x61,%eax,%eax
 8552cd2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552cd5:	83 c0 59             	add    $0x59,%eax
 8552cd8:	0f b6 00             	movzbl (%eax),%eax
 8552cdb:	84 c0                	test   %al,%al
 8552cdd:	74 09                	je     8552ce8 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x742>
 8552cdf:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 8552ce6:	eb 1d                	jmp    8552d05 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x75f>
 8552ce8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552ceb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552cee:	6b c0 61             	imul   $0x61,%eax,%eax
 8552cf1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552cf4:	83 c0 5a             	add    $0x5a,%eax
 8552cf7:	0f b6 00             	movzbl (%eax),%eax
 8552cfa:	84 c0                	test   %al,%al
 8552cfc:	74 07                	je     8552d05 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x75f>
 8552cfe:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 8552d05:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 8552d0b:	89 04 24             	mov    %eax,(%esp)
 8552d0e:	e8 9b 4b 00 00       	call   85578ae <_ZN8WongWork8CMailBox17stAddNewMailInputC1Ev>
 8552d13:	8d 85 8f fc ff ff    	lea    -0x371(%ebp),%eax
 8552d19:	89 85 f0 fc ff ff    	mov    %eax,-0x310(%ebp)
 8552d1f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552d22:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552d25:	6b c0 61             	imul   $0x61,%eax,%eax
 8552d28:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552d2b:	83 c0 5b             	add    $0x5b,%eax
 8552d2e:	0f b6 00             	movzbl (%eax),%eax
 8552d31:	88 85 e8 fc ff ff    	mov    %al,-0x318(%ebp)
 8552d37:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552d3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552d3d:	6b c0 61             	imul   $0x61,%eax,%eax
 8552d40:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552d43:	83 c0 50             	add    $0x50,%eax
 8552d46:	8b 40 0c             	mov    0xc(%eax),%eax
 8552d49:	89 85 d8 fc ff ff    	mov    %eax,-0x328(%ebp)
 8552d4f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8552d52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552d55:	6b d2 61             	imul   $0x61,%edx,%edx
 8552d58:	8b 04 02             	mov    (%edx,%eax,1),%eax
 8552d5b:	89 85 cc fc ff ff    	mov    %eax,-0x334(%ebp)
 8552d61:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552d64:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552d67:	6b c0 61             	imul   $0x61,%eax,%eax
 8552d6a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552d6d:	83 c0 20             	add    $0x20,%eax
 8552d70:	8b 40 05             	mov    0x5(%eax),%eax
 8552d73:	89 85 d4 fc ff ff    	mov    %eax,-0x32c(%ebp)
 8552d79:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8552d7c:	89 85 e0 fc ff ff    	mov    %eax,-0x320(%ebp)
 8552d82:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552d85:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552d88:	6b c0 61             	imul   $0x61,%eax,%eax
 8552d8b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552d8e:	83 c0 50             	add    $0x50,%eax
 8552d91:	8b 40 05             	mov    0x5(%eax),%eax
 8552d94:	89 85 e4 fc ff ff    	mov    %eax,-0x31c(%ebp)
 8552d9a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8552d9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552da0:	6b d2 61             	imul   $0x61,%edx,%edx
 8552da3:	8b 44 02 04          	mov    0x4(%edx,%eax,1),%eax
 8552da7:	89 85 d0 fc ff ff    	mov    %eax,-0x330(%ebp)
 8552dad:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552db0:	6b c0 61             	imul   $0x61,%eax,%eax
 8552db3:	03 45 0c             	add    0xc(%ebp),%eax
 8552db6:	83 c0 08             	add    $0x8,%eax
 8552db9:	89 85 ec fc ff ff    	mov    %eax,-0x314(%ebp)
 8552dbf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552dc2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552dc5:	6b c0 61             	imul   $0x61,%eax,%eax
 8552dc8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552dcb:	83 c0 60             	add    $0x60,%eax
 8552dce:	0f b6 00             	movzbl (%eax),%eax
 8552dd1:	0f b6 c0             	movzbl %al,%eax
 8552dd4:	89 85 dc fc ff ff    	mov    %eax,-0x324(%ebp)
 8552dda:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 8552de0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552de4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552de7:	89 04 24             	mov    %eax,(%esp)
 8552dea:	e8 6b f1 ff ff       	call   8551f5a <_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE>
 8552def:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8552df2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8552df6:	74 59                	je     8552e51 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x8ab>
 8552df8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8552dfb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552dfe:	6b c0 61             	imul   $0x61,%eax,%eax
 8552e01:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8552e04:	83 c0 50             	add    $0x50,%eax
 8552e07:	8b 40 0c             	mov    0xc(%eax),%eax
 8552e0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552e0e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552e11:	89 04 24             	mov    %eax,(%esp)
 8552e14:	e8 93 49 00 00       	call   85577ac <_ZN8WongWork8CMailBox19FindPackageLoadLackEj>
 8552e19:	84 c0                	test   %al,%al
 8552e1b:	75 37                	jne    8552e54 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x8ae>
 8552e1d:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 8552e21:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8552e25:	83 f0 01             	xor    $0x1,%eax
 8552e28:	84 c0                	test   %al,%al
 8552e2a:	74 29                	je     8552e55 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x8af>
 8552e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8552e2f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8552e33:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8552e36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8552e3a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552e40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552e44:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8552e47:	89 04 24             	mov    %eax,(%esp)
 8552e4a:	e8 e7 eb ff ff       	call   8551a36 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser>
 8552e4f:	eb 04                	jmp    8552e55 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x8af>
 8552e51:	90                   	nop
 8552e52:	eb 01                	jmp    8552e55 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x8af>
 8552e54:	90                   	nop
 8552e55:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8552e59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552e5c:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 8552e62:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8552e65:	0f 9f c0             	setg   %al
 8552e68:	84 c0                	test   %al,%al
 8552e6a:	0f 85 66 fb ff ff    	jne    85529d6 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x430>
 8552e70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552e73:	8b 80 98 07 00 00    	mov    0x798(%eax),%eax
 8552e79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552e7d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552e80:	89 04 24             	mov    %eax,(%esp)
 8552e83:	e8 8c 4a 00 00       	call   8557914 <_ZN8WongWork8CMailBox21SetNotLoadedMailCountEi>
 8552e88:	80 7d bb 00          	cmpb   $0x0,-0x45(%ebp)
 8552e8c:	74 4d                	je     8552edb <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x935>
 8552e8e:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552e94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552e98:	8b 45 08             	mov    0x8(%ebp),%eax
 8552e9b:	89 04 24             	mov    %eax,(%esp)
 8552e9e:	e8 75 22 00 00       	call   8555118 <_ZN8WongWork14CMailBoxHelper21MakeMailBoxListPacketEP5CUserP11PacketGuard>
 8552ea3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552ea6:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 8552eac:	85 c0                	test   %eax,%eax
 8552eae:	7e 0b                	jle    8552ebb <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x915>
 8552eb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8552eb3:	89 04 24             	mov    %eax,(%esp)
 8552eb6:	e8 27 f5 ff ff       	call   85523e2 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser>
 8552ebb:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552ebe:	89 04 24             	mov    %eax,(%esp)
 8552ec1:	e8 a0 49 00 00       	call   8557866 <_ZN8WongWork8CMailBox20ClearLetterKeepCountEv>
 8552ec6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8552ecd:	00 
 8552ece:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552ed1:	89 04 24             	mov    %eax,(%esp)
 8552ed4:	e8 c3 49 00 00       	call   855789c <_ZN8WongWork8CMailBox20SetLoadedLetterCountEi>
 8552ed9:	eb 3a                	jmp    8552f15 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x96f>
 8552edb:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8552ede:	89 44 24 08          	mov    %eax,0x8(%esp)
 8552ee2:	8d 85 00 fd ff ff    	lea    -0x300(%ebp),%eax
 8552ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552eec:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552ef2:	89 04 24             	mov    %eax,(%esp)
 8552ef5:	e8 2e dc bb ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 8552efa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552efd:	8b 80 98 07 00 00    	mov    0x798(%eax),%eax
 8552f03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552f07:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552f0d:	89 04 24             	mov    %eax,(%esp)
 8552f10:	e8 8f 6f b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8552f15:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552f18:	89 04 24             	mov    %eax,(%esp)
 8552f1b:	e8 2c 16 ce ff       	call   823454c <_ZN8WongWork8CMailBox20GetLoadedLetterCountEv>
 8552f20:	8b 55 0c             	mov    0xc(%ebp),%edx
 8552f23:	8b 92 2a 33 00 00    	mov    0x332a(%edx),%edx
 8552f29:	01 d0                	add    %edx,%eax
 8552f2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552f2f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552f32:	89 04 24             	mov    %eax,(%esp)
 8552f35:	e8 62 49 00 00       	call   855789c <_ZN8WongWork8CMailBox20SetLoadedLetterCountEi>
 8552f3a:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8552f41:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552f47:	89 04 24             	mov    %eax,(%esp)
 8552f4a:	e8 fd db bb ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8552f4f:	89 85 00 fd ff ff    	mov    %eax,-0x300(%ebp)
 8552f55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552f58:	8b 80 18 10 00 00    	mov    0x1018(%eax),%eax
 8552f5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552f62:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8552f68:	89 04 24             	mov    %eax,(%esp)
 8552f6b:	e8 34 6f b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8552f70:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 8552f76:	8d 95 04 fd ff ff    	lea    -0x2fc(%ebp),%edx
 8552f7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552f80:	89 04 24             	mov    %eax,(%esp)
 8552f83:	e8 e0 57 00 00       	call   8558768 <_ZNKSt3setIjSt4lessIjESaIjEE5beginEv>
 8552f88:	83 ec 04             	sub    $0x4,%esp
 8552f8b:	e9 45 02 00 00       	jmp    85531d5 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xc2f>
 8552f90:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 8552f96:	89 04 24             	mov    %eax,(%esp)
 8552f99:	e8 0e 58 00 00       	call   85587ac <_ZNKSt23_Rb_tree_const_iteratorIjEdeEv>
 8552f9e:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8552fa1:	8d 8a 90 00 00 00    	lea    0x90(%edx),%ecx
 8552fa7:	8d 95 f4 fc ff ff    	lea    -0x30c(%ebp),%edx
 8552fad:	89 44 24 08          	mov    %eax,0x8(%esp)
 8552fb1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8552fb5:	89 14 24             	mov    %edx,(%esp)
 8552fb8:	e8 fd 57 00 00       	call   85587ba <_ZNSt3mapIj15SIG_LETTER_INFOSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 8552fbd:	83 ec 04             	sub    $0x4,%esp
 8552fc0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8552fc3:	8d 90 90 00 00 00    	lea    0x90(%eax),%edx
 8552fc9:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 8552fcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552fd3:	89 04 24             	mov    %eax,(%esp)
 8552fd6:	e8 0b 58 00 00       	call   85587e6 <_ZNSt3mapIj15SIG_LETTER_INFOSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8552fdb:	83 ec 04             	sub    $0x4,%esp
 8552fde:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 8552fe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552fe8:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8552fee:	89 04 24             	mov    %eax,(%esp)
 8552ff1:	e8 16 58 00 00       	call   855880c <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEneERKS4_>
 8552ff6:	84 c0                	test   %al,%al
 8552ff8:	0f 84 c9 01 00 00    	je     85531c7 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xc21>
 8552ffe:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553004:	89 04 24             	mov    %eax,(%esp)
 8553007:	e8 14 58 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 855300c:	8b 40 04             	mov    0x4(%eax),%eax
 855300f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553013:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553019:	89 04 24             	mov    %eax,(%esp)
 855301c:	e8 1b 89 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8553021:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553027:	89 04 24             	mov    %eax,(%esp)
 855302a:	e8 f1 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 855302f:	8b 40 08             	mov    0x8(%eax),%eax
 8553032:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553036:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 855303c:	89 04 24             	mov    %eax,(%esp)
 855303f:	e8 f8 88 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8553044:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 855304a:	89 04 24             	mov    %eax,(%esp)
 855304d:	e8 ce 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 8553052:	83 c0 0c             	add    $0xc,%eax
 8553055:	89 04 24             	mov    %eax,(%esp)
 8553058:	e8 53 b3 b2 ff       	call   807e3b0 <strlen@plt>
 855305d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553061:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553067:	89 04 24             	mov    %eax,(%esp)
 855306a:	e8 cd 88 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 855306f:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553075:	89 04 24             	mov    %eax,(%esp)
 8553078:	e8 a3 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 855307d:	83 c0 0c             	add    $0xc,%eax
 8553080:	89 04 24             	mov    %eax,(%esp)
 8553083:	e8 28 b3 b2 ff       	call   807e3b0 <strlen@plt>
 8553088:	89 c3                	mov    %eax,%ebx
 855308a:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553090:	89 04 24             	mov    %eax,(%esp)
 8553093:	e8 88 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 8553098:	83 c0 0c             	add    $0xc,%eax
 855309b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855309f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85530a3:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85530a9:	89 04 24             	mov    %eax,(%esp)
 85530ac:	e8 33 43 c6 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 85530b1:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 85530b7:	89 04 24             	mov    %eax,(%esp)
 85530ba:	e8 61 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 85530bf:	83 c0 29             	add    $0x29,%eax
 85530c2:	89 04 24             	mov    %eax,(%esp)
 85530c5:	e8 e6 b2 b2 ff       	call   807e3b0 <strlen@plt>
 85530ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85530ce:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85530d4:	89 04 24             	mov    %eax,(%esp)
 85530d7:	e8 60 88 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85530dc:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 85530e2:	89 04 24             	mov    %eax,(%esp)
 85530e5:	e8 36 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 85530ea:	83 c0 29             	add    $0x29,%eax
 85530ed:	89 04 24             	mov    %eax,(%esp)
 85530f0:	e8 bb b2 b2 ff       	call   807e3b0 <strlen@plt>
 85530f5:	89 c3                	mov    %eax,%ebx
 85530f7:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 85530fd:	89 04 24             	mov    %eax,(%esp)
 8553100:	e8 1b 57 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 8553105:	83 c0 29             	add    $0x29,%eax
 8553108:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855310c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553110:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553116:	89 04 24             	mov    %eax,(%esp)
 8553119:	e8 c6 42 c6 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 855311e:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553124:	89 04 24             	mov    %eax,(%esp)
 8553127:	e8 f4 56 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 855312c:	8b 40 04             	mov    0x4(%eax),%eax
 855312f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553133:	8b 45 0c             	mov    0xc(%ebp),%eax
 8553136:	89 04 24             	mov    %eax,(%esp)
 8553139:	e8 0e f4 ff ff       	call   855254c <_Z13isUnlimitMailPK16SIG_MAILBOX_LISTi>
 855313e:	84 c0                	test   %al,%al
 8553140:	74 18                	je     855315a <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xbb4>
 8553142:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8553149:	00 
 855314a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553150:	89 04 24             	mov    %eax,(%esp)
 8553153:	e8 e4 87 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8553158:	eb 26                	jmp    8553180 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xbda>
 855315a:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553160:	89 04 24             	mov    %eax,(%esp)
 8553163:	e8 b8 56 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 8553168:	8b 80 29 01 00 00    	mov    0x129(%eax),%eax
 855316e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553172:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553178:	89 04 24             	mov    %eax,(%esp)
 855317b:	e8 bc 87 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8553180:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 8553186:	89 04 24             	mov    %eax,(%esp)
 8553189:	e8 92 56 00 00       	call   8558820 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15SIG_LETTER_INFOEEptEv>
 855318e:	0f b7 80 2d 01 00 00 	movzwl 0x12d(%eax),%eax
 8553195:	98                   	cwtl
 8553196:	89 44 24 04          	mov    %eax,0x4(%esp)
 855319a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85531a0:	89 04 24             	mov    %eax,(%esp)
 85531a3:	e8 fc 6c b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85531a8:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 85531ac:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85531af:	8d 90 90 00 00 00    	lea    0x90(%eax),%edx
 85531b5:	8b 85 f4 fc ff ff    	mov    -0x30c(%ebp),%eax
 85531bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85531bf:	89 14 24             	mov    %edx,(%esp)
 85531c2:	e8 67 56 00 00       	call   855882e <_ZNSt3mapIj15SIG_LETTER_INFOSt4lessIjESaISt4pairIKjS0_EEE5eraseESt17_Rb_tree_iteratorIS5_E>
 85531c7:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 85531cd:	89 04 24             	mov    %eax,(%esp)
 85531d0:	e8 b9 55 00 00       	call   855878e <_ZNSt23_Rb_tree_const_iteratorIjEppEv>
 85531d5:	8d 85 40 fd ff ff    	lea    -0x2c0(%ebp),%eax
 85531db:	8d 95 04 fd ff ff    	lea    -0x2fc(%ebp),%edx
 85531e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85531e5:	89 04 24             	mov    %eax,(%esp)
 85531e8:	e8 8b e0 bb ff       	call   8111278 <_ZNKSt3setIjSt4lessIjESaIjEE3endEv>
 85531ed:	83 ec 04             	sub    $0x4,%esp
 85531f0:	8d 85 40 fd ff ff    	lea    -0x2c0(%ebp),%eax
 85531f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85531fa:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 8553200:	89 04 24             	mov    %eax,(%esp)
 8553203:	e8 96 e0 bb ff       	call   811129e <_ZNKSt23_Rb_tree_const_iteratorIjEneERKS0_>
 8553208:	84 c0                	test   %al,%al
 855320a:	0f 85 80 fd ff ff    	jne    8552f90 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x9ea>
 8553210:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8553217:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 855321e:	e9 ef 02 00 00       	jmp    8553512 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xf6c>
 8553223:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8553226:	8b 55 0c             	mov    0xc(%ebp),%edx
 8553229:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 855322f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8553232:	05 10 10 00 00       	add    $0x1010,%eax
 8553237:	8b 40 0c             	mov    0xc(%eax),%eax
 855323a:	89 44 24 04          	mov    %eax,0x4(%esp)
 855323e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8553241:	89 04 24             	mov    %eax,(%esp)
 8553244:	e8 63 45 00 00       	call   85577ac <_ZN8WongWork8CMailBox19FindPackageLoadLackEj>
 8553249:	83 f0 01             	xor    $0x1,%eax
 855324c:	84 c0                	test   %al,%al
 855324e:	0f 84 b3 01 00 00    	je     8553407 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xe61>
 8553254:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8553257:	8b 55 0c             	mov    0xc(%ebp),%edx
 855325a:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553260:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8553263:	05 10 10 00 00       	add    $0x1010,%eax
 8553268:	8b 40 0c             	mov    0xc(%eax),%eax
 855326b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855326f:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553275:	89 04 24             	mov    %eax,(%esp)
 8553278:	e8 bf 86 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 855327d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8553280:	8b 55 0c             	mov    0xc(%ebp),%edx
 8553283:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553289:	8d 04 02             	lea    (%edx,%eax,1),%eax
 855328c:	05 10 10 00 00       	add    $0x1010,%eax
 8553291:	8b 40 10             	mov    0x10(%eax),%eax
 8553294:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553298:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 855329e:	89 04 24             	mov    %eax,(%esp)
 85532a1:	e8 96 86 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85532a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85532a9:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 85532af:	05 10 10 00 00       	add    $0x1010,%eax
 85532b4:	03 45 0c             	add    0xc(%ebp),%eax
 85532b7:	83 c0 14             	add    $0x14,%eax
 85532ba:	89 04 24             	mov    %eax,(%esp)
 85532bd:	e8 ee b0 b2 ff       	call   807e3b0 <strlen@plt>
 85532c2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85532c5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85532c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85532cc:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85532d2:	89 04 24             	mov    %eax,(%esp)
 85532d5:	e8 62 86 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85532da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85532dd:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 85532e3:	05 10 10 00 00       	add    $0x1010,%eax
 85532e8:	03 45 0c             	add    0xc(%ebp),%eax
 85532eb:	8d 50 14             	lea    0x14(%eax),%edx
 85532ee:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85532f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85532f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85532f9:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85532ff:	89 04 24             	mov    %eax,(%esp)
 8553302:	e8 69 84 cd ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 8553307:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855330a:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553310:	05 30 10 00 00       	add    $0x1030,%eax
 8553315:	03 45 0c             	add    0xc(%ebp),%eax
 8553318:	83 c0 11             	add    $0x11,%eax
 855331b:	89 04 24             	mov    %eax,(%esp)
 855331e:	e8 8d b0 b2 ff       	call   807e3b0 <strlen@plt>
 8553323:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8553326:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8553329:	89 44 24 04          	mov    %eax,0x4(%esp)
 855332d:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553333:	89 04 24             	mov    %eax,(%esp)
 8553336:	e8 01 86 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 855333b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855333e:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553344:	05 30 10 00 00       	add    $0x1030,%eax
 8553349:	03 45 0c             	add    0xc(%ebp),%eax
 855334c:	8d 50 11             	lea    0x11(%eax),%edx
 855334f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8553352:	89 44 24 08          	mov    %eax,0x8(%esp)
 8553356:	89 54 24 04          	mov    %edx,0x4(%esp)
 855335a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553360:	89 04 24             	mov    %eax,(%esp)
 8553363:	e8 08 84 cd ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 8553368:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855336b:	8b 55 0c             	mov    0xc(%ebp),%edx
 855336e:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553374:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8553377:	05 10 10 00 00       	add    $0x1010,%eax
 855337c:	8b 40 0c             	mov    0xc(%eax),%eax
 855337f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553383:	8b 45 0c             	mov    0xc(%ebp),%eax
 8553386:	89 04 24             	mov    %eax,(%esp)
 8553389:	e8 be f1 ff ff       	call   855254c <_Z13isUnlimitMailPK16SIG_MAILBOX_LISTi>
 855338e:	84 c0                	test   %al,%al
 8553390:	74 18                	je     85533aa <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xe04>
 8553392:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8553399:	00 
 855339a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85533a0:	89 04 24             	mov    %eax,(%esp)
 85533a3:	e8 94 85 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85533a8:	eb 29                	jmp    85533d3 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xe2d>
 85533aa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85533ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 85533b0:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 85533b6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85533b9:	05 30 11 00 00       	add    $0x1130,%eax
 85533be:	8b 40 11             	mov    0x11(%eax),%eax
 85533c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85533c5:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85533cb:	89 04 24             	mov    %eax,(%esp)
 85533ce:	e8 69 85 b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85533d3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85533d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85533d9:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 85533df:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85533e2:	05 30 11 00 00       	add    $0x1130,%eax
 85533e7:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 85533eb:	98                   	cwtl
 85533ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85533f0:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85533f6:	89 04 24             	mov    %eax,(%esp)
 85533f9:	e8 a6 6a b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85533fe:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 8553402:	e9 81 00 00 00       	jmp    8553488 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xee2>
 8553407:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855340a:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553410:	05 10 10 00 00       	add    $0x1010,%eax
 8553415:	03 45 0c             	add    0xc(%ebp),%eax
 8553418:	8d 48 0c             	lea    0xc(%eax),%ecx
 855341b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855341e:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553424:	05 10 10 00 00       	add    $0x1010,%eax
 8553429:	03 45 0c             	add    0xc(%ebp),%eax
 855342c:	8d 50 0c             	lea    0xc(%eax),%edx
 855342f:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 8553435:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8553439:	89 54 24 04          	mov    %edx,0x4(%esp)
 855343d:	89 04 24             	mov    %eax,(%esp)
 8553440:	e8 03 54 00 00       	call   8558848 <_ZSt9make_pairIRKjRK15SIG_LETTER_INFOESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 8553445:	83 ec 04             	sub    $0x4,%esp
 8553448:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 855344e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553452:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 8553458:	89 04 24             	mov    %eax,(%esp)
 855345b:	e8 26 54 00 00       	call   8558886 <_ZNSt4pairIKj15SIG_LETTER_INFOEC1IjS1_EEOS_IT_T0_E>
 8553460:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8553463:	8d 88 90 00 00 00    	lea    0x90(%eax),%ecx
 8553469:	8d 85 48 fd ff ff    	lea    -0x2b8(%ebp),%eax
 855346f:	8d 95 50 fd ff ff    	lea    -0x2b0(%ebp),%edx
 8553475:	89 54 24 08          	mov    %edx,0x8(%esp)
 8553479:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 855347d:	89 04 24             	mov    %eax,(%esp)
 8553480:	e8 5d 54 00 00       	call   85588e2 <_ZNSt3mapIj15SIG_LETTER_INFOSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 8553485:	83 ec 04             	sub    $0x4,%esp
 8553488:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 855348b:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 8553491:	05 10 10 00 00       	add    $0x1010,%eax
 8553496:	03 45 0c             	add    0xc(%ebp),%eax
 8553499:	8d 58 0c             	lea    0xc(%eax),%ebx
 855349c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 855349f:	89 04 24             	mov    %eax,(%esp)
 85534a2:	e8 a5 43 00 00       	call   855784c <_ZN8WongWork8CMailBox20GetLastLoadLetterIdxEv>
 85534a7:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85534aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85534ae:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85534b1:	89 04 24             	mov    %eax,(%esp)
 85534b4:	e8 78 c0 b2 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 85534b9:	8b 00                	mov    (%eax),%eax
 85534bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85534bf:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85534c2:	89 04 24             	mov    %eax,(%esp)
 85534c5:	e8 8e 43 00 00       	call   8557858 <_ZN8WongWork8CMailBox20SetLastLoadLetterIdxEj>
 85534ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85534cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 85534d0:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 85534d6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85534d9:	05 30 11 00 00       	add    $0x1130,%eax
 85534de:	0f b7 40 15          	movzwl 0x15(%eax),%eax
 85534e2:	66 83 f8 03          	cmp    $0x3,%ax
 85534e6:	75 26                	jne    855350e <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xf68>
 85534e8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85534eb:	8b 55 0c             	mov    0xc(%ebp),%edx
 85534ee:	69 c0 2b 01 00 00    	imul   $0x12b,%eax,%eax
 85534f4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85534f7:	05 10 10 00 00       	add    $0x1010,%eax
 85534fc:	8b 40 0c             	mov    0xc(%eax),%eax
 85534ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553503:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8553506:	89 04 24             	mov    %eax,(%esp)
 8553509:	e8 14 9d f9 ff       	call   84ed222 <_ZN8WongWork8CMailBox21InsertLetterKeepCountEj>
 855350e:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8553512:	8b 45 0c             	mov    0xc(%ebp),%eax
 8553515:	8b 80 18 10 00 00    	mov    0x1018(%eax),%eax
 855351b:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 855351e:	0f 9f c0             	setg   %al
 8553521:	84 c0                	test   %al,%al
 8553523:	0f 85 fa fc ff ff    	jne    8553223 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0xc7d>
 8553529:	8b 45 c0             	mov    -0x40(%ebp),%eax
 855352c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8553530:	8d 85 00 fd ff ff    	lea    -0x300(%ebp),%eax
 8553536:	89 44 24 04          	mov    %eax,0x4(%esp)
 855353a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553540:	89 04 24             	mov    %eax,(%esp)
 8553543:	e8 c0 33 bc ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 8553548:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855354f:	00 
 8553550:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553556:	89 04 24             	mov    %eax,(%esp)
 8553559:	e8 fa 83 b7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 855355e:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553564:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553568:	8b 45 08             	mov    0x8(%ebp),%eax
 855356b:	89 04 24             	mov    %eax,(%esp)
 855356e:	e8 47 50 0f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8553573:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8553577:	83 f0 01             	xor    $0x1,%eax
 855357a:	84 c0                	test   %al,%al
 855357c:	0f 84 8a 00 00 00    	je     855360c <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x1066>
 8553582:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553588:	89 04 24             	mov    %eax,(%esp)
 855358b:	e8 56 83 b7 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8553590:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 8553597:	00 
 8553598:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 855359f:	00 
 85535a0:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85535a6:	89 04 24             	mov    %eax,(%esp)
 85535a9:	e8 4e 83 b7 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85535ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85535b5:	00 
 85535b6:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85535bc:	89 04 24             	mov    %eax,(%esp)
 85535bf:	e8 5c 83 b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85535c4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85535c7:	89 04 24             	mov    %eax,(%esp)
 85535ca:	e8 8b 0f ce ff       	call   823455a <_ZN8WongWork8CMailBox21GetNotLoadedMailCountEv>
 85535cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85535d3:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85535d9:	89 04 24             	mov    %eax,(%esp)
 85535dc:	e8 c3 68 b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85535e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85535e8:	00 
 85535e9:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85535ef:	89 04 24             	mov    %eax,(%esp)
 85535f2:	e8 61 83 b7 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85535f7:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 85535fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553601:	8b 45 08             	mov    0x8(%ebp),%eax
 8553604:	89 04 24             	mov    %eax,(%esp)
 8553607:	e8 ae 4f 0f 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 855360c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8553611:	8d 85 04 fd ff ff    	lea    -0x2fc(%ebp),%eax
 8553617:	89 04 24             	mov    %eax,(%esp)
 855361a:	e8 ab 80 c5 ff       	call   81ab6ca <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 855361f:	eb 36                	jmp    8553657 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x10b1>
 8553621:	89 d3                	mov    %edx,%ebx
 8553623:	89 c6                	mov    %eax,%esi
 8553625:	8d 85 04 fd ff ff    	lea    -0x2fc(%ebp),%eax
 855362b:	89 04 24             	mov    %eax,(%esp)
 855362e:	e8 97 80 c5 ff       	call   81ab6ca <_ZNSt3setIjSt4lessIjESaIjEED1Ev>
 8553633:	89 f0                	mov    %esi,%eax
 8553635:	89 da                	mov    %ebx,%edx
 8553637:	eb 00                	jmp    8553639 <_ZN8WongWork14CMailBoxHelper14SetMailBoxInfoEP5CUserPK16SIG_MAILBOX_LIST+0x1093>
 8553639:	89 d3                	mov    %edx,%ebx
 855363b:	89 c6                	mov    %eax,%esi
 855363d:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 8553643:	89 04 24             	mov    %eax,(%esp)
 8553646:	e8 35 a8 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 855364b:	89 f0                	mov    %esi,%eax
 855364d:	89 da                	mov    %ebx,%edx
 855364f:	89 04 24             	mov    %eax,(%esp)
 8553652:	e8 f9 00 59 00       	call   8ae3750 <_Unwind_Resume>
 8553657:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 855365d:	89 04 24             	mov    %eax,(%esp)
 8553660:	e8 1b a8 03 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8553665:	89 d8                	mov    %ebx,%eax
 8553667:	8d 65 f4             	lea    -0xc(%ebp),%esp
 855366a:	83 c4 00             	add    $0x0,%esp
 855366d:	5b                   	pop    %ebx
 855366e:	5e                   	pop    %esi
 855366f:	5f                   	pop    %edi
 8553670:	5d                   	pop    %ebp
 8553671:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::SetMailBoxInfo @ 0x85525a6

/* WongWork::CMailBoxHelper::SetMailBoxInfo(CUser*, SIG_MAILBOX_LIST const*) */

undefined4 WongWork::CMailBoxHelper::SetMailBoxInfo(CUser *param_1,SIG_MAILBOX_LIST *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CAvatarItemMgr *this;
  CInventory *pCVar7;
  int iVar8;
  CDataManager *this_00;
  int iVar9;
  size_t sVar10;
  size_t *psVar11;
  undefined4 uVar12;
  SIG_MAILBOX_LIST local_375 [2];
  int local_373;
  undefined4 local_36e;
  undefined2 local_36a;
  undefined4 local_368;
  stAmplifyOption_t asStack_364 [4];
  undefined4 local_360;
  undefined4 local_35c;
  undefined2 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined2 local_344;
  UpgradeSeparateInfo aUStack_342 [10];
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  uint local_328;
  undefined4 local_324;
  undefined4 local_320;
  SIG_MAILBOX_LIST local_31c;
  SIG_MAILBOX_LIST *local_318;
  SIG_MAILBOX_LIST *local_314;
  uint local_310;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_30c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_308 [4];
  int local_304;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_300 [24];
  PacketGuard local_2e8 [12];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_2dc [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_2d8 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_2d4 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_2d0 [4];
  _Rb_tree_const_iterator<unsigned_int> local_2cc [4];
  undefined4 local_2c8;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_2c4 [4];
  map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
  local_2c0 [4];
  pair local_2bc [8];
  pair<unsigned_int_const,SIG_LETTER_INFO> local_2b4 [304];
  uint local_184 [76];
  size_t local_54;
  CMailBox *local_50;
  byte local_49;
  long local_48;
  int local_44;
  size_t local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  CMail *local_2c;
  int *local_28;
  char local_21;
  int local_20;
  
  local_50 = (CMailBox *)CUser::GetMailBox(param_1);
  if (local_50 == (CMailBox *)0x0) {
    uVar12 = 0;
  }
  else {
    CMailBox::incMailLoadCount(local_50);
    local_49 = CMailBox::IsLoaded(local_50);
    local_49 = local_49 ^ 1;
    PacketGuard::PacketGuard(local_2e8);
    local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 08552612 to 08552616 has its CatchHandler @ 08553639 */
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::set(local_300);
                    /* try { // try from 0855263c to 0855360b has its CatchHandler @ 08553621 */
    CMailBox::SetPackageLoadLack(local_50,(uint *)(param_2 + 0x333a),0x14,(set *)local_300);
    local_44 = 0;
    local_304 = 0;
    if (local_49 != 1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2e8,0,0x61);
      local_304 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2e8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + 0x794));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,1);
      std::
      map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
      ::begin(local_2dc);
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
      _Rb_tree_const_iterator(local_308,(_Rb_tree_iterator *)local_2dc);
      while( true ) {
        std::
        map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
        ::end(local_2d4);
        std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
        _Rb_tree_const_iterator(local_2d8,(_Rb_tree_iterator *)local_2d4);
        cVar3 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator!=(local_308,(_Rb_tree_const_iterator *)local_2d8);
        if (cVar3 == '\0') break;
        std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_2d0);
        iVar9 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->(local_308);
        local_2c8 = CMailBox::CMail::GetLetterId(*(CMail **)(iVar9 + 4));
        std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
                  ((uint *)local_2cc);
        cVar3 = std::_Rb_tree_const_iterator<unsigned_int>::operator==
                          (local_2cc,(_Rb_tree_const_iterator *)local_2d0);
        if (cVar3 == '\0') {
          iVar9 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                  ::operator->(local_308);
          CMailBox::CMail::MakePacket(*(CMail **)(iVar9 + 4),local_2e8,local_48,param_1);
          local_44 = local_44 + 1;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
        operator++(local_308);
      }
    }
    for (local_3c = 0; local_3c < *(int *)(param_2 + 0x7a0); local_3c = local_3c + 1) {
      iVar4 = local_3c * 0x47;
      iVar5 = local_3c * 0x47;
      iVar6 = local_3c * 0x47;
      iVar9 = *(int *)(param_2 + local_3c * 0x47 + 0x7ac);
      iVar1 = *(int *)(param_2 + local_3c * 0x47 + 0x7a8);
      iVar8 = *(int *)(param_2 + local_3c * 0x47 + 0x7a4);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      this = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar7);
      CAvatarItemMgr::RegistItem
                (this,iVar8,iVar1,iVar9,(char *)(param_2 + iVar6 + 0x7b0),
                 (stAvatarEmblemInfo_t *)(param_2 + iVar5 + 0x7c9),
                 (stAvatarExpansionInfo_t *)(param_2 + iVar4 + 0x7e7),false);
    }
    for (local_38 = 0; local_38 < *(int *)(param_2 + 0xd30); local_38 = local_38 + 1) {
      iVar9 = *(int *)(param_2 + local_38 * 0x25 + 0xd38);
      iVar1 = *(int *)(param_2 + local_38 * 0x25 + 0xd34);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar8 = CInventory::GetCreatureMgrW(pCVar7);
      user_creature::CCreatureMgr::RegistTempPeriod(iVar8,iVar1,iVar9);
    }
    CMailBox::SetLoadState(local_50,true,*(long *)(param_2 + 0x79c));
    for (local_34 = 0; local_34 < *(int *)(param_2 + 0x794); local_34 = local_34 + 1) {
      Inven_Item::Inven_Item((Inven_Item *)local_375);
      if (*(int *)(param_2 + local_34 * 0x61 + 0x2a) != 0) {
        if (*(int *)(param_2 + local_34 * 0x61 + 0x2a) == 1) {
          local_373 = *(int *)(param_2 + local_34 * 0x61 + 0x2a);
          local_36e = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x2e);
          local_36a = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x33);
        }
        else {
          iVar9 = *(int *)(param_2 + local_34 * 0x61 + 0x2a);
          this_00 = (CDataManager *)G_CDataManager();
          local_28 = (int *)CDataManager::find_item(this_00,iVar9);
          if (local_28 != (int *)0x0) {
            (**(code **)(*local_28 + 8))(local_28,local_375);
            local_375[0] = param_2[local_34 * 0x61 + 0x29];
            local_373 = *(int *)(param_2 + local_34 * 0x61 + 0x2a);
            local_36e = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x2e);
            Inven_Item::SetItemAttr((Inven_Item *)local_375,(uchar)param_2[local_34 * 0x61 + 0x32]);
            local_36a = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x33);
            local_368 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x35);
            local_360 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x39);
            local_35c = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x3d);
            local_358 = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x41);
            stAmplifyOption_t::assign
                      (asStack_364,(uchar)param_2[local_34 * 0x61 + 0x43],
                       *(ushort *)(param_2 + local_34 * 0x61 + 0x44));
            local_350 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x46);
            local_34c = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x4a);
            local_348 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x4e);
            local_344 = *(undefined2 *)(param_2 + local_34 * 0x61 + 0x52);
            UpgradeSeparateInfo::SetUpgradeSeparateAndTradeRestriction
                      (aUStack_342,(uchar)param_2[local_34 * 0x61 + 0x54]);
            if ((param_2[local_34 * 0x61 + 0x60] == (SIG_MAILBOX_LIST)0x4) &&
               (cVar3 = IsTradeLimitAttachTypeItem((Inven_Item *)local_375), cVar3 != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              local_21 = Inven_Item::GetTradeLimitCount((Inven_Item *)local_375);
              Inven_Item::SetTradeLimitCount((Inven_Item *)local_375,local_21 + 0xff);
              cUserHistoryLog::ChangeItemLimitCount
                        ((cUserHistoryLog *)(param_1 + 0x79700),1,-1,local_373,-1,4);
            }
          }
        }
      }
      local_30 = 0;
      if (param_2[local_34 * 0x61 + 0x59] == (SIG_MAILBOX_LIST)0x0) {
        if (param_2[local_34 * 0x61 + 0x5a] != (SIG_MAILBOX_LIST)0x0) {
          local_30 = 2;
        }
      }
      else {
        local_30 = 1;
      }
      CMailBox::stAddNewMailInput::stAddNewMailInput((stAddNewMailInput *)&local_338);
      local_314 = local_375;
      local_31c = param_2[local_34 * 0x61 + 0x5b];
      local_32c = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x5c);
      local_338 = *(undefined4 *)(param_2 + local_34 * 0x61);
      local_330 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x25);
      local_324 = local_30;
      local_320 = *(undefined4 *)(param_2 + local_34 * 0x61 + 0x55);
      local_334 = *(undefined4 *)(param_2 + local_34 * 0x61 + 4);
      local_318 = param_2 + local_34 * 0x61 + 8;
      local_328 = (uint)(byte)param_2[local_34 * 0x61 + 0x60];
      local_2c = (CMail *)CMailBox::AddNewMail(local_50,(stAddNewMailInput *)&local_338);
      if (((local_2c != (CMail *)0x0) &&
          (cVar3 = CMailBox::FindPackageLoadLack
                             (local_50,*(uint *)(param_2 + local_34 * 0x61 + 0x5c)), cVar3 == '\0'))
         && (local_44 = local_44 + 1, local_49 != 1)) {
        CMailBox::CMail::MakePacket(local_2c,local_2e8,local_48,param_1);
      }
    }
    CMailBox::SetNotLoadedMailCount(local_50,*(int *)(param_2 + 0x798));
    if (local_49 == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,&local_304,local_44);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + 0x798));
    }
    else {
      MakeMailBoxListPacket(param_1,local_2e8);
      if (0 < *(int *)(param_2 + 0x794)) {
        SetPeriodCheckTimer(param_1);
      }
      CMailBox::ClearLetterKeepCount(local_50);
      CMailBox::SetLoadedLetterCount(local_50,0);
    }
    iVar9 = CMailBox::GetLoadedLetterCount(local_50);
    CMailBox::SetLoadedLetterCount(local_50,iVar9 + *(int *)(param_2 + 0x332a));
    local_44 = 0;
    local_304 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2e8);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + 0x1018));
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::begin(local_30c);
    while( true ) {
      std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_2c4);
      cVar3 = std::_Rb_tree_const_iterator<unsigned_int>::operator!=
                        ((_Rb_tree_const_iterator<unsigned_int> *)local_30c,
                         (_Rb_tree_const_iterator *)local_2c4);
      if (cVar3 == '\0') break;
      std::_Rb_tree_const_iterator<unsigned_int>::operator*
                ((_Rb_tree_const_iterator<unsigned_int> *)local_30c);
      std::
      map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
      ::find(&local_310);
      std::
      map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
      ::end(local_2c0);
      cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                         &local_310,(_Rb_tree_iterator *)local_2c0);
      if (cVar3 != '\0') {
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,*(int *)(iVar9 + 4));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,*(int *)(iVar9 + 8));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0xc));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0xc));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2e8,(char *)(iVar9 + 0xc),sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0x29));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        sVar10 = strlen((char *)(iVar9 + 0x29));
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2e8,(char *)(iVar9 + 0x29),sVar10);
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        cVar3 = isUnlimitMail(param_2,*(int *)(iVar9 + 4));
        if (cVar3 == '\0') {
          iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                            ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                             &local_310);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,*(int *)(iVar9 + 0x129));
        }
        else {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,0);
        }
        iVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,SIG_LETTER_INFO>> *)
                           &local_310);
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_2e8,(int)*(short *)(iVar9 + 0x12d));
        local_44 = local_44 + 1;
        std::
        map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
        ::erase((map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
                 *)(local_50 + 0x90),local_310);
      }
      std::_Rb_tree_const_iterator<unsigned_int>::operator++
                ((_Rb_tree_const_iterator<unsigned_int> *)local_30c);
    }
    local_40 = 0;
    for (local_20 = 0; local_20 < *(int *)(param_2 + 0x1018); local_20 = local_20 + 1) {
      cVar3 = CMailBox::FindPackageLoadLack(local_50,*(uint *)(param_2 + local_20 * 299 + 0x101c));
      if (cVar3 == '\x01') {
        std::make_pair<unsigned_int_const&,SIG_LETTER_INFO_const&>
                  (local_184,(SIG_LETTER_INFO *)(param_2 + local_20 * 299 + 0x101c));
        std::pair<unsigned_int_const,SIG_LETTER_INFO>::pair<unsigned_int,SIG_LETTER_INFO>
                  (local_2b4,(pair *)local_184);
        std::
        map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
        ::insert(local_2bc);
      }
      else {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + local_20 * 299 + 0x101c));
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + local_20 * 299 + 0x1020));
        local_40 = strlen((char *)(param_2 + local_20 * 299 + 0x1024));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,local_40);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2e8,(char *)(param_2 + local_20 * 299 + 0x1024),
                   local_40);
        local_40 = strlen((char *)(param_2 + local_20 * 299 + 0x1041));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,local_40);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_2e8,(char *)(param_2 + local_20 * 299 + 0x1041),
                   local_40);
        cVar3 = isUnlimitMail(param_2,*(int *)(param_2 + local_20 * 299 + 0x101c));
        if (cVar3 == '\0') {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2e8,*(int *)(param_2 + local_20 * 299 + 0x1141));
        }
        else {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2e8,0);
        }
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_2e8,
                   (int)*(short *)(param_2 + local_20 * 299 + 0x1145));
        local_44 = local_44 + 1;
      }
      iVar9 = local_20 * 299;
      local_54 = CMailBox::GetLastLoadLetterIdx(local_50);
      psVar11 = std::max<size_t>(&local_54,(size_t *)(param_2 + iVar9 + 0x101c));
      CMailBox::SetLastLoadLetterIdx(local_50,*psVar11);
      if (*(short *)(param_2 + local_20 * 299 + 0x1145) == 3) {
        CMailBox::InsertLetterKeepCount((uint)local_50);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,&local_304,local_44);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2e8,true);
    CUser::Send(param_1,local_2e8);
    if (local_49 != 1) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_2e8);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2e8,1,99);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2e8,1);
      iVar9 = CMailBox::GetNotLoadedMailCount(local_50);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2e8,iVar9);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2e8,true);
      CUser::Send(param_1,local_2e8);
    }
    uVar12 = 1;
                    /* try { // try from 0855361a to 0855361e has its CatchHandler @ 08553639 */
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set(local_300);
    PacketGuard::~PacketGuard(local_2e8);
  }
  return uVar12;
}

```

---

## SetPeriodCheckTimer

```asm
// === 085523e2 WongWork::CMailBoxHelper::SetPeriodCheckTimer  [0x085523e2-0x855254b] ===
 85523e2:	55                   	push   %ebp
 85523e3:	89 e5                	mov    %esp,%ebp
 85523e5:	57                   	push   %edi
 85523e6:	56                   	push   %esi
 85523e7:	53                   	push   %ebx
 85523e8:	83 ec 5c             	sub    $0x5c,%esp
 85523eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85523ee:	89 04 24             	mov    %eax,(%esp)
 85523f1:	e8 16 de cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 85523f6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85523f9:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85523fd:	0f 84 3d 01 00 00    	je     8552540 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0x15e>
 8552403:	c7 45 dc 00 18 15 00 	movl   $0x151800,-0x24(%ebp)
 855240a:	c7 45 e0 00 18 15 00 	movl   $0x151800,-0x20(%ebp)
 8552411:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8552418:	e8 81 98 b7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 855241d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8552420:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8552423:	01 45 e0             	add    %eax,-0x20(%ebp)
 8552426:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8552429:	89 45 cc             	mov    %eax,-0x34(%ebp)
 855242c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 855242f:	8d 50 40             	lea    0x40(%eax),%edx
 8552432:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8552435:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552439:	89 04 24             	mov    %eax,(%esp)
 855243c:	e8 8b 5d 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 8552441:	83 ec 04             	sub    $0x4,%esp
 8552444:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8552447:	8d 50 40             	lea    0x40(%eax),%edx
 855244a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 855244d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552451:	89 04 24             	mov    %eax,(%esp)
 8552454:	e8 4d 5d 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8552459:	83 ec 04             	sub    $0x4,%esp
 855245c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 855245f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552463:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8552466:	89 04 24             	mov    %eax,(%esp)
 8552469:	e8 8a 62 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 855246e:	eb 58                	jmp    85524c8 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0xe6>
 8552470:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8552473:	89 04 24             	mov    %eax,(%esp)
 8552476:	e8 a9 5d 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 855247b:	8b 40 04             	mov    0x4(%eax),%eax
 855247e:	89 04 24             	mov    %eax,(%esp)
 8552481:	e8 0a 51 00 00       	call   8557590 <_ZNK8WongWork8CMailBox5CMail9isUnlimitEv>
 8552486:	84 c0                	test   %al,%al
 8552488:	75 32                	jne    85524bc <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0xda>
 855248a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 855248d:	89 04 24             	mov    %eax,(%esp)
 8552490:	e8 8f 5d 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8552495:	8b 40 04             	mov    0x4(%eax),%eax
 8552498:	89 04 24             	mov    %eax,(%esp)
 855249b:	e8 52 50 00 00       	call   85574f2 <_ZNK8WongWork8CMailBox5CMail9GetPeriodEv>
 85524a0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85524a3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85524a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85524aa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85524ad:	89 04 24             	mov    %eax,(%esp)
 85524b0:	e8 84 62 00 00       	call   8558739 <_ZSt3minIlERKT_S2_S2_>
 85524b5:	8b 00                	mov    (%eax),%eax
 85524b7:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85524ba:	eb 01                	jmp    85524bd <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0xdb>
 85524bc:	90                   	nop
 85524bd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85524c0:	89 04 24             	mov    %eax,(%esp)
 85524c3:	e8 3e 5d 00 00       	call   8558206 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 85524c8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85524cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85524cf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85524d2:	89 04 24             	mov    %eax,(%esp)
 85524d5:	e8 4b 62 00 00       	call   8558725 <_ZStneISt4pairIKjPN8WongWork8CMailBox5CMailEEEbRKSt17_Rb_tree_iteratorIT_ERKSt23_Rb_tree_const_iteratorIS8_E>
 85524da:	84 c0                	test   %al,%al
 85524dc:	75 92                	jne    8552470 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0x8e>
 85524de:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85524e1:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85524e4:	74 5b                	je     8552541 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0x15f>
 85524e6:	8b 45 08             	mov    0x8(%ebp),%eax
 85524e9:	89 04 24             	mov    %eax,(%esp)
 85524ec:	e8 5d 97 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85524f1:	89 c7                	mov    %eax,%edi
 85524f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85524f6:	89 04 24             	mov    %eax,(%esp)
 85524f9:	e8 94 d1 cd ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 85524fe:	89 c6                	mov    %eax,%esi
 8552500:	8b 45 08             	mov    0x8(%ebp),%eax
 8552503:	89 04 24             	mov    %eax,(%esp)
 8552506:	e8 8b 67 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 855250b:	89 c3                	mov    %eax,%ebx
 855250d:	e8 6a 3f ba ff       	call   80f647c <_Z12G_TimerQueuev>
 8552512:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8552519:	00 
 855251a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 855251e:	89 74 24 10          	mov    %esi,0x10(%esp)
 8552522:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 8552529:	00 
 855252a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855252e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8552535:	00 
 8552536:	89 04 24             	mov    %eax,(%esp)
 8552539:	e8 d8 e8 0d 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 855253e:	eb 01                	jmp    8552541 <_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser+0x15f>
 8552540:	90                   	nop
 8552541:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8552544:	83 c4 00             	add    $0x0,%esp
 8552547:	5b                   	pop    %ebx
 8552548:	5e                   	pop    %esi
 8552549:	5f                   	pop    %edi
 855254a:	5d                   	pop    %ebp
 855254b:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::SetPeriodCheckTimer @ 0x85523e2

/* WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser*) */

void WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_40 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_3c [4];
  int local_38;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_34 [4];
  long local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  local_2c = CUser::GetMailBox(param_1);
  if (local_2c != 0) {
    local_28 = 0x151800;
    local_24 = 0x151800;
    local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_38 = local_24 + local_20;
    local_24 = local_38;
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin(local_3c);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_34);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_40,(_Rb_tree_iterator *)local_34);
    while( true ) {
      bVar2 = std::operator!=((_Rb_tree_iterator *)local_3c,(_Rb_tree_const_iterator *)local_40);
      if (!bVar2) break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)local_3c);
      cVar1 = CMailBox::CMail::isUnlimit(*(CMail **)(iVar3 + 4));
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                            *)local_3c);
        local_30 = CMailBox::CMail::GetPeriod(*(CMail **)(iVar3 + 4));
        plVar4 = std::min<long>(&local_38,&local_30);
        local_38 = *plVar4;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                 local_3c);
    }
    if (local_38 != local_24) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar6 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
      uVar7 = CUser::GetUID(param_1);
      pTVar8 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar8,0,uVar7,8,uVar6,uVar5,0);
    }
  }
  return;
}

```

---

## _DoGetPackage

```asm
// === 08554650 WongWork::CMailBoxHelper::_DoGetPackage  [0x08554650-0x85549dd] ===
 8554650:	55                   	push   %ebp
 8554651:	89 e5                	mov    %esp,%ebp
 8554653:	56                   	push   %esi
 8554654:	53                   	push   %ebx
 8554655:	81 ec 10 01 00 00    	sub    $0x110,%esp
 855465b:	8b 45 14             	mov    0x14(%ebp),%eax
 855465e:	88 85 14 ff ff ff    	mov    %al,-0xec(%ebp)
 8554664:	8b 45 08             	mov    0x8(%ebp),%eax
 8554667:	89 04 24             	mov    %eax,(%esp)
 855466a:	e8 9d bb cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 855466f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8554672:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8554676:	75 0a                	jne    8554682 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x32>
 8554678:	b8 00 00 00 00       	mov    $0x0,%eax
 855467d:	e9 51 03 00 00       	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 8554682:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8554689:	8b 45 0c             	mov    0xc(%ebp),%eax
 855468c:	89 04 24             	mov    %eax,(%esp)
 855468f:	e8 82 2e 00 00       	call   8557516 <_ZNK8WongWork8CMailBox5CMail15GetPackageMoneyEv>
 8554694:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8554697:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 855469b:	0f 95 c0             	setne  %al
 855469e:	84 c0                	test   %al,%al
 85546a0:	0f 84 9f 01 00 00    	je     8554845 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f5>
 85546a6:	80 bd 14 ff ff ff 00 	cmpb   $0x0,-0xec(%ebp)
 85546ad:	0f 84 c7 00 00 00    	je     855477a <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x12a>
 85546b3:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 85546b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85546bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85546c0:	89 04 24             	mov    %eax,(%esp)
 85546c3:	e8 5a 2e 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 85546c8:	83 ec 04             	sub    $0x4,%esp
 85546cb:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 85546d1:	89 04 24             	mov    %eax,(%esp)
 85546d4:	e8 39 f2 ff ff       	call   8553912 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm>
 85546d9:	84 c0                	test   %al,%al
 85546db:	74 31                	je     855470e <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0xbe>
 85546dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85546e0:	89 04 24             	mov    %eax,(%esp)
 85546e3:	e8 0e e4 13 00       	call   8692af6 <_ZN5CUser12GetCeraPointEv>
 85546e8:	03 45 ec             	add    -0x14(%ebp),%eax
 85546eb:	3d 00 ca 9a 3b       	cmp    $0x3b9aca00,%eax
 85546f0:	0f 97 c0             	seta   %al
 85546f3:	84 c0                	test   %al,%al
 85546f5:	0f 84 4a 01 00 00    	je     8554845 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f5>
 85546fb:	8b 45 18             	mov    0x18(%ebp),%eax
 85546fe:	c7 00 0b 00 00 00    	movl   $0xb,(%eax)
 8554704:	b8 00 00 00 00       	mov    $0x0,%eax
 8554709:	e9 c5 02 00 00       	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 855470e:	c7 45 f0 ff ff ff 7f 	movl   $0x7fffffff,-0x10(%ebp)
 8554715:	8b 45 08             	mov    0x8(%ebp),%eax
 8554718:	89 04 24             	mov    %eax,(%esp)
 855471b:	e8 52 c9 ba ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8554720:	89 c6                	mov    %eax,%esi
 8554722:	8b 45 08             	mov    0x8(%ebp),%eax
 8554725:	89 04 24             	mov    %eax,(%esp)
 8554728:	e8 8b 5b b8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 855472d:	89 c3                	mov    %eax,%ebx
 855472f:	e8 67 7a b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8554734:	89 74 24 08          	mov    %esi,0x8(%esp)
 8554738:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 855473c:	89 04 24             	mov    %eax,(%esp)
 855473f:	e8 9c c5 e0 ff       	call   8360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>
 8554744:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8554747:	8b 45 08             	mov    0x8(%ebp),%eax
 855474a:	89 04 24             	mov    %eax,(%esp)
 855474d:	e8 36 5a c2 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8554752:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8554755:	29 c2                	sub    %eax,%edx
 8554757:	8b 45 ec             	mov    -0x14(%ebp),%eax
 855475a:	39 c2                	cmp    %eax,%edx
 855475c:	0f 9c c0             	setl   %al
 855475f:	84 c0                	test   %al,%al
 8554761:	0f 84 de 00 00 00    	je     8554845 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f5>
 8554767:	8b 45 18             	mov    0x18(%ebp),%eax
 855476a:	c7 00 0a 00 00 00    	movl   $0xa,(%eax)
 8554770:	b8 00 00 00 00       	mov    $0x0,%eax
 8554775:	e9 59 02 00 00       	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 855477a:	8d 45 93             	lea    -0x6d(%ebp),%eax
 855477d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8554780:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554784:	89 04 24             	mov    %eax,(%esp)
 8554787:	e8 96 2d 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 855478c:	83 ec 04             	sub    $0x4,%esp
 855478f:	8b 45 95             	mov    -0x6b(%ebp),%eax
 8554792:	89 04 24             	mov    %eax,(%esp)
 8554795:	e8 78 f1 ff ff       	call   8553912 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm>
 855479a:	83 f0 01             	xor    $0x1,%eax
 855479d:	84 c0                	test   %al,%al
 855479f:	74 56                	je     85547f7 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1a7>
 85547a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85547a4:	89 04 24             	mov    %eax,(%esp)
 85547a7:	e8 52 2d 00 00       	call   85574fe <_ZNK8WongWork8CMailBox5CMail13GetSenderNameEv>
 85547ac:	89 c3                	mov    %eax,%ebx
 85547ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85547b1:	89 04 24             	mov    %eax,(%esp)
 85547b4:	e8 4f 88 f9 ff       	call   84ed008 <_ZN5CUser14GetGoldControlEv>
 85547b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85547bd:	89 04 24             	mov    %eax,(%esp)
 85547c0:	e8 1b 37 d3 ff       	call   8287ee0 <_ZN16Secu_GoldControl15SetMailCharNameEPKc>
 85547c5:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 85547c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85547cb:	89 04 24             	mov    %eax,(%esp)
 85547ce:	e8 bb 5a b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85547d3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85547da:	00 
 85547db:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85547e2:	00 
 85547e3:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 85547ea:	00 
 85547eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85547ef:	89 04 24             	mov    %eax,(%esp)
 85547f2:	e8 a5 aa fa ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 85547f7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85547fe:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8554805:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554808:	8d 55 e0             	lea    -0x20(%ebp),%edx
 855480b:	89 54 24 08          	mov    %edx,0x8(%esp)
 855480f:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8554812:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554816:	89 04 24             	mov    %eax,(%esp)
 8554819:	e8 f0 40 00 00       	call   855890e <_ZSt9make_pairI14ENUM_ITEMSPACEN10Inven_Item10INVEN_SLOTEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 855481e:	83 ec 04             	sub    $0x4,%esp
 8554821:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8554824:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554828:	8d 45 d0             	lea    -0x30(%ebp),%eax
 855482b:	89 04 24             	mov    %eax,(%esp)
 855482e:	e8 25 41 00 00       	call   8558958 <_ZNSt4pairIiiEC1I14ENUM_ITEMSPACEN10Inven_Item10INVEN_SLOTEEEOS_IT_T0_E>
 8554833:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8554836:	89 44 24 04          	mov    %eax,0x4(%esp)
 855483a:	8b 45 10             	mov    0x10(%ebp),%eax
 855483d:	89 04 24             	mov    %eax,(%esp)
 8554840:	e8 c1 8d b8 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8554845:	8d 85 19 ff ff ff    	lea    -0xe7(%ebp),%eax
 855484b:	8b 55 0c             	mov    0xc(%ebp),%edx
 855484e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554852:	89 04 24             	mov    %eax,(%esp)
 8554855:	e8 c8 2c 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 855485a:	83 ec 04             	sub    $0x4,%esp
 855485d:	8b 85 1b ff ff ff    	mov    -0xe5(%ebp),%eax
 8554863:	85 c0                	test   %eax,%eax
 8554865:	0f 84 63 01 00 00    	je     85549ce <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x37e>
 855486b:	8b 85 1b ff ff ff    	mov    -0xe5(%ebp),%eax
 8554871:	83 f8 01             	cmp    $0x1,%eax
 8554874:	75 30                	jne    85548a6 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x256>
 8554876:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 855487d:	8b 55 18             	mov    0x18(%ebp),%edx
 8554880:	89 54 24 10          	mov    %edx,0x10(%esp)
 8554884:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8554888:	8b 45 10             	mov    0x10(%ebp),%eax
 855488b:	89 44 24 08          	mov    %eax,0x8(%esp)
 855488f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554892:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554896:	8b 45 08             	mov    0x8(%ebp),%eax
 8554899:	89 04 24             	mov    %eax,(%esp)
 855489c:	e8 d1 ed ff ff       	call   8553672 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>
 85548a1:	e9 2d 01 00 00       	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 85548a6:	8b 95 1b ff ff ff    	mov    -0xe5(%ebp),%edx
 85548ac:	a1 24 f8 41 09       	mov    0x941f824,%eax
 85548b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85548b5:	89 04 24             	mov    %eax,(%esp)
 85548b8:	e8 4d b2 c2 ff       	call   817fb0a <_ZN20AvatarRouletteServer15isAvatarPotteryEm>
 85548bd:	84 c0                	test   %al,%al
 85548bf:	74 25                	je     85548e6 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x296>
 85548c1:	0f b6 95 14 ff ff ff 	movzbl -0xec(%ebp),%edx
 85548c8:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 85548ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 85548d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85548d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85548d9:	89 04 24             	mov    %eax,(%esp)
 85548dc:	e8 a9 b9 c2 ff       	call   818028a <_ZN10AvatarCoin10GetPackageEP5CUserib>
 85548e1:	e9 ed 00 00 00       	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 85548e6:	8b 85 1b ff ff ff    	mov    -0xe5(%ebp),%eax
 85548ec:	89 c3                	mov    %eax,%ebx
 85548ee:	e8 a8 78 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85548f3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85548f7:	89 04 24             	mov    %eax,(%esp)
 85548fa:	e8 33 b1 e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85548ff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8554902:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8554906:	75 13                	jne    855491b <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2cb>
 8554908:	8b 45 18             	mov    0x18(%ebp),%eax
 855490b:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8554911:	b8 00 00 00 00       	mov    $0x0,%eax
 8554916:	e9 b8 00 00 00       	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 855491b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855491e:	8b 00                	mov    (%eax),%eax
 8554920:	83 c0 10             	add    $0x10,%eax
 8554923:	8b 10                	mov    (%eax),%edx
 8554925:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8554928:	89 04 24             	mov    %eax,(%esp)
 855492b:	ff d2                	call   *%edx
 855492d:	84 c0                	test   %al,%al
 855492f:	74 2d                	je     855495e <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x30e>
 8554931:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 8554938:	8b 55 18             	mov    0x18(%ebp),%edx
 855493b:	89 54 24 10          	mov    %edx,0x10(%esp)
 855493f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8554943:	8b 45 10             	mov    0x10(%ebp),%eax
 8554946:	89 44 24 08          	mov    %eax,0x8(%esp)
 855494a:	8b 45 0c             	mov    0xc(%ebp),%eax
 855494d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554951:	8b 45 08             	mov    0x8(%ebp),%eax
 8554954:	89 04 24             	mov    %eax,(%esp)
 8554957:	e8 40 f8 ff ff       	call   855419c <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>
 855495c:	eb 75                	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 855495e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8554961:	8b 00                	mov    (%eax),%eax
 8554963:	83 c0 14             	add    $0x14,%eax
 8554966:	8b 10                	mov    (%eax),%edx
 8554968:	8b 45 f4             	mov    -0xc(%ebp),%eax
 855496b:	89 04 24             	mov    %eax,(%esp)
 855496e:	ff d2                	call   *%edx
 8554970:	84 c0                	test   %al,%al
 8554972:	74 2d                	je     85549a1 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x351>
 8554974:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 855497b:	8b 55 18             	mov    0x18(%ebp),%edx
 855497e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8554982:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8554986:	8b 45 10             	mov    0x10(%ebp),%eax
 8554989:	89 44 24 08          	mov    %eax,0x8(%esp)
 855498d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554990:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554994:	8b 45 08             	mov    0x8(%ebp),%eax
 8554997:	89 04 24             	mov    %eax,(%esp)
 855499a:	e8 dd fa ff ff       	call   855447c <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>
 855499f:	eb 32                	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 85549a1:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 85549a8:	8b 55 18             	mov    0x18(%ebp),%edx
 85549ab:	89 54 24 10          	mov    %edx,0x10(%esp)
 85549af:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85549b3:	8b 45 10             	mov    0x10(%ebp),%eax
 85549b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85549ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 85549bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85549c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85549c4:	89 04 24             	mov    %eax,(%esp)
 85549c7:	e8 6a ef ff ff       	call   8553936 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR>
 85549cc:	eb 05                	jmp    85549d3 <_ZN8WongWork14CMailBoxHelper13_DoGetPackageEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x383>
 85549ce:	b8 01 00 00 00       	mov    $0x1,%eax
 85549d3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85549d6:	83 c4 00             	add    $0x0,%esp
 85549d9:	5b                   	pop    %ebx
 85549da:	5e                   	pop    %esi
 85549db:	5d                   	pop    %ebp
 85549dc:	c3                   	ret
 85549dd:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::_DoGetPackage @ 0x8554650

/* WongWork::CMailBoxHelper::_DoGetPackage(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackage
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  Secu_GoldControl *this;
  CInventory *pCVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  ulong local_e9;
  int local_e4;
  ulong local_ac;
  ulong local_6f;
  pair<int,int> local_34 [8];
  ENUM_ITEMSPACE local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_1c = CUser::GetMailBox(param_1);
  if (local_1c == 0) {
    return 0;
  }
  local_18 = 0;
  local_18 = CMailBox::CMail::GetPackageMoney(param_2);
  if (local_18 != 0) {
    if (param_4) {
      CMailBox::CMail::GetPackageItem();
      cVar1 = IsCeraPointItem(local_ac);
      if (cVar1 == '\0') {
        local_14 = 0x7fffffff;
        pcVar3 = (char *)CUser::get_acc_name(param_1);
        iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        pCVar6 = (CDataManager *)G_CDataManager();
        local_14 = CDataManager::GetMoneyLimitPerLevel(pCVar6,iVar2,pcVar3);
        iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        if (local_14 - iVar2 < local_18) {
          *(undefined4 *)param_5 = 10;
          return 0;
        }
      }
      else {
        iVar2 = CUser::GetCeraPoint(param_1);
        if (1000000000 < (uint)(iVar2 + local_18)) {
          *(undefined4 *)param_5 = 0xb;
          return 0;
        }
      }
    }
    else {
      CMailBox::CMail::GetPackageItem();
      cVar1 = IsCeraPointItem(local_6f);
      if (cVar1 != '\x01') {
        pcVar3 = (char *)CMailBox::CMail::GetSenderName(param_2);
        this = (Secu_GoldControl *)CUser::GetGoldControl(param_1);
        Secu_GoldControl::SetMailCharName(this,pcVar3);
        iVar2 = local_18;
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::gain_money(pCVar4,iVar2,0xe,1,0);
      }
      local_24 = 0;
      local_20 = 0;
      std::make_pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_2c,(INVEN_SLOT *)&local_20);
      std::pair<int,int>::pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_34,local_2c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_34);
    }
  }
  CMailBox::CMail::GetPackageItem();
  if (local_e9 == 0) {
    uVar5 = 1;
  }
  else if (local_e9 == 1) {
    uVar5 = _DoGetPackageCoin(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    cVar1 = AvatarRouletteServer::isAvatarPottery(GlobalData::s_pAvatarRoulette,local_e9);
    if (cVar1 == '\0') {
      pCVar6 = (CDataManager *)G_CDataManager();
      local_10 = (int *)CDataManager::find_item(pCVar6,local_e9);
      if (local_10 == (int *)0x0) {
        *(undefined4 *)param_5 = 1;
        uVar5 = 0;
      }
      else {
        cVar1 = (**(code **)(*local_10 + 0x10))(local_10);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*local_10 + 0x14))(local_10);
          if (cVar1 == '\0') {
            uVar5 = _DoGetPackageItem(param_1,param_2,param_3,param_4,param_5);
          }
          else {
            uVar5 = _DoGetPackageCreature(param_1,param_2,param_3,param_4,param_5);
          }
        }
        else {
          uVar5 = _DoGetPackageAvatar(param_1,param_2,param_3,param_4,param_5);
        }
      }
    }
    else {
      uVar5 = AvatarCoin::GetPackage(param_1,local_e4,param_4);
    }
  }
  return uVar5;
}

```

---

## _DoGetPackageAvatar

```asm
// === 0855419c WongWork::CMailBoxHelper::_DoGetPackageAvatar  [0x0855419c-0x855447b] ===
 855419c:	55                   	push   %ebp
 855419d:	89 e5                	mov    %esp,%ebp
 855419f:	56                   	push   %esi
 85541a0:	53                   	push   %ebx
 85541a1:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 85541a7:	8b 45 14             	mov    0x14(%ebp),%eax
 85541aa:	88 45 a4             	mov    %al,-0x5c(%ebp)
 85541ad:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 85541b0:	8b 55 0c             	mov    0xc(%ebp),%edx
 85541b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85541b7:	89 04 24             	mov    %eax,(%esp)
 85541ba:	e8 63 33 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 85541bf:	83 ec 04             	sub    $0x4,%esp
 85541c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85541c5:	89 04 24             	mov    %eax,(%esp)
 85541c8:	e8 cf 33 00 00       	call   855759c <_ZNK8WongWork8CMailBox5CMail15isAvatarPackageEv>
 85541cd:	83 f0 01             	xor    $0x1,%eax
 85541d0:	84 c0                	test   %al,%al
 85541d2:	74 13                	je     85541e7 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x4b>
 85541d4:	8b 45 18             	mov    0x18(%ebp),%eax
 85541d7:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 85541dd:	b8 00 00 00 00       	mov    $0x0,%eax
 85541e2:	e9 8a 02 00 00       	jmp    8554471 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2d5>
 85541e7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85541ee:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 85541f2:	0f 84 d8 00 00 00    	je     85542d0 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x134>
 85541f8:	8b 5d ba             	mov    -0x46(%ebp),%ebx
 85541fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85541fe:	89 04 24             	mov    %eax,(%esp)
 8554201:	e8 78 60 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8554206:	89 04 24             	mov    %eax,(%esp)
 8554209:	e8 68 93 b8 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 855420e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8554212:	89 04 24             	mov    %eax,(%esp)
 8554215:	e8 00 56 da ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 855421a:	83 f8 ff             	cmp    $0xffffffff,%eax
 855421d:	0f 94 c0             	sete   %al
 8554220:	84 c0                	test   %al,%al
 8554222:	74 0a                	je     855422e <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x92>
 8554224:	b8 00 00 00 00       	mov    $0x0,%eax
 8554229:	e9 43 02 00 00       	jmp    8554471 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2d5>
 855422e:	8b 45 08             	mov    0x8(%ebp),%eax
 8554231:	89 04 24             	mov    %eax,(%esp)
 8554234:	e8 55 60 b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8554239:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 855423c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554240:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8554243:	89 54 24 08          	mov    %edx,0x8(%esp)
 8554247:	8b 55 bb             	mov    -0x45(%ebp),%edx
 855424a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 855424e:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8554251:	89 54 24 10          	mov    %edx,0x10(%esp)
 8554255:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8554258:	89 54 24 14          	mov    %edx,0x14(%esp)
 855425c:	8b 55 c7             	mov    -0x39(%ebp),%edx
 855425f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8554263:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8554266:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 855426a:	8b 55 cf             	mov    -0x31(%ebp),%edx
 855426d:	89 54 24 20          	mov    %edx,0x20(%esp)
 8554271:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 8554274:	89 54 24 24          	mov    %edx,0x24(%esp)
 8554278:	8b 55 d7             	mov    -0x29(%ebp),%edx
 855427b:	89 54 24 28          	mov    %edx,0x28(%esp)
 855427f:	8b 55 db             	mov    -0x25(%ebp),%edx
 8554282:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8554286:	8b 55 df             	mov    -0x21(%ebp),%edx
 8554289:	89 54 24 30          	mov    %edx,0x30(%esp)
 855428d:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 8554290:	89 54 24 34          	mov    %edx,0x34(%esp)
 8554294:	8b 55 e7             	mov    -0x19(%ebp),%edx
 8554297:	89 54 24 38          	mov    %edx,0x38(%esp)
 855429b:	8b 55 eb             	mov    -0x15(%ebp),%edx
 855429e:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 85542a2:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 85542a6:	88 54 24 40          	mov    %dl,0x40(%esp)
 85542aa:	89 04 24             	mov    %eax,(%esp)
 85542ad:	e8 42 f3 fa ff       	call   85035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>
 85542b2:	c1 e8 1f             	shr    $0x1f,%eax
 85542b5:	84 c0                	test   %al,%al
 85542b7:	0f 84 af 01 00 00    	je     855446c <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2d0>
 85542bd:	8b 45 18             	mov    0x18(%ebp),%eax
 85542c0:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 85542c6:	b8 00 00 00 00       	mov    $0x0,%eax
 85542cb:	e9 a1 01 00 00       	jmp    8554471 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2d5>
 85542d0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85542d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85542da:	89 04 24             	mov    %eax,(%esp)
 85542dd:	e8 ac 5f b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85542e2:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 85542e9:	00 
 85542ea:	c7 44 24 44 05 00 00 	movl   $0x5,0x44(%esp)
 85542f1:	00 
 85542f2:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 85542f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85542f9:	8b 55 b7             	mov    -0x49(%ebp),%edx
 85542fc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8554300:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8554303:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8554307:	8b 55 bf             	mov    -0x41(%ebp),%edx
 855430a:	89 54 24 10          	mov    %edx,0x10(%esp)
 855430e:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8554311:	89 54 24 14          	mov    %edx,0x14(%esp)
 8554315:	8b 55 c7             	mov    -0x39(%ebp),%edx
 8554318:	89 54 24 18          	mov    %edx,0x18(%esp)
 855431c:	8b 55 cb             	mov    -0x35(%ebp),%edx
 855431f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8554323:	8b 55 cf             	mov    -0x31(%ebp),%edx
 8554326:	89 54 24 20          	mov    %edx,0x20(%esp)
 855432a:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 855432d:	89 54 24 24          	mov    %edx,0x24(%esp)
 8554331:	8b 55 d7             	mov    -0x29(%ebp),%edx
 8554334:	89 54 24 28          	mov    %edx,0x28(%esp)
 8554338:	8b 55 db             	mov    -0x25(%ebp),%edx
 855433b:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 855433f:	8b 55 df             	mov    -0x21(%ebp),%edx
 8554342:	89 54 24 30          	mov    %edx,0x30(%esp)
 8554346:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 8554349:	89 54 24 34          	mov    %edx,0x34(%esp)
 855434d:	8b 55 e7             	mov    -0x19(%ebp),%edx
 8554350:	89 54 24 38          	mov    %edx,0x38(%esp)
 8554354:	8b 55 eb             	mov    -0x15(%ebp),%edx
 8554357:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 855435b:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 855435f:	88 54 24 40          	mov    %dl,0x40(%esp)
 8554363:	89 04 24             	mov    %eax,(%esp)
 8554366:	e8 11 f3 fa ff       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 855436b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 855436e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8554371:	c1 e8 1f             	shr    $0x1f,%eax
 8554374:	84 c0                	test   %al,%al
 8554376:	74 0a                	je     8554382 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1e6>
 8554378:	b8 00 00 00 00       	mov    $0x0,%eax
 855437d:	e9 ef 00 00 00       	jmp    8554471 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2d5>
 8554382:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8554385:	8d 70 0a             	lea    0xa(%eax),%esi
 8554388:	8b 5d ba             	mov    -0x46(%ebp),%ebx
 855438b:	8b 45 08             	mov    0x8(%ebp),%eax
 855438e:	89 04 24             	mov    %eax,(%esp)
 8554391:	e8 f8 5e b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8554396:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 855439d:	00 
 855439e:	89 74 24 10          	mov    %esi,0x10(%esp)
 85543a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85543a9:	00 
 85543aa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85543ae:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 85543b5:	00 
 85543b6:	89 04 24             	mov    %eax,(%esp)
 85543b9:	e8 70 48 fb ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 85543be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85543c5:	00 
 85543c6:	c7 44 24 08 a8 13 ca 	movl   $0x8ca13a8,0x8(%esp)
 85543cd:	08 
 85543ce:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85543d5:	00 
 85543d6:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85543dd:	e8 1c 14 55 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85543e2:	89 c3                	mov    %eax,%ebx
 85543e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85543e7:	89 04 24             	mov    %eax,(%esp)
 85543ea:	e8 0f 31 00 00       	call   85574fe <_ZNK8WongWork8CMailBox5CMail13GetSenderNameEv>
 85543ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85543f3:	89 04 24             	mov    %eax,(%esp)
 85543f6:	e8 e5 a0 b2 ff       	call   807e4e0 <strcmp@plt>
 85543fb:	85 c0                	test   %eax,%eax
 85543fd:	0f 94 c0             	sete   %al
 8554400:	84 c0                	test   %al,%al
 8554402:	74 35                	je     8554439 <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x29d>
 8554404:	8b 45 08             	mov    0x8(%ebp),%eax
 8554407:	89 04 24             	mov    %eax,(%esp)
 855440a:	e8 3f 78 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 855440f:	89 c3                	mov    %eax,%ebx
 8554411:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554414:	89 04 24             	mov    %eax,(%esp)
 8554417:	e8 ee 30 00 00       	call   855750a <_ZNK8WongWork8CMailBox5CMail17GetSenderCharacNoEv>
 855441c:	8b 55 ba             	mov    -0x46(%ebp),%edx
 855441f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8554426:	00 
 8554427:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855442b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855442f:	89 14 24             	mov    %edx,(%esp)
 8554432:	e8 e3 0c ef ff       	call   844511a <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc>
 8554437:	eb 33                	jmp    855446c <_ZN8WongWork14CMailBoxHelper19_DoGetPackageAvatarEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2d0>
 8554439:	8b 45 08             	mov    0x8(%ebp),%eax
 855443c:	89 04 24             	mov    %eax,(%esp)
 855443f:	e8 0a 78 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8554444:	89 c3                	mov    %eax,%ebx
 8554446:	8b 45 0c             	mov    0xc(%ebp),%eax
 8554449:	89 04 24             	mov    %eax,(%esp)
 855444c:	e8 b9 30 00 00       	call   855750a <_ZNK8WongWork8CMailBox5CMail17GetSenderCharacNoEv>
 8554451:	8b 55 ba             	mov    -0x46(%ebp),%edx
 8554454:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 855445b:	00 
 855445c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8554460:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554464:	89 14 24             	mov    %edx,(%esp)
 8554467:	e8 ae 0c ef ff       	call   844511a <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc>
 855446c:	b8 01 00 00 00       	mov    $0x1,%eax
 8554471:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8554474:	83 c4 00             	add    $0x0,%esp
 8554477:	5b                   	pop    %ebx
 8554478:	5e                   	pop    %esi
 8554479:	5d                   	pop    %ebp
 855447a:	c3                   	ret
 855447b:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::_DoGetPackageAvatar @ 0x855419c

/* WongWork::CMailBoxHelper::_DoGetPackageAvatar(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageAvatar
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  CInventory *pCVar2;
  CAvatarItemMgr *this;
  int iVar3;
  undefined4 uVar4;
  char *__s2;
  char *__s1;
  uint uVar5;
  uint uVar6;
  undefined4 local_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  
  CMailBox::CMail::GetPackageItem();
  cVar1 = CMailBox::CMail::isAvatarPackage(param_2);
  if (cVar1 != '\x01') {
    *(undefined4 *)param_5 = 1;
    return 0;
  }
  if (param_4) {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    this = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar2);
    iVar3 = CAvatarItemMgr::GetExpireDate(this,CONCAT31((undefined3)uStack_49,uStack_4d._3_1_));
    if (iVar3 == -1) {
      return 0;
    }
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar3 = CInventory::tryInsertAvatarIntoInventory
                      (uVar4,local_51,uStack_4d,uStack_49,local_45,local_41,local_3d,local_39,
                       local_35,local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,
                       local_15);
    if (iVar3 < 0) {
      *(undefined4 *)param_5 = 4;
      return 0;
    }
  }
  else {
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar3 = CInventory::insertAvatarIntoInventory
                      (uVar4,local_51,uStack_4d,uStack_49,local_45,local_41,local_3d,local_39,
                       local_35,local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,
                       local_15,5,1);
    if (iVar3 < 0) {
      return 0;
    }
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SendAvatarEvent
              (pCVar2,0x36,CONCAT31((undefined3)uStack_49,uStack_4d._3_1_),0,iVar3 + 10,0);
    __s2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_221",(bool *)0x0);
    __s1 = (char *)CMailBox::CMail::GetSenderName(param_2);
    iVar3 = strcmp(__s1,__s2);
    if (iVar3 == 0) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar6 = CMailBox::CMail::GetSenderCharacNo(param_2);
      DB_InsertCeraItemHistory::makeRequest
                (CONCAT31((undefined3)uStack_49,uStack_4d._3_1_),uVar6,uVar5,'\x01');
    }
    else {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar6 = CMailBox::CMail::GetSenderCharacNo(param_2);
      DB_InsertCeraItemHistory::makeRequest
                (CONCAT31((undefined3)uStack_49,uStack_4d._3_1_),uVar6,uVar5,'\0');
    }
  }
  return 1;
}

```

---

## _DoGetPackageCoin

```asm
// === 08553672 WongWork::CMailBoxHelper::_DoGetPackageCoin  [0x08553672-0x85538bf] ===
 8553672:	55                   	push   %ebp
 8553673:	89 e5                	mov    %esp,%ebp
 8553675:	53                   	push   %ebx
 8553676:	81 ec 94 00 00 00    	sub    $0x94,%esp
 855367c:	8b 45 14             	mov    0x14(%ebp),%eax
 855367f:	88 45 84             	mov    %al,-0x7c(%ebp)
 8553682:	8b 45 08             	mov    0x8(%ebp),%eax
 8553685:	89 04 24             	mov    %eax,(%esp)
 8553688:	e8 01 6c b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 855368d:	89 04 24             	mov    %eax,(%esp)
 8553690:	e8 f5 9f cd ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 8553695:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8553698:	8b 45 08             	mov    0x8(%ebp),%eax
 855369b:	89 04 24             	mov    %eax,(%esp)
 855369e:	e8 eb 6b b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85536a3:	89 04 24             	mov    %eax,(%esp)
 85536a6:	e8 cf d5 bb ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 85536ab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85536ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85536b1:	89 04 24             	mov    %eax,(%esp)
 85536b4:	e8 d5 6b b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85536b9:	89 04 24             	mov    %eax,(%esp)
 85536bc:	e8 6d 90 c5 ff       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 85536c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85536c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85536c7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85536ca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85536cd:	03 45 f4             	add    -0xc(%ebp),%eax
 85536d0:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 85536d5:	7e 13                	jle    85536ea <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x78>
 85536d7:	8b 45 18             	mov    0x18(%ebp),%eax
 85536da:	c7 00 4f 00 00 00    	movl   $0x4f,(%eax)
 85536e0:	b8 00 00 00 00       	mov    $0x0,%eax
 85536e5:	e9 d1 01 00 00       	jmp    85538bb <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x249>
 85536ea:	80 7d 84 00          	cmpb   $0x0,-0x7c(%ebp)
 85536ee:	74 0a                	je     85536fa <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x88>
 85536f0:	b8 01 00 00 00       	mov    $0x1,%eax
 85536f5:	e9 c1 01 00 00       	jmp    85538bb <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x249>
 85536fa:	8d 45 97             	lea    -0x69(%ebp),%eax
 85536fd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8553700:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553704:	89 04 24             	mov    %eax,(%esp)
 8553707:	e8 16 3e 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 855370c:	83 ec 04             	sub    $0x4,%esp
 855370f:	0f b7 45 a2          	movzwl -0x5e(%ebp),%eax
 8553713:	0f b7 c0             	movzwl %ax,%eax
 8553716:	83 f8 01             	cmp    $0x1,%eax
 8553719:	74 7d                	je     8553798 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x126>
 855371b:	83 f8 02             	cmp    $0x2,%eax
 855371e:	0f 84 dd 00 00 00    	je     8553801 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x18f>
 8553724:	85 c0                	test   %eax,%eax
 8553726:	0f 85 3c 01 00 00    	jne    8553868 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f6>
 855372c:	8b 45 08             	mov    0x8(%ebp),%eax
 855372f:	89 04 24             	mov    %eax,(%esp)
 8553732:	e8 47 6b b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8553737:	89 04 24             	mov    %eax,(%esp)
 855373a:	e8 4b 9f cd ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 855373f:	8b 55 9e             	mov    -0x62(%ebp),%edx
 8553742:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 8553745:	8b 45 08             	mov    0x8(%ebp),%eax
 8553748:	89 04 24             	mov    %eax,(%esp)
 855374b:	e8 3e 6b b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8553750:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8553754:	89 04 24             	mov    %eax,(%esp)
 8553757:	e8 20 9f cd ff       	call   822d67c <_ZN10CInventory7SetCoinEj>
 855375c:	8b 5d 9e             	mov    -0x62(%ebp),%ebx
 855375f:	8b 45 08             	mov    0x8(%ebp),%eax
 8553762:	89 04 24             	mov    %eax,(%esp)
 8553765:	e8 14 6b b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 855376a:	89 04 24             	mov    %eax,(%esp)
 855376d:	e8 08 d5 bb ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 8553772:	8b 55 08             	mov    0x8(%ebp),%edx
 8553775:	81 c2 00 97 07 00    	add    $0x79700,%edx
 855377b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8553782:	00 
 8553783:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8553787:	89 44 24 04          	mov    %eax,0x4(%esp)
 855378b:	89 14 24             	mov    %edx,(%esp)
 855378e:	e8 fd 03 13 00       	call   8683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>
 8553793:	e9 d0 00 00 00       	jmp    8553868 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f6>
 8553798:	8b 45 08             	mov    0x8(%ebp),%eax
 855379b:	89 04 24             	mov    %eax,(%esp)
 855379e:	e8 db 6a b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85537a3:	89 04 24             	mov    %eax,(%esp)
 85537a6:	e8 cf d4 bb ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 85537ab:	8b 55 9e             	mov    -0x62(%ebp),%edx
 85537ae:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 85537b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85537b4:	89 04 24             	mov    %eax,(%esp)
 85537b7:	e8 d2 6a b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85537bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85537c0:	89 04 24             	mov    %eax,(%esp)
 85537c3:	e8 be d4 bb ff       	call   8110c86 <_ZN10CInventory12SetEventCoinEj>
 85537c8:	8b 5d 9e             	mov    -0x62(%ebp),%ebx
 85537cb:	8b 45 08             	mov    0x8(%ebp),%eax
 85537ce:	89 04 24             	mov    %eax,(%esp)
 85537d1:	e8 a8 6a b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85537d6:	89 04 24             	mov    %eax,(%esp)
 85537d9:	e8 9c d4 bb ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 85537de:	8b 55 08             	mov    0x8(%ebp),%edx
 85537e1:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85537e7:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 85537ee:	00 
 85537ef:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85537f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85537f7:	89 14 24             	mov    %edx,(%esp)
 85537fa:	e8 59 04 13 00       	call   8683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>
 85537ff:	eb 67                	jmp    8553868 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageCoinEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f6>
 8553801:	8b 45 08             	mov    0x8(%ebp),%eax
 8553804:	89 04 24             	mov    %eax,(%esp)
 8553807:	e8 72 6a b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 855380c:	89 04 24             	mov    %eax,(%esp)
 855380f:	e8 1a 8f c5 ff       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 8553814:	8b 55 9e             	mov    -0x62(%ebp),%edx
 8553817:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 855381a:	8b 45 08             	mov    0x8(%ebp),%eax
 855381d:	89 04 24             	mov    %eax,(%esp)
 8553820:	e8 69 6a b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8553825:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8553829:	89 04 24             	mov    %eax,(%esp)
 855382c:	e8 09 8f c5 ff       	call   81ac73a <_ZN10CInventory10SetPayCoinEj>
 8553831:	8b 5d 9e             	mov    -0x62(%ebp),%ebx
 8553834:	8b 45 08             	mov    0x8(%ebp),%eax
 8553837:	89 04 24             	mov    %eax,(%esp)
 855383a:	e8 3f 6a b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 855383f:	89 04 24             	mov    %eax,(%esp)
 8553842:	e8 33 d4 bb ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 8553847:	8b 55 08             	mov    0x8(%ebp),%edx
 855384a:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8553850:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 8553857:	00 
 8553858:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 855385c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553860:	89 14 24             	mov    %edx,(%esp)
 8553863:	e8 8c 03 13 00       	call   8683bf4 <_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason>
 8553868:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 855386f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8553876:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8553879:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 855387c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8553880:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8553883:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553887:	89 04 24             	mov    %eax,(%esp)
 855388a:	e8 7f 50 00 00       	call   855890e <_ZSt9make_pairI14ENUM_ITEMSPACEN10Inven_Item10INVEN_SLOTEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 855388f:	83 ec 04             	sub    $0x4,%esp
 8553892:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8553895:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553899:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855389c:	89 04 24             	mov    %eax,(%esp)
 855389f:	e8 b4 50 00 00       	call   8558958 <_ZNSt4pairIiiEC1I14ENUM_ITEMSPACEN10Inven_Item10INVEN_SLOTEEEOS_IT_T0_E>
 85538a4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85538a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85538ab:	8b 45 10             	mov    0x10(%ebp),%eax
 85538ae:	89 04 24             	mov    %eax,(%esp)
 85538b1:	e8 50 9d b8 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 85538b6:	b8 01 00 00 00       	mov    $0x1,%eax
 85538bb:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85538be:	c9                   	leave
 85538bf:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::_DoGetPackageCoin @ 0x8553672

/* WongWork::CMailBoxHelper::_DoGetPackageCoin(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageCoin
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  CInventory *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int local_66;
  short local_62;
  pair<int,int> local_30 [8];
  ENUM_ITEMSPACE local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_18 = CInventory::GetCoin(pCVar1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_14 = CInventory::GetEventCoin(pCVar1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetPayCoin(pCVar1);
  if (local_18 + local_14 + local_10 < 0x186a1) {
    if (param_4) {
      uVar2 = 1;
    }
    else {
      CMailBox::CMail::GetPackageItem();
      if (local_62 == 1) {
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar3 = CInventory::GetEventCoin(pCVar1);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::SetEventCoin(pCVar1,iVar3 + local_66);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar2 = CInventory::GetEventCoin(pCVar1);
        cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar2,local_66,2);
      }
      else if (local_62 == 2) {
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar3 = CInventory::GetPayCoin(pCVar1);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::SetPayCoin(pCVar1,iVar3 + local_66);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar2 = CInventory::GetEventCoin(pCVar1);
        cUserHistoryLog::PayCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar2,local_66,3);
      }
      else if (local_62 == 0) {
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar3 = CInventory::GetCoin(pCVar1);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::SetCoin(pCVar1,iVar3 + local_66);
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar2 = CInventory::GetEventCoin(pCVar1);
        cUserHistoryLog::CoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar2,local_66,0);
      }
      local_20 = 1;
      local_1c = 0;
      std::make_pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_28,(INVEN_SLOT *)&local_1c);
      std::pair<int,int>::pair<ENUM_ITEMSPACE,Inven_Item::INVEN_SLOT>(local_30,local_28);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_30);
      uVar2 = 1;
    }
  }
  else {
    *(undefined4 *)param_5 = 0x4f;
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _DoGetPackageCreature

```asm
// === 0855447c WongWork::CMailBoxHelper::_DoGetPackageCreature  [0x0855447c-0x855464f] ===
 855447c:	55                   	push   %ebp
 855447d:	89 e5                	mov    %esp,%ebp
 855447f:	53                   	push   %ebx
 8554480:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 8554486:	8b 45 14             	mov    0x14(%ebp),%eax
 8554489:	88 45 94             	mov    %al,-0x6c(%ebp)
 855448c:	8d 45 9f             	lea    -0x61(%ebp),%eax
 855448f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8554492:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554496:	89 04 24             	mov    %eax,(%esp)
 8554499:	e8 84 30 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 855449e:	83 ec 04             	sub    $0x4,%esp
 85544a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85544a4:	89 04 24             	mov    %eax,(%esp)
 85544a7:	e8 02 31 00 00       	call   85575ae <_ZNK8WongWork8CMailBox5CMail17isCreaturePackageEv>
 85544ac:	83 f0 01             	xor    $0x1,%eax
 85544af:	84 c0                	test   %al,%al
 85544b1:	74 13                	je     85544c6 <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x4a>
 85544b3:	8b 45 18             	mov    0x18(%ebp),%eax
 85544b6:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 85544bc:	b8 00 00 00 00       	mov    $0x0,%eax
 85544c1:	e9 84 01 00 00       	jmp    855464a <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1ce>
 85544c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85544cd:	80 7d 94 00          	cmpb   $0x0,-0x6c(%ebp)
 85544d1:	74 38                	je     855450b <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x8f>
 85544d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85544d6:	89 04 24             	mov    %eax,(%esp)
 85544d9:	e8 ec be c2 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 85544de:	8d 55 9f             	lea    -0x61(%ebp),%edx
 85544e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85544e5:	89 04 24             	mov    %eax,(%esp)
 85544e8:	e8 b7 65 fb ff       	call   850aaa4 <_ZNK10CInventory25tryInsertItemIntoCreatureER10Inven_Item>
 85544ed:	c1 e8 1f             	shr    $0x1f,%eax
 85544f0:	84 c0                	test   %al,%al
 85544f2:	0f 84 4d 01 00 00    	je     8554645 <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1c9>
 85544f8:	8b 45 18             	mov    0x18(%ebp),%eax
 85544fb:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8554501:	b8 00 00 00 00       	mov    $0x0,%eax
 8554506:	e9 3f 01 00 00       	jmp    855464a <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1ce>
 855450b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8554512:	8b 45 08             	mov    0x8(%ebp),%eax
 8554515:	89 04 24             	mov    %eax,(%esp)
 8554518:	e8 71 5d b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 855451d:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8554524:	00 
 8554525:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 855452c:	00 
 855452d:	c7 44 24 44 15 00 00 	movl   $0x15,0x44(%esp)
 8554534:	00 
 8554535:	8b 55 9f             	mov    -0x61(%ebp),%edx
 8554538:	89 54 24 04          	mov    %edx,0x4(%esp)
 855453c:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 855453f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8554543:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8554546:	89 54 24 0c          	mov    %edx,0xc(%esp)
 855454a:	8b 55 ab             	mov    -0x55(%ebp),%edx
 855454d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8554551:	8b 55 af             	mov    -0x51(%ebp),%edx
 8554554:	89 54 24 14          	mov    %edx,0x14(%esp)
 8554558:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 855455b:	89 54 24 18          	mov    %edx,0x18(%esp)
 855455f:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8554562:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8554566:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8554569:	89 54 24 20          	mov    %edx,0x20(%esp)
 855456d:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8554570:	89 54 24 24          	mov    %edx,0x24(%esp)
 8554574:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8554577:	89 54 24 28          	mov    %edx,0x28(%esp)
 855457b:	8b 55 c7             	mov    -0x39(%ebp),%edx
 855457e:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8554582:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8554585:	89 54 24 30          	mov    %edx,0x30(%esp)
 8554589:	8b 55 cf             	mov    -0x31(%ebp),%edx
 855458c:	89 54 24 34          	mov    %edx,0x34(%esp)
 8554590:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 8554593:	89 54 24 38          	mov    %edx,0x38(%esp)
 8554597:	8b 55 d7             	mov    -0x29(%ebp),%edx
 855459a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 855459e:	0f b6 55 db          	movzbl -0x25(%ebp),%edx
 85545a2:	88 54 24 40          	mov    %dl,0x40(%esp)
 85545a6:	89 04 24             	mov    %eax,(%esp)
 85545a9:	e8 d8 e7 fa ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 85545ae:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85545b1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85545b4:	c1 e8 1f             	shr    $0x1f,%eax
 85545b7:	84 c0                	test   %al,%al
 85545b9:	74 0a                	je     85545c5 <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x149>
 85545bb:	b8 00 00 00 00       	mov    $0x0,%eax
 85545c0:	e9 85 00 00 00       	jmp    855464a <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1ce>
 85545c5:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 85545c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85545cb:	89 04 24             	mov    %eax,(%esp)
 85545ce:	e8 bb 5c b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85545d3:	89 04 24             	mov    %eax,(%esp)
 85545d6:	e8 8d 8f b8 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 85545db:	c7 44 24 0c 15 00 00 	movl   $0x15,0xc(%esp)
 85545e2:	00 
 85545e3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85545e7:	8d 55 9f             	lea    -0x61(%ebp),%edx
 85545ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 85545ee:	89 04 24             	mov    %eax,(%esp)
 85545f1:	e8 a4 65 de ff       	call   833ab9a <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii>
 85545f6:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 85545fa:	3c 05                	cmp    $0x5,%al
 85545fc:	74 47                	je     8554645 <_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1c9>
 85545fe:	c7 45 f0 07 00 00 00 	movl   $0x7,-0x10(%ebp)
 8554605:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8554608:	8d 55 dc             	lea    -0x24(%ebp),%edx
 855460b:	89 54 24 08          	mov    %edx,0x8(%esp)
 855460f:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8554612:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554616:	89 04 24             	mov    %eax,(%esp)
 8554619:	e8 e0 43 00 00       	call   85589fe <_ZSt9make_pairI14ENUM_ITEMSPACERiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 855461e:	83 ec 04             	sub    $0x4,%esp
 8554621:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8554624:	89 44 24 04          	mov    %eax,0x4(%esp)
 8554628:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855462b:	89 04 24             	mov    %eax,(%esp)
 855462e:	e8 11 44 00 00       	call   8558a44 <_ZNSt4pairIiiEC1I14ENUM_ITEMSPACEiEEOS_IT_T0_E>
 8554633:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8554636:	89 44 24 04          	mov    %eax,0x4(%esp)
 855463a:	8b 45 10             	mov    0x10(%ebp),%eax
 855463d:	89 04 24             	mov    %eax,(%esp)
 8554640:	e8 c1 8f b8 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8554645:	b8 01 00 00 00       	mov    $0x1,%eax
 855464a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 855464d:	c9                   	leave
 855464e:	c3                   	ret
 855464f:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::_DoGetPackageCreature @ 0x855447c

/* WongWork::CMailBoxHelper::_DoGetPackageCreature(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageCreature
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  int iVar4;
  CCreatureMgr *this;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined1 local_29;
  int local_28;
  pair<int,int> local_24 [8];
  ENUM_ITEMSPACE local_1c [8];
  int local_14 [3];
  
  CMailBox::CMail::GetPackageItem();
  cVar1 = CMailBox::CMail::isCreaturePackage(param_2);
  if (cVar1 == '\x01') {
    local_14[1] = 0;
    if (param_4) {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      iVar4 = CInventory::tryInsertItemIntoCreature(pCVar3,(Inven_Item *)&local_65);
      if (iVar4 < 0) {
        *(undefined4 *)param_5 = 4;
        return 0;
      }
    }
    else {
      local_28 = 0;
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar4 = CInventory::insertItemIntoInventory
                        (uVar2,local_65,local_61,local_5d,local_59,local_55,local_51,local_4d,
                         local_49,local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,
                         local_29,0x15,1,1);
      if (iVar4 < 0) {
        return 0;
      }
      local_28 = iVar4;
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      this = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
      user_creature::CCreatureMgr::RecvMail(this,(Inven_Item *)&local_65,iVar4,0x15);
      if (local_65._1_1_ != '\x05') {
        local_14[0] = 7;
        std::make_pair<ENUM_ITEMSPACE,int&>(local_1c,local_14);
        std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_24,local_1c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_24
                  );
      }
    }
    uVar2 = 1;
  }
  else {
    *(undefined4 *)param_5 = 1;
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _DoGetPackageItem

```asm
// === 08553936 WongWork::CMailBoxHelper::_DoGetPackageItem  [0x08553936-0x855419b] ===
 8553936:	55                   	push   %ebp
 8553937:	89 e5                	mov    %esp,%ebp
 8553939:	56                   	push   %esi
 855393a:	53                   	push   %ebx
 855393b:	81 ec 30 ca 00 00    	sub    $0xca30,%esp
 8553941:	8b 45 14             	mov    0x14(%ebp),%eax
 8553944:	88 85 24 36 ff ff    	mov    %al,-0xc9dc(%ebp)
 855394a:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 8553950:	8b 55 0c             	mov    0xc(%ebp),%edx
 8553953:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553957:	89 04 24             	mov    %eax,(%esp)
 855395a:	e8 c3 3b 00 00       	call   8557522 <_ZNK8WongWork8CMailBox5CMail14GetPackageItemEv>
 855395f:	83 ec 04             	sub    $0x4,%esp
 8553962:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553968:	3d 87 d2 28 00       	cmp    $0x28d287,%eax
 855396d:	76 42                	jbe    85539b1 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x7b>
 855396f:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553975:	3d 99 d2 28 00       	cmp    $0x28d299,%eax
 855397a:	77 35                	ja     85539b1 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x7b>
 855397c:	0f b6 95 24 36 ff ff 	movzbl -0xc9dc(%ebp),%edx
 8553983:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553989:	8b 4d 18             	mov    0x18(%ebp),%ecx
 855398c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8553990:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8553994:	8b 55 10             	mov    0x10(%ebp),%edx
 8553997:	89 54 24 08          	mov    %edx,0x8(%esp)
 855399b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855399f:	8b 45 08             	mov    0x8(%ebp),%eax
 85539a2:	89 04 24             	mov    %eax,(%esp)
 85539a5:	e8 18 ef 13 00       	call   86928c2 <_ZN5CUser13DoGetGoldItemEiRSt6vectorISt4pairIiiESaIS2_EEbR10ENUM_ERROR>
 85539aa:	89 c3                	mov    %eax,%ebx
 85539ac:	e9 de 07 00 00       	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 85539b1:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 85539b7:	89 04 24             	mov    %eax,(%esp)
 85539ba:	e8 53 ff ff ff       	call   8553912 <_ZN8WongWork14CMailBoxHelper15IsCeraPointItemEm>
 85539bf:	84 c0                	test   %al,%al
 85539c1:	74 3d                	je     8553a00 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0xca>
 85539c3:	8b b5 29 ff ff ff    	mov    -0xd7(%ebp),%esi
 85539c9:	0f b6 9d 24 36 ff ff 	movzbl -0xc9dc(%ebp),%ebx
 85539d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85539d3:	89 04 24             	mov    %eax,(%esp)
 85539d6:	e8 3b 3b 00 00       	call   8557516 <_ZNK8WongWork8CMailBox5CMail15GetPackageMoneyEv>
 85539db:	89 74 24 10          	mov    %esi,0x10(%esp)
 85539df:	8b 55 18             	mov    0x18(%ebp),%edx
 85539e2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85539e6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85539ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85539ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85539f1:	89 04 24             	mov    %eax,(%esp)
 85539f4:	e8 3b f0 13 00       	call   8692a34 <_ZN5CUser18DoGetCeraPointItemEjbR10ENUM_ERRORm>
 85539f9:	89 c3                	mov    %eax,%ebx
 85539fb:	e9 8f 07 00 00       	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 8553a00:	80 bd 24 36 ff ff 00 	cmpb   $0x0,-0xc9dc(%ebp)
 8553a07:	0f 84 6f 03 00 00    	je     8553d7c <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x446>
 8553a0d:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8553a14:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8553a1b:	c6 45 b3 00          	movb   $0x0,-0x4d(%ebp)
 8553a1f:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553a25:	89 c2                	mov    %eax,%edx
 8553a27:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8553a2c:	8d 4d b3             	lea    -0x4d(%ebp),%ecx
 8553a2f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8553a33:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8553a36:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8553a3a:	8d 4d b8             	lea    -0x48(%ebp),%ecx
 8553a3d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8553a41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553a45:	89 04 24             	mov    %eax,(%esp)
 8553a48:	e8 d1 0f dd ff       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8553a4d:	84 c0                	test   %al,%al
 8553a4f:	0f 84 55 02 00 00    	je     8553caa <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x374>
 8553a55:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553a5b:	89 c6                	mov    %eax,%esi
 8553a5d:	e8 39 87 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8553a62:	89 74 24 04          	mov    %esi,0x4(%esp)
 8553a66:	89 04 24             	mov    %eax,(%esp)
 8553a69:	e8 c4 bf e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8553a6e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8553a71:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8553a74:	89 04 24             	mov    %eax,(%esp)
 8553a77:	e8 44 fe ff ff       	call   85538c0 <_Z31_isUnusableSpecialItemInVillagePK5CItem>
 8553a7c:	84 c0                	test   %al,%al
 8553a7e:	0f 84 26 02 00 00    	je     8553caa <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x374>
 8553a84:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8553a87:	83 f8 01             	cmp    $0x1,%eax
 8553a8a:	75 36                	jne    8553ac2 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x18c>
 8553a8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8553a8f:	89 04 24             	mov    %eax,(%esp)
 8553a92:	e8 ed df bf ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 8553a97:	89 04 24             	mov    %eax,(%esp)
 8553a9a:	e8 69 9c cd ff       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 8553a9f:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8553aa2:	39 d0                	cmp    %edx,%eax
 8553aa4:	0f 9d c0             	setge  %al
 8553aa7:	84 c0                	test   %al,%al
 8553aa9:	0f 84 f1 01 00 00    	je     8553ca0 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x36a>
 8553aaf:	8b 45 18             	mov    0x18(%ebp),%eax
 8553ab2:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 8553ab8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8553abd:	e9 cd 06 00 00       	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 8553ac2:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8553ac5:	83 f8 05             	cmp    $0x5,%eax
 8553ac8:	0f 85 d2 01 00 00    	jne    8553ca0 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x36a>
 8553ace:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8553ad1:	89 04 24             	mov    %eax,(%esp)
 8553ad4:	e8 fd 0e be ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8553ad9:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553adf:	89 c6                	mov    %eax,%esi
 8553ae1:	e8 b5 86 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8553ae6:	89 74 24 04          	mov    %esi,0x4(%esp)
 8553aea:	89 04 24             	mov    %eax,(%esp)
 8553aed:	e8 40 bf e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8553af2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8553af5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8553af8:	05 1c 02 00 00       	add    $0x21c,%eax
 8553afd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8553b00:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8553b03:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8553b06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553b0a:	89 04 24             	mov    %eax,(%esp)
 8553b0d:	e8 ea aa d2 ff       	call   827e5fc <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE5beginEv>
 8553b12:	83 ec 04             	sub    $0x4,%esp
 8553b15:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8553b18:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8553b1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553b1f:	89 04 24             	mov    %eax,(%esp)
 8553b22:	e8 01 ab d2 ff       	call   827e628 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE3endEv>
 8553b27:	83 ec 04             	sub    $0x4,%esp
 8553b2a:	eb 60                	jmp    8553b8c <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x256>
 8553b2c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8553b2f:	89 04 24             	mov    %eax,(%esp)
 8553b32:	e8 df a7 d2 ff       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 8553b37:	8d 70 04             	lea    0x4(%eax),%esi
 8553b3a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8553b3d:	89 04 24             	mov    %eax,(%esp)
 8553b40:	e8 d1 a7 d2 ff       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 8553b45:	89 c2                	mov    %eax,%edx
 8553b47:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8553b4a:	89 74 24 08          	mov    %esi,0x8(%esp)
 8553b4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553b52:	89 04 24             	mov    %eax,(%esp)
 8553b55:	e8 32 4e 00 00       	call   855898c <_ZSt9make_pairIRKjS1_ESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8553b5a:	83 ec 04             	sub    $0x4,%esp
 8553b5d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8553b60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553b64:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8553b67:	89 04 24             	mov    %eax,(%esp)
 8553b6a:	e8 5b 4e 00 00       	call   85589ca <_ZNSt4pairIiiEC1IjjEEOS_IT_T0_E>
 8553b6f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8553b72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553b76:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8553b79:	89 04 24             	mov    %eax,(%esp)
 8553b7c:	e8 85 9a b8 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8553b81:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8553b84:	89 04 24             	mov    %eax,(%esp)
 8553b87:	e8 74 a7 d2 ff       	call   827e300 <_ZN9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEppEv>
 8553b8c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8553b8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553b93:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8553b96:	89 04 24             	mov    %eax,(%esp)
 8553b99:	e8 36 a7 d2 ff       	call   827e2d4 <_ZN9__gnu_cxxneIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8553b9e:	84 c0                	test   %al,%al
 8553ba0:	75 8a                	jne    8553b2c <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x1f6>
 8553ba2:	8d 85 6c f7 ff ff    	lea    -0x894(%ebp),%eax
 8553ba8:	89 04 24             	mov    %eax,(%esp)
 8553bab:	e8 7c 99 cd ff       	call   822d52c <_ZN10CInventoryC1Ev>
 8553bb0:	8d 85 2d 36 ff ff    	lea    -0xc9d3(%ebp),%eax
 8553bb6:	89 04 24             	mov    %eax,(%esp)
 8553bb9:	e8 fa 97 cd ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 8553bbe:	8d 85 2d 36 ff ff    	lea    -0xc9d3(%ebp),%eax
 8553bc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553bc8:	8d 85 6c f7 ff ff    	lea    -0x894(%ebp),%eax
 8553bce:	89 04 24             	mov    %eax,(%esp)
 8553bd1:	e8 20 99 cd ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 8553bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8553bd9:	89 04 24             	mov    %eax,(%esp)
 8553bdc:	e8 e9 c7 c2 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 8553be1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553be5:	8d 85 6c f7 ff ff    	lea    -0x894(%ebp),%eax
 8553beb:	89 04 24             	mov    %eax,(%esp)
 8553bee:	e8 21 67 fa ff       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 8553bf3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8553bf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553bfa:	8d 85 6c f7 ff ff    	lea    -0x894(%ebp),%eax
 8553c00:	89 04 24             	mov    %eax,(%esp)
 8553c03:	e8 56 2b fb ff       	call   850675e <_ZN10CInventory19tryInsertEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>
 8553c08:	89 c6                	mov    %eax,%esi
 8553c0a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8553c0d:	89 04 24             	mov    %eax,(%esp)
 8553c10:	e8 ff 9b b8 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8553c15:	39 c6                	cmp    %eax,%esi
 8553c17:	0f 95 c0             	setne  %al
 8553c1a:	84 c0                	test   %al,%al
 8553c1c:	74 15                	je     8553c33 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x2fd>
 8553c1e:	8b 45 18             	mov    0x18(%ebp),%eax
 8553c21:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8553c27:	bb 00 00 00 00       	mov    $0x0,%ebx
 8553c2c:	be 00 00 00 00       	mov    $0x0,%esi
 8553c31:	eb 1f                	jmp    8553c52 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x31c>
 8553c33:	be 01 00 00 00       	mov    $0x1,%esi
 8553c38:	eb 18                	jmp    8553c52 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x31c>
 8553c3a:	89 d3                	mov    %edx,%ebx
 8553c3c:	89 c6                	mov    %eax,%esi
 8553c3e:	8d 85 6c f7 ff ff    	lea    -0x894(%ebp),%eax
 8553c44:	89 04 24             	mov    %eax,(%esp)
 8553c47:	e8 b4 99 cd ff       	call   822d600 <_ZN10CInventoryD1Ev>
 8553c4c:	89 f0                	mov    %esi,%eax
 8553c4e:	89 da                	mov    %ebx,%edx
 8553c50:	eb 20                	jmp    8553c72 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x33c>
 8553c52:	8d 85 6c f7 ff ff    	lea    -0x894(%ebp),%eax
 8553c58:	89 04 24             	mov    %eax,(%esp)
 8553c5b:	e8 a0 99 cd ff       	call   822d600 <_ZN10CInventoryD1Ev>
 8553c60:	85 f6                	test   %esi,%esi
 8553c62:	75 07                	jne    8553c6b <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x335>
 8553c64:	be 00 00 00 00       	mov    $0x0,%esi
 8553c69:	eb 22                	jmp    8553c8d <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x357>
 8553c6b:	be 01 00 00 00       	mov    $0x1,%esi
 8553c70:	eb 1b                	jmp    8553c8d <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x357>
 8553c72:	89 d3                	mov    %edx,%ebx
 8553c74:	89 c6                	mov    %eax,%esi
 8553c76:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8553c79:	89 04 24             	mov    %eax,(%esp)
 8553c7c:	e8 69 0d be ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8553c81:	89 f0                	mov    %esi,%eax
 8553c83:	89 da                	mov    %ebx,%edx
 8553c85:	89 04 24             	mov    %eax,(%esp)
 8553c88:	e8 c3 fa 58 00       	call   8ae3750 <_Unwind_Resume>
 8553c8d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8553c90:	89 04 24             	mov    %eax,(%esp)
 8553c93:	e8 52 0d be ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8553c98:	85 f6                	test   %esi,%esi
 8553c9a:	0f 84 ef 04 00 00    	je     855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 8553ca0:	bb 01 00 00 00       	mov    $0x1,%ebx
 8553ca5:	e9 e5 04 00 00       	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 8553caa:	8b 45 08             	mov    0x8(%ebp),%eax
 8553cad:	89 04 24             	mov    %eax,(%esp)
 8553cb0:	e8 c9 65 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8553cb5:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 8553cbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553cbf:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 8553cc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8553cc9:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 8553ccf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8553cd3:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 8553cd9:	89 54 24 10          	mov    %edx,0x10(%esp)
 8553cdd:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 8553ce3:	89 54 24 14          	mov    %edx,0x14(%esp)
 8553ce7:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 8553ced:	89 54 24 18          	mov    %edx,0x18(%esp)
 8553cf1:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 8553cf7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8553cfb:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 8553d01:	89 54 24 20          	mov    %edx,0x20(%esp)
 8553d05:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 8553d0b:	89 54 24 24          	mov    %edx,0x24(%esp)
 8553d0f:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 8553d15:	89 54 24 28          	mov    %edx,0x28(%esp)
 8553d19:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 8553d1f:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8553d23:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 8553d29:	89 54 24 30          	mov    %edx,0x30(%esp)
 8553d2d:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 8553d33:	89 54 24 34          	mov    %edx,0x34(%esp)
 8553d37:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 8553d3d:	89 54 24 38          	mov    %edx,0x38(%esp)
 8553d41:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 8553d47:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8553d4b:	0f b6 95 63 ff ff ff 	movzbl -0x9d(%ebp),%edx
 8553d52:	88 54 24 40          	mov    %dl,0x40(%esp)
 8553d56:	89 04 24             	mov    %eax,(%esp)
 8553d59:	e8 6c e1 fa ff       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 8553d5e:	c1 e8 1f             	shr    $0x1f,%eax
 8553d61:	84 c0                	test   %al,%al
 8553d63:	0f 84 21 04 00 00    	je     855418a <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x854>
 8553d69:	8b 45 18             	mov    0x18(%ebp),%eax
 8553d6c:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8553d72:	bb 00 00 00 00       	mov    $0x0,%ebx
 8553d77:	e9 13 04 00 00       	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 8553d7c:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8553d83:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8553d8a:	c6 45 93 00          	movb   $0x0,-0x6d(%ebp)
 8553d8e:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553d94:	89 c2                	mov    %eax,%edx
 8553d96:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8553d9b:	8d 4d 93             	lea    -0x6d(%ebp),%ecx
 8553d9e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8553da2:	8d 4d 94             	lea    -0x6c(%ebp),%ecx
 8553da5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8553da9:	8d 4d 98             	lea    -0x68(%ebp),%ecx
 8553dac:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8553db0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553db4:	89 04 24             	mov    %eax,(%esp)
 8553db7:	e8 62 0c dd ff       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8553dbc:	84 c0                	test   %al,%al
 8553dbe:	0f 84 98 02 00 00    	je     855405c <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x726>
 8553dc4:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553dca:	89 c3                	mov    %eax,%ebx
 8553dcc:	e8 ca 83 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8553dd1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8553dd5:	89 04 24             	mov    %eax,(%esp)
 8553dd8:	e8 55 bc e0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8553ddd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8553de0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8553de3:	89 04 24             	mov    %eax,(%esp)
 8553de6:	e8 d5 fa ff ff       	call   85538c0 <_Z31_isUnusableSpecialItemInVillagePK5CItem>
 8553deb:	84 c0                	test   %al,%al
 8553ded:	0f 84 69 02 00 00    	je     855405c <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x726>
 8553df3:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8553dfa:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553e00:	89 c3                	mov    %eax,%ebx
 8553e02:	e8 94 83 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8553e07:	8b 40 0c             	mov    0xc(%eax),%eax
 8553e0a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8553e0e:	89 04 24             	mov    %eax,(%esp)
 8553e11:	e8 f6 62 c2 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8553e16:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8553e19:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8553e20:	e8 79 7e b7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8553e25:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8553e28:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8553e2e:	89 04 24             	mov    %eax,(%esp)
 8553e31:	e8 5c 6e bf ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8553e36:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8553e3c:	89 04 24             	mov    %eax,(%esp)
 8553e3f:	e8 00 64 c2 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 8553e44:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553e4a:	89 c2                	mov    %eax,%edx
 8553e4c:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8553e51:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 8553e58:	00 
 8553e59:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 8553e60:	00 
 8553e61:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8553e68:	00 
 8553e69:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8553e70:	00 
 8553e71:	8d 8d 64 ff ff ff    	lea    -0x9c(%ebp),%ecx
 8553e77:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8553e7b:	8d 8d 7c ff ff ff    	lea    -0x84(%ebp),%ecx
 8553e81:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8553e85:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8553e8c:	00 
 8553e8d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8553e90:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8553e94:	8d 4d 88             	lea    -0x78(%ebp),%ecx
 8553e97:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8553e9b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8553e9e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8553ea2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8553ea6:	8b 55 08             	mov    0x8(%ebp),%edx
 8553ea9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553ead:	89 04 24             	mov    %eax,(%esp)
 8553eb0:	e8 c9 19 dd ff       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 8553eb5:	84 c0                	test   %al,%al
 8553eb7:	0f 84 3f 01 00 00    	je     8553ffc <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x6c6>
 8553ebd:	8b 45 88             	mov    -0x78(%ebp),%eax
 8553ec0:	85 c0                	test   %eax,%eax
 8553ec2:	74 0a                	je     8553ece <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x598>
 8553ec4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8553ec9:	e9 4d 01 00 00       	jmp    855401b <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x6e5>
 8553ece:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8553ed2:	74 20                	je     8553ef4 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x5be>
 8553ed4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8553ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553edb:	8b 45 08             	mov    0x8(%ebp),%eax
 8553ede:	89 04 24             	mov    %eax,(%esp)
 8553ee1:	e8 92 99 0f 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 8553ee6:	83 f0 01             	xor    $0x1,%eax
 8553ee9:	84 c0                	test   %al,%al
 8553eeb:	74 07                	je     8553ef4 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x5be>
 8553eed:	b8 01 00 00 00       	mov    $0x1,%eax
 8553ef2:	eb 05                	jmp    8553ef9 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x5c3>
 8553ef4:	b8 00 00 00 00       	mov    $0x0,%eax
 8553ef9:	84 c0                	test   %al,%al
 8553efb:	74 4d                	je     8553f4a <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x614>
 8553efd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8553f00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553f04:	8b 45 08             	mov    0x8(%ebp),%eax
 8553f07:	89 04 24             	mov    %eax,(%esp)
 8553f0a:	e8 3f 99 0f 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 8553f0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8553f16:	00 
 8553f17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8553f1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8553f1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8553f21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8553f25:	8b 45 08             	mov    0x8(%ebp),%eax
 8553f28:	89 04 24             	mov    %eax,(%esp)
 8553f2b:	e8 00 1b dd ff       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8553f30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8553f33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8553f37:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8553f3e:	00 
 8553f3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8553f42:	89 04 24             	mov    %eax,(%esp)
 8553f45:	e8 5a 9a 0f 00       	call   864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>
 8553f4a:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 8553f50:	3d c1 00 00 00       	cmp    $0xc1,%eax
 8553f55:	0f 85 a1 00 00 00    	jne    8553ffc <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x6c6>
 8553f5b:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8553f60:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 8553f67:	00 
 8553f68:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 8553f6f:	00 
 8553f70:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8553f77:	00 
 8553f78:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8553f7f:	00 
 8553f80:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 8553f86:	89 54 24 20          	mov    %edx,0x20(%esp)
 8553f8a:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8553f90:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8553f94:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8553f9b:	00 
 8553f9c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8553f9f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8553fa3:	8d 55 88             	lea    -0x78(%ebp),%edx
 8553fa6:	89 54 24 10          	mov    %edx,0x10(%esp)
 8553faa:	c7 44 24 0c 52 c3 00 	movl   $0xc352,0xc(%esp)
 8553fb1:	00 
 8553fb2:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8553fb9:	00 
 8553fba:	8b 55 08             	mov    0x8(%ebp),%edx
 8553fbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8553fc1:	89 04 24             	mov    %eax,(%esp)
 8553fc4:	e8 b5 18 dd ff       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 8553fc9:	83 f0 01             	xor    $0x1,%eax
 8553fcc:	84 c0                	test   %al,%al
 8553fce:	74 2c                	je     8553ffc <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x6c6>
 8553fd0:	c7 44 24 10 64 13 ca 	movl   $0x8ca1364,0x10(%esp)
 8553fd7:	08 
 8553fd8:	c7 44 24 0c 4c 03 00 	movl   $0x34c,0xc(%esp)
 8553fdf:	00 
 8553fe0:	c7 44 24 08 20 21 ca 	movl   $0x8ca2120,0x8(%esp)
 8553fe7:	08 
 8553fe8:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8553fef:	08 
 8553ff0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8553ff7:	e8 0e fc 57 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8553ffc:	bb 01 00 00 00       	mov    $0x1,%ebx
 8554001:	eb 18                	jmp    855401b <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x6e5>
 8554003:	89 d3                	mov    %edx,%ebx
 8554005:	89 c6                	mov    %eax,%esi
 8554007:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 855400d:	89 04 24             	mov    %eax,(%esp)
 8554010:	e8 e7 62 c2 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8554015:	89 f0                	mov    %esi,%eax
 8554017:	89 da                	mov    %ebx,%edx
 8554019:	eb 10                	jmp    855402b <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x6f5>
 855401b:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8554021:	89 04 24             	mov    %eax,(%esp)
 8554024:	e8 d3 62 c2 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8554029:	eb 1e                	jmp    8554049 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x713>
 855402b:	89 d3                	mov    %edx,%ebx
 855402d:	89 c6                	mov    %eax,%esi
 855402f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8554035:	89 04 24             	mov    %eax,(%esp)
 8554038:	e8 69 6c bf ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 855403d:	89 f0                	mov    %esi,%eax
 855403f:	89 da                	mov    %ebx,%edx
 8554041:	89 04 24             	mov    %eax,(%esp)
 8554044:	e8 07 f7 58 00       	call   8ae3750 <_Unwind_Resume>
 8554049:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 855404f:	89 04 24             	mov    %eax,(%esp)
 8554052:	e8 4f 6c bf ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8554057:	e9 33 01 00 00       	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 855405c:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8554063:	8b 45 08             	mov    0x8(%ebp),%eax
 8554066:	89 04 24             	mov    %eax,(%esp)
 8554069:	e8 20 62 b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 855406e:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8554075:	00 
 8554076:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 855407d:	00 
 855407e:	c7 44 24 44 15 00 00 	movl   $0x15,0x44(%esp)
 8554085:	00 
 8554086:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 855408c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8554090:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 8554096:	89 54 24 08          	mov    %edx,0x8(%esp)
 855409a:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 85540a0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85540a4:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 85540aa:	89 54 24 10          	mov    %edx,0x10(%esp)
 85540ae:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 85540b4:	89 54 24 14          	mov    %edx,0x14(%esp)
 85540b8:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 85540be:	89 54 24 18          	mov    %edx,0x18(%esp)
 85540c2:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 85540c8:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85540cc:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 85540d2:	89 54 24 20          	mov    %edx,0x20(%esp)
 85540d6:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 85540dc:	89 54 24 24          	mov    %edx,0x24(%esp)
 85540e0:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 85540e6:	89 54 24 28          	mov    %edx,0x28(%esp)
 85540ea:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 85540f0:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 85540f4:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 85540fa:	89 54 24 30          	mov    %edx,0x30(%esp)
 85540fe:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 8554104:	89 54 24 34          	mov    %edx,0x34(%esp)
 8554108:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 855410e:	89 54 24 38          	mov    %edx,0x38(%esp)
 8554112:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 8554118:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 855411c:	0f b6 95 63 ff ff ff 	movzbl -0x9d(%ebp),%edx
 8554123:	88 54 24 40          	mov    %dl,0x40(%esp)
 8554127:	89 04 24             	mov    %eax,(%esp)
 855412a:	e8 57 ec fa ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 855412f:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8554132:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8554135:	c1 e8 1f             	shr    $0x1f,%eax
 8554138:	84 c0                	test   %al,%al
 855413a:	74 07                	je     8554143 <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x80d>
 855413c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8554141:	eb 4c                	jmp    855418f <_ZN8WongWork14CMailBoxHelper17_DoGetPackageItemEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR+0x859>
 8554143:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 855414a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855414d:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8554150:	89 54 24 08          	mov    %edx,0x8(%esp)
 8554154:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8554157:	89 54 24 04          	mov    %edx,0x4(%esp)
 855415b:	89 04 24             	mov    %eax,(%esp)
 855415e:	e8 9b 48 00 00       	call   85589fe <_ZSt9make_pairI14ENUM_ITEMSPACERiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8554163:	83 ec 04             	sub    $0x4,%esp
 8554166:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8554169:	89 44 24 04          	mov    %eax,0x4(%esp)
 855416d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8554170:	89 04 24             	mov    %eax,(%esp)
 8554173:	e8 cc 48 00 00       	call   8558a44 <_ZNSt4pairIiiEC1I14ENUM_ITEMSPACEiEEOS_IT_T0_E>
 8554178:	8d 45 cc             	lea    -0x34(%ebp),%eax
 855417b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855417f:	8b 45 10             	mov    0x10(%ebp),%eax
 8554182:	89 04 24             	mov    %eax,(%esp)
 8554185:	e8 7c 94 b8 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 855418a:	bb 01 00 00 00       	mov    $0x1,%ebx
 855418f:	89 d8                	mov    %ebx,%eax
 8554191:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8554194:	83 c4 00             	add    $0x0,%esp
 8554197:	5b                   	pop    %ebx
 8554198:	5e                   	pop    %esi
 8554199:	5d                   	pop    %ebp
 855419a:	c3                   	ret
 855419b:	90                   	nop

```

```c
// WongWork::CMailBoxHelper::_DoGetPackageItem @ 0x8553936

/* WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageItem
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  CDataManager *pCVar5;
  CCargo *this;
  int iVar6;
  uint *puVar7;
  CInventory *pCVar8;
  int iVar9;
  undefined4 unaff_EBX;
  InventoryMemory local_c9d7 [49471];
  CInventory local_898 [1979];
  undefined2 local_dd;
  undefined2 uStack_db;
  undefined2 uStack_d9;
  undefined2 uStack_d7;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  stCeraShopItemParam_t local_a0 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_88 [12];
  int local_7c;
  int local_78;
  bool local_71;
  int local_70 [2];
  __normal_iterator local_68 [4];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_64 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_60 [15];
  bool local_51;
  int local_50;
  int local_4c;
  pair<int,int> local_48 [8];
  uint local_40 [2];
  pair<int,int> local_38 [8];
  ENUM_ITEMSPACE local_30 [8];
  int local_28;
  CItem *local_24;
  int local_20;
  int local_1c;
  CItem *local_18;
  int local_14;
  long local_10;
  
  CMailBox::CMail::GetPackageItem();
  if ((0x28d287 < CONCAT22(uStack_d9,uStack_db)) && (CONCAT22(uStack_d9,uStack_db) < 0x28d29a)) {
    uVar3 = CUser::DoGetGoldItem(param_1,CONCAT22(uStack_d9,uStack_db),param_3,param_4,param_5);
    return uVar3;
  }
  cVar1 = IsCeraPointItem(CONCAT22(uStack_d9,uStack_db));
  if (cVar1 != '\0') {
    uVar4 = CMailBox::CMail::GetPackageMoney(param_2);
    uVar3 = CUser::DoGetCeraPointItem(param_1,uVar4,param_4,param_5,CONCAT22(uStack_d9,uStack_db));
    return uVar3;
  }
  if (param_4) {
    local_4c = 0;
    local_50 = 0;
    local_51 = false;
    cVar1 = CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,CONCAT22(uStack_d9,uStack_db),&local_4c,&local_50,
                       &local_51);
    if (cVar1 != '\0') {
      iVar6 = CONCAT22(uStack_d9,uStack_db);
      pCVar5 = (CDataManager *)G_CDataManager();
      local_24 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
      cVar1 = _isUnusableSpecialItemInVillage(local_24);
      if (cVar1 != '\0') {
        if (local_4c == 1) {
          this = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
          iVar6 = CCargo::GetCapacity(this);
          if (local_50 <= iVar6) {
            *(undefined4 *)param_5 = 0xd;
            return 0;
          }
        }
        else if (local_4c == 5) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_60);
                    /* try { // try from 08553ae1 to 08553baf has its CatchHandler @ 08553c72 */
          pCVar5 = (CDataManager *)G_CDataManager();
          local_20 = CDataManager::find_item(pCVar5,CONCAT22(uStack_d9,uStack_db));
          local_1c = local_20 + 0x21c;
          std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::begin();
          std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::end();
          while (bVar2 = __gnu_cxx::operator!=(local_64,local_68), bVar2) {
            __gnu_cxx::
            __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
            ::operator->(local_64);
            puVar7 = (uint *)__gnu_cxx::
                             __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                             ::operator->(local_64);
            std::make_pair<unsigned_int_const&,unsigned_int_const&>(local_40,puVar7);
            std::pair<int,int>::pair<unsigned_int,unsigned_int>(local_48,(pair *)local_40);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_60,local_48);
            __gnu_cxx::
            __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
            ::operator++(local_64);
          }
          CInventory::CInventory(local_898);
          InventoryMemory::InventoryMemory(local_c9d7);
          CInventory::SetInventoryMemory(local_898,local_c9d7);
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 08553bee to 08553c07 has its CatchHandler @ 08553c3a */
          CInventory::setCopy(local_898,pCVar8);
          iVar6 = CInventory::tryInsertEventItems(local_898,(vector *)local_60);
          iVar9 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_60)
          ;
          if (iVar6 != iVar9) {
            *(undefined4 *)param_5 = 4;
            unaff_EBX = 0;
          }
                    /* try { // try from 08553c5b to 08553c5f has its CatchHandler @ 08553c72 */
          CInventory::~CInventory(local_898);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_60);
          if (iVar6 != iVar9) {
            return unaff_EBX;
          }
        }
        return 1;
      }
    }
    uVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::tryInsertItemIntoInventory
                      (uVar3,CONCAT22(uStack_db,local_dd),CONCAT22(uStack_d7,uStack_d9),local_d5,
                       local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,local_b9,local_b5,
                       local_b1,local_ad,local_a9,local_a5,local_a1);
    if (iVar6 < 0) {
      *(undefined4 *)param_5 = 4;
      return 0;
    }
  }
  else {
    local_70[1] = 0;
    local_70[0] = 0;
    local_71 = false;
    cVar1 = CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,CONCAT22(uStack_d9,uStack_db),local_70 + 1,local_70,
                       &local_71);
    if (cVar1 != '\0') {
      iVar6 = CONCAT22(uStack_d9,uStack_db);
      pCVar5 = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
      cVar1 = _isUnusableSpecialItemInVillage(local_18);
      if (cVar1 != '\0') {
        local_7c = 0;
        iVar6 = CONCAT22(uStack_d9,uStack_db);
        iVar9 = G_CDataManager();
        local_14 = CItemList::GetRestrictCode(*(CItemList **)(iVar9 + 0xc),iVar6);
        local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_88);
                    /* try { // try from 08553e3f to 08553e43 has its CatchHandler @ 0855402b */
        CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_a0);
                    /* try { // try from 08553eb0 to 08553ffb has its CatchHandler @ 08554003 */
        cVar1 = CCeraShop::ProcessSpecialItem
                          (GlobalData::s_pCeraShop,param_1,CONCAT22(uStack_d9,uStack_db),local_14,
                           &local_7c,local_10,true,(vector *)local_88,local_a0,'\0','\0',false,1);
        if (cVar1 != '\0') {
          if (local_7c != 0) {
            uVar3 = 0;
            goto LAB_0855401b;
          }
          if ((local_14 == 0) ||
             (cVar1 = CUser::IsRestrictedGoods(param_1,local_14), cVar1 == '\x01')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            CUser::SetRestrictedGoods(param_1,local_14);
            CCeraShop::SaveFeaturedIdx(param_1,local_14,local_10,0);
            CUser::SendRestrictedGoods(param_1,true,local_14);
          }
          if ((CONCAT22(uStack_d9,uStack_db) == 0xc1) &&
             (cVar1 = CCeraShop::ProcessSpecialItem
                                (GlobalData::s_pCeraShop,param_1,0x10,0xc352,&local_7c,local_10,true
                                 ,(vector *)local_88,local_a0,'\0','\0',false,1), cVar1 != '\x01'))
          {
            LogManager::logFormat
                      (1,"MailBox.cpp",
                       "static bool WongWork::CMailBoxHelper::_DoGetPackageItem(CUser*, const WongWork::CMailBox::CMail*, WongWork::CMailBoxHelper::IntPairVector&, bool, ENUM_ERROR&)"
                       ,0x34c,"AuctionVIP Error - Present to friend(add private-store)");
          }
        }
        uVar3 = 1;
LAB_0855401b:
                    /* try { // try from 08554024 to 08554028 has its CatchHandler @ 0855402b */
        CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_a0);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_88);
        return uVar3;
      }
    }
    local_78 = 0;
    uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_78 = CInventory::insertItemIntoInventory
                         (uVar3,CONCAT22(uStack_db,local_dd),CONCAT22(uStack_d7,uStack_d9),local_d5,
                          local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,local_b9,local_b5,
                          local_b1,local_ad,local_a9,local_a5,local_a1,0x15,1,0);
    if (local_78 < 0) {
      return 1;
    }
    local_28 = 0;
    std::make_pair<ENUM_ITEMSPACE,int&>(local_30,&local_28);
    std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_38,local_30);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_38);
  }
  return 1;
}

```

---

## _DoSendNewMail

```asm
// === 08555916 WongWork::CMailBoxHelper::_DoSendNewMail  [0x08555916-0x8555ac7] ===
 8555916:	55                   	push   %ebp
 8555917:	89 e5                	mov    %esp,%ebp
 8555919:	56                   	push   %esi
 855591a:	53                   	push   %ebx
 855591b:	83 ec 50             	sub    $0x50,%esp
 855591e:	8b 45 18             	mov    0x18(%ebp),%eax
 8555921:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8555924:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8555929:	c7 44 24 08 9b 05 00 	movl   $0x59b,0x8(%esp)
 8555930:	00 
 8555931:	c7 44 24 04 9c 13 ca 	movl   $0x8ca139c,0x4(%esp)
 8555938:	08 
 8555939:	89 04 24             	mov    %eax,(%esp)
 855593c:	e8 45 a1 d3 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8555941:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8555948:	00 
 8555949:	89 44 24 04          	mov    %eax,0x4(%esp)
 855594d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555950:	89 04 24             	mov    %eax,(%esp)
 8555953:	e8 ce 32 b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8555958:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855595b:	89 04 24             	mov    %eax,(%esp)
 855595e:	e8 e3 32 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8555963:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 855596a:	00 
 855596b:	89 04 24             	mov    %eax,(%esp)
 855596e:	e8 e3 32 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8555973:	8b 45 08             	mov    0x8(%ebp),%eax
 8555976:	89 04 24             	mov    %eax,(%esp)
 8555979:	e8 18 33 b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 855597e:	89 c3                	mov    %eax,%ebx
 8555980:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555983:	89 04 24             	mov    %eax,(%esp)
 8555986:	e8 bb 32 b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 855598b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 855598f:	89 04 24             	mov    %eax,(%esp)
 8555992:	e8 bf 32 b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8555997:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855599a:	89 04 24             	mov    %eax,(%esp)
 855599d:	e8 ac 32 b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85559a2:	89 04 24             	mov    %eax,(%esp)
 85559a5:	e8 e4 25 c4 ff       	call   8197f8e <_ZN12CStreamGuard11GetInBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 85559aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85559ad:	c7 44 24 08 68 01 00 	movl   $0x168,0x8(%esp)
 85559b4:	00 
 85559b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85559bc:	00 
 85559bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85559c0:	89 04 24             	mov    %eax,(%esp)
 85559c3:	e8 f8 82 b2 ff       	call   807dcc0 <memset@plt>
 85559c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85559cb:	89 04 24             	mov    %eax,(%esp)
 85559ce:	e8 7b 62 b7 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85559d3:	89 c3                	mov    %eax,%ebx
 85559d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85559d8:	89 04 24             	mov    %eax,(%esp)
 85559db:	e8 48 b6 ba ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85559e0:	8b 55 24             	mov    0x24(%ebp),%edx
 85559e3:	89 54 24 24          	mov    %edx,0x24(%esp)
 85559e7:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 85559ee:	00 
 85559ef:	8b 55 20             	mov    0x20(%ebp),%edx
 85559f2:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85559f6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85559f9:	89 54 24 18          	mov    %edx,0x18(%esp)
 85559fd:	8b 55 14             	mov    0x14(%ebp),%edx
 8555a00:	89 54 24 14          	mov    %edx,0x14(%esp)
 8555a04:	8b 55 10             	mov    0x10(%ebp),%edx
 8555a07:	89 54 24 10          	mov    %edx,0x10(%esp)
 8555a0b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8555a0e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8555a12:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8555a16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555a1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8555a1d:	89 04 24             	mov    %eax,(%esp)
 8555a20:	e8 31 fd ff ff       	call   8555756 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji>
 8555a25:	8b 45 08             	mov    0x8(%ebp),%eax
 8555a28:	89 04 24             	mov    %eax,(%esp)
 8555a2b:	e8 60 62 b7 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8555a30:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8555a33:	89 82 5f 01 00 00    	mov    %eax,0x15f(%edx)
 8555a39:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8555a3d:	83 f0 01             	xor    $0x1,%eax
 8555a40:	84 c0                	test   %al,%al
 8555a42:	74 32                	je     8555a76 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii+0x160>
 8555a44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555a47:	89 04 24             	mov    %eax,(%esp)
 8555a4a:	e8 ab b5 ba ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 8555a4f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8555a52:	8b 45 08             	mov    0x8(%ebp),%eax
 8555a55:	89 04 24             	mov    %eax,(%esp)
 8555a58:	e8 af a7 cd ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 8555a5d:	8d 50 58             	lea    0x58(%eax),%edx
 8555a60:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8555a63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8555a67:	89 14 24             	mov    %edx,(%esp)
 8555a6a:	e8 5b 30 00 00       	call   8558aca <_ZNSt4listIP6StreamSaIS1_EE9push_backEOS1_>
 8555a6f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8555a74:	eb 3e                	jmp    8555ab4 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii+0x19e>
 8555a76:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8555a7b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8555a7e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8555a82:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8555a89:	00 
 8555a8a:	89 04 24             	mov    %eax,(%esp)
 8555a8d:	e8 4c b5 01 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8555a92:	bb 00 00 00 00       	mov    $0x0,%ebx
 8555a97:	eb 1b                	jmp    8555ab4 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii+0x19e>
 8555a99:	89 d3                	mov    %edx,%ebx
 8555a9b:	89 c6                	mov    %eax,%esi
 8555a9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555aa0:	89 04 24             	mov    %eax,(%esp)
 8555aa3:	e8 2a 6e 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8555aa8:	89 f0                	mov    %esi,%eax
 8555aaa:	89 da                	mov    %ebx,%edx
 8555aac:	89 04 24             	mov    %eax,(%esp)
 8555aaf:	e8 9c dc 58 00       	call   8ae3750 <_Unwind_Resume>
 8555ab4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8555ab7:	89 04 24             	mov    %eax,(%esp)
 8555aba:	e8 13 6e 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8555abf:	89 d8                	mov    %ebx,%eax
 8555ac1:	83 c4 50             	add    $0x50,%esp
 8555ac4:	5b                   	pop    %ebx
 8555ac5:	5e                   	pop    %esi
 8555ac6:	5d                   	pop    %ebp
 8555ac7:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::_DoSendNewMail @ 0x8555916

/* WongWork::CMailBoxHelper::_DoSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int,
   bool, char const*, int, int) */

undefined4
WongWork::CMailBoxHelper::_DoSendNewMail
          (CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4,bool param_5,char *param_6,
          int param_7,int param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  CStreamGuard local_1c [8];
  Stream *local_14;
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x59b);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,false);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0855596e to 08555a91 has its CatchHandler @ 08555a99 */
  CStreamGuard::operator<<(pCVar2,0x80);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  memset(local_10,0,0x168);
  iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  _makeSendMailData(local_10,pcVar4,iVar3,param_2,param_3,param_4,param_6,param_7,0,param_8);
  uVar5 = CUser::GetServerGroup(param_1);
  *(undefined4 *)(local_10 + 0x15f) = uVar5;
  if (param_5) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  }
  else {
    local_14 = (Stream *)CStreamGuard::Get(local_1c);
    iVar3 = CUser::GetMailBox(param_1);
    std::list<Stream*,std::allocator<Stream*>>::push_back
              ((list<Stream*,std::allocator<Stream*>> *)(iVar3 + 0x58),&local_14);
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return 0;
}

```

---

## _makeSendMailData

```asm
// === 08555756 WongWork::CMailBoxHelper::_makeSendMailData  [0x08555756-0x8555915] ===
 8555756:	55                   	push   %ebp
 8555757:	89 e5                	mov    %esp,%ebp
 8555759:	83 ec 28             	sub    $0x28,%esp
 855575c:	8b 45 08             	mov    0x8(%ebp),%eax
 855575f:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8555766:	00 
 8555767:	8b 55 0c             	mov    0xc(%ebp),%edx
 855576a:	89 54 24 04          	mov    %edx,0x4(%esp)
 855576e:	89 04 24             	mov    %eax,(%esp)
 8555771:	e8 5a 81 b2 ff       	call   807d8d0 <strncpy@plt>
 8555776:	8b 45 08             	mov    0x8(%ebp),%eax
 8555779:	8b 55 1c             	mov    0x1c(%ebp),%edx
 855577c:	89 50 22             	mov    %edx,0x22(%eax)
 855577f:	8b 55 10             	mov    0x10(%ebp),%edx
 8555782:	8b 45 08             	mov    0x8(%ebp),%eax
 8555785:	89 50 1e             	mov    %edx,0x1e(%eax)
 8555788:	8b 45 08             	mov    0x8(%ebp),%eax
 855578b:	8b 55 18             	mov    0x18(%ebp),%edx
 855578e:	89 50 26             	mov    %edx,0x26(%eax)
 8555791:	8b 45 14             	mov    0x14(%ebp),%eax
 8555794:	0f b6 10             	movzbl (%eax),%edx
 8555797:	8b 45 08             	mov    0x8(%ebp),%eax
 855579a:	88 50 2a             	mov    %dl,0x2a(%eax)
 855579d:	8b 45 14             	mov    0x14(%ebp),%eax
 85557a0:	8b 50 02             	mov    0x2(%eax),%edx
 85557a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85557a6:	89 50 2b             	mov    %edx,0x2b(%eax)
 85557a9:	8b 45 14             	mov    0x14(%ebp),%eax
 85557ac:	8b 50 07             	mov    0x7(%eax),%edx
 85557af:	8b 45 08             	mov    0x8(%ebp),%eax
 85557b2:	89 50 2f             	mov    %edx,0x2f(%eax)
 85557b5:	8b 45 14             	mov    0x14(%ebp),%eax
 85557b8:	0f b7 50 0b          	movzwl 0xb(%eax),%edx
 85557bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85557bf:	66 89 50 34          	mov    %dx,0x34(%eax)
 85557c3:	8b 45 14             	mov    0x14(%ebp),%eax
 85557c6:	89 04 24             	mov    %eax,(%esp)
 85557c9:	e8 0e b0 bf ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 85557ce:	8b 55 08             	mov    0x8(%ebp),%edx
 85557d1:	88 42 33             	mov    %al,0x33(%edx)
 85557d4:	8b 45 14             	mov    0x14(%ebp),%eax
 85557d7:	8b 50 0d             	mov    0xd(%eax),%edx
 85557da:	8b 45 08             	mov    0x8(%ebp),%eax
 85557dd:	89 50 36             	mov    %edx,0x36(%eax)
 85557e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85557e3:	8b 55 14             	mov    0x14(%ebp),%edx
 85557e6:	8b 4a 15             	mov    0x15(%edx),%ecx
 85557e9:	89 48 3a             	mov    %ecx,0x3a(%eax)
 85557ec:	8b 4a 19             	mov    0x19(%edx),%ecx
 85557ef:	89 48 3e             	mov    %ecx,0x3e(%eax)
 85557f2:	0f b7 52 1d          	movzwl 0x1d(%edx),%edx
 85557f6:	66 89 50 42          	mov    %dx,0x42(%eax)
 85557fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85557fd:	8d 48 45             	lea    0x45(%eax),%ecx
 8555800:	8b 45 08             	mov    0x8(%ebp),%eax
 8555803:	8d 50 44             	lea    0x44(%eax),%edx
 8555806:	8b 45 14             	mov    0x14(%ebp),%eax
 8555809:	83 c0 11             	add    $0x11,%eax
 855580c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8555810:	89 54 24 04          	mov    %edx,0x4(%esp)
 8555814:	89 04 24             	mov    %eax,(%esp)
 8555817:	e8 74 7c ef ff       	call   844d490 <_ZNK17stAmplifyOption_t9getValuesERhRt>
 855581c:	8b 45 08             	mov    0x8(%ebp),%eax
 855581f:	8b 55 14             	mov    0x14(%ebp),%edx
 8555822:	8b 4a 25             	mov    0x25(%edx),%ecx
 8555825:	89 48 47             	mov    %ecx,0x47(%eax)
 8555828:	8b 4a 29             	mov    0x29(%edx),%ecx
 855582b:	89 48 4b             	mov    %ecx,0x4b(%eax)
 855582e:	8b 4a 2d             	mov    0x2d(%edx),%ecx
 8555831:	89 48 4f             	mov    %ecx,0x4f(%eax)
 8555834:	0f b7 52 31          	movzwl 0x31(%edx),%edx
 8555838:	66 89 50 53          	mov    %dx,0x53(%eax)
 855583c:	8b 45 14             	mov    0x14(%ebp),%eax
 855583f:	83 c0 33             	add    $0x33,%eax
 8555842:	89 04 24             	mov    %eax,(%esp)
 8555845:	e8 0e 95 bc ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 855584a:	8b 55 08             	mov    0x8(%ebp),%edx
 855584d:	88 42 55             	mov    %al,0x55(%edx)
 8555850:	8b 45 14             	mov    0x14(%ebp),%eax
 8555853:	89 04 24             	mov    %eax,(%esp)
 8555856:	e8 1b 03 de ff       	call   8335b76 <_ZNK10Inven_Item18IsCreatureItemTypeEv>
 855585b:	8b 55 08             	mov    0x8(%ebp),%edx
 855585e:	88 42 58             	mov    %al,0x58(%edx)
 8555861:	8b 45 14             	mov    0x14(%ebp),%eax
 8555864:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8555868:	3c 08                	cmp    $0x8,%al
 855586a:	0f 94 c2             	sete   %dl
 855586d:	8b 45 08             	mov    0x8(%ebp),%eax
 8555870:	88 50 56             	mov    %dl,0x56(%eax)
 8555873:	8b 45 08             	mov    0x8(%ebp),%eax
 8555876:	66 c7 40 59 00 00    	movw   $0x0,0x59(%eax)
 855587c:	8b 45 08             	mov    0x8(%ebp),%eax
 855587f:	83 c0 5b             	add    $0x5b,%eax
 8555882:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8555889:	00 
 855588a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8555891:	00 
 8555892:	89 04 24             	mov    %eax,(%esp)
 8555895:	e8 26 84 b2 ff       	call   807dcc0 <memset@plt>
 855589a:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 855589e:	74 52                	je     85558f2 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji+0x19c>
 85558a0:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 85558a4:	74 4c                	je     85558f2 <_ZN8WongWork14CMailBoxHelper17_makeSendMailDataEP25SIG_MAILBOX_SEND_NEW_MAILPKciRK10Inven_ItemjjS4_iji+0x19c>
 85558a6:	8b 45 24             	mov    0x24(%ebp),%eax
 85558a9:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 85558ad:	66 c7 45 f6 ff 00    	movw   $0xff,-0xa(%ebp)
 85558b3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85558b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85558ba:	8d 45 f6             	lea    -0xa(%ebp),%eax
 85558bd:	89 04 24             	mov    %eax,(%esp)
 85558c0:	e8 a8 18 d3 ff       	call   828716d <_ZSt3minItERKT_S2_S2_>
 85558c5:	0f b7 10             	movzwl (%eax),%edx
 85558c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85558cb:	66 89 50 59          	mov    %dx,0x59(%eax)
 85558cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85558d2:	0f b7 40 59          	movzwl 0x59(%eax),%eax
 85558d6:	0f b7 c0             	movzwl %ax,%eax
 85558d9:	8b 55 08             	mov    0x8(%ebp),%edx
 85558dc:	83 c2 5b             	add    $0x5b,%edx
 85558df:	89 44 24 08          	mov    %eax,0x8(%esp)
 85558e3:	8b 45 20             	mov    0x20(%ebp),%eax
 85558e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85558ea:	89 14 24             	mov    %edx,(%esp)
 85558ed:	e8 de 7f b2 ff       	call   807d8d0 <strncpy@plt>
 85558f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85558f5:	8b 55 28             	mov    0x28(%ebp),%edx
 85558f8:	89 90 5b 01 00 00    	mov    %edx,0x15b(%eax)
 85558fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8555901:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8555904:	89 90 63 01 00 00    	mov    %edx,0x163(%eax)
 855590a:	8b 45 08             	mov    0x8(%ebp),%eax
 855590d:	c6 80 67 01 00 00 00 	movb   $0x0,0x167(%eax)
 8555914:	c9                   	leave
 8555915:	c3                   	ret

```

```c
// WongWork::CMailBoxHelper::_makeSendMailData @ 0x8555756

/* WongWork::CMailBoxHelper::_makeSendMailData(SIG_MAILBOX_SEND_NEW_MAIL*, char const*, int,
   Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, int) */

void WongWork::CMailBoxHelper::_makeSendMailData
               (SIG_MAILBOX_SEND_NEW_MAIL *param_1,char *param_2,int param_3,Inven_Item *param_4,
               uint param_5,uint param_6,char *param_7,int param_8,uint param_9,int param_10)

{
  SIG_MAILBOX_SEND_NEW_MAIL SVar1;
  ushort *puVar2;
  ushort local_10 [6];
  
  strncpy((char *)param_1,param_2,0x1d);
  *(uint *)(param_1 + 0x22) = param_6;
  *(int *)(param_1 + 0x1e) = param_3;
  *(uint *)(param_1 + 0x26) = param_5;
  param_1[0x2a] = *(SIG_MAILBOX_SEND_NEW_MAIL *)param_4;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_4 + 7);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_4 + 0xb);
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)Inven_Item::GetItemAttr(param_4);
  param_1[0x33] = SVar1;
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_4 + 0xd);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_4 + 0x15);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_4 + 0x19);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_4 + 0x1d);
  stAmplifyOption_t::getValues
            ((stAmplifyOption_t *)(param_4 + 0x11),(uchar *)(param_1 + 0x44),
             (ushort *)(param_1 + 0x45));
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_4 + 0x25);
  *(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(param_4 + 0x29);
  *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(param_4 + 0x2d);
  *(undefined2 *)(param_1 + 0x53) = *(undefined2 *)(param_4 + 0x31);
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)
          UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_4 + 0x33));
  param_1[0x55] = SVar1;
  SVar1 = (SIG_MAILBOX_SEND_NEW_MAIL)Inven_Item::IsCreatureItemType(param_4);
  param_1[0x58] = SVar1;
  param_1[0x56] = (SIG_MAILBOX_SEND_NEW_MAIL)(param_4[1] == (Inven_Item)0x8);
  *(undefined2 *)(param_1 + 0x59) = 0;
  memset(param_1 + 0x5b,0,0x100);
  if ((param_7 != (char *)0x0) && (param_8 != 0)) {
    local_10[0] = (ushort)param_8;
    local_10[1] = 0xff;
    puVar2 = std::min<unsigned_short>(local_10 + 1,local_10);
    *(ushort *)(param_1 + 0x59) = *puVar2;
    strncpy((char *)(param_1 + 0x5b),param_7,(uint)*(ushort *)(param_1 + 0x59));
  }
  *(uint *)(param_1 + 0x15b) = param_9;
  *(int *)(param_1 + 0x163) = param_10;
  param_1[0x167] = (SIG_MAILBOX_SEND_NEW_MAIL)0x0;
  return;
}

```

