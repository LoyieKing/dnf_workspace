# ~Integer

`_ZN5yaSSL7IntegerD1Ev`

`yaSSL::Integer::~Integer()`

| 类 | 地址 |
|---|---|
| `yaSSL::Integer` | `0x0879ae80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879ae80  _ZN5yaSSL7IntegerD1Ev
#           yaSSL::Integer::~Integer()
# range [0x0879ae80, 0x0879aee9]
0879ae80 +0x00:  push   %ebp
0879ae81 +0x01:  mov    %esp,%ebp
0879ae83 +0x03:  sub    $0x28,%esp
0879ae86 +0x06:  mov    0x8(%ebp),%eax
0879ae89 +0x09:  mov    %ebx,-0xc(%ebp)
0879ae8c +0x0c:  mov    %esi,-0x8(%ebp)
0879ae8f +0x0f:  mov    %edi,-0x4(%ebp)
0879ae92 +0x12:  mov    (%eax),%esi
0879ae94 +0x14:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ae99 +0x19:  add    $0xbd1cff,%ebx
0879ae9f +0x1f:  test   %esi,%esi
0879aea1 +0x21:  je     0879aecc <+0x4c>
0879aea3 +0x23:  mov    (%esi),%eax
0879aea5 +0x25:  mov    0x4(%esi),%edi
0879aea8 +0x28:  movl   $0x0,0x4(%esp)
0879aeb0 +0x30:  shl    $0x2,%eax
0879aeb3 +0x33:  mov    %eax,0x8(%esp)
0879aeb7 +0x37:  mov    %edi,(%esp)
0879aeba +0x3a:  call   0807dcc0 <_init+0x5b8>
0879aebf +0x3f:  movb   $0x0,0x4(%esp)
0879aec4 +0x44:  mov    %edi,(%esp)
0879aec7 +0x47:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879aecc +0x4c:  mov    %esi,(%esp)
0879aecf +0x4f:  movb   $0x0,0x4(%esp)
0879aed4 +0x54:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879aed9 +0x59:  mov    -0xc(%ebp),%ebx
0879aedc +0x5c:  mov    -0x8(%ebp),%esi
0879aedf +0x5f:  mov    -0x4(%ebp),%edi
0879aee2 +0x62:  mov    %ebp,%esp
0879aee4 +0x64:  pop    %ebp
0879aee5 +0x65:  ret
0879aee6 +0x66:  lea    0x0(%esi),%esi
0879aee9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Integer::~Integer @ 0x879ae80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::~Integer() */

void __thiscall yaSSL::Integer::~Integer(Integer *this)

{
  int *piVar1;
  void *__s;
  uint in_stack_ffffffd8;
  uint uVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    __s = (void *)piVar1[1];
    uVar2 = 0;
    memset(__s,0,*piVar1 << 2);
    in_stack_ffffffd8 = uVar2 & 0xffffff00;
    operator_delete__(__s,in_stack_ffffffd8);
  }
  operator_delete(piVar1,in_stack_ffffffd8 & 0xffffff00);
  return;
}
```
