# Free

`_ZN10StreamPool4FreeEP6Stream`

`StreamPool::Free(Stream*)`

| 类 | 地址 |
|---|---|
| `StreamPool` | `0x0828fb28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fb28  _ZN10StreamPool4FreeEP6Stream
#           StreamPool::Free(Stream*)
# range [0x0828fb28, 0x0828fc05]
0828fb28 +0x00:  push   %ebp
0828fb29 +0x01:  mov    %esp,%ebp
0828fb2b +0x03:  push   %esi
0828fb2c +0x04:  push   %ebx
0828fb2d +0x05:  sub    $0x30,%esp
0828fb30 +0x08:  cmpl   $0x0,0xc(%ebp)
0828fb34 +0x0c:  jne    0828fb40 <+0x18>
0828fb36 +0x0e:  mov    $0x0,%ebx
0828fb3b +0x13:  jmp    0828fbfc <+0xd4>
0828fb40 +0x18:  mov    0x8(%ebp),%eax
0828fb43 +0x1b:  mov    %eax,0x4(%esp)
0828fb47 +0x1f:  lea    -0xc(%ebp),%eax
0828fb4a +0x22:  mov    %eax,(%esp)
0828fb4d +0x25:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0828fb52 +0x2a:  mov    0xc(%ebp),%eax
0828fb55 +0x2d:  movb   $0x0,0x24(%eax)
0828fb59 +0x31:  mov    0x8(%ebp),%eax
0828fb5c +0x34:  mov    0x18(%eax),%eax
0828fb5f +0x37:  mov    0xc(%ebp),%edx
0828fb62 +0x3a:  mov    %edx,0x4(%esp)
0828fb66 +0x3e:  mov    %eax,(%esp)
0828fb69 +0x41:  call   082ac9f2 <_GLOBAL__I__ZN4CLog5this_E+0x8e19>  ; global constructors keyed to CLog::this_+0x8e19
0828fb6e +0x46:  xor    $0x1,%eax
0828fb71 +0x49:  test   %al,%al
0828fb73 +0x4b:  je     0828fbaf <+0x87>
0828fb75 +0x4d:  mov    0xc(%ebp),%eax
0828fb78 +0x50:  mov    %eax,0x14(%esp)
0828fb7c +0x54:  movl   $"[StreamPool::Free] invalid ptr : %p",0x10(%esp)
0828fb84 +0x5c:  movl   $0x239,0xc(%esp)
0828fb8c +0x64:  movl   $&_ZZN10StreamPool4FreeEP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0828fb94 +0x6c:  movl   $"App.cpp",0x4(%esp)
0828fb9c +0x74:  movl   $0x1,(%esp)
0828fba3 +0x7b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0828fba8 +0x80:  mov    $0x0,%ebx
0828fbad +0x85:  jmp    0828fbf1 <+0xc9>
0828fbaf +0x87:  mov    0xc(%ebp),%eax
0828fbb2 +0x8a:  mov    %eax,(%esp)
0828fbb5 +0x8d:  call   0861be8a <_ZN6Stream5resetEv>  ; Stream::reset()
0828fbba +0x92:  mov    0x8(%ebp),%eax
0828fbbd +0x95:  mov    0x18(%eax),%eax
0828fbc0 +0x98:  mov    0xc(%ebp),%edx
0828fbc3 +0x9b:  mov    %edx,0x4(%esp)
0828fbc7 +0x9f:  mov    %eax,(%esp)
0828fbca +0xa2:  call   082aca5a <_GLOBAL__I__ZN4CLog5this_E+0x8e81>  ; global constructors keyed to CLog::this_+0x8e81
0828fbcf +0xa7:  mov    $0x1,%ebx
0828fbd4 +0xac:  jmp    0828fbf1 <+0xc9>
0828fbd6 +0xae:  mov    %edx,%ebx
0828fbd8 +0xb0:  mov    %eax,%esi
0828fbda +0xb2:  lea    -0xc(%ebp),%eax
0828fbdd +0xb5:  mov    %eax,(%esp)
0828fbe0 +0xb8:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fbe5 +0xbd:  mov    %esi,%eax
0828fbe7 +0xbf:  mov    %ebx,%edx
0828fbe9 +0xc1:  mov    %eax,(%esp)
0828fbec +0xc4:  call   08ae3750 <_Unwind_Resume>
0828fbf1 +0xc9:  lea    -0xc(%ebp),%eax
0828fbf4 +0xcc:  mov    %eax,(%esp)
0828fbf7 +0xcf:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0828fbfc +0xd4:  mov    %ebx,%eax
0828fbfe +0xd6:  add    $0x30,%esp
0828fc01 +0xd9:  pop    %ebx
0828fc02 +0xda:  pop    %esi
0828fc03 +0xdb:  pop    %ebp
0828fc04 +0xdc:  ret
0828fc05 +0xdd:  nop
```

## 反编译 C

```c
// StreamPool::Free @ 0x828fb28

/* StreamPool::Free(Stream*) */

bool __thiscall StreamPool::Free(StreamPool *this,Stream *param_1)

{
  char cVar1;
  bool bVar2;
  Guard<Mutex> local_10 [4];
  
  if (param_1 == (Stream *)0x0) {
    bVar2 = false;
  }
  else {
    Guard<Mutex>::Guard(local_10,(Mutex *)this);
    param_1[0x24] = (Stream)0x0;
                    /* try { // try from 0828fb69 to 0828fbce has its CatchHandler @ 0828fbd6 */
    cVar1 = DynamicPool<Stream>::IsValidPtr(*(DynamicPool<Stream> **)(this + 0x18),param_1);
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      Stream::reset(param_1);
      DynamicPool<Stream>::Free(*(DynamicPool<Stream> **)(this + 0x18),param_1);
    }
    else {
      LogManager::logFormat
                (1,"App.cpp","bool StreamPool::Free(Stream*)",0x239,
                 "[StreamPool::Free] invalid ptr : %p",param_1);
    }
    Guard<Mutex>::~Guard(local_10);
  }
  return bVar2;
}
```
