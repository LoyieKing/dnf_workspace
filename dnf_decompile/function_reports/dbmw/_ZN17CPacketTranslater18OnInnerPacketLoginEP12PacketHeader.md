# _ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809bef2` | `0x174` | `0x80daa26` | `0x176` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x4c>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x52>
 movl   $0xbfa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16d>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16f>
 mov    -0x10(%ebp),%eax
-mov    0x6(%eax),%ebx
+mov    0x6(%eax),%eax
+mov    %eax,%ebx
 movl   $0xc00,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogin (sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16d>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16f>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x113>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x115>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xc04,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x10c>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x10e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16d>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16f>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xc09,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x168>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16a>
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

/* CPacketTranslater::OnInnerPacketLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp == 0) {
                    /* try { // try from 0809bf19 to 0809bf83 has its CatchHandler @ 0809bf89 */
    CMyFileLog::CMyFileLog(local_34,"OnInnerPacketLogin",0xbfa);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/Except","CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
  }
  else {
    local_14 = param_1;
    uVar1 = *(undefined4 *)(param_1 + 6);
    CMyFileLog::CMyFileLog(local_2c,"OnInnerPacketLogin",0xc00);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/TcpServer","CPacketTranslater::OnInnerPacketLogin (sock:%d)",uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2584 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            DNF_LOG_SCOPE_LINE(0xbfa,
                "./log/Except",
                "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp"
            );

            return;
        }
        Packet_InnerPakcet_Login* pkt =
            (Packet_InnerPakcet_Login*)header;
            DNF_LOG_SCOPE_LINE(0xc00,
                "./log/TcpServer",
                "CPacketTranslater::OnInnerPacketLogin (sock:%d)",
            pkt->reversed2
        );

    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnInnerPacketLogin Exception Break",
                  0xc04, 0xc09);
}
```
