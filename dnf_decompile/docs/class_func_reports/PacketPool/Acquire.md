# Acquire

`_ZN10PacketPool7AcquireEv`

`PacketPool::Acquire()`

| 类 | 地址 |
|---|---|
| `PacketPool` | `0x0828fdba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fdba  _ZN10PacketPool7AcquireEv
#           PacketPool::Acquire()
# range [0x0828fdba, 0x0828fe61]
0828fdba +0x00:  push   %ebp
0828fdbb +0x01:  mov    %esp,%ebp
0828fdbd +0x03:  push   %edi
0828fdbe +0x04:  push   %esi
0828fdbf +0x05:  push   %ebx
0828fdc0 +0x06:  sub    $0x4c,%esp
0828fdc3 +0x09:  mov    0x8(%ebp),%eax
0828fdc6 +0x0c:  mov    (%eax),%eax
0828fdc8 +0x0e:  mov    %eax,(%esp)
0828fdcb +0x11:  call   082ace5a <_GLOBAL__I__ZN4CLog5this_E+0x9281>  ; global constructors keyed to CLog::this_+0x9281
0828fdd0 +0x16:  mov    %eax,-0x1c(%ebp)
0828fdd3 +0x19:  cmpl   $0x0,-0x1c(%ebp)
0828fdd7 +0x1d:  jne    0828fe4c <+0x92>
0828fdd9 +0x1f:  mov    0x8(%ebp),%eax
0828fddc +0x22:  mov    (%eax),%eax
0828fdde +0x24:  mov    %eax,(%esp)
0828fde1 +0x27:  call   082ad0c6 <_GLOBAL__I__ZN4CLog5this_E+0x94ed>  ; global constructors keyed to CLog::this_+0x94ed
0828fde6 +0x2c:  mov    %eax,%edi
0828fde8 +0x2e:  mov    0x8(%ebp),%eax
0828fdeb +0x31:  mov    (%eax),%eax
0828fded +0x33:  mov    %eax,(%esp)
0828fdf0 +0x36:  call   082ad0b0 <_GLOBAL__I__ZN4CLog5this_E+0x94d7>  ; global constructors keyed to CLog::this_+0x94d7
0828fdf5 +0x3b:  mov    %eax,%esi
0828fdf7 +0x3d:  mov    0x8(%ebp),%eax
0828fdfa +0x40:  mov    %eax,(%esp)
0828fdfd +0x43:  call   082a6f00 <_GLOBAL__I__ZN4CLog5this_E+0x3327>  ; global constructors keyed to CLog::this_+0x3327
0828fe02 +0x48:  mov    %eax,%ebx
0828fe04 +0x4a:  call   0807e740 <_init+0x1038>
0828fe09 +0x4f:  mov    %edi,0x20(%esp)
0828fe0d +0x53:  mov    %esi,0x1c(%esp)
0828fe11 +0x57:  mov    %ebx,0x18(%esp)
0828fe15 +0x5b:  mov    %eax,0x14(%esp)
0828fe19 +0x5f:  movl   $"[PacketPool alloc fail] curthreadid(%08x), poolthreadid(%08x), alloc_cnt(%d), size(%d)",0x10(%esp)
0828fe21 +0x67:  movl   $0x275,0xc(%esp)
0828fe29 +0x6f:  movl   $&_ZZN10PacketPool7AcquireEvE19__PRETTY_FUNCTION__,0x8(%esp)
0828fe31 +0x77:  movl   $"App.cpp",0x4(%esp)
0828fe39 +0x7f:  movl   $0x1,(%esp)
0828fe40 +0x86:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0828fe45 +0x8b:  mov    $0x0,%eax
0828fe4a +0x90:  jmp    0828fe5a <+0xa0>
0828fe4c +0x92:  mov    -0x1c(%ebp),%eax
0828fe4f +0x95:  mov    %eax,(%esp)
0828fe52 +0x98:  call   0858c8e2 <_ZN9PacketBuf5clearEv>  ; PacketBuf::clear()
0828fe57 +0x9d:  mov    -0x1c(%ebp),%eax
0828fe5a +0xa0:  add    $0x4c,%esp
0828fe5d +0xa3:  pop    %ebx
0828fe5e +0xa4:  pop    %esi
0828fe5f +0xa5:  pop    %edi
0828fe60 +0xa6:  pop    %ebp
0828fe61 +0xa7:  ret
```

## 反编译 C

```c
// PacketPool::Acquire @ 0x828fdba

/* PacketPool::Acquire() */

PacketBuf * __thiscall PacketPool::Acquire(PacketPool *this)

{
  PacketBuf *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  pthread_t pVar4;
  
  this_00 = (PacketBuf *)DynamicPool<PacketBuf>::Acquire(*(DynamicPool<PacketBuf> **)this);
  if (this_00 == (PacketBuf *)0x0) {
    uVar1 = DynamicPool<PacketBuf>::Size(*(DynamicPool<PacketBuf> **)this);
    uVar2 = DynamicPool<PacketBuf>::Remain(*(DynamicPool<PacketBuf> **)this);
    uVar3 = getThreadID(this);
    pVar4 = pthread_self();
    LogManager::logFormat
              (1,"App.cpp","PacketBuf* PacketPool::Acquire()",0x275,
               "[PacketPool alloc fail] curthreadid(%08x), poolthreadid(%08x), alloc_cnt(%d), size(%d)"
               ,pVar4,uVar3,uVar2,uVar1);
    this_00 = (PacketBuf *)0x0;
  }
  else {
    PacketBuf::clear(this_00);
  }
  return this_00;
}
```
