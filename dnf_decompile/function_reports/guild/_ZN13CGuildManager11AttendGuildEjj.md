# _ZN13CGuildManager11AttendGuildEjj

`CGuildManager::AttendGuild(unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809720a` | `0x246` | `0x805d1de` | `0x24c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,175 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
 movb   $0x0,-0xd(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%ecx
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x9c(%eax),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEeqERKS6_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEneERKS6_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x141>
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIjSaIjEEC1Ev>
-lea    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIjSaIjEE9push_backERKj>
-lea    -0x2c(%ebp),%eax
-lea    -0x58(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRSt6vectorIjSaIjEEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
-sub    $0x4,%esp
-lea    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjSt6vectorIjSaIjEEEC1IjS3_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x9c(%eax),%ecx
-lea    -0x44(%ebp),%eax
-lea    -0x3c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
-sub    $0x4,%esp
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjSt6vectorIjSaIjEEED1Ev>
-jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x107>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjSt6vectorIjSaIjEEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0xf2>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIjSt6vectorIjSaIjEEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x126>
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIjSt6vectorIjSaIjEEED1Ev>
-movb   $0x1,-0xd(%ebp)
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x1fb>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x4c(%ebp),%eax
+je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x126>
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE3endEv>
 sub    $0x4,%esp
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIjSaIjEE3endEv>
+sub    $0x4,%esp
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
+lea    0x4(%eax),%edx
+lea    -0x3c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE5beginEv>
 sub    $0x4,%esp
-lea    -0x5c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0xc(%esp)
-mov    -0x1c(%ebp),%edx
+mov    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    -0x18(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEjET_S7_S7_RKT0_>
 sub    $0x4,%esp
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
-lea    0x4(%eax),%edx
-lea    -0x14(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIjSaIjEE3endEv>
-sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x1fb>
-lea    -0x4c(%ebp),%eax
+je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x201>
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjSt6vectorIjSaIjEEEEptEv>
 lea    0x4(%eax),%edx
 lea    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIjSaIjEE9push_backERKj>
 movb   $0x1,-0xd(%ebp)
+jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x201>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIjSaIjEEC1Ev>
+lea    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIjSaIjEE9push_backERKj>
+lea    -0x20(%ebp),%eax
+lea    -0x5c(%ebp),%edx
+mov    %edx,0x8(%esp)
+lea    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZSt9make_pairIRjRSt6vectorIjSaIjEEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
+sub    $0x4,%esp
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKjSt6vectorIjSaIjEEEC1IjS3_EEOS_IT_T0_E>
+mov    0x8(%ebp),%eax
+lea    0x9c(%eax),%ecx
+lea    -0x38(%ebp),%eax
+lea    -0x30(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
+sub    $0x4,%esp
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKjSt6vectorIjSaIjEEED1Ev>
+jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x1ca>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIKjSt6vectorIjSaIjEEED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x1b5>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIjSt6vectorIjSaIjEEED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x1e6>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIjSt6vectorIjSaIjEEED1Ev>
+movb   $0x1,-0xd(%ebp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
+jmp    <T> <_ZN13CGuildManager11AttendGuildEjj+0x201>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIjSaIjEED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 cmpb   $0x0,-0xd(%ebp)
-je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x23c>
+je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x242>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager22CheckAchieveAttendanceEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0xffffffff,-0xc(%ebp)
-je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x23c>
+je     <T> <_ZN13CGuildManager11AttendGuildEjj+0x242>
 mov    0x10(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    -0xc(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager16RewardAttendanceEjji>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::AttendGuild(unsigned int, unsigned int) */

void __thiscall
CGuildManager::_ZN13CGuildManager11AttendGuildEjj(CGuildManager *this,uint param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  __normal_iterator local_60 [4];
  vector<unsigned_int,std::allocator<unsigned_int>> local_5c [12];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  local_50 [4];
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  local_4c [4];
  pair local_48 [8];
  pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>> local_40 [16];
  pair<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>> local_30 [24];
  __normal_iterator local_18 [7];
  char local_11;
  uint local_10;
  
  local_11 = '\0';
  std::
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  ::find((uint *)local_50);
  std::
  map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
  ::end(local_4c);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
          ::operator==(local_50,(_Rb_tree_iterator *)local_4c);
  if (cVar1 == '\0') {
    std::
    _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
    ::operator->(local_50);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    std::
    _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
    ::operator->(local_50);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    std::
    find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
              ();
    std::
    _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
    ::operator->(local_50);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    bVar2 = __gnu_cxx::operator==(local_60,local_18);
    puVar4 = (uint *)&stack0xffffff80;
    if (bVar2) {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>
              ::operator->(local_50);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)(iVar3 + 4),&param_2);
      local_11 = '\x01';
      puVar4 = (uint *)&stack0xffffff80;
    }
  }
  else {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_5c);
                    /* try { // try from 08097285 to 080972a2 has its CatchHandler @ 08097330 */
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_5c,&param_2);
    std::make_pair<unsigned_int&,std::vector<unsigned_int,std::allocator<unsigned_int>>&>
              ((uint *)local_30,(vector *)&param_1);
                    /* try { // try from 080972b3 to 080972b7 has its CatchHandler @ 080972fc */
    std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>::
    pair<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>>(local_40,local_30);
                    /* try { // try from 080972d2 to 080972d6 has its CatchHandler @ 080972e7 */
    std::
    map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
    ::insert(local_48);
                    /* try { // try from 080972e0 to 080972e4 has its CatchHandler @ 080972fc */
    std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>::~pair
              (local_40);
                    /* try { // try from 08097317 to 0809731b has its CatchHandler @ 08097330 */
    std::pair<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>>::~pair(local_30);
    local_11 = '\x01';
    std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_5c);
    puVar4 = (uint *)&stack0xffffff84;
  }
  if (local_11 != '\0') {
    puVar4[1] = param_1;
    *puVar4 = (uint)this;
    puVar4[-1] = 0x809741d;
    local_10 = CheckAchieveAttendance(*puVar4);
    if (local_10 != 0xffffffff) {
      puVar4[3] = local_10;
      puVar4[2] = param_2;
      puVar4[1] = param_1;
      *puVar4 = (uint)this;
      puVar4[-1] = 0x8097446;
      RewardAttendance((CGuildManager *)*puVar4,puVar4[1],puVar4[2],puVar4[3]);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 673 行）：

```cpp
void CGuildManager::AttendGuild(unsigned int guildKey, unsigned int charNo)
{
    bool attended = false;
    std::map<unsigned int, std::vector<unsigned int> >::iterator it =
        m_attendance.find(guildKey);
    if (it != m_attendance.end())
    {
        if (std::find(it->second.begin(), it->second.end(), charNo) == it->second.end())
        {
            it->second.push_back(charNo);
            attended = true;
        }
    }
    else
    {
        std::vector<unsigned int> vec;
        vec.push_back(charNo);
        m_attendance.insert(std::make_pair(guildKey, vec));
        attended = true;
    }
    if (attended)
    {
        int phase = CheckAchieveAttendance(guildKey);
        if (phase != 0xffffffff)
        {
            RewardAttendance(guildKey, charNo, phase);
        }
    }
}
```
