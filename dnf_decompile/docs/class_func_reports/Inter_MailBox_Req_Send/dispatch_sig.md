# dispatch_sig

`_ZN22Inter_MailBox_Req_Send12dispatch_sigEP5CUserPci`

`Inter_MailBox_Req_Send::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MailBox_Req_Send` | `0x084d0130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0130  _ZN22Inter_MailBox_Req_Send12dispatch_sigEP5CUserPci
#           Inter_MailBox_Req_Send::dispatch_sig(CUser*, char*, int)
# range [0x084d0130, 0x084d017b]
084d0130 +0x00:  push   %ebp
084d0131 +0x01:  mov    %esp,%ebp
084d0133 +0x03:  push   %ebx
084d0134 +0x04:  sub    $0x24,%esp
084d0137 +0x07:  mov    0x10(%ebp),%eax
084d013a +0x0a:  mov    %eax,-0xc(%ebp)
084d013d +0x0d:  mov    -0xc(%ebp),%eax
084d0140 +0x10:  mov    (%eax),%eax
084d0142 +0x12:  test   %eax,%eax
084d0144 +0x14:  jne    084d0171 <+0x41>
084d0146 +0x16:  mov    -0xc(%ebp),%eax
084d0149 +0x19:  mov    0x4(%eax),%ebx
084d014c +0x1c:  mov    -0xc(%ebp),%eax
084d014f +0x1f:  mov    0x8(%eax),%eax
084d0152 +0x22:  mov    %eax,%edx
084d0154 +0x24:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084d0159 +0x29:  mov    %edx,0x4(%esp)
084d015d +0x2d:  mov    %eax,(%esp)
084d0160 +0x30:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084d0165 +0x35:  mov    %ebx,0x4(%esp)
084d0169 +0x39:  mov    %eax,(%esp)
084d016c +0x3c:  call   08471072 <_ZN19CMonitorServerProxy17SendNotifyNewMailEj>  ; CMonitorServerProxy::SendNotifyNewMail(unsigned int)
084d0171 +0x41:  mov    $0x0,%eax
084d0176 +0x46:  add    $0x24,%esp
084d0179 +0x49:  pop    %ebx
084d017a +0x4a:  pop    %ebp
084d017b +0x4b:  ret
```

## 反编译 C

```c
// Inter_MailBox_Req_Send::dispatch_sig @ 0x84d0130

/* Inter_MailBox_Req_Send::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MailBox_Req_Send::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CMonitorServerProxy *this;
  
  if (*(int *)param_3 == 0) {
    uVar1 = *(uint *)(param_3 + 4);
    this = (CMonitorServerProxy *)
           CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                     (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(param_3 + 8));
    CMonitorServerProxy::SendNotifyNewMail(this,uVar1);
  }
  return 0;
}
```
