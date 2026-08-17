# Timer_DungeonInoutOpenTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## RegistNextTimer

```asm
// === 08639b20 Timer_DungeonInoutOpenTime::RegistNextTimer  [0x08639b20-0x8639e09] ===
 8639b20:	55                   	push   %ebp
 8639b21:	89 e5                	mov    %esp,%ebp
 8639b23:	53                   	push   %ebx
 8639b24:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8639b2a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8639b31:	e8 68 21 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8639b36:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8639b39:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8639b3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639b40:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639b43:	89 04 24             	mov    %eax,(%esp)
 8639b46:	e8 15 48 a4 ff       	call   807e360 <localtime_r@plt>
 8639b4b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8639b4e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639b51:	8b 40 08             	mov    0x8(%eax),%eax
 8639b54:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8639b57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639b5a:	8b 40 04             	mov    0x4(%eax),%eax
 8639b5d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8639b60:	e8 36 26 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8639b65:	8d 90 30 01 00 00    	lea    0x130(%eax),%edx
 8639b6b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8639b6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639b72:	89 04 24             	mov    %eax,(%esp)
 8639b75:	e8 fe 37 00 00       	call   863d378 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8639b7a:	83 ec 04             	sub    $0x4,%esp
 8639b7d:	e8 19 26 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8639b82:	8d 90 30 01 00 00    	lea    0x130(%eax),%edx
 8639b88:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8639b8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639b8f:	89 04 24             	mov    %eax,(%esp)
 8639b92:	e8 99 37 00 00       	call   863d330 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8639b97:	83 ec 04             	sub    $0x4,%esp
 8639b9a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8639b9d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8639ba0:	e9 41 02 00 00       	jmp    8639de6 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x2c6>
 8639ba5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639ba8:	89 04 24             	mov    %eax,(%esp)
 8639bab:	e8 ba 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639bb0:	8b 00                	mov    (%eax),%eax
 8639bb2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8639bb5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639bb8:	89 04 24             	mov    %eax,(%esp)
 8639bbb:	e8 aa 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639bc0:	8b 40 04             	mov    0x4(%eax),%eax
 8639bc3:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639bc6:	7f 40                	jg     8639c08 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0xe8>
 8639bc8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639bcb:	89 04 24             	mov    %eax,(%esp)
 8639bce:	e8 97 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639bd3:	8b 40 08             	mov    0x8(%eax),%eax
 8639bd6:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639bd9:	7c 2d                	jl     8639c08 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0xe8>
 8639bdb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639bde:	89 04 24             	mov    %eax,(%esp)
 8639be1:	e8 84 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639be6:	8b 40 0c             	mov    0xc(%eax),%eax
 8639be9:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639bec:	7f 1a                	jg     8639c08 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0xe8>
 8639bee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639bf1:	89 04 24             	mov    %eax,(%esp)
 8639bf4:	e8 71 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639bf9:	8b 40 10             	mov    0x10(%eax),%eax
 8639bfc:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639bff:	7c 07                	jl     8639c08 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0xe8>
 8639c01:	b8 01 00 00 00       	mov    $0x1,%eax
 8639c06:	eb 05                	jmp    8639c0d <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0xed>
 8639c08:	b8 00 00 00 00       	mov    $0x0,%eax
 8639c0d:	84 c0                	test   %al,%al
 8639c0f:	74 30                	je     8639c41 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x121>
 8639c11:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639c14:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8639c1b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639c1e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8639c25:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639c28:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8639c2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639c31:	89 04 24             	mov    %eax,(%esp)
 8639c34:	e8 e7 4b a4 ff       	call   807e820 <mktime@plt>
 8639c39:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8639c3c:	e9 43 01 00 00       	jmp    8639d84 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x264>
 8639c41:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639c44:	89 04 24             	mov    %eax,(%esp)
 8639c47:	e8 1e 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639c4c:	8b 40 04             	mov    0x4(%eax),%eax
 8639c4f:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639c52:	7d 4c                	jge    8639ca0 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x180>
 8639c54:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639c57:	89 04 24             	mov    %eax,(%esp)
 8639c5a:	e8 0b 37 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639c5f:	8b 40 08             	mov    0x8(%eax),%eax
 8639c62:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639c65:	7c 13                	jl     8639c7a <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x15a>
 8639c67:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639c6a:	89 04 24             	mov    %eax,(%esp)
 8639c6d:	e8 f8 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639c72:	8b 40 0c             	mov    0xc(%eax),%eax
 8639c75:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639c78:	7f 26                	jg     8639ca0 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x180>
 8639c7a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639c7d:	89 04 24             	mov    %eax,(%esp)
 8639c80:	e8 e5 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639c85:	8b 40 08             	mov    0x8(%eax),%eax
 8639c88:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639c8b:	7c 1a                	jl     8639ca7 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x187>
 8639c8d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639c90:	89 04 24             	mov    %eax,(%esp)
 8639c93:	e8 d2 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639c98:	8b 40 10             	mov    0x10(%eax),%eax
 8639c9b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639c9e:	7d 07                	jge    8639ca7 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x187>
 8639ca0:	b8 01 00 00 00       	mov    $0x1,%eax
 8639ca5:	eb 05                	jmp    8639cac <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x18c>
 8639ca7:	b8 00 00 00 00       	mov    $0x0,%eax
 8639cac:	84 c0                	test   %al,%al
 8639cae:	0f 84 8a 00 00 00    	je     8639d3e <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x21e>
 8639cb4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639cb7:	89 04 24             	mov    %eax,(%esp)
 8639cba:	e8 ab 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639cbf:	8b 40 04             	mov    0x4(%eax),%eax
 8639cc2:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639cc5:	0f 9f c0             	setg   %al
 8639cc8:	84 c0                	test   %al,%al
 8639cca:	74 16                	je     8639ce2 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x1c2>
 8639ccc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639ccf:	89 04 24             	mov    %eax,(%esp)
 8639cd2:	e8 93 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639cd7:	8b 50 04             	mov    0x4(%eax),%edx
 8639cda:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639cdd:	89 50 08             	mov    %edx,0x8(%eax)
 8639ce0:	eb 2f                	jmp    8639d11 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x1f1>
 8639ce2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639ce5:	89 04 24             	mov    %eax,(%esp)
 8639ce8:	e8 7d 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639ced:	8b 40 0c             	mov    0xc(%eax),%eax
 8639cf0:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639cf3:	0f 9f c0             	setg   %al
 8639cf6:	84 c0                	test   %al,%al
 8639cf8:	74 0b                	je     8639d05 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x1e5>
 8639cfa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639cfd:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8639d00:	89 50 08             	mov    %edx,0x8(%eax)
 8639d03:	eb 0c                	jmp    8639d11 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x1f1>
 8639d05:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8639d08:	8d 50 01             	lea    0x1(%eax),%edx
 8639d0b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d0e:	89 50 08             	mov    %edx,0x8(%eax)
 8639d11:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639d14:	89 04 24             	mov    %eax,(%esp)
 8639d17:	e8 4e 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639d1c:	8b 50 0c             	mov    0xc(%eax),%edx
 8639d1f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d22:	89 50 04             	mov    %edx,0x4(%eax)
 8639d25:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d28:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8639d2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d31:	89 04 24             	mov    %eax,(%esp)
 8639d34:	e8 e7 4a a4 ff       	call   807e820 <mktime@plt>
 8639d39:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8639d3c:	eb 46                	jmp    8639d84 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x264>
 8639d3e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639d41:	89 04 24             	mov    %eax,(%esp)
 8639d44:	e8 21 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639d49:	8b 50 04             	mov    0x4(%eax),%edx
 8639d4c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d4f:	89 50 08             	mov    %edx,0x8(%eax)
 8639d52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639d55:	89 04 24             	mov    %eax,(%esp)
 8639d58:	e8 0d 36 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639d5d:	8b 50 0c             	mov    0xc(%eax),%edx
 8639d60:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d63:	89 50 04             	mov    %edx,0x4(%eax)
 8639d66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d69:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8639d6f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639d72:	89 04 24             	mov    %eax,(%esp)
 8639d75:	e8 a6 4a a4 ff       	call   807e820 <mktime@plt>
 8639d7a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8639d7d:	81 45 e4 80 51 01 00 	addl   $0x15180,-0x1c(%ebp)
 8639d84:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8639d87:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8639d8a:	89 d1                	mov    %edx,%ecx
 8639d8c:	29 c1                	sub    %eax,%ecx
 8639d8e:	89 c8                	mov    %ecx,%eax
 8639d90:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639d93:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8639d97:	79 07                	jns    8639da0 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x280>
 8639d99:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8639da0:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8639da3:	e8 d4 c6 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8639da8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8639dac:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8639db3:	00 
 8639db4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8639db7:	89 54 24 10          	mov    %edx,0x10(%esp)
 8639dbb:	c7 44 24 0c 93 00 00 	movl   $0x93,0xc(%esp)
 8639dc2:	00 
 8639dc3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8639dca:	00 
 8639dcb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639dd2:	00 
 8639dd3:	89 04 24             	mov    %eax,(%esp)
 8639dd6:	e8 3b 70 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8639ddb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639dde:	89 04 24             	mov    %eax,(%esp)
 8639de1:	e8 b8 35 00 00       	call   863d39e <_ZNSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEppEv>
 8639de6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8639de9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639ded:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8639df0:	89 04 24             	mov    %eax,(%esp)
 8639df3:	e8 5e 35 00 00       	call   863d356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEneERKS4_>
 8639df8:	84 c0                	test   %al,%al
 8639dfa:	0f 85 a5 fd ff ff    	jne    8639ba5 <_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv+0x85>
 8639e00:	b8 01 00 00 00       	mov    $0x1,%eax
 8639e05:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8639e08:	c9                   	leave
 8639e09:	c3                   	ret

```

```c
// Timer_DungeonInoutOpenTime::RegistNextTimer @ 0x8639b20

/* Timer_DungeonInoutOpenTime::RegistNextTimer() */

undefined4 Timer_DungeonInoutOpenTime::RegistNextTimer(void)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  time_t tVar6;
  TimerQueue *pTVar7;
  tm local_60;
  undefined4 local_34;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_30 [4];
  undefined4 local_2c;
  int local_28;
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_28,&local_60);
  local_1c = local_24->tm_hour;
  local_18 = local_24->tm_min;
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::begin((map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
           *)&local_2c);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_30);
  local_34 = local_2c;
  do {
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34,
                       (_Rb_tree_iterator *)local_30);
    if (cVar3 == '\0') {
      return 1;
    }
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
    local_14 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
    if (local_1c < *(int *)(iVar5 + 4)) {
LAB_08639c08:
      bVar1 = false;
    }
    else {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (*(int *)(iVar5 + 8) < local_1c) goto LAB_08639c08;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (local_18 < *(int *)(iVar5 + 0xc)) goto LAB_08639c08;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (*(int *)(iVar5 + 0x10) < local_18) goto LAB_08639c08;
      bVar1 = true;
    }
    if (bVar1) {
      local_24->tm_hour = 0;
      local_24->tm_min = 0;
      local_24->tm_sec = 0;
      local_20 = mktime(local_24);
    }
    else {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (*(int *)(iVar5 + 4) < local_1c) {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        if (local_1c <= *(int *)(iVar5 + 8)) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          if (local_18 < *(int *)(iVar5 + 0xc)) goto LAB_08639ca0;
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        if (local_1c <= *(int *)(iVar5 + 8)) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          if (*(int *)(iVar5 + 0x10) < local_18) goto LAB_08639ca0;
        }
        bVar1 = false;
      }
      else {
LAB_08639ca0:
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        if (local_1c < *(int *)(iVar5 + 4)) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          local_24->tm_hour = *(int *)(iVar5 + 4);
        }
        else {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          if (local_18 < *(int *)(iVar5 + 0xc)) {
            local_24->tm_hour = local_1c;
          }
          else {
            local_24->tm_hour = local_1c + 1;
          }
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        local_24->tm_min = *(int *)(iVar5 + 0xc);
        local_24->tm_sec = 0;
        local_20 = mktime(local_24);
      }
      else {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        local_24->tm_hour = *(int *)(iVar5 + 4);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        local_24->tm_min = *(int *)(iVar5 + 0xc);
        local_24->tm_sec = 0;
        tVar6 = mktime(local_24);
        local_20 = tVar6 + 0x15180;
      }
    }
    uVar2 = local_14;
    local_10 = local_20 - local_28;
    if (local_10 < 0) {
      local_10 = 0;
    }
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,2,0,0x93,local_10,0,uVar2);
    std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
  } while( true );
}

```

---

## checkDungeonInoutTime

```asm
// === 08639a12 Timer_DungeonInoutOpenTime::checkDungeonInoutTime  [0x08639a12-0x8639b1f] ===
 8639a12:	55                   	push   %ebp
 8639a13:	89 e5                	mov    %esp,%ebp
 8639a15:	83 ec 68             	sub    $0x68,%esp
 8639a18:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8639a1f:	e8 7a 22 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8639a24:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8639a27:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8639a2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639a2e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8639a31:	89 04 24             	mov    %eax,(%esp)
 8639a34:	e8 27 49 a4 ff       	call   807e360 <localtime_r@plt>
 8639a39:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8639a3c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8639a3f:	8b 40 08             	mov    0x8(%eax),%eax
 8639a42:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8639a45:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8639a48:	8b 40 04             	mov    0x4(%eax),%eax
 8639a4b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8639a4e:	e8 48 27 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8639a53:	8d 90 30 01 00 00    	lea    0x130(%eax),%edx
 8639a59:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639a5c:	8d 4d 08             	lea    0x8(%ebp),%ecx
 8639a5f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8639a63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639a67:	89 04 24             	mov    %eax,(%esp)
 8639a6a:	e8 95 38 00 00       	call   863d304 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8639a6f:	83 ec 04             	sub    $0x4,%esp
 8639a72:	e8 24 27 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8639a77:	8d 90 30 01 00 00    	lea    0x130(%eax),%edx
 8639a7d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8639a80:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639a84:	89 04 24             	mov    %eax,(%esp)
 8639a87:	e8 a4 38 00 00       	call   863d330 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8639a8c:	83 ec 04             	sub    $0x4,%esp
 8639a8f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8639a92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639a96:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639a99:	89 04 24             	mov    %eax,(%esp)
 8639a9c:	e8 b5 38 00 00       	call   863d356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEneERKS4_>
 8639aa1:	84 c0                	test   %al,%al
 8639aa3:	74 73                	je     8639b18 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0x106>
 8639aa5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639aa8:	89 04 24             	mov    %eax,(%esp)
 8639aab:	e8 ba 38 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639ab0:	8b 00                	mov    (%eax),%eax
 8639ab2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639ab5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639ab8:	89 04 24             	mov    %eax,(%esp)
 8639abb:	e8 aa 38 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639ac0:	8b 40 04             	mov    0x4(%eax),%eax
 8639ac3:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639ac6:	7f 40                	jg     8639b08 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0xf6>
 8639ac8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639acb:	89 04 24             	mov    %eax,(%esp)
 8639ace:	e8 97 38 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639ad3:	8b 40 08             	mov    0x8(%eax),%eax
 8639ad6:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8639ad9:	7c 2d                	jl     8639b08 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0xf6>
 8639adb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639ade:	89 04 24             	mov    %eax,(%esp)
 8639ae1:	e8 84 38 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639ae6:	8b 40 0c             	mov    0xc(%eax),%eax
 8639ae9:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8639aec:	7f 1a                	jg     8639b08 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0xf6>
 8639aee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8639af1:	89 04 24             	mov    %eax,(%esp)
 8639af4:	e8 71 38 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639af9:	8b 40 10             	mov    0x10(%eax),%eax
 8639afc:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8639aff:	7e 07                	jle    8639b08 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0xf6>
 8639b01:	b8 01 00 00 00       	mov    $0x1,%eax
 8639b06:	eb 05                	jmp    8639b0d <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0xfb>
 8639b08:	b8 00 00 00 00       	mov    $0x0,%eax
 8639b0d:	84 c0                	test   %al,%al
 8639b0f:	74 07                	je     8639b18 <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0x106>
 8639b11:	b8 01 00 00 00       	mov    $0x1,%eax
 8639b16:	eb 05                	jmp    8639b1d <_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi+0x10b>
 8639b18:	b8 00 00 00 00       	mov    $0x0,%eax
 8639b1d:	c9                   	leave
 8639b1e:	c3                   	ret
 8639b1f:	90                   	nop

```

```c
// Timer_DungeonInoutOpenTime::checkDungeonInoutTime @ 0x8639a12

/* Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int) */

undefined4 Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  tm local_54;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> local_28 [4];
  time_t local_24;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_20 [4];
  tm *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_24,&local_54);
  local_18 = local_1c->tm_hour;
  local_14 = local_1c->tm_min;
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::find((int *)local_28);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_20);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                    (local_28,(_Rb_tree_iterator *)local_20);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_28);
    local_10 = *puVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_28);
    if ((((local_18 < *(int *)(iVar4 + 4)) ||
         (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            (local_28), *(int *)(iVar4 + 8) < local_18)) ||
        (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                           (local_28), local_14 < *(int *)(iVar4 + 0xc))) ||
       (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          (local_28), *(int *)(iVar4 + 0x10) <= local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

```

---

## dispatch_sig

```asm
// === 08639e0a Timer_DungeonInoutOpenTime::dispatch_sig  [0x08639e0a-0x863a1cf] ===
 8639e0a:	55                   	push   %ebp
 8639e0b:	89 e5                	mov    %esp,%ebp
 8639e0d:	53                   	push   %ebx
 8639e0e:	81 ec d4 00 00 00    	sub    $0xd4,%esp
 8639e14:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8639e1b:	e8 7e 1e a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8639e20:	89 45 88             	mov    %eax,-0x78(%ebp)
 8639e23:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8639e29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639e2d:	8d 45 88             	lea    -0x78(%ebp),%eax
 8639e30:	89 04 24             	mov    %eax,(%esp)
 8639e33:	e8 28 45 a4 ff       	call   807e360 <localtime_r@plt>
 8639e38:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8639e3b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639e3e:	8b 40 08             	mov    0x8(%eax),%eax
 8639e41:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8639e44:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639e47:	8b 40 04             	mov    0x4(%eax),%eax
 8639e4a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8639e4d:	8b 45 14             	mov    0x14(%ebp),%eax
 8639e50:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8639e53:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8639e56:	85 c0                	test   %eax,%eax
 8639e58:	75 0a                	jne    8639e64 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x5a>
 8639e5a:	b8 00 00 00 00       	mov    $0x0,%eax
 8639e5f:	e9 66 03 00 00       	jmp    863a1ca <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x3c0>
 8639e64:	e8 32 23 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8639e69:	8d 88 30 01 00 00    	lea    0x130(%eax),%ecx
 8639e6f:	8d 45 80             	lea    -0x80(%ebp),%eax
 8639e72:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8639e75:	89 54 24 08          	mov    %edx,0x8(%esp)
 8639e79:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8639e7d:	89 04 24             	mov    %eax,(%esp)
 8639e80:	e8 7f 34 00 00       	call   863d304 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8639e85:	83 ec 04             	sub    $0x4,%esp
 8639e88:	e8 0e 23 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8639e8d:	8d 90 30 01 00 00    	lea    0x130(%eax),%edx
 8639e93:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8639e96:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639e9a:	89 04 24             	mov    %eax,(%esp)
 8639e9d:	e8 8e 34 00 00       	call   863d330 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8639ea2:	83 ec 04             	sub    $0x4,%esp
 8639ea5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8639ea8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639eac:	8d 45 80             	lea    -0x80(%ebp),%eax
 8639eaf:	89 04 24             	mov    %eax,(%esp)
 8639eb2:	e8 9f 34 00 00       	call   863d356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEneERKS4_>
 8639eb7:	84 c0                	test   %al,%al
 8639eb9:	0f 84 06 03 00 00    	je     863a1c5 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x3bb>
 8639ebf:	8d 45 80             	lea    -0x80(%ebp),%eax
 8639ec2:	89 04 24             	mov    %eax,(%esp)
 8639ec5:	e8 a0 34 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639eca:	8b 40 08             	mov    0x8(%eax),%eax
 8639ecd:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8639ed0:	0f 9c c0             	setl   %al
 8639ed3:	84 c0                	test   %al,%al
 8639ed5:	0f 84 18 01 00 00    	je     8639ff3 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x1e9>
 8639edb:	8d 45 80             	lea    -0x80(%ebp),%eax
 8639ede:	89 04 24             	mov    %eax,(%esp)
 8639ee1:	e8 84 34 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639ee6:	8b 50 04             	mov    0x4(%eax),%edx
 8639ee9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639eec:	89 50 08             	mov    %edx,0x8(%eax)
 8639eef:	8d 45 80             	lea    -0x80(%ebp),%eax
 8639ef2:	89 04 24             	mov    %eax,(%esp)
 8639ef5:	e8 70 34 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 8639efa:	8b 50 0c             	mov    0xc(%eax),%edx
 8639efd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639f00:	89 50 04             	mov    %edx,0x4(%eax)
 8639f03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639f06:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8639f0c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639f0f:	89 04 24             	mov    %eax,(%esp)
 8639f12:	e8 09 49 a4 ff       	call   807e820 <mktime@plt>
 8639f17:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8639f1a:	81 45 e4 80 51 01 00 	addl   $0x15180,-0x1c(%ebp)
 8639f21:	8b 45 88             	mov    -0x78(%ebp),%eax
 8639f24:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8639f27:	89 d1                	mov    %edx,%ecx
 8639f29:	29 c1                	sub    %eax,%ecx
 8639f2b:	89 c8                	mov    %ecx,%eax
 8639f2d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639f30:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8639f34:	79 40                	jns    8639f76 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x16c>
 8639f36:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8639f3d:	00 
 8639f3e:	c7 44 24 08 45 14 00 	movl   $0x1445,0x8(%esp)
 8639f45:	00 
 8639f46:	c7 44 24 04 c0 80 ce 	movl   $0x8ce80c0,0x4(%esp)
 8639f4d:	08 
 8639f4e:	8d 45 90             	lea    -0x70(%ebp),%eax
 8639f51:	89 04 24             	mov    %eax,(%esp)
 8639f54:	e8 bf 57 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8639f59:	c7 44 24 04 e6 6f ce 	movl   $0x8ce6fe6,0x4(%esp)
 8639f60:	08 
 8639f61:	8d 45 90             	lea    -0x70(%ebp),%eax
 8639f64:	89 04 24             	mov    %eax,(%esp)
 8639f67:	e8 1c 58 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8639f6c:	b8 00 00 00 00       	mov    $0x0,%eax
 8639f71:	e9 54 02 00 00       	jmp    863a1ca <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x3c0>
 8639f76:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8639f79:	89 c3                	mov    %eax,%ebx
 8639f7b:	e8 fc c4 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8639f80:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8639f84:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8639f8b:	00 
 8639f8c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8639f8f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8639f93:	c7 44 24 0c 93 00 00 	movl   $0x93,0xc(%esp)
 8639f9a:	00 
 8639f9b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8639fa2:	00 
 8639fa3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639faa:	00 
 8639fab:	89 04 24             	mov    %eax,(%esp)
 8639fae:	e8 63 6e ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8639fb3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8639fba:	00 
 8639fbb:	c7 44 24 08 54 14 00 	movl   $0x1454,0x8(%esp)
 8639fc2:	00 
 8639fc3:	c7 44 24 04 c0 80 ce 	movl   $0x8ce80c0,0x4(%esp)
 8639fca:	08 
 8639fcb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8639fce:	89 04 24             	mov    %eax,(%esp)
 8639fd1:	e8 42 57 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8639fd6:	c7 44 24 04 04 70 ce 	movl   $0x8ce7004,0x4(%esp)
 8639fdd:	08 
 8639fde:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8639fe1:	89 04 24             	mov    %eax,(%esp)
 8639fe4:	e8 9f 57 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8639fe9:	b8 01 00 00 00       	mov    $0x1,%eax
 8639fee:	e9 d7 01 00 00       	jmp    863a1ca <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x3c0>
 8639ff3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8639ff6:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8639ff9:	89 50 08             	mov    %edx,0x8(%eax)
 8639ffc:	8d 45 80             	lea    -0x80(%ebp),%eax
 8639fff:	89 04 24             	mov    %eax,(%esp)
 863a002:	e8 63 33 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 863a007:	8b 50 10             	mov    0x10(%eax),%edx
 863a00a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 863a00d:	89 50 04             	mov    %edx,0x4(%eax)
 863a010:	8b 45 e0             	mov    -0x20(%ebp),%eax
 863a013:	c7 00 3b 00 00 00    	movl   $0x3b,(%eax)
 863a019:	8b 45 e0             	mov    -0x20(%ebp),%eax
 863a01c:	89 04 24             	mov    %eax,(%esp)
 863a01f:	e8 fc 47 a4 ff       	call   807e820 <mktime@plt>
 863a024:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 863a027:	8b 45 88             	mov    -0x78(%ebp),%eax
 863a02a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 863a02d:	89 d1                	mov    %edx,%ecx
 863a02f:	29 c1                	sub    %eax,%ecx
 863a031:	89 c8                	mov    %ecx,%eax
 863a033:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863a036:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 863a03a:	79 07                	jns    863a043 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x239>
 863a03c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 863a043:	8b 5d 88             	mov    -0x78(%ebp),%ebx
 863a046:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863a04d:	00 
 863a04e:	c7 44 24 08 62 14 00 	movl   $0x1462,0x8(%esp)
 863a055:	00 
 863a056:	c7 44 24 04 c0 80 ce 	movl   $0x8ce80c0,0x4(%esp)
 863a05d:	08 
 863a05e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 863a061:	89 04 24             	mov    %eax,(%esp)
 863a064:	e8 af 56 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863a069:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 863a06d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a070:	89 44 24 0c          	mov    %eax,0xc(%esp)
 863a074:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863a077:	89 44 24 08          	mov    %eax,0x8(%esp)
 863a07b:	c7 44 24 04 50 6d ce 	movl   $0x8ce6d50,0x4(%esp)
 863a082:	08 
 863a083:	8d 45 b0             	lea    -0x50(%ebp),%eax
 863a086:	89 04 24             	mov    %eax,(%esp)
 863a089:	e8 fa 56 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863a08e:	8b 45 84             	mov    -0x7c(%ebp),%eax
 863a091:	89 c3                	mov    %eax,%ebx
 863a093:	e8 e4 c3 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863a098:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 863a09c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863a0a3:	00 
 863a0a4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863a0a7:	89 54 24 10          	mov    %edx,0x10(%esp)
 863a0ab:	c7 44 24 0c 94 00 00 	movl   $0x94,0xc(%esp)
 863a0b2:	00 
 863a0b3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a0ba:	00 
 863a0bb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863a0c2:	00 
 863a0c3:	89 04 24             	mov    %eax,(%esp)
 863a0c6:	e8 4b 6d ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863a0cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863a0d2:	00 
 863a0d3:	c7 44 24 08 6e 14 00 	movl   $0x146e,0x8(%esp)
 863a0da:	00 
 863a0db:	c7 44 24 04 c0 80 ce 	movl   $0x8ce80c0,0x4(%esp)
 863a0e2:	08 
 863a0e3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 863a0e6:	89 04 24             	mov    %eax,(%esp)
 863a0e9:	e8 2a 56 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863a0ee:	c7 44 24 04 28 70 ce 	movl   $0x8ce7028,0x4(%esp)
 863a0f5:	08 
 863a0f6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 863a0f9:	89 04 24             	mov    %eax,(%esp)
 863a0fc:	e8 87 56 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863a101:	a1 50 be 40 09       	mov    0x940be50,%eax
 863a106:	89 04 24             	mov    %eax,(%esp)
 863a109:	e8 02 58 e4 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 863a10e:	83 f0 01             	xor    $0x1,%eax
 863a111:	84 c0                	test   %al,%al
 863a113:	74 1b                	je     863a130 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x326>
 863a115:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 863a11a:	89 04 24             	mov    %eax,(%esp)
 863a11d:	e8 22 6e cb ff       	call   82f0f44 <_ZN16village_attacked18CVillageMonsterMgr7OnEventEv>
 863a122:	83 f0 01             	xor    $0x1,%eax
 863a125:	84 c0                	test   %al,%al
 863a127:	74 07                	je     863a130 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x326>
 863a129:	b8 01 00 00 00       	mov    $0x1,%eax
 863a12e:	eb 05                	jmp    863a135 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x32b>
 863a130:	b8 00 00 00 00       	mov    $0x0,%eax
 863a135:	84 c0                	test   %al,%al
 863a137:	0f 84 88 00 00 00    	je     863a1c5 <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x3bb>
 863a13d:	e8 59 20 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863a142:	83 c0 68             	add    $0x68,%eax
 863a145:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 863a14c:	00 
 863a14d:	89 04 24             	mov    %eax,(%esp)
 863a150:	e8 a7 e6 c2 ff       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 863a155:	83 f0 01             	xor    $0x1,%eax
 863a158:	84 c0                	test   %al,%al
 863a15a:	74 33                	je     863a18f <_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij+0x385>
 863a15c:	8b 5d 84             	mov    -0x7c(%ebp),%ebx
 863a15f:	e8 37 20 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863a164:	83 c0 68             	add    $0x68,%eax
 863a167:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 863a16e:	00 
 863a16f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 863a173:	89 04 24             	mov    %eax,(%esp)
 863a176:	e8 11 e5 c2 ff       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 863a17b:	8b 5d 84             	mov    -0x7c(%ebp),%ebx
 863a17e:	e8 24 02 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863a183:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 863a187:	89 04 24             	mov    %eax,(%esp)
 863a18a:	e8 35 eb 08 00       	call   86c8cc4 <_ZN9GameWorld30send_all_dungeon_inout_messageEi>
 863a18f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863a196:	00 
 863a197:	c7 44 24 08 78 14 00 	movl   $0x1478,0x8(%esp)
 863a19e:	00 
 863a19f:	c7 44 24 04 c0 80 ce 	movl   $0x8ce80c0,0x4(%esp)
 863a1a6:	08 
 863a1a7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 863a1aa:	89 04 24             	mov    %eax,(%esp)
 863a1ad:	e8 66 55 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863a1b2:	c7 44 24 04 5c 70 ce 	movl   $0x8ce705c,0x4(%esp)
 863a1b9:	08 
 863a1ba:	8d 45 d0             	lea    -0x30(%ebp),%eax
 863a1bd:	89 04 24             	mov    %eax,(%esp)
 863a1c0:	e8 c3 55 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863a1c5:	b8 01 00 00 00       	mov    $0x1,%eax
 863a1ca:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 863a1cd:	c9                   	leave
 863a1ce:	c3                   	ret
 863a1cf:	90                   	nop

```

```c
// Timer_DungeonInoutOpenTime::dispatch_sig @ 0x8639e0a

/* Timer_DungeonInoutOpenTime::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DungeonInoutOpenTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  time_t tVar4;
  TimerQueue *pTVar5;
  int iVar6;
  GameWorld *this;
  int in_stack_00000010;
  tm local_b0;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> local_84 [4];
  int local_80;
  int local_7c;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_78 [4];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_7c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_7c,&local_b0);
  local_1c = local_24->tm_hour;
  local_18 = local_24->tm_min;
  local_80 = in_stack_00000010;
  if (in_stack_00000010 == 0) {
    return 0;
  }
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::find((int *)local_84);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_78);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                    (local_84,(_Rb_tree_iterator *)local_78);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
    if (*(int *)(iVar3 + 8) < local_1c) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
      local_24->tm_hour = *(int *)(iVar3 + 4);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
      local_24->tm_min = *(int *)(iVar3 + 0xc);
      local_24->tm_sec = 0;
      tVar4 = mktime(local_24);
      local_20 = tVar4 + 0x15180;
      local_10 = local_20 - local_7c;
      if (local_10 < 0) {
        cMyTrace::cMyTrace(local_74,
                           "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                           ,0x1445,0);
        cMyTrace::operator()(local_74,"ULTIMATE_LOG : TIMER OFF!!");
        return 0;
      }
      pTVar5 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar5,2,0,0x93,local_10,0,local_80);
      cMyTrace::cMyTrace(local_64,
                         "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x1454,0);
      cMyTrace::operator()(local_64,"ULTIMATE_LOG : NEXT DAY TIMER ON!!");
      return 1;
    }
    local_24->tm_hour = local_1c;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
    local_24->tm_min = *(int *)(iVar3 + 0x10);
    local_24->tm_sec = 0x3b;
    local_20 = mktime(local_24);
    iVar3 = local_7c;
    local_14 = local_20 - local_7c;
    if (local_14 < 0) {
      local_14 = 0;
    }
    cMyTrace::cMyTrace(local_54,
                       "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x1462,0);
    cMyTrace::operator()(local_54,"DELTA %d , CHECK_T %d , CUR_T %d\n",local_14,local_20,iVar3);
    iVar3 = local_80;
    pTVar5 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar5,2,0,0x94,local_14,0,iVar3);
    cMyTrace::cMyTrace(local_44,
                       "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x146e,0);
    cMyTrace::operator()(local_44,"ULTIMATE_LOG : ULTIMATE DUNGEON CLOSE TIMER ON!!");
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\x01') ||
       (cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr),
       cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = G_CDataManager();
      cVar2 = ServerParameterScript::isDungeonOpen(iVar3 + 0x68);
      iVar3 = local_80;
      if (cVar2 != '\x01') {
        iVar6 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar6 + 0x68),iVar3,true);
        this = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(this,local_80);
      }
      cMyTrace::cMyTrace(local_34,
                         "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x1478,0);
      cMyTrace::operator()(local_34,"ULTIMATE_LOG : ULTIMATE DUNGEON OPEN!!");
    }
  }
  return 1;
}

```

