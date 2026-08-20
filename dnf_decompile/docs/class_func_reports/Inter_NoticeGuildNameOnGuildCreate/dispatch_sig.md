# dispatch_sig

`_ZN34Inter_NoticeGuildNameOnGuildCreate12dispatch_sigEP5CUserPci`

`Inter_NoticeGuildNameOnGuildCreate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeGuildNameOnGuildCreate` | `0x084d39ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d39ae  _ZN34Inter_NoticeGuildNameOnGuildCreate12dispatch_sigEP5CUserPci
#           Inter_NoticeGuildNameOnGuildCreate::dispatch_sig(CUser*, char*, int)
# range [0x084d39ae, 0x084d3a21]
084d39ae +0x00:  push   %ebp
084d39af +0x01:  mov    %esp,%ebp
084d39b1 +0x03:  push   %ebx
084d39b2 +0x04:  sub    $0x34,%esp
084d39b5 +0x07:  mov    0x10(%ebp),%eax
084d39b8 +0x0a:  mov    %eax,-0xc(%ebp)
084d39bb +0x0d:  lea    -0x26(%ebp),%eax
084d39be +0x10:  mov    %eax,(%esp)
084d39c1 +0x13:  call   082344de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b88
084d39c6 +0x18:  mov    -0xc(%ebp),%eax
084d39c9 +0x1b:  add    $0x16,%eax
084d39cc +0x1e:  movl   $0x16,0x8(%esp)
084d39d4 +0x26:  mov    %eax,0x4(%esp)
084d39d8 +0x2a:  lea    -0x26(%ebp),%eax
084d39db +0x2d:  mov    %eax,(%esp)
084d39de +0x30:  call   0807d8a0 <_init+0x198>
084d39e3 +0x35:  mov    -0xc(%ebp),%eax
084d39e6 +0x38:  mov    0x12(%eax),%ebx
084d39e9 +0x3b:  mov    -0xc(%ebp),%eax
084d39ec +0x3e:  movzbl 0x2d(%eax),%eax
084d39f0 +0x42:  movzbl %al,%edx
084d39f3 +0x45:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
084d39f8 +0x4a:  mov    %edx,0x4(%esp)
084d39fc +0x4e:  mov    %eax,(%esp)
084d39ff +0x51:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084d3a04 +0x56:  lea    -0x26(%ebp),%edx
084d3a07 +0x59:  mov    %edx,0x8(%esp)
084d3a0b +0x5d:  mov    %ebx,0x4(%esp)
084d3a0f +0x61:  mov    %eax,(%esp)
084d3a12 +0x64:  call   0846ec88 <_ZN17CGuildServerProxy20InsertGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::InsertGuildInfoProxy(unsigned int, STGuildProxy&)
084d3a17 +0x69:  mov    $0x0,%eax
084d3a1c +0x6e:  add    $0x34,%esp
084d3a1f +0x71:  pop    %ebx
084d3a20 +0x72:  pop    %ebp
084d3a21 +0x73:  ret
```

## 反编译 C

```c
// Inter_NoticeGuildNameOnGuildCreate::dispatch_sig @ 0x84d39ae

/* Inter_NoticeGuildNameOnGuildCreate::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_NoticeGuildNameOnGuildCreate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CGuildServerProxy *this;
  STGuildProxy local_2a [26];
  int local_10;
  
  local_10 = param_3;
  STGuildProxy::STGuildProxy(local_2a);
  memcpy(local_2a,(void *)(local_10 + 0x16),0x16);
  uVar1 = *(uint *)(local_10 + 0x12);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                   (GlobalData::s_guild_proxy_mgr,*(undefined1 *)(local_10 + 0x2d));
  CGuildServerProxy::InsertGuildInfoProxy(this,uVar1,local_2a);
  return 0;
}
```
