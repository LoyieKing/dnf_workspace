# BigStreamPool

`_ZN13BigStreamPoolC1Ev`

`BigStreamPool::BigStreamPool()`

| 类 | 地址 |
|---|---|
| `BigStreamPool` | `0x08290150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290150  _ZN13BigStreamPoolC1Ev
#           BigStreamPool::BigStreamPool()
# range [0x08290150, 0x082901f7]
08290150 +0x00:  push   %ebp
08290151 +0x01:  mov    %esp,%ebp
08290153 +0x03:  push   %edi
08290154 +0x04:  push   %esi
08290155 +0x05:  push   %ebx
08290156 +0x06:  sub    $0x2c,%esp
08290159 +0x09:  mov    0x8(%ebp),%eax
0829015c +0x0c:  mov    %eax,(%esp)
0829015f +0x0f:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
08290164 +0x14:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08290169 +0x19:  mov    0x1a4(%eax),%eax
0829016f +0x1f:  mov    %eax,-0x1c(%ebp)
08290172 +0x22:  movl   $0x5c,(%esp)
08290179 +0x29:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829017e +0x2e:  mov    %eax,%ebx
08290180 +0x30:  mov    %ebx,%eax
08290182 +0x32:  mov    -0x1c(%ebp),%edx
08290185 +0x35:  mov    %edx,0x4(%esp)
08290189 +0x39:  mov    %eax,(%esp)
0829018c +0x3c:  call   082ad830 <_GLOBAL__I__ZN4CLog5this_E+0x9c57>  ; global constructors keyed to CLog::this_+0x9c57
08290191 +0x41:  jmp    082901a5 <+0x55>
08290193 +0x43:  mov    %edx,%esi
08290195 +0x45:  mov    %eax,%edi
08290197 +0x47:  mov    %ebx,(%esp)
0829019a +0x4a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829019f +0x4f:  mov    %edi,%eax
082901a1 +0x51:  mov    %esi,%edx
082901a3 +0x53:  jmp    082901e1 <+0x91>
082901a5 +0x55:  mov    %ebx,%edx
082901a7 +0x57:  mov    0x8(%ebp),%eax
082901aa +0x5a:  mov    %edx,0x18(%eax)
082901ad +0x5d:  mov    -0x1c(%ebp),%eax
082901b0 +0x60:  movzwl %ax,%edx
082901b3 +0x63:  mov    0x8(%ebp),%eax
082901b6 +0x66:  mov    0x18(%eax),%eax
082901b9 +0x69:  movl   $0x64,0x8(%esp)
082901c1 +0x71:  mov    %edx,0x4(%esp)
082901c5 +0x75:  mov    %eax,(%esp)
082901c8 +0x78:  call   082ad952 <_GLOBAL__I__ZN4CLog5this_E+0x9d79>  ; global constructors keyed to CLog::this_+0x9d79
082901cd +0x7d:  mov    0x8(%ebp),%eax
082901d0 +0x80:  mov    0x18(%eax),%eax
082901d3 +0x83:  movl   $0x0,(%eax)
082901d9 +0x89:  add    $0x2c,%esp
082901dc +0x8c:  pop    %ebx
082901dd +0x8d:  pop    %esi
082901de +0x8e:  pop    %edi
082901df +0x8f:  pop    %ebp
082901e0 +0x90:  ret
082901e1 +0x91:  mov    %edx,%ebx
082901e3 +0x93:  mov    %eax,%esi
082901e5 +0x95:  mov    0x8(%ebp),%eax
082901e8 +0x98:  mov    %eax,(%esp)
082901eb +0x9b:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
082901f0 +0xa0:  mov    %esi,%eax
082901f2 +0xa2:  mov    %ebx,%edx
082901f4 +0xa4:  mov    %eax,(%esp)
082901f7 +0xa7:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// BigStreamPool::BigStreamPool @ 0x8290150

/* BigStreamPool::BigStreamPool() */

void __thiscall BigStreamPool::BigStreamPool(BigStreamPool *this)

{
  int iVar1;
  DynamicPool<BigStream> *this_00;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 08290164 to 0829017d has its CatchHandler @ 082901e1 */
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x1a4);
  this_00 = operator_new(0x5c);
                    /* try { // try from 0829018c to 08290190 has its CatchHandler @ 08290193 */
  DynamicPool<BigStream>::DynamicPool(this_00,iVar1);
  *(DynamicPool<BigStream> **)(this + 0x18) = this_00;
  DynamicPool<BigStream>::SetPoolSize(*(DynamicPool<BigStream> **)(this + 0x18),(ushort)iVar1,100);
  **(undefined4 **)(this + 0x18) = 0;
  return;
}
```
