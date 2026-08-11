# _ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader

`CPacketTranslater::OnSavePowerWarStatueRanker(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8099ab4` | `0x1dc` | `0x807fc80` | `0x1db` |

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
-jne    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xdc>
-lea    -0x31(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xe2>
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x31(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnSavePowerWarStatueRanker() : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xa4>
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xb9>
+jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0xfe>
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
 call   <T> <_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker>
-jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x1d3>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x17a>
+jne    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x179>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x8e4,0x8(%esp)
+movl   $"OnSavePowerWarStatueRanker",0x4(%esp)
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
-movl   $0x8e4,0x8(%esp)
-movl   $"OnSavePowerWarStatueRanker",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnSavePowerWarStatueRanker() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x172>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x1d3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x8e9,0x8(%esp)
 movl   $"OnSavePowerWarStatueRanker",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSavePowerWarStatueRanker() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x1cf>
+jmp    <T> <_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader+0x1ce>
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

/* CPacketTranslater::OnSavePowerWarStatueRanker(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnSavePowerWarStatueRankerEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08099aea to 08099aee has its CatchHandler @ 08099b58 */
    std::string::string(local_3c,"CPacketTranslater::OnSavePowerWarStatueRanker() : 0 == m_pclApp",
                        local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08099b09 to 08099b0d has its CatchHandler @ 08099b10 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 08099b47 to 08099b4b has its CatchHandler @ 08099b4e */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08099b8b to 08099bac has its CatchHandler @ 08099bb2 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  CDBManager::_ZN10CDBManager26OnSavePowerWarStatueRankerEP38Packet_DB_Save_Power_War_Statue_Ranker
            ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Save_Power_War_Statue_Ranker *)param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 856 行）：

```cpp
void CPacketTranslater::OnSavePowerWarStatueRanker(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnSavePowerWarStatueRanker() : 0 == m_pclApp"));
    try
    {
        m_pclApp->m_dbManager.OnSavePowerWarStatueRanker(
            (Packet_DB_Save_Power_War_Statue_Ranker*)header);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnSavePowerWarStatueRanker() Exception Break",
                  0x8e4, 0x8e9);
}
```
