# _ZN10CTowerRank16registCharacRankEjPKcjj

`CTowerRank::registCharacRank(unsigned int, char const*, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a32a8` | `0x269` | `0x8086bf0` | `0x278` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,201 +1,204 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-lea    -0x29(%ebp),%eax
+lea    -0x1e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x10(%ebp),%eax
-lea    -0x29(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1e(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x49>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x1e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x1e(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+lea    -0x1d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+mov    0x10(%ebp),%eax
+lea    -0x1d(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x92>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x1d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x25d>
+lea    -0x1d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
 mov    0xc(%ebp),%eax
 lea    -0x1(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 mov    %eax,%edx
 add    0x8(%ebp),%edx
-lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%ecx
+lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE11lower_boundERS4_>
 sub    $0x4,%esp
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x96>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x7b>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-lea    -0x21(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-mov    0x10(%ebp),%eax
-lea    -0x21(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0xc(%ebp),%eax
 lea    -0x1(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 mov    %eax,%edx
 add    0x8(%ebp),%edx
-lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%eax
 lea    -0x28(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE11upper_boundERS4_>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x12f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x114>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x21(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x21(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x1a6>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x169>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSs20stTowerRankElement_tEEptEv>
 movzbl 0x4(%eax),%eax
 movzbl %al,%eax
 cmp    0x14(%ebp),%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x19b>
-lea    -0x34(%ebp),%eax
+je     <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x15e>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSs20stTowerRankElement_tEEptEv>
 movzwl 0x6(%eax),%eax
 movzwl %ax,%eax
 cmp    0x18(%ebp),%eax
 setb   %al
 test   %al,%al
-je     <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x25e>
+je     <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x154>
 mov    0xc(%ebp),%eax
 lea    -0x1(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x8(%ebp),%eax
-mov    -0x34(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE5eraseESt17_Rb_tree_iteratorIS5_E>
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x1bc>
-lea    -0x34(%ebp),%eax
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x183>
+mov    $0x0,%ebx
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x23b>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSs20stTowerRankElement_tEEppEv>
-lea    -0x38(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSs20stTowerRankElement_tEEneERKS4_>
 test   %al,%al
-jne    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x13c>
+jne    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0xf9>
 mov    0x18(%ebp),%eax
 movzwl %ax,%edx
 mov    0x14(%ebp),%eax
 movzbl %al,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN20stTowerRankElement_tC1Eht>
-lea    -0x14(%ebp),%eax
-lea    -0xc(%ebp),%edx
+lea    -0x10(%ebp),%eax
+lea    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRPKc20stTowerRankElement_tESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+call   <T> <_ZSt9make_pairIRPKcR20stTowerRankElement_tESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
+sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSs20stTowerRankElement_tEC1IPKcS1_EEOS_IT_T0_E>
 mov    0xc(%ebp),%eax
 lea    -0x1(%eax),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 mov    %eax,%edx
 add    0x8(%ebp),%edx
-lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%ecx
+lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt8multimapISs20stTowerRankElement_tSt4lessISsESaISt4pairIKSsS0_EEE6insertERKS5_>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSs20stTowerRankElement_tED1Ev>
-jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x25f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x21f>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSs20stTowerRankElement_tED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-nop
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x226>
+mov    $0x1,%ebx
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x23b>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN10CTowerRank16registCharacRankEjPKcjj+0x25d>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+test   %ebx,%ebx
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CTowerRank::registCharacRank(unsigned int, char const*, unsigned int, unsigned int) */

void __thiscall
CTowerRank::_ZN10CTowerRank16registCharacRankEjPKcjj
          (CTowerRank *this,uint param_1,char *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  local_3c [4];
  undefined4 local_38;
  string local_34 [7];
  allocator local_2d;
  string local_2c [7];
  allocator local_25;
  pair local_24 [4];
  pair<std::string_const,stTowerRankElement_t> local_20 [8];
  char *local_18 [2];
  stTowerRankElement_t local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 080a32cf to 080a32d3 has its CatchHandler @ 080a3323 */
  std::string::string(local_34,param_2,&local_2d);
                    /* try { // try from 080a32f9 to 080a32fd has its CatchHandler @ 080a330e */
  std::
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  ::lower_bound((multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
                 *)&local_38,(string *)(this + (param_1 - 1) * 0x18));
                    /* try { // try from 080a3307 to 080a330b has its CatchHandler @ 080a3323 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator((allocator<char> *)&local_2d);
  std::allocator<char>::allocator();
                    /* try { // try from 080a3368 to 080a336c has its CatchHandler @ 080a33bc */
  std::string::string(local_2c,param_2,&local_25);
                    /* try { // try from 080a3392 to 080a3396 has its CatchHandler @ 080a33a7 */
  std::
  multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
  ::upper_bound(local_3c,(string *)(this + (param_1 - 1) * 0x18));
                    /* try { // try from 080a33a0 to 080a33a4 has its CatchHandler @ 080a33bc */
  std::string::~string(local_2c);
  std::allocator<char>::~allocator((allocator<char> *)&local_25);
  do {
    cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>> *)
                       &local_38,(_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') {
LAB_080a3464:
      stTowerRankElement_t::stTowerRankElement_t(local_10,(uchar)param_3,(ushort)param_4);
      std::make_pair<char_const*&,stTowerRankElement_t>(local_18,(stTowerRankElement_t *)&param_2);
      std::pair<std::string_const,stTowerRankElement_t>::pair<char_const*,stTowerRankElement_t>
                (local_20,(pair *)local_18);
                    /* try { // try from 080a34d6 to 080a34da has its CatchHandler @ 080a34eb */
      std::
      multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
      ::insert(local_24);
      std::pair<std::string_const,stTowerRankElement_t>::~pair(local_20);
      return;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>> *)
                       &local_38);
    if (*(byte *)(iVar2 + 4) == param_3) {
      iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>> *)
                         &local_38);
      if (param_4 <= *(ushort *)(iVar2 + 6)) {
        return;
      }
      std::
      multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
      ::erase((multimap<std::string,stTowerRankElement_t,std::less<std::string>,std::allocator<std::pair<std::string_const,stTowerRankElement_t>>>
               *)(this + (param_1 - 1) * 0x18),local_38);
      goto LAB_080a3464;
    }
    std::_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>>::operator++
              ((_Rb_tree_iterator<std::pair<std::string_const,stTowerRankElement_t>> *)&local_38);
  } while( true );
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h, source/DNFServer/GameServer/Monitor/DNFServerHandler.h, source/DNFServer/GameServer/Monitor/DNFServerInterface.h, source/DNFServer/GameServer/Monitor/DNFTowerRank.cpp, source/DNFServer/GameServer/Monitor/DNFTowerRank.h, source/DNFServer/ServerCommon/DNFFileLog.h 等 299 个文件*
