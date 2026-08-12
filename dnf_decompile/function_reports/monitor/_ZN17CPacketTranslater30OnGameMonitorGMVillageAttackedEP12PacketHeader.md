# _ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader

`CPacketTranslater::OnGameMonitorGMVillageAttacked(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808e168` | `0x1fc` | `0x8079842` | `0x1f6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,147 +1,145 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0xdc>
-lea    -0x31(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x31(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnGameMonitorGMVillageAttacked : 0 == m_pclApp",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x38(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0xa4>
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0xb9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x31(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x11e>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x118>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x114>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0xf1>
+call   <T> <_ZN16village_attacked13SetRealConfigEv>
+jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1ee>
+mov    0x8(%ebp),%eax
 mov    0x13(%eax),%ecx
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xf(%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0xb(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked11SetGMConfigEjjj>
-jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1f4>
-call   <T> <_ZN16village_attacked13SetRealConfigEv>
-jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1f4>
+jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1ee>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x19a>
+jne    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x194>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1bbd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGameMonitorGMVillageAttacked Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x193>
+jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x18d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1f4>
+jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1ee>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1bc2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGameMonitorGMVillageAttacked Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1ef>
+jmp    <T> <_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader+0x1e9>
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

/* CPacketTranslater::OnGameMonitorGMVillageAttacked(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30OnGameMonitorGMVillageAttackedEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808e19e to 0808e1a2 has its CatchHandler @ 0808e20c */
    std::string::string(local_3c,"CPacketTranslater::OnGameMonitorGMVillageAttacked : 0 == m_pclApp"
                        ,local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808e1bd to 0808e1c1 has its CatchHandler @ 0808e1c4 */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 0808e1fb to 0808e1ff has its CatchHandler @ 0808e202 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808e23f to 0808e280 has its CatchHandler @ 0808e286 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (param_1[10] == (PacketHeader)0x0) {
    village_attacked::_ZN16village_attacked13SetRealConfigEv();
  }
  else {
    village_attacked::_ZN16village_attacked11SetGMConfigEjjj
              (*(uint *)(param_1 + 0xb),*(uint *)(param_1 + 0xf),*(uint *)(param_1 + 0x13));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4632 行）：

```cpp
void CPacketTranslater::OnGameMonitorGMVillageAttacked(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnGameMonitorGMVillageAttacked : 0 == m_pclApp");
    }
    if (((RA_S8<10>*)pkt)->v == 0)
    {
        village_attacked::SetRealConfig();
    }
    else
    {
        village_attacked::SetGMConfig(((RA_UINT<11>*)pkt)->v,
                                      ((RA_UINT<15>*)pkt)->v,
                                      ((RA_UINT<19>*)pkt)->v);
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1bbd, "./log/Except", "CPacketTranslater::OnGameMonitorGMVillageAttacked Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1bc2, "./log/Except", "CPacketTranslater::OnGameMonitorGMVillageAttacked Exception Break\n");
    }
}
```
