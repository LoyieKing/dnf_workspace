# Free

`_ZN13BigStreamPool4FreeEP6Stream`

`BigStreamPool::Free(Stream*)`

| 类 | 地址 |
|---|---|
| `BigStreamPool` | `0x08290304` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290304  _ZN13BigStreamPool4FreeEP6Stream
#           BigStreamPool::Free(Stream*)
# range [0x08290304, 0x082903df]
08290304 +0x00:  push   %ebp
08290305 +0x01:  mov    %esp,%ebp
08290307 +0x03:  push   %esi
08290308 +0x04:  push   %ebx
08290309 +0x05:  sub    $0x30,%esp
0829030c +0x08:  mov    0xc(%ebp),%eax
0829030f +0x0b:  mov    %eax,-0xc(%ebp)
08290312 +0x0e:  cmpl   $0x0,-0xc(%ebp)
08290316 +0x12:  jne    08290322 <+0x1e>
08290318 +0x14:  mov    $0x0,%ebx
0829031d +0x19:  jmp    082903d7 <+0xd3>
08290322 +0x1e:  mov    0x8(%ebp),%eax
08290325 +0x21:  mov    %eax,0x4(%esp)
08290329 +0x25:  lea    -0x10(%ebp),%eax
0829032c +0x28:  mov    %eax,(%esp)
0829032f +0x2b:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08290334 +0x30:  mov    0x8(%ebp),%eax
08290337 +0x33:  mov    0x18(%eax),%eax
0829033a +0x36:  mov    -0xc(%ebp),%edx
0829033d +0x39:  mov    %edx,0x4(%esp)
08290341 +0x3d:  mov    %eax,(%esp)
08290344 +0x40:  call   082adda4 <_GLOBAL__I__ZN4CLog5this_E+0xa1cb>  ; global constructors keyed to CLog::this_+0xa1cb
08290349 +0x45:  xor    $0x1,%eax
0829034c +0x48:  test   %al,%al
0829034e +0x4a:  je     0829038a <+0x86>
08290350 +0x4c:  mov    -0xc(%ebp),%eax
08290353 +0x4f:  mov    %eax,0x14(%esp)
08290357 +0x53:  movl   $"[BigStreamPool::Free] invalid ptr : %p",0x10(%esp)
0829035f +0x5b:  movl   $0x2fc,0xc(%esp)
08290367 +0x63:  movl   $&_ZZN13BigStreamPool4FreeEP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0829036f +0x6b:  movl   $"App.cpp",0x4(%esp)
08290377 +0x73:  movl   $0x1,(%esp)
0829037e +0x7a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08290383 +0x7f:  mov    $0x0,%ebx
08290388 +0x84:  jmp    082903cc <+0xc8>
0829038a +0x86:  mov    -0xc(%ebp),%eax
0829038d +0x89:  mov    %eax,(%esp)
08290390 +0x8c:  call   0861be8a <_ZN6Stream5resetEv>  ; Stream::reset()
08290395 +0x91:  mov    0x8(%ebp),%eax
08290398 +0x94:  mov    0x18(%eax),%eax
0829039b +0x97:  mov    -0xc(%ebp),%edx
0829039e +0x9a:  mov    %edx,0x4(%esp)
082903a2 +0x9e:  mov    %eax,(%esp)
082903a5 +0xa1:  call   082ade0c <_GLOBAL__I__ZN4CLog5this_E+0xa233>  ; global constructors keyed to CLog::this_+0xa233
082903aa +0xa6:  mov    $0x1,%ebx
082903af +0xab:  jmp    082903cc <+0xc8>
082903b1 +0xad:  mov    %edx,%ebx
082903b3 +0xaf:  mov    %eax,%esi
082903b5 +0xb1:  lea    -0x10(%ebp),%eax
082903b8 +0xb4:  mov    %eax,(%esp)
082903bb +0xb7:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082903c0 +0xbc:  mov    %esi,%eax
082903c2 +0xbe:  mov    %ebx,%edx
082903c4 +0xc0:  mov    %eax,(%esp)
082903c7 +0xc3:  call   08ae3750 <_Unwind_Resume>
082903cc +0xc8:  lea    -0x10(%ebp),%eax
082903cf +0xcb:  mov    %eax,(%esp)
082903d2 +0xce:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082903d7 +0xd3:  mov    %ebx,%eax
082903d9 +0xd5:  add    $0x30,%esp
082903dc +0xd8:  pop    %ebx
082903dd +0xd9:  pop    %esi
082903de +0xda:  pop    %ebp
082903df +0xdb:  ret
```

## 反编译 C

```c
// BigStreamPool::Free @ 0x8290304

/* BigStreamPool::Free(Stream*) */

bool __thiscall BigStreamPool::Free(BigStreamPool *this,Stream *param_1)

{
  char cVar1;
  bool bVar2;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  local_10 = param_1;
  if (param_1 == (Stream *)0x0) {
    bVar2 = false;
  }
  else {
    Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08290344 to 082903a9 has its CatchHandler @ 082903b1 */
    cVar1 = DynamicPool<BigStream>::IsValidPtr
                      (*(DynamicPool<BigStream> **)(this + 0x18),(BigStream *)local_10);
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      Stream::reset(local_10);
      DynamicPool<BigStream>::Free(*(DynamicPool<BigStream> **)(this + 0x18),(BigStream *)local_10);
    }
    else {
      LogManager::logFormat
                (1,"App.cpp","bool BigStreamPool::Free(Stream*)",0x2fc,
                 "[BigStreamPool::Free] invalid ptr : %p",local_10);
    }
    Guard<Mutex>::~Guard(local_14);
  }
  return bVar2;
}
```
