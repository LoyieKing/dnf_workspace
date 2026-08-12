# _ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader

`CPacketTranslater::onRequestCharacTowerUpdateRank(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8088880` | `0x178` | `0x8073e0a` | `0x172` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,108 +1,104 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x50,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    0xe(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16f>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16b>
+mov    0x8(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%edi
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-mov    -0x28(%ebp),%eax
-mov    0x12(%eax),%esi
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication12getTowerRankEv>
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTowerRank16registCharacRankEjPKcjj>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16b>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x113>
+jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x111>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1197,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onRequestCharacTowerUpdateRank Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x10c>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x10a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x119c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onRequestCharacTowerUpdateRank Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x168>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x166>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
-nop
-add    $0x5c,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onRequestCharacTowerUpdateRank(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CUser *this;
  char *pcVar4;
  CTowerRank *this_00;
  
                    /* try { // try from 080888b1 to 08088911 has its CatchHandler @ 08088917 */
  this = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (this != (CUser *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x16);
    uVar2 = *(uint *)(param_1 + 0xe);
    pcVar4 = (char *)CUser::GetCharName(this);
    uVar3 = *(uint *)(param_1 + 0x12);
    this_00 = (CTowerRank *)CApplication::_ZN12CApplication12getTowerRankEv(m_pclApp);
    CTowerRank::_ZN10CTowerRank16registCharacRankEjPKcjj(this_00,uVar3,pcVar4,uVar2,uVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 3125 行）：

```cpp
void CPacketTranslater::onRequestCharacTowerUpdateRank(PacketHeader* pkt)
{try
{


    CUser* user =
        ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
            ((RA_UINT<14>*)pkt)->v);
    if (user != 0)
    {
        unsigned int a = ((RA_UINT<22>*)pkt)->v;
        unsigned int b = ((RA_UINT<14>*)pkt)->v;
        char* name = user->GetCharName();
        unsigned int c = ((RA_UINT<18>*)pkt)->v;
        CTowerRank* tower = (CTowerRank*)m_pclApp->getTowerRank();
        tower->registCharacRank(c, name, b, a);
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1197, "./log/Except", "CPacketTranslater::onRequestCharacTowerUpdateRank Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x119c, "./log/Except", "CPacketTranslater::onRequestCharacTowerUpdateRank Exception Break\n");
    }
}
```
