# _ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader

`CPacketTranslater::OnNotifyNewMail(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808508c` | `0xd8` | `0x806fc22` | `0xd1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x10,%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader+0xca>
+mov    -0x14(%ebp),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader+0xd1>
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
+mov    %eax,0xe(%ebx)
 mov    -0x14(%ebp),%eax
 movl   $0x12,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader+0xd1>
+jmp    <T> <_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader+0xca>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xb66,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $&_ZZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader+0xcc>
+jmp    <T> <_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader+0xc5>
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

/* CPacketTranslater::OnNotifyNewMail(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnNotifyNewMailEP12PacketHeader
               (PacketHeader *param_1)

{
  CUser *this;
  undefined4 uVar1;
  
                    /* try { // try from 080850b5 to 080850f8 has its CatchHandler @ 080850fb */
  this = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (this != (CUser *)0x0) {
    uVar1 = CUser::GetIdByChannel(this);
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    CUser::SendToGameserver(this,(char *)param_1,0x12);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1849 行）：

```cpp
void CPacketTranslater::OnNotifyNewMail(PacketHeader* pkt)
{
    try
    {
        PacketHeader* pkt2 = pkt;
        CUserManager* mgr = (CUserManager*)((char*)m_pclApp + 0x10);
        CUser* user = mgr->FindUser_CharNo(((RA_UINT<10>*)pkt2)->v);
        if (user != 0)
        {
            ((RA_UINT<14>*)pkt2)->v = user->GetIdByChannel();
            user->SendToGameserver((char*)pkt2, 0x12);
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xb66, "./log/Except", "%s Exception Break\n", __FUNCTION__);
    }
}
```
