# _ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader

`CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8086350` | `0x269` | `0x8071cd6` | `0x26f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,164 +1,165 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x70,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x4c>
 movl   $0xd69,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x268>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0xb6>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0xab>
 movl   $0xd70,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-lea    -0x65(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x268>
+lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_Delete_To_BlackList_ResultC1Ev>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5b(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x57(%ebp)
+mov    0x8(%ebp),%eax
 add    $0xe,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x65(%ebp),%eax
+lea    -0x61(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x120>
-movb   $0x3,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x118>
+movb   $0x3,-0x31(%ebp)
+lea    -0x61(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
+lea    -0x61(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x268>
+mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x15d>
-movb   $0x2,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x160>
+movb   $0x2,-0x31(%ebp)
+lea    -0x61(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
+lea    -0x61(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-movb   $0x1,-0x35(%ebp)
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x268>
+movb   $0x1,-0x31(%ebp)
+mov    0x8(%ebp),%eax
 mov    0x2c(%eax),%eax
-mov    %eax,-0x39(%ebp)
-movzwl -0x63(%ebp),%eax
+mov    %eax,-0x35(%ebp)
+lea    -0x61(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
+lea    -0x61(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x268>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x208>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x20e>
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
 movl   $0xd8d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x201>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x207>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x268>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xd92,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWDeleteToBlackList Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x25d>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x263>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x70,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  Packet_Delete_To_BlackList_Result local_69 [2];
  ushort local_67;
  undefined4 local_5f;
  undefined1 auStack_5b [30];
  undefined4 local_3d;
  undefined1 local_39;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CUser *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 0808637d to 080864d6 has its CatchHandler @ 080864dc */
    CMyFileLog::CMyFileLog(local_38,"OnDBMWDeleteToBlackList",0xd69);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/BlackList",
               "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp");
  }
  else {
    local_18 = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnDBMWDeleteToBlackList",0xd70);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/BlackList",
                 "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser");
    }
    else {
      Packet_Delete_To_BlackList_Result::Packet_Delete_To_BlackList_Result(local_69);
      local_5f = CUser::GetIdByChannel(local_18);
      memcpy(auStack_5b,local_14 + 0xe,0x1d);
      if (*(int *)(local_14 + 0x2c) == -1) {
        local_39 = 3;
        CUser::SendToGameserver(local_18,(char *)local_69,(uint)local_67);
      }
      else {
        cVar1 = CUser::DeleteToBlackList((uint)local_18);
        if (cVar1 != '\x01') {
          local_39 = 2;
          CUser::SendToGameserver(local_18,(char *)local_69,(uint)local_67);
        }
        local_39 = 1;
        local_3d = *(undefined4 *)(local_14 + 0x2c);
        CUser::SendToGameserver(local_18,(char *)local_69,(uint)local_67);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2415 行）：

```cpp
void CPacketTranslater::OnDBMWDeleteToBlackList(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xd69, "./log/BlackList", "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                ((RA_UINT<10>*)pkt)->v);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xd70, "./log/BlackList", "CPacketTranslater::OnDBMWDeleteToBlackList : 0 == pclUser");
        }
        else
        {
            Packet_Delete_To_BlackList_Result result;
            result.m_idByChannel = user->GetIdByChannel();
            memcpy(result.m_name, (char*)pkt + 0xe, 0x1d);
            if (((RA_INT<44>*)pkt)->v == -1)
            {
                result.m_result = 3;
                user->SendToGameserver((char*)&result, ((RA_U16<2>*)&result)->v);
            }
            else if (user->DeleteToBlackList(((RA_UINT<44>*)pkt)->v) != 1)
            {
                result.m_result = 2;
                user->SendToGameserver((char*)&result, ((RA_U16<2>*)&result)->v);
            }
            else
            {
                result.m_result = 1;
                result.m_charNo = ((RA_UINT<44>*)pkt)->v;
                user->SendToGameserver((char*)&result, ((RA_U16<2>*)&result)->v);
            }
        }
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xd8d, "./log/Except", "CPacketTranslater::OnDBMWDeleteToBlackList Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xd92, "./log/Except", "CPacketTranslater::OnDBMWDeleteToBlackList Exception Break\n");
    }
}
```
