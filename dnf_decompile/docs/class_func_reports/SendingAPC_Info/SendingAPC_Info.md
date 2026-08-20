# SendingAPC_Info

`_ZN15SendingAPC_InfoC1Ev`

`SendingAPC_Info::SendingAPC_Info()`

| 类 | 地址 |
|---|---|
| `SendingAPC_Info` | `0x085fe860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe860  _ZN15SendingAPC_InfoC1Ev
#           SendingAPC_Info::SendingAPC_Info()
# range [0x085fe860, 0x085fe8c9]
085fe860 +0x00:  push   %ebp
085fe861 +0x01:  mov    %esp,%ebp
085fe863 +0x03:  push   %esi
085fe864 +0x04:  push   %ebx
085fe865 +0x05:  sub    $0x10,%esp
085fe868 +0x08:  mov    0x8(%ebp),%eax
085fe86b +0x0b:  add    $0x4,%eax
085fe86e +0x0e:  mov    %eax,(%esp)
085fe871 +0x11:  call   0858c8c0 <_ZN9PacketBufC1Ev>  ; PacketBuf::PacketBuf()
085fe876 +0x16:  mov    0x8(%ebp),%eax
085fe879 +0x19:  add    $0x4,%eax
085fe87c +0x1c:  mov    %eax,(%esp)
085fe87f +0x1f:  call   0858c8e2 <_ZN9PacketBuf5clearEv>  ; PacketBuf::clear()
085fe884 +0x24:  mov    0x8(%ebp),%eax
085fe887 +0x27:  add    $&_ZL14gUnicodeBuffer+0xce0c,%eax
085fe88c +0x2c:  movl   $0xbc,0x8(%esp)
085fe894 +0x34:  movl   $0x0,0x4(%esp)
085fe89c +0x3c:  mov    %eax,(%esp)
085fe89f +0x3f:  call   0807dcc0 <_init+0x5b8>
085fe8a4 +0x44:  add    $0x10,%esp
085fe8a7 +0x47:  pop    %ebx
085fe8a8 +0x48:  pop    %esi
085fe8a9 +0x49:  pop    %ebp
085fe8aa +0x4a:  ret
085fe8ab +0x4b:  mov    %edx,%ebx
085fe8ad +0x4d:  mov    %eax,%esi
085fe8af +0x4f:  mov    0x8(%ebp),%eax
085fe8b2 +0x52:  add    $0x4,%eax
085fe8b5 +0x55:  mov    %eax,(%esp)
085fe8b8 +0x58:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
085fe8bd +0x5d:  mov    %esi,%eax
085fe8bf +0x5f:  mov    %ebx,%edx
085fe8c1 +0x61:  mov    %eax,(%esp)
085fe8c4 +0x64:  call   08ae3750 <_Unwind_Resume>
085fe8c9 +0x69:  nop
```

## 反编译 C

```c
// SendingAPC_Info::SendingAPC_Info @ 0x85fe860

/* SendingAPC_Info::SendingAPC_Info() */

void __thiscall SendingAPC_Info::SendingAPC_Info(SendingAPC_Info *this)

{
  PacketBuf::PacketBuf((PacketBuf *)(this + 4));
                    /* try { // try from 085fe87f to 085fe883 has its CatchHandler @ 085fe8ab */
  PacketBuf::clear((PacketBuf *)(this + 4));
  memset(this + 0x17338,0,0xbc);
  return;
}
```
