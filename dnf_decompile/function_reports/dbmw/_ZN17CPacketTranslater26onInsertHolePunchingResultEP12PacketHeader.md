# _ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader

`CPacketTranslater::onInsertHolePunchingResult(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a0ff4` | `0x17e` | `0x80d5d58` | `0x179` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,95 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 movl   $0x15bd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onInsertHolePunchingResult.\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x177>
+je     <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x172>
 movl   $0x15c0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::insertHolePunchingResult fail\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x177>
+jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x172>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x11d>
+jne    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x118>
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
 movl   $0x15c6,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onInsertHolePunchingResult Exception Break : %s\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x116>
+jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x111>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x177>
+jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x172>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x15cb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onInsertHolePunchingResult Exception Break\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x172>
+jmp    <T> <_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader+0x16d>
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

/* CPacketTranslater::onInsertHolePunchingResult(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26onInsertHolePunchingResultEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  local_14 = param_1;
                    /* try { // try from 080a1018 to 080a108f has its CatchHandler @ 080a1095 */
  CMyFileLog::CMyFileLog(local_34,"onInsertHolePunchingResult",0x15bd);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_34,"./log/AradOnly","CPacketTranslater::onInsertHolePunchingResult.\n");
  cVar1 = CDBManager::
          _ZN10CDBManager24insertHolePunchingResultEP38Packet_GameServer2Statisctics2DBServer
                    ((CDBManager *)(m_pclApp + 0x50),
                     (Packet_GameServer2Statisctics2DBServer *)local_14);
  if (cVar1 != '\x01') {
    CMyFileLog::CMyFileLog(local_2c,"onInsertHolePunchingResult",0x15c0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_2c,"./log/AradOnly","CPacketTranslater::insertHolePunchingResult fail\n");
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1478 行）：

```cpp
void CPacketTranslater::onInsertHolePunchingResult(PacketHeader* header)
{
    try
    {
        DNF_LOG_SCOPE_LINE(0x15bd,
            "./log/AradOnly",
            "CPacketTranslater::onInsertHolePunchingResult.\n"
        );

        if (!m_pclApp->m_dbManager.insertHolePunchingResult(
                (Packet_GameServer2Statisctics2DBServer*)header))
        {
            CMyFileLog log2(__FUNCTION__, 0x15c0);
            log2("./log/AradOnly",
                 "CPacketTranslater::insertHolePunchingResult fail\n");
            return;
        }
    }
    DNF_CATCH_LOG("./log/AradOnly",
                  "CPacketTranslater::onInsertHolePunchingResult Exception Break",
                  0x15c6, 0x15cb);
}
```
