# alloc

`_ZN5yaSSL25ClientDiffieHellmanPublic5allocEib`

`yaSSL::ClientDiffieHellmanPublic::alloc(int, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x08747380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747380  _ZN5yaSSL25ClientDiffieHellmanPublic5allocEib
#           yaSSL::ClientDiffieHellmanPublic::alloc(int, bool)
# range [0x08747380, 0x087473c9]
08747380 +0x00:  push   %ebp
08747381 +0x01:  mov    %esp,%ebp
08747383 +0x03:  sub    $0x18,%esp
08747386 +0x06:  mov    %ebx,-0x8(%ebp)
08747389 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874738e +0x0e:  add    $0xc2580a,%ebx
08747394 +0x14:  cmpb   $0x1,0x10(%ebp)
08747398 +0x18:  mov    %esi,-0x4(%ebp)
0874739b +0x1b:  mov    0x8(%ebp),%esi
0874739e +0x1e:  sbb    %eax,%eax
087473a0 +0x20:  not    %eax
087473a2 +0x22:  and    $0x2,%eax
087473a5 +0x25:  add    0xc(%ebp),%eax
087473a8 +0x28:  mov    %eax,0x8(%esi)
087473ab +0x2b:  movb   $0x0,0x4(%esp)
087473b0 +0x30:  mov    0x8(%esi),%eax
087473b3 +0x33:  mov    %eax,(%esp)
087473b6 +0x36:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087473bb +0x3b:  mov    %eax,0xc(%esi)
087473be +0x3e:  mov    -0x8(%ebp),%ebx
087473c1 +0x41:  mov    -0x4(%ebp),%esi
087473c4 +0x44:  mov    %ebp,%esp
087473c6 +0x46:  pop    %ebp
087473c7 +0x47:  ret
087473c8 +0x48:  nop
087473c9 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::alloc @ 0x8747380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::alloc(int, bool) */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::alloc(ClientDiffieHellmanPublic *this,int param_1,bool param_2)

{
  void *pvVar1;
  
  *(uint *)(this + 8) = (~-(uint)!param_2 & 2) + param_1;
  pvVar1 = operator_new__(*(undefined4 *)(this + 8),0);
  *(void **)(this + 0xc) = pvVar1;
  return;
}
```
