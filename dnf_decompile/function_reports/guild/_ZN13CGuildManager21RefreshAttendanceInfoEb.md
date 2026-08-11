# _ZN13CGuildManager21RefreshAttendanceInfoEb

`CGuildManager::RefreshAttendanceInfo(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80977c6` | `0xe0` | `0x805d77a` | `0xc9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,60 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
+movl   $0x0,(%esp)
 call   <T> <time>
+mov    %eax,-0x10(%ebp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0xc(%ebp)
-cmpb   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0x51>
+movzbl -0x1c(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0x53>
 mov    0x8(%ebp),%eax
-mov    0xc0(%eax),%edx
+add    $0xc0,%eax
+mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    %eax,%edx
-je     <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0xde>
+jne    <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0x53>
 mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    $0x6,%eax
-jne    <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0xde>
+jne    <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0xc6>
 mov    0x8(%ebp),%eax
 add    $0x9c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjSt6vectorIjSaIjEESt4lessIjESaISt4pairIKjS2_EEE5clearEv>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager26RefreshGuildAttendanceInfoEv>
 mov    0x8(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    (%edx),%ecx
-mov    %ecx,0xb4(%eax)
-mov    0x4(%edx),%ecx
-mov    %ecx,0xb8(%eax)
-mov    0x8(%edx),%ecx
-mov    %ecx,0xbc(%eax)
-mov    0xc(%edx),%ecx
-mov    %ecx,0xc0(%eax)
-mov    0x10(%edx),%ecx
-mov    %ecx,0xc4(%eax)
-mov    0x14(%edx),%ecx
-mov    %ecx,0xc8(%eax)
-mov    0x18(%edx),%ecx
-mov    %ecx,0xcc(%eax)
-mov    0x1c(%edx),%ecx
-mov    %ecx,0xd0(%eax)
-mov    0x20(%edx),%ecx
-mov    %ecx,0xd4(%eax)
-mov    0x24(%edx),%ecx
-mov    %ecx,0xd8(%eax)
-mov    0x28(%edx),%edx
-mov    %edx,0xdc(%eax)
+lea    0xb4(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    (%eax),%ecx
+mov    %ecx,(%edx)
+mov    0x4(%eax),%ecx
+mov    %ecx,0x4(%edx)
+mov    0x8(%eax),%ecx
+mov    %ecx,0x8(%edx)
+mov    0xc(%eax),%ecx
+mov    %ecx,0xc(%edx)
+mov    0x10(%eax),%ecx
+mov    %ecx,0x10(%edx)
+mov    0x14(%eax),%ecx
+mov    %ecx,0x14(%edx)
+mov    0x18(%eax),%ecx
+mov    %ecx,0x18(%edx)
+mov    0x1c(%eax),%ecx
+mov    %ecx,0x1c(%edx)
+mov    0x20(%eax),%ecx
+mov    %ecx,0x20(%edx)
+mov    0x24(%eax),%ecx
+mov    %ecx,0x24(%edx)
+mov    0x28(%eax),%eax
+mov    %eax,0x28(%edx)
+jmp    <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb+0xc7>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::RefreshAttendanceInfo(bool) */

void __thiscall
CGuildManager::_ZN13CGuildManager21RefreshAttendanceInfoEb(CGuildManager *this,bool param_1)

{
  CUserManager *this_00;
  time_t local_14;
  tm *local_10;
  
  time(&local_14);
  local_10 = localtime(&local_14);
  if ((param_1) || ((*(int *)(this + 0xc0) != local_10->tm_mday && (local_10->tm_hour == 6)))) {
    std::
    map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
    ::clear((map<unsigned_int,std::vector<unsigned_int,std::allocator<unsigned_int>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<unsigned_int,std::allocator<unsigned_int>>>>>
             *)(this + 0x9c));
    this_00 = (CUserManager *)CApplication::Get_UserManager(*(CApplication **)this);
    CUserManager::_ZN12CUserManager26RefreshGuildAttendanceInfoEv(this_00);
    *(int *)(this + 0xb4) = local_10->tm_sec;
    *(int *)(this + 0xb8) = local_10->tm_min;
    *(int *)(this + 0xbc) = local_10->tm_hour;
    *(int *)(this + 0xc0) = local_10->tm_mday;
    *(int *)(this + 0xc4) = local_10->tm_mon;
    *(int *)(this + 200) = local_10->tm_year;
    *(int *)(this + 0xcc) = local_10->tm_wday;
    *(int *)(this + 0xd0) = local_10->tm_yday;
    *(int *)(this + 0xd4) = local_10->tm_isdst;
    *(long *)(this + 0xd8) = local_10->tm_gmtoff;
    *(char **)(this + 0xdc) = local_10->tm_zone;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 804 行）：

```cpp
void CGuildManager::RefreshAttendanceInfo(bool flag)
{
    time_t now = time(0);
    tm* t = localtime(&now);
    if (!flag && *(unsigned int*)((char*)this + 0xc0) == (unsigned int)t->tm_mday &&
        t->tm_hour != 6)
    {
        return;
    }
    m_attendance.clear();
    m_app->Get_UserManager()->RefreshGuildAttendanceInfo();
    *(tm*)((char*)this + 0xb4) = *t;
}
```
