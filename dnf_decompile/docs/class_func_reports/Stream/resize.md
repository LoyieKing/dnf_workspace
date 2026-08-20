# resize

`_ZN6Stream6resizeEi`

`Stream::resize(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bee8  _ZN6Stream6resizeEi
#           Stream::resize(int)
# range [0x0861bee8, 0x0861bf9d]
0861bee8 +0x00:  push   %ebp
0861bee9 +0x01:  mov    %esp,%ebp
0861beeb +0x03:  push   %esi
0861beec +0x04:  push   %ebx
0861beed +0x05:  sub    $0x20,%esp
0861bef0 +0x08:  mov    0xc(%ebp),%eax
0861bef3 +0x0b:  mov    %eax,(%esp)
0861bef6 +0x0e:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0861befb +0x13:  mov    %eax,-0xc(%ebp)
0861befe +0x16:  cmpl   $0x0,-0xc(%ebp)
0861bf02 +0x1a:  jne    0861bf0e <+0x26>
0861bf04 +0x1c:  mov    $0x0,%eax
0861bf09 +0x21:  jmp    0861bf96 <+0xae>
0861bf0e +0x26:  mov    0x8(%ebp),%eax
0861bf11 +0x29:  mov    %eax,(%esp)
0861bf14 +0x2c:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0861bf19 +0x31:  mov    %eax,%ebx
0861bf1b +0x33:  mov    0x8(%ebp),%eax
0861bf1e +0x36:  mov    0x8(%eax),%esi
0861bf21 +0x39:  mov    0x8(%ebp),%eax
0861bf24 +0x3c:  mov    %eax,(%esp)
0861bf27 +0x3f:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861bf2c +0x44:  lea    (%esi,%eax,1),%eax
0861bf2f +0x47:  mov    %ebx,0x8(%esp)
0861bf33 +0x4b:  mov    %eax,0x4(%esp)
0861bf37 +0x4f:  mov    -0xc(%ebp),%eax
0861bf3a +0x52:  mov    %eax,(%esp)
0861bf3d +0x55:  call   0807d8a0 <_init+0x198>
0861bf42 +0x5a:  mov    0x8(%ebp),%eax
0861bf45 +0x5d:  mov    0x8(%eax),%eax
0861bf48 +0x60:  test   %eax,%eax
0861bf4a +0x62:  je     0861bf64 <+0x7c>
0861bf4c +0x64:  mov    0x8(%ebp),%eax
0861bf4f +0x67:  mov    0x8(%eax),%eax
0861bf52 +0x6a:  test   %eax,%eax
0861bf54 +0x6c:  je     0861bf64 <+0x7c>
0861bf56 +0x6e:  mov    0x8(%ebp),%eax
0861bf59 +0x71:  mov    0x8(%eax),%eax
0861bf5c +0x74:  mov    %eax,(%esp)
0861bf5f +0x77:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
0861bf64 +0x7c:  mov    0x8(%ebp),%eax
0861bf67 +0x7f:  movl   $0x0,0x10(%eax)
0861bf6e +0x86:  mov    0x8(%ebp),%eax
0861bf71 +0x89:  mov    %eax,(%esp)
0861bf74 +0x8c:  call   0861bdd4 <_ZN6Stream6lengthEv>  ; Stream::length()
0861bf79 +0x91:  mov    0x8(%ebp),%edx
0861bf7c +0x94:  mov    %eax,0xc(%edx)
0861bf7f +0x97:  mov    0x8(%ebp),%eax
0861bf82 +0x9a:  mov    -0xc(%ebp),%edx
0861bf85 +0x9d:  mov    %edx,0x8(%eax)
0861bf88 +0xa0:  mov    0x8(%ebp),%eax
0861bf8b +0xa3:  mov    0xc(%ebp),%edx
0861bf8e +0xa6:  mov    %edx,0x4(%eax)
0861bf91 +0xa9:  mov    $0x1,%eax
0861bf96 +0xae:  add    $0x20,%esp
0861bf99 +0xb1:  pop    %ebx
0861bf9a +0xb2:  pop    %esi
0861bf9b +0xb3:  pop    %ebp
0861bf9c +0xb4:  ret
0861bf9d +0xb5:  nop
```

## 反编译 C

```c
// Stream::resize @ 0x861bee8

/* Stream::resize(int) */

undefined4 __thiscall Stream::resize(Stream *this,int param_1)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  size_t __n;
  int iVar3;
  
  __dest = operator_new__(param_1);
  if (__dest == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    __n = length(this);
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(__dest,(void *)(iVar1 + iVar3),__n);
    if ((*(int *)(this + 8) != 0) && (*(int *)(this + 8) != 0)) {
      operator_delete__(*(void **)(this + 8));
    }
    *(undefined4 *)(this + 0x10) = 0;
    uVar2 = length(this);
    *(undefined4 *)(this + 0xc) = uVar2;
    *(void **)(this + 8) = __dest;
    *(int *)(this + 4) = param_1;
    uVar2 = 1;
  }
  return uVar2;
}
```
