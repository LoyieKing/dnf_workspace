# pollReadEvent

`_ZNK5nexon4cash9UDPSocket13pollReadEventEv`

`nexon::cash::UDPSocket::pollReadEvent() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af268` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af268  _ZNK5nexon4cash9UDPSocket13pollReadEventEv
#           nexon::cash::UDPSocket::pollReadEvent() const
# range [0x081af268, 0x081af333]
081af268 +0x00:  push   %ebp
081af269 +0x01:  mov    %esp,%ebp
081af26b +0x03:  push   %edi
081af26c +0x04:  push   %esi
081af26d +0x05:  push   %ebx
081af26e +0x06:  sub    $0xcc,%esp
081af274 +0x0c:  lea    -0xac(%ebp),%eax
081af27a +0x12:  mov    %eax,-0x1c(%ebp)
081af27d +0x15:  movl   $0x0,-0x20(%ebp)
081af284 +0x1c:  jmp    081af297 <+0x2f>
081af286 +0x1e:  mov    -0x20(%ebp),%edx
081af289 +0x21:  mov    -0x1c(%ebp),%eax
081af28c +0x24:  movl   $0x0,(%eax,%edx,4)
081af293 +0x2b:  addl   $0x1,-0x20(%ebp)
081af297 +0x2f:  cmpl   $0x1f,-0x20(%ebp)
081af29b +0x33:  setbe  %al
081af29e +0x36:  test   %al,%al
081af2a0 +0x38:  jne    081af286 <+0x1e>
081af2a2 +0x3a:  mov    0x8(%ebp),%eax
081af2a5 +0x3d:  mov    (%eax),%eax
081af2a7 +0x3f:  mov    %eax,%edx
081af2a9 +0x41:  shr    $0x5,%edx
081af2ac +0x44:  mov    0x8(%ebp),%eax
081af2af +0x47:  mov    (%eax),%eax
081af2b1 +0x49:  shr    $0x5,%eax
081af2b4 +0x4c:  mov    -0xac(%ebp,%eax,4),%ebx
081af2bb +0x53:  mov    0x8(%ebp),%eax
081af2be +0x56:  mov    (%eax),%eax
081af2c0 +0x58:  and    $0x1f,%eax
081af2c3 +0x5b:  mov    $0x1,%esi
081af2c8 +0x60:  mov    %esi,%edi
081af2ca +0x62:  mov    %eax,%ecx
081af2cc +0x64:  shl    %cl,%edi
081af2ce +0x66:  mov    %edi,%eax
081af2d0 +0x68:  or     %ebx,%eax
081af2d2 +0x6a:  mov    %eax,-0xac(%ebp,%edx,4)
081af2d9 +0x71:  movl   $0x0,-0x2c(%ebp)
081af2e0 +0x78:  movl   $0x1388,-0x28(%ebp)
081af2e7 +0x7f:  lea    -0x2c(%ebp),%eax
081af2ea +0x82:  mov    %eax,0x10(%esp)
081af2ee +0x86:  movl   $0x0,0xc(%esp)
081af2f6 +0x8e:  movl   $0x0,0x8(%esp)
081af2fe +0x96:  lea    -0xac(%ebp),%eax
081af304 +0x9c:  mov    %eax,0x4(%esp)
081af308 +0xa0:  movl   $0x2,(%esp)
081af30f +0xa7:  call   0807e840 <_init+0x1138>
081af314 +0xac:  mov    %eax,-0x24(%ebp)
081af317 +0xaf:  cmpl   $0x0,-0x24(%ebp)
081af31b +0xb3:  jne    081af324 <+0xbc>
081af31d +0xb5:  mov    $0x0,%eax
081af322 +0xba:  jmp    081af329 <+0xc1>
081af324 +0xbc:  mov    $0x1,%eax
081af329 +0xc1:  add    $0xcc,%esp
081af32f +0xc7:  pop    %ebx
081af330 +0xc8:  pop    %esi
081af331 +0xc9:  pop    %edi
081af332 +0xca:  pop    %ebp
081af333 +0xcb:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::pollReadEvent @ 0x81af268

/* nexon::cash::UDPSocket::pollReadEvent() const */

bool __thiscall nexon::cash::UDPSocket::pollReadEvent(UDPSocket *this)

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
  local_30.tv_usec = 5000;
  iVar1 = select(2,&local_b0,(fd_set *)0x0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}
```
