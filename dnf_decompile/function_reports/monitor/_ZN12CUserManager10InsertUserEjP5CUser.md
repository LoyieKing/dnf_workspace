# _ZN12CUserManager10InsertUserEjP5CUser

`CUserManager::InsertUser(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807058a` | `0x67` | `0x808c0ae` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0x10(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN12CUserManager10InsertUserEjP5CUser+0x60>
+jne    <T> <_ZN12CUserManager10InsertUserEjP5CUser+0x14>
+mov    $0x0,%eax
+jmp    <T> <_ZN12CUserManager10InsertUserEjP5CUser+0x51>
+lea    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+lea    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-lea    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-lea    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRKjRP5CUserESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
-sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt4pairIKjP5CUserEC1IjS2_EEOS_IT_T0_E>
+call   <T> <_ZNSt4pairIKjP5CUserEC1IRjRS2_EEOT_OT0_>
 mov    0x8(%ebp),%eax
 lea    0x18(%eax),%ecx
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%eax
-jmp    <T> <_ZN12CUserManager10InsertUserEjP5CUser+0x65>
-mov    $0x0,%eax
+mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::InsertUser(unsigned int, CUser*) */

undefined1 __thiscall
CUserManager::_ZN12CUserManager10InsertUserEjP5CUser(CUserManager *this,uint param_1,CUser *param_2)

{
  pair local_24 [4];
  undefined1 local_20;
  pair<unsigned_int_const,CUser*> local_1c [8];
  uint local_14 [4];
  
  if (param_2 == (CUser *)0x0) {
    local_20 = 0;
  }
  else {
    std::make_pair<unsigned_int_const&,CUser*&>(local_14,(CUser **)&param_1);
    std::pair<unsigned_int_const,CUser*>::pair<unsigned_int,CUser*>(local_1c,(pair *)local_14);
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::insert(local_24);
  }
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUserManager.cpp](source/DNFServer/GameServer/Guild/DNFUserManager.cpp)（约第 109 行）：

```cpp
int CUserManager::InsertUser(unsigned int dbid, CUser* user)
{
    if (user == 0)
    {
        return 0;
    }
    m_users.insert(std::make_pair(dbid, user));
    return 1;
}
```
