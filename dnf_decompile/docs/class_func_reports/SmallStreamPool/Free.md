# Free

`_ZN15SmallStreamPool4FreeEP6Stream`

`SmallStreamPool::Free(Stream*)`

| 类 | 地址 |
|---|---|
| `SmallStreamPool` | `0x08290004` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290004  _ZN15SmallStreamPool4FreeEP6Stream
#           SmallStreamPool::Free(Stream*)
# range [0x08290004, 0x082900df]
08290004 +0x00:  push   %ebp
08290005 +0x01:  mov    %esp,%ebp
08290007 +0x03:  push   %esi
08290008 +0x04:  push   %ebx
08290009 +0x05:  sub    $0x30,%esp
0829000c +0x08:  mov    0xc(%ebp),%eax
0829000f +0x0b:  mov    %eax,-0xc(%ebp)
08290012 +0x0e:  cmpl   $0x0,-0xc(%ebp)
08290016 +0x12:  jne    08290022 <+0x1e>
08290018 +0x14:  mov    $0x0,%ebx
0829001d +0x19:  jmp    082900d7 <+0xd3>
08290022 +0x1e:  mov    0x8(%ebp),%eax
08290025 +0x21:  mov    %eax,0x4(%esp)
08290029 +0x25:  lea    -0x10(%ebp),%eax
0829002c +0x28:  mov    %eax,(%esp)
0829002f +0x2b:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08290034 +0x30:  mov    0x8(%ebp),%eax
08290037 +0x33:  mov    0x18(%eax),%eax
0829003a +0x36:  mov    -0xc(%ebp),%edx
0829003d +0x39:  mov    %edx,0x4(%esp)
08290041 +0x3d:  mov    %eax,(%esp)
08290044 +0x40:  call   082ad66e <_GLOBAL__I__ZN4CLog5this_E+0x9a95>  ; global constructors keyed to CLog::this_+0x9a95
08290049 +0x45:  xor    $0x1,%eax
0829004c +0x48:  test   %al,%al
0829004e +0x4a:  je     0829008a <+0x86>
08290050 +0x4c:  mov    -0xc(%ebp),%eax
08290053 +0x4f:  mov    %eax,0x14(%esp)
08290057 +0x53:  movl   $"[BigStreamPool::Free] invalid ptr : %p",0x10(%esp)
0829005f +0x5b:  movl   $0x2ae,0xc(%esp)
08290067 +0x63:  movl   $&_ZZN15SmallStreamPool4FreeEP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0829006f +0x6b:  movl   $"App.cpp",0x4(%esp)
08290077 +0x73:  movl   $0x1,(%esp)
0829007e +0x7a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08290083 +0x7f:  mov    $0x0,%ebx
08290088 +0x84:  jmp    082900cc <+0xc8>
0829008a +0x86:  mov    -0xc(%ebp),%eax
0829008d +0x89:  mov    %eax,(%esp)
08290090 +0x8c:  call   0861be8a <_ZN6Stream5resetEv>  ; Stream::reset()
08290095 +0x91:  mov    0x8(%ebp),%eax
08290098 +0x94:  mov    0x18(%eax),%eax
0829009b +0x97:  mov    -0xc(%ebp),%edx
0829009e +0x9a:  mov    %edx,0x4(%esp)
082900a2 +0x9e:  mov    %eax,(%esp)
082900a5 +0xa1:  call   082ad6d6 <_GLOBAL__I__ZN4CLog5this_E+0x9afd>  ; global constructors keyed to CLog::this_+0x9afd
082900aa +0xa6:  mov    $0x1,%ebx
082900af +0xab:  jmp    082900cc <+0xc8>
082900b1 +0xad:  mov    %edx,%ebx
082900b3 +0xaf:  mov    %eax,%esi
082900b5 +0xb1:  lea    -0x10(%ebp),%eax
082900b8 +0xb4:  mov    %eax,(%esp)
082900bb +0xb7:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082900c0 +0xbc:  mov    %esi,%eax
082900c2 +0xbe:  mov    %ebx,%edx
082900c4 +0xc0:  mov    %eax,(%esp)
082900c7 +0xc3:  call   08ae3750 <_Unwind_Resume>
082900cc +0xc8:  lea    -0x10(%ebp),%eax
082900cf +0xcb:  mov    %eax,(%esp)
082900d2 +0xce:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
082900d7 +0xd3:  mov    %ebx,%eax
082900d9 +0xd5:  add    $0x30,%esp
082900dc +0xd8:  pop    %ebx
082900dd +0xd9:  pop    %esi
082900de +0xda:  pop    %ebp
082900df +0xdb:  ret
```

## 反编译 C

```c
// SmallStreamPool::Free @ 0x8290004

/* SmallStreamPool::Free(Stream*) */

bool __thiscall SmallStreamPool::Free(SmallStreamPool *this,Stream *param_1)

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
                    /* try { // try from 08290044 to 082900a9 has its CatchHandler @ 082900b1 */
    cVar1 = DynamicPool<SmallStream>::IsValidPtr
                      (*(DynamicPool<SmallStream> **)(this + 0x18),(SmallStream *)local_10);
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      Stream::reset(local_10);
      DynamicPool<SmallStream>::Free
                (*(DynamicPool<SmallStream> **)(this + 0x18),(SmallStream *)local_10);
    }
    else {
      LogManager::logFormat
                (1,"App.cpp","bool SmallStreamPool::Free(Stream*)",0x2ae,
                 "[BigStreamPool::Free] invalid ptr : %p",local_10);
    }
    Guard<Mutex>::~Guard(local_14);
  }
  return bVar2;
}
```
