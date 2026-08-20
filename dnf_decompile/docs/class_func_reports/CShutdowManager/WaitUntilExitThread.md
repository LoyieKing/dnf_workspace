# WaitUntilExitThread

`_ZN15CShutdowManager19WaitUntilExitThreadEv`

`CShutdowManager::WaitUntilExitThread()`

| 类 | 地址 |
|---|---|
| `CShutdowManager` | `0x082a396e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a396e  _ZN15CShutdowManager19WaitUntilExitThreadEv
#           CShutdowManager::WaitUntilExitThread()
# range [0x082a396e, 0x082a3a59]
082a396e +0x00:  push   %ebp
082a396f +0x01:  mov    %esp,%ebp
082a3971 +0x03:  sub    $0x18,%esp
082a3974 +0x06:  mov    0x8(%ebp),%eax
082a3977 +0x09:  movzbl (%eax),%eax
082a397a +0x0c:  movzbl %al,%eax
082a397d +0x0f:  mov    %eax,0x4(%esp)
082a3981 +0x13:  movl   $"WaitUntilExitThread (%d)\n",(%esp)
082a3988 +0x1a:  call   0807db60 <_init+0x458>
082a398d +0x1f:  mov    0x8(%ebp),%eax
082a3990 +0x22:  movzbl (%eax),%eax
082a3993 +0x25:  xor    $0x1,%eax
082a3996 +0x28:  test   %al,%al
082a3998 +0x2a:  je     082a39a4 <+0x36>
082a399a +0x2c:  mov    $0x1,%eax
082a399f +0x31:  jmp    082a3a58 <+0xea>
082a39a4 +0x36:  mov    &_ZN10GlobalData14s_dispatch_thrE,%eax
082a39a9 +0x3b:  mov    %eax,(%esp)
082a39ac +0x3e:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a39b1 +0x43:  movl   $"dispatch thread join",(%esp)
082a39b8 +0x4a:  call   0807e570 <_init+0xe68>
082a39bd +0x4f:  mov    &_ZN10GlobalData9s_udp_thrE,%eax
082a39c2 +0x54:  mov    %eax,(%esp)
082a39c5 +0x57:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a39ca +0x5c:  movl   $"udp thread join",(%esp)
082a39d1 +0x63:  call   0807e570 <_init+0xe68>
082a39d6 +0x68:  mov    &_ZN10GlobalData17s_monitor_tcp_thrE,%eax
082a39db +0x6d:  mov    %eax,(%esp)
082a39de +0x70:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a39e3 +0x75:  movl   $"monitor tcp thread join",(%esp)
082a39ea +0x7c:  call   0807e570 <_init+0xe68>
082a39ef +0x81:  mov    &_ZN10GlobalData8s_db_thrE,%eax
082a39f4 +0x86:  mov    %eax,(%esp)
082a39f7 +0x89:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a39fc +0x8e:  movl   $"db thread join",(%esp)
082a3a03 +0x95:  call   0807e570 <_init+0xe68>
082a3a08 +0x9a:  mov    &_ZN10GlobalData18s_db_thr_for_logDBE,%eax
082a3a0d +0x9f:  mov    %eax,(%esp)
082a3a10 +0xa2:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a3a15 +0xa7:  movl   $"log db thread join",(%esp)
082a3a1c +0xae:  call   0807e570 <_init+0xe68>
082a3a21 +0xb3:  mov    &_ZN10GlobalData12s_accept_thrE,%eax
082a3a26 +0xb8:  mov    %eax,(%esp)
082a3a29 +0xbb:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a3a2e +0xc0:  movl   $"accept thread join",(%esp)
082a3a35 +0xc7:  call   0807e570 <_init+0xe68>
082a3a3a +0xcc:  mov    &_ZN10GlobalData9s_net_thrE,%eax
082a3a3f +0xd1:  mov    %eax,(%esp)
082a3a42 +0xd4:  call   08630c46 <_ZN15ThreadInterface4joinEv>  ; ThreadInterface::join()
082a3a47 +0xd9:  movl   $"net thread join",(%esp)
082a3a4e +0xe0:  call   0807e570 <_init+0xe68>
082a3a53 +0xe5:  mov    $0x1,%eax
082a3a58 +0xea:  leave
082a3a59 +0xeb:  ret
```

## 反编译 C

```c
// CShutdowManager::WaitUntilExitThread @ 0x82a396e

/* CShutdowManager::WaitUntilExitThread() */

undefined4 __thiscall CShutdowManager::WaitUntilExitThread(CShutdowManager *this)

{
  printf("WaitUntilExitThread (%d)\n",(uint)(byte)*this);
  if (*this == (CShutdowManager)0x1) {
    ThreadInterface::join(GlobalData::s_dispatch_thr);
    puts("dispatch thread join");
    ThreadInterface::join(GlobalData::s_udp_thr);
    puts("udp thread join");
    ThreadInterface::join(GlobalData::s_monitor_tcp_thr);
    puts("monitor tcp thread join");
    ThreadInterface::join(GlobalData::s_db_thr);
    puts("db thread join");
    ThreadInterface::join(GlobalData::s_db_thr_for_logDB);
    puts("log db thread join");
    ThreadInterface::join(GlobalData::s_accept_thr);
    puts("accept thread join");
    ThreadInterface::join(GlobalData::s_net_thr);
    puts("net thread join");
  }
  return 1;
}
```
