# pollWriteEvent

`_ZNK5nexon4cash9UDPSocket14pollWriteEventEv`

`nexon::cash::UDPSocket::pollWriteEvent() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af334` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af334  _ZNK5nexon4cash9UDPSocket14pollWriteEventEv
#           nexon::cash::UDPSocket::pollWriteEvent() const
# range [0x081af334, 0x081af3ff]
081af334 +0x00:  push   %ebp
081af335 +0x01:  mov    %esp,%ebp
081af337 +0x03:  push   %edi
081af338 +0x04:  push   %esi
081af339 +0x05:  push   %ebx
081af33a +0x06:  sub    $0xcc,%esp
081af340 +0x0c:  lea    -0xac(%ebp),%eax
081af346 +0x12:  mov    %eax,-0x1c(%ebp)
081af349 +0x15:  movl   $0x0,-0x20(%ebp)
081af350 +0x1c:  jmp    081af363 <+0x2f>
081af352 +0x1e:  mov    -0x20(%ebp),%edx
081af355 +0x21:  mov    -0x1c(%ebp),%eax
081af358 +0x24:  movl   $0x0,(%eax,%edx,4)
081af35f +0x2b:  addl   $0x1,-0x20(%ebp)
081af363 +0x2f:  cmpl   $0x1f,-0x20(%ebp)
081af367 +0x33:  setbe  %al
081af36a +0x36:  test   %al,%al
081af36c +0x38:  jne    081af352 <+0x1e>
081af36e +0x3a:  mov    0x8(%ebp),%eax
081af371 +0x3d:  mov    (%eax),%eax
081af373 +0x3f:  mov    %eax,%edx
081af375 +0x41:  shr    $0x5,%edx
081af378 +0x44:  mov    0x8(%ebp),%eax
081af37b +0x47:  mov    (%eax),%eax
081af37d +0x49:  shr    $0x5,%eax
081af380 +0x4c:  mov    -0xac(%ebp,%eax,4),%ebx
081af387 +0x53:  mov    0x8(%ebp),%eax
081af38a +0x56:  mov    (%eax),%eax
081af38c +0x58:  and    $0x1f,%eax
081af38f +0x5b:  mov    $0x1,%esi
081af394 +0x60:  mov    %esi,%edi
081af396 +0x62:  mov    %eax,%ecx
081af398 +0x64:  shl    %cl,%edi
081af39a +0x66:  mov    %edi,%eax
081af39c +0x68:  or     %ebx,%eax
081af39e +0x6a:  mov    %eax,-0xac(%ebp,%edx,4)
081af3a5 +0x71:  movl   $0x0,-0x2c(%ebp)
081af3ac +0x78:  movl   $0x0,-0x28(%ebp)
081af3b3 +0x7f:  lea    -0x2c(%ebp),%eax
081af3b6 +0x82:  mov    %eax,0x10(%esp)
081af3ba +0x86:  movl   $0x0,0xc(%esp)
081af3c2 +0x8e:  lea    -0xac(%ebp),%eax
081af3c8 +0x94:  mov    %eax,0x8(%esp)
081af3cc +0x98:  movl   $0x0,0x4(%esp)
081af3d4 +0xa0:  movl   $0x2,(%esp)
081af3db +0xa7:  call   0807e840 <_init+0x1138>
081af3e0 +0xac:  mov    %eax,-0x24(%ebp)
081af3e3 +0xaf:  cmpl   $0x0,-0x24(%ebp)
081af3e7 +0xb3:  jne    081af3f0 <+0xbc>
081af3e9 +0xb5:  mov    $0x0,%eax
081af3ee +0xba:  jmp    081af3f5 <+0xc1>
081af3f0 +0xbc:  mov    $0x1,%eax
081af3f5 +0xc1:  add    $0xcc,%esp
081af3fb +0xc7:  pop    %ebx
081af3fc +0xc8:  pop    %esi
081af3fd +0xc9:  pop    %edi
081af3fe +0xca:  pop    %ebp
081af3ff +0xcb:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::pollWriteEvent @ 0x81af334

/* nexon::cash::UDPSocket::pollWriteEvent() const */

bool __thiscall nexon::cash::UDPSocket::pollWriteEvent(UDPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 0;
  iVar1 = select(2,(fd_set *)0x0,&local_b0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}
```
