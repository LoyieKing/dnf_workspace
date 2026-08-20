# SmallStreamPool

`_ZN15SmallStreamPoolC1Ev`

`SmallStreamPool::SmallStreamPool()`

| 类 | 地址 |
|---|---|
| `SmallStreamPool` | `0x0828fe62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fe62  _ZN15SmallStreamPoolC1Ev
#           SmallStreamPool::SmallStreamPool()
# range [0x0828fe62, 0x0828ff09]
0828fe62 +0x00:  push   %ebp
0828fe63 +0x01:  mov    %esp,%ebp
0828fe65 +0x03:  push   %edi
0828fe66 +0x04:  push   %esi
0828fe67 +0x05:  push   %ebx
0828fe68 +0x06:  sub    $0x2c,%esp
0828fe6b +0x09:  mov    0x8(%ebp),%eax
0828fe6e +0x0c:  mov    %eax,(%esp)
0828fe71 +0x0f:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0828fe76 +0x14:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0828fe7b +0x19:  mov    0x19c(%eax),%eax
0828fe81 +0x1f:  mov    %eax,-0x1c(%ebp)
0828fe84 +0x22:  movl   $0x5c,(%esp)
0828fe8b +0x29:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828fe90 +0x2e:  mov    %eax,%ebx
0828fe92 +0x30:  mov    %ebx,%eax
0828fe94 +0x32:  mov    -0x1c(%ebp),%edx
0828fe97 +0x35:  mov    %edx,0x4(%esp)
0828fe9b +0x39:  mov    %eax,(%esp)
0828fe9e +0x3c:  call   082ad0fa <_GLOBAL__I__ZN4CLog5this_E+0x9521>  ; global constructors keyed to CLog::this_+0x9521
0828fea3 +0x41:  jmp    0828feb7 <+0x55>
0828fea5 +0x43:  mov    %edx,%esi
0828fea7 +0x45:  mov    %eax,%edi
0828fea9 +0x47:  mov    %ebx,(%esp)
0828feac +0x4a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828feb1 +0x4f:  mov    %edi,%eax
0828feb3 +0x51:  mov    %esi,%edx
0828feb5 +0x53:  jmp    0828fef3 <+0x91>
0828feb7 +0x55:  mov    %ebx,%edx
0828feb9 +0x57:  mov    0x8(%ebp),%eax
0828febc +0x5a:  mov    %edx,0x18(%eax)
0828febf +0x5d:  mov    -0x1c(%ebp),%eax
0828fec2 +0x60:  movzwl %ax,%edx
0828fec5 +0x63:  mov    0x8(%ebp),%eax
0828fec8 +0x66:  mov    0x18(%eax),%eax
0828fecb +0x69:  movl   $0x3e8,0x8(%esp)
0828fed3 +0x71:  mov    %edx,0x4(%esp)
0828fed7 +0x75:  mov    %eax,(%esp)
0828feda +0x78:  call   082ad21c <_GLOBAL__I__ZN4CLog5this_E+0x9643>  ; global constructors keyed to CLog::this_+0x9643
0828fedf +0x7d:  mov    0x8(%ebp),%eax
0828fee2 +0x80:  mov    0x18(%eax),%eax
0828fee5 +0x83:  movl   $0x0,(%eax)
0828feeb +0x89:  add    $0x2c,%esp
0828feee +0x8c:  pop    %ebx
0828feef +0x8d:  pop    %esi
0828fef0 +0x8e:  pop    %edi
0828fef1 +0x8f:  pop    %ebp
0828fef2 +0x90:  ret
0828fef3 +0x91:  mov    %edx,%ebx
0828fef5 +0x93:  mov    %eax,%esi
0828fef7 +0x95:  mov    0x8(%ebp),%eax
0828fefa +0x98:  mov    %eax,(%esp)
0828fefd +0x9b:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0828ff02 +0xa0:  mov    %esi,%eax
0828ff04 +0xa2:  mov    %ebx,%edx
0828ff06 +0xa4:  mov    %eax,(%esp)
0828ff09 +0xa7:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// SmallStreamPool::SmallStreamPool @ 0x828fe62

/* SmallStreamPool::SmallStreamPool() */

void __thiscall SmallStreamPool::SmallStreamPool(SmallStreamPool *this)

{
  int iVar1;
  DynamicPool<SmallStream> *this_00;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0828fe76 to 0828fe8f has its CatchHandler @ 0828fef3 */
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x19c);
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828fe9e to 0828fea2 has its CatchHandler @ 0828fea5 */
  DynamicPool<SmallStream>::DynamicPool(this_00,iVar1);
  *(DynamicPool<SmallStream> **)(this + 0x18) = this_00;
  DynamicPool<SmallStream>::SetPoolSize
            (*(DynamicPool<SmallStream> **)(this + 0x18),(ushort)iVar1,1000);
  **(undefined4 **)(this + 0x18) = 0;
  return;
}
```
