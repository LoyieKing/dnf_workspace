# ~istrstream

`_ZNSt10istrstreamD2Ev`

`std::istrstream::~istrstream()`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086ddd10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddd10  _ZNSt10istrstreamD2Ev
#           std::istrstream::~istrstream()
# range [0x086ddd10, 0x086ddd7f]
086ddd10 +0x00:  push   %ebp
086ddd11 +0x01:  mov    %esp,%ebp
086ddd13 +0x03:  sub    $0x18,%esp
086ddd16 +0x06:  mov    %ebx,-0x8(%ebp)
086ddd19 +0x09:  mov    0xc(%ebp),%ebx
086ddd1c +0x0c:  mov    %esi,-0x4(%ebp)
086ddd1f +0x0f:  mov    0x8(%ebp),%esi
086ddd22 +0x12:  mov    (%ebx),%eax
086ddd24 +0x14:  mov    0xc(%ebx),%edx
086ddd27 +0x17:  mov    %eax,(%esi)
086ddd29 +0x19:  mov    -0xc(%eax),%eax
086ddd2c +0x1c:  mov    %edx,(%esi,%eax,1)
086ddd2f +0x1f:  lea    0x8(%esi),%eax
086ddd32 +0x22:  mov    %eax,(%esp)
086ddd35 +0x25:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086ddd3a +0x2a:  mov    0x4(%ebx),%eax
086ddd3d +0x2d:  mov    0x8(%ebx),%edx
086ddd40 +0x30:  mov    %eax,(%esi)
086ddd42 +0x32:  mov    -0xc(%eax),%eax
086ddd45 +0x35:  movl   $0x0,0x4(%esi)
086ddd4c +0x3c:  mov    %edx,(%esi,%eax,1)
086ddd4f +0x3f:  mov    -0x8(%ebp),%ebx
086ddd52 +0x42:  mov    -0x4(%ebp),%esi
086ddd55 +0x45:  mov    %ebp,%esp
086ddd57 +0x47:  pop    %ebp
086ddd58 +0x48:  ret
086ddd59 +0x49:  mov    0x4(%ebx),%edx
086ddd5c +0x4c:  mov    0x8(%ebx),%ecx
086ddd5f +0x4f:  mov    %edx,(%esi)
086ddd61 +0x51:  mov    -0xc(%edx),%edx
086ddd64 +0x54:  movl   $0x0,0x4(%esi)
086ddd6b +0x5b:  mov    %ecx,(%esi,%edx,1)
086ddd6e +0x5e:  mov    %eax,(%esp)
086ddd71 +0x61:  call   08ae3750 <_Unwind_Resume>
086ddd76 +0x66:  nop
086ddd77 +0x67:  nop
086ddd78 +0x68:  nop
086ddd79 +0x69:  nop
086ddd7a +0x6a:  nop
086ddd7b +0x6b:  nop
086ddd7c +0x6c:  nop
086ddd7d +0x6d:  nop
086ddd7e +0x6e:  nop
086ddd7f +0x6f:  nop
```

## 反编译 C

```c
// std::istrstream::~istrstream @ 0x86ddd10

/* std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddd35 to 086ddd39 has its CatchHandler @ 086ddd59 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 8));
  iVar1 = in_stack_00000008[1];
  iVar2 = in_stack_00000008[2];
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + iVar1) = iVar2;
  return;
}
```
