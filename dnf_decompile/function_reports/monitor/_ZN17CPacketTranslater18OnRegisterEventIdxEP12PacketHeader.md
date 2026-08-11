# _ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader

`CPacketTranslater::OnRegisterEventIdx(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808d9e8` | `0x16a` | `0x8078fcc` | `0x168` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,96 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%esi
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%ebx
 movl   $0x1a15,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"OnRegisterEventIdx:result =%d, Eventidx =%d",0x8(%esp)
 movl   $"./log/OnTimeEvent",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x163>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%edx
+je     <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x161>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
+add    $0x320,%eax
+mov    (%eax),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19COnTimeEventManager11SetEventIdxEj>
-jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x163>
+jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x161>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x109>
+jne    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x107>
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
 movl   $0x1a1e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x102>
+jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x100>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x163>
+jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x161>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1a23,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x15e>
+jmp    <T> <_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader+0x15c>
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

/* CPacketTranslater::OnRegisterEventIdx(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnRegisterEventIdxEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  CMyFileLog local_2c [24];
  PacketHeader *local_14;
  
  local_14 = param_1;
  uVar2 = *(undefined4 *)(param_1 + 10);
  PVar1 = param_1[0xe];
                    /* try { // try from 0808da1c to 0808da43 has its CatchHandler @ 0808da75 */
  CMyFileLog::CMyFileLog(local_2c,"OnRegisterEventIdx",0x1a15);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_2c,"./log/OnTimeEvent","OnRegisterEventIdx:result =%d, Eventidx =%d",
             (uint)(byte)PVar1,uVar2);
  if (local_14[0xe] != (PacketHeader)0x0) {
    COnTimeEventManager::SetEventIdx
              (*(COnTimeEventManager **)(m_pclApp + 800),*(uint *)(local_14 + 10));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4425 行）：

```cpp
void CPacketTranslater::OnRegisterEventIdx(PacketHeader* pkt)
{try
{


    unsigned int idx = ((RA_UINT<10>*)pkt)->v;
    DNF_LOG_SCOPE_LINE(0x1a15,"./log/OnTimeEvent", "OnRegisterEventIdx:result =%d, Eventidx =%d",
        (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v, idx);
    if (((RA_S8<14>*)pkt)->v != 0)
    {
        ((COnTimeEventManager*)*(void**)((char*)m_pclApp + 800))->SetEventIdx(idx);
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1a1e, "./log/Except", "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x1a23, "./log/Except", "CPacketTranslater::OnResultLoadPeriodicMessage Exception Break\n");
    }
}
```
