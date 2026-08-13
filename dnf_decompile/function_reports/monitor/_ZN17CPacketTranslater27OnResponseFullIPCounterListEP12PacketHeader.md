# _ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader

`CPacketTranslater::OnResponseFullIPCounterList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x808c26c` | `0x274` | `0x807795a` | `0x274` |

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
 jne    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0xdf>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnResponseFullIPCounterList : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0xa4>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x164>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0xb(%eax),%eax
 movzbl %al,%esi
 mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x16e8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[D_IP Counter] DataStats : %d, DataSize : %d ",0x8(%esp)
 movl   $"./log/Secu",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x20(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%ecx
 mov    -0x20(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x26c>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x206>
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
 movl   $"CPacketTranslater::OnResponseFullIPCounterList() Exception Break : %s\n",(%esp)
 call   <T> <printf>
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
 mov    %eax,%ebx
 movl   $0x16f1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResponseFullIPCounterList() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x1ff>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x26c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnResponseFullIPCounterList() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x16f7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResponseFullIPCounterList() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader+0x267>
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

/* CPacketTranslater::OnResponseFullIPCounterList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnResponseFullIPCounterListEP12PacketHeader
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
                    /* try { // try from 0808c2a2 to 0808c2a6 has its CatchHandler @ 0808c310 */
    std::string::string(local_44,"CPacketTranslater::OnResponseFullIPCounterList : 0 == m_pclApp",
                        &local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808c2c1 to 0808c2c5 has its CatchHandler @ 0808c2c8 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0808c2ff to 0808c303 has its CatchHandler @ 0808c306 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808c346 to 0808c3ca has its CatchHandler @ 0808c3d0 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  PVar1 = param_1[0xb];
  PVar2 = param_1[10];
  CMyFileLog::CMyFileLog(local_3c,"OnResponseFullIPCounterList",0x16e8);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/Secu","[D_IP Counter] DataStats : %d, DataSize : %d ",(uint)(byte)PVar2
             ,(uint)(byte)PVar1);
  CServerHandler::SendAllToGameServer
            (*(CServerHandler **)(m_pclApp + 0xa0),(char *)local_24,(uint)*(ushort *)(local_24 + 2))
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4060 行）：

```cpp
void CPacketTranslater::OnResponseFullIPCounterList(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnResponseFullIPCounterList : 0 == m_pclApp");
    }
    PacketHeader* pkt2 = pkt;
    DNF_LOG_SCOPE_LINE(0x16e8,"./log/Secu", "[D_IP Counter] DataStats : %d, DataSize : %d ",
        (unsigned int)(unsigned char)((RA_S8<10>*)pkt2)->v,
        (unsigned int)(unsigned char)((RA_S8<11>*)pkt2)->v);
    m_pclApp->m_serverHandler2->SendAllToGameServer((char*)pkt2, ((RA_U16<2>*)pkt2)->v);


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnResponseFullIPCounterList() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x16f1, "./log/Except", "CPacketTranslater::OnResponseFullIPCounterList() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnResponseFullIPCounterList() Exception Break");
        DNF_LOG_SCOPE_LINE(0x16f7, "./log/Except", "CPacketTranslater::OnResponseFullIPCounterList() Exception Break\n");
    }
}
```
