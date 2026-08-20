# ~BigStreamPool

`_ZN13BigStreamPoolD1Ev`

`BigStreamPool::~BigStreamPool()`

| 类 | 地址 |
|---|---|
| `BigStreamPool` | `0x082901fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082901fc  _ZN13BigStreamPoolD1Ev
#           BigStreamPool::~BigStreamPool()
# range [0x082901fc, 0x08290261]
082901fc +0x00:  push   %ebp
082901fd +0x01:  mov    %esp,%ebp
082901ff +0x03:  push   %esi
08290200 +0x04:  push   %ebx
08290201 +0x05:  sub    $0x10,%esp
08290204 +0x08:  mov    0x8(%ebp),%eax
08290207 +0x0b:  mov    0x18(%eax),%eax
0829020a +0x0e:  test   %eax,%eax
0829020c +0x10:  je     0829024f <+0x53>
0829020e +0x12:  mov    0x8(%ebp),%eax
08290211 +0x15:  mov    0x18(%eax),%ebx
08290214 +0x18:  test   %ebx,%ebx
08290216 +0x1a:  je     08290228 <+0x2c>
08290218 +0x1c:  mov    %ebx,(%esp)
0829021b +0x1f:  call   082ada1a <_GLOBAL__I__ZN4CLog5this_E+0x9e41>  ; global constructors keyed to CLog::this_+0x9e41
08290220 +0x24:  mov    %ebx,(%esp)
08290223 +0x27:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08290228 +0x2c:  mov    0x8(%ebp),%eax
0829022b +0x2f:  movl   $0x0,0x18(%eax)
08290232 +0x36:  jmp    0829024f <+0x53>
08290234 +0x38:  mov    %edx,%ebx
08290236 +0x3a:  mov    %eax,%esi
08290238 +0x3c:  mov    0x8(%ebp),%eax
0829023b +0x3f:  mov    %eax,(%esp)
0829023e +0x42:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08290243 +0x47:  mov    %esi,%eax
08290245 +0x49:  mov    %ebx,%edx
08290247 +0x4b:  mov    %eax,(%esp)
0829024a +0x4e:  call   08ae3750 <_Unwind_Resume>
0829024f +0x53:  mov    0x8(%ebp),%eax
08290252 +0x56:  mov    %eax,(%esp)
08290255 +0x59:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0829025a +0x5e:  add    $0x10,%esp
0829025d +0x61:  pop    %ebx
0829025e +0x62:  pop    %esi
0829025f +0x63:  pop    %ebp
08290260 +0x64:  ret
08290261 +0x65:  nop
```

## 反编译 C

```c
// BigStreamPool::~BigStreamPool @ 0x82901fc

/* BigStreamPool::~BigStreamPool() */

void __thiscall BigStreamPool::~BigStreamPool(BigStreamPool *this)

{
  DynamicPool<BigStream> *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(DynamicPool<BigStream> **)(this + 0x18);
    if (this_00 != (DynamicPool<BigStream> *)0x0) {
                    /* try { // try from 0829021b to 0829021f has its CatchHandler @ 08290234 */
      DynamicPool<BigStream>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
