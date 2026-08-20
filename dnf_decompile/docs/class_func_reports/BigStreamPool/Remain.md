# Remain

`_ZN13BigStreamPool6RemainEv`

`BigStreamPool::Remain()`

| 类 | 地址 |
|---|---|
| `BigStreamPool` | `0x082903f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082903f6  _ZN13BigStreamPool6RemainEv
#           BigStreamPool::Remain()
# range [0x082903f6, 0x0829044f]
082903f6 +0x00:  push   %ebp
082903f7 +0x01:  mov    %esp,%ebp
082903f9 +0x03:  push   %esi
082903fa +0x04:  push   %ebx
082903fb +0x05:  sub    $0x20,%esp
082903fe +0x08:  mov    0x8(%ebp),%eax
08290401 +0x0b:  mov    %eax,0x4(%esp)
08290405 +0x0f:  lea    -0xc(%ebp),%eax
08290408 +0x12:  mov    %eax,(%esp)
0829040b +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08290410 +0x1a:  mov    0x8(%ebp),%eax
08290413 +0x1d:  mov    0x18(%eax),%eax
08290416 +0x20:  mov    %eax,(%esp)
08290419 +0x23:  call   082adf28 <_GLOBAL__I__ZN4CLog5this_E+0xa34f>  ; global constructors keyed to CLog::this_+0xa34f
0829041e +0x28:  mov    %eax,%ebx
08290420 +0x2a:  lea    -0xc(%ebp),%eax
08290423 +0x2d:  mov    %eax,(%esp)
08290426 +0x30:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0829042b +0x35:  mov    %ebx,%eax
0829042d +0x37:  add    $0x20,%esp
08290430 +0x3a:  pop    %ebx
08290431 +0x3b:  pop    %esi
08290432 +0x3c:  pop    %ebp
08290433 +0x3d:  ret
08290434 +0x3e:  mov    %edx,%ebx
08290436 +0x40:  mov    %eax,%esi
08290438 +0x42:  lea    -0xc(%ebp),%eax
0829043b +0x45:  mov    %eax,(%esp)
0829043e +0x48:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08290443 +0x4d:  mov    %esi,%eax
08290445 +0x4f:  mov    %ebx,%edx
08290447 +0x51:  mov    %eax,(%esp)
0829044a +0x54:  call   08ae3750 <_Unwind_Resume>
0829044f +0x59:  nop
```

## 反编译 C

```c
// BigStreamPool::Remain @ 0x82903f6

/* BigStreamPool::Remain() */

undefined4 __thiscall BigStreamPool::Remain(BigStreamPool *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 08290419 to 0829041d has its CatchHandler @ 08290434 */
  uVar1 = DynamicPool<BigStream>::Remain(*(DynamicPool<BigStream> **)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}
```
