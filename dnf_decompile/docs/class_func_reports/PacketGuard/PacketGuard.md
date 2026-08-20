# PacketGuard

`_ZN11PacketGuardC1Ev`

`PacketGuard::PacketGuard()`

| 类 | 地址 |
|---|---|
| `PacketGuard` | `0x0858dd4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858dd4c  _ZN11PacketGuardC1Ev
#           PacketGuard::PacketGuard()
# range [0x0858dd4c, 0x0858de49]
0858dd4c +0x00:  push   %ebp
0858dd4d +0x01:  mov    %esp,%ebp
0858dd4f +0x03:  push   %esi
0858dd50 +0x04:  push   %ebx
0858dd51 +0x05:  sub    $0x30,%esp
0858dd54 +0x08:  mov    0x8(%ebp),%eax
0858dd57 +0x0b:  mov    %eax,(%esp)
0858dd5a +0x0e:  call   0858e294 <_GLOBAL__I__ZN9PacketBufC2Ev+0x69>  ; global constructors keyed to PacketBuf::PacketBuf()+0x69
0858dd5f +0x13:  mov    0x8(%ebp),%eax
0858dd62 +0x16:  movl   $0x0,0x4(%eax)
0858dd69 +0x1d:  mov    0x8(%ebp),%eax
0858dd6c +0x20:  movb   $0x0,0x8(%eax)
0858dd70 +0x24:  movl   $0x0,-0xc(%ebp)
0858dd77 +0x2b:  jmp    0858ddbd <+0x71>
0858dd79 +0x2d:  call   0807e740 <_init+0x1038>
0858dd7e +0x32:  mov    %eax,%ebx
0858dd80 +0x34:  mov    -0xc(%ebp),%eax
0858dd83 +0x37:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%eax
0858dd8a +0x3e:  mov    %eax,(%esp)
0858dd8d +0x41:  call   082a6f00 <_GLOBAL__I__ZN4CLog5this_E+0x3327>  ; global constructors keyed to CLog::this_+0x3327
0858dd92 +0x46:  mov    %ebx,0x4(%esp)
0858dd96 +0x4a:  mov    %eax,(%esp)
0858dd99 +0x4d:  call   086d9140 <_GLOBAL__I_MAX_VILLAGE_NUM+0x7971>  ; global constructors keyed to MAX_VILLAGE_NUM+0x7971
0858dd9e +0x52:  test   %eax,%eax
0858dda0 +0x54:  setne  %al
0858dda3 +0x57:  test   %al,%al
0858dda5 +0x59:  je     0858ddb9 <+0x6d>
0858dda7 +0x5b:  mov    -0xc(%ebp),%eax
0858ddaa +0x5e:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%edx
0858ddb1 +0x65:  mov    0x8(%ebp),%eax
0858ddb4 +0x68:  mov    %edx,0x4(%eax)
0858ddb7 +0x6b:  jmp    0858ddc8 <+0x7c>
0858ddb9 +0x6d:  addl   $0x1,-0xc(%ebp)
0858ddbd +0x71:  cmpl   $0x8,-0xc(%ebp)
0858ddc1 +0x75:  setle  %al
0858ddc4 +0x78:  test   %al,%al
0858ddc6 +0x7a:  jne    0858dd79 <+0x2d>
0858ddc8 +0x7c:  mov    0x8(%ebp),%eax
0858ddcb +0x7f:  mov    0x4(%eax),%eax
0858ddce +0x82:  test   %eax,%eax
0858ddd0 +0x84:  je     0858ddf1 <+0xa5>
0858ddd2 +0x86:  mov    0x8(%ebp),%eax
0858ddd5 +0x89:  mov    0x4(%eax),%eax
0858ddd8 +0x8c:  mov    %eax,(%esp)
0858dddb +0x8f:  call   0828fdba <_ZN10PacketPool7AcquireEv>  ; PacketPool::Acquire()
0858dde0 +0x94:  mov    0x8(%ebp),%edx
0858dde3 +0x97:  mov    %eax,0x4(%esp)
0858dde7 +0x9b:  mov    %edx,(%esp)
0858ddea +0x9e:  call   0858e2a0 <_GLOBAL__I__ZN9PacketBufC2Ev+0x75>  ; global constructors keyed to PacketBuf::PacketBuf()+0x75
0858ddef +0xa3:  jmp    0858de43 <+0xf7>
0858ddf1 +0xa5:  call   0807e740 <_init+0x1038>
0858ddf6 +0xaa:  mov    %eax,0x14(%esp)
0858ddfa +0xae:  movl   $"[PacketPool Acquire err - pool_type_err] thread_id(%08x)",0x10(%esp)
0858de02 +0xb6:  movl   $0x3e5,0xc(%esp)
0858de0a +0xbe:  movl   $&_ZZN11PacketGuardC1EvE19__PRETTY_FUNCTION__,0x8(%esp)
0858de12 +0xc6:  movl   $"packet_buf.cpp",0x4(%esp)
0858de1a +0xce:  movl   $0x1,(%esp)
0858de21 +0xd5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858de26 +0xda:  jmp    0858de43 <+0xf7>
0858de28 +0xdc:  mov    %edx,%ebx
0858de2a +0xde:  mov    %eax,%esi
0858de2c +0xe0:  mov    0x8(%ebp),%eax
0858de2f +0xe3:  mov    %eax,(%esp)
0858de32 +0xe6:  call   0858e29a <_GLOBAL__I__ZN9PacketBufC2Ev+0x6f>  ; global constructors keyed to PacketBuf::PacketBuf()+0x6f
0858de37 +0xeb:  mov    %esi,%eax
0858de39 +0xed:  mov    %ebx,%edx
0858de3b +0xef:  mov    %eax,(%esp)
0858de3e +0xf2:  call   08ae3750 <_Unwind_Resume>
0858de43 +0xf7:  add    $0x30,%esp
0858de46 +0xfa:  pop    %ebx
0858de47 +0xfb:  pop    %esi
0858de48 +0xfc:  pop    %ebp
0858de49 +0xfd:  ret
```

## 反编译 C

```c
// PacketGuard::PacketGuard @ 0x858dd4c

/* PacketGuard::PacketGuard() */

void __thiscall PacketGuard::PacketGuard(PacketGuard *this)

{
  pthread_t __thread1;
  int iVar1;
  PacketBuf *pPVar2;
  pthread_t pVar3;
  int local_10;
  
  InterfacePacketBuf::InterfacePacketBuf((InterfacePacketBuf *)this);
  *(undefined4 *)(this + 4) = 0;
  this[8] = (PacketGuard)0x0;
  local_10 = 0;
  do {
    if (8 < local_10) {
LAB_0858ddc8:
      if (*(int *)(this + 4) == 0) {
        pVar3 = pthread_self();
        LogManager::logFormat
                  (1,"packet_buf.cpp","PacketGuard::PacketGuard()",0x3e5,
                   "[PacketPool Acquire err - pool_type_err] thread_id(%08x)",pVar3);
      }
      else {
                    /* try { // try from 0858dddb to 0858de25 has its CatchHandler @ 0858de28 */
        pPVar2 = (PacketBuf *)PacketPool::Acquire(*(PacketPool **)(this + 4));
        InterfacePacketBuf::AcquirePacketBuf((InterfacePacketBuf *)this,pPVar2);
      }
      return;
    }
    pVar3 = pthread_self();
    __thread1 = PacketPool::getThreadID
                          (*(PacketPool **)(GlobalData::s_packet_pool_list + local_10 * 4));
    iVar1 = pthread_equal(__thread1,pVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(GlobalData::s_packet_pool_list + local_10 * 4);
      goto LAB_0858ddc8;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
