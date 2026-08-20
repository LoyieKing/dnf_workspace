# ~PacketPool

`_ZN10PacketPoolD1Ev`

`PacketPool::~PacketPool()`

| 类 | 地址 |
|---|---|
| `PacketPool` | `0x0828fd82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fd82  _ZN10PacketPoolD1Ev
#           PacketPool::~PacketPool()
# range [0x0828fd82, 0x0828fdb9]
0828fd82 +0x00:  push   %ebp
0828fd83 +0x01:  mov    %esp,%ebp
0828fd85 +0x03:  push   %ebx
0828fd86 +0x04:  sub    $0x14,%esp
0828fd89 +0x07:  mov    0x8(%ebp),%eax
0828fd8c +0x0a:  mov    (%eax),%eax
0828fd8e +0x0c:  test   %eax,%eax
0828fd90 +0x0e:  je     0828fdb4 <+0x32>
0828fd92 +0x10:  mov    0x8(%ebp),%eax
0828fd95 +0x13:  mov    (%eax),%ebx
0828fd97 +0x15:  test   %ebx,%ebx
0828fd99 +0x17:  je     0828fdab <+0x29>
0828fd9b +0x19:  mov    %ebx,(%esp)
0828fd9e +0x1c:  call   082acd16 <_GLOBAL__I__ZN4CLog5this_E+0x913d>  ; global constructors keyed to CLog::this_+0x913d
0828fda3 +0x21:  mov    %ebx,(%esp)
0828fda6 +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828fdab +0x29:  mov    0x8(%ebp),%eax
0828fdae +0x2c:  movl   $0x0,(%eax)
0828fdb4 +0x32:  add    $0x14,%esp
0828fdb7 +0x35:  pop    %ebx
0828fdb8 +0x36:  pop    %ebp
0828fdb9 +0x37:  ret
```

## 反编译 C

```c
// PacketPool::~PacketPool @ 0x828fd82

/* PacketPool::~PacketPool() */

void __thiscall PacketPool::~PacketPool(PacketPool *this)

{
  DynamicPool<PacketBuf> *this_00;
  
  if (*(int *)this != 0) {
    this_00 = *(DynamicPool<PacketBuf> **)this;
    if (this_00 != (DynamicPool<PacketBuf> *)0x0) {
      DynamicPool<PacketBuf>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  return;
}
```
