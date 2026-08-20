# ~StreamPool

`_ZN10StreamPoolD1Ev`

`StreamPool::~StreamPool()`

| 类 | 地址 |
|---|---|
| `StreamPool` | `0x0828fa20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fa20  _ZN10StreamPoolD1Ev
#           StreamPool::~StreamPool()
# range [0x0828fa20, 0x0828fa85]
0828fa20 +0x00:  push   %ebp
0828fa21 +0x01:  mov    %esp,%ebp
0828fa23 +0x03:  push   %esi
0828fa24 +0x04:  push   %ebx
0828fa25 +0x05:  sub    $0x10,%esp
0828fa28 +0x08:  mov    0x8(%ebp),%eax
0828fa2b +0x0b:  mov    0x18(%eax),%eax
0828fa2e +0x0e:  test   %eax,%eax
0828fa30 +0x10:  je     0828fa73 <+0x53>
0828fa32 +0x12:  mov    0x8(%ebp),%eax
0828fa35 +0x15:  mov    0x18(%eax),%ebx
0828fa38 +0x18:  test   %ebx,%ebx
0828fa3a +0x1a:  je     0828fa4c <+0x2c>
0828fa3c +0x1c:  mov    %ebx,(%esp)
0828fa3f +0x1f:  call   082ac668 <_GLOBAL__I__ZN4CLog5this_E+0x8a8f>  ; global constructors keyed to CLog::this_+0x8a8f
0828fa44 +0x24:  mov    %ebx,(%esp)
0828fa47 +0x27:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828fa4c +0x2c:  mov    0x8(%ebp),%eax
0828fa4f +0x2f:  movl   $0x0,0x18(%eax)
0828fa56 +0x36:  jmp    0828fa73 <+0x53>
0828fa58 +0x38:  mov    %edx,%ebx
0828fa5a +0x3a:  mov    %eax,%esi
0828fa5c +0x3c:  mov    0x8(%ebp),%eax
0828fa5f +0x3f:  mov    %eax,(%esp)
0828fa62 +0x42:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0828fa67 +0x47:  mov    %esi,%eax
0828fa69 +0x49:  mov    %ebx,%edx
0828fa6b +0x4b:  mov    %eax,(%esp)
0828fa6e +0x4e:  call   08ae3750 <_Unwind_Resume>
0828fa73 +0x53:  mov    0x8(%ebp),%eax
0828fa76 +0x56:  mov    %eax,(%esp)
0828fa79 +0x59:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0828fa7e +0x5e:  add    $0x10,%esp
0828fa81 +0x61:  pop    %ebx
0828fa82 +0x62:  pop    %esi
0828fa83 +0x63:  pop    %ebp
0828fa84 +0x64:  ret
0828fa85 +0x65:  nop
```

## 反编译 C

```c
// StreamPool::~StreamPool @ 0x828fa20

/* StreamPool::~StreamPool() */

void __thiscall StreamPool::~StreamPool(StreamPool *this)

{
  DynamicPool<Stream> *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(DynamicPool<Stream> **)(this + 0x18);
    if (this_00 != (DynamicPool<Stream> *)0x0) {
                    /* try { // try from 0828fa3f to 0828fa43 has its CatchHandler @ 0828fa58 */
      DynamicPool<Stream>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
