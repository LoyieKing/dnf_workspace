# pollWriteEvent

`_ZNK5nexon4cash9TCPSocket14pollWriteEventEv`

`nexon::cash::TCPSocket::pollWriteEvent() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081afd94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081afd94  _ZNK5nexon4cash9TCPSocket14pollWriteEventEv
#           nexon::cash::TCPSocket::pollWriteEvent() const
# range [0x081afd94, 0x081afe5f]
081afd94 +0x00:  push   %ebp
081afd95 +0x01:  mov    %esp,%ebp
081afd97 +0x03:  push   %edi
081afd98 +0x04:  push   %esi
081afd99 +0x05:  push   %ebx
081afd9a +0x06:  sub    $0xcc,%esp
081afda0 +0x0c:  lea    -0xac(%ebp),%eax
081afda6 +0x12:  mov    %eax,-0x1c(%ebp)
081afda9 +0x15:  movl   $0x0,-0x20(%ebp)
081afdb0 +0x1c:  jmp    081afdc3 <+0x2f>
081afdb2 +0x1e:  mov    -0x20(%ebp),%edx
081afdb5 +0x21:  mov    -0x1c(%ebp),%eax
081afdb8 +0x24:  movl   $0x0,(%eax,%edx,4)
081afdbf +0x2b:  addl   $0x1,-0x20(%ebp)
081afdc3 +0x2f:  cmpl   $0x1f,-0x20(%ebp)
081afdc7 +0x33:  setbe  %al
081afdca +0x36:  test   %al,%al
081afdcc +0x38:  jne    081afdb2 <+0x1e>
081afdce +0x3a:  mov    0x8(%ebp),%eax
081afdd1 +0x3d:  mov    (%eax),%eax
081afdd3 +0x3f:  mov    %eax,%edx
081afdd5 +0x41:  shr    $0x5,%edx
081afdd8 +0x44:  mov    0x8(%ebp),%eax
081afddb +0x47:  mov    (%eax),%eax
081afddd +0x49:  shr    $0x5,%eax
081afde0 +0x4c:  mov    -0xac(%ebp,%eax,4),%ebx
081afde7 +0x53:  mov    0x8(%ebp),%eax
081afdea +0x56:  mov    (%eax),%eax
081afdec +0x58:  and    $0x1f,%eax
081afdef +0x5b:  mov    $0x1,%esi
081afdf4 +0x60:  mov    %esi,%edi
081afdf6 +0x62:  mov    %eax,%ecx
081afdf8 +0x64:  shl    %cl,%edi
081afdfa +0x66:  mov    %edi,%eax
081afdfc +0x68:  or     %ebx,%eax
081afdfe +0x6a:  mov    %eax,-0xac(%ebp,%edx,4)
081afe05 +0x71:  movl   $0x0,-0x2c(%ebp)
081afe0c +0x78:  movl   $0x0,-0x28(%ebp)
081afe13 +0x7f:  lea    -0x2c(%ebp),%eax
081afe16 +0x82:  mov    %eax,0x10(%esp)
081afe1a +0x86:  movl   $0x0,0xc(%esp)
081afe22 +0x8e:  lea    -0xac(%ebp),%eax
081afe28 +0x94:  mov    %eax,0x8(%esp)
081afe2c +0x98:  movl   $0x0,0x4(%esp)
081afe34 +0xa0:  movl   $0x2,(%esp)
081afe3b +0xa7:  call   0807e840 <_init+0x1138>
081afe40 +0xac:  mov    %eax,-0x24(%ebp)
081afe43 +0xaf:  cmpl   $0x0,-0x24(%ebp)
081afe47 +0xb3:  jne    081afe50 <+0xbc>
081afe49 +0xb5:  mov    $0x0,%eax
081afe4e +0xba:  jmp    081afe55 <+0xc1>
081afe50 +0xbc:  mov    $0x1,%eax
081afe55 +0xc1:  add    $0xcc,%esp
081afe5b +0xc7:  pop    %ebx
081afe5c +0xc8:  pop    %esi
081afe5d +0xc9:  pop    %edi
081afe5e +0xca:  pop    %ebp
081afe5f +0xcb:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::pollWriteEvent @ 0x81afd94

/* nexon::cash::TCPSocket::pollWriteEvent() const */

bool __thiscall nexon::cash::TCPSocket::pollWriteEvent(TCPSocket *this)

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
