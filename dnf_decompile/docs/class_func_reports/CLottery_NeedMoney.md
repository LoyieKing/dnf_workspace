# CLottery_NeedMoney

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## add_lottery_needMoney

```asm
// === 08365066 CLottery_NeedMoney::add_lottery_needMoney  [0x08365066-0x8365161] ===
 8365066:	55                   	push   %ebp
 8365067:	89 e5                	mov    %esp,%ebp
 8365069:	83 ec 48             	sub    $0x48,%esp
 836506c:	b8 88 c1 43 09       	mov    $0x943c188,%eax
 8365071:	0f b6 00             	movzbl (%eax),%eax
 8365074:	84 c0                	test   %al,%al
 8365076:	75 2d                	jne    83650a5 <_ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj+0x3f>
 8365078:	c7 04 24 88 c1 43 09 	movl   $0x943c188,(%esp)
 836507f:	e8 ac 02 3c 00       	call   8725330 <__cxa_guard_acquire>
 8365084:	85 c0                	test   %eax,%eax
 8365086:	0f 95 c0             	setne  %al
 8365089:	84 c0                	test   %al,%al
 836508b:	74 18                	je     83650a5 <_ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj+0x3f>
 836508d:	c7 04 24 9c c1 43 09 	movl   $0x943c19c,(%esp)
 8365094:	e8 bd 09 03 00       	call   8395a56 <_ZNSt17_Rb_tree_iteratorISt4pairIKjjEEC1Ev>
 8365099:	c7 04 24 88 c1 43 09 	movl   $0x943c188,(%esp)
 83650a0:	e8 ab 01 3c 00       	call   8725250 <__cxa_guard_release>
 83650a5:	8b 55 08             	mov    0x8(%ebp),%edx
 83650a8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83650ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 83650af:	89 04 24             	mov    %eax,(%esp)
 83650b2:	e8 6b d5 d7 ff       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 83650b7:	83 ec 04             	sub    $0x4,%esp
 83650ba:	8b 55 08             	mov    0x8(%ebp),%edx
 83650bd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83650c0:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 83650c3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83650c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 83650cb:	89 04 24             	mov    %eax,(%esp)
 83650ce:	e8 23 d5 d7 ff       	call   80e25f6 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 83650d3:	83 ec 04             	sub    $0x4,%esp
 83650d6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 83650d9:	a3 9c c1 43 09       	mov    %eax,0x943c19c
 83650de:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83650e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83650e5:	c7 04 24 9c c1 43 09 	movl   $0x943c19c,(%esp)
 83650ec:	e8 19 d8 d7 ff       	call   80e290a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 83650f1:	84 c0                	test   %al,%al
 83650f3:	74 20                	je     8365115 <_ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj+0xaf>
 83650f5:	8d 45 df             	lea    -0x21(%ebp),%eax
 83650f8:	89 04 24             	mov    %eax,(%esp)
 83650fb:	e8 5a 5c ec ff       	call   822ad5a <_ZN12cMyTraceNoopC1Ev>
 8365100:	c7 44 24 04 53 32 c3 	movl   $0x8c33253,0x4(%esp)
 8365107:	08 
 8365108:	8d 45 df             	lea    -0x21(%ebp),%eax
 836510b:	89 04 24             	mov    %eax,(%esp)
 836510e:	e8 4d 5c ec ff       	call   822ad60 <_ZN12cMyTraceNoopclEPKcz>
 8365113:	eb 4a                	jmp    836515f <_ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj+0xf9>
 8365115:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8365118:	8d 55 10             	lea    0x10(%ebp),%edx
 836511b:	89 54 24 08          	mov    %edx,0x8(%esp)
 836511f:	8d 55 0c             	lea    0xc(%ebp),%edx
 8365122:	89 54 24 04          	mov    %edx,0x4(%esp)
 8365126:	89 04 24             	mov    %eax,(%esp)
 8365129:	e8 36 09 03 00       	call   8395a64 <_ZSt9make_pairIRjS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 836512e:	83 ec 04             	sub    $0x4,%esp
 8365131:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8365134:	89 44 24 04          	mov    %eax,0x4(%esp)
 8365138:	8d 45 e8             	lea    -0x18(%ebp),%eax
 836513b:	89 04 24             	mov    %eax,(%esp)
 836513e:	e8 5f 09 03 00       	call   8395aa2 <_ZNSt4pairIKjjEC1IjjEEOS_IT_T0_E>
 8365143:	8b 55 08             	mov    0x8(%ebp),%edx
 8365146:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8365149:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 836514c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8365150:	89 54 24 04          	mov    %edx,0x4(%esp)
 8365154:	89 04 24             	mov    %eax,(%esp)
 8365157:	e8 30 d5 d7 ff       	call   80e268c <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE6insertERKS4_>
 836515c:	83 ec 04             	sub    $0x4,%esp
 836515f:	c9                   	leave
 8365160:	c3                   	ret
 8365161:	90                   	nop

```

```c
// CLottery_NeedMoney::add_lottery_needMoney @ 0x8365066

/* CLottery_NeedMoney::add_lottery_needMoney(unsigned int, unsigned int) */

void CLottery_NeedMoney::add_lottery_needMoney(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint local_30;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_2c [7];
  cMyTraceNoop local_25;
  pair local_24 [8];
  pair<unsigned_int_const,unsigned_int> local_1c [8];
  uint local_14 [4];
  
  if (add_lottery_needMoney(unsigned_int,unsigned_int)::_itr == '\0') {
    iVar2 = __cxa_guard_acquire(&add_lottery_needMoney(unsigned_int,unsigned_int)::_itr);
    if (iVar2 != 0) {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_iterator
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                 &add_lottery_needMoney(unsigned_int,unsigned_int)::_itr);
      __cxa_guard_release(&add_lottery_needMoney(unsigned_int,unsigned_int)::_itr);
    }
  }
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_2c);
  puVar3 = &param_2;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::find(&local_30);
  add_lottery_needMoney(unsigned_int,unsigned_int)::_itr = local_30;
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &add_lottery_needMoney(unsigned_int,unsigned_int)::_itr,
                     (_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    std::make_pair<unsigned_int&,unsigned_int&>(local_14,&param_2);
    std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
              (local_1c,(pair *)local_14);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::insert(local_24);
  }
  else {
    cMyTraceNoop::cMyTraceNoop(&local_25);
    cMyTraceNoop::operator()((char *)&local_25,"already exist item index!!",puVar3);
  }
  return;
}

```

---

## isNeedMoney

```asm
// === 08365162 CLottery_NeedMoney::isNeedMoney  [0x08365162-0x8365209] ===
 8365162:	55                   	push   %ebp
 8365163:	89 e5                	mov    %esp,%ebp
 8365165:	83 ec 38             	sub    $0x38,%esp
 8365168:	b8 90 c1 43 09       	mov    $0x943c190,%eax
 836516d:	0f b6 00             	movzbl (%eax),%eax
 8365170:	84 c0                	test   %al,%al
 8365172:	75 2d                	jne    83651a1 <_ZNK18CLottery_NeedMoney11isNeedMoneyEj+0x3f>
 8365174:	c7 04 24 90 c1 43 09 	movl   $0x943c190,(%esp)
 836517b:	e8 b0 01 3c 00       	call   8725330 <__cxa_guard_acquire>
 8365180:	85 c0                	test   %eax,%eax
 8365182:	0f 95 c0             	setne  %al
 8365185:	84 c0                	test   %al,%al
 8365187:	74 18                	je     83651a1 <_ZNK18CLottery_NeedMoney11isNeedMoneyEj+0x3f>
 8365189:	c7 04 24 98 c1 43 09 	movl   $0x943c198,(%esp)
 8365190:	e8 3d 09 03 00       	call   8395ad2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjjEEC1Ev>
 8365195:	c7 04 24 90 c1 43 09 	movl   $0x943c190,(%esp)
 836519c:	e8 af 00 3c 00       	call   8725250 <__cxa_guard_release>
 83651a1:	8b 55 08             	mov    0x8(%ebp),%edx
 83651a4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83651a7:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 83651aa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83651ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 83651b2:	89 04 24             	mov    %eax,(%esp)
 83651b5:	e8 26 09 03 00       	call   8395ae0 <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 83651ba:	83 ec 04             	sub    $0x4,%esp
 83651bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83651c0:	a3 98 c1 43 09       	mov    %eax,0x943c198
 83651c5:	8b 55 08             	mov    0x8(%ebp),%edx
 83651c8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83651cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 83651cf:	89 04 24             	mov    %eax,(%esp)
 83651d2:	e8 35 09 03 00       	call   8395b0c <_ZNKSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 83651d7:	83 ec 04             	sub    $0x4,%esp
 83651da:	c7 44 24 04 98 c1 43 	movl   $0x943c198,0x4(%esp)
 83651e1:	09 
 83651e2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83651e5:	89 04 24             	mov    %eax,(%esp)
 83651e8:	e8 45 09 03 00       	call   8395b32 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEneERKS3_>
 83651ed:	84 c0                	test   %al,%al
 83651ef:	74 11                	je     8365202 <_ZNK18CLottery_NeedMoney11isNeedMoneyEj+0xa0>
 83651f1:	c7 04 24 98 c1 43 09 	movl   $0x943c198,(%esp)
 83651f8:	e8 49 09 03 00       	call   8395b46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjjEEptEv>
 83651fd:	8b 40 04             	mov    0x4(%eax),%eax
 8365200:	eb 05                	jmp    8365207 <_ZNK18CLottery_NeedMoney11isNeedMoneyEj+0xa5>
 8365202:	b8 00 00 00 00       	mov    $0x0,%eax
 8365207:	c9                   	leave
 8365208:	c3                   	ret
 8365209:	90                   	nop

```

```c
// CLottery_NeedMoney::isNeedMoney @ 0x8365162

/* CLottery_NeedMoney::isNeedMoney(unsigned int) const */

undefined4 CLottery_NeedMoney::isNeedMoney(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20 [4];
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_10 [12];
  
  if (isNeedMoney(unsigned_int)::_itr == '\0') {
    iVar2 = __cxa_guard_acquire(&isNeedMoney(unsigned_int)::_itr);
    if (iVar2 != 0) {
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
      _Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                 &isNeedMoney(unsigned_int)::_itr);
      __cxa_guard_release(&isNeedMoney(unsigned_int)::_itr);
    }
  }
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::find(local_20);
  isNeedMoney(unsigned_int)::_itr = local_20[0];
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_10
                     ,(_Rb_tree_const_iterator *)&isNeedMoney(unsigned_int)::_itr);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &isNeedMoney(unsigned_int)::_itr);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

