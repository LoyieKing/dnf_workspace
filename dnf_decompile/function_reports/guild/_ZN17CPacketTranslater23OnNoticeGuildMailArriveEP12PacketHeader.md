# _ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader

`CPacketTranslater::OnNoticeGuildMailArrive(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807d15a` | `0x21f` | `0x8073614` | `0x254` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,155 +1,169 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xdf>
-lea    -0x39(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildMailArrive : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xa4>
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x141>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x146>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,-0x28(%ebp)
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x128>
-mov    -0x24(%ebp),%edx
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x12b>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
 mov    -0x28(%ebp),%eax
-mov    0xb(%eax,%edx,4),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x124>
+je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x127>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild18SendToGuildForMailEv>
 addl   $0x1,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 cmp    -0x24(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xee>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x217>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0xf9>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x24c>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1bd>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1e6>
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
-mov    %eax,%ebx
+mov    %eax,0x4(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n",(%esp)
+call   <T> <printf>
 movl   $0xe10,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1b6>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1df>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x217>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x24c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
+movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break",(%esp)
+call   <T> <puts>
 movl   $0xe15,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x212>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x247>
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

/* CPacketTranslater::OnNoticeGuildMailArrive(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  int local_28;
  CGuild *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807d190 to 0807d194 has its CatchHandler @ 0807d1fe */
    std::string::string(local_44,"CPacketTranslater::OnNoticeGuildMailArrive : 0 == m_pclApp",
                        local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807d1af to 0807d1b3 has its CatchHandler @ 0807d1b6 */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0807d1ed to 0807d1f1 has its CatchHandler @ 0807d1f4 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807d234 to 0807d27d has its CatchHandler @ 0807d29b */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  for (local_28 = 0; local_28 < (int)(uint)(byte)local_2c[10]; local_28 = local_28 + 1) {
    local_24 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_24 != (CGuild *)0x0) {
      CGuild::SendToGuildForMail(local_24);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2747 行）：

```cpp
void CPacketTranslater::OnNoticeGuildMailArrive(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildMailArrive : 0 == m_pclApp");
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    for (int i = 0; i < (int)(unsigned int)(unsigned char)pb[10]; i++)
    {
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild != 0)
        {
            guild->SendToGuildForMail();
        }
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n", e.what());
        CMyFileLog log(__FUNCTION__, 0xe10);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildMailArrive() Exception Break");
        CMyFileLog log(__FUNCTION__, 0xe15);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildMailArrive() Exception Break\n");
    }
}
```
