# put

`_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard`

`MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)`

| 类 | 地址 |
|---|---|
| `MsgQueueMgr` | `0x08570fde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08570fde  _ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard
#           MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
# range [0x08570fde, 0x08571007]
08570fde +0x00:  push   %ebp
08570fdf +0x01:  mov    %esp,%ebp
08570fe1 +0x03:  sub    $0x18,%esp
08570fe4 +0x06:  mov    0x10(%ebp),%eax
08570fe7 +0x09:  mov    %eax,(%esp)
08570fea +0x0c:  call   08100ffa <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x1c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x1c
08570fef +0x11:  mov    %eax,0x8(%esp)
08570ff3 +0x15:  mov    0xc(%ebp),%eax
08570ff6 +0x18:  mov    %eax,0x4(%esp)
08570ffa +0x1c:  mov    0x8(%ebp),%eax
08570ffd +0x1f:  mov    %eax,(%esp)
08571000 +0x22:  call   08571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, Stream*)
08571005 +0x27:  leave
08571006 +0x28:  ret
08571007 +0x29:  nop
```

## 反编译 C

```c
// MsgQueueMgr::put @ 0x8570fde

/* MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&) */

void __thiscall MsgQueueMgr::put(MsgQueueMgr *this,undefined4 param_2,CStreamGuard *param_3)

{
  undefined4 uVar1;
  
  uVar1 = CStreamGuard::Get(param_3);
  put(this,param_2,uVar1);
  return;
}
```
