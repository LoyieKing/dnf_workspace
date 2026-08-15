# _ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader

`CPacketTranslater::OnFileStatistic(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x805fab4` | `0x1ba` | `0x805a4d6` | `0x1ba` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,127 +1,127 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x22(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"./log/",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x4d>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0xdd>
 lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    -0x10(%ebp),%eax
 add    $0xa,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x7a>
 movl   $"filestatics",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs6appendEPKc>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x8f>
 mov    -0x10(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSs6appendEPKc>
 mov    -0x10(%ebp),%eax
 lea    0x10a(%eax),%ebx
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CMyRawFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0xcd>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0xdd>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x1b3>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x159>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x605,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnFileStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnFileStatistic() Exception Break : %s",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x152>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x1b3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x60a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnFileStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnFileStatistic() Exception Break",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader+0x1ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnFileStatistic(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader *pPVar1;
  char *pcVar2;
  string local_2c [6];
  allocator local_26;
  CMyRawFileLog local_25 [17];
  PacketHeader *local_14;
  
  local_14 = param_1;
  std::allocator<char>::allocator();
                    /* try { // try from 0805fae2 to 0805fae6 has its CatchHandler @ 0805fae9 */
  std::string::string(local_2c,"./log/",&local_26);
  std::allocator<char>::~allocator((allocator<char> *)&local_26);
  if (local_14[10] == (PacketHeader)0x0) {
                    /* try { // try from 0805fb27 to 0805fb69 has its CatchHandler @ 0805fb6c */
    std::string::append(local_2c,"filestatics");
  }
  else {
    std::string::append(local_2c,(char *)(local_14 + 10));
  }
  pPVar1 = local_14 + 0x10a;
  pcVar2 = (char *)std::string::c_str(local_2c);
  CMyRawFileLog::_ZN13CMyRawFileLogclEPKcS1_z(local_25,pcVar2,(char *)pPVar1);
                    /* try { // try from 0805fb87 to 0805fb8b has its CatchHandler @ 0805fb91 */
  std::string::~string(local_2c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp)（约第 977 行）：

```cpp
void CPacketTranslater::OnFileStatistic(PacketHeader* pkt)
{
    try
    {
        char* pb = (char*)pkt;
        std::string path("./log/");
        if (pb[10] == 0)
        {
            path.append("filestatics");
        }
        else
        {
            path.append(pb + 10);
        }
        CMyRawFileLog()(path.c_str(), pb + 0x10a);

    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog(__FUNCTION__, 1541)("./log/Except", "CPacketTranslater::OnFileStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog(__FUNCTION__, 1546)("./log/Except", "CPacketTranslater::OnFileStatistic() Exception Break");
    }
}
```
