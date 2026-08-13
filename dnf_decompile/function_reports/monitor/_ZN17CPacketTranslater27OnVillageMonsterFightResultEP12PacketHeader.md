# _ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader

`CPacketTranslater::OnVillageMonsterFightResult(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808c7a8` | `0x163` | `0x8077eb0` | `0x15e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,98 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
 movl   $0x0,-0x38(%ebp)
 movl   $0x0,-0x34(%ebp)
 movl   $0x0,-0x30(%ebp)
 movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x76>
-mov    -0x10(%ebp),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x71>
+mov    0x8(%ebp),%eax
+mov    -0x14(%ebp),%edx
+add    $0x4,%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x6d>
+mov    -0x14(%ebp),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
-add    $0x4,%edx
-mov    0xa(%eax,%edx,4),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x72>
-mov    -0x10(%ebp),%ebx
-mov    -0x10(%ebp),%edx
-mov    -0x18(%ebp),%eax
-add    $0x4,%edx
-mov    0xa(%eax,%edx,4),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x38(%ebp,%ebx,4)
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x3,-0x10(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x3,-0x14(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x3e>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x15c>
+jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x38>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x157>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x102>
+jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xfd>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x1736,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnVillageMonsterFightResult() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xfb>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xf6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x15c>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x157>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x173b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnVillageMonsterFightResult() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x157>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x152>
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

/* CPacketTranslater::OnVillageMonsterFightResult(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader
               (PacketHeader *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_3c [8];
  PacketHeader *local_1c;
  uint local_18;
  int local_14;
  
  local_1c = param_1;
  local_18 = m_pclApp + 0x10;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  for (local_14 = 0; iVar1 = local_14, local_14 < 4; local_14 = local_14 + 1) {
    if (*(int *)(local_1c + (local_14 + 4) * 4 + 10) != 0) {
                    /* try { // try from 0808c811 to 0808c815 has its CatchHandler @ 0808c82e */
      uVar2 = CUserManager::FindUser_CharNo(local_18);
      local_3c[iVar1] = uVar2;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4131 行）：

```cpp
void CPacketTranslater::OnVillageMonsterFightResult(PacketHeader* pkt)
{try
{


    unsigned int users[4] = {0, 0, 0, 0};
    CUserManager* userMgr = (CUserManager*)((char*)m_pclApp + 0x10);
    for (int i = 0; i < 4; i++)
    {
        unsigned int key = *(unsigned int*)((char*)pkt + (i + 4) * 4 + 10);
        if (key != 0)
        {
            users[i] = (unsigned int)userMgr->FindUser_CharNo(key);
        }
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0x1736, "./log/Except", "CPacketTranslater::OnVillageMonsterFightResult() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x173b, "./log/Except", "CPacketTranslater::OnVillageMonsterFightResult() Exception Break\n");
    }
}
```
