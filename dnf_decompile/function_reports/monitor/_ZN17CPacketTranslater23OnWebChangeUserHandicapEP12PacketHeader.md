# _ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader

`CPacketTranslater::OnWebChangeUserHandicap(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8088328` | `0xca` | `0x8073698` | `0xb3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0x4d>
+jne    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0x47>
 movl   $0x1127,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebChangeUserHandicap : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/hack",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc8>
-movl   $0x0,-0x10(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
+jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xb1>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager8FindUserEj>
 mov    %eax,-0xc(%ebp)
-mov    -0x14(%ebp),%eax
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xb1>
+lea    -0x2a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN27Packet_Change_User_HandicapC1Ev>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x2a(%ebp),%eax
+movzwl 0x2(%eax),%eax
+movzwl %ax,%edx
+lea    -0x2a(%ebp),%eax
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc7>
-lea    -0x32(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN27Packet_Change_User_HandicapC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x20(%ebp)
-movzwl -0x30(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x32(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc8>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnWebChangeUserHandicap(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_Change_User_Handicap local_36 [2];
  ushort local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CMyFileLog local_20 [8];
  PacketHeader *local_18;
  CUser *local_14;
  uint local_10;
  
  local_18 = param_1;
  if (m_pclApp == 0) {
    CMyFileLog::CMyFileLog(local_20,"OnWebChangeUserHandicap",0x1127);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_20,"./log/hack","CPacketTranslater::OnWebChangeUserHandicap : 0 == m_pclApp");
  }
  else {
    local_14 = (CUser *)0x0;
    local_10 = m_pclApp + 0x10;
    local_14 = (CUser *)CUserManager::FindUser(local_10);
    if (local_14 != (CUser *)0x0) {
      Packet_Change_User_Handicap::Packet_Change_User_Handicap(local_36);
      local_2c = *(undefined4 *)(local_18 + 10);
      local_28 = *(undefined4 *)(local_18 + 0xe);
      local_24 = *(undefined4 *)(local_18 + 0x12);
      CUser::SendToGameserver(local_14,(char *)local_36,(uint)local_34);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2956 行）：

```cpp
void CPacketTranslater::OnWebChangeUserHandicap(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1127, "./log/hack", "CPacketTranslater::OnWebChangeUserHandicap : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                ((RA_UINT<10>*)pkt)->v);
        if (user != 0)
        {
            Packet_Change_User_Handicap reply;
            reply.m_fieldA = ((RA_UINT<10>*)pkt)->v;
            reply.m_fieldE = ((RA_UINT<14>*)pkt)->v;
            reply.m_field12 = ((RA_UINT<18>*)pkt)->v;
            user->SendToGameserver((char*)&reply, ((RA_U16<2>*)&reply)->v);
        }
    }
}
```
