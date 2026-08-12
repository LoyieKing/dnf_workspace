# _ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader

`CPacketTranslater::onUpdateLimitNpcBuyItemInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809ff46` | `0x158` | `0x80cfcd0` | `0x153` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,92 +1,90 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x150>
+je     <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x14b>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x151>
+je     <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x14c>
 movl   $0x134c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onUpdateLimitNpcBuyItemInfo data update fail\n",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x151>
+jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x14c>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0xf4>
+jne    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0xef>
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
 movl   $0x1352,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onUpdateLimitNpcBuyItemInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0xed>
+jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0xe8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x151>
+jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x14c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1357,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onUpdateLimitNpcBuyItemInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x149>
+jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x144>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x151>
+jmp    <T> <_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader+0x14c>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onUpdateLimitNpcBuyItemInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27onUpdateLimitNpcBuyItemInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
                    /* try { // try from 0809ff73 to 0809ffb8 has its CatchHandler @ 0809ffbe */
    cVar1 = CDBManager::_ZN10CDBManager25updateLimitNpcBuyItemInfoEP21LimitNpcBuyItemUpdate
                      ((CDBManager *)(m_pclApp + 0x50),(LimitNpcBuyItemUpdate *)param_1);
    if (cVar1 != '\x01') {
      CMyFileLog::CMyFileLog(local_2c,"onUpdateLimitNpcBuyItemInfo",0x134c);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/NpcBuyLimitItem",
                 "CPacketTranslater::onUpdateLimitNpcBuyItemInfo data update fail\n");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 121 行）：

```cpp
void CPacketTranslater::onUpdateLimitNpcBuyItemInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        if (!m_pclApp->m_dbManager.updateLimitNpcBuyItemInfo(
                (LimitNpcBuyItemUpdate*)header))
        {
            DNF_LOG_SCOPE_LINE(0x134c,
                "./log/NpcBuyLimitItem",
                "CPacketTranslater::onUpdateLimitNpcBuyItemInfo data update fail\n"
            );

            return;
        }
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::onUpdateLimitNpcBuyItemInfo Exception Break",
                  0x1352, 0x1357);
}
```
