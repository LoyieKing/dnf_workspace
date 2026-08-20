# get

`_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE`

`MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX)`

| 类 | 地址 |
|---|---|
| `MsgQueueMgr` | `0x085710ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085710ae  _ZN11MsgQueueMgr3getENS_9QUEUE_IDXE
#           MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX)
# range [0x085710ae, 0x0857116f]
085710ae +0x00:  push   %ebp
085710af +0x01:  mov    %esp,%ebp
085710b1 +0x03:  push   %esi
085710b2 +0x04:  push   %ebx
085710b3 +0x05:  sub    $0x20,%esp
085710b6 +0x08:  mov    0xc(%ebp),%edx
085710b9 +0x0b:  mov    %edx,%eax
085710bb +0x0d:  add    %eax,%eax
085710bd +0x0f:  add    %edx,%eax
085710bf +0x11:  shl    $0x3,%eax
085710c2 +0x14:  add    0x8(%ebp),%eax
085710c5 +0x17:  mov    %eax,0x4(%esp)
085710c9 +0x1b:  lea    -0x10(%ebp),%eax
085710cc +0x1e:  mov    %eax,(%esp)
085710cf +0x21:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
085710d4 +0x26:  mov    0xc(%ebp),%edx
085710d7 +0x29:  mov    %edx,%eax
085710d9 +0x2b:  shl    $0x2,%eax
085710dc +0x2e:  add    %edx,%eax
085710de +0x30:  shl    $0x3,%eax
085710e1 +0x33:  add    $0x90,%eax
085710e6 +0x38:  add    0x8(%ebp),%eax
085710e9 +0x3b:  mov    %eax,(%esp)
085710ec +0x3e:  call   085713a6 <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x10e>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x10e
085710f1 +0x43:  test   %al,%al
085710f3 +0x45:  je     085710fc <+0x4e>
085710f5 +0x47:  mov    $0x0,%ebx
085710fa +0x4c:  jmp    0857115b <+0xad>
085710fc +0x4e:  mov    0xc(%ebp),%edx
085710ff +0x51:  mov    %edx,%eax
08571101 +0x53:  shl    $0x2,%eax
08571104 +0x56:  add    %edx,%eax
08571106 +0x58:  shl    $0x3,%eax
08571109 +0x5b:  add    $0x90,%eax
0857110e +0x60:  add    0x8(%ebp),%eax
08571111 +0x63:  mov    %eax,(%esp)
08571114 +0x66:  call   085713ba <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x122>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x122
08571119 +0x6b:  mov    (%eax),%eax
0857111b +0x6d:  mov    %eax,-0xc(%ebp)
0857111e +0x70:  mov    0xc(%ebp),%edx
08571121 +0x73:  mov    %edx,%eax
08571123 +0x75:  shl    $0x2,%eax
08571126 +0x78:  add    %edx,%eax
08571128 +0x7a:  shl    $0x3,%eax
0857112b +0x7d:  add    $0x90,%eax
08571130 +0x82:  add    0x8(%ebp),%eax
08571133 +0x85:  mov    %eax,(%esp)
08571136 +0x88:  call   085713ce <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x136>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x136
0857113b +0x8d:  mov    -0xc(%ebp),%ebx
0857113e +0x90:  jmp    0857115b <+0xad>
08571140 +0x92:  mov    %edx,%ebx
08571142 +0x94:  mov    %eax,%esi
08571144 +0x96:  lea    -0x10(%ebp),%eax
08571147 +0x99:  mov    %eax,(%esp)
0857114a +0x9c:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0857114f +0xa1:  mov    %esi,%eax
08571151 +0xa3:  mov    %ebx,%edx
08571153 +0xa5:  mov    %eax,(%esp)
08571156 +0xa8:  call   08ae3750 <_Unwind_Resume>
0857115b +0xad:  lea    -0x10(%ebp),%eax
0857115e +0xb0:  mov    %eax,(%esp)
08571161 +0xb3:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08571166 +0xb8:  mov    %ebx,%eax
08571168 +0xba:  add    $0x20,%esp
0857116b +0xbd:  pop    %ebx
0857116c +0xbe:  pop    %esi
0857116d +0xbf:  pop    %ebp
0857116e +0xc0:  ret
0857116f +0xc1:  nop
```

## 反编译 C

```c
// MsgQueueMgr::get @ 0x85710ae

/* MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX) */

undefined4 __thiscall MsgQueueMgr::get(MsgQueueMgr *this,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  Guard<Mutex> local_14 [4];
  undefined4 local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 085710ec to 0857113a has its CatchHandler @ 08571140 */
  cVar1 = std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::empty
                    ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
                     (this + param_2 * 0x28 + 0x90));
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::front();
    local_10 = *puVar2;
    std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::pop
              ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
               (this + param_2 * 0x28 + 0x90));
    uVar3 = local_10;
  }
  else {
    uVar3 = 0;
  }
  Guard<Mutex>::~Guard(local_14);
  return uVar3;
}
```
