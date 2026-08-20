# Acquire

`_ZN13BigStreamPool7AcquireEPKci`

`BigStreamPool::Acquire(char const*, int)`

| 类 | 地址 |
|---|---|
| `BigStreamPool` | `0x08290262` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290262  _ZN13BigStreamPool7AcquireEPKci
#           BigStreamPool::Acquire(char const*, int)
# range [0x08290262, 0x08290303]
08290262 +0x00:  push   %ebp
08290263 +0x01:  mov    %esp,%ebp
08290265 +0x03:  push   %esi
08290266 +0x04:  push   %ebx
08290267 +0x05:  sub    $0x20,%esp
0829026a +0x08:  mov    0x8(%ebp),%eax
0829026d +0x0b:  mov    %eax,0x4(%esp)
08290271 +0x0f:  lea    -0x10(%ebp),%eax
08290274 +0x12:  mov    %eax,(%esp)
08290277 +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0829027c +0x1a:  mov    0x8(%ebp),%eax
0829027f +0x1d:  mov    0x18(%eax),%eax
08290282 +0x20:  mov    %eax,(%esp)
08290285 +0x23:  call   082adb60 <_GLOBAL__I__ZN4CLog5this_E+0x9f87>  ; global constructors keyed to CLog::this_+0x9f87
0829028a +0x28:  mov    %eax,-0xc(%ebp)
0829028d +0x2b:  cmpl   $0x0,-0xc(%ebp)
08290291 +0x2f:  jne    0829029a <+0x38>
08290293 +0x31:  mov    $0x0,%ebx
08290298 +0x36:  jmp    082902f0 <+0x8e>
0829029a +0x38:  mov    -0xc(%ebp),%eax
0829029d +0x3b:  mov    0xc(%ebp),%edx
082902a0 +0x3e:  mov    %edx,0x18(%eax)
082902a3 +0x41:  mov    -0xc(%ebp),%eax
082902a6 +0x44:  mov    0x10(%ebp),%edx
082902a9 +0x47:  mov    %edx,0x1c(%eax)
082902ac +0x4a:  mov    -0xc(%ebp),%eax
082902af +0x4d:  movl   $0x2,0x20(%eax)
082902b6 +0x54:  movl   $0x1,0x4(%esp)
082902be +0x5c:  mov    -0xc(%ebp),%eax
082902c1 +0x5f:  mov    %eax,(%esp)
082902c4 +0x62:  call   0861bec4 <_ZN6Stream14set_big_streamEb>  ; Stream::set_big_stream(bool)
082902c9 +0x67:  mov    -0xc(%ebp),%eax
082902cc +0x6a:  movb   $0x1,0x24(%eax)
082902d0 +0x6e:  mov    -0xc(%ebp),%ebx
082902d3 +0x71:  jmp    082902f0 <+0x8e>
082902d5 +0x73:  mov    %edx,%ebx
082902d7 +0x75:  mov    %eax,%esi
082902d9 +0x77:  lea    -0x10(%ebp),%eax
082902dc +0x7a:  mov    %eax,(%esp)
082902df +0x7d:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082902e4 +0x82:  mov    %esi,%eax
082902e6 +0x84:  mov    %ebx,%edx
082902e8 +0x86:  mov    %eax,(%esp)
082902eb +0x89:  call   08ae3750 <_Unwind_Resume>
082902f0 +0x8e:  lea    -0x10(%ebp),%eax
082902f3 +0x91:  mov    %eax,(%esp)
082902f6 +0x94:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082902fb +0x99:  mov    %ebx,%eax
082902fd +0x9b:  add    $0x20,%esp
08290300 +0x9e:  pop    %ebx
08290301 +0x9f:  pop    %esi
08290302 +0xa0:  pop    %ebp
08290303 +0xa1:  ret
```

## 反编译 C

```c
// BigStreamPool::Acquire @ 0x8290262

/* BigStreamPool::Acquire(char const*, int) */

Stream * __thiscall BigStreamPool::Acquire(BigStreamPool *this,char *param_1,int param_2)

{
  Stream *pSVar1;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08290285 to 082902c8 has its CatchHandler @ 082902d5 */
  local_10 = (Stream *)DynamicPool<BigStream>::Acquire(*(DynamicPool<BigStream> **)(this + 0x18));
  if (local_10 == (Stream *)0x0) {
    pSVar1 = (Stream *)0x0;
  }
  else {
    *(char **)(local_10 + 0x18) = param_1;
    *(int *)(local_10 + 0x1c) = param_2;
    *(undefined4 *)(local_10 + 0x20) = 2;
    Stream::set_big_stream(local_10,true);
    local_10[0x24] = (Stream)0x1;
    pSVar1 = local_10;
  }
  Guard<Mutex>::~Guard(local_14);
  return pSVar1;
}
```
