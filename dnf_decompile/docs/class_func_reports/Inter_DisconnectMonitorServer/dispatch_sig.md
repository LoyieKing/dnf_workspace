# dispatch_sig

`_ZN29Inter_DisconnectMonitorServer12dispatch_sigEP5CUserPci`

`Inter_DisconnectMonitorServer::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DisconnectMonitorServer` | `0x084d9c8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d9c8e  _ZN29Inter_DisconnectMonitorServer12dispatch_sigEP5CUserPci
#           Inter_DisconnectMonitorServer::dispatch_sig(CUser*, char*, int)
# range [0x084d9c8e, 0x084d9cbd]
084d9c8e +0x00:  push   %ebp
084d9c8f +0x01:  mov    %esp,%ebp
084d9c91 +0x03:  sub    $0x28,%esp
084d9c94 +0x06:  mov    0x10(%ebp),%eax
084d9c97 +0x09:  mov    %eax,-0xc(%ebp)
084d9c9a +0x0c:  mov    -0xc(%ebp),%eax
084d9c9d +0x0f:  mov    (%eax),%eax
084d9c9f +0x11:  mov    %eax,0x8(%esp)
084d9ca3 +0x15:  movl   $0x0,0x4(%esp)
084d9cab +0x1d:  movl   $0x1e,(%esp)
084d9cb2 +0x24:  call   086381a0 <_ZN25TimerConnectMonitorServer15registNextTimerElii>  ; TimerConnectMonitorServer::registNextTimer(long, int, int)
084d9cb7 +0x29:  mov    $0x0,%eax
084d9cbc +0x2e:  leave
084d9cbd +0x2f:  ret
```

## 反编译 C

```c
// Inter_DisconnectMonitorServer::dispatch_sig @ 0x84d9c8e

/* Inter_DisconnectMonitorServer::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DisconnectMonitorServer::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  TimerConnectMonitorServer::registNextTimer(0x1e,0,*(int *)param_3);
  return 0;
}
```
