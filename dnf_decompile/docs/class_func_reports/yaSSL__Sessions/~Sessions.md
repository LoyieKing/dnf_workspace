# ~Sessions

`_ZN5yaSSL8SessionsD1Ev`

`yaSSL::Sessions::~Sessions()`

| 类 | 地址 |
|---|---|
| `yaSSL::Sessions` | `0x087532f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087532f0  _ZN5yaSSL8SessionsD1Ev
#           yaSSL::Sessions::~Sessions()
# range [0x087532f0, 0x08753379]
087532f0 +0x00:  push   %ebp
087532f1 +0x01:  mov    %esp,%ebp
087532f3 +0x03:  push   %edi
087532f4 +0x04:  push   %esi
087532f5 +0x05:  push   %ebx
087532f6 +0x06:  sub    $0x1c,%esp
087532f9 +0x09:  mov    0x8(%ebp),%eax
087532fc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08753301 +0x11:  add    $0xc19897,%ebx
08753307 +0x17:  mov    (%eax),%esi
08753309 +0x19:  test   %esi,%esi
0875330b +0x1b:  je     0875333a <+0x4a>
0875330d +0x1d:  lea    0x0(%esi),%esi
08753310 +0x20:  mov    0x8(%esi),%edi
08753313 +0x23:  movl   $0x0,0x8(%esi)
0875331a +0x2a:  test   %edi,%edi
0875331c +0x2c:  je     08753326 <+0x36>
0875331e +0x2e:  mov    %edi,(%esp)
08753321 +0x31:  call   08752de0 <_ZN5yaSSL11SSL_SESSIOND1Ev>  ; yaSSL::SSL_SESSION::~SSL_SESSION()
08753326 +0x36:  movb   $0x0,0x4(%esp)
0875332b +0x3b:  mov    %edi,(%esp)
0875332e +0x3e:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08753333 +0x43:  mov    0x4(%esi),%esi
08753336 +0x46:  test   %esi,%esi
08753338 +0x48:  jne    08753310 <+0x20>
0875333a +0x4a:  mov    0x8(%ebp),%eax
0875333d +0x4d:  add    $0xc,%eax
08753340 +0x50:  mov    %eax,(%esp)
08753343 +0x53:  call   08799000 <_ZN5yaSSL10RandomPoolD1Ev>  ; yaSSL::RandomPool::~RandomPool()
08753348 +0x58:  mov    0x8(%ebp),%edx
0875334b +0x5b:  mov    (%edx),%eax
0875334d +0x5d:  test   %eax,%eax
0875334f +0x5f:  jne    0875335a <+0x6a>
08753351 +0x61:  jmp    0875336e <+0x7e>
08753353 +0x63:  nop
08753354 +0x64:  lea    0x0(%esi,%eiz,1),%esi
08753358 +0x68:  mov    %esi,%eax
0875335a +0x6a:  mov    0x4(%eax),%esi
0875335d +0x6d:  movb   $0x0,0x4(%esp)
08753362 +0x72:  mov    %eax,(%esp)
08753365 +0x75:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0875336a +0x7a:  test   %esi,%esi
0875336c +0x7c:  jne    08753358 <+0x68>
0875336e +0x7e:  add    $0x1c,%esp
08753371 +0x81:  pop    %ebx
08753372 +0x82:  pop    %esi
08753373 +0x83:  pop    %edi
08753374 +0x84:  pop    %ebp
08753375 +0x85:  ret
08753376 +0x86:  lea    0x0(%esi),%esi
08753379 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Sessions::~Sessions @ 0x87532f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Sessions::~Sessions() */

void __thiscall yaSSL::Sessions::~Sessions(Sessions *this)

{
  int iVar1;
  SSL_SESSION *this_00;
  int iVar2;
  
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    this_00 = *(SSL_SESSION **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (this_00 != (SSL_SESSION *)0x0) {
      SSL_SESSION::~SSL_SESSION(this_00);
    }
    operator_delete(this_00,0);
  }
  RandomPool::~RandomPool((RandomPool *)(this + 0xc));
  iVar1 = *(int *)this;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar2;
  }
  return;
}
```
