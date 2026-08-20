# PacketPool

`_ZN10PacketPoolC1Ev`

`PacketPool::PacketPool()`

| 类 | 地址 |
|---|---|
| `PacketPool` | `0x0828fc76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fc76  _ZN10PacketPoolC1Ev
#           PacketPool::PacketPool()
# range [0x0828fc76, 0x0828fcf9]
0828fc76 +0x00:  push   %ebp
0828fc77 +0x01:  mov    %esp,%ebp
0828fc79 +0x03:  push   %edi
0828fc7a +0x04:  push   %esi
0828fc7b +0x05:  push   %ebx
0828fc7c +0x06:  sub    $0x1c,%esp
0828fc7f +0x09:  mov    0x8(%ebp),%eax
0828fc82 +0x0c:  movl   $0x0,0x4(%eax)
0828fc89 +0x13:  movl   $0x5c,(%esp)
0828fc90 +0x1a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828fc95 +0x1f:  mov    %eax,%ebx
0828fc97 +0x21:  mov    %ebx,%eax
0828fc99 +0x23:  movl   $0xa,0x4(%esp)
0828fca1 +0x2b:  mov    %eax,(%esp)
0828fca4 +0x2e:  call   082acbb4 <_GLOBAL__I__ZN4CLog5this_E+0x8fdb>  ; global constructors keyed to CLog::this_+0x8fdb
0828fca9 +0x33:  jmp    0828fcc3 <+0x4d>
0828fcab +0x35:  mov    %edx,%esi
0828fcad +0x37:  mov    %eax,%edi
0828fcaf +0x39:  mov    %ebx,(%esp)
0828fcb2 +0x3c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828fcb7 +0x41:  mov    %edi,%eax
0828fcb9 +0x43:  mov    %esi,%edx
0828fcbb +0x45:  mov    %eax,(%esp)
0828fcbe +0x48:  call   08ae3750 <_Unwind_Resume>
0828fcc3 +0x4d:  mov    %ebx,%edx
0828fcc5 +0x4f:  mov    0x8(%ebp),%eax
0828fcc8 +0x52:  mov    %edx,(%eax)
0828fcca +0x54:  mov    0x8(%ebp),%eax
0828fccd +0x57:  mov    (%eax),%eax
0828fccf +0x59:  movl   $0xa,0x8(%esp)
0828fcd7 +0x61:  movl   $0xa,0x4(%esp)
0828fcdf +0x69:  mov    %eax,(%esp)
0828fce2 +0x6c:  call   082accd6 <_GLOBAL__I__ZN4CLog5this_E+0x90fd>  ; global constructors keyed to CLog::this_+0x90fd
0828fce7 +0x71:  mov    0x8(%ebp),%eax
0828fcea +0x74:  mov    (%eax),%eax
0828fcec +0x76:  movl   $0x0,(%eax)
0828fcf2 +0x7c:  add    $0x1c,%esp
0828fcf5 +0x7f:  pop    %ebx
0828fcf6 +0x80:  pop    %esi
0828fcf7 +0x81:  pop    %edi
0828fcf8 +0x82:  pop    %ebp
0828fcf9 +0x83:  ret
```

## 反编译 C

```c
// PacketPool::PacketPool @ 0x828fc76

/* PacketPool::PacketPool() */

void __thiscall PacketPool::PacketPool(PacketPool *this)

{
  DynamicPool<PacketBuf> *this_00;
  
  *(undefined4 *)(this + 4) = 0;
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828fca4 to 0828fca8 has its CatchHandler @ 0828fcab */
  DynamicPool<PacketBuf>::DynamicPool(this_00,10);
  *(DynamicPool<PacketBuf> **)this = this_00;
  DynamicPool<PacketBuf>::SetPoolSize(*(DynamicPool<PacketBuf> **)this,10,10);
  **(undefined4 **)this = 0;
  return;
}
```
