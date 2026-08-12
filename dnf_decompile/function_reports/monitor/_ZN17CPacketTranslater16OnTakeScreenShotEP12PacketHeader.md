# _ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader

`CPacketTranslater::OnTakeScreenShot(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808c4e0` | `0x2c8` | `0x8077b2c` | `0x2e2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,196 +1,208 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0xdf>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnTakeScreenShot : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0xa4>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x1b8>
+jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x1d2>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
+lea    -0x4f(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    (%edx),%edx
+mov    %edx,(%eax)
+lea    -0x4f(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%edx)
+lea    -0x4f(%ebp),%eax
+lea    0x8(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,(%edx)
+lea    -0x4f(%ebp),%eax
+lea    0xc(%eax),%edx
+mov    0x8(%ebp),%eax
+movzwl 0xc(%eax),%eax
+mov    %ax,(%edx)
+lea    -0x4f(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+movzbl 0xe(%eax),%eax
+mov    %al,(%edx)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    (%eax),%edx
-mov    %edx,-0x4f(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x4b(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x47(%ebp)
-movzwl 0xc(%eax),%edx
-mov    %dx,-0x43(%ebp)
-movzbl 0xe(%eax),%eax
-mov    %al,-0x41(%ebp)
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x13d>
+jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x15f>
+mov    0x8(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%eax
+mov    %eax,0x8(%esp)
+lea    -0x4f(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
+jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x17f>
 lea    -0x4f(%ebp),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler19SendAllToGameServerEPci>
-jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x165>
+mov    0x8(%ebp),%eax
+movzbl 0xa(%eax),%eax
+movzbl %al,%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
-movzbl 0xa(%eax),%eax
-movzbl %al,%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-lea    -0x4f(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SendToGameServerEhP12PacketHeader>
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x1710,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Recv TakeScreenShot Command! channel(%d) time(%d)",0x8(%esp)
 movl   $"./log/ScreenShot",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x2c0>
+jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x2da>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x25a>
+jne    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x274>
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
 movl   $"CPacketTranslater::OnTakeScreenShot() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1717,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResponseIPCounterList() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x26d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x2c0>
+jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x2da>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnTakeScreenShot() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x171d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResponseIPCounterList() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x2bb>
+jmp    <T> <_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader+0x2d5>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnTakeScreenShot(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnTakeScreenShotEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  CDNFException *this;
  undefined4 local_53;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined2 local_47;
  PacketHeader local_45;
  string local_44 [7];
  allocator local_3d;
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808c516 to 0808c51a has its CatchHandler @ 0808c584 */
    std::string::string(local_44,"CPacketTranslater::OnTakeScreenShot : 0 == m_pclApp",&local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808c535 to 0808c539 has its CatchHandler @ 0808c53c */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0808c573 to 0808c577 has its CatchHandler @ 0808c57a */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808c5ba to 0808c692 has its CatchHandler @ 0808c698 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  local_53 = *(undefined4 *)param_1;
  local_4f = *(undefined4 *)(param_1 + 4);
  local_4b = *(undefined4 *)(param_1 + 8);
  local_47 = *(undefined2 *)(param_1 + 0xc);
  local_45 = param_1[0xe];
  if (param_1[10] == (PacketHeader)0x0) {
    CServerHandler::SendAllToGameServer
              (*(CServerHandler **)(m_pclApp + 0xa0),(char *)&local_53,
               (uint)*(ushort *)(param_1 + 2));
  }
  else {
    CServerHandler::_ZN14CServerHandler16SendToGameServerEhP12PacketHeader
              (*(CServerHandler **)(m_pclApp + 0xa0),(uchar)param_1[10],(PacketHeader *)&local_53);
  }
  uVar2 = *(undefined4 *)(local_24 + 0xb);
  PVar1 = local_24[10];
  CMyFileLog::CMyFileLog(local_3c,"OnTakeScreenShot",0x1710);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_3c,"./log/ScreenShot","Recv TakeScreenShot Command! channel(%d) time(%d)",
             (uint)(byte)PVar1,uVar2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4052 行）：

```cpp
void CPacketTranslater::OnTakeScreenShot(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            throw CDNFException("CPacketTranslater::OnTakeScreenShot : 0 == m_pclApp");
        }
        char buf[15];
        *(unsigned int*)buf = *(unsigned int*)pkt;
        *(unsigned int*)(buf + 4) = ((RA_UINT<4>*)pkt)->v;
        *(unsigned int*)(buf + 8) = ((RA_UINT<8>*)pkt)->v;
        *(unsigned short*)(buf + 0xc) = ((RA_U16<12>*)pkt)->v;
        *(char*)(buf + 0xe) = ((RA_S8<14>*)pkt)->v;
        CServerHandler* handler = m_pclApp->m_serverHandler2;
        if (((RA_S8<10>*)pkt)->v == 0)
        {
            handler->SendAllToGameServer(buf, ((RA_U16<2>*)pkt)->v);
        }
        else
        {
            handler->SendToGameServer(((RA_U8<10>*)pkt)->v,
                                      (PacketHeader*)buf);
        }
        DNF_LOG_SCOPE_LINE(0x1710,"./log/ScreenShot", "Recv TakeScreenShot Command! channel(%d) time(%d)",
            (unsigned int)(unsigned char)((RA_S8<10>*)pkt)->v,
            ((RA_UINT<11>*)pkt)->v);
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnTakeScreenShot() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1717, "./log/Except",
            "CPacketTranslater::OnResponseIPCounterList() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnTakeScreenShot() Exception Break");
        DNF_LOG_SCOPE_LINE(0x171d, "./log/Except",
            "CPacketTranslater::OnResponseIPCounterList() Exception Break\n");
    }
}
```
