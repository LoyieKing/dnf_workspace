# dispatch_sig

`_ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TraceError` | `0x08204b0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08204b0c  _ZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)
# range [0x08204b0c, 0x08204c1d]
08204b0c +0x000:  push   %ebp
08204b0d +0x001:  mov    %esp,%ebp
08204b0f +0x003:  push   %ebx
08204b10 +0x004:  sub    $0x34,%esp
08204b13 +0x007:  lea    -0x19(%ebp),%eax
08204b16 +0x00a:  mov    %eax,0x4(%esp)
08204b1a +0x00e:  mov    0x10(%ebp),%eax
08204b1d +0x011:  mov    %eax,(%esp)
08204b20 +0x014:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08204b25 +0x019:  xor    $0x1,%eax
08204b28 +0x01c:  test   %al,%al
08204b2a +0x01e:  je     08204b55 <+0x49>
08204b2c +0x020:  movl   $0x0,0xc(%esp)
08204b34 +0x028:  movl   $0x0,0x8(%esp)
08204b3c +0x030:  movl   $&_ZZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204b44 +0x038:  movl   $0x9c74,(%esp)
08204b4b +0x03f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204b50 +0x044:  jmp    08204c18 <+0x10c>
08204b55 +0x049:  movzbl -0x19(%ebp),%eax
08204b59 +0x04d:  movsbl %al,%eax
08204b5c +0x050:  cmp    $0x2,%eax
08204b5f +0x053:  je     08204b93 <+0x87>
08204b61 +0x055:  cmp    $0x3,%eax
08204b64 +0x058:  jne    08204c13 <+0x107>
08204b6a +0x05e:  movl   $0x0,0xc(%esp)
08204b72 +0x066:  movl   $0x0,0x8(%esp)
08204b7a +0x06e:  movl   $&_ZZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204b82 +0x076:  movl   $0x9c85,(%esp)
08204b89 +0x07d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204b8e +0x082:  jmp    08204c18 <+0x10c>
08204b93 +0x087:  lea    -0x1a(%ebp),%eax
08204b96 +0x08a:  mov    %eax,0x4(%esp)
08204b9a +0x08e:  mov    0x10(%ebp),%eax
08204b9d +0x091:  mov    %eax,(%esp)
08204ba0 +0x094:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08204ba5 +0x099:  xor    $0x1,%eax
08204ba8 +0x09c:  test   %al,%al
08204baa +0x09e:  je     08204bd2 <+0xc6>
08204bac +0x0a0:  movl   $0x0,0xc(%esp)
08204bb4 +0x0a8:  movl   $0x0,0x8(%esp)
08204bbc +0x0b0:  movl   $&_ZZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204bc4 +0x0b8:  movl   $0x9cb3,(%esp)
08204bcb +0x0bf:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204bd0 +0x0c4:  jmp    08204c18 <+0x10c>
08204bd2 +0x0c6:  movzbl -0x1a(%ebp),%eax
08204bd6 +0x0ca:  movsbl %al,%ebx
08204bd9 +0x0cd:  movl   $0x0,0xc(%esp)
08204be1 +0x0d5:  movl   $0x9cb5,0x8(%esp)
08204be9 +0x0dd:  movl   $&_ZZN21Dispatcher_TraceError12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204bf1 +0x0e5:  lea    -0x18(%ebp),%eax
08204bf4 +0x0e8:  mov    %eax,(%esp)
08204bf7 +0x0eb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08204bfc +0x0f0:  mov    %ebx,0x8(%esp)
08204c00 +0x0f4:  movl   $"KILLBOSS2 client - error type(%d)",0x4(%esp)
08204c08 +0x0fc:  lea    -0x18(%ebp),%eax
08204c0b +0x0ff:  mov    %eax,(%esp)
08204c0e +0x102:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08204c13 +0x107:  mov    $0x0,%eax
08204c18 +0x10c:  add    $0x34,%esp
08204c1b +0x10f:  pop    %ebx
08204c1c +0x110:  pop    %ebp
08204c1d +0x111:  ret
```

## 反编译 C

```c
// Dispatcher_TraceError::dispatch_sig @ 0x8204b0c

/* Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_TraceError::dispatch_sig(Dispatcher_TraceError *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_1e;
  char local_1d;
  cMyTrace local_1c [20];
  
  cVar1 = PacketBuf::get_byte(param_2,&local_1d);
  if (cVar1 == '\x01') {
    if (local_1d == '\x02') {
      cVar1 = PacketBuf::get_byte(param_2,&local_1e);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x9cb3,
                         "virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",0,0);
        return uVar2;
      }
      cMyTrace::cMyTrace(local_1c,
                         "virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",
                         0x9cb5,0);
      cMyTrace::operator()(local_1c,"KILLBOSS2 client - error type(%d)",(int)local_1e);
    }
    else if (local_1d == '\x03') {
      uVar2 = LineFunc(0x9c85,"virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x9c74,"virtual int Dispatcher_TraceError::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar2;
}
```
