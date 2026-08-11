# _ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader

`CPacketTranslater::OnCommonPacket(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8064c18` | `0x24e` | `0x805aa28` | `0x24c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,161 +1,160 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCommonPacket : 0 == m_pclApp",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0xa4>
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x13e>
-lea    -0x35(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader>
+movl   $0xb5,0x8(%esp)
+movl   $"OnCommonPacket",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 movzwl (%eax),%eax
-movzwl %ax,%ebx
-movl   $0xb5,0x8(%esp)
-movl   $"OnCommonPacket",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+movzwl %ax,%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCommonPacket() packet_id(%d)\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x246>
+jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x244>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x1e0>
+jne    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x1de>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnCommonPacket() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0xbb,0x8(%esp)
+movl   $"OnCommonPacket",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0xbb,0x8(%esp)
-movl   $"OnCommonPacket",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnEventEnd() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x1d9>
+jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x1d7>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x246>
+jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x244>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCommonPacket() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0xc1,0x8(%esp)
 movl   $"OnCommonPacket",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnEventEnd() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x241>
+jmp    <T> <_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader+0x23f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCommonPacket(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14OnCommonPacketEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  CDNFException *this;
  string local_40 [7];
  allocator local_39;
  CMyFileLog local_38 [40];
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08064c4e to 08064c52 has its CatchHandler @ 08064cbc */
    std::string::string(local_40,"CPacketTranslater::OnCommonPacket : 0 == m_pclApp",&local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08064c6d to 08064c71 has its CatchHandler @ 08064c74 */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08064cab to 08064caf has its CatchHandler @ 08064cb2 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08064cf2 to 08064d50 has its CatchHandler @ 08064d56 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  CServerHandler::_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader
            (*(CServerHandler **)(m_pclApp + 0x18),param_1);
  uVar1 = *(ushort *)param_1;
  CMyFileLog::CMyFileLog(local_38,"OnCommonPacket",0xb5);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_38,"./log/Web","CPacketTranslater::OnCommonPacket() packet_id(%d)\n",(uint)uVar1)
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2424 行）：

```cpp
void CPacketTranslater::OnCommonPacket(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException("CPacketTranslater::OnCommonPacket : 0 == m_pclApp");
        m_pclApp->m_serverHandler->SendAllTcpServer(header);
        CMyFileLog log("OnCommonPacket", 0xb5);
        log("./log/Web", "CPacketTranslater::OnCommonPacket() packet_id(%d)\n", header->packetId);
    }
    DNF_CATCH_LOG_THROW("CPacketTranslater::OnEventEnd() Exception Break");
}
```
