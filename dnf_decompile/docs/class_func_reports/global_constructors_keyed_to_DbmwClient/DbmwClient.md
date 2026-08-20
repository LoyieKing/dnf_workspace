# DbmwClient

`_GLOBAL__I__ZN10DbmwClientC2Ev`

`global constructors keyed to DbmwClient::DbmwClient()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to DbmwClient` | `0x08121400` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121400  _GLOBAL__I__ZN10DbmwClientC2Ev
#           global constructors keyed to DbmwClient::DbmwClient()
# range [0x08121400, 0x08121433]
08121400 +0x00:  push   %ebp
08121401 +0x01:  mov    %esp,%ebp
08121403 +0x03:  sub    $0x18,%esp
08121406 +0x06:  movl   $0xffff,0x4(%esp)
0812140e +0x0e:  movl   $0x1,(%esp)
08121415 +0x15:  call   081213c0 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0812141a +0x1a:  leave
0812141b +0x1b:  ret
0812141c +0x1c:  push   %ebp
0812141d +0x1d:  mov    %esp,%ebp
0812141f +0x1f:  mov    0x8(%ebp),%eax
08121422 +0x22:  movzbl 0x1(%eax),%eax
08121426 +0x26:  pop    %ebp
08121427 +0x27:  ret
08121428 +0x28:  push   %ebp
08121429 +0x29:  mov    %esp,%ebp
0812142b +0x2b:  mov    0x8(%ebp),%eax
0812142e +0x2e:  movzbl 0x2(%eax),%eax
08121432 +0x32:  pop    %ebp
08121433 +0x33:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8121400

/* DbmwClient::DbmwClient() */

void DbmwClient::_GLOBAL__I_DbmwClient(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
