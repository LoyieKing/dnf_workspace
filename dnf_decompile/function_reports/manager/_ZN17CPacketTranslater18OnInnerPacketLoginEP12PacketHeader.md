# _ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader

`CPacketTranslater::OnInnerPacketLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8066178` | `0x174` | `0x805ab2e` | `0x16e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,95 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x4c>
 movl   $0x1f0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16d>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0x6(%eax),%ebx
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x167>
 movl   $0x1f6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+add    $0x6,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogin (sock:%d)",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16d>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x167>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x113>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x10d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x1fa,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
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
-movl   $0x1fa,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x10c>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x106>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x16d>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x167>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1ff,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnInnerPacketLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x168>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x162>
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
                    /* try { // try from 0806619f to 08066209 has its CatchHandler @ 0806620f */
    CMyFileLog::CMyFileLog(local_34,"OnInnerPacketLogin",0x1f0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/Except","CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
  }
  else {
    local_14 = param_1;
    uVar1 = *(undefined4 *)(param_1 + 6);
    CMyFileLog::CMyFileLog(local_2c,"OnInnerPacketLogin",0x1f6);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/TcpServer","CPacketTranslater::OnInnerPacketLogin (sock:%d)",uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Manager/DNFPacketTranslater.cpp)（约第 152 行）：

```cpp
void CPacketTranslater::OnInnerPacketLogin(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
        {
            CMyFileLog log(__FUNCTION__, 0x1f0);
            log("./log/Except", "CPacketTranslater::OnInnerPacketLogin : 0 == m_pclApp");
            return;
        }
        CMyFileLog log(__FUNCTION__, 0x1f6);
        log("./log/TcpServer", "CPacketTranslater::OnInnerPacketLogin (sock:%d)",
            *(int*)((char*)header + 6));
    }
    catch (CDNFException& e)
    {
        CMyFileLog log(__FUNCTION__, 0x1fa);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1ff);
        log("./log/Except", "CPacketTranslater::OnInnerPacketLogin Exception Break\n");
    }
}
```
