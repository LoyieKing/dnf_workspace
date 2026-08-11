# _ZN17ChannelServiceApp14ChannelService17registerProtocolsEv

`ChannelServiceApp::ChannelService::registerProtocols()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x804dc78` | `0x1c5` | `0x805f8ea` | `0x1c5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,92 +1,92 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN17ChannelServiceApp14ChannelService17registerProtocolsEv+0x36>
 mov    -0x4(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $0x0,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x1ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN17ChannelServiceApp14ChannelService17registerProtocolsEv+0xf>
 movw   $0x3,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService21onSC_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0x1,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService21onCS_ASK_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0x5,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService25onCS_CHECK_SCRIPT_VERSIONEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0x9,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
-movl   $"U됧VS곸걋\"",(%edx,%ecx,8)
+movl   $&_ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0xb,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService12onCS_CONNECTEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0xe,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService16onSC_GET_GC_INFOEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0x6,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService25onSC_CHECK_SCRIPT_VERSIONEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0xa,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService15onSC_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 movw   $0x2,-0x6(%ebp)
 movzwl -0x6(%ebp),%eax
 mov    0x8(%ebp),%edx
 lea    0x3a04f8(%eax),%ecx
 movl   $&_ZN17ChannelServiceApp14ChannelService24onCS_UPDATE_CHANNEL_INFOEP15tagPacketHeaderPNS_7TCPUserE,(%edx,%ecx,8)
 mov    0x8(%ebp),%edx
 add    $0x3a04f8,%eax
 movl   $0x0,0x4(%edx,%eax,8)
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: DWORD registerProtocols(ChannelService * this) */

DWORD __thiscall
ChannelServiceApp::ChannelService::_ZN17ChannelServiceApp14ChannelService17registerProtocolsEv
          (ChannelService *this)

{
  int local_8;
  
                    /* Unresolved local var: WORD wIndex@[???]
                       Unresolved local var: int i@[???] */
  for (local_8 = 0; local_8 < 0x200; local_8 = local_8 + 1) {
    this->m_pfnMsg[local_8].__pfn =
         (_func___thiscall_DWORD_ChannelService_ptr_LPPACKET_HEADER_TCPUser_ptr *)0x0;
    this->m_pfnMsg[local_8].__delta = 0;
  }
  this->m_pfnMsg[3].__pfn = onSC_ASK_CHANNEL_INFO;
  this->m_pfnMsg[3].__delta = 0;
  this->m_pfnMsg[1].__pfn = onCS_ASK_CHANNEL_INFO;
  this->m_pfnMsg[1].__delta = 0;
  this->m_pfnMsg[5].__pfn = onCS_CHECK_SCRIPT_VERSION;
  this->m_pfnMsg[5].__delta = 0;
  this->m_pfnMsg[9].__pfn =
       _ZN17ChannelServiceApp14ChannelService15onCS_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE;
  this->m_pfnMsg[9].__delta = 0;
  this->m_pfnMsg[0xb].__pfn =
       _ZN17ChannelServiceApp14ChannelService12onCS_CONNECTEP15tagPacketHeaderPNS_7TCPUserE;
  this->m_pfnMsg[0xb].__delta = 0;
  this->m_pfnMsg[0xe].__pfn =
       _ZN17ChannelServiceApp14ChannelService16onSC_GET_GC_INFOEP15tagPacketHeaderPNS_7TCPUserE;
  this->m_pfnMsg[0xe].__delta = 0;
  this->m_pfnMsg[6].__pfn = onSC_CHECK_SCRIPT_VERSION;
  this->m_pfnMsg[6].__delta = 0;
  this->m_pfnMsg[10].__pfn =
       _ZN17ChannelServiceApp14ChannelService15onSC_GET_SCRIPTEP15tagPacketHeaderPNS_7TCPUserE;
  this->m_pfnMsg[10].__delta = 0;
  this->m_pfnMsg[2].__pfn = onCS_UPDATE_CHANNEL_INFO;
  this->m_pfnMsg[2].__delta = 0;
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ChannelService.cpp](source/ChannelOld/DNFChannelBridge/ChannelService.cpp)（约第 369 行）：

```cpp
DWORD ChannelServiceApp::ChannelService::registerProtocols()
{
    for (int i = 0; i < 0x200; i = i + 1)
    {
        m_pfnMsg[i] = NULL;
    }
    WORD wIndex = 5;
    m_pfnMsg[wIndex] = &ChannelService::onCS_CHECK_SCRIPT_VERSION;
    wIndex = 9;
    m_pfnMsg[wIndex] = &ChannelService::onCS_GET_SCRIPT;
    wIndex = 0xd;
    m_pfnMsg[wIndex] = &ChannelService::onCS_GET_GC_INFO;
    wIndex = 4;
    m_pfnMsg[wIndex] = &ChannelService::onCS_NOTICE_CHANNEL_SERVER;
    return 0;
}
```
