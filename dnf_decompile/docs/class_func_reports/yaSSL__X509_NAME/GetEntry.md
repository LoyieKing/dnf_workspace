# GetEntry

`_ZN5yaSSL9X509_NAME8GetEntryEi`

`yaSSL::X509_NAME::GetEntry(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::X509_NAME` | `0x087523e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087523e0  _ZN5yaSSL9X509_NAME8GetEntryEi
#           yaSSL::X509_NAME::GetEntry(int)
# range [0x087523e0, 0x087524a9]
087523e0 +0x00:  push   %ebp
087523e1 +0x01:  mov    %esp,%ebp
087523e3 +0x03:  sub    $0x28,%esp
087523e6 +0x06:  mov    %esi,-0x8(%ebp)
087523e9 +0x09:  mov    0xc(%ebp),%esi
087523ec +0x0c:  mov    %ebx,-0xc(%ebp)
087523ef +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087523f4 +0x14:  add    $0xc1a7a4,%ebx
087523fa +0x1a:  mov    %edi,-0x4(%ebp)
087523fd +0x1d:  mov    0x8(%ebp),%edi
08752400 +0x20:  test   %esi,%esi
08752402 +0x22:  jns    08752418 <+0x38>
08752404 +0x24:  mov    -0xc(%ebp),%ebx
08752407 +0x27:  xor    %eax,%eax
08752409 +0x29:  mov    -0x8(%ebp),%esi
0875240c +0x2c:  mov    -0x4(%ebp),%edi
0875240f +0x2f:  mov    %ebp,%esp
08752411 +0x31:  pop    %ebp
08752412 +0x32:  ret
08752413 +0x33:  nop
08752414 +0x34:  lea    0x0(%esi,%eiz,1),%esi
08752418 +0x38:  cmp    0x4(%edi),%esi
0875241b +0x3b:  jge    08752404 <+0x24>
0875241d +0x3d:  mov    0x10(%edi),%eax
08752420 +0x40:  test   %eax,%eax
08752422 +0x42:  je     08752431 <+0x51>
08752424 +0x44:  movb   $0x0,0x4(%esp)
08752429 +0x49:  mov    %eax,(%esp)
0875242c +0x4c:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752431 +0x51:  movb   $0x0,0x4(%esp)
08752436 +0x56:  mov    0x4(%edi),%eax
08752439 +0x59:  mov    %eax,(%esp)
0875243c +0x5c:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08752441 +0x61:  mov    0x4(%edi),%edx
08752444 +0x64:  mov    (%edi),%ecx
08752446 +0x66:  sub    %esi,%edx
08752448 +0x68:  add    %esi,%ecx
0875244a +0x6a:  mov    %eax,0x10(%edi)
0875244d +0x6d:  mov    %edx,0x8(%esp)
08752451 +0x71:  mov    %ecx,0x4(%esp)
08752455 +0x75:  mov    %eax,(%esp)
08752458 +0x78:  call   0807d8a0 <_init+0x198>
0875245d +0x7d:  mov    0x4(%edi),%eax
08752460 +0x80:  mov    0x10(%edi),%ecx
08752463 +0x83:  mov    %eax,%edx
08752465 +0x85:  sub    %esi,%edx
08752467 +0x87:  cmpb   $0x0,-0x1(%ecx,%edx,1)
0875246c +0x8c:  je     08752498 <+0xb8>
0875246e +0x8e:  movb   $0x0,(%ecx,%edx,1)
08752472 +0x92:  mov    0x4(%edi),%eax
08752475 +0x95:  sub    %esi,%eax
08752477 +0x97:  mov    %eax,0xc(%edi)
0875247a +0x9a:  movl   $0x0,0x8(%edi)
08752481 +0xa1:  lea    0x8(%edi),%eax
08752484 +0xa4:  mov    -0xc(%ebp),%ebx
08752487 +0xa7:  mov    -0x8(%ebp),%esi
0875248a +0xaa:  mov    -0x4(%ebp),%edi
0875248d +0xad:  mov    %ebp,%esp
0875248f +0xaf:  pop    %ebp
08752490 +0xb0:  ret
08752491 +0xb1:  lea    0x0(%esi,%eiz,1),%esi
08752498 +0xb8:  sub    $0x1,%eax
0875249b +0xbb:  sub    %esi,%eax
0875249d +0xbd:  mov    %eax,0xc(%edi)
087524a0 +0xc0:  jmp    0875247a <+0x9a>
087524a2 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
087524a9 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::X509_NAME::GetEntry @ 0x87523e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509_NAME::GetEntry(int) */

X509_NAME * __thiscall yaSSL::X509_NAME::GetEntry(X509_NAME *this,int param_1)

{
  void *__dest;
  int iVar1;
  uint in_stack_ffffffd8;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    if (*(int *)(this + 0x10) != 0) {
      in_stack_ffffffd8 = in_stack_ffffffd8 & 0xffffff00;
      operator_delete__(*(int *)(this + 0x10),in_stack_ffffffd8);
    }
    __dest = operator_new__(*(undefined4 *)(this + 4),in_stack_ffffffd8 & 0xffffff00);
    *(void **)(this + 0x10) = __dest;
    memcpy(__dest,(void *)(*(int *)this + param_1),*(int *)(this + 4) - param_1);
    iVar1 = *(int *)(this + 4) - param_1;
    if (*(char *)(*(int *)(this + 0x10) + -1 + iVar1) == '\0') {
      *(int *)(this + 0xc) = (*(int *)(this + 4) + -1) - param_1;
    }
    else {
      *(undefined1 *)(*(int *)(this + 0x10) + iVar1) = 0;
      *(int *)(this + 0xc) = *(int *)(this + 4) - param_1;
    }
    *(undefined4 *)(this + 8) = 0;
    return this + 8;
  }
  return (X509_NAME *)0x0;
}
```
