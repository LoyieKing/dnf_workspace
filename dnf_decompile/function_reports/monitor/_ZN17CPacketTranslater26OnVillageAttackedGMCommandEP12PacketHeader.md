# _ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader

`CPacketTranslater::OnVillageAttackedGMCommand(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808c90c` | `0x11a` | `0x8077eea` | `0x105` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-mov    -0x18(%ebp),%eax
 mov    0xe(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0x113>
+jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0xfe>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0xa4>
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
 movl   $0x1764,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnVillageAttackedGMCommand() Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+movl   $"%s",0x4(%esp)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0xb2>
+jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0x9d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0x113>
+jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0xfe>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1769,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnVillageAttackedGMCommand() Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+movl   $"%s",0x4(%esp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0x10e>
+jmp    <T> <_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader+0xf9>
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

/* CPacketTranslater::OnVillageAttackedGMCommand(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnVillageAttackedGMCommandEP12PacketHeader
               (PacketHeader *param_1)

{
                    /* try { // try from 0808c93c to 0808c940 has its CatchHandler @ 0808c949 */
  CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4110 行）：

```cpp
void CPacketTranslater::OnVillageAttackedGMCommand(PacketHeader* pkt)
{
    try
    {
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
            ((RA_UINT<14>*)pkt)->v);
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1764,"%s", "CPacketTranslater::OnVillageAttackedGMCommand() Exception Break : %s\n",
            e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1769, "%s", "CPacketTranslater::OnVillageAttackedGMCommand() Exception Break\n");
    }
}
```
