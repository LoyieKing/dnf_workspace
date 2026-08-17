# message_counter__CUserPacketCounter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## IncreasePacket

```asm
// === 0856ff24 message_counter::CUserPacketCounter::IncreasePacket  [0x0856ff24-0x856ffef] ===
 856ff24:	55                   	push   %ebp
 856ff25:	89 e5                	mov    %esp,%ebp
 856ff27:	83 ec 48             	sub    $0x48,%esp
 856ff2a:	8b 55 08             	mov    0x8(%ebp),%edx
 856ff2d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856ff30:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 856ff33:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 856ff37:	89 54 24 04          	mov    %edx,0x4(%esp)
 856ff3b:	89 04 24             	mov    %eax,(%esp)
 856ff3e:	e8 29 03 ee ff       	call   845026c <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4findERS3_>
 856ff43:	83 ec 04             	sub    $0x4,%esp
 856ff46:	8b 55 08             	mov    0x8(%ebp),%edx
 856ff49:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856ff4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 856ff50:	89 04 24             	mov    %eax,(%esp)
 856ff53:	e8 40 03 ee ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 856ff58:	83 ec 04             	sub    $0x4,%esp
 856ff5b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856ff5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 856ff62:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856ff65:	89 04 24             	mov    %eax,(%esp)
 856ff68:	e8 51 03 ee ff       	call   84502be <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 856ff6d:	84 c0                	test   %al,%al
 856ff6f:	74 16                	je     856ff87 <_ZN15message_counter18CUserPacketCounter14IncreasePacketEj+0x63>
 856ff71:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 856ff74:	89 04 24             	mov    %eax,(%esp)
 856ff77:	e8 56 03 ee ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 856ff7c:	8b 50 04             	mov    0x4(%eax),%edx
 856ff7f:	83 c2 01             	add    $0x1,%edx
 856ff82:	89 50 04             	mov    %edx,0x4(%eax)
 856ff85:	eb 51                	jmp    856ffd8 <_ZN15message_counter18CUserPacketCounter14IncreasePacketEj+0xb4>
 856ff87:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 856ff8e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 856ff91:	8d 55 f4             	lea    -0xc(%ebp),%edx
 856ff94:	89 54 24 08          	mov    %edx,0x8(%esp)
 856ff98:	8d 55 0c             	lea    0xc(%ebp),%edx
 856ff9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 856ff9f:	89 04 24             	mov    %eax,(%esp)
 856ffa2:	e8 4f c2 d3 ff       	call   82ac1f6 <_ZSt9make_pairIRjiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 856ffa7:	83 ec 04             	sub    $0x4,%esp
 856ffaa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 856ffad:	89 44 24 04          	mov    %eax,0x4(%esp)
 856ffb1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 856ffb4:	89 04 24             	mov    %eax,(%esp)
 856ffb7:	e8 de c1 d3 ff       	call   82ac19a <_ZNSt4pairIKjiEC1IjiEEOS_IT_T0_E>
 856ffbc:	8b 55 08             	mov    0x8(%ebp),%edx
 856ffbf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 856ffc2:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 856ffc5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 856ffc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 856ffcd:	89 04 24             	mov    %eax,(%esp)
 856ffd0:	e8 f5 c1 d3 ff       	call   82ac1ca <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 856ffd5:	83 ec 04             	sub    $0x4,%esp
 856ffd8:	8b 45 08             	mov    0x8(%ebp),%eax
 856ffdb:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 856ffe1:	8d 50 01             	lea    0x1(%eax),%edx
 856ffe4:	8b 45 08             	mov    0x8(%ebp),%eax
 856ffe7:	89 90 18 01 00 00    	mov    %edx,0x118(%eax)
 856ffed:	c9                   	leave
 856ffee:	c3                   	ret
 856ffef:	90                   	nop

```

```c
// message_counter::CUserPacketCounter::IncreasePacket @ 0x856ff24

/* message_counter::CUserPacketCounter::IncreasePacket(unsigned int) */

void message_counter::CUserPacketCounter::IncreasePacket(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_30 [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_2c [4];
  pair local_28 [8];
  pair<unsigned_int_const,int> local_20 [8];
  uint local_18 [2];
  undefined4 local_10;
  
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  find((uint *)local_30);
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  end(local_2c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    local_10 = 1;
    std::make_pair<unsigned_int&,int>(local_18,(int *)&stack0x00000008);
    std::pair<unsigned_int_const,int>::pair<unsigned_int,int>(local_20,(pair *)local_18);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::insert(local_28);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->(local_30);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  return;
}

```

---

## WriteLog

```asm
// === 0856fff0 message_counter::CUserPacketCounter::WriteLog  [0x0856fff0-0x857011e] ===
 856fff0:	55                   	push   %ebp
 856fff1:	89 e5                	mov    %esp,%ebp
 856fff3:	57                   	push   %edi
 856fff4:	56                   	push   %esi
 856fff5:	53                   	push   %ebx
 856fff6:	83 ec 4c             	sub    $0x4c,%esp
 856fff9:	8b 45 08             	mov    0x8(%ebp),%eax
 856fffc:	8b 98 18 01 00 00    	mov    0x118(%eax),%ebx
 8570002:	8b 45 08             	mov    0x8(%ebp),%eax
 8570005:	8d 70 18             	lea    0x18(%eax),%esi
 8570008:	c7 44 24 08 9d 00 00 	movl   $0x9d,0x8(%esp)
 857000f:	00 
 8570010:	c7 44 24 04 00 4c ca 	movl   $0x8ca4c00,0x4(%esp)
 8570017:	08 
 8570018:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 857001b:	89 04 24             	mov    %eax,(%esp)
 857001e:	e8 49 78 b9 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 8570023:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8570027:	c7 44 24 08 b4 3f ca 	movl   $0x8ca3fb4,0x8(%esp)
 857002e:	08 
 857002f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8570033:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8570036:	89 04 24             	mov    %eax,(%esp)
 8570039:	e8 5a 78 b9 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 857003e:	8b 55 08             	mov    0x8(%ebp),%edx
 8570041:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8570044:	89 54 24 04          	mov    %edx,0x4(%esp)
 8570048:	89 04 24             	mov    %eax,(%esp)
 857004b:	e8 16 19 ee ff       	call   8451966 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5beginEv>
 8570050:	83 ec 04             	sub    $0x4,%esp
 8570053:	eb 78                	jmp    85700cd <_ZN15message_counter18CUserPacketCounter8WriteLogEv+0xdd>
 8570055:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8570058:	89 04 24             	mov    %eax,(%esp)
 857005b:	e8 72 02 ee ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 8570060:	8b 70 04             	mov    0x4(%eax),%esi
 8570063:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8570066:	89 04 24             	mov    %eax,(%esp)
 8570069:	e8 64 02 ee ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 857006e:	8b 00                	mov    (%eax),%eax
 8570070:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8570077:	00 
 8570078:	89 04 24             	mov    %eax,(%esp)
 857007b:	e8 cb 8f b9 ff       	call   810904b <_Z14NumberToStringji>
 8570080:	89 c3                	mov    %eax,%ebx
 8570082:	8b 45 08             	mov    0x8(%ebp),%eax
 8570085:	8d 78 18             	lea    0x18(%eax),%edi
 8570088:	c7 44 24 08 a0 00 00 	movl   $0xa0,0x8(%esp)
 857008f:	00 
 8570090:	c7 44 24 04 00 4c ca 	movl   $0x8ca4c00,0x4(%esp)
 8570097:	08 
 8570098:	8d 45 e0             	lea    -0x20(%ebp),%eax
 857009b:	89 04 24             	mov    %eax,(%esp)
 857009e:	e8 c9 77 b9 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 85700a3:	89 74 24 10          	mov    %esi,0x10(%esp)
 85700a7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85700ab:	c7 44 24 08 d8 3f ca 	movl   $0x8ca3fd8,0x8(%esp)
 85700b2:	08 
 85700b3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 85700b7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85700ba:	89 04 24             	mov    %eax,(%esp)
 85700bd:	e8 d6 77 b9 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 85700c2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85700c5:	89 04 24             	mov    %eax,(%esp)
 85700c8:	e8 bf 18 ee ff       	call   845198c <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEppEv>
 85700cd:	8b 55 08             	mov    0x8(%ebp),%edx
 85700d0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85700d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85700d7:	89 04 24             	mov    %eax,(%esp)
 85700da:	e8 b9 01 ee ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 85700df:	83 ec 04             	sub    $0x4,%esp
 85700e2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85700e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85700e9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85700ec:	89 04 24             	mov    %eax,(%esp)
 85700ef:	e8 ca 01 ee ff       	call   84502be <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 85700f4:	84 c0                	test   %al,%al
 85700f6:	0f 85 59 ff ff ff    	jne    8570055 <_ZN15message_counter18CUserPacketCounter8WriteLogEv+0x65>
 85700fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85700ff:	c7 80 18 01 00 00 00 	movl   $0x0,0x118(%eax)
 8570106:	00 00 00 
 8570109:	8b 45 08             	mov    0x8(%ebp),%eax
 857010c:	89 04 24             	mov    %eax,(%esp)
 857010f:	e8 90 03 00 00       	call   85704a4 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5clearEv>
 8570114:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8570117:	83 c4 00             	add    $0x0,%esp
 857011a:	5b                   	pop    %ebx
 857011b:	5e                   	pop    %esi
 857011c:	5f                   	pop    %edi
 857011d:	5d                   	pop    %ebp
 857011e:	c3                   	ret

```

```c
// message_counter::CUserPacketCounter::WriteLog @ 0x856fff0

/* message_counter::CUserPacketCounter::WriteLog() */

void __thiscall message_counter::CUserPacketCounter::WriteLog(CUserPacketCounter *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_34 [4];
  CMyFileLog local_30 [8];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_28 [4];
  CMyFileLog local_24 [20];
  
  uVar1 = *(undefined4 *)(this + 0x118);
  CMyFileLog::CMyFileLog(local_30,"void message_counter::CUserPacketCounter::WriteLog()",0x9d);
  CMyFileLog::operator()(local_30,(char *)(this + 0x18),"user_packet_counter total_count(%d)",uVar1)
  ;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  begin(local_34);
  while( true ) {
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34,
                       (_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34);
    uVar1 = *(undefined4 *)(iVar3 + 4);
    puVar4 = (uint *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                               ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34);
    uVar5 = NumberToString(*puVar4,0);
    CMyFileLog::CMyFileLog(local_24,"void message_counter::CUserPacketCounter::WriteLog()",0xa0);
    CMyFileLog::operator()(local_24,(char *)(this + 0x18),"(%s,%12d)",uVar5,uVar1);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_34);
  }
  *(undefined4 *)(this + 0x118) = 0;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  clear((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
         *)this);
  return;
}

```

