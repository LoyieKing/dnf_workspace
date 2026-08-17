# TimerQueue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GetTimerMess

```asm
// === 08630ecc TimerQueue::GetTimerMess  [0x08630ecc-0x863101d] ===
 8630ecc:	55                   	push   %ebp
 8630ecd:	89 e5                	mov    %esp,%ebp
 8630ecf:	56                   	push   %esi
 8630ed0:	53                   	push   %ebx
 8630ed1:	83 ec 30             	sub    $0x30,%esp
 8630ed4:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8630edb:	e8 cc 49 b1 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8630ee0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8630ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8630ee6:	83 c0 10             	add    $0x10,%eax
 8630ee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630eed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8630ef0:	89 04 24             	mov    %eax,(%esp)
 8630ef3:	e8 54 45 ad ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8630ef8:	8b 45 08             	mov    0x8(%ebp),%eax
 8630efb:	89 04 24             	mov    %eax,(%esp)
 8630efe:	e8 f9 c2 00 00       	call   863d1fc <_ZNKSt14priority_queueI10TimerEntrySt6vectorIS0_SaIS0_EESt4lessIS0_EE5emptyEv>
 8630f03:	84 c0                	test   %al,%al
 8630f05:	74 0a                	je     8630f11 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x45>
 8630f07:	bb 00 00 00 00       	mov    $0x0,%ebx
 8630f0c:	e9 f5 00 00 00       	jmp    8631006 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x13a>
 8630f11:	8b 45 08             	mov    0x8(%ebp),%eax
 8630f14:	89 04 24             	mov    %eax,(%esp)
 8630f17:	e8 f4 c2 00 00       	call   863d210 <_ZNKSt14priority_queueI10TimerEntrySt6vectorIS0_SaIS0_EESt4lessIS0_EE3topEv>
 8630f1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8630f1f:	8b 08                	mov    (%eax),%ecx
 8630f21:	89 0a                	mov    %ecx,(%edx)
 8630f23:	8b 48 04             	mov    0x4(%eax),%ecx
 8630f26:	89 4a 04             	mov    %ecx,0x4(%edx)
 8630f29:	8b 48 08             	mov    0x8(%eax),%ecx
 8630f2c:	89 4a 08             	mov    %ecx,0x8(%edx)
 8630f2f:	8b 48 0c             	mov    0xc(%eax),%ecx
 8630f32:	89 4a 0c             	mov    %ecx,0xc(%edx)
 8630f35:	8b 48 10             	mov    0x10(%eax),%ecx
 8630f38:	89 4a 10             	mov    %ecx,0x10(%edx)
 8630f3b:	8b 48 14             	mov    0x14(%eax),%ecx
 8630f3e:	89 4a 14             	mov    %ecx,0x14(%edx)
 8630f41:	8b 40 18             	mov    0x18(%eax),%eax
 8630f44:	89 42 18             	mov    %eax,0x18(%edx)
 8630f47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8630f4a:	8b 48 0c             	mov    0xc(%eax),%ecx
 8630f4d:	8b 58 10             	mov    0x10(%eax),%ebx
 8630f50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8630f53:	ba 00 00 00 00       	mov    $0x0,%edx
 8630f58:	39 d3                	cmp    %edx,%ebx
 8630f5a:	0f 8f 84 00 00 00    	jg     8630fe4 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x118>
 8630f60:	39 d3                	cmp    %edx,%ebx
 8630f62:	7c 04                	jl     8630f68 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x9c>
 8630f64:	39 c1                	cmp    %eax,%ecx
 8630f66:	77 7c                	ja     8630fe4 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x118>
 8630f68:	8b 45 08             	mov    0x8(%ebp),%eax
 8630f6b:	89 04 24             	mov    %eax,(%esp)
 8630f6e:	e8 b1 c2 00 00       	call   863d224 <_ZNSt14priority_queueI10TimerEntrySt6vectorIS0_SaIS0_EESt4lessIS0_EE3popEv>
 8630f73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8630f76:	8b 40 08             	mov    0x8(%eax),%eax
 8630f79:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8630f7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8630f7f:	8d 48 28             	lea    0x28(%eax),%ecx
 8630f82:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8630f85:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8630f88:	89 54 24 08          	mov    %edx,0x8(%esp)
 8630f8c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8630f90:	89 04 24             	mov    %eax,(%esp)
 8630f93:	e8 56 c3 a9 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8630f98:	83 ec 04             	sub    $0x4,%esp
 8630f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8630f9e:	8d 50 28             	lea    0x28(%eax),%edx
 8630fa1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8630fa4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8630fa8:	89 04 24             	mov    %eax,(%esp)
 8630fab:	e8 6a c3 a9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8630fb0:	83 ec 04             	sub    $0x4,%esp
 8630fb3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8630fb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630fba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8630fbd:	89 04 24             	mov    %eax,(%esp)
 8630fc0:	e8 03 94 aa ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8630fc5:	84 c0                	test   %al,%al
 8630fc7:	74 14                	je     8630fdd <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x111>
 8630fc9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8630fcc:	89 04 24             	mov    %eax,(%esp)
 8630fcf:	e8 6c c3 a9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8630fd4:	8b 50 04             	mov    0x4(%eax),%edx
 8630fd7:	83 ea 01             	sub    $0x1,%edx
 8630fda:	89 50 04             	mov    %edx,0x4(%eax)
 8630fdd:	bb 01 00 00 00       	mov    $0x1,%ebx
 8630fe2:	eb 22                	jmp    8631006 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x13a>
 8630fe4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8630fe9:	eb 1b                	jmp    8631006 <_ZN10TimerQueue12GetTimerMessER10TimerEntry+0x13a>
 8630feb:	89 d3                	mov    %edx,%ebx
 8630fed:	89 c6                	mov    %eax,%esi
 8630fef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8630ff2:	89 04 24             	mov    %eax,(%esp)
 8630ff5:	e8 6e 44 ad ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8630ffa:	89 f0                	mov    %esi,%eax
 8630ffc:	89 da                	mov    %ebx,%edx
 8630ffe:	89 04 24             	mov    %eax,(%esp)
 8631001:	e8 4a 27 4b 00       	call   8ae3750 <_Unwind_Resume>
 8631006:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8631009:	89 04 24             	mov    %eax,(%esp)
 863100c:	e8 57 44 ad ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8631011:	89 d8                	mov    %ebx,%eax
 8631013:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8631016:	83 c4 00             	add    $0x0,%esp
 8631019:	5b                   	pop    %ebx
 863101a:	5e                   	pop    %esi
 863101b:	5d                   	pop    %ebp
 863101c:	c3                   	ret
 863101d:	90                   	nop

```

```c
// TimerQueue::GetTimerMess @ 0x8630ecc

/* TimerQueue::GetTimerMess(TimerEntry&) */

undefined4 __thiscall TimerQueue::GetTimerMess(TimerQueue *this,TimerEntry *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  Guard<Mutex> local_1c [4];
  undefined4 local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  uint local_10;
  
  local_10 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  Guard<Mutex>::Guard(local_1c,(Mutex *)(this + 0x10));
                    /* try { // try from 08630efe to 08630faf has its CatchHandler @ 08630feb */
  cVar1 = std::
          priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
          ::empty();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)
             std::
             priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
             ::top();
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)(param_1 + 4) = puVar2[1];
    *(undefined4 *)(param_1 + 8) = puVar2[2];
    *(undefined4 *)(param_1 + 0xc) = puVar2[3];
    *(undefined4 *)(param_1 + 0x10) = puVar2[4];
    *(undefined4 *)(param_1 + 0x14) = puVar2[5];
    *(undefined4 *)(param_1 + 0x18) = puVar2[6];
    if ((*(int *)(param_1 + 0x10) < 1) &&
       ((*(int *)(param_1 + 0x10) < 0 || (*(uint *)(param_1 + 0xc) <= local_10)))) {
      std::
      priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
      ::pop((priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
             *)this);
      local_18 = *(undefined4 *)(param_1 + 8);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_20);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_20,(_Rb_tree_iterator *)local_14);
      if (cVar1 != '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_20);
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  Guard<Mutex>::~Guard(local_1c);
  return uVar4;
}

```

---

## InsertTimer

```asm
// === 08630cec TimerQueue::InsertTimer  [0x08630cec-0x8630e15] ===
 8630cec:	55                   	push   %ebp
 8630ced:	89 e5                	mov    %esp,%ebp
 8630cef:	56                   	push   %esi
 8630cf0:	53                   	push   %ebx
 8630cf1:	83 ec 40             	sub    $0x40,%esp
 8630cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8630cf7:	83 c0 10             	add    $0x10,%eax
 8630cfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630cfe:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8630d01:	89 04 24             	mov    %eax,(%esp)
 8630d04:	e8 43 47 ad ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8630d09:	8b 45 08             	mov    0x8(%ebp),%eax
 8630d0c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8630d0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8630d13:	89 04 24             	mov    %eax,(%esp)
 8630d16:	e8 83 c4 00 00       	call   863d19e <_ZNSt14priority_queueI10TimerEntrySt6vectorIS0_SaIS0_EESt4lessIS0_EE4pushERKS0_>
 8630d1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8630d1e:	8b 40 08             	mov    0x8(%eax),%eax
 8630d21:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8630d24:	8b 45 08             	mov    0x8(%ebp),%eax
 8630d27:	8d 48 28             	lea    0x28(%eax),%ecx
 8630d2a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8630d2d:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8630d30:	89 54 24 08          	mov    %edx,0x8(%esp)
 8630d34:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8630d38:	89 04 24             	mov    %eax,(%esp)
 8630d3b:	e8 ae c5 a9 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8630d40:	83 ec 04             	sub    $0x4,%esp
 8630d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8630d46:	8d 50 28             	lea    0x28(%eax),%edx
 8630d49:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8630d4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8630d50:	89 04 24             	mov    %eax,(%esp)
 8630d53:	e8 c2 c5 a9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8630d58:	83 ec 04             	sub    $0x4,%esp
 8630d5b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8630d5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630d62:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8630d65:	89 04 24             	mov    %eax,(%esp)
 8630d68:	e8 5b 96 aa ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8630d6d:	84 c0                	test   %al,%al
 8630d6f:	74 16                	je     8630d87 <_ZN10TimerQueue11InsertTimerER10TimerEntry+0x9b>
 8630d71:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8630d74:	89 04 24             	mov    %eax,(%esp)
 8630d77:	e8 c4 c5 a9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8630d7c:	8b 50 04             	mov    0x4(%eax),%edx
 8630d7f:	83 c2 01             	add    $0x1,%edx
 8630d82:	89 50 04             	mov    %edx,0x4(%eax)
 8630d85:	eb 7a                	jmp    8630e01 <_ZN10TimerQueue11InsertTimerER10TimerEntry+0x115>
 8630d87:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8630d8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8630d91:	8b 40 08             	mov    0x8(%eax),%eax
 8630d94:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8630d97:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8630d9a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8630d9d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8630da1:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8630da4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8630da8:	89 04 24             	mov    %eax,(%esp)
 8630dab:	e8 91 7f b8 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8630db0:	83 ec 04             	sub    $0x4,%esp
 8630db3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8630db6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630dba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8630dbd:	89 04 24             	mov    %eax,(%esp)
 8630dc0:	e8 5b 5f a9 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 8630dc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8630dc8:	8d 48 28             	lea    0x28(%eax),%ecx
 8630dcb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8630dce:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8630dd1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8630dd5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8630dd9:	89 04 24             	mov    %eax,(%esp)
 8630ddc:	e8 6f 5f a9 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8630de1:	83 ec 04             	sub    $0x4,%esp
 8630de4:	eb 1b                	jmp    8630e01 <_ZN10TimerQueue11InsertTimerER10TimerEntry+0x115>
 8630de6:	89 d3                	mov    %edx,%ebx
 8630de8:	89 c6                	mov    %eax,%esi
 8630dea:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8630ded:	89 04 24             	mov    %eax,(%esp)
 8630df0:	e8 73 46 ad ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8630df5:	89 f0                	mov    %esi,%eax
 8630df7:	89 da                	mov    %ebx,%edx
 8630df9:	89 04 24             	mov    %eax,(%esp)
 8630dfc:	e8 4f 29 4b 00       	call   8ae3750 <_Unwind_Resume>
 8630e01:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8630e04:	89 04 24             	mov    %eax,(%esp)
 8630e07:	e8 5c 46 ad ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8630e0c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8630e0f:	83 c4 00             	add    $0x0,%esp
 8630e12:	5b                   	pop    %ebx
 8630e13:	5e                   	pop    %esi
 8630e14:	5d                   	pop    %ebp
 8630e15:	c3                   	ret

```

```c
// TimerQueue::InsertTimer @ 0x8630cec

/* TimerQueue::InsertTimer(TimerEntry&) */

void __thiscall TimerQueue::InsertTimer(TimerQueue *this,TimerEntry *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_3c [4];
  Guard<Mutex> local_38 [4];
  undefined4 local_34;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  Guard<Mutex>::Guard(local_38,(Mutex *)(this + 0x10));
                    /* try { // try from 08630d16 to 08630de0 has its CatchHandler @ 08630de6 */
  std::
  priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
  ::push((priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
          *)this,param_1);
  local_34 = *(undefined4 *)(param_1 + 8);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_3c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_3c,(_Rb_tree_iterator *)local_30);
  if (cVar1 == '\0') {
    local_14 = 1;
    local_10 = *(int *)(param_1 + 8);
    std::make_pair<int,int>(local_1c,&local_10);
    std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_3c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  Guard<Mutex>::~Guard(local_38);
  return;
}

```

---

## InsertTimerInMilisecond

```asm
// === 08630e60 TimerQueue::InsertTimerInMilisecond  [0x08630e60-0x8630ecb] ===
 8630e60:	55                   	push   %ebp
 8630e61:	89 e5                	mov    %esp,%ebp
 8630e63:	83 ec 48             	sub    $0x48,%esp
 8630e66:	8b 45 18             	mov    0x18(%ebp),%eax
 8630e69:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8630e6c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8630e6f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8630e72:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8630e75:	89 04 24             	mov    %eax,(%esp)
 8630e78:	e8 df d9 e4 ff       	call   847e85c <_ZN10TimerEntryC1Ev>
 8630e7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8630e80:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8630e83:	8b 45 10             	mov    0x10(%ebp),%eax
 8630e86:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8630e89:	8b 45 14             	mov    0x14(%ebp),%eax
 8630e8c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8630e8f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8630e96:	e8 11 4a b1 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8630e9b:	ba 00 00 00 00       	mov    $0x0,%edx
 8630ea0:	03 45 d0             	add    -0x30(%ebp),%eax
 8630ea3:	13 55 d4             	adc    -0x2c(%ebp),%edx
 8630ea6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8630ea9:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8630eac:	8b 45 20             	mov    0x20(%ebp),%eax
 8630eaf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8630eb2:	8b 45 24             	mov    0x24(%ebp),%eax
 8630eb5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8630eb8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8630ebb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630ebf:	8b 45 08             	mov    0x8(%ebp),%eax
 8630ec2:	89 04 24             	mov    %eax,(%esp)
 8630ec5:	e8 22 fe ff ff       	call   8630cec <_ZN10TimerQueue11InsertTimerER10TimerEntry>
 8630eca:	c9                   	leave
 8630ecb:	c3                   	ret

```

```c
// TimerQueue::InsertTimerInMilisecond @ 0x8630e60

/* TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int,
   unsigned int) */

void TimerQueue::InsertTimerInMilisecond
               (TimerQueue *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               uint param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  TimerEntry::TimerEntry((TimerEntry *)&local_28);
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = uVar1 + param_5;
  local_18 = param_6 + (uint)CARRY4(uVar1,param_5);
  local_14 = param_7;
  local_10 = param_8;
  InsertTimer(param_1,(TimerEntry *)&local_28);
  return;
}

```

---

## InsertTimer_08630e16

```asm
// === 08630e16 TimerQueue::InsertTimer  [0x08630e16-0x8630e5f] ===
 8630e16:	55                   	push   %ebp
 8630e17:	89 e5                	mov    %esp,%ebp
 8630e19:	83 ec 28             	sub    $0x28,%esp
 8630e1c:	8b 45 18             	mov    0x18(%ebp),%eax
 8630e1f:	89 04 24             	mov    %eax,(%esp)
 8630e22:	e8 e4 ac 00 00       	call   863bb0b <_Z20SECOND_TO_MILISECONDi>
 8630e27:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8630e2a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8630e2e:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8630e31:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8630e35:	89 44 24 10          	mov    %eax,0x10(%esp)
 8630e39:	89 54 24 14          	mov    %edx,0x14(%esp)
 8630e3d:	8b 45 14             	mov    0x14(%ebp),%eax
 8630e40:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8630e44:	8b 45 10             	mov    0x10(%ebp),%eax
 8630e47:	89 44 24 08          	mov    %eax,0x8(%esp)
 8630e4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8630e4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630e52:	8b 45 08             	mov    0x8(%ebp),%eax
 8630e55:	89 04 24             	mov    %eax,(%esp)
 8630e58:	e8 03 00 00 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 8630e5d:	c9                   	leave
 8630e5e:	c3                   	ret
 8630e5f:	90                   	nop

```

```c
// TimerQueue::InsertTimer @ 0x8630e16

/* TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int) */

void __thiscall
TimerQueue::InsertTimer
          (TimerQueue *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = SECOND_TO_MILISECOND(param_5);
  InsertTimerInMilisecond(this,param_2,param_3,param_4,uVar1,param_6,param_7);
  return;
}

```

---

## write_timer_queue_log

```asm
// === 0863101e TimerQueue::write_timer_queue_log  [0x0863101e-0x8631209] ===
 863101e:	55                   	push   %ebp
 863101f:	89 e5                	mov    %esp,%ebp
 8631021:	56                   	push   %esi
 8631022:	53                   	push   %ebx
 8631023:	83 ec 60             	sub    $0x60,%esp
 8631026:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8631029:	89 04 24             	mov    %eax,(%esp)
 863102c:	e8 9f 55 0d 00       	call   87065d0 <_ZNSsC1Ev>
 8631031:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8631034:	89 04 24             	mov    %eax,(%esp)
 8631037:	e8 94 7d 0d 00       	call   8708dd0 <_ZNSs5clearEv>
 863103c:	8b 45 08             	mov    0x8(%ebp),%eax
 863103f:	8d 50 28             	lea    0x28(%eax),%edx
 8631042:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8631045:	89 54 24 04          	mov    %edx,0x4(%esp)
 8631049:	89 04 24             	mov    %eax,(%esp)
 863104c:	e8 4f 0f b2 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 8631051:	83 ec 04             	sub    $0x4,%esp
 8631054:	8b 45 08             	mov    0x8(%ebp),%eax
 8631057:	8d 50 28             	lea    0x28(%eax),%edx
 863105a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863105d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8631061:	89 04 24             	mov    %eax,(%esp)
 8631064:	e8 b1 c2 a9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8631069:	83 ec 04             	sub    $0x4,%esp
 863106c:	e9 f1 00 00 00       	jmp    8631162 <_ZN10TimerQueue21write_timer_queue_logEv+0x144>
 8631071:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8631078:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 863107f:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8631086:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 863108d:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8631094:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8631097:	89 04 24             	mov    %eax,(%esp)
 863109a:	e8 a1 c2 a9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 863109f:	8b 58 04             	mov    0x4(%eax),%ebx
 86310a2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86310a5:	89 04 24             	mov    %eax,(%esp)
 86310a8:	e8 93 c2 a9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 86310ad:	8b 00                	mov    (%eax),%eax
 86310af:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86310b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 86310b7:	c7 44 24 04 81 6c ce 	movl   $0x8ce6c81,0x4(%esp)
 86310be:	08 
 86310bf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86310c2:	89 04 24             	mov    %eax,(%esp)
 86310c5:	e8 76 d3 a4 ff       	call   807e440 <sprintf@plt>
 86310ca:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86310cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86310d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86310d4:	89 04 24             	mov    %eax,(%esp)
 86310d7:	e8 54 6f 0d 00       	call   8708030 <_ZNSspLEPKc>
 86310dc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86310df:	89 04 24             	mov    %eax,(%esp)
 86310e2:	e8 89 55 0d 00       	call   8706670 <_ZNKSs6lengthEv>
 86310e7:	3d 00 08 00 00       	cmp    $0x800,%eax
 86310ec:	0f 97 c0             	seta   %al
 86310ef:	84 c0                	test   %al,%al
 86310f1:	74 52                	je     8631145 <_ZN10TimerQueue21write_timer_queue_logEv+0x127>
 86310f3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86310f6:	89 04 24             	mov    %eax,(%esp)
 86310f9:	e8 f2 53 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 86310fe:	89 c3                	mov    %eax,%ebx
 8631100:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8631107:	00 
 8631108:	c7 44 24 08 01 01 00 	movl   $0x101,0x8(%esp)
 863110f:	00 
 8631110:	c7 44 24 04 60 85 ce 	movl   $0x8ce8560,0x4(%esp)
 8631117:	08 
 8631118:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863111b:	89 04 24             	mov    %eax,(%esp)
 863111e:	e8 f5 e5 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8631123:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8631127:	c7 44 24 04 8a 6c ce 	movl   $0x8ce6c8a,0x4(%esp)
 863112e:	08 
 863112f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8631132:	89 04 24             	mov    %eax,(%esp)
 8631135:	e8 4e e6 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863113a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 863113d:	89 04 24             	mov    %eax,(%esp)
 8631140:	e8 8b 7c 0d 00       	call   8708dd0 <_ZNSs5clearEv>
 8631145:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8631148:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863114f:	00 
 8631150:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8631153:	89 54 24 04          	mov    %edx,0x4(%esp)
 8631157:	89 04 24             	mov    %eax,(%esp)
 863115a:	e8 a5 7b b8 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 863115f:	83 ec 04             	sub    $0x4,%esp
 8631162:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8631165:	89 44 24 04          	mov    %eax,0x4(%esp)
 8631169:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863116c:	89 04 24             	mov    %eax,(%esp)
 863116f:	e8 54 92 aa ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8631174:	84 c0                	test   %al,%al
 8631176:	0f 85 f5 fe ff ff    	jne    8631071 <_ZN10TimerQueue21write_timer_queue_logEv+0x53>
 863117c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 863117f:	89 04 24             	mov    %eax,(%esp)
 8631182:	e8 e9 54 0d 00       	call   8706670 <_ZNKSs6lengthEv>
 8631187:	85 c0                	test   %eax,%eax
 8631189:	0f 95 c0             	setne  %al
 863118c:	84 c0                	test   %al,%al
 863118e:	74 64                	je     86311f4 <_ZN10TimerQueue21write_timer_queue_logEv+0x1d6>
 8631190:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8631193:	89 04 24             	mov    %eax,(%esp)
 8631196:	e8 55 53 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 863119b:	89 c3                	mov    %eax,%ebx
 863119d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86311a4:	00 
 86311a5:	c7 44 24 08 07 01 00 	movl   $0x107,0x8(%esp)
 86311ac:	00 
 86311ad:	c7 44 24 04 60 85 ce 	movl   $0x8ce8560,0x4(%esp)
 86311b4:	08 
 86311b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86311b8:	89 04 24             	mov    %eax,(%esp)
 86311bb:	e8 58 e5 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86311c0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86311c4:	c7 44 24 04 8a 6c ce 	movl   $0x8ce6c8a,0x4(%esp)
 86311cb:	08 
 86311cc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86311cf:	89 04 24             	mov    %eax,(%esp)
 86311d2:	e8 b1 e5 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86311d7:	eb 1b                	jmp    86311f4 <_ZN10TimerQueue21write_timer_queue_logEv+0x1d6>
 86311d9:	89 d3                	mov    %edx,%ebx
 86311db:	89 c6                	mov    %eax,%esi
 86311dd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86311e0:	89 04 24             	mov    %eax,(%esp)
 86311e3:	e8 f8 69 0d 00       	call   8707be0 <_ZNSsD1Ev>
 86311e8:	89 f0                	mov    %esi,%eax
 86311ea:	89 da                	mov    %ebx,%edx
 86311ec:	89 04 24             	mov    %eax,(%esp)
 86311ef:	e8 5c 25 4b 00       	call   8ae3750 <_Unwind_Resume>
 86311f4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86311f7:	89 04 24             	mov    %eax,(%esp)
 86311fa:	e8 e1 69 0d 00       	call   8707be0 <_ZNSsD1Ev>
 86311ff:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8631202:	83 c4 00             	add    $0x0,%esp
 8631205:	5b                   	pop    %ebx
 8631206:	5e                   	pop    %esi
 8631207:	5d                   	pop    %ebp
 8631208:	c3                   	ret
 8631209:	90                   	nop

```

```c
// TimerQueue::write_timer_queue_log @ 0x863101e

/* TimerQueue::write_timer_queue_log() */

void TimerQueue::write_timer_queue_log(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char local_50 [20];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  string local_34 [4];
  cMyTrace local_30 [16];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  cMyTrace local_1c [16];
  
  std::string::string(local_34);
                    /* try { // try from 08631037 to 086311d6 has its CatchHandler @ 086311d9 */
  std::string::clear(local_34);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_38);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_3c);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38,
                       (_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') break;
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
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38);
    uVar5 = *(undefined4 *)(iVar4 + 4);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38);
    sprintf(local_50,"(%d %d) ",*puVar2,uVar5);
    std::string::operator+=(local_34,local_50);
    uVar3 = std::string::length(local_34);
    if (0x800 < uVar3) {
      uVar5 = std::string::c_str(local_34);
      cMyTrace::cMyTrace(local_30,"void TimerQueue::write_timer_queue_log()",0x101,0);
      cMyTrace::operator()(local_30,"TIMER_QUEUE_LOG : %s",uVar5);
      std::string::clear(local_34);
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_20,(int)local_38);
  }
  iVar4 = std::string::length(local_34);
  if (iVar4 != 0) {
    uVar5 = std::string::c_str(local_34);
    cMyTrace::cMyTrace(local_1c,"void TimerQueue::write_timer_queue_log()",0x107,0);
    cMyTrace::operator()(local_1c,"TIMER_QUEUE_LOG : %s",uVar5);
  }
  std::string::~string(local_34);
  return;
}

```

