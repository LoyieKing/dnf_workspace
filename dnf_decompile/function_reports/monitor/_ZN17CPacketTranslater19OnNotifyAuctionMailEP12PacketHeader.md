# _ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader

`CPacketTranslater::OnNotifyAuctionMail(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8089be8` | `0xce` | `0x80752be` | `0xcc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader+0xc7>
+je     <T> <_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader+0xc5>
+mov    -0x10(%ebp),%ebx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,%edx
-mov    -0x10(%ebp),%eax
-mov    %edx,0xe(%eax)
+mov    %eax,0xe(%ebx)
 mov    -0x10(%ebp),%eax
 movl   $0x26,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader+0xc7>
+jmp    <T> <_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader+0xc5>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x137e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $&_ZZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeaderE12__FUNCTION__,0xc(%esp)
 movl   $"%s Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader+0xc2>
+jmp    <T> <_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader+0xc0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNotifyAuctionMail(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnNotifyAuctionMailEP12PacketHeader
               (PacketHeader *param_1)

{
  CUser *this;
  undefined4 uVar1;
  
                    /* try { // try from 08089c0c to 08089c4a has its CatchHandler @ 08089c4d */
  this = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
  if (this != (CUser *)0x0) {
    uVar1 = CUser::GetIdByChannel(this);
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    CUser::SendToGameserver(this,(char *)param_1,0x26);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3428 行）：

```cpp
void CPacketTranslater::OnNotifyAuctionMail(PacketHeader* pkt)
{
    try
    {
        PacketHeader* pkt2 = pkt;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                ((RA_UINT<10>*)pkt2)->v);
        if (user != 0)
        {
            ((RA_UINT<14>*)pkt2)->v = user->GetIdByChannel();
            user->SendToGameserver((char*)pkt2, 0x26);
        }
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x137e, "./log/Except", "%s Exception Break\n", __FUNCTION__);
    }
}
```
