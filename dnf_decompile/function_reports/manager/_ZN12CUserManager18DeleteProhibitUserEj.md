# _ZN12CUserManager18DeleteProhibitUserEj

`CUserManager::DeleteProhibitUser(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x806c808` | `0x82` | `0x806a1fc` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x1d>
 mov    $0x0,%eax
-jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x7c>
+jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x82>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager16FindProhibitUserEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x77>
+je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x56>
 mov    0x8(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKjP16CDNFProhibitUserSt4lessIS0_ESaISt4pairIS0_S2_EEE5eraseERS0_>
 cmp    $0x1,%eax
-sete   %al
+jne    <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x56>
+mov    $0x1,%eax
+jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x5b>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x77>
+je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x7d>
 mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x70>
+je     <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x76>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN16CDNFProhibitUserdlEPv>
 mov    $0x1,%eax
-jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x7c>
+jmp    <T> <_ZN12CUserManager18DeleteProhibitUserEj+0x82>
 mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUserManager::DeleteProhibitUser(unsigned int) */

undefined4 __thiscall
CUserManager::_ZN12CUserManager18DeleteProhibitUserEj(CUserManager *this,uint param_1)

{
  char cVar1;
  CDNFProhibitUser *this_00;
  int iVar2;
  uint *puVar3;
  
  cVar1 = std::
          map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
          ::empty((map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
                   *)this);
  if ((cVar1 == '\0') &&
     (this_00 = (CDNFProhibitUser *)FindProhibitUser((uint)this), this_00 != (CDNFProhibitUser *)0x0
     )) {
    puVar3 = &param_1;
    iVar2 = std::
            map<unsigned_int_const,CDNFProhibitUser*,std::less<unsigned_int_const>,std::allocator<std::pair<unsigned_int_const,CDNFProhibitUser*>>>
            ::erase((uint *)this);
    if (iVar2 == 1) {
      if (this_00 != (CDNFProhibitUser *)0x0) {
        CDNFProhibitUser::~CDNFProhibitUser(this_00);
        CDNFProhibitUser::operator_delete(this_00,puVar3);
      }
      return 1;
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/UserManager.cpp](source/DNFServer/GameServer/Manager/UserManager.cpp)（约第 45 行）：

```cpp
char CUserManager::DeleteProhibitUser(unsigned int dbid)
{
    if (m_prohibitUsers.empty())
        return 0;
    CDNFProhibitUser* pu = FindProhibitUser(dbid);
    if (pu && m_prohibitUsers.erase(dbid) == 1)
    {
        delete pu;
        return 1;
    }
    return 0;
}
```
