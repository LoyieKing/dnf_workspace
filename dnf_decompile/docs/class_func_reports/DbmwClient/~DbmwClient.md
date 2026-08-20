# ~DbmwClient

`_ZN10DbmwClientD1Ev`

`DbmwClient::~DbmwClient()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081204be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081204be  _ZN10DbmwClientD1Ev
#           DbmwClient::~DbmwClient()
# range [0x081204be, 0x081204f9]
081204be +0x00:  push   %ebp
081204bf +0x01:  mov    %esp,%ebp
081204c1 +0x03:  sub    $0x18,%esp
081204c4 +0x06:  mov    0x8(%ebp),%eax
081204c7 +0x09:  movb   $0x0,0x2(%eax)
081204cb +0x0d:  mov    0x8(%ebp),%eax
081204ce +0x10:  mov    0x8(%eax),%eax
081204d1 +0x13:  mov    %eax,(%esp)
081204d4 +0x16:  call   0807d860 <_init+0x158>
081204d9 +0x1b:  mov    0x8(%ebp),%eax
081204dc +0x1e:  movb   $0x0,0x1(%eax)
081204e0 +0x22:  mov    0x8(%ebp),%eax
081204e3 +0x25:  movl   $0xffffffff,0x8(%eax)
081204ea +0x2c:  mov    0x8(%ebp),%eax
081204ed +0x2f:  mov    0x2c(%eax),%eax
081204f0 +0x32:  mov    %eax,(%esp)
081204f3 +0x35:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081204f8 +0x3a:  leave
081204f9 +0x3b:  ret
```

## 反编译 C

```c
// DbmwClient::~DbmwClient @ 0x81204be

/* DbmwClient::~DbmwClient() */

void __thiscall DbmwClient::~DbmwClient(DbmwClient *this)

{
  this[2] = (DbmwClient)0x0;
  close(*(int *)(this + 8));
  this[1] = (DbmwClient)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  operator_delete(*(void **)(this + 0x2c));
  return;
}
```
