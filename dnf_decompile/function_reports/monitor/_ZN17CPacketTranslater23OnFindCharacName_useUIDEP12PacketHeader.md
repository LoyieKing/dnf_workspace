# _ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader

`CPacketTranslater::OnFindCharacName_useUID(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808d566` | `0x112` | `0x8078afe` | `0x156` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,106 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
-mov    0x6(%eax),%edx
+mov    0xe(%eax),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17FindTcpGameServerEj>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0x10c>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0x150>
 movl   $0x34,0x8(%esp)
 movl   $0x1f45,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %edx,0xa(%eax)
+lea    0xa(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
 mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %edx,0xe(%eax)
-mov    -0x10(%ebp),%eax
-movl   $0x0,0x12(%eax)
+lea    0xe(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
 mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
+add    $0x12,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x13,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x14,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x15,%eax
+movb   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0xfa>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0x13e>
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    -0x10(%ebp),%edx
-mov    %eax,0x12(%edx)
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x18(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%edx)
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 cmp    $0x1d,%eax
-jbe    <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0xc9>
-mov    -0x10(%ebp),%eax
-movl   $0x0,0x12(%eax)
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%eax
+jbe    <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0x109>
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x13,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x14,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x15,%eax
+movb   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0xfa>
-mov    -0x10(%ebp),%eax
-mov    0x12(%eax),%ebx
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader+0x13e>
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ebx
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    -0x10(%ebp),%edx
+mov    -0x18(%ebp),%edx
 add    $0x16,%edx
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnFindCharacName_useUID(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnFindCharacName_useUIDEP12PacketHeader
               (PacketHeader *param_1)

{
  CTcpGameServer *this;
  char *pcVar1;
  CUser *this_00;
  char *pcVar2;
  size_t sVar3;
  
  this = (CTcpGameServer *)CApplication::FindTcpGameServer(m_pclApp);
  if (this != (CTcpGameServer *)0x0) {
    pcVar1 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt(this,0x1f45,0x34);
    *(undefined4 *)(pcVar1 + 10) = *(undefined4 *)(param_1 + 10);
    *(undefined4 *)(pcVar1 + 0xe) = *(undefined4 *)(param_1 + 0xe);
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    this_00 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (this_00 != (CUser *)0x0) {
      pcVar2 = (char *)CUser::GetCharName(this_00);
      sVar3 = strlen(pcVar2);
      *(size_t *)(pcVar1 + 0x12) = sVar3;
      if (0x1d < *(uint *)(pcVar1 + 0x12)) {
        pcVar1[0x12] = '\0';
        pcVar1[0x13] = '\0';
        pcVar1[0x14] = '\0';
        pcVar1[0x15] = '\0';
      }
      if (*(int *)(pcVar1 + 0x12) != 0) {
        sVar3 = *(size_t *)(pcVar1 + 0x12);
        pcVar2 = (char *)CUser::GetCharName(this_00);
        strncpy(pcVar1 + 0x16,pcVar2,sVar3);
      }
    }
    CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(this,pcVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4323 行）：

```cpp
void CPacketTranslater::OnFindCharacName_useUID(PacketHeader* pkt)
{
    CTcpGameServer* tcpGs =
        (CTcpGameServer*)m_pclApp->FindTcpGameServer(
            ((RA_UINT<14>*)pkt)->v);
    if (tcpGs != 0)
    {
        char* buf = tcpGs->makePacketHeader(0x1f45, 0x34);
        *(unsigned int*)(buf + 10) = ((RA_UINT<10>*)pkt)->v;
        *(unsigned int*)(buf + 0xe) = ((RA_UINT<14>*)pkt)->v;
        buf[0x12] = 0;
        buf[0x13] = 0;
        buf[0x14] = 0;
        buf[0x15] = 0;
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                ((RA_UINT<10>*)pkt)->v);
        if (user != 0)
        {
            char* name = user->GetCharName();
            unsigned int len = (unsigned int)strlen(name);
            *(unsigned int*)(buf + 0x12) = len;
            if (0x1d < *(unsigned int*)(buf + 0x12))
            {
                buf[0x12] = 0;
                buf[0x13] = 0;
                buf[0x14] = 0;
                buf[0x15] = 0;
            }
            if (*(int*)(buf + 0x12) != 0)
            {
                strncpy(buf + 0x16, user->GetCharName(),
                        *(unsigned int*)(buf + 0x12));
            }
        }
        tcpGs->SendToGameServer(buf);
    }
}
```
