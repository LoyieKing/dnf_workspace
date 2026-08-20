# setOptNonBlock

`_ZN5nexon4cash9UDPSocket14setOptNonBlockEv`

`nexon::cash::UDPSocket::setOptNonBlock()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081aefa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aefa2  _ZN5nexon4cash9UDPSocket14setOptNonBlockEv
#           nexon::cash::UDPSocket::setOptNonBlock()
# range [0x081aefa2, 0x081aefff]
081aefa2 +0x00:  push   %ebp
081aefa3 +0x01:  mov    %esp,%ebp
081aefa5 +0x03:  sub    $0x28,%esp
081aefa8 +0x06:  mov    0x8(%ebp),%eax
081aefab +0x09:  mov    (%eax),%eax
081aefad +0x0b:  movl   $0x0,0x8(%esp)
081aefb5 +0x13:  movl   $0x3,0x4(%esp)
081aefbd +0x1b:  mov    %eax,(%esp)
081aefc0 +0x1e:  call   0807e470 <_init+0xd68>
081aefc5 +0x23:  mov    %eax,-0xc(%ebp)
081aefc8 +0x26:  orl    $0x800,-0xc(%ebp)
081aefcf +0x2d:  mov    0x8(%ebp),%eax
081aefd2 +0x30:  mov    (%eax),%eax
081aefd4 +0x32:  mov    -0xc(%ebp),%edx
081aefd7 +0x35:  mov    %edx,0x8(%esp)
081aefdb +0x39:  movl   $0x4,0x4(%esp)
081aefe3 +0x41:  mov    %eax,(%esp)
081aefe6 +0x44:  call   0807e470 <_init+0xd68>
081aefeb +0x49:  shr    $0x1f,%eax
081aefee +0x4c:  test   %al,%al
081aeff0 +0x4e:  je     081aeff9 <+0x57>
081aeff2 +0x50:  mov    $0x0,%eax
081aeff7 +0x55:  jmp    081aeffe <+0x5c>
081aeff9 +0x57:  mov    $0x1,%eax
081aeffe +0x5c:  leave
081aefff +0x5d:  ret
```

## 反编译 C

```c
// nexon::cash::UDPSocket::setOptNonBlock @ 0x81aefa2

/* nexon::cash::UDPSocket::setOptNonBlock() */

bool __thiscall nexon::cash::UDPSocket::setOptNonBlock(UDPSocket *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*(int *)this,3,0);
  iVar2 = fcntl(*(int *)this,4,uVar1 | 0x800);
  return -1 < iVar2;
}
```
