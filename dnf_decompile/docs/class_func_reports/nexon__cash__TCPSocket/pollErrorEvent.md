# pollErrorEvent

`_ZNK5nexon4cash9TCPSocket14pollErrorEventEv`

`nexon::cash::TCPSocket::pollErrorEvent() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081afe60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081afe60  _ZNK5nexon4cash9TCPSocket14pollErrorEventEv
#           nexon::cash::TCPSocket::pollErrorEvent() const
# range [0x081afe60, 0x081aff2b]
081afe60 +0x00:  push   %ebp
081afe61 +0x01:  mov    %esp,%ebp
081afe63 +0x03:  push   %edi
081afe64 +0x04:  push   %esi
081afe65 +0x05:  push   %ebx
081afe66 +0x06:  sub    $0xcc,%esp
081afe6c +0x0c:  lea    -0xac(%ebp),%eax
081afe72 +0x12:  mov    %eax,-0x1c(%ebp)
081afe75 +0x15:  movl   $0x0,-0x20(%ebp)
081afe7c +0x1c:  jmp    081afe8f <+0x2f>
081afe7e +0x1e:  mov    -0x20(%ebp),%edx
081afe81 +0x21:  mov    -0x1c(%ebp),%eax
081afe84 +0x24:  movl   $0x0,(%eax,%edx,4)
081afe8b +0x2b:  addl   $0x1,-0x20(%ebp)
081afe8f +0x2f:  cmpl   $0x1f,-0x20(%ebp)
081afe93 +0x33:  setbe  %al
081afe96 +0x36:  test   %al,%al
081afe98 +0x38:  jne    081afe7e <+0x1e>
081afe9a +0x3a:  mov    0x8(%ebp),%eax
081afe9d +0x3d:  mov    (%eax),%eax
081afe9f +0x3f:  mov    %eax,%edx
081afea1 +0x41:  shr    $0x5,%edx
081afea4 +0x44:  mov    0x8(%ebp),%eax
081afea7 +0x47:  mov    (%eax),%eax
081afea9 +0x49:  shr    $0x5,%eax
081afeac +0x4c:  mov    -0xac(%ebp,%eax,4),%ebx
081afeb3 +0x53:  mov    0x8(%ebp),%eax
081afeb6 +0x56:  mov    (%eax),%eax
081afeb8 +0x58:  and    $0x1f,%eax
081afebb +0x5b:  mov    $0x1,%esi
081afec0 +0x60:  mov    %esi,%edi
081afec2 +0x62:  mov    %eax,%ecx
081afec4 +0x64:  shl    %cl,%edi
081afec6 +0x66:  mov    %edi,%eax
081afec8 +0x68:  or     %ebx,%eax
081afeca +0x6a:  mov    %eax,-0xac(%ebp,%edx,4)
081afed1 +0x71:  movl   $0x0,-0x2c(%ebp)
081afed8 +0x78:  movl   $0x0,-0x28(%ebp)
081afedf +0x7f:  lea    -0x2c(%ebp),%eax
081afee2 +0x82:  mov    %eax,0x10(%esp)
081afee6 +0x86:  lea    -0xac(%ebp),%eax
081afeec +0x8c:  mov    %eax,0xc(%esp)
081afef0 +0x90:  movl   $0x0,0x8(%esp)
081afef8 +0x98:  movl   $0x0,0x4(%esp)
081aff00 +0xa0:  movl   $0x2,(%esp)
081aff07 +0xa7:  call   0807e840 <_init+0x1138>
081aff0c +0xac:  mov    %eax,-0x24(%ebp)
081aff0f +0xaf:  cmpl   $0x0,-0x24(%ebp)
081aff13 +0xb3:  jne    081aff1c <+0xbc>
081aff15 +0xb5:  mov    $0x0,%eax
081aff1a +0xba:  jmp    081aff21 <+0xc1>
081aff1c +0xbc:  mov    $0x1,%eax
081aff21 +0xc1:  add    $0xcc,%esp
081aff27 +0xc7:  pop    %ebx
081aff28 +0xc8:  pop    %esi
081aff29 +0xc9:  pop    %edi
081aff2a +0xca:  pop    %ebp
081aff2b +0xcb:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::pollErrorEvent @ 0x81afe60

/* nexon::cash::TCPSocket::pollErrorEvent() const */

bool __thiscall nexon::cash::TCPSocket::pollErrorEvent(TCPSocket *this)

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
  iVar1 = select(2,(fd_set *)0x0,(fd_set *)0x0,&local_b0,&local_30);
  return iVar1 != 0;
}
```
