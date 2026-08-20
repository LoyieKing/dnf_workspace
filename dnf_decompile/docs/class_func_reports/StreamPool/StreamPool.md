# StreamPool

`_ZN10StreamPoolC1Ev`

`StreamPool::StreamPool()`

| 类 | 地址 |
|---|---|
| `StreamPool` | `0x0828f974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828f974  _ZN10StreamPoolC1Ev
#           StreamPool::StreamPool()
# range [0x0828f974, 0x0828fa1b]
0828f974 +0x00:  push   %ebp
0828f975 +0x01:  mov    %esp,%ebp
0828f977 +0x03:  push   %edi
0828f978 +0x04:  push   %esi
0828f979 +0x05:  push   %ebx
0828f97a +0x06:  sub    $0x2c,%esp
0828f97d +0x09:  mov    0x8(%ebp),%eax
0828f980 +0x0c:  mov    %eax,(%esp)
0828f983 +0x0f:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0828f988 +0x14:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0828f98d +0x19:  mov    0x1a0(%eax),%eax
0828f993 +0x1f:  mov    %eax,-0x1c(%ebp)
0828f996 +0x22:  movl   $0x5c,(%esp)
0828f99d +0x29:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828f9a2 +0x2e:  mov    %eax,%ebx
0828f9a4 +0x30:  mov    %ebx,%eax
0828f9a6 +0x32:  mov    -0x1c(%ebp),%edx
0828f9a9 +0x35:  mov    %edx,0x4(%esp)
0828f9ad +0x39:  mov    %eax,(%esp)
0828f9b0 +0x3c:  call   082ac4cc <_GLOBAL__I__ZN4CLog5this_E+0x88f3>  ; global constructors keyed to CLog::this_+0x88f3
0828f9b5 +0x41:  jmp    0828f9c9 <+0x55>
0828f9b7 +0x43:  mov    %edx,%esi
0828f9b9 +0x45:  mov    %eax,%edi
0828f9bb +0x47:  mov    %ebx,(%esp)
0828f9be +0x4a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828f9c3 +0x4f:  mov    %edi,%eax
0828f9c5 +0x51:  mov    %esi,%edx
0828f9c7 +0x53:  jmp    0828fa05 <+0x91>
0828f9c9 +0x55:  mov    %ebx,%edx
0828f9cb +0x57:  mov    0x8(%ebp),%eax
0828f9ce +0x5a:  mov    %edx,0x18(%eax)
0828f9d1 +0x5d:  mov    -0x1c(%ebp),%eax
0828f9d4 +0x60:  movzwl %ax,%edx
0828f9d7 +0x63:  mov    0x8(%ebp),%eax
0828f9da +0x66:  mov    0x18(%eax),%eax
0828f9dd +0x69:  movl   $0x3e8,0x8(%esp)
0828f9e5 +0x71:  mov    %edx,0x4(%esp)
0828f9e9 +0x75:  mov    %eax,(%esp)
0828f9ec +0x78:  call   082ac5ee <_GLOBAL__I__ZN4CLog5this_E+0x8a15>  ; global constructors keyed to CLog::this_+0x8a15
0828f9f1 +0x7d:  mov    0x8(%ebp),%eax
0828f9f4 +0x80:  mov    0x18(%eax),%eax
0828f9f7 +0x83:  movl   $0x0,(%eax)
0828f9fd +0x89:  add    $0x2c,%esp
0828fa00 +0x8c:  pop    %ebx
0828fa01 +0x8d:  pop    %esi
0828fa02 +0x8e:  pop    %edi
0828fa03 +0x8f:  pop    %ebp
0828fa04 +0x90:  ret
0828fa05 +0x91:  mov    %edx,%ebx
0828fa07 +0x93:  mov    %eax,%esi
0828fa09 +0x95:  mov    0x8(%ebp),%eax
0828fa0c +0x98:  mov    %eax,(%esp)
0828fa0f +0x9b:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0828fa14 +0xa0:  mov    %esi,%eax
0828fa16 +0xa2:  mov    %ebx,%edx
0828fa18 +0xa4:  mov    %eax,(%esp)
0828fa1b +0xa7:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// StreamPool::StreamPool @ 0x828f974

/* StreamPool::StreamPool() */

void __thiscall StreamPool::StreamPool(StreamPool *this)

{
  int iVar1;
  DynamicPool<Stream> *this_00;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0828f988 to 0828f9a1 has its CatchHandler @ 0828fa05 */
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x1a0);
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828f9b0 to 0828f9b4 has its CatchHandler @ 0828f9b7 */
  DynamicPool<Stream>::DynamicPool(this_00,iVar1);
  *(DynamicPool<Stream> **)(this + 0x18) = this_00;
  DynamicPool<Stream>::SetPoolSize(*(DynamicPool<Stream> **)(this + 0x18),(ushort)iVar1,1000);
  **(undefined4 **)(this + 0x18) = 0;
  return;
}
```
