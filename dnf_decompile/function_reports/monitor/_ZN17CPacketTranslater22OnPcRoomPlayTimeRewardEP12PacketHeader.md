# _ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader

`CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80916e4` | `0x1df` | `0x807cc36` | `0x1df` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,137 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xdc>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xa4>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xb9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x101>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0xa0(%eax),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d7>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x17d>
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
 mov    %eax,%ebx
 movl   $0x2017,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x176>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d7>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x201c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPcRoomPlayTimeReward Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader+0x1d2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater22OnPcRoomPlayTimeRewardEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809171a to 0809171e has its CatchHandler @ 08091788 */
    std::string::string(local_3c,"CPacketTranslater::OnPcRoomPlayTimeReward",local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08091739 to 0809173d has its CatchHandler @ 08091740 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 08091777 to 0809177b has its CatchHandler @ 0809177e */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080917bb to 080917df has its CatchHandler @ 080917e5 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  CServerHandler::SendToDB(*(CServerHandler **)(m_pclApp + 0xa0),param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5359 行）：

```cpp
void CPacketTranslater::OnPcRoomPlayTimeReward(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnPcRoomPlayTimeReward");
    }
    PacketHeader* rpkt = pkt;
    m_pclApp->m_serverHandler2->SendToDB(rpkt);


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x2017, "./log/Except", "CPacketTranslater::OnPcRoomPlayTimeReward Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x201c, "./log/Except", "CPacketTranslater::OnPcRoomPlayTimeReward Exception Break\n");
    }
}
```
