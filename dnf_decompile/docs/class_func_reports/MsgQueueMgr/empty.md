# empty

`_ZN11MsgQueueMgr5emptyENS_9QUEUE_IDXE`

`MsgQueueMgr::empty(MsgQueueMgr::QUEUE_IDX)`

| 类 | 地址 |
|---|---|
| `MsgQueueMgr` | `0x08571170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08571170  _ZN11MsgQueueMgr5emptyENS_9QUEUE_IDXE
#           MsgQueueMgr::empty(MsgQueueMgr::QUEUE_IDX)
# range [0x08571170, 0x085711df]
08571170 +0x00:  push   %ebp
08571171 +0x01:  mov    %esp,%ebp
08571173 +0x03:  push   %esi
08571174 +0x04:  push   %ebx
08571175 +0x05:  sub    $0x20,%esp
08571178 +0x08:  mov    0xc(%ebp),%edx
0857117b +0x0b:  mov    %edx,%eax
0857117d +0x0d:  add    %eax,%eax
0857117f +0x0f:  add    %edx,%eax
08571181 +0x11:  shl    $0x3,%eax
08571184 +0x14:  add    0x8(%ebp),%eax
08571187 +0x17:  mov    %eax,0x4(%esp)
0857118b +0x1b:  lea    -0xc(%ebp),%eax
0857118e +0x1e:  mov    %eax,(%esp)
08571191 +0x21:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08571196 +0x26:  mov    0xc(%ebp),%edx
08571199 +0x29:  mov    %edx,%eax
0857119b +0x2b:  shl    $0x2,%eax
0857119e +0x2e:  add    %edx,%eax
085711a0 +0x30:  shl    $0x3,%eax
085711a3 +0x33:  add    $0x90,%eax
085711a8 +0x38:  add    0x8(%ebp),%eax
085711ab +0x3b:  mov    %eax,(%esp)
085711ae +0x3e:  call   085713a6 <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x10e>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x10e
085711b3 +0x43:  mov    %eax,%ebx
085711b5 +0x45:  lea    -0xc(%ebp),%eax
085711b8 +0x48:  mov    %eax,(%esp)
085711bb +0x4b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
085711c0 +0x50:  mov    %ebx,%eax
085711c2 +0x52:  add    $0x20,%esp
085711c5 +0x55:  pop    %ebx
085711c6 +0x56:  pop    %esi
085711c7 +0x57:  pop    %ebp
085711c8 +0x58:  ret
085711c9 +0x59:  mov    %edx,%ebx
085711cb +0x5b:  mov    %eax,%esi
085711cd +0x5d:  lea    -0xc(%ebp),%eax
085711d0 +0x60:  mov    %eax,(%esp)
085711d3 +0x63:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
085711d8 +0x68:  mov    %esi,%eax
085711da +0x6a:  mov    %ebx,%edx
085711dc +0x6c:  mov    %eax,(%esp)
085711df +0x6f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// MsgQueueMgr::empty @ 0x8571170

/* MsgQueueMgr::empty(MsgQueueMgr::QUEUE_IDX) */

undefined4 __thiscall MsgQueueMgr::empty(MsgQueueMgr *this,int param_2)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 085711ae to 085711b2 has its CatchHandler @ 085711c9 */
  uVar1 = std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::empty
                    ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
                     (this + param_2 * 0x28 + 0x90));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}
```
