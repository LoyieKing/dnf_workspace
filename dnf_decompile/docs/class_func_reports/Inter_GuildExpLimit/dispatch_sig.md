# dispatch_sig

`_ZN19Inter_GuildExpLimit12dispatch_sigEP5CUserPci`

`Inter_GuildExpLimit::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildExpLimit` | `0x084dcaee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dcaee  _ZN19Inter_GuildExpLimit12dispatch_sigEP5CUserPci
#           Inter_GuildExpLimit::dispatch_sig(CUser*, char*, int)
# range [0x084dcaee, 0x084dcb17]
084dcaee +0x00:  push   %ebp
084dcaef +0x01:  mov    %esp,%ebp
084dcaf1 +0x03:  sub    $0x18,%esp
084dcaf4 +0x06:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084dcaf9 +0x0b:  movl   $0x0,0x4(%esp)
084dcb01 +0x13:  mov    %eax,(%esp)
084dcb04 +0x16:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084dcb09 +0x1b:  mov    %eax,(%esp)
084dcb0c +0x1e:  call   0846ee44 <_ZN17CGuildServerProxy17SendGuildExpLimitEv>  ; CGuildServerProxy::SendGuildExpLimit()
084dcb11 +0x23:  mov    $0x0,%eax
084dcb16 +0x28:  leave
084dcb17 +0x29:  ret
```

## 反编译 C

```c
// Inter_GuildExpLimit::dispatch_sig @ 0x84dcaee

/* Inter_GuildExpLimit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildExpLimit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CGuildServerProxy *this;
  
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
  CGuildServerProxy::SendGuildExpLimit(this);
  return 0;
}
```
