# Close

`_ZN10DbmwClient5CloseEv`

`DbmwClient::Close()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120ab0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120ab0  _ZN10DbmwClient5CloseEv
#           DbmwClient::Close()
# range [0x08120ab0, 0x08120af5]
08120ab0 +0x00:  push   %ebp
08120ab1 +0x01:  mov    %esp,%ebp
08120ab3 +0x03:  sub    $0x18,%esp
08120ab6 +0x06:  mov    0x8(%ebp),%eax
08120ab9 +0x09:  mov    0x8(%eax),%eax
08120abc +0x0c:  mov    %eax,(%esp)
08120abf +0x0f:  call   0807d860 <_init+0x158>
08120ac4 +0x14:  cmp    $0xffffffff,%eax
08120ac7 +0x17:  sete   %al
08120aca +0x1a:  test   %al,%al
08120acc +0x1c:  je     08120ad7 <+0x27>
08120ace +0x1e:  call   0807dd70 <_init+0x668>
08120ad3 +0x23:  mov    (%eax),%eax
08120ad5 +0x25:  jmp    08120af4 <+0x44>
08120ad7 +0x27:  mov    0x8(%ebp),%eax
08120ada +0x2a:  movb   $0x0,0x2(%eax)
08120ade +0x2e:  mov    0x8(%ebp),%eax
08120ae1 +0x31:  movb   $0x0,0x1(%eax)
08120ae5 +0x35:  mov    0x8(%ebp),%eax
08120ae8 +0x38:  movl   $0xffffffff,0x8(%eax)
08120aef +0x3f:  mov    $0x0,%eax
08120af4 +0x44:  leave
08120af5 +0x45:  ret
```

## 反编译 C

```c
// DbmwClient::Close @ 0x8120ab0

/* DbmwClient::Close() */

int __thiscall DbmwClient::Close(DbmwClient *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = close(*(int *)(this + 8));
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    this[2] = (DbmwClient)0x0;
    this[1] = (DbmwClient)0x0;
    *(undefined4 *)(this + 8) = 0xffffffff;
    iVar1 = 0;
  }
  return iVar1;
}
```
