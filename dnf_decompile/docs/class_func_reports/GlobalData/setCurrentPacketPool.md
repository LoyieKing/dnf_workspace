# setCurrentPacketPool

`_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm`

`GlobalData::setCurrentPacketPool(THREAD_TYPE, unsigned long)`

| 类 | 地址 |
|---|---|
| `GlobalData` | `0x0829e4c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829e4c4  _ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm
#           GlobalData::setCurrentPacketPool(THREAD_TYPE, unsigned long)
# range [0x0829e4c4, 0x0829e5be]
0829e4c4 +0x00:  push   %ebp
0829e4c5 +0x01:  mov    %esp,%ebp
0829e4c7 +0x03:  sub    $0x28,%esp
0829e4ca +0x06:  mov    0x8(%ebp),%eax
0829e4cd +0x09:  test   %eax,%eax
0829e4cf +0x0b:  js     0829e4d9 <+0x15>
0829e4d1 +0x0d:  mov    0x8(%ebp),%eax
0829e4d4 +0x10:  cmp    $0x8,%eax
0829e4d7 +0x13:  jle    0829e51d <+0x59>
0829e4d9 +0x15:  mov    0x8(%ebp),%eax
0829e4dc +0x18:  mov    0xc(%ebp),%edx
0829e4df +0x1b:  mov    %edx,0x18(%esp)
0829e4e3 +0x1f:  mov    %eax,0x14(%esp)
0829e4e7 +0x23:  movl   $"[PacketPool setCurrentThreadID err] pool_type(%d), thread_id(%08x)",0x10(%esp)
0829e4ef +0x2b:  movl   $0x2190,0xc(%esp)
0829e4f7 +0x33:  movl   $&_ZZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEmE19__PRETTY_FUNCTION__,0x8(%esp)
0829e4ff +0x3b:  movl   $"App.cpp",0x4(%esp)
0829e507 +0x43:  movl   $0x1,(%esp)
0829e50e +0x4a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829e513 +0x4f:  mov    $0x0,%eax
0829e518 +0x54:  jmp    0829e5bd <+0xf9>
0829e51d +0x59:  mov    0x8(%ebp),%eax
0829e520 +0x5c:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%eax
0829e527 +0x63:  mov    %eax,(%esp)
0829e52a +0x66:  call   082a6f00 <_GLOBAL__I__ZN4CLog5this_E+0x3327>  ; global constructors keyed to CLog::this_+0x3327
0829e52f +0x6b:  mov    %eax,0x4(%esp)
0829e533 +0x6f:  movl   $0x0,(%esp)
0829e53a +0x76:  call   086d9140 <_GLOBAL__I_MAX_VILLAGE_NUM+0x7971>  ; global constructors keyed to MAX_VILLAGE_NUM+0x7971
0829e53f +0x7b:  test   %eax,%eax
0829e541 +0x7d:  sete   %al
0829e544 +0x80:  test   %al,%al
0829e546 +0x82:  je     0829e59f <+0xdb>
0829e548 +0x84:  mov    0x8(%ebp),%eax
0829e54b +0x87:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%eax
0829e552 +0x8e:  mov    %eax,(%esp)
0829e555 +0x91:  call   082a6f00 <_GLOBAL__I__ZN4CLog5this_E+0x3327>  ; global constructors keyed to CLog::this_+0x3327
0829e55a +0x96:  mov    0x8(%ebp),%edx
0829e55d +0x99:  mov    %eax,0x1c(%esp)
0829e561 +0x9d:  mov    0xc(%ebp),%eax
0829e564 +0xa0:  mov    %eax,0x18(%esp)
0829e568 +0xa4:  mov    %edx,0x14(%esp)
0829e56c +0xa8:  movl   $"[PacketPool already ThreadID setting] pool_type(%d), thread_id(%08x) alreadyID(%08x)",0x10(%esp)
0829e574 +0xb0:  movl   $0x2195,0xc(%esp)
0829e57c +0xb8:  movl   $&_ZZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEmE19__PRETTY_FUNCTION__,0x8(%esp)
0829e584 +0xc0:  movl   $"App.cpp",0x4(%esp)
0829e58c +0xc8:  movl   $0x1,(%esp)
0829e593 +0xcf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829e598 +0xd4:  mov    $0x0,%eax
0829e59d +0xd9:  jmp    0829e5bd <+0xf9>
0829e59f +0xdb:  mov    0x8(%ebp),%eax
0829e5a2 +0xde:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%eax
0829e5a9 +0xe5:  mov    0xc(%ebp),%edx
0829e5ac +0xe8:  mov    %edx,0x4(%esp)
0829e5b0 +0xec:  mov    %eax,(%esp)
0829e5b3 +0xef:  call   082a6ef2 <_GLOBAL__I__ZN4CLog5this_E+0x3319>  ; global constructors keyed to CLog::this_+0x3319
0829e5b8 +0xf4:  mov    $0x1,%eax
0829e5bd +0xf9:  leave
0829e5be +0xfa:  ret
```

## 反编译 C

```c
// GlobalData::setCurrentPacketPool @ 0x829e4c4

/* GlobalData::setCurrentPacketPool(THREAD_TYPE, unsigned long) */

undefined4 GlobalData::setCurrentPacketPool(int param_1,ulong param_2)

{
  undefined4 uVar1;
  pthread_t __thread2;
  int iVar2;
  
  if ((param_1 < 0) || (8 < param_1)) {
    LogManager::logFormat
              (1,"App.cpp","static bool GlobalData::setCurrentPacketPool(THREAD_TYPE, pthread_t)",
               0x2190,"[PacketPool setCurrentThreadID err] pool_type(%d), thread_id(%08x)",param_1,
               param_2);
    uVar1 = 0;
  }
  else {
    __thread2 = PacketPool::getThreadID(*(PacketPool **)(s_packet_pool_list + param_1 * 4));
    iVar2 = pthread_equal(0,__thread2);
    if (iVar2 == 0) {
      uVar1 = PacketPool::getThreadID(*(PacketPool **)(s_packet_pool_list + param_1 * 4));
      LogManager::logFormat
                (1,"App.cpp","static bool GlobalData::setCurrentPacketPool(THREAD_TYPE, pthread_t)",
                 0x2195,
                 "[PacketPool already ThreadID setting] pool_type(%d), thread_id(%08x) alreadyID(%08x)"
                 ,param_1,param_2,uVar1);
      uVar1 = 0;
    }
    else {
      PacketPool::setThreadID(*(PacketPool **)(s_packet_pool_list + param_1 * 4),param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
