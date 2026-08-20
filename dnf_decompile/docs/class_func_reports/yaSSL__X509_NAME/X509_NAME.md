# X509_NAME

`_ZN5yaSSL9X509_NAMEC1EPKcj`

`yaSSL::X509_NAME::X509_NAME(char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::X509_NAME` | `0x087524b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087524b0  _ZN5yaSSL9X509_NAMEC1EPKcj
#           yaSSL::X509_NAME::X509_NAME(char const*, unsigned int)
# range [0x087524b0, 0x0875251a]
087524b0 +0x00:  push   %ebp
087524b1 +0x01:  mov    %esp,%ebp
087524b3 +0x03:  sub    $0x28,%esp
087524b6 +0x06:  mov    %edi,-0x4(%ebp)
087524b9 +0x09:  mov    0x10(%ebp),%edi
087524bc +0x0c:  mov    %esi,-0x8(%ebp)
087524bf +0x0f:  mov    0x8(%ebp),%esi
087524c2 +0x12:  mov    %ebx,-0xc(%ebp)
087524c5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087524ca +0x1a:  add    $0xc1a6ce,%ebx
087524d0 +0x20:  test   %edi,%edi
087524d2 +0x22:  movl   $0x0,(%esi)
087524d8 +0x28:  mov    %edi,0x4(%esi)
087524db +0x2b:  je     087524ff <+0x4f>
087524dd +0x2d:  movb   $0x0,0x4(%esp)
087524e2 +0x32:  mov    %edi,(%esp)
087524e5 +0x35:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087524ea +0x3a:  mov    0xc(%ebp),%edx
087524ed +0x3d:  mov    %eax,(%esi)
087524ef +0x3f:  mov    %edi,0x8(%esp)
087524f3 +0x43:  mov    %edx,0x4(%esp)
087524f7 +0x47:  mov    %eax,(%esp)
087524fa +0x4a:  call   0807d8a0 <_init+0x198>
087524ff +0x4f:  movl   $0x0,0x10(%esi)
08752506 +0x56:  mov    -0xc(%ebp),%ebx
08752509 +0x59:  mov    -0x8(%ebp),%esi
0875250c +0x5c:  mov    -0x4(%ebp),%edi
0875250f +0x5f:  mov    %ebp,%esp
08752511 +0x61:  pop    %ebp
08752512 +0x62:  ret
08752513 +0x63:  nop
08752514 +0x64:  lea    0x0(%esi),%esi
0875251a +0x6a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::X509_NAME::X509_NAME @ 0x87524b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509_NAME::X509_NAME(char const*, unsigned int) */

void __thiscall yaSSL::X509_NAME::X509_NAME(X509_NAME *this,char *param_1,uint param_2)

{
  void *__dest;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = param_2;
  if (param_2 != 0) {
    __dest = operator_new__(param_2,in_stack_ffffffd8 & 0xffffff00);
    *(void **)this = __dest;
    memcpy(__dest,param_1,param_2);
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```
