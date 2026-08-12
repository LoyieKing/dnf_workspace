# _ZN14CMemberManager25MemberRegisterFlagProcessEv

`CMemberManager::MemberRegisterFlagProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a37e` | `0x118` | `0x8061a6c` | `0x10d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,82 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x48,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x20(%ebp)
-lea    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0x4(%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    0x8(%ebp),%ecx
 add    $0x28,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CScheduler19IsOnTimeSpecialHourEii>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10d>
+sete   %al
+test   %al,%al
+je     <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10b>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x93>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember23CheckMemberRegisterFlagEv>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP7CMemberSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP7CMemberEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x6c>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%ebx
 movl   $0x19a,0x8(%esp)
 movl   $&_ZZN14CMemberManager25MemberRegisterFlagProcessEvE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    0x8(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CMemberManager::MemberRegisterFlagProcess(%d,%d)",0x8(%esp)
 movl   $"./log/MemberModify",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10e>
-nop
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::MemberRegisterFlagProcess() */

void __thiscall
CMemberManager::_ZN14CMemberManager25MemberRegisterFlagProcessEv(CMemberManager *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  local_28 [4];
  time_t local_24;
  map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
  local_20 [4];
  CMyFileLog local_1c [8];
  CMember *local_14;
  tm *local_10;
  
  local_24 = time((time_t *)0x0);
  local_10 = localtime(&local_24);
  cVar2 = CScheduler::IsOnTimeSpecialHour
                    ((CScheduler *)(this + 0x28),local_10->tm_hour,local_10->tm_min);
  if (cVar2 == '\x01') {
    std::
    map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<unsigned_int,CMember*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CMember*>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)local_28,
                         (_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)local_28);
      local_14 = *(CMember **)(iVar3 + 4);
      CMember::CheckMemberRegisterFlag(local_14);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CMember*>> *)local_28);
    }
    iVar3 = local_10->tm_min;
    iVar1 = local_10->tm_hour;
    CMyFileLog::CMyFileLog(local_1c,"MemberRegisterFlagProcess",0x19a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_1c,"./log/MemberModify","CMemberManager::MemberRegisterFlagProcess(%d,%d)",
               iVar1,iVar3);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 61 行）：

```cpp
void CMemberManager::MemberRegisterFlagProcess()
{
    time_t t = time(0);
    struct tm* lt = localtime(&t);
    if (!m_scheduler.IsOnTimeSpecialHour(lt->tm_hour, lt->tm_min))
    {
        for (std::map<unsigned int, CMember*>::iterator it = m_members.begin();
             it != m_members.end(); ++it)
        {
            CMember* member = it->second;
            member->CheckMemberRegisterFlag();
        }
        CMyFileLog log(__FUNCTION__, 0x19a);
        log("./log/MemberModify", "CMemberManager::MemberRegisterFlagProcess(%d,%d)",
            lt->tm_min, lt->tm_hour);
    }
}
```
