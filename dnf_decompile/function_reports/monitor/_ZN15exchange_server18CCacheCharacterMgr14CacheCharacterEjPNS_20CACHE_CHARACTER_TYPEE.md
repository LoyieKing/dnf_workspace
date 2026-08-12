# _ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE

`exchange_server::CCacheCharacterMgr::CacheCharacter(unsigned int, exchange_server::CACHE_CHARACTER_TYPE*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093a5a` | `0x114` | `0x805d88c` | `0xd3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x48,%esp
+sub    $0x38,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    0x10(%ebp),%edx
 mov    %eax,0x8(%edx)
+mov    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRN15exchange_server20CACHE_CHARACTER_TYPEEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjN15exchange_server20CACHE_CHARACTER_TYPEEEC1IjS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjN15exchange_server20CACHE_CHARACTER_TYPEEEC1IRjRS2_EEOT_OT0_>
 mov    0x8(%ebp),%edx
-lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%ecx
+lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN15exchange_server20CACHE_CHARACTER_TYPEESt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x2c(%ebp),%eax
-test   %al,%al
-je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0x9a>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIjN15exchange_server20CACHE_CHARACTER_TYPEESt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
-cmp    $0xc34f,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0xb9>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv>
+movzbl -0x1c(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0xb9>
-mov    $0x0,%eax
-jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0x112>
-lea    -0x30(%ebp),%eax
+je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0x79>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN15exchange_server20CACHE_CHARACTER_TYPEEEEptEv>
 mov    0x10(%ebp),%edx
 mov    (%edx),%ecx
 mov    %ecx,0x4(%eax)
 mov    0x4(%edx),%ecx
 mov    %ecx,0x8(%eax)
 mov    0x8(%edx),%edx
 mov    %edx,0xc(%eax)
-lea    -0x38(%ebp),%eax
+jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0xcc>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIjN15exchange_server20CACHE_CHARACTER_TYPEESt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
+cmp    $0xc34f,%eax
+seta   %al
+test   %al,%al
+je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0x9d>
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv>
+jmp    <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0xcc>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server19CCacheCharacterTimeC1Ev>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x28(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt14priority_queueIN15exchange_server19CCacheCharacterTimeESt6vectorIS1_SaIS1_EESt4lessIS1_EE4pushERKS1_>
-mov    0x8(%ebp),%eax
-add    $0x18,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt14priority_queueIN15exchange_server19CCacheCharacterTimeESt6vectorIS1_SaIS1_EESt4lessIS1_EE4sizeEv>
-cmp    $0xc34f,%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE+0x10d>
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15exchange_server18CCacheCharacterMgr14CollectGarbageEv>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* exchange_server::CCacheCharacterMgr::CacheCharacter(unsigned int,
   exchange_server::CACHE_CHARACTER_TYPE*) */

undefined4 __thiscall
exchange_server::CCacheCharacterMgr::
_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE
          (CCacheCharacterMgr *this,uint param_1,CACHE_CHARACTER_TYPE *param_2)

{
  char cVar1;
  time_t tVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_3c;
  uint local_38;
  _Rb_tree_iterator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>
  local_34 [4];
  char local_30;
  pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE> local_2c [16];
  uint local_1c [6];
  
  tVar2 = time((time_t *)0x0);
  *(time_t *)(param_2 + 8) = tVar2;
  std::make_pair<unsigned_int&,exchange_server::CACHE_CHARACTER_TYPE&>
            (local_1c,(CACHE_CHARACTER_TYPE *)&param_1);
  std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>::
  pair<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE>(local_2c,(pair *)local_1c);
  std::
  map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
  ::insert(local_34);
  if (local_30 == '\0') {
    iVar4 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>::
            operator->(local_34);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_2 + 8);
  }
  else {
    uVar3 = std::
            map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
            ::size((map<unsigned_int,exchange_server::CACHE_CHARACTER_TYPE,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,exchange_server::CACHE_CHARACTER_TYPE>>>
                    *)this);
    if ((49999 < uVar3) && (cVar1 = CollectGarbage(this), cVar1 != '\x01')) {
      return 0;
    }
  }
  CCacheCharacterTime::CCacheCharacterTime((CCacheCharacterTime *)&local_3c);
  local_3c = *(undefined4 *)(param_2 + 8);
  local_38 = param_1;
  std::
  priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
  ::push((priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
          *)(this + 0x18),(CCacheCharacterTime *)&local_3c);
  uVar3 = std::
          priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
          ::size((priority_queue<exchange_server::CCacheCharacterTime,std::vector<exchange_server::CCacheCharacterTime,std::allocator<exchange_server::CCacheCharacterTime>>,std::less<exchange_server::CCacheCharacterTime>>
                  *)(this + 0x18));
  if (49999 < uVar3) {
    CollectGarbage(this);
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/DNFAppConfig.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFMember.h, source/DNFServer/GameServer/Monitor/DNFPacketBuffer.h 等 299 个文件*
