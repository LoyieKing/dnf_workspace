# remain

`_ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE`

`MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)`

| 类 | 地址 |
|---|---|
| `MsgQueueMgr` | `0x085711e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085711e4  _ZN11MsgQueueMgr6remainENS_9QUEUE_IDXE
#           MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX)
# range [0x085711e4, 0x08571253]
085711e4 +0x00:  push   %ebp
085711e5 +0x01:  mov    %esp,%ebp
085711e7 +0x03:  push   %esi
085711e8 +0x04:  push   %ebx
085711e9 +0x05:  sub    $0x20,%esp
085711ec +0x08:  mov    0xc(%ebp),%edx
085711ef +0x0b:  mov    %edx,%eax
085711f1 +0x0d:  add    %eax,%eax
085711f3 +0x0f:  add    %edx,%eax
085711f5 +0x11:  shl    $0x3,%eax
085711f8 +0x14:  add    0x8(%ebp),%eax
085711fb +0x17:  mov    %eax,0x4(%esp)
085711ff +0x1b:  lea    -0xc(%ebp),%eax
08571202 +0x1e:  mov    %eax,(%esp)
08571205 +0x21:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0857120a +0x26:  mov    0xc(%ebp),%edx
0857120d +0x29:  mov    %edx,%eax
0857120f +0x2b:  shl    $0x2,%eax
08571212 +0x2e:  add    %edx,%eax
08571214 +0x30:  shl    $0x3,%eax
08571217 +0x33:  add    $0x90,%eax
0857121c +0x38:  add    0x8(%ebp),%eax
0857121f +0x3b:  mov    %eax,(%esp)
08571222 +0x3e:  call   085713e2 <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x14a>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x14a
08571227 +0x43:  mov    %eax,%ebx
08571229 +0x45:  lea    -0xc(%ebp),%eax
0857122c +0x48:  mov    %eax,(%esp)
0857122f +0x4b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08571234 +0x50:  mov    %ebx,%eax
08571236 +0x52:  add    $0x20,%esp
08571239 +0x55:  pop    %ebx
0857123a +0x56:  pop    %esi
0857123b +0x57:  pop    %ebp
0857123c +0x58:  ret
0857123d +0x59:  mov    %edx,%ebx
0857123f +0x5b:  mov    %eax,%esi
08571241 +0x5d:  lea    -0xc(%ebp),%eax
08571244 +0x60:  mov    %eax,(%esp)
08571247 +0x63:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0857124c +0x68:  mov    %esi,%eax
0857124e +0x6a:  mov    %ebx,%edx
08571250 +0x6c:  mov    %eax,(%esp)
08571253 +0x6f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// MsgQueueMgr::remain @ 0x85711e4

/* MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX) */

undefined4 __thiscall MsgQueueMgr::remain(MsgQueueMgr *this,int param_2)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 08571222 to 08571226 has its CatchHandler @ 0857123d */
  uVar1 = std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::size
                    ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
                     (this + param_2 * 0x28 + 0x90));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}
```
