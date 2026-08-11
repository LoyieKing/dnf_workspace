# _ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader

`CPacketTranslater::OnResponseIPCounterList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808bff8` | `0x274` | `0x80775c2` | `0x274` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,171 +1,171 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0xdf>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnResponseIPCounterList : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0xa4>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x164>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 movzbl 0xb(%eax),%eax
 movzbl %al,%esi
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x16c8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[IP Counter] DataStats : %d, DataSize : %d ",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    -0x20(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x26c>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x206>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnResponseIPCounterList() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x16d1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResponseIPCounterList() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x1ff>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x26c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnResponseIPCounterList() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x16d7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResponseIPCounterList() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader+0x267>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnResponseIPCounterList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnResponseIPCounterListEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  CDNFException *this;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808c02e to 0808c032 has its CatchHandler @ 0808c09c */
    std::string::string(local_44,"CPacketTranslater::OnResponseIPCounterList : 0 == m_pclApp",
                        &local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808c04d to 0808c051 has its CatchHandler @ 0808c054 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0808c08b to 0808c08f has its CatchHandler @ 0808c092 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808c0d2 to 0808c156 has its CatchHandler @ 0808c15c */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  PVar1 = param_1[0xb];
  PVar2 = param_1[10];
  CMyFileLog::CMyFileLog(local_3c,"OnResponseIPCounterList",0x16c8);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/Secu","[IP Counter] DataStats : %d, DataSize : %d ",(uint)(byte)PVar2,
             (uint)(byte)PVar1);
  CServerHandler::SendAllToGameServer
            (*(CServerHandler **)(m_pclApp + 0xa0),(char *)local_24,(uint)*(ushort *)(local_24 + 2))
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3984 行）：

```cpp
void CPacketTranslater::OnResponseIPCounterList(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnResponseIPCounterList : 0 == m_pclApp");
    }
    DNF_LOG_SCOPE_LINE(0x16c8,"./log/Secu", "[IP Counter] DataStats : %d, DataSize : %d ",
        (unsigned int)(unsigned char)((RA_S8<10>*)pkt)->v,
        (unsigned int)(unsigned char)((RA_S8<11>*)pkt)->v);
    CServerHandler* handler = m_pclApp->m_serverHandler2;
    handler->SendAllToGameServer((char*)pkt, ((RA_U16<2>*)pkt)->v);


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnResponseIPCounterList() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x16d1, "./log/Except", "CPacketTranslater::OnResponseIPCounterList() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnResponseIPCounterList() Exception Break");
        DNF_LOG_SCOPE_LINE(0x16d7, "./log/Except", "CPacketTranslater::OnResponseIPCounterList() Exception Break\n");
    }
}
```
