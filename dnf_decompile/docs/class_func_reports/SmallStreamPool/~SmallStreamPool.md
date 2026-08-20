# ~SmallStreamPool

`_ZN15SmallStreamPoolD1Ev`

`SmallStreamPool::~SmallStreamPool()`

| 类 | 地址 |
|---|---|
| `SmallStreamPool` | `0x0828ff0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828ff0e  _ZN15SmallStreamPoolD1Ev
#           SmallStreamPool::~SmallStreamPool()
# range [0x0828ff0e, 0x0828ff73]
0828ff0e +0x00:  push   %ebp
0828ff0f +0x01:  mov    %esp,%ebp
0828ff11 +0x03:  push   %esi
0828ff12 +0x04:  push   %ebx
0828ff13 +0x05:  sub    $0x10,%esp
0828ff16 +0x08:  mov    0x8(%ebp),%eax
0828ff19 +0x0b:  mov    0x18(%eax),%eax
0828ff1c +0x0e:  test   %eax,%eax
0828ff1e +0x10:  je     0828ff61 <+0x53>
0828ff20 +0x12:  mov    0x8(%ebp),%eax
0828ff23 +0x15:  mov    0x18(%eax),%ebx
0828ff26 +0x18:  test   %ebx,%ebx
0828ff28 +0x1a:  je     0828ff3a <+0x2c>
0828ff2a +0x1c:  mov    %ebx,(%esp)
0828ff2d +0x1f:  call   082ad2e4 <_GLOBAL__I__ZN4CLog5this_E+0x970b>  ; global constructors keyed to CLog::this_+0x970b
0828ff32 +0x24:  mov    %ebx,(%esp)
0828ff35 +0x27:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828ff3a +0x2c:  mov    0x8(%ebp),%eax
0828ff3d +0x2f:  movl   $0x0,0x18(%eax)
0828ff44 +0x36:  jmp    0828ff61 <+0x53>
0828ff46 +0x38:  mov    %edx,%ebx
0828ff48 +0x3a:  mov    %eax,%esi
0828ff4a +0x3c:  mov    0x8(%ebp),%eax
0828ff4d +0x3f:  mov    %eax,(%esp)
0828ff50 +0x42:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0828ff55 +0x47:  mov    %esi,%eax
0828ff57 +0x49:  mov    %ebx,%edx
0828ff59 +0x4b:  mov    %eax,(%esp)
0828ff5c +0x4e:  call   08ae3750 <_Unwind_Resume>
0828ff61 +0x53:  mov    0x8(%ebp),%eax
0828ff64 +0x56:  mov    %eax,(%esp)
0828ff67 +0x59:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0828ff6c +0x5e:  add    $0x10,%esp
0828ff6f +0x61:  pop    %ebx
0828ff70 +0x62:  pop    %esi
0828ff71 +0x63:  pop    %ebp
0828ff72 +0x64:  ret
0828ff73 +0x65:  nop
```

## 反编译 C

```c
// SmallStreamPool::~SmallStreamPool @ 0x828ff0e

/* SmallStreamPool::~SmallStreamPool() */

void __thiscall SmallStreamPool::~SmallStreamPool(SmallStreamPool *this)

{
  DynamicPool<SmallStream> *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(DynamicPool<SmallStream> **)(this + 0x18);
    if (this_00 != (DynamicPool<SmallStream> *)0x0) {
                    /* try { // try from 0828ff2d to 0828ff31 has its CatchHandler @ 0828ff46 */
      DynamicPool<SmallStream>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
