# _ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader

`CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807d37a` | `0x21c` | `0x8073868` | `0x154` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,146 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x2c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xf2>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMonitorManagerConnectOK : 0 == m_pclApp",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x8d>
-mov    %edx,%esi
-mov    %eax,%edi
+jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x95>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x87>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xa4>
+jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x8f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xa4>
-lea    -0x3c(%ebp),%eax
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xb4>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xbc>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xa4>
+jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xcf>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x13e>
-lea    -0x35(%ebp),%eax
+mov    %esi,%ecx
+mov    %ebx,%eax
+mov    %ecx,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x68(%eax),%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler21SetManagerConnectFlagEb>
 movl   $0xe2d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Manager Server Connect Success",0x8(%esp)
 movl   $"./log/Manager",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $"** Manager Server Connect Success **",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x214>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x1ba>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0xe32,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnMonitorManagerConnectOK() Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x1b3>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x214>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0xe37,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnMonitorManagerConnectOK() Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader+0x20f>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x4c,%esp
+add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_40 [7];
  allocator local_39;
  CMyFileLog local_38 [40];
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807d3b0 to 0807d3b4 has its CatchHandler @ 0807d41e */
    std::string::string(local_40,"CPacketTranslater::OnMonitorManagerConnectOK : 0 == m_pclApp",
                        &local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807d3cf to 0807d3d3 has its CatchHandler @ 0807d3d6 */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 0807d40d to 0807d411 has its CatchHandler @ 0807d414 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807d454 to 0807d4b2 has its CatchHandler @ 0807d4b8 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  CServerHandler::SetManagerConnectFlag(*(CServerHandler **)(m_pclApp + 0x68),true);
  CMyFileLog::CMyFileLog(local_38,"OnMonitorManagerConnectOK",0xe2d);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_38,"./log/Manager","Manager Server Connect Success");
  puts("** Manager Server Connect Success **");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2777 行）：

```cpp
void CPacketTranslater::OnMonitorManagerConnectOK(PacketHeader* pkt)
{
    (void)pkt;
    THROW_IF_NO_APP("CPacketTranslater::OnMonitorManagerConnectOK : 0 == m_pclApp");
    m_pclApp->m_serverHandler->SetManagerConnectFlag(true);
    DNF_LOG_SCOPE_LINE(0xe2d, "./log/Manager", "Manager Server Connect Success");
    puts("** Manager Server Connect Success **");
}
```
