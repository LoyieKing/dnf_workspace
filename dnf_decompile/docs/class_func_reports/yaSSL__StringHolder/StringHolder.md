# StringHolder

`_ZN5yaSSL12StringHolderC1EPKci`

`yaSSL::StringHolder::StringHolder(char const*, int)`

| 类 | 地址 |
|---|---|
| `yaSSL::StringHolder` | `0x08752380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752380  _ZN5yaSSL12StringHolderC1EPKci
#           yaSSL::StringHolder::StringHolder(char const*, int)
# range [0x08752380, 0x087523dc]
08752380 +0x00:  push   %ebp
08752381 +0x01:  mov    %esp,%ebp
08752383 +0x03:  sub    $0x28,%esp
08752386 +0x06:  mov    %esi,-0x8(%ebp)
08752389 +0x09:  mov    0x8(%ebp),%esi
0875238c +0x0c:  mov    %edi,-0x4(%ebp)
0875238f +0x0f:  mov    0x10(%ebp),%edi
08752392 +0x12:  mov    %ebx,-0xc(%ebp)
08752395 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0875239a +0x1a:  add    $0xc1a7fe,%ebx
087523a0 +0x20:  mov    %edi,0x4(%esi)
087523a3 +0x23:  lea    0x1(%edi),%eax
087523a6 +0x26:  movb   $0x0,0x4(%esp)
087523ab +0x2b:  mov    %eax,(%esp)
087523ae +0x2e:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087523b3 +0x33:  mov    0xc(%ebp),%edx
087523b6 +0x36:  mov    %eax,0x8(%esi)
087523b9 +0x39:  mov    %edi,0x8(%esp)
087523bd +0x3d:  mov    %edx,0x4(%esp)
087523c1 +0x41:  mov    %eax,(%esp)
087523c4 +0x44:  call   0807d8a0 <_init+0x198>
087523c9 +0x49:  movl   $0x0,(%esi)
087523cf +0x4f:  mov    -0xc(%ebp),%ebx
087523d2 +0x52:  mov    -0x8(%ebp),%esi
087523d5 +0x55:  mov    -0x4(%ebp),%edi
087523d8 +0x58:  mov    %ebp,%esp
087523da +0x5a:  pop    %ebp
087523db +0x5b:  ret
087523dc +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::StringHolder::StringHolder @ 0x8752380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::StringHolder::StringHolder(char const*, int) */

void __thiscall yaSSL::StringHolder::StringHolder(StringHolder *this,char *param_1,int param_2)

{
  void *__dest;
  uint in_stack_ffffffd8;
  
  *(int *)(this + 4) = param_2;
  __dest = operator_new__(param_2 + 1,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 8) = __dest;
  memcpy(__dest,param_1,param_2);
  *(undefined4 *)this = 0;
  return;
}
```
