# _ZN14CServerHandler4LoadEP13ST_ServerInfo

`CServerHandler::Load(ST_ServerInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | NEAR | `0x805644c` | `0x2b5` | `0x80542b0` | `0x2b5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,220 +1,220 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x29b>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x1,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x297>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
-mov    %al,-0x1e(%ebp)
-mov    -0x1c(%ebp),%edx
+mov    %al,-0x1a(%ebp)
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0xff,-0x1e(%ebp)
+mov    %al,-0x19(%ebp)
+cmpb   $0xff,-0x1a(%ebp)
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x141>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Server Table Exception Break! bServerIndex >= MAX_CONN_SERVER",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xe4>
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
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xde>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x103>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x103>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x11e>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x103>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-cmpb   $0x64,-0x1d(%ebp)
+cmpb   $0x64,-0x19(%ebp)
 jbe    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x227>
-lea    -0x1f(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x1f(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Server Table Exception Break! bServerGroup >= SERVER_GROUP_MAX",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x24(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1ca>
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
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1c4>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1e9>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1e9>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x204>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1e9>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x1f(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x1f(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movzbl -0x1e(%ebp),%esi
-mov    -0x1c(%ebp),%edx
+movzbl -0x1a(%ebp),%esi
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzwl 0x8(%eax),%eax
 movzwl %ax,%ebx
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 lea    0x4(%eax),%edi
-movzbl -0x1d(%ebp),%eax
+movzbl -0x19(%ebp),%eax
 mov    %eax,-0x3c(%ebp)
-movzbl -0x1d(%ebp),%edx
+movzbl -0x19(%ebp),%edx
 mov    %edx,%eax
 shl    $0x8,%eax
 mov    %eax,%ecx
 sub    %edx,%ecx
 mov    %ecx,%edx
-movzbl -0x1e(%ebp),%eax
+movzbl -0x1a(%ebp),%eax
 add    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %edi,0x8(%esp)
 mov    -0x3c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer4InitEhRSsth>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x649a,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x649a,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x15>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::Load(ST_ServerInfo*) */

void __thiscall
CServerHandler::_ZN14CServerHandler4LoadEP13ST_ServerInfo
          (CServerHandler *this,ST_ServerInfo *param_1)

{
  CDNFException *pCVar1;
  string local_30 [7];
  allocator local_29;
  string local_28 [5];
  allocator local_23;
  ST_ServerInfo local_22;
  ST_ServerInfo local_21;
  int local_20;
  
  local_20 = 0;
  do {
    if (0x649a < local_20) {
      return;
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x1) {
      local_22 = param_1[local_20 * 0xc + 2];
      local_21 = param_1[local_20 * 0xc + 1];
      if (local_22 == (ST_ServerInfo)0xff) {
        std::allocator<char>::allocator();
                    /* try { // try from 080564d1 to 080564d5 has its CatchHandler @ 0805654b */
        std::string::string(local_30,
                            "CServerHandler::Load() Server Table Exception Break! bServerIndex >= MAX_CONN_SERVER"
                            ,&local_29);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080564f0 to 080564f4 has its CatchHandler @ 080564f7 */
        CDNFException::CDNFException(pCVar1,local_30);
                    /* try { // try from 08056536 to 0805653a has its CatchHandler @ 0805653d */
        std::string::~string(local_30);
        std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      if (100 < (byte)local_21) {
        std::allocator<char>::allocator();
                    /* try { // try from 080565b7 to 080565bb has its CatchHandler @ 08056631 */
        std::string::string(local_28,
                            "CServerHandler::Load() Server Table Exception Break! bServerGroup >= SERVER_GROUP_MAX"
                            ,&local_23);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080565d6 to 080565da has its CatchHandler @ 080565dd */
        CDNFException::CDNFException(pCVar1,local_28);
                    /* try { // try from 0805661c to 08056620 has its CatchHandler @ 08056623 */
        std::string::~string(local_28);
        std::allocator<char>::~allocator((allocator<char> *)&local_23);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CGameServer::Init((CGameServer *)
                        (this + ((uint)(byte)local_21 * 0xff + (uint)(byte)local_22) * 0x14),
                        (uchar)local_21,(string *)(param_1 + local_20 * 0xc + 4),
                        *(ushort *)(param_1 + local_20 * 0xc + 8),(uchar)local_22);
    }
    local_20 = local_20 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerHandler.cpp](source/DNFServer/GameServer/COServer/DNFServerHandler.cpp)（约第 28 行）：

```cpp
void CServerHandler::Load(ST_ServerInfo* info)
{
    for (int i = 0; i < 0x649b; i++)
    {
        if (info[i].m_field0 == 1)
        {
            unsigned char index = info[i].m_field2;
            unsigned char group = info[i].m_field1;
            if (index == 0xff)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break! "
                                    "bServerIndex >= MAX_CONN_SERVER");
            }
            if (100 < group)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break! "
                                    "bServerGroup >= SERVER_GROUP_MAX");
            }
            m_servers[(int)group * 0xff + (int)index].Init(group, info[i].m_string,
                                                           info[i].m_ushort, index);
        }
    }
}
```
