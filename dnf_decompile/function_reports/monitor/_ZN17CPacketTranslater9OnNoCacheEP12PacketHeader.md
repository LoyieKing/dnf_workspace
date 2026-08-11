# _ZN17CPacketTranslater9OnNoCacheEP12PacketHeader

`CPacketTranslater::OnNoCache(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x808d38a` | `0xb5` | `0x80789ec` | `0xb5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater9OnNoCacheEP12PacketHeader+0x2b>
 call   <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server18CCacheCharacterMgr5ResetEv>
 jmp    <T> <_ZN17CPacketTranslater9OnNoCacheEP12PacketHeader+0xad>
 mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%ebx
 call   <T> <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
-lea    -0x30(%ebp),%edx
+lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15exchange_server18CCacheCharacterMgr17GetCacheCharacterEjPNS_20CACHE_CHARACTER_TYPEE>
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater9OnNoCacheEP12PacketHeader+0xad>
-mov    -0x2c(%ebp),%edi
-mov    -0x30(%ebp),%esi
+mov    -0x24(%ebp),%edi
+mov    -0x28(%ebp),%esi
 mov    -0x1c(%ebp),%eax
 mov    0xa(%eax),%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x1970,0x8(%esp)
 movl   $"OnNoCache",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"OnNoCache() (%s,%d,%d)\n",0x8(%esp)
 movl   $"./log/ExchangeServer",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoCache(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater9OnNoCacheEP12PacketHeader(PacketHeader *param_1)

{
  uint uVar1;
  char cVar2;
  CCacheCharacterMgr *pCVar3;
  undefined4 uVar4;
  undefined4 local_34;
  undefined4 local_30;
  CMyFileLog local_28 [8];
  PacketHeader *local_20;
  
  local_20 = param_1;
  if (*(int *)(param_1 + 10) == 0) {
    pCVar3 = (CCacheCharacterMgr *)
             exchange_server::_ZN15exchange_server28GetInstanceCacheCharacterMgrEv();
    exchange_server::CCacheCharacterMgr::Reset(pCVar3);
  }
  else {
    uVar1 = *(uint *)(param_1 + 10);
    pCVar3 = (CCacheCharacterMgr *)
             exchange_server::_ZN15exchange_server28GetInstanceCacheCharacterMgrEv();
    cVar2 = exchange_server::CCacheCharacterMgr::GetCacheCharacter
                      (pCVar3,uVar1,(CACHE_CHARACTER_TYPE *)&local_34);
    if (cVar2 != '\0') {
      uVar4 = NumberToString(*(uint *)(local_20 + 10),0);
      CMyFileLog::CMyFileLog(local_28,"OnNoCache",0x1970);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/ExchangeServer","OnNoCache() (%s,%d,%d)\n",uVar4,local_34,local_30)
      ;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4268 行）：

```cpp
void CPacketTranslater::OnNoCache(PacketHeader* pkt)
{
    struct Packet_No_Cache_View
    {
        char m_header[0xa];
        unsigned int m_dbid;
    } __attribute__((packed));
    PacketHeader* p = pkt;
    if (((Packet_No_Cache_View*)p)->m_dbid == 0)
    {
        exchange_server::GetInstanceCacheCharacterMgr()->Reset();
    }
    else
    {
        exchange_server::CACHE_CHARACTER_TYPE type;
        if (exchange_server::GetInstanceCacheCharacterMgr()->GetCacheCharacter(
                ((Packet_No_Cache_View*)p)->m_dbid, &type))
        {
            register char* s;
            register int f0;
            register int f4;
            f4 = type.m_field4;
            f0 = type.m_field0;
            s = NumberToString(((Packet_No_Cache_View*)p)->m_dbid, 0);
            DNF_LOG_SCOPE_LINE(0x1970,"./log/ExchangeServer", "OnNoCache() (%s,%d,%d)\n", s, f0, f4);
        }
    }
}
```
