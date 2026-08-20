# Remain

`_ZN10StreamPool6RemainEv`

`StreamPool::Remain()`

| 类 | 地址 |
|---|---|
| `StreamPool` | `0x0828fc1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fc1c  _ZN10StreamPool6RemainEv
#           StreamPool::Remain()
# range [0x0828fc1c, 0x0828fc75]
0828fc1c +0x00:  push   %ebp
0828fc1d +0x01:  mov    %esp,%ebp
0828fc1f +0x03:  push   %esi
0828fc20 +0x04:  push   %ebx
0828fc21 +0x05:  sub    $0x20,%esp
0828fc24 +0x08:  mov    0x8(%ebp),%eax
0828fc27 +0x0b:  mov    %eax,0x4(%esp)
0828fc2b +0x0f:  lea    -0xc(%ebp),%eax
0828fc2e +0x12:  mov    %eax,(%esp)
0828fc31 +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0828fc36 +0x1a:  mov    0x8(%ebp),%eax
0828fc39 +0x1d:  mov    0x18(%eax),%eax
0828fc3c +0x20:  mov    %eax,(%esp)
0828fc3f +0x23:  call   082acb76 <_GLOBAL__I__ZN4CLog5this_E+0x8f9d>  ; global constructors keyed to CLog::this_+0x8f9d
0828fc44 +0x28:  mov    %eax,%ebx
0828fc46 +0x2a:  lea    -0xc(%ebp),%eax
0828fc49 +0x2d:  mov    %eax,(%esp)
0828fc4c +0x30:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fc51 +0x35:  mov    %ebx,%eax
0828fc53 +0x37:  add    $0x20,%esp
0828fc56 +0x3a:  pop    %ebx
0828fc57 +0x3b:  pop    %esi
0828fc58 +0x3c:  pop    %ebp
0828fc59 +0x3d:  ret
0828fc5a +0x3e:  mov    %edx,%ebx
0828fc5c +0x40:  mov    %eax,%esi
0828fc5e +0x42:  lea    -0xc(%ebp),%eax
0828fc61 +0x45:  mov    %eax,(%esp)
0828fc64 +0x48:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fc69 +0x4d:  mov    %esi,%eax
0828fc6b +0x4f:  mov    %ebx,%edx
0828fc6d +0x51:  mov    %eax,(%esp)
0828fc70 +0x54:  call   08ae3750 <_Unwind_Resume>
0828fc75 +0x59:  nop
```

## 反编译 C

```c
// StreamPool::Remain @ 0x828fc1c

/* StreamPool::Remain() */

undefined4 __thiscall StreamPool::Remain(StreamPool *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 0828fc3f to 0828fc43 has its CatchHandler @ 0828fc5a */
  uVar1 = DynamicPool<Stream>::Remain(*(DynamicPool<Stream> **)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}
```
