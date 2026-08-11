# _ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader

`CPacketTranslater::OnClientSpecStatistic(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x805a43e` | `0x25d` | `0x8054ec8` | `0x266` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,175 +1,180 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0xdf>
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnClientSpecStatistic : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0xa4>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x17f>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x188>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication18Get_HWspecResearchEv>
 mov    %eax,-0x24(%ebp)
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x134>
+jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x135>
 mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    $0x10,%eax
+add    $0x12,%eax
 add    -0x28(%ebp),%eax
-lea    0x2(%eax),%edx
+mov    %eax,%edx
 mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec>
 addl   $0x1,-0x20(%ebp)
 mov    -0x28(%ebp),%eax
-movzbl 0xb(%eax),%eax
+add    $0xb,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 cmp    -0x20(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0xfe>
 mov    -0x28(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x255>
+jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x25e>
 mov    -0x28(%ebp),%eax
-mov    0xc(%eax),%edx
+add    $0xc,%eax
+mov    (%eax),%edx
 mov    -0x28(%ebp),%eax
-movzwl 0x10(%eax),%eax
+add    $0x10,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CHWSpecResearcher21WriteErrorLineStaticsEti>
-jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x255>
+jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x25e>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x1fb>
+jne    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x204>
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
 mov    %eax,%ebx
 movl   $0xfe,0x8(%esp)
 movl   $"OnClientSpecStatistic",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnClientSpecStatistic() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x1f4>
+jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x1fd>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x255>
+jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x25e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x103,0x8(%esp)
 movl   $"OnClientSpecStatistic",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnClientSpecStatistic() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x250>
+jmp    <T> <_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader+0x259>
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

/* CPacketTranslater::OnClientSpecStatistic(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_44 [7];
  allocator local_3d [17];
  PacketHeader *local_2c;
  CHWSpecResearcher *local_28;
  int local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805a474 to 0805a478 has its CatchHandler @ 0805a4e2 */
    std::string::string(local_44,"CPacketTranslater::OnClientSpecStatistic : 0 == m_pclApp",local_3d
                       );
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805a493 to 0805a497 has its CatchHandler @ 0805a49a */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 0805a4d1 to 0805a4d5 has its CatchHandler @ 0805a4d8 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805a518 to 0805a5b7 has its CatchHandler @ 0805a5bd */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  local_28 = (CHWSpecResearcher *)CApplication::Get_HWspecResearch(m_pclApp);
  for (local_24 = 0; local_24 < (int)(uint)(byte)local_2c[0xb]; local_24 = local_24 + 1) {
    CHWSpecResearcher::_ZN17CHWSpecResearcher16WriteSpecStaticsEhRK6HWSpec
              (local_28,(uchar)local_2c[10],(HWSpec *)(local_2c + local_24 * 0xc + 0x12));
  }
  if (local_2c[10] == (PacketHeader)0x1) {
    CHWSpecResearcher::WriteErrorLineStatics
              (local_28,*(ushort *)(local_2c + 0x10),*(int *)(local_2c + 0xc));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp)（约第 71 行）：

```cpp
void CPacketTranslater::OnClientSpecStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnClientSpecStatistic : 0 == m_pclApp")
        char* pb = (char*)pkt;
        CHWSpecResearcher* hw = m_pclApp->Get_HWspecResearch();
        for (int i = 0; i < (int)(unsigned char)pb[0xb]; i++)
        {
            hw->WriteSpecStatics(pb[10], *(HWSpec*)(pb + i * 0xc + 0x12));
        }
        if (pb[10] == 1)
        {
            hw->WriteErrorLineStatics(*(unsigned short*)(pb + 0x10), *(int*)(pb + 0xc));
        }

    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog log("OnClientSpecStatistic", 254);
        log("./log/Except", "CPacketTranslater::OnClientSpecStatistic() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog log("OnClientSpecStatistic", 259);
        log("./log/Except", "CPacketTranslater::OnClientSpecStatistic() Exception Break\n");
    }
}
```
