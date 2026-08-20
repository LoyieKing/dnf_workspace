# ~PacketGuard

`_ZN11PacketGuardD1Ev`

`PacketGuard::~PacketGuard()`

| 类 | 地址 |
|---|---|
| `PacketGuard` | `0x0858de80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858de80  _ZN11PacketGuardD1Ev
#           PacketGuard::~PacketGuard()
# range [0x0858de80, 0x0858df2f]
0858de80 +0x00:  push   %ebp
0858de81 +0x01:  mov    %esp,%ebp
0858de83 +0x03:  push   %esi
0858de84 +0x04:  push   %ebx
0858de85 +0x05:  sub    $0x20,%esp
0858de88 +0x08:  mov    0x8(%ebp),%eax
0858de8b +0x0b:  mov    0x4(%eax),%eax
0858de8e +0x0e:  test   %eax,%eax
0858de90 +0x10:  je     0858deab <+0x2b>
0858de92 +0x12:  mov    0x8(%ebp),%eax
0858de95 +0x15:  mov    (%eax),%edx
0858de97 +0x17:  mov    0x8(%ebp),%eax
0858de9a +0x1a:  mov    0x4(%eax),%eax
0858de9d +0x1d:  mov    %edx,0x4(%esp)
0858dea1 +0x21:  mov    %eax,(%esp)
0858dea4 +0x24:  call   0858e2ae <_GLOBAL__I__ZN9PacketBufC2Ev+0x83>  ; global constructors keyed to PacketBuf::PacketBuf()+0x83
0858dea9 +0x29:  jmp    0858df1e <+0x9e>
0858deab +0x2b:  mov    0x8(%ebp),%eax
0858deae +0x2e:  movzbl 0x8(%eax),%eax
0858deb2 +0x32:  xor    $0x1,%eax
0858deb5 +0x35:  test   %al,%al
0858deb7 +0x37:  je     0858df1e <+0x9e>
0858deb9 +0x39:  mov    0x8(%ebp),%eax
0858debc +0x3c:  mov    (%eax),%eax
0858debe +0x3e:  mov    %eax,(%esp)
0858dec1 +0x41:  call   08110b1c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2e
0858dec6 +0x46:  mov    %eax,%ebx
0858dec8 +0x48:  call   0807e740 <_init+0x1038>
0858decd +0x4d:  mov    %ebx,0x18(%esp)
0858ded1 +0x51:  mov    %eax,0x14(%esp)
0858ded5 +0x55:  movl   $"[PacketPool Free err - pool_type_err] pool_type(%08x), packet_idx(%d)",0x10(%esp)
0858dedd +0x5d:  movl   $0x3f8,0xc(%esp)
0858dee5 +0x65:  movl   $&_ZZN11PacketGuardD1EvE19__PRETTY_FUNCTION__,0x8(%esp)
0858deed +0x6d:  movl   $"packet_buf.cpp",0x4(%esp)
0858def5 +0x75:  movl   $0x1,(%esp)
0858defc +0x7c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858df01 +0x81:  jmp    0858df1e <+0x9e>
0858df03 +0x83:  mov    %edx,%ebx
0858df05 +0x85:  mov    %eax,%esi
0858df07 +0x87:  mov    0x8(%ebp),%eax
0858df0a +0x8a:  mov    %eax,(%esp)
0858df0d +0x8d:  call   0858e29a <_GLOBAL__I__ZN9PacketBufC2Ev+0x6f>  ; global constructors keyed to PacketBuf::PacketBuf()+0x6f
0858df12 +0x92:  mov    %esi,%eax
0858df14 +0x94:  mov    %ebx,%edx
0858df16 +0x96:  mov    %eax,(%esp)
0858df19 +0x99:  call   08ae3750 <_Unwind_Resume>
0858df1e +0x9e:  mov    0x8(%ebp),%eax
0858df21 +0xa1:  mov    %eax,(%esp)
0858df24 +0xa4:  call   0858e29a <_GLOBAL__I__ZN9PacketBufC2Ev+0x6f>  ; global constructors keyed to PacketBuf::PacketBuf()+0x6f
0858df29 +0xa9:  add    $0x20,%esp
0858df2c +0xac:  pop    %ebx
0858df2d +0xad:  pop    %esi
0858df2e +0xae:  pop    %ebp
0858df2f +0xaf:  ret
```

## 反编译 C

```c
// PacketGuard::~PacketGuard @ 0x858de80

/* PacketGuard::~PacketGuard() */

void __thiscall PacketGuard::~PacketGuard(PacketGuard *this)

{
  undefined4 uVar1;
  pthread_t pVar2;
  
  if (*(int *)(this + 4) == 0) {
    if (this[8] != (PacketGuard)0x1) {
      uVar1 = PacketBuf::get_index(*(PacketBuf **)this);
      pVar2 = pthread_self();
      LogManager::logFormat
                (1,"packet_buf.cpp","PacketGuard::~PacketGuard()",0x3f8,
                 "[PacketPool Free err - pool_type_err] pool_type(%08x), packet_idx(%d)",pVar2,uVar1
                );
    }
  }
  else {
                    /* try { // try from 0858dea4 to 0858df00 has its CatchHandler @ 0858df03 */
    PacketPool::Free(*(PacketPool **)(this + 4),*(PacketBuf **)this);
  }
  InterfacePacketBuf::~InterfacePacketBuf((InterfacePacketBuf *)this);
  return;
}
```
