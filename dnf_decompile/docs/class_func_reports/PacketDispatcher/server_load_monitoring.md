# server_load_monitoring

`_ZN16PacketDispatcher22server_load_monitoringEv`

`PacketDispatcher::server_load_monitoring()`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x0825f658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f658  _ZN16PacketDispatcher22server_load_monitoringEv
#           PacketDispatcher::server_load_monitoring()
# range [0x0825f658, 0x0825f72d]
0825f658 +0x00:  push   %ebp
0825f659 +0x01:  mov    %esp,%ebp
0825f65b +0x03:  sub    $0x48,%esp
0825f65e +0x06:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0825f663 +0x0b:  movl   $0x3,0x4(%esp)
0825f66b +0x13:  mov    %eax,(%esp)
0825f66e +0x16:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
0825f673 +0x1b:  mov    %eax,-0x1c(%ebp)
0825f676 +0x1e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0825f67b +0x23:  movl   $0x1,0x4(%esp)
0825f683 +0x2b:  mov    %eax,(%esp)
0825f686 +0x2e:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
0825f68b +0x33:  mov    %eax,-0x18(%ebp)
0825f68e +0x36:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0825f693 +0x3b:  movl   $0x0,0x4(%esp)
0825f69b +0x43:  mov    %eax,(%esp)
0825f69e +0x46:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
0825f6a3 +0x4b:  mov    %eax,-0x14(%ebp)
0825f6a6 +0x4e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0825f6ab +0x53:  movl   $0x2,0x4(%esp)
0825f6b3 +0x5b:  mov    %eax,(%esp)
0825f6b6 +0x5e:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
0825f6bb +0x63:  mov    %eax,-0x10(%ebp)
0825f6be +0x66:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0825f6c3 +0x6b:  movl   $0x4,0x4(%esp)
0825f6cb +0x73:  mov    %eax,(%esp)
0825f6ce +0x76:  call   085711e4 <_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE>  ; MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
0825f6d3 +0x7b:  mov    %eax,-0xc(%ebp)
0825f6d6 +0x7e:  call   085ffc24 <_Z23CAppLoadCheckerInstancev>  ; CAppLoadCheckerInstance()
0825f6db +0x83:  mov    -0x18(%ebp),%edx
0825f6de +0x86:  mov    %edx,0x10(%esp)
0825f6e2 +0x8a:  mov    -0x14(%ebp),%edx
0825f6e5 +0x8d:  mov    %edx,0xc(%esp)
0825f6e9 +0x91:  mov    -0xc(%ebp),%edx
0825f6ec +0x94:  mov    %edx,0x8(%esp)
0825f6f0 +0x98:  mov    -0x10(%ebp),%edx
0825f6f3 +0x9b:  mov    %edx,0x4(%esp)
0825f6f7 +0x9f:  mov    %eax,(%esp)
0825f6fa +0xa2:  call   086004d8 <_ZN15CAppLoadChecker9CheckLoadEiiii>  ; CAppLoadChecker::CheckLoad(int, int, int, int)
0825f6ff +0xa7:  test   %al,%al
0825f701 +0xa9:  je     0825f72c <+0xd4>
0825f703 +0xab:  call   085ffc24 <_Z23CAppLoadCheckerInstancev>  ; CAppLoadCheckerInstance()
0825f708 +0xb0:  mov    -0x18(%ebp),%edx
0825f70b +0xb3:  mov    %edx,0x10(%esp)
0825f70f +0xb7:  mov    -0x14(%ebp),%edx
0825f712 +0xba:  mov    %edx,0xc(%esp)
0825f716 +0xbe:  mov    -0xc(%ebp),%edx
0825f719 +0xc1:  mov    %edx,0x8(%esp)
0825f71d +0xc5:  mov    -0x10(%ebp),%edx
0825f720 +0xc8:  mov    %edx,0x4(%esp)
0825f724 +0xcc:  mov    %eax,(%esp)
0825f727 +0xcf:  call   08600580 <_ZN15CAppLoadChecker9RequestDBEiiii>  ; CAppLoadChecker::RequestDB(int, int, int, int)
0825f72c +0xd4:  leave
0825f72d +0xd5:  ret
```

## 反编译 C

```c
// PacketDispatcher::server_load_monitoring @ 0x825f658

/* PacketDispatcher::server_load_monitoring() */

void PacketDispatcher::server_load_monitoring(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CAppLoadChecker *pCVar6;
  
  MsgQueueMgr::remain(GlobalData::s_msgq_mgr,3);
  iVar2 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,1);
  iVar3 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,0);
  iVar4 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,2);
  iVar5 = MsgQueueMgr::remain(GlobalData::s_msgq_mgr,4);
  pCVar6 = (CAppLoadChecker *)CAppLoadCheckerInstance();
  cVar1 = CAppLoadChecker::CheckLoad(pCVar6,iVar4,iVar5,iVar3,iVar2);
  if (cVar1 != '\0') {
    pCVar6 = (CAppLoadChecker *)CAppLoadCheckerInstance();
    CAppLoadChecker::RequestDB(pCVar6,iVar4,iVar5,iVar3,iVar2);
  }
  return;
}
```
