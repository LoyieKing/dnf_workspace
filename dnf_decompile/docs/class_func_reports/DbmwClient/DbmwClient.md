# DbmwClient

`_ZN10DbmwClientC1Ev`

`DbmwClient::DbmwClient()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120454` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120454  _ZN10DbmwClientC1Ev
#           DbmwClient::DbmwClient()
# range [0x08120454, 0x081204bd]
08120454 +0x00:  push   %ebp
08120455 +0x01:  mov    %esp,%ebp
08120457 +0x03:  sub    $0x18,%esp
0812045a +0x06:  mov    0x8(%ebp),%eax
0812045d +0x09:  movb   $0x0,0x1(%eax)
08120461 +0x0d:  mov    0x8(%ebp),%eax
08120464 +0x10:  movb   $0x0,0x2(%eax)
08120468 +0x14:  mov    0x8(%ebp),%eax
0812046b +0x17:  movl   $0xffffffff,0x8(%eax)
08120472 +0x1e:  movl   $0x200,(%esp)
08120479 +0x25:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0812047e +0x2a:  mov    %eax,%edx
08120480 +0x2c:  mov    0x8(%ebp),%eax
08120483 +0x2f:  mov    %edx,0x2c(%eax)
08120486 +0x32:  mov    0x8(%ebp),%eax
08120489 +0x35:  movl   $0x0,0x1038(%eax)
08120493 +0x3f:  mov    0x8(%ebp),%eax
08120496 +0x42:  add    $0x34,%eax
08120499 +0x45:  movl   $0x1001,0x8(%esp)
081204a1 +0x4d:  movl   $0x0,0x4(%esp)
081204a9 +0x55:  mov    %eax,(%esp)
081204ac +0x58:  call   0807dcc0 <_init+0x5b8>
081204b1 +0x5d:  mov    0x8(%ebp),%eax
081204b4 +0x60:  movl   $0x0,0x4(%eax)
081204bb +0x67:  leave
081204bc +0x68:  ret
081204bd +0x69:  nop
```

## 反编译 C

```c
// DbmwClient::DbmwClient @ 0x8120454

/* DbmwClient::DbmwClient() */

void __thiscall DbmwClient::DbmwClient(DbmwClient *this)

{
  void *pvVar1;
  
  this[1] = (DbmwClient)0x0;
  this[2] = (DbmwClient)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  pvVar1 = operator_new__(0x200);
  *(void **)(this + 0x2c) = pvVar1;
  *(undefined4 *)(this + 0x1038) = 0;
  memset(this + 0x34,0,0x1001);
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
