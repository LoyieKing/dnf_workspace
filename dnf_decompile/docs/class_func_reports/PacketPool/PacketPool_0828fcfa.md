# PacketPool

`_ZN10PacketPoolC1Eii`

`PacketPool::PacketPool(int, int)`

| 类 | 地址 |
|---|---|
| `PacketPool` | `0x0828fcfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828fcfa  _ZN10PacketPoolC1Eii
#           PacketPool::PacketPool(int, int)
# range [0x0828fcfa, 0x0828fd81]
0828fcfa +0x00:  push   %ebp
0828fcfb +0x01:  mov    %esp,%ebp
0828fcfd +0x03:  push   %edi
0828fcfe +0x04:  push   %esi
0828fcff +0x05:  push   %ebx
0828fd00 +0x06:  sub    $0x1c,%esp
0828fd03 +0x09:  mov    0x8(%ebp),%eax
0828fd06 +0x0c:  movl   $0x0,0x4(%eax)
0828fd0d +0x13:  movl   $0x5c,(%esp)
0828fd14 +0x1a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0828fd19 +0x1f:  mov    %eax,%ebx
0828fd1b +0x21:  mov    %ebx,%eax
0828fd1d +0x23:  mov    0xc(%ebp),%edx
0828fd20 +0x26:  mov    %edx,0x4(%esp)
0828fd24 +0x2a:  mov    %eax,(%esp)
0828fd27 +0x2d:  call   082acbb4 <_GLOBAL__I__ZN4CLog5this_E+0x8fdb>  ; global constructors keyed to CLog::this_+0x8fdb
0828fd2c +0x32:  jmp    0828fd46 <+0x4c>
0828fd2e +0x34:  mov    %edx,%esi
0828fd30 +0x36:  mov    %eax,%edi
0828fd32 +0x38:  mov    %ebx,(%esp)
0828fd35 +0x3b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828fd3a +0x40:  mov    %edi,%eax
0828fd3c +0x42:  mov    %esi,%edx
0828fd3e +0x44:  mov    %eax,(%esp)
0828fd41 +0x47:  call   08ae3750 <_Unwind_Resume>
0828fd46 +0x4c:  mov    %ebx,%edx
0828fd48 +0x4e:  mov    0x8(%ebp),%eax
0828fd4b +0x51:  mov    %edx,(%eax)
0828fd4d +0x53:  mov    0x10(%ebp),%eax
0828fd50 +0x56:  movzwl %ax,%ecx
0828fd53 +0x59:  mov    0xc(%ebp),%eax
0828fd56 +0x5c:  movzwl %ax,%edx
0828fd59 +0x5f:  mov    0x8(%ebp),%eax
0828fd5c +0x62:  mov    (%eax),%eax
0828fd5e +0x64:  mov    %ecx,0x8(%esp)
0828fd62 +0x68:  mov    %edx,0x4(%esp)
0828fd66 +0x6c:  mov    %eax,(%esp)
0828fd69 +0x6f:  call   082accd6 <_GLOBAL__I__ZN4CLog5this_E+0x90fd>  ; global constructors keyed to CLog::this_+0x90fd
0828fd6e +0x74:  mov    0x8(%ebp),%eax
0828fd71 +0x77:  mov    (%eax),%eax
0828fd73 +0x79:  movl   $0x0,(%eax)
0828fd79 +0x7f:  add    $0x1c,%esp
0828fd7c +0x82:  pop    %ebx
0828fd7d +0x83:  pop    %esi
0828fd7e +0x84:  pop    %edi
0828fd7f +0x85:  pop    %ebp
0828fd80 +0x86:  ret
0828fd81 +0x87:  nop
```

## 反编译 C

```c
// PacketPool::PacketPool @ 0x828fcfa

/* PacketPool::PacketPool(int, int) */

void __thiscall PacketPool::PacketPool(PacketPool *this,int param_1,int param_2)

{
  DynamicPool<PacketBuf> *this_00;
  
  *(undefined4 *)(this + 4) = 0;
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828fd27 to 0828fd2b has its CatchHandler @ 0828fd2e */
  DynamicPool<PacketBuf>::DynamicPool(this_00,param_1);
  *(DynamicPool<PacketBuf> **)this = this_00;
  DynamicPool<PacketBuf>::SetPoolSize
            (*(DynamicPool<PacketBuf> **)this,(ushort)param_1,(ushort)param_2);
  **(undefined4 **)this = 0;
  return;
}
```
