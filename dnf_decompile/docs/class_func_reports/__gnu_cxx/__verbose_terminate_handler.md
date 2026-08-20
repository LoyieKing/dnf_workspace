# __verbose_terminate_handler

`_ZN9__gnu_cxx27__verbose_terminate_handlerEv`

`__gnu_cxx::__verbose_terminate_handler()`

| 类 | 地址 |
|---|---|
| `__gnu_cxx` | `0x0872f5c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872f5c0  _ZN9__gnu_cxx27__verbose_terminate_handlerEv
#           __gnu_cxx::__verbose_terminate_handler()
# range [0x0872f5c0, 0x0872f7af]
0872f5c0 +0x000:  push   %ebp
0872f5c1 +0x001:  mov    %esp,%ebp
0872f5c3 +0x003:  sub    $0x48,%esp
0872f5c6 +0x006:  mov    %ebx,-0xc(%ebp)
0872f5c9 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
0872f5ce +0x00e:  add    $0xc3d5ca,%ebx
0872f5d4 +0x014:  mov    %esi,-0x8(%ebp)
0872f5d7 +0x017:  mov    %edi,-0x4(%ebp)
0872f5da +0x01a:  cmpb   $0x0,0x124c64(%ebx)
0872f5e1 +0x021:  je     0872f618 <+0x58>
0872f5e3 +0x023:  mov    -0x150(%ebx),%eax
0872f5e9 +0x029:  mov    (%eax),%eax
0872f5eb +0x02b:  movl   $0x1d,0x8(%esp)
0872f5f3 +0x033:  movl   $0x1,0x4(%esp)
0872f5fb +0x03b:  mov    %eax,0xc(%esp)
0872f5ff +0x03f:  lea    -0x66a1d6(%ebx),%eax
0872f605 +0x045:  mov    %eax,(%esp)
0872f608 +0x048:  call   0807e320 <_init+0xc18>
0872f60d +0x04d:  call   0807e170 <_init+0xa68>
0872f612 +0x052:  lea    0x0(%esi),%esi
0872f618 +0x058:  movb   $0x1,0x124c64(%ebx)
0872f61f +0x05f:  call   08734370 <__cxa_current_exception_type>
0872f624 +0x064:  test   %eax,%eax
0872f626 +0x066:  je     0872f6f8 <+0x138>
0872f62c +0x06c:  mov    0x4(%eax),%edi
0872f62f +0x06f:  xor    %eax,%eax
0872f631 +0x071:  cmpb   $0x2a,(%edi)
0872f634 +0x074:  movl   $0xffffffff,-0x1c(%ebp)
0872f63b +0x07b:  movl   $0x0,0x8(%esp)
0872f643 +0x083:  sete   %al
0872f646 +0x086:  add    %eax,%edi
0872f648 +0x088:  lea    -0x1c(%ebp),%eax
0872f64b +0x08b:  mov    %eax,0xc(%esp)
0872f64f +0x08f:  movl   $0x0,0x4(%esp)
0872f657 +0x097:  mov    %edi,(%esp)
0872f65a +0x09a:  call   08733d30 <__cxa_demangle>
0872f65f +0x09f:  mov    -0x150(%ebx),%esi
0872f665 +0x0a5:  movl   $0x30,0x8(%esp)
0872f66d +0x0ad:  movl   $0x1,0x4(%esp)
0872f675 +0x0b5:  mov    %eax,-0x2c(%ebp)
0872f678 +0x0b8:  mov    (%esi),%eax
0872f67a +0x0ba:  mov    %eax,0xc(%esp)
0872f67e +0x0be:  lea    -0x66a1a8(%ebx),%eax
0872f684 +0x0c4:  mov    %eax,(%esp)
0872f687 +0x0c7:  call   0807e320 <_init+0xc18>
0872f68c +0x0cc:  mov    -0x1c(%ebp),%edx
0872f68f +0x0cf:  test   %edx,%edx
0872f691 +0x0d1:  jne    0872f6d8 <+0x118>
0872f693 +0x0d3:  mov    (%esi),%eax
0872f695 +0x0d5:  mov    %eax,0x4(%esp)
0872f699 +0x0d9:  mov    -0x2c(%ebp),%eax
0872f69c +0x0dc:  mov    %eax,(%esp)
0872f69f +0x0df:  call   0807e720 <_init+0x1018>
0872f6a4 +0x0e4:  mov    (%esi),%eax
0872f6a6 +0x0e6:  movl   $0x2,0x8(%esp)
0872f6ae +0x0ee:  movl   $0x1,0x4(%esp)
0872f6b6 +0x0f6:  mov    %eax,0xc(%esp)
0872f6ba +0x0fa:  lea    -0x66a1b8(%ebx),%eax
0872f6c0 +0x100:  mov    %eax,(%esp)
0872f6c3 +0x103:  call   0807e320 <_init+0xc18>
0872f6c8 +0x108:  mov    -0x1c(%ebp),%eax
0872f6cb +0x10b:  test   %eax,%eax
0872f6cd +0x10d:  je     0872f6e8 <+0x128>
0872f6cf +0x10f:  call   08724be0 <__cxa_rethrow>
0872f6d4 +0x114:  lea    0x0(%esi,%eiz,1),%esi
0872f6d8 +0x118:  mov    (%esi),%eax
0872f6da +0x11a:  mov    %edi,(%esp)
0872f6dd +0x11d:  mov    %eax,0x4(%esp)
0872f6e1 +0x121:  call   0807e720 <_init+0x1018>
0872f6e6 +0x126:  jmp    0872f6a4 <+0xe4>
0872f6e8 +0x128:  mov    -0x2c(%ebp),%eax
0872f6eb +0x12b:  mov    %eax,(%esp)
0872f6ee +0x12e:  call   0807ddb0 <_init+0x6a8>
0872f6f3 +0x133:  jmp    0872f6cf <+0x10f>
0872f6f5 +0x135:  lea    0x0(%esi),%esi
0872f6f8 +0x138:  mov    -0x150(%ebx),%eax
0872f6fe +0x13e:  mov    (%eax),%eax
0872f700 +0x140:  movl   $0x2d,0x8(%esp)
0872f708 +0x148:  movl   $0x1,0x4(%esp)
0872f710 +0x150:  mov    %eax,0xc(%esp)
0872f714 +0x154:  lea    -0x66a174(%ebx),%eax
0872f71a +0x15a:  mov    %eax,(%esp)
0872f71d +0x15d:  call   0807e320 <_init+0xc18>
0872f722 +0x162:  call   0807e170 <_init+0xa68>
0872f727 +0x167:  cmp    $0x2,%edx
0872f72a +0x16a:  je     0872f73b <+0x17b>
0872f72c +0x16c:  mov    %eax,(%esp)
0872f72f +0x16f:  call   08725ce0 <__cxa_begin_catch>
0872f734 +0x174:  call   08725c30 <__cxa_end_catch>
0872f739 +0x179:  jmp    0872f722 <+0x162>
0872f73b +0x17b:  mov    %eax,(%esp)
0872f73e +0x17e:  xchg   %ax,%ax
0872f740 +0x180:  call   08725ce0 <__cxa_begin_catch>
0872f745 +0x185:  mov    (%eax),%edx
0872f747 +0x187:  mov    %eax,(%esp)
0872f74a +0x18a:  call   *0x8(%edx)
0872f74d +0x18d:  mov    %eax,%edi
0872f74f +0x18f:  mov    (%esi),%eax
0872f751 +0x191:  movl   $0xb,0x8(%esp)
0872f759 +0x199:  movl   $0x1,0x4(%esp)
0872f761 +0x1a1:  mov    %eax,0xc(%esp)
0872f765 +0x1a5:  lea    -0x66a1b5(%ebx),%eax
0872f76b +0x1ab:  mov    %eax,(%esp)
0872f76e +0x1ae:  call   0807e320 <_init+0xc18>
0872f773 +0x1b3:  mov    (%esi),%eax
0872f775 +0x1b5:  mov    %edi,(%esp)
0872f778 +0x1b8:  mov    %eax,0x4(%esp)
0872f77c +0x1bc:  call   0807e720 <_init+0x1018>
0872f781 +0x1c1:  mov    (%esi),%eax
0872f783 +0x1c3:  movl   $0xa,(%esp)
0872f78a +0x1ca:  mov    %eax,0x4(%esp)
0872f78e +0x1ce:  call   0807e4c0 <_init+0xdb8>
0872f793 +0x1d3:  jmp    0872f734 <+0x174>
0872f795 +0x1d5:  mov    %eax,%edi
0872f797 +0x1d7:  call   08725c30 <__cxa_end_catch>
0872f79c +0x1dc:  mov    %edi,(%esp)
0872f79f +0x1df:  call   08ae3750 <_Unwind_Resume>
0872f7a4 +0x1e4:  nop
0872f7a5 +0x1e5:  nop
0872f7a6 +0x1e6:  nop
0872f7a7 +0x1e7:  nop
0872f7a8 +0x1e8:  nop
0872f7a9 +0x1e9:  nop
0872f7aa +0x1ea:  nop
0872f7ab +0x1eb:  nop
0872f7ac +0x1ec:  nop
0872f7ad +0x1ed:  nop
0872f7ae +0x1ee:  nop
0872f7af +0x1ef:  nop
```

## 反编译 C

```c
// __gnu_cxx::__verbose_terminate_handler @ 0x872f5c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __gnu_cxx::__verbose_terminate_handler() */

void __gnu_cxx::__verbose_terminate_handler(void)

{
  undefined *puVar1;
  int iVar2;
  char *__s;
  char *__s_00;
  int local_20 [4];
  
  if (__verbose_terminate_handler()::terminating != '\0') {
    fwrite("terminate called recursively\n",1,0x1d,*(FILE **)PTR_stderr_0936ca48);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __verbose_terminate_handler()::terminating = 1;
  iVar2 = __cxa_current_exception_type();
  if (iVar2 != 0) {
    local_20[0] = -1;
    __s_00 = *(char **)(iVar2 + 4) + (**(char **)(iVar2 + 4) == '*');
    __s = (char *)__cxa_demangle(__s_00,0,0,local_20);
    puVar1 = PTR_stderr_0936ca48;
    fwrite("terminate called after throwing an instance of \'",1,0x30,*(FILE **)PTR_stderr_0936ca48)
    ;
    if (local_20[0] == 0) {
      fputs(__s,*(FILE **)puVar1);
    }
    else {
      fputs(__s_00,*(FILE **)puVar1);
    }
    fwrite(&DAT_08d029e0,1,2,*(FILE **)puVar1);
    if (local_20[0] == 0) {
      free(__s);
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0872f6cf to 0872f6d3 has its CatchHandler @ 0872f727 */
    __cxa_rethrow();
  }
  fwrite("terminate called without an active exception\n",1,0x2d,*(FILE **)PTR_stderr_0936ca48);
                    /* WARNING: Subroutine does not return */
  abort();
}
```
