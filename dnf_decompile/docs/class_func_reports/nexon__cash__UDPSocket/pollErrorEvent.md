# pollErrorEvent

`_ZNK5nexon4cash9UDPSocket14pollErrorEventEv`

`nexon::cash::UDPSocket::pollErrorEvent() const`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081af400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af400  _ZNK5nexon4cash9UDPSocket14pollErrorEventEv
#           nexon::cash::UDPSocket::pollErrorEvent() const
# range [0x081af400, 0x081af4cb]
081af400 +0x00:  push   %ebp
081af401 +0x01:  mov    %esp,%ebp
081af403 +0x03:  push   %edi
081af404 +0x04:  push   %esi
081af405 +0x05:  push   %ebx
081af406 +0x06:  sub    $0xcc,%esp
081af40c +0x0c:  lea    -0xac(%ebp),%eax
081af412 +0x12:  mov    %eax,-0x1c(%ebp)
081af415 +0x15:  movl   $0x0,-0x20(%ebp)
081af41c +0x1c:  jmp    081af42f <+0x2f>
081af41e +0x1e:  mov    -0x20(%ebp),%edx
081af421 +0x21:  mov    -0x1c(%ebp),%eax
081af424 +0x24:  movl   $0x0,(%eax,%edx,4)
081af42b +0x2b:  addl   $0x1,-0x20(%ebp)
081af42f +0x2f:  cmpl   $0x1f,-0x20(%ebp)
081af433 +0x33:  setbe  %al
081af436 +0x36:  test   %al,%al
081af438 +0x38:  jne    081af41e <+0x1e>
081af43a +0x3a:  mov    0x8(%ebp),%eax
081af43d +0x3d:  mov    (%eax),%eax
081af43f +0x3f:  mov    %eax,%edx
081af441 +0x41:  shr    $0x5,%edx
081af444 +0x44:  mov    0x8(%ebp),%eax
081af447 +0x47:  mov    (%eax),%eax
081af449 +0x49:  shr    $0x5,%eax
081af44c +0x4c:  mov    -0xac(%ebp,%eax,4),%ebx
081af453 +0x53:  mov    0x8(%ebp),%eax
081af456 +0x56:  mov    (%eax),%eax
081af458 +0x58:  and    $0x1f,%eax
081af45b +0x5b:  mov    $0x1,%esi
081af460 +0x60:  mov    %esi,%edi
081af462 +0x62:  mov    %eax,%ecx
081af464 +0x64:  shl    %cl,%edi
081af466 +0x66:  mov    %edi,%eax
081af468 +0x68:  or     %ebx,%eax
081af46a +0x6a:  mov    %eax,-0xac(%ebp,%edx,4)
081af471 +0x71:  movl   $0x0,-0x2c(%ebp)
081af478 +0x78:  movl   $0x0,-0x28(%ebp)
081af47f +0x7f:  lea    -0x2c(%ebp),%eax
081af482 +0x82:  mov    %eax,0x10(%esp)
081af486 +0x86:  lea    -0xac(%ebp),%eax
081af48c +0x8c:  mov    %eax,0xc(%esp)
081af490 +0x90:  movl   $0x0,0x8(%esp)
081af498 +0x98:  movl   $0x0,0x4(%esp)
081af4a0 +0xa0:  movl   $0x2,(%esp)
081af4a7 +0xa7:  call   0807e840 <_init+0x1138>
081af4ac +0xac:  mov    %eax,-0x24(%ebp)
081af4af +0xaf:  cmpl   $0x0,-0x24(%ebp)
081af4b3 +0xb3:  jne    081af4bc <+0xbc>
081af4b5 +0xb5:  mov    $0x0,%eax
081af4ba +0xba:  jmp    081af4c1 <+0xc1>
081af4bc +0xbc:  mov    $0x1,%eax
081af4c1 +0xc1:  add    $0xcc,%esp
081af4c7 +0xc7:  pop    %ebx
081af4c8 +0xc8:  pop    %esi
081af4c9 +0xc9:  pop    %edi
081af4ca +0xca:  pop    %ebp
081af4cb +0xcb:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::pollErrorEvent @ 0x81af400

/* nexon::cash::UDPSocket::pollErrorEvent() const */

bool __thiscall nexon::cash::UDPSocket::pollErrorEvent(UDPSocket *this)

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
