# _ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader

`CPacketTranslater::OnInsertUpdate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809fc90` | `0x10e` | `0x808a264` | `0x109` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,74 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x106>
+je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x101>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x50,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x107>
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x107>
+mov    %al,-0xd(%ebp)
+cmpb   $0x1,-0xd(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x102>
+cmpl   $0x0,0x8(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x102>
 movl   $0x1318,0x8(%esp)
 movl   $"OnInsertUpdate",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::PacketInsertUpdate Error",0x8(%esp)
 movl   $"./log/statistic",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x107>
+jmp    <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x102>
 cmp    $0x1,%edx
-je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x8f>
+je     <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x8c>
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x131d,0x8(%esp)
+movl   $"OnInsertUpdate",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x131d,0x8(%esp)
-movl   $"OnInsertUpdate",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::PacketInsertUpdate() Exception Break : %s",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0xff>
+jmp    <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0xfa>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x107>
+jmp    <T> <_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader+0x102>
 nop
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnInsertUpdate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater14OnInsertUpdateEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CMyFileLog local_24 [16];
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
                    /* try { // try from 0809fcbd to 0809fd0c has its CatchHandler @ 0809fd12 */
    cVar1 = CDBManager::_ZN10CDBManager17QueryInsertUpdateEP18PacketInsertUpdate
                      ((CDBManager *)(m_pclApp + 0x50),(PacketInsertUpdate *)param_1);
    if ((cVar1 != '\x01') && (local_14 != (PacketHeader *)0x0)) {
      CMyFileLog::CMyFileLog(local_24,"OnInsertUpdate",0x1318);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/statistic","CPacketTranslater::PacketInsertUpdate Error");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 3052 行）：

```cpp
void CPacketTranslater::OnInsertUpdate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        char ok = m_pclApp->m_dbManager.QueryInsertUpdate(
            (PacketInsertUpdate*)header);
        if (ok != 1 && header)
        {
            CMyFileLog log("OnInsertUpdate", 0x1318);
            log("./log/statistic",
                "CPacketTranslater::PacketInsertUpdate Error");
        }
    }
    DNF_CATCH_LOG_CDNF("./log/Except.log",
                       "CPacketTranslater::PacketInsertUpdate() Exception Break",
                       0x131d);
}
```
