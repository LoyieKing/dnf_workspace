# _ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader

`CPacketTranslater::OnNoticeGuildWarPointChange(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8076014` | `0x23c` | `0x806c800` | `0x266` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,165 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildWarStart : 0 == m_pclApp",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0xa4>
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x158>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x290,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11GetGuildWarEv>
 mov    %eax,-0x24(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar17IsGuildWarEventOnEv>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x230>
+je     <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x25e>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar24IsGuildWarEnterableGuildEj>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x233>
+je     <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x25e>
 mov    -0x20(%ebp),%eax
-movzbl 0xe(%eax),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
 movsbl %al,%edx
 mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar16AddGuildWarPointEji>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x25e>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1d4>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1f8>
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
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n",(%esp)
+call   <T> <printf>
 movl   $0x705,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
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
 movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1cd>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1f1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x25e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break",(%esp)
+call   <T> <puts>
 movl   $0x70a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x229>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x259>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
-nop
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
-nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildWarPointChange(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CDNFException *this;
  string local_40 [7];
  allocator local_39 [17];
  CGuildWar *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp != 0) {
    local_28 = (CGuildWar *)CGuildManager::GetGuildWar((CGuildManager *)(m_pclApp + 0x290));
    cVar1 = CGuildWar::IsGuildWarEventOn(local_28);
    if (cVar1 == '\x01') {
      local_24 = param_1;
      cVar1 = CGuildWar::IsGuildWarEnterableGuild(local_28,*(uint *)(param_1 + 10));
      if (cVar1 == '\x01') {
        CGuildWar::AddGuildWarPoint(local_28,*(uint *)(local_24 + 10),(int)(char)local_24[0xe]);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0807604a to 0807604e has its CatchHandler @ 080760b8 */
  std::string::string(local_40,"CPacketTranslater::OnNoticeGuildWarStart : 0 == m_pclApp",local_39);
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08076069 to 0807606d has its CatchHandler @ 08076070 */
  CDNFException::CDNFException(this,local_40);
                    /* try { // try from 080760a7 to 080760ab has its CatchHandler @ 080760ae */
  std::string::~string(local_40);
  std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080760ee to 08076166 has its CatchHandler @ 0807616c */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1356 行）：

```cpp
void CPacketTranslater::OnNoticeGuildWarPointChange(PacketHeader* pkt)
{
    try
    {
    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeGuildWarStart : 0 == m_pclApp");
    }
    CGuildWar* war = (&m_pclApp->m_guildManager)->GetGuildWar();
    if (war->IsGuildWarEventOn() == 1)
    {
        char* pb = (char*)pkt;
        if (war->IsGuildWarEnterableGuild(*(unsigned int*)(pb + 0xa)) == 1)
        {
            war->AddGuildWarPoint(*(unsigned int*)(pb + 0xa), (int)(char)pb[0xe]);
        }
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n", e.what());
        CMyFileLog log(__FUNCTION__, 0x705);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildWarEnd Exception Break");
        CMyFileLog log(__FUNCTION__, 0x70a);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildWarEnd Exception Break\n");
    }
}
```
