# _ZN17CPacketTranslater22RequestBlackListToDBMWEj

`CPacketTranslater::RequestBlackListToDBMW(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807e712` | `0x116` | `0x8074dd2` | `0x123` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,78 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-lea    -0x2b(%ebp),%eax
+lea    -0x1b(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_DBMW_Request_BlackListC1Ev>
+lea    -0x1b(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %eax,-0x21(%ebp)
-movb   $0xcb,-0x1d(%ebp)
+mov    %eax,(%edx)
+lea    -0x1b(%ebp),%eax
+add    $0xb,%eax
+movb   $0xcb,(%eax)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0x2b(%ebp),%edx
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x1b(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x10f>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x11c>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xb5>
+jne    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xc2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0xfe7,0x8(%esp)
+movl   $"RequestBlackListToDBMW",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0xfe7,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater22RequestBlackListToDBMWEjE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::RequestBlackListToDBMW Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xae>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0xbb>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x10f>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x11c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xfec,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater22RequestBlackListToDBMWEjE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::RequestBlackListToDBMW Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x10a>
+jmp    <T> <_ZN17CPacketTranslater22RequestBlackListToDBMWEj+0x117>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::RequestBlackListToDBMW(unsigned int) */

void CPacketTranslater::_ZN17CPacketTranslater22RequestBlackListToDBMWEj(uint param_1)

{
  Packet_DBMW_Request_BlackList local_2f [10];
  uint local_25;
  undefined1 local_21;
  
  Packet_DBMW_Request_BlackList::Packet_DBMW_Request_BlackList(local_2f);
  local_25 = param_1;
  local_21 = 0xcb;
                    /* try { // try from 0807e741 to 0807e745 has its CatchHandler @ 0807e74b */
  CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
            (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_2f);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2902 行）：

```cpp
void CPacketTranslater::RequestBlackListToDBMW(unsigned int charNo)
{
    try
    {
        Packet_DBMW_Request_BlackList pkt;
        *(unsigned int*)((char*)&pkt + 0xa) = charNo;
        *(unsigned char*)((char*)&pkt + 0xb) = 0xcb;
        m_pclApp->Get_ServerHandler()->SendToDB(&pkt);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("RequestBlackListToDBMW", 0xfe7);
        log("./log/Except",
            "CPacketTranslater::RequestBlackListToDBMW Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xfec);
        log("./log/Except", "CPacketTranslater::RequestBlackListToDBMW Exception Break\n");
    }
}
```
