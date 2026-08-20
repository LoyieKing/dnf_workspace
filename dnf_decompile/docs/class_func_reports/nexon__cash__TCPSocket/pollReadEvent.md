# pollReadEvent

`_ZNK5nexon4cash9TCPSocket13pollReadEventEv`

`nexon::cash::TCPSocket::pollReadEvent() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081afcc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081afcc8  _ZNK5nexon4cash9TCPSocket13pollReadEventEv
#           nexon::cash::TCPSocket::pollReadEvent() const
# range [0x081afcc8, 0x081afd93]
081afcc8 +0x00:  push   %ebp
081afcc9 +0x01:  mov    %esp,%ebp
081afccb +0x03:  push   %edi
081afccc +0x04:  push   %esi
081afccd +0x05:  push   %ebx
081afcce +0x06:  sub    $0xcc,%esp
081afcd4 +0x0c:  lea    -0xac(%ebp),%eax
081afcda +0x12:  mov    %eax,-0x1c(%ebp)
081afcdd +0x15:  movl   $0x0,-0x20(%ebp)
081afce4 +0x1c:  jmp    081afcf7 <+0x2f>
081afce6 +0x1e:  mov    -0x20(%ebp),%edx
081afce9 +0x21:  mov    -0x1c(%ebp),%eax
081afcec +0x24:  movl   $0x0,(%eax,%edx,4)
081afcf3 +0x2b:  addl   $0x1,-0x20(%ebp)
081afcf7 +0x2f:  cmpl   $0x1f,-0x20(%ebp)
081afcfb +0x33:  setbe  %al
081afcfe +0x36:  test   %al,%al
081afd00 +0x38:  jne    081afce6 <+0x1e>
081afd02 +0x3a:  mov    0x8(%ebp),%eax
081afd05 +0x3d:  mov    (%eax),%eax
081afd07 +0x3f:  mov    %eax,%edx
081afd09 +0x41:  shr    $0x5,%edx
081afd0c +0x44:  mov    0x8(%ebp),%eax
081afd0f +0x47:  mov    (%eax),%eax
081afd11 +0x49:  shr    $0x5,%eax
081afd14 +0x4c:  mov    -0xac(%ebp,%eax,4),%ebx
081afd1b +0x53:  mov    0x8(%ebp),%eax
081afd1e +0x56:  mov    (%eax),%eax
081afd20 +0x58:  and    $0x1f,%eax
081afd23 +0x5b:  mov    $0x1,%esi
081afd28 +0x60:  mov    %esi,%edi
081afd2a +0x62:  mov    %eax,%ecx
081afd2c +0x64:  shl    %cl,%edi
081afd2e +0x66:  mov    %edi,%eax
081afd30 +0x68:  or     %ebx,%eax
081afd32 +0x6a:  mov    %eax,-0xac(%ebp,%edx,4)
081afd39 +0x71:  movl   $0x0,-0x2c(%ebp)
081afd40 +0x78:  movl   $0x0,-0x28(%ebp)
081afd47 +0x7f:  lea    -0x2c(%ebp),%eax
081afd4a +0x82:  mov    %eax,0x10(%esp)
081afd4e +0x86:  movl   $0x0,0xc(%esp)
081afd56 +0x8e:  movl   $0x0,0x8(%esp)
081afd5e +0x96:  lea    -0xac(%ebp),%eax
081afd64 +0x9c:  mov    %eax,0x4(%esp)
081afd68 +0xa0:  movl   $0x2,(%esp)
081afd6f +0xa7:  call   0807e840 <_init+0x1138>
081afd74 +0xac:  mov    %eax,-0x24(%ebp)
081afd77 +0xaf:  cmpl   $0x0,-0x24(%ebp)
081afd7b +0xb3:  jne    081afd84 <+0xbc>
081afd7d +0xb5:  mov    $0x0,%eax
081afd82 +0xba:  jmp    081afd89 <+0xc1>
081afd84 +0xbc:  mov    $0x1,%eax
081afd89 +0xc1:  add    $0xcc,%esp
081afd8f +0xc7:  pop    %ebx
081afd90 +0xc8:  pop    %esi
081afd91 +0xc9:  pop    %edi
081afd92 +0xca:  pop    %ebp
081afd93 +0xcb:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::pollReadEvent @ 0x81afcc8

/* nexon::cash::TCPSocket::pollReadEvent() const */

bool __thiscall nexon::cash::TCPSocket::pollReadEvent(TCPSocket *this)

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
  iVar1 = select(2,&local_b0,(fd_set *)0x0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}
```
