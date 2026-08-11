# _ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader

`CPacketTranslater::OnSavePowerWarPointReward(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80998d8` | `0x1dc` | `0x807fe5c` | `0x1db` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,135 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xdc>
-lea    -0x31(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xe2>
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x31(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnSavePowerWarPoint() : 0 == m_pclApp",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x38(%ebp),%esi
+lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xa4>
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xb9>
+jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0xfe>
-lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward>
-jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x1d3>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x17a>
+jne    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x179>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x8cb,0x8(%esp)
+movl   $"OnSavePowerWarPointReward",0x4(%esp)
+lea    -0x2c(%ebp),%eax
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
-movl   $0x8cb,0x8(%esp)
-movl   $"OnSavePowerWarPointReward",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSavePowerWarPoint() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x172>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x1d3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x8d0,0x8(%esp)
 movl   $"OnSavePowerWarPointReward",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSavePowerWarPoint() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader+0x1ce>
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

/* CPacketTranslater::OnSavePowerWarPointReward(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnSavePowerWarPointRewardEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809990e to 08099912 has its CatchHandler @ 0809997c */
    std::string::string(local_3c,"CPacketTranslater::OnSavePowerWarPoint() : 0 == m_pclApp",local_35
                       );
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809992d to 08099931 has its CatchHandler @ 08099934 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 0809996b to 0809996f has its CatchHandler @ 08099972 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080999af to 080999d0 has its CatchHandler @ 080999d6 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  CDBManager::_ZN10CDBManager25OnSavePowerWarPointRewardEP37Packet_DB_Save_Power_War_Point_Reward
            ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Save_Power_War_Point_Reward *)param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 870 行）：

```cpp
void CPacketTranslater::OnSavePowerWarPointReward(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarPoint() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.OnSavePowerWarPointReward(
            (Packet_DB_Save_Power_War_Point_Reward*)header);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnSavePowerWarPoint() Exception Break",
                  0x8cb, 0x8d0);
}
```
