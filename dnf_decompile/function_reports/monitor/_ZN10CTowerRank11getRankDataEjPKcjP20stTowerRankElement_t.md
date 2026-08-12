# _ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t

`CTowerRank::getRankData(unsigned int, char const*, unsigned int, stTowerRankElement_t*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a30e8` | `0x1bf` | `0x8086d7c` | `0x1b2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,147 +1,141 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-movl   $0x0,-0xc(%ebp)
-lea    -0x19(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x19(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
+movl   $0x0,-0x10(%ebp)
 mov    0xc(%ebp),%eax
 lea    -0x1(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    %eax,%edx
-add    0x8(%ebp),%edx
+add    0x8(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x1d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x1d(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%ecx
-mov    %ecx,0x8(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE11lower_boundERS4_>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKSs20stTowerRankElement_tEEC1ERKSt17_Rb_tree_iteratorIS3_E>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0xaf>
+jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0xb3>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x94>
+jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x98>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x19(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x19(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    0xc(%ebp),%eax
-lea    -0x1(%eax),%edx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-mov    %eax,%edx
-add    0x8(%ebp),%edx
-lea    -0x18(%ebp),%eax
-lea    -0x14(%ebp),%ecx
-mov    %ecx,0x8(%esp)
+lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE11upper_boundERS4_>
 sub    $0x4,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKSs20stTowerRankElement_tEEC1ERKSt17_Rb_tree_iteratorIS3_E>
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x15a>
+jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x14d>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x13f>
+jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x132>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0xd(%ebp),%eax
+lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x199>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x18c>
+mov    -0x10(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%ebx
 add    0x18(%ebp),%ebx
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKSs20stTowerRankElement_tEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%ebx)
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 cmp    0x14(%ebp),%eax
-je     <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x1b1>
-lea    -0x28(%ebp),%eax
+je     <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x1a4>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKSs20stTowerRankElement_tEEppEv>
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKSs20stTowerRankElement_tEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x167>
-jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x1b2>
+jne    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x15a>
+jmp    <T> <_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t+0x1a5>
 nop
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTowerRank::getRankData(unsigned int, char const*, unsigned int, stTowerRankElement_t*) */

uint __thiscall
CTowerRank::_ZN10CTowerRank11getRankDataEjPKcjP20stTowerRankElement_t
          (CTowerRank *this,uint param_1,char *param_2,uint param_3,stTowerRankElement_t *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>> local_30 [4];
  _Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>> local_2c [4];
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  local_28 [4];
  string local_24 [7];
  allocator local_1d;
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  local_1c [4];
  string local_18 [7];
  allocator local_11;
  uint local_10;
  
  local_10 = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 080a3116 to 080a311a has its CatchHandler @ 080a317c */
  std::string::string(local_24,param_2,&local_1d);
                    /* try { // try from 080a3140 to 080a3144 has its CatchHandler @ 080a3167 */
  std::
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  ::lower_bound(local_28,(string *)(this + (param_1 - 1) * 0x18));
  std::_Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>>::
  _Rb_tree_const_iterator(local_2c,(_Rb_tree_iterator *)local_28);
                    /* try { // try from 080a3160 to 080a3164 has its CatchHandler @ 080a317c */
  std::string::~string(local_24);
  std::allocator<char>::~allocator((allocator<char> *)&local_1d);
  std::allocator<char>::allocator();
                    /* try { // try from 080a31c1 to 080a31c5 has its CatchHandler @ 080a3227 */
  std::string::string(local_18,param_2,&local_11);
                    /* try { // try from 080a31eb to 080a31ef has its CatchHandler @ 080a3212 */
  std::
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  ::upper_bound(local_1c,(string *)(this + (param_1 - 1) * 0x18));
  std::_Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>>::
  _Rb_tree_const_iterator(local_30,(_Rb_tree_iterator *)local_1c);
                    /* try { // try from 080a320b to 080a320f has its CatchHandler @ 080a3227 */
  std::string::~string(local_18);
  std::allocator<char>::~allocator((allocator<char> *)&local_11);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>>::
            operator!=(local_2c,(_Rb_tree_const_iterator *)local_30);
    if (cVar1 == '\0') {
      return local_10;
    }
    iVar2 = local_10 * 4;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>>::
            operator->(local_2c);
    *(undefined4 *)(param_4 + iVar2) = *(undefined4 *)(iVar3 + 4);
    local_10 = local_10 + 1;
    if (local_10 == param_3) break;
    std::_Rb_tree_const_iterator<std::pair<std::string_const,stTowerRankElement_t>>::operator++
              (local_2c);
  }
  return local_10;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFServerHandler.h, source/DNFServer/GameServer/Monitor/DNFServerInterface.h, source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp, source/DNFServer/GameServer/Monitor/DNFTowerRank.h, source/DNFServer/ServerCommon/DNFFileLog.h 等 299 个文件*
