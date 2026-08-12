# _ZN14CMemberManager13MemerMemLoginEjP5CUser

`CMemberManager::MemerMemLogin(unsigned int, CUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a698` | `0x3c9` | `0x8062d1c` | `0x3c6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,288 +1,286 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 cmpl   $0x0,0x10(%ebp)
 je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x1c>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0xf8>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x9b>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x95>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0xba>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0xba>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0xd5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0xba>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x1de>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CMemberManager::MemerMemLogin() : uMemberKey == 0",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x181>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x17b>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x1a0>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x1a0>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x1bb>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x1a0>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 cmp    0xc(%ebp),%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x241>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,%ebx
 movl   $0x20c,0x8(%esp)
 movl   $&_ZZN14CMemberManager13MemerMemLoginEjP5CUserE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CMemberManager::MemerMemLogin() : pclUser->GetUniqCharNo() != uMemberKey\tmember key(%d), char id(%d)",0x8(%esp)
 movl   $"../log/Member",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x33c>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x337>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CMemberManager::MemerMemLogin() pclServerHandler == NULL\n",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2df>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2da>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2d9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2d4>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x319>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x314>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+movl   $0x0,-0x1c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x381>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x37e>
+mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMemberManager17CreateMemberQueryEjP5CUserP14CServerHandler>
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x3be>
+mov    %eax,-0x1c(%ebp)
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x3bb>
 movl   $0x21a,0x8(%esp)
 movl   $&_ZZN14CMemberManager13MemerMemLoginEjP5CUserE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CMemberManager::MemerMemLogin() ( is already member error ) : %d",0x8(%esp)
 movl   $"../log/Member",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::MemerMemLogin(unsigned int, CUser*) */

int __thiscall
CMemberManager::_ZN14CMemberManager13MemerMemLoginEjP5CUser
          (CMemberManager *this,uint param_1,CUser *param_2)

{
  CDNFException *pCVar1;
  uint uVar2;
  undefined4 uVar3;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [8];
  string local_34 [7];
  allocator local_2d;
  CMyFileLog local_2c [8];
  int local_24;
  CServerHandler *local_20;
  
  if ((param_2 == (CUser *)0x0) || (*(int *)this == 0)) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809a6d4 to 0809a6d8 has its CatchHandler @ 0809a74e */
    std::string::string(local_4c,"CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n",
                        &local_45);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809a6f3 to 0809a6f7 has its CatchHandler @ 0809a6fa */
    CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 0809a739 to 0809a73d has its CatchHandler @ 0809a740 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  if (param_1 == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809a7ba to 0809a7be has its CatchHandler @ 0809a834 */
    std::string::string(local_44,"CMemberManager::MemerMemLogin() : uMemberKey == 0",&local_3d);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809a7d9 to 0809a7dd has its CatchHandler @ 0809a7e0 */
    CDNFException::CDNFException(pCVar1,local_44);
                    /* try { // try from 0809a81f to 0809a823 has its CatchHandler @ 0809a826 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  uVar2 = CUser::GetUniqCharNo(param_2);
  if (uVar2 != param_1) {
    uVar3 = CUser::GetUniqCharNo(param_2);
    CMyFileLog::CMyFileLog(local_3c,"MemerMemLogin",0x20c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"../log/Member",
               "CMemberManager::MemerMemLogin() : pclUser->GetUniqCharNo() != uMemberKey\tmember key(%d), char id(%d)"
               ,param_1,uVar3);
  }
  local_20 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  if (local_20 == (CServerHandler *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809a918 to 0809a91c has its CatchHandler @ 0809a992 */
    std::string::string(local_34,"CMemberManager::MemerMemLogin() pclServerHandler == NULL\n",
                        &local_2d);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809a937 to 0809a93b has its CatchHandler @ 0809a93e */
    CDNFException::CDNFException(pCVar1,local_34);
                    /* try { // try from 0809a97d to 0809a981 has its CatchHandler @ 0809a984 */
    std::string::~string(local_34);
    std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = _ZN14CMemberManager10FindMemberEj((uint)this);
  if (local_24 == 0) {
    local_24 = CreateMemberQuery(this,param_1,param_2,local_20);
  }
  else {
    CMyFileLog::CMyFileLog(local_2c,"MemerMemLogin",0x21a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"../log/Member",
               "CMemberManager::MemerMemLogin() ( is already member error ) : %d",param_1);
  }
  return local_24;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp](source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp)（约第 536 行）：

```cpp
int CMemberManager::MemerMemLogin(unsigned int key, CUser* user)
{
    if (user == 0 || m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() : m_pclApp , pclUser == NULL\n");
    }
    if (key == 0)
    {
        throw CDNFException("CMemberManager::MemerMemLogin() : uMemberKey == 0");
    }
    if (user->GetUniqCharNo() != key)
    {
        DNF_LOG_SCOPE_LINE(0x20c,"../log/Member",
            "CMemberManager::MemerMemLogin() : pclUser->GetUniqCharNo() != uMemberKey\tmember key(%d), char id(%d)",
            key, user->GetUniqCharNo());
    }
    CServerHandler* handler = m_app->Get_ServerHandler();
    if (handler == 0)
    {
        throw CDNFException("CMemberManager::MemerMemLogin() pclServerHandler == NULL\n");
    }
    int result = 0;
    if (FindMember(key) == 0)
    {
        result = (int)CreateMemberQuery(key, user, handler);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x21a,"../log/Member", "CMemberManager::MemerMemLogin() ( is already member error ) : %d",
            key);
    }
    return result;
}
```
