# _ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader

`CPacketTranslater::OnDisableUserOneToOneChat_GM(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808d440` | `0xf7` | `0x8078a9a` | `0xf9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,77 +1,78 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xf2>
 mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xf0>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication19isGM_regFromChannelEj>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xf0>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xf2>
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 lea    0x12(%eax),%edx
 lea    -0x11(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x10(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
 mov    %eax,-0xc(%ebp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xb8>
+jmp    <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xbd>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0x9d>
+jmp    <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xa2>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x11(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xf0>
+je     <T> <_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader+0xf2>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x10(%ebp),%edx
-mov    0xa(%edx),%ecx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 mov    %eax,0x8(%esp)
-mov    %ecx,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CApplication21DisableChatUserWithGMEjj>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDisableUserOneToOneChat_GM(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnDisableUserOneToOneChat_GMEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  string local_1c [7];
  allocator local_15;
  PacketHeader *local_14;
  CUser *local_10;
  
  local_14 = param_1;
  if (m_pclApp != 0) {
    cVar1 = CApplication::_ZN12CApplication19isGM_regFromChannelEj(m_pclApp);
    if (cVar1 != '\0') {
      std::allocator<char>::allocator();
                    /* try { // try from 0808d49c to 0808d4a0 has its CatchHandler @ 0808d4dd */
      std::string::string(local_1c,(char *)(local_14 + 0x12),&local_15);
                    /* try { // try from 0808d4b3 to 0808d4b7 has its CatchHandler @ 0808d4c8 */
      local_10 = (CUser *)CUserManager::FindUser_CharName(m_pclApp + 0x10,local_1c);
                    /* try { // try from 0808d4c1 to 0808d4c5 has its CatchHandler @ 0808d4dd */
      std::string::~string(local_1c);
      std::allocator<char>::~allocator((allocator<char> *)&local_15);
      if (local_10 != (CUser *)0x0) {
        CUser::GetUniqCharNo(local_10);
        CApplication::_ZN12CApplication21DisableChatUserWithGMEjj(m_pclApp,*(uint *)(local_14 + 10))
        ;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4341 行）：

```cpp
void CPacketTranslater::OnDisableUserOneToOneChat_GM(PacketHeader* pkt)
{
    if (m_pclApp != 0)
    {
        unsigned int channel = ((RA_UINT<10>*)pkt)->v;
        if (m_pclApp->isGM_regFromChannel(channel) != 0)
        {
            CUser* target =
                ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharName((char*)pkt + 0x12);
            if (target != 0)
            {
                m_pclApp->DisableChatUserWithGM(channel, target->GetUniqCharNo());
            }
        }
    }
}
```
