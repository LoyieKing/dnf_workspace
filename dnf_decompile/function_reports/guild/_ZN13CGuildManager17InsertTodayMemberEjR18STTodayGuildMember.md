# _ZN13CGuildManager17InsertTodayMemberEjR18STTodayGuildMember

`CGuildManager::InsertTodayMember(unsigned int, STTodayGuildMember&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8096fa8` | `0xa5` | `0x805cd2c` | `0xa5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x88,%esp
+sub    $0x98,%esp
 mov    0x8(%ebp),%eax
 lea    0x58(%eax),%ecx
-lea    -0x70(%ebp),%eax
+lea    -0x80(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x58(%eax),%edx
-lea    -0x6c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x6c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x70(%ebp),%eax
+lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj18STTodayGuildMemberEEeqERKS4_>
 test   %al,%al
 je     <T> <_ZN13CGuildManager17InsertTodayMemberEjR18STTodayGuildMember+0xa3>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjR18STTodayGuildMemberESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x60(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj18STTodayGuildMemberEC1IjS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x58(%eax),%ecx
-lea    -0x68(%ebp),%eax
-lea    -0x60(%ebp),%edx
+lea    -0x78(%ebp),%eax
+lea    -0x70(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 sub    $0x4,%esp
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::InsertTodayMember(unsigned int, STTodayGuildMember&) */

void __thiscall
CGuildManager::_ZN13CGuildManager17InsertTodayMemberEjR18STTodayGuildMember
          (CGuildManager *this,uint param_1,STTodayGuildMember *param_2)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STTodayGuildMember>> local_74 [4];
  map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
  local_70 [4];
  pair local_6c [8];
  pair<unsigned_int_const,STTodayGuildMember> local_64 [44];
  uint local_38 [13];
  
  std::
  map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
  ::find((uint *)local_74);
  std::
  map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
  ::end(local_70);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STTodayGuildMember>>::operator==
                    (local_74,(_Rb_tree_iterator *)local_70);
  if (cVar1 != '\0') {
    std::make_pair<unsigned_int&,STTodayGuildMember&>(local_38,(STTodayGuildMember *)&param_1);
    std::pair<unsigned_int_const,STTodayGuildMember>::pair<unsigned_int,STTodayGuildMember>
              (local_64,(pair *)local_38);
    std::
    map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
    ::insert(local_6c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 683 行）：

```cpp
void CGuildManager::InsertTodayMember(unsigned int guildKey, STTodayGuildMember& member)
{
    // ORIG：find 后仅当不存在才 insert（不覆盖已存在项）
    std::map<unsigned int, STTodayGuildMember>::iterator it = m_todayMembers.find(guildKey);
    if (it == m_todayMembers.end())
    {
        m_todayMembers.insert(std::make_pair(guildKey, member));
    }
}
```
